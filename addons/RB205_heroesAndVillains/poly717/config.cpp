class cfgPatches
{
	class RB205_factions_hav_poly717
	{
		requiredAddons[] =
        {
			"P_Mandalorian"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"sw_lore_jangoFett"
		};
		weapons[] = {};
	};
};

#include "\RB205_heroesAndVillains\macros.hpp"

class CfgVehicles
{
	class P_JangoFett;
	class sw_lore_jangoFett: P_JangoFett
	{
		ACCESS_TRUE
		displayName = "Jango Fett";
		//uniformClass = "P_JF_Uni";

		side = 0;
		faction = "RB205_lore_villains";
		editorSubCategory = "RB205_lore_other";

		weapons[] = {
			"ls_weapon_westar35sa",
			"Throw","Put"
		};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {"ls_magazine_westar35sa","ls_magazine_westar35sa","ls_magazine_westar35sa","ls_magazine_westar35sa","ls_magazine_westar35sa"};
		respawnMagazines[] = {};
		linkedItems[] = {"P_JF_Helmet","P_JF_Holsters","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"P_JF_Helmet","P_JF_Holsters","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};