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
extern U32 sMusicPaused;
extern S32 sMusicLastEnum[2];
extern U32 sMusicSoundID[24][2];
extern zMusicSituation sMusicInfo[8];
extern zMusicSituation* sMusicQueueData[2];
extern F32 sMusicTimer[2];

extern eGameMode gGameMode;
extern zGlobals globals;

extern const char zMusic_strings[];

static const F32 minDelay = 0.001f;

void volume_reset()
{
    volume.cur = 0.0f;
    volume.end = 1.0f;
    volume.inc = 0.5f;
    memset(volume.adjusted, 0, sizeof(volume.adjusted));
}

// Reset both music tracks to their default volume.
void zMusicRefreshVolume()
{
    for (S32 i = 0; i < 2; i++)
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

static S32 getCurrLevelMusicEnum()
{
    S32 snd_enum;

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

// Probably floating point memes idk
void zMusicNotify(S32 situation)
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

// Stop all tracks and set them to null.
void zMusicKill()
{
    for (S32 i = 0; i < 2; i++)
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
        for (S32 i = 0; i < 2; i++)
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

void zMusicUnpause(S32 kill)
{
    if (sMusicPaused == 0)
    {
        return;
    }

    for (S32 i = 0; i < 2; i++)
    {
        zMusicTrackInfo* track = &sMusicTrack[i];
        if (track->snd_id == 0)
        {
            continue;
        }

        if (kill != 0)
        {
            track->snd_id = 0;
        }
        else
        {
            S32 flags = i * 0x800;
            flags |= ((track->loop != 0) ? 0x8000 : 0) | 0x10000;
            flags |= 0x20000;
            track->snd_id =
                xSndPlay(track->assetID, track->lastVol, 0.0f, 0xff, flags, 0, SND_CAT_MUSIC, 0.0f);
        }
    }

    sMusicPaused = 0;
}

// This version of it matches 33%. It's also functionally incorrect.
void zMusicSetVolume(float vol, float delay)
{
    volume.cur = vol; // This makes it introduce the "frsp" instruction.
    volume.inc = vol - volume.cur;

    if (delay >
        minDelay) // Doing the if statement likes this makes it generate the "blelr" instruction
    {
        volume.inc = vol / delay;
    }
}

void zMusicReset()
{
    S32 currMusic;
    currMusic = getCurrLevelMusicEnum();
    if (sMusicLastEnum[0] != currMusic)
    {
        zMusicNotify(0);
    }
}
