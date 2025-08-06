class cfgPatches
{
	class RB205_factions_hav_wookie
	{
		requiredAddons[] =
        {
			"RB205_factions_wookie"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"sw_lore_chewbacca"
		};
		weapons[] = {};
	};
};

#include "\RB205_heroesAndVillains\macros.hpp"

class CfgVehicles
{
	class RB205_wookie;
	class sw_lore_chewbacca: RB205_wookie
	{
		ACCESS_TRUE
		displayName = "Chewbacca";

		side = SIDE_BLUEFOR;
		faction = FACTION_HERO;
		editorSubCategory = SUBCATEGORY_OTHER;

		weapons[] =
		{
			"Throw","Put"
		};
		magazines[] = {};
		linkedItems[] = {"RB205_V_wookie_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"RB205_V_wookie_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};