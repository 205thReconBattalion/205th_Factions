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
			"sw_lore_anakinSkywalker",
			"sw_lore_obiWanKenobi",
			"sw_lore_kiAdiMundi",
			"sw_lore_kitFisto",
			"sw_lore_maceWindu",
			"sw_lore_ploKoon"
		};
		weapons[] = {
			"sw_lore_U_anakinSkywalker",
			"sw_lore_U_obiWanKenobi",
			"sw_lore_U_kiAdiMundi",
			"sw_lore_U_kitFisto",
			"sw_lore_U_maceWindu",
			"sw_lore_U_ploKoon"
		};
	};
};

#include "\RB205_heroesAndVillains\macros.hpp"

class CfgVehicles
{
	#include "hideCfgVehicles.hpp"

	class RB205_factions_hav_jedi_base;
	class RB205_factions_hav_sith_base;
	class RB205_factions_hav_droid_base;

	class sw_lore_anakinSkywalker: RB205_factions_hav_jedi_base
	{
		ACCESS_TRUE
		displayName = "Anakin Skywalker";
		uniformClass = "sw_lore_U_anakinSkywalker";

		model = "jedi_uniform\Anakin_uniform.p3d";

		weapons[] =
		{
			"WBK_lightsaber_jedi",
			"Throw","Put"
		};
	};
	class sw_lore_obiWanKenobi: RB205_factions_hav_jedi_base
	{
		ACCESS_TRUE
		displayName = "Obi-Wan Kenobi";
		uniformClass = "sw_lore_U_obiWanKenobi";

		model = "jedi_uniform\Obi_Wan_uniform.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_robe_co.paa"};
	};
	class sw_lore_kiAdiMundi: RB205_factions_hav_jedi_base
	{
		ACCESS_TRUE
		displayName = "Ki-Adi-Mundi";
		uniformClass = "sw_lore_U_kiAdiMundi";

		model = "jedi_uniform\Ki_Adi_Mundi_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Ki_Adi_Mundi_uniform_camo1_co.paa","jedi_uniform\data\Ki_Adi_Mundi_uniform_camo2_co.paa"};

		weapons[] =
		{
			"WBK_lightsaberOldRep_jedi",
			"Throw","Put"
		};
	};
	class sw_lore_kitFisto: RB205_factions_hav_jedi_base
	{
		ACCESS_TRUE
		displayName = "Kit Fisto";
		uniformClass = "sw_lore_U_kitFisto";

		model = "jedi_uniform\Kit_Fisto_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Kit_Fisto_camo1_co.paa","jedi_uniform\data\Kit_Fisto_camo2_co.paa","jedi_uniform\data\Kit_Fisto_camo_co.paa"};

		weapons[] =
		{
			"WBK_lightsaber2_green",
			"Throw","Put"
		};
	};
	class sw_lore_maceWindu: RB205_factions_hav_jedi_base
	{
		ACCESS_TRUE
		displayName = "Mace Windu";
		uniformClass = "sw_lore_U_maceWindu";

		model = "jedi_uniform\Mace_Windu_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_Uniform_camo1_co.paa","jedi_uniform\data\Jedi_Uniform_v2_camo2_co.paa","jedi_uniform\data\Jedi_Uniform_camo_co.paa"};

		weapons[] =
		{
			"WBK_lightsaber_purple",
			"Throw","Put"
		};
	};
	class sw_lore_ploKoon: RB205_factions_hav_jedi_base
	{
		ACCESS_TRUE
		displayName = "Plo Koon";
		uniformClass = "sw_lore_U_ploKoon";

		model = "jedi_uniform\Plo_Koon_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_Uniform_camo1_co.paa","jedi_uniform\data\Jedi_Uniform_v2_camo2_co.paa","jedi_uniform\data\Jedi_Uniform_camo_co.paa"};

		weapons[] =
		{
			"WBK_lightsaber_jedi",
			"Throw","Put"
		};
	};
};
class CfgWeapons
{
	#include "hideCfgWeapons.hpp"

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
	class sw_lore_U_obiWanKenobi: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Obi-Wan Kenobi";
		picture = "\jedi_uniform\data\ui\icon_Obi_Wan_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_obiWanKenobi"; };
	};
	class sw_lore_U_kiAdiMundi: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Ki-Adi-Mundi";
		picture = "\jedi_uniform\data\ui\icon_Ki_Adi_Mundi_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_kiAdiMundi"; };
	};
	class sw_lore_U_kitFisto: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Kit Fisto";
		picture = "\jedi_uniform\data\ui\icon_Kit_Fisto_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_kitFisto"; };
	};
	class sw_lore_U_maceWindu: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Mace Windu";
		picture = "\jedi_uniform\data\ui\icon_Mace_Windu_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_maceWindu"; };
	};
	class sw_lore_U_ploKoon: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Plo Koon";
		picture = "\jedi_uniform\data\ui\icon_Plo_Koon_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_ploKoon"; };
	};
};
class CfgGlasses
{
	#include "hideCfgGlasses.hpp"
};