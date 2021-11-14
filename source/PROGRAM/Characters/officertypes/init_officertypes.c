void eInitOfficerTypes()
{
	//Set Personal Perk
	OfficerTypes.Combat.perks.BasicDefence = 1;
	OfficerTypes.Combat.perks.AdvancedDefence = 1;
	OfficerTypes.Combat.perks.Toughness = 1;
	OfficerTypes.Combat.perks.CriticalHit = 1;
	OfficerTypes.Combat.perks.SwordplayProfessional = 1;
	OfficerTypes.Combat.perks.Gunman = 1;
	OfficerTypes.Combat.perks.GunProfessional = 1;
	OfficerTypes.Combat.perks.ImproveAiming = 1;
	OfficerTypes.Combat.perks.GunFighter = 1;
	OfficerTypes.Combat.perks.Rush = 1;

	string type = OFFIC_TYPE_RANDCHAR;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 2;
	OfficerTypes.(type).skills.Fencing.importance = 8;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 1;
	OfficerTypes.(type).skills.Accuracy.importance = 4;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).EnemyType = 1;
	OfficerTypes.(type).rankbonus = -5;
	OfficerTypes.(type).pricemod = 0.7;
	OfficerTypes.(type).noncontribchance = 60;
	if(isPerkExisting("ImprovePotions")) {OfficerTypes.(type).perks.ImprovePotions = 1};
	if(isPerkExisting("DefendPoison")) {OfficerTypes.(type).perks.DefendPoison = 1};
	if(isPerkExisting("HighStakes")) {OfficerTypes.(type).perks.HighStakes = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.(type).perks.Cooking = 1};

	
	type = OFFIC_TYPE_CIVILIAN;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).rankbonus = -10;
	OfficerTypes.(type).pricemod = 0.7;
	OfficerTypes.(type).noncontribchance = 90;
	//Just some perks for him so he looks less pathetic
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.(type).perks.BasicCommerce = 1};
	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("HighStakes")) {OfficerTypes.(type).perks.HighStakes = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.(type).perks.Cooking = 1};

	
	type = OFFIC_TYPE_SAILOR;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Sailing.importance = 10;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Repair.importance = 5;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).skills.Sneak.importance = 3;
	OfficerTypes.(type).rankbonus = -5;
	OfficerTypes.(type).pricemod = 0.5;
	OfficerTypes.(type).noncontribchance = 35;
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.(type).perks.BasicDamageControl = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("ShipTurnRateUp")) {OfficerTypes.(type).perks.ShipTurnRateUp = 1};
	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("HighStakes")) {OfficerTypes.(type).perks.HighStakes = 1};
	
	//This one is used for shopkeepers
	type = OFFIC_TYPE_SHOPKEEPER;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 2;
	OfficerTypes.(type).skills.Commerce.importance = 10;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).skills.Sneak.importance = 4;
	OfficerTypes.(type).rankbonus = -15;
	OfficerTypes.(type).hpbasebonus = 20;
	OfficerTypes.(type).hplevelbonus = 2;
	OfficerTypes.(type).noncontribchance = 20;
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.(type).perks.BasicCommerce = 1};
	if(isPerkExisting("AdvancedCommerce")) {OfficerTypes.(type).perks.AdvancedCommerce = 1};
	if(isPerkExisting("Trustworthy")) {OfficerTypes.(type).perks.Trustworthy = 1};
