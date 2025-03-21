/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x5BAEC0
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x50FB9C
void xAnimPoolCB(class xMemPool *, void *); // size: 0x0, address: 0x210BE0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
unsigned char * giAnimScratch; // size: 0x4, address: 0x50E80C
class _reent * _impure_ptr; // size: 0x4, address: 0x404F48
char _ctype_[]; // size: 0x0, address: 0x4EBA38
class RxHeap {
    // total size: 0x1C
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
class xAnimEffect {
    // total size: 0x14
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
class _reent {
    // total size: 0x2F0
public:
    signed int _errno; // offset 0x0, size 0x4
    class __sFILE * _stdin; // offset 0x4, size 0x4
    class __sFILE * _stdout; // offset 0x8, size 0x4
    class __sFILE * _stderr; // offset 0xC, size 0x4
    signed int _inc; // offset 0x10, size 0x4
    char _emergency[25]; // offset 0x14, size 0x19
    signed int _current_category; // offset 0x30, size 0x4
    char * _current_locale; // offset 0x34, size 0x4
    signed int __sdidinit; // offset 0x38, size 0x4
    void (* __cleanup)(class _reent *); // offset 0x3C, size 0x4
    class _Bigint * _result; // offset 0x40, size 0x4
    signed int _result_k; // offset 0x44, size 0x4
    class _Bigint * _p5s; // offset 0x48, size 0x4
    class _Bigint * * _freelist; // offset 0x4C, size 0x4
    signed int _cvtlen; // offset 0x50, size 0x4
    char * _cvtbuf; // offset 0x54, size 0x4
    class /* @class */ {
        // total size: 0xF0
    public:
        union { // inferred
            class /* @class */ {
                // total size: 0x58
            public:
                unsigned int _unused_rand; // offset 0x0, size 0x4
                char * _strtok_last; // offset 0x4, size 0x4
                char _asctime_buf[26]; // offset 0x8, size 0x1A
                class tm _localtime_buf; // offset 0x24, size 0x24
                signed int _gamma_signgam; // offset 0x48, size 0x4
                unsigned long long _rand_next; // offset 0x50, size 0x8
            } _reent; // offset 0x0, size 0x58
            class /* @class */ {
                // total size: 0xF0
            public:
                unsigned char * _nextf[30]; // offset 0x0, size 0x78
                unsigned int _nmalloc[30]; // offset 0x78, size 0x78
            } _unused; // offset 0x0, size 0xF0
        };
    } _new; // offset 0x58, size 0xF0
    class _atexit * _atexit; // offset 0x148, size 0x4
    class _atexit _atexit0; // offset 0x14C, size 0x88
    void (* * _sig_func)(signed int); // offset 0x1D4, size 0x4
    class _glue __sglue; // offset 0x1D8, size 0xC
    class __sFILE __sf[3]; // offset 0x1E4, size 0x108
};
class RpGeometry {
    // total size: 0x60
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
class RxPipelineNode {
    // total size: 0x28
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
class xAnimPlay {
    // total size: 0x20
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class _Bigint {
    // total size: 0x18
public:
    class _Bigint * _next; // offset 0x0, size 0x4
    signed int _k; // offset 0x4, size 0x4
    signed int _maxwds; // offset 0x8, size 0x4
    signed int _sign; // offset 0xC, size 0x4
    signed int _wds; // offset 0x10, size 0x4
    unsigned int _x[1]; // offset 0x14, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class xAnimFile {
    // total size: 0x20
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class RxPipelineNodeTopSortData {
    // total size: 0xC
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
class xAnimSingle {
    // total size: 0x40
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
};
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
class RpMeshHeader {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class __sFILE {
    // total size: 0x58
public:
    unsigned char * _p; // offset 0x0, size 0x4
    signed int _r; // offset 0x4, size 0x4
    signed int _w; // offset 0x8, size 0x4
    signed short _flags; // offset 0xC, size 0x2
    signed short _file; // offset 0xE, size 0x2
    class __sbuf _bf; // offset 0x10, size 0x8
    signed int _lbfsize; // offset 0x18, size 0x4
    void * _cookie; // offset 0x1C, size 0x4
    signed int (* _read)(void *, char *, signed int); // offset 0x20, size 0x4
    signed int (* _write)(void *, char *, signed int); // offset 0x24, size 0x4
    signed long (* _seek)(void *, signed long, signed int); // offset 0x28, size 0x4
    signed int (* _close)(void *); // offset 0x2C, size 0x4
    class __sbuf _ub; // offset 0x30, size 0x8
    unsigned char * _up; // offset 0x38, size 0x4
    signed int _ur; // offset 0x3C, size 0x4
    unsigned char _ubuf[3]; // offset 0x40, size 0x3
    unsigned char _nbuf[1]; // offset 0x43, size 0x1
    class __sbuf _lb; // offset 0x44, size 0x8
    signed int _blksize; // offset 0x4C, size 0x4
    signed int _offset; // offset 0x50, size 0x4
    class _reent * _data; // offset 0x54, size 0x4
};
class xAnimState {
    // total size: 0x4C
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
class xAnimTable {
    // total size: 0x1C
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
};
class RxPipeline {
    // total size: 0x34
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
class xModelInstance {
    // total size: 0x6C
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    unsigned int PipeFlags; // offset 0x14, size 0x4
    float RedMultiplier; // offset 0x18, size 0x4
    float GreenMultiplier; // offset 0x1C, size 0x4
    float BlueMultiplier; // offset 0x20, size 0x4
    float Alpha; // offset 0x24, size 0x4
    float FadeStart; // offset 0x28, size 0x4
    float FadeEnd; // offset 0x2C, size 0x4
    class xSurface * Surf; // offset 0x30, size 0x4
    class xModelBucket * * Bucket; // offset 0x34, size 0x4
    class xModelInstance * BucketNext; // offset 0x38, size 0x4
    class xLightKit * LightKit; // offset 0x3C, size 0x4
    void * Object; // offset 0x40, size 0x4
    unsigned short Flags; // offset 0x44, size 0x2
    unsigned char BoneCount; // offset 0x46, size 0x1
    unsigned char BoneIndex; // offset 0x47, size 0x1
    unsigned char * BoneRemap; // offset 0x48, size 0x4
    class RwMatrixTag * Mat; // offset 0x4C, size 0x4
    class xVec3 Scale; // offset 0x50, size 0xC
    unsigned int modelID; // offset 0x5C, size 0x4
    unsigned int shadowID; // offset 0x60, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x64, size 0x4
    class /* @class */ {
        // total size: 0x4
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0x68, size 0x4
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class RpAtomic {
    // total size: 0x70
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
class xAnimTransition {
    // total size: 0x2C
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class RwMatrixTag {
    // total size: 0x40
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class rxReq {
    // total size: 0x0
};
class RwRaster {
    // total size: 0x34
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class _atexit {
    // total size: 0x88
public:
    class _atexit * _next; // offset 0x0, size 0x4
    signed int _ind; // offset 0x4, size 0x4
    void (* _fns[32])(); // offset 0x8, size 0x80
};
class RpClump {
    // total size: 0x2C
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class xMemPool {
    // total size: 0x1C
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
class RpMaterial {
    // total size: 0x1C
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class RwTexture {
    // total size: 0x58
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
class __sbuf {
    // total size: 0x8
public:
    unsigned char * _base; // offset 0x0, size 0x4
    signed int _size; // offset 0x4, size 0x4
};
class xSurface {
    // total size: 0x0
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
class /* @class */ {
    // total size: 0xF0
public:
    union { // inferred
        class /* @class */ {
            // total size: 0x58
        public:
            unsigned int _unused_rand; // offset 0x0, size 0x4
            char * _strtok_last; // offset 0x4, size 0x4
            char _asctime_buf[26]; // offset 0x8, size 0x1A
            class tm _localtime_buf; // offset 0x24, size 0x24
            signed int _gamma_signgam; // offset 0x48, size 0x4
            unsigned long long _rand_next; // offset 0x50, size 0x8
        } _reent; // offset 0x0, size 0x58
        class /* @class */ {
            // total size: 0xF0
        public:
            unsigned char * _nextf[30]; // offset 0x0, size 0x78
            unsigned int _nmalloc[30]; // offset 0x78, size 0x78
        } _unused; // offset 0x0, size 0xF0
    };
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x58
public:
    unsigned int _unused_rand; // offset 0x0, size 0x4
    char * _strtok_last; // offset 0x4, size 0x4
    char _asctime_buf[26]; // offset 0x8, size 0x1A
    class tm _localtime_buf; // offset 0x24, size 0x24
    signed int _gamma_signgam; // offset 0x48, size 0x4
    unsigned long long _rand_next; // offset 0x50, size 0x8
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class xLightKit {
    // total size: 0x0
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class RxIoSpec {
    // total size: 0x14
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0xF0
public:
    unsigned char * _nextf[30]; // offset 0x0, size 0x78
    unsigned int _nmalloc[30]; // offset 0x78, size 0x78
};
class RxNodeMethods {
    // total size: 0x1C
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class RxNodeDefinition {
    // total size: 0x40
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
class RpInterpolator {
    // total size: 0x14
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
class RxCluster {
    // total size: 0x1C
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class RxPacket {
    // total size: 0x30
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class _glue {
    // total size: 0xC
public:
    class _glue * _next; // offset 0x0, size 0x4
    signed int _niobs; // offset 0x4, size 0x4
    class __sFILE * _iobs; // offset 0x8, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class tm {
    // total size: 0x24
public:
    signed int tm_sec; // offset 0x0, size 0x4
    signed int tm_min; // offset 0x4, size 0x4
    signed int tm_hour; // offset 0x8, size 0x4
    signed int tm_mday; // offset 0xC, size 0x4
    signed int tm_mon; // offset 0x10, size 0x4
    signed int tm_year; // offset 0x14, size 0x4
    signed int tm_wday; // offset 0x18, size 0x4
    signed int tm_yday; // offset 0x1C, size 0x4
    signed int tm_isdst; // offset 0x20, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210870 -> 0x00210904
*/
// Range: 0x210870 -> 0x210904
void xAnimPoolFree(class xAnimPlay * play /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210870 -> 0x210904
        unsigned int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210910 -> 0x00210970
*/
// Range: 0x210910 -> 0x210970
class xAnimPlay * xAnimPoolAlloc(class xMemPool * pool /* r2 */, void * object /* r19 */, class xAnimTable * table /* r18 */, class xModelInstance * modelInst /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210910 -> 0x210970
        class xAnimPlay * play; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210970 -> 0x00210BDC
*/
// Range: 0x210970 -> 0x210BDC
void xAnimPoolInit(class xMemPool * pool /* r20 */, unsigned int count /* r19 */, unsigned int singles /* r18 */, unsigned int blendFlags /* r17 */, unsigned int effectMax /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210970 -> 0x210BDC
        unsigned int size; // r22
        unsigned int i; // r7
        void * buffer; // r2
        class xAnimPlay * play; // r2
        class xAnimSingle * currsingle; // r3
        class xAnimActiveEffect * curract; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210BE0 -> 0x00210D08
*/
// Range: 0x210BE0 -> 0x210D08
void xAnimPoolCB(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210BE0 -> 0x210D08
        signed int i; // r9
        class xAnimPlay * clone; // r6
        class xAnimPlay * play; // r2
        class xAnimSingle * clonesingle; // r11
        class xAnimSingle * currsingle; // r3
        class xAnimActiveEffect * curract; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00210D10 -> 0x002111BC
*/
// Range: 0x210D10 -> 0x2111BC
void xAnimPlayEval(class xAnimPlay * play /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x210D10 -> 0x2111BC
        unsigned int i; // r29+0xF0
        unsigned int bone; // r20
        class xQuat * quatresult; // r29+0xE0
        class xVec3 * tranresult; // r29+0xD0
        class xQuat * quatblend; // r23
        class xVec3 * tranblend; // r30
        class xAnimSingle * si; // r17
        float blendF; // r21
        float blendR; // r20
        unsigned short * blendO; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002111C0 -> 0x00211260
*/
// Range: 0x2111C0 -> 0x211260
void xAnimPlayUpdate(class xAnimPlay * play /* r17 */, float timeDelta /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2111C0 -> 0x211260
        unsigned int i; // r16
        class xAnimSingle * single; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211260 -> 0x00211524
*/
// Range: 0x211260 -> 0x211524
void xAnimPlayStartTransition(class xAnimPlay * play /* r19 */, class xAnimTransition * transition /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x211260 -> 0x211524
        class xAnimSingle * single; // r17
        class xAnimSingle * bl; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00211530 -> 0x002116D4
*/
// Range: 0x211530 -> 0x2116D4
void xAnimPlayChooseTransition(class xAnimPlay * play /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x211530 -> 0x2116D4
        unsigned int i; // r21
        void * object; // r20
        class xAnimTransition * * found; // r19
        class xAnimTransitionList * curr; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002116E0 -> 0x002117B4
*/
// Range: 0x2116E0 -> 0x2117B4
void xAnimPlaySetup(class xAnimPlay * play /* r2 */, void * object /* r2 */, class xAnimTable * table /* r2 */, class xModelInstance * modelInst /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2116E0 -> 0x2117B4
        signed int i; // r10
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002117C0 -> 0x00212048
*/
// Range: 0x2117C0 -> 0x212048
static void SingleUpdate(class xAnimSingle * single /* r21 */, float timeDelta /* r24 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2117C0 -> 0x212048
        unsigned int foundBlendstop; // r20
        unsigned int firstStep; // r19
        class xAnimTransition * foundTransition; // r18
        class xAnimSingle * bl; // r17
        float tranDelta; // r23
        float blendDelta; // r22
        float singleTime; // r21
        void * object; // r16
        float duration; // r20
        float timeCmp; // r2
        float timeCmp; // r25
        class xAnimTransitionList * curr; // r22
        float recip; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212050 -> 0x00212158
*/
// Range: 0x212050 -> 0x212158
void xAnimPlaySetState(class xAnimSingle * single /* r16 */, class xAnimState * state /* r17 */, float startTime /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212050 -> 0x212158
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212160 -> 0x002122C0
*/
// Range: 0x212160 -> 0x2122C0
static void EffectSingleStop(class xAnimSingle * single /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212160 -> 0x2122C0
        unsigned int i; // r17
        class xAnimEffect * effect; // r17
        class xAnimActiveEffect tempActive; // r29+0x48
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002122C0 -> 0x002123F8
*/
// Range: 0x2122C0 -> 0x2123F8
static void EffectSingleLoop(class xAnimSingle * single /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2122C0 -> 0x2123F8
        class xAnimActiveEffect * alist; // r18
        unsigned int index; // r17
        unsigned int count; // r16
        class xAnimEffect * effect; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212400 -> 0x00212608
*/
// Range: 0x212400 -> 0x212608
static void EffectSingleRun(class xAnimSingle * single /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212400 -> 0x212608
        class xAnimEffect * effect; // r19
        class xAnimActiveEffect tempActive; // r29+0x78
        float time; // r20
        unsigned int flags; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212610 -> 0x00212748
*/
// Range: 0x212610 -> 0x212748
static void EffectSingleDuration(class xAnimSingle * single /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212610 -> 0x212748
        float time; // r20
        class xAnimActiveEffect * alist; // r18
        unsigned int index; // r17
        unsigned int count; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212750 -> 0x002129A0
*/
// Range: 0x212750 -> 0x2129A0
static void EffectSingleStart(class xAnimSingle * single /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212750 -> 0x2129A0
        class xAnimEffect * effect; // r17
        class xAnimActiveEffect tempActive; // r29+0x58
        float time; // r20
        unsigned int flags; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002129A0 -> 0x00212A0C
*/
// Range: 0x2129A0 -> 0x212A0C
class xAnimState * xAnimTableGetState(class xAnimTable * table /* r16 */, char * name /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2129A0 -> 0x212A0C
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212A10 -> 0x00212A58
*/
// Range: 0x212A10 -> 0x212A58
class xAnimState * xAnimTableGetStateID(class xAnimTable * table /* r2 */, unsigned int ID /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212A10 -> 0x212A58
        class xAnimState * curr; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212A60 -> 0x00212BC8
*/
// Range: 0x212A60 -> 0x212BC8
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r19 */, class xAnimFile * file /* r18 */, unsigned int stateID /* r2 */, unsigned int subStateID /* r17 */, unsigned int subStateCount /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212A60 -> 0x212BC8
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212BD0 -> 0x00212C68
*/
// Range: 0x212BD0 -> 0x212C68
void xAnimTableAddFile(class xAnimTable * table /* r18 */, class xAnimFile * file /* r17 */, char * states /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212BD0 -> 0x212C68
        unsigned char * buffer; // r16
        char * stateName; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212C70 -> 0x00212FA8
*/
// Range: 0x212C70 -> 0x212FA8
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r19 */, char * source /* r18 */, char * dest /* r17 */, unsigned int (* conditional)(class xAnimTransition *, class xAnimSingle *, void *) /* r22 */, unsigned int (* callback)(class xAnimTransition *, class xAnimSingle *, void *) /* r23 */, unsigned int flags /* r30 */, unsigned int userFlags /* r29+0xBC */, float srcTime /* r22 */, float destTime /* r21 */, unsigned short priority /* r29+0xBA */, unsigned short queuePriority /* r29+0xC0 */, float blendRecip /* r20 */, unsigned short * blendOffset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212C70 -> 0x212FA8
        class xAnimTransition * tran; // r21
        unsigned char isComplex; // r20
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212FB0 -> 0x00212FB8
*/
// Range: 0x212FB0 -> 0x212FB8
void xAnimTableAddTransition(class xAnimTable * table /* r2 */, class xAnimTransition * tran /* r2 */, char * source /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212FB0 -> 0x212FB8
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00212FC0 -> 0x00213820
*/
// Range: 0x212FC0 -> 0x213820
static void _xAnimTableAddTransition(class xAnimTable * table /* r29+0x12C */, class xAnimTransition * tran /* r20 */, char * source /* r2 */, char * dest /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x212FC0 -> 0x213820
        unsigned char * buffer; // r29+0x110
        class xAnimState * * stateList; // r29+0x100
        unsigned int i; // r4
        unsigned int stateCount; // r30
        unsigned int allocCount; // r21
        char * stateName; // r29+0xFC
        class xAnimTransitionList * tlist; // r29+0xE0
        class xAnimTransition * substTransitionList[32]; // r29+0x230
        unsigned int substTransitionCount; // r29+0xD0
        unsigned char hasSubst; // r29+0xC0
        signed int i; // r5
        unsigned char isComplex; // r8
        char * COMPLEX_PATTERNS; // r7
        char * search; // r6
        class xAnimState * state; // r23
        char extra[128]; // r29+0x1B0
        char tempName[128]; // r29+0x130
        char * tempIterator; // r19
        char * extraIterator; // r18
        unsigned char allowMissingState; // r29+0xB0
        signed int i; // r17
        unsigned int extraIteratorLength; // r16
        class xAnimTransition * duplicatedTransition; // r17
        class xAnimTransitionList * curr; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213820 -> 0x00213A84
*/
// Range: 0x213820 -> 0x213A84
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r20 */, char * name /* r19 */, unsigned int flags /* r18 */, unsigned int userFlags /* r17 */, float speed /* r21 */, float * boneBlend /* r22 */, float * timeSnap /* r23 */, float fadeRecip /* r20 */, unsigned short * fadeOffset /* r16 */, void * callbackData /* r30 */, void (* beforeEnter)(class xAnimPlay *, class xAnimState *) /* r29+0xB0 */, void (* stateCallback)(class xAnimState *, class xAnimSingle *, void *) /* r29+0xB8 */, void (* beforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int) /* r29+0xC0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x213820 -> 0x213A84
        class xAnimState * state; // r21
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213A90 -> 0x00213AEC
*/
// Range: 0x213A90 -> 0x213AEC
void xAnimDefaultBeforeEnter(class xAnimState * state /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x213A90 -> 0x213AEC
        unsigned int entry; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213AF0 -> 0x00213B70
*/
// Range: 0x213AF0 -> 0x213B70
class xAnimTable * xAnimTableNew(char * name /* r18 */, class xAnimTable * * linkedList /* r17 */, unsigned int userFlags /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x213AF0 -> 0x213B70
        class xAnimTable * table; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213B70 -> 0x00213C38
*/
// Range: 0x213B70 -> 0x213C38
class xAnimEffect * xAnimStateNewEffect(class xAnimState * state /* r18 */, unsigned int flags /* r17 */, float startTime /* r21 */, float endTime /* r20 */, unsigned int (* callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *) /* r16 */, unsigned int userDataSize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x213B70 -> 0x213C38
        class xAnimEffect * curr; // r5
        class xAnimEffect * * prev; // r4
        class xAnimEffect * effect; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00213C40 -> 0x00214290
*/
// Range: 0x213C40 -> 0x214290
void xAnimFileEval(class xAnimFile * data /* r20 */, float time /* r29+0x100 */, float * bilinear /* r2 */, unsigned int flags /* r30 */, class xVec3 * tran /* r21 */, class xQuat * quat /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x213C40 -> 0x214290
        signed int i; // r19
        unsigned int numBones; // r29+0xD0
        float bilerp[2]; // r29+0xF8
        unsigned int biindex[2]; // r29+0xF0
        unsigned int biplus[2]; // r29+0xE8
        class xQuat * q0; // r17
        class xVec3 * t0; // r16
        class xQuat * q1; // r18
        class xVec3 * t1; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214290 -> 0x00214350
*/
// Range: 0x214290 -> 0x214350
void xAnimFileSetTime(class xAnimFile * data /* r16 */, float duration /* r21 */, float timeOffset /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x214290 -> 0x214350
        float rawDuration; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214350 -> 0x00214378
*/
// Range: 0x214350 -> 0x214378
class xAnimFile * xAnimFileNew(void * rawData /* r29+0x1C */, char * name /* r2 */, unsigned int flags /* r2 */, class xAnimFile * * linkedList /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x214350 -> 0x214378
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214380 -> 0x00214644
*/
// Range: 0x214380 -> 0x214644
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r20 */, char * name /* r19 */, unsigned int flags /* r18 */, class xAnimFile * * linkedList /* r23 */, unsigned int numX /* r17 */, unsigned int numY /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x214380 -> 0x214644
        signed int i; // r5
        class xAnimFile * afile; // r22
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00214650 -> 0x002146B8
*/
// Range: 0x214650 -> 0x2146B8
void xAnimTempTransitionInit(unsigned int count /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x214650 -> 0x2146B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002146C0 -> 0x002146F0
*/
// Range: 0x2146C0 -> 0x2146F0
void xAnimInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2146C0 -> 0x2146F0
    }
}

/*
    Compile unit: C:\SB\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002146F0 -> 0x00214E30
*/
// Range: 0x2146F0 -> 0x214E30
static unsigned char _xCheckAnimNameInner(char * name /* r21 */, char * pattern /* r22 */, signed int patternSize /* r29+0xEC */, char * extra /* r20 */, signed int * nameOut /* r29+0xE8 */, signed int * extraOut /* r29+0xE4 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2146F0 -> 0x214E30
        char * startExtra; // r29+0xD0
        char * initialExtra; // r29+0xCC
        signed int patternCurrent; // r19
        signed int nameCurrent; // r18
        signed int check; // r6
        char nextPattern[128]; // r29+0xF0
        signed int nextPatternCount; // r5
        unsigned char first; // r4
        signed int parenCount; // r3
        char * IGNORE_PATTERNS; // r2
        signed int length; // r16
        unsigned char done; // r17
        char * current; // r16
        char * startPattern; // r2
        signed int pc; // r7
        signed int nameOut; // r29+0x17C
        signed int extraOut; // r29+0x178
        char * current; // r16
        char * positiveEnd; // r5
        char * negative; // r23
        char * negativeEnd; // r17
        signed int nameOut; // r29+0x174
        signed int extraOut; // r29+0x170
        unsigned char matched; // r29+0xB0
    }
}

