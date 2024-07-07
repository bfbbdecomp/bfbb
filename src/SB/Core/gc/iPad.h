#ifndef IPAD_H
#define IPAD_H

#include <types.h>

struct _tagiPad
{
    S32 port;
};

struct _tagxPad;
struct _tagxRumble;

S32 iPadInit();
_tagxPad* iPadEnable(_tagxPad* pad, S16 port);
void iPadStopRumble(_tagxPad* pad);
void iPadStopRumble();
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble);
void iPadKill();

#endif
