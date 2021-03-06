#ifndef __BG_PUBLIC_H__
#define __BG_PUBLIC_H__

#include "../universal/q_shared.h"
#include "../clientscript/clientscript.h"

#include <sys/sys_types.h> // size_t

enum statIndex_t
{
	STAT_HEALTH = 0x0,
	STAT_DEAD_YAW = 0x1,
	STAT_MAX_HEALTH = 0x2,
	STAT_SPAWN_COUNT = 0x3,
	MAX_STATS = 0x4,
};

// weapon animations
enum AnimationType
{
	PLAYER_ANIM_NONE = 0x0,
	PLAYER_ANIM_DEFAULT = 0x1,
	PLAYER_ANIM_OTHER = 0x2,
	PLAYER_ANIM_SNIPER = 0x3,
	PLAYER_ANIM_M203 = 0x4,
	PLAYER_ANIM_HOLD = 0x5,
	PLAYER_ANIM_BRIEFCASE = 0x6,
	PLAYER_ANIM_REVIVER = 0x7,
	PLAYER_ANIM_RADIO = 0x8,
	PLAYER_ANIM_DUALWIELD = 0x9,
	PLAYER_ANIM_REMOTECONTROL = 0xA,
	PLAYER_ANIM_CROSSBOW = 0xB,
	PLAYER_ANIM_MINIGUN = 0xC,
	PLAYER_ANIM_BELTFED = 0xD, 
	PLAYER_ANIM_G11 = 0xE,
	PLAYER_ANIM_REARCLIP = 0xF,
	PLAYER_ANIM_HANDLECLIP = 0x10,
	PLAYER_ANIM_REARCLIPSNIPER = 0x11,
	PLAYER_ANIM_BALLISTICKNIFE = 0x12,
	PLAYER_ANIM_SINGLEKNIFE = 0x13,
	PLAYER_ANIM_NOPUMP = 0x14,
	PLAYER_ANIM_HATCHET = 0x15,
	PLAYER_ANIM_GRIMREAPER = 0x16,
	PLAYER_ANIM_ZIPLINE = 0x17,
	PLAYER_ANIM_RIOTSHIELD = 0x18,
	PLAYER_ANIM_TABLET = 0x19,
	PLAYER_ANIM_TURNED = 0x1A,
	PLAYER_ANIM_SCREECHER = 0x1B,
	PLAYER_ANIM_TYPE_MAX = 0x1C
};

enum weapType_t
{
	WEAPTYPE_BULLET = 0x0,
	WEAPTYPE_GRENADE = 0x1,
	WEAPTYPE_PROJECTILE = 0x2,
	WEAPTYPE_BINOCULARS = 0x3,
	WEAPTYPE_GAS = 0x4,
	WEAPTYPE_BOMB = 0x5,
	WEAPTYPE_MINE = 0x6,
	WEAPTYPE_MELEE = 0x7,
	WEAPTYPE_RIOTSHIELD = 0x8,
	WEAPTYPE_MAX = 0x9
};

enum weapClass_t
{
	WEAPCLASS_RIFLE = 0x0,
	WEAPCLASS_MG = 0x1,
	WEAPCLASS_SMG = 0x2,
	WEAPCLASS_SPREAD = 0x3,
	WEAPCLASS_PISTOL = 0x4,
	WEAPCLASS_GRENADE = 0x5,
	WEAPCLASS_ROCKETLAUNCHER = 0x6,
	WEAPCLASS_TURRET = 0x7,
	WEAPCLASS_NON_PLAYER = 0x8,
	WEAPCLASS_GAS = 0x9,
	WEAPCLASS_ITEM  = 0xA,
	WEAPCLASS_MELEE = 0xB,
	WEAPCLASS_KILLSTREAK_ALT_STORED_WEAPON = 0xC,
	WEAPCLASS_PISTOL_SPREAD = 0xD,
	WEAPCLASS_MAX = 0xE
};

enum PenetrateType
{
	PENETRATE_TYPE_NONE = 0x0,
	PENETRATE_TYPE_SMALL = 0x1,
	PENETRATE_TYPE_MEDIUM = 0x2,
	PENETRATE_TYPE_LARGE = 0x3,
	PENETRATE_TYPE_MAX = 0x4
};

