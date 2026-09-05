using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using System.Linq;
using AutomationTool;
using EpicGames.Core;
using UnrealBuildTool;
using AutomationScripts;

namespace Alpakit.Automation
{
	public class PD3Params
	{
		public bool CopyToGameDirectory;
		public bool StartGame;
		public string GameDirectory;
		public string LaunchGameURL;
	}

	/// <summary>
	/// Writes a small structured result file that the editor-side Alpakit UI
	/// can consume when UAT finishes. This avoids forcing users to dig through
	/// thousands of UAT lines just to find the phase and actual exception.
	/// </summary>
	internal sealed class AlpakitPackageResult
	{
		private readonly string ResultFile;
		private readonly Stopwatch Stopwatch = Stopwatch.StartNew();

		public string PluginName { get; set; } = "";
		public string Phase { get; private set; } = "Initialization";
		public string Mode { get; set; } = "Unknown";
		public int ChunkId { get; set; } = -1;

		public AlpakitPackageResult(string resultFile)
		{
			ResultFile = resultFile;
		}

		public void SetPhase(string phase)
		{
			Phase = string.IsNullOrWhiteSpace(phase)
				? "Unknown"
				: phase;
		}

		private static string GetUATLogFolder()
		{
			return Environment.GetEnvironmentVariable("uebp_LogFolder") ?? "";
		}

		private string FindMostRelevantLogFile()
		{
			try
			{
				string logFolder = GetUATLogFolder();
				if (string.IsNullOrWhiteSpace(logFolder) ||
				    !Directory.Exists(logFolder))
				{
					return "";
				}

				string[] files = Directory.GetFiles(
					logFolder,
					"*.txt",
					SearchOption.TopDirectoryOnly
				);

				if (files.Length == 0)
				{
					return "";
				}

				IEnumerable<string> preferred = files;

				if (Phase.IndexOf(
						"Cook",
						StringComparison.OrdinalIgnoreCase) >= 0)
				{
					var cookFiles = files.Where(
						file => Path.GetFileName(file).StartsWith(
							"Cook",
							StringComparison.OrdinalIgnoreCase
						)
					);

					if (cookFiles.Any())
					{
						preferred = cookFiles;
					}
				}
				else if (Phase.IndexOf(
						"Build",
						StringComparison.OrdinalIgnoreCase) >= 0)
				{
					var buildFiles = files.Where(
						file =>
						{
							string name = Path.GetFileName(file);
							return name.StartsWith(
								"UBT",
								StringComparison.OrdinalIgnoreCase
							) ||
							name.IndexOf(
								"Build",
								StringComparison.OrdinalIgnoreCase
							) >= 0;
						}
					);

					if (buildFiles.Any())
					{
						preferred = buildFiles;
					}
				}

				return preferred
					.OrderByDescending(File.GetLastWriteTimeUtc)
					.FirstOrDefault() ?? "";
			}
			catch
			{
				return "";
			}
		}

		private void Write(
			string status,
			string message,
			Exception exception)
		{
			if (string.IsNullOrWhiteSpace(ResultFile))
			{
				return;
			}

			try
			{
				string directory = Path.GetDirectoryName(ResultFile);
				if (!string.IsNullOrWhiteSpace(directory))
				{
					Directory.CreateDirectory(directory);
				}

				string logFolder = GetUATLogFolder();
				string logFile = FindMostRelevantLogFile();

				using (var writer = new JsonWriter(ResultFile))
				{
					writer.WriteObjectStart();

					writer.WriteValue("Status", status ?? "");
					writer.WriteValue("PluginName", PluginName ?? "");
					writer.WriteValue("Phase", Phase ?? "");
					writer.WriteValue("Mode", Mode ?? "");
					writer.WriteValue("ChunkId", ChunkId.ToString());
					writer.WriteValue("Message", message ?? "");
					writer.WriteValue(
						"ExceptionType",
						exception?.GetType().FullName ?? ""
					);
					writer.WriteValue(
						"Details",
						exception?.ToString() ?? ""
					);
					writer.WriteValue("LogFolder", logFolder ?? "");
					writer.WriteValue("LogFile", logFile ?? "");
					writer.WriteValue(
						"DurationSeconds",
						Stopwatch.Elapsed.TotalSeconds.ToString("F2")
					);
					writer.WriteValue(
						"TimestampUtc",
						DateTime.UtcNow.ToString("O")
					);

					writer.WriteObjectEnd();
				}
			}
			catch
			{
				// Never mask the real packaging failure because diagnostic
				// result-file writing itself failed.
			}
		}

		public void WriteSuccess()
		{
			Write(
				"Success",
				"Packaging completed successfully.",
				null
			);
		}

		public void WriteFailure(Exception exception)
		{
			Write(
				"Failure",
				exception?.Message ?? "AutomationTool failed.",
				exception
			);
		}
	}

	public class PackagePlugin : BuildCommand
	{
		private const string GameExecutableName = "PAYDAY3.exe";
		private const string SteamAppId = "1272080";
		private const string ModDeployRoot = "Mods";
		private const string DefaultBaseReleaseVersion = "SOMERELEASE1";

		private static string GetGameLaunchURL()
		{
			return $"steam://rungameid/{SteamAppId}";
		}

		private static int GetRequestedChunkId(BuildCommand cmd)
		{
			var value = cmd.ParseOptionalStringParam("ChunkId");
			if (string.IsNullOrWhiteSpace(value))
			{
				return -1;
			}

			if (!int.TryParse(value, out int chunkId) || chunkId < 0)
			{
				throw new AutomationException(
					"Invalid -ChunkId value '{0}'. Expected an integer >= 0.",
					value
				);
			}

			return chunkId;
		}

		private static string GetPluginName(BuildCommand cmd)
		{
			var pluginName = cmd.ParseRequiredStringParam("PluginName");
			if (string.IsNullOrWhiteSpace(pluginName))
			{
				throw new AutomationException(
					"-PluginName must name a mod plugin to package"
				);
			}

			return pluginName;
		}

