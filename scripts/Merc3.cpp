/////////////////////////////////////////////////////////////////////
// D.A.L.L.A.S. Generated Level Script - DLL Source File
// 
// Filename:	Merc3.cpp
// Version:	3
/////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "osiris_import.h"
#include "osiris_common.h"
#include "DallasFuncs.cpp"

#ifdef _MSC_VER		//Visual C++ Build
#define STDCALL		__stdcall
#define STDCALLPTR	*STDCALL
#else					//Non-Visual C++ Build
#define STDCALL __attribute__((stdcall))
#define STDCALLPTR	STDCALL*
#endif

#ifdef __cplusplus
extern "C"{
#endif
char		STDCALL InitializeDLL(tOSIRISModuleInit *func_list);
void		STDCALL ShutdownDLL(void);
int		STDCALL GetGOScriptID(char *name,ubyte is_door);
void		STDCALLPTR CreateInstance(int id);
void		STDCALL DestroyInstance(int id,void *ptr);
short	STDCALL CallInstanceEvent(int id,void *ptr,int event,tOSIRISEventInfo *data);
int		STDCALL GetTriggerScriptID(int trigger_room, int trigger_face );
int		STDCALL GetCOScriptList( int **list, int **id_list );
int		STDCALL SaveRestoreState( void *file_ptr, ubyte saving_state );
#ifdef __cplusplus
}
#endif

// =================
// Script ID Numbers
// =================
#define ID_LEVEL_0000			0x000

#define ID_CUSTOM_OBJECT_0B83		0x001
#define ID_CUSTOM_OBJECT_0B85		0x002
#define ID_CUSTOM_OBJECT_1140		0x003
#define ID_CUSTOM_OBJECT_1941		0x004
#define ID_CUSTOM_OBJECT_0943		0x005
#define ID_CUSTOM_OBJECT_0942		0x006
#define ID_CUSTOM_OBJECT_0950		0x007
#define ID_CUSTOM_OBJECT_0951		0x008
#define ID_CUSTOM_OBJECT_093A		0x009
#define ID_CUSTOM_OBJECT_193D		0x00a
#define ID_CUSTOM_OBJECT_093B		0x00b
#define ID_CUSTOM_OBJECT_192E		0x00c
#define ID_CUSTOM_OBJECT_093C		0x00d
#define ID_CUSTOM_OBJECT_1318		0x00e
#define ID_CUSTOM_OBJECT_1317		0x00f
#define ID_CUSTOM_OBJECT_190B		0x010
#define ID_CUSTOM_OBJECT_6909		0x011
#define ID_CUSTOM_OBJECT_191C		0x012
#define ID_CUSTOM_OBJECT_111D		0x013
#define ID_CUSTOM_OBJECT_110F		0x014
#define ID_CUSTOM_OBJECT_1194		0x015
#define ID_CUSTOM_OBJECT_11FA		0x016
#define ID_CUSTOM_OBJECT_0CB4		0x017
#define ID_CUSTOM_OBJECT_20B0		0x018
#define ID_CUSTOM_OBJECT_136F		0x019
#define ID_CUSTOM_OBJECT_3090		0x01a
#define ID_CUSTOM_OBJECT_30AE		0x01b
#define ID_CUSTOM_OBJECT_50FF		0x01c
#define ID_CUSTOM_OBJECT_0987		0x01d
#define ID_CUSTOM_OBJECT_0989		0x01e
#define ID_CUSTOM_OBJECT_10FA		0x01f
#define ID_CUSTOM_OBJECT_18FB		0x020
#define ID_CUSTOM_OBJECT_10FC		0x021
#define ID_CUSTOM_OBJECT_10F9		0x022
#define ID_CUSTOM_OBJECT_10F8		0x023
#define ID_CUSTOM_OBJECT_D08A		0x024
#define ID_CUSTOM_OBJECT_2888		0x025
#define ID_CUSTOM_OBJECT_09FD		0x026
#define ID_CUSTOM_OBJECT_48C5		0x027
#define ID_CUSTOM_OBJECT_09FC		0x028
#define ID_CUSTOM_OBJECT_08D6		0x029
#define ID_CUSTOM_OBJECT_09FB		0x02a
#define ID_CUSTOM_OBJECT_08DF		0x02b
#define ID_CUSTOM_OBJECT_105C		0x02c
#define ID_CUSTOM_OBJECT_08E8		0x02d
#define ID_CUSTOM_OBJECT_60EB		0x02e
#define ID_CUSTOM_OBJECT_28EC		0x02f
#define ID_CUSTOM_OBJECT_118B		0x030
#define ID_CUSTOM_OBJECT_118D		0x031
#define ID_CUSTOM_OBJECT_118C		0x032
#define ID_CUSTOM_OBJECT_098E		0x033
#define ID_CUSTOM_OBJECT_11F7		0x034
#define ID_CUSTOM_OBJECT_0983		0x035
#define ID_CUSTOM_OBJECT_1BB9		0x036
#define ID_CUSTOM_OBJECT_13AD		0x037
#define ID_CUSTOM_OBJECT_13AC		0x038
#define ID_CUSTOM_OBJECT_13AB		0x039
#define ID_CUSTOM_OBJECT_13AA		0x03a
#define ID_CUSTOM_OBJECT_0A2E		0x03b
#define ID_CUSTOM_OBJECT_0A30		0x03c
#define ID_CUSTOM_OBJECT_0A33		0x03d
#define ID_CUSTOM_OBJECT_0982		0x03e
#define ID_CUSTOM_OBJECT_12DF		0x03f
#define ID_CUSTOM_OBJECT_12E1		0x040
#define ID_CUSTOM_OBJECT_12DE		0x041
#define ID_CUSTOM_OBJECT_1289		0x042
#define ID_CUSTOM_OBJECT_1290		0x043
#define ID_CUSTOM_OBJECT_128E		0x044
#define ID_CUSTOM_OBJECT_128C		0x045
#define ID_CUSTOM_OBJECT_128A		0x046
#define ID_CUSTOM_OBJECT_18A0		0x047
#define ID_CUSTOM_OBJECT_083D		0x048
#define ID_CUSTOM_OBJECT_0B86		0x049
#define ID_CUSTOM_OBJECT_0B80		0x04a
#define ID_CUSTOM_OBJECT_0B82		0x04b
#define ID_CUSTOM_OBJECT_109F		0x04c
#define ID_CUSTOM_OBJECT_1153		0x04d
#define ID_CUSTOM_OBJECT_115E		0x04e
#define ID_CUSTOM_OBJECT_095F		0x04f
#define ID_CUSTOM_OBJECT_0960		0x050
#define ID_CUSTOM_OBJECT_0961		0x051

#define ID_TRIGGER_0012		0x052
#define ID_TRIGGER_0022		0x053
#define ID_TRIGGER_0011		0x054
#define ID_TRIGGER_0023		0x055
#define ID_TRIGGER_0000		0x056
#define ID_TRIGGER_0021		0x057
#define ID_TRIGGER_0010		0x058
#define ID_TRIGGER_0002		0x059
#define ID_TRIGGER_001E		0x05a
#define ID_TRIGGER_0003		0x05b
#define ID_TRIGGER_0004		0x05c
#define ID_TRIGGER_0005		0x05d
#define ID_TRIGGER_0006		0x05e
#define ID_TRIGGER_0007		0x05f
#define ID_TRIGGER_0008		0x060
#define ID_TRIGGER_001F		0x061
#define ID_TRIGGER_0020		0x062
#define ID_TRIGGER_0025		0x063
#define ID_TRIGGER_0024		0x064
#define ID_TRIGGER_000C		0x065
#define ID_TRIGGER_001D		0x066
#define ID_TRIGGER_000D		0x067
#define ID_TRIGGER_000E		0x068
#define ID_TRIGGER_000F		0x069
#define ID_TRIGGER_0014		0x06a
#define ID_TRIGGER_0017		0x06b
#define ID_TRIGGER_0016		0x06c
#define ID_TRIGGER_0018		0x06d
#define ID_TRIGGER_001C		0x06e
#define ID_TRIGGER_0019		0x06f
#define ID_TRIGGER_001A		0x070
#define ID_TRIGGER_001B		0x071

// ========================
// Script Class Definitions
// ========================

class BaseScript {
public:
	BaseScript();
	~BaseScript();
	virtual short CallEvent(int event, tOSIRISEventInfo *data);
};

class LevelScript_0000 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0B83 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0B85 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1140 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1941 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0943 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0942 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0950 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0951 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_093A : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_193D : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_093B : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_192E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_093C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1318 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1317 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_190B : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_6909 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_191C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_111D : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_110F : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1194 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_11FA : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0CB4 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_20B0 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_136F : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_3090 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_30AE : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_50FF : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0987 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0989 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_10FA : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_18FB : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_10FC : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_10F9 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_10F8 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_D08A : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_2888 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_09FD : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_48C5 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_09FC : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_08D6 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_09FB : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_08DF : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_105C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_08E8 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_60EB : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_28EC : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_118B : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_118D : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_118C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_098E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_11F7 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0983 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1BB9 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_13AD : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_13AC : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_13AB : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_13AA : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0A2E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0A30 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0A33 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0982 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_12DF : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_12E1 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_12DE : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1289 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1290 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_128E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_128C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_128A : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_18A0 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_083D : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0B86 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0B80 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0B82 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_109F : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_1153 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_115E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_095F : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0960 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class CustomObjectScript_0961 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0012 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0022 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0011 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0023 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0000 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0021 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0010 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0002 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_001E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0003 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0004 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0005 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0006 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0007 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0008 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_001F : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0020 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0025 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0024 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_000C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_001D : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_000D : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_000E : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_000F : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0014 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0017 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0016 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0018 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_001C : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_0019 : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_001A : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

class TriggerScript_001B : public BaseScript {
public:
	short CallEvent(int event, tOSIRISEventInfo *data);
};

// ======================
// Global Action Counters
// ======================

#define MAX_ACTION_CTR_VALUE		100000

int ScriptActionCtr_000 = 0;
int ScriptActionCtr_209 = 0;
int ScriptActionCtr_102 = 0;
int ScriptActionCtr_031 = 0;
int ScriptActionCtr_036 = 0;
int ScriptActionCtr_068 = 0;
int ScriptActionCtr_050 = 0;
int ScriptActionCtr_056 = 0;
int ScriptActionCtr_078 = 0;
int ScriptActionCtr_104 = 0;
int ScriptActionCtr_136 = 0;
int ScriptActionCtr_013 = 0;
int ScriptActionCtr_132 = 0;
int ScriptActionCtr_133 = 0;
int ScriptActionCtr_134 = 0;
int ScriptActionCtr_042 = 0;
int ScriptActionCtr_014 = 0;
int ScriptActionCtr_001 = 0;
int ScriptActionCtr_002 = 0;
int ScriptActionCtr_009 = 0;
int ScriptActionCtr_142 = 0;
int ScriptActionCtr_003 = 0;
int ScriptActionCtr_211 = 0;
int ScriptActionCtr_004 = 0;
int ScriptActionCtr_005 = 0;
int ScriptActionCtr_010 = 0;
int ScriptActionCtr_006 = 0;
int ScriptActionCtr_127 = 0;
int ScriptActionCtr_128 = 0;
int ScriptActionCtr_011 = 0;
int ScriptActionCtr_012 = 0;
int ScriptActionCtr_146 = 0;
int ScriptActionCtr_141 = 0;
int ScriptActionCtr_212 = 0;
int ScriptActionCtr_143 = 0;
int ScriptActionCtr_144 = 0;
int ScriptActionCtr_149 = 0;
int ScriptActionCtr_147 = 0;
int ScriptActionCtr_150 = 0;
int ScriptActionCtr_151 = 0;
int ScriptActionCtr_157 = 0;
int ScriptActionCtr_145 = 0;
int ScriptActionCtr_007 = 0;
int ScriptActionCtr_008 = 0;
int ScriptActionCtr_210 = 0;
int ScriptActionCtr_207 = 0;
int ScriptActionCtr_208 = 0;
int ScriptActionCtr_060 = 0;
int ScriptActionCtr_181 = 0;
int ScriptActionCtr_015 = 0;
int ScriptActionCtr_113 = 0;
int ScriptActionCtr_175 = 0;
int ScriptActionCtr_016 = 0;
int ScriptActionCtr_017 = 0;
int ScriptActionCtr_022 = 0;
int ScriptActionCtr_023 = 0;
int ScriptActionCtr_024 = 0;
int ScriptActionCtr_026 = 0;
int ScriptActionCtr_027 = 0;
int ScriptActionCtr_028 = 0;
int ScriptActionCtr_018 = 0;
int ScriptActionCtr_019 = 0;
int ScriptActionCtr_025 = 0;
int ScriptActionCtr_020 = 0;
int ScriptActionCtr_021 = 0;
int ScriptActionCtr_140 = 0;
int ScriptActionCtr_116 = 0;
int ScriptActionCtr_115 = 0;
int ScriptActionCtr_117 = 0;
int ScriptActionCtr_125 = 0;
int ScriptActionCtr_118 = 0;
int ScriptActionCtr_119 = 0;
int ScriptActionCtr_120 = 0;
int ScriptActionCtr_121 = 0;
int ScriptActionCtr_122 = 0;
int ScriptActionCtr_123 = 0;
int ScriptActionCtr_124 = 0;
int ScriptActionCtr_029 = 0;
int ScriptActionCtr_030 = 0;
int ScriptActionCtr_032 = 0;
int ScriptActionCtr_033 = 0;
int ScriptActionCtr_034 = 0;
int ScriptActionCtr_203 = 0;
int ScriptActionCtr_037 = 0;
int ScriptActionCtr_035 = 0;
int ScriptActionCtr_038 = 0;
int ScriptActionCtr_043 = 0;
int ScriptActionCtr_204 = 0;
int ScriptActionCtr_039 = 0;
int ScriptActionCtr_040 = 0;
int ScriptActionCtr_041 = 0;
int ScriptActionCtr_044 = 0;
int ScriptActionCtr_045 = 0;
int ScriptActionCtr_046 = 0;
int ScriptActionCtr_047 = 0;
int ScriptActionCtr_048 = 0;
int ScriptActionCtr_049 = 0;
int ScriptActionCtr_072 = 0;
int ScriptActionCtr_071 = 0;
int ScriptActionCtr_070 = 0;
int ScriptActionCtr_069 = 0;
int ScriptActionCtr_108 = 0;
int ScriptActionCtr_067 = 0;
int ScriptActionCtr_066 = 0;
int ScriptActionCtr_065 = 0;
int ScriptActionCtr_109 = 0;
int ScriptActionCtr_062 = 0;
int ScriptActionCtr_063 = 0;
int ScriptActionCtr_064 = 0;
int ScriptActionCtr_112 = 0;
int ScriptActionCtr_052 = 0;
int ScriptActionCtr_053 = 0;
int ScriptActionCtr_054 = 0;
int ScriptActionCtr_153 = 0;
int ScriptActionCtr_051 = 0;
int ScriptActionCtr_205 = 0;
int ScriptActionCtr_206 = 0;
int ScriptActionCtr_061 = 0;
int ScriptActionCtr_076 = 0;
int ScriptActionCtr_077 = 0;
int ScriptActionCtr_075 = 0;
int ScriptActionCtr_074 = 0;
int ScriptActionCtr_073 = 0;
int ScriptActionCtr_178 = 0;
int ScriptActionCtr_177 = 0;
int ScriptActionCtr_080 = 0;
int ScriptActionCtr_079 = 0;
int ScriptActionCtr_081 = 0;
int ScriptActionCtr_082 = 0;
int ScriptActionCtr_083 = 0;
int ScriptActionCtr_084 = 0;
int ScriptActionCtr_085 = 0;
int ScriptActionCtr_086 = 0;
int ScriptActionCtr_087 = 0;
int ScriptActionCtr_088 = 0;
int ScriptActionCtr_089 = 0;
int ScriptActionCtr_090 = 0;
int ScriptActionCtr_091 = 0;
int ScriptActionCtr_092 = 0;
int ScriptActionCtr_093 = 0;
int ScriptActionCtr_095 = 0;
int ScriptActionCtr_057 = 0;
int ScriptActionCtr_094 = 0;
int ScriptActionCtr_179 = 0;
int ScriptActionCtr_166 = 0;
int ScriptActionCtr_182 = 0;
int ScriptActionCtr_183 = 0;
int ScriptActionCtr_184 = 0;
int ScriptActionCtr_185 = 0;
int ScriptActionCtr_186 = 0;
int ScriptActionCtr_096 = 0;
int ScriptActionCtr_097 = 0;
int ScriptActionCtr_098 = 0;
int ScriptActionCtr_099 = 0;
int ScriptActionCtr_174 = 0;
int ScriptActionCtr_100 = 0;
int ScriptActionCtr_055 = 0;
int ScriptActionCtr_188 = 0;
int ScriptActionCtr_103 = 0;
int ScriptActionCtr_101 = 0;
int ScriptActionCtr_180 = 0;
int ScriptActionCtr_187 = 0;
int ScriptActionCtr_202 = 0;
int ScriptActionCtr_189 = 0;
int ScriptActionCtr_190 = 0;
int ScriptActionCtr_196 = 0;
int ScriptActionCtr_191 = 0;
int ScriptActionCtr_195 = 0;
int ScriptActionCtr_194 = 0;
int ScriptActionCtr_193 = 0;
int ScriptActionCtr_192 = 0;
int ScriptActionCtr_197 = 0;
int ScriptActionCtr_201 = 0;
int ScriptActionCtr_200 = 0;
int ScriptActionCtr_199 = 0;
int ScriptActionCtr_198 = 0;
int ScriptActionCtr_058 = 0;
int ScriptActionCtr_110 = 0;
int ScriptActionCtr_107 = 0;
int ScriptActionCtr_111 = 0;
int ScriptActionCtr_059 = 0;
int ScriptActionCtr_105 = 0;
int ScriptActionCtr_106 = 0;
int ScriptActionCtr_114 = 0;
int ScriptActionCtr_176 = 0;
int ScriptActionCtr_126 = 0;
int ScriptActionCtr_129 = 0;
int ScriptActionCtr_135 = 0;
int ScriptActionCtr_130 = 0;
int ScriptActionCtr_131 = 0;
int ScriptActionCtr_148 = 0;
int ScriptActionCtr_137 = 0;
int ScriptActionCtr_138 = 0;
int ScriptActionCtr_154 = 0;
int ScriptActionCtr_155 = 0;
int ScriptActionCtr_163 = 0;
int ScriptActionCtr_139 = 0;
int ScriptActionCtr_152 = 0;
int ScriptActionCtr_156 = 0;
int ScriptActionCtr_160 = 0;
int ScriptActionCtr_161 = 0;
int ScriptActionCtr_158 = 0;
int ScriptActionCtr_159 = 0;
int ScriptActionCtr_164 = 0;
int ScriptActionCtr_165 = 0;
int ScriptActionCtr_167 = 0;
int ScriptActionCtr_168 = 0;
int ScriptActionCtr_170 = 0;
int ScriptActionCtr_169 = 0;
int ScriptActionCtr_171 = 0;
int ScriptActionCtr_172 = 0;
int ScriptActionCtr_173 = 0;
int ScriptActionCtr_162 = 0;
 
// ========================================
// Function to Clear Global Action Counters
// ========================================
void ClearGlobalActionCtrs(void)
{
	ScriptActionCtr_000 = 0;
	ScriptActionCtr_209 = 0;
	ScriptActionCtr_102 = 0;
	ScriptActionCtr_031 = 0;
	ScriptActionCtr_036 = 0;
	ScriptActionCtr_068 = 0;
	ScriptActionCtr_050 = 0;
	ScriptActionCtr_056 = 0;
	ScriptActionCtr_078 = 0;
	ScriptActionCtr_104 = 0;
	ScriptActionCtr_136 = 0;
	ScriptActionCtr_013 = 0;
	ScriptActionCtr_132 = 0;
	ScriptActionCtr_133 = 0;
	ScriptActionCtr_134 = 0;
	ScriptActionCtr_042 = 0;
	ScriptActionCtr_014 = 0;
	ScriptActionCtr_001 = 0;
	ScriptActionCtr_002 = 0;
	ScriptActionCtr_009 = 0;
	ScriptActionCtr_142 = 0;
	ScriptActionCtr_003 = 0;
	ScriptActionCtr_211 = 0;
	ScriptActionCtr_004 = 0;
	ScriptActionCtr_005 = 0;
	ScriptActionCtr_010 = 0;
	ScriptActionCtr_006 = 0;
	ScriptActionCtr_127 = 0;
	ScriptActionCtr_128 = 0;
	ScriptActionCtr_011 = 0;
	ScriptActionCtr_012 = 0;
	ScriptActionCtr_146 = 0;
	ScriptActionCtr_141 = 0;
	ScriptActionCtr_212 = 0;
	ScriptActionCtr_143 = 0;
	ScriptActionCtr_144 = 0;
	ScriptActionCtr_149 = 0;
	ScriptActionCtr_147 = 0;
	ScriptActionCtr_150 = 0;
	ScriptActionCtr_151 = 0;
	ScriptActionCtr_157 = 0;
	ScriptActionCtr_145 = 0;
	ScriptActionCtr_007 = 0;
	ScriptActionCtr_008 = 0;
	ScriptActionCtr_210 = 0;
	ScriptActionCtr_207 = 0;
	ScriptActionCtr_208 = 0;
	ScriptActionCtr_060 = 0;
	ScriptActionCtr_181 = 0;
	ScriptActionCtr_015 = 0;
	ScriptActionCtr_113 = 0;
	ScriptActionCtr_175 = 0;
	ScriptActionCtr_016 = 0;
	ScriptActionCtr_017 = 0;
	ScriptActionCtr_022 = 0;
	ScriptActionCtr_023 = 0;
	ScriptActionCtr_024 = 0;
	ScriptActionCtr_026 = 0;
	ScriptActionCtr_027 = 0;
	ScriptActionCtr_028 = 0;
	ScriptActionCtr_018 = 0;
	ScriptActionCtr_019 = 0;
	ScriptActionCtr_025 = 0;
	ScriptActionCtr_020 = 0;
	ScriptActionCtr_021 = 0;
	ScriptActionCtr_140 = 0;
	ScriptActionCtr_116 = 0;
	ScriptActionCtr_115 = 0;
	ScriptActionCtr_117 = 0;
	ScriptActionCtr_125 = 0;
	ScriptActionCtr_118 = 0;
	ScriptActionCtr_119 = 0;
	ScriptActionCtr_120 = 0;
	ScriptActionCtr_121 = 0;
	ScriptActionCtr_122 = 0;
	ScriptActionCtr_123 = 0;
	ScriptActionCtr_124 = 0;
	ScriptActionCtr_029 = 0;
	ScriptActionCtr_030 = 0;
	ScriptActionCtr_032 = 0;
	ScriptActionCtr_033 = 0;
	ScriptActionCtr_034 = 0;
	ScriptActionCtr_203 = 0;
	ScriptActionCtr_037 = 0;
	ScriptActionCtr_035 = 0;
	ScriptActionCtr_038 = 0;
	ScriptActionCtr_043 = 0;
	ScriptActionCtr_204 = 0;
	ScriptActionCtr_039 = 0;
	ScriptActionCtr_040 = 0;
	ScriptActionCtr_041 = 0;
	ScriptActionCtr_044 = 0;
	ScriptActionCtr_045 = 0;
	ScriptActionCtr_046 = 0;
	ScriptActionCtr_047 = 0;
	ScriptActionCtr_048 = 0;
	ScriptActionCtr_049 = 0;
	ScriptActionCtr_072 = 0;
	ScriptActionCtr_071 = 0;
	ScriptActionCtr_070 = 0;
	ScriptActionCtr_069 = 0;
	ScriptActionCtr_108 = 0;
	ScriptActionCtr_067 = 0;
	ScriptActionCtr_066 = 0;
	ScriptActionCtr_065 = 0;
	ScriptActionCtr_109 = 0;
	ScriptActionCtr_062 = 0;
	ScriptActionCtr_063 = 0;
	ScriptActionCtr_064 = 0;
	ScriptActionCtr_112 = 0;
	ScriptActionCtr_052 = 0;
	ScriptActionCtr_053 = 0;
	ScriptActionCtr_054 = 0;
	ScriptActionCtr_153 = 0;
	ScriptActionCtr_051 = 0;
	ScriptActionCtr_205 = 0;
	ScriptActionCtr_206 = 0;
	ScriptActionCtr_061 = 0;
	ScriptActionCtr_076 = 0;
	ScriptActionCtr_077 = 0;
	ScriptActionCtr_075 = 0;
	ScriptActionCtr_074 = 0;
	ScriptActionCtr_073 = 0;
	ScriptActionCtr_178 = 0;
	ScriptActionCtr_177 = 0;
	ScriptActionCtr_080 = 0;
	ScriptActionCtr_079 = 0;
	ScriptActionCtr_081 = 0;
	ScriptActionCtr_082 = 0;
	ScriptActionCtr_083 = 0;
	ScriptActionCtr_084 = 0;
	ScriptActionCtr_085 = 0;
	ScriptActionCtr_086 = 0;
	ScriptActionCtr_087 = 0;
	ScriptActionCtr_088 = 0;
	ScriptActionCtr_089 = 0;
	ScriptActionCtr_090 = 0;
	ScriptActionCtr_091 = 0;
	ScriptActionCtr_092 = 0;
	ScriptActionCtr_093 = 0;
	ScriptActionCtr_095 = 0;
	ScriptActionCtr_057 = 0;
	ScriptActionCtr_094 = 0;
	ScriptActionCtr_179 = 0;
	ScriptActionCtr_166 = 0;
	ScriptActionCtr_182 = 0;
	ScriptActionCtr_183 = 0;
	ScriptActionCtr_184 = 0;
	ScriptActionCtr_185 = 0;
	ScriptActionCtr_186 = 0;
	ScriptActionCtr_096 = 0;
	ScriptActionCtr_097 = 0;
	ScriptActionCtr_098 = 0;
	ScriptActionCtr_099 = 0;
	ScriptActionCtr_174 = 0;
	ScriptActionCtr_100 = 0;
	ScriptActionCtr_055 = 0;
	ScriptActionCtr_188 = 0;
	ScriptActionCtr_103 = 0;
	ScriptActionCtr_101 = 0;
	ScriptActionCtr_180 = 0;
	ScriptActionCtr_187 = 0;
	ScriptActionCtr_202 = 0;
	ScriptActionCtr_189 = 0;
	ScriptActionCtr_190 = 0;
	ScriptActionCtr_196 = 0;
	ScriptActionCtr_191 = 0;
	ScriptActionCtr_195 = 0;
	ScriptActionCtr_194 = 0;
	ScriptActionCtr_193 = 0;
	ScriptActionCtr_192 = 0;
	ScriptActionCtr_197 = 0;
	ScriptActionCtr_201 = 0;
	ScriptActionCtr_200 = 0;
	ScriptActionCtr_199 = 0;
	ScriptActionCtr_198 = 0;
	ScriptActionCtr_058 = 0;
	ScriptActionCtr_110 = 0;
	ScriptActionCtr_107 = 0;
	ScriptActionCtr_111 = 0;
	ScriptActionCtr_059 = 0;
	ScriptActionCtr_105 = 0;
	ScriptActionCtr_106 = 0;
	ScriptActionCtr_114 = 0;
	ScriptActionCtr_176 = 0;
	ScriptActionCtr_126 = 0;
	ScriptActionCtr_129 = 0;
	ScriptActionCtr_135 = 0;
	ScriptActionCtr_130 = 0;
	ScriptActionCtr_131 = 0;
	ScriptActionCtr_148 = 0;
	ScriptActionCtr_137 = 0;
	ScriptActionCtr_138 = 0;
	ScriptActionCtr_154 = 0;
	ScriptActionCtr_155 = 0;
	ScriptActionCtr_163 = 0;
	ScriptActionCtr_139 = 0;
	ScriptActionCtr_152 = 0;
	ScriptActionCtr_156 = 0;
	ScriptActionCtr_160 = 0;
	ScriptActionCtr_161 = 0;
	ScriptActionCtr_158 = 0;
	ScriptActionCtr_159 = 0;
	ScriptActionCtr_164 = 0;
	ScriptActionCtr_165 = 0;
	ScriptActionCtr_167 = 0;
	ScriptActionCtr_168 = 0;
	ScriptActionCtr_170 = 0;
	ScriptActionCtr_169 = 0;
	ScriptActionCtr_171 = 0;
	ScriptActionCtr_172 = 0;
	ScriptActionCtr_173 = 0;
	ScriptActionCtr_162 = 0;
}
 
// ========================================
// Function to Save Global Action Counters
// ========================================
void SaveGlobalActionCtrs(void *file_ptr)
{
	File_WriteInt(ScriptActionCtr_000,file_ptr);
	File_WriteInt(ScriptActionCtr_209,file_ptr);
	File_WriteInt(ScriptActionCtr_102,file_ptr);
	File_WriteInt(ScriptActionCtr_031,file_ptr);
	File_WriteInt(ScriptActionCtr_036,file_ptr);
	File_WriteInt(ScriptActionCtr_068,file_ptr);
	File_WriteInt(ScriptActionCtr_050,file_ptr);
	File_WriteInt(ScriptActionCtr_056,file_ptr);
	File_WriteInt(ScriptActionCtr_078,file_ptr);
	File_WriteInt(ScriptActionCtr_104,file_ptr);
	File_WriteInt(ScriptActionCtr_136,file_ptr);
	File_WriteInt(ScriptActionCtr_013,file_ptr);
	File_WriteInt(ScriptActionCtr_132,file_ptr);
	File_WriteInt(ScriptActionCtr_133,file_ptr);
	File_WriteInt(ScriptActionCtr_134,file_ptr);
	File_WriteInt(ScriptActionCtr_042,file_ptr);
	File_WriteInt(ScriptActionCtr_014,file_ptr);
	File_WriteInt(ScriptActionCtr_001,file_ptr);
	File_WriteInt(ScriptActionCtr_002,file_ptr);
	File_WriteInt(ScriptActionCtr_009,file_ptr);
	File_WriteInt(ScriptActionCtr_142,file_ptr);
	File_WriteInt(ScriptActionCtr_003,file_ptr);
	File_WriteInt(ScriptActionCtr_211,file_ptr);
	File_WriteInt(ScriptActionCtr_004,file_ptr);
	File_WriteInt(ScriptActionCtr_005,file_ptr);
	File_WriteInt(ScriptActionCtr_010,file_ptr);
	File_WriteInt(ScriptActionCtr_006,file_ptr);
	File_WriteInt(ScriptActionCtr_127,file_ptr);
	File_WriteInt(ScriptActionCtr_128,file_ptr);
	File_WriteInt(ScriptActionCtr_011,file_ptr);
	File_WriteInt(ScriptActionCtr_012,file_ptr);
	File_WriteInt(ScriptActionCtr_146,file_ptr);
	File_WriteInt(ScriptActionCtr_141,file_ptr);
	File_WriteInt(ScriptActionCtr_212,file_ptr);
	File_WriteInt(ScriptActionCtr_143,file_ptr);
	File_WriteInt(ScriptActionCtr_144,file_ptr);
	File_WriteInt(ScriptActionCtr_149,file_ptr);
	File_WriteInt(ScriptActionCtr_147,file_ptr);
	File_WriteInt(ScriptActionCtr_150,file_ptr);
	File_WriteInt(ScriptActionCtr_151,file_ptr);
	File_WriteInt(ScriptActionCtr_157,file_ptr);
	File_WriteInt(ScriptActionCtr_145,file_ptr);
	File_WriteInt(ScriptActionCtr_007,file_ptr);
	File_WriteInt(ScriptActionCtr_008,file_ptr);
	File_WriteInt(ScriptActionCtr_210,file_ptr);
	File_WriteInt(ScriptActionCtr_207,file_ptr);
	File_WriteInt(ScriptActionCtr_208,file_ptr);
	File_WriteInt(ScriptActionCtr_060,file_ptr);
	File_WriteInt(ScriptActionCtr_181,file_ptr);
	File_WriteInt(ScriptActionCtr_015,file_ptr);
	File_WriteInt(ScriptActionCtr_113,file_ptr);
	File_WriteInt(ScriptActionCtr_175,file_ptr);
	File_WriteInt(ScriptActionCtr_016,file_ptr);
	File_WriteInt(ScriptActionCtr_017,file_ptr);
	File_WriteInt(ScriptActionCtr_022,file_ptr);
	File_WriteInt(ScriptActionCtr_023,file_ptr);
	File_WriteInt(ScriptActionCtr_024,file_ptr);
	File_WriteInt(ScriptActionCtr_026,file_ptr);
	File_WriteInt(ScriptActionCtr_027,file_ptr);
	File_WriteInt(ScriptActionCtr_028,file_ptr);
	File_WriteInt(ScriptActionCtr_018,file_ptr);
	File_WriteInt(ScriptActionCtr_019,file_ptr);
	File_WriteInt(ScriptActionCtr_025,file_ptr);
	File_WriteInt(ScriptActionCtr_020,file_ptr);
	File_WriteInt(ScriptActionCtr_021,file_ptr);
	File_WriteInt(ScriptActionCtr_140,file_ptr);
	File_WriteInt(ScriptActionCtr_116,file_ptr);
	File_WriteInt(ScriptActionCtr_115,file_ptr);
	File_WriteInt(ScriptActionCtr_117,file_ptr);
	File_WriteInt(ScriptActionCtr_125,file_ptr);
	File_WriteInt(ScriptActionCtr_118,file_ptr);
	File_WriteInt(ScriptActionCtr_119,file_ptr);
	File_WriteInt(ScriptActionCtr_120,file_ptr);
	File_WriteInt(ScriptActionCtr_121,file_ptr);
	File_WriteInt(ScriptActionCtr_122,file_ptr);
	File_WriteInt(ScriptActionCtr_123,file_ptr);
	File_WriteInt(ScriptActionCtr_124,file_ptr);
	File_WriteInt(ScriptActionCtr_029,file_ptr);
	File_WriteInt(ScriptActionCtr_030,file_ptr);
	File_WriteInt(ScriptActionCtr_032,file_ptr);
	File_WriteInt(ScriptActionCtr_033,file_ptr);
	File_WriteInt(ScriptActionCtr_034,file_ptr);
	File_WriteInt(ScriptActionCtr_203,file_ptr);
	File_WriteInt(ScriptActionCtr_037,file_ptr);
	File_WriteInt(ScriptActionCtr_035,file_ptr);
	File_WriteInt(ScriptActionCtr_038,file_ptr);
	File_WriteInt(ScriptActionCtr_043,file_ptr);
	File_WriteInt(ScriptActionCtr_204,file_ptr);
	File_WriteInt(ScriptActionCtr_039,file_ptr);
	File_WriteInt(ScriptActionCtr_040,file_ptr);
	File_WriteInt(ScriptActionCtr_041,file_ptr);
	File_WriteInt(ScriptActionCtr_044,file_ptr);
	File_WriteInt(ScriptActionCtr_045,file_ptr);
	File_WriteInt(ScriptActionCtr_046,file_ptr);
	File_WriteInt(ScriptActionCtr_047,file_ptr);
	File_WriteInt(ScriptActionCtr_048,file_ptr);
	File_WriteInt(ScriptActionCtr_049,file_ptr);
	File_WriteInt(ScriptActionCtr_072,file_ptr);
	File_WriteInt(ScriptActionCtr_071,file_ptr);
	File_WriteInt(ScriptActionCtr_070,file_ptr);
	File_WriteInt(ScriptActionCtr_069,file_ptr);
	File_WriteInt(ScriptActionCtr_108,file_ptr);
	File_WriteInt(ScriptActionCtr_067,file_ptr);
	File_WriteInt(ScriptActionCtr_066,file_ptr);
	File_WriteInt(ScriptActionCtr_065,file_ptr);
	File_WriteInt(ScriptActionCtr_109,file_ptr);
	File_WriteInt(ScriptActionCtr_062,file_ptr);
	File_WriteInt(ScriptActionCtr_063,file_ptr);
	File_WriteInt(ScriptActionCtr_064,file_ptr);
	File_WriteInt(ScriptActionCtr_112,file_ptr);
	File_WriteInt(ScriptActionCtr_052,file_ptr);
	File_WriteInt(ScriptActionCtr_053,file_ptr);
	File_WriteInt(ScriptActionCtr_054,file_ptr);
	File_WriteInt(ScriptActionCtr_153,file_ptr);
	File_WriteInt(ScriptActionCtr_051,file_ptr);
	File_WriteInt(ScriptActionCtr_205,file_ptr);
	File_WriteInt(ScriptActionCtr_206,file_ptr);
	File_WriteInt(ScriptActionCtr_061,file_ptr);
	File_WriteInt(ScriptActionCtr_076,file_ptr);
	File_WriteInt(ScriptActionCtr_077,file_ptr);
	File_WriteInt(ScriptActionCtr_075,file_ptr);
	File_WriteInt(ScriptActionCtr_074,file_ptr);
	File_WriteInt(ScriptActionCtr_073,file_ptr);
	File_WriteInt(ScriptActionCtr_178,file_ptr);
	File_WriteInt(ScriptActionCtr_177,file_ptr);
	File_WriteInt(ScriptActionCtr_080,file_ptr);
	File_WriteInt(ScriptActionCtr_079,file_ptr);
	File_WriteInt(ScriptActionCtr_081,file_ptr);
	File_WriteInt(ScriptActionCtr_082,file_ptr);
	File_WriteInt(ScriptActionCtr_083,file_ptr);
	File_WriteInt(ScriptActionCtr_084,file_ptr);
	File_WriteInt(ScriptActionCtr_085,file_ptr);
	File_WriteInt(ScriptActionCtr_086,file_ptr);
	File_WriteInt(ScriptActionCtr_087,file_ptr);
	File_WriteInt(ScriptActionCtr_088,file_ptr);
	File_WriteInt(ScriptActionCtr_089,file_ptr);
	File_WriteInt(ScriptActionCtr_090,file_ptr);
	File_WriteInt(ScriptActionCtr_091,file_ptr);
	File_WriteInt(ScriptActionCtr_092,file_ptr);
	File_WriteInt(ScriptActionCtr_093,file_ptr);
	File_WriteInt(ScriptActionCtr_095,file_ptr);
	File_WriteInt(ScriptActionCtr_057,file_ptr);
	File_WriteInt(ScriptActionCtr_094,file_ptr);
	File_WriteInt(ScriptActionCtr_179,file_ptr);
	File_WriteInt(ScriptActionCtr_166,file_ptr);
	File_WriteInt(ScriptActionCtr_182,file_ptr);
	File_WriteInt(ScriptActionCtr_183,file_ptr);
	File_WriteInt(ScriptActionCtr_184,file_ptr);
	File_WriteInt(ScriptActionCtr_185,file_ptr);
	File_WriteInt(ScriptActionCtr_186,file_ptr);
	File_WriteInt(ScriptActionCtr_096,file_ptr);
	File_WriteInt(ScriptActionCtr_097,file_ptr);
	File_WriteInt(ScriptActionCtr_098,file_ptr);
	File_WriteInt(ScriptActionCtr_099,file_ptr);
	File_WriteInt(ScriptActionCtr_174,file_ptr);
	File_WriteInt(ScriptActionCtr_100,file_ptr);
	File_WriteInt(ScriptActionCtr_055,file_ptr);
	File_WriteInt(ScriptActionCtr_188,file_ptr);
	File_WriteInt(ScriptActionCtr_103,file_ptr);
	File_WriteInt(ScriptActionCtr_101,file_ptr);
	File_WriteInt(ScriptActionCtr_180,file_ptr);
	File_WriteInt(ScriptActionCtr_187,file_ptr);
	File_WriteInt(ScriptActionCtr_202,file_ptr);
	File_WriteInt(ScriptActionCtr_189,file_ptr);
	File_WriteInt(ScriptActionCtr_190,file_ptr);
	File_WriteInt(ScriptActionCtr_196,file_ptr);
	File_WriteInt(ScriptActionCtr_191,file_ptr);
	File_WriteInt(ScriptActionCtr_195,file_ptr);
	File_WriteInt(ScriptActionCtr_194,file_ptr);
	File_WriteInt(ScriptActionCtr_193,file_ptr);
	File_WriteInt(ScriptActionCtr_192,file_ptr);
	File_WriteInt(ScriptActionCtr_197,file_ptr);
	File_WriteInt(ScriptActionCtr_201,file_ptr);
	File_WriteInt(ScriptActionCtr_200,file_ptr);
	File_WriteInt(ScriptActionCtr_199,file_ptr);
	File_WriteInt(ScriptActionCtr_198,file_ptr);
	File_WriteInt(ScriptActionCtr_058,file_ptr);
	File_WriteInt(ScriptActionCtr_110,file_ptr);
	File_WriteInt(ScriptActionCtr_107,file_ptr);
	File_WriteInt(ScriptActionCtr_111,file_ptr);
	File_WriteInt(ScriptActionCtr_059,file_ptr);
	File_WriteInt(ScriptActionCtr_105,file_ptr);
	File_WriteInt(ScriptActionCtr_106,file_ptr);
	File_WriteInt(ScriptActionCtr_114,file_ptr);
	File_WriteInt(ScriptActionCtr_176,file_ptr);
	File_WriteInt(ScriptActionCtr_126,file_ptr);
	File_WriteInt(ScriptActionCtr_129,file_ptr);
	File_WriteInt(ScriptActionCtr_135,file_ptr);
	File_WriteInt(ScriptActionCtr_130,file_ptr);
	File_WriteInt(ScriptActionCtr_131,file_ptr);
	File_WriteInt(ScriptActionCtr_148,file_ptr);
	File_WriteInt(ScriptActionCtr_137,file_ptr);
	File_WriteInt(ScriptActionCtr_138,file_ptr);
	File_WriteInt(ScriptActionCtr_154,file_ptr);
	File_WriteInt(ScriptActionCtr_155,file_ptr);
	File_WriteInt(ScriptActionCtr_163,file_ptr);
	File_WriteInt(ScriptActionCtr_139,file_ptr);
	File_WriteInt(ScriptActionCtr_152,file_ptr);
	File_WriteInt(ScriptActionCtr_156,file_ptr);
	File_WriteInt(ScriptActionCtr_160,file_ptr);
	File_WriteInt(ScriptActionCtr_161,file_ptr);
	File_WriteInt(ScriptActionCtr_158,file_ptr);
	File_WriteInt(ScriptActionCtr_159,file_ptr);
	File_WriteInt(ScriptActionCtr_164,file_ptr);
	File_WriteInt(ScriptActionCtr_165,file_ptr);
	File_WriteInt(ScriptActionCtr_167,file_ptr);
	File_WriteInt(ScriptActionCtr_168,file_ptr);
	File_WriteInt(ScriptActionCtr_170,file_ptr);
	File_WriteInt(ScriptActionCtr_169,file_ptr);
	File_WriteInt(ScriptActionCtr_171,file_ptr);
	File_WriteInt(ScriptActionCtr_172,file_ptr);
	File_WriteInt(ScriptActionCtr_173,file_ptr);
	File_WriteInt(ScriptActionCtr_162,file_ptr);
}
 
// ===========================================
// Function to Restore Global Action Counters
// ===========================================
void RestoreGlobalActionCtrs(void *file_ptr)
{
	ScriptActionCtr_000=File_ReadInt(file_ptr);
	ScriptActionCtr_209=File_ReadInt(file_ptr);
	ScriptActionCtr_102=File_ReadInt(file_ptr);
	ScriptActionCtr_031=File_ReadInt(file_ptr);
	ScriptActionCtr_036=File_ReadInt(file_ptr);
	ScriptActionCtr_068=File_ReadInt(file_ptr);
	ScriptActionCtr_050=File_ReadInt(file_ptr);
	ScriptActionCtr_056=File_ReadInt(file_ptr);
	ScriptActionCtr_078=File_ReadInt(file_ptr);
	ScriptActionCtr_104=File_ReadInt(file_ptr);
	ScriptActionCtr_136=File_ReadInt(file_ptr);
	ScriptActionCtr_013=File_ReadInt(file_ptr);
	ScriptActionCtr_132=File_ReadInt(file_ptr);
	ScriptActionCtr_133=File_ReadInt(file_ptr);
	ScriptActionCtr_134=File_ReadInt(file_ptr);
	ScriptActionCtr_042=File_ReadInt(file_ptr);
	ScriptActionCtr_014=File_ReadInt(file_ptr);
	ScriptActionCtr_001=File_ReadInt(file_ptr);
	ScriptActionCtr_002=File_ReadInt(file_ptr);
	ScriptActionCtr_009=File_ReadInt(file_ptr);
	ScriptActionCtr_142=File_ReadInt(file_ptr);
	ScriptActionCtr_003=File_ReadInt(file_ptr);
	ScriptActionCtr_211=File_ReadInt(file_ptr);
	ScriptActionCtr_004=File_ReadInt(file_ptr);
	ScriptActionCtr_005=File_ReadInt(file_ptr);
	ScriptActionCtr_010=File_ReadInt(file_ptr);
	ScriptActionCtr_006=File_ReadInt(file_ptr);
	ScriptActionCtr_127=File_ReadInt(file_ptr);
	ScriptActionCtr_128=File_ReadInt(file_ptr);
	ScriptActionCtr_011=File_ReadInt(file_ptr);
	ScriptActionCtr_012=File_ReadInt(file_ptr);
	ScriptActionCtr_146=File_ReadInt(file_ptr);
	ScriptActionCtr_141=File_ReadInt(file_ptr);
	ScriptActionCtr_212=File_ReadInt(file_ptr);
	ScriptActionCtr_143=File_ReadInt(file_ptr);
	ScriptActionCtr_144=File_ReadInt(file_ptr);
	ScriptActionCtr_149=File_ReadInt(file_ptr);
	ScriptActionCtr_147=File_ReadInt(file_ptr);
	ScriptActionCtr_150=File_ReadInt(file_ptr);
	ScriptActionCtr_151=File_ReadInt(file_ptr);
	ScriptActionCtr_157=File_ReadInt(file_ptr);
	ScriptActionCtr_145=File_ReadInt(file_ptr);
	ScriptActionCtr_007=File_ReadInt(file_ptr);
	ScriptActionCtr_008=File_ReadInt(file_ptr);
	ScriptActionCtr_210=File_ReadInt(file_ptr);
	ScriptActionCtr_207=File_ReadInt(file_ptr);
	ScriptActionCtr_208=File_ReadInt(file_ptr);
	ScriptActionCtr_060=File_ReadInt(file_ptr);
	ScriptActionCtr_181=File_ReadInt(file_ptr);
	ScriptActionCtr_015=File_ReadInt(file_ptr);
	ScriptActionCtr_113=File_ReadInt(file_ptr);
	ScriptActionCtr_175=File_ReadInt(file_ptr);
	ScriptActionCtr_016=File_ReadInt(file_ptr);
	ScriptActionCtr_017=File_ReadInt(file_ptr);
	ScriptActionCtr_022=File_ReadInt(file_ptr);
	ScriptActionCtr_023=File_ReadInt(file_ptr);
	ScriptActionCtr_024=File_ReadInt(file_ptr);
	ScriptActionCtr_026=File_ReadInt(file_ptr);
	ScriptActionCtr_027=File_ReadInt(file_ptr);
	ScriptActionCtr_028=File_ReadInt(file_ptr);
	ScriptActionCtr_018=File_ReadInt(file_ptr);
	ScriptActionCtr_019=File_ReadInt(file_ptr);
	ScriptActionCtr_025=File_ReadInt(file_ptr);
	ScriptActionCtr_020=File_ReadInt(file_ptr);
	ScriptActionCtr_021=File_ReadInt(file_ptr);
	ScriptActionCtr_140=File_ReadInt(file_ptr);
	ScriptActionCtr_116=File_ReadInt(file_ptr);
	ScriptActionCtr_115=File_ReadInt(file_ptr);
	ScriptActionCtr_117=File_ReadInt(file_ptr);
	ScriptActionCtr_125=File_ReadInt(file_ptr);
	ScriptActionCtr_118=File_ReadInt(file_ptr);
	ScriptActionCtr_119=File_ReadInt(file_ptr);
	ScriptActionCtr_120=File_ReadInt(file_ptr);
	ScriptActionCtr_121=File_ReadInt(file_ptr);
	ScriptActionCtr_122=File_ReadInt(file_ptr);
	ScriptActionCtr_123=File_ReadInt(file_ptr);
	ScriptActionCtr_124=File_ReadInt(file_ptr);
	ScriptActionCtr_029=File_ReadInt(file_ptr);
	ScriptActionCtr_030=File_ReadInt(file_ptr);
	ScriptActionCtr_032=File_ReadInt(file_ptr);
	ScriptActionCtr_033=File_ReadInt(file_ptr);
	ScriptActionCtr_034=File_ReadInt(file_ptr);
	ScriptActionCtr_203=File_ReadInt(file_ptr);
	ScriptActionCtr_037=File_ReadInt(file_ptr);
	ScriptActionCtr_035=File_ReadInt(file_ptr);
	ScriptActionCtr_038=File_ReadInt(file_ptr);
	ScriptActionCtr_043=File_ReadInt(file_ptr);
	ScriptActionCtr_204=File_ReadInt(file_ptr);
	ScriptActionCtr_039=File_ReadInt(file_ptr);
	ScriptActionCtr_040=File_ReadInt(file_ptr);
	ScriptActionCtr_041=File_ReadInt(file_ptr);
	ScriptActionCtr_044=File_ReadInt(file_ptr);
	ScriptActionCtr_045=File_ReadInt(file_ptr);
	ScriptActionCtr_046=File_ReadInt(file_ptr);
	ScriptActionCtr_047=File_ReadInt(file_ptr);
	ScriptActionCtr_048=File_ReadInt(file_ptr);
	ScriptActionCtr_049=File_ReadInt(file_ptr);
	ScriptActionCtr_072=File_ReadInt(file_ptr);
	ScriptActionCtr_071=File_ReadInt(file_ptr);
	ScriptActionCtr_070=File_ReadInt(file_ptr);
	ScriptActionCtr_069=File_ReadInt(file_ptr);
	ScriptActionCtr_108=File_ReadInt(file_ptr);
	ScriptActionCtr_067=File_ReadInt(file_ptr);
	ScriptActionCtr_066=File_ReadInt(file_ptr);
	ScriptActionCtr_065=File_ReadInt(file_ptr);
	ScriptActionCtr_109=File_ReadInt(file_ptr);
	ScriptActionCtr_062=File_ReadInt(file_ptr);
	ScriptActionCtr_063=File_ReadInt(file_ptr);
	ScriptActionCtr_064=File_ReadInt(file_ptr);
	ScriptActionCtr_112=File_ReadInt(file_ptr);
	ScriptActionCtr_052=File_ReadInt(file_ptr);
	ScriptActionCtr_053=File_ReadInt(file_ptr);
	ScriptActionCtr_054=File_ReadInt(file_ptr);
	ScriptActionCtr_153=File_ReadInt(file_ptr);
	ScriptActionCtr_051=File_ReadInt(file_ptr);
	ScriptActionCtr_205=File_ReadInt(file_ptr);
	ScriptActionCtr_206=File_ReadInt(file_ptr);
	ScriptActionCtr_061=File_ReadInt(file_ptr);
	ScriptActionCtr_076=File_ReadInt(file_ptr);
	ScriptActionCtr_077=File_ReadInt(file_ptr);
	ScriptActionCtr_075=File_ReadInt(file_ptr);
	ScriptActionCtr_074=File_ReadInt(file_ptr);
	ScriptActionCtr_073=File_ReadInt(file_ptr);
	ScriptActionCtr_178=File_ReadInt(file_ptr);
	ScriptActionCtr_177=File_ReadInt(file_ptr);
	ScriptActionCtr_080=File_ReadInt(file_ptr);
	ScriptActionCtr_079=File_ReadInt(file_ptr);
	ScriptActionCtr_081=File_ReadInt(file_ptr);
	ScriptActionCtr_082=File_ReadInt(file_ptr);
	ScriptActionCtr_083=File_ReadInt(file_ptr);
	ScriptActionCtr_084=File_ReadInt(file_ptr);
	ScriptActionCtr_085=File_ReadInt(file_ptr);
	ScriptActionCtr_086=File_ReadInt(file_ptr);
	ScriptActionCtr_087=File_ReadInt(file_ptr);
	ScriptActionCtr_088=File_ReadInt(file_ptr);
	ScriptActionCtr_089=File_ReadInt(file_ptr);
	ScriptActionCtr_090=File_ReadInt(file_ptr);
	ScriptActionCtr_091=File_ReadInt(file_ptr);
	ScriptActionCtr_092=File_ReadInt(file_ptr);
	ScriptActionCtr_093=File_ReadInt(file_ptr);
	ScriptActionCtr_095=File_ReadInt(file_ptr);
	ScriptActionCtr_057=File_ReadInt(file_ptr);
	ScriptActionCtr_094=File_ReadInt(file_ptr);
	ScriptActionCtr_179=File_ReadInt(file_ptr);
	ScriptActionCtr_166=File_ReadInt(file_ptr);
	ScriptActionCtr_182=File_ReadInt(file_ptr);
	ScriptActionCtr_183=File_ReadInt(file_ptr);
	ScriptActionCtr_184=File_ReadInt(file_ptr);
	ScriptActionCtr_185=File_ReadInt(file_ptr);
	ScriptActionCtr_186=File_ReadInt(file_ptr);
	ScriptActionCtr_096=File_ReadInt(file_ptr);
	ScriptActionCtr_097=File_ReadInt(file_ptr);
	ScriptActionCtr_098=File_ReadInt(file_ptr);
	ScriptActionCtr_099=File_ReadInt(file_ptr);
	ScriptActionCtr_174=File_ReadInt(file_ptr);
	ScriptActionCtr_100=File_ReadInt(file_ptr);
	ScriptActionCtr_055=File_ReadInt(file_ptr);
	ScriptActionCtr_188=File_ReadInt(file_ptr);
	ScriptActionCtr_103=File_ReadInt(file_ptr);
	ScriptActionCtr_101=File_ReadInt(file_ptr);
	ScriptActionCtr_180=File_ReadInt(file_ptr);
	ScriptActionCtr_187=File_ReadInt(file_ptr);
	ScriptActionCtr_202=File_ReadInt(file_ptr);
	ScriptActionCtr_189=File_ReadInt(file_ptr);
	ScriptActionCtr_190=File_ReadInt(file_ptr);
	ScriptActionCtr_196=File_ReadInt(file_ptr);
	ScriptActionCtr_191=File_ReadInt(file_ptr);
	ScriptActionCtr_195=File_ReadInt(file_ptr);
	ScriptActionCtr_194=File_ReadInt(file_ptr);
	ScriptActionCtr_193=File_ReadInt(file_ptr);
	ScriptActionCtr_192=File_ReadInt(file_ptr);
	ScriptActionCtr_197=File_ReadInt(file_ptr);
	ScriptActionCtr_201=File_ReadInt(file_ptr);
	ScriptActionCtr_200=File_ReadInt(file_ptr);
	ScriptActionCtr_199=File_ReadInt(file_ptr);
	ScriptActionCtr_198=File_ReadInt(file_ptr);
	ScriptActionCtr_058=File_ReadInt(file_ptr);
	ScriptActionCtr_110=File_ReadInt(file_ptr);
	ScriptActionCtr_107=File_ReadInt(file_ptr);
	ScriptActionCtr_111=File_ReadInt(file_ptr);
	ScriptActionCtr_059=File_ReadInt(file_ptr);
	ScriptActionCtr_105=File_ReadInt(file_ptr);
	ScriptActionCtr_106=File_ReadInt(file_ptr);
	ScriptActionCtr_114=File_ReadInt(file_ptr);
	ScriptActionCtr_176=File_ReadInt(file_ptr);
	ScriptActionCtr_126=File_ReadInt(file_ptr);
	ScriptActionCtr_129=File_ReadInt(file_ptr);
	ScriptActionCtr_135=File_ReadInt(file_ptr);
	ScriptActionCtr_130=File_ReadInt(file_ptr);
	ScriptActionCtr_131=File_ReadInt(file_ptr);
	ScriptActionCtr_148=File_ReadInt(file_ptr);
	ScriptActionCtr_137=File_ReadInt(file_ptr);
	ScriptActionCtr_138=File_ReadInt(file_ptr);
	ScriptActionCtr_154=File_ReadInt(file_ptr);
	ScriptActionCtr_155=File_ReadInt(file_ptr);
	ScriptActionCtr_163=File_ReadInt(file_ptr);
	ScriptActionCtr_139=File_ReadInt(file_ptr);
	ScriptActionCtr_152=File_ReadInt(file_ptr);
	ScriptActionCtr_156=File_ReadInt(file_ptr);
	ScriptActionCtr_160=File_ReadInt(file_ptr);
	ScriptActionCtr_161=File_ReadInt(file_ptr);
	ScriptActionCtr_158=File_ReadInt(file_ptr);
	ScriptActionCtr_159=File_ReadInt(file_ptr);
	ScriptActionCtr_164=File_ReadInt(file_ptr);
	ScriptActionCtr_165=File_ReadInt(file_ptr);
	ScriptActionCtr_167=File_ReadInt(file_ptr);
	ScriptActionCtr_168=File_ReadInt(file_ptr);
	ScriptActionCtr_170=File_ReadInt(file_ptr);
	ScriptActionCtr_169=File_ReadInt(file_ptr);
	ScriptActionCtr_171=File_ReadInt(file_ptr);
	ScriptActionCtr_172=File_ReadInt(file_ptr);
	ScriptActionCtr_173=File_ReadInt(file_ptr);
	ScriptActionCtr_162=File_ReadInt(file_ptr);
}
 
 
// ===============================================================
// Start of Custom Script Block - DO NOT EDIT ANYTHING BEFORE THIS
// ===============================================================
/**{CUSTOM_SCRIPT_BLOCK_START}** DO NOT EDIT! **/

#define N_ROOMS	2
#define N_BOXES	24
#define G_DOWN		0
#define G_NONE		1
#define G_ANTI		2

typedef struct t_animation_data
{
	short first, last;
}
t_animation_data;

const t_animation_data Gravity_state_xlates[3][3] = {
	{{0,0},		{10,15},		{0,5}},
	{{21,25},	{31,35},		{26,30}},
	{{5,10},		{16,20},		{30,30}}
};

//	this should be saved...
sbyte Gravity_room_box_states[N_ROOMS][N_BOXES];

/*
$$ENUM Region
0:Intro
1:Hangars
2:PuzzlePlace
3:GiantShaft
4:Barracks
5:Poles
$$END
*/ 

/*
$$ACTION
Custom
Set the velocity of [o:Object] to <[f:X],[f:Y],[f:Z]> magnitude [f:mag]
aSetObjectVelocity
Sets the velocity of an object to the given vector and magnitude.

Parameters:
  Object: object to set
  X,Y,Z: <x,y,z> components
  mag: magnitude
$$END
*/
void aSetObjectVelocity(int Object,float x,float y,float z,float mag)
{
	vector vec;
	vec.x = x;
	vec.y = y;
	vec.z = z;
	vm_VectorNormalize(&vec);
	vec *= mag;

	Obj_Value(Object,VF_SET,OBJV_V_VELOCITY,&vec);
}


/*
$$ACTION
Custom
Emit [f:Number=20.0] sparks from [o:Object]
aEmitSparks
Make object spark
  Makes an object emit sparks

Parameters:
  Number: the number of sparks to create
  Object: the object to make sparks come out of
$$END
*/
void aEmitSparks(float num_sparks, int objhandle)
{
	int room;
	vector pos;

	if(!qObjExists(objhandle)) return;

	Obj_Value(objhandle, VF_GET, OBJV_V_POS, &pos);
	Obj_Value(objhandle, VF_GET, OBJV_I_ROOMNUM, &room);
	Game_CreateRandomSparks((int)num_sparks, &pos, room);
}


/*
$$QUERY
Custom
b:[o:Object] saw target in last [f:Time] seconds
qSawTargetRecently
Checks if object saw target within a certain time

Parameters:
  Object: the object to check
  Time: the time within which object has seen target
$$END
*/
bool qSawTargetRecently(int objhandle, float time)
{
	float last_see_time, last_see_game_time;

	if(!qObjExists(objhandle)) return false;

	AI_Value(objhandle, VF_GET, AIV_F_LAST_SEE_TARGET_TIME, &last_see_game_time);
	last_see_time = Game_GetTime() - last_see_game_time;

	if(last_see_time <= time)
		return true;
	
	return false;
}


/*
$$ACTION
Custom
Create blast from [o:Object]
aBigBoomer
Make object kaboom

Parameters:
  Object: the object to make kaboom come out of
$$END
*/
void aBigBoomer(int objhandle)
{
	int room;
	vector pos;
	matrix orient;

	if(!qObjExists(objhandle)) return;

	Obj_Value(objhandle, VF_GET, OBJV_V_POS, &pos);
	Obj_Value(objhandle, VF_GET, OBJV_M_ORIENT, &orient);
	Obj_Value(objhandle, VF_GET, OBJV_I_ROOMNUM, &room);
	Obj_Create(OBJ_WEAPON, Wpn_FindID("MegaExplosion"), room, &pos, &orient, objhandle);
}


/*
$$ENUM GravityRoom
1:One
2:Two
$$END
*/

/*
$$ENUM Gravity
0:Down
1:None
2:Anti
$$END
*/

void cGravityRoomBoxStates(int gravity_room, int gravity_type);

/*
$$ACTION
Custom
Initialize Gravity Rooms
cInitGravityRooms
cInitGravityRooms
	Initializes states of each room

Parameters:
	None
$$END
*/
void cInitGravityRooms()
{
	int i,j;
	for (i = 0; i < N_ROOMS; i++)
	{
		for (j = 0; j < N_BOXES; j++)
		{
			Gravity_room_box_states[i][j] = G_NONE;	// default to None
		}
	}
	cGravityRoomBoxStates(1, 1);
	cGravityRoomBoxStates(2, 1);
}


/*
$$ACTION
Custom
Set Gravity Room Box States: room [e:GravityRoom], gravity [e:Gravity=None]
cGravityRoomBoxStates
cGravityRoomBoxStates
	This will set the position of the boxes in specified gravity room.

Parameters:
	GravityRoom: which gravity room
	Gravity: type of gravity
$$END
*/

void cGravityRoomBoxStates(int gravity_room, int gravity_type)
{
	int i, handle;

	for (i=1; i < (N_BOXES+1);i++)
	{
		char objname[64];
		sbyte cur_box_state = Gravity_room_box_states[gravity_room-1][i-1];

		if ((gravity_type != cur_box_state) || (gravity_type == cur_box_state && gravity_type == G_NONE))  {
			sprintf(objname, "r%dBox%d", gravity_room, i);
			handle = Scrpt_FindObjectName(objname);

			if (handle > OBJECT_HANDLE_NONE) {
			// loop on middle animation.
				aObjPlayAnim(handle, Gravity_state_xlates[cur_box_state][gravity_type].first, 
									Gravity_state_xlates[cur_box_state][gravity_type].last, 
									1.000000f, 
									(gravity_type == G_NONE && gravity_type == cur_box_state) ? 1 : 0);

				Gravity_room_box_states[gravity_room-1][i-1] = gravity_type;
			}
		}
	}
}


/*
$$ACTION
Custom
Update Gravity Room Box States: room [e:GravityRoom]
cUpdateGravityRoomBoxStates
cUpdateGravityRoomBoxStates
	This will update the position of the boxes in specified gravity room.

Parameters:
	GravityRoom: which gravity room
$$END
*/

void cUpdateGravityRoomBoxStates(int gravity_room)
{
	int i, handle;

	for (i=1; i < (N_BOXES+1);i++)
	{
		char objname[64];
		sbyte cur_box_state = Gravity_room_box_states[gravity_room-1][i-1];
		if (cur_box_state == G_NONE)  {
			sprintf(objname, "r%dBox%d", gravity_room, i);
			handle = Scrpt_FindObjectName(objname);

			if (handle > OBJECT_HANDLE_NONE) {
				if (qObjAnimFrame(handle)==15.0f || qObjAnimFrame(handle)==20.0f) {
				// loop on middle animation.
					aObjPlayAnim(handle, Gravity_state_xlates[cur_box_state][G_NONE].first, 
										Gravity_state_xlates[cur_box_state][G_NONE].last, 
										1.000000f, 
										(cur_box_state == G_NONE) ? 1 : 0);
				}
			}
		}
	}
}


/*
$$ENUM SharkTrapRoom
0:Zero
1:One
2:Two
3:Three
$$END
*/

/*
$$ACTION
Custom
Turn [e:On/Off] AI for sharks in [e:SharkTrapRoom]
cOffAIForSharksInRoom
cOffAIForSharksInRoom
	Turns off shark AI in shark trap room specified.

Parameters:
	On/Off:			Turns on or off AI
	SharkTrapRoom: Shark trap room
$$END
*/
void cOffAIForSharksInRoom(int state, int room_n)
{
	int i;
	for (i = 0; i < 8; i++)
	{
		int handle;
		char objname[64];

		sprintf(objname, "SecShark%d-%d", room_n,i+1);
		handle = Scrpt_FindObjectName(objname);

		if (handle >= OBJECT_HANDLE_NONE) {
			aAISetState(state, handle);
		}
	}
}


/*
$$ACTION
Custom
Set target of sharks in [e:SharkTrapRoom] to [o:Object]
cSetSharkTarget
cSetSharkTarget
	Sets shark AI in shark trap room specified.

Parameters:
	SharkTrapRoom: Shark trap room
	Object: The specified target
$$END
*/
void cSetSharkTarget(int room_n, int objhandle)
{
	int i;
	for (i = 0; i < 8; i++)
	{
		int handle;
		char objname[64];

		sprintf(objname, "SecShark%d-%d", room_n,i+1);
		handle = Scrpt_FindObjectName(objname);

		if (handle >= OBJECT_HANDLE_NONE) {
			aAISetTarget(objhandle,handle);
		}
	}
}


/* 
$$QUERY
Custom
b:Player hits FVI cast between [o:Object A] and [o:Object B] with radius [f:Radius=50.0f]
qBeamHittingPlayer
Player hits FVI cast
Checks if player is between two objects.

Parameters:
	Object A
	Object B
$$END
*/
bool qBeamHittingPlayer(int beam1_handle, int beam2_handle, float radius)
{
	// see if anything is in the way
	ray_info ray;
	int flags, fate;
	vector start_pos, end_pos, landing_pos;
	int start_room, landing_room;

	Obj_Value(beam1_handle, VF_GET, OBJV_V_POS, &start_pos);
	Obj_Value(beam1_handle, VF_GET, OBJV_I_ROOMNUM, &start_room);
	Obj_Value(beam2_handle, VF_GET, OBJV_V_POS, &end_pos);

	flags = FQ_CHECK_OBJS | FQ_IGNORE_POWERUPS | FQ_IGNORE_WEAPONS | FQ_ONLY_PLAYER_OBJ | FQ_PLAYERS_AS_SPHERE | FQ_IGNORE_WALLS;
	fate = FVI_RayCast(beam1_handle, &start_pos, &end_pos, start_room, radius, flags, &ray);
	if(fate == HIT_OBJECT)
	{
		int type;
		Obj_Value(ray.hit_object, VF_GET, OBJV_I_TYPE, &type);
		if(type == OBJ_PLAYER)
		{
			return true;
		}
	}

	return false;
}


/* 
$$QUERY
Custom
b:Object [o:Object] is cloaked
qIsCloaked
Is an object cloaked

Parameters:
	Object
$$END
*/
bool qIsCloaked(int handle)
{
	char flag;
	Obj_Value(handle, VF_GET, OBJV_C_IS_CLOAKED, &flag);
	return (flag==1) ? true : false;
}


/* 
$$QUERY
Custom
b:Player hits FVI cast (w/Walls) between [o:Object A] and [o:Object B] with radius [f:Radius=50.0f]
qBeamHittingPlayer2
Player hits FVI cast
Checks if player is between two objects.

Parameters:
	Object A
	Object B
$$END
*/
bool qBeamHittingPlayer2(int beam1_handle, int beam2_handle, float radius)
{
	// see if anything is in the way
	ray_info ray;
	int flags, fate;
	vector start_pos, end_pos, landing_pos;
	int start_room, landing_room;

	Obj_Value(beam1_handle, VF_GET, OBJV_V_POS, &start_pos);
	Obj_Value(beam1_handle, VF_GET, OBJV_I_ROOMNUM, &start_room);
	Obj_Value(beam2_handle, VF_GET, OBJV_V_POS, &end_pos);

	flags = FQ_CHECK_OBJS | FQ_IGNORE_POWERUPS | FQ_IGNORE_WEAPONS | FQ_ONLY_PLAYER_OBJ | FQ_PLAYERS_AS_SPHERE;
	fate = FVI_RayCast(beam1_handle, &start_pos, &end_pos, start_room, radius, flags, &ray);
	if(fate == HIT_OBJECT)
	{
		int type;
		Obj_Value(ray.hit_object, VF_GET, OBJV_I_TYPE, &type);
		if(type == OBJ_PLAYER)
		{
			return true;
		}
	}

	return false;
}



// the great exit sequence
// command syntax
//	! = kill
//	$ = spew
//	# = spew big
//	% = spew huge
//	* = spark

typedef struct t_exit_room_node
{
	short room_number;
	char *commands;
	char cmdstr[16];
}
t_exit_room_node;


#define N_END_ROOMS			19

static t_exit_room_node	exit_room_info[N_END_ROOMS] = 
{
	{222,"!ABCDEF$A*A",},
	{220,"!ABCDE"},
	{218,"!ABCDE$A*A",},
	{217,"!AB",},
	{210,"!ABCD",},
	{203,"!ABCD",},
	{161,"!ABC#AB",},
	{160,"!ABC*A",},
	{159,"!ABCD*A",},
	{158,"!AB#A",},
	{157,"!ABC",},
	{155,"!ABC*A",},
	{154,"!ABC",},
	{81,"!A",},
	{80,"!ABC",},
	{78,"!ABCDE",},
	{77,"!AB*A",},
	{74,"!ABCDEF*A",},
	{53,"!ABC%ABCD*AB",}
};


static vector	exit_room_winds[N_END_ROOMS] = {
	{0.014f,1.0f,-0.009f},
	{0.361f,0.856f,-0.372f},
	{-0.022f,0.942f,-0.336f},
	{-0.292f,0.957f,-0.022f},
	{-0.726f,0.688f,-0.017f},
	{-0.986f,0.052f,-0.153f},
	{-0.689f,-0.009f,-0.724f},
	{-0.780f,-0.538f,-0.317f},
	{-0.026f,-0.999f,-0.013f},
	{-0.010f,-0.999f,-0.036f},
	{-0.622f,-0.782f,-0.005f},
	{-0.016f,-0.999f,-0.002f},
	{0.599f,-0.800f,0.030f},
	{0.056f,-0.998f,0.004f},
	{0.484f,-0.875f,-0.022f},
	{0.015f,-0.999f,-0.008f},
	{0.887f,-0.462f,0.009f},
	{1.0f,-0.023f,0.036f},
	{1.0f,-0.023f,0.036f}
};

/*
$$ACTION
Custom
Init End Sequence
cEndSequenceInit
	Set winds in end sequence rooms, initializes data , etc.
$$END
*/
void cEndSequenceInit()
{
	float wind_speed = 15.0f;
	int i;
	for (i = 0; i < N_END_ROOMS; i++)
	{
		strcpy(exit_room_info[i].cmdstr, exit_room_info[i].commands);
		aRoomSetWind(exit_room_info[i].room_number,
				exit_room_winds[i].x,
				exit_room_winds[i].y,
				exit_room_winds[i].z,
				wind_speed
			);
	}
}


///////////////////////////////////////////////////////////////////////////////
void do_endsequence_fx(char fx_type, int handle)
{
	ushort id;
	float time, size, speed, bloblife,blobint;
	int killflags = 0x60;					// fireballs and breaks apart on death

//	do fx based on type
	switch (fx_type)
	{
	case 0:			//  death+anim??0x200020 = fireball death and delayed death.
		Obj_Value(handle, VF_GET, OBJV_US_ID, &id);
		if ((rand() % 4) >= 2)  {
			killflags |= 0x4;			// sparklers when dying.
		}
		else {
			killflags |= 0x200000;
		}
		//killflags = 0x8000;
//		aObjKill(handle,2,1, killflags, 0.2f,0.7f);
		aObjDestroy(handle);
		break;
											 
	case 1:			// spew
	case 2:			//	big spew
	case 3:			// huge spew
		if (fx_type == 1) { 
			bloblife = 4.0f; blobint = 0.15f; time = 10.0f; size = 12.0f; speed = 30.0f; 
		}
		else if (fx_type == 2) { 
			bloblife = 6.0f; blobint = 0.20f; time = 15.0f; size = 18.0f; speed = 30.0f; 
		}
		else if (fx_type == 3) { 
			bloblife = 6.0f; blobint = 0.20f; time = 15.0f; size = 22.0f; speed = 30.0f; 
		}

		aTurnOnSpew(handle,-1,2,0.0f,0.0f,0x10000,0,bloblife,blobint,time,size,speed,1,-1);
		break;

	case 4:			// spark!
		bloblife = 1.5f;
		blobint = 1.0f;
		time = 8.0f;
		size = 6.0f;
		speed = 40.0f;
		aTurnOnSpew(handle,-1,15,0.0f,0.0f,0x10000,0,bloblife,blobint,time,size,speed,1,-1);
		break;
	}
}


/*
$$ACTION
Custom
End Sequence Update for Player Object [o:PlayerObject]
cEndSequenceFrame
	Custom scripting for the killer end sequence.

Parameters:
	PlayerObject:	This must be the playerobject experiencing the end sequence
$$END
*/
void cEndSequenceFrame(int playerobj)
{
	int room_number,r,r2;
	vector player_pos;
	
	Obj_Value(playerobj, VF_GET,OBJV_I_ROOMNUM, &room_number);
	Obj_Value(playerobj, VF_GET,OBJV_V_POS, &player_pos);

//	lookup starting r;
	for (r = 0; (r < N_END_ROOMS) && exit_room_info[r].room_number != room_number; r++) {}

	if (r == N_END_ROOMS) return;

//	okay, we know where the player is
//	now look for spew,clutter objects in player room and next room.
	char fx_type=-1;
	char name[32];
	int handle;


	for (r2 = r; r2 <= (r+2); r2++)
	{
		char *cmds = &exit_room_info[r].cmdstr[0];
		int cmdlen = (int)strlen(cmds);
		int c;
		if (r2 == N_END_ROOMS) {
			break;
		}
		for (c = 0; c < cmdlen; c++)
		{
			if (cmds[c] == '.') fx_type = -1;
			else if (cmds[c] == '!')  fx_type = 0;
			else if (cmds[c] == '$')  fx_type = 1;
			else if (cmds[c] == '#')  fx_type = 2;
			else if (cmds[c] == '%')  fx_type = 3;
			else if (cmds[c] == '*')  fx_type = 4;
			else {
			//	a spewer,clutter kill, sparker...
			//	get handle of object
				switch (fx_type)
				{
				case 0:
					sprintf(name, "X%d %c",exit_room_info[r].room_number, cmds[c]);
					break;
				case 1:
				case 2:
				case 3:
					sprintf(name, "X%d Spew %c",exit_room_info[r].room_number, cmds[c]);
					break;
				case 4:
					sprintf(name, "X%d Sparks%c",exit_room_info[r].room_number, cmds[c]);
					break;
				default:
					name[0] = 0;
				}

				if (name[0]) {
					float dist;
					handle = Scrpt_FindObjectName(name);
					dist = qObjGetDistance(handle, playerobj);
					if (dist < 1400.0f) {
						do_endsequence_fx(fx_type, handle);
						cmds[c] = '.';				// clears out slot
					}
				}
			}
		}
	}
}


//Tell the code to call our functions
#define ENABLE_CUSTOM_SAVE_AND_RESTORE

//Save custom data for this script
void dsCustomSave(void *fileptr)
{
	//	save out gravity room info
	int i,j;

	for(i=0;i<N_ROOMS;i++)
	{
		for(j=0;j<N_BOXES;j++)
		{
			File_WriteByte(Gravity_room_box_states[i][j],fileptr);
		}
	}
}


//Restore custom data for this script
void dsCustomRestore(void *fileptr)
{
	// load in gravity room info.
	int i,j;

	for(i=0;i<N_ROOMS;i++)
	{
		for(j=0;j<N_BOXES;j++)
		{
			Gravity_room_box_states[i][j] = File_ReadByte(fileptr);
		}
	}
	
	//	set gravity room info.
	cUpdateGravityRoomBoxStates(1);
	cUpdateGravityRoomBoxStates(2);
}
 

 
/**{CUSTOM_SCRIPT_BLOCK_END}**** DO NOT EDIT! **/
// ============================================================
// End of Custom Script Block - DO NOT EDIT ANYTHING AFTER THIS
// ============================================================
 
 
// =================
// Message File Data
// =================
 
#define MAX_SCRIPT_MESSAGES	256
#define MAX_MSG_FILEBUF_LEN	1024
#define NO_MESSAGE_STRING		"*Message Not Found*"
#define INV_MSGNAME_STRING	"*Message Name Invalid*"
#define WHITESPACE_CHARS	" \t\r\n"
 
// Structure for storing a script message
typedef struct {
	char *name;			// the name of the message
	char *message;		// the actual message text
} tScriptMessage;
 
// Global storage for level script messages
tScriptMessage *message_list[MAX_SCRIPT_MESSAGES];
int num_messages;
 
// ======================
// Message File Functions
// ======================
 
// Initializes the Message List
void InitMessageList(void)
{
	for(int j=0;j<MAX_SCRIPT_MESSAGES;j++)
		message_list[j]=NULL;
	num_messages=0;
}
 
// Clear the Message List
void ClearMessageList(void)
{
	for(int j=0;j<num_messages;j++) {
		free(message_list[j]->name);
		free(message_list[j]->message);
		free(message_list[j]);
		message_list[j]=NULL;
	}
	num_messages=0;
}
 
// Adds a message to the list
int AddMessageToList(char *name, char *msg)
{
	int pos;
 
	// Make sure there is room in the list
	if(num_messages>=MAX_SCRIPT_MESSAGES) return false;
 
	// Allocate memory for this message entry
	pos=num_messages;
	message_list[pos]=(tScriptMessage *)malloc(sizeof(tScriptMessage));
	if(message_list[pos]==NULL) return false;
 
	// Allocate memory for the message name
	message_list[pos]->name=(char *)malloc(strlen(name)+1);
	if(message_list[pos]->name==NULL) {
		free(message_list[pos]);
		return false;
	}
	strcpy(message_list[pos]->name,name);
 
	// Allocate memory for the message name
	message_list[pos]->message=(char *)malloc(strlen(msg)+1);
	if(message_list[pos]->message==NULL) {
		free(message_list[pos]->name);
		free(message_list[pos]);
		return false;
	}
	strcpy(message_list[pos]->message,msg);
	num_messages++;
 
	return true;
}
 
// Removes any whitespace padding from the end of a string
void RemoveTrailingWhitespace(char *s)
{
	int last_char_pos;
 
	last_char_pos=strlen(s)-1;
	while(last_char_pos>=0 && isspace(s[last_char_pos])) {
		s[last_char_pos]='\0';
		last_char_pos--;
	}
}
 
// Returns a pointer to the first non-whitespace char in given string
char *SkipInitialWhitespace(char *s)
{
	while((*s)!='\0' && isspace(*s)) 
		s++;
 
	return(s);
}
 
// Read in the Messages
int ReadMessageFile(char *filename)
{
	void *infile;
	char filebuffer[MAX_MSG_FILEBUF_LEN+1];
	char *line, *msg_start;
	int line_num;
	bool next_msgid_found;
 
	// Try to open the file for loading
	infile=File_Open(filename,"rt");
	if (!infile) return false;
 
	line_num=0;
	next_msgid_found=true;
 
	// Clear the message list
	ClearMessageList();
 
	// Read in and parse each line of the file
	while (!File_eof(infile)) {
 
		// Clear the buffer
		strcpy(filebuffer,"");
 
		// Read in a line from the file
		File_ReadString(filebuffer, MAX_MSG_FILEBUF_LEN, infile);
		line_num++;
 
		// Remove whitespace padding at start and end of line
		RemoveTrailingWhitespace(filebuffer);
		line=SkipInitialWhitespace(filebuffer);
 
		// If line is a comment, or empty, discard it
		if(strlen(line)==0 || strncmp(line,"//",2)==0)
			continue;
 
		if(!next_msgid_found) {		// Parse out the last message ID number
 
			// Grab the first keyword, make sure it's valid
			line=strtok(line,WHITESPACE_CHARS);
			if(line==NULL) continue;
 
			// Grab the second keyword, and assign it as the next message ID
			line=strtok(NULL,WHITESPACE_CHARS);
			if(line==NULL) continue;
 
			next_msgid_found=true;
		}
		else {	// Parse line as a message line
			
			// Find the start of message, and mark it
			msg_start=strchr(line,'=');
			if(msg_start==NULL) continue;
			msg_start[0]='\0';
			msg_start++;
			
			// Add the message to the list
			AddMessageToList(line,msg_start);
		}
	}
	File_Close(infile);
 
	return true;
}
 
// Find a message
char *GetMessage(char *name)
{
	// Make sure given name is valid
	if(name==NULL) return INV_MSGNAME_STRING;
 
	// Search message list for name
	for(int j=0;j<num_messages;j++)
		if(strcmp(message_list[j]->name,name)==0) return(message_list[j]->message);
 
	// Couldn't find it
	return NO_MESSAGE_STRING;
}
 
 
//======================
// Name List Arrays     
//======================
 
#define NUM_DOOR_NAMES		9
char *Door_names[NUM_DOOR_NAMES] = {
	"EscapeChuteDoor",
	"Hangar1AExit",
	"Hangar2AExit",
	"J1Door",
	"J2Door",
	"J3Door",
	"CaptainOuterDoor",
	"CaptainDoor",
	"BridgeDoor"
};
int Door_handles[NUM_DOOR_NAMES];
 
#define NUM_OBJECT_NAMES		229
char *Object_names[NUM_OBJECT_NAMES] = {
	"BigFan1Engine2",
	"BigFan1Engine3",
	"J1Bomb",
	"J2Bomb",
	"J3Bomb",
	"Hanger1AWarnLight",
	"Hangar2AWarnLight",
	"CaptainAndTrooper",
	"J1CineGadget",
	"J1CineGadget2",
	"BigFanEngine0",
	"BigFan1Engine",
	"BST1",
	"HazardActor1",
	"HazardActor2",
	"SharkGuard3",
	"SharkGuard2",
	"SharkGuard1",
	"SharkGuard0",
	"CaptainGadget",
	"Datakey1",
	"Datakey2",
	"FirstMate",
	"InventoryBomb",
	"IntroPanbackCamPt",
	"IntroSceneCut2",
	"IntroSceneCam2",
	"IntroSceneCamPt2",
	"IntroSceneCam3",
	"IntroSceneCamPt3",
	"SwHangar1APrimary",
	"SwHangar1ASecond",
	"Hangar1ADoor",
	"SwHangar1ASecond2",
	"SwHangar2APrimary",
	"SwHangar2ASecond",
	"Hangar2ADoor",
	"SwHangar2ASecond2",
	"swHangar2ACrane",
	"Hangar2ACrane",
	"SwHangar2AFlamer",
	"FlamePurgeSpew0",
	"FlamePurgeSpew1",
	"FlamePurgeSpew3",
	"FlamePurgeSpew4",
	"FlamePurgeSpew6",
	"FlamePurgeSpew7",
	"swHangar3APrimary",
	"swHangar3ASecondar",
	"Hangar3ADoor",
	"swHangar3ASecond2",
	"swHangar3AMagnet",
	"Hangar3ABox1",
	"Hangar3ABox2",
	"BlastOutBox",
	"J1BombLocation",
	"J2BombLocation",
	"J3BombLocation",
	"J1SpewA",
	"J1SpewB",
	"J1SpewC",
	"J1SpewD",
	"J2SpewA",
	"J2SpewB",
	"J2SpewC",
	"J2SpewD",
	"J3SpewA",
	"J3SpewB",
	"J3SpewC",
	"J3SpewD",
	"J1TopCam",
	"J1BottomCam",
	"J2TopCam",
	"J2BottomCam",
	"J3TopCam",
	"J3BottomCam",
	"swJ1Maintenance",
	"J1SummonDest",
	"swJ2Maintenance",
	"J2SummonDest",
	"swJ3Ball",
	"swJ3Maintenance",
	"J3SummonDest",
	"SwHazardGuardArea",
	"HazardActor1Cam",
	"HazardActor1Pt",
	"HazardActor2Cam",
	"HazardActor2Pt",
	"SwDownGrav1",
	"SwNeutralGrav1",
	"SwUpGrav1",
	"SwDownGrav2",
	"FloatingBallOfDeth",
	"SwNeutralGrav2",
	"SwUpGrav2",
	"GravityFan2-A",
	"GravityFan2-B",
	"SecR0Switch",
	"SwSharkGuard1",
	"SwSharkGuard2",
	"SwSharkGuard3",
	"Tesla-A-1-D",
	"Tesla-A-2-D",
	"Tesla-A-3-D",
	"BigFan0",
	"BigFan1",
	"BigFan2",
	"BigFan3",
	"Tesla-A-1-S",
	"Tesla-A-2-S",
	"Tesla-A-3-S",
	"Tesla-B-1-D",
	"Tesla-B-2-D",
	"Tesla-B-3-D",
	"Tesla-B-1-S",
	"Tesla-B-2-S",
	"Tesla-B-3-S",
	"Tesla-C-1-D",
	"Tesla-C-2-D",
	"Tesla-C-3-D",
	"Tesla-C-1-S",
	"Tesla-C-2-S",
	"Tesla-C-3-S",
	"Tesla-D-1-D",
	"Tesla-D-2-D",
	"Tesla-D-3-D",
	"Tesla-D-1-S",
	"Tesla-D-2-S",
	"Tesla-D-3-S",
	"Tesla-E-1-D",
	"Tesla-E-2-D",
	"Tesla-E-3-D",
	"Tesla-E-1-S",
	"Tesla-E-2-S",
	"Tesla-E-3-S",
	"Tesla-F-1-D",
	"Tesla-F-2-D",
	"Tesla-F-3-D",
	"Tesla-F-1-S",
	"Tesla-F-2-S",
	"Tesla-F-3-S",
	"Tesla-G-1-D",
	"Tesla-G-2-D",
	"Tesla-G-3-D",
	"Tesla-G-1-S",
	"Tesla-G-2-S",
	"Tesla-G-3-S",
	"Tesla-H-1-D",
	"Tesla-H-2-D",
	"Tesla-H-3-D",
	"Tesla-H-1-S",
	"Tesla-H-2-S",
	"Tesla-H-3-S",
	"CaptainCamPtIntro",
	"CapTele1",
	"CapTele2",
	"CapTele3",
	"CapTele4",
	"CapTele5",
	"CapTele6",
	"CapTele7",
	"CapTele8",
	"CapTeleMain9",
	"CaptainCamIntro1",
	"CaptainCamPtIntro1",
	"CaptainCamIntro2",
	"CaptainCamPtIntro2",
	"CaptainCamIntro3",
	"CaptainCamIntroPt3",
	"FMClone5",
	"FMClone4",
	"FMClone3",
	"FMClone2",
	"FMClone1",
	"FMCam3",
	"FMCam1",
	"FMCam2",
	"DatalinkKeyPort",
	"PoleNorthDataArm",
	"DatalinkKeyPortS",
	"PoleNorthLCam1",
	"PoleNorthLCam2",
	"NPoleNegative",
	"NPolePositive",
	"PoleSouthDataArm",
	"PoleSouthLCam1",
	"PoleSouthLCam2",
	"SPoleNegative",
	"SPolePositive",
	"ShoSpew17",
	"ShoSpew18",
	"ShoSpew3",
	"ShoSpew4",
	"ShoSpew5",
	"ShoSpew6",
	"ShoSpew9",
	"ShoSpew10",
	"ShoSpew19",
	"ShoSpew20",
	"ShoSpew23",
	"ShoSpew24",
	"ShoSpew25",
	"ShoSpew26",
	"BST6",
	"BST7",
	"CaptAndTroopCamPt0",
	"CaptAndTroopCam",
	"CaptAndTroopCamPt",
	"CapAndTroopCamNew",
	"CaptAndTroopCamPt2",
	"EscapeChuteDoor",
	"JunctionCineCamPt",
	"J1CineCamSpewer",
	"EndCinematicCam",
	"ExitSpew0",
	"ExitSpew1",
	"GravityFan-1A",
	"GravityFan-1B",
	"Arobics1",
	"Arobics2",
	"Arobics3",
	"Arobics4",
	"Arobics5",
	"Arobics6",
	"Arobics7",
	"Arobics8",
	"Jogger1",
	"Jogger2",
	"Jogger3"
};
int Object_handles[NUM_OBJECT_NAMES];
 
#define NUM_ROOM_NAMES		58
char *Room_names[NUM_ROOM_NAMES] = {
	"BallShaft",
	"OuterSpace",
	"OuterSpace2",
	"OuterSpace3",
	"Hangar1ADoor",
	"Hangar2ADoor",
	"Hangar3ADoor",
	"BigFanRoomA",
	"BigFamRoomB",
	"BigFanRoomC",
	"BigFan1RoomA",
	"BigFan1RoomB",
	"BigFan1RoomC",
	"BigFan2RoomA",
	"BigFan2RoomB",
	"BigFan3RoomA",
	"BigFan3RoomB",
	"FT1",
	"BN2S2",
	"BN2S3",
	"BN2S4",
	"SpaceHangar",
	"SpaceInsideHangar",
	"Hangar1A",
	"Hangar2A",
	"Hangar3A",
	"Warehouse",
	"J1Room",
	"J2Room",
	"J3Room",
	"HazardGuardArea",
	"GravityRoomOne",
	"GravityRoomTwo",
	"S0Security",
	"S1Security",
	"S2Security",
	"S3Security",
	"ChasmM0",
	"ChasmM1",
	"ChasmM2",
	"ChasmM3",
	"ChasmD0",
	"ChasmD1",
	"ChasmD2",
	"ChasmD3",
	"ChasmU0",
	"ChasmU1",
	"ChasmU2",
	"ChasmU3",
	"CaptainsQuarters",
	"CaptainsBunker",
	"PoleNorth",
	"PoleSouth",
	"CaptainsOffice",
	"SouthBound1",
	"SouthBound2",
	"NorthBound1",
	"Northbound2"
};
int Room_indexes[NUM_ROOM_NAMES];
 
#define NUM_TRIGGER_NAMES		32
char *Trigger_names[NUM_TRIGGER_NAMES] = {
	"Hangar1ASuckout",
	"LeftHangar1A",
	"Hangar2Suckout",
	"LeftHangar2A",
	"BallPuzzleWin",
	"WarehouseTrigger",
	"J3BallTrigger",
	"HazardWasteMovie",
	"BallFanPuzzleHint",
	"GravityRoom1BotDie1",
	"GravityRoom1BotDie2",
	"GravityRoom1BotDie3",
	"GravityRoom1BotDie4",
	"EndFanRoom",
	"EndSecurityPuzzle",
	"WindFanPuzzle1Hint",
	"WindFanPuzzle2Hint",
	"Fan02DethTrigger",
	"Fan03DethTrigger",
	"CaptainCinematic",
	"EnterBunkerRoom",
	"FirstMateWarmup",
	"CaptainTroopCinemat",
	"EndSequenceStart",
	"ExitTrigger",
	"Music Region: Puzzl",
	"Music Region: Hanga",
	"Music Region: Giant",
	"Music Region: Gian1",
	"Music Region: Barra",
	"Music Region: Poles",
	"Music Region: Bar1"
};
int Trigger_indexes[NUM_TRIGGER_NAMES];
int Trigger_faces[NUM_TRIGGER_NAMES];
int Trigger_rooms[NUM_TRIGGER_NAMES];
 
#define NUM_SOUND_NAMES		18
char *Sound_names[NUM_SOUND_NAMES] = {
	"AmbSwitch31",
	"Powerup pickup",
	"Drop bomb",
	"EnvSteamEmitC",
	"RbtTubbsSeeB",
	"Merc2AlertSiren",
	"Extra life",
	"Cloak off",
	"Smartfire1",
	"Drop weapon",
	"Cloak on",
	"RbtThiefLaugh",
	"Wall fade ???",
	"You don't have it BEEP",
	"AmbSwitch11",
	"DoorIsLocked",
	"RbtGadgetAlert",
	"Napalmexplosion21"
};
int Sound_indexes[NUM_SOUND_NAMES];
 
#define NUM_TEXTURE_NAMES		10
char *Texture_names[NUM_TEXTURE_NAMES] = {
	"Merc3MonLock",
	"Merc3MonLogo",
	"FunkyEffectGreen",
	"FunkyEffect2",
	"FunkyEffect1",
	"Merc3MonWaitS",
	"Merc3MonDownL",
	"FunkyEffect3",
	"Merc3MonWaitN",
	"Merc3MonNeed"
};
int Texture_indexes[NUM_TEXTURE_NAMES];
 
#define NUM_PATH_NAMES		28
char *Path_names[NUM_PATH_NAMES] = {
	"HazardActorPath1",
	"HazardActorPath2",
	"IntroScene1Real",
	"H2SqidSlap",
	"H3BSTPath",
	"H3BSTPath2",
	"HenchmanCamPath",
	"HenchmanPath",
	"J1Gadget",
	"J2Gadget",
	"J3Gadget",
	"HazardWasteCinePath1",
	"SharkRoomGuard3",
	"SharkRoomGuard2",
	"SharkRoomGuard1",
	"SharkGuardRoom0",
	"CaptainCameraIntro",
	"CaptainINTRO",
	"CaptainIntroPath",
	"CaptainEscapePath",
	"CaptainMovePath2",
	"FirstMateINTRO",
	"CaptAndTroopCamPath",
	"JunctionCinePath",
	"JunctionCinePath2",
	"JunctionCineCamPath",
	"PlayerExitPath",
	"JoggingPath"
};
int Path_indexes[NUM_PATH_NAMES];
 
#define NUM_MATCEN_NAMES		12
char *Matcen_names[NUM_MATCEN_NAMES] = {
	"H3STMatcen",
	"Hangar2AMatcen",
	"Hangar3AMatcen",
	"BallPuzzleTreat",
	"J1Gadget",
	"J1BST",
	"J2Gadget",
	"J2BST",
	"J3Ball",
	"J3Cloak",
	"J3Gadget",
	"J3BST"
};
int Matcen_indexes[NUM_MATCEN_NAMES];
 
#define NUM_GOAL_NAMES		26
char *Goal_names[NUM_GOAL_NAMES] = {
	"Unlock Hangar 1A Exit Door",
	"Proceed to Hangar 2A",
	"Unlock Hangar 2A Exit Door",
	"Proceed to Hangar 3A",
	"Exit Storage Crate",
	"Enter Warehouse",
	"Defeat Captain's Henchman",
	"Plant Bomb at Cooling Junction Alpha",
	"Gain Entry to Cooling Junction Alpha",
	"Plant Bomb at Cooling Junction Beta",
	"Gain Entry to Cooling Junction Beta",
	"Plant Bomb at Cooling Junction Gamma",
	"Gain Entry to Cooling Junction Gamma",
	"Plant Bombs at Cooling Junctions",
	"Disable Hazardous Storage Forcefield",
	"Disable Secondary Cooling Fan",
	"Disable Primary Cooling Fan",
	"Disable Ventilation Shaft Fan",
	"Obtain Captain's Data Key",
	"Find and Destroy Captain",
	"Obtain First Mate's Data Key",
	"Find and Destroy First Mate",
	"Place Pole North Data Key",
	"Place Pole South Data Key",
	"Download Station's Databanks",
	"Escape from the station"
};
int Goal_indexes[NUM_GOAL_NAMES];
 
#define NUM_MESSAGE_NAMES		68
char *Message_names[NUM_MESSAGE_NAMES] = {
	"Bomb3",
	"IntroCinematicMsg",
	"EmptyMessage",
	"HangarPrimaryLocked",
	"Hangar1ADecompMsg",
	"Hangar1ADecompCancelMsg",
	"EnteredHangar2A",
	"Hangar2ADecompMsg",
	"Hangar2ADecompCancelMsg",
	"Hangar2AFlamePurge",
	"Hangar2AFlamePurgeStop",
	"Hangar3ADecompMsg",
	"Hangar3ADecompMsgCancel",
	"EnteredHangar1A",
	"HenchmanSays",
	"HenchmanHint",
	"ForcefieldDown",
	"Bomb",
	"Bomb2",
	"BombAlreadyPlanted",
	"BombPlanted",
	"BombDontPlantHere",
	"MaintenanceWarningLong",
	"MaintenanceWarning",
	"MBotSwitch",
	"DoorUnlockedMaint",
	"MBotDied",
	"MBotSpottedUs",
	"MBotSummon",
	"BallMade",
	"IncomingTransmit",
	"HazardGadget1Line",
	"HazardGadget2Line",
	"HazardGadget1Line2",
	"HazardousStorageHint",
	"BallFanPuzzleHint",
	"IntruderAlertR0",
	"SecurityR0",
	"IntruderAlertR1",
	"SecurityR1",
	"IntruderAlertR2",
	"SecurityR2",
	"IntruderAlertR3",
	"SecuirtyR3",
	"WindFanPuzzleHint",
	"FanDisabled",
	"DataKeyCaptain",
	"GotDatalinkKey",
	"CaptainText",
	"EnteredBunker",
	"DataKeyFirstMate",
	"GotDatalinkKey2",
	"FirstMateText",
	"PoleDatalinkWarning",
	"DataKeysVerified",
	"DataKeyWrong2",
	"DataKeyNoUse1",
	"DataKeyWrong1",
	"DataKeyNoUse2",
	"PoleDatalinkLock",
	"DataArmUsed",
	"DataArmOff",
	"GetOut",
	"ExitLevelLong",
	"ExitTheLevel",
	"CaptainAndTrooper",
	"CaptainAndTrooper2",
	"EscapeDoorLocked"
};
char *Message_strings[NUM_MESSAGE_NAMES];
 
// ===============
// InitializeDLL()
// ===============
char STDCALL InitializeDLL(tOSIRISModuleInit *func_list)
{
	osicommon_Initialize((tOSIRISModuleInit *)func_list);
	if(func_list->game_checksum!=CHECKSUM)
	{ 
		mprintf(0,"Game-Checksum FAIL!!! (%ul!=%ul)\n",func_list->game_checksum,CHECKSUM);
		mprintf(0,"RECOMPILE YOUR SCRIPTS!!!\n");
		return 0;
	}
 
	ClearGlobalActionCtrs();
	dfInit();
	InitMessageList();
 
	// Build the filename of the message file
	char filename[_MAX_PATH+1];
	char english_filename[_MAX_PATH+1];
	int lang_type;
	if(func_list->script_identifier!=NULL) {
		_splitpath(func_list->script_identifier,NULL,NULL,filename,NULL);
		sprintf(english_filename,"%s.msg",filename);
		lang_type=Game_GetLanguage();
		if(lang_type==LANGUAGE_FRENCH) strcat(filename,"_FRN");
		else if(lang_type==LANGUAGE_GERMAN) strcat(filename,"_GER");
		else if(lang_type==LANGUAGE_ITALIAN) strcat(filename,"_ITN");
		else if(lang_type==LANGUAGE_SPANISH) strcat(filename,"_SPN");
		else if(lang_type==LANGUAGE_POLISH) strcat(filename,"_POL");
		strcat(filename,".msg");
	}
	else {
		strcpy(filename,"Merc3.msg");
		lang_type=LANGUAGE_ENGLISH;
	}
	if(!ReadMessageFile(filename)) {
		if(lang_type == LANGUAGE_ENGLISH) {
			mprintf(0,"ERROR: Could not load message file - %s\n",filename);
		}
		else if(!ReadMessageFile(english_filename)) {
			mprintf(0,"ERROR: Could not load message file - %s\n",english_filename);
		}
	}
 
	int j;
 
	// Do Door Index lookups
	for(j=0;j<NUM_DOOR_NAMES;j++) 
		Door_handles[j]=Scrpt_FindDoorName(Door_names[j]);
 
	// Do Object Index lookups
	for(j=0;j<NUM_OBJECT_NAMES;j++) 
		Object_handles[j]=Scrpt_FindObjectName(Object_names[j]);
 
	// Do Room Index lookups
	for(j=0;j<NUM_ROOM_NAMES;j++) 
		Room_indexes[j]=Scrpt_FindRoomName(Room_names[j]);
 
	// Do Trigger Index lookups
	for(j=0;j<NUM_TRIGGER_NAMES;j++) {
		Trigger_indexes[j]=Scrpt_FindTriggerName(Trigger_names[j]);
		Trigger_faces[j]=Scrpt_GetTriggerFace(Trigger_indexes[j]);
		Trigger_rooms[j]=Scrpt_GetTriggerRoom(Trigger_indexes[j]);
	}
 
	// Do Sound Index lookups
	for(j=0;j<NUM_SOUND_NAMES;j++) 
		Sound_indexes[j]=Scrpt_FindSoundName(Sound_names[j]);
 
	// Do Texture Index lookups
	for(j=0;j<NUM_TEXTURE_NAMES;j++) 
		Texture_indexes[j]=Scrpt_FindTextureName(Texture_names[j]);
 
	// Do Path Index lookups
	for(j=0;j<NUM_PATH_NAMES;j++) 
		Path_indexes[j]=Scrpt_FindPathName(Path_names[j]);
 
	// Do Matcen Index lookups
	for(j=0;j<NUM_MATCEN_NAMES;j++) 
		Matcen_indexes[j]=Scrpt_FindMatcenName(Matcen_names[j]);
 
	// Do Goal Index lookups
	for(j=0;j<NUM_GOAL_NAMES;j++) 
		Goal_indexes[j]=Scrpt_FindLevelGoalName(Goal_names[j]);
 
	// Do Message Name lookups
	for(j=0;j<NUM_MESSAGE_NAMES;j++) 
		Message_strings[j]=GetMessage(Message_names[j]);
 
	return 1;
}

// =============
// ShutdownDLL()
// =============
void STDCALL ShutdownDLL(void)
{
	ClearMessageList();
}

// ===============
// GetGOScriptID()
// ===============
int STDCALL GetGOScriptID(char *name,ubyte isdoor)
{
	return -1;
}

// ================
// CreateInstance()
// ================
void STDCALLPTR CreateInstance(int id)
{
	switch(id) {
		case ID_LEVEL_0000:
			return new LevelScript_0000;
			break;
		case ID_CUSTOM_OBJECT_0B83:
			return new CustomObjectScript_0B83;
			break;
		case ID_CUSTOM_OBJECT_0B85:
			return new CustomObjectScript_0B85;
			break;
		case ID_CUSTOM_OBJECT_1140:
			return new CustomObjectScript_1140;
			break;
		case ID_CUSTOM_OBJECT_1941:
			return new CustomObjectScript_1941;
			break;
		case ID_CUSTOM_OBJECT_0943:
			return new CustomObjectScript_0943;
			break;
		case ID_CUSTOM_OBJECT_0942:
			return new CustomObjectScript_0942;
			break;
		case ID_CUSTOM_OBJECT_0950:
			return new CustomObjectScript_0950;
			break;
		case ID_CUSTOM_OBJECT_0951:
			return new CustomObjectScript_0951;
			break;
		case ID_CUSTOM_OBJECT_093A:
			return new CustomObjectScript_093A;
			break;
		case ID_CUSTOM_OBJECT_193D:
			return new CustomObjectScript_193D;
			break;
		case ID_CUSTOM_OBJECT_093B:
			return new CustomObjectScript_093B;
			break;
		case ID_CUSTOM_OBJECT_192E:
			return new CustomObjectScript_192E;
			break;
		case ID_CUSTOM_OBJECT_093C:
			return new CustomObjectScript_093C;
			break;
		case ID_CUSTOM_OBJECT_1318:
			return new CustomObjectScript_1318;
			break;
		case ID_CUSTOM_OBJECT_1317:
			return new CustomObjectScript_1317;
			break;
		case ID_CUSTOM_OBJECT_190B:
			return new CustomObjectScript_190B;
			break;
		case ID_CUSTOM_OBJECT_6909:
			return new CustomObjectScript_6909;
			break;
		case ID_CUSTOM_OBJECT_191C:
			return new CustomObjectScript_191C;
			break;
		case ID_CUSTOM_OBJECT_111D:
			return new CustomObjectScript_111D;
			break;
		case ID_CUSTOM_OBJECT_110F:
			return new CustomObjectScript_110F;
			break;
		case ID_CUSTOM_OBJECT_1194:
			return new CustomObjectScript_1194;
			break;
		case ID_CUSTOM_OBJECT_11FA:
			return new CustomObjectScript_11FA;
			break;
		case ID_CUSTOM_OBJECT_0CB4:
			return new CustomObjectScript_0CB4;
			break;
		case ID_CUSTOM_OBJECT_20B0:
			return new CustomObjectScript_20B0;
			break;
		case ID_CUSTOM_OBJECT_136F:
			return new CustomObjectScript_136F;
			break;
		case ID_CUSTOM_OBJECT_3090:
			return new CustomObjectScript_3090;
			break;
		case ID_CUSTOM_OBJECT_30AE:
			return new CustomObjectScript_30AE;
			break;
		case ID_CUSTOM_OBJECT_50FF:
			return new CustomObjectScript_50FF;
			break;
		case ID_CUSTOM_OBJECT_0987:
			return new CustomObjectScript_0987;
			break;
		case ID_CUSTOM_OBJECT_0989:
			return new CustomObjectScript_0989;
			break;
		case ID_CUSTOM_OBJECT_10FA:
			return new CustomObjectScript_10FA;
			break;
		case ID_CUSTOM_OBJECT_18FB:
			return new CustomObjectScript_18FB;
			break;
		case ID_CUSTOM_OBJECT_10FC:
			return new CustomObjectScript_10FC;
			break;
		case ID_CUSTOM_OBJECT_10F9:
			return new CustomObjectScript_10F9;
			break;
		case ID_CUSTOM_OBJECT_10F8:
			return new CustomObjectScript_10F8;
			break;
		case ID_CUSTOM_OBJECT_D08A:
			return new CustomObjectScript_D08A;
			break;
		case ID_CUSTOM_OBJECT_2888:
			return new CustomObjectScript_2888;
			break;
		case ID_CUSTOM_OBJECT_09FD:
			return new CustomObjectScript_09FD;
			break;
		case ID_CUSTOM_OBJECT_48C5:
			return new CustomObjectScript_48C5;
			break;
		case ID_CUSTOM_OBJECT_09FC:
			return new CustomObjectScript_09FC;
			break;
		case ID_CUSTOM_OBJECT_08D6:
			return new CustomObjectScript_08D6;
			break;
		case ID_CUSTOM_OBJECT_09FB:
			return new CustomObjectScript_09FB;
			break;
		case ID_CUSTOM_OBJECT_08DF:
			return new CustomObjectScript_08DF;
			break;
		case ID_CUSTOM_OBJECT_105C:
			return new CustomObjectScript_105C;
			break;
		case ID_CUSTOM_OBJECT_08E8:
			return new CustomObjectScript_08E8;
			break;
		case ID_CUSTOM_OBJECT_60EB:
			return new CustomObjectScript_60EB;
			break;
		case ID_CUSTOM_OBJECT_28EC:
			return new CustomObjectScript_28EC;
			break;
		case ID_CUSTOM_OBJECT_118B:
			return new CustomObjectScript_118B;
			break;
		case ID_CUSTOM_OBJECT_118D:
			return new CustomObjectScript_118D;
			break;
		case ID_CUSTOM_OBJECT_118C:
			return new CustomObjectScript_118C;
			break;
		case ID_CUSTOM_OBJECT_098E:
			return new CustomObjectScript_098E;
			break;
		case ID_CUSTOM_OBJECT_11F7:
			return new CustomObjectScript_11F7;
			break;
		case ID_CUSTOM_OBJECT_0983:
			return new CustomObjectScript_0983;
			break;
		case ID_CUSTOM_OBJECT_1BB9:
			return new CustomObjectScript_1BB9;
			break;
		case ID_CUSTOM_OBJECT_13AD:
			return new CustomObjectScript_13AD;
			break;
		case ID_CUSTOM_OBJECT_13AC:
			return new CustomObjectScript_13AC;
			break;
		case ID_CUSTOM_OBJECT_13AB:
			return new CustomObjectScript_13AB;
			break;
		case ID_CUSTOM_OBJECT_13AA:
			return new CustomObjectScript_13AA;
			break;
		case ID_CUSTOM_OBJECT_0A2E:
			return new CustomObjectScript_0A2E;
			break;
		case ID_CUSTOM_OBJECT_0A30:
			return new CustomObjectScript_0A30;
			break;
		case ID_CUSTOM_OBJECT_0A33:
			return new CustomObjectScript_0A33;
			break;
		case ID_CUSTOM_OBJECT_0982:
			return new CustomObjectScript_0982;
			break;
		case ID_CUSTOM_OBJECT_12DF:
			return new CustomObjectScript_12DF;
			break;
		case ID_CUSTOM_OBJECT_12E1:
			return new CustomObjectScript_12E1;
			break;
		case ID_CUSTOM_OBJECT_12DE:
			return new CustomObjectScript_12DE;
			break;
		case ID_CUSTOM_OBJECT_1289:
			return new CustomObjectScript_1289;
			break;
		case ID_CUSTOM_OBJECT_1290:
			return new CustomObjectScript_1290;
			break;
		case ID_CUSTOM_OBJECT_128E:
			return new CustomObjectScript_128E;
			break;
		case ID_CUSTOM_OBJECT_128C:
			return new CustomObjectScript_128C;
			break;
		case ID_CUSTOM_OBJECT_128A:
			return new CustomObjectScript_128A;
			break;
		case ID_CUSTOM_OBJECT_18A0:
			return new CustomObjectScript_18A0;
			break;
		case ID_CUSTOM_OBJECT_083D:
			return new CustomObjectScript_083D;
			break;
		case ID_CUSTOM_OBJECT_0B86:
			return new CustomObjectScript_0B86;
			break;
		case ID_CUSTOM_OBJECT_0B80:
			return new CustomObjectScript_0B80;
			break;
		case ID_CUSTOM_OBJECT_0B82:
			return new CustomObjectScript_0B82;
			break;
		case ID_CUSTOM_OBJECT_109F:
			return new CustomObjectScript_109F;
			break;
		case ID_CUSTOM_OBJECT_1153:
			return new CustomObjectScript_1153;
			break;
		case ID_CUSTOM_OBJECT_115E:
			return new CustomObjectScript_115E;
			break;
		case ID_CUSTOM_OBJECT_095F:
			return new CustomObjectScript_095F;
			break;
		case ID_CUSTOM_OBJECT_0960:
			return new CustomObjectScript_0960;
			break;
		case ID_CUSTOM_OBJECT_0961:
			return new CustomObjectScript_0961;
			break;
		case ID_TRIGGER_0012:
			return new TriggerScript_0012;
			break;
		case ID_TRIGGER_0022:
			return new TriggerScript_0022;
			break;
		case ID_TRIGGER_0011:
			return new TriggerScript_0011;
			break;
		case ID_TRIGGER_0023:
			return new TriggerScript_0023;
			break;
		case ID_TRIGGER_0000:
			return new TriggerScript_0000;
			break;
		case ID_TRIGGER_0021:
			return new TriggerScript_0021;
			break;
		case ID_TRIGGER_0010:
			return new TriggerScript_0010;
			break;
		case ID_TRIGGER_0002:
			return new TriggerScript_0002;
			break;
		case ID_TRIGGER_001E:
			return new TriggerScript_001E;
			break;
		case ID_TRIGGER_0003:
			return new TriggerScript_0003;
			break;
		case ID_TRIGGER_0004:
			return new TriggerScript_0004;
			break;
		case ID_TRIGGER_0005:
			return new TriggerScript_0005;
			break;
		case ID_TRIGGER_0006:
			return new TriggerScript_0006;
			break;
		case ID_TRIGGER_0007:
			return new TriggerScript_0007;
			break;
		case ID_TRIGGER_0008:
			return new TriggerScript_0008;
			break;
		case ID_TRIGGER_001F:
			return new TriggerScript_001F;
			break;
		case ID_TRIGGER_0020:
			return new TriggerScript_0020;
			break;
		case ID_TRIGGER_0025:
			return new TriggerScript_0025;
			break;
		case ID_TRIGGER_0024:
			return new TriggerScript_0024;
			break;
		case ID_TRIGGER_000C:
			return new TriggerScript_000C;
			break;
		case ID_TRIGGER_001D:
			return new TriggerScript_001D;
			break;
		case ID_TRIGGER_000D:
			return new TriggerScript_000D;
			break;
		case ID_TRIGGER_000E:
			return new TriggerScript_000E;
			break;
		case ID_TRIGGER_000F:
			return new TriggerScript_000F;
			break;
		case ID_TRIGGER_0014:
			return new TriggerScript_0014;
			break;
		case ID_TRIGGER_0017:
			return new TriggerScript_0017;
			break;
		case ID_TRIGGER_0016:
			return new TriggerScript_0016;
			break;
		case ID_TRIGGER_0018:
			return new TriggerScript_0018;
			break;
		case ID_TRIGGER_001C:
			return new TriggerScript_001C;
			break;
		case ID_TRIGGER_0019:
			return new TriggerScript_0019;
			break;
		case ID_TRIGGER_001A:
			return new TriggerScript_001A;
			break;
		case ID_TRIGGER_001B:
			return new TriggerScript_001B;
			break;
		default:
			mprintf(0,"SCRIPT: Illegal ID (%d)\n",id);
			break;
	}
	return NULL;
}

// =================
// DestroyInstance()
// =================
void STDCALL DestroyInstance(int id,void *ptr)
{
	switch(id) {
		case ID_LEVEL_0000:
			delete ((LevelScript_0000 *)ptr);
		case ID_CUSTOM_OBJECT_0B83:
			delete ((CustomObjectScript_0B83 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0B85:
			delete ((CustomObjectScript_0B85 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1140:
			delete ((CustomObjectScript_1140 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1941:
			delete ((CustomObjectScript_1941 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0943:
			delete ((CustomObjectScript_0943 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0942:
			delete ((CustomObjectScript_0942 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0950:
			delete ((CustomObjectScript_0950 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0951:
			delete ((CustomObjectScript_0951 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_093A:
			delete ((CustomObjectScript_093A *)ptr);
			break;
		case ID_CUSTOM_OBJECT_193D:
			delete ((CustomObjectScript_193D *)ptr);
			break;
		case ID_CUSTOM_OBJECT_093B:
			delete ((CustomObjectScript_093B *)ptr);
			break;
		case ID_CUSTOM_OBJECT_192E:
			delete ((CustomObjectScript_192E *)ptr);
			break;
		case ID_CUSTOM_OBJECT_093C:
			delete ((CustomObjectScript_093C *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1318:
			delete ((CustomObjectScript_1318 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1317:
			delete ((CustomObjectScript_1317 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_190B:
			delete ((CustomObjectScript_190B *)ptr);
			break;
		case ID_CUSTOM_OBJECT_6909:
			delete ((CustomObjectScript_6909 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_191C:
			delete ((CustomObjectScript_191C *)ptr);
			break;
		case ID_CUSTOM_OBJECT_111D:
			delete ((CustomObjectScript_111D *)ptr);
			break;
		case ID_CUSTOM_OBJECT_110F:
			delete ((CustomObjectScript_110F *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1194:
			delete ((CustomObjectScript_1194 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_11FA:
			delete ((CustomObjectScript_11FA *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0CB4:
			delete ((CustomObjectScript_0CB4 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_20B0:
			delete ((CustomObjectScript_20B0 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_136F:
			delete ((CustomObjectScript_136F *)ptr);
			break;
		case ID_CUSTOM_OBJECT_3090:
			delete ((CustomObjectScript_3090 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_30AE:
			delete ((CustomObjectScript_30AE *)ptr);
			break;
		case ID_CUSTOM_OBJECT_50FF:
			delete ((CustomObjectScript_50FF *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0987:
			delete ((CustomObjectScript_0987 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0989:
			delete ((CustomObjectScript_0989 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_10FA:
			delete ((CustomObjectScript_10FA *)ptr);
			break;
		case ID_CUSTOM_OBJECT_18FB:
			delete ((CustomObjectScript_18FB *)ptr);
			break;
		case ID_CUSTOM_OBJECT_10FC:
			delete ((CustomObjectScript_10FC *)ptr);
			break;
		case ID_CUSTOM_OBJECT_10F9:
			delete ((CustomObjectScript_10F9 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_10F8:
			delete ((CustomObjectScript_10F8 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_D08A:
			delete ((CustomObjectScript_D08A *)ptr);
			break;
		case ID_CUSTOM_OBJECT_2888:
			delete ((CustomObjectScript_2888 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_09FD:
			delete ((CustomObjectScript_09FD *)ptr);
			break;
		case ID_CUSTOM_OBJECT_48C5:
			delete ((CustomObjectScript_48C5 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_09FC:
			delete ((CustomObjectScript_09FC *)ptr);
			break;
		case ID_CUSTOM_OBJECT_08D6:
			delete ((CustomObjectScript_08D6 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_09FB:
			delete ((CustomObjectScript_09FB *)ptr);
			break;
		case ID_CUSTOM_OBJECT_08DF:
			delete ((CustomObjectScript_08DF *)ptr);
			break;
		case ID_CUSTOM_OBJECT_105C:
			delete ((CustomObjectScript_105C *)ptr);
			break;
		case ID_CUSTOM_OBJECT_08E8:
			delete ((CustomObjectScript_08E8 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_60EB:
			delete ((CustomObjectScript_60EB *)ptr);
			break;
		case ID_CUSTOM_OBJECT_28EC:
			delete ((CustomObjectScript_28EC *)ptr);
			break;
		case ID_CUSTOM_OBJECT_118B:
			delete ((CustomObjectScript_118B *)ptr);
			break;
		case ID_CUSTOM_OBJECT_118D:
			delete ((CustomObjectScript_118D *)ptr);
			break;
		case ID_CUSTOM_OBJECT_118C:
			delete ((CustomObjectScript_118C *)ptr);
			break;
		case ID_CUSTOM_OBJECT_098E:
			delete ((CustomObjectScript_098E *)ptr);
			break;
		case ID_CUSTOM_OBJECT_11F7:
			delete ((CustomObjectScript_11F7 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0983:
			delete ((CustomObjectScript_0983 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1BB9:
			delete ((CustomObjectScript_1BB9 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_13AD:
			delete ((CustomObjectScript_13AD *)ptr);
			break;
		case ID_CUSTOM_OBJECT_13AC:
			delete ((CustomObjectScript_13AC *)ptr);
			break;
		case ID_CUSTOM_OBJECT_13AB:
			delete ((CustomObjectScript_13AB *)ptr);
			break;
		case ID_CUSTOM_OBJECT_13AA:
			delete ((CustomObjectScript_13AA *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0A2E:
			delete ((CustomObjectScript_0A2E *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0A30:
			delete ((CustomObjectScript_0A30 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0A33:
			delete ((CustomObjectScript_0A33 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0982:
			delete ((CustomObjectScript_0982 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_12DF:
			delete ((CustomObjectScript_12DF *)ptr);
			break;
		case ID_CUSTOM_OBJECT_12E1:
			delete ((CustomObjectScript_12E1 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_12DE:
			delete ((CustomObjectScript_12DE *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1289:
			delete ((CustomObjectScript_1289 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1290:
			delete ((CustomObjectScript_1290 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_128E:
			delete ((CustomObjectScript_128E *)ptr);
			break;
		case ID_CUSTOM_OBJECT_128C:
			delete ((CustomObjectScript_128C *)ptr);
			break;
		case ID_CUSTOM_OBJECT_128A:
			delete ((CustomObjectScript_128A *)ptr);
			break;
		case ID_CUSTOM_OBJECT_18A0:
			delete ((CustomObjectScript_18A0 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_083D:
			delete ((CustomObjectScript_083D *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0B86:
			delete ((CustomObjectScript_0B86 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0B80:
			delete ((CustomObjectScript_0B80 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0B82:
			delete ((CustomObjectScript_0B82 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_109F:
			delete ((CustomObjectScript_109F *)ptr);
			break;
		case ID_CUSTOM_OBJECT_1153:
			delete ((CustomObjectScript_1153 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_115E:
			delete ((CustomObjectScript_115E *)ptr);
			break;
		case ID_CUSTOM_OBJECT_095F:
			delete ((CustomObjectScript_095F *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0960:
			delete ((CustomObjectScript_0960 *)ptr);
			break;
		case ID_CUSTOM_OBJECT_0961:
			delete ((CustomObjectScript_0961 *)ptr);
			break;
		case ID_TRIGGER_0012:
			delete ((TriggerScript_0012 *)ptr);
			break;
		case ID_TRIGGER_0022:
			delete ((TriggerScript_0022 *)ptr);
			break;
		case ID_TRIGGER_0011:
			delete ((TriggerScript_0011 *)ptr);
			break;
		case ID_TRIGGER_0023:
			delete ((TriggerScript_0023 *)ptr);
			break;
		case ID_TRIGGER_0000:
			delete ((TriggerScript_0000 *)ptr);
			break;
		case ID_TRIGGER_0021:
			delete ((TriggerScript_0021 *)ptr);
			break;
		case ID_TRIGGER_0010:
			delete ((TriggerScript_0010 *)ptr);
			break;
		case ID_TRIGGER_0002:
			delete ((TriggerScript_0002 *)ptr);
			break;
		case ID_TRIGGER_001E:
			delete ((TriggerScript_001E *)ptr);
			break;
		case ID_TRIGGER_0003:
			delete ((TriggerScript_0003 *)ptr);
			break;
		case ID_TRIGGER_0004:
			delete ((TriggerScript_0004 *)ptr);
			break;
		case ID_TRIGGER_0005:
			delete ((TriggerScript_0005 *)ptr);
			break;
		case ID_TRIGGER_0006:
			delete ((TriggerScript_0006 *)ptr);
			break;
		case ID_TRIGGER_0007:
			delete ((TriggerScript_0007 *)ptr);
			break;
		case ID_TRIGGER_0008:
			delete ((TriggerScript_0008 *)ptr);
			break;
		case ID_TRIGGER_001F:
			delete ((TriggerScript_001F *)ptr);
			break;
		case ID_TRIGGER_0020:
			delete ((TriggerScript_0020 *)ptr);
			break;
		case ID_TRIGGER_0025:
			delete ((TriggerScript_0025 *)ptr);
			break;
		case ID_TRIGGER_0024:
			delete ((TriggerScript_0024 *)ptr);
			break;
		case ID_TRIGGER_000C:
			delete ((TriggerScript_000C *)ptr);
			break;
		case ID_TRIGGER_001D:
			delete ((TriggerScript_001D *)ptr);
			break;
		case ID_TRIGGER_000D:
			delete ((TriggerScript_000D *)ptr);
			break;
		case ID_TRIGGER_000E:
			delete ((TriggerScript_000E *)ptr);
			break;
		case ID_TRIGGER_000F:
			delete ((TriggerScript_000F *)ptr);
			break;
		case ID_TRIGGER_0014:
			delete ((TriggerScript_0014 *)ptr);
			break;
		case ID_TRIGGER_0017:
			delete ((TriggerScript_0017 *)ptr);
			break;
		case ID_TRIGGER_0016:
			delete ((TriggerScript_0016 *)ptr);
			break;
		case ID_TRIGGER_0018:
			delete ((TriggerScript_0018 *)ptr);
			break;
		case ID_TRIGGER_001C:
			delete ((TriggerScript_001C *)ptr);
			break;
		case ID_TRIGGER_0019:
			delete ((TriggerScript_0019 *)ptr);
			break;
		case ID_TRIGGER_001A:
			delete ((TriggerScript_001A *)ptr);
			break;
		case ID_TRIGGER_001B:
			delete ((TriggerScript_001B *)ptr);
			break;
		default:
			mprintf(0,"SCRIPT: Illegal ID (%d)\n",id);
			break;
	}
}

// ===================
// CallInstanceEvent()
// ===================
short STDCALL CallInstanceEvent(int id,void *ptr,int event,tOSIRISEventInfo *data)
{
	switch(id) {
		case ID_LEVEL_0000:
		case ID_CUSTOM_OBJECT_0B83:
		case ID_CUSTOM_OBJECT_0B85:
		case ID_CUSTOM_OBJECT_1140:
		case ID_CUSTOM_OBJECT_1941:
		case ID_CUSTOM_OBJECT_0943:
		case ID_CUSTOM_OBJECT_0942:
		case ID_CUSTOM_OBJECT_0950:
		case ID_CUSTOM_OBJECT_0951:
		case ID_CUSTOM_OBJECT_093A:
		case ID_CUSTOM_OBJECT_193D:
		case ID_CUSTOM_OBJECT_093B:
		case ID_CUSTOM_OBJECT_192E:
		case ID_CUSTOM_OBJECT_093C:
		case ID_CUSTOM_OBJECT_1318:
		case ID_CUSTOM_OBJECT_1317:
		case ID_CUSTOM_OBJECT_190B:
		case ID_CUSTOM_OBJECT_6909:
		case ID_CUSTOM_OBJECT_191C:
		case ID_CUSTOM_OBJECT_111D:
		case ID_CUSTOM_OBJECT_110F:
		case ID_CUSTOM_OBJECT_1194:
		case ID_CUSTOM_OBJECT_11FA:
		case ID_CUSTOM_OBJECT_0CB4:
		case ID_CUSTOM_OBJECT_20B0:
		case ID_CUSTOM_OBJECT_136F:
		case ID_CUSTOM_OBJECT_3090:
		case ID_CUSTOM_OBJECT_30AE:
		case ID_CUSTOM_OBJECT_50FF:
		case ID_CUSTOM_OBJECT_0987:
		case ID_CUSTOM_OBJECT_0989:
		case ID_CUSTOM_OBJECT_10FA:
		case ID_CUSTOM_OBJECT_18FB:
		case ID_CUSTOM_OBJECT_10FC:
		case ID_CUSTOM_OBJECT_10F9:
		case ID_CUSTOM_OBJECT_10F8:
		case ID_CUSTOM_OBJECT_D08A:
		case ID_CUSTOM_OBJECT_2888:
		case ID_CUSTOM_OBJECT_09FD:
		case ID_CUSTOM_OBJECT_48C5:
		case ID_CUSTOM_OBJECT_09FC:
		case ID_CUSTOM_OBJECT_08D6:
		case ID_CUSTOM_OBJECT_09FB:
		case ID_CUSTOM_OBJECT_08DF:
		case ID_CUSTOM_OBJECT_105C:
		case ID_CUSTOM_OBJECT_08E8:
		case ID_CUSTOM_OBJECT_60EB:
		case ID_CUSTOM_OBJECT_28EC:
		case ID_CUSTOM_OBJECT_118B:
		case ID_CUSTOM_OBJECT_118D:
		case ID_CUSTOM_OBJECT_118C:
		case ID_CUSTOM_OBJECT_098E:
		case ID_CUSTOM_OBJECT_11F7:
		case ID_CUSTOM_OBJECT_0983:
		case ID_CUSTOM_OBJECT_1BB9:
		case ID_CUSTOM_OBJECT_13AD:
		case ID_CUSTOM_OBJECT_13AC:
		case ID_CUSTOM_OBJECT_13AB:
		case ID_CUSTOM_OBJECT_13AA:
		case ID_CUSTOM_OBJECT_0A2E:
		case ID_CUSTOM_OBJECT_0A30:
		case ID_CUSTOM_OBJECT_0A33:
		case ID_CUSTOM_OBJECT_0982:
		case ID_CUSTOM_OBJECT_12DF:
		case ID_CUSTOM_OBJECT_12E1:
		case ID_CUSTOM_OBJECT_12DE:
		case ID_CUSTOM_OBJECT_1289:
		case ID_CUSTOM_OBJECT_1290:
		case ID_CUSTOM_OBJECT_128E:
		case ID_CUSTOM_OBJECT_128C:
		case ID_CUSTOM_OBJECT_128A:
		case ID_CUSTOM_OBJECT_18A0:
		case ID_CUSTOM_OBJECT_083D:
		case ID_CUSTOM_OBJECT_0B86:
		case ID_CUSTOM_OBJECT_0B80:
		case ID_CUSTOM_OBJECT_0B82:
		case ID_CUSTOM_OBJECT_109F:
		case ID_CUSTOM_OBJECT_1153:
		case ID_CUSTOM_OBJECT_115E:
		case ID_CUSTOM_OBJECT_095F:
		case ID_CUSTOM_OBJECT_0960:
		case ID_CUSTOM_OBJECT_0961:
		case ID_TRIGGER_0012:
		case ID_TRIGGER_0022:
		case ID_TRIGGER_0011:
		case ID_TRIGGER_0023:
		case ID_TRIGGER_0000:
		case ID_TRIGGER_0021:
		case ID_TRIGGER_0010:
		case ID_TRIGGER_0002:
		case ID_TRIGGER_001E:
		case ID_TRIGGER_0003:
		case ID_TRIGGER_0004:
		case ID_TRIGGER_0005:
		case ID_TRIGGER_0006:
		case ID_TRIGGER_0007:
		case ID_TRIGGER_0008:
		case ID_TRIGGER_001F:
		case ID_TRIGGER_0020:
		case ID_TRIGGER_0025:
		case ID_TRIGGER_0024:
		case ID_TRIGGER_000C:
		case ID_TRIGGER_001D:
		case ID_TRIGGER_000D:
		case ID_TRIGGER_000E:
		case ID_TRIGGER_000F:
		case ID_TRIGGER_0014:
		case ID_TRIGGER_0017:
		case ID_TRIGGER_0016:
		case ID_TRIGGER_0018:
		case ID_TRIGGER_001C:
		case ID_TRIGGER_0019:
		case ID_TRIGGER_001A:
		case ID_TRIGGER_001B:
			return ((BaseScript *)ptr)->CallEvent(event,data);
			break;
		default:
			mprintf(0,"SCRIPT: Illegal ID (%d)\n",id);
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

// ==================
// SaveRestoreState()
// ==================
int STDCALL SaveRestoreState( void *file_ptr, ubyte saving_state )
{
	return 0;
}

// ====================
// GetTriggerScriptID()
// ====================
int	STDCALL GetTriggerScriptID(int trigger_room,int trigger_face)
{
	if(trigger_room==Trigger_rooms[0] && trigger_face==Trigger_faces[0])
		return ID_TRIGGER_0012;
 
	if(trigger_room==Trigger_rooms[1] && trigger_face==Trigger_faces[1])
		return ID_TRIGGER_0022;
 
	if(trigger_room==Trigger_rooms[2] && trigger_face==Trigger_faces[2])
		return ID_TRIGGER_0011;
 
	if(trigger_room==Trigger_rooms[3] && trigger_face==Trigger_faces[3])
		return ID_TRIGGER_0023;
 
	if(trigger_room==Trigger_rooms[4] && trigger_face==Trigger_faces[4])
		return ID_TRIGGER_0000;
 
	if(trigger_room==Trigger_rooms[5] && trigger_face==Trigger_faces[5])
		return ID_TRIGGER_0021;
 
	if(trigger_room==Trigger_rooms[6] && trigger_face==Trigger_faces[6])
		return ID_TRIGGER_0010;
 
	if(trigger_room==Trigger_rooms[7] && trigger_face==Trigger_faces[7])
		return ID_TRIGGER_0002;
 
	if(trigger_room==Trigger_rooms[8] && trigger_face==Trigger_faces[8])
		return ID_TRIGGER_001E;
 
	if(trigger_room==Trigger_rooms[9] && trigger_face==Trigger_faces[9])
		return ID_TRIGGER_0003;
 
	if(trigger_room==Trigger_rooms[10] && trigger_face==Trigger_faces[10])
		return ID_TRIGGER_0004;
 
	if(trigger_room==Trigger_rooms[11] && trigger_face==Trigger_faces[11])
		return ID_TRIGGER_0005;
 
	if(trigger_room==Trigger_rooms[12] && trigger_face==Trigger_faces[12])
		return ID_TRIGGER_0006;
 
	if(trigger_room==Trigger_rooms[13] && trigger_face==Trigger_faces[13])
		return ID_TRIGGER_0007;
 
	if(trigger_room==Trigger_rooms[14] && trigger_face==Trigger_faces[14])
		return ID_TRIGGER_0008;
 
	if(trigger_room==Trigger_rooms[15] && trigger_face==Trigger_faces[15])
		return ID_TRIGGER_001F;
 
	if(trigger_room==Trigger_rooms[16] && trigger_face==Trigger_faces[16])
		return ID_TRIGGER_0020;
 
	if(trigger_room==Trigger_rooms[17] && trigger_face==Trigger_faces[17])
		return ID_TRIGGER_0025;
 
	if(trigger_room==Trigger_rooms[18] && trigger_face==Trigger_faces[18])
		return ID_TRIGGER_0024;
 
	if(trigger_room==Trigger_rooms[19] && trigger_face==Trigger_faces[19])
		return ID_TRIGGER_000C;
 
	if(trigger_room==Trigger_rooms[20] && trigger_face==Trigger_faces[20])
		return ID_TRIGGER_001D;
 
	if(trigger_room==Trigger_rooms[21] && trigger_face==Trigger_faces[21])
		return ID_TRIGGER_000D;
 
	if(trigger_room==Trigger_rooms[22] && trigger_face==Trigger_faces[22])
		return ID_TRIGGER_000E;
 
	if(trigger_room==Trigger_rooms[23] && trigger_face==Trigger_faces[23])
		return ID_TRIGGER_000F;
 
	if(trigger_room==Trigger_rooms[24] && trigger_face==Trigger_faces[24])
		return ID_TRIGGER_0014;
 
	if(trigger_room==Trigger_rooms[25] && trigger_face==Trigger_faces[25])
		return ID_TRIGGER_0017;
 
	if(trigger_room==Trigger_rooms[26] && trigger_face==Trigger_faces[26])
		return ID_TRIGGER_0016;
 
	if(trigger_room==Trigger_rooms[27] && trigger_face==Trigger_faces[27])
		return ID_TRIGGER_0018;
 
	if(trigger_room==Trigger_rooms[28] && trigger_face==Trigger_faces[28])
		return ID_TRIGGER_001C;
 
	if(trigger_room==Trigger_rooms[29] && trigger_face==Trigger_faces[29])
		return ID_TRIGGER_0019;
 
	if(trigger_room==Trigger_rooms[30] && trigger_face==Trigger_faces[30])
		return ID_TRIGGER_001A;
 
	if(trigger_room==Trigger_rooms[31] && trigger_face==Trigger_faces[31])
		return ID_TRIGGER_001B;
 
	return -1;
}

// =================
// GetCOScriptList()
// =================
int	STDCALL GetCOScriptList( int **list, int **id_list )
{
	static int cust_handle_list[81];
	static int cust_id_list[81] = { 
		ID_CUSTOM_OBJECT_0B83,
		ID_CUSTOM_OBJECT_0B85,
		ID_CUSTOM_OBJECT_1140,
		ID_CUSTOM_OBJECT_1941,
		ID_CUSTOM_OBJECT_0943,
		ID_CUSTOM_OBJECT_0942,
		ID_CUSTOM_OBJECT_0950,
		ID_CUSTOM_OBJECT_0951,
		ID_CUSTOM_OBJECT_093A,
		ID_CUSTOM_OBJECT_193D,
		ID_CUSTOM_OBJECT_093B,
		ID_CUSTOM_OBJECT_192E,
		ID_CUSTOM_OBJECT_093C,
		ID_CUSTOM_OBJECT_1318,
		ID_CUSTOM_OBJECT_1317,
		ID_CUSTOM_OBJECT_190B,
		ID_CUSTOM_OBJECT_6909,
		ID_CUSTOM_OBJECT_191C,
		ID_CUSTOM_OBJECT_111D,
		ID_CUSTOM_OBJECT_110F,
		ID_CUSTOM_OBJECT_1194,
		ID_CUSTOM_OBJECT_11FA,
		ID_CUSTOM_OBJECT_0CB4,
		ID_CUSTOM_OBJECT_20B0,
		ID_CUSTOM_OBJECT_136F,
		ID_CUSTOM_OBJECT_3090,
		ID_CUSTOM_OBJECT_30AE,
		ID_CUSTOM_OBJECT_50FF,
		ID_CUSTOM_OBJECT_0987,
		ID_CUSTOM_OBJECT_0989,
		ID_CUSTOM_OBJECT_10FA,
		ID_CUSTOM_OBJECT_18FB,
		ID_CUSTOM_OBJECT_10FC,
		ID_CUSTOM_OBJECT_10F9,
		ID_CUSTOM_OBJECT_10F8,
		ID_CUSTOM_OBJECT_D08A,
		ID_CUSTOM_OBJECT_2888,
		ID_CUSTOM_OBJECT_09FD,
		ID_CUSTOM_OBJECT_48C5,
		ID_CUSTOM_OBJECT_09FC,
		ID_CUSTOM_OBJECT_08D6,
		ID_CUSTOM_OBJECT_09FB,
		ID_CUSTOM_OBJECT_08DF,
		ID_CUSTOM_OBJECT_105C,
		ID_CUSTOM_OBJECT_08E8,
		ID_CUSTOM_OBJECT_60EB,
		ID_CUSTOM_OBJECT_28EC,
		ID_CUSTOM_OBJECT_118B,
		ID_CUSTOM_OBJECT_118D,
		ID_CUSTOM_OBJECT_118C,
		ID_CUSTOM_OBJECT_098E,
		ID_CUSTOM_OBJECT_11F7,
		ID_CUSTOM_OBJECT_0983,
		ID_CUSTOM_OBJECT_1BB9,
		ID_CUSTOM_OBJECT_13AD,
		ID_CUSTOM_OBJECT_13AC,
		ID_CUSTOM_OBJECT_13AB,
		ID_CUSTOM_OBJECT_13AA,
		ID_CUSTOM_OBJECT_0A2E,
		ID_CUSTOM_OBJECT_0A30,
		ID_CUSTOM_OBJECT_0A33,
		ID_CUSTOM_OBJECT_0982,
		ID_CUSTOM_OBJECT_12DF,
		ID_CUSTOM_OBJECT_12E1,
		ID_CUSTOM_OBJECT_12DE,
		ID_CUSTOM_OBJECT_1289,
		ID_CUSTOM_OBJECT_1290,
		ID_CUSTOM_OBJECT_128E,
		ID_CUSTOM_OBJECT_128C,
		ID_CUSTOM_OBJECT_128A,
		ID_CUSTOM_OBJECT_18A0,
		ID_CUSTOM_OBJECT_083D,
		ID_CUSTOM_OBJECT_0B86,
		ID_CUSTOM_OBJECT_0B80,
		ID_CUSTOM_OBJECT_0B82,
		ID_CUSTOM_OBJECT_109F,
		ID_CUSTOM_OBJECT_1153,
		ID_CUSTOM_OBJECT_115E,
		ID_CUSTOM_OBJECT_095F,
		ID_CUSTOM_OBJECT_0960,
		ID_CUSTOM_OBJECT_0961
	};
 
	// Fill in the custom handle list
	cust_handle_list[0]=Object_handles[24];
	cust_handle_list[1]=Object_handles[27];
	cust_handle_list[2]=Object_handles[30];
	cust_handle_list[3]=Object_handles[31];
	cust_handle_list[4]=Object_handles[33];
	cust_handle_list[5]=Object_handles[32];
	cust_handle_list[6]=Object_handles[34];
	cust_handle_list[7]=Object_handles[35];
	cust_handle_list[8]=Object_handles[37];
	cust_handle_list[9]=Object_handles[36];
	cust_handle_list[10]=Object_handles[38];
	cust_handle_list[11]=Object_handles[39];
	cust_handle_list[12]=Object_handles[40];
	cust_handle_list[13]=Object_handles[47];
	cust_handle_list[14]=Object_handles[48];
	cust_handle_list[15]=Object_handles[50];
	cust_handle_list[16]=Object_handles[51];
	cust_handle_list[17]=Object_handles[52];
	cust_handle_list[18]=Object_handles[53];
	cust_handle_list[19]=Object_handles[49];
	cust_handle_list[20]=Object_handles[54];
	cust_handle_list[21]=Object_handles[12];
	cust_handle_list[22]=Object_handles[23];
	cust_handle_list[23]=Object_handles[76];
	cust_handle_list[24]=Object_handles[78];
	cust_handle_list[25]=Object_handles[80];
	cust_handle_list[26]=Object_handles[81];
	cust_handle_list[27]=Object_handles[83];
	cust_handle_list[28]=Object_handles[85];
	cust_handle_list[29]=Object_handles[87];
	cust_handle_list[30]=Object_handles[88];
	cust_handle_list[31]=Object_handles[89];
	cust_handle_list[32]=Object_handles[90];
	cust_handle_list[33]=Object_handles[91];
	cust_handle_list[34]=Object_handles[93];
	cust_handle_list[35]=Object_handles[94];
	cust_handle_list[36]=Object_handles[92];
	cust_handle_list[37]=Object_handles[18];
	cust_handle_list[38]=Object_handles[97];
	cust_handle_list[39]=Object_handles[17];
	cust_handle_list[40]=Object_handles[98];
	cust_handle_list[41]=Object_handles[16];
	cust_handle_list[42]=Object_handles[99];
	cust_handle_list[43]=Object_handles[15];
	cust_handle_list[44]=Object_handles[100];
	cust_handle_list[45]=Object_handles[10];
	cust_handle_list[46]=Object_handles[11];
	cust_handle_list[47]=Object_handles[104];
	cust_handle_list[48]=Object_handles[105];
	cust_handle_list[49]=Object_handles[106];
	cust_handle_list[50]=Object_handles[107];
	cust_handle_list[51]=Object_handles[20];
	cust_handle_list[52]=Object_handles[19];
	cust_handle_list[53]=Object_handles[154];
	cust_handle_list[54]=Object_handles[155];
	cust_handle_list[55]=Object_handles[156];
	cust_handle_list[56]=Object_handles[157];
	cust_handle_list[57]=Object_handles[158];
	cust_handle_list[58]=Object_handles[164];
	cust_handle_list[59]=Object_handles[166];
	cust_handle_list[60]=Object_handles[21];
	cust_handle_list[61]=Object_handles[22];
	cust_handle_list[62]=Object_handles[174];
	cust_handle_list[63]=Object_handles[175];
	cust_handle_list[64]=Object_handles[176];
	cust_handle_list[65]=Object_handles[173];
	cust_handle_list[66]=Object_handles[169];
	cust_handle_list[67]=Object_handles[170];
	cust_handle_list[68]=Object_handles[171];
	cust_handle_list[69]=Object_handles[172];
	cust_handle_list[70]=Object_handles[178];
	cust_handle_list[71]=Object_handles[184];
	cust_handle_list[72]=Object_handles[205];
	cust_handle_list[73]=Object_handles[207];
	cust_handle_list[74]=Object_handles[209];
	cust_handle_list[75]=Object_handles[210];
	cust_handle_list[76]=Object_handles[211];
	cust_handle_list[77]=Object_handles[216];
	cust_handle_list[78]=Object_handles[217];
	cust_handle_list[79]=Object_handles[95];
	cust_handle_list[80]=Object_handles[96];

	*list = cust_handle_list;
	*id_list = cust_id_list;

	return 81;
}

//=======================
// Script Implementation 
//=======================

BaseScript::BaseScript()
{
}

BaseScript::~BaseScript()
{
}

short BaseScript::CallEvent(int event,tOSIRISEventInfo *data)
{
	mprintf(0,"BaseScript::CallEvent()\n");
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short LevelScript_0000::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_SAVESTATE:
			{
				tOSIRISEVTSAVESTATE *event_data=&data->evt_savestate;
	
				SaveGlobalActionCtrs(event_data->fileptr);
				dfSave(event_data->fileptr);
#ifdef ENABLE_CUSTOM_SAVE_AND_RESTORE
				dsCustomSave(event_data->fileptr);
#endif
			}
			break;
		case EVT_RESTORESTATE:
			{
				tOSIRISEVTRESTORESTATE *event_data=&data->evt_restorestate;
	
				RestoreGlobalActionCtrs(event_data->fileptr);
				dfRestore(event_data->fileptr);
#ifdef ENABLE_CUSTOM_SAVE_AND_RESTORE
				dsCustomRestore(event_data->fileptr);
#endif
			}
			break;
		case EVT_INTERVAL:
			{
				tOSIRISEVTINTERVAL *event_data=&data->evt_interval;
 
				// Script 013: Level INIT (Inventory)
				if((ScriptActionCtr_013 < 1) && (1))
				{
					aAddObjectToInventoryNamed(Object_handles[23], qPlayerClosest(Object_handles[23], -1), Message_strings[0], 0);
					
					// Increment the script action counter
					if(ScriptActionCtr_013 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_013++;
				}
 
				// Script 042: Level FRAME (Gravity Room)
				if(1)
				{
					cUpdateGravityRoomBoxStates(1);
					cUpdateGravityRoomBoxStates(2);
					
					// Increment the script action counter
					if(ScriptActionCtr_042 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_042++;
				}
 
				// Script 014: Level FRAME (Switch Manager)
				if(1)
				{
					if(qUserFlag(3)==true)
					{
						aUserFlagSet(3, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_014 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_014++;
				}
			}
			break;
		case EVT_LEVELSTART:
			{
				tOSIRISEVTLEVELSTART *event_data=&data->evt_levelstart;
 
				ClearGlobalActionCtrs();
				dfInit();
 
				// Script 000: Level INIT
				if(1)
				{
					aObjMakeInvuln(Object_handles[0], 50000);
					aObjMakeInvuln(Object_handles[1], 50000);
					aUserVarSet(23, 3.000000f);
					aObjGhostSet(1, Object_handles[2]);
					aObjGhostSet(1, Object_handles[3]);
					aObjGhostSet(1, Object_handles[4]);
					aAISetState(0, Object_handles[5]);
					aAISetState(0, Object_handles[6]);
					aObjSetLightingDist(Object_handles[5], 10.000000f);
					aObjSetLightingDist(Object_handles[6], 10.000000f);
					aRoomSetWind(Room_indexes[0], 0.000000f, -1.000000f, 0.850000f, 5.000000f);
					aUserVarSet(0, 0.000000f);
					aUserFlagSet(0, 0);
					aUserFlagSet(1, 0);
					aUserFlagSet(19, 0);
					aUserFlagSet(3, 0);
					aUserFlagSet(28, 0);
					aUserFlagSet(29, 0);
					aUserFlagSet(30, 0);
					aUserFlagSet(18, 0);
					aUserFlagSet(16, 0);
					aUserFlagSet(16, 0);
					aObjGhostSet(1, Object_handles[7]);
					aUserFlagSet(20, 0);
					aMatcenSetState(1, Matcen_indexes[0]);
					aUserFlagSet(21, 0);
					aAISetState(0, Object_handles[8]);
					aAISetState(0, Object_handles[9]);
					aObjGhostSet(1, Object_handles[8]);
					aObjGhostSet(1, Object_handles[9]);
					aRoomSetWind(Room_indexes[1], 0.000000f, -0.800000f, 0.200000f, 15.000000f);
					aRoomSetWind(Room_indexes[2], 0.000000f, -0.800000f, 0.200000f, 15.000000f);
					aRoomSetWind(Room_indexes[3], 0.000000f, -0.800000f, 0.200000f, 15.000000f);
					aRoomSetWind(Room_indexes[4], 0.000000f, -0.800000f, 0.200000f, 15.000000f);
					aRoomSetWind(Room_indexes[5], 0.000000f, -0.800000f, 0.200000f, 15.000000f);
					aRoomSetWind(Room_indexes[6], -0.200000f, -0.800000f, 0.200000f, 15.000000f);
					aMatcenSetState(1, Matcen_indexes[1]);
					aMatcenSetState(1, Matcen_indexes[2]);
					aMusicSetRegionAll(0);
					aObjPlayAnim(Object_handles[10], 0, 2, 1.000000f, 1);
					aObjPlayAnim(Object_handles[11], 0, 2, 1.000000f, 1);
					aObjPlayAnim(Object_handles[0], 0, 2, 1.000000f, 1);
					aObjPlayAnim(Object_handles[1], 0, 2, 1.000000f, 1);
					aUserVarSet(19, 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_000 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_000++;
				}
 
				// Script 209: Level INIT (Warehouse)
				if(1)
				{
					aAISetState(0, Object_handles[12]);
					
					// Increment the script action counter
					if(ScriptActionCtr_209 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_209++;
				}
 
				// Script 102: Level INIT (Junction Spewers)
				if(1)
				{
					aUserVarSet(20, 0.000000f);
					aSetLevelTimer(1.000000f, 41);
					aSetLevelTimer(2.000000f, 42);
					
					// Increment the script action counter
					if(ScriptActionCtr_102 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_102++;
				}
 
				// Script 031: Level INIT (Hazard Gadgets)
				if(1)
				{
					aAIGoalFollowPathSimple(Object_handles[13], Path_indexes[0], 3149828, -1, 3);
					aAIGoalFollowPathSimple(Object_handles[14], Path_indexes[1], 11538436, -1, 3);
					aAIGoalSetCircleDistance(Object_handles[13], 3, 0.000000f);
					aAIGoalSetCircleDistance(Object_handles[14], 3, 0.000000f);
					aAISetState(0, Object_handles[13]);
					aAISetState(0, Object_handles[14]);
					
					// Increment the script action counter
					if(ScriptActionCtr_031 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_031++;
				}
 
				// Script 036: Level INIT (Gravity Room)
				if(1)
				{
					cInitGravityRooms();
					aUserVarSet(2, 1.000000f);
					aUserVarSet(3, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_036 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_036++;
				}
 
				// Script 068: Level INIT (Fan Puzzle)
				if(1)
				{
					aRoomSetWind(Room_indexes[7], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[8], 0.000000f, -1.000000f, 0.000000f, 2.000000f);
					aRoomSetWind(Room_indexes[9], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[10], 0.000000f, -1.000000f, 0.000000f, 2.000000f);
					aRoomSetWind(Room_indexes[11], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[12], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[13], 0.000000f, -1.000000f, 0.000000f, 2.000000f);
					aRoomSetWind(Room_indexes[14], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[15], 0.000000f, -1.000000f, 0.000000f, 2.000000f);
					aRoomSetWind(Room_indexes[16], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aUserFlagSet(8, 1);
					aUserFlagSet(9, 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_068 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_068++;
				}
 
				// Script 050: Level INIT (Shark Puzzle)
				if(1)
				{
					cOffAIForSharksInRoom(0, 0);
					cOffAIForSharksInRoom(0, 1);
					cOffAIForSharksInRoom(0, 2);
					cOffAIForSharksInRoom(0, 3);
					aAISetState(0, Object_handles[15]);
					aAISetState(0, Object_handles[16]);
					aAISetState(0, Object_handles[17]);
					aAISetState(0, Object_handles[18]);
					aUserFlagSet(4, 0);
					aUserFlagSet(5, 0);
					aUserFlagSet(6, 0);
					aUserFlagSet(7, 0);
					aUserFlagSet(24, 0);
					aUserFlagSet(25, 0);
					aUserFlagSet(26, 0);
					aUserFlagSet(27, 0);
					
					// Increment the script action counter
					if(ScriptActionCtr_050 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_050++;
				}
 
				// Script 056: Level INIT (Captain Gadget)
				if(1)
				{
					aObjMakeInvuln(Object_handles[19], 50000);
					aPhysFlags(1, 58720256, Object_handles[19]);
					aAISetState(0, Object_handles[19]);
					aObjGhostSet(1, Object_handles[20]);
					aObjGhostSet(1, Object_handles[21]);
					aUserVarSet(18, 0.000000f);
					aAISetMode(Object_handles[22], 4);
					aAISetMaxSpeed(Object_handles[22], 0.000000f);
					aUserVarSet(21, 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_056 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_056++;
				}
 
				// Script 078: Level INIT (Tesla Coil)
				if(1)
				{
					aUserVarSet(8, 16.000000f);
					aUserVarSet(6, 0.150000f);
					aUserVarSet(7, 0.250000f);
					aUserVarSet(5, 0.150000f);
					aUserVarSet(4, 0.400000f);
					aUserVarSet(9, 0.100000f);
					aUserVarSet(10, 0.500000f);
					aUserFlagSet(10, 1);
					aUserVarSet(11, -1.000000f);
					aUserVarSet(13, 9.000000f);
					aUserVarSet(12, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_078 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_078++;
				}
 
				// Script 104: Level INIT (The Poles)
				if(1)
				{
					aUserFlagSet(11, 0);
					aUserFlagSet(12, 0);
					aUserFlagSet(13, 0);
					aUserVarSet(15, 45.000000f);
					aUserFlagSet(14, 0);
					aUserFlagSet(15, 0);
					aUserFlagSet(23, 0);
					if(qGetDifficulty()==0)
					{
						aUserVarSet(15, qMathMulFloat(qUserVarValue(15), 2.000000f));
					}
					else {
						if(qGetDifficulty()==1)
						{
							aUserVarSet(15, qMathMulFloat(qUserVarValue(15), 1.500000f));
						}
						else {
							if(qGetDifficulty()>=2)
							{
								aUserVarSet(15, qMathMulFloat(qUserVarValue(15), 1.000000f));
							}
							else {
							}
						}
					}
					aSetLevelTimer(1.000000f, 31);
					aSetLevelTimer(1.000000f, 32);
					aRoomSetWind(Room_indexes[17], 0.000000f, 1.000000f, 0.000000f, 13.000000f);
					aRoomSetWind(Room_indexes[18], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[19], 0.000000f, -1.000000f, 0.000000f, 12.000000f);
					aRoomSetWind(Room_indexes[20], 0.000000f, -1.000000f, 0.000000f, 15.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_104 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_104++;
				}
 
				// Script 136: Level INIT (End Sequence)
				if(1)
				{
					aDoorLockUnlock(1, Door_handles[0]);
					
					// Increment the script action counter
					if(ScriptActionCtr_136 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_136++;
				}
 
				// Script 132: Level START (Intro Cinematic)
				if(1==true)
				{
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicText(0.400000f, 0.800000f);
					aComplexCinematicCameraOnPath(Path_indexes[2]);
					aComplexCinematicTrack(Object_handles[24], 0.000000f, 1.000000f);
					aComplexCinematicEndTrans(3);
					aComplexCinematicEnd(Message_strings[1], 10.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_132 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_132++;
				}
 
				// Script 095: Captain Gadget: Warming up
				if((ScriptActionCtr_095 < 1) && (1))
				{
					aAISetMaxSpeed(Object_handles[19], 0.000000f);
					aObjMakeInvuln(Object_handles[19], 50000);
					
					// Increment the script action counter
					if(ScriptActionCtr_095 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_095++;
				}
 
				// Script 188: First Mate: INIT
				if((ScriptActionCtr_188 < 1) && (1))
				{
					aCloakObject(Object_handles[169], 99999.000000f);
					aCloakObject(Object_handles[170], 99999.000000f);
					aCloakObject(Object_handles[171], 99999.000000f);
					aCloakObject(Object_handles[172], 99999.000000f);
					aCloakObject(Object_handles[173], 99999.000000f);
					aPhysFlags(1, 58722304, Object_handles[22]);
					aObjMakeInvuln(Object_handles[22], 99999);
					aAISetTeam(0, Object_handles[173]);
					aAISetTeam(0, Object_handles[172]);
					aAISetTeam(0, Object_handles[171]);
					aAISetTeam(0, Object_handles[170]);
					aAISetTeam(0, Object_handles[169]);
					aObjMakeInvuln(Object_handles[173], 99999);
					aObjMakeInvuln(Object_handles[172], 99999);
					aObjMakeInvuln(Object_handles[171], 99999);
					aObjMakeInvuln(Object_handles[170], 99999);
					aObjMakeInvuln(Object_handles[169], 99999);
					aAISetMaxSpeed(Object_handles[169], 0.000000f);
					aAISetMaxSpeed(Object_handles[170], 0.000000f);
					aAISetMaxSpeed(Object_handles[171], 0.000000f);
					aAISetMaxSpeed(Object_handles[172], 0.000000f);
					aAISetMaxSpeed(Object_handles[173], 0.000000f);
					aPhysFlags(1, 58787840, Object_handles[169]);
					aPhysFlags(1, 58787840, Object_handles[170]);
					aPhysFlags(1, 58787840, Object_handles[171]);
					aPhysFlags(1, 58787840, Object_handles[172]);
					aPhysFlags(1, 58787840, Object_handles[173]);
					aObjGhostSet(1, Object_handles[173]);
					aObjGhostSet(1, Object_handles[172]);
					aObjGhostSet(1, Object_handles[171]);
					aObjGhostSet(1, Object_handles[170]);
					aObjGhostSet(1, Object_handles[169]);
					
					// Increment the script action counter
					if(ScriptActionCtr_188 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_188++;
				}
 
				// Script 126: Showers
				if(1)
				{
					aTurnOnSpew(Object_handles[189], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.200000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[190], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[191], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[192], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[193], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[194], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[195], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[196], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[197], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[198], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[199], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[200], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[201], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					aTurnOnSpew(Object_handles[202], -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.500000f, -1.000000f, 3.000000f, 20.000000f, 1, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_126 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_126++;
				}
 
				// Script 156: BothWaysWind
				if(1)
				{
					aRoomSetWind(Room_indexes[54], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[55], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[56], 0.000000f, 1.000000f, 0.000000f, 10.000000f);
					aRoomSetWind(Room_indexes[57], 0.000000f, 1.000000f, 0.000000f, 10.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_156 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_156++;
				}
 
				// Script 164: Arobics
				if(1)
				{
					aAISetMode(Object_handles[218], 4);
					aAISetMode(Object_handles[219], 4);
					aAISetMode(Object_handles[220], 4);
					aAISetMode(Object_handles[221], 4);
					aAISetMode(Object_handles[222], 4);
					aAISetMode(Object_handles[223], 4);
					aAISetMode(Object_handles[224], 4);
					aAISetMode(Object_handles[225], 4);
					aObjPlayAnim(Object_handles[218], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[219], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[220], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[221], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[222], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[223], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[224], 26, 54, 3.000000f, 1);
					aObjPlayAnim(Object_handles[225], 26, 54, 3.000000f, 1);
					aAISetMaxSpeed(Object_handles[218], 0.000000f);
					aAISetMaxSpeed(Object_handles[219], 0.000000f);
					aAISetMaxSpeed(Object_handles[220], 0.000000f);
					aAISetMaxSpeed(Object_handles[221], 0.000000f);
					aAISetMaxSpeed(Object_handles[222], 0.000000f);
					aAISetMaxSpeed(Object_handles[223], 0.000000f);
					aAISetMaxSpeed(Object_handles[224], 0.000000f);
					aAISetMaxSpeed(Object_handles[225], 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_164 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_164++;
				}
 
				// Script 165: Joggers
				if(1)
				{
					aAIGoalFollowPathSimple(Object_handles[226], Path_indexes[27], 8392960, -1, 3);
					aAIGoalFollowPathSimple(Object_handles[227], Path_indexes[27], 8392960, -1, 3);
					aAIGoalFollowPathSimple(Object_handles[228], Path_indexes[27], 8392960, -1, 3);
					aObjPlayAnim(Object_handles[228], 26, 54, 2.000000f, 1);
					aAISetMaxSpeed(Object_handles[226], qMathMulFloat(qAIQueryMaxSpeed(Object_handles[226]), 3.000000f));
					aAISetMaxSpeed(Object_handles[227], qMathMulFloat(qAIQueryMaxSpeed(Object_handles[227]), 3.000000f));
					aAISetMaxSpeed(Object_handles[228], qMathMulFloat(qAIQueryMaxSpeed(Object_handles[228]), 3.000000f));
					
					// Increment the script action counter
					if(ScriptActionCtr_165 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_165++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 012: Hangar 2A: Flame Purge Alternator
				if(event_data->id==4)
				{
					aTurnOffSpew(0);
					aTurnOffSpew(1);
					aTurnOffSpew(2);
					aTurnOffSpew(3);
					aTurnOffSpew(4);
					aTurnOffSpew(5);
					aTurnOffSpew(6);
					aTurnOffSpew(7);
					aTurnOffSpew(8);
					aTurnOffSpew(9);
					aUserVarInc(19);
					if(qUserVarValueInt(19)<5)
					{
						if(qUserVarValueInt(0)==0)
						{
							aTurnOnSpew(Object_handles[41], -1, 2, 0.000000f, 0.000000f, 0, 0, 3.000000f, 0.150000f, -1.000000f, 15.000000f, 35.000000f, 1, 0);
							aTurnOnSpew(Object_handles[42], -1, 0, 0.000000f, 0.000000f, 0, 0, 3.000000f, 0.150000f, -1.000000f, 18.000000f, 35.000000f, 1, 4);
						}
						if(qUserVarValueInt(0)==1)
						{
							aTurnOnSpew(Object_handles[43], -1, 2, 0.000000f, 0.000000f, 0, 0, 3.000000f, 0.150000f, -1.000000f, 14.000000f, 35.000000f, 1, 3);
							aTurnOnSpew(Object_handles[44], -1, 2, 0.000000f, 0.000000f, 0, 0, 3.500000f, 0.200000f, -1.000000f, 20.000000f, 35.000000f, 1, 6);
						}
						if(qUserVarValueInt(0)==2)
						{
							aTurnOnSpew(Object_handles[45], -1, 0, 0.000000f, 0.000000f, 0, 0, 3.000000f, 0.200000f, -1.000000f, 17.000000f, 35.000000f, 1, 8);
							aTurnOnSpew(Object_handles[46], -1, 0, 0.000000f, 0.000000f, 0, 0, 3.000000f, 0.160000f, -1.000000f, 17.000000f, 35.000000f, 1, 1);
						}
						aUserVarInc(0);
						if(qUserVarValueInt(0)==3)
						{
							aUserVarSet(0, 0.000000f);
						}
						aSetObjectOnFire(qObjSavedHandle(11), 3.000000f, 3.000000f);
						aSetObjectOnFire(qObjSavedHandle(12), 3.000000f, 3.000000f);
						aSetObjectOnFire(qObjSavedHandle(13), 3.000000f, 3.000000f);
						aSetLevelTimer(3.000000f, 4);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_012 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_012++;
				}
 
				// Script 208: Warehouse: Do Henchman Sequence
				if(event_data->id==48)
				{
					if(ScriptActionCtr_208==0)
					{
						aPortalRenderSet(0, 11, Room_indexes[26], 0);
						aAISetState(1, Object_handles[12]);
						aAISetMaxSpeed(Object_handles[12], 20.000000f);
						aAISetTeam(196608, Object_handles[12]);
						aAIGoalFollowPathSimple(Object_handles[12], Path_indexes[7], 131328, 14, 3);
						aAIGoalSetCircleDistance(Object_handles[12], 3, 0.000000f);
						aSetLevelTimer(2.000000f, 48);
					}
					if(ScriptActionCtr_208==1)
					{
						aPortalRenderSet(1, 11, Room_indexes[26], 0);
						aSetLevelTimer(5.000000f, 48);
					}
					if(ScriptActionCtr_208==2)
					{
						aAISetMaxSpeed(Object_handles[12], 50.000000f);
						aAISetTeam(0, Object_handles[12]);
						aAIFlags(1, 536870912, Object_handles[12]);
						aSetLevelTimer(2.000000f, 48);
					}
					if(ScriptActionCtr_208==3)
					{
						aShowHUDMessage(Message_strings[15]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_208 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_208++;
				}
 
				// Script 175: Level OBJECTIVE: All Bombs Planted
				if(event_data->id==45)
				{
					if(ScriptActionCtr_175==0)
					{
						aGoalCompleted(Goal_indexes[13], 1);
						aSetLevelTimer(3.000000f, 45);
					}
					if(ScriptActionCtr_175==1)
					{
						aAddGameMessage(Message_strings[22], Message_strings[23]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_175 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_175++;
				}
 
				// Script 016: Junction Spewers: Do Next Spewer
				if(event_data->id==41)
				{
					if(qUserVarValue(20)==0.000000f)
					{
						aObjSaveHandle(Object_handles[58], 15);
					}
					else {
						if(qUserVarValue(20)==1.000000f)
						{
							aObjSaveHandle(Object_handles[59], 15);
						}
						else {
							if(qUserVarValue(20)==2.000000f)
							{
								aObjSaveHandle(Object_handles[60], 15);
							}
							else {
								aObjSaveHandle(Object_handles[61], 15);
							}
						}
					}
					aTurnOnSpew(qObjSavedHandle(15), -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.500000f, 0.200000f, 2.000000f, 10.000000f, 30.000000f, 1, -1);
					aSoundPlayObject(Sound_indexes[3], qObjSavedHandle(15), 1.000000f);
					if(qUserVarValue(20)==0.000000f)
					{
						aObjSaveHandle(Object_handles[62], 15);
					}
					else {
						if(qUserVarValue(20)==1.000000f)
						{
							aObjSaveHandle(Object_handles[63], 15);
						}
						else {
							if(qUserVarValue(20)==2.000000f)
							{
								aObjSaveHandle(Object_handles[64], 15);
							}
							else {
								aObjSaveHandle(Object_handles[65], 15);
							}
						}
					}
					aTurnOnSpew(qObjSavedHandle(15), -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.500000f, 0.200000f, 2.000000f, 10.000000f, 30.000000f, 1, -1);
					aSoundPlayObject(Sound_indexes[3], qObjSavedHandle(15), 1.000000f);
					if(qUserVarValue(20)==0.000000f)
					{
						aObjSaveHandle(Object_handles[66], 15);
					}
					else {
						if(qUserVarValue(20)==1.000000f)
						{
							aObjSaveHandle(Object_handles[67], 15);
						}
						else {
							if(qUserVarValue(20)==2.000000f)
							{
								aObjSaveHandle(Object_handles[68], 15);
							}
							else {
								aObjSaveHandle(Object_handles[69], 15);
							}
						}
					}
					aTurnOnSpew(qObjSavedHandle(15), -1, 7, 0.000000f, 0.000000f, 65536, 0, 1.500000f, 0.200000f, 2.000000f, 10.000000f, 30.000000f, 1, -1);
					aSoundPlayObject(Sound_indexes[3], qObjSavedHandle(15), 1.000000f);
					aUserVarInc(20);
					if(qUserVarValue(20)>3.000000f)
					{
						aUserVarSet(20, 0.000000f);
					}
					aSetLevelTimer(1.000000f, 41);
					
					// Increment the script action counter
					if(ScriptActionCtr_016 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_016++;
				}
 
				// Script 017: Junction Spewers: Update Bomb Beams
				if(event_data->id==42)
				{
					if(qGoalCompleted(Goal_indexes[7])==true)
					{
						aLightningCreate(Object_handles[70], Object_handles[2], 0.400000f, 1.000000f, 2, Texture_indexes[2], 0.500000f, 1, 255, 255, 255, 0);
						aLightningCreate(Object_handles[71], Object_handles[2], 0.400000f, 1.000000f, 2, Texture_indexes[2], 0.500000f, 1, 255, 255, 255, 0);
					}
					if(qGoalCompleted(Goal_indexes[9])==true)
					{
						aLightningCreate(Object_handles[72], Object_handles[3], 0.400000f, 1.000000f, 2, Texture_indexes[2], 0.500000f, 1, 255, 255, 255, 0);
						aLightningCreate(Object_handles[73], Object_handles[3], 0.400000f, 1.000000f, 2, Texture_indexes[2], 0.500000f, 1, 255, 255, 255, 0);
					}
					if(qGoalCompleted(Goal_indexes[11])==true)
					{
						aLightningCreate(Object_handles[74], Object_handles[4], 0.400000f, 1.000000f, 2, Texture_indexes[2], 0.500000f, 1, 255, 255, 255, 0);
						aLightningCreate(Object_handles[75], Object_handles[4], 0.400000f, 1.000000f, 2, Texture_indexes[2], 0.500000f, 1, 255, 255, 255, 0);
					}
					aSetLevelTimer(0.400000f, 42);
					
					// Increment the script action counter
					if(ScriptActionCtr_017 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_017++;
				}
 
				// Script 026: Junction 1: Check if Gadget Saw Target/Still Alive
				if(event_data->id==37)
				{
					if(qObjExists(qObjSavedHandle(0))==false)
					{
						if(qDoorLocked(Door_handles[3])==true)
						{
							aShowHUDMessage(Message_strings[26]);
							aObjPlayAnim(Object_handles[76], 1, 2, 2.000000f, 0);
							aSoundPlayObject(Sound_indexes[0], Object_handles[76], 1.000000f);
							aUserFlagSet(28, 0);
						}
					}
					else {
						if((qUserFlag(18)==false) && (qSawTargetRecently(qObjSavedHandle(0), 1.000000f)==true))
						{
							aUserFlagSet(18, 1);
							aAIGoalGotoObject(qObjSavedHandle(0), Object_handles[77], 3, 4352, 5);
							aAIGoalSetCircleDistance(qObjSavedHandle(0), 3, 30.000000f);
							aSoundPlayObject(Sound_indexes[4], qObjSavedHandle(0), 1.000000f);
							aShowHUDMessage(Message_strings[27]);
						}
						aSetLevelTimer(0.500000f, 37);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_026 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_026++;
				}
 
				// Script 025: Junction 2: Gadget Sees You
				if(event_data->id==38)
				{
					if(qObjExists(qObjSavedHandle(1))==false)
					{
						if(qDoorLocked(Door_handles[4])==true)
						{
							aShowHUDMessage(Message_strings[26]);
							aObjPlayAnim(Object_handles[78], 1, 2, 2.000000f, 0);
							aSoundPlayObject(Sound_indexes[0], Object_handles[78], 1.000000f);
							aUserFlagSet(29, 0);
						}
					}
					else {
						if((qUserFlag(17)==false) && (qSawTargetRecently(qObjSavedHandle(1), 1.000000f)==true))
						{
							aUserFlagSet(17, 1);
							aAIGoalGotoObject(qObjSavedHandle(1), Object_handles[79], 3, 4352, 4);
							aAIGoalSetCircleDistance(qObjSavedHandle(1), 3, 30.000000f);
							aSoundPlayObject(Sound_indexes[4], qObjSavedHandle(1), 1.000000f);
							aShowHUDMessage(Message_strings[27]);
						}
						aSetLevelTimer(0.500000f, 38);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_025 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_025++;
				}
 
				// Script 125: Junction 3: Ball Death
				if(event_data->id==36)
				{
					aObjDestroy(qObjSavedHandle(7));
					
					// Increment the script action counter
					if(ScriptActionCtr_125 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_125++;
				}
 
				// Script 121: Junction 3: Gadget Sees You
				if(event_data->id==33)
				{
					if(qObjExists(qObjSavedHandle(2))==false)
					{
						if(qDoorLocked(Door_handles[5])==true)
						{
							aShowHUDMessage(Message_strings[26]);
							aObjPlayAnim(Object_handles[81], 1, 2, 2.000000f, 0);
							aSoundPlayObject(Sound_indexes[0], Object_handles[81], 1.000000f);
							aUserFlagSet(30, 0);
						}
					}
					else {
						if((qUserFlag(16)==false) && (qSawTargetRecently(qObjSavedHandle(2), 1.000000f)==true))
						{
							aUserFlagSet(16, 1);
							aAIGoalGotoObject(qObjSavedHandle(2), Object_handles[82], 3, 4352, 12);
							aAIGoalSetCircleDistance(qObjSavedHandle(2), 3, 30.000000f);
							aSoundPlayObject(Sound_indexes[4], qObjSavedHandle(2), 1.000000f);
							aShowHUDMessage(Message_strings[27]);
						}
						aSetLevelTimer(0.500000f, 33);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_121 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_121++;
				}
 
				// Script 203: Hazardous Waste: Guidebot Hint
				if(event_data->id==47)
				{
					aShowHUDMessage(Message_strings[34]);
					
					// Increment the script action counter
					if(ScriptActionCtr_203 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_203++;
				}
 
				// Script 043: Gravity Room 1: Wind Off
				if(event_data->id==5)
				{
					aRoomChangeWind(Room_indexes[31], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_043 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_043++;
				}
 
				// Script 044: Gravity Room 2: Wind Off
				if(event_data->id==6)
				{
					aRoomChangeWind(Room_indexes[32], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_044 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_044++;
				}
 
				// Script 069: Shark Security 0: Sharks
				if(event_data->id==10)
				{
					aShowHUDMessage(Message_strings[37]);
					aSoundPlay2D(Sound_indexes[5], 1.000000f);
					cOffAIForSharksInRoom(1, 0);
					if(qRoomHasPlayer(Room_indexes[33])==false)
					{
						cSetSharkTarget(0, Object_handles[18]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_069 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_069++;
				}
 
				// Script 065: Shark Security 1: Sharks
				if(event_data->id==9)
				{
					aShowHUDMessage(Message_strings[39]);
					aSoundPlay2D(Sound_indexes[5], 1.000000f);
					cOffAIForSharksInRoom(1, 1);
					if(qRoomHasPlayer(Room_indexes[34])==false)
					{
						cSetSharkTarget(1, Object_handles[17]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_065 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_065++;
				}
 
				// Script 064: Shark Security 2: Sharks
				if(event_data->id==8)
				{
					aShowHUDMessage(Message_strings[41]);
					aSoundPlay2D(Sound_indexes[5], 1.000000f);
					cOffAIForSharksInRoom(1, 2);
					if(qRoomHasPlayer(Room_indexes[35])==false)
					{
						cSetSharkTarget(2, Object_handles[16]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_064 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_064++;
				}
 
				// Script 054: Shark Security 3: Sharks
				if(event_data->id==7)
				{
					aShowHUDMessage(Message_strings[43]);
					aSoundPlay2D(Sound_indexes[5], 1.000000f);
					cOffAIForSharksInRoom(1, 3);
					if(qRoomHasPlayer(Room_indexes[36])==false)
					{
						cSetSharkTarget(3, Object_handles[15]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_054 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_054++;
				}
 
				// Script 080: Tesla Coil: Stage A
				if(event_data->id==11)
				{
					aLightningCreate(Object_handles[108], Object_handles[101], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[109], Object_handles[102], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[110], Object_handles[103], qUserVarValue(4), 1.000000f, 1, Texture_indexes[3], 0.500000f, 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[108], Object_handles[101], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[109], Object_handles[102], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[110], Object_handles[103], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aSetLevelTimer(qUserVarValue(7), 12);
					if(qUserFlag(10)==false)
					{
						aUserFlagSet(10, 1);
						aUserVarSet(11, 1.000000f);
					}
					else {
						aRoomSetWind(Room_indexes[37], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[38], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[39], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[40], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomChangeWind(Room_indexes[41], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[42], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[43], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[44], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[108], Object_handles[101], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[101], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[109], Object_handles[102], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[102], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[110], Object_handles[103], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[103], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_080 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_080++;
				}
 
				// Script 079: Tesla Coil: Stage A-B
				if(event_data->id==12)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[101], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[102], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[103], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[111], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[112], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[113], 0, 1, qUserVarValue(6), 0);
						aSetLevelTimer(qUserVarValue(6), 13);
					}
					else {
						aObjPlayAnim(Object_handles[111], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[112], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[113], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[101], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[102], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[103], 0, 1, qUserVarValue(6), 0);
						aSetLevelTimer(qUserVarValue(6), 11);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_079 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_079++;
				}
 
				// Script 081: Tesla Coil: Stage B
				if(event_data->id==13)
				{
					aLightningCreate(Object_handles[114], Object_handles[111], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[115], Object_handles[112], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[116], Object_handles[113], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[114], Object_handles[111], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[115], Object_handles[112], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[116], Object_handles[113], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qUserFlag(10)==true)
					{
						aSetLevelTimer(qUserVarValue(7), 14);
					}
					else {
						aRoomSetWind(Room_indexes[37], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[38], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[39], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[40], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[45], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[46], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[47], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[48], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomChangeWind(Room_indexes[41], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[42], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[43], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[44], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aSetLevelTimer(qUserVarValue(7), 12);
					}
					if(qBeamHittingPlayer(Object_handles[114], Object_handles[111], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[111], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[115], Object_handles[112], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[112], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[116], Object_handles[113], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[113], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_081 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_081++;
				}
 
				// Script 082: Tesla Coil: Stage B-C
				if(event_data->id==14)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[117], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[118], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[119], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[111], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[112], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[113], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 15);
					}
					else {
						aObjPlayAnim(Object_handles[111], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[112], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[113], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[117], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[118], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[119], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 13);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_082 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_082++;
				}
 
				// Script 083: Tesla Coil: Stage C
				if(event_data->id==15)
				{
					aLightningCreate(Object_handles[120], Object_handles[117], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[121], Object_handles[118], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[122], Object_handles[119], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[120], Object_handles[117], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[121], Object_handles[118], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[122], Object_handles[119], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qUserFlag(10)==true)
					{
						aSetLevelTimer(qUserVarValue(7), 16);
					}
					else {
						aSetLevelTimer(qUserVarValue(7), 14);
					}
					if(qBeamHittingPlayer(Object_handles[120], Object_handles[117], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[117], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[122], Object_handles[119], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[119], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[121], Object_handles[118], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[118], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_083 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_083++;
				}
 
				// Script 084: Tesla Coil: Stage C-D
				if(event_data->id==16)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[123], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[124], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[125], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[117], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[118], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[119], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 17);
					}
					else {
						aObjPlayAnim(Object_handles[117], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[118], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[119], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[123], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[124], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[125], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 15);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_084 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_084++;
				}
 
				// Script 085: Tesla Coil: Stage D
				if(event_data->id==17)
				{
					aLightningCreate(Object_handles[126], Object_handles[123], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[127], Object_handles[124], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[128], Object_handles[125], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[126], Object_handles[123], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[127], Object_handles[124], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[128], Object_handles[125], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qUserFlag(10)==true)
					{
						aRoomSetWind(Room_indexes[41], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[42], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[43], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[44], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[45], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[46], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[47], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[48], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aSetLevelTimer(qUserVarValue(7), 18);
					}
					else {
						aRoomSetWind(Room_indexes[41], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[42], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[43], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[44], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[45], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[46], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[47], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[48], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aSetLevelTimer(qUserVarValue(7), 16);
					}
					aRoomChangeWind(Room_indexes[37], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
					aRoomChangeWind(Room_indexes[38], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
					aRoomChangeWind(Room_indexes[39], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
					aRoomChangeWind(Room_indexes[40], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
					if(qBeamHittingPlayer(Object_handles[126], Object_handles[123], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[123], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[128], Object_handles[125], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[125], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[127], Object_handles[124], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[124], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_085 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_085++;
				}
 
				// Script 086: Tesla Coil: Stage D-E
				if(event_data->id==18)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[129], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[130], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[131], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[123], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[124], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[125], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 19);
					}
					else {
						aObjPlayAnim(Object_handles[123], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[124], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[125], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[129], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[130], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[131], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 17);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_086 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_086++;
				}
 
				// Script 087: Tesla Coil: Stage E
				if(event_data->id==19)
				{
					aLightningCreate(Object_handles[132], Object_handles[129], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[133], Object_handles[130], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[134], Object_handles[131], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[132], Object_handles[129], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[133], Object_handles[130], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[134], Object_handles[131], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qUserFlag(10)==true)
					{
						aSetLevelTimer(qUserVarValue(7), 20);
					}
					else {
						aSetLevelTimer(qUserVarValue(7), 18);
					}
					if(qBeamHittingPlayer(Object_handles[132], Object_handles[129], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[129], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[133], Object_handles[130], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[130], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[134], Object_handles[131], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[131], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_087 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_087++;
				}
 
				// Script 088: Tesla Coil: Stage E-F
				if(event_data->id==20)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[135], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[136], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[137], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[129], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[130], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[131], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 21);
					}
					else {
						aObjPlayAnim(Object_handles[129], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[130], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[131], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[135], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[136], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[137], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 19);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_088 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_088++;
				}
 
				// Script 089: Tesla Coil: Stage F
				if(event_data->id==21)
				{
					aLightningCreate(Object_handles[138], Object_handles[135], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[139], Object_handles[136], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[140], Object_handles[137], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[138], Object_handles[135], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[139], Object_handles[136], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[140], Object_handles[137], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qUserFlag(10)==true)
					{
						aSetLevelTimer(qUserVarValue(7), 22);
					}
					else {
						aSetLevelTimer(qUserVarValue(7), 20);
					}
					if(qBeamHittingPlayer(Object_handles[138], Object_handles[135], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[135], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[139], Object_handles[136], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[136], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[140], Object_handles[137], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[137], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_089 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_089++;
				}
 
				// Script 090: Tesla Coil: Stage F-G
				if(event_data->id==22)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[141], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[142], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[143], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[135], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[136], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[137], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 23);
					}
					else {
						aObjPlayAnim(Object_handles[135], 0, 1, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[136], 0, 1, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[137], 0, 1, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[141], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[142], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[143], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 21);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_090 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_090++;
				}
 
				// Script 091: Tesla Coil: Stage G
				if(event_data->id==23)
				{
					aLightningCreate(Object_handles[144], Object_handles[141], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[145], Object_handles[142], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[146], Object_handles[143], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[144], Object_handles[141], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[145], Object_handles[142], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[146], Object_handles[143], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qUserFlag(10)==true)
					{
						aRoomSetWind(Room_indexes[44], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[43], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[42], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[41], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[40], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[39], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[38], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomSetWind(Room_indexes[37], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(13));
						aRoomChangeWind(Room_indexes[45], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[46], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[47], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[48], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aSetLevelTimer(qUserVarValue(7), 25);
					}
					else {
						aRoomSetWind(Room_indexes[37], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[38], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[39], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomSetWind(Room_indexes[40], 0.000000f, qUserVarValue(11), 0.000000f, qUserVarValue(12));
						aRoomChangeWind(Room_indexes[45], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[46], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[47], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aRoomChangeWind(Room_indexes[48], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 1.000000f);
						aSetLevelTimer(qUserVarValue(7), 22);
					}
					if(qBeamHittingPlayer(Object_handles[144], Object_handles[141], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[141], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[145], Object_handles[142], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[142], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[146], Object_handles[143], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[143], -1), 10.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_091 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_091++;
				}
 
				// Script 092: Tesla Coil: Stage G-H
				if(event_data->id==25)
				{
					if(qUserFlag(10)==true)
					{
						aObjPlayAnim(Object_handles[147], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[148], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[149], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[141], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[142], 1, 2, qUserVarValue(5), 0);
						aObjPlayAnim(Object_handles[143], 1, 2, qUserVarValue(5), 0);
						aSetLevelTimer(qUserVarValue(6), 24);
					}
					else {
						aObjPlayAnim(Object_handles[141], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[142], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[143], 0, 1, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[147], 1, 2, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[148], 1, 2, qUserVarValue(6), 0);
						aObjPlayAnim(Object_handles[149], 1, 2, qUserVarValue(6), 0);
						aSetLevelTimer(qUserVarValue(6), 23);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_092 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_092++;
				}
 
				// Script 093: Tesla Coil: Stage H
				if(event_data->id==24)
				{
					aSetLevelTimer(qUserVarValue(7), 25);
					aLightningCreate(Object_handles[150], Object_handles[147], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[151], Object_handles[148], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[152], Object_handles[149], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[4], qUserVarValue(10), 1, 255, 255, 255, 1);
					aLightningCreate(Object_handles[150], Object_handles[147], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[151], Object_handles[148], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					aLightningCreate(Object_handles[152], Object_handles[149], qUserVarValue(4), qUserVarValue(8), 1, Texture_indexes[3], qUserVarValue(9), 2, 255, 255, 255, 1);
					if(qBeamHittingPlayer(Object_handles[150], Object_handles[147], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[147], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[151], Object_handles[148], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[148], -1), 10.000000f);
					}
					if(qBeamHittingPlayer(Object_handles[152], Object_handles[149], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[149], -1), 10.000000f);
					}
					if(qUserFlag(10)==true)
					{
						aUserFlagSet(10, 0);
						aUserVarSet(11, -1.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_093 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_093++;
				}
 
				// Script 100: Captain Gadget:  Vault Puzzle
				if(event_data->id==27)
				{
					aPortalRenderSet(1, 13, Room_indexes[50], 0);
					aAIGoalFollowPathSimple(Object_handles[19], Path_indexes[20], 3145984, 3, 3);
					aAIGoalSetCircleDistance(Object_handles[19], 3, 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_100 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_100++;
				}
 
				// Script 110: Pole North: Emitter
				if(event_data->id==31)
				{
					if(qUserFlag(14)==true)
					{
						aLightningCreate(Object_handles[180], Object_handles[181], 0.250000f, 2.000000f, 3, Texture_indexes[7], 0.250000f, 1, 255, 255, 255, 0);
					}
					aLightningCreate(Object_handles[182], Object_handles[183], 0.250000f, 8.000000f, 1, Texture_indexes[3], 0.250000f, 2, 255, 255, 255, 0);
					if(qBeamHittingPlayer(Object_handles[183], Object_handles[182], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[183], -1), 10.000000f);
					}
					aSetLevelTimer(0.250000f, 31);
					
					// Increment the script action counter
					if(ScriptActionCtr_110 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_110++;
				}
 
				// Script 111: Pole South: Emitter
				if(event_data->id==32)
				{
					if(qUserFlag(15)==true)
					{
						aLightningCreate(Object_handles[185], Object_handles[186], 0.250000f, 2.000000f, 3, Texture_indexes[7], 0.250000f, 1, 255, 255, 255, 0);
					}
					aLightningCreate(Object_handles[187], Object_handles[188], 0.250000f, 8.000000f, 1, Texture_indexes[3], 0.250000f, 2, 255, 255, 255, 0);
					if(qBeamHittingPlayer(Object_handles[188], Object_handles[187], 50.000000f)==true)
					{
						aObjApplyDamage(qPlayerClosest(Object_handles[188], -1), 10.000000f);
					}
					aSetLevelTimer(0.250000f, 32);
					
					// Increment the script action counter
					if(ScriptActionCtr_111 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_111++;
				}
 
				// Script 059: Pole Datalink: Lockdown
				if(event_data->id==30)
				{
					if(qUserFlag(14)==true)
					{
						aUserFlagSet(14, 0);
					}
					if(qUserFlag(15)==true)
					{
						aUserFlagSet(15, 0);
					}
					aUserFlagSet(11, 0);
					aShowColoredHUDMessage(255, 0, 0, Message_strings[59]);
					aSoundPlay2D(Sound_indexes[13], 1.000000f);
					aRoomSetFaceTexture(Room_indexes[51], 297, Texture_indexes[9]);
					aRoomSetFaceTexture(Room_indexes[52], 323, Texture_indexes[9]);
					aGoalCompleted(Goal_indexes[22], 0);
					aGoalCompleted(Goal_indexes[23], 0);
					aSetObjectVelocity(Object_handles[20], 0.000000f, 0.000000f, 1.000000f, 15.000000f);
					aSetObjectVelocity(Object_handles[21], 0.000000f, 0.000000f, 1.000000f, 15.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_059 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_059++;
				}
 
				// Script 176: Main Objectives Done
				if((ScriptActionCtr_176 < 1) && (event_data->id==46))
				{
					aShowHUDMessage(Message_strings[62]);
					aGoalEnableDisable(1, Goal_indexes[25]);
					aDoorLockUnlock(0, Door_handles[0]);
					aAddGameMessage(Message_strings[63], Message_strings[64]);
					
					// Increment the script action counter
					if(ScriptActionCtr_176 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_176++;
				}
 
				// Script 154: Escape Chute: Do Cinematic Bomb Sequence
				if(event_data->id==44)
				{
					if(ScriptActionCtr_154==0)
					{
						aEmitSparks(5.000000f, Object_handles[55]);
						aSetLevelTimer(1.000000f, 44);
					}
					if(ScriptActionCtr_154==1)
					{
						aEmitSparks(10.000000f, Object_handles[55]);
						aSetLevelTimer(1.600000f, 44);
					}
					if(ScriptActionCtr_154==2)
					{
						aSoundPlayObject(Sound_indexes[16], Object_handles[8], 1.000000f);
						aEmitSparks(20.000000f, Object_handles[55]);
						aObjSpark(Object_handles[2], 30.000000f, 10.000000f);
						aSetLevelTimer(4.000000f, 44);
						aObjPlayAnim(Object_handles[8], 26, 54, 4.000000f, 1);
					}
					if(ScriptActionCtr_154==3)
					{
						aSoundPlay2D(Sound_indexes[17], 1.000000f);
						aEmitSparks(40.000000f, Object_handles[55]);
						aRoomChangeWind(Room_indexes[27], 0.000000f, 0.000000f, 1.000000f, 20.000000f, 0.100000f);
						aObjKill(Object_handles[8], 1, 1, 0, 0.500000f, 0.500000f);
						aObjKill(Object_handles[9], 1, 1, 0, 0.500000f, 0.500000f);
						aTurnOnSpew(Object_handles[212], -1, 2, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.100000f, 1.000000f, 5.000000f, 40.000000f, 0, -1);
						aSetLevelTimer(1.000000f, 44);
					}
					if(ScriptActionCtr_154==3)
					{
						aTurnOnSpew(Object_handles[212], -1, 2, 0.000000f, 0.000000f, 65536, 0, 1.000000f, 0.100000f, 1.000000f, 30.000000f, 120.000000f, 0, -1);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_154 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_154++;
				}
 
				// Script 163: Escape Chute: Start End Sequence
				if(event_data->id==43)
				{
					cEndSequenceInit();
					aSoundPlaySteaming("VoxMerc3RPA7.osf", 1.000000f);
					aSetLevelTimer(0.100000f, 35);
					
					// Increment the script action counter
					if(ScriptActionCtr_163 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_163++;
				}
 
				// Script 139: Escape Chute:  Update Timer
				if(event_data->id==35)
				{
					cEndSequenceFrame(qObjSavedHandle(8));
					aSetLevelTimer(0.100000f, 35);
					aUserVarInc(17);
					if(qUserVarValueInt(-1)==40)
					{
						aMiscViewerShake(30.000000f);
						aUserVarSet(17, 0.000000f);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_139 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_139++;
				}
 
				// Script 162: Captain Dead Intercom
				if(((qObjExists(Object_handles[19])==false) && (qObjExists(Object_handles[22])==true)) && (event_data->id==40))
				{
					aSoundPlaySteaming("VoxMerc3RPA6.osf", 1.000000f);
					aSetLevelTimer(120.000000f, 40);
					
					// Increment the script action counter
					if(ScriptActionCtr_162 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_162++;
				}
			}
			break;
		case EVT_AIN_GOALCOMPLETE:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_goalcomplete;
 
				// Script 024: Junction 1: Gadget Unlocks Door
				if(event_data->goal_uid==2)
				{
					if(qDoorLocked(Door_handles[3])==true)
					{
						aDoorLockUnlock(0, Door_handles[3]);
						aShowHUDMessage(Message_strings[25]);
						aGoalCompleted(Goal_indexes[8], 1);
					}
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[8], 6, 11, 5, 3, 10490112, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_024 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_024++;
				}
 
				// Script 027: Junction 1: Gadget Summons Guard
				if(event_data->goal_uid==5)
				{
					aMatcenSetState(1, Matcen_indexes[5]);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[8], 1, 5, 1, 3, 2101504, 2);
					aShowHUDMessage(Message_strings[28]);
					
					// Increment the script action counter
					if(ScriptActionCtr_027 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_027++;
				}
 
				// Script 020: Junction 2: Gadget Unlocks Door
				if(event_data->goal_uid==0)
				{
					if(qDoorLocked(Door_handles[4])==true)
					{
						aDoorLockUnlock(0, Door_handles[4]);
						aShowHUDMessage(Message_strings[25]);
						aGoalCompleted(Goal_indexes[10], 1);
					}
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[9], 7, 12, 6, 3, 10490112, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_020 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_020++;
				}
 
				// Script 021: Junction 2: Gadget Summons Guard
				if(event_data->goal_uid==4)
				{
					aMatcenSetState(1, Matcen_indexes[7]);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[9], 1, 6, 1, 3, 2101504, 0);
					aShowHUDMessage(Message_strings[28]);
					
					// Increment the script action counter
					if(ScriptActionCtr_021 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_021++;
				}
 
				// Script 122: Junction 3: Gadget Unlocks Door
				if(event_data->goal_uid==11)
				{
					if(qDoorLocked(Door_handles[5])==true)
					{
						aDoorLockUnlock(0, Door_handles[5]);
						aShowHUDMessage(Message_strings[25]);
						aGoalCompleted(Goal_indexes[12], 1);
					}
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[10], 6, 11, 5, 3, 10489856, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_122 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_122++;
				}
 
				// Script 123: Junction 3: Guard Summoned
				if(event_data->goal_uid==12)
				{
					aMatcenSetState(1, Matcen_indexes[11]);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[10], 1, 5, 1, 3, 2101504, 11);
					aShowHUDMessage(Message_strings[28]);
					
					// Increment the script action counter
					if(ScriptActionCtr_123 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_123++;
				}
 
				// Script 070: Shark Security 0: Alarm!
				if((event_data->it_handle==Object_handles[18]) && (event_data->goal_uid==9))
				{
					if(qUserFlag(24)==false)
					{
						aUserFlagSet(24, 1);
						aObjPlayAnim(Object_handles[97], 0, 1, 2.000000f, 0);
						aSoundPlayObject(Sound_indexes[0], Object_handles[97], 1.000000f);
						aSetLevelTimer(2.000000f, 10);
					}
					aAIGoalFollowPath(Object_handles[18], Path_indexes[15], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[18], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_070 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_070++;
				}
 
				// Script 066: Shark Security 1: Alarm!
				if((event_data->it_handle==Object_handles[17]) && (event_data->goal_uid==8))
				{
					if(qUserFlag(25)==false)
					{
						aUserFlagSet(25, 1);
						aObjPlayAnim(Object_handles[98], 0, 1, 2.000000f, 0);
						aSoundPlayObject(Sound_indexes[0], Object_handles[98], 1.000000f);
						aSetLevelTimer(2.000000f, 9);
					}
					aAIGoalFollowPath(Object_handles[17], Path_indexes[14], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[17], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_066 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_066++;
				}
 
				// Script 063: Shark Security 2: Alarm!
				if((event_data->it_handle==Object_handles[16]) && (event_data->goal_uid==7))
				{
					if(qUserFlag(26)==false)
					{
						aUserFlagSet(26, 1);
						aObjPlayAnim(Object_handles[99], 0, 1, 2.000000f, 0);
						aSoundPlayObject(Sound_indexes[0], Object_handles[99], 1.000000f);
						aSetLevelTimer(2.000000f, 8);
					}
					aAIGoalFollowPath(Object_handles[16], Path_indexes[13], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[16], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_063 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_063++;
				}
 
				// Script 053: Shark Security 3: Alarm!
				if((event_data->it_handle==Object_handles[15]) && (event_data->goal_uid==6))
				{
					if(qUserFlag(27)==false)
					{
						aUserFlagSet(27, 1);
						aObjPlayAnim(Object_handles[100], 0, 1, 2.000000f, 0);
						aSoundPlayObject(Sound_indexes[0], Object_handles[100], 1.000000f);
						aSetLevelTimer(2.000000f, 7);
					}
					aAIGoalFollowPath(Object_handles[15], Path_indexes[12], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[15], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_053 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_053++;
				}
 
				// Script 099: Captain Gadget: In his Bunker
				if((ScriptActionCtr_099 < 1) && (event_data->goal_uid==10))
				{
					aPortalRenderSet(1, 1, Room_indexes[50], 1);
					aPortalRenderSet(1, 2, Room_indexes[50], 1);
					aPortalRenderSet(1, 3, Room_indexes[50], 1);
					aPortalRenderSet(1, 4, Room_indexes[50], 1);
					aPortalRenderSet(1, 5, Room_indexes[50], 1);
					aPortalRenderSet(1, 6, Room_indexes[50], 1);
					aPortalRenderSet(1, 7, Room_indexes[50], 1);
					aPortalRenderSet(1, 8, Room_indexes[50], 1);
					aPortalRenderSet(1, 9, Room_indexes[50], 1);
					aPortalRenderSet(1, 10, Room_indexes[50], 1);
					aPortalRenderSet(1, 11, Room_indexes[50], 1);
					aPortalRenderSet(1, 12, Room_indexes[50], 1);
					aPortalRenderSet(1, 13, Room_indexes[50], 1);
					aPortalRenderSet(1, 14, Room_indexes[50], 1);
					aPortalRenderSet(1, 15, Room_indexes[50], 1);
					aPortalRenderSet(1, 16, Room_indexes[50], 1);
					aPortalRenderSet(1, 17, Room_indexes[50], 1);
					aUserVarInc(21);
					
					// Increment the script action counter
					if(ScriptActionCtr_099 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_099++;
				}
			}
			break;
		case EVT_MATCEN_CREATE:
			{
				tOSIRISEVTMATCENCREATE *event_data=&data->evt_matcen_create;
 
				// Script 146: Hangar 2A: Squid
				if(event_data->id==Matcen_indexes[1])
				{
					if(qObjExists(qObjSavedHandle(11))==false)
					{
						aObjSaveHandle(event_data->it_handle, 11);
					}
					else {
						if(qObjExists(qObjSavedHandle(12))==false)
						{
							aObjSaveHandle(event_data->it_handle, 12);
						}
						else {
							if(qObjExists(qObjSavedHandle(13))==false)
							{
								aObjSaveHandle(event_data->it_handle, 13);
							}
							else {
							}
						}
					}
					if((qRandomValue(0.000000f, 1.000000f)<=0.800000f) && (qObjExists(qObjSavedHandle(14))==false))
					{
						aAIGoalFollowPathSimple(event_data->it_handle, Path_indexes[3], 4198656, -1, 3);
						aObjSaveHandle(event_data->it_handle, 14);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_146 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_146++;
				}
 
				// Script 145: Hangar 3A: Matcen
				if(event_data->id==Matcen_indexes[0])
				{
					if(qUserFlag(20)==false)
					{
						aAIGoalFollowPathSimple(event_data->it_handle, Path_indexes[4], 6295812, -1, 3);
					}
					else {
						aAIGoalFollowPathSimple(event_data->it_handle, Path_indexes[5], 6295812, -1, 3);
					}
					if(qObjExists(qObjSavedHandle(9))==false)
					{
						aObjSaveHandle(event_data->it_handle, 9);
					}
					else {
						aObjSaveHandle(event_data->it_handle, 10);
					}
					if(qUserFlag(20)==true)
					{
						aUserFlagSet(20, 0);
					}
					else {
						aUserFlagSet(20, 1);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_145 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_145++;
				}
 
				// Script 008: Ball Puzzle: Prize Generated
				if(event_data->id==Matcen_indexes[3])
				{
					aMatcenSetState(0, event_data->id);
					
					// Increment the script action counter
					if(ScriptActionCtr_008 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_008++;
				}
 
				// Script 023: Junction 1: Maintenance Summoned
				if(event_data->id==Matcen_indexes[4])
				{
					aMatcenSetState(0, event_data->id);
					aObjSaveHandle(event_data->it_handle, 0);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[8], 1, 5, 1, 3, 2101504, 2);
					aUserFlagSet(18, 0);
					aAISetTeam(0, event_data->it_handle);
					aSoundPlaySteaming("VoxMerc3RPA2.osf", 1.000000f);
					aSetLevelTimer(0.500000f, 37);
					
					// Increment the script action counter
					if(ScriptActionCtr_023 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_023++;
				}
 
				// Script 028: Junction 1: Guard Summoned
				if(event_data->id==Matcen_indexes[5])
				{
					aMatcenSetState(0, event_data->id);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[8], 1, 4, 1, 0, 2101504, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_028 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_028++;
				}
 
				// Script 019: Junction 2: Maintenance Summoned
				if(event_data->id==Matcen_indexes[6])
				{
					aMatcenSetState(0, event_data->id);
					aObjSaveHandle(event_data->it_handle, 1);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[9], 1, 6, 1, 3, 2101504, 0);
					aUserFlagSet(17, 0);
					aAISetTeam(0, event_data->it_handle);
					aSoundPlaySteaming("VoxMerc3RPA3.osf", 1.000000f);
					aSetLevelTimer(0.500000f, 38);
					
					// Increment the script action counter
					if(ScriptActionCtr_019 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_019++;
				}
 
				// Script 140: Junction 2: Guard Summoned
				if(event_data->id==Matcen_indexes[7])
				{
					aMatcenSetState(0, event_data->id);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[9], 1, 5, 1, 0, 2101504, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_140 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_140++;
				}
 
				// Script 115: Junction 3: Ball Matcen Generated
				if(event_data->id==Matcen_indexes[8])
				{
					aMatcenSetState(0, event_data->id);
					aShowHUDMessage(Message_strings[29]);
					aObjSaveHandle(event_data->it_handle, 7);
					aSetLevelTimer(300.000000f, 36);
					
					// Increment the script action counter
					if(ScriptActionCtr_115 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_115++;
				}
 
				// Script 118: Junction 3: Cloak Matcened
				if(event_data->id==Matcen_indexes[9])
				{
					
					// Increment the script action counter
					if(ScriptActionCtr_118 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_118++;
				}
 
				// Script 120: Junction 3: Maintenance Summoned
				if(event_data->id==Matcen_indexes[10])
				{
					aMatcenSetState(0, event_data->id);
					aObjSaveHandle(event_data->it_handle, 2);
					aUserFlagSet(16, 0);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[10], 1, 5, 1, 3, 2101504, 11);
					aAISetTeam(0, event_data->it_handle);
					aSoundPlaySteaming("VoxMerc3RPA4.osf", 1.000000f);
					aSetLevelTimer(0.500000f, 33);
					
					// Increment the script action counter
					if(ScriptActionCtr_120 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_120++;
				}
 
				// Script 124: Junction 3: Guard Going To Player
				if(event_data->id==Matcen_indexes[11])
				{
					aMatcenSetState(0, event_data->id);
					aAIGoalFollowPath(event_data->it_handle, Path_indexes[10], 1, 5, 1, 0, 2101504, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_124 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_124++;
				}
			}
			break;
		case EVT_LEVEL_GOAL_COMPLETE:
			{
				tOSIRISEVTLEVELGOALCOMPLETE *event_data=&data->evt_level_goal_complete;
 
				// Script 113: Level OBJECTIVE: Check if all Bombs Planted
				if((ScriptActionCtr_113 < 1) && ((qGoalCompleted(Goal_indexes[7])==true) && (qGoalCompleted(Goal_indexes[9])==true) && (qGoalCompleted(Goal_indexes[11])==true)))
				{
					aSetLevelTimer(3.000000f, 45);
					
					// Increment the script action counter
					if(ScriptActionCtr_113 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_113++;
				}
 
				// Script 114: Check if Main Objectives Done
				if((ScriptActionCtr_114 < 1) && ((qGoalCompleted(Goal_indexes[13])==true) && (qGoalCompleted(Goal_indexes[24])==true)))
				{
					aSetLevelTimer(3.000000f, 46);
					
					// Increment the script action counter
					if(ScriptActionCtr_114 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_114++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0B83::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 133: Level START (Intro Cinematic Cut 2)
				if(1)
				{
					aObjPlayAnim(Object_handles[25], 0, 140, 24.000000f, 0);
					aStoreObjectInPositionClipboard(Object_handles[26]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicCameraAtStoredPt(Room_indexes[21]);
					aComplexCinematicTrack(Object_handles[27], 0.000000f, 1.000000f);
					aComplexCinematicEndTrans(0);
					aComplexCinematicEnd(Message_strings[2], 7.000000f);
					aMusicSetRegionAll(1);
					
					// Increment the script action counter
					if(ScriptActionCtr_133 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_133++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0B85::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 134: Level START (Intro Cinematic Cut 3)
				if(1)
				{
					aStoreObjectInPositionClipboard(Object_handles[28]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(0);
					aComplexCinematicCameraAtStoredPt(Room_indexes[22]);
					aComplexCinematicTrack(Object_handles[29], 0.000000f, 1.000000f);
					aComplexCinematicEndTrans(3);
					aComplexCinematicEnd(Message_strings[2], 17.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_134 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_134++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1140::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 001: Hangar 1A: Primary Door Switch
				if(qObjIsPlayerWeapon(event_data->it_handle)==true)
				{
					aUserFlagSet(3, 1);
					aRoomSetFaceTexture(Room_indexes[23], 481, Texture_indexes[0]);
					aShowColoredHUDMessageObj(255, 0, 0, Message_strings[3], qObjParent(event_data->it_handle));
					
					// Increment the script action counter
					if(ScriptActionCtr_001 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_001++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1941::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 002: Hangar 1A: Secondary Door Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aRoomSetFaceTexture(Room_indexes[23], 481, Texture_indexes[1]);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					if(qUserFlag(0)==false)
					{
						aAISetState(1, Object_handles[5]);
						aObjSetLightingDist(Object_handles[5], 100.000000f);
						aSetObjectTimer(Object_handles[32], 15.000000f, 0);
						aDoorLockUnlock(0, Door_handles[1]);
						aTimerShow(0);
						aShowColoredHUDMessage(255, 0, 0, Message_strings[4]);
						aUserFlagSet(0, 1);
						aSoundPlaySteaming("VoxMerc3RPA1.osf", 1.000000f);
						aGoalCompleted(Goal_indexes[0], 1);
					}
					else {
						aDoorLockUnlock(1, Door_handles[1]);
						aCancelTimer(0);
						aAISetState(0, Object_handles[5]);
						aShowHUDMessage(Message_strings[5]);
						aUserFlagSet(0, 0);
						aGoalCompleted(Goal_indexes[0], 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_002 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_002++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0943::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 009: Hangar 1A: Secondary Door Switch (Aux)
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					if(qUserFlag(0)==false)
					{
						aAISetState(1, Object_handles[5]);
						aObjSetLightingDist(Object_handles[5], 100.000000f);
						aSetObjectTimer(Object_handles[32], 15.000000f, 0);
						aDoorLockUnlock(0, Door_handles[1]);
						aTimerShow(0);
						aShowColoredHUDMessage(255, 0, 0, Message_strings[4]);
						aUserFlagSet(0, 1);
						aSoundPlaySteaming("VoxMerc3RPA1.osf", 1.000000f);
						aGoalCompleted(Goal_indexes[0], 1);
					}
					else {
						aDoorLockUnlock(1, Door_handles[1]);
						aCancelTimer(0);
						aAISetState(0, Object_handles[5]);
						aShowHUDMessage(Message_strings[5]);
						aUserFlagSet(0, 0);
						aGoalCompleted(Goal_indexes[0], 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_009 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_009++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0942::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 003: Hangar 1A: Secondary Door Open
				if(1)
				{
					if(event_data->id==0)
					{
						aDoorLockUnlock(0, data->me_handle);
						aDoorActivate(data->me_handle);
						aRoomChangeWind(Room_indexes[23], 0.000000f, 0.000000f, 1.000000f, 15.000000f, 5.000000f);
						aSetObjectTimer(data->me_handle, 15.000000f, 2);
					}
					if(event_data->id==2)
					{
						aDoorSetPos(data->me_handle, 0.000000f);
						aDoorLockUnlock(1, data->me_handle);
						aRoomChangeWind(Room_indexes[23], 0.000000f, 0.000000f, 1.000000f, 0.000000f, 1.000000f);
						aAISetState(0, Object_handles[5]);
						aObjSetLightingDist(Object_handles[5], 10.000000f);
						aUserFlagSet(0, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_003 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_003++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0950::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 004: Hangar 2A: Primary Door Switch
				if(qObjIsPlayerWeapon(event_data->it_handle)==true)
				{
					aRoomSetFaceTexture(Room_indexes[24], 300, Texture_indexes[0]);
					aShowColoredHUDMessageObj(255, 0, 0, Message_strings[3], qObjParent(event_data->it_handle));
					
					// Increment the script action counter
					if(ScriptActionCtr_004 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_004++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0951::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 005: Hangar 2A: Secondary Door Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					aRoomSetFaceTexture(Room_indexes[24], 300, Texture_indexes[1]);
					if(qUserFlag(1)==false)
					{
						aAISetState(1, Object_handles[6]);
						aObjSetLightingDist(Object_handles[6], 100.000000f);
						aSetObjectTimer(Object_handles[36], 25.000000f, 1);
						aDoorLockUnlock(0, Door_handles[2]);
						aTimerShow(1);
						aShowColoredHUDMessage(255, 0, 0, Message_strings[7]);
						aUserFlagSet(1, 1);
						aSoundPlaySteaming("VoxMerc3RPA1.osf", 1.000000f);
						aGoalCompleted(Goal_indexes[2], 1);
					}
					else {
						aDoorLockUnlock(1, Door_handles[2]);
						aCancelTimer(1);
						aAISetState(0, Object_handles[6]);
						aShowHUDMessage(Message_strings[8]);
						aUserFlagSet(1, 0);
						aGoalCompleted(Goal_indexes[2], 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_005 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_005++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_093A::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 010: Hangar 2A: Secondary Door Switch (Aux)
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					if(qUserFlag(1)==false)
					{
						aAISetState(1, Object_handles[6]);
						aObjSetLightingDist(Object_handles[6], 100.000000f);
						aSetObjectTimer(Object_handles[36], 15.000000f, 1);
						aDoorLockUnlock(0, Door_handles[2]);
						aTimerShow(1);
						aShowColoredHUDMessage(255, 0, 0, Message_strings[7]);
						aUserFlagSet(1, 1);
						aSoundPlaySteaming("VoxMerc3RPA1.osf", 1.000000f);
						aGoalCompleted(Goal_indexes[2], 1);
					}
					else {
						aDoorLockUnlock(1, Door_handles[2]);
						aCancelTimer(1);
						aAISetState(0, Object_handles[6]);
						aShowHUDMessage(Message_strings[8]);
						aUserFlagSet(1, 0);
						aGoalCompleted(Goal_indexes[2], 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_010 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_010++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_193D::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 006: Hangar 2A: Secondary Door Open
				if(1)
				{
					if(event_data->id==1)
					{
						aDoorLockUnlock(0, data->me_handle);
						aDoorActivate(data->me_handle);
						aRoomChangeWind(Room_indexes[24], -1.000000f, 0.000000f, 1.000000f, 15.000000f, 5.000000f);
						aSetObjectTimer(data->me_handle, 15.000000f, 3);
					}
					if(event_data->id==3)
					{
						aDoorSetPos(data->me_handle, 0.000000f);
						aDoorLockUnlock(1, data->me_handle);
						aRoomChangeWind(Room_indexes[24], -1.000000f, 0.000000f, 1.000000f, 0.000000f, 1.000000f);
						aAISetState(0, Object_handles[6]);
						aObjSetLightingDist(Object_handles[6], 10.000000f);
						aUserFlagSet(1, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_006 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_006++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_093B::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 127: Hangar 2A: Crane Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					if((qObjAnimFrame(Object_handles[39])==0.000000f) || (qObjAnimFrame(Object_handles[39])==6.000000f))
					{
						aObjPlayAnim(Object_handles[39], 0, 6, 4.000000f, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_127 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_127++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_192E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 128: Hangar 2A: Crane Script
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					if((qObjAnimFrame(data->me_handle)>0.000000f) && (qObjAnimFrame(data->me_handle)<6.000000f))
					{
						aObjDestroy(event_data->it_handle);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_128 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_128++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_093C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 011: Hangar 2A: Flame Purge
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					if(qUserFlag(2)==false)
					{
						aShowColoredHUDMessage(255, 0, 0, Message_strings[9]);
						aUserVarSet(0, 0.000000f);
						aSetLevelTimer(0.500000f, 4);
						aUserFlagSet(2, 1);
						aUserVarSet(19, 0.000000f);
					}
					else {
						if(1)
						{
							aCancelTimer(4);
							aShowHUDMessage(Message_strings[10]);
							aTurnOffSpew(0);
							aTurnOffSpew(1);
							aTurnOffSpew(2);
							aTurnOffSpew(3);
							aTurnOffSpew(4);
							aTurnOffSpew(5);
							aTurnOffSpew(6);
							aTurnOffSpew(7);
							aTurnOffSpew(8);
							aTurnOffSpew(9);
						}
						aUserFlagSet(2, 0);
					}
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					aUserFlagSet(3, 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_011 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_011++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1318::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 143: Hangar 3A: Primary Door Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aRoomSetFaceTexture(Room_indexes[25], 501, Texture_indexes[0]);
					aShowColoredHUDMessageObj(255, 0, 0, Message_strings[3], qObjParent(event_data->it_handle));
					
					// Increment the script action counter
					if(ScriptActionCtr_143 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_143++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1317::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 144: Hangar 3A: Secondary Door Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					aRoomSetFaceTexture(Room_indexes[25], 501, Texture_indexes[1]);
					if(qUserFlag(19)==false)
					{
						aSetObjectTimer(Object_handles[49], 15.000000f, 39);
						aTimerShow(39);
						aShowColoredHUDMessage(255, 0, 0, Message_strings[11]);
						aUserFlagSet(19, 1);
						aSoundPlaySteaming("VoxMerc3RPA1.osf", 1.000000f);
					}
					else {
						aCancelTimer(34);
						aShowHUDMessage(Message_strings[12]);
						aUserFlagSet(19, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_144 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_144++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_190B::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 149: Hangar 3A: Secondary Door Switch (Aux)
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					aRoomSetFaceTexture(Room_indexes[25], 501, Texture_indexes[1]);
					if(qUserFlag(19)==false)
					{
						aSetObjectTimer(Object_handles[49], 15.000000f, 39);
						aTimerShow(39);
						aShowColoredHUDMessage(255, 0, 0, Message_strings[11]);
						aUserFlagSet(19, 1);
						aSoundPlaySteaming("VoxMerc3RPA1.osf", 1.000000f);
					}
					else {
						aCancelTimer(34);
						aShowHUDMessage(Message_strings[12]);
						aUserFlagSet(19, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_149 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_149++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_6909::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 147: Hangar 3A: Magnet Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					if(qUserFlag(21)==false)
					{
						aObjPlayAnim(Object_handles[52], 0, 5, 1.000000f, 0);
						aObjPlayAnim(Object_handles[53], 0, 5, 1.000000f, 0);
					}
					else {
						aObjPlayAnim(Object_handles[52], 5, 10, 1.000000f, 0);
						aObjPlayAnim(Object_handles[53], 5, 10, 1.000000f, 0);
					}
					if(qUserFlag(21)==true)
					{
						aUserFlagSet(21, 0);
					}
					else {
						aUserFlagSet(21, 1);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_147 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_147++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_191C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 150: Hangar 3A: Box Kills
				if(((qObjIsType(event_data->it_handle, 2)==true) || (qObjIsPlayer(event_data->it_handle)==true)) && ((qObjAnimFrame(data->me_handle)>1.000000f) && (qObjAnimFrame(data->me_handle)<=5.000000f)))
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_150 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_150++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_111D::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 151: Hangar 3A: Box Kills 2
				if(((qObjIsType(event_data->it_handle, 2)==true) || (qObjIsPlayer(event_data->it_handle)==true)) && ((qObjAnimFrame(data->me_handle)>1.000000f) && (qObjAnimFrame(data->me_handle)<=5.000000f)))
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_151 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_151++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_110F::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 157: Hangar 3A: Secondary Door Open
				if(1)
				{
					if(event_data->id==39)
					{
						aDoorLockUnlock(0, data->me_handle);
						aDoorActivate(data->me_handle);
						aRoomChangeWind(Room_indexes[25], -0.703000f, -0.062000f, -0.707000f, 15.000000f, 5.000000f);
						aSetObjectTimer(data->me_handle, 15.000000f, 34);
					}
					if(event_data->id==34)
					{
						aDoorSetPos(data->me_handle, 0.000000f);
						aDoorLockUnlock(1, data->me_handle);
						aRoomChangeWind(Room_indexes[25], -1.000000f, 0.000000f, 1.000000f, 0.000000f, 1.000000f);
						aUserFlagSet(19, 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_157 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_157++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1194::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 210: Starting Crate: Player Blasted Out
				if(1)
				{
					aGoalCompleted(Goal_indexes[4], 1);
					aGoalEnableDisable(1, Goal_indexes[0]);
					aGoalEnableDisable(1, Goal_indexes[1]);
					aShowHUDMessage(Message_strings[13]);
					
					// Increment the script action counter
					if(ScriptActionCtr_210 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_210++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_11FA::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 060: Warehouse: BST Killed
				if(1)
				{
					aPortalRenderSet(0, 11, Room_indexes[26], 0);
					aPortalRenderSet(0, 0, Room_indexes[26], 1);
					aShowHUDMessage(Message_strings[16]);
					aGoalCompleted(Goal_indexes[6], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_060 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_060++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0CB4::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 181: Level SUBOBJECTIVE: Pickup Bomb(s)
				if(qObjIsPlayer(event_data->it_handle)==true)
				{
					if(qUserVarValue(23)>0.000000f)
					{
						aSoundPlayObject(Sound_indexes[1], event_data->it_handle, 1.000000f);
						if(qUserVarValue(23)==1.000000f)
						{
							aShowHUDMessageObj(Message_strings[17], event_data->it_handle);
							aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[17], 0);
						}
						else {
							if(qUserVarValue(23)==2.000000f)
							{
								aShowHUDMessageObj(Message_strings[18], event_data->it_handle);
								aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[18], 0);
							}
							else {
								aShowHUDMessageObj(Message_strings[0], event_data->it_handle);
								aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[0], 0);
							}
						}
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_181 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_181++;
				}
			}
			break;
		case EVT_USE:
			{
				tOSIRISEVTUSE *event_data=&data->evt_use;
 
				// Script 015: Level SUBOBJECTIVE: Bomb Planting
				if(1)
				{
					if(qObjRoom(event_data->it_handle)==Room_indexes[27])
					{
						if(qGoalCompleted(Goal_indexes[7])==true)
						{
							aShowHUDMessageObj(Message_strings[19], event_data->it_handle);
						}
						else {
							aShowHUDMessageObj(Message_strings[20], event_data->it_handle);
							aStoreObjectInPositionClipboard(Object_handles[55]);
							aMoveObjectToPositionClipboard(Object_handles[2]);
							aObjGhostSet(0, Object_handles[2]);
							aEmitSparks(40.000000f, Object_handles[2]);
							aSoundPlayObject(Sound_indexes[2], event_data->it_handle, 1.000000f);
							aRoomSetFog(Room_indexes[27], 0.000000f, 1.000000f, 1.000000f, 8000.000000f);
							aRoomChangeFog(Room_indexes[27], 0.000000f, 1.000000f, 1.000000f, 600.000000f, 6.000000f);
							aGoalCompleted(Goal_indexes[7], 1);
							aGoalEnableDisable(0, Goal_indexes[8]);
							aUserVarDec(23);
						}
					}
					else {
						if(qObjRoom(event_data->it_handle)==Room_indexes[28])
						{
							if(qGoalCompleted(Goal_indexes[9])==true)
							{
								aShowHUDMessageObj(Message_strings[19], event_data->it_handle);
							}
							else {
								aShowHUDMessageObj(Message_strings[20], event_data->it_handle);
								aStoreObjectInPositionClipboard(Object_handles[56]);
								aMoveObjectToPositionClipboard(Object_handles[3]);
								aObjGhostSet(0, Object_handles[3]);
								aEmitSparks(40.000000f, Object_handles[3]);
								aSoundPlayObject(Sound_indexes[2], event_data->it_handle, 1.000000f);
								aRoomSetFog(Room_indexes[28], 0.000000f, 1.000000f, 1.000000f, 8000.000000f);
								aRoomChangeFog(Room_indexes[28], 0.000000f, 1.000000f, 1.000000f, 600.000000f, 6.000000f);
								aGoalCompleted(Goal_indexes[9], 1);
								aGoalEnableDisable(0, Goal_indexes[10]);
								aUserVarDec(23);
							}
						}
						else {
							if(qObjRoom(event_data->it_handle)==Room_indexes[29])
							{
								if(qGoalCompleted(Goal_indexes[11])==true)
								{
									aShowHUDMessageObj(Message_strings[19], event_data->it_handle);
								}
								else {
									aShowHUDMessageObj(Message_strings[20], event_data->it_handle);
									aStoreObjectInPositionClipboard(Object_handles[57]);
									aMoveObjectToPositionClipboard(Object_handles[4]);
									aObjGhostSet(0, Object_handles[4]);
									aEmitSparks(40.000000f, Object_handles[4]);
									aSoundPlayObject(Sound_indexes[2], event_data->it_handle, 1.000000f);
									aRoomSetFog(Room_indexes[29], 0.000000f, 1.000000f, 1.000000f, 8000.000000f);
									aRoomChangeFog(Room_indexes[29], 0.000000f, 1.000000f, 1.000000f, 600.000000f, 6.000000f);
									aGoalCompleted(Goal_indexes[11], 1);
									aGoalEnableDisable(0, Goal_indexes[12]);
									aUserVarDec(23);
								}
							}
							else {
								aShowHUDMessage(Message_strings[21]);
							}
						}
					}
					if(qUserVarValue(23)>0.000000f)
					{
						aObjGhostSet(0, Object_handles[23]);
						if(qUserVarValue(23)==1.000000f)
						{
							aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[17], 0);
						}
						else {
							if(qUserVarValue(23)==2.000000f)
							{
								aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[18], 0);
							}
							else {
								aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[0], 0);
							}
						}
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_015 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_015++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_20B0::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 022: Junction 1: Summon Maintenance Switch
				if((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(28)==false) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f)))
				{
					aUserFlagSet(28, 1);
					aObjPlayAnim(data->me_handle, 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aMatcenSetState(1, Matcen_indexes[4]);
					aShowHUDMessage(Message_strings[24]);
					
					// Increment the script action counter
					if(ScriptActionCtr_022 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_022++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_136F::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 018: Junction 2: Summon Maintenance Switch
				if((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(29)==false) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f)))
				{
					aUserFlagSet(29, 1);
					aObjPlayAnim(data->me_handle, 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aMatcenSetState(1, Matcen_indexes[6]);
					aShowHUDMessage(Message_strings[24]);
					
					// Increment the script action counter
					if(ScriptActionCtr_018 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_018++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_3090::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 116: Junction 3: Special Switch Puzzle
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aObjPlayAnim(data->me_handle, 0, 2, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aMatcenSetState(1, Matcen_indexes[8]);
					
					// Increment the script action counter
					if(ScriptActionCtr_116 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_116++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_30AE::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 119: Junction 3: Summon Maintenance Switch
				if((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(30)==false) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f)))
				{
					aUserFlagSet(30, 1);
					aObjPlayAnim(data->me_handle, 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aMatcenSetState(1, Matcen_indexes[10]);
					aShowHUDMessage(Message_strings[24]);
					
					// Increment the script action counter
					if(ScriptActionCtr_119 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_119++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_50FF::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 029: Hazardous Waste: Guard Area Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					if(qPortalIsOn(1, Room_indexes[30])==true)
					{
						aPortalRenderSet(0, 1, Room_indexes[30], 1);
						aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
						aObjPlayAnim(data->me_handle, 0, 1, 2.000000f, 0);
						aUserFlagSet(3, 1);
						if(qGoalCompleted(Goal_indexes[14])==false)
						{
							aGoalCompleted(Goal_indexes[14], 1);
						}
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_029 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_029++;
				}
			}
			break;
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 032: Hazardous Waste: Guard Movie Cut 2
				if(1)
				{
					aUserVarInc(1);
					aStoreObjectInPositionClipboard(Object_handles[84]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(0);
					aComplexCinematicTrack(Object_handles[85], 0.000000f, 1.000000f);
					aComplexCinematicCameraView(0.000000f, 1.000000f);
					aComplexCinematicCameraAtStoredPt(qObjRoom(Object_handles[84]));
					aComplexCinematicTextMode(4);
					aComplexCinematicText(0.200000f, 0.900000f);
					aComplexCinematicEndTrans(0);
					aComplexCinematicEnd(Message_strings[31], 6.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_032 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_032++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0987::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 033: Hazardous Waste: Guard Movie Cut 3
				if(qUserVarValueInt(1)<5)
				{
					aUserVarInc(1);
					aStoreObjectInPositionClipboard(Object_handles[86]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(0);
					aComplexCinematicTrack(Object_handles[87], 0.000000f, 1.000000f);
					aComplexCinematicCameraView(0.000000f, 1.000000f);
					aComplexCinematicCameraAtStoredPt(qObjRoom(Object_handles[86]));
					aComplexCinematicText(0.100000f, 0.900000f);
					aComplexCinematicTextMode(4);
					if(qUserVarValueInt(1)==3)
					{
						aComplexCinematicEndTrans(0);
						aComplexCinematicEnd(Message_strings[32], 8.000000f);
					}
					else {
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_033 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_033++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0989::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 034: Hazardous Waste: Guard Movie Cut 4
				if(qUserVarValueInt(1)<6)
				{
					aUserVarInc(1);
					aStoreObjectInPositionClipboard(Object_handles[84]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(0);
					aComplexCinematicTrack(Object_handles[85], 0.000000f, 1.000000f);
					aComplexCinematicCameraView(0.000000f, 1.000000f);
					aComplexCinematicCameraAtStoredPt(qObjRoom(Object_handles[84]));
					aComplexCinematicText(0.100000f, 0.800000f);
					aComplexCinematicTextMode(4);
					if(qUserVarValueInt(1)==4)
					{
						aComplexCinematicEndTrans(0);
						aComplexCinematicEnd(Message_strings[33], 9.000000f);
						aSetLevelTimer(11.000000f, 47);
					}
					else {
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_034 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_034++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_10FA::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 037: Gravity Room 1: Down Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					cGravityRoomBoxStates(1, 0);
					if(qUserVarValueInt(2)!=0)
					{
						aRoomSetWind(Room_indexes[31], 0.000000f, -1.000000f, 0.000000f, 10.000000f);
						aSetLevelTimer(3.000000f, 5);
					}
					aUserVarSet(2, 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_037 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_037++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_18FB::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 035: Gravity Room 1: Neutral Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					aUserVarSet(2, 1.000000f);
					cGravityRoomBoxStates(1, 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_035 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_035++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_10FC::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 038: Gravity Room 1: Up Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					cGravityRoomBoxStates(1, 2);
					if(qUserVarValueInt(2)!=2)
					{
						aRoomSetWind(Room_indexes[31], 0.000000f, 1.000000f, 0.000000f, 10.000000f);
						aSetLevelTimer(3.000000f, 5);
					}
					aUserVarSet(2, 2.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_038 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_038++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_10F9::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 039: Gravity Room 2: Down Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					cGravityRoomBoxStates(2, 0);
					if(qUserVarValueInt(3)!=0)
					{
						aObjSetVelocity(Object_handles[92], 0.000000f, -1.000000f, 0.000000f, 5.000000f);
						aRoomSetWind(Room_indexes[32], 0.000000f, -1.000000f, 0.000000f, 15.000000f);
						aSetLevelTimer(3.000000f, 6);
					}
					aUserVarSet(3, 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_039 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_039++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_10F8::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 040: Gravity Room 2: Neutral Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					aUserVarSet(2, 1.000000f);
					cGravityRoomBoxStates(2, 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_040 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_040++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_D08A::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 041: Gravity Room 2: Up Switch
				if(((qObjIsPlayerWeapon(event_data->it_handle)==true) && ((qObjAnimFrame(data->me_handle)==0.000000f) || (qObjAnimFrame(data->me_handle)==2.000000f))) && (qUserFlag(3)==false))
				{
					aUserFlagSet(3, 1);
					aSoundPlayObject(Sound_indexes[0], data->me_handle, 1.000000f);
					aObjPlayAnim(data->me_handle, 0, 2, 4.000000f, 0);
					cGravityRoomBoxStates(2, 2);
					if(qUserVarValueInt(3)!=2)
					{
						aObjSetVelocity(Object_handles[92], 0.000000f, 1.000000f, 0.000000f, 5.000000f);
						aRoomSetWind(Room_indexes[32], 0.000000f, 1.000000f, 0.000000f, 15.000000f);
						aSetLevelTimer(3.000000f, 6);
					}
					aUserVarSet(3, 2.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_041 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_041++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_2888::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 045: Gravity Room 2: The Floating Ball
				if((event_data->it_handle==Object_handles[95]) || (event_data->it_handle==Object_handles[96]))
				{
					if(event_data->it_handle==Object_handles[95])
					{
						aObjDestroy(event_data->it_handle);
						aGoalEnableDisable(1, Goal_indexes[15]);
					}
					if(event_data->it_handle==Object_handles[96])
					{
						aObjDestroy(event_data->it_handle);
						aGoalEnableDisable(1, Goal_indexes[16]);
					}
					aObjDestroy(data->me_handle);
					aGoalCompleted(Goal_indexes[17], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_045 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_045++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_09FD::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_SEEPLAYER:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_seeplayer;
 
				// Script 071: Shark Security 0: Detected Player
				if((qUserFlag(7)==false) && (qObjIsPlayer(event_data->it_handle)==true) && (qUserFlag(24)==false))
				{
					aUserFlagSet(7, 1);
					aAIGoalFollowPath(data->me_handle, Path_indexes[15], 11, 13, 11, 3, 4480, 9);
					aShowHUDMessage(Message_strings[36]);
					aSoundPlayObject(Sound_indexes[4], data->me_handle, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_071 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_071++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_48C5::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 108: Shark Security 0: Switch Hit
				if((ScriptActionCtr_108 < 1) && ((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(24)==false)))
				{
					aUserFlagSet(24, 1);
					aObjPlayAnim(Object_handles[97], 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], Object_handles[97], 1.000000f);
					aAIGoalFollowPath(Object_handles[18], Path_indexes[15], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[18], 3, 40.000000f);
					aSetLevelTimer(2.000000f, 10);
					
					// Increment the script action counter
					if(ScriptActionCtr_108 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_108++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_09FC::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_SEEPLAYER:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_seeplayer;
 
				// Script 067: Shark Security 1: Detected Player
				if((qUserFlag(6)==false) && (qObjIsPlayer(event_data->it_handle)==true) && (qUserFlag(25)==false))
				{
					aUserFlagSet(6, 1);
					aAIGoalFollowPath(data->me_handle, Path_indexes[14], 11, 13, 11, 3, 4480, 8);
					aShowHUDMessage(Message_strings[38]);
					aSoundPlayObject(Sound_indexes[4], data->me_handle, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_067 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_067++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_08D6::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 109: Shark Security 1: Switch Hit
				if((ScriptActionCtr_109 < 1) && ((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(25)==false)))
				{
					aUserFlagSet(25, 1);
					aObjPlayAnim(Object_handles[98], 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], Object_handles[98], 1.000000f);
					aSetLevelTimer(2.000000f, 9);
					aAIGoalFollowPath(Object_handles[17], Path_indexes[14], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[17], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_109 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_109++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_09FB::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_SEEPLAYER:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_seeplayer;
 
				// Script 062: Shark Security 2: Detected Player
				if((qUserFlag(5)==false) && (qObjIsPlayer(event_data->it_handle)==true) && (qUserFlag(26)==false))
				{
					aUserFlagSet(5, 1);
					aAIGoalFollowPath(data->me_handle, Path_indexes[13], 11, 13, 11, 3, 4480, 7);
					aShowHUDMessage(Message_strings[40]);
					aSoundPlayObject(Sound_indexes[4], data->me_handle, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_062 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_062++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_08DF::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 112: Shark Security 2: Switch Hit
				if((ScriptActionCtr_112 < 1) && ((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(26)==false)))
				{
					aUserFlagSet(26, 1);
					aObjPlayAnim(Object_handles[99], 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], Object_handles[99], 1.000000f);
					aSetLevelTimer(2.000000f, 8);
					aAIGoalFollowPath(Object_handles[16], Path_indexes[13], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[16], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_112 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_112++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_105C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_SEEPLAYER:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_seeplayer;
 
				// Script 052: Shark Security 3: Detected Player
				if((qUserFlag(4)==false) && (qObjIsPlayer(event_data->it_handle)==true) && (qUserFlag(27)==false))
				{
					aUserFlagSet(4, 1);
					aAIGoalFollowPath(data->me_handle, Path_indexes[12], 11, 13, 11, 3, 4480, 6);
					aShowHUDMessage(Message_strings[42]);
					aSoundPlayObject(Sound_indexes[4], data->me_handle, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_052 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_052++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_08E8::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 153: Shark Security 3: Switch Hit
				if((ScriptActionCtr_153 < 1) && ((qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true) && (qUserFlag(27)==false)))
				{
					aUserFlagSet(27, 1);
					aObjPlayAnim(Object_handles[100], 0, 1, 2.000000f, 0);
					aSoundPlayObject(Sound_indexes[0], Object_handles[100], 1.000000f);
					aSetLevelTimer(2.000000f, 7);
					aAIGoalFollowPath(Object_handles[15], Path_indexes[12], 13, 14, 13, 3, 65796, -1);
					aAIGoalSetCircleDistance(Object_handles[15], 3, 40.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_153 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_153++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_60EB::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 061: Big Fan 0: Deactivation
				if(1)
				{
					aShowHUDMessage(Message_strings[45]);
					aRoomChangeWind(Room_indexes[7], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					aRoomChangeWind(Room_indexes[8], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					aRoomChangeWind(Room_indexes[9], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					aObjDestroy(Object_handles[104]);
					aUserFlagSet(8, 0);
					aGoalCompleted(Goal_indexes[15], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_061 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_061++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_28EC::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 076: Big Fan 1: Deactivation
				if(1)
				{
					aShowHUDMessage(Message_strings[45]);
					aRoomChangeWind(Room_indexes[10], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					aRoomChangeWind(Room_indexes[11], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					aRoomChangeWind(Room_indexes[12], 0.000000f, 0.000000f, 0.000000f, 0.000000f, 2.000000f);
					aObjDestroy(Object_handles[105]);
					aUserFlagSet(9, 0);
					aGoalCompleted(Goal_indexes[16], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_076 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_076++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_118B::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 077: Big Fan 0: Kill
				if(((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true)) && (qUserFlag(8)==true))
				{
					aObjApplyDamage(event_data->it_handle, 210.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_077 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_077++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_118D::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 075: Big Fan 1: Kill
				if(((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true)) && (qUserFlag(9)==true))
				{
					aObjApplyDamage(event_data->it_handle, 210.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_075 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_075++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_118C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 074: Big Fan 2: Kill
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					aObjApplyDamage(event_data->it_handle, 210.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_074 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_074++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_098E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 073: Big Fan 3: Kill
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					aObjApplyDamage(event_data->it_handle, 210.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_073 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_073++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_11F7::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 057: Captain Gadget: Datalink Key
				if((qObjIsPlayer(event_data->it_handle)==true) && (qUserFlag(14)==false))
				{
					aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[46], 0);
					aShowHUDMessageObj(Message_strings[47], event_data->it_handle);
					aSoundPlayObject(Sound_indexes[1], event_data->it_handle, 1.000000f);
					aGoalCompleted(Goal_indexes[18], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_057 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_057++;
				}
			}
			break;
		case EVT_USE:
			{
				tOSIRISEVTUSE *event_data=&data->evt_use;
 
				// Script 058: Pole North Datalink: Used Captain's Key
				if(1)
				{
					if(qObjGetDistance(event_data->it_handle, Object_handles[177])<=100.000000f)
					{
						aStoreObjectInPositionClipboard(Object_handles[177]);
						aMoveObjectToPositionClipboard(data->me_handle);
						aObjGhostSet(0, data->me_handle);
						aSetObjectVelocity(Object_handles[20], 0.000000f, 0.000000f, 1.000000f, 0.000000f);
						aUserFlagSet(14, 1);
						aGoalCompleted(Goal_indexes[22], 1);
						if(qUserFlag(11)==false)
						{
							aUserFlagSet(11, 1);
							aShowHUDMessageI(Message_strings[53], qUserVarValueInt(15));
							aRoomSetFaceTexture(Room_indexes[51], 297, Texture_indexes[5]);
							aSetLevelTimer(qUserVarValue(15), 30);
							aTimerShow(30);
						}
						else {
							aShowHUDMessage(Message_strings[54]);
							aUserFlagSet(23, 1);
							aObjSpark(Object_handles[178], 10.000000f, 5.000000f);
							aCancelTimer(30);
							aRoomSetFaceTexture(Room_indexes[51], 297, Texture_indexes[6]);
							aRoomSetFaceTexture(Room_indexes[52], 323, Texture_indexes[6]);
						}
					}
					else {
						if(qObjGetDistance(event_data->it_handle, Object_handles[179])<=100.000000f)
						{
							aShowHUDMessage(Message_strings[55]);
						}
						else {
							aShowHUDMessage(Message_strings[56]);
						}
						aObjGhostSet(0, data->me_handle);
						aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[46], 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_058 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_058++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0983::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 055: Captain Gadget: Destroyed
				if(1)
				{
					aStoreObjectInPositionClipboard(data->me_handle);
					aMoveObjectToPositionClipboard(Object_handles[20]);
					aObjGhostSet(0, Object_handles[20]);
					aPortalRenderSet(0, 1, Room_indexes[50], 1);
					aPortalRenderSet(0, 2, Room_indexes[50], 1);
					aPortalRenderSet(0, 3, Room_indexes[50], 1);
					aPortalRenderSet(0, 4, Room_indexes[50], 1);
					aPortalRenderSet(0, 5, Room_indexes[50], 1);
					aPortalRenderSet(0, 6, Room_indexes[50], 1);
					aPortalRenderSet(0, 7, Room_indexes[50], 1);
					aPortalRenderSet(0, 8, Room_indexes[50], 1);
					aPortalRenderSet(0, 9, Room_indexes[50], 1);
					aPortalRenderSet(0, 10, Room_indexes[50], 1);
					aPortalRenderSet(0, 11, Room_indexes[50], 1);
					aPortalRenderSet(0, 12, Room_indexes[50], 1);
					aPortalRenderSet(0, 13, Room_indexes[50], 1);
					aPortalRenderSet(0, 14, Room_indexes[50], 1);
					aPortalRenderSet(0, 15, Room_indexes[50], 1);
					aPortalRenderSet(0, 16, Room_indexes[50], 1);
					aPortalRenderSet(0, 17, Room_indexes[50], 1);
					aSoundPlay2D(Sound_indexes[12], 1.000000f);
					aSetLevelTimer(30.000000f, 40);
					aGoalCompleted(Goal_indexes[19], 1);
					aDoorLockUnlock(0, Door_handles[6]);
					
					// Increment the script action counter
					if(ScriptActionCtr_055 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_055++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 166: NewCaptain: PowerUp
				if((ScriptActionCtr_166 < 1) && (1))
				{
					aObjMakeVulnerable(Object_handles[19]);
					aSetObjectTimer(Object_handles[154], 2.000000f, -1);
					aObjSpark(Object_handles[19], 50.000000f, 3.000000f);
					aCloakObject(Object_handles[19], 999.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_166 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_166++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1BB9::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 182: New Captain: Ghost
				if((qObjShields(Object_handles[19])>0.000000f) && (qObjExists(Object_handles[19])==true))
				{
					aEmitSparks(30.000000f, Object_handles[19]);
					aMiscShakeArea(Object_handles[19], 40.000000f, 200.000000f);
					aSetObjectTimer(Object_handles[155], qRandomValue(2.000000f, 6.000000f), -1);
					aRoomSetLightingFlicker(0, Room_indexes[49]);
					aSoundPlayObject(Sound_indexes[6], Object_handles[19], 1.000000f);
					aObjGhostSet(1, Object_handles[19]);
					
					// Increment the script action counter
					if(ScriptActionCtr_182 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_182++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_13AD::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 183: New Captain: Move to New Spot And Spark
				if((qObjShields(Object_handles[19])>0.000000f) && (qObjExists(Object_handles[19])==true))
				{
					aUserVarSet(22, qRandomValue(0.000000f, 9.500000f));
					if(qUserVarValue(22)<1.000000f)
					{
						aStoreObjectInPositionClipboard(Object_handles[154]);
						aMoveObjectToPositionClipboard(Object_handles[19]);
					}
					else {
						if(qUserVarValue(22)<2.000000f)
						{
							aStoreObjectInPositionClipboard(Object_handles[155]);
							aMoveObjectToPositionClipboard(Object_handles[19]);
						}
						else {
							if(qUserVarValue(22)<3.000000f)
							{
								aStoreObjectInPositionClipboard(Object_handles[156]);
								aMoveObjectToPositionClipboard(Object_handles[19]);
							}
							else {
								if(qUserVarValue(22)<4.000000f)
								{
									aStoreObjectInPositionClipboard(Object_handles[157]);
									aMoveObjectToPositionClipboard(Object_handles[19]);
								}
								else {
									if(qUserVarValue(22)<5.000000f)
									{
										aStoreObjectInPositionClipboard(Object_handles[158]);
										aMoveObjectToPositionClipboard(Object_handles[19]);
									}
									else {
										if(qUserVarValue(22)<6.000000f)
										{
											aStoreObjectInPositionClipboard(Object_handles[159]);
											aMoveObjectToPositionClipboard(Object_handles[19]);
										}
										else {
											if(qUserVarValue(22)<7.000000f)
											{
												aStoreObjectInPositionClipboard(Object_handles[160]);
												aMoveObjectToPositionClipboard(Object_handles[19]);
											}
											else {
												if(qUserVarValue(22)<8.000000f)
												{
													aStoreObjectInPositionClipboard(Object_handles[161]);
													aMoveObjectToPositionClipboard(Object_handles[19]);
												}
												else {
													aStoreObjectInPositionClipboard(Object_handles[162]);
													aMoveObjectToPositionClipboard(Object_handles[19]);
												}
											}
										}
									}
								}
							}
						}
					}
					if(qUserVarValue(22)<8.000000f)
					{
						aSetObjectTimer(Object_handles[156], 1.000000f, -1);
					}
					else {
						aSetObjectTimer(Object_handles[156], 1.000000f, -1);
					}
					aRoomSetLightingFlicker(1, Room_indexes[49]);
					aObjSpark(Object_handles[19], 50.000000f, 6.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_183 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_183++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_13AC::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 184: New Captain: UnCloak/UnGhost
				if((qObjShields(Object_handles[19])>0.000000f) && (qObjExists(Object_handles[19])==true))
				{
					aMiscShakeArea(Object_handles[19], 40.000000f, 200.000000f);
					aSetObjectTimer(Object_handles[157], 1.500000f, -1);
					aObjGhostSet(0, Object_handles[19]);
					aSoundPlayObject(Sound_indexes[7], Object_handles[19], 1.000000f);
					aUnCloakObject(Object_handles[19]);
					
					// Increment the script action counter
					if(ScriptActionCtr_184 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_184++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_13AB::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 185: New Captain: FireWeapon
				if((qObjShields(Object_handles[19])>0.000000f) && (qObjExists(Object_handles[19])==true))
				{
					if(qRandomChance(0.300000f)==true)
					{
						aObjFireWeapon("Smart", 0, Object_handles[19]);
						aSoundPlayObject(Sound_indexes[8], Object_handles[19], 1.000000f);
					}
					else {
						aObjFireWeapon("Impact Mortar", 0, Object_handles[19]);
						aSoundPlayObject(Sound_indexes[9], Object_handles[19], 1.000000f);
					}
					aSetObjectTimer(Object_handles[158], 1.500000f, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_185 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_185++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_13AA::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 186: New Captain: Cloak
				if((qObjShields(Object_handles[19])>0.000000f) && (qObjExists(Object_handles[19])==true))
				{
					aSoundPlayObject(Sound_indexes[10], Object_handles[19], 1.000000f);
					aCloakObject(Object_handles[19], 999.000000f);
					aSetObjectTimer(Object_handles[154], 1.000000f, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_186 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_186++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0A2E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 097: Captain Gadget:  Intro Cinematic Cut 3
				if(1)
				{
					aStoreObjectInPositionClipboard(Object_handles[165]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(0);
					aComplexCinematicTrack(Object_handles[166], 0.000000f, 1.000000f);
					aComplexCinematicCameraAtStoredPt(Room_indexes[49]);
					aComplexCinematicEndTrans(3);
					aComplexCinematicEnd(Message_strings[2], 6.000000f);
					aAISetMaxSpeed(Object_handles[19], 20.000000f);
					aAIGoalFollowPath(Object_handles[19], Path_indexes[18], 3, 7, 3, 3, 2101508, -1);
					aAIGoalSetCircleDistance(Object_handles[19], 3, 0.000000f);
					aDoorActivate(Door_handles[7]);
					
					// Increment the script action counter
					if(ScriptActionCtr_097 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_097++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0A30::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 098: Captain Gadget: Intro Cinematic Cut 4
				if(1)
				{
					aStoreObjectInPositionClipboard(Object_handles[167]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicTrack(Object_handles[168], 0.000000f, 1.000000f);
					aComplexCinematicCameraAtStoredPt(Room_indexes[50]);
					aComplexCinematicEndTrans(3);
					aComplexCinematicEnd(Message_strings[2], 8.000000f);
					aAISetMaxSpeed(Object_handles[19], 10.000000f);
					aAIGoalFollowPathSimple(Object_handles[19], Path_indexes[19], 3145984, 10, 3);
					aAIGoalSetCircleDistance(Object_handles[19], 3, 0.000000f);
					aPortalRenderSet(0, 1, Room_indexes[50], 1);
					aPortalRenderSet(0, 2, Room_indexes[50], 1);
					aPortalRenderSet(0, 3, Room_indexes[50], 1);
					aPortalRenderSet(0, 4, Room_indexes[50], 1);
					aPortalRenderSet(0, 5, Room_indexes[50], 1);
					aPortalRenderSet(0, 6, Room_indexes[50], 1);
					aPortalRenderSet(0, 7, Room_indexes[50], 1);
					aPortalRenderSet(0, 8, Room_indexes[50], 1);
					aPortalRenderSet(0, 9, Room_indexes[50], 1);
					aPortalRenderSet(0, 10, Room_indexes[50], 1);
					aPortalRenderSet(0, 11, Room_indexes[50], 1);
					aPortalRenderSet(0, 12, Room_indexes[50], 1);
					aPortalRenderSet(0, 13, Room_indexes[50], 1);
					aPortalRenderSet(0, 14, Room_indexes[50], 1);
					aPortalRenderSet(0, 15, Room_indexes[50], 1);
					aPortalRenderSet(0, 16, Room_indexes[50], 1);
					aPortalRenderSet(0, 17, Room_indexes[50], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_098 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_098++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0A33::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 103: First Mate: Datalink Key
				if((qObjIsPlayer(event_data->it_handle)==true) && (qUserFlag(15)==false))
				{
					aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[50], 0);
					aShowHUDMessageObj(Message_strings[51], event_data->it_handle);
					aSoundPlayObject(Sound_indexes[1], event_data->it_handle, 1.000000f);
					aGoalCompleted(Goal_indexes[20], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_103 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_103++;
				}
			}
			break;
		case EVT_USE:
			{
				tOSIRISEVTUSE *event_data=&data->evt_use;
 
				// Script 107: Pole South Datalink: Used First Mate's Key
				if(1)
				{
					if(qObjGetDistance(event_data->it_handle, Object_handles[179])<=100.000000f)
					{
						aStoreObjectInPositionClipboard(Object_handles[179]);
						aMoveObjectToPositionClipboard(data->me_handle);
						aObjGhostSet(0, data->me_handle);
						aSetObjectVelocity(Object_handles[21], 0.000000f, 0.000000f, 1.000000f, 0.000000f);
						aUserFlagSet(15, 1);
						aGoalCompleted(Goal_indexes[23], 1);
						if(qUserFlag(11)==false)
						{
							aUserFlagSet(11, 1);
							aShowHUDMessageI(Message_strings[53], qUserVarValueInt(15));
							aRoomSetFaceTexture(Room_indexes[52], 323, Texture_indexes[8]);
							aSetLevelTimer(qUserVarValue(15), 30);
							aTimerShow(30);
						}
						else {
							aShowHUDMessage(Message_strings[54]);
							aUserFlagSet(23, 1);
							aObjSpark(Object_handles[184], 10.000000f, 5.000000f);
							aCancelTimer(30);
							aGoalItemCompleted(Goal_indexes[24], 1, 1);
							aRoomSetFaceTexture(Room_indexes[51], 297, Texture_indexes[6]);
							aRoomSetFaceTexture(Room_indexes[52], 323, Texture_indexes[6]);
						}
					}
					else {
						if(qObjGetDistance(event_data->it_handle, Object_handles[177])<=100.000000f)
						{
							aShowHUDMessage(Message_strings[57]);
						}
						else {
							aShowHUDMessage(Message_strings[58]);
						}
						aObjGhostSet(0, data->me_handle);
						aAddObjectToInventoryNamed(data->me_handle, event_data->it_handle, Message_strings[50], 0);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_107 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_107++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0982::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 101: First Mate: Destroyed
				if(1)
				{
					aStoreObjectInPositionClipboard(data->me_handle);
					aMoveObjectToPositionClipboard(Object_handles[21]);
					aObjGhostSet(0, Object_handles[21]);
					aGoalCompleted(Goal_indexes[21], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_101 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_101++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 196: First Mate: All Destroyed
				if(1)
				{
					aDoorLockUnlock(0, Door_handles[8]);
					aSoundPlayObject(Sound_indexes[7], data->me_handle, 1.000000f);
					aObjGhostSet(0, data->me_handle);
					aObjMakeVulnerable(data->me_handle);
					aUnCloakObject(data->me_handle);
					aObjKill(data->me_handle, 1, 1, 2293872, 2.500000f, 2.500000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_196 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_196++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_12DF::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 187: First Mate: Entered Room
				if((ScriptActionCtr_187 < 1) && (1))
				{
					aCloakObject(Object_handles[22], 99999.000000f);
					aSoundPlayObject(Sound_indexes[10], Object_handles[22], 1.000000f);
					aObjGhostSet(0, Object_handles[169]);
					aObjGhostSet(0, Object_handles[170]);
					aObjGhostSet(0, Object_handles[171]);
					aObjGhostSet(0, Object_handles[172]);
					aObjGhostSet(0, Object_handles[173]);
					aUnCloakObject(Object_handles[169]);
					aUnCloakObject(Object_handles[170]);
					aUnCloakObject(Object_handles[171]);
					aUnCloakObject(Object_handles[172]);
					aUnCloakObject(Object_handles[173]);
					aSetObjectTimer(Object_handles[175], 3.000000f, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_187 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_187++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_12E1::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 202: First Mate: Ghost (one time)
				if((ScriptActionCtr_202 < 1) && (1))
				{
					aObjGhostSet(1, Object_handles[22]);
					
					// Increment the script action counter
					if(ScriptActionCtr_202 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_202++;
				}
 
				// Script 189: First Mate: All Wiggle
				if(1)
				{
					aSoundPlayObject(Sound_indexes[12], Object_handles[22], 1.000000f);
					aSetObjectTimer(Object_handles[176], 2.000000f, -1);
					aObjMakeInvuln(Object_handles[173], 20);
					aObjMakeInvuln(Object_handles[172], 20);
					aObjMakeInvuln(Object_handles[171], 20);
					aObjMakeInvuln(Object_handles[170], 20);
					aObjMakeInvuln(Object_handles[169], 20);
					aObjDeform(Object_handles[173], 0.400000f, 2.000000f);
					aObjDeform(Object_handles[172], 0.400000f, 2.000000f);
					aObjDeform(Object_handles[171], 0.400000f, 2.000000f);
					aObjDeform(Object_handles[170], 0.400000f, 2.000000f);
					aObjDeform(Object_handles[169], 0.400000f, 2.000000f);
					aPhysFlags(1, 58787840, Object_handles[173]);
					aPhysFlags(1, 58787840, Object_handles[172]);
					aPhysFlags(1, 58787840, Object_handles[171]);
					aPhysFlags(1, 58787840, Object_handles[170]);
					aPhysFlags(1, 58787840, Object_handles[169]);
					
					// Increment the script action counter
					if(ScriptActionCtr_189 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_189++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_12DE::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 190: First Mate: ChooseUnWiggle
				if(1)
				{
					aUserVarSet(24, qRandomValue(0.000000f, 5.000000f));
					if((qUserVarValue(24)<1.000000f) && (qObjExists(Object_handles[173])==false))
					{
						aUserVarSet(24, 1.500000f);
					}
					if((qUserVarValue(24)<2.000000f) && (qObjExists(Object_handles[172])==false) && (qUserVarValue(24)>=1.000000f))
					{
						aUserVarSet(24, 2.500000f);
					}
					if((qUserVarValue(24)<3.000000f) && (qObjExists(Object_handles[171])==false) && (qUserVarValue(24)>=2.000000f))
					{
						aUserVarSet(24, 3.500000f);
					}
					if((qUserVarValue(24)<4.000000f) && (qObjExists(Object_handles[170])==false) && (qUserVarValue(24)>=3.000000f))
					{
						aUserVarSet(24, 4.500000f);
					}
					if((qUserVarValue(24)<=5.000000f) && (qObjExists(Object_handles[169])==false) && (qUserVarValue(24)>=4.000000f))
					{
						aUserVarSet(24, 3.500000f);
					}
					if((qUserVarValue(24)<4.000000f) && (qObjExists(Object_handles[170])==false) && (qUserVarValue(24)>=3.000000f))
					{
						aUserVarSet(24, 2.500000f);
					}
					if((qUserVarValue(24)<3.000000f) && (qObjExists(Object_handles[171])==false) && (qUserVarValue(24)>=2.000000f))
					{
						aUserVarSet(24, 1.500000f);
					}
					if((qUserVarValue(24)<2.000000f) && (qObjExists(Object_handles[172])==false) && (qUserVarValue(24)>=1.000000f))
					{
						aUserVarSet(24, 0.500000f);
					}
					if((qUserVarValue(24)<1.000000f) && (qObjExists(Object_handles[173])==false))
					{
						aObjSpark(Object_handles[22], 50.000000f, 3.000000f);
						aSetObjectTimer(Object_handles[22], 1.000000f, -1);
					}
					else {
						aSetObjectTimer(Object_handles[175], 4.000000f, -1);
					}
					aSetObjectTimer(Object_handles[173], 0.000000f, -1);
					aSetObjectTimer(Object_handles[172], 0.000000f, -1);
					aSetObjectTimer(Object_handles[171], 0.000000f, -1);
					aSetObjectTimer(Object_handles[170], 0.000000f, -1);
					aSetObjectTimer(Object_handles[169], 0.000000f, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_190 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_190++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1289::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 197: First Mate: Destroy 1
				if(1)
				{
					aObjSpark(Object_handles[22], 20.000000f, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_197 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_197++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 191: First Mate: Timer 1
				if(1)
				{
					if((qUserVarValue(24)>1.000000f) && (1))
					{
						aObjDeform(data->me_handle, 0.400000f, 4.000000f);
						aPhysFlags(1, 58787840, data->me_handle);
					}
					else {
						aObjMakeVulnerable(data->me_handle);
						aPhysFlags(0, 65536, data->me_handle);
						aObjSpark(data->me_handle, 10.000000f, 4.000000f);
						aSoundPlayObject(Sound_indexes[9], data->me_handle, 1.000000f);
						aObjFireWeapon("Impact Mortar", 0, data->me_handle);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_191 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_191++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1290::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 201: First Mate: Destroy 5
				if(1)
				{
					aObjSpark(Object_handles[22], 20.000000f, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_201 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_201++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 195: First Mate: Timer 5
				if(1)
				{
					if((qUserVarValue(24)<=4.000000f) && (1))
					{
						aObjDeform(data->me_handle, 0.400000f, 4.000000f);
						aPhysFlags(1, 58787840, data->me_handle);
					}
					else {
						aObjMakeVulnerable(data->me_handle);
						aPhysFlags(0, 65536, data->me_handle);
						aObjSpark(data->me_handle, 10.000000f, 4.000000f);
						aSoundPlayObject(Sound_indexes[9], data->me_handle, 1.000000f);
						aObjFireWeapon("Impact Mortar", 0, data->me_handle);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_195 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_195++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_128E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 200: First Mate: Destroy 4
				if(1)
				{
					aObjSpark(Object_handles[22], 20.000000f, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_200 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_200++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 194: First Mate: Timer 4
				if(1)
				{
					if((qUserVarValue(24)>4.000000f) || (qUserVarValue(24)<=3.000000f))
					{
						aObjDeform(data->me_handle, 0.400000f, 4.000000f);
						aPhysFlags(1, 58787840, data->me_handle);
					}
					else {
						aObjMakeVulnerable(data->me_handle);
						aPhysFlags(0, 65536, data->me_handle);
						aObjSpark(data->me_handle, 10.000000f, 4.000000f);
						aSoundPlayObject(Sound_indexes[9], data->me_handle, 1.000000f);
						aObjFireWeapon("Impact Mortar", 0, data->me_handle);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_194 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_194++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_128C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 199: First Mate: Destroy 3
				if(1)
				{
					aObjSpark(Object_handles[22], 20.000000f, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_199 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_199++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 193: First Mate: Timer 3
				if(1)
				{
					if((qUserVarValue(24)>3.000000f) || (qUserVarValue(24)<=2.000000f))
					{
						aObjDeform(data->me_handle, 0.400000f, 4.000000f);
						aPhysFlags(1, 58787840, data->me_handle);
					}
					else {
						aObjMakeVulnerable(data->me_handle);
						aPhysFlags(0, 65536, data->me_handle);
						aObjSpark(data->me_handle, 10.000000f, 4.000000f);
						aSoundPlayObject(Sound_indexes[9], data->me_handle, 1.000000f);
						aObjFireWeapon("Impact Mortar", 0, data->me_handle);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_193 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_193++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_128A::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_DESTROY:
			{
				tOSIRISEVTDESTROY *event_data=&data->evt_destroy;
 
				// If destroy event is due to level ending, don't run scripts
				if(!event_data->is_dying) break;
 
				// Script 198: First Mate: Destroy 2
				if(1)
				{
					aObjSpark(Object_handles[22], 20.000000f, 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_198 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_198++;
				}
			}
			break;
		case EVT_TIMER:
			{
				tOSIRISEVTTIMER *event_data=&data->evt_timer;
 
				// Script 192: First Mate: Timer 2
				if(1)
				{
					if((qUserVarValue(24)>2.000000f) || (qUserVarValue(24)<=1.000000f))
					{
						aObjDeform(data->me_handle, 0.400000f, 4.000000f);
						aPhysFlags(1, 58787840, data->me_handle);
					}
					else {
						aObjMakeVulnerable(data->me_handle);
						aPhysFlags(0, 65536, data->me_handle);
						aObjSpark(data->me_handle, 10.000000f, 4.000000f);
						aSoundPlayObject(Sound_indexes[9], data->me_handle, 1.000000f);
						aObjFireWeapon("Impact Mortar", 0, data->me_handle);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_192 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_192++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_18A0::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 105: Pole North Data Arm Hit
				if((qObjIsPlayer(event_data->it_handle)==true) && (qGoalCompleted(Goal_indexes[24])==false))
				{
					if(qUserFlag(23)==true)
					{
						aObjPlayAnim(data->me_handle, 1, 9, 3.000000f, 0);
						aSoundPlayObject(Sound_indexes[14], data->me_handle, 1.000000f);
						aShowHUDMessage(Message_strings[60]);
						aGoalCompleted(Goal_indexes[24], 1);
					}
					else {
						aShowHUDMessage(Message_strings[61]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_105 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_105++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_083D::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 106: Pole South Data Arm Hit
				if((qObjIsPlayer(event_data->it_handle)==true) && (qGoalCompleted(Goal_indexes[24])==false))
				{
					if(qUserFlag(23)==true)
					{
						aObjPlayAnim(data->me_handle, 1, 9, 3.000000f, 0);
						aSoundPlayObject(Sound_indexes[14], data->me_handle, 1.000000f);
						aShowHUDMessage(Message_strings[60]);
						aGoalCompleted(Goal_indexes[24], 1);
					}
					else {
						aShowHUDMessage(Message_strings[61]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_106 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_106++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0B86::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 130: Captain and Trooper Cinematic
				if(1)
				{
					aStoreObjectInPositionClipboard(Object_handles[206]);
					aObjPlayAnim(Object_handles[7], 0, 130, 14.000000f, 0);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicTrack(Object_handles[207], 0.000000f, 1.000000f);
					aComplexCinematicText(0.200000f, 0.900000f);
					aComplexCinematicCameraAtStoredPt(Room_indexes[53]);
					aComplexCinematicEndTrans(0);
					aComplexCinematicEnd(Message_strings[65], 8.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_130 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_130++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0B80::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 131: Captain and Trooper Cinematic Cut 2
				if(1)
				{
					aStoreObjectInPositionClipboard(Object_handles[208]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(0);
					aComplexCinematicTrack(Object_handles[209], 0.000000f, 1.000000f);
					aComplexCinematicText(0.400000f, 0.900000f);
					aComplexCinematicCameraAtStoredPt(Room_indexes[53]);
					aComplexCinematicEndTrans(3);
					aComplexCinematicEnd(Message_strings[66], 7.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_131 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_131++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0B82::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 148: Captain and Trooper Cinematic Done
				if(1)
				{
					aObjGhostSet(1, Object_handles[7]);
					aObjSetMovementType(Object_handles[203], 1);
					aObjSetMovementType(Object_handles[204], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_148 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_148++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_109F::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 137: Escape Chute: The Door
				if(qGoalEnabled(Goal_indexes[25])==false)
				{
					if(qObjIsPlayerOrPlayerWeapon(event_data->it_handle)==true)
					{
						aSoundPlayObject(Sound_indexes[15], Object_handles[210], 1.000000f);
						aShowHUDMessage(Message_strings[67]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_137 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_137++;
					
					return CONTINUE_DEFAULT;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_1153::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_AIN_MOVIE_END:
			{
				tOSIRISEVTAINOTIFY *event_data=&data->evt_ain_movie_end;
 
				// Script 155: Escape Chute: Junction End Cinematic
				if(1)
				{
					aSetLevelTimer(1.500000f, 43);
					
					// Increment the script action counter
					if(ScriptActionCtr_155 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_155++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_115E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 160: Gravity Room 1: Fans kill things
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					aObjApplyDamage(event_data->it_handle, 20.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_160 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_160++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_095F::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 161: Gravity Room 1: Fans kill things 2
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					aObjApplyDamage(event_data->it_handle, 20.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_161 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_161++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0960::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 158: Gravity Room 2: Fans kill things
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					aObjApplyDamage(event_data->it_handle, 20.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_158 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_158++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short CustomObjectScript_0961::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 159: Gravity Room 2: Fans kill things 2
				if((qObjIsPlayer(event_data->it_handle)==true) || (qObjIsType(event_data->it_handle, 2)==true))
				{
					aObjApplyDamage(event_data->it_handle, 20.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_159 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_159++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0012::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 142: Hangar 1A: Suckout
				if(1)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_142 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_142++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0022::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 211: Hangar 1A: Player Exited
				if((ScriptActionCtr_211 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					aGoalCompleted(Goal_indexes[1], 1);
					aGoalEnableDisable(0, Goal_indexes[0]);
					aGoalEnableDisable(1, Goal_indexes[2]);
					aGoalEnableDisable(1, Goal_indexes[3]);
					aShowHUDMessage(Message_strings[6]);
					
					// Increment the script action counter
					if(ScriptActionCtr_211 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_211++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0011::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 141: Hangar2A: Suckout Death
				if(1)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_141 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_141++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0023::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 212: Hangar 2A: Player Exited
				if((ScriptActionCtr_212 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					aGoalCompleted(Goal_indexes[3], 1);
					aGoalEnableDisable(0, Goal_indexes[2]);
					
					// Increment the script action counter
					if(ScriptActionCtr_212 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_212++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0000::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 007: Ball Puzzle: Ball In Goal
				if(qObjIsType(event_data->it_handle, 11)==true)
				{
					aMatcenSetState(1, Matcen_indexes[3]);
					
					// Increment the script action counter
					if(ScriptActionCtr_007 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_007++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0021::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 207: Warehouse: Player Entered
				if((ScriptActionCtr_207 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					aCinematicSimple(Path_indexes[6], Message_strings[14], Object_handles[12], 10.000000f, 1);
					aSetLevelTimer(3.000000f, 48);
					aGoalCompleted(Goal_indexes[5], 1);
					aGoalEnableDisable(1, Goal_indexes[6]);
					
					// Increment the script action counter
					if(ScriptActionCtr_207 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_207++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0010::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 117: Junction 3: Ball In Hole
				if(qObjIsType(event_data->it_handle, 11)==true)
				{
					aObjDestroy(event_data->it_handle);
					aMatcenSetState(1, Matcen_indexes[9]);
					aCancelTimer(36);
					
					// Increment the script action counter
					if(ScriptActionCtr_117 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_117++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0002::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 030: Hazardous Waste: Guard Movie
				if((ScriptActionCtr_030 < 1) && (1))
				{
					aUserVarSet(1, 1.000000f);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicScreenMode(0);
					aComplexCinematicTextMode(4);
					aComplexCinematicTrack(Object_handles[83], 0.000000f, 1.000000f);
					aComplexCinematicTextLayoutMode(32);
					aComplexCinematicEndTrans(0);
					aComplexCinematicCameraOnPath(Path_indexes[11]);
					aComplexCinematicEnd(Message_strings[30], 5.000000f);
					aAISetState(1, Object_handles[13]);
					aAISetState(1, Object_handles[14]);
					aAIGoalFollowPathSimple(Object_handles[13], Path_indexes[0], 3149828, -1, 3);
					aAIGoalFollowPathSimple(Object_handles[14], Path_indexes[1], 11538436, -1, 3);
					aAIGoalSetCircleDistance(Object_handles[13], 3, 0.000000f);
					aAIGoalSetCircleDistance(Object_handles[14], 3, 0.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_030 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_030++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_001E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 204: Gravity Room 2: Puzzle Hint
				if((ScriptActionCtr_204 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					aShowHUDMessage(Message_strings[35]);
					
					// Increment the script action counter
					if(ScriptActionCtr_204 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_204++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0003::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 046: Gravity Room 1: Trigger 1 Bot Die
				if(1)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_046 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_046++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0004::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 047: Gravity Room 1: Trigger 2 Bot Die
				if(1)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_047 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_047++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0005::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 048: Gravity Room 1: Trigger 3 Bot Die
				if(1)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_048 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_048++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0006::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 049: Gravity Room 1: Trigger 4 Bot Die
				if(1)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_049 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_049++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0007::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 072: Shark Security 0: Activate Guard AI
				if((ScriptActionCtr_072 < 1) && (1))
				{
					aAISetState(1, Object_handles[15]);
					aAISetState(1, Object_handles[16]);
					aAISetState(1, Object_handles[17]);
					aAISetState(1, Object_handles[18]);
					aAIGoalFollowPath(Object_handles[15], Path_indexes[12], 1, 11, 1, 3, 10490112, -1);
					aAIGoalFollowPath(Object_handles[16], Path_indexes[13], 1, 11, 1, 3, 10490112, -1);
					aAIGoalFollowPath(Object_handles[17], Path_indexes[14], 1, 11, 1, 3, 10490112, -1);
					aAIGoalFollowPath(Object_handles[18], Path_indexes[15], 1, 11, 1, 3, 10490112, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_072 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_072++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0008::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 051: Level Sequencing: Lower Station Lockdown
				if((ScriptActionCtr_051 < 1) && (1))
				{
					aObjPlayAnim(Object_handles[101], 0, 1, qUserVarValue(6), 0);
					aObjPlayAnim(Object_handles[102], 0, 1, qUserVarValue(6), 0);
					aObjPlayAnim(Object_handles[103], 0, 1, qUserVarValue(6), 0);
					aUserVarSet(11, 1.000000f);
					aSetLevelTimer(qUserVarValue(6), 11);
					aSoundPlaySteaming("VoxMerc3RPA5.osf", 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_051 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_051++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_001F::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 205: Big Fan 0: Hint
				if((ScriptActionCtr_205 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					if(qObjExists(Object_handles[10])==true)
					{
						aShowHUDMessage(Message_strings[44]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_205 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_205++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0020::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 206: Big Fan 1: Hint
				if((ScriptActionCtr_206 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					if(qObjExists(Object_handles[11])==true)
					{
						aShowHUDMessage(Message_strings[44]);
					}
					
					// Increment the script action counter
					if(ScriptActionCtr_206 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_206++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0025::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 178: Cooling Fan: Death Trigger 02
				if(qObjIsPlayer(event_data->it_handle)==true)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_178 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_178++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0024::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 177: Cooling Fan: Death Trigger 03
				if(qObjIsPlayer(event_data->it_handle)==true)
				{
					aObjDestroy(event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_177 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_177++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_000C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 094: Captain Gadget: Intro Cinematic Cut 1 - Old
				if((ScriptActionCtr_094 < 1) && (1==false))
				{
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicTrack(Object_handles[153], 0.000000f, 1.000000f);
					aComplexCinematicCameraOnPath(Path_indexes[16]);
					aComplexCinematicEndTrans(0);
					aComplexCinematicEnd(Message_strings[2], 4.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_094 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_094++;
				}
 
				// Script 179: NewCaptain: IntroStart
				if((ScriptActionCtr_179 < 1) && (1))
				{
					aCinematicSimple(Path_indexes[17], Message_strings[48], Object_handles[19], 6.000000f, 1);
					aObjPlayAnim(Object_handles[19], 0, 5, 2.000000f, 1);
					aDoorSetPos(Door_handles[6], 0.000000f);
					aDoorLockUnlock(1, Door_handles[6]);
					aObjSetShields(Object_handles[19], qMathAddFloat(250.000000f, qMathMulFloat(100.000000f, qMathIntToFloat(qGetDifficulty()))));
					aSetObjectTimer(Object_handles[19], 3.500000f, -1);
					
					// Increment the script action counter
					if(ScriptActionCtr_179 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_179++;
				}
 
				// Script 096: Captain Gadget: Intro Cinematic Cut 2
				if(0==true)
				{
					aStoreObjectInPositionClipboard(Object_handles[163]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicText(0.200000f, 0.800000f);
					aComplexCinematicTrack(Object_handles[164], 0.000000f, 1.000000f);
					aComplexCinematicCameraAtStoredPt(Room_indexes[49]);
					aComplexCinematicEndTrans(0);
					aComplexCinematicEnd(Message_strings[48], 6.000000f);
					aAISetState(1, Object_handles[19]);
					aAISetMaxSpeed(Object_handles[19], 10.000000f);
					aAIGoalFollowPath(Object_handles[19], Path_indexes[18], 1, 3, 1, 3, 3145988, -1);
					aAIGoalSetCircleDistance(Object_handles[19], 3, 0.000000f);
					aSoundPlayObject(Sound_indexes[11], Object_handles[19], 1.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_096 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_096++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_001D::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 174: Captain Gadget: Player Entered Bunker
				if((ScriptActionCtr_174 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					aShowHUDMessage(Message_strings[49]);
					aUserVarInc(21);
					aDoorSetPos(Door_handles[6], 0.000000f);
					aDoorLockUnlock(1, Door_handles[6]);
					
					// Increment the script action counter
					if(ScriptActionCtr_174 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_174++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_000D::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 180: First Mate: INTRO
				if((ScriptActionCtr_180 < 1) && (1))
				{
					aCinematicSimple(Path_indexes[21], Message_strings[52], Object_handles[22], 6.000000f, 1);
					aSetObjectTimer(Object_handles[174], 3.000000f, -1);
					aDoorSetPos(Door_handles[8], 0.000000f);
					aDoorLockUnlock(1, Door_handles[8]);
					
					// Increment the script action counter
					if(ScriptActionCtr_180 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_180++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_000E::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 129: Captain and Trooper Init Cinematic
				if((ScriptActionCtr_129 < 1) && (1))
				{
					aSetLevelTimer(3.000000f, 34);
					aObjGhostSet(0, Object_handles[7]);
					aObjSetMovementType(Object_handles[203], 0);
					aObjSetMovementType(Object_handles[204], 0);
					
					// Increment the script action counter
					if(ScriptActionCtr_129 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_129++;
				}
 
				// Script 135: Captain And Trooper Incoming
				if(1)
				{
					aObjGhostSet(0, Object_handles[7]);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicTrack(Object_handles[205], 0.000000f, 1.000000f);
					aComplexCinematicText(0.200000f, 0.700000f);
					aComplexCinematicCameraOnPath(Path_indexes[22]);
					aComplexCinematicTextLayoutMode(32);
					aComplexCinematicEndTrans(3);
					aComplexCinematicEnd(Message_strings[30], 5.000000f);
					
					// Increment the script action counter
					if(ScriptActionCtr_135 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_135++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_000F::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 138: Escape Chute:  PreStart
				if((ScriptActionCtr_138 < 1) && (qObjIsPlayer(event_data->it_handle)==true))
				{
					aObjMakeInvuln(event_data->it_handle, 50000);
					aObjGhostSet(0, Object_handles[2]);
					aStoreObjectInPositionClipboard(Object_handles[55]);
					aMoveObjectToPositionClipboard(Object_handles[2]);
					aObjGhostSet(0, Object_handles[8]);
					aObjGhostSet(0, Object_handles[9]);
					aAISetState(1, Object_handles[8]);
					aAISetState(1, Object_handles[9]);
					aAISetMaxSpeed(Object_handles[8], 8.000000f);
					aAISetMaxSpeed(Object_handles[9], 8.000000f);
					aPhysFlags(1, 65536, Object_handles[8]);
					aAIGoalFollowPathSimple(Object_handles[8], Path_indexes[23], 2101508, 1, 3);
					aAIGoalFollowPathSimple(Object_handles[9], Path_indexes[24], 2101508, 1, 3);
					aAIGoalSetCircleDistance(Object_handles[8], 3, 0.000000f);
					aAIGoalSetCircleDistance(Object_handles[9], 3, 0.000000f);
					aObjSaveHandle(event_data->it_handle, 8);
					aComplexCinematicStart();
					aComplexCinematicStartTrans(1);
					aComplexCinematicTextLayoutMode(64);
					aComplexCinematicEndTrans(3);
					aComplexCinematicTrack(Object_handles[211], 0.000000f, 1.000000f);
					aComplexCinematicText(0.200000f, 0.600000f);
					aComplexCinematicCameraOnPath(Path_indexes[25]);
					aComplexCinematicEnd(Message_strings[30], 10.300000f);
					aUserVarSet(17, 0.000000f);
					aSetLevelTimer(2.000000f, 44);
					
					// Increment the script action counter
					if(ScriptActionCtr_138 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_138++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0014::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 152: Exit
				if((ScriptActionCtr_152 < 1) && (1))
				{
					aStartEndlevelSequence(Object_handles[213], Path_indexes[26], 8.000000f, Message_strings[2]);
					aTurnOnSpew(Object_handles[214], -1, 2, 0.000000f, 0.000000f, 65536, 0, 4.000000f, 0.150000f, 30.000000f, 25.000000f, 80.000000f, 1, -1);
					aTurnOnSpew(Object_handles[215], -1, 2, 0.000000f, 0.000000f, 65536, 0, 3.000000f, 0.150000f, 30.000000f, 20.000000f, 10.000000f, 1, -1);
					aGoalCompleted(Goal_indexes[25], 1);
					
					// Increment the script action counter
					if(ScriptActionCtr_152 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_152++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0017::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 167: Music Region: Puzzle
				if(1)
				{
					aMusicSetRegion(2, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_167 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_167++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0016::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 168: Music Region: Hangars
				if(1)
				{
					aMusicSetRegion(1, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_168 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_168++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0018::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 170: Puzzle to Giant Shaft
				if(1)
				{
					aMusicSetRegion(3, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_170 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_170++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_001C::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 169: Music Region: Barracks to Giant Shaft
				if(1)
				{
					aMusicSetRegion(3, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_169 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_169++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_0019::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 171: Music Region: Giant Shaft to Barracks
				if(1)
				{
					aMusicSetRegion(4, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_171 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_171++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_001A::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 172: Music Region: Barracks to Poles
				if(1)
				{
					aMusicSetRegion(5, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_172 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_172++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

short TriggerScript_001B::CallEvent(int event,tOSIRISEventInfo *data)
{
	switch(event) { 
		case EVT_COLLIDE:
			{
				tOSIRISEVTCOLLIDE *event_data=&data->evt_collide;
 
				// Script 173: Music Region: Poles to Barracks
				if(1)
				{
					aMusicSetRegion(4, event_data->it_handle);
					
					// Increment the script action counter
					if(ScriptActionCtr_173 < MAX_ACTION_CTR_VALUE) ScriptActionCtr_173++;
				}
			}
			break;
	}
	return CONTINUE_CHAIN|CONTINUE_DEFAULT;
}

 
 
/*********************************************************
Script Save Block: DO NOT TOUCH ANYTHING IN THIS BLOCK!!! 
**********************************************************
$$SCRIPT_BLOCK_START
 
VERSION		3
NEXT_ID		213
 
// UserType value blocks
$$UTYPE_VALS_START UserVar
0:Hangar2AFlamePurgeCounter
1:HazardCinematicCutCounter
2:GravityRoom1State
3:GravityRoom2State
4:TeslaLightningTime
5:TeslaRecoilTime
6:TeslaChargeupTime
7:TeslaHoldTime
8:TeslaBoltThickness
9:TeslaBoltSlideTime
10:TeslaBoltSlideTime2
11:TeslaWindY
12:TeslaWeakWind
13:TeslaStrongWind
14:DatalinkLoadCounter
15:PoleDatalinkTime
16:EscapeWindSpeed
17:EscapeTimer
18:CaptainDeadTimer
19:FlamePurgeCounter
20:J1Counter
21:BunkerSequenceReady
22:CaptainNewSpot
23:NumBombs
24:NonWiggler
$$UTYPE_VALS_END
 
$$UTYPE_VALS_START UserFlag
0:Hangar1ASecondary
1:Hangar2ASecondary
2:Hangar2AFlamePurge
3:SwitchesLocked
4:SharkGuard3Alarm
5:SharkGuard2Alarm
6:SharkGuard1Alarm
7:SharkGuard0Alarm
8:BigFan0Active
9:BigFan1Active
10:TeslaGoingUp
11:DatalinkActive
12:NPoleDataKeyLoading
13:SPoleDataKeyLoading
14:NPoleKeyPlaced
15:SPoleKeyPlaced
16:J3GadgetAlarm
17:J2GadgetAlarm
18:J1GadgetAlarm
19:Hangar3ASecondary
20:H3STMatcenPath
21:H3MagnetBox
22:J1CinematicStage
23:PoleKeysVerified
24:SecR0SwitchHit
25:SecR1SwitchHit
26:SecR2SwitchHit
27:SecR3SwitchHit
28:J1MSwitchDown
29:J2MSwitchDown
30:J3MSwitchDown
$$UTYPE_VALS_END
 
$$UTYPE_VALS_START SpewHandle
0:FP0
1:FP1
2:FP2
3:FP3
4:FP4
5:FP5
6:FP6
7:FP7
8:FP8
9:FP9
$$UTYPE_VALS_END
 
$$UTYPE_VALS_START TimerID
0:Hangar1ASecondaryDoorTimer
1:Hangar2ASecondaryDoorTimer
2:Hangar1ASecondaryDoorTimerClose
3:Hangar2ASecondaryDoorTimerClose
4:Hangar2AFlamePurge
5:HazardRoom1WindTimer
6:HazardRoom2WindTimer
7:SecurityS3Timer
8:SecurityS2Timer
9:SecurityS1Timer
10:SecurityS0Timer
11:TeslaChargeupA
12:TeslaHoldA
13:TeslaChargeupB
14:TeslaHoldB
15:TeslaChargeupC
16:TeslaHoldC
17:TeslaChargeupD
18:TeslaHoldD
19:TeslaChargeupE
20:TeslaHoldE
21:TeslaChargeupF
22:TeslaHoldF
23:TeslaChargeupG
24:TeslaChargeupH
25:TeslaHoldG
26:TeslaHoldH
27:CaptainsVaultTimer
28:NPoleDatalinkTimer
29:SPoleDatalinkTimer
30:PoleDatalinkTimer
31:NPoleEmitterTimer
32:SPoleEmitterTimer
33:J3GadgetIntervalTimer
34:Hangar3ASecondaryDoorClose
35:EscapeChuteFXTimer
36:J3BallTimer
37:J1GadgetIntervalTimer
38:J2GadgetIntervalTimer
39:Hangar3ASecondaryDoorTimer
40:CaptainsVoiceTimer
41:J1SpewTimer
42:UpdateBombBeams
43:StartEndSequence
44:DoBombSequence
45:AllBombsPlaced
46:MainObjectivesCompleted
47:HazardousFFHint
48:DoWarehouseSequence
$$UTYPE_VALS_END
 
$$UTYPE_VALS_START SavedObjectSlot
0:J1Gadget
1:J2Gadget
2:J3Gadget
3:NPoleKey
4:SPoleKey
5:NPoleKeyPlayer
6:SPoleKeyPlayer
7:J3Ball
8:EndPlayerObject
9:H3BST1
10:H3BST2
11:H2Shark1
12:H2Shark2
13:H2Shark3
14:H2SharkOnPath
15:SpewerCam
16:CapMatcen1
$$UTYPE_VALS_END
 
$$UTYPE_VALS_START GoalID
0:J2GadgetAtDoor
1:GadgetGotToBomb
2:J1GadgetAtDoor
3:CaptainAtFrontMatcen
4:J2GadgetAtMatcen
5:J1GadgetAtMatcen
6:SharkGuard3AtSwitch
7:SharkGuard2AtSwitch
8:SharkGuard1AtSwitch
9:SharkGuard0AtSwitch
10:CaptainInHisBunker
11:J3GadgetAtDoor
12:J3GadgetAtMatcen
13:CaptainAtRearMatcen
14:HenchmanStopped
$$UTYPE_VALS_END
 
 
// Name Lists
$$DOOR_LIST_START
EscapeChuteDoor
Hangar1AExit
Hangar2AExit
J1Door
J2Door
J3Door
CaptainOuterDoor
CaptainDoor
BridgeDoor
$$DOOR_LIST_END
 
$$OBJECT_LIST_START
BigFan1Engine2
BigFan1Engine3
J1Bomb
J2Bomb
J3Bomb
Hanger1AWarnLight
Hangar2AWarnLight
CaptainAndTrooper
J1CineGadget
J1CineGadget2
BigFanEngine0
BigFan1Engine
BST1
HazardActor1
HazardActor2
SharkGuard3
SharkGuard2
SharkGuard1
SharkGuard0
CaptainGadget
Datakey1
Datakey2
FirstMate
InventoryBomb
IntroPanbackCamPt
IntroSceneCut2
IntroSceneCam2
IntroSceneCamPt2
IntroSceneCam3
IntroSceneCamPt3
SwHangar1APrimary
SwHangar1ASecond
Hangar1ADoor
SwHangar1ASecond2
SwHangar2APrimary
SwHangar2ASecond
Hangar2ADoor
SwHangar2ASecond2
swHangar2ACrane
Hangar2ACrane
SwHangar2AFlamer
FlamePurgeSpew0
FlamePurgeSpew1
FlamePurgeSpew3
FlamePurgeSpew4
FlamePurgeSpew6
FlamePurgeSpew7
swHangar3APrimary
swHangar3ASecondar
Hangar3ADoor
swHangar3ASecond2
swHangar3AMagnet
Hangar3ABox1
Hangar3ABox2
BlastOutBox
J1BombLocation
J2BombLocation
J3BombLocation
J1SpewA
J1SpewB
J1SpewC
J1SpewD
J2SpewA
J2SpewB
J2SpewC
J2SpewD
J3SpewA
J3SpewB
J3SpewC
J3SpewD
J1TopCam
J1BottomCam
J2TopCam
J2BottomCam
J3TopCam
J3BottomCam
swJ1Maintenance
J1SummonDest
swJ2Maintenance
J2SummonDest
swJ3Ball
swJ3Maintenance
J3SummonDest
SwHazardGuardArea
HazardActor1Cam
HazardActor1Pt
HazardActor2Cam
HazardActor2Pt
SwDownGrav1
SwNeutralGrav1
SwUpGrav1
SwDownGrav2
FloatingBallOfDeth
SwNeutralGrav2
SwUpGrav2
GravityFan2-A
GravityFan2-B
SecR0Switch
SwSharkGuard1
SwSharkGuard2
SwSharkGuard3
Tesla-A-1-D
Tesla-A-2-D
Tesla-A-3-D
BigFan0
BigFan1
BigFan2
BigFan3
Tesla-A-1-S
Tesla-A-2-S
Tesla-A-3-S
Tesla-B-1-D
Tesla-B-2-D
Tesla-B-3-D
Tesla-B-1-S
Tesla-B-2-S
Tesla-B-3-S
Tesla-C-1-D
Tesla-C-2-D
Tesla-C-3-D
Tesla-C-1-S
Tesla-C-2-S
Tesla-C-3-S
Tesla-D-1-D
Tesla-D-2-D
Tesla-D-3-D
Tesla-D-1-S
Tesla-D-2-S
Tesla-D-3-S
Tesla-E-1-D
Tesla-E-2-D
Tesla-E-3-D
Tesla-E-1-S
Tesla-E-2-S
Tesla-E-3-S
Tesla-F-1-D
Tesla-F-2-D
Tesla-F-3-D
Tesla-F-1-S
Tesla-F-2-S
Tesla-F-3-S
Tesla-G-1-D
Tesla-G-2-D
Tesla-G-3-D
Tesla-G-1-S
Tesla-G-2-S
Tesla-G-3-S
Tesla-H-1-D
Tesla-H-2-D
Tesla-H-3-D
Tesla-H-1-S
Tesla-H-2-S
Tesla-H-3-S
CaptainCamPtIntro
CapTele1
CapTele2
CapTele3
CapTele4
CapTele5
CapTele6
CapTele7
CapTele8
CapTeleMain9
CaptainCamIntro1
CaptainCamPtIntro1
CaptainCamIntro2
CaptainCamPtIntro2
CaptainCamIntro3
CaptainCamIntroPt3
FMClone5
FMClone4
FMClone3
FMClone2
FMClone1
FMCam3
FMCam1
FMCam2
DatalinkKeyPort
PoleNorthDataArm
DatalinkKeyPortS
PoleNorthLCam1
PoleNorthLCam2
NPoleNegative
NPolePositive
PoleSouthDataArm
PoleSouthLCam1
PoleSouthLCam2
SPoleNegative
SPolePositive
ShoSpew17
ShoSpew18
ShoSpew3
ShoSpew4
ShoSpew5
ShoSpew6
ShoSpew9
ShoSpew10
ShoSpew19
ShoSpew20
ShoSpew23
ShoSpew24
ShoSpew25
ShoSpew26
BST6
BST7
CaptAndTroopCamPt0
CaptAndTroopCam
CaptAndTroopCamPt
CapAndTroopCamNew
CaptAndTroopCamPt2
EscapeChuteDoor
JunctionCineCamPt
J1CineCamSpewer
EndCinematicCam
ExitSpew0
ExitSpew1
GravityFan-1A
GravityFan-1B
Arobics1
Arobics2
Arobics3
Arobics4
Arobics5
Arobics6
Arobics7
Arobics8
Jogger1
Jogger2
Jogger3
$$OBJECT_LIST_END
 
$$ROOM_LIST_START
BallShaft
OuterSpace
OuterSpace2
OuterSpace3
Hangar1ADoor
Hangar2ADoor
Hangar3ADoor
BigFanRoomA
BigFamRoomB
BigFanRoomC
BigFan1RoomA
BigFan1RoomB
BigFan1RoomC
BigFan2RoomA
BigFan2RoomB
BigFan3RoomA
BigFan3RoomB
FT1
BN2S2
BN2S3
BN2S4
SpaceHangar
SpaceInsideHangar
Hangar1A
Hangar2A
Hangar3A
Warehouse
J1Room
J2Room
J3Room
HazardGuardArea
GravityRoomOne
GravityRoomTwo
S0Security
S1Security
S2Security
S3Security
ChasmM0
ChasmM1
ChasmM2
ChasmM3
ChasmD0
ChasmD1
ChasmD2
ChasmD3
ChasmU0
ChasmU1
ChasmU2
ChasmU3
CaptainsQuarters
CaptainsBunker
PoleNorth
PoleSouth
CaptainsOffice
SouthBound1
SouthBound2
NorthBound1
Northbound2
$$ROOM_LIST_END
 
$$TRIGGER_LIST_START
Hangar1ASuckout
LeftHangar1A
Hangar2Suckout
LeftHangar2A
BallPuzzleWin
WarehouseTrigger
J3BallTrigger
HazardWasteMovie
BallFanPuzzleHint
GravityRoom1BotDie1
GravityRoom1BotDie2
GravityRoom1BotDie3
GravityRoom1BotDie4
EndFanRoom
EndSecurityPuzzle
WindFanPuzzle1Hint
WindFanPuzzle2Hint
Fan02DethTrigger
Fan03DethTrigger
CaptainCinematic
EnterBunkerRoom
FirstMateWarmup
CaptainTroopCinemat
EndSequenceStart
ExitTrigger
Music Region: Puzzl
Music Region: Hanga
Music Region: Giant
Music Region: Gian1
Music Region: Barra
Music Region: Poles
Music Region: Bar1
$$TRIGGER_LIST_END
 
$$SOUND_LIST_START
AmbSwitch31
Powerup pickup
Drop bomb
EnvSteamEmitC
RbtTubbsSeeB
Merc2AlertSiren
Extra life
Cloak off
Smartfire1
Drop weapon
Cloak on
RbtThiefLaugh
Wall fade ???
You don't have it BEEP
AmbSwitch11
DoorIsLocked
RbtGadgetAlert
Napalmexplosion21
$$SOUND_LIST_END
 
$$TEXTURE_LIST_START
Merc3MonLock
Merc3MonLogo
FunkyEffectGreen
FunkyEffect2
FunkyEffect1
Merc3MonWaitS
Merc3MonDownL
FunkyEffect3
Merc3MonWaitN
Merc3MonNeed
$$TEXTURE_LIST_END
 
$$SPECNAME_LIST_START
Smart
Impact Mortar
$$SPECNAME_LIST_END
 
$$PATH_LIST_START
HazardActorPath1
HazardActorPath2
IntroScene1Real
H2SqidSlap
H3BSTPath
H3BSTPath2
HenchmanCamPath
HenchmanPath
J1Gadget
J2Gadget
J3Gadget
HazardWasteCinePath1
SharkRoomGuard3
SharkRoomGuard2
SharkRoomGuard1
SharkGuardRoom0
CaptainCameraIntro
CaptainINTRO
CaptainIntroPath
CaptainEscapePath
CaptainMovePath2
FirstMateINTRO
CaptAndTroopCamPath
JunctionCinePath
JunctionCinePath2
JunctionCineCamPath
PlayerExitPath
JoggingPath
$$PATH_LIST_END
 
$$MATCEN_LIST_START
H3STMatcen
Hangar2AMatcen
Hangar3AMatcen
BallPuzzleTreat
J1Gadget
J1BST
J2Gadget
J2BST
J3Ball
J3Cloak
J3Gadget
J3BST
$$MATCEN_LIST_END
 
$$GOAL_LIST_START
Unlock Hangar 1A Exit Door
Proceed to Hangar 2A
Unlock Hangar 2A Exit Door
Proceed to Hangar 3A
Exit Storage Crate
Enter Warehouse
Defeat Captain's Henchman
Plant Bomb at Cooling Junction Alpha
Gain Entry to Cooling Junction Alpha
Plant Bomb at Cooling Junction Beta
Gain Entry to Cooling Junction Beta
Plant Bomb at Cooling Junction Gamma
Gain Entry to Cooling Junction Gamma
Plant Bombs at Cooling Junctions
Disable Hazardous Storage Forcefield
Disable Secondary Cooling Fan
Disable Primary Cooling Fan
Disable Ventilation Shaft Fan
Obtain Captain's Data Key
Find and Destroy Captain
Obtain First Mate's Data Key
Find and Destroy First Mate
Place Pole North Data Key
Place Pole South Data Key
Download Station's Databanks
Escape from the station
$$GOAL_LIST_END
 
$$STRM_AUDIO_LIST_START
VoxMerc3RPA1.osf
VoxMerc3RPA2.osf
VoxMerc3RPA3.osf
VoxMerc3RPA4.osf
VoxMerc3RPA5.osf
VoxMerc3RPA7.osf
VoxMerc3RPA6.osf
$$STRM_AUDIO_LIST_END
 
 
// Script Tree Dump
00:0:Level INIT 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:0:Object 
			10:4:50000:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:1:Object 
			10:4:50000:Time 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:23:UserVar 
			10:6:3.000000:value 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:2:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:3:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:4:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:5:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:6:Object 
			$$CHILD_BLOCK_END
		08:aObjSetLightingDist 
			$$CHILD_BLOCK_START
			10:1:0:5:Object 
			10:6:10.000000:Distance 
			$$CHILD_BLOCK_END
		08:aObjSetLightingDist 
			$$CHILD_BLOCK_START
			10:1:0:6:Object 
			10:6:10.000000:Distance 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:0:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.850000:Z 
			10:6:5.000000:Speed 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:0:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:0:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:1:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:19:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:28:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:29:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:30:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:18:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:16:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:16:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:7:Object 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:20:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:0:Matcen 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:21:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:8:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:9:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:8:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:9:Object 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:1:Room 
			10:6:0.000000:X 
			10:6:-0.800000:Y 
			10:6:0.200000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:2:Room 
			10:6:0.000000:X 
			10:6:-0.800000:Y 
			10:6:0.200000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:3:Room 
			10:6:0.000000:X 
			10:6:-0.800000:Y 
			10:6:0.200000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:4:Room 
			10:6:0.000000:X 
			10:6:-0.800000:Y 
			10:6:0.200000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:5:Room 
			10:6:0.000000:X 
			10:6:-0.800000:Y 
			10:6:0.200000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:6:Room 
			10:6:-0.200000:X 
			10:6:-0.800000:Y 
			10:6:0.200000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:1:Matcen 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:2:Matcen 
			$$CHILD_BLOCK_END
		08:aMusicSetRegionAll 
			$$CHILD_BLOCK_START
			10:10:0:0:Region 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:10:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:1.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:11:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:1.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:0:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:1.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:1.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:19:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:209:Level INIT (Warehouse) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:12:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:102:Level INIT (Junction Spewers) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:20:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:1.000000:Time 
			10:10:0:41:TimerID 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:2.000000:Time 
			10:10:0:42:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:31:Level INIT (Hazard Gadgets) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:13:Object 
			10:16:0:Path 
			10:15:3149828:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:14:Object 
			10:16:1:Path 
			10:15:11538436:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:13:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:14:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:13:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:14:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:36:Level INIT (Gravity Room) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:cInitGravityRooms 
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:2:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:68:Level INIT (Fan Puzzle) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:7:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:8:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:2.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:9:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:10:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:2.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:11:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:12:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:13:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:2.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:14:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:15:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:2.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:16:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:8:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:9:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:50:Level INIT (Shark Puzzle) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:10:0:0:SharkTrapRoom 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:10:0:1:SharkTrapRoom 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:10:0:2:SharkTrapRoom 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:10:0:3:SharkTrapRoom 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:15:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:16:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:17:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:18:Object 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:4:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:5:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:6:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:7:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:24:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:25:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:26:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:27:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:56:Level INIT (Captain Gadget) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:4:50000:Time 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58720256:PhysicsFlags 
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:20:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:21:Object 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:18:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:21:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:78:Level INIT (Tesla Coil) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:8:UserVar 
			10:6:16.000000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:6:UserVar 
			10:6:0.150000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:7:UserVar 
			10:6:0.250000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:5:UserVar 
			10:6:0.150000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:4:UserVar 
			10:6:0.400000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:9:UserVar 
			10:6:0.100000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:10:UserVar 
			10:6:0.500000:value 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:10:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:11:UserVar 
			10:6:-1.000000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:13:UserVar 
			10:6:9.000000:value 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:12:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:104:Level INIT (The Poles) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:11:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:12:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:13:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:15:UserVar 
			10:6:45.000000:value 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:14:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:15:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:23:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qGetDifficulty:Integer 
				07:1:0 
				10:4:0:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:15:UserVar 
				06:qMathMulFloat:value 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float1 
						$$CHILD_BLOCK_START
						10:10:0:15:UserVar 
						$$CHILD_BLOCK_END
					10:6:2.000000:Float2 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qGetDifficulty:Integer 
					07:1:0 
					10:4:1:Integer 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserVarSet 
					$$CHILD_BLOCK_START
					10:10:0:15:UserVar 
					06:qMathMulFloat:value 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float1 
							$$CHILD_BLOCK_START
							10:10:0:15:UserVar 
							$$CHILD_BLOCK_END
						10:6:1.500000:Float2 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qGetDifficulty:Integer 
						07:1:4 
						10:4:2:Integer 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aUserVarSet 
						$$CHILD_BLOCK_START
						10:10:0:15:UserVar 
						06:qMathMulFloat:value 
							$$CHILD_BLOCK_START
							06:qUserVarValue:Float1 
								$$CHILD_BLOCK_START
								10:10:0:15:UserVar 
								$$CHILD_BLOCK_END
							10:6:1.000000:Float2 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:DO NOTHING 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:1.000000:Time 
			10:10:0:31:TimerID 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:1.000000:Time 
			10:10:0:32:TimerID 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:17:Room 
			10:6:0.000000:X 
			10:6:1.000000:Y 
			10:6:0.000000:Z 
			10:6:13.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:18:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:19:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:12.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:20:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:15.000000:Speed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:136:Level INIT (End Sequence) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:1:Lock/Unlock 
			10:0:0:0:DoorName 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:13:Level INIT (Inventory) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:5 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aAddObjectToInventoryNamed 
			$$CHILD_BLOCK_START
			10:1:0:23:Object 
			06:qPlayerClosest:PlayerObject 
				$$CHILD_BLOCK_START
				10:1:0:23:Object 
				10:10:0:-1:UserVar 
				$$CHILD_BLOCK_END
			10:8:Bomb3:ItemName 
			10:5:0:Spewable 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:132:Level START (Intro Cinematic) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			10:5:1:Literal 
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.400000:Start 
			10:9:0.800000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraOnPath 
			$$CHILD_BLOCK_START
			10:16:2:Path 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:24:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:IntroCinematicMsg:Text 
			10:6:10.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:133:Level START (Intro Cinematic Cut 2) 
	$$CHILD_BLOCK_START
	01:1:24 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:25:Object 
			10:4:0:StartFrame 
			10:4:140:EndFrame 
			10:6:24.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:26:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:21:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:27:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:0:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:EmptyMessage:Text 
			10:6:7.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aMusicSetRegionAll 
			$$CHILD_BLOCK_START
			10:10:0:1:Region 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:134:Level START (Intro Cinematic Cut 3) 
	$$CHILD_BLOCK_START
	01:1:27 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:28:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:0:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:22:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:29:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:EmptyMessage:Text 
			10:6:17.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:42:Level FRAME (Gravity Room) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:5 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:cUpdateGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:1:GravityRoom 
			$$CHILD_BLOCK_END
		08:cUpdateGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:2:GravityRoom 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:14:Level FRAME (Switch Manager) 
	$$CHILD_BLOCK_START
	01:2:0 
	02:5 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:3:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:1:Hangar 1A: Primary Door Switch 
	$$CHILD_BLOCK_START
	01:1:30 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayerWeapon:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:23:Room 
			10:4:481:FaceNum 
			10:14:0:Texture 
			$$CHILD_BLOCK_END
		08:aShowColoredHUDMessageObj 
			$$CHILD_BLOCK_START
			10:4:255:Red 
			10:4:0:Green 
			10:4:0:Blue 
			10:8:HangarPrimaryLocked:Message 
			06:qObjParent:PlayerObject 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:2:Hangar 1A: Secondary Door Switch 
	$$CHILD_BLOCK_START
	01:1:31 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:23:Room 
			10:4:481:FaceNum 
			10:14:1:Texture 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:0:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:1:On/Off 
				10:1:0:5:Object 
				$$CHILD_BLOCK_END
			08:aObjSetLightingDist 
				$$CHILD_BLOCK_START
				10:1:0:5:Object 
				10:6:100.000000:Distance 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:32:Object 
				10:6:15.000000:Time 
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:1:DoorName 
				$$CHILD_BLOCK_END
			08:aTimerShow 
				$$CHILD_BLOCK_START
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar1ADecompMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:0:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aSoundPlaySteaming 
				$$CHILD_BLOCK_START
				10:19:0:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:0:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:0:1:DoorName 
				$$CHILD_BLOCK_END
			08:aCancelTimer 
				$$CHILD_BLOCK_START
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:0:On/Off 
				10:1:0:5:Object 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:Hangar1ADecompCancelMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:0:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:0:LevelGoal 
				10:10:0:0:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:9:Hangar 1A: Secondary Door Switch (Aux) 
	$$CHILD_BLOCK_START
	01:1:33 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:0:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:1:On/Off 
				10:1:0:5:Object 
				$$CHILD_BLOCK_END
			08:aObjSetLightingDist 
				$$CHILD_BLOCK_START
				10:1:0:5:Object 
				10:6:100.000000:Distance 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:32:Object 
				10:6:15.000000:Time 
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:1:DoorName 
				$$CHILD_BLOCK_END
			08:aTimerShow 
				$$CHILD_BLOCK_START
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar1ADecompMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:0:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aSoundPlaySteaming 
				$$CHILD_BLOCK_START
				10:19:0:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:0:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:0:1:DoorName 
				$$CHILD_BLOCK_END
			08:aCancelTimer 
				$$CHILD_BLOCK_START
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:0:On/Off 
				10:1:0:5:Object 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:Hangar1ADecompCancelMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:0:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:0:LevelGoal 
				10:10:0:0:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:142:Hangar 1A: Suckout 
	$$CHILD_BLOCK_START
	01:0:0 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:3:Hangar 1A: Secondary Door Open 
	$$CHILD_BLOCK_START
	01:1:32 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:0:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:2:-1:DoorName 
				$$CHILD_BLOCK_END
			08:aDoorActivate 
				$$CHILD_BLOCK_START
				10:0:2:-1:Door 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:23:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:15.000000:Speed 
				10:6:5.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:15.000000:Time 
				10:10:0:2:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:2:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorSetPos 
				$$CHILD_BLOCK_START
				10:0:2:-1:Door 
				10:9:0.000000:Position 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:2:-1:DoorName 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:23:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:0:On/Off 
				10:1:0:5:Object 
				$$CHILD_BLOCK_END
			08:aObjSetLightingDist 
				$$CHILD_BLOCK_START
				10:1:0:5:Object 
				10:6:10.000000:Distance 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:0:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:211:Hangar 1A: Player Exited 
	$$CHILD_BLOCK_START
	01:0:1 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:1:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:18:0:0:LevelGoal 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:18:0:2:LevelGoal 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:18:0:3:LevelGoal 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:EnteredHangar2A:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:4:Hangar 2A: Primary Door Switch 
	$$CHILD_BLOCK_START
	01:1:34 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayerWeapon:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:24:Room 
			10:4:300:FaceNum 
			10:14:0:Texture 
			$$CHILD_BLOCK_END
		08:aShowColoredHUDMessageObj 
			$$CHILD_BLOCK_START
			10:4:255:Red 
			10:4:0:Green 
			10:4:0:Blue 
			10:8:HangarPrimaryLocked:Message 
			06:qObjParent:PlayerObject 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:5:Hangar 2A: Secondary Door Switch 
	$$CHILD_BLOCK_START
	01:1:35 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:24:Room 
			10:4:300:FaceNum 
			10:14:1:Texture 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:1:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:1:On/Off 
				10:1:0:6:Object 
				$$CHILD_BLOCK_END
			08:aObjSetLightingDist 
				$$CHILD_BLOCK_START
				10:1:0:6:Object 
				10:6:100.000000:Distance 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:36:Object 
				10:6:25.000000:Time 
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:2:DoorName 
				$$CHILD_BLOCK_END
			08:aTimerShow 
				$$CHILD_BLOCK_START
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar2ADecompMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:1:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aSoundPlaySteaming 
				$$CHILD_BLOCK_START
				10:19:0:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:2:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:0:2:DoorName 
				$$CHILD_BLOCK_END
			08:aCancelTimer 
				$$CHILD_BLOCK_START
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:0:On/Off 
				10:1:0:6:Object 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:Hangar2ADecompCancelMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:1:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:2:LevelGoal 
				10:10:0:0:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:10:Hangar 2A: Secondary Door Switch (Aux) 
	$$CHILD_BLOCK_START
	01:1:37 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:1:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:1:On/Off 
				10:1:0:6:Object 
				$$CHILD_BLOCK_END
			08:aObjSetLightingDist 
				$$CHILD_BLOCK_START
				10:1:0:6:Object 
				10:6:100.000000:Distance 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:36:Object 
				10:6:15.000000:Time 
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:2:DoorName 
				$$CHILD_BLOCK_END
			08:aTimerShow 
				$$CHILD_BLOCK_START
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar2ADecompMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:1:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aSoundPlaySteaming 
				$$CHILD_BLOCK_START
				10:19:0:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:2:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:0:2:DoorName 
				$$CHILD_BLOCK_END
			08:aCancelTimer 
				$$CHILD_BLOCK_START
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:0:On/Off 
				10:1:0:6:Object 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:Hangar2ADecompCancelMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:1:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:2:LevelGoal 
				10:10:0:0:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:6:Hangar 2A: Secondary Door Open 
	$$CHILD_BLOCK_START
	01:1:36 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:1:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:2:-1:DoorName 
				$$CHILD_BLOCK_END
			08:aDoorActivate 
				$$CHILD_BLOCK_START
				10:0:2:-1:Door 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:24:Room 
				10:6:-1.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:15.000000:Speed 
				10:6:5.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:15.000000:Time 
				10:10:0:3:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:3:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorSetPos 
				$$CHILD_BLOCK_START
				10:0:2:-1:Door 
				10:9:0.000000:Position 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:2:-1:DoorName 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:24:Room 
				10:6:-1.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:0:On/Off 
				10:1:0:6:Object 
				$$CHILD_BLOCK_END
			08:aObjSetLightingDist 
				$$CHILD_BLOCK_START
				10:1:0:6:Object 
				10:6:10.000000:Distance 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:1:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:127:Hangar 2A: Crane Switch 
	$$CHILD_BLOCK_START
	01:1:38 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:0:39:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:0.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:0:39:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:6.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:39:Object 
				10:4:0:StartFrame 
				10:4:6:EndFrame 
				10:6:4.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:128:Hangar 2A: Crane Script 
	$$CHILD_BLOCK_START
	01:1:39 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:0.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:6.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDestroy 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:11:Hangar 2A: Flame Purge 
	$$CHILD_BLOCK_START
	01:1:40 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:2:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar2AFlamePurge:Message 
				$$CHILD_BLOCK_END
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:0:UserVar 
				10:6:0.000000:value 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:0.500000:Time 
				10:10:0:4:TimerID 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:2:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:19:UserVar 
				10:6:0.000000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:0 
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aCancelTimer 
					$$CHILD_BLOCK_START
					10:10:0:4:TimerID 
					$$CHILD_BLOCK_END
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:Hangar2AFlamePurgeStop:Message 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:0:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:1:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:2:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:3:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:4:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:5:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:6:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:7:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:8:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOffSpew 
					$$CHILD_BLOCK_START
					10:10:0:9:SpewHandle 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:2:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:12:Hangar 2A: Flame Purge Alternator 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:4:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:0:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:2:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:3:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:4:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:5:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:6:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:7:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:8:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOffSpew 
			$$CHILD_BLOCK_START
			10:10:0:9:SpewHandle 
			$$CHILD_BLOCK_END
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:19:UserVar 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:19:UserVar 
					$$CHILD_BLOCK_END
				07:1:3 
				10:4:5:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValueInt:Integer 
						$$CHILD_BLOCK_START
						10:10:0:0:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:4:0:Integer 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aTurnOnSpew 
					$$CHILD_BLOCK_START
					10:1:0:41:Object 
					10:4:-1:GunNum 
					10:10:0:2:SpewType 
					10:6:0.000000:Mass 
					10:6:0.000000:Drag 
					10:15:0:PhysicsFlags 
					10:5:0:IsRealObject 
					10:6:3.000000:BlobLifetime 
					10:6:0.150000:BlobInterval 
					10:6:-1.000000:SpewLife 
					10:6:15.000000:BlobSize 
					10:6:35.000000:BlobSpeed 
					10:5:1:Randomize 
					10:10:0:0:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOnSpew 
					$$CHILD_BLOCK_START
					10:1:0:42:Object 
					10:4:-1:GunNum 
					10:10:0:0:SpewType 
					10:6:0.000000:Mass 
					10:6:0.000000:Drag 
					10:15:0:PhysicsFlags 
					10:5:0:IsRealObject 
					10:6:3.000000:BlobLifetime 
					10:6:0.150000:BlobInterval 
					10:6:-1.000000:SpewLife 
					10:6:18.000000:BlobSize 
					10:6:35.000000:BlobSpeed 
					10:5:1:Randomize 
					10:10:0:4:SpewHandle 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValueInt:Integer 
						$$CHILD_BLOCK_START
						10:10:0:0:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:4:1:Integer 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aTurnOnSpew 
					$$CHILD_BLOCK_START
					10:1:0:43:Object 
					10:4:-1:GunNum 
					10:10:0:2:SpewType 
					10:6:0.000000:Mass 
					10:6:0.000000:Drag 
					10:15:0:PhysicsFlags 
					10:5:0:IsRealObject 
					10:6:3.000000:BlobLifetime 
					10:6:0.150000:BlobInterval 
					10:6:-1.000000:SpewLife 
					10:6:14.000000:BlobSize 
					10:6:35.000000:BlobSpeed 
					10:5:1:Randomize 
					10:10:0:3:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOnSpew 
					$$CHILD_BLOCK_START
					10:1:0:44:Object 
					10:4:-1:GunNum 
					10:10:0:2:SpewType 
					10:6:0.000000:Mass 
					10:6:0.000000:Drag 
					10:15:0:PhysicsFlags 
					10:5:0:IsRealObject 
					10:6:3.500000:BlobLifetime 
					10:6:0.200000:BlobInterval 
					10:6:-1.000000:SpewLife 
					10:6:20.000000:BlobSize 
					10:6:35.000000:BlobSpeed 
					10:5:1:Randomize 
					10:10:0:6:SpewHandle 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValueInt:Integer 
						$$CHILD_BLOCK_START
						10:10:0:0:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:4:2:Integer 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aTurnOnSpew 
					$$CHILD_BLOCK_START
					10:1:0:45:Object 
					10:4:-1:GunNum 
					10:10:0:0:SpewType 
					10:6:0.000000:Mass 
					10:6:0.000000:Drag 
					10:15:0:PhysicsFlags 
					10:5:0:IsRealObject 
					10:6:3.000000:BlobLifetime 
					10:6:0.200000:BlobInterval 
					10:6:-1.000000:SpewLife 
					10:6:17.000000:BlobSize 
					10:6:35.000000:BlobSpeed 
					10:5:1:Randomize 
					10:10:0:8:SpewHandle 
					$$CHILD_BLOCK_END
				08:aTurnOnSpew 
					$$CHILD_BLOCK_START
					10:1:0:46:Object 
					10:4:-1:GunNum 
					10:10:0:0:SpewType 
					10:6:0.000000:Mass 
					10:6:0.000000:Drag 
					10:15:0:PhysicsFlags 
					10:5:0:IsRealObject 
					10:6:3.000000:BlobLifetime 
					10:6:0.160000:BlobInterval 
					10:6:-1.000000:SpewLife 
					10:6:17.000000:BlobSize 
					10:6:35.000000:BlobSpeed 
					10:5:1:Randomize 
					10:10:0:1:SpewHandle 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aUserVarInc 
				$$CHILD_BLOCK_START
				10:10:0:0:UserVar 
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValueInt:Integer 
						$$CHILD_BLOCK_START
						10:10:0:0:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:4:3:Integer 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserVarSet 
					$$CHILD_BLOCK_START
					10:10:0:0:UserVar 
					10:6:0.000000:value 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aSetObjectOnFire 
				$$CHILD_BLOCK_START
				06:qObjSavedHandle:Object 
					$$CHILD_BLOCK_START
					10:10:0:11:SavedObjectSlot 
					$$CHILD_BLOCK_END
				10:6:3.000000:Seconds 
				10:6:3.000000:Damage 
				$$CHILD_BLOCK_END
			08:aSetObjectOnFire 
				$$CHILD_BLOCK_START
				06:qObjSavedHandle:Object 
					$$CHILD_BLOCK_START
					10:10:0:12:SavedObjectSlot 
					$$CHILD_BLOCK_END
				10:6:3.000000:Seconds 
				10:6:3.000000:Damage 
				$$CHILD_BLOCK_END
			08:aSetObjectOnFire 
				$$CHILD_BLOCK_START
				06:qObjSavedHandle:Object 
					$$CHILD_BLOCK_START
					10:10:0:13:SavedObjectSlot 
					$$CHILD_BLOCK_END
				10:6:3.000000:Seconds 
				10:6:3.000000:Damage 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:3.000000:Time 
				10:10:0:4:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:146:Hangar 2A: Squid 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:7:Matcen 
			07:1:0 
			10:17:0:1:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:11:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:10:0:11:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						06:qObjSavedHandle:Object 
							$$CHILD_BLOCK_START
							10:10:0:12:SavedObjectSlot 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aObjSaveHandle 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:12:SavedObjectSlot 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:1 
						$$CHILD_BLOCK_START
						06:qObjExists:Bool 
							$$CHILD_BLOCK_START
							06:qObjSavedHandle:Object 
								$$CHILD_BLOCK_START
								10:10:0:13:SavedObjectSlot 
								$$CHILD_BLOCK_END
							$$CHILD_BLOCK_END
						07:0:7 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						10:10:0:13:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:DO NOTHING 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qRandomValue:Float 
						$$CHILD_BLOCK_START
						10:6:0.000000:LowerLimit 
						10:6:1.000000:UpperLimit 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:0.800000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						06:qObjSavedHandle:Object 
							$$CHILD_BLOCK_START
							10:10:0:14:SavedObjectSlot 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAIGoalFollowPathSimple 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:16:3:Path 
				10:15:4198656:AIGoalFlags 
				10:10:0:-1:GoalID 
				10:10:0:3:GoalPriority 
				$$CHILD_BLOCK_END
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:10:0:14:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:141:Hangar2A: Suckout Death 
	$$CHILD_BLOCK_START
	01:0:2 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:212:Hangar 2A: Player Exited 
	$$CHILD_BLOCK_START
	01:0:3 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:3:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:18:0:2:LevelGoal 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:143:Hangar 3A: Primary Door Switch 
	$$CHILD_BLOCK_START
	01:1:47 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:25:Room 
			10:4:501:FaceNum 
			10:14:0:Texture 
			$$CHILD_BLOCK_END
		08:aShowColoredHUDMessageObj 
			$$CHILD_BLOCK_START
			10:4:255:Red 
			10:4:0:Green 
			10:4:0:Blue 
			10:8:HangarPrimaryLocked:Message 
			06:qObjParent:PlayerObject 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:144:Hangar 3A: Secondary Door Switch 
	$$CHILD_BLOCK_START
	01:1:48 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:25:Room 
			10:4:501:FaceNum 
			10:14:1:Texture 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:19:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:49:Object 
				10:6:15.000000:Time 
				10:10:0:39:TimerID 
				$$CHILD_BLOCK_END
			08:aTimerShow 
				$$CHILD_BLOCK_START
				10:10:0:39:TimerID 
				$$CHILD_BLOCK_END
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar3ADecompMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:19:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aSoundPlaySteaming 
				$$CHILD_BLOCK_START
				10:19:0:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aCancelTimer 
				$$CHILD_BLOCK_START
				10:10:0:34:TimerID 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:Hangar3ADecompMsgCancel:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:19:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:149:Hangar 3A: Secondary Door Switch (Aux) 
	$$CHILD_BLOCK_START
	01:1:50 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:25:Room 
			10:4:501:FaceNum 
			10:14:1:Texture 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:19:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:49:Object 
				10:6:15.000000:Time 
				10:10:0:39:TimerID 
				$$CHILD_BLOCK_END
			08:aTimerShow 
				$$CHILD_BLOCK_START
				10:10:0:39:TimerID 
				$$CHILD_BLOCK_END
			08:aShowColoredHUDMessage 
				$$CHILD_BLOCK_START
				10:4:255:Red 
				10:4:0:Green 
				10:4:0:Blue 
				10:8:Hangar3ADecompMsg:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:19:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aSoundPlaySteaming 
				$$CHILD_BLOCK_START
				10:19:0:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aCancelTimer 
				$$CHILD_BLOCK_START
				10:10:0:34:TimerID 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:Hangar3ADecompMsgCancel:Message 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:19:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:147:Hangar 3A: Magnet Switch 
	$$CHILD_BLOCK_START
	01:1:51 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:21:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:52:Object 
				10:4:0:StartFrame 
				10:4:5:EndFrame 
				10:6:1.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:53:Object 
				10:4:0:StartFrame 
				10:4:5:EndFrame 
				10:6:1.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:52:Object 
				10:4:5:StartFrame 
				10:4:10:EndFrame 
				10:6:1.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:53:Object 
				10:4:5:StartFrame 
				10:4:10:EndFrame 
				10:6:1.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:21:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:21:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:21:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:150:Hangar 3A: Box Kills 
	$$CHILD_BLOCK_START
	01:1:52 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsType:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						10:10:0:2:ObjectType 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayer:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:5.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:151:Hangar 3A: Box Kills 2 
	$$CHILD_BLOCK_START
	01:1:53 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsType:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						10:10:0:2:ObjectType 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayer:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:5.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:157:Hangar 3A: Secondary Door Open 
	$$CHILD_BLOCK_START
	01:1:49 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:39:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:2:-1:DoorName 
				$$CHILD_BLOCK_END
			08:aDoorActivate 
				$$CHILD_BLOCK_START
				10:0:2:-1:Door 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:25:Room 
				10:6:-0.703000:X 
				10:6:-0.062000:Y 
				10:6:-0.707000:Z 
				10:6:15.000000:Speed 
				10:6:5.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:15.000000:Time 
				10:10:0:34:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:34:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorSetPos 
				$$CHILD_BLOCK_START
				10:0:2:-1:Door 
				10:9:0.000000:Position 
				$$CHILD_BLOCK_END
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:1:Lock/Unlock 
				10:0:2:-1:DoorName 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:25:Room 
				10:6:-1.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:19:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:145:Hangar 3A: Matcen 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:6:Matcen 
			07:1:0 
			10:17:0:0:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:20:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAIGoalFollowPathSimple 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:16:4:Path 
				10:15:6295812:AIGoalFlags 
				10:10:0:-1:GoalID 
				10:10:0:3:GoalPriority 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aAIGoalFollowPathSimple 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:16:5:Path 
				10:15:6295812:AIGoalFlags 
				10:10:0:-1:GoalID 
				10:10:0:3:GoalPriority 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:9:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:10:0:9:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:10:0:10:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:20:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:20:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:20:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:7:Ball Puzzle: Ball In Goal 
	$$CHILD_BLOCK_START
	01:0:4 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsType:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:10:0:11:ObjectType 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:3:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:8:Ball Puzzle: Prize Generated 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:6:Matcen 
			07:1:0 
			10:17:0:3:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:210:Starting Crate: Player Blasted Out 
	$$CHILD_BLOCK_START
	01:1:54 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:4:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:18:0:0:LevelGoal 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:18:0:1:LevelGoal 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:EnteredHangar1A:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:207:Warehouse: Player Entered 
	$$CHILD_BLOCK_START
	01:0:5 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aCinematicSimple 
			$$CHILD_BLOCK_START
			10:16:6:CameraPath 
			10:8:HenchmanSays:Text 
			10:1:0:12:Target 
			10:6:10.000000:Seconds 
			10:5:1:FadeIn 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:3.000000:Time 
			10:10:0:48:TimerID 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:5:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:18:0:6:LevelGoal 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:208:Warehouse: Do Henchman Sequence 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:48:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:208:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:0:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aPortalRenderSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Enable/Disable 
				10:4:11:PortalNum 
				10:2:26:Room 
				10:5:0:DoublesidedFlag 
				$$CHILD_BLOCK_END
			08:aAISetState 
				$$CHILD_BLOCK_START
				10:10:0:1:On/Off 
				10:1:0:12:Object 
				$$CHILD_BLOCK_END
			08:aAISetMaxSpeed 
				$$CHILD_BLOCK_START
				10:1:0:12:Object 
				10:6:20.000000:MaxSpeed 
				$$CHILD_BLOCK_END
			08:aAISetTeam 
				$$CHILD_BLOCK_START
				10:10:0:196608:Teams 
				10:1:0:12:Object 
				$$CHILD_BLOCK_END
			08:aAIGoalFollowPathSimple 
				$$CHILD_BLOCK_START
				10:1:0:12:Object 
				10:16:7:Path 
				10:15:131328:AIGoalFlags 
				10:10:0:14:GoalID 
				10:10:0:3:GoalPriority 
				$$CHILD_BLOCK_END
			08:aAIGoalSetCircleDistance 
				$$CHILD_BLOCK_START
				10:1:0:12:Object 
				10:10:0:3:GoalPriority 
				10:6:0.000000:distance 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:2.000000:Time 
				10:10:0:48:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:208:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:1:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aPortalRenderSet 
				$$CHILD_BLOCK_START
				10:10:0:1:Enable/Disable 
				10:4:11:PortalNum 
				10:2:26:Room 
				10:5:0:DoublesidedFlag 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:5.000000:Time 
				10:10:0:48:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:208:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:2:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAISetMaxSpeed 
				$$CHILD_BLOCK_START
				10:1:0:12:Object 
				10:6:50.000000:MaxSpeed 
				$$CHILD_BLOCK_END
			08:aAISetTeam 
				$$CHILD_BLOCK_START
				10:10:0:0:Teams 
				10:1:0:12:Object 
				$$CHILD_BLOCK_END
			08:aAIFlags 
				$$CHILD_BLOCK_START
				10:10:0:1:Set/Clear 
				10:15:536870912:AIFlags 
				10:1:0:12:Object 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:2.000000:Time 
				10:10:0:48:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:208:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:3:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:HenchmanHint:Message 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:60:Warehouse: BST Killed 
	$$CHILD_BLOCK_START
	01:1:12 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:11:PortalNum 
			10:2:26:Room 
			10:5:0:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:0:PortalNum 
			10:2:26:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:ForcefieldDown:Message 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:6:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:181:Level SUBOBJECTIVE: Pickup Bomb(s) 
	$$CHILD_BLOCK_START
	01:1:23 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:23:UserVar 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:1:Sound 
				10:1:1:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:23:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessageObj 
					$$CHILD_BLOCK_START
					10:8:Bomb:Message 
					10:1:1:-1:PlayerObject 
					$$CHILD_BLOCK_END
				08:aAddObjectToInventoryNamed 
					$$CHILD_BLOCK_START
					10:1:2:-1:Object 
					10:1:1:-1:PlayerObject 
					10:8:Bomb:ItemName 
					10:5:0:Spewable 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float 
							$$CHILD_BLOCK_START
							10:10:0:23:UserVar 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aShowHUDMessageObj 
						$$CHILD_BLOCK_START
						10:8:Bomb2:Message 
						10:1:1:-1:PlayerObject 
						$$CHILD_BLOCK_END
					08:aAddObjectToInventoryNamed 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						10:1:1:-1:PlayerObject 
						10:8:Bomb2:ItemName 
						10:5:0:Spewable 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aShowHUDMessageObj 
						$$CHILD_BLOCK_START
						10:8:Bomb3:Message 
						10:1:1:-1:PlayerObject 
						$$CHILD_BLOCK_END
					08:aAddObjectToInventoryNamed 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						10:1:1:-1:PlayerObject 
						10:8:Bomb3:ItemName 
						10:5:0:Spewable 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:15:Level SUBOBJECTIVE: Bomb Planting 
	$$CHILD_BLOCK_START
	01:1:23 
	02:25 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjRoom:Room 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:1:0 
				10:2:27:Room 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qGoalCompleted:Bool 
						$$CHILD_BLOCK_START
						10:18:0:7:LevelGoal 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessageObj 
					$$CHILD_BLOCK_START
					10:8:BombAlreadyPlanted:Message 
					10:1:1:-1:PlayerObject 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				08:aShowHUDMessageObj 
					$$CHILD_BLOCK_START
					10:8:BombPlanted:Message 
					10:1:1:-1:PlayerObject 
					$$CHILD_BLOCK_END
				08:aStoreObjectInPositionClipboard 
					$$CHILD_BLOCK_START
					10:1:0:55:Object 
					$$CHILD_BLOCK_END
				08:aMoveObjectToPositionClipboard 
					$$CHILD_BLOCK_START
					10:1:0:2:Object 
					$$CHILD_BLOCK_END
				08:aObjGhostSet 
					$$CHILD_BLOCK_START
					10:10:0:0:Ghost/Unghost 
					10:1:0:2:Object 
					$$CHILD_BLOCK_END
				08:aEmitSparks 
					$$CHILD_BLOCK_START
					10:6:40.000000:Number 
					10:1:0:2:Object 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:2:Sound 
					10:1:1:-1:Object 
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aRoomSetFog 
					$$CHILD_BLOCK_START
					10:2:27:Room 
					10:6:0.000000:Red 
					10:6:1.000000:Green 
					10:6:1.000000:Blue 
					10:6:8000.000000:Depth 
					$$CHILD_BLOCK_END
				08:aRoomChangeFog 
					$$CHILD_BLOCK_START
					10:2:27:Room 
					10:6:0.000000:Red 
					10:6:1.000000:Green 
					10:6:1.000000:Blue 
					10:6:600.000000:Depth 
					10:6:6.000000:Time 
					$$CHILD_BLOCK_END
				08:aGoalCompleted 
					$$CHILD_BLOCK_START
					10:18:0:7:LevelGoal 
					10:10:0:1:Completed 
					$$CHILD_BLOCK_END
				08:aGoalEnableDisable 
					$$CHILD_BLOCK_START
					10:10:0:0:Enable/Disable 
					10:18:0:8:LevelGoal 
					$$CHILD_BLOCK_END
				08:aUserVarDec 
					$$CHILD_BLOCK_START
					10:10:0:23:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjRoom:Room 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:2:28:Room 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:1 
						$$CHILD_BLOCK_START
						06:qGoalCompleted:Bool 
							$$CHILD_BLOCK_START
							10:18:0:9:LevelGoal 
							$$CHILD_BLOCK_END
						07:0:6 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aShowHUDMessageObj 
						$$CHILD_BLOCK_START
						10:8:BombAlreadyPlanted:Message 
						10:1:1:-1:PlayerObject 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aShowHUDMessageObj 
						$$CHILD_BLOCK_START
						10:8:BombPlanted:Message 
						10:1:1:-1:PlayerObject 
						$$CHILD_BLOCK_END
					08:aStoreObjectInPositionClipboard 
						$$CHILD_BLOCK_START
						10:1:0:56:Object 
						$$CHILD_BLOCK_END
					08:aMoveObjectToPositionClipboard 
						$$CHILD_BLOCK_START
						10:1:0:3:Object 
						$$CHILD_BLOCK_END
					08:aObjGhostSet 
						$$CHILD_BLOCK_START
						10:10:0:0:Ghost/Unghost 
						10:1:0:3:Object 
						$$CHILD_BLOCK_END
					08:aEmitSparks 
						$$CHILD_BLOCK_START
						10:6:40.000000:Number 
						10:1:0:3:Object 
						$$CHILD_BLOCK_END
					08:aSoundPlayObject 
						$$CHILD_BLOCK_START
						10:12:2:Sound 
						10:1:1:-1:Object 
						10:9:1.000000:Volume 
						$$CHILD_BLOCK_END
					08:aRoomSetFog 
						$$CHILD_BLOCK_START
						10:2:28:Room 
						10:6:0.000000:Red 
						10:6:1.000000:Green 
						10:6:1.000000:Blue 
						10:6:8000.000000:Depth 
						$$CHILD_BLOCK_END
					08:aRoomChangeFog 
						$$CHILD_BLOCK_START
						10:2:28:Room 
						10:6:0.000000:Red 
						10:6:1.000000:Green 
						10:6:1.000000:Blue 
						10:6:600.000000:Depth 
						10:6:6.000000:Time 
						$$CHILD_BLOCK_END
					08:aGoalCompleted 
						$$CHILD_BLOCK_START
						10:18:0:9:LevelGoal 
						10:10:0:1:Completed 
						$$CHILD_BLOCK_END
					08:aGoalEnableDisable 
						$$CHILD_BLOCK_START
						10:10:0:0:Enable/Disable 
						10:18:0:10:LevelGoal 
						$$CHILD_BLOCK_END
					08:aUserVarDec 
						$$CHILD_BLOCK_START
						10:10:0:23:UserVar 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjRoom:Room 
							$$CHILD_BLOCK_START
							10:1:1:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:2:29:Room 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					03:1 
						$$CHILD_BLOCK_START
						05:1 
							$$CHILD_BLOCK_START
							06:qGoalCompleted:Bool 
								$$CHILD_BLOCK_START
								10:18:0:11:LevelGoal 
								$$CHILD_BLOCK_END
							07:0:6 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					04:1:0:0 
						$$CHILD_BLOCK_START
						08:aShowHUDMessageObj 
							$$CHILD_BLOCK_START
							10:8:BombAlreadyPlanted:Message 
							10:1:1:-1:PlayerObject 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					04:1:0:1 
						$$CHILD_BLOCK_START
						08:aShowHUDMessageObj 
							$$CHILD_BLOCK_START
							10:8:BombPlanted:Message 
							10:1:1:-1:PlayerObject 
							$$CHILD_BLOCK_END
						08:aStoreObjectInPositionClipboard 
							$$CHILD_BLOCK_START
							10:1:0:57:Object 
							$$CHILD_BLOCK_END
						08:aMoveObjectToPositionClipboard 
							$$CHILD_BLOCK_START
							10:1:0:4:Object 
							$$CHILD_BLOCK_END
						08:aObjGhostSet 
							$$CHILD_BLOCK_START
							10:10:0:0:Ghost/Unghost 
							10:1:0:4:Object 
							$$CHILD_BLOCK_END
						08:aEmitSparks 
							$$CHILD_BLOCK_START
							10:6:40.000000:Number 
							10:1:0:4:Object 
							$$CHILD_BLOCK_END
						08:aSoundPlayObject 
							$$CHILD_BLOCK_START
							10:12:2:Sound 
							10:1:1:-1:Object 
							10:9:1.000000:Volume 
							$$CHILD_BLOCK_END
						08:aRoomSetFog 
							$$CHILD_BLOCK_START
							10:2:29:Room 
							10:6:0.000000:Red 
							10:6:1.000000:Green 
							10:6:1.000000:Blue 
							10:6:8000.000000:Depth 
							$$CHILD_BLOCK_END
						08:aRoomChangeFog 
							$$CHILD_BLOCK_START
							10:2:29:Room 
							10:6:0.000000:Red 
							10:6:1.000000:Green 
							10:6:1.000000:Blue 
							10:6:600.000000:Depth 
							10:6:6.000000:Time 
							$$CHILD_BLOCK_END
						08:aGoalCompleted 
							$$CHILD_BLOCK_START
							10:18:0:11:LevelGoal 
							10:10:0:1:Completed 
							$$CHILD_BLOCK_END
						08:aGoalEnableDisable 
							$$CHILD_BLOCK_START
							10:10:0:0:Enable/Disable 
							10:18:0:12:LevelGoal 
							$$CHILD_BLOCK_END
						08:aUserVarDec 
							$$CHILD_BLOCK_START
							10:10:0:23:UserVar 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aShowHUDMessage 
						$$CHILD_BLOCK_START
						10:8:BombDontPlantHere:Message 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:23:UserVar 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjGhostSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Ghost/Unghost 
				10:1:0:23:Object 
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:23:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aAddObjectToInventoryNamed 
					$$CHILD_BLOCK_START
					10:1:2:-1:Object 
					10:1:1:-1:PlayerObject 
					10:8:Bomb:ItemName 
					10:5:0:Spewable 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float 
							$$CHILD_BLOCK_START
							10:10:0:23:UserVar 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aAddObjectToInventoryNamed 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						10:1:1:-1:PlayerObject 
						10:8:Bomb2:ItemName 
						10:5:0:Spewable 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aAddObjectToInventoryNamed 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						10:1:1:-1:PlayerObject 
						10:8:Bomb3:ItemName 
						10:5:0:Spewable 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:113:Level OBJECTIVE: Check if all Bombs Planted 
	$$CHILD_BLOCK_START
	01:2:0 
	02:23 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:7:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:9:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:11:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:3.000000:Time 
			10:10:0:45:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:175:Level OBJECTIVE: All Bombs Planted 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:45:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:175:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:0:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:13:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:3.000000:Time 
				10:10:0:45:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:175:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:1:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aAddGameMessage 
				$$CHILD_BLOCK_START
				10:8:MaintenanceWarningLong:GameMessage 
				10:8:MaintenanceWarning:HUDMessage 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:16:Junction Spewers: Do Next Spewer 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:41:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:20:UserVar 
					$$CHILD_BLOCK_END
				07:1:0 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:0:58:Object 
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:20:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aObjSaveHandle 
					$$CHILD_BLOCK_START
					10:1:0:59:Object 
					10:10:0:15:SavedObjectSlot 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float 
							$$CHILD_BLOCK_START
							10:10:0:20:UserVar 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:0:60:Object 
						10:10:0:15:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:0:61:Object 
						10:10:0:15:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.500000:BlobLifetime 
			10:6:0.200000:BlobInterval 
			10:6:2.000000:SpewLife 
			10:6:10.000000:BlobSize 
			10:6:30.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:3:Sound 
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:20:UserVar 
					$$CHILD_BLOCK_END
				07:1:0 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:0:62:Object 
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:20:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aObjSaveHandle 
					$$CHILD_BLOCK_START
					10:1:0:63:Object 
					10:10:0:15:SavedObjectSlot 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float 
							$$CHILD_BLOCK_START
							10:10:0:20:UserVar 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:0:64:Object 
						10:10:0:15:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:0:65:Object 
						10:10:0:15:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.500000:BlobLifetime 
			10:6:0.200000:BlobInterval 
			10:6:2.000000:SpewLife 
			10:6:10.000000:BlobSize 
			10:6:30.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:3:Sound 
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:20:UserVar 
					$$CHILD_BLOCK_END
				07:1:0 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSaveHandle 
				$$CHILD_BLOCK_START
				10:1:0:66:Object 
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:20:UserVar 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aObjSaveHandle 
					$$CHILD_BLOCK_START
					10:1:0:67:Object 
					10:10:0:15:SavedObjectSlot 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float 
							$$CHILD_BLOCK_START
							10:10:0:20:UserVar 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:0:68:Object 
						10:10:0:15:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					08:aObjSaveHandle 
						$$CHILD_BLOCK_START
						10:1:0:69:Object 
						10:10:0:15:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.500000:BlobLifetime 
			10:6:0.200000:BlobInterval 
			10:6:2.000000:SpewLife 
			10:6:10.000000:BlobSize 
			10:6:30.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:3:Sound 
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:15:SavedObjectSlot 
				$$CHILD_BLOCK_END
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:20:UserVar 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:20:UserVar 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:3.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:20:UserVar 
				10:6:0.000000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:1.000000:Time 
			10:10:0:41:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:17:Junction Spewers: Update Bomb Beams 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:42:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:7:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:70:Object1 
				10:1:0:2:Object2 
				10:6:0.400000:Lifetime 
				10:6:1.000000:Thickness 
				10:4:2:NumTiles 
				10:14:2:Texture 
				10:6:0.500000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:71:Object1 
				10:1:0:2:Object2 
				10:6:0.400000:Lifetime 
				10:6:1.000000:Thickness 
				10:4:2:NumTiles 
				10:14:2:Texture 
				10:6:0.500000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:9:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:72:Object1 
				10:1:0:3:Object2 
				10:6:0.400000:Lifetime 
				10:6:1.000000:Thickness 
				10:4:2:NumTiles 
				10:14:2:Texture 
				10:6:0.500000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:73:Object1 
				10:1:0:3:Object2 
				10:6:0.400000:Lifetime 
				10:6:1.000000:Thickness 
				10:4:2:NumTiles 
				10:14:2:Texture 
				10:6:0.500000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:11:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:74:Object1 
				10:1:0:4:Object2 
				10:6:0.400000:Lifetime 
				10:6:1.000000:Thickness 
				10:4:2:NumTiles 
				10:14:2:Texture 
				10:6:0.500000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:75:Object1 
				10:1:0:4:Object2 
				10:6:0.400000:Lifetime 
				10:6:1.000000:Thickness 
				10:4:2:NumTiles 
				10:14:2:Texture 
				10:6:0.500000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.400000:Time 
			10:10:0:42:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:22:Junction 1: Summon Maintenance Switch 
	$$CHILD_BLOCK_START
	01:1:76 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:28:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:0.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:28:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:4:Matcen 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:MBotSwitch:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:23:Junction 1: Maintenance Summoned 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:4:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aObjSaveHandle 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:10:0:0:SavedObjectSlot 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:8:Path 
			10:4:1:FirstNode 
			10:4:5:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:2:GoalID 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:18:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		08:aSoundPlaySteaming 
			$$CHILD_BLOCK_START
			10:19:1:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.500000:Time 
			10:10:0:37:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:24:Junction 1: Gadget Unlocks Door 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:2:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qDoorLocked:Bool 
					$$CHILD_BLOCK_START
					10:0:0:3:Door 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:3:DoorName 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DoorUnlockedMaint:Message 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:8:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:8:Path 
			10:4:6:FirstNode 
			10:4:11:LastNode 
			10:4:5:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10490112:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:26:Junction 1: Check if Gadget Saw Target/Still Alive 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:37:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:0:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qDoorLocked:Bool 
						$$CHILD_BLOCK_START
						10:0:0:3:Door 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:MBotDied:Message 
					$$CHILD_BLOCK_END
				08:aObjPlayAnim 
					$$CHILD_BLOCK_START
					10:1:0:76:Object 
					10:4:1:StartFrame 
					10:4:2:EndFrame 
					10:6:2.000000:CycleTime 
					10:5:0:Looping 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:0:Sound 
					10:1:0:76:Object 
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:28:UserFlag 
					10:5:0:True/False 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				09:0 
					$$CHILD_BLOCK_START
					05:1 
						$$CHILD_BLOCK_START
						06:qUserFlag:Bool 
							$$CHILD_BLOCK_START
							10:10:0:18:UserFlag 
							$$CHILD_BLOCK_END
						07:0:7 
						$$CHILD_BLOCK_END
					05:1 
						$$CHILD_BLOCK_START
						06:qSawTargetRecently:Bool 
							$$CHILD_BLOCK_START
							06:qObjSavedHandle:Object 
								$$CHILD_BLOCK_START
								10:10:0:0:SavedObjectSlot 
								$$CHILD_BLOCK_END
							10:6:1.000000:Time 
							$$CHILD_BLOCK_END
						07:0:6 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:18:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aAIGoalGotoObject 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:0:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:1:0:77:Target 
					10:10:0:3:GoalPriority 
					10:15:4352:AIGoalFlags 
					10:10:0:5:GoalID 
					$$CHILD_BLOCK_END
				08:aAIGoalSetCircleDistance 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:0:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:10:0:3:GoalPriority 
					10:6:30.000000:distance 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:4:Sound 
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:0:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:MBotSpottedUs:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:0.500000:Time 
				10:10:0:37:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:27:Junction 1: Gadget Summons Guard 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:5:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:5:Matcen 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:8:Path 
			10:4:1:FirstNode 
			10:4:5:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:2:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:MBotSummon:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:28:Junction 1: Guard Summoned 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:5:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:8:Path 
			10:4:1:FirstNode 
			10:4:4:LastNode 
			10:4:1:StartNode 
			10:10:0:0:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:18:Junction 2: Summon Maintenance Switch 
	$$CHILD_BLOCK_START
	01:1:78 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:29:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:0.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:29:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:6:Matcen 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:MBotSwitch:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:19:Junction 2: Maintenance Summoned 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:6:Matcen 
			07:1:0 
			10:17:0:6:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aObjSaveHandle 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:10:0:1:SavedObjectSlot 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:9:Path 
			10:4:1:FirstNode 
			10:4:6:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:0:GoalID 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:17:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		08:aSoundPlaySteaming 
			$$CHILD_BLOCK_START
			10:19:2:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.500000:Time 
			10:10:0:38:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:25:Junction 2: Gadget Sees You 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:38:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:1:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qDoorLocked:Bool 
						$$CHILD_BLOCK_START
						10:0:0:4:Door 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:MBotDied:Message 
					$$CHILD_BLOCK_END
				08:aObjPlayAnim 
					$$CHILD_BLOCK_START
					10:1:0:78:Object 
					10:4:1:StartFrame 
					10:4:2:EndFrame 
					10:6:2.000000:CycleTime 
					10:5:0:Looping 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:0:Sound 
					10:1:0:78:Object 
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:29:UserFlag 
					10:5:0:True/False 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				09:0 
					$$CHILD_BLOCK_START
					05:1 
						$$CHILD_BLOCK_START
						06:qUserFlag:Bool 
							$$CHILD_BLOCK_START
							10:10:0:17:UserFlag 
							$$CHILD_BLOCK_END
						07:0:7 
						$$CHILD_BLOCK_END
					05:1 
						$$CHILD_BLOCK_START
						06:qSawTargetRecently:Bool 
							$$CHILD_BLOCK_START
							06:qObjSavedHandle:Object 
								$$CHILD_BLOCK_START
								10:10:0:1:SavedObjectSlot 
								$$CHILD_BLOCK_END
							10:6:1.000000:Time 
							$$CHILD_BLOCK_END
						07:0:6 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:17:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aAIGoalGotoObject 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:1:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:1:0:79:Target 
					10:10:0:3:GoalPriority 
					10:15:4352:AIGoalFlags 
					10:10:0:4:GoalID 
					$$CHILD_BLOCK_END
				08:aAIGoalSetCircleDistance 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:1:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:10:0:3:GoalPriority 
					10:6:30.000000:distance 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:4:Sound 
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:1:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:MBotSpottedUs:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:0.500000:Time 
				10:10:0:38:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:20:Junction 2: Gadget Unlocks Door 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:0:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qDoorLocked:Bool 
					$$CHILD_BLOCK_START
					10:0:0:4:Door 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:4:DoorName 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DoorUnlockedMaint:Message 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:10:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:9:Path 
			10:4:7:FirstNode 
			10:4:12:LastNode 
			10:4:6:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10490112:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:21:Junction 2: Gadget Summons Guard 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:4:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:7:Matcen 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:9:Path 
			10:4:1:FirstNode 
			10:4:6:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:0:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:MBotSummon:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:140:Junction 2: Guard Summoned 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:7:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:9:Path 
			10:4:1:FirstNode 
			10:4:5:LastNode 
			10:4:1:StartNode 
			10:10:0:0:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:116:Junction 3: Special Switch Puzzle 
	$$CHILD_BLOCK_START
	01:1:80 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:8:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:115:Junction 3: Ball Matcen Generated 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:8:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:BallMade:Message 
			$$CHILD_BLOCK_END
		08:aObjSaveHandle 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:10:0:7:SavedObjectSlot 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:300.000000:Time 
			10:10:0:36:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:117:Junction 3: Ball In Hole 
	$$CHILD_BLOCK_START
	01:0:6 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsType:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				10:10:0:11:ObjectType 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:9:Matcen 
			$$CHILD_BLOCK_END
		08:aCancelTimer 
			$$CHILD_BLOCK_START
			10:10:0:36:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:125:Junction 3: Ball Death 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:36:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			06:qObjSavedHandle:Object 
				$$CHILD_BLOCK_START
				10:10:0:7:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:118:Junction 3: Cloak Matcened 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:9:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:DO NOTHING 
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:119:Junction 3: Summon Maintenance Switch 
	$$CHILD_BLOCK_START
	01:1:81 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:30:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:0.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qObjAnimFrame:Float 
						$$CHILD_BLOCK_START
						10:1:2:-1:Object 
						$$CHILD_BLOCK_END
					07:1:0 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:30:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:10:Matcen 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:MBotSwitch:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:120:Junction 3: Maintenance Summoned 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:10:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aObjSaveHandle 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:10:0:2:SavedObjectSlot 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:16:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:10:Path 
			10:4:1:FirstNode 
			10:4:5:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:11:GoalID 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		08:aSoundPlaySteaming 
			$$CHILD_BLOCK_START
			10:19:3:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.500000:Time 
			10:10:0:33:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:121:Junction 3: Gadget Sees You 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:33:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:2:SavedObjectSlot 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qDoorLocked:Bool 
						$$CHILD_BLOCK_START
						10:0:0:5:Door 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:MBotDied:Message 
					$$CHILD_BLOCK_END
				08:aObjPlayAnim 
					$$CHILD_BLOCK_START
					10:1:0:81:Object 
					10:4:1:StartFrame 
					10:4:2:EndFrame 
					10:6:2.000000:CycleTime 
					10:5:0:Looping 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:0:Sound 
					10:1:0:81:Object 
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:30:UserFlag 
					10:5:0:True/False 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				09:0 
					$$CHILD_BLOCK_START
					05:1 
						$$CHILD_BLOCK_START
						06:qUserFlag:Bool 
							$$CHILD_BLOCK_START
							10:10:0:16:UserFlag 
							$$CHILD_BLOCK_END
						07:0:7 
						$$CHILD_BLOCK_END
					05:1 
						$$CHILD_BLOCK_START
						06:qSawTargetRecently:Bool 
							$$CHILD_BLOCK_START
							06:qObjSavedHandle:Object 
								$$CHILD_BLOCK_START
								10:10:0:2:SavedObjectSlot 
								$$CHILD_BLOCK_END
							10:6:1.000000:Time 
							$$CHILD_BLOCK_END
						07:0:6 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:16:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aAIGoalGotoObject 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:2:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:1:0:82:Target 
					10:10:0:3:GoalPriority 
					10:15:4352:AIGoalFlags 
					10:10:0:12:GoalID 
					$$CHILD_BLOCK_END
				08:aAIGoalSetCircleDistance 
					$$CHILD_BLOCK_START
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:2:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:10:0:3:GoalPriority 
					10:6:30.000000:distance 
					$$CHILD_BLOCK_END
				08:aSoundPlayObject 
					$$CHILD_BLOCK_START
					10:12:4:Sound 
					06:qObjSavedHandle:Object 
						$$CHILD_BLOCK_START
						10:10:0:2:SavedObjectSlot 
						$$CHILD_BLOCK_END
					10:9:1.000000:Volume 
					$$CHILD_BLOCK_END
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:MBotSpottedUs:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:0.500000:Time 
				10:10:0:33:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:122:Junction 3: Gadget Unlocks Door 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:11:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qDoorLocked:Bool 
					$$CHILD_BLOCK_START
					10:0:0:5:Door 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aDoorLockUnlock 
				$$CHILD_BLOCK_START
				10:10:0:0:Lock/Unlock 
				10:0:0:5:DoorName 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DoorUnlockedMaint:Message 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:12:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:10:Path 
			10:4:6:FirstNode 
			10:4:11:LastNode 
			10:4:5:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10489856:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:123:Junction 3: Guard Summoned 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:12:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:1:Activate/Deactivate 
			10:17:0:11:Matcen 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:10:Path 
			10:4:1:FirstNode 
			10:4:5:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:11:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:MBotSummon:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:124:Junction 3: Guard Going To Player 
	$$CHILD_BLOCK_START
	01:2:0 
	02:21 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:17:1:-1:Matcen 
			07:1:0 
			10:17:0:11:Matcen 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMatcenSetState 
			$$CHILD_BLOCK_START
			10:10:0:0:Activate/Deactivate 
			10:17:1:6:Matcen 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:16:10:Path 
			10:4:1:FirstNode 
			10:4:5:LastNode 
			10:4:1:StartNode 
			10:10:0:0:GoalPriority 
			10:15:2101504:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:29:Hazardous Waste: Guard Area Switch 
	$$CHILD_BLOCK_START
	01:1:83 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qPortalIsOn:Bool 
					$$CHILD_BLOCK_START
					10:4:1:PortalNum 
					10:2:30:Room 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aPortalRenderSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Enable/Disable 
				10:4:1:PortalNum 
				10:2:30:Room 
				10:5:1:DoublesidedFlag 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:0:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				10:6:2.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:3:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qGoalCompleted:Bool 
						$$CHILD_BLOCK_START
						10:18:0:14:LevelGoal 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aGoalCompleted 
					$$CHILD_BLOCK_START
					10:18:0:14:LevelGoal 
					10:10:0:1:Completed 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:30:Hazardous Waste: Guard Movie 
	$$CHILD_BLOCK_START
	01:0:7 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:1:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicScreenMode 
			$$CHILD_BLOCK_START
			10:10:0:0:CineScreenMode 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextMode 
			$$CHILD_BLOCK_START
			10:10:0:4:CineTextMode 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:83:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextLayoutMode 
			$$CHILD_BLOCK_START
			10:10:0:32:CineTextLayoutMode 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:0:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraOnPath 
			$$CHILD_BLOCK_START
			10:16:11:Path 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:IncomingTransmit:Text 
			10:6:5.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:13:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:14:Object 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:13:Object 
			10:16:0:Path 
			10:15:3149828:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:14:Object 
			10:16:1:Path 
			10:15:11538436:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:13:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:14:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:32:Hazardous Waste: Guard Movie Cut 2 
	$$CHILD_BLOCK_START
	01:1:83 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:1:UserVar 
			$$CHILD_BLOCK_END
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:84:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:0:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:85:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraView 
			$$CHILD_BLOCK_START
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			06:qObjRoom:Room 
				$$CHILD_BLOCK_START
				10:1:0:84:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextMode 
			$$CHILD_BLOCK_START
			10:10:0:4:CineTextMode 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.200000:Start 
			10:9:0.900000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:0:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:HazardGadget1Line:Text 
			10:6:6.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:33:Hazardous Waste: Guard Movie Cut 3 
	$$CHILD_BLOCK_START
	01:1:85 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			06:qUserVarValueInt:Integer 
				$$CHILD_BLOCK_START
				10:10:0:1:UserVar 
				$$CHILD_BLOCK_END
			07:1:3 
			10:4:5:Integer 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:1:UserVar 
			$$CHILD_BLOCK_END
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:86:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:0:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:87:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraView 
			$$CHILD_BLOCK_START
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			06:qObjRoom:Room 
				$$CHILD_BLOCK_START
				10:1:0:86:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.100000:Start 
			10:9:0.900000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextMode 
			$$CHILD_BLOCK_START
			10:10:0:4:CineTextMode 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:1:UserVar 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:3:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aComplexCinematicEndTrans 
				$$CHILD_BLOCK_START
				10:10:0:0:CineEndTransition 
				$$CHILD_BLOCK_END
			08:aComplexCinematicEnd 
				$$CHILD_BLOCK_START
				10:8:HazardGadget2Line:Text 
				10:6:8.000000:Seconds 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:DO NOTHING 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:34:Hazardous Waste: Guard Movie Cut 4 
	$$CHILD_BLOCK_START
	01:1:87 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			06:qUserVarValueInt:Integer 
				$$CHILD_BLOCK_START
				10:10:0:1:UserVar 
				$$CHILD_BLOCK_END
			07:1:3 
			10:4:6:Integer 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:1:UserVar 
			$$CHILD_BLOCK_END
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:84:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:0:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:85:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraView 
			$$CHILD_BLOCK_START
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			06:qObjRoom:Room 
				$$CHILD_BLOCK_START
				10:1:0:84:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.100000:Start 
			10:9:0.800000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextMode 
			$$CHILD_BLOCK_START
			10:10:0:4:CineTextMode 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:1:UserVar 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:4:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aComplexCinematicEndTrans 
				$$CHILD_BLOCK_START
				10:10:0:0:CineEndTransition 
				$$CHILD_BLOCK_END
			08:aComplexCinematicEnd 
				$$CHILD_BLOCK_START
				10:8:HazardGadget1Line2:Text 
				10:6:9.000000:Seconds 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:11.000000:Time 
				10:10:0:47:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:DO NOTHING 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:203:Hazardous Waste: Guidebot Hint 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:47:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:HazardousStorageHint:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:37:Gravity Room 1: Down Switch 
	$$CHILD_BLOCK_START
	01:1:88 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:cGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:1:GravityRoom 
			10:10:0:0:Gravity 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:2:UserVar 
					$$CHILD_BLOCK_END
				07:1:1 
				10:4:0:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:31:Room 
				10:6:0.000000:X 
				10:6:-1.000000:Y 
				10:6:0.000000:Z 
				10:6:10.000000:Speed 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:3.000000:Time 
				10:10:0:5:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:2:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:35:Gravity Room 1: Neutral Switch 
	$$CHILD_BLOCK_START
	01:1:89 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:2:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		08:cGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:1:GravityRoom 
			10:10:0:1:Gravity 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:38:Gravity Room 1: Up Switch 
	$$CHILD_BLOCK_START
	01:1:90 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:cGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:1:GravityRoom 
			10:10:0:2:Gravity 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:2:UserVar 
					$$CHILD_BLOCK_END
				07:1:1 
				10:4:2:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:31:Room 
				10:6:0.000000:X 
				10:6:1.000000:Y 
				10:6:0.000000:Z 
				10:6:10.000000:Speed 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:3.000000:Time 
				10:10:0:5:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:2:UserVar 
			10:6:2.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:43:Gravity Room 1: Wind Off 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:5:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:31:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:204:Gravity Room 2: Puzzle Hint 
	$$CHILD_BLOCK_START
	01:0:8 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:BallFanPuzzleHint:Message 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:39:Gravity Room 2: Down Switch 
	$$CHILD_BLOCK_START
	01:1:91 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:cGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:2:GravityRoom 
			10:10:0:0:Gravity 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:3:UserVar 
					$$CHILD_BLOCK_END
				07:1:1 
				10:4:0:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSetVelocity 
				$$CHILD_BLOCK_START
				10:1:0:92:Object 
				10:6:0.000000:X 
				10:6:-1.000000:Y 
				10:6:0.000000:Z 
				10:6:5.000000:Speed 
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:32:Room 
				10:6:0.000000:X 
				10:6:-1.000000:Y 
				10:6:0.000000:Z 
				10:6:15.000000:Speed 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:3.000000:Time 
				10:10:0:6:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:40:Gravity Room 2: Neutral Switch 
	$$CHILD_BLOCK_START
	01:1:93 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:2:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		08:cGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:2:GravityRoom 
			10:10:0:1:Gravity 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:41:Gravity Room 2: Up Switch 
	$$CHILD_BLOCK_START
	01:1:94 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayerWeapon:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				09:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:0.000000:Literal 
						$$CHILD_BLOCK_END
					05:2 
						$$CHILD_BLOCK_START
						06:qObjAnimFrame:Float 
							$$CHILD_BLOCK_START
							10:1:2:-1:Object 
							$$CHILD_BLOCK_END
						07:1:0 
						10:6:2.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:3:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:4:0:StartFrame 
			10:4:2:EndFrame 
			10:6:4.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:cGravityRoomBoxStates 
			$$CHILD_BLOCK_START
			10:10:0:2:GravityRoom 
			10:10:0:2:Gravity 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:3:UserVar 
					$$CHILD_BLOCK_END
				07:1:1 
				10:4:2:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSetVelocity 
				$$CHILD_BLOCK_START
				10:1:0:92:Object 
				10:6:0.000000:X 
				10:6:1.000000:Y 
				10:6:0.000000:Z 
				10:6:5.000000:Speed 
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:32:Room 
				10:6:0.000000:X 
				10:6:1.000000:Y 
				10:6:0.000000:Z 
				10:6:15.000000:Speed 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:3.000000:Time 
				10:10:0:6:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:3:UserVar 
			10:6:2.000000:value 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:44:Gravity Room 2: Wind Off 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:6:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:32:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:45:Gravity Room 2: The Floating Ball 
	$$CHILD_BLOCK_START
	01:1:92 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:95:Object 
				$$CHILD_BLOCK_END
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:96:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:95:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDestroy 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			08:aGoalEnableDisable 
				$$CHILD_BLOCK_START
				10:10:0:1:Enable/Disable 
				10:18:0:15:LevelGoal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:96:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDestroy 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			08:aGoalEnableDisable 
				$$CHILD_BLOCK_START
				10:10:0:1:Enable/Disable 
				10:18:0:16:LevelGoal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:17:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:46:Gravity Room 1: Trigger 1 Bot Die 
	$$CHILD_BLOCK_START
	01:0:9 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:47:Gravity Room 1: Trigger 2 Bot Die 
	$$CHILD_BLOCK_START
	01:0:10 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:48:Gravity Room 1: Trigger 3 Bot Die 
	$$CHILD_BLOCK_START
	01:0:11 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:49:Gravity Room 1: Trigger 4 Bot Die 
	$$CHILD_BLOCK_START
	01:0:12 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:72:Shark Security 0: Activate Guard AI 
	$$CHILD_BLOCK_START
	01:0:13 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:15:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:16:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:17:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:18:Object 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:15:Object 
			10:16:12:Path 
			10:4:1:FirstNode 
			10:4:11:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10490112:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:16:Object 
			10:16:13:Path 
			10:4:1:FirstNode 
			10:4:11:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10490112:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:17:Object 
			10:16:14:Path 
			10:4:1:FirstNode 
			10:4:11:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10490112:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:18:Object 
			10:16:15:Path 
			10:4:1:FirstNode 
			10:4:11:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:10490112:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:71:Shark Security 0: Detected Player 
	$$CHILD_BLOCK_START
	01:1:18 
	02:11 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:7:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:24:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:7:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:16:15:Path 
			10:4:11:FirstNode 
			10:4:13:LastNode 
			10:4:11:StartNode 
			10:10:0:3:GoalPriority 
			10:15:4480:AIGoalFlags 
			10:10:0:9:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:IntruderAlertR0:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:4:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:70:Shark Security 0: Alarm! 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:18:Object 
				$$CHILD_BLOCK_END
			05:2 
				$$CHILD_BLOCK_START
				10:10:1:0:GoalID 
				07:1:0 
				10:10:0:9:GoalID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:24:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:97:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				10:6:2.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:0:Sound 
				10:1:0:97:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:2.000000:Time 
				10:10:0:10:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:18:Object 
			10:16:15:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:18:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:69:Shark Security 0: Sharks 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:10:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:SecurityR0:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlay2D 
			$$CHILD_BLOCK_START
			10:12:5:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:10:0:0:SharkTrapRoom 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qRoomHasPlayer:Bool 
					$$CHILD_BLOCK_START
					10:2:33:Room 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:cSetSharkTarget 
				$$CHILD_BLOCK_START
				10:10:0:0:SharkTrapRoom 
				10:1:0:18:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:108:Shark Security 0: Switch Hit 
	$$CHILD_BLOCK_START
	01:1:97 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:24:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:24:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:97:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:0:97:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:18:Object 
			10:16:15:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:18:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:2.000000:Time 
			10:10:0:10:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:67:Shark Security 1: Detected Player 
	$$CHILD_BLOCK_START
	01:1:17 
	02:11 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:6:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:25:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:6:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:16:14:Path 
			10:4:11:FirstNode 
			10:4:13:LastNode 
			10:4:11:StartNode 
			10:10:0:3:GoalPriority 
			10:15:4480:AIGoalFlags 
			10:10:0:8:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:IntruderAlertR1:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:4:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:66:Shark Security 1: Alarm! 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:17:Object 
				$$CHILD_BLOCK_END
			05:2 
				$$CHILD_BLOCK_START
				10:10:1:0:GoalID 
				07:1:0 
				10:10:0:8:GoalID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:25:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:25:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:98:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				10:6:2.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:0:Sound 
				10:1:0:98:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:2.000000:Time 
				10:10:0:9:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:17:Object 
			10:16:14:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:17:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:65:Shark Security 1: Sharks 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:9:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:SecurityR1:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlay2D 
			$$CHILD_BLOCK_START
			10:12:5:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:10:0:1:SharkTrapRoom 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qRoomHasPlayer:Bool 
					$$CHILD_BLOCK_START
					10:2:34:Room 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:cSetSharkTarget 
				$$CHILD_BLOCK_START
				10:10:0:1:SharkTrapRoom 
				10:1:0:17:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:109:Shark Security 1: Switch Hit 
	$$CHILD_BLOCK_START
	01:1:98 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:25:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:25:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:98:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:0:98:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:2.000000:Time 
			10:10:0:9:TimerID 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:17:Object 
			10:16:14:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:17:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:62:Shark Security 2: Detected Player 
	$$CHILD_BLOCK_START
	01:1:16 
	02:11 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:5:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:26:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:5:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:16:13:Path 
			10:4:11:FirstNode 
			10:4:13:LastNode 
			10:4:11:StartNode 
			10:10:0:3:GoalPriority 
			10:15:4480:AIGoalFlags 
			10:10:0:7:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:IntruderAlertR2:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:4:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:63:Shark Security 2: Alarm! 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:16:Object 
				$$CHILD_BLOCK_END
			05:2 
				$$CHILD_BLOCK_START
				10:10:1:0:GoalID 
				07:1:0 
				10:10:0:7:GoalID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:26:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:26:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:99:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				10:6:2.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:0:Sound 
				10:1:0:99:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:2.000000:Time 
				10:10:0:8:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:16:Object 
			10:16:13:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:16:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:64:Shark Security 2: Sharks 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:8:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:SecurityR2:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlay2D 
			$$CHILD_BLOCK_START
			10:12:5:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:10:0:2:SharkTrapRoom 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qRoomHasPlayer:Bool 
					$$CHILD_BLOCK_START
					10:2:35:Room 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:cSetSharkTarget 
				$$CHILD_BLOCK_START
				10:10:0:2:SharkTrapRoom 
				10:1:0:16:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:112:Shark Security 2: Switch Hit 
	$$CHILD_BLOCK_START
	01:1:99 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:26:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:26:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:99:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:0:99:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:2.000000:Time 
			10:10:0:8:TimerID 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:16:Object 
			10:16:13:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:16:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:52:Shark Security 3: Detected Player 
	$$CHILD_BLOCK_START
	01:1:15 
	02:11 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:4:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:27:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:4:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:16:12:Path 
			10:4:11:FirstNode 
			10:4:13:LastNode 
			10:4:11:StartNode 
			10:10:0:3:GoalPriority 
			10:15:4480:AIGoalFlags 
			10:10:0:6:GoalID 
			$$CHILD_BLOCK_END
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:IntruderAlertR3:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:4:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:53:Shark Security 3: Alarm! 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				07:1:0 
				10:1:0:15:Object 
				$$CHILD_BLOCK_END
			05:2 
				$$CHILD_BLOCK_START
				10:10:1:0:GoalID 
				07:1:0 
				10:10:0:6:GoalID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:27:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:27:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:100:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				10:6:2.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:0:Sound 
				10:1:0:100:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:2.000000:Time 
				10:10:0:7:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:15:Object 
			10:16:12:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:15:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:54:Shark Security 3: Sharks 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:7:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:SecuirtyR3:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlay2D 
			$$CHILD_BLOCK_START
			10:12:5:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:cOffAIForSharksInRoom 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:10:0:3:SharkTrapRoom 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qRoomHasPlayer:Bool 
					$$CHILD_BLOCK_START
					10:2:36:Room 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:cSetSharkTarget 
				$$CHILD_BLOCK_START
				10:10:0:3:SharkTrapRoom 
				10:1:0:15:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:153:Shark Security 3: Switch Hit 
	$$CHILD_BLOCK_START
	01:1:100 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:27:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:27:UserFlag 
			10:5:1:True/False 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:100:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:0:Sound 
			10:1:0:100:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:2.000000:Time 
			10:10:0:7:TimerID 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:15:Object 
			10:16:12:Path 
			10:4:13:FirstNode 
			10:4:14:LastNode 
			10:4:13:StartNode 
			10:10:0:3:GoalPriority 
			10:15:65796:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:15:Object 
			10:10:0:3:GoalPriority 
			10:6:40.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:51:Level Sequencing: Lower Station Lockdown 
	$$CHILD_BLOCK_START
	01:0:14 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:101:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			06:qUserVarValue:CycleTime 
				$$CHILD_BLOCK_START
				10:10:0:6:UserVar 
				$$CHILD_BLOCK_END
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:102:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			06:qUserVarValue:CycleTime 
				$$CHILD_BLOCK_START
				10:10:0:6:UserVar 
				$$CHILD_BLOCK_END
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:103:Object 
			10:4:0:StartFrame 
			10:4:1:EndFrame 
			06:qUserVarValue:CycleTime 
				$$CHILD_BLOCK_START
				10:10:0:6:UserVar 
				$$CHILD_BLOCK_END
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:11:UserVar 
			10:6:1.000000:value 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			06:qUserVarValue:Time 
				$$CHILD_BLOCK_START
				10:10:0:6:UserVar 
				$$CHILD_BLOCK_END
			10:10:0:11:TimerID 
			$$CHILD_BLOCK_END
		08:aSoundPlaySteaming 
			$$CHILD_BLOCK_START
			10:19:4:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:205:Big Fan 0: Hint 
	$$CHILD_BLOCK_START
	01:0:15 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:10:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:WindFanPuzzleHint:Message 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:206:Big Fan 1: Hint 
	$$CHILD_BLOCK_START
	01:0:16 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:11:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:WindFanPuzzleHint:Message 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:61:Big Fan 0: Deactivation 
	$$CHILD_BLOCK_START
	01:1:10 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:FanDisabled:Message 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:7:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:8:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:9:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:0:104:Object 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:8:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:15:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:76:Big Fan 1: Deactivation 
	$$CHILD_BLOCK_START
	01:1:11 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:FanDisabled:Message 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:10:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:11:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:12:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:0:105:Object 
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:9:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:16:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:77:Big Fan 0: Kill 
	$$CHILD_BLOCK_START
	01:1:104 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayer:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsType:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						10:10:0:2:ObjectType 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:8:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:210.000000:DamageAmount 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:75:Big Fan 1: Kill 
	$$CHILD_BLOCK_START
	01:1:105 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsPlayer:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjIsType:Bool 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object 
						10:10:0:2:ObjectType 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:9:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:210.000000:DamageAmount 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:74:Big Fan 2: Kill 
	$$CHILD_BLOCK_START
	01:1:106 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:210.000000:DamageAmount 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:73:Big Fan 3: Kill 
	$$CHILD_BLOCK_START
	01:1:107 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:210.000000:DamageAmount 
			$$CHILD_BLOCK_END
		08:DO NOTHING 
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:178:Cooling Fan: Death Trigger 02 
	$$CHILD_BLOCK_START
	01:0:17 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:177:Cooling Fan: Death Trigger 03 
	$$CHILD_BLOCK_START
	01:0:18 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjDestroy 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:80:Tesla Coil: Stage A 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:11:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:108:Object1 
			10:1:0:101:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:109:Object1 
			10:1:0:102:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:110:Object1 
			10:1:0:103:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			10:6:1.000000:Thickness 
			10:4:1:NumTiles 
			10:14:3:Texture 
			10:6:0.500000:SlideTime 
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:108:Object1 
			10:1:0:101:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:109:Object1 
			10:1:0:102:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:110:Object1 
			10:1:0:103:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			06:qUserVarValue:Time 
				$$CHILD_BLOCK_START
				10:10:0:7:UserVar 
				$$CHILD_BLOCK_END
			10:10:0:12:TimerID 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:10:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:11:UserVar 
				10:6:1.000000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:37:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:38:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:39:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:40:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:41:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:42:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:43:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:44:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:108:Object A 
					10:1:0:101:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:101:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:109:Object A 
					10:1:0:102:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:102:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:110:Object A 
					10:1:0:103:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:103:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:79:Tesla Coil: Stage A-B 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:12:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:101:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:102:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:103:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:111:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:112:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:113:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:13:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:111:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:112:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:113:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:101:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:102:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:103:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:11:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:81:Tesla Coil: Stage B 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:13:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:114:Object1 
			10:1:0:111:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:115:Object1 
			10:1:0:112:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:116:Object1 
			10:1:0:113:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:114:Object1 
			10:1:0:111:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:115:Object1 
			10:1:0:112:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:116:Object1 
			10:1:0:113:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:14:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:37:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:38:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:39:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:40:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:45:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:46:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:47:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:48:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:41:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:42:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:43:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:44:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:12:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:114:Object A 
					10:1:0:111:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:111:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:115:Object A 
					10:1:0:112:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:112:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:116:Object A 
					10:1:0:113:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:113:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:82:Tesla Coil: Stage B-C 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:14:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:117:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:118:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:119:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:111:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:112:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:113:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:15:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:111:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:112:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:113:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:117:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:118:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:119:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:13:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:83:Tesla Coil: Stage C 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:15:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:120:Object1 
			10:1:0:117:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:121:Object1 
			10:1:0:118:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:122:Object1 
			10:1:0:119:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:120:Object1 
			10:1:0:117:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:121:Object1 
			10:1:0:118:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:122:Object1 
			10:1:0:119:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:16:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:14:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:120:Object A 
					10:1:0:117:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:117:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:122:Object A 
					10:1:0:119:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:119:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:121:Object A 
					10:1:0:118:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:118:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:84:Tesla Coil: Stage C-D 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:16:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:123:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:124:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:125:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:117:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:118:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:119:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:17:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:117:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:118:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:119:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:123:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:124:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:125:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:15:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:85:Tesla Coil: Stage D 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:17:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:126:Object1 
			10:1:0:123:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:127:Object1 
			10:1:0:124:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:128:Object1 
			10:1:0:125:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:126:Object1 
			10:1:0:123:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:127:Object1 
			10:1:0:124:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:128:Object1 
			10:1:0:125:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:41:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:42:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:43:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:44:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:45:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:46:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:47:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:48:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:18:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:41:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:42:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:43:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:44:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:45:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:46:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:47:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:48:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:16:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:37:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:38:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:39:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		08:aRoomChangeWind 
			$$CHILD_BLOCK_START
			10:2:40:Room 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:0.000000:Z 
			10:6:0.000000:Speed 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:126:Object A 
					10:1:0:123:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:123:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:128:Object A 
					10:1:0:125:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:125:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:127:Object A 
					10:1:0:124:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:124:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:86:Tesla Coil: Stage D-E 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:18:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:129:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:130:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:131:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:123:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:124:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:125:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:19:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:123:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:124:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:125:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:129:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:130:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:131:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:17:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:87:Tesla Coil: Stage E 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:19:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:132:Object1 
			10:1:0:129:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:133:Object1 
			10:1:0:130:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:134:Object1 
			10:1:0:131:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:132:Object1 
			10:1:0:129:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:133:Object1 
			10:1:0:130:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:134:Object1 
			10:1:0:131:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:20:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:18:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:132:Object A 
					10:1:0:129:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:129:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:133:Object A 
					10:1:0:130:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:130:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:134:Object A 
					10:1:0:131:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:131:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:88:Tesla Coil: Stage E-F 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:20:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:135:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:136:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:137:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:129:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:130:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:131:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:21:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:129:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:130:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:131:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:135:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:136:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:137:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:19:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:89:Tesla Coil: Stage F 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:21:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:138:Object1 
			10:1:0:135:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:139:Object1 
			10:1:0:136:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:140:Object1 
			10:1:0:137:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:138:Object1 
			10:1:0:135:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:139:Object1 
			10:1:0:136:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:140:Object1 
			10:1:0:137:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:22:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:20:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:138:Object A 
					10:1:0:135:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:135:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:139:Object A 
					10:1:0:136:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:136:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:140:Object A 
					10:1:0:137:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:137:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:90:Tesla Coil: Stage F-G 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:22:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:141:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:142:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:143:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:135:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:136:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:137:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:23:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:135:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:136:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:137:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:141:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:142:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:143:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:21:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:91:Tesla Coil: Stage G 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:23:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:144:Object1 
			10:1:0:141:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:145:Object1 
			10:1:0:142:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:146:Object1 
			10:1:0:143:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:144:Object1 
			10:1:0:141:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:145:Object1 
			10:1:0:142:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:146:Object1 
			10:1:0:143:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:44:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:43:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:42:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:41:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:40:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:39:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:38:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:37:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:13:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:45:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:46:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:47:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:48:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:25:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:37:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:38:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:39:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomSetWind 
				$$CHILD_BLOCK_START
				10:2:40:Room 
				10:6:0.000000:X 
				06:qUserVarValue:Y 
					$$CHILD_BLOCK_START
					10:10:0:11:UserVar 
					$$CHILD_BLOCK_END
				10:6:0.000000:Z 
				06:qUserVarValue:Speed 
					$$CHILD_BLOCK_START
					10:10:0:12:UserVar 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:45:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:46:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:47:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:48:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:0.000000:Z 
				10:6:0.000000:Speed 
				10:6:1.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:7:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:22:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:144:Object A 
					10:1:0:141:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:141:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:145:Object A 
					10:1:0:142:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:142:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:146:Object A 
					10:1:0:143:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:143:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:92:Tesla Coil: Stage G-H 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:25:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:147:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:148:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:149:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:141:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:142:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:143:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:5:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:24:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:141:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:142:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:143:Object 
				10:4:0:StartFrame 
				10:4:1:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:147:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:148:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:149:Object 
				10:4:1:StartFrame 
				10:4:2:EndFrame 
				06:qUserVarValue:CycleTime 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Time 
					$$CHILD_BLOCK_START
					10:10:0:6:UserVar 
					$$CHILD_BLOCK_END
				10:10:0:23:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:93:Tesla Coil: Stage H 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:24:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			06:qUserVarValue:Time 
				$$CHILD_BLOCK_START
				10:10:0:7:UserVar 
				$$CHILD_BLOCK_END
			10:10:0:25:TimerID 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:150:Object1 
			10:1:0:147:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:151:Object1 
			10:1:0:148:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:152:Object1 
			10:1:0:149:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:4:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:10:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:150:Object1 
			10:1:0:147:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:151:Object1 
			10:1:0:148:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:152:Object1 
			10:1:0:149:Object2 
			06:qUserVarValue:Lifetime 
				$$CHILD_BLOCK_START
				10:10:0:4:UserVar 
				$$CHILD_BLOCK_END
			06:qUserVarValue:Thickness 
				$$CHILD_BLOCK_START
				10:10:0:8:UserVar 
				$$CHILD_BLOCK_END
			10:4:1:NumTiles 
			10:14:3:Texture 
			06:qUserVarValue:SlideTime 
				$$CHILD_BLOCK_START
				10:10:0:9:UserVar 
				$$CHILD_BLOCK_END
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:1:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:150:Object A 
					10:1:0:147:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:147:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:151:Object A 
					10:1:0:148:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:148:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:152:Object A 
					10:1:0:149:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:149:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:10:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:10:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:11:UserVar 
				10:6:-1.000000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:95:Captain Gadget: Warming up 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:4:50000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:57:Captain Gadget: Datalink Key 
	$$CHILD_BLOCK_START
	01:1:20 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:14:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aAddObjectToInventoryNamed 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:1:1:-1:PlayerObject 
			10:8:DataKeyCaptain:ItemName 
			10:5:0:Spewable 
			$$CHILD_BLOCK_END
		08:aShowHUDMessageObj 
			$$CHILD_BLOCK_START
			10:8:GotDatalinkKey:Message 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:1:Sound 
			10:1:1:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:18:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:94:Captain Gadget: Intro Cinematic Cut 1 - Old 
	$$CHILD_BLOCK_START
	01:0:19 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			10:5:1:Literal 
			07:0:7 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:153:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraOnPath 
			$$CHILD_BLOCK_START
			10:16:16:Path 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:0:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:EmptyMessage:Text 
			10:6:4.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:179:NewCaptain: IntroStart 
	$$CHILD_BLOCK_START
	01:0:19 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aCinematicSimple 
			$$CHILD_BLOCK_START
			10:16:17:CameraPath 
			10:8:CaptainText:Text 
			10:1:0:19:Target 
			10:6:6.000000:Seconds 
			10:5:1:FadeIn 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:4:0:StartFrame 
			10:4:5:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aDoorSetPos 
			$$CHILD_BLOCK_START
			10:0:0:6:Door 
			10:9:0.000000:Position 
			$$CHILD_BLOCK_END
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:1:Lock/Unlock 
			10:0:0:6:DoorName 
			$$CHILD_BLOCK_END
		08:aObjSetShields 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			06:qMathAddFloat:Shields 
				$$CHILD_BLOCK_START
				10:6:250.000000:Float1 
				06:qMathMulFloat:Float2 
					$$CHILD_BLOCK_START
					10:6:100.000000:Float1 
					06:qMathIntToFloat:Float2 
						$$CHILD_BLOCK_START
						06:qGetDifficulty:Int 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:3.500000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:166:NewCaptain: PowerUp 
	$$CHILD_BLOCK_START
	01:1:19 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aObjMakeVulnerable 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:154:Object 
			10:6:2.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:50.000000:SparkRate 
			10:6:3.000000:Time 
			$$CHILD_BLOCK_END
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:999.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:182:New Captain: Ghost 
	$$CHILD_BLOCK_START
	01:1:154 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjShields:Float 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aEmitSparks 
			$$CHILD_BLOCK_START
			10:6:30.000000:Number 
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		08:aMiscShakeArea 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:40.000000:Amount 
			10:6:200.000000:Dist 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:155:Object 
			06:qRandomValue:Time 
				$$CHILD_BLOCK_START
				10:6:2.000000:LowerLimit 
				10:6:6.000000:UpperLimit 
				$$CHILD_BLOCK_END
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aRoomSetLightingFlicker 
			$$CHILD_BLOCK_START
			10:10:0:0:On/Off 
			10:2:49:Room 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:6:Sound 
			10:1:0:19:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:183:New Captain: Move to New Spot And Spark 
	$$CHILD_BLOCK_START
	01:1:155 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjShields:Float 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:22:UserVar 
			06:qRandomValue:value 
				$$CHILD_BLOCK_START
				10:6:0.000000:LowerLimit 
				10:6:9.500000:UpperLimit 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:22:UserVar 
					$$CHILD_BLOCK_END
				07:1:3 
				10:6:1.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aStoreObjectInPositionClipboard 
				$$CHILD_BLOCK_START
				10:1:0:154:Object 
				$$CHILD_BLOCK_END
			08:aMoveObjectToPositionClipboard 
				$$CHILD_BLOCK_START
				10:1:0:19:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:22:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aStoreObjectInPositionClipboard 
					$$CHILD_BLOCK_START
					10:1:0:155:Object 
					$$CHILD_BLOCK_END
				08:aMoveObjectToPositionClipboard 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				03:1 
					$$CHILD_BLOCK_START
					05:2 
						$$CHILD_BLOCK_START
						06:qUserVarValue:Float 
							$$CHILD_BLOCK_START
							10:10:0:22:UserVar 
							$$CHILD_BLOCK_END
						07:1:3 
						10:6:3.000000:Literal 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:0 
					$$CHILD_BLOCK_START
					08:aStoreObjectInPositionClipboard 
						$$CHILD_BLOCK_START
						10:1:0:156:Object 
						$$CHILD_BLOCK_END
					08:aMoveObjectToPositionClipboard 
						$$CHILD_BLOCK_START
						10:1:0:19:Object 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				04:1:0:1 
					$$CHILD_BLOCK_START
					03:1 
						$$CHILD_BLOCK_START
						05:2 
							$$CHILD_BLOCK_START
							06:qUserVarValue:Float 
								$$CHILD_BLOCK_START
								10:10:0:22:UserVar 
								$$CHILD_BLOCK_END
							07:1:3 
							10:6:4.000000:Literal 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					04:1:0:0 
						$$CHILD_BLOCK_START
						08:aStoreObjectInPositionClipboard 
							$$CHILD_BLOCK_START
							10:1:0:157:Object 
							$$CHILD_BLOCK_END
						08:aMoveObjectToPositionClipboard 
							$$CHILD_BLOCK_START
							10:1:0:19:Object 
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					04:1:0:1 
						$$CHILD_BLOCK_START
						03:1 
							$$CHILD_BLOCK_START
							05:2 
								$$CHILD_BLOCK_START
								06:qUserVarValue:Float 
									$$CHILD_BLOCK_START
									10:10:0:22:UserVar 
									$$CHILD_BLOCK_END
								07:1:3 
								10:6:5.000000:Literal 
								$$CHILD_BLOCK_END
							$$CHILD_BLOCK_END
						04:1:0:0 
							$$CHILD_BLOCK_START
							08:aStoreObjectInPositionClipboard 
								$$CHILD_BLOCK_START
								10:1:0:158:Object 
								$$CHILD_BLOCK_END
							08:aMoveObjectToPositionClipboard 
								$$CHILD_BLOCK_START
								10:1:0:19:Object 
								$$CHILD_BLOCK_END
							$$CHILD_BLOCK_END
						04:1:0:1 
							$$CHILD_BLOCK_START
							03:1 
								$$CHILD_BLOCK_START
								05:2 
									$$CHILD_BLOCK_START
									06:qUserVarValue:Float 
										$$CHILD_BLOCK_START
										10:10:0:22:UserVar 
										$$CHILD_BLOCK_END
									07:1:3 
									10:6:6.000000:Literal 
									$$CHILD_BLOCK_END
								$$CHILD_BLOCK_END
							04:1:0:0 
								$$CHILD_BLOCK_START
								08:aStoreObjectInPositionClipboard 
									$$CHILD_BLOCK_START
									10:1:0:159:Object 
									$$CHILD_BLOCK_END
								08:aMoveObjectToPositionClipboard 
									$$CHILD_BLOCK_START
									10:1:0:19:Object 
									$$CHILD_BLOCK_END
								$$CHILD_BLOCK_END
							04:1:0:1 
								$$CHILD_BLOCK_START
								03:1 
									$$CHILD_BLOCK_START
									05:2 
										$$CHILD_BLOCK_START
										06:qUserVarValue:Float 
											$$CHILD_BLOCK_START
											10:10:0:22:UserVar 
											$$CHILD_BLOCK_END
										07:1:3 
										10:6:7.000000:Literal 
										$$CHILD_BLOCK_END
									$$CHILD_BLOCK_END
								04:1:0:0 
									$$CHILD_BLOCK_START
									08:aStoreObjectInPositionClipboard 
										$$CHILD_BLOCK_START
										10:1:0:160:Object 
										$$CHILD_BLOCK_END
									08:aMoveObjectToPositionClipboard 
										$$CHILD_BLOCK_START
										10:1:0:19:Object 
										$$CHILD_BLOCK_END
									$$CHILD_BLOCK_END
								04:1:0:1 
									$$CHILD_BLOCK_START
									03:1 
										$$CHILD_BLOCK_START
										05:2 
											$$CHILD_BLOCK_START
											06:qUserVarValue:Float 
												$$CHILD_BLOCK_START
												10:10:0:22:UserVar 
												$$CHILD_BLOCK_END
											07:1:3 
											10:6:8.000000:Literal 
											$$CHILD_BLOCK_END
										$$CHILD_BLOCK_END
									04:1:0:0 
										$$CHILD_BLOCK_START
										08:aStoreObjectInPositionClipboard 
											$$CHILD_BLOCK_START
											10:1:0:161:Object 
											$$CHILD_BLOCK_END
										08:aMoveObjectToPositionClipboard 
											$$CHILD_BLOCK_START
											10:1:0:19:Object 
											$$CHILD_BLOCK_END
										$$CHILD_BLOCK_END
									04:1:0:1 
										$$CHILD_BLOCK_START
										08:aStoreObjectInPositionClipboard 
											$$CHILD_BLOCK_START
											10:1:0:162:Object 
											$$CHILD_BLOCK_END
										08:aMoveObjectToPositionClipboard 
											$$CHILD_BLOCK_START
											10:1:0:19:Object 
											$$CHILD_BLOCK_END
										$$CHILD_BLOCK_END
									$$CHILD_BLOCK_END
								$$CHILD_BLOCK_END
							$$CHILD_BLOCK_END
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValue:Float 
					$$CHILD_BLOCK_START
					10:10:0:22:UserVar 
					$$CHILD_BLOCK_END
				07:1:3 
				10:6:8.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:156:Object 
				10:6:1.000000:Time 
				10:10:0:-1:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:156:Object 
				10:6:1.000000:Time 
				10:10:0:-1:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aRoomSetLightingFlicker 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:2:49:Room 
			$$CHILD_BLOCK_END
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:50.000000:SparkRate 
			10:6:6.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:184:New Captain: UnCloak/UnGhost 
	$$CHILD_BLOCK_START
	01:1:156 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjShields:Float 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMiscShakeArea 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:40.000000:Amount 
			10:6:200.000000:Dist 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:157:Object 
			10:6:1.500000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:7:Sound 
			10:1:0:19:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:185:New Captain: FireWeapon 
	$$CHILD_BLOCK_START
	01:1:157 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjShields:Float 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qRandomChance:Bool 
					$$CHILD_BLOCK_START
					10:9:0.300000:Probability 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:0:WeaponName 
				10:4:0:GunNum 
				10:1:0:19:Object 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:8:Sound 
				10:1:0:19:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:1:WeaponName 
				10:4:0:GunNum 
				10:1:0:19:Object 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:9:Sound 
				10:1:0:19:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:158:Object 
			10:6:1.500000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:186:New Captain: Cloak 
	$$CHILD_BLOCK_START
	01:1:158 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjShields:Float 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:1:2 
				10:6:0.000000:Literal 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjExists:Bool 
					$$CHILD_BLOCK_START
					10:1:0:19:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:10:Sound 
			10:1:0:19:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:154:Object 
			10:6:1.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:96:Captain Gadget: Intro Cinematic Cut 2 
	$$CHILD_BLOCK_START
	01:0:19 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			10:5:0:Literal 
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:163:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.200000:Start 
			10:9:0.800000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:164:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:49:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:0:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:CaptainText:Text 
			10:6:6.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:19:Object 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:10.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:16:18:Path 
			10:4:1:FirstNode 
			10:4:3:LastNode 
			10:4:1:StartNode 
			10:10:0:3:GoalPriority 
			10:15:3145988:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:11:Sound 
			10:1:0:19:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:97:Captain Gadget:  Intro Cinematic Cut 3 
	$$CHILD_BLOCK_START
	01:1:164 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:165:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:0:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:166:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:49:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:EmptyMessage:Text 
			10:6:6.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:20.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPath 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:16:18:Path 
			10:4:3:FirstNode 
			10:4:7:LastNode 
			10:4:3:StartNode 
			10:10:0:3:GoalPriority 
			10:15:2101508:AIGoalFlags 
			10:10:0:-1:GoalID 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aDoorActivate 
			$$CHILD_BLOCK_START
			10:0:0:7:Door 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:98:Captain Gadget: Intro Cinematic Cut 4 
	$$CHILD_BLOCK_START
	01:1:166 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:167:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:168:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:50:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:EmptyMessage:Text 
			10:6:8.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:6:10.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:16:19:Path 
			10:15:3145984:AIGoalFlags 
			10:10:0:10:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:1:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:2:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:3:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:4:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:5:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:6:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:7:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:8:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:9:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:10:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:11:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:12:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:13:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:14:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:15:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:16:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:17:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:99:Captain Gadget: In his Bunker 
	$$CHILD_BLOCK_START
	01:2:0 
	02:13 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:1:0:GoalID 
			07:1:0 
			10:10:0:10:GoalID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:1:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:2:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:3:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:4:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:5:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:6:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:7:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:8:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:9:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:10:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:11:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:12:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:13:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:14:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:15:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:16:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:17:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:21:UserVar 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:174:Captain Gadget: Player Entered Bunker 
	$$CHILD_BLOCK_START
	01:0:20 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:EnteredBunker:Message 
			$$CHILD_BLOCK_END
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:21:UserVar 
			$$CHILD_BLOCK_END
		08:aDoorSetPos 
			$$CHILD_BLOCK_START
			10:0:0:6:Door 
			10:9:0.000000:Position 
			$$CHILD_BLOCK_END
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:1:Lock/Unlock 
			10:0:0:6:DoorName 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:100:Captain Gadget:  Vault Puzzle 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:27:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:4:13:PortalNum 
			10:2:50:Room 
			10:5:0:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:16:20:Path 
			10:15:3145984:AIGoalFlags 
			10:10:0:3:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:19:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:55:Captain Gadget: Destroyed 
	$$CHILD_BLOCK_START
	01:1:19 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			$$CHILD_BLOCK_END
		08:aMoveObjectToPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:20:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:20:Object 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:1:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:2:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:3:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:4:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:5:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:6:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:7:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:8:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:9:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:10:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:11:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:12:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:13:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:14:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:15:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:16:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aPortalRenderSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Enable/Disable 
			10:4:17:PortalNum 
			10:2:50:Room 
			10:5:1:DoublesidedFlag 
			$$CHILD_BLOCK_END
		08:aSoundPlay2D 
			$$CHILD_BLOCK_START
			10:12:12:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:30.000000:Time 
			10:10:0:40:TimerID 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:19:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:0:Lock/Unlock 
			10:0:0:6:DoorName 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:188:First Mate: INIT 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			10:6:99999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			10:6:99999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			10:6:99999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			10:6:99999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			10:6:99999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58722304:PhysicsFlags 
			10:1:0:22:Object 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:4:99999:Time 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:0:173:Object 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:0:172:Object 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:0:171:Object 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:0:170:Object 
			$$CHILD_BLOCK_END
		08:aAISetTeam 
			$$CHILD_BLOCK_START
			10:10:0:0:Teams 
			10:1:0:169:Object 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			10:4:99999:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			10:4:99999:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			10:4:99999:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			10:4:99999:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			10:4:99999:Time 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:169:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:170:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:171:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:172:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:173:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:173:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:172:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:171:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:170:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:169:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:103:First Mate: Datalink Key 
	$$CHILD_BLOCK_START
	01:1:21 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:15:UserFlag 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aAddObjectToInventoryNamed 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:1:1:-1:PlayerObject 
			10:8:DataKeyFirstMate:ItemName 
			10:5:0:Spewable 
			$$CHILD_BLOCK_END
		08:aShowHUDMessageObj 
			$$CHILD_BLOCK_START
			10:8:GotDatalinkKey2:Message 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:1:Sound 
			10:1:1:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:20:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:101:First Mate: Destroyed 
	$$CHILD_BLOCK_START
	01:1:22 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			$$CHILD_BLOCK_END
		08:aMoveObjectToPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:21:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:21:Object 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:21:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:180:First Mate: INTRO 
	$$CHILD_BLOCK_START
	01:0:21 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aCinematicSimple 
			$$CHILD_BLOCK_START
			10:16:21:CameraPath 
			10:8:FirstMateText:Text 
			10:1:0:22:Target 
			10:6:6.000000:Seconds 
			10:5:1:FadeIn 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:174:Object 
			10:6:3.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aDoorSetPos 
			$$CHILD_BLOCK_START
			10:0:0:8:Door 
			10:9:0.000000:Position 
			$$CHILD_BLOCK_END
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:1:Lock/Unlock 
			10:0:0:8:DoorName 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:187:First Mate: Entered Room 
	$$CHILD_BLOCK_START
	01:1:174 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:99999.000000:Seconds 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:10:Sound 
			10:1:0:22:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:169:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:170:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:171:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:172:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:173:Object 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:175:Object 
			10:6:3.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:202:First Mate: Ghost (one time) 
	$$CHILD_BLOCK_START
	01:1:175 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:22:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:189:First Mate: All Wiggle 
	$$CHILD_BLOCK_START
	01:1:175 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:12:Sound 
			10:1:0:22:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:176:Object 
			10:6:2.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			10:4:20:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			10:4:20:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			10:4:20:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			10:4:20:Time 
			$$CHILD_BLOCK_END
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			10:4:20:Time 
			$$CHILD_BLOCK_END
		08:aObjDeform 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			10:6:0.400000:Amount 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aObjDeform 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			10:6:0.400000:Amount 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aObjDeform 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			10:6:0.400000:Amount 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aObjDeform 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			10:6:0.400000:Amount 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aObjDeform 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			10:6:0.400000:Amount 
			10:6:2.000000:Time 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:173:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:172:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:171:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:170:Object 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:58787840:PhysicsFlags 
			10:1:0:169:Object 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:190:First Mate: ChooseUnWiggle 
	$$CHILD_BLOCK_START
	01:1:176 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:24:UserVar 
			06:qRandomValue:value 
				$$CHILD_BLOCK_START
				10:6:0.000000:LowerLimit 
				10:6:5.000000:UpperLimit 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:173:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:1.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:172:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:2.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:3.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:171:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:3.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:4.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:170:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:3.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:4.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:5.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:169:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:4.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:3.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:4.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:170:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:3.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:2.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:3.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:171:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:1.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:172:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:4 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:24:UserVar 
				10:6:0.500000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:3 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:173:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:0:22:Object 
				10:6:50.000000:SparkRate 
				10:6:3.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:22:Object 
				10:6:1.000000:Time 
				10:10:0:-1:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aSetObjectTimer 
				$$CHILD_BLOCK_START
				10:1:0:175:Object 
				10:6:4.000000:Time 
				10:10:0:-1:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:173:Object 
			10:6:0.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:172:Object 
			10:6:0.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:171:Object 
			10:6:0.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:170:Object 
			10:6:0.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		08:aSetObjectTimer 
			$$CHILD_BLOCK_START
			10:1:0:169:Object 
			10:6:0.000000:Time 
			10:10:0:-1:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:196:First Mate: All Destroyed 
	$$CHILD_BLOCK_START
	01:1:22 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:0:Lock/Unlock 
			10:0:0:8:DoorName 
			$$CHILD_BLOCK_END
		08:aSoundPlayObject 
			$$CHILD_BLOCK_START
			10:12:7:Sound 
			10:1:2:-1:Object 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:2:-1:Object 
			$$CHILD_BLOCK_END
		08:aObjMakeVulnerable 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			$$CHILD_BLOCK_END
		08:aUnCloakObject 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			$$CHILD_BLOCK_END
		08:aObjKill 
			$$CHILD_BLOCK_START
			10:1:2:-1:Object 
			10:10:0:1:DeathDelayType 
			10:10:0:1:DeathExplosionSize 
			10:15:2293872:DeathFlags 
			10:6:2.500000:MinDelay 
			10:6:2.500000:MaxDelay 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:191:First Mate: Timer 1 
	$$CHILD_BLOCK_START
	01:1:173 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				05:0 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDeform 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:0.400000:Amount 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:1:Set/Clear 
				10:15:58787840:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjMakeVulnerable 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:0:Set/Clear 
				10:15:65536:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:10.000000:SparkRate 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:9:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:1:WeaponName 
				10:4:0:GunNum 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:195:First Mate: Timer 5 
	$$CHILD_BLOCK_START
	01:1:169 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:4.000000:Literal 
					$$CHILD_BLOCK_END
				05:0 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDeform 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:0.400000:Amount 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:1:Set/Clear 
				10:15:58787840:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjMakeVulnerable 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:0:Set/Clear 
				10:15:65536:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:10.000000:SparkRate 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:9:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:1:WeaponName 
				10:4:0:GunNum 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:194:First Mate: Timer 4 
	$$CHILD_BLOCK_START
	01:1:170 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:4.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:3.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDeform 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:0.400000:Amount 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:1:Set/Clear 
				10:15:58787840:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjMakeVulnerable 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:0:Set/Clear 
				10:15:65536:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:10.000000:SparkRate 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:9:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:1:WeaponName 
				10:4:0:GunNum 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:193:First Mate: Timer 3 
	$$CHILD_BLOCK_START
	01:1:171 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:3.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDeform 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:0.400000:Amount 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:1:Set/Clear 
				10:15:58787840:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjMakeVulnerable 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:0:Set/Clear 
				10:15:65536:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:10.000000:SparkRate 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:9:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:1:WeaponName 
				10:4:0:GunNum 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:192:First Mate: Timer 2 
	$$CHILD_BLOCK_START
	01:1:172 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			09:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:2 
					10:6:2.000000:Literal 
					$$CHILD_BLOCK_END
				05:2 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Float 
						$$CHILD_BLOCK_START
						10:10:0:24:UserVar 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:1.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjDeform 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:0.400000:Amount 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:1:Set/Clear 
				10:15:58787840:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aObjMakeVulnerable 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aPhysFlags 
				$$CHILD_BLOCK_START
				10:10:0:0:Set/Clear 
				10:15:65536:PhysicsFlags 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:6:10.000000:SparkRate 
				10:6:4.000000:Time 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:9:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aObjFireWeapon 
				$$CHILD_BLOCK_START
				10:13:1:WeaponName 
				10:4:0:GunNum 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:197:First Mate: Destroy 1 
	$$CHILD_BLOCK_START
	01:1:173 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:20.000000:SparkRate 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:201:First Mate: Destroy 5 
	$$CHILD_BLOCK_START
	01:1:169 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:20.000000:SparkRate 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:200:First Mate: Destroy 4 
	$$CHILD_BLOCK_START
	01:1:170 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:20.000000:SparkRate 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:199:First Mate: Destroy 3 
	$$CHILD_BLOCK_START
	01:1:171 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:20.000000:SparkRate 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:198:First Mate: Destroy 2 
	$$CHILD_BLOCK_START
	01:1:172 
	02:4 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjSpark 
			$$CHILD_BLOCK_START
			10:1:0:22:Object 
			10:6:20.000000:SparkRate 
			10:6:1.000000:Time 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:58:Pole North Datalink: Used Captain's Key 
	$$CHILD_BLOCK_START
	01:1:20 
	02:25 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjGetDistance:Float 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object1 
					10:1:0:177:Object2 
					$$CHILD_BLOCK_END
				07:1:5 
				10:6:100.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aStoreObjectInPositionClipboard 
				$$CHILD_BLOCK_START
				10:1:0:177:Object 
				$$CHILD_BLOCK_END
			08:aMoveObjectToPositionClipboard 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjGhostSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Ghost/Unghost 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aSetObjectVelocity 
				$$CHILD_BLOCK_START
				10:1:0:20:Object 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:0.000000:mag 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:14:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:22:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qUserFlag:Bool 
						$$CHILD_BLOCK_START
						10:10:0:11:UserFlag 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:11:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aShowHUDMessageI 
					$$CHILD_BLOCK_START
					10:8:PoleDatalinkWarning:Message 
					06:qUserVarValueInt:Integer 
						$$CHILD_BLOCK_START
						10:10:0:15:UserVar 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				08:aRoomSetFaceTexture 
					$$CHILD_BLOCK_START
					10:2:51:Room 
					10:4:297:FaceNum 
					10:14:5:Texture 
					$$CHILD_BLOCK_END
				08:aSetLevelTimer 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Time 
						$$CHILD_BLOCK_START
						10:10:0:15:UserVar 
						$$CHILD_BLOCK_END
					10:10:0:30:TimerID 
					$$CHILD_BLOCK_END
				08:aTimerShow 
					$$CHILD_BLOCK_START
					10:10:0:30:TimerID 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:DataKeysVerified:Message 
					$$CHILD_BLOCK_END
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:23:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aObjSpark 
					$$CHILD_BLOCK_START
					10:1:0:178:Object 
					10:6:10.000000:SparkRate 
					10:6:5.000000:Time 
					$$CHILD_BLOCK_END
				08:aCancelTimer 
					$$CHILD_BLOCK_START
					10:10:0:30:TimerID 
					$$CHILD_BLOCK_END
				08:aRoomSetFaceTexture 
					$$CHILD_BLOCK_START
					10:2:51:Room 
					10:4:297:FaceNum 
					10:14:6:Texture 
					$$CHILD_BLOCK_END
				08:aRoomSetFaceTexture 
					$$CHILD_BLOCK_START
					10:2:52:Room 
					10:4:323:FaceNum 
					10:14:6:Texture 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjGetDistance:Float 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object1 
						10:1:0:179:Object2 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:100.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:DataKeyWrong2:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:DataKeyNoUse1:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aObjGhostSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Ghost/Unghost 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aAddObjectToInventoryNamed 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:1:1:-1:PlayerObject 
				10:8:DataKeyCaptain:ItemName 
				10:5:0:Spewable 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:110:Pole North: Emitter 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:31:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:14:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:180:Object1 
				10:1:0:181:Object2 
				10:6:0.250000:Lifetime 
				10:6:2.000000:Thickness 
				10:4:3:NumTiles 
				10:14:7:Texture 
				10:6:0.250000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:182:Object1 
			10:1:0:183:Object2 
			10:6:0.250000:Lifetime 
			10:6:8.000000:Thickness 
			10:4:1:NumTiles 
			10:14:3:Texture 
			10:6:0.250000:SlideTime 
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:0:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:183:Object A 
					10:1:0:182:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:183:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.250000:Time 
			10:10:0:31:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:107:Pole South Datalink: Used First Mate's Key 
	$$CHILD_BLOCK_START
	01:1:21 
	02:25 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qObjGetDistance:Float 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object1 
					10:1:0:179:Object2 
					$$CHILD_BLOCK_END
				07:1:5 
				10:6:100.000000:Literal 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aStoreObjectInPositionClipboard 
				$$CHILD_BLOCK_START
				10:1:0:179:Object 
				$$CHILD_BLOCK_END
			08:aMoveObjectToPositionClipboard 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aObjGhostSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Ghost/Unghost 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aSetObjectVelocity 
				$$CHILD_BLOCK_START
				10:1:0:21:Object 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:0.000000:mag 
				$$CHILD_BLOCK_END
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:15:UserFlag 
				10:5:1:True/False 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:23:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			03:1 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qUserFlag:Bool 
						$$CHILD_BLOCK_START
						10:10:0:11:UserFlag 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:11:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aShowHUDMessageI 
					$$CHILD_BLOCK_START
					10:8:PoleDatalinkWarning:Message 
					06:qUserVarValueInt:Integer 
						$$CHILD_BLOCK_START
						10:10:0:15:UserVar 
						$$CHILD_BLOCK_END
					$$CHILD_BLOCK_END
				08:aRoomSetFaceTexture 
					$$CHILD_BLOCK_START
					10:2:52:Room 
					10:4:323:FaceNum 
					10:14:8:Texture 
					$$CHILD_BLOCK_END
				08:aSetLevelTimer 
					$$CHILD_BLOCK_START
					06:qUserVarValue:Time 
						$$CHILD_BLOCK_START
						10:10:0:15:UserVar 
						$$CHILD_BLOCK_END
					10:10:0:30:TimerID 
					$$CHILD_BLOCK_END
				08:aTimerShow 
					$$CHILD_BLOCK_START
					10:10:0:30:TimerID 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:DataKeysVerified:Message 
					$$CHILD_BLOCK_END
				08:aUserFlagSet 
					$$CHILD_BLOCK_START
					10:10:0:23:UserFlag 
					10:5:1:True/False 
					$$CHILD_BLOCK_END
				08:aObjSpark 
					$$CHILD_BLOCK_START
					10:1:0:184:Object 
					10:6:10.000000:SparkRate 
					10:6:5.000000:Time 
					$$CHILD_BLOCK_END
				08:aCancelTimer 
					$$CHILD_BLOCK_START
					10:10:0:30:TimerID 
					$$CHILD_BLOCK_END
				08:aGoalItemCompleted 
					$$CHILD_BLOCK_START
					10:18:0:24:LevelGoal 
					10:4:1:ItemIndex 
					10:10:0:1:Completed 
					$$CHILD_BLOCK_END
				08:aRoomSetFaceTexture 
					$$CHILD_BLOCK_START
					10:2:51:Room 
					10:4:297:FaceNum 
					10:14:6:Texture 
					$$CHILD_BLOCK_END
				08:aRoomSetFaceTexture 
					$$CHILD_BLOCK_START
					10:2:52:Room 
					10:4:323:FaceNum 
					10:14:6:Texture 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			03:1 
				$$CHILD_BLOCK_START
				05:2 
					$$CHILD_BLOCK_START
					06:qObjGetDistance:Float 
						$$CHILD_BLOCK_START
						10:1:1:-1:Object1 
						10:1:0:177:Object2 
						$$CHILD_BLOCK_END
					07:1:5 
					10:6:100.000000:Literal 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:0 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:DataKeyWrong1:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			04:1:0:1 
				$$CHILD_BLOCK_START
				08:aShowHUDMessage 
					$$CHILD_BLOCK_START
					10:8:DataKeyNoUse2:Message 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			08:aObjGhostSet 
				$$CHILD_BLOCK_START
				10:10:0:0:Ghost/Unghost 
				10:1:2:-1:Object 
				$$CHILD_BLOCK_END
			08:aAddObjectToInventoryNamed 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:1:1:-1:PlayerObject 
				10:8:DataKeyFirstMate:ItemName 
				10:5:0:Spewable 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:111:Pole South: Emitter 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:32:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:15:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aLightningCreate 
				$$CHILD_BLOCK_START
				10:1:0:185:Object1 
				10:1:0:186:Object2 
				10:6:0.250000:Lifetime 
				10:6:2.000000:Thickness 
				10:4:3:NumTiles 
				10:14:7:Texture 
				10:6:0.250000:SlideTime 
				10:4:1:TimesDrawn 
				10:4:255:Red 
				10:4:255:Green 
				10:4:255:Blue 
				10:5:0:AutoTile 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aLightningCreate 
			$$CHILD_BLOCK_START
			10:1:0:187:Object1 
			10:1:0:188:Object2 
			10:6:0.250000:Lifetime 
			10:6:8.000000:Thickness 
			10:4:1:NumTiles 
			10:14:3:Texture 
			10:6:0.250000:SlideTime 
			10:4:2:TimesDrawn 
			10:4:255:Red 
			10:4:255:Green 
			10:4:255:Blue 
			10:5:0:AutoTile 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qBeamHittingPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:0:188:Object A 
					10:1:0:187:Object B 
					10:6:50.000000:Radius 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjApplyDamage 
				$$CHILD_BLOCK_START
				06:qPlayerClosest:Object 
					$$CHILD_BLOCK_START
					10:1:0:188:Object 
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				10:6:10.000000:DamageAmount 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.250000:Time 
			10:10:0:32:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:59:Pole Datalink: Lockdown 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:30:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:14:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:14:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:15:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aUserFlagSet 
				$$CHILD_BLOCK_START
				10:10:0:15:UserFlag 
				10:5:0:True/False 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aUserFlagSet 
			$$CHILD_BLOCK_START
			10:10:0:11:UserFlag 
			10:5:0:True/False 
			$$CHILD_BLOCK_END
		08:aShowColoredHUDMessage 
			$$CHILD_BLOCK_START
			10:4:255:Red 
			10:4:0:Green 
			10:4:0:Blue 
			10:8:PoleDatalinkLock:Message 
			$$CHILD_BLOCK_END
		08:aSoundPlay2D 
			$$CHILD_BLOCK_START
			10:12:13:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:51:Room 
			10:4:297:FaceNum 
			10:14:9:Texture 
			$$CHILD_BLOCK_END
		08:aRoomSetFaceTexture 
			$$CHILD_BLOCK_START
			10:2:52:Room 
			10:4:323:FaceNum 
			10:14:9:Texture 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:22:LevelGoal 
			10:10:0:0:Completed 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:23:LevelGoal 
			10:10:0:0:Completed 
			$$CHILD_BLOCK_END
		08:aSetObjectVelocity 
			$$CHILD_BLOCK_START
			10:1:0:20:Object 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:1.000000:Z 
			10:6:15.000000:mag 
			$$CHILD_BLOCK_END
		08:aSetObjectVelocity 
			$$CHILD_BLOCK_START
			10:1:0:21:Object 
			10:6:0.000000:X 
			10:6:0.000000:Y 
			10:6:1.000000:Z 
			10:6:15.000000:mag 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:105:Pole North Data Arm Hit 
	$$CHILD_BLOCK_START
	01:1:178 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:24:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:23:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:4:1:StartFrame 
				10:4:9:EndFrame 
				10:6:3.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:14:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DataArmUsed:Message 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:24:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DataArmOff:Message 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:106:Pole South Data Arm Hit 
	$$CHILD_BLOCK_START
	01:1:184 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:24:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:7 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qUserFlag:Bool 
					$$CHILD_BLOCK_START
					10:10:0:23:UserFlag 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:2:-1:Object 
				10:4:1:StartFrame 
				10:4:9:EndFrame 
				10:6:3.000000:CycleTime 
				10:5:0:Looping 
				$$CHILD_BLOCK_END
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:14:Sound 
				10:1:2:-1:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DataArmUsed:Message 
				$$CHILD_BLOCK_END
			08:aGoalCompleted 
				$$CHILD_BLOCK_START
				10:18:0:24:LevelGoal 
				10:10:0:1:Completed 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:1 
			$$CHILD_BLOCK_START
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:DataArmOff:Message 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:114:Check if Main Objectives Done 
	$$CHILD_BLOCK_START
	01:2:0 
	02:23 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:13:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qGoalCompleted:Bool 
					$$CHILD_BLOCK_START
					10:18:0:24:LevelGoal 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:3.000000:Time 
			10:10:0:46:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:176:Main Objectives Done 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:46:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aShowHUDMessage 
			$$CHILD_BLOCK_START
			10:8:GetOut:Message 
			$$CHILD_BLOCK_END
		08:aGoalEnableDisable 
			$$CHILD_BLOCK_START
			10:10:0:1:Enable/Disable 
			10:18:0:25:LevelGoal 
			$$CHILD_BLOCK_END
		08:aDoorLockUnlock 
			$$CHILD_BLOCK_START
			10:10:0:0:Lock/Unlock 
			10:0:0:0:DoorName 
			$$CHILD_BLOCK_END
		08:aAddGameMessage 
			$$CHILD_BLOCK_START
			10:8:ExitLevelLong:GameMessage 
			10:8:ExitTheLevel:HUDMessage 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:126:Showers 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:189:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.200000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:190:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:191:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:192:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:193:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:194:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:195:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:196:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:197:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:198:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:199:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:200:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:201:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:202:Object 
			10:4:-1:GunNum 
			10:10:0:7:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:1.000000:BlobLifetime 
			10:6:0.500000:BlobInterval 
			10:6:-1.000000:SpewLife 
			10:6:3.000000:BlobSize 
			10:6:20.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:129:Captain and Trooper Init Cinematic 
	$$CHILD_BLOCK_START
	01:0:22 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:3.000000:Time 
			10:10:0:34:TimerID 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:7:Object 
			$$CHILD_BLOCK_END
		08:aObjSetMovementType 
			$$CHILD_BLOCK_START
			10:1:0:203:Object 
			10:10:0:0:MovementType 
			$$CHILD_BLOCK_END
		08:aObjSetMovementType 
			$$CHILD_BLOCK_START
			10:1:0:204:Object 
			10:10:0:0:MovementType 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:135:Captain And Trooper Incoming 
	$$CHILD_BLOCK_START
	01:0:22 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:7:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:205:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.200000:Start 
			10:9:0.700000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraOnPath 
			$$CHILD_BLOCK_START
			10:16:22:Path 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextLayoutMode 
			$$CHILD_BLOCK_START
			10:10:0:32:CineTextLayoutMode 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:IncomingTransmit:Text 
			10:6:5.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:130:Captain and Trooper Cinematic 
	$$CHILD_BLOCK_START
	01:1:205 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:206:Object 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:7:Object 
			10:4:0:StartFrame 
			10:4:130:EndFrame 
			10:6:14.000000:CycleTime 
			10:5:0:Looping 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:207:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.200000:Start 
			10:9:0.900000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:53:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:0:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:CaptainAndTrooper:Text 
			10:6:8.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:131:Captain and Trooper Cinematic Cut 2 
	$$CHILD_BLOCK_START
	01:1:207 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:208:Object 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:0:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:209:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.400000:Start 
			10:9:0.900000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraAtStoredPt 
			$$CHILD_BLOCK_START
			10:2:53:Room 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:CaptainAndTrooper2:Text 
			10:6:7.000000:Seconds 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:148:Captain and Trooper Cinematic Done 
	$$CHILD_BLOCK_START
	01:1:209 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:1:Ghost/Unghost 
			10:1:0:7:Object 
			$$CHILD_BLOCK_END
		08:aObjSetMovementType 
			$$CHILD_BLOCK_START
			10:1:0:203:Object 
			10:10:0:1:MovementType 
			$$CHILD_BLOCK_END
		08:aObjSetMovementType 
			$$CHILD_BLOCK_START
			10:1:0:204:Object 
			10:10:0:1:MovementType 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:137:Escape Chute: The Door 
	$$CHILD_BLOCK_START
	01:1:210 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qGoalEnabled:Bool 
				$$CHILD_BLOCK_START
				10:18:0:25:LevelGoal 
				$$CHILD_BLOCK_END
			07:0:7 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:1:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayerOrPlayerWeapon:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:15:Sound 
				10:1:0:210:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aShowHUDMessage 
				$$CHILD_BLOCK_START
				10:8:EscapeDoorLocked:Message 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:138:Escape Chute:  PreStart 
	$$CHILD_BLOCK_START
	01:0:23 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:1 
			$$CHILD_BLOCK_START
			06:qObjIsPlayer:Bool 
				$$CHILD_BLOCK_START
				10:1:1:-1:Object 
				$$CHILD_BLOCK_END
			07:0:6 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aObjMakeInvuln 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:4:50000:Time 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:2:Object 
			$$CHILD_BLOCK_END
		08:aStoreObjectInPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:55:Object 
			$$CHILD_BLOCK_END
		08:aMoveObjectToPositionClipboard 
			$$CHILD_BLOCK_START
			10:1:0:2:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:8:Object 
			$$CHILD_BLOCK_END
		08:aObjGhostSet 
			$$CHILD_BLOCK_START
			10:10:0:0:Ghost/Unghost 
			10:1:0:9:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:8:Object 
			$$CHILD_BLOCK_END
		08:aAISetState 
			$$CHILD_BLOCK_START
			10:10:0:1:On/Off 
			10:1:0:9:Object 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:8:Object 
			10:6:8.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:9:Object 
			10:6:8.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aPhysFlags 
			$$CHILD_BLOCK_START
			10:10:0:1:Set/Clear 
			10:15:65536:PhysicsFlags 
			10:1:0:8:Object 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:8:Object 
			10:16:23:Path 
			10:15:2101508:AIGoalFlags 
			10:10:0:1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:9:Object 
			10:16:24:Path 
			10:15:2101508:AIGoalFlags 
			10:10:0:1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:8:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aAIGoalSetCircleDistance 
			$$CHILD_BLOCK_START
			10:1:0:9:Object 
			10:10:0:3:GoalPriority 
			10:6:0.000000:distance 
			$$CHILD_BLOCK_END
		08:aObjSaveHandle 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:10:0:8:SavedObjectSlot 
			$$CHILD_BLOCK_END
		08:aComplexCinematicStart 
		08:aComplexCinematicStartTrans 
			$$CHILD_BLOCK_START
			10:5:1:Enable 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTextLayoutMode 
			$$CHILD_BLOCK_START
			10:10:0:64:CineTextLayoutMode 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEndTrans 
			$$CHILD_BLOCK_START
			10:10:0:3:CineEndTransition 
			$$CHILD_BLOCK_END
		08:aComplexCinematicTrack 
			$$CHILD_BLOCK_START
			10:1:0:211:Target 
			10:9:0.000000:Start 
			10:9:1.000000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicText 
			$$CHILD_BLOCK_START
			10:9:0.200000:Start 
			10:9:0.600000:End 
			$$CHILD_BLOCK_END
		08:aComplexCinematicCameraOnPath 
			$$CHILD_BLOCK_START
			10:16:25:Path 
			$$CHILD_BLOCK_END
		08:aComplexCinematicEnd 
			$$CHILD_BLOCK_START
			10:8:IncomingTransmit:Text 
			10:6:10.300000:Seconds 
			$$CHILD_BLOCK_END
		08:aUserVarSet 
			$$CHILD_BLOCK_START
			10:10:0:17:UserVar 
			10:6:0.000000:value 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:2.000000:Time 
			10:10:0:44:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:154:Escape Chute: Do Cinematic Bomb Sequence 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:44:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:154:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:0:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aEmitSparks 
				$$CHILD_BLOCK_START
				10:6:5.000000:Number 
				10:1:0:55:Object 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:1.000000:Time 
				10:10:0:44:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:154:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:1:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aEmitSparks 
				$$CHILD_BLOCK_START
				10:6:10.000000:Number 
				10:1:0:55:Object 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:1.600000:Time 
				10:10:0:44:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:154:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:2:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSoundPlayObject 
				$$CHILD_BLOCK_START
				10:12:16:Sound 
				10:1:0:8:Object 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aEmitSparks 
				$$CHILD_BLOCK_START
				10:6:20.000000:Number 
				10:1:0:55:Object 
				$$CHILD_BLOCK_END
			08:aObjSpark 
				$$CHILD_BLOCK_START
				10:1:0:2:Object 
				10:6:30.000000:SparkRate 
				10:6:10.000000:Time 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:4.000000:Time 
				10:10:0:44:TimerID 
				$$CHILD_BLOCK_END
			08:aObjPlayAnim 
				$$CHILD_BLOCK_START
				10:1:0:8:Object 
				10:4:26:StartFrame 
				10:4:54:EndFrame 
				10:6:4.000000:CycleTime 
				10:5:1:Looping 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:154:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:3:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aSoundPlay2D 
				$$CHILD_BLOCK_START
				10:12:17:Sound 
				10:9:1.000000:Volume 
				$$CHILD_BLOCK_END
			08:aEmitSparks 
				$$CHILD_BLOCK_START
				10:6:40.000000:Number 
				10:1:0:55:Object 
				$$CHILD_BLOCK_END
			08:aRoomChangeWind 
				$$CHILD_BLOCK_START
				10:2:27:Room 
				10:6:0.000000:X 
				10:6:0.000000:Y 
				10:6:1.000000:Z 
				10:6:20.000000:Speed 
				10:6:0.100000:Time 
				$$CHILD_BLOCK_END
			08:aObjKill 
				$$CHILD_BLOCK_START
				10:1:0:8:Object 
				10:10:0:1:DeathDelayType 
				10:10:0:1:DeathExplosionSize 
				10:15:0:DeathFlags 
				10:6:0.500000:MinDelay 
				10:6:0.500000:MaxDelay 
				$$CHILD_BLOCK_END
			08:aObjKill 
				$$CHILD_BLOCK_START
				10:1:0:9:Object 
				10:10:0:1:DeathDelayType 
				10:10:0:1:DeathExplosionSize 
				10:15:0:DeathFlags 
				10:6:0.500000:MinDelay 
				10:6:0.500000:MaxDelay 
				$$CHILD_BLOCK_END
			08:aTurnOnSpew 
				$$CHILD_BLOCK_START
				10:1:0:212:Object 
				10:4:-1:GunNum 
				10:10:0:2:SpewType 
				10:6:0.000000:Mass 
				10:6:0.000000:Drag 
				10:15:65536:PhysicsFlags 
				10:5:0:IsRealObject 
				10:6:1.000000:BlobLifetime 
				10:6:0.100000:BlobInterval 
				10:6:1.000000:SpewLife 
				10:6:5.000000:BlobSize 
				10:6:40.000000:BlobSpeed 
				10:5:0:Randomize 
				10:10:0:-1:SpewHandle 
				$$CHILD_BLOCK_END
			08:aSetLevelTimer 
				$$CHILD_BLOCK_START
				10:6:1.000000:Time 
				10:10:0:44:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qTimesScriptExecuted_DALLAS:Integer 
					$$CHILD_BLOCK_START
					10:11:154:ScriptID 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:3:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aTurnOnSpew 
				$$CHILD_BLOCK_START
				10:1:0:212:Object 
				10:4:-1:GunNum 
				10:10:0:2:SpewType 
				10:6:0.000000:Mass 
				10:6:0.000000:Drag 
				10:15:65536:PhysicsFlags 
				10:5:0:IsRealObject 
				10:6:1.000000:BlobLifetime 
				10:6:0.100000:BlobInterval 
				10:6:1.000000:SpewLife 
				10:6:30.000000:BlobSize 
				10:6:120.000000:BlobSpeed 
				10:5:0:Randomize 
				10:10:0:-1:SpewHandle 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:155:Escape Chute: Junction End Cinematic 
	$$CHILD_BLOCK_START
	01:1:211 
	02:18 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:1.500000:Time 
			10:10:0:43:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:163:Escape Chute: Start End Sequence 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:43:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:cEndSequenceInit 
		08:aSoundPlaySteaming 
			$$CHILD_BLOCK_START
			10:19:5:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.100000:Time 
			10:10:0:35:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:139:Escape Chute:  Update Timer 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		05:2 
			$$CHILD_BLOCK_START
			10:10:2:0:TimerID 
			07:1:0 
			10:10:0:35:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:cEndSequenceFrame 
			$$CHILD_BLOCK_START
			06:qObjSavedHandle:PlayerObject 
				$$CHILD_BLOCK_START
				10:10:0:8:SavedObjectSlot 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:0.100000:Time 
			10:10:0:35:TimerID 
			$$CHILD_BLOCK_END
		08:aUserVarInc 
			$$CHILD_BLOCK_START
			10:10:0:17:UserVar 
			$$CHILD_BLOCK_END
		03:1 
			$$CHILD_BLOCK_START
			05:2 
				$$CHILD_BLOCK_START
				06:qUserVarValueInt:Integer 
					$$CHILD_BLOCK_START
					10:10:0:-1:UserVar 
					$$CHILD_BLOCK_END
				07:1:0 
				10:4:40:Integer 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		04:1:0:0 
			$$CHILD_BLOCK_START
			08:aMiscViewerShake 
				$$CHILD_BLOCK_START
				10:6:30.000000:Amount 
				$$CHILD_BLOCK_END
			08:aUserVarSet 
				$$CHILD_BLOCK_START
				10:10:0:17:UserVar 
				10:6:0.000000:value 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:152:Exit 
	$$CHILD_BLOCK_START
	01:0:24 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:1 
		$$CHILD_BLOCK_START
		08:aStartEndlevelSequence 
			$$CHILD_BLOCK_START
			10:1:0:213:Camera 
			10:16:26:PlayerPath 
			10:6:8.000000:Time 
			10:8:EmptyMessage:Text 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:214:Object 
			10:4:-1:GunNum 
			10:10:0:2:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:4.000000:BlobLifetime 
			10:6:0.150000:BlobInterval 
			10:6:30.000000:SpewLife 
			10:6:25.000000:BlobSize 
			10:6:80.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aTurnOnSpew 
			$$CHILD_BLOCK_START
			10:1:0:215:Object 
			10:4:-1:GunNum 
			10:10:0:2:SpewType 
			10:6:0.000000:Mass 
			10:6:0.000000:Drag 
			10:15:65536:PhysicsFlags 
			10:5:0:IsRealObject 
			10:6:3.000000:BlobLifetime 
			10:6:0.150000:BlobInterval 
			10:6:30.000000:SpewLife 
			10:6:20.000000:BlobSize 
			10:6:10.000000:BlobSpeed 
			10:5:1:Randomize 
			10:10:0:-1:SpewHandle 
			$$CHILD_BLOCK_END
		08:aGoalCompleted 
			$$CHILD_BLOCK_START
			10:18:0:25:LevelGoal 
			10:10:0:1:Completed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:156:BothWaysWind 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:54:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:55:Room 
			10:6:0.000000:X 
			10:6:-1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:56:Room 
			10:6:0.000000:X 
			10:6:1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		08:aRoomSetWind 
			$$CHILD_BLOCK_START
			10:2:57:Room 
			10:6:0.000000:X 
			10:6:1.000000:Y 
			10:6:0.000000:Z 
			10:6:10.000000:Speed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:160:Gravity Room 1: Fans kill things 
	$$CHILD_BLOCK_START
	01:1:216 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:20.000000:DamageAmount 
			$$CHILD_BLOCK_END
		08:DO NOTHING 
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:161:Gravity Room 1: Fans kill things 2 
	$$CHILD_BLOCK_START
	01:1:217 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:20.000000:DamageAmount 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:158:Gravity Room 2: Fans kill things 
	$$CHILD_BLOCK_START
	01:1:95 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:20.000000:DamageAmount 
			$$CHILD_BLOCK_END
		08:DO NOTHING 
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:159:Gravity Room 2: Fans kill things 2 
	$$CHILD_BLOCK_START
	01:1:96 
	02:0 
	03:0 
		$$CHILD_BLOCK_START
		09:1 
			$$CHILD_BLOCK_START
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsPlayer:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			05:1 
				$$CHILD_BLOCK_START
				06:qObjIsType:Bool 
					$$CHILD_BLOCK_START
					10:1:1:-1:Object 
					10:10:0:2:ObjectType 
					$$CHILD_BLOCK_END
				07:0:6 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aObjApplyDamage 
			$$CHILD_BLOCK_START
			10:1:1:-1:Object 
			10:6:20.000000:DamageAmount 
			$$CHILD_BLOCK_END
		08:DO NOTHING 
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:164:Arobics 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:218:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:219:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:220:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:221:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:222:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:223:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:224:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aAISetMode 
			$$CHILD_BLOCK_START
			10:1:0:225:Object 
			10:10:0:4:AIModeType 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:218:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:219:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:220:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:221:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:222:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:223:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:224:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:225:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:3.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:218:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:219:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:220:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:221:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:222:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:223:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:224:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:225:Object 
			10:6:0.000000:MaxSpeed 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:165:Joggers 
	$$CHILD_BLOCK_START
	01:2:0 
	02:6 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:226:Object 
			10:16:27:Path 
			10:15:8392960:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:227:Object 
			10:16:27:Path 
			10:15:8392960:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aAIGoalFollowPathSimple 
			$$CHILD_BLOCK_START
			10:1:0:228:Object 
			10:16:27:Path 
			10:15:8392960:AIGoalFlags 
			10:10:0:-1:GoalID 
			10:10:0:3:GoalPriority 
			$$CHILD_BLOCK_END
		08:aObjPlayAnim 
			$$CHILD_BLOCK_START
			10:1:0:228:Object 
			10:4:26:StartFrame 
			10:4:54:EndFrame 
			10:6:2.000000:CycleTime 
			10:5:1:Looping 
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:226:Object 
			06:qMathMulFloat:MaxSpeed 
				$$CHILD_BLOCK_START
				06:qAIQueryMaxSpeed:Float1 
					$$CHILD_BLOCK_START
					10:1:0:226:Object 
					$$CHILD_BLOCK_END
				10:6:3.000000:Float2 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:227:Object 
			06:qMathMulFloat:MaxSpeed 
				$$CHILD_BLOCK_START
				06:qAIQueryMaxSpeed:Float1 
					$$CHILD_BLOCK_START
					10:1:0:227:Object 
					$$CHILD_BLOCK_END
				10:6:3.000000:Float2 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		08:aAISetMaxSpeed 
			$$CHILD_BLOCK_START
			10:1:0:228:Object 
			06:qMathMulFloat:MaxSpeed 
				$$CHILD_BLOCK_START
				06:qAIQueryMaxSpeed:Float1 
					$$CHILD_BLOCK_START
					10:1:0:228:Object 
					$$CHILD_BLOCK_END
				10:6:3.000000:Float2 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:167:Music Region: Puzzle 
	$$CHILD_BLOCK_START
	01:0:25 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:2:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:168:Music Region: Hangars 
	$$CHILD_BLOCK_START
	01:0:26 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:1:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:170:Puzzle to Giant Shaft 
	$$CHILD_BLOCK_START
	01:0:27 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:3:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:169:Music Region: Barracks to Giant Shaft 
	$$CHILD_BLOCK_START
	01:0:28 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:3:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:171:Music Region: Giant Shaft to Barracks 
	$$CHILD_BLOCK_START
	01:0:29 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:4:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:172:Music Region: Barracks to Poles 
	$$CHILD_BLOCK_START
	01:0:30 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:5:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:173:Music Region: Poles to Barracks 
	$$CHILD_BLOCK_START
	01:0:31 
	02:1 
	03:0 
		$$CHILD_BLOCK_START
		05:0 
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aMusicSetRegion 
			$$CHILD_BLOCK_START
			10:10:0:4:Region 
			10:1:1:-1:PlayerObject 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
00:162:Captain Dead Intercom 
	$$CHILD_BLOCK_START
	01:2:0 
	02:9 
	03:0 
		$$CHILD_BLOCK_START
		09:0 
			$$CHILD_BLOCK_START
			09:0 
				$$CHILD_BLOCK_START
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:19:Object 
						$$CHILD_BLOCK_END
					07:0:7 
					$$CHILD_BLOCK_END
				05:1 
					$$CHILD_BLOCK_START
					06:qObjExists:Bool 
						$$CHILD_BLOCK_START
						10:1:0:22:Object 
						$$CHILD_BLOCK_END
					07:0:6 
					$$CHILD_BLOCK_END
				$$CHILD_BLOCK_END
			05:2 
				$$CHILD_BLOCK_START
				10:10:2:0:TimerID 
				07:1:0 
				10:10:0:40:TimerID 
				$$CHILD_BLOCK_END
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	04:0:0:0 
		$$CHILD_BLOCK_START
		08:aSoundPlaySteaming 
			$$CHILD_BLOCK_START
			10:19:6:Sound 
			10:9:1.000000:Volume 
			$$CHILD_BLOCK_END
		08:aSetLevelTimer 
			$$CHILD_BLOCK_START
			10:6:120.000000:Time 
			10:10:0:40:TimerID 
			$$CHILD_BLOCK_END
		$$CHILD_BLOCK_END
	$$CHILD_BLOCK_END
 
$$SCRIPT_BLOCK_END
*********************************************************/
