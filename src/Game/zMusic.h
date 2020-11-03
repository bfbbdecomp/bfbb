#ifndef ZMUSIC_H
#define ZMUSIC_H

#include <types.h>

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
    int32 situation; // Is actually a zMusicSituation*.
    uint32 assetID;
    float32 lastVol;
};

void volume_Reset();
void zMusicRefreshVolume();
int32 getCurrLevelMusicEnum();
void zMusicNotify(int32 situation);
void zMusicSetVolume(float32 vol, float32 delay);
void zMusicKill();
void zMusicPause();
void zMusicUnpause(int32 kill);
void zMusicReset();

#endif