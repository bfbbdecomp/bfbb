#ifndef XSERIALIZER_H
#define XSERIALIZER_H

#include <types.h>

struct st_SERIAL_CLIENTINFO
{
};

class xSerial
{
public:
    uint32 idtag;
    int32 baseoff;
    st_SERIAL_CLIENTINFO* ctxtdata;
    int32 warned;
    int32 curele;
    int32 bitidx;
    int32 bittally;

    int32 Write_b1(int32 bits);
    int32 Write(uint8 data);
    int32 Write(int16 data);
    int32 Write(int32 data);
    int32 Read_b1(int32* bits);
    int32 Read(uint8* buf);
    int32 Read(int16* buf);
    int32 Read(int32* buf);
};

void xSerialWipeMainBuffer();

#endif