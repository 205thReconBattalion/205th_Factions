class cfgPatches
{
	class RB205_factions_heroesAndVillains
	{
		requiredAddons[] = {
			"RB205_core",
			"RB205_cis_droids_bx"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	class RB205_lore_heroes
	{
		displayName = "[205] Heroes of the Galaxy";
		priority = 999;
		side = 1;
	};
	class RB205_lore_villains
	{
		displayName = "[205] Villains of the Galaxy";
		priority = 999;
		side = 0;
	};
};
class CfgEditorSubcategories
{
	class RB205_lore_jedi
	{
		displayName = "Jedi";
	};
	class RB205_lore_sith
	{
		displayName = "Sith";
	};
	class RB205_lore_other
	{
		displayName = "Other";
	};
};

#include "macros.hpp"

class CfgVehicles
{
	class RB205_unit_base;
	class RB205_factions_hav_base: RB205_unit_base
	{
		ACCESS_FALSE
		uniformClass = "RB205_factions_hav_U_base";
		side = 1;
		faction = "RB205_lore_heroes";
		editorSubCategory = "RB205_lore_other";
		identityTypes[] = {"LanguageENG_F","WhiteHead_11"};
		//Inventory:
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class RB205_factions_hav_jedi_base: RB205_factions_hav_base
	{
		side = SIDE_BLUEFOR;
		faction = FACTION_HERO;
		editorSubcategory = SUBCATEGORY_JEDI;
		magazines[] = { FORCE_JEDI };
	};
	class RB205_factions_hav_sith_base: RB205_factions_hav_base
	{
		side = SIDE_REDFOR;
		faction = FACTION_VILLAIN;
		editorSubcategory = SUBCATEGORY_SITH;
		magazines[] = { FORCE_SITH };
	};
	class RB205_factions_hav_droid_base: RB205_factions_hav_base
	{
		editorSubCategory = "RB205_lore_other";
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","RB205_V_BX","JLTS_NVG_droid_chip_2"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","RB205_V_BX","JLTS_NVG_droid_chip_2"};
		DROID_SOUNDS
	};
};
class CfgWeapons
{
	class help_uniform_base;
	class RB205_uniform_base: help_uniform_base
	{
		class ItemInfo;
	};
	class RB205_factions_hav_U_base: RB205_uniform_base
	{
		ACCESS_FALSE
		//picture = "\RB205_main\data\ui\uniforms\icon_U_default.paa";
		//model = "\ls\core\addons\characters_clone_legacy\uniforms\phase2\ls_gar_phase2_uniform.p3d";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_factions_hav_base";
		};
	};
};