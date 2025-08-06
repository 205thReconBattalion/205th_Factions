class cfgPatches
{
	class RB205_factions_hav_starLegacy
	{
		requiredAddons[] =
        {
			"SWZT_Jedi",
            "SWZT_Sith",
            "SWZT_CIS",
			"ls_characters_clone"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"sw_lore_anakinSkywalker",
			"sw_lore_obiWanKenobi",
			"sw_lore_kiAdiMundi",
			"sw_lore_kitFisto",
			"sw_lore_maceWindu",
			"sw_lore_ploKoon",

			"sw_lore_countDooku",
			"sw_lore_asajjVentress",
			"sw_lore_darthSidious",
			"sw_lore_generalGrievous",
			"sw_lore_STS",
			"sw_lore_STS_kalani",
			"sw_lore_STS_kraken"
		};
		weapons[] = {
			"sw_lore_U_anakinSkywalker",
			"sw_lore_U_obiWanKenobi",
			"sw_lore_U_kiAdiMundi",
			"sw_lore_U_kitFisto",
			"sw_lore_U_maceWindu",
			"sw_lore_U_ploKoon",
			
			"sw_lore_U_countDooku",
			"sw_lore_U_asajjVentress",
			"sw_lore_U_darthSidious",
			"sw_lore_U_generalGrievous",
			"sw_lore_U_STS",
			"sw_lore_U_STS_kalani",
			"sw_lore_U_STS_kraken",

			"sw_lore_U_jediRobe",
			"sw_lore_U_jediRobe2",
			"sw_lore_U_jediRobe3",
			"sw_lore_U_jediRobe4",
			"sw_lore_U_jediRobe5"
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

	class sw_lore_countDooku: RB205_factions_hav_sith_base
	{
		ACCESS_TRUE
		displayName = "Count Dooku";
		uniformClass = "sw_lore_U_countDooku";

		model = "Sith_uniform\Graf_Dooku_uniform.p3d";

		weapons[] =
		{
			"WBK_lightsaber4_sith",
			"Throw","Put"
		};
	};
	class sw_lore_asajjVentress: RB205_factions_hav_sith_base
	{
		ACCESS_TRUE
		displayName = "Asajj Ventress";
		uniformClass = "sw_lore_U_asajjVentress";

		model = "Sith_uniform\Asajj_Ventress_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camob"};
		hiddenSelectionsTextures[] = {"Sith_uniform\data\Asajj_Ventress_camo1_co.paa","Sith_uniform\data\Asajj_Ventress_camo2_co.paa","Sith_uniform\data\Asajj_Ventress_camob_co.paa"};

		weapons[] =
		{
			"WBK_lightsaber3_sith",
			"WBK_lightsaber_sith_Second",
			"Throw","Put"
		};
	};
	class sw_lore_darthSidious: RB205_factions_hav_sith_base
	{
		ACCESS_TRUE
		displayName = "Darth Sidious";
		uniformClass = "sw_lore_U_darthSidious";

		model = "Sith_uniform\Darth_Sidious_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"Sith_uniform\data\Sheev_Palpatine_camo1_co.paa","Sith_uniform\data\Darth_Sidious_camo2_co.paa"};
	};
	class sw_lore_generalGrievous: RB205_factions_hav_droid_base
	{
		ACCESS_TRUE
		displayName = "General Grievous";
		uniformClass = "sw_lore_U_generalGrievous";

		model = "Droid_uniform\Grievous_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"Droid_uniform\data\Grievous_body_co.paa","Droid_uniform\data\Grievous_head_co.paa","Droid_uniform\data\Grievous_legs_co.paa"};

		weapons[] =
		{
			"WBK_lightsaber3_green",
			"WBK_lightsaber_jedi_Second",
			"Throw","Put"
		};
		magazines[] = { FORCE_SITH };
	};
	class sw_lore_STS: RB205_factions_hav_droid_base
	{
		ACCESS_TRUE
		displayName = "ST-Series Super Tactical Droid";
		uniformClass = "sw_lore_U_STS";

		faction = "RB205_cis";
		editorSubCategory = "RB205_cis_ts";
		ICON_OFFICER
		backpack = "RB205_B_TS";

		model = "Droid_uniform\Droid_Tactical_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"Droid_uniform\data\Droid_Tactical_camo1_co.paa","Droid_uniform\data\Droid_Tactical_camo2_co.paa","Droid_uniform\data\Droid_Tactical_camo_co.paa"};
	};
	class sw_lore_STS_kalani: RB205_factions_hav_droid_base
	{
		ACCESS_TRUE
		displayName = "ST-Series Super Tactical Droid (Kalani)";
		uniformClass = "sw_lore_U_STS_kalani";

		model = "Droid_uniform\Droid_Tactical_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"Droid_uniform\data\droid_tactical_kalani_camo1.paa","Droid_uniform\data\droid_tactical_kalani_camo2.paa","Droid_uniform\data\droid_tactical_kalani_camo.paa"};
	};
	class sw_lore_STS_kraken: RB205_factions_hav_droid_base
	{
		ACCESS_TRUE
		displayName = "ST-Series Super Tactical Droid (Kraken)";
		uniformClass = "sw_lore_U_STS_kraken";

		model = "Droid_uniform\Droid_Tactical_uniform.p3d";
		hiddenSelections[] = {"camo1","camo2","camo"};
		hiddenSelectionsTextures[] = {"Droid_uniform\data\droid_tactical_kraken_camo1.paa","Droid_uniform\data\droid_tactical_kraken_camo2.paa","Droid_uniform\data\droid_tactical_kraken_camo.paa"};
	};
	
	class sw_lore_jediRobe: RB205_factions_hav_jedi_base
	{
		scope = 1;
		uniformClass = "sw_lore_U_jediRobe";

		model = "jedi_uniform\Jedi_robe.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_robe_co.paa"};
	};
	class sw_lore_jediRobe2: RB205_factions_hav_jedi_base
	{
		scope = 1;
		uniformClass = "sw_lore_U_jediRobe2";

		model = "jedi_uniform\Jedi_Uniform_master.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_Uniform_master_camo1_co.paa","jedi_uniform\data\Jedi_Uniform_master_camo2_co.paa"};
	};
	class sw_lore_jediRobe3: RB205_factions_hav_jedi_base
	{
		scope = 1;
		uniformClass = "sw_lore_U_jediRobe3";

		model = "jedi_uniform\Jedi_Uniform_knight.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_Uniform_knight_camo1_co.paa","jedi_uniform\data\Jedi_Uniform_knight_camo2_co.paa"};
	};
	class sw_lore_jediRobe4: RB205_factions_hav_jedi_base
	{
		scope = 1;
		uniformClass = "sw_lore_U_jediRobe4";

		model = "jedi_uniform\Jedi_Uniform_Consular.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"jedi_uniform\data\Jedi_Uniform_Consular_camo1_co.paa","jedi_uniform\data\Jedi_Uniform_Consular_camo2_co.paa"};
	};
	class sw_lore_jediRobe5: RB205_factions_hav_jedi_base
	{
		scope = 1;
		uniformClass = "sw_lore_U_jediRobe5";

		model = "\ls\core\addons\characters_clone\uniforms\jediCommander\ls_uniform_jediCommander.p3d";
		hiddenSelections[] = {"armor_camo","robes_camo","belt_camo","under_camo"};
		hiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone\uniforms\jediCommander\data\armor_co.paa","\ls\core\addons\characters_clone\uniforms\jediCommander\data\robes_co.paa","\ls\core\addons\characters_clone\uniforms\jediCommander\data\belt_co.paa","\ls\core\addons\characters_clone\uniforms\jediCommander\data\undersuit_co.paa"};
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
	
	class sw_lore_U_countDooku: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Count Dooku";
		picture = "\Sith_uniform\data\ui\icon_Graf_Dooku_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_countDooku"; };
	};
	class sw_lore_U_asajjVentress: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Asajj Ventress";
		picture = "\Sith_uniform\data\ui\icon_Asajj_Ventress_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_asajjVentress"; };
	};
	class sw_lore_U_darthSidious: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] Darth Sidious";
		picture = "\Sith_uniform\data\ui\icon_Darth_Sidious_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_darthSidious"; };
	};
	class sw_lore_U_generalGrievous: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] General Grievous";
		picture = "\droid_uniform\data\ui\icon_Grievous_uniform_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_generalGrievous"; };
	};
	class sw_lore_U_STS: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[CIS] ST-Series Super Tactical Droid";
		picture = "\droid_uniform\data\ui\icon_Droid_Tactical_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_STS"; };
	};
	class sw_lore_U_STS_kalani: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] ST-Series Super Tactical Droid (Kalani)";
		picture = "\droid_uniform\data\ui\icon_Droid_Tactical_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_STS_kalani"; };
	};
	class sw_lore_U_STS_kraken: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "[HaV] ST-Series Super Tactical Droid (Kraken)";
		picture = "\droid_uniform\data\ui\icon_Droid_Tactical_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_STS_kraken"; };
	};

	class sw_lore_U_jediRobe: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "Jedi Robe";
		picture = "\jedi_uniform\data\ui\icon_Jedi_robe_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_jediRobe"; };
	};
	class sw_lore_U_jediRobe2: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "Jedi Robe (Duelist)";
		picture = "\jedi_uniform\data\ui\icon_Jedi_uniform_master_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_jediRobe2"; };
	};
	class sw_lore_U_jediRobe3: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "Jedi Robe (Explorer)";
		picture = "\jedi_uniform\data\ui\icon_Jedi_uniform_knight_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_jediRobe3"; };
	};
	class sw_lore_U_jediRobe4: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "Jedi Robe (Consular)";
		picture = "\jedi_uniform\data\ui\icon_Jedi_uniform_Consular_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_jediRobe4"; };
	};
	class sw_lore_U_jediRobe5: RB205_factions_hav_U_base
	{
		ACCESS_TRUE
		displayName = "Jedi Robe (Armor)";
		picture = "\ls\core\addons\characters_clone\data\ui\jediUniform_ui_ca.paa";
		class ItemInfo: ItemInfo { uniformClass = "sw_lore_jediRobe5"; };
	};
};
class CfgGlasses
{
	#include "hideCfgGlasses.hpp"
};