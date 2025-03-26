/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int OrdTest_infotype(void *, void *); // size: 0x0, address: 0x2F1E00
signed int OrdComp_infotype(void *, void *); // size: 0x0, address: 0x2F1DB0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class xFactory : public RyzMemData {
    // total size: 0x34
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
class XGOFTypeInfo {
    // total size: 0xC
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
class xBase {
    // total size: 0x0
};
class RyzMemData {
    // total size: 0x1
};
class RyzMemGrow {
    // total size: 0x1C
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1DB0 -> 0x002F1DF8
*/
// Range: 0x2F1DB0 -> 0x2F1DF8
static signed int OrdComp_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1DB0 -> 0x2F1DF8
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1E00 -> 0x002F1E48
*/
// Range: 0x2F1E00 -> 0x2F1E48
static signed int OrdTest_infotype(void * vkey /* r2 */, void * vitem /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1E00 -> 0x2F1E48
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1E50 -> 0x002F1F3C
*/
// Range: 0x2F1E50 -> 0x2F1F3C
void DestroyItem(class xFactory * this /* r17 */, class xFactoryInst * item /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1E50 -> 0x2F1F3C
        signed int idx; // r2
        class XGOFTypeInfo pattern; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1F40 -> 0x002F1F80
*/
// Range: 0x2F1F40 -> 0x2F1F80
void DestroyAll(class xFactory * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1F40 -> 0x2F1F80
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1F80 -> 0x002F20CC
*/
// Range: 0x2F1F80 -> 0x2F20CC
class xFactoryInst * CreateItem(class xFactory * this /* r19 */, signed int typeID /* r2 */, void * userdata /* r18 */, class RyzMemGrow * callerzgrow /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1F80 -> 0x2F20CC
        signed int idx; // r2
        class xFactoryInst * item; // r2
        class XGOFTypeInfo pattern; // r29+0x50
        class XGOFTypeInfo * darec; // r16
        class RyzMemGrow * grow; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F20D0 -> 0x002F20D8
*/
// Range: 0x2F20D0 -> 0x2F20D8
void GrowDataDisable(class xFactory * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F20D0 -> 0x2F20D8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F20E0 -> 0x002F2114
*/
// Range: 0x2F20E0 -> 0x2F2114
void GrowDataEnable(class xFactory * this /* r2 */, class xBase * user /* r2 */, signed int isResume /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F20E0 -> 0x2F2114
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2120 -> 0x002F216C
*/
// Range: 0x2F2120 -> 0x2F216C
signed int RegItemType(class xFactory * this /* r2 */, signed int tid /* r2 */, class xFactoryInst * (* create)(signed int, class RyzMemGrow *, void *) /* r2 */, void (* destroy)(class xFactoryInst *) /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2120 -> 0x2F216C
        class XGOFTypeInfo typerec[2]; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2170 -> 0x002F227C
*/
// Range: 0x2F2170 -> 0x2F227C
signed int RegItemType(class xFactory * this /* r18 */, class XGOFTypeInfo * info /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2170 -> 0x2F227C
        signed int rc; // r17
        class XGOFTypeInfo * tptr; // r16
        class XGOFTypeInfo * nextrec; // r2
        signed int idx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2280 -> 0x002F22E0
*/
// Range: 0x2F2280 -> 0x2F22E0
void * __dt(class xFactory * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2280 -> 0x2F22E0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F22E0 -> 0x002F2358
*/
// Range: 0x2F22E0 -> 0x2F2358
void * __ct(class xFactory * this /* r18 */, signed int maxTypes /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F22E0 -> 0x2F2358
        unsigned int amt; // r16
    }
}

