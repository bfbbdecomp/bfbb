#ifndef XSND_H
#define XSND_H

#include <types.h>
#include "xVec3.h"
#include "xMath3.h"
#include "../p2/iSnd.h"

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

struct xSndVoiceInfo
{
    uint32 assetID;
    uint32 sndID;
    uint32 parentID;
    xVec3* parentPos;
    int32 internalID;
    uint32 flags;
    uint16 pad;
    uint16 priority;
    float32 vol;
    float32 pitch;
    uint32 sample_rate;
    uint32 deadct;
    sound_category category;
    xVec3 actualPos;
    xVec3 playPos;
    float32 innerRadius2;
    float32 outerRadius2;
    uint32 lock_owner;
    iSndInfo ps;
};

enum sound_listener_game_mode
{
    SND_LISTENER_MODE_PLAYER,
    SND_LISTENER_MODE_CAMERA
};

struct xSndGlobals
{
    uint32 stereo;
    uint32 SndCount;
    float32 categoryVolFader[5];
    xSndVoiceInfo voice[48];
    xMat4x3 listenerMat[2];
    sound_listener_game_mode listenerMode;
    uint32 suspendCD;
    xVec3 right;
    xVec3 up;
    xVec3 at;
    xVec3 pos;
};

extern xSndGlobals gSnd;

void xSndResume();
void xSndUpdate();
void xSndSuspend();
void xSndSetVol(uint32 snd, float32 vol);
void xSndSetPitch(uint32 snd, float32 pitch);
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                uint32 parentID, sound_category category, float32 delay);
void xSndStop(uint32 snd);
void xSndStopAll(uint32 mask);
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams);

#endif