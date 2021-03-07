#include <types.h>
#include "zMusic.h"
#include "../Core/x/xSnd.h"
#include "../Core/x/xMath.h"
#include "../Core/x/xString.h"
#include "zScene.h"
#include <string.h>

extern zMusicTrackInfo sMusicTrack[2];
extern zVolumeInfo volume;
extern uint32 sMusicPaused;
extern int32 sMusicLastEnum[2];
extern float32 lbl_803CDD48; //0f by default.
extern float32 minDelay; //Value is defaulted at 0.001f.
extern uint32 sMusicSoundID[2][24];
extern zMusicSituation sMusicInfo[8];
extern float32 lbl_803CCA78;
extern float32 lbl_803CD118;

// func_800A6E9C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "volume_reset__Fv")
// Float issue
#else
void volume_reset()
{
    volume.cur = lbl_803CCA78;
    volume.end = lbl_803CD118;
    volume.inc = lbl_803CCA78;
    memset(volume.adjusted, 0, sizeof(volume.adjusted));
}
#endif

// Reset both music tracks to their default volume.
void zMusicRefreshVolume()
{
    for (int32 i = 0; i < 2; i++)
    {
        zMusicTrackInfo* track = &sMusicTrack[i];
        if (track->snd_id != 0)
        {
            // Only reset volume if the sound ID is not blank.
            xSndSetVol(track->snd_id, volume.cur);
        }
    }
}

// func_800A6F50
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicInit__Fv")
#else

// These seem to not be referenced anywhere globally
// const char* arr[] = { "music_00_hb_44",        "music_01_jf_44",     "music_02_bb_44",
//                       "music_03_gl_44",        "music_04_b1_44",     "music_05_rb_44",
//                       "music_06_bc_44",        "music_07_sm_44",     "music_08_b2_44",
//                       "music_09_kf_44",        "music_10_gy_44",     "music_11_db_44",
//                       "music_12_b3_44",        "music_13_mnu3_44",   "music_14_mnu4_44",
//                       "music_15_slide_44",     "music_16_ambush_44", "music_17_subboss_44",
//                       "music_18_skatepark_44", "music_21_Calliope1", "music_22_Calliope2",
//                       "music_23_Calliope3" };

// Functionally matches, but this was originally some kind of loop that got unrolled
// Cannot figure out what it's supposed to be

void zMusicInit()
{
    sMusicPaused = 0;

    for (int i = 0; i < sizeof(sMusicTrack) / sizeof(sMusicTrack[0]); i++)
    {
        sMusicTrack[i].snd_id = 0;
        sMusicTrack[i].loop = 0;
        sMusicTrack[i].situation = 0;
    }

    // for (int i = 0; i < 24; i++)
    // {
    //     sMusicSoundID[i][0] = xStrHash(arr[i]);
    //     sMusicSoundID[i][1] = 1;
    // }

    sMusicSoundID[0][0] = xStrHash("music_00_hb_44");
    sMusicSoundID[0][1] = 1;
    sMusicSoundID[0][2] = xStrHash("music_01_jf_44");
    sMusicSoundID[0][3] = 1;
    sMusicSoundID[0][4] = xStrHash("music_02_bb_44");
    sMusicSoundID[0][5] = 1;
    sMusicSoundID[0][6] = xStrHash("music_03_gl_44");
    sMusicSoundID[0][7] = 1;
    sMusicSoundID[0][8] = xStrHash("music_04_b1_44");
    sMusicSoundID[0][9] = 1;
    sMusicSoundID[0][10] = xStrHash("music_05_rb_44");
    sMusicSoundID[0][11] = 1;
    sMusicSoundID[0][12] = xStrHash("music_06_bc_44");
    sMusicSoundID[0][13] = 1;
    sMusicSoundID[0][14] = xStrHash("music_07_sm_44");
    sMusicSoundID[0][15] = 1;
    sMusicSoundID[0][16] = xStrHash("music_08_b2_44");
    sMusicSoundID[0][17] = 1;
    sMusicSoundID[0][18] = xStrHash("music_09_kf_44");
    sMusicSoundID[0][19] = 1;
    sMusicSoundID[0][20] = xStrHash("music_10_gy_44");
    sMusicSoundID[0][21] = 1;
    sMusicSoundID[0][22] = xStrHash("music_11_db_44");
    sMusicSoundID[0][23] = 1;
    sMusicSoundID[1][0] = xStrHash("music_12_b3_44");
    sMusicSoundID[1][1] = 1;
    sMusicSoundID[1][2] = xStrHash("music_13_mnu3_44");
    sMusicSoundID[1][3] = 1;
    sMusicSoundID[1][4] = xStrHash("music_14_mnu4_44");
    sMusicSoundID[1][5] = 1;
    sMusicSoundID[1][6] = xStrHash("music_15_slide_44");
    sMusicSoundID[1][7] = 1;
    sMusicSoundID[1][8] = xStrHash("music_16_ambush_44");
    sMusicSoundID[1][9] = 1;
    sMusicSoundID[1][10] = xStrHash("music_17_subboss_44");
    sMusicSoundID[1][11] = 1;
    sMusicSoundID[1][12] = xStrHash("music_18_skatepark_44");
    sMusicSoundID[1][13] = 1;
    sMusicSoundID[1][18] = xStrHash("music_21_Calliope1");
    sMusicSoundID[1][19] = 1;
    sMusicSoundID[1][20] = xStrHash("music_22_Calliope2");
    sMusicSoundID[1][21] = 1;
    sMusicSoundID[1][22] = xStrHash("music_23_Calliope3");
    sMusicSoundID[1][23] = 1;

    for (int i = 0; i < sizeof(sMusicInfo) / sizeof(sMusicInfo[0]); i++)
    {
        sMusicInfo[i].elapsedTime = sMusicInfo[i].delay;
        sMusicInfo[i].count = 0;
    }
    volume_reset();
}
#endif