//	if(isPerkExisting("BasicLandOwner")) {OfficerTypes.(type).perks.BasicLandOwner = 1};
	
	//This one is used for townguards
	type = OFFIC_TYPE_GUARD;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 10;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Accuracy.importance = 4;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Defence.importance = 4;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).rankbonus = 10;
	OfficerTypes.(type).hpbasebonus = 30;
	OfficerTypes.(type).hplevelbonus = 5;
	OfficerTypes.(type).pricemod = 1.10;
	OfficerTypes.(type).noncontribchance = 0;
	if(isPerkExisting("ImprovePotions")) {OfficerTypes.(type).perks.ImprovePotions = 1};
	if(isPerkExisting("DefendPoison")) {OfficerTypes.(type).perks.DefendPoison = 1};
	
	type = OFFIC_TYPE_CAPMERCHANT;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Leadership.importance = 4;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Sailing.importance = 8;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Repair.importance = 3;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Defence.importance = 2;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Commerce.importance = 6;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).skills.Sneak.importance = 3;
	OfficerTypes.(type).notcontribute = 1;
	OfficerTypes.(type).rankbonus = 3;
	OfficerTypes.(type).hpbasebonus = 25;
	OfficerTypes.(type).pricemod = 1.25;
	OfficerTypes.(type).noncontribchance = 10;
	OfficerTypes.(type).crewtype = OFFIC_TYPE_SAILOR;
	if(isPerkExisting("ShipTurnRateUp")) {OfficerTypes.(type).perks.ShipTurnRateUp = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("SandbankManeuver")) {OfficerTypes.(type).perks.SandbankManeuver = 1};
	if(isPerkExisting("StormProfessional")) {OfficerTypes.(type).perks.StormProfessional = 1};
	if(isPerkExisting("SailingProfessional")) {OfficerTypes.(type).perks.SailingProfessional = 1};
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.(type).perks.BasicDamageControl = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.(type).perks.SailsDamageUp = 1};
//	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("InstantRepair")) {OfficerTypes.(type).perks.InstantRepair = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.(type).perks.Cooking = 1};
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.(type).perks.BasicCommerce = 1};
	if(isPerkExisting("AdvancedCommerce")) {OfficerTypes.(type).perks.AdvancedCommerce = 1};
	if(isPerkExisting("Trustworthy")) {OfficerTypes.(type).perks.Trustworthy = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};
	
	type = OFFIC_TYPE_REGCAP;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Leadership.importance = 7;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 4;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Sailing.importance = 5;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Accuracy.importance = 3;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Cannons.importance = 3;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Grappling.importance = 4;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Repair.importance = 2;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Defence.importance = 6;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).notcontribute = 1;
	OfficerTypes.(type).rankbonus = 5;
	OfficerTypes.(type).hpbasebonus = 10;
	OfficerTypes.(type).pricemod = 1.23;
	OfficerTypes.(type).noncontribchance = 15;
	OfficerTypes.(type).crewtype = OFFIC_TYPE_ABORDAGE;
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.(type).perks.BasicDamageControl = 1};
	if(isPerkExisting("AdvancedDamageControl")) {OfficerTypes.(type).perks.AdvancedDamageControl = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("FastReload")) {OfficerTypes.(type).perks.FastReload = 1};
	if(isPerkExisting("HullDamageUp")) {OfficerTypes.(type).perks.HullDamageUp = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.(type).perks.SailsDamageUp = 1};
	if(isPerkExisting("CrewDamageUp")) {OfficerTypes.(type).perks.CrewDamageUp = 1};
	if(isPerkExisting("CriticalShoot")) {OfficerTypes.(type).perks.CriticalShoot = 1};
	if(isPerkExisting("LongRangeShoot")) {OfficerTypes.(type).perks.LongRangeShoot = 1};
	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.(type).perks.LongRangeGrappling = 1};
	if(isPerkExisting("MusketsShoot")) {OfficerTypes.(type).perks.MusketsShoot = 1};