enum ImpactType
{
	IMPACT_TYPE_NONE = 0x0,
	IMPACT_TYPE_BULLET_SMALL = 0x1,
	IMPACT_TYPE_BULLET_LARGE = 0x2,
	IMPACT_TYPE_BULLET_AP = 0x3,
	IMPACT_TYPE_BULLET_XTREME = 0x4,
	IMPACT_TYPE_SHOTGUN = 0x5,
	IMPACT_TYPE_GRENADE_BOUNCE = 0x6,
	IMPACT_TYPE_GRENADE_EXPLODE = 0x7,
	IMPACT_TYPE_RIFLE_GRENADE = 0x8,
	IMPACT_TYPE_ROCKET_EXPLODE = 0x9,
	IMPACT_TYPE_ROCKET_EXPLODE_XTREME = 0xA,
	IMPACT_TYPE_PROJECTILE_DUD = 0xB,
	IMPACT_TYPE_MORTAR_SHELL = 0xC,
	IMPACT_TYPE_TANK_SHELL = 0xD,
	IMPACT_TYPE_BOLT = 0xE,
	IMPACT_TYPE_BLADE = 0xF,
	IMPACT_TYPE_MAX = 0x10
};

enum weapInventoryType_t
{
	WEAPINVENTORY_PRIMARY = 0x0,
	WEAPINVENTORY_OFFHAND = 0x1,
	WEAPINVENTORY_ITEM = 0x2,
	WEAPINVENTORY_ALTMODE = 0x3,
	WEAPINVENTORY_MELEE = 0x4,
	WEAPINVENTORY_DW_LEFT_HAND = 0x5,
	WEAPINVENTORY_MAX = 0x6
};

enum weapFireType_t
{
	WEAPON_FIRETYPE_FULLAUTO = 0x0,
	WEAPON_FIRETYPE_SINGLESHOT = 0x1,
	WEAPON_FIRETYPE_2ROUNDBURST = 0x2,
	WEAPON_FIRETYPE_3ROUNDBURST = 0x3,
	WEAPON_FIRETYPE_4ROUNDBURST = 0x4,
	WEAPON_FIRETYPE_5ROUNDBURST = 0x5,
	WEAPON_FIRETYPE_STACKEDFIRE = 0x6,
	WEAPON_FIRETYPE_MINIGUN = 0x7,
	WEAPON_FIRETYPE_CHARGESHOT = 0x8,
	WEAPON_FIRETYPE_JETGUN = 0x9,
	WEAPON_FIRETYPE_MAX = 0xA
};

enum ClipTypes
{
	CLIPTYPE_BOTTOM = 0x0,
	CLIPTYPE_TOP = 0x1,
	CLIPTYPE_LEFT = 0x2,
	CLIPTYPE_DP28 = 0x3,
	CLIPTYPE_PTRS = 0x4,
	CLIPTYPE_LMG = 0x5,
	CLIPTYPE_MAX = 0x6
};

enum BarrelType
{
	BARRELTYPE_SINGLE = 0x0,
	BARRELTYPE_DUAL = 0x1,
	BARRELTYPE_DUAL_ALT = 0x2,
	BARRELTYPE_QUAD = 0x3,
	BARRELTYPE_QUAD_ALT = 0x4,
	BARRELTYPE_QUAD_DOUBLE_ALT = 0x5,
	BARRELTYPE_MAX = 0x6
};

enum weaponIconRatioType_t
{
	WEAPON_ICON_RATIO_1TO1 = 0x0,
	WEAPON_ICON_RATIO_2TO1 = 0x1,
	WEAPON_ICON_RATIO_4TO1 = 0x2,
	WEAPON_ICON_RATIO_MAX = 0x3,
};

struct XModel
{
	const char *name; //0x0
		char unk_4[4]; //0x4
	union
	{
		ScriptString *localBoneNames;
		ScriptString *boneNames;
	}; //0x8
		char unk_C[0xE8]; //0xC
};

struct WeaponDef
{
	const char * AIOverlayDescription; //0x0
	XModel * * gunModel; //0x4
	XModel * handModel; //0x8
	const char * modeName; //0xC
	ScriptString (*noteTrackSoundMapKeys)[0x14]; //0x10
	ScriptString (*notetrackSoundMapValues)[0x14]; //0x14
	AnimationType playerAnimType; //0x18
	weapType_t weaponType; //0x1C
	weapClass_t weaponClass; //0x20
	PenetrateType penetrateType; //0x24
	ImpactType impactType; //0x28
	weapInventoryType_t inventoryType; //0x2C
	weapFireType_t fireType; //0x30			
	ClipTypes clipType; //0x34
	BarrelType barrelType; //0x38
};