		private static void CopyPluginToTheGameDir(
			string gameDir,
			FileReference projectFile,
			string pluginName,
			string pluginDirectory)
		{
			// PAYDAY 3 runtime layout:
			// <GameDir>/PAYDAY3/Mods/<PluginName>
			var modsDir = Path.Combine(
				gameDir,
				projectFile.GetFileNameWithoutAnyExtensions(),
				ModDeployRoot
			);
			var resultPluginDirectory = Path.Combine(modsDir, pluginName);

			if (DirectoryExists(resultPluginDirectory))
			{
				DeleteDirectory(resultPluginDirectory);
			}

			CreateDirectory(resultPluginDirectory);
			CopyDirectory_NoExceptions(pluginDirectory, resultPluginDirectory);
		}

		// --------------------------------------------------------------------
		// PASS 1: original Alpakit plugin DLC cook.
		//
		// This stays a DLC cook. It is used to produce the correctly structured
		// PAYDAY3/Mods/<PluginName> plugin shell, descriptor, binaries, config,
		// etc. We copy that staged plugin out before PASS 2 cleans the stage.
		// --------------------------------------------------------------------
		private static ProjectParams GetDLCParams(BuildCommand cmd)
		{
			var projectFileName = cmd.ParseRequiredStringParam("Project");
			LogInformation(projectFileName);

			var pluginName = GetPluginName(cmd);
			var projectFile = new FileReference(projectFileName);

			var basedOnReleaseVersion =
				cmd.ParseOptionalStringParam("BasedOnReleaseVersion");

			if (string.IsNullOrWhiteSpace(basedOnReleaseVersion))
			{
				basedOnReleaseVersion = DefaultBaseReleaseVersion;
			}

			var projectParameters = new ProjectParams(
				RawProjectPath: projectFile,
				Command: cmd,
				ClientTargetPlatforms: new List<TargetPlatformDescriptor>
				{
					new TargetPlatformDescriptor(UnrealTargetPlatform.Win64)
				},
				ClientConfigsToBuild: new List<UnrealTargetConfiguration>
				{
					UnrealTargetConfiguration.Shipping
				},

				// Original Alpakit DLC configuration.
				Cook: true,
				AdditionalCookerOptions: "-AllowUncookedAssetReferences -ini:Editor:[CookSettings]:CookContentMissingSeverity=Warning",
				UnversionedCookedContent: true,
				SkipCookingEditorContent: true,
				DLCIncludeEngineContent: false,
				Compressed: true,
				Pak: true,
				IoStore: true,
				Stage: true,
				DLCName: pluginName,
				BasedOnReleaseVersion: basedOnReleaseVersion
			);

			projectParameters.ValidateAndLog();
			return projectParameters;
		}

		// --------------------------------------------------------------------
		// PASS 2: normal project chunk cook.
		//
		// There is intentionally NO DLCName here. The point of this second pass
		// is to allow the Asset Manager / PAL to build a chunk that can contain
		// packages from multiple mount points, including both:
		//
		//     /PDML/...
		//     /Game/...
		//
		// The resulting selected pakchunk is then copied INTO the plugin DLC
		// shell created in PASS 1.
		// --------------------------------------------------------------------
		private static ProjectParams GetChunkParams(BuildCommand cmd)
		{
			var projectFileName = cmd.ParseRequiredStringParam("Project");
			var projectFile = new FileReference(projectFileName);

			var projectParameters = new ProjectParams(
				RawProjectPath: projectFile,
				Command: cmd,
				ClientTargetPlatforms: new List<TargetPlatformDescriptor>
				{
					new TargetPlatformDescriptor(UnrealTargetPlatform.Win64)
				},
				ClientConfigsToBuild: new List<UnrealTargetConfiguration>
				{
					UnrealTargetConfiguration.Shipping
				},

				Build: true,
				SkipBuildEditor: true,
				Cook: true,
				AdditionalCookerOptions: "-AllowUncookedAssetReferences -ini:Editor:[CookSettings]:CookContentMissingSeverity=Warning",
				UnversionedCookedContent: true,
				SkipCookingEditorContent: true,
				Compressed: true,
				Pak: true,
				IoStore: true,
				Stage: true,

				// Required for Asset Manager chunk manifests.
				Manifests: true
			);

			projectParameters.ValidateAndLog();
			return projectParameters;
		}

		private static void TryUpdateModulesFile(
			string filePath,
			string targetBuildId)
		{
			try
			{
				var modulesObject =
					JsonObject.Read(new FileReference(filePath));
				var modulesSubObject =
					modulesObject.GetObjectField("Modules");

				using (var writer = new JsonWriter(filePath))
				{
					writer.WriteObjectStart();
					writer.WriteValue("BuildId", targetBuildId);

					writer.WriteObjectStart("Modules");
					foreach (var moduleName in modulesSubObject.KeyNames)
					{
						var modulePath =
							modulesSubObject.GetStringField(moduleName);
						writer.WriteValue(moduleName, modulePath);
					}

					writer.WriteObjectEnd();
					writer.WriteObjectEnd();
				}
			}
			catch (Exception ex)
			{
				throw new AutomationException(
					"Failed to update modules file '{0}': {1}",
					filePath,
					ex.Message
				);
			}
		}

		private static void UpdateModulesBuildId(
			string stagingDir,
			string targetBuildId)
		{
			var foundFiles = FindFiles("*.modules", true, stagingDir);

			foreach (var modulesFile in foundFiles)
			{
				TryUpdateModulesFile(modulesFile, targetBuildId);
			}
		}

		private static IReadOnlyList<DeploymentContext>
			CreateDeploymentContexts(ProjectParams projectParams)
		{
			var contexts = new List<DeploymentContext>();

			if (!projectParams.NoClient)
			{
				contexts.AddRange(
					Project.CreateDeploymentContext(projectParams, false)
				);
			}

			if (projectParams.DedicatedServer)
			{
				contexts.AddRange(
					Project.CreateDeploymentContext(projectParams, true)
				);
			}

			return contexts;
		}

