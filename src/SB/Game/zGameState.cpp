#include "zGameState.h"

#include "..\Core\x\xSnd.h"
#include "..\Core\x\xEvent.h"
#include "..\Core\x\xserializer.h"

#include "zGlobals.h"
#include "zGame.h"

S32 gGameState = eGameState_Dead;
eGameMode gGameMode;
_GameOstrich gGameOstrich;

// clang-format off
static U32 sGameMode_DispatchTable[eGameMode_Count] =
{
};

static U32 sGameState_DispatchTable[eGameState_Count] =
{
    eEventDispatcher_GameState_FirstTime,
    eEventDispatcher_GameState_Play,
    eEventDispatcher_GameState_LoseChance,
    eEventDispatcher_GameState_GameOver,
    eEventDispatcher_GameState_SceneSwitch,
    eEventDispatcher_GameState_Dead
};

static U32 sPauseState_DispatchTable[ePauseState_Count] =
{
    eEventDispatcher_PauseState_Pause,
    eEventDispatcher_PauseState_Options
};

static U32 sSaveState_DispatchTable[eSaveState_Count] =
{
    eEventDispatcher_SaveState_SelectMemCard,
    eEventDispatcher_SaveState_SelectSlot,
    eEventDispatcher_SaveState_Saving
};

static U32 sOptionsState_DispatchTable[eOptionsState_Count] =
{
    eEventDispatcher_OptionsState_Options
};

static U32 sLoadState_DispatchTable[eLoadState_Count] =
{
    eEventDispatcher_LoadState_SelectMemCard,
    eEventDispatcher_LoadState_SelectSlot,
    eEventDispatcher_LoadState_Loading
};

static U32 sTitleState_DispatchTable[eTitleState_Count] =
{
    eEventDispatcher_TitleState_Start,
    eEventDispatcher_TitleState_Attract
};

static U32 sIntroState_DispatchTable[eIntroState_Count] =
{
    eEventDispatcher_IntroState_Sony,
    eEventDispatcher_IntroState_Publisher,
    eEventDispatcher_IntroState_Developer,
    eEventDispatcher_IntroState_License
};

static U32 sGameState_DoDispatchTable[eGameState_Count] =
{
    eEventDispatcher_SetGameState_FirstTime,
    eEventDispatcher_SetGameState_Play,
    eEventDispatcher_SetGameState_LoseChance,
    eEventDispatcher_SetGameState_GameOver,
    eEventDispatcher_SetGameState_GameStats,
    eEventDispatcher_SetGameState_SceneSwitch,
    eEventDispatcher_SetGameState_Dead,
    eEventDispatcher_SetGameState_Exit
};

static U32 sPauseState_DoDispatchTable[ePauseState_Count] =
{
    eEventDispatcher_SetPauseState_Pause,
    eEventDispatcher_SetPauseState_Options
};

static U32 sSaveState_DoDispatchTable[eSaveState_Count] =
{
    eEventDispatcher_SetSaveState_SelectMemCard,
    eEventDispatcher_SetSaveState_SelectSlot,
    eEventDispatcher_SetSaveState_Saving
};

static U32 sOptionsState_DoDispatchTable[eOptionsState_Count] =
{
    eEventDispatcher_SetOptionsState_Options
};

static U32 sLoadState_DoDispatchTable[eLoadState_Count] =
{
    eEventDispatcher_SetLoadState_SelectMemCard,
    eEventDispatcher_SetLoadState_SelectSlot,
    eEventDispatcher_SetLoadState_Loading
};

static U32 sTitleState_DoDispatchTable[eTitleState_Count] =
{
    eEventDispatcher_SetTitleState_Start,
    eEventDispatcher_SetTitleState_Attract
};

static U32 sIntroState_DoDispatchTable[eIntroState_Count] =
{
    eEventDispatcher_SetIntroState_Sony,
    eEventDispatcher_SetIntroState_Publisher,
    eEventDispatcher_SetIntroState_Developer,
    eEventDispatcher_SetIntroState_License
};
// clang-format on

S32 zGameStateGet()
{
    return gGameState;
}

eGameMode zGameModeGet()
{
    return gGameMode;
}

_GameOstrich zGameGetOstrich()
{
    return gGameOstrich;
}

void zGameSetOstrich(_GameOstrich value)
{
    gGameOstrich = value;
}

