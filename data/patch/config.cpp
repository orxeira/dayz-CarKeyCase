class CfgPatches
{
	class override_DayZExpansion_Vehicles_Objects_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Gear_Camping",
			"DZ_Scripts",
			"DayZExpansion_Vehicles_Objects_Gear",
			"rag_baseitems",
			"rag_baseitems_others"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ExpansionCarKey : Inventory_Base
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
			"Orxe_CarKeyCase"};
	};

	class TireRepairKit : Inventory_Base
	{
		inventorySlot[] = {
			"TireRepair"};
	};

	class SparkPlug : Inventory_Base
	{
		inventorySlot[] = {
			"SparkPlug"};
	};

	class Wrench : Inventory_Base
	{
		inventorySlot[] = {
			"Wrench"};
	};

	class rag_baseitems_placeable_base;
	class rag_baseitems_notebook : rag_baseitems_placeable_base
	{
		inventorySlot[] = {
			"Notebook"};
	};
};