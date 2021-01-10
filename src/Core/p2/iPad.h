#ifndef IPAD_H
#define IPAD_H

#include <types.h>

struct _tagiPad
{
    int32 port;
};

struct _tagxPad;

_tagxPad* iPadEnable(_tagxPad* pad, int16 port);

#endif