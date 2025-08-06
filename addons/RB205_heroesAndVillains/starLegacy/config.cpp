class cfgPatches
{
	class RB205_factions_starLegacy
	{
		requiredAddons[] =
        {
			"SWZT_Jedi",
            "SWZT_Sith",
            "SWZT_CIS"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"sw_lore_anakinSkywalker"
		};
		weapons[] = {
			"sw_lore_U_anakinSkywalker"
		};
	};
};

#include "\RB205_heroesAndVillains\macros.hpp"

class CfgVehicles
{
	class RB205_factions_hav_base;
	class sw_lore_anakinSkywalker: RB205_factions_hav_base
	{
		ACCESS_TRUE
		displayName = "Anakin Skywalker";
		side = SIDE_BLUEFOR;
		faction = FACTION_HERO;
		editorSubcategory = SUBCATEGORY_JEDI;

		model = "jedi_uniform\Anakin_uniform.p3d";
		uniformClass = "sw_lore_U_anakinSkywalker";

		weapons[] =
		{
			"WBK_lightsaber_jedi",
			"Throw","Put"
		};
		magazines[] = { FORCE_JEDI };
	};
};
class CfgWeapons
{
	class RB205_uniform_base;
	class RB205_factions_hav_U_base: RB205_uniform_base
	{
		class ItemInfo;
	};
	
	class sw_lore_U_anakinSkywalker: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Anakin Skywalker";
		picture = "\jedi_uniform\data\ui\icon_Anakin_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_anakinSkywalker"; };
	};
};