class cfgPatches
{
	class RB205_cis_droids_b2
	{
		author = "Spark";
		requiredAddons[] =
		{
			"RB205_cis_droids",
            "ls_characters_droid",
			"WBK_Droids_LS"
		};
		requiredVersion = 1.0;
		units[] =
		{
			"RB205_B2",
			"RB205_B2_rocket",

			"RB205_B2_jetpack"
		};
		weapons[] =
		{
			"RB205_U_B2"
		};
	};
};

#include "\RB205_cis\droids\macros.hpp"

class CfgVehicles
{
    class ls_droid_b2;

	class RB205_B2: ls_droid_b2
	{
		displayName = "B2 Super Battle Droid";
		ICON_DEFAULT
		uniformClass = "RB205_U_B2";
		backpack = "";
		weapons[]=          { WEAPON_B2, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_B2, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_B2) };
		respawnMagazines[]= { MAG_8(MAG_B2) };
		
		faction = "RB205_cis";
		editorSubcategory = "RB205_cis_b2";
		linkedItems[]=          { "JLTS_NVG_droid_chip_1", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		respawnlinkedItems[]=   { "JLTS_NVG_droid_chip_1", "ItemMap", "ItemGPS", "JLTS_droid_comlink", "ItemCompass", "ItemWatch" };
		items[]=            {};
		respawnItems[]=     {};
		DROID_EFFECTS
		DROID_SOUNDS_B2
		_generalMacro = "WBK_AI_StarWars_Droids";
	};
	class RB205_B2_rocket: RB205_B2
	{
		displayName = "B2 Super Battle Droid (Rocket)";
		backpack = "RB205_B2_jetpack";
	};

	class JLTS_B1_jetpack;
	class RB205_B2_jetpack: JLTS_B1_jetpack
	{
		displayName = "Super battle droid jetpack";
		model = "RB205_cis\droids\data\inv_backpack.p3d";
	};
};

class CfgWeapons
{
	class ls_droidUniform_base;
	class ls_droidUniform_b2: ls_droidUniform_base
	{
		class ItemInfo;
	};
	class RB205_U_B2: ls_droidUniform_b2
	{
		displayName = "[CIS] B2 Super Battle Droid";
		picture = "\RB205_cis\droids\data\b2_droid.paa";
		JLTS_isDroid =  1;
		JLTS_hasEMPProtection = 0;
		JLTS_deathSounds = "DeathDroid";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_B2";
		};
	};
};

class Extended_InitPost_EventHandlers {
	class RB205_B2 {
        class RB205_CIS_B2_WBK_Init {
            init = "_unit = _this select 0; if (local _unit) then {_unit spawn WBK_Droid_B2_Load;};";
        };
    };
};