		private static void RemapCookedPluginsContentPaths(
			ProjectParams projectParams,
			IEnumerable<DeploymentContext> deploymentContexts)
		{
			foreach (var deploymentContext in deploymentContexts)
			{
				// Keep the original Alpakit remap. PASS 1 is still a real
				// plugin DLC and therefore still needs its runtime path moved to:
				//
				// ../../../PAYDAY3/Mods/<PluginName>
				var projectName =
					projectParams.RawProjectPath
						.GetFileNameWithoutAnyExtensions();

				string dlcSourceDirectory;

				if (projectParams.DLCFile.IsUnderDirectory(
					deploymentContext.EngineRoot))
				{
					dlcSourceDirectory = Path.Combine(
						"Engine",
						projectParams.DLCFile.Directory.ParentDirectory
							.MakeRelativeTo(deploymentContext.EngineRoot)
					);
				}
				else if (projectParams.DLCFile.IsUnderDirectory(
					deploymentContext.ProjectRoot))
				{
					dlcSourceDirectory = Path.Combine(
						projectName,
						projectParams.DLCFile.Directory.ParentDirectory
							.MakeRelativeTo(deploymentContext.ProjectRoot)
					);
				}
				else
				{
					throw new Exception(
						"Unknown DLC remap for DLC " +
						projectParams.DLCFile.GetFileNameWithoutExtension()
					);
				}

				var destinationModsDir =
					Path.Combine(projectName, ModDeployRoot);

				deploymentContext.RemapDirectories.Add(
					Tuple.Create(
						new StagedDirectoryReference(dlcSourceDirectory),
						new StagedDirectoryReference(destinationModsDir)
					)
				);
			}
		}

		public static void CopyBuildToStagingDirectory(
			ProjectParams Params,
			IReadOnlyList<DeploymentContext> deploymentContexts)
		{
			var platformCares =
				Params.ClientTargetPlatformInstances[0].RequiresPak(Params);

			var requiresPak =
				platformCares == Platform.PakType.Always ||
				(Params.Pak && platformCares != Platform.PakType.Never);

			if (requiresPak || (Params.Stage && !Params.SkipStage))
			{
				LogInformation(
					"********** STAGE COMMAND STARTED **********"
				);

				foreach (var sc in deploymentContexts)
				{
					Project.CreateStagingManifest(Params, sc);
					Project.CleanStagingDirectory(Params, sc);
				}

				foreach (var sc in deploymentContexts)
				{
					Project.ApplyStagingManifest(Params, sc);
				}

				LogInformation(
					"********** STAGE COMMAND COMPLETED **********"
				);
			}
		}

		private static string GetPluginPathRelativeToStageRoot(
			ProjectParams projectParams)
		{
			var projectName =
				projectParams.RawProjectPath
					.GetFileNameWithoutAnyExtensions();

			var dlcName =
				projectParams.DLCFile.GetFileNameWithoutAnyExtensions();

			return Path.Combine(
				projectName,
				ModDeployRoot,
				dlcName
			);
		}

		private static string GetWorkingPluginDirectory(
			ProjectParams projectParams,
			string pluginName)
		{
			var projectDirectory =
				Path.GetDirectoryName(
					projectParams.RawProjectPath.ToString()
				);

			return Path.Combine(
				projectDirectory,
				"Saved",
				"Alpakit",
				"TwoStage",
				pluginName
			);
		}

		private static string CopyDLCPluginToWorkingDirectory(
			ProjectParams dlcParams,
			IEnumerable<DeploymentContext> deploymentContexts,
			string pluginName)
		{
			var workingPluginDirectory =
				GetWorkingPluginDirectory(dlcParams, pluginName);

			if (DirectoryExists(workingPluginDirectory))
			{
				DeleteDirectory(workingPluginDirectory);
			}

			DeploymentContext sourceContext = null;
			foreach (var context in deploymentContexts)
			{
				if (context.FinalCookPlatform == "Windows")
				{
					sourceContext = context;
					break;
				}

				if (sourceContext == null)
				{
					sourceContext = context;
				}
			}

			if (sourceContext == null)
			{
				throw new AutomationException(
					"No deployment context was created for the DLC pass."
				);
			}

			var stagedPluginDirectory = Path.Combine(
				sourceContext.StageDirectory.ToString(),
				GetPluginPathRelativeToStageRoot(dlcParams)
			);

			if (!DirectoryExists(stagedPluginDirectory))
			{
				throw new AutomationException(
					"PASS 1 completed but the staged plugin directory " +
					"was not found: {0}",
					stagedPluginDirectory
				);
			}

			CreateDirectory(workingPluginDirectory);
			CopyDirectory_NoExceptions(
				stagedPluginDirectory,
				workingPluginDirectory
			);

			LogInformation(
				"PASS 1: copied plugin DLC shell to working directory: {0}",
				workingPluginDirectory
			);

			return workingPluginDirectory;
		}

		private static bool IsContainerFile(string filePath)
		{
			var extension =
				Path.GetExtension(filePath).ToLowerInvariant();

			return extension == ".pak" ||
			       extension == ".utoc" ||
			       extension == ".ucas" ||
			       extension == ".sig";
		}

		private static string GetPass1ContainerBaseRelativePath(
			string workingPluginDirectory)
		{
			/*
			 * PASS 1's plugin DLC normally produces something like:
			 *
			 *     Content/Paks/Windows/PDML-Windows.pak
			 *     Content/Paks/Windows/PDML-Windows.utoc
			 *     Content/Paks/Windows/PDML-Windows.ucas
			 *
			 * Return the path relative to Content/Paks WITHOUT the extension:
			 *
			 *     Windows/PDML-Windows
			 *
			 * PASS 2's IoStore files will be copied back to this exact
			 * directory/base name.
			 */
			var paksDirectory = Path.Combine(
				workingPluginDirectory,
				"Content",
				"Paks"
			);

			if (!DirectoryExists(paksDirectory))
			{
				return null;
			}

			// Prefer the UTOC because it is the file we are specifically
			// replacing with the PASS 2 IoStore container.
			string[] preferredExtensions =
			{
				".utoc",
				".ucas",
				".pak"
			};

			foreach (var preferredExtension in preferredExtensions)
			{
				foreach (var file in Directory.GetFiles(
					paksDirectory,
					"*",
					SearchOption.AllDirectories))
				{
					if (!Path.GetExtension(file).Equals(
						preferredExtension,
						StringComparison.OrdinalIgnoreCase))
					{
						continue;
					}

					var relativeFile =
						Path.GetRelativePath(paksDirectory, file);

					var relativeDirectory =
						Path.GetDirectoryName(relativeFile) ?? "";

					var baseName =
						Path.GetFileNameWithoutExtension(relativeFile);

					var relativeBase = string.IsNullOrWhiteSpace(
						relativeDirectory)
						? baseName
						: Path.Combine(relativeDirectory, baseName);

					LogInformation(
						"PASS 1 plugin container base captured: {0}",
						relativeBase
					);

					return relativeBase;
				}
			}

			return null;
		}

