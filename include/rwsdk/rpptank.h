#ifndef RPPTANK_H
#define RPPTANK_H

#include "rwcore.h"
#include "rpworld.h"

struct RpPTankLockStruct
{
    RwUInt8* data;
    RwInt32 stride;
};

struct RpPTankFormatDescriptor
{
    RwInt32 numClusters;
    RwInt32 stride;
    RwInt32 dataFlags;
};

struct RpPTankData
{
    void* data;
    RpPTankLockStruct clusters[9];
    void* userData;
    RpPTankFormatDescriptor format;
    RwUInt32 srcBlend;
    RwUInt32 dstBlend;
    RwBool vertexAlphaBlend;
    RwV2d cCenter;
    RwV2d cSize;
    RwReal cRotate;
    RwRGBA cColor;
    RwRGBA cVtxColor[4];
    RwTexCoords cUV[4];
    RwMatrix cMatrix;
};


/* data piece size */
extern const RwInt32 datasize[];

#define RPPTANKSIZEPOSITION         0
#define RPPTANKSIZEMATRIX           1
#define RPPTANKSIZENORMAL           2
#define RPPTANKSIZESIZE             3
#define RPPTANKSIZECOLOR            4
#define RPPTANKSIZEVTXCOLOR         5
#define RPPTANKSIZE2DROTATE         6
#define RPPTANKSIZEVTX2TEXCOORDS    7
#define RPPTANKSIZEVTX4TEXCOORDS    8


/**
 * \ingroup rpptank
 * \ref RpPTankAllocCallBack
 *
 * ...
 */
typedef void *(* RpPTankAllocCallBack)(RpPTankData *ptankGlobal,
                                        RwInt32 maxPCount,
                                        RwUInt32 dataFlags,
                                        RwUInt32 platFlags);

/**
 * \ingroup rpptank
 * \ref RpPTankCreateCallBack
 *
 * ...
 */
typedef RwBool (* RpPTankCreateCallBack)(RpAtomic *atomic,
                                        RpPTankData *ptankGlobal,
                                        RwInt32 maxPCount,
                                        RwUInt32 dataFlags,
                                        RwUInt32 platFlags);

/**
 * \ingroup rpptank
 * \ref RpPTankInstanceCallBack
 * ...
 */
typedef RwBool (* RpPTankInstanceCallBack)(RpAtomic *atomic,
                                            RpPTankData *ptankGlobal,
                                            RwInt32 actPCount,
                                            RwUInt32 instFlags);

/**
 * \ingroup rpptank
 * \ref RpPTankRenderCallBack
 * ...
 */
typedef RwBool (* RpPTankRenderCallBack)(RpAtomic *atomic,
                                            RpPTankData *ptankGlobal,
                                            RwInt32 actPCount);

typedef struct RpPTankCallBacks RpPTankCallBacks;

struct RpPTankCallBacks
{
    RpPTankAllocCallBack        alloc;
    RpPTankCreateCallBack       create;
    RpPTankInstanceCallBack        instance;
    RpPTankRenderCallBack        render;
};

/* private typedefs */
typedef struct RpPTANKInstanceSetupData RpPTANKInstanceSetupData;

struct RpPTANKInstanceSetupData
{
    RwBool instancePositions;
    RwBool instanceUVs;
    RwBool instanceColors;
    RwBool instanceNormals;

    RpPTankLockStruct positionOut;
    RpPTankLockStruct UVOut;
    RpPTankLockStruct colorsOut;
    RpPTankLockStruct normalsOut;

    RwV3d right;
    RwV3d up;

};

typedef void (* RpPTankGENInstancePosCallback)(
    RpPTankLockStruct *dstCluster,
    RwV3d *right,
    RwV3d *up,
    RwInt32 pCount,
    RpPTankData *ptankGlobal);

typedef void (* RpPTankGENInstanceCallback)(
    RpPTankLockStruct *dstCluster,
    RwInt32 pCount,
    RpPTankData *ptankGlobal);

typedef void (* RpPTankGENInstanceSetupCallback)(
    RpPTANKInstanceSetupData *data,
    RpAtomic *atomic,
    RpPTankData *ptankGlobal,
    RwInt32 actPCount,
    RwUInt32 instFlags);

typedef void (* RpPTankGENInstanceEndingCallback)(
    RpPTANKInstanceSetupData *data,
    RpAtomic *atomic,
    RpPTankData *ptankGlobal,
    RwInt32 actPCount,
    RwUInt32 instFlags);

typedef struct RpPTankAtomicExtPrv RpPTankAtomicExtPrv;

struct RpPTankAtomicExtPrv
{
    RwInt32  maxPCount;        /* max number of particles */
    RwInt32  actPCount;       /* number of actives particles */

    RwBool   isAStructure;  /* is in a structure of array form */
    void    *rawdata;        /* unaligned pointer to the PI data */

    /* Rendering callback */
    RpAtomicCallBackRender defaultRenderCB;

