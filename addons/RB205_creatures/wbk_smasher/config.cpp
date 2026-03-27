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
		units[] = {
			"RB205_creature_gundark",
			"RB205_creature_gundark_fire",
			"RB205_creature_gundark_acid"
		};
		weapons[] = {};
	};
};

#include "\RB205_creatures\macros.hpp"

class CfgVehicles
{
	class WBK_SpecialZombie_Smasher_1;
	class RB205_creature_gundark: WBK_SpecialZombie_Smasher_1
	{
		displayName = "Gundark";
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};

	class WBK_SpecialZombie_Smasher_Hellbeast_1;
	class RB205_creature_gundark_fire: WBK_SpecialZombie_Smasher_Hellbeast_1
	{
		displayName = "Gundark (Fire)";
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};

	class WBK_SpecialZombie_Smasher_Acid_1;
	class RB205_creature_gundark_acid: WBK_SpecialZombie_Smasher_Acid_1
	{
		displayName = "Gundark (Acid)";
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
};