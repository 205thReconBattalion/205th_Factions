class cfgPatches
{
	class RB205_factions_wbk_antlion
	{
		requiredAddons[] =
        {
			"RB205_factions_creatures",
            "WBK_HalfLife_AlienShit"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

#include "\RB205_creatures\macros.hpp"

class CfgVehicles
{
	class WBK_C_ExportClass;

	class WBK_Antlion_1: WBK_C_ExportClass
	{
		displayName = "Antlion";

		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_INSECT;
	};
	class WBK_Antlion_1_NoLeap: WBK_Antlion_1
	{
		displayName = "Antlion (Worker)";

		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_INSECT;
	};
	class WBK_AntlionGuardian_1: WBK_C_ExportClass
	{
		displayName = "Antlion (Alpha)";

		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_INSECT;
	};
};