modded class ExpansionCarKey
{
	override void EEInit()
	{
		super.EEInit();
	}

	override bool CanDisplayAttachmentSlot(int slot_id)
	{
		EntityAI parent = GetHierarchyParent();

		if (parent && parent.IsInherited(Orxe_CarKeyCase))
		{
			return false;
		}

		return super.CanDisplayAttachmentSlot(slot_id);
	}
}