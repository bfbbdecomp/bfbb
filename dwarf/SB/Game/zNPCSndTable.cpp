/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static float g_tmrz_sndplay[26]; // size: 0x68, address: 0x5CF8B0
static unsigned int g_hash_sndgroup[26]; // size: 0x68, address: 0x5CF920
static char * g_strz_sndgroup[26]; // size: 0x68, address: 0x4DFBB0
class NPCSndTrax g_sndTrax_Universal[]; // size: 0x0, address: 0x5CF988
class NPCSndTrax g_sndTrax_General[]; // size: 0x0, address: 0x5CF998
class NPCSndProp g_sndProps[]; // size: 0x0, address: 0x4DFCA0
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
};
class NPCSndProp {
    // total size: 0xC
public:
    enum en_NPC_SOUND sndtype; // offset 0x0, size 0x4
    signed int flg_snd; // offset 0x4, size 0x4
    float tym_delayNext; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310330 -> 0x00310594
*/
// Range: 0x310330 -> 0x310594
unsigned int NPCS_SndPickSimilar(enum en_NPC_SOUND sndtype /* r2 */, class NPCSndTrax * cust /* r2 */, class NPCSndTrax * share /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310330 -> 0x310594
        unsigned int aid_choice; // r2
        class NPCSndTrax * trax; // r17
        signed int i; // r15
        signed int ingroup; // r14
        signed int list[32]; // r29+0xB0
        float wts[32]; // r29+0x30
        signed int cnt; // r16
        float use_wt; // r29+0x130
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003105A0 -> 0x00310640
*/
// Range: 0x3105A0 -> 0x310640
enum en_NPC_SOUND NPCS_SndTypeFromHash(unsigned int aid_snd /* r2 */, class NPCSndTrax * cust /* r2 */, class NPCSndTrax * share /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3105A0 -> 0x310640
        enum en_NPC_SOUND da_type; // r2
        class NPCSndTrax * trax; // r10
        signed int i; // r9
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310640 -> 0x00310678
*/
// Range: 0x310640 -> 0x310678
class NPCSndProp * NPCS_SndFindProps(enum en_NPC_SOUND sndtype /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310640 -> 0x310678
        class NPCSndProp * sprop; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310680 -> 0x003106FC
*/
// Range: 0x310680 -> 0x3106FC
void NPCS_SndTablePrepare(class NPCSndTrax * trax /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310680 -> 0x3106FC
        unsigned int hash; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310700 -> 0x00310760
*/
// Range: 0x310700 -> 0x310760
signed int NPCS_SndOkToPlay(enum en_NPC_SOUND sndtype /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310700 -> 0x310760
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310760 -> 0x003107E0
*/
// Range: 0x310760 -> 0x3107E0
void NPCS_SndTypePlayed(enum en_NPC_SOUND sndtype /* r2 */, float delayNext /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310760 -> 0x3107E0
        float tym; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003107E0 -> 0x00310844
*/
// Range: 0x3107E0 -> 0x310844
void NPCS_SndTimersReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3107E0 -> 0x310844
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310850 -> 0x0031089C
*/
// Range: 0x310850 -> 0x31089C
void NPCS_SndTimersUpdate(float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310850 -> 0x31089C
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003108A0 -> 0x003108A8
*/
// Range: 0x3108A0 -> 0x3108A8
void NPCS_Shutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3108A0 -> 0x3108A8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCSndTable.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003108B0 -> 0x00310910
*/
// Range: 0x3108B0 -> 0x310910
void NPCS_Startup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3108B0 -> 0x310910
        signed int i; // r18
    }
}