// WIP.
#ifndef NON_MATCHING
// func_800A7314
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "getCurrLevelMusicEnum__Fv")
#else
// Correct, but won't work due to the switch case jump table (messes with offsets)
int32 getCurrLevelMusicEnum()
{
    int32 snd_enum;

    switch (zSceneGetLevelIndex())
    {
    case 0:
        snd_enum = 0;
        break;
    case 1:
        snd_enum = 1;
        break;
    case 2:
        snd_enum = 2;
        break;
    case 3:
        snd_enum = 3;
        break;
    case 4:
        snd_enum = 4;
        break;
    case 5:
        snd_enum = 5;
        break;
    case 6:
        snd_enum = 6;
        break;
    case 7:
        snd_enum = 0;
        break;
    case 8:
        snd_enum = 8;
        break;
    case 9:
        snd_enum = 9;
        break;
    case 10:
        snd_enum = 10;
        break;
    case 11:
        snd_enum = 11;
        break;
    case 12:
        snd_enum = 12;
        break;
    case 13:
        snd_enum = 2;
        break;
    case 14:
        snd_enum = 13;
        break;
    default:
        snd_enum = (xrand() % 23) + 1;
        if (24 <= snd_enum)
        {
            snd_enum--;
        }
        if (((snd_enum == 4) || (snd_enum == 7)) || (snd_enum == 8))
        {
            snd_enum = 5;
        }
        break;
    }

    return snd_enum;
}
#endif

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

// Stop all tracks and set them to null.
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
            track->situation = NULL;
        }
    }
}

// Pause music by stopping any non-null tracks.
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

// WIP.
#if 1

// func_800A7B7C
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicUnpause__Fi")

#else

// Only thing that doesn't compile correctly is the function call to xSndPlay, in which a bunch of stuff is in the wrong order it looks like.
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
                    uint32 res =
                        xSndPlay(track->assetID, track->lastVol, lbl_803CDD48, 0xff,
                                 prioBase | (int)(-track->loop | track->loop) >> 0x1f & 0x8000U |
                                     0x10000 | 0x20000,
                                 0, SND_CAT_MUSIC, lbl_803CDD48);
                    track->snd_id = res;
                }
            }
        }
        sMusicPaused = 0;
    }
}

#endif

// WIP.
#if 1

// func_800A7C60
#pragma GLOBAL_ASM("asm/Game/zMusic.s", "zMusicSetVolume__Fff")

#else

// Not sure what's wrong with this one. Doesn't match in the slightest.
void zMusicSetVolume(float32 vol, float32 delay)
{
    if (delay <= minDelay)
    {
        volume.end = vol;
        volume.inc = vol - volume.cur;
        return;
    }
    volume.end = vol;
    volume.inc = (vol - volume.cur) / delay;
}

#endif

void zMusicReset()
{
    int32 currMusic;
    currMusic = getCurrLevelMusicEnum();
    if (sMusicLastEnum[0] != currMusic)
    {
        zMusicNotify(0);
    }
}