		private static string GetPatchContainerBaseName(string baseName)
		{
			if (string.IsNullOrWhiteSpace(baseName))
			{
				throw new AutomationException(
					"Cannot build a _P container name from an empty base name."
				);
			}

			// Normalise any accidental repeated suffixes first, then append one.
			while (baseName.EndsWith(
				"_P",
				StringComparison.OrdinalIgnoreCase))
			{
				baseName = baseName.Substring(0, baseName.Length - 2);
			}

			return baseName + "_P";
		}

		private static string GetPatchContainerFileName(string filePath)
		{
			var baseName = Path.GetFileNameWithoutExtension(filePath);
			var extension = Path.GetExtension(filePath);

			// IoStore partition files use names such as Foo-Windows_s1.ucas.
			// Insert _P before the partition suffix, not after it.
			string partitionSuffix = "";
			var partitionIndex = baseName.LastIndexOf(
				"_s",
				StringComparison.OrdinalIgnoreCase);

			if (partitionIndex >= 0 && partitionIndex + 2 < baseName.Length)
			{
				bool allDigits = true;
				for (int index = partitionIndex + 2; index < baseName.Length; index++)
				{
					if (!char.IsDigit(baseName[index]))
					{
						allDigits = false;
						break;
					}
				}

				if (allDigits)
				{
					partitionSuffix = baseName.Substring(partitionIndex);
					baseName = baseName.Substring(0, partitionIndex);
				}
			}

			return GetPatchContainerBaseName(baseName) + partitionSuffix + extension;
		}

		private static void ApplyPatchSuffixToPluginContainers(
			string pluginDirectory)
		{
			var paksDirectory = Path.Combine(
				pluginDirectory,
				"Content",
				"Paks"
			);

			if (!DirectoryExists(paksDirectory))
			{
				return;
			}

			foreach (var file in Directory.GetFiles(
				paksDirectory,
				"*",
				SearchOption.AllDirectories))
			{
				var extension = Path.GetExtension(file).ToLowerInvariant();
				if (extension != ".pak" &&
				    extension != ".utoc" &&
				    extension != ".ucas" &&
				    extension != ".sig")
				{
					continue;
				}

				var desiredName = GetPatchContainerFileName(file);
				var currentName = Path.GetFileName(file);

				if (string.Equals(
					currentName,
					desiredName,
					StringComparison.OrdinalIgnoreCase))
				{
					continue;
				}

				var destination = Path.Combine(
					Path.GetDirectoryName(file),
					desiredName
				);

				if (FileExists(destination))
				{
					DeleteFile(destination);
				}

				File.Move(file, destination);

				LogInformation(
					"Applied PAYDAY 3 _P suffix: {0} -> {1}",
					currentName,
					desiredName
				);
			}
		}

		private static void RenamePass1PakFilesToPatchSuffix(
			string workingPluginDirectory,
			string relativeContainerBase,
			string targetBaseName)
		{
			var paksDirectory = Path.Combine(
				workingPluginDirectory,
				"Content",
				"Paks"
			);

			var relativeDirectory =
				Path.GetDirectoryName(relativeContainerBase) ?? "";

			var directory = string.IsNullOrWhiteSpace(relativeDirectory)
				? paksDirectory
				: Path.Combine(paksDirectory, relativeDirectory);

			if (!DirectoryExists(directory))
			{
				return;
			}

			var originalBaseName =
				Path.GetFileName(relativeContainerBase);

			foreach (var extension in new[] { ".pak", ".sig" })
			{
				var sourceFile = Path.Combine(
					directory,
					originalBaseName + extension
				);

				if (!FileExists(sourceFile))
				{
					continue;
				}

				var destinationFile = Path.Combine(
					directory,
					targetBaseName + extension
				);

				if (FileExists(destinationFile))
				{
					DeleteFile(destinationFile);
				}

				File.Move(sourceFile, destinationFile);

				LogInformation(
					"Renamed PASS 1 plugin file: {0} -> {1}",
					Path.GetFileName(sourceFile),
					Path.GetFileName(destinationFile)
				);
			}
		}

		private static void RemovePass1IoStoreContainers(
			string workingPluginDirectory)
		{
			/*
			 * IMPORTANT:
			 *
			 * Keep PASS 1's .pak and .sig.
			 *
			 * In an IoStore plugin DLC the .pak contains the normal plugin
			 * staging payload such as AssetRegistry.bin and config/ini files.
			 * Replacing it with PASS 2's project chunk .pak loses that plugin
			 * metadata.
			 *
			 * Only the PASS 1 IoStore package data (.utoc/.ucas) is replaced.
			 */
			var paksDirectory = Path.Combine(
				workingPluginDirectory,
				"Content",
				"Paks"
			);

			if (!DirectoryExists(paksDirectory))
			{
				return;
			}

			foreach (var file in Directory.GetFiles(
				paksDirectory,
				"*",
				SearchOption.AllDirectories))
			{
				var extension =
					Path.GetExtension(file).ToLowerInvariant();

				if (extension != ".utoc" &&
				    extension != ".ucas")
				{
					continue;
				}

				LogInformation(
					"Removing PASS 1 IoStore container before replacement: {0}",
					file
				);

				File.Delete(file);
			}
		}

