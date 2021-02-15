#ifndef XSND_H
#define XSND_H

#include <types.h>
#include "xVec3.h"
#include "xMath3.h"
#include "../p2/iSnd.h"
#include "../src/Core/x/xEnt.h"

enum sound_category
{
    SND_CAT_INVALID = 0xffffffff,
    SND_CAT_GAME = 0,
    SND_CAT_DIALOG,
    SND_CAT_MUSIC,
    SND_CAT_CUTSCENE,
    SND_CAT_UI,
    SND_CAT_NUM_CATEGORIES
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
    // Evidence from iSndUpdateSounds() and xSndInit() show that this array is size 64 instead of 48
    xSndVoiceInfo voice[64];
    xMat4x3 listenerMat[2];
    sound_listener_game_mode listenerMode;
    uint32 suspendCD;
    xVec3 right;
    xVec3 up;
    xVec3 at;
    xVec3 pos;
};

struct _xSndDelayed
{
    uint32 id;
    float32 vol;
    float32 pitch;
    uint32 priority;
    uint32 flags;
    uint32 parentID;
    xEnt* parentEnt;
    xVec3* pos;
    float32 innerRadius;
    float32 outerRadius;
    sound_category category;
    float32 delay;
    uint32 pad0;
};

template <int32 N> struct sound_queue
{
    uint32 _playing[N + 1];
    int32 head;
    int32 tail;
};

enum sound_effect
{
    SND_EFFECT_NONE,
    SND_EFFECT_CAVE
};

enum sound_listener_type
{
    SND_LISTENER_CAMERA,
    SND_LISTENER_PLAYER,
    SND_MAX_LISTENER_TYPES
};

extern xSndGlobals gSnd;

void xSndSceneInit();
void xSndResume();
void xSndUpdate();
void xSndSetEnvironmentalEffect(sound_effect effectType);
void xSndSuspend();
void xSndSetVol(uint32 snd, float32 vol);
void xSndSetPitch(uint32 snd, float32 pitch);
void xSndStop(uint32 snd);
void xSndStopAll(uint32 mask);
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams);
void xSndPauseCategory(uint32 mask, uint32 pause);
void xSndDelayedInit();
void reset_faders();
void xSndParentDied(uint32 pid);
void xSndCalculateListenerPosition();
void xSndDelayedUpdate();
void update_faders(float32 timeElapsed);
void xSndInternalUpdateVoicePos(xSndVoiceInfo* voiceInfo);
void xSndSetListenerData(sound_listener_type listenerType, const xMat4x3* matrix);
void xSndSelectListenerMode(sound_listener_game_mode listenerGameMode);
void xSndExit();
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                uint32 parentID, sound_category category, float32 delay);
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                  xEnt* parent, float32 innerRadius, float32 outerRadius, sound_category category,
                  float32 delay);
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                  const xVec3* pos, float32 radius, sound_category category, float32 delay);
uint32 xSndPlayInternal(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                        uint32 parentID, xEnt* parentEnt, const xVec3* pos, float32 innerRadius,
                        float32 outerRadius, sound_category category, float32 delay);
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch);
uint32 xSndIDIsPlaying(uint32 sndID);
void xSndStop(uint32 snd);
void xSndParentDied(uint32 pid);
void xSndStopChildren(uint32 pid);
void xSndSetVol(uint32 snd, float32 vol);
void xSndSetPitch(uint32 snd, float32 pitch);

#endif