#include "zGameState.h"

#include "..\Core\x\xSnd.h"
#include "..\Core\x\xEvent.h"
#include "..\Core\x\xserializer.h"

#include "zEnt.h"
#include "zGlobals.h"

eGameMode gGameMode;
_GameOstrich gGameOstrich;

extern int32 startPressed;

extern int8 zGameState_strings[];

extern uint32 sGameMode_DispatchTable[];

extern uint32 sPauseState_DoDispatchTable[2];
extern uint32 sPauseState_DispatchTable[2];

extern uint32 sOptionsState_DoDispatchTable[1];
extern uint32 sOptionsState_DispatchTable[1];

extern uint32 sTitleState_DoDispatchTable[2];
extern uint32 sTitleState_DispatchTable[2];

// func_8009A924
int32 zGameStateGet()
{
    return gGameState;
}

// func_8009A92C
eGameMode zGameModeGet()
{
    return gGameMode;
}

// func_8009A934
_GameOstrich zGameGetOstrich()
{
    return gGameOstrich;
}

// func_8009A93C
void zGameSetOstrich(_GameOstrich value)
{
    gGameOstrich = value;
}

// func_8009A944
int32 zGameStateFindEvent(uint32* eventList, int32 eventCount, int32 targetMode, int32 targetEvent,
                          int32* new_mode, int32* new_state)
{
    for (int32 i = 0; i < eventCount; ++i)
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

// func_8009A984
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameStateSwitchEvent__Fi")
#else
// No idea what's going on here, the order of the instructions for the
// zGameModeGet / zGameStateGet at the start of the function here are really
// different than they should be despite the end 100% matching.
// There's also a chance that the goto based part is done using some other
// structure, but I can't think of any way to get the branching the function
// has other than actually writing gotos, I think the original source may have
// had the gotos.
// Not marking this as NON_MATCHING because I'm also not 100% confident what's
// going on with sGameMode_DispatchTable, why the indices into it are so large
// despite it not being that big in the .s file.
void zGameStateSwitchEvent(int32 event)
{
    eGameMode old_mode = zGameModeGet();
    int32 old_state = zGameStateGet();

    int32 new_mode = -1;
    int32 new_state = -1;

    if (zGameStateFindEvent(&sGameMode_DispatchTable[31], 8, 0xc, event, &new_mode, &new_state))
        goto FoundEvent;

    if (zGameStateFindEvent(sPauseState_DoDispatchTable, 2, 7, event, &new_mode, &new_state))
        goto FoundEvent;

    if (zGameStateFindEvent(&sGameMode_DispatchTable[39], 3, 6, event, &new_mode, &new_state))
        goto FoundEvent;

    if (zGameStateFindEvent(sOptionsState_DoDispatchTable, 1, 5, event, &new_mode, &new_state))
        goto FoundEvent;

    if (zGameStateFindEvent(&sGameMode_DispatchTable[42], 3, 4, event, &new_mode, &new_state))
        goto FoundEvent;

    if (zGameStateFindEvent(sTitleState_DoDispatchTable, 2, 2, event, &new_mode, &new_state))
        goto FoundEvent;

    zGameStateFindEvent(&sGameMode_DispatchTable[45], 4, 1, event, &new_mode, &new_state);
FoundEvent:

    if (new_mode != old_mode)
    {
        zGameModeSwitch((eGameMode)new_mode);
    }

    if (new_mode != old_mode || new_state != old_state)
    {
        zGameStateSwitch(new_state);
        if (new_state == 7)
        {
            zEntEvent(zGameState_strings, 0x18);
            xSerialWipeMainBuffer();
        }
    }
}
#endif

// func_8009AB2C
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameStateSwitch__Fi")
#else
// The switch statement contained in here has completely the wrong labels, so
// it needs more work before it can be used at all. The rest should be accurate.
void zGameStateSwitch(int32 theNewState)
{
    int32 stateOld = gGameState;
    gGameState = theNewState;
    if (gGameState == 1 && stateOld == 0)
    {
        startPressed = 1;
    }

    uint32 theEvent;

    // WARNING: This swtich has the entirely wrong labels!! All I know for sure
    // is that every game state is present in this switch, I couldn't figure
    // out where the jump table is in the DOL, so I don't know which is which.
    switch (gGameMode)
    {
    case eGameMode_Boot:
    case eGameMode_Game:
        theEvent = sGameMode_DispatchTable[27 + theNewState];
        break;
    case eGameMode_ConceptArtGallery:
        theEvent = sTitleState_DispatchTable[theNewState];
        break;
    case eGameMode_Pause:
    case eGameMode_Stall:
        theEvent = sGameMode_DispatchTable[24 + theNewState];
        break;
    case eGameMode_Load:
    case eGameMode_Options:
    case eGameMode_Save:
        theEvent = sOptionsState_DispatchTable[theNewState];
        break;
    case eGameMode_Start:
    case eGameMode_WorldMap:
        theEvent = sGameMode_DispatchTable[21 + theNewState];
        break;
    case eGameMode_MonsterGallery:
    case eGameMode_Intro:
        theEvent = sPauseState_DispatchTable[theNewState];
        break;
    case eGameMode_Title:
        theEvent = sGameMode_DispatchTable[13 + theNewState];
        break;
    }

    if (theEvent)
    {
        zEntEventAllOfType(theEvent, 0x1e);
    }
}
#endif

// func_8009AC18
#if 1
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameModeSwitch__F9eGameMode")
#else
// The (modeNew - 6) & 0x1 is wrong.
// The code is actually doing something really weird that I can't figure out
// with the modeNew. It's some kind of bit extraction + test, but I can't work
// out what it actually effectively does.
// It's clearly a baked instruction pattern that the compiler uses for some
// specific task, but it's only used in 5 places in the entire codebase, so
// I can't work out what it is.
// The instruction pattern contains a "subfic" if you want to search for it.
extern uint32 eventsForMode[];
void zGameModeSwitch(eGameMode modeNew)
{
    uint8 pausing;
    uint8 unpausing;

    unpausing = 1;
    eGameMode modeOld = gGameMode;
    if ((modeNew - 6) & 0x1)
    {
        unpausing = 0;
    }
    if (unpausing == 0 && modeNew != 8)
    {
        pausing = 0;
    }
    unpausing = 1;
    int32 tmp = unpausing;
    if ((modeOld - 6) & 0x1)
    {
        tmp = 0;
    }
    if (tmp == 0 && modeOld != 8)
    {
        unpausing = 0;
    }

    if (modeOld == 0xc && pausing)
    {
        xSndPauseAll(1, 1);
    }
    else if (modeNew == 0xc && unpausing)
    {
        xSndPauseAll(0, 0);
        globals.pad0->pressed = 0;
        globals.pad0->released = 0;
        globals.pad0->analog1.x = 0;
        globals.pad0->analog1.y = 0;
        globals.pad0->analog2.x = 0;
        globals.pad0->analog2.y = 0;
    }
    gGameMode = modeNew;
    zEntEventAllOfType(eventsForMode[modeNew], 0x1e);
}
#endif
