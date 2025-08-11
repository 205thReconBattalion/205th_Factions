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
			"RB205_cis_humanoid_aqualish",
			"RB205_cis_humanoid_aqualish_officer",
			"RB205_cis_humanoid_duros",
			"RB205_cis_humanoid_duros_officer",
			"RB205_cis_humanoid_nikto",
			"RB205_cis_humanoid_nikto_officer",
			"RB205_cis_humanoid_quarren",
			"RB205_cis_humanoid_quarren_officer",
			"RB205_cis_humanoid_trando",
			"RB205_cis_humanoid_trando_officer"
		};
		weapons[] = {
			"RB205_U_cis_humanoid_soldier",
			"RB205_U_cis_humanoid_officer"
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
		backpack = "";
		items[] = {};
		respawnItems[] = {};
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
		items[] = {};
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
};