class CfgPatches
{
	class RB205_rebel_partisan_units
	{
		requiredAddons[] =
		{
			"RB205_cis"
		};
		requiredVersion = 1.0;
		author = "Putzi";
		units[] = {
			"RB205_partisan_squadLead",
			"RB205_partisan_fighter",
			"RB205_partisan_fighterAT",
			"RB205_partisan_fighterAA"
			};
		weapons[] = {};
	};
};

#include "\RB205_cis\droids\macros.hpp"
#include "\RB205_rebel\partisans\macros.hpp"

class CfgVehicles
{
	class JMSLLTE_part_saw_serg;					
	class RB205_partisan_squadLead : JMSLLTE_part_saw_serg
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Squad Lead";
		ICON_DEFAULT
		weapons[]=          { WEAPON_E5, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, "Throw", "Put" };
		magazines[]=        { MAG_8(MAG_E5)};
		respawnMagazines[]= { MAG_8(MAG_E5)};
		faction = "RB205_rebel";
		editorSubcategory = "RB205_rebel_partisans";
		linkedItems[]= {"JMSLLTE_InvVest_armor", "JMSLLTE_Commando_saw_helmet","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnlinkedItems[]=   {"JMSLLTE_InvVest_armor", "JMSLLTE_Commando_saw_helmet","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		items[]=            {INDIPENDENT_ID_CARD, MAG_10(PACKING_BANDAGE)};
		respawnItems[]=     {INDIPENDENT_ID_CARD, MAG_10(PACKING_BANDAGE)};
	};

	class RB205_partisan_fighter : RB205_partisan_squadLead
	{
		displayName = "Fighter";
		uniformClass = "JMSLLTE_ScumPart_bl_F_CombatUniform";
	};

	class RB205_partisan_fighter_AT : RB205_partisan_squadLead
	{
		displayName = "Fighter (AT)";
		uniformClass = "JMSLLTE_ScumPart_br_F_CombatUniform";
		weapons[]=          { WEAPON_E5, WEAPON_AT, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, WEAPON_AT, "Throw", "Put" };
		backpack = "RB205_partisan_fighter_backpack_AT";
		magazines[]=        { MAG_8(MAG_E5), MAG_AT};
		respawnMagazines[]= { MAG_8(MAG_E5), MAG_AT};
	};

	class RB205_partisan_fighter_AA : RB205_partisan_fighterAT
	{
		displayName = "Fighter (AA)";
		uniformClass = "JMSLLTE_ScumPathfinder_brown_F_CombatUniform";
		weapons[]=          { WEAPON_E5, WEAPON_AA, "Throw", "Put" };
		respawnWeapons[]=   { WEAPON_E5, WEAPON_AA, "Throw", "Put" };
		backpack = "RB205_partisan_fighter_backpack_AA";
		magazines[]=        { MAG_8(MAG_E5), MAG_AA};
		respawnMagazines[]= { MAG_8(MAG_E5), MAG_AA};
	};

	class RB205_partisan_medic : RB205_partisan_squadLead
	{
		displayName = "Medic";
		uniformClass = "JMSLLTE_ScumPart_yel_F_CombatUniform";
		backpack = "RB205_partisan_fighter_backpack_medic";
	};

	class RB205_partisan_fighter_heavy : RB205_partisan_squadLead
	{
		displayName = "Heavy";
		uniformClass = "JMSLLTE_ScumPart_yel_F_CombatUniform";
		backpack = "RB205_partisan_fighter_backpack_heavy";
	};


	//Backpacks
	class JMSLLTE_back_rebsmall_v1;
	class RB205_partisan_fighter_backpack_AA :  JMSLLTE_back_rebsmall_v1 
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AA,2)
		};
	};
	class RB205_partisan_fighter_backpack_AT :  JMSLLTE_back_rebsmall_v1 
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(MAG_TP_AT,2)
		};
	};
	class JMSLLTE_back_rebpack_v1_black;
	class RB205_partisan_fighter_backpack_medic : JMSLLTE_back_rebpack_v1_black
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(ACE_salineIV,2)
			MAG_XX(ACE_salineIV_500,2)
			MAG_XX(ACE_elasticBandage,20)
		};
	};

	class JMSLLTE_back_rebpack_v1_wood;
	class RB205_partisan_fighter_backpack_heavy : JMSLLTE_back_rebpack_v1_wood
	{
		scope = 1;
		class TransportMagazines
		{
			MAG_XX(ACE_salineIV,2)
		};
	};

};