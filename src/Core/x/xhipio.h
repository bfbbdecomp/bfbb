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
    int32 endpos;
    uint32 blk_id;
    int32 blk_remain;
    int32 flags;
};

struct st_HIPLOADDATA
{
    st_FILELOADINFO* fli;
    int32 lockid;
    int32 bypass;
    int32 bypass_recover;
    uint32 base_sector;
    int32 use_async;
    en_READ_ASYNC_STATUS asyn_stat;
    int32 pos;
    int32 top;
    int32 readTop;
    st_HIPLOADBLOCK stk[8];
};

struct st_HIPLOADFUNCS
{
    st_HIPLOADDATA* (*create)(const char*, char*, int32);
    void (*destroy)(st_HIPLOADDATA*);
    uint32 (*basesector)(st_HIPLOADDATA*);
    uint32 (*enter)(st_HIPLOADDATA*);
    void (*exit)(st_HIPLOADDATA*);
    int32 (*readBytes)(st_HIPLOADDATA*, char*, int32);
    int32 (*readShorts)(st_HIPLOADDATA*, int16*, int32);
    int32 (*readLongs)(st_HIPLOADDATA*, int32*, int32);
    int32 (*readFloats)(st_HIPLOADDATA*, float32*, int32);
    int32 (*readString)(st_HIPLOADDATA*, char*);
    int32 (*setBypass)(st_HIPLOADDATA*, int32, int32);
    void (*setSpot)(st_HIPLOADDATA*, int32);
    en_READ_ASYNC_STATUS (*pollRead)(st_HIPLOADDATA*);
};

struct st_HIPSAVEBLOCK
{
    int32 pos;
    int32 len;
    int32 flags;
};

struct st_HIPSAVEDATA
{
    st_FILESAVEINFO* fsi;
    int32 lockid;
    int32 pos;
    int32 top;
    int32 writeTop;
    st_HIPSAVEBLOCK stk[8];
};

struct st_HIPSAVEFUNCS
{
    st_HIPSAVEDATA* (*create)(const char*);
    void (*destroy)(st_HIPSAVEDATA*);
    void (*open)(st_HIPSAVEDATA*, uint32);
    void (*close)(st_HIPSAVEDATA*);
    void (*writeBytes)(st_HIPSAVEDATA*, char*, int32);
    void (*writeShorts)(st_HIPSAVEDATA*, int16*, int32);
    void (*writeLongs)(st_HIPSAVEDATA*, int32*, int32);
    void (*writeFloats)(st_HIPSAVEDATA*, float32*, int32);
    void (*writeString)(st_HIPSAVEDATA*, char*);
    int32 (*curSpot)(st_HIPSAVEDATA*);
    int32 (*spotLong)(st_HIPSAVEDATA*, int32, uint32);
};

st_HIPLOADFUNCS* get_HIPLFuncs();

#endif