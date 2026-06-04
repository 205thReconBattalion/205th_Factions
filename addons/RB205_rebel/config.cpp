class CfgPatches
{
	class RB205_rebel
	{
		requiredAddons[] =
        {
            "RB205_core",
			"RB205_cis"
        };
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	class RB205_rebel
	{
		displayName = "[205] Rebels";
		priority = 999;
		side = 2;
		icon = "\ls\core\addons\data\insignias\cis_ca.paa";
		flag = "\ls\core\addons\data\flags\flag_cis_ca.paa";
	};
};