		private static List<string> FindChunkContainerFiles(
			IEnumerable<DeploymentContext> deploymentContexts,
			int chunkId)
		{
			var result = new List<string>();
			var prefix = "pakchunk" + chunkId + "-";

			foreach (var context in deploymentContexts)
			{
				var stageRoot = context.StageDirectory.ToString();

				if (!DirectoryExists(stageRoot))
				{
					continue;
				}

				foreach (var file in Directory.GetFiles(
					stageRoot,
					"*",
					SearchOption.AllDirectories))
				{
					var extension =
						Path.GetExtension(file).ToLowerInvariant();

					// PASS 2 contributes ONLY its IoStore package data.
					// PASS 1's plugin .pak is intentionally preserved.
					if (extension != ".utoc" &&
					    extension != ".ucas")
					{
						continue;
					}

					var fileName = Path.GetFileName(file);
					if (!fileName.StartsWith(
						prefix,
						StringComparison.OrdinalIgnoreCase))
					{
						continue;
					}

					bool alreadyAdded = false;
					foreach (var existing in result)
					{
						if (string.Equals(
							Path.GetFileName(existing),
							fileName,
							StringComparison.OrdinalIgnoreCase))
						{
							alreadyAdded = true;
							break;
						}
					}

					if (!alreadyAdded)
					{
						result.Add(file);
					}
				}
			}

			return result;
		}

		private static string GetRenamedChunkFileName(
			string sourceFile,
			int chunkId,
			string targetBaseName)
		{
			/*
			 * Examples:
			 *
			 * pakchunk9999-Windows.utoc
			 *     -> PDML-Windows.utoc
			 *
			 * pakchunk9999-Windows.ucas
			 *     -> PDML-Windows.ucas
			 *
			 * pakchunk9999-Windows_s1.ucas
			 *     -> PDML-Windows_s1.ucas
			 *
			 * Keeping the suffix makes this work if IoStore creates partitioned
			 * UCAS files.
			 */
			var sourceName = Path.GetFileNameWithoutExtension(sourceFile);
			var extension = Path.GetExtension(sourceFile);

			var sourceBasePrefix =
				"pakchunk" + chunkId + "-Windows";

			string suffix = "";

			if (sourceName.StartsWith(
				sourceBasePrefix,
				StringComparison.OrdinalIgnoreCase))
			{
				suffix = sourceName.Substring(sourceBasePrefix.Length);
			}
			else
			{
				// Fallback for a platform naming variation. Keep any text after
				// the first platform separator if possible.
				var dashIndex = sourceName.IndexOf('-');
				if (dashIndex >= 0)
				{
					var secondDashIndex =
						sourceName.IndexOf('-', dashIndex + 1);

					if (secondDashIndex >= 0)
					{
						suffix =
							sourceName.Substring(secondDashIndex + 1);
					}
				}
			}

			return targetBaseName + suffix + extension;
		}

		private static void InjectChunkIntoPluginDLC(
			string workingPluginDirectory,
			IEnumerable<DeploymentContext> chunkContexts,
			int chunkId,
			string pluginName)
		{
			var chunkFiles =
				FindChunkContainerFiles(chunkContexts, chunkId);

			if (chunkFiles.Count == 0)
			{
				throw new AutomationException(
					"PASS 2 did not produce any .utoc/.ucas files for " +
					"Chunk {0}. Check that Generate Chunks is enabled and " +
					"that the PAL is registered by Asset Manager.",
					chunkId
				);
			}

			bool hasUtoc = false;
			bool hasUcas = false;

			foreach (var file in chunkFiles)
			{
				var extension =
					Path.GetExtension(file).ToLowerInvariant();

				if (extension == ".utoc")
					hasUtoc = true;
				if (extension == ".ucas")
					hasUcas = true;
			}

			if (!hasUtoc || !hasUcas)
			{
				throw new AutomationException(
					"Chunk {0} was found, but its IoStore pair was incomplete. " +
					"Found UTOC={1}, UCAS={2}.",
					chunkId,
					hasUtoc,
					hasUcas
				);
			}

			var paksDirectory = Path.Combine(
				workingPluginDirectory,
				"Content",
				"Paks"
			);

			CreateDirectory(paksDirectory);

			/*
			 * Reuse PASS 1's exact relative location/base name.
			 *
			 * If PASS 1 was:
			 *
			 *     Content/Paks/Windows/PDML-Windows.utoc
			 *
			 * PASS 2 will replace it at exactly that path.
			 */
			var relativeContainerBase =
				GetPass1ContainerBaseRelativePath(
					workingPluginDirectory
				);

			if (string.IsNullOrWhiteSpace(relativeContainerBase))
			{
				relativeContainerBase = Path.Combine(
					"Windows",
					pluginName + "-Windows"
				);

				LogWarning(
					"Could not find PASS 1 container naming. Falling back to: {0}",
					relativeContainerBase
				);
			}

			var targetRelativeDirectory =
				Path.GetDirectoryName(relativeContainerBase) ?? "";

			var originalBaseName =
				Path.GetFileName(relativeContainerBase);

			var targetBaseName =
				GetPatchContainerBaseName(originalBaseName);

			LogInformation(
				"Final PAYDAY 3 container base name: {0} -> {1}",
				originalBaseName,
				targetBaseName
			);

			var targetDirectory = string.IsNullOrWhiteSpace(
				targetRelativeDirectory)
				? paksDirectory
				: Path.Combine(
					paksDirectory,
					targetRelativeDirectory
				);

			CreateDirectory(targetDirectory);

			// Keep the preserved PASS 1 plugin .pak/.sig on the same patch-style
			// base name as the replacement .utoc/.ucas.
			RenamePass1PakFilesToPatchSuffix(
				workingPluginDirectory,
				relativeContainerBase,
				targetBaseName
			);

			/*
			 * Keep PASS 1:
			 *
			 *     .pak  -> AssetRegistry.bin, ini/config payload, etc.
			 *     .sig  -> matching PASS 1 pak signature if present.
			 *
			 * Replace only:
			 *
			 *     .utoc
			 *     .ucas
			 */
			RemovePass1IoStoreContainers(
				workingPluginDirectory
			);

			foreach (var sourceFile in chunkFiles)
			{
				var replacementName =
					GetRenamedChunkFileName(
						sourceFile,
						chunkId,
						targetBaseName
					);

				var destinationFile = Path.Combine(
					targetDirectory,
					replacementName
				);

				File.Copy(
					sourceFile,
					destinationFile,
					true
				);

				LogInformation(
					"PASS 2: replaced plugin DLC IoStore container with " +
					"Chunk {0}: {1} -> {2}",
					chunkId,
					Path.GetFileName(sourceFile),
					Path.GetRelativePath(
						paksDirectory,
						destinationFile
					)
				);
			}

			// Final safety pass: regardless of what PASS 1/PASS 2 called the files,
			// force the deployed/archive container set to use exactly one _P suffix.
			ForceFinalPatchContainerNames(
				targetDirectory,
				originalBaseName,
				targetBaseName,
				chunkId
			);

			LogInformation(
				"PASS 1 plugin .pak preserved so AssetRegistry.bin and " +
				"plugin ini/config files remain in the final mod."
			);
		}

