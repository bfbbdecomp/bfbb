/*
    Compile unit: C:\SB\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int StackBase; // size: 0x4, address: 0x50F7F0
static unsigned int StackSize; // size: 0x4, address: 0x50F7F4
class xMemInfo_tag gMemInfo; // size: 0x30, address: 0x568900
char _stack; // size: 0x1, address: 0x1FF0000
char _heap_size; // size: 0x1, address: 0x19D2180
char _stack_size; // size: 0x1, address: 0x10000
char _end; // size: 0x1, address: 0x61DE80
char _memtop; // size: 0x1, address: 0x2000000
char __data_start; // size: 0x1, address: 0x4018C0
class xMemArea_tag {
    // total size: 0xC
public:
    unsigned int addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
};
class xMemInfo_tag {
    // total size: 0x30
public:
    class xMemArea_tag system; // offset 0x0, size 0xC
    class xMemArea_tag stack; // offset 0xC, size 0xC
    class xMemArea_tag DRAM; // offset 0x18, size 0xC
    class xMemArea_tag SRAM; // offset 0x24, size 0xC
};

/*
    Compile unit: C:\SB\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACA60 -> 0x001ACA88
*/
// Range: 0x1ACA60 -> 0x1ACA88
void iMemExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ACA60 -> 0x1ACA88
    }
}

/*
    Compile unit: C:\SB\Core\p2\iMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001ACA90 -> 0x001ACCB4
*/
// Range: 0x1ACA90 -> 0x1ACCB4
void iMemInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1ACA90 -> 0x1ACCB4
        unsigned int MemBase; // r16
        unsigned int MemTop; // r18
        unsigned int HeapBase; // r17
        unsigned int malloc_max; // r16
        void * p; // r2
    }
}

