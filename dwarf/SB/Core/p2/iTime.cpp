typedef struct prof_info;

typedef s32(*type)(s32, void*, void*);


struct prof_info
{
	u32 addr;
	u32 len;
	u32 count;
};

s32 tim0_handler_id;
s32 tim0_high;
s32 sProfLevel;
s8* sProfMap;
s8** sProfFunc;
s8** sProfFile;
u32* sProfBin;
u32 sProfCount;
u32 pvsyncaddr;
prof_info* pip;
u32 pil;
u32 app_top;
u32 app_end;
u32 app_hits;
u32 kernel_hits;
u32 vsync_hits;
u32 scene_id;
u32 prof_enable;
u32* profSampleBuffer;
u32* profSampleStatic;
u32 profSampleSize;
f32 sGameTime;
type TimerHandler;

void iFuncProfileDump();
void iFuncProfileParse();
void iProfileClear(u32 sceneID);
void iTimeSetGame(f32 time);
void iTimeGameAdvance(f32 elapsed);
f32 iTimeDiffSec(s32 t0, s32 t1);
f32 iTimeDiffSec(s32 time);
s32 iTimeGet();
s32 TimerHandler(s32 ca);
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
void iProfileClear(u32 sceneID)
{
	s32 i;
}

// iTimeSetGame__Ff
// Start address: 0x1baf10
void iTimeSetGame(f32 time)
{
}

// iTimeGameAdvance__Ff
// Start address: 0x1baf20
void iTimeGameAdvance(f32 elapsed)
{
}

// iTimeDiffSec__Fll
// Start address: 0x1baf30
f32 iTimeDiffSec(s32 t0, s32 t1)
{
}

// iTimeDiffSec__Fl
// Start address: 0x1baf80
f32 iTimeDiffSec(s32 time)
{
}

// iTimeGet__Fv
// Start address: 0x1bafd0
s32 iTimeGet()
{
	s32 high0;
	s32 low0;
	s32 high1;
	s32 low1;
}

// TimerHandler__FiPvPv
// Start address: 0x1bb010
s32 TimerHandler(s32 ca)
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

