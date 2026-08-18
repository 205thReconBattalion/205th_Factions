class cfgPatches
{
	class RB205_cis_humanoids_variousSpecies
	{
		requiredAddons[] =
        {
            "RB205_core",
			"JMSLLTE_empire_mod",
			"RB205_cis_weapons"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"RB205_cis_humanoid_soldier_base",
			"RB205_cis_humanoid_officer_base",
			"RB205_cis_humanoid_agent_base",
			"RB205_cis_humanoid_aqualish",
			"RB205_cis_humanoid_aqualish_officer",
			"RB205_cis_humanoid_aqualish_agent",
			"RB205_cis_humanoid_duros",
			"RB205_cis_humanoid_duros_officer",
			"RB205_cis_humanoid_duros_agent",
			"RB205_cis_humanoid_nikto",
			"RB205_cis_humanoid_nikto_officer",
			"RB205_cis_humanoid_nikto_agent",
			"RB205_cis_humanoid_quarren",
			"RB205_cis_humanoid_quarren_officer",
			"RB205_cis_humanoid_quarren_agent",
			"RB205_cis_humanoid_trando",
			"RB205_cis_humanoid_trando_officer",
			"RB205_cis_humanoid_trando_agent"
		};
		weapons[] = {
			"RB205_U_cis_humanoid_soldier",
			"RB205_U_cis_humanoid_officer",
			"RB205_U_cis_humanoid_agent"
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_cis_humanoids_variousSpecies
	{
		displayName = "Various Species";
	};
};

#include "\RB205_core\macros.hpp"
#define FACTION "RB205_cis_humanoids"
#define SUBCATEGORY "RB205_cis_humanoids_variousSpecies"

class CfgVehicles
{
	class JMSLLTE_EmpOfficer_CISs_F;
	class RB205_cis_humanoid_soldier_base: JMSLLTE_EmpOfficer_CISs_F
	{
		ACCESS_TRUE
		displayName = "Human Soldier";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "RB205_U_cis_humanoid_soldier";
		
		side = 0;
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		
		//Inventory:
		linkedItems[] = { "ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		respawnlinkedItems[] = { "ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		items[] = { "RB205_ids_cis_civ" };
		respawnItems[] = {};
		backpack = "";
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
			"RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag"
		};
		respawnmagazines[] =
		{
			"RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag","RB205_E5_mag"
		};
		
		allowedHeadgearB[] = {""};
		headgearList[] = {"",1};
	};
	class JMSLLTE_EmpOfficer_CIS_F;
	class RB205_cis_humanoid_officer_base: JMSLLTE_EmpOfficer_CIS_F
	{
		ACCESS_TRUE
		displayName = "Human Officer";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "RB205_U_cis_humanoid_officer";
		
		side = 0;
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		
		//Inventory:
		linkedItems[] = { "ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		respawnlinkedItems[] = { "ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		items[] = { "RB205_ids_cis_civ" };
		respawnItems[] = {};
		backpack = "";
		weapons[] =
		{
			"RB205_RG4D",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"RB205_RG4D",
			"Throw","Put"
		};
		magazines[] =
		{
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag"
		};
		respawnmagazines[] =
		{
			"RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag","RB205_RG4D_mag"
		};
		
		allowedHeadgearB[] = {""};
		headgearList[] = {"",1};
	};
	class P_Loyalist_A280;
	class RB205_cis_humanoid_agent_base: P_Loyalist_A280
	{
		ACCESS_TRUE
		displayName = "Human Agent";
		identityTypes[] = {"LanguageENG_F","Head_NATO"};
		uniformClass = "RB205_U_cis_humanoid_agent";
		
		side = 0;
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		
		//Inventory:
		linkedItems[] = { "SFA_Officer_hat","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		respawnlinkedItems[] = { "SFA_Officer_hat","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		backpack = "";
		items[] = {};
		respawnItems[] = {};
		weapons[] =
		{
			"RB205_E5_commando",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"RB205_E5_commando",
			"Throw","Put"
		};
		magazines[] =
		{
			"RB205_E5_commando_mag","RB205_E5_commando_mag","RB205_E5_commando_mag","RB205_E5_commando_mag","RB205_E5_commando_mag",
			"3AS_ThermalDetonator"
		};
		respawnmagazines[] =
		{
			"RB205_E5_commando_mag","RB205_E5_commando_mag","RB205_E5_commando_mag","RB205_E5_commando_mag","RB205_E5_commando_mag",
			"3AS_ThermalDetonator"
		};
		
		allowedHeadgearB[] = {""};
		headgearList[] = {"",1};
	};
	#define LINKED_ITEMS \
		linkedItems[] = { "ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" }; \
		respawnlinkedItems[] = { "ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };

	class RB205_cis_humanoid_aqualish: RB205_cis_humanoid_soldier_base
	{
		ACCESS_TRUE
		displayName = "Aqualish Soldier";
		identityTypes[] = {"LanguageENG_F","HeadAqualish"};
	};
	class RB205_cis_humanoid_aqualish_officer: RB205_cis_humanoid_officer_base
	{
		ACCESS_TRUE
		displayName = "Aqualish Officer";
		identityTypes[] = {"LanguageENG_F","HeadAqualish"};
	};
	class RB205_cis_humanoid_aqualish_agent: RB205_cis_humanoid_agent_base
	{
		ACCESS_TRUE
		displayName = "Aqualish Agent";
		identityTypes[] = {"LanguageENG_F","HeadAqualish"};
		LINKED_ITEMS
	};
	
	class RB205_cis_humanoid_duros: RB205_cis_humanoid_soldier_base
	{
		ACCESS_TRUE
		displayName = "Duros Soldier";
		identityTypes[] = {"LanguageENG_F","HeadDuros"};
	};
	class RB205_cis_humanoid_duros_officer: RB205_cis_humanoid_officer_base
	{
		ACCESS_TRUE
		displayName = "Duros Officer";
		identityTypes[] = {"LanguageENG_F","HeadDuros"};
	};
	class RB205_cis_humanoid_duros_agent: RB205_cis_humanoid_agent_base
	{
		ACCESS_TRUE
		displayName = "Duros Agent";
		identityTypes[] = {"LanguageENG_F","HeadDuros"};
		LINKED_ITEMS
	};
	
	class RB205_cis_humanoid_nikto: RB205_cis_humanoid_soldier_base
	{
		ACCESS_TRUE
		displayName = "Nikto Soldier";
		identityTypes[] = {"LanguageENG_F","HeadNikto"};
	};
	class RB205_cis_humanoid_nikto_officer: RB205_cis_humanoid_officer_base
	{
		ACCESS_TRUE
		displayName = "Nikto Officer";
		identityTypes[] = {"LanguageENG_F","HeadNikto"};
	};
	class RB205_cis_humanoid_nikto_agent: RB205_cis_humanoid_agent_base
	{
		ACCESS_TRUE
		displayName = "Nikto Agent";
		identityTypes[] = {"LanguageENG_F","HeadNikto"};
		LINKED_ITEMS
	};

	class RB205_cis_humanoid_quarren: RB205_cis_humanoid_soldier_base
	{
		ACCESS_TRUE
		displayName = "Quarren Soldier";
		identityTypes[] = {"LanguageENG_F","HeadQuarren"};
	};
	class RB205_cis_humanoid_quarren_officer: RB205_cis_humanoid_officer_base
	{
		ACCESS_TRUE
		displayName = "Quarren Officer";
		identityTypes[] = {"LanguageENG_F","HeadQuarren"};
	};
	class RB205_cis_humanoid_quarren_agent: RB205_cis_humanoid_agent_base
	{
		ACCESS_TRUE
		displayName = "Quarren Agent";
		identityTypes[] = {"LanguageENG_F","HeadQuarren"};
		LINKED_ITEMS
	};
	
	class RB205_cis_humanoid_trando: RB205_cis_humanoid_soldier_base
	{
		ACCESS_TRUE
		displayName = "Trandoshan Soldier";
		identityTypes[] = {"LanguageENG_F","HeadTrando"};
	};
	class RB205_cis_humanoid_trando_officer: RB205_cis_humanoid_officer_base
	{
		ACCESS_TRUE
		displayName = "Trandoshan Officer";
		identityTypes[] = {"LanguageENG_F","HeadTrando"};
	};
	class RB205_cis_humanoid_trando_agent: RB205_cis_humanoid_agent_base
	{
		ACCESS_TRUE
		displayName = "Trandoshan Agent";
		identityTypes[] = {"LanguageENG_F","HeadTrando"};
		LINKED_ITEMS
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class JMSLLTE_EmpOfficer_CISs_F_CombatUniform: Uniform_Base
	{
		class ItemInfo;
	};
	class RB205_U_cis_humanoid_soldier: JMSLLTE_EmpOfficer_CISs_F_CombatUniform
	{
		ACCESS_TRUE
		displayName = "[CIS] Soldier Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_cis_humanoid_soldier_base";
		};
	};
	class JMSLLTE_EmpOfficer_CIS_F_CombatUniform: Uniform_Base
	{
		class ItemInfo;
	};
	class RB205_U_cis_humanoid_officer: JMSLLTE_EmpOfficer_CIS_F_CombatUniform
	{
		ACCESS_TRUE
		displayName = "[CIS] Officer Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_cis_humanoid_officer_base";
		};
	};
	class JLTS_CloneArmor;
	class P_LoyalistUniform: JLTS_CloneArmor
	{
		class ItemInfo;
	};
	class RB205_U_cis_humanoid_agent: P_LoyalistUniform
	{
		ACCESS_TRUE
		displayName = "[CIS] Agent Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_cis_humanoid_agent_base";
		};
	};
};