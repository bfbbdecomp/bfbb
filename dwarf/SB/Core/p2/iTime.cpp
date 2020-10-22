typedef struct prof_info;

typedef int32(*type)(int32, void*, void*);


struct prof_info
{
	uint32 addr;
	uint32 len;
	uint32 count;
};

int32 tim0_handler_id;
long32 tim0_high;
int32 sProfLevel;
int8* sProfMap;
int8** sProfFunc;
int8** sProfFile;
uint32* sProfBin;
uint32 sProfCount;
uint32 pvsyncaddr;
prof_info* pip;
uint32 pil;
uint32 app_top;
uint32 app_end;
uint32 app_hits;
uint32 kernel_hits;
uint32 vsync_hits;
uint32 scene_id;
uint32 prof_enable;
uint32* profSampleBuffer;
uint32* profSampleStatic;
uint32 profSampleSize;
float32 sGameTime;
int32(*TimerHandler)(int32, void*, void*);

void iFuncProfileDump();
void iFuncProfileParse();
void iProfileClear(uint32 sceneID);
void iTimeSetGame(float32 time);
void iTimeGameAdvance(float32 elapsed);
float32 iTimeDiffSec(long32 t0, long32 t1);
float32 iTimeDiffSec(long32 time);
long32 iTimeGet();
int32 TimerHandler(int32 ca);
void iTimeExit();
void iTimeInit();

// iFuncProfileDump__Fv
// Start address: 0x1bae40
void iFuncProfileDump()
{
	// Line 725, Address: 0x1bae40, Func Offset: 0
	// Func End, Address: 0x1bae48, Func Offset: 0x8
}

// iFuncProfileParse__FPci
// Start address: 0x1bae50
void iFuncProfileParse()
{
	// Line 591, Address: 0x1bae50, Func Offset: 0
	// Func End, Address: 0x1bae58, Func Offset: 0x8
}

// iProfileClear__FUi
// Start address: 0x1bae60
void iProfileClear(uint32 sceneID)
{
	int32 i;
	// Line 381, Address: 0x1bae60, Func Offset: 0
	// Line 382, Address: 0x1bae70, Func Offset: 0x10
	// Line 383, Address: 0x1bae78, Func Offset: 0x18
	// Line 384, Address: 0x1bae80, Func Offset: 0x20
	// Line 385, Address: 0x1bae8c, Func Offset: 0x2c
	// Line 386, Address: 0x1bae90, Func Offset: 0x30
	// Line 387, Address: 0x1baea8, Func Offset: 0x48
	// Line 388, Address: 0x1baeac, Func Offset: 0x4c
	// Line 387, Address: 0x1baeb0, Func Offset: 0x50
	// Line 388, Address: 0x1baeb8, Func Offset: 0x58
	// Line 389, Address: 0x1baec8, Func Offset: 0x68
	// Line 390, Address: 0x1baed8, Func Offset: 0x78
	// Line 391, Address: 0x1baedc, Func Offset: 0x7c
	// Line 395, Address: 0x1baee0, Func Offset: 0x80
	// Line 392, Address: 0x1baeec, Func Offset: 0x8c
	// Line 393, Address: 0x1baef0, Func Offset: 0x90
	// Line 394, Address: 0x1baef4, Func Offset: 0x94
	// Line 395, Address: 0x1baef8, Func Offset: 0x98
	// Line 396, Address: 0x1baefc, Func Offset: 0x9c
	// Func End, Address: 0x1baf0c, Func Offset: 0xac
}

// iTimeSetGame__Ff
// Start address: 0x1baf10
void iTimeSetGame(float32 time)
{
	// Line 362, Address: 0x1baf10, Func Offset: 0
	// Func End, Address: 0x1baf18, Func Offset: 0x8
}

// iTimeGameAdvance__Ff
// Start address: 0x1baf20
void iTimeGameAdvance(float32 elapsed)
{
	// Line 355, Address: 0x1baf20, Func Offset: 0
	// Line 356, Address: 0x1baf28, Func Offset: 0x8
	// Func End, Address: 0x1baf30, Func Offset: 0x10
}

