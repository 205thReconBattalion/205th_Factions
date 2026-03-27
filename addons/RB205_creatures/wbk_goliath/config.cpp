class cfgPatches
{
	class RB205_factions_wbk_goliath
	{
		requiredAddons[] =
        {
			"RB205_factions_creatures",
            "WBK_Zombies_Goliaph"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"RB205_creature_terentatek"
		};
		weapons[] = {};
	};
};

#include "\RB205_creatures\macros.hpp"

class CfgVehicles
{
	class WBK_Goliaph_2;
	class RB205_creature_terentatek: WBK_Goliaph_2
	{
		displayName = "Terentatek";
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
};