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
    S32 (*readBytes)(st_FILELOADINFO*, char*, S32);
    S32 (*readMShorts)(st_FILELOADINFO*, S16*, S32);
    S32 (*readMLongs)(st_FILELOADINFO*, S32*, S32);
    S32 (*readMFloats)(st_FILELOADINFO*, F32*, S32);
    S32 (*readMDoubles)(st_FILELOADINFO*, F64*, S32);
    S32 (*readIShorts)(st_FILELOADINFO*, S16*, S32);
    S32 (*readILongs)(st_FILELOADINFO*, S32*, S32);
    S32 (*readIFloats)(st_FILELOADINFO*, F32*, S32);
    S32 (*readIDoubles)(st_FILELOADINFO*, F64*, S32);
    S32 (*skipBytes)(st_FILELOADINFO*, S32);
    S32 (*seekSpot)(st_FILELOADINFO*, S32);
    void (*setDoubleBuf)(st_FILELOADINFO*, char*, S32);
    void (*discardDblBuf)(st_FILELOADINFO*);
    S32 (*asyncIRead)(st_FILELOADINFO*, S32, char*, S32, S32);
    S32 (*asyncMRead)(st_FILELOADINFO*, S32, char*, S32, S32);
    en_BIO_ASYNC_ERRCODES (*asyncReadStatus)(st_FILELOADINFO*);
    U32 lockid;
    en_FIOERRCODES error;
    U32 basesector;
    void* privdata;
    void* xtradata;
    void* asyndata;
    S32 filesize;
    S32 remain;
    S32 position;
};

struct st_FILESAVEINFO
{
    void (*destroy)(st_FILESAVEINFO*);
    S32 (*writeBytes)(st_FILESAVEINFO*, char*, S32);
    S32 (*writeMShorts)(st_FILESAVEINFO*, S16*, S32);
    S32 (*writeMLongs)(st_FILESAVEINFO*, S32*, S32);
    S32 (*writeMFloats)(st_FILESAVEINFO*, F32*, S32);
    S32 (*writeMDoubles)(st_FILESAVEINFO*, F64*, S32);
    S32 (*writeIShorts)(st_FILESAVEINFO*, S16*, S32);
    S32 (*writeILongs)(st_FILESAVEINFO*, S32*, S32);
    S32 (*writeIFloats)(st_FILESAVEINFO*, F32*, S32);
    S32 (*writeIDoubles)(st_FILESAVEINFO*, F64*, S32);
    S32 (*seekSpot)(st_FILESAVEINFO*, S32);
    S32 length;
    S32 position;
    en_FIOERRCODES error;
    U32 lockid;
    void* privdata;
    void* xtradata;
};

st_FILELOADINFO* xBinioLoadCreate(const char* filename);

#endif
