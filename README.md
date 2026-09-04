# PD3-Modkit

A community Unreal Engine modding project for **PAYDAY 3**, designed to provide a more complete development environment for creating everything from simple asset replacements to full logic mods, custom HUDs, and custom heists.

PD3-Modkit combines a reconstructed C++ project, an updated UE5-compatible logic mod loader, an extended version of Alpakit, and reusable mod templates into a single Unreal Engine project.

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

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
* Gameplay mods
* Custom HUDs
* HUD frameworks
* Custom heists
* Mod settings
* Shared mod APIs
* Runtime mod initialization

Rather than every mod implementing its own loading and initialization system, PDML provides a common runtime layer that mods can build on top of.

### Logic Mods

Logic mods can contain their own Blueprint assets, systems, widgets, data assets, and supporting content rather than simply replacing an existing game asset.

This allows mods to introduce genuinely new functionality without requiring every feature to be implemented through asset replacement.

### HUD Mods

PDML provides a foundation for HUD modifications and custom UI systems.

This can be used for:

* Complete HUD replacements
* HUD extensions
* Additional HUD widgets
* Shared HUD frameworks
* Mod-specific interfaces
* Runtime UI initialization

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

### Custom Heists

The long-term goal is for PDML and PD3-Modkit to provide the systems required for loading and supporting community-created heists.

The project structure and mod loader are being developed with custom maps and larger content mods in mind rather than being limited to small asset replacements.

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

### Mod Settings

PDML includes support for mod configuration/settings, allowing mods to expose options without each mod needing to implement an entirely separate settings framework.

> **Work in progress:** PD3-Modkit is actively being developed and some systems, APIs, templates, and workflows may change.

---

## Updated Alpakit

PD3-Modkit includes a heavily updated version of **Alpakit** designed around modern PAYDAY 3 modding.

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

The updated Alpakit can also package assets intended to replace assets under the game's `/Game` mount point.

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

while replacement assets can be assigned to their corresponding game paths through the updated Alpakit/PAL workflow.

---

## Primary Asset Labels

PD3-Modkit makes use of Unreal Engine's **Primary Asset Label / Asset Manager** system to determine which content belongs to a mod package.

For mods containing replacement assets, the Primary Asset Label can manage both plugin assets and assets targeting the game's normal `/Game` paths.

Alpakit detects when a mod manages content outside of its own plugin directory and automatically enables the required packaging path.

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
Package with Alpakit
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

* Unreal Engine matching the version currently used by PAYDAY 3
* A legitimate installation of PAYDAY 3
* Visual Studio / C++ development tools
* Basic familiarity with Unreal Engine

Some advanced mod types may additionally require tools commonly used by the PAYDAY 3 modding community.

---

## Getting Started

1. Clone or download **PD3-Modkit**.

2. Open the included Unreal Engine project.

3. Allow Unreal Engine to compile any required project or plugin modules.

4. Create a mod using one of the included templates or create a new mod plugin.

5. Add your assets beneath the mod's `Content` directory.

6. Configure the mod's Primary Asset Label where required.

7. Use **Alpakit** from inside Unreal Engine to package the mod.

8. Install the generated mod into your PAYDAY 3 mod directory.

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

### Alpakit

The project contains a modified and extended version of Alpakit adapted for the PD3-Modkit workflow and newer PAYDAY 3 Unreal Engine versions.

Additional credits and upstream attribution should be retained where applicable within the individual plugins and source files.

