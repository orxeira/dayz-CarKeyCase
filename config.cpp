class CfgPatches
{
	class orxe_car_key_case
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				"DZ_Data"};
	};
};

class CfgMods
{
	class CarKeyCase
	{
		dir = "CarKeyCase";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CarKeyCase";
		credits = "Orxeira";
		author = "Orxeira";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencie[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"CarKeyCase\scripts\4_World"};
			};
		};
	};
};