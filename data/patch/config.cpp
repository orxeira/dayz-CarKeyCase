class CfgPatches
{
	class override_DayZExpansion_Vehicles_Objects_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Camping","DZ_Scripts","DayZExpansion_Vehicles_Objects_Gear"};
	};
};
class CfgVehicles
{
    class Inventory_Base;
    class ExpansionCarKey: Inventory_Base
    {
        inventorySlot[] = {
			"ExtensionCarKey1",
			"ExtensionCarKey2",
			"ExtensionCarKey3",
			"ExtensionCarKey4",
			"ExtensionCarKey5",
			"ExtensionCarKey6",
			"ExtensionCarKey7",
			"ExtensionCarKey8",
		};
    };
};