struct WeaponVariantDef
{
	const char *szInternalName; //0x0
	int iVariantCount; //0x4
	WeaponDef * info; //0x8
	const char * szDisplayName; //0xC
	const char * altWeapon; //0x10
	const char * attachmentUnique; //0x14
	void **attachments; //0x18
	void **unqAttachments; //0x1C
		char * * unknownStringArray1; //0x20
	ScriptString (*hideTags)[0x20]; //0x24
		XModel **unknownModelArray1; //0x28
		XModel **unknownModelArray2; //0x2C
		char * * unknownStringArray2; //0x30
		char * * unknownStringArray3; //0x34
	float attachViewModelOffset[8][3]; //0x38
	float attachWorldModelOffset[8][3]; //0x98
	float attachViewModelRotation[8][3]; //0xF8
	float attachWorldModelRotation[8][3]; //0x158
	float stowedModelOffsets[3]; //0x1B8
	float stowedModelRotation[3]; //0x1C4
		char unknown2[0x8]; //0x1D0
	bool ignoreAttachments; //0x1D8
	int iClipSize; //0x1DC
	int iReloadTime; //0x1E0
	int iReloadEmptyTime; //0x1E4
	int iReloadQuickTime; //0x1E8
	int iReloadQuickEmptyTime; //0x1EC
	int iAdsTransInTime; //0x1F0
	int iAdsTransOutTime; //0x1F4
	int iAltRaiseTime; //0x1F8
	const char *szAmmoDisplayName; //0x1FC
	const char *szAmmoName; //0x200
	int iAmmoIndex; //0x204
	const char *szClipName; //0x208
	int iClipIndex;
	float aimAssistRangeAds;
	float adsSwayHorizScale;
	float adsSwayVertScale;
	float fAdsViewKickCenterSpeed;
	float fHipViewKickCenterSpeed;
	float fAdsZoomFov[3];
	float adsZoomInFrac;
	float adsZoomOutFrac;
	float adsOverlayAlphaScale;
		int unknown3;
		int unknown4;
	bool silenced;
	bool dualMag;
	bool infrared;
	bool tvguided;
	int perks[2];
	bool antiQuickScope;
	void * AdsOverlayShader;
	void * AdsOverlayShaderLowRes;
	void * dpadIcon;
	weaponIconRatioType_t dpadIconRatio;
	bool noAmmoOnDpadIcon;
	bool mmsWeapon;
	bool mssInScope;
	float mmsFOV;
	float mmsAspect;
	float mmsMaxDist;
	float ikLeftHandIdlePos[3];
	float ikLeftHandOffset[3];
	float ikLeftHandRotation[3];
	bool usingLeftHandProneIK;
	float ikLeftHandProneOffset[3];
	float ikLeftHandProneRotation[3];
	float ikLeftHandUiViewerOffset[3];
	float ikLeftHandUiViewerRotation[3];
};

struct weaponParms
{
	float forward[3]; //0x0
	float right[3]; //0xC
	float up[3]; //0x18
	float muzzleTrace[3]; //0x24
	float gunForward[3]; //0x30
	int weapon; //0x3C
	WeaponVariantDef* weapVariantDef; //0x40
	WeaponDef* weapDef; //0x44
};

//=============================================================================

