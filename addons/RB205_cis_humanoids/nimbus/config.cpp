class cfgPatches
{
	class RB205_cis_humanoids_nimbus
	{
		requiredAddons[] =
        {
            "RB205_core",
			"ls_characters_jabiim",
			"RB205_cis_weapons",
			"RB205_cis_vehicles"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"RB205_nimbusCommando",
			"RB205_nimbusCommando_sniper",
			"RB205_nimbusCommando_heavy",
			"RB205_nimbusCommando_grenadier",
			"RB205_nimbusCommando_at",
			"RB205_nimbusCommando_aa",
			"RB205_nimbusCommando_ap",

			"RB205_B_nimbusCommando",

			"RB205_nimbusCommando_AAT",
			"RB205_nimbusCommando_CS",
			"RB205_nimbusCommando_FKS"
		};
		weapons[] = {
			"RB205_U_nimbusCommando",
			"RB205_H_nimbusCommando",
			"RB205_V_nimbusCommando"
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_cis_humanoids_nimbus
	{
		displayName = "Nimbus Commando";
	};
};

#include "\RB205_core\macros.hpp"
#define FACTION "RB205_cis_humanoids"
#define SUBCATEGORY "RB205_cis_humanoids_nimbus"

class CfgVehicles
{
	class ls_jabiim_nimbusCommando;
	class RB205_nimbusCommando: ls_jabiim_nimbusCommando
	{
		displayName = "Nimbus Commando";
		uniformClass = "RB205_U_nimbusCommando";
		
		side = 0;
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		identityTypes[] = {"LanguageENG_F","Head_m_zelosian"};
		
		//Inventory:
		linkedItems[] = { "RB205_H_nimbusCommando","RB205_V_nimbusCommando","RB205_NV_chip","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		respawnlinkedItems[] = { "RB205_H_nimbusCommando","RB205_V_nimbusCommando","RB205_NV_chip","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		items[] = { "RB205_ids_cis_civ" };
		respawnItems[] = {};
		backpack = "RB205_B_nimbusCommando";
		weapons[] =
		{
			"RB205_E5",
			"RB205_RG4D",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"RB205_E5",
			"RB205_RG4D",
			"Throw","Put"
		};
		magazines[] =
		{
			"RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
	};
	class RB205_nimbusCommando_sniper: RB205_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "Nimbus Commando (Sniper)";
		weapons[] =
		{
			"RB205_E5S",
			"RB205_RG4D",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"RB205_E5S",
			"RB205_RG4D",
			"Throw","Put"
		};
		magazines[] =
		{
			"RB205_E5S_mag","RB205_E5S_mag","RB205_E5S_mag","RB205_E5S_mag","RB205_E5S_mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"RB205_E5S_mag","RB205_E5S_mag","RB205_E5S_mag","RB205_E5S_mag","RB205_E5S_mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
	};
	class RB205_nimbusCommando_heavy: RB205_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "Nimbus Commando (Heavy)";
		weapons[] =
		{
			"RB205_E5C_stock",
			"RB205_RG4D",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"RB205_E5C_stock",
			"RB205_RG4D",
			"Throw","Put"
		};
		magazines[] =
		{
			"RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
	};
	class RB205_nimbusCommando_grenadier: RB205_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "Nimbus Commando (Grenadier)";
		weapons[] =
		{
			"WM_V6D",
			"RB205_RG4D",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"WM_V6D",
			"RB205_RG4D",
			"Throw","Put"
		};
		magazines[] =
		{
			"WM_V6D_Mag","WM_V6D_Mag","WM_V6D_Mag","WM_V6D_Mag","WM_V6D_Mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"WM_V6D_Mag","WM_V6D_Mag","WM_V6D_Mag","WM_V6D_Mag","WM_V6D_Mag",
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag",
			"3AS_ThermalDetonator"
		};
	};
	class RB205_nimbusCommando_at: RB205_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "Nimbus Commando (AT)"
		weapons[] += { "RB205_RPS6_CIS" };
		respawnweapons[] += { "RB205_RPS6_CIS" };
		backpack = "RB205_nimbusCommando_backpack_at";
	};
	class RB205_nimbusCommando_aa: RB205_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "Nimbus Commando (AA)"
		weapons[] += { "RB205_E60R" };
		respawnweapons[] += { "RB205_E60R" };
		backpack = "RB205_nimbusCommando_backpack_aa";
	};
	class RB205_nimbusCommando_ap: RB205_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "Nimbus Commando (AP)"
		weapons[] += { "RB205_E60R" };
		respawnweapons[] += { "RB205_E60R" };
		backpack = "RB205_nimbusCommando_backpack_ap";
	};


	class ls_jabiimBackpack_nimbusCommando;
	class RB205_B_nimbusCommando: ls_jabiimBackpack_nimbusCommando
	{
		displayName = "Nimbus Commando Backpack";
	};
	class RB205_nimbusCommando_backpack_at: RB205_B_nimbusCommando
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RB205_RPS6_AT_mag {
				magazine = "RB205_RPS6_AT_mag";
				count = 3;
			}
		};
	};
	class RB205_nimbusCommando_backpack_aa: RB205_B_nimbusCommando
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RB205_E60R_AA_mag {
				magazine = "RB205_E60R_AA_mag";
				count = 3;
			}
		};
	};
	class RB205_nimbusCommando_backpack_ap: RB205_B_nimbusCommando
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RB205_E60R_AP_mag {
				magazine = "RB205_E60R_AP_mag";
				count = 3;
			}
		};
	};



	class RB205_AAT;
	class RB205_nimbusCommando_AAT: RB205_AAT
	{
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		crew = "RB205_nimbusCommando";
		hiddenSelectionsTextures[] = {"3AS\3AS_AAT\data\CIS_White_AAT_CO.paa"};
	};
	class RB205_combatSpeeder;
	class RB205_nimbusCommando_CS: RB205_combatSpeeder
	{
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		crew = "RB205_nimbusCommando";
	};
	class RB205_flitknot;
	class RB205_nimbusCommando_FKS: RB205_flitknot
	{
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		crew = "RB205_nimbusCommando";
	};
};

class cfgWeapons
{
	class ls_uniform_base;
	class ls_jabiimUniform_nimbusCommando: ls_uniform_base
	{
		class ItemInfo;
	};
	class RB205_U_nimbusCommando: ls_jabiimUniform_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "[CIS] Nimbus Commando Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_nimbusCommando";
		};
	};

	class ls_jabiimHelmet_nimbusCommando;
	class RB205_H_nimbusCommando: ls_jabiimHelmet_nimbusCommando
	{
		ACCESS_TRUE
		displayName = "[CIS] Nimbus Commando Helmet";
	};

	class RB205_vest_co_base;
	class RB205_V_nimbusCommando: RB205_vest_co_base
	{
		ACCESS_TRUE
		displayName = "[CIS] Nimbus Commando Vest";
	};
};

class CfgGroups
{
    class East
	{
		class RB205_cis_humanoids_groups
		{
			name = "[205] CIS - Humanoids";
			class Infantry_Nimbus
			{
				name = "Nimbus Commando";
				#include "groups.hpp"
			};
		};
	};
};