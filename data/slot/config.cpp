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
		attachments[]=
		{
			"Head",
			"Shoulder",
			"Melee",
			"Headgear",
			"Mask",
			"Eyewear",
			"Hands",
			"LeftHand",
			"Gloves",
			"Armband",
			"Vest",
			"Body",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Splint_Right",
			"Orxe_CarKeyCase"
		};
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_Shoulder",
				"Slot_Melee",
				"Slot_Vest",
				"Slot_Body",
				"Slot_Hips",
				"Slot_Legs",
				"Slot_Back",
				"Slot_Headgear",
				"Slot_Mask",
				"Slot_Eyewear",
				"Slot_Gloves",
				"Slot_Feet",
				"Slot_Armband",
				"Slot_CarKeyCase"
			};
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