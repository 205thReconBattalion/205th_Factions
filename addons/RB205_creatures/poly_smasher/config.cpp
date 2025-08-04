class cfgPatches
{
	class RB205_factions_poly_smasher
	{
		requiredAddons[] =
        {
			"RB205_factions_creatures",
            "WBK_Zombies_Smasher",
            "P_SmasherSkins"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"P_Smasher_Snow_1",
			"P_Smasher_Snow_2",
			"P_Smasher_Snow_3"
		};
		weapons[] = {};
	};
};

#include "\RB205_creatures\macros.hpp"

class CfgVehicles
{
	class P_Smasher_Snow;
	class P_Smasher_Snow_2: P_Smasher_Snow
	{
		displayName = "Gundark (Arctic)";

		side = 2;
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
};