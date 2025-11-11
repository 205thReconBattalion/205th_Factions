class cfgPatches
{
	class RB205_cis_humanoids_mimbanese
	{
		requiredAddons[] =
        {
            "RB205_core",
			"JMSLLTE_Faction_name",
			"RB205_cis_weapons"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"RB205_mimbaneseRebel",
			"RB205_mimbaneseRebel_sniper",
			"RB205_mimbaneseRebel_heavy",
			"RB205_mimbaneseRebel_at",
			"RB205_mimbaneseRebel_demo"
		};
		weapons[] = {};
	};
};

class CfgEditorSubcategories
{
	class RB205_cis_humanoids_mimbanese
	{
		displayName = "Mimbanese Paramilitary Forces";
	};
};

#include "\RB205_core\macros.hpp"
#define FACTION "RB205_cis_humanoids"
#define SUBCATEGORY "RB205_cis_humanoids_mimbanese"

class CfgVehicles
{
	class JMSLLTE_scum_mimb_trooper;
	class RB205_mimbaneseRebel: JMSLLTE_scum_mimb_trooper
	{
		displayName = "Mimbanese Rebel";
		
		side = 0;
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		
		//Inventory:
		linkedItems[] = { "JMSLLTE_Scum_mimb_armor","RB205_NV_chip","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		respawnlinkedItems[] = { "JMSLLTE_Scum_mimb_armor","RB205_NV_chip","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		items[] = {};
		respawnItems[] = {};
		backpack = "JMSLLTE_back_mimbcover_v1";
		weapons[] =
		{
			"RB205_E5",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"RB205_E5",
			"Throw","Put"
		};
		magazines[] =
		{
			"RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag",
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag",
			"3AS_ThermalDetonator"
		};
	};
	class RB205_mimbaneseRebel_sniper: RB205_mimbaneseRebel
	{
		ACCESS_TRUE
		displayName = "Mimbanese Rebel (Sniper)";
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
	class RB205_mimbaneseRebel_heavy: RB205_mimbaneseRebel
	{
		ACCESS_TRUE
		displayName = "Mimbanese Rebel (Heavy)";
		weapons[] =
		{
			"RB205_E5C_stock",
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
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag","RB205_E5C_mag",
			"3AS_ThermalDetonator"
		};
	};
	class RB205_mimbaneseRebel_at: RB205_mimbaneseRebel
	{
		ACCESS_TRUE
		displayName = "Mimbanese Rebel (AT)"
		weapons[] += { "RB205_RPS6_CIS" };
		respawnweapons[] += { "RB205_RPS6_CIS" };
		backpack = "RB205_mimbaneseRebel_backpack_at";
	};
	class RB205_mimbaneseRebel_demo: RB205_mimbaneseRebel
	{
		ACCESS_TRUE
		displayName = "Mimbanese Rebel (Demo)"
		backpack = "RB205_mimbaneseRebel_backpack_demo";
	};

	class JMSLLTE_back_mimbcover_v1;
	class RB205_mimbaneseRebel_backpack_at: JMSLLTE_back_mimbcover_v1
	{
		scope = 1;
		maximumLoad = 500;
		class TransportMagazines
		{
			class _xx_RB205_RPS6_AT_mag {
				magazine = "RB205_RPS6_AT_mag";
				count = 3;
			}
		};
	};
	class RB205_mimbaneseRebel_backpack_demo: JMSLLTE_back_mimbcover_v1
	{
		scope = 1;
		maximumLoad = 500;
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag {
				magazine = "ATMine_Range_Mag";
				count = 3;
			}
			class _xx_APERSMine_Range_Mag {
				magazine = "APERSMine_Range_Mag";
				count = 10;
			}
			class _xx_APERSMineDispenser_Mag {
				magazine = "APERSMineDispenser_Mag";
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

class CfgGroups
{
    class East
	{
		class RB205_cis_humanoids_groups
		{
			name = "[205] CIS - Humanoids";
			class Infantry_Mimbanese
			{
				name = "Mimbanese Paramilitary Forces";
				#include "groups.hpp"
			};
		};
	};
};