enum entity_event_t
{
	EV_NONE = 0x0,
	EV_FOLIAGE_SOUND = 0x1,
	EV_STOP_WEAPON_SOUND = 0x2,
	EV_STOP_SOUND_ALIAS = 0x3,
	EV_SOUND_ALIAS = 0x4,
	EV_SOUND_ALIAS_NOTIFY = 0x5,
	EV_SOUND_BATTLECHAT_ALIAS = 0x6,
	EV_STOPSOUNDS = 0x7,
	EV_STANCE_FORCE_STAND = 0x8,
	EV_STANCE_FORCE_CROUCH = 0x9,
	EV_STANCE_FORCE_PRONE = 0xA,
	EV_ITEM_PICKUP = 0xB,
	EV_AMMO_PICKUP = 0xC,
	EV_NOAMMO = 0xD,
	EV_NOAMMO_LEFT = 0xE,
	EV_EMPTYCLIP = 0xF,
	EV_EMPTY_OFFHAND = 0x10,
	EV_RESET_ADS = 0x11,
	EV_RELOAD = 0x12,
	EV_RELOAD_FROM_EMPTY = 0x13,
	EV_RELOAD_START = 0x14,
	EV_RELOAD_END = 0x15,
	EV_RELOAD_START_NOTIFY = 0x16,
	EV_RELOAD_ADDAMMO = 0x17,
	EV_RAISE_WEAPON = 0x18,
	EV_FIRST_RAISE_WEAPON = 0x19,
	EV_RAISE_PICKUP_WEAPON = 0x1A,
	EV_PUTAWAY_WEAPON = 0x1B,
	EV_WEAPON_ALT = 0x1C,
	EV_WEAPON_SWITCH_STARTED = 0x1D,
	EV_PULLBACK_WEAPON = 0x1E,
	EV_FIRE_WEAPON_SCRIPTED = 0x1F,
	EV_FIRE_WEAPON = 0x20,
	EV_FIRE_WEAPON_LASTSHOT = 0x21,
	EV_FIRE_WEAPON_LEFT = 0x22,
	EV_FIRE_WEAPON_LASTSHOT_LEFT = 0x23,
	EV_FIRE_RICOCHET = 0x24,
	EV_RECHAMBER_WEAPON = 0x25,
	EV_EJECT_BRASS = 0x26,
	EV_MELEE_SWIPE = 0x27,
	EV_FIRE_MELEE = 0x28,
	EV_WEAPON_DEPLOYING = 0x29,
	EV_WEAPON_FINISH_DEPLOYING = 0x2A,
	EV_WEAPON_BREAKING_DOWN = 0x2B,
	EV_WEAPON_FINISH_BREAKING_DOWN = 0x2C,
	EV_INC_CHARGESHOT_LEVEL = 0x2D,
	EV_CHARGESHOT_DISCHARGEWEAPON = 0x2E,
	EV_PREP_OFFHAND = 0x2F,
	EV_USE_OFFHAND = 0x30,
	EV_SWITCH_OFFHAND = 0x31,
	EV_PREP_RIOTSHIELD = 0x32,
	EV_DEPLOY_RIOTSHIELD = 0x33,
	EV_LOWER_RIOTSHIELD = 0x34,
	EV_MELEE_HIT = 0x35,
	EV_MELEE_MISS = 0x36,
	EV_MELEE_BLOOD = 0x37,
	EV_FIRE_WEAPON_MOUNTED_TURRET = 0x38,
	EV_FIRE_WEAPON_MOUNTED_TURRETA = 0x39,
	EV_FIRE_BARREL_1 = 0x3A,
	EV_FIRE_BARREL_2 = 0x3B,
	EV_FIRE_BARREL_3 = 0x3C,
	EV_FIRE_BARREL_4 = 0x3D,
	EV_BULLET_HIT = 0x3E,
	EV_BULLET_HIT_SHIELD = 0x3F,
	EV_BULLET_HIT_CLIENT_SHIELD = 0x40,
	EV_EXPLOSIVE_IMPACT_ON_SHIELD = 0x41,
	EV_EXPLOSIVE_SPLASH_ON_SHIELD = 0x42,
	EV_BULLET_HIT_CLIENT_SMALL = 0x43,
	EV_BULLET_HIT_CLIENT_LARGE = 0x44,
	EV_DESTRUCTIBLE_BULLET_HIT = 0x45,
	EV_DESTRUCTIBLE_EXPLOSION_HIT = 0x46,
	EV_GRENADE_BOUNCE = 0x47,
	EV_GRENADE_EXPLODE = 0x48,
	EV_ROCKET_EXPLODE = 0x49,
	EV_ROCKET_EXPLODE_NOMARKS = 0x4A,
	EV_FLASHBANG_EXPLODE = 0x4B,
	EV_CUSTOM_EXPLODE = 0x4C,
	EV_CUSTOM_EXPLODE_NOMARKS = 0x4D,
	EV_SENSOR_GRENADE_EXPLODE = 0x4E,
	EV_CHANGE_TO_DUD = 0x4F,
	EV_DUD_EXPLODE = 0x50,
	EV_DUD_IMPACT = 0x51,
	EV_FIRE_EXPLODE = 0x52,
	EV_TIMED_FX = 0x53,
	EV_MOLOTOV_FLOAT = 0x54,
	EV_FAKE_FIRE = 0x55,
	EV_PLAY_FX = 0x56,
	EV_PLAY_FX_ON_TAG = 0x57,
	EV_PHYS_EXPLOSION_SPHERE = 0x58,
	EV_PHYS_EXPLOSION_CYLINDER = 0x59,
	EV_PHYS_EXPLOSION_JOLT = 0x5A,
	EV_PHYS_JET_THRUST = 0x5B,
	EV_PHYS_LAUNCH = 0x5C,
	EV_CREATE_DYNENT = 0x5D,
	EV_CREATE_ROPE = 0x5E,
	EV_BLOOD_IMPACTS = 0x5F,
	EV_DETACH_ENTITY = 0x60,
	EV_DELETE_ROPE = 0x61,
	EV_ROPE_COLLIDE = 0x62,
	EV_ROPE_SETFLAG = 0x63,
	EV_ROPE_SETPARAM = 0x64,
	EV_ROPE_ADDANCHOR = 0x65,
	EV_ROPE_REMOVEANCHOR = 0x66,
	EV_ROPE_MOVEANCHOR = 0x67,
	EV_SETWETNESS = 0x68,
	EV_EARTHQUAKE = 0x69,
	EV_GRENADE_DROP = 0x6A,
	EV_GRENADE_SUICIDE = 0x6B,
	EV_DETONATE = 0x6C,
	EV_NIGHTVISION_WEAR = 0x6D,
	EV_NIGHTVISION_REMOVE = 0x6E,
	EV_MISSILE_REMOTE_BOOST = 0x6F,
	EV_PLAY_RUMBLE_ON_ENT = 0x70,
	EV_PLAY_RUMBLE_ON_POS = 0x71,
	EV_PLAY_RUMBLELOOP_ON_ENT = 0x72,
	EV_PLAY_RUMBLELOOP_ON_POS = 0x73,
	EV_STOP_RUMBLE = 0x74,
	EV_STOP_ALL_RUMBLES = 0x75,
	EV_OBITUARY = 0x76,
	EV_REVIVE_OBITUARY = 0x77,
	EV_DIRECTIONAL_HIT_INDICATOR = 0x78,
	EV_ANIMATE_UI = 0x79,
	EV_KILLSTREAK_DAMAGE = 0x7A,
	EV_NO_FRAG_GRENADE_HINT = 0x7B,
	EV_NO_SPECIAL_GRENADE_HINT = 0x7C,
	EV_TARGET_TOO_CLOSE_HINT = 0x7D,
	EV_TARGET_NOT_ENOUGH_CLEARANCE = 0x7E,
	EV_LOCKON_REQUIRED_HINT = 0x7F,
	EV_FOOTSTEP_SPRINT = 0x80,
	EV_FOOTSTEP_RUN = 0x81,
	EV_FOOTSTEP_WALK = 0x82,
	EV_FOOTSTEP_CROUCHRUN = 0x83,
	EV_FOOTSTEP_CROUCHWALK = 0x84,
	EV_FOOTSTEP_PRONE = 0x85,
	EV_LADDER_HAND_GRAB = 0x86,
	EV_MANTLE = 0x87,
	EV_JUMP = 0x88,
	EV_LANDING_DEFAULT = 0x89,
	EV_LANDING_BARK = 0x8A,
	EV_LANDING_BRICK = 0x8B,
	EV_LANDING_CARPET = 0x8C,
	EV_LANDING_CLOTH = 0x8D,
	EV_LANDING_CONCRETE = 0x8E,
	EV_LANDING_DIRT = 0x8F,
	EV_LANDING_FLESH = 0x90,
	EV_LANDING_FOLIAGE = 0x91,
	EV_LANDING_GLASS = 0x92,
	EV_LANDING_GRASS = 0x93,
	EV_LANDING_GRAVEL = 0x94,
	EV_LANDING_ICE = 0x95,
	EV_LANDING_METAL = 0x96,
	EV_LANDING_MUD = 0x97,
	EV_LANDING_PAPER = 0x98,
	EV_LANDING_PLASTER = 0x99,
	EV_LANDING_ROCK = 0x9A,
	EV_LANDING_SAND = 0x9B,
	EV_LANDING_SNOW = 0x9C,
	EV_LANDING_WATER = 0x9D,
	EV_LANDING_WOOD = 0x9E,
	EV_LANDING_ASPHALT = 0x9F,
	EV_LANDING_CERAMIC = 0xA0,
	EV_LANDING_PLASTIC = 0xA1,
	EV_LANDING_RUBBER = 0xA2,
	EV_LANDING_CUSHION = 0xA3,
	EV_LANDING_FRUIT = 0xA4,
	EV_LANDING_PAINTEDMETAL = 0xA5,
	EV_LANDING_PLAYER = 0xA6,
	EV_LANDING_TALLGRASS = 0xA7,
	EV_LANDING_RIOTSHIELD = 0xA8,
	EV_LANDING_PAIN_DEFAULT = 0xA9,
	EV_LANDING_PAIN_BARK = 0xAA,
	EV_LANDING_PAIN_BRICK = 0xAB,
	EV_LANDING_PAIN_CARPET = 0xAC,
	EV_LANDING_PAIN_CLOTH = 0xAD,
	EV_LANDING_PAIN_CONCRETE = 0xAE,
	EV_LANDING_PAIN_DIRT = 0xAF,
	EV_LANDING_PAIN_FLESH = 0xB0,
	EV_LANDING_PAIN_FOLIAGE = 0xB1,
	EV_LANDING_PAIN_GLASS = 0xB2,
	EV_LANDING_PAIN_GRASS = 0xB3,
	EV_LANDING_PAIN_GRAVEL = 0xB4,
	EV_LANDING_PAIN_ICE = 0xB5,
	EV_LANDING_PAIN_METAL = 0xB6,
	EV_LANDING_PAIN_MUD = 0xB7,
	EV_LANDING_PAIN_PAPER = 0xB8,
	EV_LANDING_PAIN_PLASTER = 0xB9,
	EV_LANDING_PAIN_ROCK = 0xBA,
	EV_LANDING_PAIN_SAND = 0xBB,
	EV_LANDING_PAIN_SNOW = 0xBC,
	EV_LANDING_PAIN_WATER = 0xBD,
	EV_LANDING_PAIN_WOOD = 0xBE,
	EV_LANDING_PAIN_ASPHALT = 0xBF,
	EV_LANDING_PAIN_CERAMIC = 0xC0,
	EV_LANDING_PAIN_PLASTIC = 0xC1,
	EV_LANDING_PAIN_RUBBER = 0xC2,
	EV_LANDING_PAIN_CUSHION = 0xC3,
	EV_LANDING_PAIN_FRUIT = 0xC4,
	EV_LANDING_PAIN_PAINTEDMETAL = 0xC5,
	EV_LANDING_PAIN_PLAYER = 0xC6,
	EV_LANDING_PAIN_TALLGRASS = 0xC7,
	EV_LANDING_PAIN_RIOTSHIELD = 0xC8,
	EV_FIRE_VEHICLE_TURRET = 0xC9,
	EV_FIRE_GUNNER_1 = 0xCA,
	EV_FIRE_GUNNER_2 = 0xCB,
	EV_FIRE_GUNNER_3 = 0xCC,
	EV_FIRE_GUNNER_4 = 0xCD,
	EV_FIRE_GUNNER_1A = 0xCE,
	EV_FIRE_GUNNER_2A = 0xCF,
	EV_FIRE_GUNNER_3A = 0xD0,
	EV_FIRE_GUNNER_4A = 0xD1,
	EV_START_CAMERA_TWEEN = 0xD2,
	EV_DESTRUCTIBLE_DISABLE_PIECES = 0xD3,
	EV_FOOTPRINT = 0xD4,
	EV_CANNOTPLANT = 0xD5,
	EV_CANT_EQUIP_PRONE = 0xD6,
	EV_DTP_LAUNCH = 0xD7,
	EV_DTP_LAND = 0xD8,
	EV_SLIDE_START = 0xD9,
	EV_SLIDE_STOP = 0xDA,
	EV_SCOPE_ZOOM = 0xDB,
	EV_JAM_WEAPON = 0xDC,
	EV_STACKFIRE = 0xDD,
	EV_BOLT_IMPACT = 0xDE,
	EV_BOLT_IMPALE = 0xDF,
	EV_PLAY_WEAPON_DEATH_EFFECTS = 0xE0,
	EV_PLAY_WEAPON_DAMAGE_EFFECTS = 0xE1,
	EV_FACE_EVENT = 0xE2,
	EV_SETLOCALWIND = 0xE3,
	EV_FLOAT_LONGER = 0xE4,
	EV_FORCE_BUOYANCY = 0xE5,
	EV_DISABLE_DEPTH_BUOYANCY_ADJUSTMENTS = 0xE6,
	EV_SCALE_BUOYANCY = 0xE7,
	EV_ALLOWPITCH = 0xE8,
	EV_GIB = 0xE9,
	EV_STANCE_INVALID = 0xEA,
	EV_ENTER_VEHICLE = 0xEB,
	EV_EXIT_VEHICLE = 0xEC,
	EV_IMMEDIATE_RAGDOLL = 0xED,
	EV_ENT_SPAWNED_SENTINEL = 0xEE,
	EV_PROJECTILE_PASS_THROUGH = 0xEF,
};

