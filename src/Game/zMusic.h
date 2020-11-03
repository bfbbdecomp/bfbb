#ifndef ZMUSIC_H
#define ZMUSIC_H

#include <types.h>

struct zVolumeInfo {
	float32 cur;
	float32 end;
	float32 inc;
	uint32 adjusted[2];
};

struct zMusicTrackInfo {
	uint32 snd_id;
	uint32 loop;
	int32 unk;
	uint32 assetID;
	float32 lastVol;
};

enum LevelMusic {
	//TODO: POPULATE MUSIC LISTING!
	Null
};

void volume_Reset();
void zMusicRefreshVolume();
LevelMusic getCurrLevelMusicEnum();
void zMusicNotify(int32 unk);
void zMusicSetVolume(float32 vol, float32 delay);
void zMusicKill();
void zMusicPause();
void zMusicUnpause(int32 kill);
void zMusicReset();

#endif