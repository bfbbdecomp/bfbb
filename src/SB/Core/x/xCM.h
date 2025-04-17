#ifndef XCM_H
#define XCM_H

#include <types.h>
#include "xColor.h"
#include "xBase.h"

struct xCreditsData
{
    U32 dummy;
};

class xCMheader
{
    // total size: 0x18
public:
    unsigned int magic; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int crdID; // offset 0x8, size 0x4
    unsigned int state; // offset 0xC, size 0x4
    float total_time; // offset 0x10, size 0x4
    unsigned int total_size; // offset 0x14, size 0x4
};

class sxy
{
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};

class fade
{
    // total size: 0x8
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
};

class xCMtextbox
{
    // total size: 0x20
public:
    unsigned int font; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    class sxy char_size; // offset 0x8, size 0x8
    class sxy char_spacing; // offset 0x10, size 0x8
    class sxy box; // offset 0x18, size 0x8
};

class xCMpreset
{
    // total size: 0x4C
public:
    unsigned short num; // offset 0x0, size 0x2
    unsigned short align; // offset 0x2, size 0x2
    float delay; // offset 0x4, size 0x4
    float innerspace; // offset 0x8, size 0x4
    class xCMtextbox box[2]; // offset 0xC, size 0x40
};

class xCMhunk
{
    // total size: 0x18
public:
    unsigned int hunk_size; // offset 0x0, size 0x4
    unsigned int preset; // offset 0x4, size 0x4
    float t0; // offset 0x8, size 0x4
    float t1; // offset 0xC, size 0x4
    char * text1; // offset 0x10, size 0x4
    char * text2; // offset 0x14, size 0x4
};

class xCMcredits
{
    // total size: 0x38
public:
    unsigned int credits_size; // offset 0x0, size 0x4
    float len; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    sxy in; // offset 0xC, size 0x8
    sxy out; // offset 0x14, size 0x8
    float scroll_rate; // offset 0x1C, size 0x4
    float lifetime; // offset 0x20, size 0x4
    fade fin; // offset 0x24, size 0x8
    fade fout; // offset 0x2C, size 0x8
    unsigned int num_presets; // offset 0x34, size 0x4
};

void xCMupdate(F32 dt);
void xCMrender();
void xCMrender(F32 time, xCreditsData* data);
void xCMstart(xCreditsData* data, F32, xBase* parent);
void xCMstop();

#endif