		private static void ForceFinalPatchContainerNames(
			string targetDirectory,
			string originalBaseName,
			string targetBaseName,
			int chunkId)
		{
			if (!DirectoryExists(targetDirectory))
			{
				throw new AutomationException(
					"Final plugin container directory does not exist: {0}",
					targetDirectory
				);
			}

			foreach (var file in Directory.GetFiles(
				targetDirectory,
				"*",
				SearchOption.TopDirectoryOnly))
			{
				var extension = Path.GetExtension(file).ToLowerInvariant();
				if (extension != ".pak" &&
				    extension != ".utoc" &&
				    extension != ".ucas" &&
				    extension != ".sig")
				{
					continue;
				}

				var fileBase = Path.GetFileNameWithoutExtension(file);
				string desiredBase = null;

				if (fileBase.Equals(
					originalBaseName,
					StringComparison.OrdinalIgnoreCase))
				{
					desiredBase = targetBaseName;
				}
				else if (fileBase.StartsWith(
					"pakchunk" + chunkId + "-Windows",
					StringComparison.OrdinalIgnoreCase))
				{
					var chunkPrefix = "pakchunk" + chunkId + "-Windows";
					var suffix = fileBase.Substring(chunkPrefix.Length);
					desiredBase = targetBaseName + suffix;
				}
				else if (fileBase.StartsWith(
					targetBaseName,
					StringComparison.OrdinalIgnoreCase))
				{
					// Already correct, including any partition suffix such as _s1.
					continue;
				}

				if (string.IsNullOrWhiteSpace(desiredBase))
				{
					continue;
				}

				var destination = Path.Combine(
					targetDirectory,
					desiredBase + extension
				);

				if (string.Equals(
					file,
					destination,
					StringComparison.OrdinalIgnoreCase))
				{
					continue;
				}

				if (FileExists(destination))
				{
					DeleteFile(destination);
				}

				File.Move(file, destination);

				LogInformation(
					"Forced final container name: {0} -> {1}",
					Path.GetFileName(file),
					Path.GetFileName(destination)
				);
			}

			var expectedPak = Path.Combine(
				targetDirectory,
				targetBaseName + ".pak");
			var expectedUtoc = Path.Combine(
				targetDirectory,
				targetBaseName + ".utoc");
			var expectedUcas = Path.Combine(
				targetDirectory,
				targetBaseName + ".ucas");

			if (!FileExists(expectedPak) ||
			    !FileExists(expectedUtoc) ||
			    !FileExists(expectedUcas))
			{
				throw new AutomationException(
					"Final _P container verification failed. Expected: {0}, {1}, {2}",
					expectedPak,
					expectedUtoc,
					expectedUcas
				);
			}

			LogInformation(
				"Verified final _P container set: {0}",
				targetBaseName
			);
		}

		private static void ArchiveWorkingPlugin(
			ProjectParams dlcParams,
			string workingPluginDirectory,
			string pluginName,
			string finalCookPlatform)
		{
			var baseArchiveDirectory = CombinePaths(
				Path.GetDirectoryName(
					dlcParams.RawProjectPath.ToString()
				),
				"Saved",
				"ArchivedPlugins"
			);

			var archiveDirectory = Path.Combine(
				baseArchiveDirectory,
				finalCookPlatform
			);
			CreateDirectory(archiveDirectory);

			var zipFilePath = Path.Combine(
				archiveDirectory,
				pluginName + ".zip"
			);

			if (FileExists(zipFilePath))
			{
				DeleteFile(zipFilePath);
			}

			ZipFile.CreateFromDirectory(
				workingPluginDirectory,
				zipFilePath
			);

			LogInformation(
				"Archived two-stage plugin: {0}",
				zipFilePath
			);
		}

		private static void DeployWorkingPlugin(
			ProjectParams dlcParams,
			PD3Params pd3Params,
			string pluginName,
			string workingPluginDirectory)
		{
			if (!pd3Params.CopyToGameDirectory)
			{
				return;
			}

			if (string.IsNullOrWhiteSpace(pd3Params.GameDirectory))
			{
				throw new AutomationException(
					"-CopyToGameDir was specified, but no game directory " +
					"path has been provided"
				);
			}

			CopyPluginToTheGameDir(
				pd3Params.GameDirectory,
				dlcParams.RawProjectPath,
				pluginName,
				workingPluginDirectory
			);
		}

