sindra_bieque = Creature:new {
  objectName = "@mob/creature_names:philosopher",
  socialGroup = "townsperson",
  faction = "townsperson",
  level = 4,
  chanceHit = 0.240000,
  damageMin = 40,
  damageMax = 45,
  baseXp = 62,
  baseHAM = 113,
  baseHAMmax = 138,
  armor = 0,
  resists = {0,0,0,0,0,0,0,-1,-1},
  meatType = "",
  meatAmount = 0,
  hideType = "",
  hideAmount = 0,
  boneType = "",
  boneAmount = 0,
  milk = 0,
  tamingChance = 0.000000,
  ferocity = 0,
  pvpBitmask = NONE,
  creatureBitmask = NONE,
  optionsBitmask = AIENABLED + CONVERSABLE,
  diet = HERBIVORE,

  templates = {"object/mobile/dressed_philosopher.iff"},
  lootGroups = {},
  weapons = {},
  conversationTemplate = "sindra_lintikoor_mission_target_convotemplate",
  attacks = {}
}

CreatureTemplates:addCreatureTemplate(sindra_bieque, "sindra_bieque")