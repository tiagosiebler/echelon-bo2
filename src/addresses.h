#ifndef __ADDRESSES_H__
#define __ADDRESSES_H__

#define BO2_119

#ifdef BO2_116
/* general game toc */
#define GAME_TOC						0x00D67E90

/* function addresses */
#define SV_GAMESENDSERVERCOMMAND		0x0034A1CC
#define SV_SETCONFIGSTRING				0x0034C728
#define SV_LINKENTITY					0x00359BF0
#define SV_ADDTESTCLIENT				0x00349BC0
#define SV_CLIENTCOMMAND				0x003493B4
#define SV_MAPRESTART					0x00342E3C
#define SV_BANCLIENT					0x003462A8
#define PRINTF							0x0084B300
#define SPRINTF							0x0084B41C
#define SNPRINTF						0x0084B390
#define VECTOANGLES						0x003CADF0
#define SETCLIENTVIEWANGLE				0x001E1D90
#define ANGLEVECTORS					0x003CFFF8
#define G_GETPLAYERVIEWORIGIN			0x001E60D0
#define G_GIVEPLAYERWEAPON				0x002A8364
#define ADD_AMMO						0x00208B48
#define BG_TAKEWEAPON					0x005F06EC
#define BG_GETWEAPONDEF					0x00607088
#define BG_GETWEAPONVARIANTDEF			0x00607060
#define BG_GETNUMWEAPONS				0x00607074
#define WEAPON_ROCKETLAUNCHER_FIRE		0x002A5C28
#define BULLET_FIRE						0x001D1510
#define DROP_ITEM						0x00209C50
#define G_RUMBLEINDEX					0x00276BB8
#define G_ADDEVENT						0x00279950
#define G_TEMPENTITY					0x00279740
#define G_EFFECTINDEX					0x00276978
#define G_LOCALIZEDSTRINGINDEX			0x00275D24
#define G_MATERIALINDEX					0x00276020
#define G_MODELINDEX					0x00276180
#define G_FINDCONFIGSTRINGINDEX			0x00275B90
#define G_TAGINDEX						0x00276884
#define G_SOUNDALIASINDEX				0x00505E0C
#define DVAR_FINDVAR					0x003DA888
#define DB_FINDXASSETHEADER				0x0018AC04
#define SCR_NOTIFYNUM					0x0049D228
#define SCR_SETSTRING					0x0048F6E4
#define SL_CONVERTTOSTRING				0x0048E66C
#define SL_GETSTRING					0x0048F0F8
#define G_LOCATIONALTRACE				0x0035C598
#define G_TRACECAPSULE					0x0035C484
#define TRACE_GETENTITYHITID			0x00306F30
#define G_ENTLINKTO						0x002AD440
#define G_ENTLINKTOWITHOFFSET			0x002AD48C
#define G_ENTUNLINK						0x002AD5C0
#define G_SPAWN							0x00278C60
#define G_FREEENTITY					0x00279140
#define G_CALLSPAWN						0x0026A05C
#define G_CALLSPAWNENTITY				0x0026A528
#define G_SPAWNHELICOPTER				0x0022C558
#define G_SPAWNTURRET					0x002BA5C8
#define G_SPAWNSTATICENTITY				0x00278A8C
#define SP_SCRIPT_MODEL					0x002670E8
#define G_SETMODEL						0x00277644
#define SCRIPTMOVER_SETUPMOVE			0x00267A7C
#define SCRIPTMOVER_SETUPROTATE			0x0026833C //haven't checked
#define SCRIPTMOVER_SETUPPHYSICSLAUNCH	0x00266D70
#define VEH_UNLINKPLAYER				0x002806EC
#define G_SETORIGIN						0x00279698
#define G_SETANGLE						0x00279D78
#define SPAWNVEHICLE					0x00281AA0
#define VEH_SETUSABLITY					0x0028150C
#define VEH_ENTERVEHICLE				0x0027F740
#define CG_GETWEAPONINDEXFORNAME		0x002A6BE8
#define SCR_VEHICLE_DIE					0x002812F0
#define SCR_ADDENTITY					0x0026AC30
#define SCR_ADDSTRING					0x004A57E8
#define SCR_EXECENTTHREAD				0x0026B2D8
#define SCR_FREETHREAD					0x004A335C
#define PLAYER_DIE						0x001FD510
#define G_RADIUSDAMAGE					0x001FFEC0
#define G_DOBJUPDATE					0x00276FD0
#define CBUF_ADDTEXT					0x00313E88
#define SYS_GETVALUE					0x00340E34

