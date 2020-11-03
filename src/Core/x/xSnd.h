#ifndef XSND_H
#define XSND_H

#include <types.h>

enum sound_category
{
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES,
	SND_CAT_INVALID = 0xffffffff
};

void xSndResume();
void xSndSuspend();
void xSndSetVol(uint32 snd, float32 vol);
void xSndSetPitch(uint32 snd, float32 pitch);
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, uint32 parentID, sound_category category, float32 delay);
void xSndStop(uint32 snd);

#endif