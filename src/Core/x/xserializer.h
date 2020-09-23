#ifndef XSERIALIZER_H
#define XSERIALIZER_H

struct xSerial
{
    int Write_b1(int bits);
    int Write(unsigned char data);
    int Write(short data);
    int Read_b1(int* bits);
    int Read(unsigned char* buf);
    int Read(short* buf);
};

#endif