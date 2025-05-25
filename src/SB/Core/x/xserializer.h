#ifndef XSERIALIZER_H
#define XSERIALIZER_H

#include <types.h>
#include "xsavegame.h"
#include "xordarray.h"

struct st_SERIAL_CLIENTINFO
{
    U32 idtag;
    S32* membuf;
    S32 trueoff;
    S32 actsize;
};

struct st_SERIAL_PERCID_SIZE
{
    U32 idtag;
    S32 needsize;
};

struct st_XSERIAL_DATA_PRIV
{
    S32 flg_info;
    S32* bitbuf;
    S32 buf_bytcnt;
    st_SERIAL_CLIENTINFO* cltbuf;
    st_SERIAL_CLIENTINFO* cltnext;
    st_XORDEREDARRAY cltlist;
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
    void prepare(U32 idtag);

    void wrbit(S32 is_on);
    S32 Write(char* data, S32 elesize, S32 n);
    S32 Write_b1(S32 bits);
    S32 Write_b7(U32 bits);
    S32 Write(U8 data);
    S32 Write(S16 data);
    S32 Write(S32 data);
    S32 Write(U32 data);
    S32 Write(F32 data);
    S32 rdbit();
    S32 Read(char* buf, S32 elesize, S32 n);
    S32 Read_b1(S32* bits);
    S32 Read_b7(U32* bits);
    S32 Read(U8* buf);
    S32 Read(S16* buf);
    S32 Read(S32* buf);
    S32 Read(U32* buf);
    S32 Read(F32* buf);
    void operator delete(void*);
};

S32 xSerialStartup(S32, st_SERIAL_PERCID_SIZE*);
S32 xSerialShutdown();
void xSerialTraverse(S32 (*func)(U32 clientID, xSerial* xser));
void xSerialWipeMainBuffer();
void xSER_init_buffers(S32 count, st_SERIAL_PERCID_SIZE* sizeinfo);
S32 xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);

#endif
