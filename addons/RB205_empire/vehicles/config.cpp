class cfgPatches
{
    class RB205_vehicles_empire
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"RB205_empire"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_emp_74Z",
			"RB205_emp_WH",
			"RB205_emp_WH_TT",
			"RB205_emp_WH_Repair",
			"RB205_emp_WH_MG",
			"RB205_emp_WH_Rocket",
			"RB205_emp_WH_AA",
			//ARMORED
			"RB205_emp_itt",
			"RB205_emp_itt_logistic",
			"RB205_emp_itt_medic",
			"RB205_emp_tx130",
			"RB205_emp_tx130_gl",
			"RB205_emp_tx130_recon",
			"RB205_emp_tx130_super",
			"RB205_emp_atte",
			"RB205_ATAT",
			"RB205_ATST",
			//STARFIGHTER
			"RB205_emp_laat",
			"RB205_emp_laatle",
			"RB205_emp_nuclass",
			"RB205_emp_rhoclass",
			"RB205_emp_lambda",
			"RB205_emp_purrgil",
			"RB205_emp_gozanti",
			"RB205_emp_zetaclass",
			"RB205_emp_vwing",
			"RB205_emp_TIE_LN",
			"RB205_emp_TIE_IN",
			"RB205_emp_TIE_SA",
			"RB205_emp_TIE_SA_cluster",
			"RB205_emp_TIE_D",
			"RB205_emp_TIE_AD",
			//NAVAL
			"RB205_emp_catfish",
			"RB205_emp_catfish_mg",
			"RB205_emp_catfish_at",
			"RB205_emp_catfish_aa",
			//OTHER
			"RB205_emp_rhoclass_crate_barracks",
			"RB205_emp_rhoclass_crate_transport",
			"RB205_emp_keeradak",
			"RB205_emp_xx9",
			"RB205_emp_xx10"
		};
	};
};

#include "macros.hpp"
#include "inventory.hpp"