/* structs */
#define G_ENTITIES						0x016B7920
#define G_CLIENTS						0x0177E928
#define SCR_CONST						0x018FAD00
#define G_HUDELEMS						0x015DB500
#define LEVEL							0x01605B00
#define LEVEL_BGS						0x0160FB00
#define SVS								0x01BB3F80
#define G_SCR_DATA						0x0183DED0

/* game static variables */
#define SV_CENTERMAP					0x00F10B64
#define CL_INGAME						0x00F0F850
#define SV_SERVERID						0x01BB3EE8
#define TIMESCALE						0x01A1F87C

/* code patches */
#define GRAVITY_PER_PLAYER				0x001E11C8
#define REMOVEREFTOOBJECTPATCH			0x00490558
#define VM_NOTIFY_HOOK					0x0049C3E4

/* dynamic offsets */
#define TLS_VALUE						-0x0006FCC
#define TLS_BGS							-0x0006FEC
#elif defined(BO2_118)
/* general game toc */
#define GAME_TOC						0x00D67E98

/* function addresses */
#define SV_GAMESENDSERVERCOMMAND		0x0034A1DC
#define SV_SETCONFIGSTRING				0x0034C738
#define SV_LINKENTITY					0x00359C00
#define SV_ADDTESTCLIENT				0x00349BD8
#define SV_MAPRESTART					0x00342E54
#define SV_BANCLIENT					0x003462C0
#define PRINTF							0x0084B310
#define SPRINTF							0x0084B42C
#define SNPRINTF						0x0084B3A0
#define VECTOANGLES						0x003CAE00
#define SETCLIENTVIEWANGLE				0x001E1D90
#define ANGLEVECTORS					0x003D0008
#define G_GETPLAYERVIEWORIGIN			0x001E62C0
#define G_GIVEPLAYERWEAPON				0x002A8364
#define ADD_AMMO						0x00208B48
#define BG_TAKEPLAYERWEAPON				0x005F06FC
#define BG_GETWEAPONDEF					0x00607098
#define BG_GETWEAPONVARIANTDEF			0x00607070
#define BG_GETNUMWEAPONS				0x00607084
#define BG_WEAPONNAME					0x005F363C
#define BG_GETPERKINDEXFORNAME			0x005C9010
#define WEAPON_ROCKETLAUNCHER_FIRE		0x002A5C28
#define BULLET_FIRE						0x001D1510
#define DROP_ITEM						0x00209C50
#define G_RUMBLEINDEX					0x00276BB8
#define G_ADDEVENT						0x00279950
#define G_TEMPENTITY					0x00279740
#define G_EFFECTINDEX					0x00276978
#define G_LOCALIZEDSTRINGINDEX			0x00275D24
#define G_MATERIALINDEX					0x00276020
#define G_MODELINDEX					0x00276180
#define G_FINDCONFIGSTRINGINDEX			0x00275B90
#define G_TAGINDEX						0x00276884
#define G_SOUNDALIASINDEX				0x00505E1C
#define DVAR_FINDVAR					0x003DA898
#define DB_FINDXASSETHEADER				0x0018AC04
#define DB_ALLOCXASSETHEADER			0x0018835C
#define SCR_NOTIFYNUM					0x0049D238
#define SCR_SETSTRING					0x0048F6F4
#define SL_CONVERTTOSTRING				0x0048E67C
#define SL_GETSTRING					0x0048F108
#define G_LOCATIONALTRACE				0x0035C5A8
#define G_TRACECAPSULE					0x0035C494
#define TRACE_GETENTITYHITID			0x00306F30
#define G_ENTLINKTO						0x002AD440
#define G_ENTLINKTOWITHOFFSET			0x002AD48C
#define G_ENTUNLINK						0x002AD5C0
#define G_SPAWN							0x00278C60
#define G_FREEENTITY					0x00279140
#define G_CALLSPAWN						0x0026A05C
#define G_CALLSPAWNENTITY				0x0026A528
#define G_SPAWNHELICOPTER				0x0022C558
#define G_SPAWNTURRET					0x002BA5C8
#define G_SPAWNSTATICENTITY				0x00278A8C
#define SP_SCRIPT_MODEL					0x002670E8
#define G_SETMODEL						0x00277644
#define SCRIPTMOVER_SETUPMOVE			0x00267A7C
#define SCRIPTMOVER_ROTATE				0x0026833C
#define SCRIPTMOVER_SETUPPHYSICSLAUNCH	0x00266D70
#define VEH_UNLINKPLAYER				0x002806EC
#define G_SETORIGIN						0x00279698
#define G_SETANGLE						0x00279D78
#define G_SPAWNVEHICLE					0x00281AA0
#define G_MAKEVEHICLEUSABLE				0x0028150C
#define VEH_LINKPLAYER					0x0027F740
#define G_GETWEAPONINDEXFORNAME			0x002A6BE8
#define G_FREEVEHICLE					0x002812F0
#define SCR_ADDENTITY					0x0026AC30
#define SCR_ADDSTRING					0x004A57F8
#define SCR_ADDINT						0x004A5388
#define SCR_ADDCONSTSTRING				0x0049BC34
#define SCR_ADDUNDEFINED				0x0049BBAC
#define SCR_EXECTHREAD					0x004A2E4C
#define SCR_EXECENTTHREAD				0x0026B2D8
#define SCR_FREETHREAD					0x004A336C
#define SCR_LOADSCRIPT					0x00486B3C
#define SCR_GETFUNCTIONHANDLE			0x004898CC
#define SETMODELINTERNAL				0x00243978
#define PLAYER_DIE						0x001FD510
#define G_RADIUSDAMAGE					0x001FFEC0
#define CBUF_ADDTEXT					0x00313E88
#define SYS_GETVALUE					0x00340E4C
#define G_GETHITLOCATIONSTRING			0x00200470

