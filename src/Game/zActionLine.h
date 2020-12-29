#ifndef ZACTIONLINE_H
#define ZACTIONLINE_H

#include "../Core/x/xVec3.h"

struct _tagActionLine
{
    uint32 flags;
    xVec3 pos[4];
    float32 time_left;
};

void RenderActionLine(_tagActionLine* l);

#endif