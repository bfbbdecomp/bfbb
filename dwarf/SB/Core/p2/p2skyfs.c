/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class RwSkyFSState SkyFSState; // size: 0x10C, address: 0x517650
void * _rwSkyFSClose(void *, signed int, signed int); // size: 0x0, address: 0x110530
void * _rwSkyFSOpen(void *, signed int, signed int); // size: 0x0, address: 0x1105F0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
signed int skyFtell(void *); // size: 0x0, address: 0x110A00
signed int skyFflush(void *); // size: 0x0, address: 0x110770
signed int skyFseek(void *, signed long, signed int); // size: 0x0, address: 0x110A50
signed int skyFeof(void *); // size: 0x0, address: 0x110780
signed int skyFputs(char *, void *); // size: 0x0, address: 0x1107D0
char * skyFgets(char *, signed int, void *); // size: 0x0, address: 0x1108B0
unsigned int skyFwrite(void *, unsigned int, unsigned int, void *); // size: 0x0, address: 0x110BF0
unsigned int skyFread(void *, unsigned int, unsigned int, void *); // size: 0x0, address: 0x110CF0
signed int skyFclose(void *); // size: 0x0, address: 0x110EA0
void * skyFopen(char *, char *); // size: 0x0, address: 0x110F50
signed int skyFexist(char *); // size: 0x0, address: 0x110E30
class RwModuleInfo {
    // total size: 0x8
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};
class skyFile {
    // total size: 0x2814
public:
    signed int gdfs; // offset 0x0, size 0x4
    signed int POS; // offset 0x4, size 0x4
    signed int SOF; // offset 0x8, size 0x4
    unsigned char readBuffer[10240]; // offset 0xC, size 0x2800
    unsigned int bufferPos; // offset 0x280C, size 0x4
    signed int bufferValid; // offset 0x2810, size 0x4
};
class RwFileFunctions {
    // total size: 0x2C
public:
    signed int (* rwfexist)(char *); // offset 0x0, size 0x4
    void * (* rwfopen)(char *, char *); // offset 0x4, size 0x4
    signed int (* rwfclose)(void *); // offset 0x8, size 0x4
    unsigned int (* rwfread)(void *, unsigned int, unsigned int, void *); // offset 0xC, size 0x4
    unsigned int (* rwfwrite)(void *, unsigned int, unsigned int, void *); // offset 0x10, size 0x4
    char * (* rwfgets)(char *, signed int, void *); // offset 0x14, size 0x4
    signed int (* rwfputs)(char *, void *); // offset 0x18, size 0x4
    signed int (* rwfeof)(void *); // offset 0x1C, size 0x4
    signed int (* rwfseek)(void *, signed long, signed int); // offset 0x20, size 0x4
    signed int (* rwfflush)(void *); // offset 0x24, size 0x4
    signed int (* rwftell)(void *); // offset 0x28, size 0x4
};
class RwSkyFSState {
    // total size: 0x10C
public:
    signed int gdfsOpenFiles; // offset 0x0, size 0x4
    char SubDir[256]; // offset 0x4, size 0x100
    class RwModuleInfo gdfsModuleInfo; // offset 0x104, size 0x8
};

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001104A0 -> 0x00110528
*/
// Range: 0x1104A0 -> 0x110528
signed int SkyInstallFileSystem(char * subdir /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1104A0 -> 0x110528
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110530 -> 0x001105EC
*/
// Range: 0x110530 -> 0x1105EC
static void * _rwSkyFSClose(void * instance /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110530 -> 0x1105EC
        class RwFileFunctions * FS; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001105F0 -> 0x00110770
*/
// Range: 0x1105F0 -> 0x110770
static void * _rwSkyFSOpen(void * instance /* r16 */, signed int offset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1105F0 -> 0x110770
        class RwFileFunctions * FS; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110770 -> 0x00110778
*/
// Range: 0x110770 -> 0x110778
static signed int skyFflush() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110770 -> 0x110778
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110780 -> 0x001107D0
*/
// Range: 0x110780 -> 0x1107D0
static signed int skyFeof(void * fptr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110780 -> 0x1107D0
        class skyFile * fp; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001107D0 -> 0x001108AC
*/
// Range: 0x1107D0 -> 0x1108AC
static signed int skyFputs(char * buffer /* r16 */, void * fptr /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1107D0 -> 0x1108AC
        class skyFile * fp; // r2
        signed int i; // r16
        signed int j; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001108B0 -> 0x001109FC
*/
// Range: 0x1108B0 -> 0x1109FC
static char * skyFgets(char * buffer /* r19 */, signed int maxLen /* r16 */, void * fptr /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1108B0 -> 0x1109FC
        class skyFile * fp; // r2
        signed int i; // r17
        signed int numBytesRead; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110A00 -> 0x00110A50
*/
// Range: 0x110A00 -> 0x110A50
static signed int skyFtell(void * fptr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110A00 -> 0x110A50
        class skyFile * fp; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110A50 -> 0x00110BF0
*/
// Range: 0x110A50 -> 0x110BF0
static signed int skyFseek(void * fptr /* r2 */, signed long offset /* r20 */, signed int origin /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110A50 -> 0x110BF0
        class skyFile * fp; // r18
        signed int oldFPos; // r17
        signed int bufStart; // r5
        signed int noBuffer; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110BF0 -> 0x00110CEC
*/
// Range: 0x110BF0 -> 0x110CEC
static unsigned int skyFwrite(void * addr /* r19 */, unsigned int size /* r17 */, unsigned int count /* r2 */, void * fptr /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110BF0 -> 0x110CEC
        signed int bytesWritten; // r2
        class skyFile * fp; // r2
        signed int numBytesToWrite; // r18
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110CF0 -> 0x00110E30
*/
// Range: 0x110CF0 -> 0x110E30
static unsigned int skyFread(void * addr /* r20 */, unsigned int size /* r19 */, unsigned int count /* r2 */, void * fptr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110CF0 -> 0x110E30
        class skyFile * fp; // r18
        unsigned int numBytesToRead; // r17
        signed int bytesRead; // r16
        signed int bytesRead2; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110E30 -> 0x00110E98
*/
// Range: 0x110E30 -> 0x110E98
static signed int skyFexist(char * name /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110E30 -> 0x110E98
        void * res; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110EA0 -> 0x00110F48
*/
// Range: 0x110EA0 -> 0x110F48
static signed int skyFclose(void * fptr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110EA0 -> 0x110F48
        class skyFile * fp; // r16
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110F50 -> 0x00110F80
*/
// Range: 0x110F50 -> 0x110F80
static void * skyFopen(char * name /* r2 */, char * access /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110F50 -> 0x110F80
        void * res; // r2
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00110F80 -> 0x001111DC
*/
// Range: 0x110F80 -> 0x1111DC
static void * trySkyFopen(char * fname /* r16 */, char * access /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x110F80 -> 0x1111DC
        class skyFile * fp; // r16
        signed int mode; // r17
        char name[256]; // r29+0x30
        char * nameptr; // r5
    }
}

/*
    Compile unit: C:\SB\Core\p2\p2skyfs.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001111E0 -> 0x00111308
*/
// Range: 0x1111E0 -> 0x111308
static signed int skyTransMode(char * access /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1111E0 -> 0x111308
        signed int mode; // r3
        char * r; // r20
        char * w; // r19
        char * a; // r18
        char * plus; // r17
        char * n; // r16
        char * d; // r2
    }
}

