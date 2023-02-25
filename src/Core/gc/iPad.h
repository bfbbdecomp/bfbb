#ifndef IPAD_H
#define IPAD_H

#include <types.h>

struct _tagiPad
{
    int32 port;
};

struct _tagxPad;
struct _tagxRumble;

int32 iPadInit();
_tagxPad* iPadEnable(_tagxPad* pad, int16 port);
void iPadStopRumble(_tagxPad* pad);
void iPadStopRumble();
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble);
void iPadKill();

#endif