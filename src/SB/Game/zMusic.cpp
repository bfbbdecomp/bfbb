#include <types.h>
#include "zMusic.h"
#include "xSnd.h"
#include "xMath.h"
#include "xString.h"
#include "zGlobals.h"
#include "zGameState.h"
#include "zScene.h"
#include <string.h>

extern zMusicTrackInfo sMusicTrack[2];
extern zVolumeInfo volume;
extern uint32 sMusicPaused;
extern int32 sMusicLastEnum[2];
extern float32 lbl_803CDD48; //0f by default.
extern float32 minDelay; //Value is defaulted at 0.001f.
extern uint32 sMusicSoundID[24][2];
extern zMusicSituation sMusicInfo[8];
extern float32 lbl_803CCA78;
extern float32 lbl_803CD118;
extern zMusicSituation* sMusicQueueData[2];
extern float32 sMusicTimer[2];

extern eGameMode gGameMode;
extern zGlobals globals;

extern const char zMusic_strings[];

#ifdef NON_MATCHING
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

void zMusicInit()
{
    sMusicPaused = 0;

    for (int i = 0; i < sizeof(sMusicTrack) / sizeof(sMusicTrack[0]); i++)
    {
        sMusicTrack[i].snd_id = 0;
        sMusicTrack[i].loop = 0;
        sMusicTrack[i].situation = 0;
    }

    sMusicSoundID[0][0] = xStrHash(&zMusic_strings[0]);
    sMusicSoundID[0][1] = 1;
    sMusicSoundID[1][0] = xStrHash(&zMusic_strings[15]);
    sMusicSoundID[1][1] = 1;
    sMusicSoundID[2][0] = xStrHash(&zMusic_strings[30]);
    sMusicSoundID[2][1] = 1;
    sMusicSoundID[3][0] = xStrHash(&zMusic_strings[45]);
    sMusicSoundID[3][1] = 1;
    sMusicSoundID[4][0] = xStrHash(&zMusic_strings[60]);
    sMusicSoundID[4][1] = 1;
    sMusicSoundID[5][0] = xStrHash(&zMusic_strings[75]);
    sMusicSoundID[5][1] = 1;
    sMusicSoundID[6][0] = xStrHash(&zMusic_strings[90]);
    sMusicSoundID[6][1] = 1;
    sMusicSoundID[7][0] = xStrHash(&zMusic_strings[105]);
    sMusicSoundID[7][1] = 1;
    sMusicSoundID[8][0] = xStrHash(&zMusic_strings[120]);
    sMusicSoundID[8][1] = 1;
    sMusicSoundID[9][0] = xStrHash(&zMusic_strings[135]);
    sMusicSoundID[9][1] = 1;
    sMusicSoundID[10][0] = xStrHash(&zMusic_strings[150]);
    sMusicSoundID[10][1] = 1;
    sMusicSoundID[11][0] = xStrHash(&zMusic_strings[165]);
    sMusicSoundID[11][1] = 1;
    sMusicSoundID[12][0] = xStrHash(&zMusic_strings[180]);
    sMusicSoundID[12][1] = 1;
    sMusicSoundID[13][0] = xStrHash(&zMusic_strings[195]);
    sMusicSoundID[13][1] = 1;
    sMusicSoundID[14][0] = xStrHash(&zMusic_strings[212]);
    sMusicSoundID[14][1] = 1;
    sMusicSoundID[15][0] = xStrHash(&zMusic_strings[229]);
    sMusicSoundID[15][1] = 1;
    sMusicSoundID[16][0] = xStrHash(&zMusic_strings[247]);
    sMusicSoundID[16][1] = 1;
    sMusicSoundID[17][0] = xStrHash(&zMusic_strings[266]);
    sMusicSoundID[17][1] = 1;
    sMusicSoundID[18][0] = xStrHash(&zMusic_strings[286]);
    sMusicSoundID[18][1] = 1;
    sMusicSoundID[21][0] = xStrHash(&zMusic_strings[308]);
    sMusicSoundID[21][1] = 1;
    sMusicSoundID[22][0] = xStrHash(&zMusic_strings[327]);
    sMusicSoundID[22][1] = 1;
    sMusicSoundID[23][0] = xStrHash(&zMusic_strings[346]);
    sMusicSoundID[23][1] = 1;

    for (int i = 0; i < sizeof(sMusicInfo) / sizeof(sMusicInfo[0]); i++)
    {
        sMusicInfo[i].elapsedTime = sMusicInfo[i].delay;
        sMusicInfo[i].count = 0;
    }
    volume_reset();
}

// WIP.
#ifdef NON_MATCHING
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

#if 0
// Probably floating point memes idk
void zMusicNotify(int32 situation)
{
    zMusicSituation* s;

    if (sMusicPaused)
    {
        return;
    }

    s = &sMusicInfo[situation];

    if (s->countMax == NULL)
    {
        return;
    }
    if (s->count >= s->countMax)
    {
        return;
    }
    if (s->delay > s->elapsedTime)
    {
        return;
    }

    sMusicQueueData[s->track] = s;
    sMusicTimer[s->track] = s->punchDelay;
    sMusicQueueData[s->track]->game_state = gGameMode == eGameMode_Game;
}
#endif

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
#if 0
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
#if 0
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
