#ifndef XHIPIO_H
#define XHIPIO_H

#include "xbinio.h"

enum en_READ_ASYNC_STATUS
{
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG,
    HIP_RDSTAT_SUCCESS,
    HIP_RDSTAT_FAILED,
    HIP_RDSTAT_NOBYPASS,
    HIP_RDSTAT_NOASYNC
};

struct st_HIPLOADBLOCK
{
    S32 endpos;
    U32 blk_id;
    S32 blk_remain;
    S32 flags;
};

struct st_HIPLOADDATA
{
    st_FILELOADINFO* fli;
    S32 lockid;
    S32 bypass;
    S32 bypass_recover;
    U32 base_sector;
    S32 use_async;
    en_READ_ASYNC_STATUS asyn_stat;
    S32 pos;
    S32 top;
    S32 readTop;
    st_HIPLOADBLOCK stk[8];
};

struct st_HIPLOADFUNCS
{
    st_HIPLOADDATA* (*create)(const char*, char*, S32);
    void (*destroy)(st_HIPLOADDATA*);
    U32 (*basesector)(st_HIPLOADDATA*);
    U32 (*enter)(st_HIPLOADDATA*);
    void (*exit)(st_HIPLOADDATA*);
    S32 (*readBytes)(st_HIPLOADDATA*, char*, S32);
    S32 (*readShorts)(st_HIPLOADDATA*, S16*, S32);
    S32 (*readLongs)(st_HIPLOADDATA*, S32*, S32);
    S32 (*readFloats)(st_HIPLOADDATA*, F32*, S32);
    S32 (*readString)(st_HIPLOADDATA*, char*);
    S32 (*setBypass)(st_HIPLOADDATA*, S32, S32);
    void (*setSpot)(st_HIPLOADDATA*, S32);
    en_READ_ASYNC_STATUS (*pollRead)(st_HIPLOADDATA*);
};

struct st_HIPSAVEBLOCK
{
    S32 pos;
    S32 len;
    S32 flags;
};

struct st_HIPSAVEDATA
{
    st_FILESAVEINFO* fsi;
    S32 lockid;
    S32 pos;
    S32 top;
    S32 writeTop;
    st_HIPSAVEBLOCK stk[8];
};

struct st_HIPSAVEFUNCS
{
    st_HIPSAVEDATA* (*create)(const char*);
    void (*destroy)(st_HIPSAVEDATA*);
    void (*open)(st_HIPSAVEDATA*, U32);
    void (*close)(st_HIPSAVEDATA*);
    void (*writeBytes)(st_HIPSAVEDATA*, char*, S32);
    void (*writeShorts)(st_HIPSAVEDATA*, S16*, S32);
    void (*writeLongs)(st_HIPSAVEDATA*, S32*, S32);
    void (*writeFloats)(st_HIPSAVEDATA*, F32*, S32);
    void (*writeString)(st_HIPSAVEDATA*, char*);
    S32 (*curSpot)(st_HIPSAVEDATA*);
    S32 (*spotLong)(st_HIPSAVEDATA*, S32, U32);
};

st_HIPLOADFUNCS* get_HIPLFuncs();

#endif
