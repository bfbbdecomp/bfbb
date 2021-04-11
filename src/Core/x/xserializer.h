#ifndef XSERIALIZER_H
#define XSERIALIZER_H

#include <types.h>
#include "../src/Core/x/xsavegame.h"

struct st_SERIAL_CLIENTINFO
{
    uint32 idtag;
    int32* membuf;
    int32 trueoff;
    int32 actsize;
};

struct xSerial
{
    uint32 idtag;
    int32 baseoff;
    st_SERIAL_CLIENTINFO* ctxtdata;
    int32 warned;
    int32 curele;
    int32 bitidx;
    int32 bittally;

    xSerial();
    ~xSerial();

    void setClient(uint32 idtag);

    int32 Write_b1(int32 bits);
    int32 Write_b7(uint32 bits);
    int32 Write(uint8 data);
    int32 Write(int16 data);
    int32 Write(int32 data);
    int32 Write(uint32 data);
    int32 Write(float32 data);
    int32 Read_b1(int32* bits);
    int32 Read_b7(uint32* bits);
    int32 Read(uint8* buf);
    int32 Read(int16* buf);
    int32 Read(int32* buf);
    int32 Read(uint32* buf);
    int32 Read(float32* buf);
};

void xSerialTraverse(int32 (*func)(uint32 clientID, xSerial* xser));
void xSerialWipeMainBuffer();
int32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);

#endif