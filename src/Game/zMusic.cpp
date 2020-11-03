#include <types.h>
#include "zMusic.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xMath.h"
#include "zScene.h"

extern zMusicTrackInfo sMusicTrack[2];
extern zVolumeInfo volume;
extern uint32 sMusicPaused;
extern LevelMusic sMusicLastEnum[2];
extern float32 unkFloat; //0f by default.
extern float32 minDelay; //Value is defaulted at 0.001f.

// func_800A6E9C
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "volume_reset__Fv")

//Reset both music tracks to their default volume.
void zMusicRefreshVolume()
{
  	for (int32 i = 0; i < 2; i++)
  	{
  		zMusicTrackInfo* track = &sMusicTrack[i];
  		if (track->snd_id != 0)
  		{
  			xSndSetVol(track->snd_id, volume.cur); //Only reset volume if the sound ID is not blank.
  		}
  	}
}

// func_800A6F50
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicInit__Fv")

// func_800A7314
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "getCurrLevelMusicEnum__Fv")

//Correct, but won't work due to the switch case jump table (messes with offsets).
/*LevelMusic getCurrLevelMusicEnum()
{
	uint32 uVar1;
  	uint32 uVar2;
  	LevelMusic uVar3;
  
  	uVar1 = zSceneGetLevelIndex();
  	switch(uVar1)
  	{
  		case 0:
    		uVar3 = (LevelMusic)0;
    		break;
  		case 1:
    		uVar3 = (LevelMusic)1;
    		break;
  		case 2:
    		uVar3 = (LevelMusic)2;
    		break;
  		case 3:
    		uVar3 = (LevelMusic)3;
    		break;
  		case 4:
    		uVar3 = (LevelMusic)4;
    		break;
  		case 5:
    		uVar3 = (LevelMusic)5;
    		break;
  		case 6:
    		uVar3 = (LevelMusic)6;
    		break;
  		case 7:
    		uVar3 = (LevelMusic)0;
    		break;
  		case 8:
    		uVar3 = (LevelMusic)8;
    		break;
  		case 9:
    		uVar3 = (LevelMusic)9;
    		break;
  		case 10:
    		uVar3 = (LevelMusic)10;
    		break;
  		case 0xb:
    		uVar3 = (LevelMusic)0xb;
    		break;
  		case 0xc:
    		uVar3 = (LevelMusic)0xc;
    		break;
  		case 0xd:
    		uVar3 = (LevelMusic)2;
    		break;
  		case 0xe:
    		uVar3 = (LevelMusic)0xd;
    		break;
  		default:
    		uVar2 = xrand();
    		uVar3 = (LevelMusic)(uVar2 % 0x17 + 1);
    		if (0x18 <= uVar3)
    		{
      			uVar3 = (LevelMusic)(uVar3 - 1);
    		}
    		if (((uVar3 == 4) || (uVar3 == 7)) || (uVar3 == 8))
    		{
      			uVar3 = (LevelMusic)5;
    		}
    		break;
  	}

  	return uVar3;

}*/

// func_800A7414
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicDo__Fi")

// func_800A7640
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicNotify__Fi")

// func_800A76BC
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicNotifyEvent__FPCfP5xBase")

// func_800A77B4
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicUpdate__Ff")

// func_800A7924
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "volume_update__Ff")

//Stop all tracks and set them to null.
void zMusicKill()
{
	for (int32 i = 0; i < 2; i++)
	{
		zMusicTrackInfo* track = &sMusicTrack[i];
		if (track->snd_id != 0)
		{
			xSndStop(track->snd_id);
			track->snd_id = 0;
			track->loop = 0;
			track->unk = 0;
		}
	}
}

//Pause music by stopping any non-null tracks.
void zMusicPause()
{
    if (sMusicPaused == 0)
    {
  		for (int32 i = 0; i < 2; i++)
  		{
  			zMusicTrackInfo* track = &sMusicTrack[i];
  			if (track->snd_id != 0)
  			{
  				xSndStop(track->snd_id);
  			}
  		}
  		sMusicPaused = 1;
  	}
}

// func_800A7B7C
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicUnpause__Fi")

//Only thing that doesn't compile correctly is the function call to xSndPlay, in which a bunch of stuff is in the wrong order it looks like.
/*
void zMusicUnpause(int32 kill)
{
  	if (sMusicPaused != 0)
  	{
  		for (int32 i = 0; i < 2; i++)
  		{
  			zMusicTrackInfo* track = &sMusicTrack[i];
  			uint32 prioBase = 0x800 * i;
  			if (track->snd_id != 0)
  			{
  				if (kill != 0)
  				{
  					track->snd_id = 0;
  				}
  				else
  				{
  					uint32 res = xSndPlay(track->assetID, track->lastVol, unkFloat, 0xff, prioBase | (int)(-track->loop | track->loop) >> 0x1f & 0x8000U | 0x10000 | 0x20000, 0, SND_CAT_MUSIC, unkFloat);
  					track->snd_id = res;
  				}
  			}
  		}
  		sMusicPaused = 0;
  	}

}*/

// func_800A7C60
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicSetVolume__Fff")

//Not sure what's wrong with this one. Doesn't match in the slightest.
/*void zMusicSetVolume(float32 vol, float32 delay)
{
	if (delay <= minDelay) {
    	volume.end = vol;
    	volume.inc = vol - volume.cur;
    	return;
  	}
  	volume.end = vol;
  	volume.inc = (vol - volume.cur) / delay;
}*/

void zMusicReset()
{
  LevelMusic currMusic;
  currMusic = getCurrLevelMusicEnum();
  if (sMusicLastEnum[0] != currMusic)
  {
    zMusicNotify(0);
  }
}