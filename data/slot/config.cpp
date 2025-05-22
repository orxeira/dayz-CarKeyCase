class CfgPatches
{
	class carKeyCase_slot
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Medical","DZ_Characters_Masks","DZ_Gear_Consumables","DZ_Characters"};
	};
};
class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		attachments[] += { "Orxe_CarKeyCase", "ExpansionCarKey" };
		class InventoryEquipment
		{
			playerSlots[] += { "Slot_CarKeyCase" };
		};
	};
};
class CfgSlots
{
	class Slot_CarKeyCase
	{
		name="Orxe_CarKeyCase";
		displayName="Car Key Case";
		ghostIcon="set:dayz_inventory image:pouches";
	};
};