class cfgVehicles
{
	class WM_74Z_Imperial_Brown;
	class RB205_emp_74Z: WM_74Z_Imperial_Brown
	{
		ACCESS_TRUE
		displayName = "74-Z Speeder Bike";
		author = AUTHOR;
		crew = CREW_EMP_SCOUT;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_ground";
	};
	/*
		ARMORED
	*/
	class 3AS_ITT;
	class RB205_emp_itt: 3AS_ITT
	{
		ACCESS_TRUE
		displayName = "ITT";
		author = AUTHOR;
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
	class 3AS_ITT_Logistic;
	class RB205_emp_itt_logistic: 3AS_ITT_Logistic
	{
		ACCESS_TRUE
		displayName = "ITT (Logistic)";
		author = AUTHOR;
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
	class 3AS_ITT_Medical;
	class RB205_emp_itt_medic: 3AS_ITT_Medical
	{
		ACCESS_TRUE
		displayName = "ITT (Medical)";
		author = AUTHOR;
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
	};
	class RB205_tx130;
	class RB205_emp_tx130: RB205_tx130
	{
		ACCESS_TRUE
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_Imp_hull_co.paa","3AS\3AS_Saber\data\Saber_Imp_weapons_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_tx130_gl;
	class RB205_emp_tx130_gl: RB205_tx130_gl
	{
		ACCESS_TRUE
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_imp_hull_co.paa","3AS\3AS_Saber\data\Saber_Imp_weapons_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_tx130_recon;
	class RB205_emp_tx130_recon: RB205_tx130_recon
	{
		ACCESS_TRUE
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_Imp_hull_co.paa","3AS\3AS_Saber\data\Saber_weapons_scout_Imp_co.paa"};
		hiddenSelectionsMaterials[] = {"3AS\3AS_Saber\data\Saberhull.rvmat","3AS\3AS_Saber\data\Saberweapons_scout.rvmat"};
		class textureSources {};
	};
	class RB205_tx130_super;
	class RB205_emp_tx130_super: RB205_tx130_super
	{
		ACCESS_TRUE
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_Imp_hull_co.paa","3AS\3AS_Saber\data\Saber_Imp_weapons_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_atte;
	class RB205_emp_atte: RB205_atte
	{
		ACCESS_TRUE
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_Imp_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_IMP_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa","3as\3as_atte\data\textures\3as_atte_armor_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class 3AS_ATAT;
	class RB205_emp_ATAT: 3AS_ATAT
	{
		ACCESS_TRUE
		displayName = "AT-AT";
		author = AUTHOR;
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		CARGO_L
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_tank";
	};
	class WM_ATST;
	class RB205_emp_ATST: WM_ATST
	{
		ACCESS_TRUE
		displayName = "AT-ST";
		author = AUTHOR;
		crew = CREW_EMP_ARMORED;
		VEH_INVENTORY
		CARGO_S
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_tank";
	};
	/*
		STARFIGHTER
	*/
	class RB205_laat;
	class RB205_emp_laat: RB205_laat
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Laat\LAATI\data\Hull_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\wings_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\weapons_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\weapon_Details_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\interior_Imp_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_laatle;
	class RB205_emp_laatle: RB205_laatle
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3as_LAAT\LAAT_LE\data\imperialpatrol01_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_nuclass;
	class RB205_emp_nuclass: RB205_nuclass
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\nu_class\data\hull_Imp_co.paa","3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa","3as\3as_republic_heli\nu_class\data\wings_Imp_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa","3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_rhoclass;
	class RB205_emp_rhoclass: RB205_rhoclass
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\rho_class\data\hull_rho_Imp_co.paa","3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa","3as\3as_republic_heli\rho_class\data\wings_rho_Imp_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa","3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class 3AS_Lambda_F;
	class RB205_emp_lambda: 3AS_Lambda_F
	{
		ACCESS_TRUE
		displayName = "Lambda-Class T-4A Shuttle";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
		editorPreview = "";
	};
	class RB205_purrgil;
	class RB205_emp_purrgil: RB205_purrgil
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3as\3as_starships\data\hs_imp_ext_co.paa","3as\3as_starships\data\hs_int_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_gozanti;
	class RB205_emp_gozanti: RB205_gozanti
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3as\3AS_Imperial_Air\Gozanti\data\Camo_co.paa","3as\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa","3as\3AS_Imperial_Air\Gozanti\data\Camo2_co.paa","3as\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa","3as\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa","3as\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa","3as\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class JMSLLTE_veh_ZetaClass_inf_emp;
	class RB205_emp_zetaclass: JMSLLTE_veh_ZetaClass_inf_emp
	{
		ACCESS_TRUE
		displayName = "Zeta-Class Heavy Cargo Shuttle";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY
		CARGO_XXL
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class RB205_vwing;
	class RB205_emp_vwing: RB205_vwing
	{
		ACCESS_TRUE
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3AS\3AS_Vwing\data\vwing_main_Imp_co.paa","3AS\3AS_Vwing\data\vwing_astromechdroid_Imp_co.paa","3AS\3AS_Vwing\data\vwing_wings_Imp_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class WM_Tiefighter;
	class RB205_emp_TIE_LN: WM_Tiefighter
	{
		ACCESS_TRUE
		displayName = "TIE/LN (Fighter)";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieInterceptor;
	class RB205_emp_TIE_IN: WM_TieInterceptor
	{
		ACCESS_TRUE
		displayName = "TIE/IN (Interceptor)";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieBomber;
	class RB205_emp_TIE_SA: WM_TieBomber
	{
		ACCESS_TRUE
		displayName = "TIE/SA (Bomber)";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieBomber_Cluster;
	class RB205_emp_TIE_SA_cluster: WM_TieBomber_Cluster
	{
		ACCESS_TRUE
		displayName = "TIE/SA (Bomber - Cluster)";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieDefender;
	class RB205_emp_TIE_D: WM_TieDefender
	{
		ACCESS_TRUE
		displayName = "TIE/D (Defender)";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieAdvanced;
	class RB205_emp_TIE_AD: WM_TieAdvanced
	{
		ACCESS_TRUE
		displayName = "TIE/AD (Advanced)";
		author = AUTHOR;
		crew = CREW_EMP_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	/*
		NAVAL
	*/
	class RB205_waterGlider_mg;
	class RB205_emp_waterGlider_mg: RB205_waterGlider_mg
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_waterGlider_at;
	class RB205_emp_waterGlider_at: RB205_waterGlider_at
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\optre_vehicles\warthog\data\turrets\m39_turret_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_waterGlider_aa;
	class RB205_emp_waterGlider_aa: RB205_waterGlider_aa
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_sdv;
	class RB205_emp_sdv: RB205_sdv
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
	};
	/*
		OTHER
	*/
	class RB205_rhoclass_crate_barracks;
	class RB205_emp_rhoclass_crate_barracks: RB205_rhoclass_crate_barracks
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa","3as\3as_republic_heli\rho_class\data\crate_int_co.paa","3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa","3as\3as_republic_heli\rho_class\data\clone_bed_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_rhoclass_crate_transport;
	class RB205_emp_rhoclass_crate_transport: RB205_rhoclass_crate_transport
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa","3as\3as_republic_heli\rho_class\data\crate_int_co.paa","3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa","3as\3as_republic_heli\rho_class\data\clone_bed_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_keeradak;
	class RB205_emp_keeradak: RB205_keeradak
	{
		ACCESS_TRUE
		crew = CREW_EMP_DEFAULT;
		VEH_INVENTORY
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_static\keeradak\data\Imp_aa_base_co.paa","3as\3as_republic_static\keeradak\data\Imp_aa_Gun_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class 3as_XX9;
	class RB205_emp_xx9: 3as_XX9
	{
		ACCESS_TRUE
		displayName = "XX-9 Heavy Turbolaser";
		author = AUTHOR;
		crew = CREW_EMP_DEFAULT;
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
	};
	class 3as_XX10;
	class RB205_emp_xx10: 3as_XX10
	{
		ACCESS_TRUE
		displayName = "XX-10 Heavy Turbolaser";
		author = AUTHOR;
		crew = CREW_EMP_DEFAULT;
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
	};
};