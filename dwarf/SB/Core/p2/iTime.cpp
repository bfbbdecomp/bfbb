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
type TimerHandler;

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
}

// iFuncProfileParse__FPci
// Start address: 0x1bae50
void iFuncProfileParse()
{
}

// iProfileClear__FUi
// Start address: 0x1bae60
void iProfileClear(uint32 sceneID)
{
	int32 i;
}

// iTimeSetGame__Ff
// Start address: 0x1baf10
void iTimeSetGame(float32 time)
{
}

// iTimeGameAdvance__Ff
// Start address: 0x1baf20
void iTimeGameAdvance(float32 elapsed)
{
}

// iTimeDiffSec__Fll
// Start address: 0x1baf30
float32 iTimeDiffSec(long32 t0, long32 t1)
{
}

// iTimeDiffSec__Fl
// Start address: 0x1baf80
float32 iTimeDiffSec(long32 time)
{
}

// iTimeGet__Fv
// Start address: 0x1bafd0
long32 iTimeGet()
{
	long32 high0;
	long32 low0;
	long32 high1;
	long32 low1;
}

// TimerHandler__FiPvPv
// Start address: 0x1bb010
int32 TimerHandler(int32 ca)
{
}

// iTimeExit__Fv
// Start address: 0x1bb070
void iTimeExit()
{
}

// iTimeInit__Fv
// Start address: 0x1bb0a0
void iTimeInit()
{
}