/* structs */
#define G_ENTITIES						0x016B9F20
#define G_CLIENTS						0x01780F28
#define SCR_CONST						0x018FD300
#define G_HUDELEMS						0x015DDB00
#define LEVEL							0x01608100
#define LEVEL_BGS						0x01612100
#define SVS								0x01BB6600
#define G_SCR_DATA						0x018404D0
#define S_BSPORDYNAMICSPAWNS			0x0091E1E4

/* game static variables */
#define SV_CENTERMAP					0x00F10B64
#define CL_INGAME						0x00F0F850
#define SV_SERVERID						0x01BB6508
#define TIMESCALE						0x01A21E7C
#define MODNAMES						0x00D6A624

/* code patches */
#define GRAVITY_PER_PLAYER				0x001E11C8
#define REMOVEREFTOOBJECTPATCH			0x00490568
#define VM_NOTIFY_HOOK					0x0049C3F4

/* dynamic offsets */
#define TLS_VALUE						-0x0006FC4
#define TLS_BGS							-0x0006FEC
#elif defined (BO2_119)
/* general game toc */
#define GAME_TOC						0x00D67E98

/* function addresses */
#define SV_GAMESENDSERVERCOMMAND		0x00349F6C
#define SV_SETCONFIGSTRING				0x0034C4C8
#define SV_LINKENTITY					0x00359990
#define SV_ADDTESTCLIENT				0x00349968
#define SV_MAPRESTART					0x00342BE4
#define SV_BANCLIENT					0x00346050
#define PRINTF							0x0084B000
#define SPRINTF							0x0084B11C
#define SNPRINTF						0x0084B090
#define VECTOANGLES						0x003CAB90
#define SETCLIENTVIEWANGLE				0x001E1BF0
#define ANGLEVECTORS					0x003CFD98
#define G_GETPLAYERVIEWORIGIN			0x001E6120
#define G_GIVEPLAYERWEAPON				0x002A81C4
#define ADD_AMMO						0x002089A8
#define BG_TAKEPLAYERWEAPON				0x005F056C
#define BG_GETWEAPONDEF					0x00606F08
#define BG_GETWEAPONVARIANTDEF			0x00606EE0
#define BG_GETNUMWEAPONS				0x00606EF4
#define BG_WEAPONNAME					0x005F34AC
#define BG_GETPERKINDEXFORNAME			0x005C8E80
#define WEAPON_ROCKETLAUNCHER_FIRE		0x002A5A88
#define BULLET_FIRE						0x001D1370
#define DROP_ITEM						0x00209AB0
#define G_RUMBLEINDEX					0x00276A18
#define G_ADDEVENT						0x002797B0
#define G_TEMPENTITY					0x002795A0
#define G_EFFECTINDEX					0x002767D8
#define G_LOCALIZEDSTRINGINDEX			0x00275B84
#define G_MATERIALINDEX					0x00275E80
#define G_MODELINDEX					0x00275FE0
#define G_FINDCONFIGSTRINGINDEX			0x002759F0
#define G_TAGINDEX						0x002766E4
#define G_SOUNDALIASINDEX				0x00505A7C
#define DVAR_FINDVAR					0x003DA6CC
#define DB_FINDXASSETHEADER				0x0018AC04
#define DB_ALLOCXASSETHEADER			0x0018835C
#define SCR_NOTIFYNUM					0x0049CE98
#define SCR_SETSTRING					0x0048F354
#define SL_CONVERTTOSTRING				0x0048E2DC
#define SL_GETSTRING					0x0048ED68
#define G_LOCATIONALTRACE				0x0035C338
#define G_TRACECAPSULE					0x0035C224
#define TRACE_GETENTITYHITID			0x00306CC0
#define G_ENTLINKTO						0x002AD2A0
#define G_ENTLINKTOWITHOFFSET			0x002AD2EC
#define G_ENTUNLINK						0x002AD420
#define G_SPAWN							0x00278AC0
#define G_FREEENTITY					0x00278FA0
#define G_CALLSPAWN						0x00269EBC
#define G_CALLSPAWNENTITY				0x0026A388
#define G_SPAWNHELICOPTER				0x0022C3B8
#define G_SPAWNTURRET					0x002BA428
#define G_SPAWNSTATICENTITY				0x002788EC
//#define SP_SCRIPT_MODEL					0x00266F48
#define G_SETMODEL						0x002774A4
#define SCRIPTMOVER_SETUPMOVE			0x002678DC
#define SCRIPTMOVER_ROTATE				0x0026819C
#define SCRIPTMOVER_SETUPPHYSICSLAUNCH	0x00266BD0
#define VEH_UNLINKPLAYER				0x0028054C
#define G_SETORIGIN						0x002794F8
#define G_SETANGLE						0x00279BD8
#define G_SPAWNVEHICLE					0x00281900
#define G_MAKEVEHICLEUSABLE				0x0028136C
#define VEH_LINKPLAYER					0x0027F5A0
#define G_GETWEAPONINDEXFORNAME			0x002A6A48
#define G_FREEVEHICLE					0x00281150
#define SCR_ADDENTITY					0x0026AA90
#define SCR_ADDSTRING					0x004A5458
#define SCR_ADDINT						0x004A4FE8
#define SCR_ADDCONSTSTRING				0x0049B894
#define SCR_ADDUNDEFINED				0x0049B80C
#define SCR_EXECTHREAD					0x004A2AAC
#define SCR_EXECENTTHREAD				0x0026B138
#define SCR_FREETHREAD					0x004A2FCC
#define SCR_LOADSCRIPT					0x0048679C
#define SCR_GETFUNCTIONHANDLE			0x0048952C
#define SETMODELINTERNAL				0x002437D8
#define PLAYER_DIE						0x001FD370
#define G_RADIUSDAMAGE					0x001FFD20
#define CBUF_ADDTEXT					0x00313C18
#define SYS_GETVALUE					0x00340BDC
#define G_GETHITLOCATIONSTRING			0x002002D0
#define SPAWNTURRETINTERNAL				0x00243724

/* static variables */
#define G_ENTITIES						0x016B9F20
#define G_CLIENTS						0x01780F28
#define SCR_CONST						0x018FD300
#define G_HUDELEMS						0x015DDB00
#define LEVEL							0x01608100
#define LEVEL_BGS						0x01612100
#define SVS								0x01BB6600
#define G_SCR_DATA						0x018404D0
#define SV_CENTERMAP					0x00F10B64
#define CL_INGAME						0x00F0F850
//#define SV_SERVERID						0x01BB6508
//#define TIMESCALE						0x01A21E7C
#define COM_TIMESCALE					0x01A21E74
#define MODNAMES						0x00D6A624
#define JUMP_SLOWDOWNENABLE				0x02961080

/* code patches */
#define GRAVITY_PER_PLAYER				0x001E1028
#define REMOVEREFTOOBJECTPATCH			0x004901C8
#define VM_NOTIFY_HOOK					0x0049C054

/* static offsets */
#define TLS_VALUE						-0x0006FC4
#define TLS_BGS							-0x0006FEC
#endif

#endif /*__ADDRESSES_H__*/