		private static void ArchivePluginProject(
			ProjectParams projectParams,
			IEnumerable<DeploymentContext> deploymentContexts)
		{
			var baseArchiveDirectory = CombinePaths(
				Path.GetDirectoryName(
					projectParams.RawProjectPath.ToString()
				),
				"Saved",
				"ArchivedPlugins"
			);

			foreach (var deploymentContext in deploymentContexts)
			{
				var stageRootDirectory =
					deploymentContext.StageDirectory;

				var relativePluginPath =
					GetPluginPathRelativeToStageRoot(projectParams);

				var stagePluginDirectory = Path.Combine(
					stageRootDirectory.ToString(),
					relativePluginPath
				);

				var archiveDirectory = Path.Combine(
					baseArchiveDirectory,
					deploymentContext.FinalCookPlatform
				);
				CreateDirectory(archiveDirectory);

				var zipFilePath = Path.Combine(
					archiveDirectory,
					projectParams.DLCFile
						.GetFileNameWithoutAnyExtensions() + ".zip"
				);

				if (FileExists(zipFilePath))
				{
					DeleteFile(zipFilePath);
				}

				ZipFile.CreateFromDirectory(
					stagePluginDirectory,
					zipFilePath
				);
			}
		}

		private static void DeployPluginProject(
			ProjectParams projectParams,
			IEnumerable<DeploymentContext> deploymentContexts,
			PD3Params pd3Params)
		{
			foreach (var deploymentContext in deploymentContexts)
			{
				if (pd3Params.CopyToGameDirectory &&
				    deploymentContext.FinalCookPlatform == "Windows")
				{
					var stageRootDirectory =
						deploymentContext.StageDirectory;

					var relativePluginPath =
						GetPluginPathRelativeToStageRoot(projectParams);

					var stagePluginDirectory = Path.Combine(
						stageRootDirectory.ToString(),
						relativePluginPath
					);

					if (pd3Params.GameDirectory == null)
					{
						throw new AutomationException(
							"-CopyToGameDir was specified, but no game " +
							"directory path has been provided"
						);
					}

					CopyPluginToTheGameDir(
						pd3Params.GameDirectory,
						projectParams.RawProjectPath,
						projectParams.DLCFile
							.GetFileNameWithoutAnyExtensions(),
						stagePluginDirectory
					);
				}
			}
		}

		private static void CleanStagingDirectories(
			IEnumerable<DeploymentContext> deploymentContexts)
		{
			if (deploymentContexts == null)
				return;

			foreach (var deploymentContext in deploymentContexts)
			{
				if (DirectoryExists(
					deploymentContext.StageDirectory.ToString()))
				{
					DeleteDirectory(
						deploymentContext.StageDirectory
					);
				}
			}
		}

		private static void CleanWorkingPluginDirectory(
			string workingPluginDirectory)
		{
			if (!string.IsNullOrWhiteSpace(workingPluginDirectory) &&
			    DirectoryExists(workingPluginDirectory))
			{
				DeleteDirectory(workingPluginDirectory);
			}
		}

		private static void ExecuteLegacyCook(
			BuildCommand cmd,
			PD3Params pd3Params,
			AlpakitPackageResult result)
		{
			result.SetPhase("Single-stage: Prepare DLC cook");
			var projectParams = GetDLCParams(cmd);

			result.SetPhase("Single-stage: Cook");
			Project.Cook(projectParams);

			var deploymentContexts =
				CreateDeploymentContexts(projectParams);

			RemapCookedPluginsContentPaths(
				projectParams,
				deploymentContexts
			);

			try
			{
				result.SetPhase("Single-stage: Stage");
				CopyBuildToStagingDirectory(
					projectParams,
					deploymentContexts
				);

				result.SetPhase("Single-stage: Finalize containers");

				// Legacy/single-pass mods never enter PASS 2, so apply the
				// PAYDAY 3 patch suffix directly to their staged plugin containers.
				foreach (var deploymentContext in deploymentContexts)
				{
					var stagedPluginDirectory = Path.Combine(
						deploymentContext.StageDirectory.ToString(),
						GetPluginPathRelativeToStageRoot(projectParams)
					);

					ApplyPatchSuffixToPluginContainers(stagedPluginDirectory);
				}

				result.SetPhase("Archive mod");
				ArchivePluginProject(
					projectParams,
					deploymentContexts
				);

				result.SetPhase("Deploy mod to PAYDAY 3");
				DeployPluginProject(
					projectParams,
					deploymentContexts,
					pd3Params
				);
			}
			finally
			{
				CleanStagingDirectories(deploymentContexts);
			}
		}

