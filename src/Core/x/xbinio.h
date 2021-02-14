#ifndef XBINIO_H
#define XBINIO_H

#include "xFile.h"

enum en_BIO_ASYNC_ERRCODES
{
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP,
    BINIO_ASYNC_INPROG,
    BINIO_ASYNC_DONE,
    BINIO_ASYNC_FORCEENUMSIZEINT = 0x7fffffff
};

enum en_FIOERRCODES
{
    FIOERR_NONE,
    FIOERR_READFAIL,
    FIOERR_WRITEFAIL,
    FIOERR_SEEKFAIL,
    FIOERR_USERABORT
};

struct st_FILELOADINFO
{
    void (*destroy)(st_FILELOADINFO*);
    int32 (*readBytes)(st_FILELOADINFO*, char*, int32);
    int32 (*readMShorts)(st_FILELOADINFO*, int16*, int32);
    int32 (*readMLongs)(st_FILELOADINFO*, int32*, int32);
    int32 (*readMFloats)(st_FILELOADINFO*, float32*, int32);
    int32 (*readMDoubles)(st_FILELOADINFO*, float64*, int32);
    int32 (*readIShorts)(st_FILELOADINFO*, int16*, int32);
    int32 (*readILongs)(st_FILELOADINFO*, int32*, int32);
    int32 (*readIFloats)(st_FILELOADINFO*, float32*, int32);
    int32 (*readIDoubles)(st_FILELOADINFO*, float64*, int32);
    int32 (*skipBytes)(st_FILELOADINFO*, int32);
    int32 (*seekSpot)(st_FILELOADINFO*, int32);
    void (*setDoubleBuf)(st_FILELOADINFO*, char*, int32);
    void (*discardDblBuf)(st_FILELOADINFO*);
    int32 (*asyncIRead)(st_FILELOADINFO*, int32, char*, int32, int32);
    int32 (*asyncMRead)(st_FILELOADINFO*, int32, char*, int32, int32);
    en_BIO_ASYNC_ERRCODES (*asyncReadStatus)(st_FILELOADINFO*);
    uint32 lockid;
    en_FIOERRCODES error;
    uint32 basesector;
    void* privdata;
    void* xtradata;
    void* asyndata;
    int32 filesize;
    int32 remain;
    int32 position;
};

st_FILELOADINFO* xBinioLoadCreate(const char* filename);

#endif