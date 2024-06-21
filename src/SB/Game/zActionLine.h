#ifndef ZACTIONLINE_H
#define ZACTIONLINE_H

#include "xVec3.h"

struct _tagActionLine
{
    uint32 flags;
    xVec3 pos[4];
    float32 time_left;
};

void zActionLineInit();
void zActionLineUpdate(float32 seconds);
void zActionLineRender();
void RenderActionLine(_tagActionLine* l);

#endif
