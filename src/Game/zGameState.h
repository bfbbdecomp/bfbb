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

void zGameSetOstrich(_GameOstrich o);
_GameOstrich zGameGetOstrich();

#endif