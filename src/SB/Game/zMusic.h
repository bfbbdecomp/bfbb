#ifndef ZMUSIC_H
#define ZMUSIC_H

#include <types.h>
#include "xBase.h"

struct zMusicSituation
{
    S32 track;
    U32 priority;
    U32 countMax;
    F32 delay;
    F32 punchDelay;
    F32 elapsedTime;
    U32 count;
    U32 sndid;
    S32 situation;
    S32 music_enum;
    S32 game_state;
};

struct zVolumeInfo
{
    F32 cur;
    F32 end;
    F32 inc;
    U32 adjusted[2];
};

struct zMusicTrackInfo
{
    U32 snd_id;
    U32 loop;
    zMusicSituation* situation;
    U32 assetID;
    F32 lastVol;
};

void volume_reset();
void zMusicRefreshVolume();
S32 getCurrLevelMusicEnum();
void zMusicNotify(S32 situation);
void zMusicSetVolume(F32 vol, F32 delay);
void zMusicKill();
void zMusicPause();
void zMusicUnpause(S32 kill);
void zMusicReset();
void zMusicInit();
void zMusicUpdate(F32 dt);
void zMusicNotifyEvent(const F32* toParam, xBase*);

#endif
