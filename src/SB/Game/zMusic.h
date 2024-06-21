#ifndef ZMUSIC_H
#define ZMUSIC_H

#include <types.h>
#include "../Core/x/xBase.h"

struct zMusicSituation
{
    int32 track;
    uint32 priority;
    uint32 countMax;
    float32 delay;
    float32 punchDelay;
    float32 elapsedTime;
    uint32 count;
    uint32 sndid;
    int32 situation;
    int32 music_enum;
    int32 game_state;
};

struct zVolumeInfo
{
    float32 cur;
    float32 end;
    float32 inc;
    uint32 adjusted[2];
};

struct zMusicTrackInfo
{
    uint32 snd_id;
    uint32 loop;
    zMusicSituation* situation;
    uint32 assetID;
    float32 lastVol;
};

void volume_reset();
void zMusicRefreshVolume();
int32 getCurrLevelMusicEnum();
void zMusicNotify(int32 situation);
void zMusicSetVolume(float32 vol, float32 delay);
void zMusicKill();
void zMusicPause();
void zMusicUnpause(int32 kill);
void zMusicReset();
void zMusicInit();
void zMusicUpdate(float32 dt);
void zMusicNotifyEvent(const float32* toParam, xBase*);

#endif