//	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("IronWill")) {OfficerTypes.(type).perks.IronWill = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};

	type = OFFIC_TYPE_CAPNAVY;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Leadership.importance = 8;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 4;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Sailing.importance = 6;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Accuracy.importance = 2;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Cannons.importance = 3;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).notcontribute = 1;
	OfficerTypes.(type).rankbonus = 10;
	OfficerTypes.(type).hpbasebonus = 40;
	OfficerTypes.(type).hplevelbonus = 2;
	OfficerTypes.(type).pricemod = 1.25;
	OfficerTypes.(type).crewtype = OFFIC_TYPE_GUARD;
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.(type).perks.BasicDamageControl = 1};
	if(isPerkExisting("AdvancedDamageControl")) {OfficerTypes.(type).perks.AdvancedDamageControl = 1};
	if(isPerkExisting("ProfessionalDamageControl")) {OfficerTypes.(type).perks.ProfessionalDamageControl = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	if(isPerkExisting("RiggingAdvance")) {OfficerTypes.(type).perks.RiggingAdvance = 1};
	if(isPerkExisting("FastReload")) {OfficerTypes.(type).perks.FastReload = 1};
	if(isPerkExisting("HullDamageUp")) {OfficerTypes.(type).perks.HullDamageUp = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.(type).perks.SailsDamageUp = 1};
	if(isPerkExisting("CrewDamageUp")) {OfficerTypes.(type).perks.CrewDamageUp = 1};
	if(isPerkExisting("CriticalShoot")) {OfficerTypes.(type).perks.CriticalShoot = 1};
	if(isPerkExisting("LongRangeShoot")) {OfficerTypes.(type).perks.LongRangeShoot = 1};
	if(isPerkExisting("CannonProfessional")) {OfficerTypes.(type).perks.CannonProfessional = 1};
	if(isPerkExisting("Troopers")) {OfficerTypes.(type).perks.Troopers = 1};
//	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("HighStakes")) {OfficerTypes.(type).perks.HighStakes = 1};
	if(isPerkExisting("IronWill")) {OfficerTypes.(type).perks.IronWill = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};
	
	type = OFFIC_TYPE_CAPPIRATE;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Leadership.importance = 6;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 10;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Sailing.importance = 3;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Accuracy.importance = 3;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Cannons.importance = 5;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Grappling.importance = 8;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).notcontribute = 1;
	OfficerTypes.(type).rankbonus = 8;
	OfficerTypes.(type).hpbasebonus = 10;
	OfficerTypes.(type).hplevelbonus = 5;
	OfficerTypes.(type).pricemod = 1.19;
	OfficerTypes.(type).noncontribchance = 30;
	OfficerTypes.(type).crewtype = OFFIC_TYPE_PIRATE;
	if(isPerkExisting("DefendPoison")) {OfficerTypes.(type).perks.DefendPoison = 1};
	if(isPerkExisting("ShipTurnRateUp")) {OfficerTypes.(type).perks.ShipTurnRateUp = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("StormProfessional")) {OfficerTypes.(type).perks.StormProfessional = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.(type).perks.SailsDamageUp = 1};
	if(isPerkExisting("CrewDamageUp")) {OfficerTypes.(type).perks.CrewDamageUp = 1};
	if(isPerkExisting("LongRangeShoot")) {OfficerTypes.(type).perks.LongRangeShoot = 1};
	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.(type).perks.LongRangeGrappling = 1};
	if(isPerkExisting("MusketsShoot")) {OfficerTypes.(type).perks.MusketsShoot = 1};
	if(isPerkExisting("GrapplingProfessional")) {OfficerTypes.(type).perks.GrapplingProfessional = 1};
