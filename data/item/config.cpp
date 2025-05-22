class CfgPatches
{
	class DZ_Gear_Containers
	{
		units[]={ "Orxe_CarKeyCase" };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
    class SmallProtectorCase;
    class Orxe_CarKeyCase: SmallProtectorCase
    {
        scope = 2;
        weight=0;
		displayName = "Car Key Case";
		descriptionShort = "A nifty case to carry your car keys in one place. Do not lose it! Designed by Orxeira";
        itemSize[]={2,2};
		itemsCargoSize[]={0,0};
        inventorySlot[] = 
        {
            "Orxe_CarKeyCase"
        };
        attachments[] = 
        {
            "ExtensionCarKey1",
            "ExtensionCarKey2",
            "ExtensionCarKey3",
            "ExtensionCarKey4",
            "ExtensionCarKey5",
            "ExtensionCarKey6",
            "ExtensionCarKey7",
            "ExtensionCarKey8",
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=7500;
				};
			};
			class GlobalArmor
			{
                class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
                class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
                class Infected
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
        canBeDigged=0;
		isMeleeWeapon=0;
        hiddenSelections[]=
		{
			"zbytek"
		};
        hiddenSelectionsTextures[] = 
        {
            "\CarKeyCase\data\item\textures\carkeycase_co.paa"
        };
    };
};

class CfgSlots
{
    class Slot_CarKey1
    {
        name="ExtensionCarKey1";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey2
    {
        name="ExtensionCarKey2";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey3
    {
        name="ExtensionCarKey3";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey4
    {
        name="ExtensionCarKey4";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey5
    {
        name="ExtensionCarKey5";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey6
    {
        name="ExtensionCarKey6";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey7
    {
        name="ExtensionCarKey7";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
    class Slot_CarKey8
    {
        name="ExtensionCarKey8";
        displayName="Car Key";
        ghostIcon="set:dayz_inventory image:pouches";
    };
};