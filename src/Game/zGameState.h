#ifndef ZGAMESTATE_H
#define ZGAMESTATE_H

#include <types.h>

enum _GameOstrich
{
    eGameOstrich_Loading,
    eGameOstrich_PlayingMovie,
    eGameOstrich_InScene,
    eGameOstrich_Total
};

enum eGameMode
{
    eGameMode_Boot,
    eGameMode_Intro,
    eGameMode_Title,
    eGameMode_Start,
    eGameMode_Load,
    eGameMode_Options,
    eGameMode_Save,
    eGameMode_Pause,
    eGameMode_Stall,
    eGameMode_WorldMap,
    eGameMode_MonsterGallery,
    eGameMode_ConceptArtGallery,
    eGameMode_Game,
    eGameMode_Count
};

extern int32 gGameState;

void zGameSetOstrich(_GameOstrich o);
_GameOstrich zGameGetOstrich();

void zGameModeSwitch(eGameMode modeNew);
void zGameStateSwitch(int32 theNewState);

int32 zGameStateGet();
eGameMode zGameModeGet();

#endif