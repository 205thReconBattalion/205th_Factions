class cfgPatches
{
	class RB205_factions_guls_rancor
	{
		requiredAddons[] =
        {
			"RB205_factions_creatures",
            "GULS_Rancor"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"RB205_creature_rancor"
		};
		weapons[] = {};
	};
};

#include "\RB205_creatures\macros.hpp"

class CfgVehicles
{
	class Rancor1;
	class RB205_creature_rancor: Rancor1 //Independent
	{
		displayName = "Rancor";
		faction = FACTION_CREATURES;
		editorSubcategory = SUBCATEGORY_PREDATOR;
	};
};