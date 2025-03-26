/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class talk_callback * tcb; // size: 0x4, address: 0x5100CC
static class /* @class */ {
    // total size: 0x4
public:
    class ztaskbox * active; // offset 0x0, size 0x4
} shared; // size: 0x4, address: 0x5100D0
struct /* @anon1 */ {
    // total size: 0x18
} __vt__Q28ztaskbox13talk_callback; // size: 0x18, address: 0x50C3A0
struct /* @anon0 */ {
    // total size: 0x18
} __vt__Q28ztalkbox8callback; // size: 0x18, address: 0x0
signed int cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x323A70
class ztaskbox : public xBase {
    // total size: 0x24
public:
    class /* @class */ {
        // total size: 0x4
    public:
        unsigned char enabled : 8; // offset 0x0, size 0x1
        unsigned int dummy : 24; // offset 0x0, size 0x4
    } flag; // offset 0x10, size 0x4
    class asset_type * asset; // offset 0x14, size 0x4
    enum state_enum state; // offset 0x18, size 0x4
    class callback * cb; // offset 0x1C, size 0x4
    class ztaskbox * current; // offset 0x20, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
class xTextAsset {
    // total size: 0x4
public:
    unsigned int len; // offset 0x0, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x18
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class callback {
    // total size: 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    unsigned char enabled : 8; // offset 0x0, size 0x1
    unsigned int dummy : 24; // offset 0x0, size 0x4
};
class asset_type {
    // total size: 0x0
};
class xSerial {
    // total size: 0x1C
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
class ztextbox {
    // total size: 0x0
};
class talk_callback : public callback {
    // total size: 0xC
public:
    class ztaskbox * task; // offset 0x4, size 0x4
    enum answer_enum answer; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    char * skip; // offset 0x0, size 0x4
    char * noskip; // offset 0x4, size 0x4
    char * quit; // offset 0x8, size 0x4
    char * noquit; // offset 0xC, size 0x4
    char * yesno; // offset 0x10, size 0x4
};
class asset_type : public xDynAsset {
    // total size: 0x34
public:
    unsigned char persistent : 8; // offset 0x10, size 0x1
    unsigned char loop : 8; // offset 0x11, size 0x1
    unsigned char enable : 8; // offset 0x12, size 0x1
    unsigned char retry : 8; // offset 0x13, size 0x1
    unsigned int talk_box; // offset 0x14, size 0x4
    unsigned int next_task; // offset 0x18, size 0x4
    unsigned int stages[6]; // offset 0x1C, size 0x18
};
class zNPCCommon {
    // total size: 0x0
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class ztalkbox : public xBase {
    // total size: 0x3C
public:
    class /* @class */ {
        // total size: 0x1
    public:
        unsigned char visible : 1; // offset 0x0, size 0x1
    } flag; // offset 0x10, size 0x1
    class asset_type * asset; // offset 0x14, size 0x4
    class ztextbox * dialog_box; // offset 0x18, size 0x4
    class ztextbox * prompt_box; // offset 0x1C, size 0x4
    class ztextbox * quit_box; // offset 0x20, size 0x4
    class /* @class */ {
        // total size: 0x14
    public:
        char * skip; // offset 0x0, size 0x4
        char * noskip; // offset 0x4, size 0x4
        char * quit; // offset 0x8, size 0x4
        char * noquit; // offset 0xC, size 0x4
        char * yesno; // offset 0x10, size 0x4
    } prompt; // offset 0x24, size 0x14
    class zNPCCommon * npc; // offset 0x38, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class ztaskbox * active; // offset 0x0, size 0x4
};
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
enum answer_enum {
    ANSWER_CONTINUE = 0,
    ANSWER_YES = 1,
    ANSWER_NO = 2,
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class callback {
    // total size: 0x4
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
enum state_enum {
    STATE_INVALID = -1,
    STATE_BEGIN = 0,
    STATE_DESCRIPTION = 1,
    STATE_REMINDER = 2,
    STATE_SUCCESS = 3,
    STATE_FAILURE = 4,
    STATE_END = 5,
    MAX_STATE = 6,
};
class st_SERIAL_CLIENTINFO {
    // total size: 0x0
};
struct /* @anon1 */ {
    // total size: 0x18
};
class /* @class */ {
    // total size: 0x1
public:
    unsigned char visible : 1; // offset 0x0, size 0x1
};

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323A70 -> 0x00323C04
*/
// Range: 0x323A70 -> 0x323C04
signed int cb_dispatch(class xBase * to /* r2 */, unsigned int event /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323A70 -> 0x323C04
        class ztaskbox & e; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323C10 -> 0x00323CE0
*/
// Range: 0x323C10 -> 0x323CE0
void on_talk_stop(class ztaskbox * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323C10 -> 0x323CE0
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323CE0 -> 0x00323E68
*/
// Range: 0x323CE0 -> 0x323E68
void set_state(class ztaskbox * this /* r16 */, enum state_enum state /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323CE0 -> 0x323E68
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323E70 -> 0x00323E78
*/
// Range: 0x323E70 -> 0x323E78
void load(class xBase & data /* r2 */, class xDynAsset & asset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323E70 -> 0x323E78
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323E80 -> 0x00323EB8
*/
// Range: 0x323E80 -> 0x323EB8
void init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323E80 -> 0x323EB8
        class talk_callback tcb; // @ 0x005DE1E0
        signed char @3564; // @ 0x005100D4
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323EC0 -> 0x00323EC8
*/
// Range: 0x323EC0 -> 0x323EC8
void set_callback(class ztaskbox * this /* r2 */, class callback * cb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323EC0 -> 0x323EC8
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323ED0 -> 0x00323F64
*/
// Range: 0x323ED0 -> 0x323F64
void stop_talk(class ztaskbox * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323ED0 -> 0x323F64
        class ztalkbox * talk; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323F70 -> 0x003240EC
*/
// Range: 0x323F70 -> 0x3240EC
void start_talk(class ztaskbox * this /* r18 */, class zNPCCommon * npc /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x323F70 -> 0x3240EC
        class ztalkbox * talk; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003240F0 -> 0x00324100
*/
// Range: 0x3240F0 -> 0x324100
void write(class ztaskbox * this /* r2 */, class xSerial & s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3240F0 -> 0x324100
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324100 -> 0x00324140
*/
// Range: 0x324100 -> 0x324140
void read(class ztaskbox * this /* r16 */, class xSerial & s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x324100 -> 0x324140
        unsigned char state; // r29+0x2F
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324140 -> 0x003241EC
*/
// Range: 0x324140 -> 0x3241EC
void load(class ztaskbox * this /* r17 */, class asset_type & a /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x324140 -> 0x3241EC
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003241F0 -> 0x00324224
*/
// Range: 0x3241F0 -> 0x324224
void on_start(class talk_callback * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3241F0 -> 0x324224
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324230 -> 0x0032423C
*/
// Range: 0x324230 -> 0x32423C
void on_stop(class talk_callback * this /* r4 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x324230 -> 0x32423C
    }
}

/*
    Compile unit: C:\SB\Game\zTaskBox.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324240 -> 0x00324248
*/
// Range: 0x324240 -> 0x324248
void on_answer(class talk_callback * this /* r2 */, enum answer_enum answer /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x324240 -> 0x324248
    }
}

