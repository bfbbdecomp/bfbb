#ifndef XSERIALIZER_H
#define XSERIALIZER_H

struct xSerial
{
    int32 Write_b1(int32 bits);
    int32 Write(uint8 data);
    int32 Write(int16 data);
    int32 Read_b1(int32* bits);
    int32 Read(uint8* buf);
    int32 Read(int16* buf);
};

#endif