enum team_t
{
	TEAM_FREE = 0x0,
	TEAM_ALLIES = 0x1,
	TEAM_AXIS = 0x2,
	TEAM_THREE = 0x3,
	TEAM_FOUR = 0x4,
	TEAM_FIVE = 0x5,
	TEAM_SIX = 0x6,
	TEAM_SEVEN = 0x7,
	TEAM_EIGHT = 0x8,
	TEAM_MAX = 0x9
};

// means of death
enum meansOfDeath_t
{
	MOD_UNKNOWN = 0x0,
	MOD_PISTOL_BULLET = 0x1,
	MOD_RIFLE_BULLET = 0x2,
	MOD_GRENADE = 0x3,
	MOD_GRENADE_SPLASH = 0x4,
	MOD_PROJECTILE = 0x5,
	MOD_PROJECTILE_SPLASH = 0x6,
	MOD_MELEE = 0x7,
	MOD_BAYONET = 0x8,
	MOD_HEAD_SHOT = 0x9,
	MOD_CRUSH = 0xA,
	MOD_TELEFRAG = 0xB,
	MOD_FALLING = 0xC,
	MOD_SUICIDE = 0xD,
	MOD_TRIGGER_HURT = 0xE,
	MOD_EXPLOSIVE = 0xF,
	MOD_IMPACT = 0x10,
	MOD_BURNED = 0x11,
	MOD_HIT_BY_OBJECT = 0x12,
	MOD_DROWN = 0x13,
	MOD_GAS = 0x14,
	MOD_NUM = 0x15,
};

