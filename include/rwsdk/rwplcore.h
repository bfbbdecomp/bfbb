#ifndef RWPLCORE_H
#define RWPLCORE_H

#include <stdarg.h>
#include <stddef.h>

#define rwBIGENDIAN

typedef long RwFixed;
typedef int RwInt32;
typedef unsigned int RwUInt32;
typedef short RwInt16;
typedef unsigned short RwUInt16;
typedef unsigned char RwUInt8;
typedef signed char RwInt8;

typedef char RwChar;
typedef float RwReal;
typedef RwInt32 RwBool;

struct RwUInt64
{
    RwUInt32 top;
    RwUInt32 bottom;
};

struct RwInt64
{
    RwInt32 top;
    RwUInt32 bottom;
};

struct RwUInt128
{
    RwUInt64 top;
    RwUInt64 bottom;
};

struct RwInt128
{
    RwInt64 top;
    RwUInt64 bottom;
};

#define RwInt32MAXVAL 0x7FFFFFFF
#define RwInt32MINVAL 0x80000000
#define RwUInt32MAXVAL 0xFFFFFFFF
#define RwUInt32MINVAL 0x00000000
#define RwRealMAXVAL (RwReal)(3.40282347e+38)
#define RwRealMINVAL (RwReal)(1.17549435e-38)
#define RwInt16MAXVAL 0x7FFF
#define RwInt16MINVAL 0x8000
#define RwUInt16MAXVAL 0xFFFF
#define RwUInt16MINVAL 0x0000

#include <math.h>

#define _RW_C1 ((float)4.1666667908e-02)
#define _RW_C2 ((float)-1.3888889225e-03)
#define _RW_C3 ((float)2.4801587642e-05)
#define _RW_C4 ((float)-2.7557314297e-07)
#define _RW_C5 ((float)2.0875723372e-09)
#define _RW_C6 ((float)-1.1359647598e-11)
#define _RW_S1 ((float)-1.6666667163e-01)
#define _RW_S2 ((float)8.3333337680e-03)
#define _RW_S3 ((float)-1.9841270114e-04)
#define _RW_S4 ((float)2.7557314297e-06)
#define _RW_S5 ((float)-2.5050759689e-08)
#define _RW_S6 ((float)1.5896910177e-10)
#define _RW_one ((float)1.0000000000e+00)
#define _RW_pS0 ((float)1.6666667163e-01)
#define _RW_pS1 ((float)-3.2556581497e-01)
#define _RW_pS2 ((float)2.0121252537e-01)
#define _RW_pS3 ((float)-4.0055535734e-02)
#define _RW_pS4 ((float)7.9153501429e-04)
#define _RW_pS5 ((float)3.4793309169e-05)
#define _RW_pi ((float)3.1415925026e+00)
#define _RW_pi_tol ((float)0.0312500000e+00)
#define _RW_pio2_hi ((float)1.5707962513e+00)
#define _RW_pio2_lo ((float)7.5497894159e-08)
#define _RW_qS1 ((float)-2.4033949375e+00)
#define _RW_qS2 ((float)2.0209457874e+00)
#define _RW_qS3 ((float)-6.8828397989e-01)
#define _RW_qS4 ((float)7.7038154006e-02)

#define RwCosMinusPiToPiMacro(result, x)                                                           \
    MACRO_START                                                                                    \
    {                                                                                              \
        const float z = x * x;                                                                     \
        const float r =                                                                            \
            (z *                                                                                   \
             (_RW_C1 + z * (_RW_C2 + z * (_RW_C3 + z * (_RW_C4 + z * (_RW_C5 + z * _RW_C6))))));   \
        result = (_RW_one - ((float)0.5 * z - (z * r)));                                           \
    }                                                                                              \
    MACRO_STOP

#define RwSinMinusPiToPiMacro(result, x)                                                           \
    do                                                                                             \
    {                                                                                              \
        const float z = x * x;                                                                     \
        const float v = z * x;                                                                     \
        const float r = (_RW_S2 + z * (_RW_S3 + z * (_RW_S4 + z * (_RW_S5 + z * _RW_S6))));        \
        result = x + v * (_RW_S1 + z * r);                                                         \
    } while (0)

#define rwLIBRARYBASEVERSION 0x31000
#define rwLIBRARYWARNVERSION 0x33000
#define rwLIBRARYCURRENTVERSION 0x35000

#define RWFORCEENUMSIZEINT ((RwInt32)((~((RwUInt32)0)) >> 1))

#ifndef MACRO_START
#define MACRO_START do
#endif

#ifndef MACRO_STOP
#define MACRO_STOP while (0)
#endif

#ifdef NULL
#undef NULL
#endif
#define NULL 0

#ifdef FALSE
#undef FALSE
#endif
#define FALSE 0

#ifdef TRUE
#undef TRUE
#endif
#define TRUE !FALSE

union RwSplitBits
{
    RwReal nReal;
    volatile RwInt32 nInt;
    volatile RwUInt32 nUInt;
};

struct RwSplitFixed
{
    RwInt16 integral;
    RwUInt16 fractional;
};

union RwUnionReal
{
    RwReal real;
    float floating;
    RwFixed fixed;
    RwSplitFixed splitfixed;
};

struct RwV2d
{
    RwReal x;
    RwReal y;
};

struct RwV3d
{
    RwReal x;
    RwReal y;
    RwReal z;

    RwV3d& operator=(const RwV3d&); // temp
};

struct RwV4dTag
{
    RwReal x;
    RwReal y;
    RwReal z;
    RwReal w;
};

struct RwRect
{
    RwInt32 x;
    RwInt32 y;
    RwInt32 w;
    RwInt32 h;
};

struct RwSphere
{
    RwV3d center;
    RwReal radius;
};

#define RwSphereAssign(_target, _source) (*(_target) = *(_source))

struct RwLine
{
    RwV3d start;
    RwV3d end;
};

#define RwLineAssign(_target, _source) (*(_target) = *(_source))

