/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * g_xCollis_FMT; // size: 0x4, address: 0x0
static class xCapsule * cb_capsule; // size: 0x4, address: 0x0
static float cb_dist; // size: 0x4, address: 0x0
signed int capsuleMethod; // size: 0x4, address: 0x0
static class xCapsule * cb_cap; // size: 0x4, address: 0x0
signed int xcollide_docam; // size: 0x4, address: 0x0
static signed int sSweptSphereHitFound; // size: 0x4, address: 0x50F928
static class xMat4x3 * sSwsModelMat; // size: 0x4, address: 0x50F930
static signed int sSweptSphereEntFound; // size: 0x4, address: 0x50F934
static unsigned char sSweptSphereCollType; // size: 0x1, address: 0x50F938
static class xEnt * sSweptSphereMover; // size: 0x4, address: 0x50F93C
static unsigned int sSweptSphereIgnoreMovers; // size: 0x4, address: 0x50F940
signed int ConicDepenLeafNodeCB(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x0
class xMat4x3 g_I3; // size: 0x40, address: 0x5688C0
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x50F070
void SweptSphereHitsEntCB(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x1C70A0
class xGrid colls_oso_grid; // size: 0x34, address: 0x5CEC10
class xGrid colls_grid; // size: 0x34, address: 0x5CEBD0
class xGrid npcs_grid; // size: 0x34, address: 0x5CEC50
class RpMorphTarget anim_coll_old_mt; // size: 0x1C, address: 0x568BD0
signed int SweptSphereModelCB(signed int, signed int, void *); // size: 0x0, address: 0x1C79A0
signed int _rpCollisionGeometryDataOffset; // size: 0x4, address: 0x50EC80
class RpCollisionTriangle * SweptSphereHitsEnvCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x1C7D50
signed int SweptSphereLeafNodeCB(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x1C7CA0
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
class xVec3 g_O3; // size: 0xC, address: 0x4F8D70
void xCapsuleHitsEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleEnvClosestToStartCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
signed int LeafNodeCapsuleIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleEnvClosestToLineCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleModelClosestToLineCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
signed int xParabolaEnvCB(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x1CD120
class RpCollisionTriangle * sphereHitsModelCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x1CDCB0
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
class RpLight {
    // total size: 0x40
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
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
class xEnt : public xBase {
    // total size: 0xD0
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned short num_updates; // offset 0x16, size 0x2
    unsigned char flags; // offset 0x18, size 0x1
    unsigned char miscflags; // offset 0x19, size 0x1
    unsigned char subType; // offset 0x1A, size 0x1
    unsigned char pflags; // offset 0x1B, size 0x1
    unsigned char moreFlags; // offset 0x1C, size 0x1
    unsigned char isCulled; // offset 0x1D, size 0x1
    unsigned char driving_count; // offset 0x1E, size 0x1
    unsigned char num_ffx; // offset 0x1F, size 0x1
    unsigned char collType; // offset 0x20, size 0x1
    unsigned char collLev; // offset 0x21, size 0x1
    unsigned char chkby; // offset 0x22, size 0x1
    unsigned char penby; // offset 0x23, size 0x1
    class xModelInstance * model; // offset 0x24, size 0x4
    class xModelInstance * collModel; // offset 0x28, size 0x4
    class xModelInstance * camcollModel; // offset 0x2C, size 0x4
    class xLightKit * lightKit; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x14
    class xBound bound; // offset 0x64, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB0, size 0x4
    class xFFX * ffx; // offset 0xB4, size 0x4
    class xEnt * driver; // offset 0xB8, size 0x4
    signed int driveMode; // offset 0xBC, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC0, size 0x4
    class xEntShadow * entShadow; // offset 0xC4, size 0x4
    class anim_coll_data * anim_coll; // offset 0xC8, size 0x4
    void * user_data; // offset 0xCC, size 0x4
};
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
class xGridBound {
    // total size: 0x14
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char ingrid; // offset 0x8, size 0x1
    unsigned char oversize; // offset 0x9, size 0x1
    unsigned char deleted; // offset 0xA, size 0x1
    unsigned char gpad; // offset 0xB, size 0x1
    class xGridBound * * head; // offset 0xC, size 0x4
    class xGridBound * next; // offset 0x10, size 0x4
};
class RwBBox {
    // total size: 0x18
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
class xCollis {
    // total size: 0x50
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    class xVec3 norm; // offset 0x14, size 0xC
    class xVec3 tohit; // offset 0x20, size 0xC
    class xVec3 depen; // offset 0x2C, size 0xC
    class xVec3 hdng; // offset 0x38, size 0xC
    union { // inferred
        class /* @class */ {
            // total size: 0xC
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x44, size 0xC
        class tri_data tri; // offset 0x44, size 0xC
    };
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
class xSweptSphere {
    // total size: 0x150
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    class xiMat4x3Union basis; // offset 0x20, size 0x40
    class xiMat4x3Union invbasis; // offset 0x60, size 0x40
    class xBox box; // offset 0xA0, size 0x18
    class xQCData qcd; // offset 0xB8, size 0x20
    float boxsize; // offset 0xD8, size 0x4
    float curdist; // offset 0xDC, size 0x4
    class xVec3 contact; // offset 0xE0, size 0xC
    class xVec3 polynorm; // offset 0xEC, size 0xC
    unsigned int oid; // offset 0xF8, size 0x4
    void * optr; // offset 0xFC, size 0x4
    class xModelInstance * mptr; // offset 0x100, size 0x4
    signed int hitIt; // offset 0x104, size 0x4
    class xVec3 worldPos; // offset 0x108, size 0xC
    class xVec3 worldContact; // offset 0x114, size 0xC
    class xVec3 worldNormal; // offset 0x120, size 0xC
    class xVec3 worldTangent; // offset 0x12C, size 0xC
    class xVec3 worldPolynorm; // offset 0x138, size 0xC
};
class RwFrame {
    // total size: 0xB0
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
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
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class RpCollisionTriangle {
    // total size: 0x28
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
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
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class xEntAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned char pad; // offset 0xC, size 0x1
    unsigned int surfaceID; // offset 0x10, size 0x4
    class xVec3 ang; // offset 0x14, size 0xC
    class xVec3 pos; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    float redMult; // offset 0x38, size 0x4
    float greenMult; // offset 0x3C, size 0x4
    float blueMult; // offset 0x40, size 0x4
    float seeThru; // offset 0x44, size 0x4
    float seeThruSpeed; // offset 0x48, size 0x4
    unsigned int modelInfoID; // offset 0x4C, size 0x4
    unsigned int animListID; // offset 0x50, size 0x4
};
class RxPipelineNodeTopSortData {
    // total size: 0xC
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class xParabola {
    // total size: 0x24
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class RpIntersection {
    // total size: 0x1C
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
class xScene {
    // total size: 0x70
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_ents; // offset 0x6, size 0x2
    unsigned short num_trigs; // offset 0x8, size 0x2
    unsigned short num_stats; // offset 0xA, size 0x2
    unsigned short num_dyns; // offset 0xC, size 0x2
    unsigned short num_npcs; // offset 0xE, size 0x2
    unsigned short num_act_ents; // offset 0x10, size 0x2
    unsigned short num_nact_ents; // offset 0x12, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short num_ents_allocd; // offset 0x20, size 0x2
    unsigned short num_trigs_allocd; // offset 0x22, size 0x2
    unsigned short num_stats_allocd; // offset 0x24, size 0x2
    unsigned short num_dyns_allocd; // offset 0x26, size 0x2
    unsigned short num_npcs_allocd; // offset 0x28, size 0x2
    class xEnt * * trigs; // offset 0x2C, size 0x4
    class xEnt * * stats; // offset 0x30, size 0x4
    class xEnt * * dyns; // offset 0x34, size 0x4
    class xEnt * * npcs; // offset 0x38, size 0x4
    class xEnt * * act_ents; // offset 0x3C, size 0x4
    class xEnt * * nact_ents; // offset 0x40, size 0x4
    class xEnv * env; // offset 0x44, size 0x4
    class xMemPool mempool; // offset 0x48, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class RpWorldSector {
    // total size: 0x90
public:
    signed int type; // offset 0x0, size 0x4
    class RpPolygon * polygons; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList noCollAtomicsInWorldSector; // offset 0x40, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x48, size 0x8
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RwBBox tightBoundingBox; // offset 0x68, size 0x18
    class RpMeshHeader * mesh; // offset 0x80, size 0x4
    class RxPipeline * pipeline; // offset 0x84, size 0x4
    unsigned short matListWindowBase; // offset 0x88, size 0x2
    unsigned short numVertices; // offset 0x8A, size 0x2
    unsigned short numPolygons; // offset 0x8C, size 0x2
    unsigned short pad; // offset 0x8E, size 0x2
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
class ParabolaCBData {
    // total size: 0x18
public:
    class xParabola * p; // offset 0x0, size 0x4
    class xVec3 N; // offset 0x4, size 0xC
    float d; // offset 0x10, size 0x4
    class xCollis * colls; // offset 0x14, size 0x4
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class xCapsule {
    // total size: 0x1C
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
class xConic {
    // total size: 0xA0
public:
    class xMat4x3 basis; // offset 0x0, size 0x40
    class xMat4x3 invbasis; // offset 0x40, size 0x40
    float coef[5]; // offset 0x80, size 0x14
    class xVec3 coneBasisCenter; // offset 0x94, size 0xC
};
class xMat3x3 {
    // total size: 0x30
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
class xBound {
    // total size: 0x4C
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
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
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
class xEntFrame {
    // total size: 0xF0
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dpos; // offset 0xBC, size 0xC
    class xVec3 dvel; // offset 0xC8, size 0xC
    class xVec3 vel; // offset 0xD4, size 0xC
    unsigned int mode; // offset 0xE0, size 0x4
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class SweptSphereCollParam {
    // total size: 0x8
public:
    class RpGeometry * geometry; // offset 0x0, size 0x4
    class xSweptSphere * sws; // offset 0x4, size 0x4
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
class ConeDepen {
    // total size: 0x3B0
public:
    class xMat4x3 cullfrust; // offset 0x0, size 0x40
    class xMat4x3 circleBasis; // offset 0x40, size 0x40
    class xMat4x3 circleInvbasis; // offset 0x80, size 0x40
    class xConic conic; // offset 0xC0, size 0xA0
    class xVec3 start; // offset 0x160, size 0xC
    float coneCos; // offset 0x16C, size 0x4
    float coneDist; // offset 0x170, size 0x4
    float coneDist2; // offset 0x174, size 0x4
    float coneRadius; // offset 0x178, size 0x4
    float coneHeight; // offset 0x17C, size 0x4
    class xVec3 axis; // offset 0x180, size 0xC
    class xVec3 coneRight; // offset 0x18C, size 0xC
    class xVec3 coneAt; // offset 0x198, size 0xC
    unsigned int numInterval; // offset 0x1A4, size 0x4
    float interval[128]; // offset 0x1A8, size 0x200
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class xQCData {
    // total size: 0x20
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
class rxReq {
    // total size: 0x0
};
class RpV3dGradient {
    // total size: 0x18
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
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
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class xClumpCollBSPTriangle {
    // total size: 0x8
public:
    class /* @class */ {
        // total size: 0x4
    public:
        union { // inferred
            class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char platData; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
class xRay3 {
    // total size: 0x24
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class IntersectionCallBack {
    // total size: 0x4
public:
    union { // inferred
        class RpWorldSector * (* sectorCB)(class RpIntersection *, class RpWorldSector *, void *); // offset 0x0, size 0x4
        class RpCollisionTriangle * (* worldCB)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // offset 0x0, size 0x4
        class RpAtomic * (* atomicCB)(class RpIntersection *, class RpWorldSector *, class RpAtomic *, float, void *); // offset 0x0, size 0x4
    };
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
class RpCollBSPLeafNode {
    // total size: 0x4
public:
    unsigned short numPolygons; // offset 0x0, size 0x2
    unsigned short firstPolygon; // offset 0x2, size 0x2
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class xIsect {
    // total size: 0x2C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
class xLightKitLight {
    // total size: 0x60
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
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
class xShadowSimpleCache {
    // total size: 0x98
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    class xEnt * castOnEnt; // offset 0x20, size 0x4
    class xShadowSimplePoly poly; // offset 0x24, size 0x30
    float envHeight; // offset 0x54, size 0x4
    float shadowHeight; // offset 0x58, size 0x4
    unsigned int raster; // offset 0x5C, size 0x4
    float dydx; // offset 0x60, size 0x4
    float dydz; // offset 0x64, size 0x4
    class xVec3 corner[4]; // offset 0x68, size 0x30
};
enum _xCollsIdx {
    k_XCOLLS_IDX_FLOOR = 0,
    k_XCOLLS_IDX_CEIL = 1,
    k_XCOLLS_IDX_FRONT = 2,
    k_XCOLLS_IDX_LEFT = 3,
    k_XCOLLS_IDX_REAR = 4,
    k_XCOLLS_IDX_RIGHT = 5,
    k_XCOLLS_IDX_COUNT = 6,
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class xEntCollis {
    // total size: 0x5B4
public:
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    class xCollis colls[18]; // offset 0xC, size 0x5A0
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5AC, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5B0, size 0x4
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
class xSphereHitsModel_context {
    // total size: 0x20
public:
    class xCollis * coll; // offset 0x0, size 0x4
    class RpIntersection localx; // offset 0x4, size 0x1C
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
class RpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned char leftType; // offset 0x2, size 0x1
    unsigned char rightType; // offset 0x3, size 0x1
    unsigned short leftNode; // offset 0x4, size 0x2
    unsigned short rightNode; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class xQCControl {
    // total size: 0x3C
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
class CallBackParam {
    // total size: 0x8
public:
    class IntersectionCallBack u; // offset 0x0, size 0x4
    void * data; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class RpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numLeafNodes; // offset 0x0, size 0x4
    class RpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    class RpCollBSPLeafNode * leafNodes; // offset 0x8, size 0x4
    unsigned char pad[4]; // offset 0xC, size 0x4
};
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xFFX {
    // total size: 0x0
};
class RwSplitBits {
    // total size: 0x4
public:
    union { // inferred
        float nReal; // offset 0x0, size 0x4
        signed int nInt; // offset 0x0, size 0x4
        unsigned int nUInt; // offset 0x0, size 0x4
    };
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class xGrid {
    // total size: 0x34
public:
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    class xGridBound * * cells; // offset 0x2C, size 0x4
    class xGridBound * other; // offset 0x30, size 0x4
};
class iEnv {
    // total size: 0x30
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    class xJSPHeader * jsp; // offset 0x10, size 0x4
    class RpLight * light[2]; // offset 0x14, size 0x8
    class RwFrame * light_frame[2]; // offset 0x1C, size 0x8
    signed int memlvl; // offset 0x24, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
class xiMat4x3Union {
    // total size: 0x40
public:
    union { // inferred
        class xMat4x3 xm; // offset 0x0, size 0x40
        class RwMatrixTag im; // offset 0x0, size 0x40
    };
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
class xEntShadow {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class xSurface {
    // total size: 0x0
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
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
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
class anim_coll_data {
    // total size: 0x0
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
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class RwLine {
    // total size: 0x18
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
class RpIntersectData {
    // total size: 0x18
public:
    union { // inferred
        class RwLine line; // offset 0x0, size 0x18
        class RwV3d point; // offset 0x0, size 0xC
        class RwSphere sphere; // offset 0x0, size 0x10
        class RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
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
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class xJSPHeader {
    // total size: 0x18
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
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
class RpWorld {
    // total size: 0x70
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    class RpMaterialList matList; // offset 0x10, size 0xC
    class RpSector * rootSector; // offset 0x1C, size 0x4
    signed int numTexCoordSets; // offset 0x20, size 0x4
    signed int numClumpsInWorld; // offset 0x24, size 0x4
    class RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    class RwLinkList clumpList; // offset 0x2C, size 0x8
    class RwLinkList lightList; // offset 0x34, size 0x8
    class RwLinkList directionalLightList; // offset 0x3C, size 0x8
    class RwV3d worldOrigin; // offset 0x44, size 0xC
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
class nodeInfo {
    // total size: 0x8
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
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
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
class xClumpCollV3dGradient {
    // total size: 0x18
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float D; // offset 0xC, size 0x4
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

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C57F0 -> 0x001C5918
*/
// Range: 0x1C57F0 -> 0x1C5918
unsigned char xSphereHitsVCircle(class xVec3 & sc /* r2 */, float sr /* r29+0x20 */, class xVec3 & cc /* r2 */, float cr /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C57F0 -> 0x1C5918
        float ydist; // r1
        class xVec2 xzloc1; // r29+0x18
        class xVec2 xzloc2; // r29+0x10
        float max_xzdist; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5920 -> 0x001C5A80
*/
// Range: 0x1C5920 -> 0x1C5A80
unsigned char xSphereHitsVCylinder(class xVec3 & sc /* r2 */, float sr /* r29+0x20 */, class xVec3 & cc /* r2 */, float cr /* r29+0x20 */, float ch /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C5920 -> 0x1C5A80
        float ydist; // r1
        class xVec2 xzloc1; // r29+0x18
        class xVec2 xzloc2; // r29+0x10
        float max_xzdist; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C5A80 -> 0x001C6550
*/
// Range: 0x1C5A80 -> 0x1C6550
unsigned char xOBBHitsOBB(class xBox & a /* r2 */, class xMat4x3 & amat /* r2 */, class xBox & b /* r2 */, class xMat4x3 & bmat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C5A80 -> 0x1C6550
        class xVec3 & asize; // r2
        class xVec3 & bsize; // r2
        class xVec3 offset; // r29+0xF0
        class xVec3 aoffset; // r29+0xE0
        class xMat3x3 xmat; // r29+0x30
        class xMat3x3 axmat; // r29
        float ar; // r7
        float br; // r1
        float r; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6550 -> 0x001C686C
*/
// Range: 0x1C6550 -> 0x1C686C
unsigned char xSphereHitsBound(class xSphere & o /* r2 */, class xBound & b /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C6550 -> 0x1C686C
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6870 -> 0x001C6A60
*/
// Range: 0x1C6870 -> 0x1C6A60
unsigned char xSphereHitsCapsule(class xVec3 & center /* r2 */, float radius /* r29+0x40 */, class xVec3 & v1 /* r2 */, class xVec3 & v2 /* r2 */, float width /* r29+0x40 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C6870 -> 0x1C6A60
        class xVec3 d1; // r29+0x30
        class xVec3 d2; // r29+0x20
        float r; // r29+0x40
        float b; // r6
        float q; // r1
        float d; // r5
        float r1; // r3
        float r2; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6A60 -> 0x001C6C08
*/
// Range: 0x1C6A60 -> 0x1C6C08
signed int xSweptSphereToNonMoving(class xSweptSphere * sws /* r18 */, class xScene * sc /* r17 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C6A60 -> 0x1C6C08
        signed int envcollfound; // r16
        class xRay3 ray; // r29+0x40
        float one_len; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6C10 -> 0x001C6D44
*/
// Range: 0x1C6C10 -> 0x1C6D44
signed int xSweptSphereToNPC(class xSweptSphere * sws /* r2 */, class xScene * sc /* r2 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C6C10 -> 0x1C6D44
        class xRay3 ray; // r29+0x10
        float one_len; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6D50 -> 0x001C6EC4
*/
// Range: 0x1C6D50 -> 0x1C6EC4
signed int xSweptSphereToStatDyn(class xSweptSphere * sws /* r17 */, class xScene * sc /* r16 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C6D50 -> 0x1C6EC4
        class xRay3 ray; // r29+0x30
        float one_len; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C6ED0 -> 0x001C7098
*/
// Range: 0x1C6ED0 -> 0x1C7098
signed int xSweptSphereToScene(class xSweptSphere * sws /* r18 */, class xScene * sc /* r17 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C6ED0 -> 0x1C7098
        signed int envcollfound; // r16
        class xRay3 ray; // r29+0x40
        float one_len; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C70A0 -> 0x001C75BC
*/
// Range: 0x1C70A0 -> 0x1C75BC
static void SweptSphereHitsEntCB(class xRay3 * ray /* r16 */, class xQCData * qcd /* r2 */, class xEnt * ent /* r18 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C70A0 -> 0x1C75BC
        class xSweptSphere * sws; // r17
        class xMat4x3 * m1; // r4
        class xMat4x3 * m2; // r3
        unsigned int result; // r5
        float oldrad; // r20
        class xBox tmpbox; // r29+0xD0
        class xBox tmpbox; // r29+0xB0
        class xRay3 lr; // r29+0x80
        class xMat3x3 mn; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C75C0 -> 0x001C7994
*/
// Range: 0x1C75C0 -> 0x1C7994
signed int xSweptSphereToModel(class xSweptSphere * sws /* r20 */, class RpAtomic * model /* r16 */, class RwMatrixTag * mat /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C75C0 -> 0x1C7994
        class xMat4x3 oldinvbasis; // r29+0xD0
        class RpGeometry * geom; // r18
        class RwLine line; // r29+0xB0
        class SweptSphereCollParam isData; // r29+0x118
        class RpV3dGradient grad; // r29+0x90
        signed int i; // r19
        signed int numT; // r17
        class RpTriangle * tri; // r16
        class RwV3d * vert; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C79A0 -> 0x001C7AA4
*/
// Range: 0x1C79A0 -> 0x1C7AA4
static signed int SweptSphereModelCB(signed int numTriangles /* r20 */, signed int triOffset /* r2 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C79A0 -> 0x1C7AA4
        class SweptSphereCollParam * isData; // r2
        class RpGeometry * geometry; // r4
        class xSweptSphere * sws; // r19
        class RwV3d * vertices; // r18
        class RpTriangle * triangles; // r17
        signed int triSlot; // r2
        unsigned short * triIndex; // r16
        class RpTriangle * tri; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7AB0 -> 0x001C7C9C
*/
// Range: 0x1C7AB0 -> 0x1C7C9C
signed int xSweptSphereToEnv(class xSweptSphere * sws /* r2 */, class xEnv * env /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C7AB0 -> 0x1C7C9C
        class RwLine line; // r29+0x50
        class xClumpCollV3dGradient grad; // r29+0x30
        class RpIntersection isx; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7CA0 -> 0x001C7D44
*/
// Range: 0x1C7CA0 -> 0x1C7D44
static signed int SweptSphereLeafNodeCB(class xClumpCollBSPTriangle * triangles /* r17 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C7CA0 -> 0x1C7D44
        class xSweptSphere * sws; // r16
        class RwV3d * v1; // r2
        class RwV3d * v2; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7D50 -> 0x001C7DD4
*/
// Range: 0x1C7D50 -> 0x1C7DD4
static class RpCollisionTriangle * SweptSphereHitsEnvCB(class RpWorldSector * sector /* r18 */, class RpCollisionTriangle * tri /* r17 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C7D50 -> 0x1C7DD4
        class xSweptSphere * sws; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C7DE0 -> 0x001C89EC
*/
// Range: 0x1C7DE0 -> 0x1C89EC
signed int xSweptSphereToBox(class xSweptSphere * sws /* r16 */, class xBox * box /* r17 */, class xMat4x3 * mat /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C7DE0 -> 0x1C89EC
        signed int i; // r6
        class xMat4x3 tmpmat; // r29+0x80
        class xMat4x3 * boxinvbasis; // r2
        float dx; // r23
        float dy; // r22
        float dz; // r21
        float rad; // r22
        float radsqr; // r21
        float testdist; // r7
        float invZ; // r7
        class xVec3 boxPos; // r29+0x150
        class xVec3 boxaX; // r29+0x140
        class xVec3 boxaY; // r29+0x130
        class xVec3 boxaZ; // r29+0x120
        class xVec3 boxNorm; // r29+0x110
        class xVec3 boxA1; // r29+0x100
        class xVec3 boxA2; // r29+0xF0
        signed int quadfound; // r3
        float boxPlaneDepth; // r7
        float daX; // r29+0x160
        float daY; // r5
        float daZ; // r3
        float d1; // r6
        float d2; // r2
        float distzsqr; // r2
        class xVec3 xform[5]; // r29+0x40
        signed int edge_contact_found; // r5
        signed int vert_contact_found; // r4
        float edge_contact_lerp; // r20
        class xVec3 pt; // r29+0xE0
        class xVec3 cyl; // r29+0xD0
        class xVec3 uu; // r29+0xC0
        float magNsqr; // r6
        float dsqr; // r15
        float ulen; // r13
        float edgedot; // r3
        float magCsqr; // r2
        float distzsqr; // r2
        float lerp; // r29+0x160
        float invlerp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C89F0 -> 0x001C8B50
*/
// Range: 0x1C89F0 -> 0x1C8B50
signed int xSweptSphereToSphere(class xSweptSphere * sws /* r2 */, class xSphere * sph /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C89F0 -> 0x1C8B50
        float testdist; // r3
        float distzsqr; // r1
        float lerp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C8B50 -> 0x001C9538
*/
// Range: 0x1C8B50 -> 0x1C9538
signed int xSweptSphereToTriangle(class xSweptSphere * sws /* r2 */, class xVec3 * v0 /* r2 */, class xVec3 * v1 /* r2 */, class xVec3 * v2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C8B50 -> 0x1C9538
        signed int i; // r8
        float rad; // r29+0xA0
        float raddist; // r3
        float radsqr; // r9
        float startdot; // r3
        float enddot; // r2
        float testdist; // r8
        float invZ; // r8
        class xVec3 xform[4]; // r29
        class xVec3 xnorm; // r29+0x90
        class xVec3 contact; // r29+0x80
        class RwV3d vTmp; // r29+0x70
        class RwV3d vTmp2; // r29+0x60
        float recipLength; // r8
        float lengthSq; // r2
        float _result; // r29+0xA0
        float contx; // r15
        float conty; // r14
        float p0x; // r9
        float p0y; // r5
        float p1x; // r13
        float p1y; // r12
        float p2x; // r11
        float p2y; // r6
        float dot0; // r10
        float dot1; // r6
        float dot2; // r2
        signed int edge_contact_found; // r7
        signed int vert_contact_found; // r6
        float edge_contact_lerp; // r7
        class xVec3 pt; // r29+0x50
        class xVec3 cyl; // r29+0x40
        class xVec3 uu; // r29+0x30
        float magNsqr; // r6
        float dsqr; // r17
        float ulen; // r15
        float edgedot; // r3
        float magCsqr; // r2
        float distzsqr; // r2
        float lerp; // r29+0xA0
        float invlerp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C9540 -> 0x001C9830
*/
// Range: 0x1C9540 -> 0x1C9830
void xSweptSphereGetResults(class xSweptSphere * sws /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C9540 -> 0x1C9830
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C9830 -> 0x001C9BD4
*/
// Range: 0x1C9830 -> 0x1C9BD4
void xSweptSpherePrepare(class xSweptSphere * sws /* r18 */, class xVec3 * start /* r17 */, class xVec3 * end /* r16 */, float radius /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C9830 -> 0x1C9BD4
        float dx; // r5
        float dy; // r4
        float dz; // r3
        float invmag; // r2
        class xCapsule tmpC; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C9BE0 -> 0x001CA540
*/
// Range: 0x1C9BE0 -> 0x1CA540
class RpCollBSPTree * _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(class RpCollBSPTree * tree /* r23 */, class RwLine * line /* r2 */, float radius /* r29+0xD8 */, class RpV3dGradient * grad /* r21 */, signed int (* callBack)(signed int, signed int, void *) /* r30 */, void * data /* r29+0xDC */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1C9BE0 -> 0x1CA540
        signed int nStack; // r20
        class nodeInfo nodeStack[33]; // r29+0x420
        class RwLine lineStack[33]; // r29+0x100
        class RwLine currLine; // r29+0xE0
        class RpCollBSPLeafNode * leaf; // r2
        class RpCollBSPBranchNode * branch; // r9
        unsigned int branch_type; // r5
        unsigned int branch_leftType; // r6
        unsigned int branch_rightType; // r4
        unsigned int branch_leftNode; // r3
        unsigned int branch_rightNode; // r2
        class RwSplitBits lStart; // r29+0x53C
        class RwSplitBits lEnd; // r29+0x538
        class RwSplitBits rStart; // r29+0x534
        class RwSplitBits rEnd; // r29+0x530
        float delta; // r5
        float delta; // r5
        float delta; // r6
        float delta; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CA540 -> 0x001CAD6C
*/
// Range: 0x1CA540 -> 0x1CAD6C
class xVec3 xCollisTriHit(class tri_data & tri /* r2 */, class xModelInstance & model /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CA540 -> 0x1CAD6C
        class xMat4x3 & m; // r7
        class xVec3 v[3]; // r29+0xB0
        class RpGeometry * geom; // r8
        class xVec3 * verts; // r6
        class RpTriangle & t; // r20
        signed int i; // r3
        class xVec3 r[2]; // r29+0x90
        class xVec3 d; // r29+0x2F0
        class xVec3 A; // r29+0x2E0
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CAD70 -> 0x001CBA78
*/
// Range: 0x1CAD70 -> 0x1CBA78
void xCollideCalcTri(class tri_data & tri /* r2 */, class xModelInstance & model /* r2 */, class xVec3 & center /* r2 */, class xVec3 & heading /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CAD70 -> 0x1CBA78
        class xVec3 v[3]; // r29+0x40
        class RpGeometry * geom; // r5
        class xVec3 * verts; // r11
        class RpMorphTarget * mt; // r3
        class RpTriangle & t; // r10
        signed int i; // r9
        class xVec3 e[3]; // r29+0x10
        class /* @class */ {
            // total size: 0x10
        public:
            class xVec3 norm; // offset 0x0, size 0xC
            float D; // offset 0xC, size 0x4
        } plane; // r29
        class xVec3 p; // r29+0x330
        float num; // r2
        float denom; // r1
        class xVec3 b; // r29+0x320
        class xVec3 A; // r29+0x310
        class xVec3 B; // r29+0x300
        class xVec3 C; // r29+0x2F0
        class xVec3 AxB; // r29+0x2E0
        class xVec3 CxB; // r29+0x2D0
        float len2; // r7
        class xVec3 d; // r29+0x2C0
        class xVec3 ad; // r29+0x2B0
        class xVec3 d; // r29+0x2A0
        class xVec3 ad; // r29+0x290
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CBA80 -> 0x001CBAF0
*/
// Range: 0x1CBA80 -> 0x1CBAF0
unsigned int xBoxHitsObb(class xBox * a /* r2 */, class xBox * b /* r5 */, class xMat4x3 * mat /* r2 */, class xCollis * coll /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CBA80 -> 0x1CBAF0
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CBAF0 -> 0x001CCC38
*/
// Range: 0x1CBAF0 -> 0x1CCC38
static unsigned int Mgc_BoxBoxTest(class xBox * a /* r2 */, class xMat4x3 * matA /* r2 */, class xBox * b /* r2 */, class xMat4x3 * matB /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CBAF0 -> 0x1CCC38
        class xVec3 akA[3]; // r29+0xD0
        class xVec3 akB[3]; // r29+0xA0
        float afEA[3]; // r29+0x150
        float afEB[3]; // r29+0x140
        float _mag; // r4
        float _mag; // r4
        float _mag; // r4
        float _mag; // r4
        float _mag; // r4
        float _mag; // r4
        class xVec3 centA; // r29+0x130
        class xVec3 centB; // r29+0x120
        class xVec3 kD; // r29+0x110
        float aafC[3][3]; // r29+0x70
        float aafAbsC[3][3]; // r29+0x40
        float afAD[3]; // r29+0x100
        float fR0; // r29+0x160
        float fR1; // r3
        float fR; // r1
        float fR01; // r29+0x160
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CCC40 -> 0x001CCDD8
*/
// Range: 0x1CCC40 -> 0x1CCDD8
unsigned int xBoxHitsSphere(class xBox * a /* r2 */, class xSphere * b /* r2 */, class xCollis * coll /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CCC40 -> 0x1CCDD8
        class xIsect isx; // r29+0x20
        float scale; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CCDE0 -> 0x001CD118
*/
// Range: 0x1CCDE0 -> 0x1CD118
signed int xParabolaHitsEnv(class xParabola * p /* r2 */, class xEnv * env /* r2 */, class xCollis * colls /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CCDE0 -> 0x1CD118
        class RwBBox xb; // r29+0x40
        float extremumT; // r5
        float extremum; // r1
        class ParabolaCBData data; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD120 -> 0x001CD7A8
*/
// Range: 0x1CD120 -> 0x1CD7A8
static signed int xParabolaEnvCB(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CD120 -> 0x1CD7A8
        class ParabolaCBData * pd; // r19
        class xParabola * p; // r18
        class xCollis * colls; // r17
        class xVec3 * v0; // r16
        class xVec3 * v1; // r4
        class xVec3 * v2; // r3
        unsigned char tester; // r2
        float a; // r6
        float b; // r5
        float c; // r8
        float det; // r7
        class xVec3 N; // r29+0xA0
        float t1; // r27
        float t2; // r26
        float c1; // r3
        float c2; // r2
        float c0; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD7B0 -> 0x001CD838
*/
// Range: 0x1CD7B0 -> 0x1CD838
void xParabolaRecenter(class xParabola * p /* r2 */, float newZeroT /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CD7B0 -> 0x1CD838
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CD840 -> 0x001CDCA8
*/
// Range: 0x1CD840 -> 0x1CDCA8
unsigned int xSphereHitsModel(class xSphere * b /* r19 */, class xModelInstance * m /* r18 */, class xCollis * coll /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CD840 -> 0x1CDCA8
        class RpIntersection isx; // r29+0x80
        class xSphereHitsModel_context context; // r29+0x60
        class xMat4x3 * mat; // r16
        class RwFrame * frame; // r2
        float mscale; // r20
        float mag2; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CDCB0 -> 0x001CDCCC
*/
// Range: 0x1CDCB0 -> 0x1CDCCC
static class RpCollisionTriangle * sphereHitsModelCB(class RpCollisionTriangle * tri /* r3 */, float dist /* r29 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CDCB0 -> 0x1CDCCC
        class xSphereHitsModel_context * context; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CDCD0 -> 0x001CE2B4
*/
// Range: 0x1CDCD0 -> 0x1CE2B4
unsigned int xSphereHitsOBB_nu(class xSphere * s /* r17 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */, class xCollis * coll /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CDCD0 -> 0x1CE2B4
        class xSphere xfs; // r29+0x90
        class xVec3 scale; // r29+0xA0
        class xMat4x3 mnormal; // r29+0x50
        float len2; // r4
        float len_inv; // r1
        float len2; // r3
        float len_inv; // r1
        float len2; // r3
        float len_inv; // r1
        class xBox sbox; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CE2C0 -> 0x001CE460
*/
// Range: 0x1CE2C0 -> 0x1CE460
unsigned int xSphereHitsBox(class xSphere * a /* r2 */, class xBox * b /* r2 */, class xCollis * coll /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CE2C0 -> 0x1CE460
        class xIsect isx; // r29+0x20
        float scale; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CE460 -> 0x001CE664
*/
// Range: 0x1CE460 -> 0x1CE664
unsigned int xSphereHitsSphere(class xSphere * a /* r17 */, class xSphere * b /* r2 */, class xCollis * coll /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CE460 -> 0x1CE664
        class xIsect isx; // r29+0x30
        float scale; // r1
        float scale; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CE670 -> 0x001CE678
*/
// Range: 0x1CE670 -> 0x1CE678
void xCollideInit(class xScene * sc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CE670 -> 0x1CE678
    }
}

/*
    Compile unit: C:\SB\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001CE680 -> 0x001CE7FC
*/
// Range: 0x1CE680 -> 0x1CE7FC
enum _xCollsIdx xCollideGetCollsIdx(class xCollis * coll /* r2 */, class xVec3 * tohit /* r17 */, class xMat3x3 * mat /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1CE680 -> 0x1CE7FC
        float local_x; // r3
        float local_z; // r1
    }
}

