# PD3-Modkit

A community Unreal Engine modding project for **PAYDAY 3**, designed to provide a more complete development environment for creating everything from simple asset replacements to full logic mods, custom HUDs, and custom heists.

PD3-Modkit combines a reconstructed C++ project, an updated UE5-compatible logic mod loader, CrimeForge, and reusable mod templates into a single Unreal Engine project.

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

## Required Unreal Engine Build

PD3-Modkit requires the custom **UE5-PD3 Unreal Engine 5.5.4 compatibility build**:

**[Download UE5-PD3 5.5.4](https://github.com/NadzW/UnrealEngine-PD3Compatibility/releases)**

The stock Epic Games Unreal Engine 5.5.4 build is **not supported** for this project. UE5-PD3 contains PAYDAY 3 compatibility changes required to correctly handle game asset serialization and material behavior. Using a stock 5.5.4 build can result in serialization errors when loading PAYDAY 3-derived assets and material compatibility/rendering issues.

The precompiled Installed Build is recommended so you do not need to compile the modified engine from source.

---

## Features

### Reconstructed PAYDAY 3 C++ Project

The project includes a large set of stubbed PAYDAY 3 C++ classes, allowing Unreal Engine to understand many of the game's native classes and expose them to Blueprints and mod projects.

The project was generated using:

* **UE4SS UHT-compatible generated headers**
* **UE4GameProjectGenerator**
  https://github.com/Archengius/UE4GameProjectGenerator

This makes it possible to work with PAYDAY 3 classes inside Unreal Engine rather than relying entirely on recreated Blueprint classes or generic engine types.

The generated classes are primarily **stubs** and should not be treated as the original PAYDAY 3 source code. They exist to reproduce the game's class structures sufficiently for mod development.

---

## PDML

**PDML** is the logic mod loader included with PD3-Modkit.

It has been updated for PAYDAY 3's newer Unreal Engine version and is intended to provide a common foundation for more advanced mods.

PDML is designed to support:

* Logic mods
* Custom heists
* Mod settings
* Runtime mod initialization

Rather than every mod implementing its own loading and initialization system, PDML provides a common runtime layer that mods can build on top of.

### Logic Mods

Logic mods can contain their own Blueprint assets, systems, widgets, data assets, and supporting content rather than simply replacing an existing game asset.

This allows mods to introduce genuinely new functionality without requiring every feature to be implemented through asset replacement.

### Custom Heists

The long-term goal is for PDML and PD3-Modkit to provide the systems required for loading and supporting community-created heists.

The project structure and mod loader are being developed with custom maps and larger content mods in mind rather than being limited to small asset replacements.

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

### Mod Settings

PDML includes support for mod configuration/settings, allowing mods to expose options without each mod needing to implement an entirely separate settings framework.

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

---

## CrimeForge

PD3-Modkit includes **CrimeForge**, the packaging tool designed around modern PAYDAY 3 modding.

The updated packaging pipeline supports both:

### Additional Asset Mods

Normal plugin content can be packaged under the mod's own mount point.

For example:

```text
/MyMod/Blueprints/BP_MyFeature
/MyMod/UI/WBP_MyWidget
/MyMod/Data/DA_MyData
```

This is ideal for logic mods and mods that introduce completely new content.

### Asset Replacement Mods

CrimeForge can also package assets intended to replace assets under the game's `/Game` mount point.

This allows a single mod plugin to contain both:

```text
/MyMod/...
```

and replacement content targeting:

```text
/Game/...
```

without requiring a completely separate packaging workflow.

This means one plugin can contain:

* New mod assets
* Logic mod content
* Replacement assets
* UI assets
* Data assets
* Supporting mod content

all as part of the same mod.

## Mod Templates

PD3-Modkit includes templates intended to make common mod types easier to create.

Templates currently include or are planned for:

* Logic mods
* HUD mods
* Custom heist projects

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

The goal is for a new mod to start with the required structure already configured rather than requiring every developer to rebuild the same boilerplate.

---

## Example Mod Structure

A PDML mod may look something like:

```text
Mods/
└── MyMod/
    ├── MyMod.uplugin
    ├── Content/
    │   ├── PAL_MyMod
    │   ├── Blueprints/
    │   ├── UI/
    │   ├── Data/
    │   └── Game/
    │       └── ...
    ├── Config/
```

while replacement assets can be assigned to their corresponding game paths through the CrimeForge/PAL workflow.

---

## Primary Asset Labels

PD3-Modkit makes use of Unreal Engine's **Primary Asset Label / Asset Manager** system to determine which content belongs to a mod package.

For mods containing replacement assets, the Primary Asset Label can manage both plugin assets and assets targeting the game's normal `/Game` paths.

CrimeForge detects when a mod manages content outside of its own plugin directory and automatically enables the required packaging path.

This means developers do not have to manually choose between an "asset mod" and a "logic mod" packaging system.

---

## Project Goals

PD3-Modkit aims to make PAYDAY 3 modding feel much closer to developing a normal Unreal Engine project.

the goal is to support:

```text
Create Mod
    ↓
Add Blueprints / UI / Data
    ↓
Optionally replace existing game assets
    ↓
Package with CrimeForge
    ↓
Install
```

The same project should be capable of producing everything from a texture replacement to a completely new gameplay system or heist.

---

## Planned / Ongoing Work

PD3-Modkit is still under active development.

Current and future work includes:

* Expanding PDML
* Additional logic mod APIs
* Improved HUD mod support
* Mod settings improvements
* Custom heist support
* Additional mod templates
* Documentation and examples
* Additional developer utilities

---

## Requirements

You will need:

* **[UE5-PD3 5.5.4 compatibility build](https://github.com/NadzW/UnrealEngine-PD3Compatibility/releases)** — required for PAYDAY 3 serialization and material compatibility
* A legitimate installation of PAYDAY 3
* Visual Studio / C++ development tools
* Basic familiarity with Unreal Engine

> **Important:** Do not use the stock Epic Games UE5.5.4 build with PD3-Modkit. The custom UE5-PD3 build contains engine-level compatibility changes needed by the project.

Some advanced mod types may additionally require tools commonly used by the PAYDAY 3 modding community.

---

## Getting Started

1. Download and install the **[UE5-PD3 5.5.4 compatibility build](https://github.com/NadzW/UnrealEngine-PD3Compatibility/releases)**. Use the installer or follow the manual installation instructions on the release page.

2. Clone or download **PD3-Modkit**.

3. Associate `PAYDAY3.uproject` with the installed **UE5-PD3** build and open the project.

4. Allow Unreal Engine to compile any required project or plugin modules.

5. Create a mod using one of the included templates or create a new mod plugin.

6. Add your assets beneath the mod's `Content` directory.

7. Configure the mod's Primary Asset Label where required.

8. Use **CrimeForge** from inside Unreal Engine to package the mod.

9. Install the generated mod into your PAYDAY 3 mod directory.

More detailed guides for individual mod types will be added as development continues.

---

## Credits

PD3-Modkit builds upon work from several Unreal Engine modding projects and tools.

### UE4SS

Used to generate UHT-compatible information and headers from the game.

https://github.com/UE4SS-RE/RE-UE4SS

### UE4GameProjectGenerator

Used as part of the process for generating the reconstructed Unreal Engine project.

https://github.com/Archengius/UE4GameProjectGenerator

### CrimeForge

**CrimeForge** is the packaging tool included with PD3-Modkit, providing the project's mod packaging workflow for PAYDAY 3.

Additional credits and upstream attribution should be retained where applicable within the individual plugins and source files.