		private static void ExecuteTwoStageCook(
			BuildCommand cmd,
			PD3Params pd3Params,
			string pluginName,
			int chunkId,
			AlpakitPackageResult result)
		{
			IReadOnlyList<DeploymentContext> dlcContexts = null;
			IReadOnlyList<DeploymentContext> chunkContexts = null;
			string workingPluginDirectory = null;

			try
			{
				// ============================================================
				// PASS 1
				// ============================================================
				LogInformation(
					"=================================================="
				);
				LogInformation(
					"PASS 1/2: Plugin DLC cook for {0}",
					pluginName
				);
				LogInformation(
					"=================================================="
				);

				result.SetPhase("PASS 1: Prepare plugin DLC cook");
				var dlcParams = GetDLCParams(cmd);

				result.SetPhase("PASS 1: Cook plugin DLC");
				Project.Cook(dlcParams);

				dlcContexts =
					CreateDeploymentContexts(dlcParams);

				RemapCookedPluginsContentPaths(
					dlcParams,
					dlcContexts
				);

				result.SetPhase("PASS 1: Stage plugin DLC");
				CopyBuildToStagingDirectory(
					dlcParams,
					dlcContexts
				);

				result.SetPhase("PASS 1: Preserve plugin shell");
				workingPluginDirectory =
					CopyDLCPluginToWorkingDirectory(
						dlcParams,
						dlcContexts,
						pluginName
					);

				// PASS 2 uses the same standard staging root, so the plugin
				// shell must be outside it before continuing.
				CleanStagingDirectories(dlcContexts);

				// ============================================================
				// PASS 2
				// ============================================================
				LogInformation(
					"=================================================="
				);
				LogInformation(
					"PASS 2/2: PAL chunk cook for Chunk {0}",
					chunkId
				);
				LogInformation(
					"=================================================="
				);

				result.SetPhase("PASS 2: Prepare PAL chunk cook");
				var chunkParams = GetChunkParams(cmd);

				/*
				 * Normal project staging needs a non-editor target receipt and its
				 * referenced executable. A modding project often only has
				 * PAYDAY3Editor built, which causes:
				 *
				 *   Missing PAYDAY3-Win64-Shipping.target
				 *   Missing UnrealGame binary
				 *
				 * Ensure the cooked client target receipt exists before staging. If it
				 * is already present, do not invoke UBT at all. If it is missing, build
				 * the game/Shipping target while explicitly skipping the Editor target.
				 * Nothing from
				 * this executable is copied into the final plugin DLC; we only take the
				 * selected PASS 2 container files.
				 */
				LogInformation(
					"PASS 2: ensuring the Shipping game target/receipt exists before staging"
				);

				var projectDirectory = Path.GetDirectoryName(
					chunkParams.RawProjectPath.ToString()
				);

				var projectName =
					chunkParams.RawProjectPath
						.GetFileNameWithoutAnyExtensions();

				var shippingReceipt = Path.Combine(
					projectDirectory,
					"Binaries",
					"Win64",
					projectName + "-Win64-Shipping.target"
				);

				if (!FileExists(shippingReceipt))
				{
					LogInformation(
						"PASS 2: Shipping receipt does not exist. Building game target only: {0}",
						shippingReceipt
					);

					/*
					 * UE 5.5's ProjectBuildTargets enum does not expose a Client
					 * member. Use All, but GetChunkParams sets SkipBuildEditor=true,
					 * so Project.Build will build the cooked game/Shipping target
					 * without rebuilding PAYDAY3Editor.
					 *
					 * PASS 2 only needs the game/Shipping receipt for staging.
					 */
					result.SetPhase("PASS 2: Build Shipping target");
					Project.Build(
						cmd,
						chunkParams,
						-1,
						ProjectBuildTargets.All
					);
				}
				else
				{
					LogInformation(
						"PASS 2: Shipping receipt already exists. Skipping game build: {0}",
						shippingReceipt
					);
				}

				result.SetPhase("PASS 2: Cook PAL chunk");
				Project.Cook(chunkParams);

				chunkContexts =
					CreateDeploymentContexts(chunkParams);

				// DO NOT call RemapCookedPluginsContentPaths here.
				// PASS 2 is a normal project/chunk cook, not DLC.
				result.SetPhase("PASS 2: Stage PAL chunk");
				CopyBuildToStagingDirectory(
					chunkParams,
					chunkContexts
				);

				result.SetPhase("PASS 2: Merge IoStore containers");
				InjectChunkIntoPluginDLC(
					workingPluginDirectory,
					chunkContexts,
					chunkId,
					pluginName
				);

				string finalCookPlatform = "Windows";
				foreach (var context in dlcContexts)
				{
					if (!string.IsNullOrWhiteSpace(
						context.FinalCookPlatform))
					{
						finalCookPlatform =
							context.FinalCookPlatform;

						if (finalCookPlatform == "Windows")
							break;
					}
				}

				// Archive/deploy the PASS 1 plugin shell after PASS 2's
				// pak/utoc/ucas have been injected into Content/Paks.
				result.SetPhase("Archive mod");
				ArchiveWorkingPlugin(
					dlcParams,
					workingPluginDirectory,
					pluginName,
					finalCookPlatform
				);

				result.SetPhase("Deploy mod to PAYDAY 3");
				DeployWorkingPlugin(
					dlcParams,
					pd3Params,
					pluginName,
					workingPluginDirectory
				);
			}
			finally
			{
				CleanStagingDirectories(dlcContexts);
				CleanStagingDirectories(chunkContexts);
				CleanWorkingPluginDirectory(
					workingPluginDirectory
				);
			}
		}

		public override void ExecuteBuild()
		{
			string resultFile =
				ParseOptionalStringParam("AlpakitResultFile");

			var result =
				new AlpakitPackageResult(resultFile);

			try
			{
				result.SetPhase("Validate packaging request");

				var pluginName = GetPluginName(this);
				var chunkId = GetRequestedChunkId(this);

				result.PluginName = pluginName;
				result.ChunkId = chunkId;
				result.Mode =
					chunkId >= 0
						? "Two-stage"
						: "Single-stage";

				string gameDir =
					ParseOptionalStringParam("GameDir");

				result.SetPhase("Validate PAYDAY 3 path");

				if (!string.IsNullOrEmpty(gameDir))
				{
					var bootstrapExePath =
						Path.Combine(
							gameDir,
							GameExecutableName
						);

					if (!FileExists(bootstrapExePath))
					{
						throw new AutomationException(
							"Provided -GameDir is invalid: expected '{0}'",
							bootstrapExePath
						);
					}
				}

				var pd3Params = new PD3Params
				{
					GameDirectory = gameDir,
					StartGame = ParseParam("LaunchGame"),
					CopyToGameDirectory =
						ParseParam("CopyToGameDir")
				};

				if (pd3Params.StartGame)
				{
					pd3Params.LaunchGameURL =
						GetGameLaunchURL();
				}

				if (chunkId >= 0)
				{
					LogInformation(
						"Alpakit two-stage mode: Plugin={0}, Chunk={1}",
						pluginName,
						chunkId
					);

					ExecuteTwoStageCook(
						this,
						pd3Params,
						pluginName,
						chunkId,
						result
					);
				}
				else
				{
					LogInformation(
						"No ChunkId supplied. Using original Alpakit DLC cook."
					);

					ExecuteLegacyCook(
						this,
						pd3Params,
						result
					);
				}

				if (pd3Params.StartGame &&
				    !string.IsNullOrWhiteSpace(
					    pd3Params.LaunchGameURL))
				{
					result.SetPhase("Launch PAYDAY 3");

					Process.Start(
						new ProcessStartInfo(
							pd3Params.LaunchGameURL)
						{
							UseShellExecute = true
						}
					);
				}

				result.SetPhase("Completed");
				result.WriteSuccess();
			}
			catch (Exception exception)
			{
				result.WriteFailure(exception);
				throw;
			}
		}
	}
}
