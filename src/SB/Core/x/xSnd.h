#ifndef XSND_H
#define XSND_H

#include <types.h>
#include "xVec3.h"
#include "xMath3.h"
#include "iSnd.h"
#include "xEnt.h"

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
    U32 assetID;
    U32 sndID;
    U32 parentID;
    xVec3* parentPos;
    S32 internalID;
    U32 flags;
    U16 pad;
    U16 priority;
    F32 vol;
    F32 pitch;
    U32 sample_rate;
    U32 deadct;
    sound_category category;
    xVec3 actualPos;
    xVec3 playPos;
    F32 innerRadius2;
    F32 outerRadius2;
    U32 lock_owner;
    iSndInfo ps;
};

enum sound_listener_game_mode
{
    SND_LISTENER_MODE_PLAYER,
    SND_LISTENER_MODE_CAMERA
};

struct xSndGlobals
{
    U32 stereo;
    U32 SndCount;
    F32 categoryVolFader[5];
    // Evidence from iSndUpdateSounds() and xSndInit() show that this array is size 64 instead of 48
    xSndVoiceInfo voice[64];
    xMat4x3 listenerMat[2];
    sound_listener_game_mode listenerMode;
    U32 suspendCD;
    xVec3 right;
    xVec3 up;
    xVec3 at;
    xVec3 pos;
};

struct _xSndDelayed
{
    U32 id;
    F32 vol;
    F32 pitch;
    U32 priority;
    U32 flags;
    U32 parentID;
    xEnt* parentEnt;
    xVec3* pos;
    F32 innerRadius;
    F32 outerRadius;
    sound_category category;
    F32 delay;
    U32 pad0;
};

template <S32 N> struct sound_queue
{
    U32 _playing[N + 1];
    S32 head;
    S32 tail;

    sound_queue()
    {
        head = 0;
        tail = 0;
    }

    void play(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, U32 parentID,
              sound_category snd_category);
    void push(U32 id);
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
void xSndSetVol(U32 snd, F32 vol);
void xSndSetPitch(U32 snd, F32 pitch);
void xSndStop(U32 snd);
void xSndStopAll(U32 mask);
void xSndPauseAll(U32 pause_effects, U32 pause_streams);
void xSndPauseCategory(U32 mask, U32 pause);
void xSndDelayedInit();
void reset_faders();
void xSndParentDied(U32 pid);
void xSndCalculateListenerPosition();
void xSndDelayedUpdate();
void update_faders(F32 timeElapsed);
void xSndProcessSoundPos(const xVec3* pActual, xVec3* pProcessed);
void xSndInternalUpdateVoicePos(xSndVoiceInfo* voiceInfo);
void xSndSetListenerData(sound_listener_type listenerType, const xMat4x3* matrix);
void xSndSelectListenerMode(sound_listener_game_mode listenerGameMode);
void xSndExit();
U32 xSndPlay(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, U32 parentID,
             sound_category category, F32 delay);
U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, xEnt* parent, F32 innerRadius,
               F32 outerRadius, sound_category category, F32 delay);
U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, const xVec3* pos,
               F32 innerRadius, F32 outerRadius, sound_category category, F32 delay);
U32 xSndPlayInternal(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, U32 parentID,
                     xEnt* parentEnt, const xVec3* pos, F32 innerRadius, F32 outerRadius,
                     sound_category category, F32 delay);
void xSndStartStereo(U32 id1, U32 id2, F32 pitch);
U8 xSndIsPlayingByHandle(U32 sndID);
U32 xSndIsPlaying(U32 assetID);
U32 xSndIDIsPlaying(U32 sndID);
void xSndStop(U32 snd);
void xSndParentDied(U32 pid);
void xSndStopChildren(U32 pid);
void xSndSetVol(U32 snd, F32 vol);
void xSndSetPitch(U32 snd, F32 pitch);
void xSndSetCategoryVol(sound_category category, F32 vol);
void xSndSetExternalCallback(void (*callback)(U32));

#endif