    RpPTankCallBacks       ptankCallBacks;

    /* Instancing CallBacks */
    RpPTankGENInstanceSetupCallback     insSetupCB;
    RpPTankGENInstancePosCallback       insPosCB;
    RpPTankGENInstanceCallback          insUVCB;
    RpPTankGENInstanceCallback          insColorsCB;
    RpPTankGENInstanceCallback          insNormalsCB;
    RpPTankGENInstanceEndingCallback    insEndingCB;

    RwUInt32 lockFlags;
    RwUInt32 instFlags;
    RwUInt32 platFlags;

    RpPTankData publicData;
};

enum RpPTankLockFlags
{
    rpPTANKLOCKWRITE = ((int)0x40000000),
    rpPTANKLOCKREAD = ((int)0x80000000)
};

enum RpPTankInstanceFlags
{
    rpPTANKIFLAGNONE             = ((int)0x00000000),
    rpPTANKIFLAGPOSITION         = ((int)0x00000001),    /**<Particles position changed*/
    rpPTANKIFLAGCOLOR            = ((int)0x00000002),   /**<Particles color changed*/
    rpPTANKIFLAGSIZE             = ((int)0x00000004),   /**<Particles size changed*/
    rpPTANKIFLAGMATRIX           = ((int)0x00000008),   /**<Particles matrix changed*/
    rpPTANKIFLAGNORMAL           = ((int)0x00000010),   /**<Particles normal changed*/
    rpPTANKIFLAG2DROTATE         = ((int)0x00000020),   /**<Particles 2D rotation changed*/
    rpPTANKIFLAGVTXCOLOR         = ((int)0x00000040),    /**<Vertex color changed*/
    rpPTANKIFLAGVTX2TEXCOORDS    = ((int)0x00000080),   /**<Vertex 2 Texture coordinates changed*/
    rpPTANKIFLAGVTX4TEXCOORDS    = ((int)0x00000100),   /**<Vertex 4 Texture coordinates changed*/
/*    free                       = ((int)0x00000200),    */
/*    free                       = ((int)0x00000400),    */
/*    free                       = ((int)0x00000800),    */
/*    free                       = ((int)0x00001000),    */
    rpPTANKIFLAGCNSCOLOR         = ((int)0x00002000),   /**<Constant color changed*/
    rpPTANKIFLAGCNSSIZE          = ((int)0x00004000),   /**<Constant size changed*/
    rpPTANKIFLAGCNSMATRIX        = ((int)0x00008000),   /**<Constant matrix changed*/
    rpPTANKIFLAGCNSNORMAL        = ((int)0x00010000),   /**<Constant normal changed*/
    rpPTANKIFLAGCNS2DROTATE      = ((int)0x00020000),   /**<Constant 2D rotation changed*/
    rpPTANKIFLAGCNSVTXCOLOR      = ((int)0x00040000),   /**<Constant vertex color changed*/
    rpPTANKIFLAGCNSVTX2TEXCOORDS = ((int)0x00080000),   /**<Constant vertex 2 Texture coordinates changed*/
    rpPTANKIFLAGCNSVTX4TEXCOORDS = ((int)0x00100000),   /**<Constant vertex 4 Texture coordinates changed*/
/*    free                       = ((int)0x00200000),    */
/*    free                       = ((int)0x00400000),    */
    rpPTANKIFLAGACTNUMCHG        = ((int)0x00800000),    /**<Number of active particle changed*/
    rpPTANKIFLAGCENTER           = ((int)0x01000000),    /**<Center position changed*/
/*    free                       = ((int)0x04000000),    */
/*    free                       = ((int)0x08000000),    */
    rpPTANKIFLAGALPHABLENDING    = ((int)0x10000000),    /**<Internal Use*/
    rpPTANKIFLAGALL              = ((int)0xFFFFFFFF),

    RPPTANKINSTANCEFLAGSFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RpPTankDataFlags
{
    rpPTANKDFLAGNONE                     = ((int)0x00000000),
    rpPTANKDFLAGPOSITION                 = ((int)0x00000001),   /**<Uses a position per particle*/
    rpPTANKDFLAGCOLOR                    = ((int)0x00000002),   /**<Uses a color per particle*/
    rpPTANKDFLAGSIZE                     = ((int)0x00000004),   /**<Uses a size per particle. This flag is ignored if the particle is a matrix.*/
    rpPTANKDFLAGMATRIX                   = ((int)0x00000008),   /**<Uses a matrix per particle*/
    rpPTANKDFLAGNORMAL                   = ((int)0x00000010),   /**<Uses a normal per particle*/
    rpPTANKDFLAG2DROTATE                 = ((int)0x00000020),   /**<Uses a 2D rotation per particle*/
    rpPTANKDFLAGVTXCOLOR                 = ((int)0x00000040),   /**<Uses a color per Billboard vertex*/
    rpPTANKDFLAGVTX2TEXCOORDS            = ((int)0x00000080),   /**<Uses Top-Left and Bottom-Right Texture coordinates*/
    rpPTANKDFLAGVTX4TEXCOORDS            = ((int)0x00000100),   /**<Uses a texture UV per vertex*/
/*    free                               = ((int)0x00000200),    */
/*    free                               = ((int)0x00000400),    */
/*    free                               = ((int)0x00000800),    */
/*    free                               = ((int)0x00001000),    */
/*    free                               = ((int)0x00002000),    */
/*    free                               = ((int)0x00004000),    */
    rpPTANKDFLAGCNSMATRIX                = ((int)0x00008000),   /**<Uses a constant matrix*/
    rpPTANKDFLAGCNSNORMAL                = ((int)0x00010000),   /**<Uses a constant normal*/
    rpPTANKDFLAGCNS2DROTATE              = ((int)0x00020000),   /**<Uses a constant 2D rotation*/
    rpPTANKDFLAGCNSVTXCOLOR              = ((int)0x00040000),   /**<Uses a constant color per Billboard vertex*/
    rpPTANKDFLAGCNSVTX2TEXCOORDS         = ((int)0x00080000),   /**<Uses constant Top-Left and Bottom-Right Texture coordinates*/
    rpPTANKDFLAGCNSVTX4TEXCOORDS         = ((int)0x00100000),   /**<Uses a constant texture UV per vertex*/
/*    free                               = ((int)0x00200000),    */
/*    free                               = ((int)0x00400000),    */
/*    free                               = ((int)0x00800000),    */
    rpPTANKDFLAGUSECENTER                = ((int)0x01000000),    /**<The position of the particles are shifted*/
/*    free                               = ((int)0x04000000),    */
/*    free                               = ((int)0x08000000),    */
    rpPTANKDFLAGARRAY                    = ((int)0x10000000),    /**<Data is organized in an array */
    rpPTANKDFLAGSTRUCTURE                = ((int)0x20000000),    /**<Data is organized in a structure */

    RPPTANKDATAFLAGSFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RpPTankDataLockFlags
{
    rpPTANKLFLAGNONE                     = ((int)0x00000000),
    rpPTANKLFLAGPOSITION                 = ((int)0x00000001),   /**<Access the positions buffer*/
    rpPTANKLFLAGCOLOR                    = ((int)0x00000002),   /**<Access the colors buffer*/
    rpPTANKLFLAGSIZE                     = ((int)0x00000004),   /**<Access the sizes buffer*/
    rpPTANKLFLAGMATRIX                   = ((int)0x00000008),   /**<Access the matrixes buffer*/
    rpPTANKLFLAGNORMAL                   = ((int)0x00000010),   /**<Access the normals buffer*/
    rpPTANKLFLAG2DROTATE                 = ((int)0x00000020),   /**<Access the 2D rotations buffer*/
    rpPTANKLFLAGVTXCOLOR                 = ((int)0x00000040),   /**<Access the colors buffer (when using a color per vertex) */
    rpPTANKLFLAGVTX2TEXCOORDS            = ((int)0x00000080),   /**<Access the Top-Left and Bottom-Right Texture coordinates buffer*/
    rpPTANKLFLAGVTX4TEXCOORDS            = ((int)0x00000100),   /**<Access the texture UVs Buffer (when using a color per vertex)*/

    RPPTANKLOCKFLAGSFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#ifdef __cplusplus
extern "C" {
#endif


/* private globals */
extern RwInt32 _rpPTankAtomicDataOffset; /* Offset in RpAtomic */

extern RwInt32 _rpPTankGlobalsOffset; /* Offset in RwEngine */

/* Macro tools */
#define RPATOMICPTANKPLUGINDATA(atomic)                \
    (*RWPLUGINOFFSET(RpPTankAtomicExtPrv *, (atomic), _rpPTankAtomicDataOffset))

#define GLOBALPTANKPLUGINDATA()                \
    (*RWPLUGINOFFSET(void *, RwEngineInstance, _rpPTankGlobalsOffset))

extern RwBool RpPTankPluginAttach(void);
extern RpAtomic* RpPTankAtomicCreate(RwInt32 maxParticleNum, RwUInt32 dataFlags,
                                     RwUInt32 platFlags);
RpAtomic* _rpPTankAtomicCreateCustom(RwInt32 maxParticleNum, RwUInt32 dataFlags, RwUInt32 platFlags,
                                     RpPTankCallBacks* callbacks);
extern void RpPTankAtomicDestroy(RpAtomic* ptank);
extern RwBool RpPTankAtomicLock(RpAtomic* atomic, RpPTankLockStruct* dst, RwUInt32 dataFlags,
                                RpPTankLockFlags lockFlag);
extern RpAtomic* RpPTankAtomicUnlock(RpAtomic* atomic);

#ifdef __cplusplus
}
#endif

#endif