// Surface Flags
#define CONTENTS_SOLID				0x1	
#define CONTENTS_FOLIAGE			0x2
#define CONTENTS_LIGHTGRID			0x4
#define	CONTENTS_LAVA				0x8
#define CONTENTS_GLASS				0x10
#define CONTENTS_WATER				0x20

#define CONTENTS_CANSHOOTCLIP		0x40
#define CONTENTS_CLIPMISSILE		0x80
#define CONTENTS_ITEM				0x100
#define CONTENTS_VEHICLECLIP		0x200
#define CONTENTS_ITEMCLIP			0x400
#define CONTENTS_SKY				0x800

#define CONTENTS_AI_NOSIGHT			0x1000
#define CONTENTS_CLIPSHOT			0x2000

#define CONTENTS_MOVER				0x4000
#define CONTENTS_AREAPORTAL			0x8000

#define CONTENTS_PLAYERCLIP			0x10000
#define CONTENTS_MONSTERCLIP		0x20000

// bot specific contents types
#define CONTENTS_TELEPORTER			0x40000
#define CONTENTS_JUMPPAD			0x80000
#define	CONTENTS_CLUSTERPORTAL		0x100000
#define CONTENTS_DONOTENTER			0x200000
#define CONTENTS_DONOTENTER_LARGE	0x400000