S32 zGameStateFindEvent(U32* eventList, S32 eventCount, S32 targetMode, S32 targetEvent,
                          S32* new_mode, S32* new_state)
{
    for (S32 i = 0; i < eventCount; ++i)
    {
        if (targetEvent == eventList[i])
        {
            *new_mode = targetMode;
            *new_state = i;
            return 1;
        }
    }
    return 0;
}

void zGameStateSwitchEvent(S32 event)
{
    S32 old_mode = zGameModeGet();
    S32 old_state = zGameStateGet();
    S32 new_mode = -1;
    S32 new_state = -1;

    if (zGameStateFindEvent(sGameState_DoDispatchTable, eGameState_Count, eGameMode_Game, event,
                            &new_mode, &new_state) ||
        zGameStateFindEvent(sPauseState_DoDispatchTable, ePauseState_Count, eGameMode_Pause, event,
                            &new_mode, &new_state) ||
        zGameStateFindEvent(sSaveState_DoDispatchTable, eSaveState_Count, eGameMode_Save, event,
                            &new_mode, &new_state) ||
        zGameStateFindEvent(sOptionsState_DoDispatchTable, eOptionsState_Count, eGameMode_Options,
                            event, &new_mode, &new_state) ||
        zGameStateFindEvent(sLoadState_DoDispatchTable, eLoadState_Count, eGameMode_Load, event,
                            &new_mode, &new_state) ||
        zGameStateFindEvent(sTitleState_DoDispatchTable, eTitleState_Count, eGameMode_Title, event,
                            &new_mode, &new_state) ||
        zGameStateFindEvent(sIntroState_DoDispatchTable, eIntroState_Count, eGameMode_Intro, event,
                            &new_mode, &new_state))
    {
        // yay
    }

    if (new_mode != old_mode)
    {
        zGameModeSwitch((eGameMode)new_mode);
    }

    if (new_mode != old_mode || new_state != old_state)
    {
        zGameStateSwitch(new_state);

        if (new_state == eGameState_Exit)
        {
            zEntEvent("MNU4 CONFIRM SFX", eEventPlay);
            xSerialWipeMainBuffer();
        }
    }
}

void zGameStateSwitch(S32 theNewState)
{
    S32 stateOld = gGameState;
    U32 theEvent = 0;

    gGameState = theNewState;

    if (theNewState == eGameState_Play && stateOld == eGameState_FirstTime)
    {
        startPressed = 1;
    }

    switch (gGameMode)
    {
    case eGameMode_Intro:
    {
        theEvent = sIntroState_DispatchTable[theNewState];
        break;
    }
    case eGameMode_Title:
    {
        theEvent = sTitleState_DispatchTable[theNewState];
        break;
    }
    case eGameMode_Load:
    {
        theEvent = sLoadState_DispatchTable[theNewState];
        break;
    }
    case eGameMode_Options:
    {
        theEvent = sOptionsState_DispatchTable[theNewState];
        break;
    }
    case eGameMode_Save:
    {
        theEvent = sSaveState_DispatchTable[theNewState];
        break;
    }
    case eGameMode_Pause:
    {
        theEvent = sPauseState_DispatchTable[theNewState];
        break;
    }
    case eGameMode_Game:
    {
        theEvent = sGameState_DispatchTable[theNewState];
        break;
    }
    }

    if (theEvent)
    {
        zEntEventAllOfType(theEvent, eBaseTypeDispatcher);
    }
}

void zGameModeSwitch(eGameMode modeNew)
{
    eGameMode modeOld = gGameMode;

    bool pausing =
        (modeNew == eGameMode_Save || modeNew == eGameMode_Pause || modeNew == eGameMode_Stall);

    bool unpausing =
        (modeOld == eGameMode_Save || modeOld == eGameMode_Pause || modeOld == eGameMode_Stall);

    if (modeOld == eGameMode_Game && pausing)
    {
        xSndPauseAll(1, 1);
    }
    else if (modeNew == eGameMode_Game && unpausing)
    {
        xSndPauseAll(0, 0);

        globals.pad0->pressed = 0;
        globals.pad0->released = 0;
        globals.pad0->analog1.x = 0;
        globals.pad0->analog1.y = 0;
        globals.pad0->analog2.x = 0;
        globals.pad0->analog2.y = 0;
    }

    // non-matching: scheduling

    gGameMode = modeNew;

    zEntEventAllOfType(sGameMode_DispatchTable[modeNew], eBaseTypeDispatcher);
}