enum RwTextureCoordinateIndex
{
    rwNARWTEXTURECOORDINATEINDEX = 0,
    rwTEXTURECOORDINATEINDEX0,
    rwTEXTURECOORDINATEINDEX1,
    rwTEXTURECOORDINATEINDEX2,
    rwTEXTURECOORDINATEINDEX3,
    rwTEXTURECOORDINATEINDEX4,
    rwTEXTURECOORDINATEINDEX5,
    rwTEXTURECOORDINATEINDEX6,
    rwTEXTURECOORDINATEINDEX7,
    rwTEXTURECOORDINATEINDEXFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RwTexCoords
{
    RwReal u;
    RwReal v;
};

struct RwSLLink
{
    RwSLLink* next;
};

#define rwSLLinkGetData(link, type, entry) ((type*)(((RwUInt8*)(link)) - offsetof(type, entry)))
#define rwSLLinkGetConstData(link, type, entry)                                                    \
    ((const type*)(((const RwUInt8*)(link)) - offsetof(type, entry)))
#define rwSLLinkInitialize(linkvar) (linkvar)->next = NULL;
#define rwSLLinkGetNext(linkvar) ((linkvar)->next)

struct RwSingleList
{
    RwSLLink link;
};

#define rwSingleListInitialize(list) (list)->link.next = NULL;
#define rwSingleListEmpty(list) (((list)->link.next) == NULL)
#define rwSingleListAddSLLink(list, linkvar)                                                       \
    ((linkvar)->next = (list)->link.next, (list)->link.next = (linkvar))
#define rwSingleListGetFirstSLLink(list) ((list)->link.next)
#define rwSingleListGetTerminator(list) (NULL)

struct RwLLLink
{
    RwLLLink* next;
    RwLLLink* prev;
};

#define rwLLLinkGetData(linkvar, type, entry)                                                      \
    ((type*)(((RwUInt8*)(linkvar)) - offsetof(type, entry)))
#define rwLLLinkGetConstData(linkvar, type, entry)                                                 \
    ((const type*)(((const RwUInt8*)(linkvar)) - offsetof(type, entry)))
#define rwLLLinkGetNext(linkvar) ((linkvar)->next)
#define rwLLLinkGetPrevious(linkvar) ((linkvar)->prev)
#define rwLLLinkInitialize(linkvar)                                                                \
    ((linkvar)->prev = (RwLLLink*)NULL, (linkvar)->next = (RwLLLink*)NULL)
#define rwLLLinkAttached(linkvar) ((linkvar)->next)

struct RwLinkList
{
    RwLLLink link;
};

#define rwLinkListInitialize(list)                                                                 \
    ((list)->link.next = ((RwLLLink*)(list)), (list)->link.prev = ((RwLLLink*)(list)))
#define rwLinkListEmpty(list) (((list)->link.next) == (&(list)->link))
#define rwLinkListAddLLLink(list, linkvar)                                                         \
    ((linkvar)->next = (list)->link.next, (linkvar)->prev = (&(list)->link),                       \
     ((list)->link.next)->prev = (linkvar), (list)->link.next = (linkvar))
#define rwLinkListRemoveLLLink(linkvar)                                                            \
    (((linkvar)->prev)->next = (linkvar)->next, ((linkvar)->next)->prev = (linkvar)->prev)
#define rwLinkListGetFirstLLLink(list) ((list)->link.next)
#define rwLinkListGetLastLLLink(list) ((list)->link.prev)
#define rwLinkListGetTerminator(list) (&((list)->link))

struct RwSurfaceProperties
{
    RwReal ambient;
    RwReal specular;
    RwReal diffuse;
};

#define RwSurfacePropertiesAssign(_target, _source) (*(_target) = *(_source))

#ifndef offsetof
#define offsetof(type, member) ((size_t)((RwUInt8*)&((type*)0)->member - (RwUInt8*)((type*)0)))
#endif

#ifndef rwPI
#define rwPI ((RwReal)(3.1415926535f))
#define rwPIOVER2 (rwPI / (RwReal)(2.0f))
#endif
#define RWRGBALONG(r, g, b, a) ((RwUInt32)(((a) << 24) | ((r) << 16) | ((g) << 8) | (b)))

struct RwPlane
{
    RwV3d normal;
    RwReal distance;
};

enum RwPluginVendor
{
    rwVENDORID_CORE = 0x000000L,
    rwVENDORID_CRITERIONTK = 0x000001L,
    rwVENDORID_REDLINERACER = 0x000002L,
    rwVENDORID_CSLRD = 0x000003L,
    rwVENDORID_CRITERIONINT = 0x000004L,
    rwVENDORID_CRITERIONWORLD = 0x000005L,
    rwVENDORID_BETA = 0x000006L,
    rwVENDORID_CRITERIONRM = 0x000007L,
    rwVENDORID_CRITERIONRWA = 0x000008L,
    rwPLUGINVENDORFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwCorePluginID
{
    rwID_NAOBJECT = 0x00,
    rwID_STRUCT = 0x01,
    rwID_STRING = 0x02,
    rwID_EXTENSION = 0x03,
    rwID_CAMERA = 0x05,
    rwID_TEXTURE = 0x06,
    rwID_MATERIAL = 0x07,
    rwID_MATLIST = 0x08,
    rwID_ATOMICSECT = 0x09,
    rwID_PLANESECT = 0x0A,
    rwID_WORLD = 0x0B,
    rwID_SPLINE = 0x0C,
    rwID_MATRIX = 0x0D,
    rwID_FRAMELIST = 0x0E,
    rwID_GEOMETRY = 0x0F,
    rwID_CLUMP = 0x10,
    rwID_LIGHT = 0x12,
    rwID_UNICODESTRING = 0x13,
    rwID_ATOMIC = 0x14,
    rwID_TEXTURENATIVE = 0x15,
    rwID_TEXDICTIONARY = 0x16,
    rwID_ANIMDATABASE = 0x17,
    rwID_IMAGE = 0x18,
    rwID_SKINANIMATION = 0x19,
    rwID_GEOMETRYLIST = 0x1A,
    rwID_HANIMANIMATION = 0x1B,
    rwID_TEAM = 0x1C,
    rwID_CROWD = 0x1D,
    rwID_DMORPHANIMATION = 0x1E,
    rwID_RIGHTTORENDER = 0x1f,
    rwID_MTEFFECTNATIVE = 0x20,
    rwID_MTEFFECTDICT = 0x21,
    rwID_TEAMDICTIONARY = 0x22,
    rwID_PITEXDICTIONARY = 0x23,
    rwID_TOC = 0x24,
    rwID_PRTSTDGLOBALDATA = 0x25,
    rwID_ALTPIPE = 0x26,
    rwID_PIPEDS = 0x27,
    rwID_PATCHMESH = 0x28,
    rwID_COREPLUGINIDMAX = 0x29,
    rwCOREPLUGINIDFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwCriterionPluginID
{
    rwID_COREPLUGIN = 0x01,
    rwID_WORLDPLUGIN = 0x02,
    rwID_TOOLPLUGIN = 0x03,
    rwID_TOOL2PLUGIN = 0x04,
    rwCRITERIONPLUGINIDFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwPlatformID
{
    rwID_PCD3D7 = 1,
    rwID_PCOGL,
    rwID_MAC,
    rwID_PS2,
    rwID_XBOX,
    rwID_GAMECUBE,
    rwID_SOFTRAS,
    rwID_PCD3D8,
    rwPLATFROMIDFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RwObject
{
    RwUInt8 type;
    RwUInt8 subType;
    RwUInt8 flags;
    RwUInt8 privateFlags;
    void* parent;
};

typedef RwObject* (*RwObjectCallBack)(RwObject* object, void* data);

#define rwObjectCopy(d, s)                                                                         \
    MACRO_START                                                                                    \
    {                                                                                              \
        ((RwObject*)(d))->type = ((const RwObject*)(s))->type;                                     \
        ((RwObject*)(d))->subType = ((const RwObject*)(s))->subType;                               \
        ((RwObject*)(d))->flags = ((const RwObject*)(s))->flags;                                   \
        ((RwObject*)(d))->privateFlags = ((const RwObject*)(s))->privateFlags;                     \
        ((RwObject*)(d))->parent = NULL;                                                           \
    }                                                                                              \
    MACRO_STOP

#define rwObjectInitialize(o, t, s)                                                                \
    MACRO_START                                                                                    \
    {                                                                                              \
        ((RwObject*)(o))->type = (RwUInt8)(t);                                                     \
        ((RwObject*)(o))->subType = (RwUInt8)(s);                                                  \
        ((RwObject*)(o))->flags = 0;                                                               \
        ((RwObject*)(o))->privateFlags = 0;                                                        \
        ((RwObject*)(o))->parent = NULL;                                                           \
    }                                                                                              \
    MACRO_STOP

#define RwObjectGetType(o) (((const RwObject*)(o))->type)
#define rwObjectSetType(o, t) (((RwObject*)(o))->type) = (RwUInt8)(t)
#define rwObjectGetSubType(o) (((const RwObject*)(o))->subType)
#define rwObjectSetSubType(o, t) (((RwObject*)(o))->subType) = (RwUInt8)(t)
#define rwObjectGetFlags(o) (((const RwObject*)(o))->flags)
#define rwObjectSetFlags(o, f) (((RwObject*)(o))->flags) = (RwUInt8)(f)
#define rwObjectTestFlags(o, f) ((((const RwObject*)(o))->flags) & (RwUInt8)(f))
#define rwObjectGetPrivateFlags(c) (((const RwObject*)(c))->privateFlags)
#define rwObjectSetPrivateFlags(c, f) (((RwObject*)(c))->privateFlags) = (RwUInt8)(f)
#define rwObjectTestPrivateFlags(c, flag) ((((const RwObject*)(c))->privateFlags) & (RwUInt8)(flag))
#define rwObjectGetParent(object) (((const RwObject*)(object))->parent)
#define rwObjectSetParent(c, p) (((RwObject*)(c))->parent) = (void*)(p)

#define rwsprintf RWSRCGLOBAL(stringFuncs).vecSprintf
#define rwvsprintf RWSRCGLOBAL(stringFuncs).vecVsprintf
#define rwstrcpy RWSRCGLOBAL(stringFuncs).vecStrcpy
#define rwstrncpy RWSRCGLOBAL(stringFuncs).vecStrncpy
#define rwstrcat RWSRCGLOBAL(stringFuncs).vecStrcat
#define rwstrncat RWSRCGLOBAL(stringFuncs).vecStrncat
#define rwstrrchr RWSRCGLOBAL(stringFuncs).vecStrrchr
#define rwstrchr RWSRCGLOBAL(stringFuncs).vecStrchr
#define rwstrstr RWSRCGLOBAL(stringFuncs).vecStrstr
#define rwstrcmp RWSRCGLOBAL(stringFuncs).vecStrcmp
#define rwstrncmp RWSRCGLOBAL(stringFuncs).vecStrncmp
#define rwstricmp RWSRCGLOBAL(stringFuncs).vecStricmp
#define rwstrlen RWSRCGLOBAL(stringFuncs).vecStrlen
#define rwstrupr RWSRCGLOBAL(stringFuncs).vecStrupr
#define rwstrlwr RWSRCGLOBAL(stringFuncs).vecStrlwr
#define rwstrtok RWSRCGLOBAL(stringFuncs).vecStrtok
#define rwsscanf RWSRCGLOBAL(stringFuncs).vecSscanf

typedef int (*vecSprintfFunc)(RwChar* buffer, const RwChar* format, ...);
typedef int (*vecVsprintfFunc)(RwChar* buffer, const RwChar* format, va_list argptr);
typedef RwChar* (*vecStrcpyFunc)(RwChar* dest, const RwChar* srce);
typedef RwChar* (*vecStrncpyFunc)(RwChar* dest, const RwChar* srce, size_t size);
typedef RwChar* (*vecStrcatFunc)(RwChar* dest, const RwChar* srce);
typedef RwChar* (*vecStrncatFunc)(RwChar* dest, const RwChar* srce, size_t size);
typedef RwChar* (*vecStrrchrFunc)(const RwChar* string, int findThis);
typedef RwChar* (*vecStrchrFunc)(const RwChar* string, int findThis);
typedef RwChar* (*vecStrstrFunc)(const RwChar* string, const RwChar* findThis);
typedef int (*vecStrcmpFunc)(const RwChar* string1, const RwChar* string2);
typedef int (*vecStrncmpFunc)(const RwChar* string1, const RwChar* string2, size_t max_size);
typedef int (*vecStricmpFunc)(const RwChar* string1, const RwChar* string2);
typedef size_t (*vecStrlenFunc)(const RwChar* string);
typedef RwChar* (*vecStruprFunc)(RwChar* string);
typedef RwChar* (*vecStrlwrFunc)(RwChar* string);
typedef RwChar* (*vecStrtokFunc)(RwChar* string, const RwChar* delimit);
typedef int (*vecSscanfFunc)(const RwChar* buffer, const RwChar* format, ...);

struct RwStringFunctions
{
    vecSprintfFunc vecSprintf;
    vecVsprintfFunc vecVsprintf;
    vecStrcpyFunc vecStrcpy;
    vecStrncpyFunc vecStrncpy;
    vecStrcatFunc vecStrcat;
    vecStrncatFunc vecStrncat;
    vecStrrchrFunc vecStrrchr;
    vecStrchrFunc vecStrchr;
    vecStrstrFunc vecStrstr;
    vecStrcmpFunc vecStrcmp;
    vecStrncmpFunc vecStrncmp;
    vecStricmpFunc vecStricmp;
    vecStrlenFunc vecStrlen;
    vecStruprFunc vecStrupr;
    vecStrlwrFunc vecStrlwr;
    vecStrtokFunc vecStrtok;
    vecSscanfFunc vecSscanf;
};

#define RwMalloc(_s) ((RWSRCGLOBAL(memoryFuncs).rwmalloc)((_s)))
#define RwFree(_p) ((RWSRCGLOBAL(memoryFuncs).rwfree)((_p)))
#define RwCalloc(_n, _s) ((RWSRCGLOBAL(memoryFuncs).rwcalloc)((_n), (_s)))
#define RwRealloc(_p, _s) ((RWSRCGLOBAL(memoryFuncs).rwrealloc)((_p), (_s)))

struct RwMemoryFunctions
{
    void* (*rwmalloc)(size_t size);
    void (*rwfree)(void* mem);
    void* (*rwrealloc)(void* mem, size_t newSize);
    void* (*rwcalloc)(size_t numObj, size_t sizeObj);
};

struct RwFreeList
{
    RwUInt32 entrySize;
    RwUInt32 entriesPerBlock;
    RwUInt32 heapSize;
    RwUInt32 alignment;
    RwLinkList blockList;
    RwUInt32 flags;
    RwLLLink link;
};

typedef void (*RwFreeListCallBack)(void* pMem, void* pData);
typedef void* (*RwMemoryAllocFn)(RwFreeList* fl);
typedef RwFreeList* (*RwMemoryFreeFn)(RwFreeList* fl, void* pData);

enum RwStreamType
{
    rwNASTREAM = 0,
    rwSTREAMFILE,
    rwSTREAMFILENAME,
    rwSTREAMMEMORY,
    rwSTREAMCUSTOM,
    rwSTREAMTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwStreamAccessType
{
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD,
    rwSTREAMWRITE,
    rwSTREAMAPPEND,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RwStreamMemory
{
    RwUInt32 position;
    RwUInt32 nSize;
    RwUInt8* memBlock;
};

union RwStreamFile
{
    void* fpFile;
    const void* constfpFile;
};

typedef RwBool (*rwCustomStreamFnClose)(void* data);
typedef RwUInt32 (*rwCustomStreamFnRead)(void* data, void* buffer, RwUInt32 length);
typedef RwBool (*rwCustomStreamFnWrite)(void* data, const void* buffer, RwUInt32 length);
typedef RwBool (*rwCustomStreamFnSkip)(void* data, RwUInt32 offset);

struct RwStreamCustom
{
    rwCustomStreamFnClose sfnclose;
    rwCustomStreamFnRead sfnread;
    rwCustomStreamFnWrite sfnwrite;
    rwCustomStreamFnSkip sfnskip;
    void* data;
};

union RwStreamUnion
{
    RwStreamMemory memory;
    RwStreamFile file;
    RwStreamCustom custom;
};

struct RwStream
{
    RwStreamType type;
    RwStreamAccessType accessType;
    RwInt32 position;
    RwStreamUnion Type;
    RwBool rwOwned;
};

typedef void* (*RwPluginObjectConstructor)(void* object, RwInt32 offsetInObject,
                                           RwInt32 sizeInObject);
typedef void* (*RwPluginObjectDestructor)(void* object, RwInt32 offsetInObject,
                                          RwInt32 sizeInObject);
typedef void* (*RwPluginObjectCopy)(void* dstObject, const void* srcObject, RwInt32 offsetInObject,
                                    RwInt32 sizeInObject);
typedef RwStream* (*RwPluginDataChunkReadCallBack)(RwStream* stream, RwInt32 binaryLength,
                                                   void* object, RwInt32 offsetInObject,
                                                   RwInt32 sizeInObject);
typedef RwStream* (*RwPluginDataChunkWriteCallBack)(RwStream* stream, RwInt32 binaryLength,
                                                    const void* object, RwInt32 offsetInObject,
                                                    RwInt32 sizeInObject);
typedef RwInt32 (*RwPluginDataChunkGetSizeCallBack)(const void* object, RwInt32 offsetInObject,
                                                    RwInt32 sizeInObject);
typedef RwBool (*RwPluginDataChunkAlwaysCallBack)(void* object, RwInt32 offsetInObject,
                                                  RwInt32 sizeInObject);
typedef RwBool (*RwPluginDataChunkRightsCallBack)(void* object, RwInt32 offsetInObject,
                                                  RwInt32 sizeInObject, RwUInt32 extraData);

typedef struct RwPluginRegEntry;

struct RwPluginRegistry
{
    RwInt32 sizeOfStruct;
    RwInt32 origSizeOfStruct;
    RwInt32 maxSizeOfStruct;
    RwInt32 staticAlloc;
    RwPluginRegEntry* firstRegEntry;
    RwPluginRegEntry* lastRegEntry;
};

typedef void* (*RwPluginErrorStrCallBack)(void*);

struct RwPluginRegEntry
{
    RwInt32 offset;
    RwInt32 size;
    RwUInt32 pluginID;
    RwPluginDataChunkReadCallBack readCB;
    RwPluginDataChunkWriteCallBack writeCB;
    RwPluginDataChunkGetSizeCallBack getSizeCB;
    RwPluginDataChunkAlwaysCallBack alwaysCB;
    RwPluginDataChunkRightsCallBack rightsCB;
    RwPluginObjectConstructor constructCB;
    RwPluginObjectDestructor destructCB;
    RwPluginObjectCopy copyCB;
    RwPluginErrorStrCallBack errStrCB;
    RwPluginRegEntry* nextRegEntry;
    RwPluginRegEntry* prevRegEntry;
    RwPluginRegistry* parentRegistry;
};

enum RwOpCombineType
{
    rwCOMBINEREPLACE = 0,
    rwCOMBINEPRECONCAT,
    rwCOMBINEPOSTCONCAT,
    rwOPCOMBINETYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwMatrixType
{
    rwMATRIXTYPENORMAL = 0x00000001,
    rwMATRIXTYPEORTHOGONAL = 0x00000002,
    rwMATRIXTYPEORTHONORMAL = 0x00000003,
    rwMATRIXTYPEMASK = 0x00000003,
    rwMATRIXTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwMatrixFlag
{
    rwMATRIXINTERNALIDENTITY = 0x00020000,
    rwMATRIXFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwMatrixOptimizations
{
    rwMATRIXOPTIMIZE_IDENTITY = 0x00020000,
    rwMATRIXOPTIMIZATIONSFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RwMatrixTag
{
    RwV3d right;
    RwUInt32 flags;

    // Offset: 0x10
    RwV3d up;
    RwUInt32 pad1;

    // Offset: 0x20
    RwV3d at;
    RwUInt32 pad2;

    // Offset: 0x30
    RwV3d pos;
    RwUInt32 pad3;
};

typedef struct RwMatrixTag RwMatrix;

#define RwMatrixCopyMacro(_target, _source) (*(_target) = *(_source))

struct RwMatrixTolerance
{
    RwReal Normal;
    RwReal Orthogonal;
    RwReal Identity;
};

#define RwMatrixGetRight(m) (&(m)->right)
#define RwMatrixGetUp(m) (&(m)->up)
#define RwMatrixGetAt(m) (&(m)->at)
#define RwMatrixGetPos(m) (&(m)->pos)

typedef RwBool (*rwFnFexist)(const RwChar* name);
typedef void* (*rwFnFopen)(const RwChar* name, const RwChar* mode);
typedef int (*rwFnFclose)(void* fptr);
typedef size_t (*rwFnFread)(void* addr, size_t size, size_t count, void* fptr);
typedef size_t (*rwFnFwrite)(const void* addr, size_t size, size_t count, void* fptr);
typedef RwChar* (*rwFnFgets)(RwChar* buffer, int maxLen, void* fptr);
typedef int (*rwFnFputs)(const RwChar* buffer, void* fptr);
typedef int (*rwFnFeof)(void* fptr);
typedef int (*rwFnFseek)(void* fptr, long offset, int origin);
typedef int (*rwFnFflush)(void* fptr);
typedef int (*rwFnFtell)(void* fptr);

struct RwFileFunctions
{
    rwFnFexist rwfexist;
    rwFnFopen rwfopen;
    rwFnFclose rwfclose;
    rwFnFread rwfread;
    rwFnFwrite rwfwrite;
    rwFnFgets rwfgets;
    rwFnFputs rwfputs;
    rwFnFeof rwfeof;
    rwFnFseek rwfseek;
    rwFnFflush rwfflush;
    rwFnFtell rwftell;
};

struct RwError
{
    RwInt32 pluginID;
    RwInt32 errorCode;
};

struct RwRGBAReal
{
    RwReal red;
    RwReal green;
    RwReal blue;
    RwReal alpha;
};

#define RwRGBARealAssign(_target, _source) (*(_target) = *(_source))

struct RwRGBA
{
    RwUInt8 red;
    RwUInt8 green;
    RwUInt8 blue;
    RwUInt8 alpha;

    RwRGBA& operator=(const RwRGBA&); // temp
};

#define RwRGBAAssign(_target, _source) (*(_target) = *(_source))

struct rwGameCube2DVertex
{
    RwReal x;
    RwReal y;
    RwReal z;
    RwRGBA emissiveColor;
    RwReal u;
    RwReal v;

    rwGameCube2DVertex& operator=(const rwGameCube2DVertex&); // temp
};

typedef rwGameCube2DVertex RwIm2DVertex;
typedef RwUInt16 RxVertexIndex;
typedef RxVertexIndex RwImVertexIndex;

#define RwIm2DVertexSetCameraX(vert, camx) /* Nothing */
#define RwIm2DVertexSetCameraY(vert, camy) /* Nothing */
#define RwIm2DVertexSetCameraZ(vert, camz) /* Nothing */
#define RwIm2DVertexSetRecipCameraZ(vert, recipz) /* Nothing */
#define RwIm2DVertexGetCameraX(vert) (cause an error)
#define RwIm2DVertexGetCameraY(vert) (cause an error)
#define RwIm2DVertexGetCameraZ(vert) (cause an error)
#define RwIm2DVertexGetRecipCameraZ(vert) (cause an error)
#define RwIm2DVertexSetScreenX(vert, scrnx) ((vert)->x = (scrnx))
#define RwIm2DVertexSetScreenY(vert, scrny) ((vert)->y = (scrny))
#define RwIm2DVertexSetScreenZ(vert, scrnz) ((vert)->z = (scrnz))
#define RwIm2DVertexGetScreenX(vert) ((vert)->x)
#define RwIm2DVertexGetScreenY(vert) ((vert)->y)
#define RwIm2DVertexGetScreenZ(vert) ((vert)->z)
#define RwIm2DVertexSetU(vert, texU, recipz) ((vert)->u = (texU))
#define RwIm2DVertexSetV(vert, texV, recipz) ((vert)->v = (texV))
#define RwIm2DVertexGetU(vert) ((vert)->u)
#define RwIm2DVertexGetV(vert) ((vert)->v)

/* Modify the luminance stuff */
#define RwIm2DVertexSetRealRGBA(vert, r, g, b, a)                                                  \
    MACRO_START                                                                                    \
    {                                                                                              \
        (vert)->emissiveColor.red = (RwUInt8)r;                                                    \
        (vert)->emissiveColor.green = (RwUInt8)g;                                                  \
        (vert)->emissiveColor.blue = (RwUInt8)b;                                                   \
        (vert)->emissiveColor.alpha = (RwUInt8)a;                                                  \
    }                                                                                              \
    MACRO_STOP

#define RwIm2DVertexSetIntRGBA(vert, r, g, b, a)                                                   \
    MACRO_START                                                                                    \
    {                                                                                              \
        (vert)->emissiveColor.red = r;                                                             \
        (vert)->emissiveColor.green = g;                                                           \
        (vert)->emissiveColor.blue = b;                                                            \
        (vert)->emissiveColor.alpha = a;                                                           \
    }                                                                                              \
    MACRO_STOP

#define RwIm2DVertexGetRed(vert) ((vert)->emissiveColor.red)
#define RwIm2DVertexGetGreen(vert) ((vert)->emissiveColor.green)
#define RwIm2DVertexGetBlue(vert) ((vert)->emissiveColor.blue)
#define RwIm2DVertexGetAlpha(vert) ((vert)->emissiveColor.alpha)

#define RwIm2DVertexCopyRGBA(dst, src) ((dst)->emissiveColor = (src)->emissiveColor)

#if (!defined(RwV3dAssignMacro))
#define RwV3dAssignMacro(_target, _source) (*(_target) = *(_source))
#endif /* (!defined(RwV3dAssignMacro)) */

#define RwV3dAddMacro(o, a, b)                                                                     \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x = (((a)->x) + ((b)->x));                                                            \
        (o)->y = (((a)->y) + ((b)->y));                                                            \
        (o)->z = (((a)->z) + ((b)->z));                                                            \
    }                                                                                              \
    MACRO_STOP

#define RwV3dSubMacro(o, a, b)                                                                     \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x = (((a)->x) - ((b)->x));                                                            \
        (o)->y = (((a)->y) - ((b)->y));                                                            \
        (o)->z = (((a)->z) - ((b)->z));                                                            \
    }                                                                                              \
    MACRO_STOP

#define RwV3dScaleMacro(o, a, s)                                                                   \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x = (((a)->x) * ((s)));                                                               \
        (o)->y = (((a)->y) * ((s)));                                                               \
        (o)->z = (((a)->z) * ((s)));                                                               \
    }                                                                                              \
    MACRO_STOP

#define RwV3dIncrementScaledMacro(o, a, s)                                                         \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x += (((a)->x) * ((s)));                                                              \
        (o)->y += (((a)->y) * ((s)));                                                              \
        (o)->z += (((a)->z) * ((s)));                                                              \
    }                                                                                              \
    MACRO_STOP

#define RwV3dNegateMacro(o, a)                                                                     \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x = -(a)->x;                                                                          \
        (o)->y = -(a)->y;                                                                          \
        (o)->z = -(a)->z;                                                                          \
    }                                                                                              \
    MACRO_STOP

#define RwV3dDotProductMacro(a, b)                                                                 \
    ((((((((a)->x) * ((b)->x))) + ((((a)->y) * ((b)->y))))) + ((((a)->z) * ((b)->z)))))

#define RwV3dCrossProductMacro(o, a, b)                                                            \
    MACRO_START                                                                                    \
    {                                                                                              \
        (o)->x = (((((a)->y) * ((b)->z))) - ((((a)->z) * ((b)->y))));                              \
        (o)->y = (((((a)->z) * ((b)->x))) - ((((a)->x) * ((b)->z))));                              \
        (o)->z = (((((a)->x) * ((b)->y))) - ((((a)->y) * ((b)->x))));                              \
    }                                                                                              \
    MACRO_STOP

#define _rwV3dNormalizeMacro(_result, _out, _in)                                                   \
    MACRO_START                                                                                    \
    {                                                                                              \
        RwReal length2 = RwV3dDotProductMacro(_in, _in);                                           \
        rwInvSqrtMacro(&(_result), length2);                                                       \
        RwV3dScaleMacro(_out, _in, _result);                                                       \
    }                                                                                              \
    MACRO_STOP

#define RwV3dNormalizeMacro(_result, _out, _in)                                                    \
    MACRO_START                                                                                    \
    {                                                                                              \
        RwReal length2 = RwV3dDotProductMacro((_in), (_in));                                       \
        RwReal recip;                                                                              \
                                                                                                   \
        rwSqrtInvSqrtMacro(&(_result), &recip, length2);                                           \
        RwV3dScaleMacro((_out), (_in), recip);                                                     \
    }                                                                                              \
    MACRO_STOP

#define RwV3dLengthMacro(_result, _in)                                                             \
    MACRO_START                                                                                    \
    {                                                                                              \
        (_result) = RwV3dDotProductMacro(_in, _in);                                                \
        rwSqrtMacro(&(_result), _result);                                                          \
    }                                                                                              \
    MACRO_STOP

enum RwRenderState
{
    rwRENDERSTATENARENDERSTATE = 0,
    rwRENDERSTATETEXTURERASTER,
    rwRENDERSTATETEXTUREADDRESS,
    rwRENDERSTATETEXTUREADDRESSU,
    rwRENDERSTATETEXTUREADDRESSV,
    rwRENDERSTATETEXTUREPERSPECTIVE,
    rwRENDERSTATEZTESTENABLE,
    rwRENDERSTATESHADEMODE,
    rwRENDERSTATEZWRITEENABLE,
    rwRENDERSTATETEXTUREFILTER,
    rwRENDERSTATESRCBLEND,
    rwRENDERSTATEDESTBLEND,
    rwRENDERSTATEVERTEXALPHAENABLE,
    rwRENDERSTATEBORDERCOLOR,
    rwRENDERSTATEFOGENABLE,
    rwRENDERSTATEFOGCOLOR,
    rwRENDERSTATEFOGTYPE,
    rwRENDERSTATEFOGDENSITY,
    rwRENDERSTATECULLMODE = 20,
    rwRENDERSTATESTENCILENABLE,
    rwRENDERSTATESTENCILFAIL,
    rwRENDERSTATESTENCILZFAIL,
    rwRENDERSTATESTENCILPASS,
    rwRENDERSTATESTENCILFUNCTION,
    rwRENDERSTATESTENCILFUNCTIONREF,
    rwRENDERSTATESTENCILFUNCTIONMASK,
    rwRENDERSTATESTENCILFUNCTIONWRITEMASK,
    rwRENDERSTATEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwShadeMode
{
    rwSHADEMODENASHADEMODE = 0,
    rwSHADEMODEFLAT,
    rwSHADEMODEGOURAUD,
    rwSHADEMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwTextureFilterMode
{
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST,
    rwFILTERLINEAR,
    rwFILTERMIPNEAREST,
    rwFILTERMIPLINEAR,
    rwFILTERLINEARMIPNEAREST,
    rwFILTERLINEARMIPLINEAR,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#define rwTEXTUREFILTERMODEMASK 0x000000FF
#define rwTEXTUREADDRESSINGUMASK 0x00000F00
#define rwTEXTUREADDRESSINGVMASK 0x0000F000
#define rwTEXTUREADDRESSINGMASK (rwTEXTUREADDRESSINGUMASK | rwTEXTUREADDRESSINGVMASK)

enum RwFogType
{
    rwFOGTYPENAFOGTYPE,
    rwFOGTYPELINEAR,
    rwFOGTYPEEXPONENTIAL,
    rwFOGTYPEEXPONENTIAL2,
    rwFOGTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwBlendFunction
{
    rwBLENDNABLEND = 0,
    rwBLENDZERO,
    rwBLENDONE,
    rwBLENDSRCCOLOR,
    rwBLENDINVSRCCOLOR,
    rwBLENDSRCALPHA,
    rwBLENDINVSRCALPHA,
    rwBLENDDESTALPHA,
    rwBLENDINVDESTALPHA,
    rwBLENDDESTCOLOR,
    rwBLENDINVDESTCOLOR,
    rwBLENDSRCALPHASAT,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwTextureAddressMode
{
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP,
    rwTEXTUREADDRESSMIRROR,
    rwTEXTUREADDRESSCLAMP,
    rwTEXTUREADDRESSBORDER,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwStencilOperation
{
    rwSTENCILOPERATIONNASTENCILOPERATION = 0,
    rwSTENCILOPERATIONKEEP,
    rwSTENCILOPERATIONZERO,
    rwSTENCILOPERATIONREPLACE,
    rwSTENCILOPERATIONINCRSAT,
    rwSTENCILOPERATIONDECRSAT,
    rwSTENCILOPERATIONINVERT,
    rwSTENCILOPERATIONINCR,
    rwSTENCILOPERATIONDECR,
    rwSTENCILOPERATIONFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwStencilFunction
{
    rwSTENCILFUNCTIONNASTENCILFUNCTION = 0,
    rwSTENCILFUNCTIONNEVER,
    rwSTENCILFUNCTIONLESS,
    rwSTENCILFUNCTIONEQUAL,
    rwSTENCILFUNCTIONLESSEQUAL,
    rwSTENCILFUNCTIONGREATER,
    rwSTENCILFUNCTIONNOTEQUAL,
    rwSTENCILFUNCTIONGREATEREQUAL,
    rwSTENCILFUNCTIONALWAYS,
    rwSTENCILFUNCTIONFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwCullMode
{
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE,
    rwCULLMODECULLBACK,
    rwCULLMODECULLFRONT,
    rwCULLMODEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RwPrimitiveType
{
    rwPRIMTYPENAPRIMTYPE = 0,
    rwPRIMTYPELINELIST = 1,
    rwPRIMTYPEPOLYLINE = 2,
    rwPRIMTYPETRILIST = 3,
    rwPRIMTYPETRISTRIP = 4,
    rwPRIMTYPETRIFAN = 5,
    rwPRIMTYPEPOINTLIST = 6,
    rwPRIMITIVETYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

typedef RwBool (*RwStandardFunc)(void* pOut, void* pInOut, RwInt32 nI);

struct RwEngineOpenParams
{
    void* displayID;
};

struct RwGameCubeDeviceConfig
{
    /* unknown */
};

typedef RwBool (*RwSystemFunc)(RwInt32 nOption, void* pOut, void* pInOut, RwInt32 nIn);
typedef RwBool (*RwRenderStateSetFunction)(RwRenderState nState, void* pParam);
typedef RwBool (*RwRenderStateGetFunction)(RwRenderState nState, void* pParam);
typedef RwBool (*RwIm2DRenderLineFunction)(RwIm2DVertex* vertices, RwInt32 numVertices,
                                           RwInt32 vert1, RwInt32 vert2);
typedef RwBool (*RwIm2DRenderTriangleFunction)(RwIm2DVertex* vertices, RwInt32 numVertices,
                                               RwInt32 vert1, RwInt32 vert2, RwInt32 vert3);
typedef RwBool (*RwIm2DRenderPrimitiveFunction)(RwPrimitiveType primType, RwIm2DVertex* vertices,
                                                RwInt32 numVertices);
typedef RwBool (*RwIm2DRenderIndexedPrimitiveFunction)(RwPrimitiveType primType,
                                                       RwIm2DVertex* vertices, RwInt32 numVertices,
                                                       RwImVertexIndex* indices,
                                                       RwInt32 numIndices);
typedef RwBool (*RwIm3DRenderLineFunction)(RwInt32 vert1, RwInt32 vert2);
typedef RwBool (*RwIm3DRenderTriangleFunction)(RwInt32 vert1, RwInt32 vert2, RwInt32 vert3);
typedef RwBool (*RwIm3DRenderPrimitiveFunction)(RwPrimitiveType primType);
typedef RwBool (*RwIm3DRenderIndexedPrimitiveFunction)(RwPrimitiveType primtype,
                                                       RwImVertexIndex* indices,
                                                       RwInt32 numIndices);

struct RwDevice
{
    RwReal gammaCorrection;
    RwSystemFunc fpSystem;
    RwReal zBufferNear;
    RwReal zBufferFar;
    RwRenderStateSetFunction fpRenderStateSet;
    RwRenderStateGetFunction fpRenderStateGet;
    RwIm2DRenderLineFunction fpIm2DRenderLine;
    RwIm2DRenderTriangleFunction fpIm2DRenderTriangle;
    RwIm2DRenderPrimitiveFunction fpIm2DRenderPrimitive;
    RwIm2DRenderIndexedPrimitiveFunction fpIm2DRenderIndexedPrimitive;
    RwIm3DRenderLineFunction fpIm3DRenderLine;
    RwIm3DRenderTriangleFunction fpIm3DRenderTriangle;
    RwIm3DRenderPrimitiveFunction fpIm3DRenderPrimitive;
    RwIm3DRenderIndexedPrimitiveFunction fpIm3DRenderIndexedPrimitive;
};

struct RwMetrics
{
    RwUInt32 numTriangles;
    RwUInt32 numProcTriangles;
    RwUInt32 numVertices;
    RwUInt32 numTextureUploads;
    RwUInt32 sizeTextureUploads;
    RwUInt32 numResourceAllocs;
    void* devSpecificMetrics;
};

enum RwVideoModeFlag
{
    rwVIDEOMODEEXCLUSIVE = 0x0001,
    rwVIDEOMODEINTERLACE = 0x0002,
    rwVIDEOMODEFFINTERLACE = 0x0004,
    rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x0100,
    rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x0200,
    rwVIDEOMODE_XBOX_WIDESCREEN = 0x0100,
    rwVIDEOMODE_XBOX_PROGRESSIVE = 0x0200,
    rwVIDEOMODE_XBOX_FIELD = 0x0400,
    rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x0800,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RwVideoMode
{
    RwInt32 width;
    RwInt32 height;
    RwInt32 depth;
    RwVideoModeFlag flags;
    RwInt32 refRate;
    RwInt32 format;
};

enum RwEngineInitFlag
{
    rwENGINEINITFREELISTS = 0,
    rwENGINEINITNOFREELISTS = 0x1,
    rwENGINEINITFLAGFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#define RWSRCGLOBAL(variable) (((RwGlobals*)RwEngineInstance)->variable)

enum RwEngineStatus
{
    rwENGINESTATUSIDLE = 0,
    rwENGINESTATUSINITED = 1,
    rwENGINESTATUSOPENED = 2,
    rwENGINESTATUSSTARTED = 3,
    rwENGINESTATUSFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

struct RwGlobals
{
    void* curCamera;
    void* curWorld;
    RwUInt16 renderFrame;
    RwUInt16 lightFrame;
    RwUInt16 pad[2];
    RwDevice dOpenDevice;
    RwStandardFunc stdFunc[29];
    RwLinkList dirtyFrameList;
    RwFileFunctions fileFuncs;
    RwStringFunctions stringFuncs;
    RwMemoryFunctions memoryFuncs;
    RwMemoryAllocFn memoryAlloc;
    RwMemoryFreeFn memoryFree;
    RwMetrics* metrics;
    RwEngineStatus engineStatus;
    RwUInt32 resArenaInitSize;
};

typedef struct RwResEntry;

typedef void (*RwResEntryDestroyNotify)(RwResEntry* resEntry);

struct RwResEntry
{
    RwLLLink link;
    RwInt32 size;
    void* owner;
    RwResEntry** ownerRef;
    RwResEntryDestroyNotify destroyNotify;
};

struct RwChunkHeaderInfo
{
    RwUInt32 type; /**< chunk ID - see \ref RwStreamFindChunk */
    RwUInt32 length; /**< length of the chunk data in bytes */
    RwUInt32 version; /**< version of the chunk data. 
                         *   See \ref RwEngineGetVersion. */
    RwUInt32 buildNum; /**< build number of the RenderWare libraries
                         *   previously used to stream out the data */
    RwBool isComplex; /**< Internal Use */
};

struct RwSky2DVertexFields
{
    RwV3d scrVertex;
    RwReal camVertex_z;
    RwReal u;
    RwReal v;
    RwReal recipZ;
    RwReal pad1;
    RwRGBAReal color;
    RwV3d objNormal;
    RwReal pad2;
};

struct RwSky2DVertexAlignmentOverlay
{
    union
    {
        RwSky2DVertexFields els;
        //<unknown fundamental type (0xa510)> qWords[4];
    };
};

struct RwSky2DVertex
{
    RwSky2DVertexAlignmentOverlay u;
};

#ifdef __cplusplus
extern "C" {
#endif

extern void* RwEngineInstance;

extern RwStream* _rwStreamWriteVersionedChunkHeader(RwStream* stream, RwInt32 type, RwInt32 size,
                                                    RwUInt32 version, RwUInt32 buildNum);
extern RwBool RwStreamFindChunk(RwStream* stream, RwUInt32 type, RwUInt32* lengthOut,
                                RwUInt32* versionOut);
extern void* RwMemLittleEndian32(void* mem, RwUInt32 size);
extern void* RwMemLittleEndian16(void* mem, RwUInt32 size);
extern void* RwMemNative32(void* mem, RwUInt32 size);
extern void* RwMemNative16(void* mem, RwUInt32 size);
extern RwStream* RwStreamWriteReal(RwStream* stream, const RwReal* reals, RwUInt32 numBytes);
extern RwStream* RwStreamWriteInt32(RwStream* stream, const RwInt32* ints, RwUInt32 numBytes);
extern RwStream* RwStreamReadReal(RwStream* stream, RwReal* reals, RwUInt32 numBytes);
extern RwStream* RwStreamReadInt32(RwStream* stream, RwInt32* ints, RwUInt32 numBytes);
extern RwStream* RwStreamReadChunkHeaderInfo(RwStream* stream, RwChunkHeaderInfo* chunkHeaderInfo);
extern RwError* RwErrorSet(RwError* code);
extern RwError* RwErrorGet(RwError* code);
extern RwInt32 _rwerror(RwInt32 code, ...);
extern RwFileFunctions* RwOsGetFileInterface(void);
extern RwReal RwIm2DGetNearScreenZ(void);
extern RwReal RwIm2DGetFarScreenZ(void);
extern RwBool RwRenderStateSet(RwRenderState state, void* value);
extern RwBool RwRenderStateGet(RwRenderState state, void* value);
extern RwBool RwIm2DRenderLine(RwIm2DVertex* vertices, RwInt32 numVertices, RwInt32 vert1,
                               RwInt32 vert2);
extern RwBool RwIm2DRenderPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices,
                                    RwInt32 numVertices);
extern RwBool RwIm2DRenderIndexedPrimitive(RwPrimitiveType primType, RwIm2DVertex* vertices,
                                           RwInt32 numVertices, RwImVertexIndex* indices,
                                           RwInt32 numIndices);
extern RwReal _rwMatrixDeterminant(const RwMatrix* matrix);
extern RwReal _rwMatrixOrthogonalError(const RwMatrix* matrix);
extern RwReal _rwMatrixNormalError(const RwMatrix* matrix);
extern RwBool RwEngineSetMatrixTolerances(const RwMatrixTolerance* const tolerance);
extern RwMatrix* RwMatrixOptimize(RwMatrix* matrix, const RwMatrixTolerance* tolerance);
extern RwMatrix* RwMatrixUpdate(RwMatrix* matrix);
extern RwMatrix* RwMatrixMultiply(RwMatrix* matrixOut, const RwMatrix* MatrixIn1,
                                  const RwMatrix* matrixIn2);
extern RwMatrix* RwMatrixOrthoNormalize(RwMatrix* matrixOut, const RwMatrix* matrixIn);
extern RwMatrix* RwMatrixRotateOneMinusCosineSine(RwMatrix* matrix, const RwV3d* unitAxis,
                                                  RwReal oneMinusCosine, RwReal sine,
                                                  RwOpCombineType combineOp);
extern RwMatrix* RwMatrixRotate(RwMatrix* matrix, const RwV3d* axis, RwReal angle,
                                RwOpCombineType combineOp);
extern RwMatrix* RwMatrixInvert(RwMatrix* matrixOut, const RwMatrix* matrixIn);
extern RwMatrix* RwMatrixScale(RwMatrix* matrix, const RwV3d* scale, RwOpCombineType combineOp);
extern RwMatrix* RwMatrixTranslate(RwMatrix* matrix, const RwV3d* translation,
                                   RwOpCombineType combineOp);
extern RwMatrix* RwMatrixTransform(RwMatrix* matrix, const RwMatrix* transform,
                                   RwOpCombineType combineOp);
extern RwFreeList* RwFreeListCreate(RwInt32 entrySize, RwInt32 entriesPerBlock, RwInt32 alignment);
extern RwFreeList* RwFreeListCreateAndPreallocateSpace(RwInt32 entrySize, RwInt32 entriesPerBlock,
                                                       RwInt32 alignment,
                                                       RwInt32 numBlocksToPreallocate,
                                                       RwFreeList* inPlaceSpaceForFreeListStruct);
extern RwBool RwFreeListDestroy(RwFreeList* freelist);
extern RwFreeList* RwFreeListForAllUsed(RwFreeList* freelist, RwFreeListCallBack fpCallBack,
                                        void* pData);
extern RwBool RwResourcesFreeResEntry(RwResEntry* entry);
extern void _rwResourcesPurge(void);
extern RwResEntry* RwResourcesAllocateResEntry(void* owner, RwResEntry** ownerRef, RwInt32 size,
                                               RwResEntryDestroyNotify destroyNotify);
extern RwBool RwResourcesSetArenaSize(RwUInt32 size);
extern RwBool RwResourcesEmptyArena(void);
extern RwUInt32 RwStreamRead(RwStream* stream, void* buffer, RwUInt32 length);
extern RwStream* RwStreamWrite(RwStream* stream, const void* buffer, RwUInt32 length);
extern RwStream* RwStreamSkip(RwStream* stream, RwUInt32 offset);
extern RwBool RwStreamClose(RwStream* stream, void* pData);
extern RwStream* RwStreamOpen(RwStreamType type, RwStreamAccessType accessType, const void* pData);
extern RwInt32 _rwPluginRegistryAddPluginStream(RwPluginRegistry* reg, RwUInt32 pluginID,
                                                RwPluginDataChunkReadCallBack readCB,
                                                RwPluginDataChunkWriteCallBack writeCB,
                                                RwPluginDataChunkGetSizeCallBack getSizeCB);
extern RwInt32 _rwPluginRegistryAddPlgnStrmlwysCB(RwPluginRegistry* reg, RwUInt32 pluginID,
                                                  RwPluginDataChunkAlwaysCallBack alwaysCB);
extern RwInt32 _rwPluginRegistryAddPlgnStrmRightsCB(RwPluginRegistry* reg, RwUInt32 pluginID,
                                                    RwPluginDataChunkRightsCallBack rightsCB);
extern const RwPluginRegistry* _rwPluginRegistryReadDataChunks(const RwPluginRegistry* reg,
                                                               RwStream* stream, void* object);
extern const RwPluginRegistry* _rwPluginRegistryInvokeRights(const RwPluginRegistry* reg,
                                                             RwUInt32 id, void* obj,
                                                             RwUInt32 extraData);
extern RwInt32 _rwPluginRegistryGetSize(const RwPluginRegistry* reg, const void* object);
extern const RwPluginRegistry*
_rwPluginRegistryWriteDataChunks(const RwPluginRegistry* reg, RwStream* stream, const void* object);
extern const RwPluginRegistry* _rwPluginRegistrySkipDataChunks(const RwPluginRegistry* reg,
                                                               RwStream* stream);
extern RwInt32 _rwPluginRegistryGetPluginOffset(const RwPluginRegistry* reg, RwUInt32 pluginID);
extern RwInt32 _rwPluginRegistryAddPlugin(RwPluginRegistry* reg, RwInt32 size, RwUInt32 pluginID,
                                          RwPluginObjectConstructor constructCB,
                                          RwPluginObjectDestructor destructCB,
                                          RwPluginObjectCopy copyCB);
extern const RwPluginRegistry* _rwPluginRegistryInitObject(const RwPluginRegistry* reg,
                                                           void* object);
extern const RwPluginRegistry* _rwPluginRegistryDeInitObject(const RwPluginRegistry* reg,
                                                             void* object);
extern RwReal RwV3dNormalize(RwV3d* out, const RwV3d* in);
extern RwReal RwV3dLength(const RwV3d* in);
extern RwReal _rwSqrt(const RwReal num);
extern RwReal _rwInvSqrt(const RwReal num);
extern RwV3d* RwV3dTransformPoints(RwV3d* pointsOut, const RwV3d* pointsIn, RwInt32 numPoints,
                                   const RwMatrix* matrix);
extern RwV3d* RwV3dTransformVectors(RwV3d* vectorsOut, const RwV3d* vectorsIn, RwInt32 numPoints,
                                    const RwMatrix* matrix);
extern RwUInt32 RwEngineGetVersion(void);
extern RwInt32 RwEngineRegisterPlugin(RwInt32 size, RwUInt32 pluginID,
                                      RwPluginObjectConstructor initCB,
                                      RwPluginObjectDestructor termCB);
extern RwInt32 RwEngineGetPluginOffset(RwUInt32 pluginID);
extern RwVideoMode* RwEngineGetVideoModeInfo(RwVideoMode* modeinfo, RwInt32 modeIndex);
extern RwInt32 RwEngineGetCurrentVideoMode(void);
extern RwBool RwEngineStop(void);
extern RwBool RwEngineStart(void);
extern RwBool RwEngineClose(void);
extern RwBool RwEngineOpen(RwEngineOpenParams* initParams);
extern RwBool RwEngineTerm(void);
extern RwBool RwEngineInit(const RwMemoryFunctions* memFuncs, RwUInt32 initFlags,
                           RwUInt32 resArenaSize);

#ifdef __cplusplus
}
#endif

#endif