#define CONTENTS_ORIGIN				0x1000000
#define CONTENTS_BODY				0x2000000
#define CONTENTS_CORPSE				0x4000000
#define CONTENTS_DETAIL				0x8000000
#define CONTENTS_STRUCTURAL			0x10000000
#define CONTENTS_TRANSLUCENT		0x20000000
#define CONTENTS_TRIGGER			0x40000000
#define CONTENTS_NODROP				0x80000000

#define SURF_NODAMAGE					0x1
#define SURF_SLICK						0x2
#define SURF_SKY						0x4
#define SURF_LADDER						0x8
#define SURF_NOIMPACT					0x10
#define SURF_NOMARKS					0x20
#define SURF_NODRAW						0x80
#define SURF_NOPENETRATE				0x100
#define SURF_NORECEIVEDYNAMICSHADOW		0x800
#define SURF_CAULK						0x1000
#define SURF_NOSTEPS					0x2000
#define SURF_NONSOLID					0x4000
#define SURF_AREALIGHT					0x8000
#define SURF_NODLIGHT					0x20000
#define SURF_NOCASTSHADOW				0x40000
#define SURF_ONLYCASTSHADOW				0x80000
#define SURF_MANTLEON					0x4000000
#define SURF_MANTLEOVER					0x8000000
#define SURF_MOUNT						0x10000000
#define SURF_PORTAL						0x80000000

#define MASK_ALL				(-1)
#define MASK_PHYSICS			(CONTENTS_SOLID|CONTENTS_FOLIAGE|CONTENTS_GLASS|CONTENTS_CLIPMISSILE|CONTENTS_ITEMCLIP|CONTENTS_SKY|CONTENTS_CLIPSHOT|CONTENTS_MOVER|CONTENTS_AREAPORTAL|0x800000|CONTENTS_BODY)
#define MASK_VEHICLE			(CONTENTS_SOLID|CONTENTS_GLASS|CONTENTS_VEHICLECLIP)
#define MASK_WATER				(CONTENTS_WATER)
#define MASK_CLIP				(CONTENTS_CANSHOOTCLIP|CONTENTS_CLIPMISSILE|CONTENTS_VEHICLECLIP|CONTENTS_ITEMCLIP|CONTENTS_AI_NOSIGHT|CONTENTS_CLIPSHOT|CONTENTS_MOVER|CONTENTS_MONSTERCLIP|CONTENTS_PLAYERCLIP)

enum entityType_t
{
	ET_GENERAL = 0x0,
	ET_PLAYER = 0x1,
	ET_PLAYER_CORPSE = 0x2,
	ET_ITEM = 0x3,
	ET_MISSILE = 0x4,
	ET_INVISIBLE = 0x5,
	ET_SCRIPTMOVER = 0x6,
	ET_SOUND_BLEND = 0x7,
	ET_FX = 0x8,
	ET_LOOP_FX = 0x9,
	ET_PRIMARY_LIGHT = 0xA,
	ET_TURRET = 0xB,
	ET_HELICOPTER = 0xC,
	ET_PLANE = 0xD,
	ET_VEHICLE = 0xE,
	ET_VEHICLE_CORPSE = 0xF,
	ET_ACTOR = 0x10,
	ET_ACTOR_SPAWNER = 0x11,
	ET_ACTOR_CORPSE = 0x12,
	ET_STREAMER_HINT = 0x13,
	ET_ZBARRIER = 0x14,
};

