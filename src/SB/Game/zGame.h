#ifndef ZGAME_H
#define ZGAME_H

#include "zEntPlayer.h"
#include "zGameState.h"

extern _CurrentPlayer gPendingPlayer;
extern F32 sTimeElapsed;
extern U32 gLevelChanged;
extern U32 startPressed;
extern U8 sHackSmoothedUpdate;
extern U32 gBusStopIsRunning;

enum eGameWhereAmI
{
    eGameWhere_NA,
    eGameWhere_InitStart,
    eGameWhere_InitScene,
    eGameWhere_InitCamera,
    eGameWhere_InitMusic,
    eGameWhere_InitOther,
    eGameWhere_InitEnd,
    eGameWhere_ExitStart,
    eGameWhere_ExitRumble,
    eGameWhere_ExitHUD,
    eGameWhere_ExitSound,
    eGameWhere_ExitCamera,
    eGameWhere_ExitScene,
    eGameWhere_ExitEnd,
    eGameWhere_SetupScene,
    eGameWhere_SetupZFX,
    eGameWhere_SetupPlayer,
    eGameWhere_SetupCamera,
    eGameWhere_SetupScrFX,
    eGameWhere_SetupSceneLoad,
    eGameWhere_SetupMusicNotify,
    eGameWhere_SetupHudSetup,
    eGameWhere_SetupSkydome,
    eGameWhere_SetupSceneEvents,
    eGameWhere_SetupUpdateCull,
    eGameWhere_SetupLOD,
    eGameWhere_SetupExtras,
    eGameWhere_SetupEnd,
    eGameWhere_LoopStart,
    eGameWhere_CutsceneFinish,
    eGameWhere_LoopDo,
    eGameWhere_LoopCalcTime,
    eGameWhere_LoopPadUpdate,
    eGameWhere_LoopTRCCheck,
    eGameWhere_LoopCheats,
    eGameWhere_LoopSceneUpdate,
    eGameWhere_LoopPlayerUpdate,
    eGameWhere_LoopSoundUpdate,
    eGameWhere_LoopSFXWidgets,
    eGameWhere_LoopHUDUpdate,
    eGameWhere_LoopCameraUpdate,
    eGameWhere_LoopCameraFXUpdate,
    eGameWhere_LoopFlyToInterface,
    eGameWhere_LoopCameraBegin,
    eGameWhere_LoopSceneRender,
    eGameWhere_LoopCameraEnd,
    eGameWhere_LoopCameraShowRaster,
    eGameWhere_LoopCameraFXEnd,
    eGameWhere_LoopMusicUpdate,
    eGameWhere_LoopUpdateMode,
    eGameWhere_LoopContinue,
    eGameWhere_LoopEndGameLoop,
    eGameWhere_SaveLoop,
    eGameWhere_ModeSceneSwitch,
    eGameWhere_ModeCutsceneFinish,
    eGameWhere_ModeGameExit,
    eGameWhere_ModeGameInit,
    eGameWhere_ModeGameSetup,
    eGameWhere_ModeSwitchAutoSave,
    eGameWhere_ModeSwitchCutsceneFinish,
    eGameWhere_ModeStoreCheckpoint,
    eGameWhere_LoseChanceReset,
    eGameWhere_LoseChanceResetDone,
    eGameWhere_TransitionBubbles,
    eGameWhere_TransitionBegin,
    eGameWhere_TransitionSnapShot,
    eGameWhere_TransitionUpdate,
    eGameWhere_TransitionPadUpdate,
    eGameWhere_TransitionTRCCheck,
    eGameWhere_TransitionCameraClear,
    eGameWhere_TransitionCameraBegin,
    eGameWhere_TransitionRenderBackground,
    eGameWhere_TransitionSpawnBubbles,
    eGameWhere_TransitionDrawEnd,
    eGameWhere_TransitionUpdateBubbles,
    eGameWhere_TransitionCameraEnd,
    eGameWhere_TransitionCameraShowRaster,
    eGameWhere_TransitionUpdateEnd,
    eGameWhere_TransitionUIRender,
    eGameWhere_TransitionUIRenderEnd,
    eGameWhere_TransitionEnd,
    eGameWhere_TransitionEnded,
    eGameWhere_SetupPlayerInit,
    eGameWhere_SetupPlayerCamera,
    eGameWhere_SetupPlayerEnd
};

extern iTime sTimeCurrent;
extern iTime sTimeLast;
extern F32 sTimeElapsed;

void zGameSetupPlayer();
void xDrawBegin();
void xDrawEnd();
S32 zGameIsPaused();
void zGameScreenTransitionBegin();
void zGameScreenTransitionUpdate(F32 percentComplete, char* msg);
void zGameScreenTransitionUpdate(F32 percentComplete, char* msg, U8* rgba);
void zGameScreenTransitionEnd();
void zGameModeSwitch(eGameMode modeNew);
void zGameStall();
void zGameStats_Init();

#endif