// iTimeDiffSec__Fll
// Start address: 0x1baf30
float32 iTimeDiffSec(long32 t0, long32 t1)
{
	// Line 338, Address: 0x1baf30, Func Offset: 0
	// Line 339, Address: 0x1baf74, Func Offset: 0x44
	// Func End, Address: 0x1baf7c, Func Offset: 0x4c
}

// iTimeDiffSec__Fl
// Start address: 0x1baf80
float32 iTimeDiffSec(long32 time)
{
	// Line 334, Address: 0x1baf80, Func Offset: 0
	// Line 335, Address: 0x1bafc0, Func Offset: 0x40
	// Func End, Address: 0x1bafc8, Func Offset: 0x48
}

// iTimeGet__Fv
// Start address: 0x1bafd0
long32 iTimeGet()
{
	long32 high0;
	long32 low0;
	long32 high1;
	long32 low1;
	// Line 310, Address: 0x1bafd0, Func Offset: 0
	// Line 309, Address: 0x1bafd4, Func Offset: 0x4
	// Line 310, Address: 0x1bafd8, Func Offset: 0x8
	// Line 311, Address: 0x1bafdc, Func Offset: 0xc
	// Line 312, Address: 0x1bafe0, Func Offset: 0x10
	// Line 315, Address: 0x1bafe4, Func Offset: 0x14
	// Line 319, Address: 0x1bb000, Func Offset: 0x30
	// Func End, Address: 0x1bb008, Func Offset: 0x38
}

// TimerHandler__FiPvPv
// Start address: 0x1bb010
int32 TimerHandler(int32 ca)
{
	// Line 150, Address: 0x1bb010, Func Offset: 0
	// Line 153, Address: 0x1bb030, Func Offset: 0x20
	// Line 156, Address: 0x1bb034, Func Offset: 0x24
	// Line 153, Address: 0x1bb038, Func Offset: 0x28
	// Line 156, Address: 0x1bb048, Func Offset: 0x38
	// Line 162, Address: 0x1bb054, Func Offset: 0x44
	// Line 165, Address: 0x1bb058, Func Offset: 0x48
	// Line 168, Address: 0x1bb060, Func Offset: 0x50
	// Func End, Address: 0x1bb068, Func Offset: 0x58
}

// iTimeExit__Fv
// Start address: 0x1bb070
void iTimeExit()
{
	// Line 133, Address: 0x1bb070, Func Offset: 0
	// Line 135, Address: 0x1bb078, Func Offset: 0x8
	// Line 136, Address: 0x1bb080, Func Offset: 0x10
	// Line 137, Address: 0x1bb08c, Func Offset: 0x1c
	// Func End, Address: 0x1bb098, Func Offset: 0x28
}

// iTimeInit__Fv
// Start address: 0x1bb0a0
void iTimeInit()
{
	// Line 87, Address: 0x1bb0a0, Func Offset: 0
	// Line 98, Address: 0x1bb0a4, Func Offset: 0x4
	// Line 87, Address: 0x1bb0a8, Func Offset: 0x8
	// Line 98, Address: 0x1bb0ac, Func Offset: 0xc
	// Line 102, Address: 0x1bb0c4, Func Offset: 0x24
	// Line 101, Address: 0x1bb0c8, Func Offset: 0x28
	// Line 120, Address: 0x1bb0cc, Func Offset: 0x2c
	// Line 102, Address: 0x1bb0d0, Func Offset: 0x30
	// Line 122, Address: 0x1bb0d4, Func Offset: 0x34
	// Line 103, Address: 0x1bb0d8, Func Offset: 0x38
	// Line 104, Address: 0x1bb0e0, Func Offset: 0x40
	// Line 120, Address: 0x1bb0e8, Func Offset: 0x48
	// Line 122, Address: 0x1bb0ec, Func Offset: 0x4c
	// Line 123, Address: 0x1bb0f4, Func Offset: 0x54
	// Func End, Address: 0x1bb100, Func Offset: 0x60
}

