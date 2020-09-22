#ifndef XSERIALIZER_H
#define XSERIALIZER_H

struct xSerial
{
    int Write_b1(int bits);
    int Read_b1(int* bits);
};

#endif