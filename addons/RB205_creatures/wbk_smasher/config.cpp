class cfgPatches
{
	class RB205_factions_wbk_smasher
	{
		requiredAddons[] =
        {
			"RB205_factions_creatures",
            "WBK_Zombies_Smasher"
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
	class WBK_SpecialZombie_Smasher_1: WBK_C_ExportClass
	{
		displayName = "Gundark";

		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
	class WBK_SpecialZombie_Smasher_Hellbeast_1: WBK_SpecialZombie_Smasher_1
	{
		displayName = "Gundark (Hellspawn)";
		
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
	class WBK_SpecialZombie_Smasher_Acid_1: WBK_SpecialZombie_Smasher_1
	{
		displayName = "Gundark (Acid Spewer)";
		
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
};