//=============================================================================

struct flame_timed_damage_t
{
	struct gentity_s *attacker; //0x0
	int damage; //0x4
	float damageDuration; //0x8
	float damageInterval; //0xC
	int start_timestamp; //0x10
	int end_timestamp; //0x14
	int lastupdate_timestamp; //0x18
}; //0x1C

struct item_ent_t
{
	int ammoCount; //0x0
	int clipAmmoCount; //0x4
	unsigned int weapon; //0x8
}; //0xC

struct trigger_ent_t
{
	int threshold; //0x0
	int accumulate; //0x4
	int timestamp; //0x8
	int singleUserEntIndex; //0xC
	char perk; //0x10
	bool requireLookAt; //0x11
	bool ignoreTeam; //0x12
	bool excludeTeam; //0x13
	int exposureIndex; //0x14
	float exposureLerpToLighter; //0x18
	float exposureLerpToDarker; //0x1C
	vec3_t exposureFeather; //0x20
}; //0x2C

struct mover_positions_t
{
	float decelTime; //0x0
	float speed; //0x4
	float midTime; //0x8
	vec3_t pos1; //0xC
	vec3_t pos2; //0x18
	vec3_t pos3; //0x24
}; //0x30

struct mover_slidedata_t
{
	vec3_t mins; //0x0
	vec3_t maxs; //0xC
	vec3_t velocity; //0x18
}; //0x24

struct mover_ent_t
{
	union
	{
		mover_positions_t pos; //0x0
		mover_slidedata_t slide; //0x0
	};
	mover_positions_t angle; //0x30
}; //0x60

struct corpse_ent_t
{
	int deathAnimStartTime; //0x0
}; //0x4

enum MissileStage
{
	MISSILESTAGE_SOFTLAUNCH = 0x0,
	MISSILESTAGE_ASCENT = 0x1,
	MISSILESTAGE_DESCENT = 0x2,
};

enum MissileFlightMode
{
	MISSILEFLIGHTMODE_TOP = 0x0,
	MISSILEFLIGHTMODE_DIRECT = 0x1,
};

struct missile_ent_t
{
	int timestamp; //0x0
	float time; //0x4
	int timeOfBirth; //0x8
	float travelDist; //0xC
	vec3_t surfaceNormal; //0x10
	team_t team; //0x1C
	char flags; //0x20
	int antilagTimeOffset; //0x24
	int timeAlive; //0x28
	float airburstActivationDistance; //0x2C
	union
	{
		struct
		{
			vec3_t curvature; //0x30
			vec3_t targetOffset; //0x3C
			MissileStage stage; //0x48
			MissileFlightMode flightMode; //0x4C
		}missile;
		struct
		{
			int effectIndex; //0x30
		}grenade;
	};
	int forcedDud; //0x50
	float grenadeWobbleCycle; //0x54
	float grenadeCurve; //0x58
	int destructibleBounceCount; //0x5C
}; //0x60

struct blend_ent_t
{
	vec3_t pos; //0x0
	vec3_t vel; //0xC
	vec4_t viewQuat; //0x18
	bool changed; //0x24
	float posAccelTime; //0x28
	float posDecelTime; //0x2C
	float angleAccelTime; //0x30
	float angleDecelTime; //0x34
	float startTime; //0x38
	float posTotalTime; //0x3C
	float angleTotalTime; //0x40
}; //0x44

struct actor_ent_t
{
	int spawnTime; //0x0
	struct animscripted_t *scripted; //0x4
}; //0x8

struct spawner_ent_t
{
	int team; //0x0
	int timestamp; //0x4
}; //0x8

struct zbarrier_piece_t
{
	char state; //0x0
	char scalar; //0x1
	char nextState; //0x2
	int startTime; //0x4
}; //0x8

struct zbarrier_ent_t
{
	zbarrier_piece_t pieces[6]; //0x0
}; //0x30

// bg_perks.cpp

GAME_EXPORT int BG_GetPerkIndexForName(const char* perk);

// bg_weapons.cpp

GAME_EXPORT void BG_TakePlayerWeapon(playerState_s* ps, int weaponIndex);
GAME_EXPORT char* BG_WeaponName(int weapon, char* buffer, size_t size);

// bg_weapons_def.cpp

GAME_EXPORT WeaponDef* BG_GetWeaponDef(unsigned int weaponIndex);
GAME_EXPORT WeaponVariantDef* BG_GetWeaponVariantDef(unsigned int weaponIndex);
GAME_EXPORT unsigned int BG_GetNumWeapons();

#endif /* __BG_PUBLIC_H__ */