//	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("Disguiser")) {OfficerTypes.(type).perks.Disguiser = 1};
	if(isPerkExisting("ImproveSmuggling")) {OfficerTypes.(type).perks.ImproveSmuggling = 1};
	if(isPerkExisting("Brander")) {OfficerTypes.(type).perks.Brander = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};

	type = OFFIC_TYPE_CAPPRIVATEER;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Leadership.importance = 8;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 8;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Sailing.importance = 6;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Repair.importance = 5;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).skills.Sneak.importance = 3;
	OfficerTypes.(type).notcontribute = 1;
	OfficerTypes.(type).rankbonus = 8;
	OfficerTypes.(type).hpbasebonus = 20;
	OfficerTypes.(type).hplevelbonus = 4;
	OfficerTypes.(type).pricemod = 1.20;
	OfficerTypes.(type).crewtype = OFFIC_TYPE_ABORDAGE;
	if(isPerkExisting("DefendPoison")) {OfficerTypes.(type).perks.DefendPoison = 1};
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.(type).perks.BasicDamageControl = 1};
	if(isPerkExisting("AdvancedDamageControl")) {OfficerTypes.(type).perks.AdvancedDamageControl = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	if(isPerkExisting("FastReload")) {OfficerTypes.(type).perks.FastReload = 1};
	if(isPerkExisting("ShipTurnRateUp")) {OfficerTypes.(type).perks.ShipTurnRateUp = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("StormProfessional")) {OfficerTypes.(type).perks.StormProfessional = 1};
	if(isPerkExisting("SandbankManeuver")) {OfficerTypes.(type).perks.SandbankManeuver = 1};
	if(isPerkExisting("SailingProfessional")) {OfficerTypes.(type).perks.SailingProfessional = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.(type).perks.Cooking = 1};
//	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("IronWill")) {OfficerTypes.(type).perks.IronWill = 1};
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.(type).perks.BasicCommerce = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};
	if(isPerkExisting("Brander")) {OfficerTypes.(type).perks.Brander = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};

	//Pirate (for crews)
	type = OFFIC_TYPE_PIRATE;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 6;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 1;
	OfficerTypes.(type).skills.Cannons.importance = 4;
	OfficerTypes.(type).skills.Grappling = 2;
	OfficerTypes.(type).skills.Grappling.importance = 10;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).EnemyType = 1;
	OfficerTypes.(type).rankbonus = -3;
	OfficerTypes.(type).hpbasebonus = 25;
	OfficerTypes.(type).hplevelbonus = -2;
	OfficerTypes.(type).noncontribchance = 30;
	if(isPerkExisting("DefendPoison")) {OfficerTypes.(type).perks.DefendPoison = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.(type).perks.SailsDamageUp = 1};
	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.(type).perks.LongRangeGrappling = 1};
	if(isPerkExisting("Disguiser")) {OfficerTypes.(type).perks.Disguiser = 1};
	if(isPerkExisting("ImproveSmuggling")) {OfficerTypes.(type).perks.ImproveSmuggling = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.(type).perks.Cooking = 1};
	
	//Boatswain
	type = OFFIC_TYPE_BOATSWAIN;
	OfficerTypes.(type).skills.Leadership = 1;
	OfficerTypes.(type).skills.Leadership.importance = 5;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 3;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 2;
	OfficerTypes.(type).skills.Grappling.importance = 10;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).usableoffictype = true;
	OfficerTypes.(type).hplevelbonus = 3;
	OfficerTypes.(type).noncontribchance = 10;
	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.(type).perks.LongRangeGrappling = 1};
	if(isPerkExisting("GrapplingProfessional")) {OfficerTypes.(type).perks.GrapplingProfessional = 1};
	if(isPerkExisting("InstantBoarding")) {OfficerTypes.(type).perks.InstantBoarding = 1};
	if(isPerkExisting("HighStakes")) {OfficerTypes.(type).perks.HighStakes = 1};
	if(isPerkExisting("ImproveSmuggling")) {OfficerTypes.(type).perks.ImproveSmuggling = 1};
	if(isPerkExisting("MusketsShoot")) {OfficerTypes.(type).perks.MusketsShoot = 1};

	if(isPerkExisting("BasicFirstAid")) {OfficerTypes.(type).perks.BasicFirstAid = 1};
	
	//Cannoneer
	type = OFFIC_TYPE_CANNONEER;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 4;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 2;
	OfficerTypes.(type).skills.Accuracy.importance = 10;
	OfficerTypes.(type).skills.Cannons = 2;
	OfficerTypes.(type).skills.Cannons.importance = 10;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).usableoffictype = true;
	if(isPerkExisting("FastReload")) {OfficerTypes.(type).perks.FastReload = 1};
	if(isPerkExisting("ImmediateReload")) {OfficerTypes.(type).perks.ImmediateReload = 1};
	if(isPerkExisting("HullDamageUp")) {OfficerTypes.(type).perks.HullDamageUp = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.(type).perks.SailsDamageUp = 1};
	if(isPerkExisting("CrewDamageUp")) {OfficerTypes.(type).perks.CrewDamageUp = 1};
	if(isPerkExisting("CriticalShoot")) {OfficerTypes.(type).perks.CriticalShoot = 1};
	if(isPerkExisting("LongRangeShoot")) {OfficerTypes.(type).perks.LongRangeShoot = 1};
	if(isPerkExisting("CannonProfessional")) {OfficerTypes.(type).perks.CannonProfessional = 1};
	
	//Quarter Master - Master Purser in fact.
	type = OFFIC_TYPE_QMASTER;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 2;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 1;
	OfficerTypes.(type).skills.Repair.importance = 4;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 2;
	OfficerTypes.(type).skills.Commerce.importance = 10;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).skills.Sneak.importance = 4;
	OfficerTypes.(type).usableoffictype = true;
	OfficerTypes.(type).hpbasebonus = 30;
	OfficerTypes.(type).pricemod = 0.95;
	if(isPerkExisting("Disguiser")) {OfficerTypes.(type).perks.Disguiser = 1};
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.(type).perks.BasicCommerce = 1};
	if(isPerkExisting("AdvancedCommerce")) {OfficerTypes.(type).perks.AdvancedCommerce = 1};
	if(isPerkExisting("Trustworthy")) {OfficerTypes.(type).perks.Trustworthy = 1};
