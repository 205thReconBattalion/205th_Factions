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
		units[] = {};
		weapons[] = {};
	};
};

#include "\RB205_creatures\macros.hpp"

class CfgVehicles
{
	class WBK_Goliaph_1;
	class WBK_Goliaph_2: WBK_Goliaph_1
	{
		displayName = "Terentatek";

		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
};