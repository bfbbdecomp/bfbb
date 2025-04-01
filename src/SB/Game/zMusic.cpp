#include <types.h>
#include "zMusic.h"
#include "xSnd.h"
#include "xMath.h"
#include "xString.h"
#include "zGlobals.h"
#include "zGameState.h"
#include "zScene.h"
#include <string.h>

#define TRACK_COUNT 2

static U32 sMusicSoundID[24][TRACK_COUNT];
static zMusicTrackInfo sMusicTrack[TRACK_COUNT];
static zVolumeInfo volume;

// clang-format off
static zMusicSituation sMusicInfo[8] = {
    { 0, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0},
    { 1, 0, 0, 0.0f, 1.0f, 0.0f, 0, 0, 1, 0, 0},
    { 0, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 2, 0, 0},
    { 0, 0, 0, 0.0f, 2.0f, 0.0f, 0, 0, 3, 0, 0},
    { 0, 0, 0, 0.0f, 1.0f, 0.0f, 0, 0, 4, 0, 0},
    { 0, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 5, 0, 0},
    { 1, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 6, 0, 0},
    { 0, 0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 7, 0, 0},
};
// clang-format on

static U32 sMusicPaused;
static zMusicSituation* sMusicQueueData[TRACK_COUNT];

static S32 sMusicLastEnum[TRACK_COUNT] = { 0.0f, 0.0f };
static F32 sMusicTimer[TRACK_COUNT] = { 0.0f, 0.0f };

extern eGameMode gGameMode;
extern zGlobals globals;

static const F32 minDelay = 0.001f;

static void volume_update(F32 vol);