//	if(isPerkExisting("BasicLandOwner")) {OfficerTypes.(type).perks.BasicLandOwner = 1};
	if(isPerkExisting("ImproveSmuggling")) {OfficerTypes.(type).perks.ImproveSmuggling = 1};
	if(isPerkExisting("AdvanceSmuggling")) {OfficerTypes.(type).perks.AdvanceSmuggling = 1};
	
	
	//Navigator - what is he supposed to do, exactly?...
	type = OFFIC_TYPE_NAVIGATOR;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 3;
	OfficerTypes.(type).skills.Sailing = 2;
	OfficerTypes.(type).skills.Sailing.importance = 10;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;			// set from 0 to 1 by El Rapido Set back to 0 by Levis to balance
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 1;				// set to 1 for compensation of leadership
	OfficerTypes.(type).skills.Sneak.importance = 4;
	OfficerTypes.(type).usableoffictype = true;
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("ShipTurnRateUp")) {OfficerTypes.(type).perks.ShipTurnRateUp = 1};
	if(isPerkExisting("StormProfessional")) {OfficerTypes.(type).perks.StormProfessional = 1};
	if(isPerkExisting("Turn180")) {OfficerTypes.(type).perks.Turn180 = 1};
	if(isPerkExisting("SandbankManeuver")) {OfficerTypes.(type).perks.SandbankManeuver = 1};
	if(isPerkExisting("SailingProfessional")) {OfficerTypes.(type).perks.SailingProfessional = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	
	//First Mate
	type = OFFIC_TYPE_FIRSTMATE;
	OfficerTypes.(type).skills.Leadership = 2;
	OfficerTypes.(type).skills.Leadership.importance = 10;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 3;
	OfficerTypes.(type).skills.Sailing = 1;
	OfficerTypes.(type).skills.Sailing.importance = 5;
	OfficerTypes.(type).skills.Accuracy = 1;			// Set to 1 to balance for few perks
	OfficerTypes.(type).skills.Accuracy.importance = 5;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).usableoffictype = true;
	OfficerTypes.(type).rankbonus = 2;
	OfficerTypes.(type).hpbasebonus = 10;
	OfficerTypes.(type).hplevelbonus = 1;
	OfficerTypes.(type).pricemod = 1.02;
	OfficerTypes.(type).noncontribchance = 15;
	if(isPerkExisting("IronWill")) {OfficerTypes.(type).perks.IronWill = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.(type).perks.SharedExperience = 1};
	if(isPerkExisting("Brander")) {OfficerTypes.(type).perks.Brander = 1};
	if(isPerkExisting("Disguiser")) {OfficerTypes.(type).perks.Disguiser = 1};
	if(isPerkExisting("FastReload")) {OfficerTypes.(type).perks.FastReload = 1};
