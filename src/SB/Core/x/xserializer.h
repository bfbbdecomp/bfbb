#ifndef XSERIALIZER_H
#define XSERIALIZER_H

#include <types.h>
#include "xsavegame.h"

struct st_SERIAL_CLIENTINFO
{
    U32 idtag;
    S32* membuf;
    S32 trueoff;
    S32 actsize;
};

struct xSerial
{
    U32 idtag;
    S32 baseoff;
    st_SERIAL_CLIENTINFO* ctxtdata;
    S32 warned;
    S32 curele;
    S32 bitidx;
    S32 bittally;

    xSerial();
    ~xSerial();

    void setClient(U32 idtag);

    S32 Write_b1(S32 bits);
    S32 Write_b7(U32 bits);
    S32 Write(U8 data);
    S32 Write(S16 data);
    S32 Write(S32 data);
    S32 Write(U32 data);
    S32 Write(F32 data);
    S32 Read_b1(S32* bits);
    S32 Read_b7(U32* bits);
    S32 Read(U8* buf);
    S32 Read(S16* buf);
    S32 Read(S32* buf);
    S32 Read(U32* buf);
    S32 Read(F32* buf);
};

void xSerialTraverse(S32 (*func)(U32 clientID, xSerial* xser));
void xSerialWipeMainBuffer();
S32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);

#endif