static void volume_reset()
{
    volume.cur = 0.0f;
    volume.end = 1.0f;
    volume.inc = 0.0f;

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

    sMusicSoundID[0][0] = xStrHash("music_00_hb_44");
    sMusicSoundID[0][1] = 1;
    sMusicSoundID[1][0] = xStrHash("music_01_jf_44");
    sMusicSoundID[1][1] = 1;
    sMusicSoundID[2][0] = xStrHash("music_02_bb_44");
    sMusicSoundID[2][1] = 1;
    sMusicSoundID[3][0] = xStrHash("music_03_gl_44");
    sMusicSoundID[3][1] = 1;
    sMusicSoundID[4][0] = xStrHash("music_04_b1_44");
    sMusicSoundID[4][1] = 1;
    sMusicSoundID[5][0] = xStrHash("music_05_rb_44");
    sMusicSoundID[5][1] = 1;
    sMusicSoundID[6][0] = xStrHash("music_06_bc_44");
    sMusicSoundID[6][1] = 1;
    sMusicSoundID[7][0] = xStrHash("music_07_sm_44");
    sMusicSoundID[7][1] = 1;
    sMusicSoundID[8][0] = xStrHash("music_08_b2_44");
    sMusicSoundID[8][1] = 1;
    sMusicSoundID[9][0] = xStrHash("music_09_kf_44");
    sMusicSoundID[9][1] = 1;
    sMusicSoundID[10][0] = xStrHash("music_10_gy_44");
    sMusicSoundID[10][1] = 1;
    sMusicSoundID[11][0] = xStrHash("music_11_db_44");
    sMusicSoundID[11][1] = 1;
    sMusicSoundID[12][0] = xStrHash("music_12_b3_44");
    sMusicSoundID[12][1] = 1;
    sMusicSoundID[13][0] = xStrHash("music_13_mnu3_44");
    sMusicSoundID[13][1] = 1;
    sMusicSoundID[14][0] = xStrHash("music_14_mnu4_44");
    sMusicSoundID[14][1] = 1;
    sMusicSoundID[15][0] = xStrHash("music_15_slide_44");
    sMusicSoundID[15][1] = 1;
    sMusicSoundID[16][0] = xStrHash("music_16_ambush_44");
    sMusicSoundID[16][1] = 1;
    sMusicSoundID[17][0] = xStrHash("music_17_subboss_44");
    sMusicSoundID[17][1] = 1;
    sMusicSoundID[18][0] = xStrHash("music_18_skatepark_44");
    sMusicSoundID[18][1] = 1;
    sMusicSoundID[21][0] = xStrHash("music_21_Calliope1");
    sMusicSoundID[21][1] = 1;
    sMusicSoundID[22][0] = xStrHash("music_22_Calliope2");
    sMusicSoundID[22][1] = 1;
    sMusicSoundID[23][0] = xStrHash("music_23_Calliope3");
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

static S32 zMusicDo(S32 track)
{
    S32 snd_enum;
    F32 vol;
    F32 pitch;

    vol = 1.0f;
    if (globals.NoMusic != FALSE)
    {
        return 0;
    }

    snd_enum = xrand() % 0x18;
    switch (sMusicQueueData[track]->situation)
    {
    case 3:
    case 5:
        snd_enum = sMusicQueueData[track]->music_enum;
        break;
    case 6:
        snd_enum = sMusicQueueData[track]->music_enum;
        break;
    case 0:
        snd_enum = getCurrLevelMusicEnum();
        break;
    case 7:
        snd_enum = sMusicLastEnum[0];
        break;
    case 2:
        snd_enum = 1;
        break;
    case 4:
        break;
    default:
        snd_enum = xrand() % 0x18;
    }

    if (sMusicTrack[track].snd_id != 0)
    {
        xSndStop(sMusicTrack[track].snd_id);
        sMusicTrack[track].snd_id = 0;
    }

    sMusicTrack[track].loop = sMusicSoundID[snd_enum][1];

    pitch = 0.0f;
    if (snd_enum == 9 && globals.scenePreload->sceneID == 'KF04')
    {
        pitch = -12.0f;
        vol *= 0.7f;
    }

    // FIXME: loop operator
    U32 snd_id = sMusicSoundID[snd_enum][track];
    sMusicTrack[track].snd_id =
        xSndPlay(snd_id, vol, pitch, 0xFF, sMusicTrack[track].loop, 0, SND_CAT_MUSIC, 0.0f);

    // FIXME: This isn't quite right
    if (sMusicTrack[track].snd_id != 0)
    {
        sMusicTrack[track].snd_id = snd_id;
        sMusicTrack[track].assetID = sMusicSoundID[snd_enum][track];
        sMusicTrack[track].lastVol = vol;
        if (sMusicQueueData[track] != NULL)
        {
            sMusicQueueData[track]->sndid = snd_id;
            sMusicQueueData[track]->elapsedTime = 0.0f;
            sMusicQueueData[track]->count += 1;
            sMusicQueueData[track] = NULL;
        }
        sMusicLastEnum[track] = snd_enum;
        return 1;
    }

    return 0;
}

void zMusicNotify(S32 situation)
{
    zMusicSituation* s;
    S32 track;

    if (sMusicPaused)
    {
        return;
    }

    s = &sMusicInfo[situation];

    if (s->countMax != NULL && s->count >= s->countMax)
    {
        return;
    }

    if (s->delay > s->elapsedTime)
    {
        return;
    }

    track = s->track;
    sMusicQueueData[track] = &sMusicInfo[situation];
    sMusicTimer[track] = s->punchDelay;
    sMusicQueueData[track]->game_state = (gGameMode == eGameMode_Game);
}

void zMusicNotifyEvent(const F32* toParam, xBase* base)
{
    S32 track;
    zMusicSituation* s;
    size_t musicInfoIdx;
    S32 musicEnum;

    if (sMusicPaused)
    {
        return;
    }

    if (toParam[1] == 0.0f)
    {
        musicInfoIdx = 5;
    }
    else
    {
        musicInfoIdx = 6;
    }
    musicEnum = toParam[0];
    s = &sMusicInfo[musicInfoIdx];
    track = s->track;

    // FIXME: Body (and maybe conditions) aren't quite right
    if (musicEnum != sMusicLastEnum[track] && sMusicQueueData[track] == NULL &&
        (s->countMax == 0 || s->count < s->countMax) && !(s->delay > s->elapsedTime))
    {
        sMusicTimer[track] = s->punchDelay;
        sMusicQueueData[track] = s;
        sMusicQueueData[track]->game_state = (gGameMode == eGameMode_Game);
        sMusicQueueData[track]->music_enum = musicEnum;
    }
}

void zMusicUpdate(F32 dt)
{
    S32 i;
    if (sMusicPaused == FALSE)
    {
        for (i = 0; i < 8; i++)
        {
            sMusicInfo[i].elapsedTime += dt;
        }

        for (i = 0; i < TRACK_COUNT; i++)
        {
            // FIXME: This conditional isn't quite right
            if ((sMusicTimer[i] != 0.0f || sMusicQueueData[i] != NULL) &&
                gGameMode & 0xC == sMusicQueueData[i]->game_state)
            {
                if (sMusicTimer[i] < 0.0f)
                {
                    sMusicTimer[i] -= dt;
                    if (sMusicTimer[i] < 0.0f)
                    {
                        sMusicTimer[i] = 0.0f;
                    }
                }

                if (sMusicTimer[i] == 0.0f && sMusicQueueData[i] != NULL)
                {
                    zMusicDo(i);
                }
            }
        }

        volume_update(dt);
    }
}

static void volume_update(F32 vol)
{
    F32 oldVol = volume.cur;
    if (volume.inc >= 1e-5f && volume.inc <= -1e-5f)
    {
        volume.cur = volume.end;
    }
    else
    {
        volume.cur = volume.inc * vol + volume.cur;
    }

    if ((volume.inc < 0.0f && volume.cur <= volume.end) ||
        (!(volume.inc < 0.0f) && volume.cur >= volume.end))
    {
        volume.end = volume.cur;
        volume.inc = 0.0f;
    }

    for (S32 trackIdx = 0; trackIdx < TRACK_COUNT; trackIdx++)
    {
        if (sMusicTrack[trackIdx].snd_id != 0 &&
            (oldVol != volume.cur || volume.adjusted[trackIdx] != sMusicTrack[trackIdx].snd_id))
        {
            F32 setVol = volume.cur * sMusicTrack[trackIdx].lastVol;
            if (setVol > 1.0f)
            {
                setVol = 1.0f;
            }

            xSndSetVol(sMusicTrack[trackIdx].snd_id, setVol);
            volume.adjusted[trackIdx] = sMusicTrack[trackIdx].snd_id;
        }
    }
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