//	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.(type).perks.LongRangeGrappling = 1};	// Remove this to balance adding the "Rigging" perks"
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.(type).perks.BasicCommerce = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.(type).perks.Rigging = 1};
	if(isPerkExisting("RiggingAdvance")) {OfficerTypes.(type).perks.RiggingAdvance = 1};
	
	//Carpenter
	type = OFFIC_TYPE_CARPENTER;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 2;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 2;
	OfficerTypes.(type).skills.Repair.importance = 10;
	OfficerTypes.(type).skills.Defence = 1;
	OfficerTypes.(type).skills.Defence.importance = 5;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).usableoffictype = true;
	if(isPerkExisting("LightRepair")) {OfficerTypes.(type).perks.LightRepair = 1};
	if(isPerkExisting("InstantRepair")) {OfficerTypes.(type).perks.InstantRepair = 1};
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.(type).perks.BasicDamageControl = 1};    // added by El Rapido
	if(isPerkExisting("AdvancedDamageControl")) {OfficerTypes.(type).perks.AdvancedDamageControl = 1};
	if(isPerkExisting("ProfessionalDamageControl")) {OfficerTypes.(type).perks.ProfessionalDamageControl = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	if(isPerkExisting("HullDamageUp")) {OfficerTypes.(type).perks.HullDamageUp = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.(type).perks.ShipSpeedUp = 1};
	
	//Doctor
	type = OFFIC_TYPE_DOCTOR;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 2;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 0;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 2;
	OfficerTypes.(type).skills.Defence.importance = 10;
	OfficerTypes.(type).skills.Commerce = 0;		// set to 0 by Levis
	OfficerTypes.(type).skills.Sneak = 2;			// set from 0 to 1 by El Rapido*/ Set to 2 by Levis to compensate for few perks
	OfficerTypes.(type).skills.Sneak.importance = 8;
	OfficerTypes.(type).usableoffictype = true;
	OfficerTypes.(type).hpbasebonus = 30;
	OfficerTypes.(type).noncontribchance = 15;
	if(isPerkExisting("ImprovePotions")) {OfficerTypes.(type).perks.ImprovePotions = 1};
	if(isPerkExisting("DefendPoison")) {OfficerTypes.(type).perks.DefendPoison = 1};
	if(isPerkExisting("BasicFirstAid")) {OfficerTypes.(type).perks.BasicFirstAid = 1};
	if(isPerkExisting("AdvancedFirstAid")) {OfficerTypes.(type).perks.AdvancedFirstAid = 1};
	if(isPerkExisting("CrewDamageUp")) {OfficerTypes.(type).perks.CrewDamageUp = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.(type).perks.Cooking = 1};
	if(isPerkExisting("IronWill")) {OfficerTypes.(type).perks.IronWill = 1};	// GR: to make up for loss of third level defence ability

	type = OFFIC_TYPE_ABORDAGE;
	OfficerTypes.(type).skills.Leadership = 0;
	OfficerTypes.(type).skills.Fencing = 0;
	OfficerTypes.(type).skills.Fencing.importance = 10;
	OfficerTypes.(type).skills.Sailing = 0;
	OfficerTypes.(type).skills.Accuracy = 0;
	OfficerTypes.(type).skills.Accuracy.importance = 4;
	OfficerTypes.(type).skills.Cannons = 0;
	OfficerTypes.(type).skills.Grappling = 2;		// set to 2 from 1 to balance by Levis
	OfficerTypes.(type).skills.Grappling.importance = 10;
	OfficerTypes.(type).skills.Repair = 0;
	OfficerTypes.(type).skills.Defence = 0;
	OfficerTypes.(type).skills.Defence.importance = 4;
	OfficerTypes.(type).skills.Commerce = 0;
	OfficerTypes.(type).skills.Sneak = 0;
	OfficerTypes.(type).usableoffictype = true;
	OfficerTypes.(type).EnemyType = 1;
	OfficerTypes.(type).hpbasebonus = 20;
	OfficerTypes.(type).pricemod = 0.90;
	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.(type).perks.LongRangeGrappling = 1};
	if(isPerkExisting("GrapplingProfessional")) {OfficerTypes.(type).perks.GrapplingProfessional = 1};
	if(isPerkExisting("InstantBoarding")) {OfficerTypes.(type).perks.InstantBoarding = 1};
	if(isPerkExisting("Troopers")) {OfficerTypes.(type).perks.Troopers = 1};
	if(isPerkExisting("ImproveSmuggling")) {OfficerTypes.(type).perks.ImproveSmuggling = 1};
	
	//Officer which unlocked his mind
	if(isPerkExisting("ImprovePotions")) {OfficerTypes.SuperOfficer.perks.ImprovePotions = 1};
	if(isPerkExisting("DefendPoison")) {OfficerTypes.SuperOfficer.perks.DefendPoison = 1};
	if(isPerkExisting("ShipTurnRateUp")) {OfficerTypes.SuperOfficer.perks.ShipTurnRateUp = 1};
	if(isPerkExisting("ShipSpeedUp")) {OfficerTypes.SuperOfficer.perks.ShipSpeedUp = 1};
	if(isPerkExisting("SandbankManeuver")) {OfficerTypes.SuperOfficer.perks.SandbankManeuver = 1};
	if(isPerkExisting("BasicDamageControl")) {OfficerTypes.SuperOfficer.perks.BasicDamageControl = 1};
	if(isPerkExisting("AdvancedDamageControl")) {OfficerTypes.SuperOfficer.perks.AdvancedDamageControl = 1};
	if(isPerkExisting("Rigging")) {OfficerTypes.SuperOfficer.perks.Rigging = 1};
	if(isPerkExisting("RiggingAdvance")) {OfficerTypes.SuperOfficer.perks.RiggingAdvance = 1};
	if(isPerkExisting("FastReload")) {OfficerTypes.SuperOfficer.perks.FastReload = 1};
	if(isPerkExisting("HullDamageUp")) {OfficerTypes.SuperOfficer.perks.HullDamageUp = 1};
	if(isPerkExisting("SailsDamageUp")) {OfficerTypes.SuperOfficer.perks.SailsDamageUp = 1};
	if(isPerkExisting("CrewDamageUp")) {OfficerTypes.SuperOfficer.perks.CrewDamageUp = 1};
	if(isPerkExisting("CriticalShoot")) {OfficerTypes.SuperOfficer.perks.CriticalShoot = 1};
	if(isPerkExisting("LongRangeGrappling")) {OfficerTypes.SuperOfficer.perks.LongRangeGrappling = 1};
	if(isPerkExisting("MusketsShoot")) {OfficerTypes.SuperOfficer.perks.MusketsShoot = 1};
	if(isPerkExisting("LightRepair")) {OfficerTypes.SuperOfficer.perks.LightRepair = 1};
	if(isPerkExisting("InstantRepair")) {OfficerTypes.SuperOfficer.perks.InstantRepair = 1};
	if(isPerkExisting("Cooking")) {OfficerTypes.SuperOfficer.perks.Cooking = 1};
	if(isPerkExisting("HighStakes")) {OfficerTypes.SuperOfficer.perks.HighStakes = 1};
	if(isPerkExisting("ImproveSmuggling")) {OfficerTypes.SuperOfficer.perks.ImproveSmuggling = 1};
	if(isPerkExisting("BasicCommerce")) {OfficerTypes.SuperOfficer.perks.BasicCommerce = 1};
	if(isPerkExisting("AdvancedCommerce")) {OfficerTypes.SuperOfficer.perks.AdvancedCommerce = 1};
	if(isPerkExisting("SharedExperience")) {OfficerTypes.SuperOfficer.perks.SharedExperience = 1};
	if(isPerkExisting("IronWill")) {OfficerTypes.SuperOfficer.perks.IronWill = 1};
	if(isPerkExisting("Brander")) {OfficerTypes.SuperOfficer.perks.Brander = 1};
}