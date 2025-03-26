/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class RpAtomic * (* gAtomicRenderCallBack)(class RpAtomic *); // size: 0x4, address: 0x50F9BC
float EnvMapShininess; // size: 0x4, address: 0x50E858
float BumpMapBumpiness; // size: 0x4, address: 0x0
class RpLight * MainLight; // size: 0x4, address: 0x50F9C0
unsigned int xfx_initted; // size: 0x4, address: 0x50F9C4
class xFXRing ringlist[8]; // size: 0x1E0, address: 0x5613C0
static class RxObjSpace3DVertex * Im3DBuffer; // size: 0x4, address: 0x0
static unsigned int Im3DBufferPos; // size: 0x4, address: 0x50F9C8
static class RwTexture * g_txtr_drawRing; // size: 0x4, address: 0x50F9CC
static class xFXBubbleParams defaultBFX[1]; // size: 0x18, address: 0x418B50
static unsigned int bfx_curr; // size: 0x4, address: 0x50F9D0
static unsigned int bfx_max; // size: 0x4, address: 0x0
static class xFXBubbleParams * BFX; // size: 0x4, address: 0x50E85C
static unsigned int sFresnelMap; // size: 0x4, address: 0x50F9D4
static unsigned int sEnvMap; // size: 0x4, address: 0x50F9D8
static signed int sTweaked; // size: 0x4, address: 0x50F9DC
static class RxPipeline * xFXanimUVPipeline; // size: 0x4, address: 0x50F9E0
float xFXanimUVRotMat0[2]; // size: 0x8, address: 0x50E860
float xFXanimUVRotMat1[2]; // size: 0x8, address: 0x50E868
float xFXanimUVTrans[2]; // size: 0x8, address: 0x50F9E8
float xFXanimUVScale[2]; // size: 0x8, address: 0x50E870
float xFXanimUV2PRotMat0[2]; // size: 0x8, address: 0x50E878
float xFXanimUV2PRotMat1[2]; // size: 0x8, address: 0x50E880
float xFXanimUV2PTrans[2]; // size: 0x8, address: 0x50F9F0
float xFXanimUV2PScale[2]; // size: 0x8, address: 0x50E888
class RwTexture * xFXanimUV2PTexture; // size: 0x4, address: 0x50F9F8
class RxPipeline * xFXgooPipeline; // size: 0x4, address: 0x50F9FC
static unsigned char alpha_count0[300]; // size: 0x12C, address: 0x5615A0
static unsigned char alpha_count1[300]; // size: 0x12C, address: 0x5616D0
unsigned char segments[43]; // size: 0x2B, address: 0x4F8BD0
static class _tagFirework sFirework[10]; // size: 0x168, address: 0x561800
static class zParEmitter * sFireworkTrailEmit; // size: 0x4, address: 0x50FA00
static class zParEmitter * sFirework1Emit; // size: 0x4, address: 0x50FA04
static class zParEmitter * sFirework2Emit; // size: 0x4, address: 0x50FA08
static unsigned int sFireworkSoundID; // size: 0x4, address: 0x50FA0C
static unsigned int sFireworkLaunchSoundID; // size: 0x4, address: 0x50FA10
class xFXStreak sStreakList[10]; // size: 0x4038, address: 0x561970
class xFXShine sShineList[2]; // size: 0x22F0, address: 0x565A40
static class xFXRibbon * active_ribbons[64]; // size: 0x100, address: 0x567DC0
static unsigned int active_ribbons_size; // size: 0x4, address: 0x50FA14
static unsigned char ribbons_dirty; // size: 0x1, address: 0x50FA18
static char * blend_mode_labels[11]; // size: 0x2C, address: 0x0
static unsigned int blend_mode_values[11]; // size: 0x2C, address: 0x0
static unsigned int blend_modes; // size: 0x4, address: 0x0
class tier_queue_allocator joint_alloc; // size: 0x1C, address: 0x567EC0
static float sAuraPulse[2]; // size: 0x8, address: 0x50FA20
static float sAuraPulseAng[2]; // size: 0x8, address: 0x50FA28
static class _xFXAuraAngle sAuraAngle[2]; // size: 0x18, address: 0x567EE0
static class RwTexture * gAuraTex; // size: 0x4, address: 0x50FA30
static class _xFXAura sAura[32]; // size: 0x480, address: 0x567F00
unsigned int gFrameCount; // size: 0x4, address: 0x50F94C
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
signed int compare_ribbons(void *, void *); // size: 0x0, address: 0x1E70E0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class tagiRenderInput gRenderBuffer; // size: 0x80, address: 0x538BD0
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
class RpAtomic * AtomicResetMaterialEffects(class RpAtomic *, void *); // size: 0x0, address: 0x0
class RpMaterial * MaterialResetEffects(class RpMaterial *, void *); // size: 0x0, address: 0x0
unsigned int gFXSurfaceFlags; // size: 0x4, address: 0x50F4D8
class RpMaterial * MaterialSetBumpMap(class RpMaterial *, void *); // size: 0x0, address: 0x0
class RpMaterial * MaterialSetBumpiness(class RpMaterial *, void *); // size: 0x0, address: 0x0
class RpMaterial * MaterialSetShininess(class RpMaterial *, void *); // size: 0x0, address: 0x1EACD0
class RpMaterial * MaterialSetEnvMap2(class RpMaterial *, void *); // size: 0x0, address: 0x1EAB60
class RpMaterial * MatUpdateFrame(class RpMaterial *, void *); // size: 0x0, address: 0x0
class RpMaterial * MaterialDisableMatFX(class RpMaterial *, void *); // size: 0x0, address: 0x1EADD0
class RpAtomic * PreAllocMatFX_cb(class RpAtomic *, void *); // size: 0x0, address: 0x1EAD30
class RpAtomic * AtomicDefaultRenderCallBack(class RpAtomic *); // size: 0x0, address: 0x21F4C0
class RpAtomic * xFXBubbleRender(class RpAtomic *); // size: 0x0, address: 0x1EA900
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
class tri_data {
    // total size: 0x78
public:
    class vert_data vert[3]; // offset 0x0, size 0x78
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
class xFXRibbon {
    // total size: 0x140
public:
    class config cfg; // offset 0x0, size 0x10
    unsigned char activated; // offset 0x10, size 0x1
    class RwRaster * raster; // offset 0x14, size 0x4
    class tier_queue joints; // offset 0x18, size 0x110
    class curve_node * curve; // offset 0x128, size 0x4
    unsigned int curve_size; // offset 0x12C, size 0x4
    unsigned int curve_index; // offset 0x130, size 0x4
    float ilife; // offset 0x134, size 0x4
    unsigned int mtime; // offset 0x138, size 0x4
    unsigned int mlife; // offset 0x13C, size 0x4
};
class xPEEntBound {
    // total size: 0xC
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class config {
    // total size: 0x10
public:
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
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
class zSurfUVFX {
    // total size: 0x60
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    class xVec3 trans; // offset 0xC, size 0xC
    class xVec3 trans_spd; // offset 0x18, size 0xC
    class xVec3 scale; // offset 0x24, size 0xC
    class xVec3 scale_spd; // offset 0x30, size 0xC
    class xVec3 min; // offset 0x3C, size 0xC
    class xVec3 max; // offset 0x48, size 0xC
    class xVec3 minmax_spd; // offset 0x54, size 0xC
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
class RpSkin {
    // total size: 0x0
};
class xFXStreak {
    // total size: 0x66C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float frequency; // offset 0x4, size 0x4
    float alphaFadeRate; // offset 0x8, size 0x4
    float alphaStart; // offset 0xC, size 0x4
    float elapsed; // offset 0x10, size 0x4
    float lifetime; // offset 0x14, size 0x4
    unsigned int head; // offset 0x18, size 0x4
    class iColor_tag color_a; // offset 0x1C, size 0x4
    class iColor_tag color_b; // offset 0x20, size 0x4
    class RwTexture * texturePtr; // offset 0x24, size 0x4
    class RwRaster * textureRasterPtr; // offset 0x28, size 0x4
    class xFXStreakElem elem[50]; // offset 0x2C, size 0x640
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
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
class RxObjSpace3DVertex {
    // total size: 0x24
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
class block_data {
    // total size: 0x8
public:
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class curve_node {
    // total size: 0xC
public:
    float time; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
class _tagxPad {
    // total size: 0x148
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
class xFXBubbleParams {
    // total size: 0x18
public:
    unsigned int pass1 : 1; // offset 0x0, size 0x4
    unsigned int pass2 : 1; // offset 0x0, size 0x4
    unsigned int pass3 : 1; // offset 0x0, size 0x4
    unsigned int padding : 5; // offset 0x0, size 0x4
    unsigned char pass1_alpha; // offset 0x1, size 0x1
    unsigned char pass2_alpha; // offset 0x2, size 0x1
    unsigned char pass3_alpha; // offset 0x3, size 0x1
    unsigned int pass1_fbmsk; // offset 0x4, size 0x4
    unsigned int fresnel_map; // offset 0x8, size 0x4
    float fresnel_map_coeff; // offset 0xC, size 0x4
    unsigned int env_map; // offset 0x10, size 0x4
    float env_map_coeff; // offset 0x14, size 0x4
};
class zPlayerGlobals {
    // total size: 0x1940
public:
    class zEnt ent; // offset 0x0, size 0xD4
    class xEntShadow entShadow_embedded; // offset 0xD4, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0xFC, size 0x98
    class zGlobalSettings g; // offset 0x194, size 0x150
    class zPlayerSettings * s; // offset 0x2E4, size 0x4
    class zPlayerSettings sb; // offset 0x2F0, size 0x460
    class zPlayerSettings patrick; // offset 0x750, size 0x460
    class zPlayerSettings sandy; // offset 0xBB0, size 0x460
    class xModelInstance * model_spongebob; // offset 0x1010, size 0x4
    class xModelInstance * model_patrick; // offset 0x1014, size 0x4
    class xModelInstance * model_sandy; // offset 0x1018, size 0x4
    unsigned int Visible; // offset 0x101C, size 0x4
    unsigned int Health; // offset 0x1020, size 0x4
    signed int Speed; // offset 0x1024, size 0x4
    float SpeedMult; // offset 0x1028, size 0x4
    signed int Sneak; // offset 0x102C, size 0x4
    signed int Teeter; // offset 0x1030, size 0x4
    float SlipFadeTimer; // offset 0x1034, size 0x4
    signed int Slide; // offset 0x1038, size 0x4
    float SlideTimer; // offset 0x103C, size 0x4
    signed int Stepping; // offset 0x1040, size 0x4
    signed int JumpState; // offset 0x1044, size 0x4
    signed int LastJumpState; // offset 0x1048, size 0x4
    float JumpTimer; // offset 0x104C, size 0x4
    float LookAroundTimer; // offset 0x1050, size 0x4
    unsigned int LookAroundRand; // offset 0x1054, size 0x4
    unsigned int LastProjectile; // offset 0x1058, size 0x4
    float DecelRun; // offset 0x105C, size 0x4
    float DecelRunSpeed; // offset 0x1060, size 0x4
    float HotsauceTimer; // offset 0x1064, size 0x4
    float LeanLerp; // offset 0x1068, size 0x4
    float ScareTimer; // offset 0x106C, size 0x4
    class xBase * ScareSource; // offset 0x1070, size 0x4
    float CowerTimer; // offset 0x1074, size 0x4
    float DamageTimer; // offset 0x1078, size 0x4
    float SundaeTimer; // offset 0x107C, size 0x4
    float ControlOffTimer; // offset 0x1080, size 0x4
    float HelmetTimer; // offset 0x1084, size 0x4
    unsigned int WorldDisguise; // offset 0x1088, size 0x4
    unsigned int Bounced; // offset 0x108C, size 0x4
    float FallDeathTimer; // offset 0x1090, size 0x4
    float HeadbuttVel; // offset 0x1094, size 0x4
    float HeadbuttTimer; // offset 0x1098, size 0x4
    unsigned int SpecialReceived; // offset 0x109C, size 0x4
    class xEnt * MountChimney; // offset 0x10A0, size 0x4
    float MountChimOldY; // offset 0x10A4, size 0x4
    unsigned int MaxHealth; // offset 0x10A8, size 0x4
    unsigned int DoMeleeCheck; // offset 0x10AC, size 0x4
    float VictoryTimer; // offset 0x10B0, size 0x4
    float BadGuyNearTimer; // offset 0x10B4, size 0x4
    float ForceSlipperyTimer; // offset 0x10B8, size 0x4
    float ForceSlipperyFriction; // offset 0x10BC, size 0x4
    float ShockRadius; // offset 0x10C0, size 0x4
    float ShockRadiusOld; // offset 0x10C4, size 0x4
    float Face_ScareTimer; // offset 0x10C8, size 0x4
    unsigned int Face_ScareRandom; // offset 0x10CC, size 0x4
    unsigned int Face_Event; // offset 0x10D0, size 0x4
    float Face_EventTimer; // offset 0x10D4, size 0x4
    float Face_PantTimer; // offset 0x10D8, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x10DC, size 0x4
    unsigned int IdleRand; // offset 0x10E0, size 0x4
    float IdleMinorTimer; // offset 0x10E4, size 0x4
    float IdleMajorTimer; // offset 0x10E8, size 0x4
    float IdleSitTimer; // offset 0x10EC, size 0x4
    signed int Transparent; // offset 0x10F0, size 0x4
    class zEnt * FireTarget; // offset 0x10F4, size 0x4
    unsigned int ControlOff; // offset 0x10F8, size 0x4
    unsigned int ControlOnEvent; // offset 0x10FC, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1100, size 0x4
    float AutoMoveDist; // offset 0x1104, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1108, size 0xC
    class xBase * AutoMoveObject; // offset 0x1114, size 0x4
    class zEnt * Diggable; // offset 0x1118, size 0x4
    float DigTimer; // offset 0x111C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1120, size 0xE0
    class zPlayerLassoInfo lassoInfo; // offset 0x1200, size 0x120
    class xModelTag BubbleWandTag[2]; // offset 0x1320, size 0x40
    class xModelInstance * model_wand; // offset 0x1360, size 0x4
    class xEntBoulder * bubblebowl; // offset 0x1364, size 0x4
    float bbowlInitVel; // offset 0x1368, size 0x4
    class zEntHangable * HangFound; // offset 0x136C, size 0x4
    class zEntHangable * HangEnt; // offset 0x1370, size 0x4
    class zEntHangable * HangEntLast; // offset 0x1374, size 0x4
    class xVec3 HangPivot; // offset 0x1378, size 0xC
    class xVec3 HangVel; // offset 0x1384, size 0xC
    float HangLength; // offset 0x1390, size 0x4
    class xVec3 HangStartPos; // offset 0x1394, size 0xC
    float HangStartLerp; // offset 0x13A0, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x13A4, size 0x80
    float HangPawOffset; // offset 0x1424, size 0x4
    float HangElapsed; // offset 0x1428, size 0x4
    float Jump_CurrGravity; // offset 0x142C, size 0x4
    float Jump_HoldTimer; // offset 0x1430, size 0x4
    float Jump_ChangeTimer; // offset 0x1434, size 0x4
    signed int Jump_CanDouble; // offset 0x1438, size 0x4
    signed int Jump_CanFloat; // offset 0x143C, size 0x4
    signed int Jump_SpringboardStart; // offset 0x1440, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x1444, size 0x4
    signed int CanJump; // offset 0x1448, size 0x4
    signed int CanBubbleSpin; // offset 0x144C, size 0x4
    signed int CanBubbleBounce; // offset 0x1450, size 0x4
    signed int CanBubbleBash; // offset 0x1454, size 0x4
    signed int IsJumping; // offset 0x1458, size 0x4
    signed int IsDJumping; // offset 0x145C, size 0x4
    signed int IsBubbleSpinning; // offset 0x1460, size 0x4
    signed int IsBubbleBouncing; // offset 0x1464, size 0x4
    signed int IsBubbleBashing; // offset 0x1468, size 0x4
    signed int IsBubbleBowling; // offset 0x146C, size 0x4
    signed int WasDJumping; // offset 0x1470, size 0x4
    signed int IsCoptering; // offset 0x1474, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x1478, size 0x4
    signed int cheat_mode; // offset 0x147C, size 0x4
    unsigned int Inv_Shiny; // offset 0x1480, size 0x4
    unsigned int Inv_Spatula; // offset 0x1484, size 0x4
    unsigned int Inv_PatsSock[15]; // offset 0x1488, size 0x3C
    unsigned int Inv_PatsSock_Max[15]; // offset 0x14C4, size 0x3C
    unsigned int Inv_PatsSock_CurrentLevel; // offset 0x1500, size 0x4
    unsigned int Inv_LevelPickups[15]; // offset 0x1504, size 0x3C
    unsigned int Inv_LevelPickups_CurrentLevel; // offset 0x1540, size 0x4
    unsigned int Inv_PatsSock_Total; // offset 0x1544, size 0x4
    class xModelTag BubbleTag; // offset 0x1548, size 0x20
    class xEntDrive drv; // offset 0x1568, size 0x7C
    class xSurface * floor_surf; // offset 0x15E4, size 0x4
    class xVec3 floor_norm; // offset 0x15E8, size 0xC
    signed int slope; // offset 0x15F4, size 0x4
    class xCollis earc_coll; // offset 0x15F8, size 0x50
    class xSphere head_sph; // offset 0x1648, size 0x10
    class xModelTag center_tag; // offset 0x1658, size 0x20
    class xModelTag head_tag; // offset 0x1678, size 0x20
    unsigned int TongueFlags[2]; // offset 0x1698, size 0x8
    class xVec3 RootUp; // offset 0x16A0, size 0xC
    class xVec3 RootUpTarget; // offset 0x16AC, size 0xC
    class zCheckPoint cp; // offset 0x16B8, size 0x14
    unsigned int SlideTrackSliding; // offset 0x16CC, size 0x4
    unsigned int SlideTrackCount; // offset 0x16D0, size 0x4
    class xEnt * SlideTrackEnt[111]; // offset 0x16D4, size 0x1BC
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1890, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1894, size 0xC
    class xVec3 SlideTrackVel; // offset 0x18A0, size 0xC
    float SlideTrackDecay; // offset 0x18AC, size 0x4
    float SlideTrackLean; // offset 0x18B0, size 0x4
    float SlideTrackLand; // offset 0x18B4, size 0x4
    unsigned char sb_model_indices[14]; // offset 0x18B8, size 0xE
    class xModelInstance * sb_models[14]; // offset 0x18C8, size 0x38
    unsigned int currentPlayer; // offset 0x1900, size 0x4
    class xVec3 PredictRotate; // offset 0x1904, size 0xC
    class xVec3 PredictTranslate; // offset 0x1910, size 0xC
    float PredictAngV; // offset 0x191C, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1920, size 0xC
    float PredictCurrVel; // offset 0x192C, size 0x4
    float KnockBackTimer; // offset 0x1930, size 0x4
    float KnockIntoAirTimer; // offset 0x1934, size 0x4
};
class zSurfaceProps {
    // total size: 0x10C
public:
    class zSurfAssetBase * asset; // offset 0x0, size 0x4
    unsigned int texanim_flags; // offset 0x4, size 0x4
    class zSurfacePropTexAnim texanim[2]; // offset 0x8, size 0x30
    unsigned int uvfx_flags; // offset 0x38, size 0x4
    class zSurfacePropUVFX uvfx[2]; // offset 0x3C, size 0xD0
};
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
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
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
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
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class zSurfAssetBase : public xBaseAsset {
    // total size: 0x12C
public:
    unsigned char game_damage_type; // offset 0x8, size 0x1
    unsigned char game_sticky; // offset 0x9, size 0x1
    unsigned char game_damage_flags; // offset 0xA, size 0x1
    unsigned char surf_type; // offset 0xB, size 0x1
    unsigned char phys_pad; // offset 0xC, size 0x1
    unsigned char sld_start; // offset 0xD, size 0x1
    unsigned char sld_stop; // offset 0xE, size 0x1
    unsigned char phys_flags; // offset 0xF, size 0x1
    float friction; // offset 0x10, size 0x4
    class zSurfMatFX matfx; // offset 0x14, size 0x18
    class zSurfColorFX colorfx; // offset 0x2C, size 0x8
    unsigned int texture_anim_flags; // offset 0x34, size 0x4
    class zSurfTextureAnim texture_anim[2]; // offset 0x38, size 0x18
    unsigned int uvfx_flags; // offset 0x50, size 0x4
    class zSurfUVFX uvfx[2]; // offset 0x54, size 0xC0
    unsigned char on; // offset 0x114, size 0x1
    unsigned char surf_pad[3]; // offset 0x115, size 0x3
    float oob_delay; // offset 0x118, size 0x4
    float walljump_scale_xz; // offset 0x11C, size 0x4
    float walljump_scale_y; // offset 0x120, size 0x4
    float damage_timer; // offset 0x124, size 0x4
    float damage_bounce; // offset 0x128, size 0x4
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
class _tagFirework {
    // total size: 0x24
public:
    signed int state; // offset 0x0, size 0x4
    float timer; // offset 0x4, size 0x4
    class xVec3 vel; // offset 0x8, size 0xC
    class xVec3 pos; // offset 0x14, size 0xC
    float fuel; // offset 0x20, size 0x4
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
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
class zPlayerCarryInfo {
    // total size: 0xE0
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xMat4x3 spin; // offset 0x10, size 0x40
    class xEnt * throwTarget; // offset 0x50, size 0x4
    class xEnt * flyingToTarget; // offset 0x54, size 0x4
    float minDist; // offset 0x58, size 0x4
    float maxDist; // offset 0x5C, size 0x4
    float minHeight; // offset 0x60, size 0x4
    float maxHeight; // offset 0x64, size 0x4
    float maxCosAngle; // offset 0x68, size 0x4
    float throwMinDist; // offset 0x6C, size 0x4
    float throwMaxDist; // offset 0x70, size 0x4
    float throwMinHeight; // offset 0x74, size 0x4
    float throwMaxHeight; // offset 0x78, size 0x4
    float throwMaxStack; // offset 0x7C, size 0x4
    float throwMaxCosAngle; // offset 0x80, size 0x4
    float throwTargetRotRate; // offset 0x84, size 0x4
    float targetRot; // offset 0x88, size 0x4
    unsigned int grabTarget; // offset 0x8C, size 0x4
    class xVec3 grabOffset; // offset 0x90, size 0xC
    float grabLerpMin; // offset 0x9C, size 0x4
    float grabLerpMax; // offset 0xA0, size 0x4
    float grabLerpLast; // offset 0xA4, size 0x4
    unsigned int grabYclear; // offset 0xA8, size 0x4
    float throwGravity; // offset 0xAC, size 0x4
    float throwHeight; // offset 0xB0, size 0x4
    float throwDistance; // offset 0xB4, size 0x4
    float fruitFloorDecayMin; // offset 0xB8, size 0x4
    float fruitFloorDecayMax; // offset 0xBC, size 0x4
    float fruitFloorBounce; // offset 0xC0, size 0x4
    float fruitFloorFriction; // offset 0xC4, size 0x4
    float fruitCeilingBounce; // offset 0xC8, size 0x4
    float fruitWallBounce; // offset 0xCC, size 0x4
    float fruitLifetime; // offset 0xD0, size 0x4
    class xEnt * patLauncher; // offset 0xD4, size 0x4
};
class joint_data {
    // total size: 0x2C
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int born; // offset 0x4, size 0x4
    class xVec3 loc; // offset 0x8, size 0xC
    class xVec3 norm; // offset 0x14, size 0xC
    float orient; // offset 0x20, size 0x4
    float scale; // offset 0x24, size 0x4
    float alpha; // offset 0x28, size 0x4
};
class xSurface : public xBase {
    // total size: 0x28
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
class _xFXAuraAngle {
    // total size: 0xC
public:
    float angle; // offset 0x0, size 0x4
    float cc; // offset 0x4, size 0x4
    float ss; // offset 0x8, size 0x4
};
enum RpMatFXMaterialFlags {
    rpMATFXEFFECTNULL = 0,
    rpMATFXEFFECTBUMPMAP = 1,
    rpMATFXEFFECTENVMAP = 2,
    rpMATFXEFFECTBUMPENVMAP = 3,
    rpMATFXEFFECTDUAL = 4,
    rpMATFXEFFECTUVTRANSFORM = 5,
    rpMATFXEFFECTDUALUVTRANSFORM = 6,
    rpMATFXEFFECTMAX = 7,
    rpMATFXNUMEFFECTS = 6,
    rpMATFXFORCEENUMSIZEINT = 2147483647,
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
class xFXShine {
    // total size: 0x1178
public:
    unsigned int flags; // offset 0x0, size 0x4
    class xVec3 * ppos; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    float spd; // offset 0x14, size 0x4
    float width; // offset 0x18, size 0x4
    float frequency; // offset 0x1C, size 0x4
    float elapsed; // offset 0x20, size 0x4
    float lifetimeElemMax; // offset 0x24, size 0x4
    float lifetimeMax; // offset 0x28, size 0x4
    float lifetime; // offset 0x2C, size 0x4
    float rotateSpeed; // offset 0x30, size 0x4
    float rotateZ; // offset 0x34, size 0x4
    class iColor_tag color_a; // offset 0x38, size 0x4
    class iColor_tag color_b; // offset 0x3C, size 0x4
    class RwTexture * texturePtr; // offset 0x40, size 0x4
    class RwRaster * textureRasterPtr; // offset 0x44, size 0x4
    class xFXShineElem elem[100]; // offset 0x48, size 0x1130
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
class xFXRing {
    // total size: 0x3C
public:
    unsigned int texture; // offset 0x0, size 0x4
    float lifetime; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    float time; // offset 0x14, size 0x4
    float ring_radius; // offset 0x18, size 0x4
    float ring_radius_delta; // offset 0x1C, size 0x4
    float ring_tilt; // offset 0x20, size 0x4
    float ring_tilt_delta; // offset 0x24, size 0x4
    float ring_height; // offset 0x28, size 0x4
    float ring_height_delta; // offset 0x2C, size 0x4
    class iColor_tag ring_color; // offset 0x30, size 0x4
    unsigned short ring_segs; // offset 0x34, size 0x2
    unsigned char u_repeat; // offset 0x36, size 0x1
    unsigned char v_repeat; // offset 0x37, size 0x1
    class xFXRing * * parent; // offset 0x38, size 0x4
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
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class zPlayerSettings {
    // total size: 0x460
public:
    enum _zPlayerType pcType; // offset 0x0, size 0x4
    float MoveSpeed[6]; // offset 0x4, size 0x18
    float AnimSneak[3]; // offset 0x1C, size 0xC
    float AnimWalk[3]; // offset 0x28, size 0xC
    float AnimRun[3]; // offset 0x34, size 0xC
    float JumpGravity; // offset 0x40, size 0x4
    float GravSmooth; // offset 0x44, size 0x4
    float FloatSpeed; // offset 0x48, size 0x4
    float ButtsmashSpeed; // offset 0x4C, size 0x4
    class zJumpParam Jump; // offset 0x50, size 0x10
    class zJumpParam Bounce; // offset 0x60, size 0x10
    class zJumpParam Spring; // offset 0x70, size 0x10
    class zJumpParam Wall; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam SlideDouble; // offset 0xA0, size 0x10
    class zJumpParam SlideJump; // offset 0xB0, size 0x10
    float WallJumpVelocity; // offset 0xC0, size 0x4
    class zLedgeGrabParams ledge; // offset 0xD0, size 0x380
    float spin_damp_xz; // offset 0x450, size 0x4
    float spin_damp_y; // offset 0x454, size 0x4
    unsigned char talk_anims; // offset 0x458, size 0x1
    unsigned char talk_filter_size; // offset 0x459, size 0x1
    unsigned char talk_filter[4]; // offset 0x45A, size 0x4
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
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
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
class zParEmitter : public xParEmitter {
    // total size: 0x78
};
class xParEmitter : public xBase {
    // total size: 0x78
public:
    class xParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    class xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned char rate_mode; // offset 0x1C, size 0x1
    float rate; // offset 0x20, size 0x4
    float rate_time; // offset 0x24, size 0x4
    float rate_fraction; // offset 0x28, size 0x4
    float rate_fraction_cull; // offset 0x2C, size 0x4
    unsigned char emit_flags; // offset 0x30, size 0x1
    unsigned char emit_pad[3]; // offset 0x31, size 0x3
    unsigned char rot[3]; // offset 0x34, size 0x3
    class xModelTag tag; // offset 0x38, size 0x20
    float oocull_distance_sqr; // offset 0x58, size 0x4
    float distance_to_cull_sqr; // offset 0x5C, size 0x4
    void * attachTo; // offset 0x60, size 0x4
    class xParSys * parSys; // offset 0x64, size 0x4
    void * emit_volume; // offset 0x68, size 0x4
    class xVec3 last_attach_loc; // offset 0x6C, size 0xC
};
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
};
class xUpdateCullEnt {
    // total size: 0x10
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
class xParEmitterAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class rxReq {
    // total size: 0x0
};
class zSurfMatFX {
    // total size: 0x18
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int bumpmapID; // offset 0x4, size 0x4
    unsigned int envmapID; // offset 0x8, size 0x4
    float shininess; // offset 0xC, size 0x4
    float bumpiness; // offset 0x10, size 0x4
    unsigned int dualmapID; // offset 0x14, size 0x4
};
class xParGroup {
    // total size: 0x0
};
class vert_data {
    // total size: 0x28
public:
    class xVec3 loc; // offset 0x0, size 0xC
    class xVec3 norm; // offset 0xC, size 0xC
    class RwRGBA color; // offset 0x18, size 0x4
    class RwTexCoords uv; // offset 0x1C, size 0x8
    float depth; // offset 0x24, size 0x4
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
class tier_queue_allocator {
    // total size: 0x1C
public:
    class block_data * blocks; // offset 0x0, size 0x4
    unsigned int _unit_size; // offset 0x4, size 0x4
    unsigned int _block_size; // offset 0x8, size 0x4
    unsigned int _block_size_shift; // offset 0xC, size 0x4
    unsigned int _max_blocks; // offset 0x10, size 0x4
    unsigned int _max_blocks_shift; // offset 0x14, size 0x4
    unsigned char head; // offset 0x18, size 0x1
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class xParEmitterPropsAsset : public xBaseAsset {
    // total size: 0x138
public:
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        class xParInterp rate; // offset 0xC, size 0x14
        class xParInterp value[1]; // offset 0xC, size 0x14
    };
    class xParInterp life; // offset 0x20, size 0x14
    class xParInterp size_birth; // offset 0x34, size 0x14
    class xParInterp size_death; // offset 0x48, size 0x14
    class xParInterp color_birth[4]; // offset 0x5C, size 0x50
    class xParInterp color_death[4]; // offset 0xAC, size 0x50
    class xParInterp vel_scale; // offset 0xFC, size 0x14
    class xParInterp vel_angle; // offset 0x110, size 0x14
    class xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
class tier_queue {
    // total size: 0x110
public:
    unsigned int first; // offset 0x0, size 0x4
    unsigned int _size; // offset 0x4, size 0x4
    unsigned int wrap_mask; // offset 0x8, size 0x4
    class tier_queue_allocator * alloc; // offset 0xC, size 0x4
    unsigned char blocks[256]; // offset 0x10, size 0x100
};
class zScene : public xScene {
    // total size: 0x2C8
public:
    class _zPortal * pendingPortal; // offset 0x70, size 0x4
    union { // inferred
        unsigned int num_ents; // offset 0x74, size 0x4
        unsigned int num_base; // offset 0x74, size 0x4
    };
    union { // inferred
        class xBase * * base; // offset 0x78, size 0x4
        class zEnt * * ents; // offset 0x78, size 0x4
    };
    unsigned int num_update_base; // offset 0x7C, size 0x4
    class xBase * * update_base; // offset 0x80, size 0x4
    unsigned int baseCount[72]; // offset 0x84, size 0x120
    class xBase * baseList[72]; // offset 0x1A4, size 0x120
    class _zEnv * zen; // offset 0x2C4, size 0x4
};
class _xFXAura {
    // total size: 0x24
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class iColor_tag color; // offset 0xC, size 0x4
    float size; // offset 0x10, size 0x4
    void * parent; // offset 0x14, size 0x4
    unsigned int frame; // offset 0x18, size 0x4
    float dangle[2]; // offset 0x1C, size 0x8
};
class xFXShineElem {
    // total size: 0x2C
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xVec3 p; // offset 0x4, size 0xC
    class xVec3 vel; // offset 0x10, size 0xC
    float lifetime; // offset 0x1C, size 0x4
    float a; // offset 0x20, size 0x4
    class iColor_tag cola; // offset 0x24, size 0x4
    class iColor_tag colb; // offset 0x28, size 0x4
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
class xFXStreakElem {
    // total size: 0x20
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xVec3 p[2]; // offset 0x4, size 0x18
    float a; // offset 0x1C, size 0x4
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
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
class iterator {
    // total size: 0x8
public:
    unsigned int it; // offset 0x0, size 0x4
    class tier_queue * owner; // offset 0x4, size 0x4
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
class xEntBoulder {
    // total size: 0x0
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
class RxColorUnion {
    // total size: 0x4
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
class zEntHangable {
    // total size: 0x0
};
class xParSys {
    // total size: 0x0
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
class xParInterp {
    // total size: 0x14
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
class RwV2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xFFX {
    // total size: 0x0
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
class xUpdateCullMgr {
    // total size: 0x2C
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class zPlatform {
    // total size: 0x0
};
class xPEEntBone {
    // total size: 0x18
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
class _zEnv : public xBase {
    // total size: 0x14
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
class xCamera : public xBase {
    // total size: 0x330
public:
    class RwCamera * lo_cam; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 omat; // offset 0x60, size 0x40
    class xMat3x3 mbasis; // offset 0xA0, size 0x30
    class xBound bound; // offset 0xD0, size 0x4C
    class xMat4x3 * tgt_mat; // offset 0x11C, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x120, size 0x4
    class xBound * tgt_bound; // offset 0x124, size 0x4
    class xVec3 focus; // offset 0x128, size 0xC
    class xScene * sc; // offset 0x134, size 0x4
    class xVec3 tran_accum; // offset 0x138, size 0xC
    float fov; // offset 0x144, size 0x4
    unsigned int flags; // offset 0x148, size 0x4
    float tmr; // offset 0x14C, size 0x4
    float tm_acc; // offset 0x150, size 0x4
    float tm_dec; // offset 0x154, size 0x4
    float ltmr; // offset 0x158, size 0x4
    float ltm_acc; // offset 0x15C, size 0x4
    float ltm_dec; // offset 0x160, size 0x4
    float dmin; // offset 0x164, size 0x4
    float dmax; // offset 0x168, size 0x4
    float dcur; // offset 0x16C, size 0x4
    float dgoal; // offset 0x170, size 0x4
    float hmin; // offset 0x174, size 0x4
    float hmax; // offset 0x178, size 0x4
    float hcur; // offset 0x17C, size 0x4
    float hgoal; // offset 0x180, size 0x4
    float pmin; // offset 0x184, size 0x4
    float pmax; // offset 0x188, size 0x4
    float pcur; // offset 0x18C, size 0x4
    float pgoal; // offset 0x190, size 0x4
    float depv; // offset 0x194, size 0x4
    float hepv; // offset 0x198, size 0x4
    float pepv; // offset 0x19C, size 0x4
    float orn_epv; // offset 0x1A0, size 0x4
    float yaw_epv; // offset 0x1A4, size 0x4
    float pitch_epv; // offset 0x1A8, size 0x4
    float roll_epv; // offset 0x1AC, size 0x4
    class xQuat orn_cur; // offset 0x1B0, size 0x10
    class xQuat orn_goal; // offset 0x1C0, size 0x10
    class xQuat orn_diff; // offset 0x1D0, size 0x10
    float yaw_cur; // offset 0x1E0, size 0x4
    float yaw_goal; // offset 0x1E4, size 0x4
    float pitch_cur; // offset 0x1E8, size 0x4
    float pitch_goal; // offset 0x1EC, size 0x4
    float roll_cur; // offset 0x1F0, size 0x4
    float roll_goal; // offset 0x1F4, size 0x4
    float dct; // offset 0x1F8, size 0x4
    float dcd; // offset 0x1FC, size 0x4
    float dccv; // offset 0x200, size 0x4
    float dcsv; // offset 0x204, size 0x4
    float hct; // offset 0x208, size 0x4
    float hcd; // offset 0x20C, size 0x4
    float hccv; // offset 0x210, size 0x4
    float hcsv; // offset 0x214, size 0x4
    float pct; // offset 0x218, size 0x4
    float pcd; // offset 0x21C, size 0x4
    float pccv; // offset 0x220, size 0x4
    float pcsv; // offset 0x224, size 0x4
    float orn_ct; // offset 0x228, size 0x4
    float orn_cd; // offset 0x22C, size 0x4
    float orn_ccv; // offset 0x230, size 0x4
    float orn_csv; // offset 0x234, size 0x4
    float yaw_ct; // offset 0x238, size 0x4
    float yaw_cd; // offset 0x23C, size 0x4
    float yaw_ccv; // offset 0x240, size 0x4
    float yaw_csv; // offset 0x244, size 0x4
    float pitch_ct; // offset 0x248, size 0x4
    float pitch_cd; // offset 0x24C, size 0x4
    float pitch_ccv; // offset 0x250, size 0x4
    float pitch_csv; // offset 0x254, size 0x4
    float roll_ct; // offset 0x258, size 0x4
    float roll_cd; // offset 0x25C, size 0x4
    float roll_ccv; // offset 0x260, size 0x4
    float roll_csv; // offset 0x264, size 0x4
    class xVec4 frustplane[12]; // offset 0x270, size 0xC0
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
class zCutsceneMgr {
    // total size: 0x0
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class zSurfTextureAnim {
    // total size: 0xC
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
class anim_coll_data {
    // total size: 0x0
};
class RwCamera {
    // total size: 0x190
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
class xEnvAsset : public xBaseAsset {
    // total size: 0x44
public:
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    float padF1; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
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
class zAssetPickupTable {
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
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
class tagiRenderInput {
    // total size: 0x80
public:
    unsigned short * m_index; // offset 0x0, size 0x4
    class RxObjSpace3DVertex * m_vertex; // offset 0x4, size 0x4
    float * m_vertexTZ; // offset 0x8, size 0x4
    unsigned int m_mode; // offset 0xC, size 0x4
    signed int m_vertexType; // offset 0x10, size 0x4
    signed int m_vertexTypeSize; // offset 0x14, size 0x4
    signed int m_indexCount; // offset 0x18, size 0x4
    signed int m_vertexCount; // offset 0x1C, size 0x4
    class xMat4x3 m_camViewMatrix; // offset 0x20, size 0x40
    class xVec4 m_camViewR; // offset 0x60, size 0x10
    class xVec4 m_camViewU; // offset 0x70, size 0x10
};
class xEntDrive {
    // total size: 0x7C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class xEnt * odriver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 op; // offset 0x28, size 0xC
    class xVec3 p; // offset 0x34, size 0xC
    class xVec3 q; // offset 0x40, size 0xC
    float yaw; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x5C, size 0x20
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
class iFogParams {
    // total size: 0x1C
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
class zSurfacePropTexAnim {
    // total size: 0x18
public:
    unsigned short mode; // offset 0x0, size 0x2
    float speed; // offset 0x4, size 0x4
    float frame; // offset 0x8, size 0x4
    unsigned int group; // offset 0xC, size 0x4
    signed int group_idx; // offset 0x10, size 0x4
    class xBase * group_ptr; // offset 0x14, size 0x4
};
class RwFrustumPlane {
    // total size: 0x14
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
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
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class zGlobals : public xGlobals {
    // total size: 0x2050
public:
    class zPlayerGlobals player; // offset 0x700, size 0x1940
    class zAssetPickupTable * pickupTable; // offset 0x2040, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x2044, size 0x4
    class zScene * sceneCur; // offset 0x2048, size 0x4
    class zScene * scenePreload; // offset 0x204C, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
class zGlobalSettings {
    // total size: 0x150
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SundaeTime; // offset 0x4, size 0x4
    float SundaeMult; // offset 0x8, size 0x4
    unsigned int InitialShinyCount; // offset 0xC, size 0x4
    unsigned int InitialSpatulaCount; // offset 0x10, size 0x4
    signed int ShinyValuePurple; // offset 0x14, size 0x4
    signed int ShinyValueBlue; // offset 0x18, size 0x4
    signed int ShinyValueGreen; // offset 0x1C, size 0x4
    signed int ShinyValueYellow; // offset 0x20, size 0x4
    signed int ShinyValueRed; // offset 0x24, size 0x4
    signed int ShinyValueCombo0; // offset 0x28, size 0x4
    signed int ShinyValueCombo1; // offset 0x2C, size 0x4
    signed int ShinyValueCombo2; // offset 0x30, size 0x4
    signed int ShinyValueCombo3; // offset 0x34, size 0x4
    signed int ShinyValueCombo4; // offset 0x38, size 0x4
    signed int ShinyValueCombo5; // offset 0x3C, size 0x4
    signed int ShinyValueCombo6; // offset 0x40, size 0x4
    signed int ShinyValueCombo7; // offset 0x44, size 0x4
    signed int ShinyValueCombo8; // offset 0x48, size 0x4
    signed int ShinyValueCombo9; // offset 0x4C, size 0x4
    signed int ShinyValueCombo10; // offset 0x50, size 0x4
    signed int ShinyValueCombo11; // offset 0x54, size 0x4
    signed int ShinyValueCombo12; // offset 0x58, size 0x4
    signed int ShinyValueCombo13; // offset 0x5C, size 0x4
    signed int ShinyValueCombo14; // offset 0x60, size 0x4
    signed int ShinyValueCombo15; // offset 0x64, size 0x4
    float ComboTimer; // offset 0x68, size 0x4
    unsigned int Initial_Specials; // offset 0x6C, size 0x4
    unsigned int TakeDamage; // offset 0x70, size 0x4
    float DamageTimeHit; // offset 0x74, size 0x4
    float DamageTimeSurface; // offset 0x78, size 0x4
    float DamageTimeEGen; // offset 0x7C, size 0x4
    float DamageSurfKnock; // offset 0x80, size 0x4
    float DamageGiveHealthKnock; // offset 0x84, size 0x4
    unsigned int CheatSpongeball; // offset 0x88, size 0x4
    unsigned int CheatPlayerSwitch; // offset 0x8C, size 0x4
    unsigned int CheatAlwaysPortal; // offset 0x90, size 0x4
    unsigned int CheatFlyToggle; // offset 0x94, size 0x4
    unsigned int DisableForceConversation; // offset 0x98, size 0x4
    float StartSlideAngle; // offset 0x9C, size 0x4
    float StopSlideAngle; // offset 0xA0, size 0x4
    float RotMatchMaxAngle; // offset 0xA4, size 0x4
    float RotMatchMatchTime; // offset 0xA8, size 0x4
    float RotMatchRelaxTime; // offset 0xAC, size 0x4
    float Gravity; // offset 0xB0, size 0x4
    float BBashTime; // offset 0xB4, size 0x4
    float BBashHeight; // offset 0xB8, size 0x4
    float BBashDelay; // offset 0xBC, size 0x4
    float BBashCVTime; // offset 0xC0, size 0x4
    float BBounceSpeed; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float SandyMeleeMinFrame; // offset 0xD4, size 0x4
    float SandyMeleeMaxFrame; // offset 0xD8, size 0x4
    float SandyMeleeRadius; // offset 0xDC, size 0x4
    float BubbleBowlTimeDelay; // offset 0xE0, size 0x4
    float BubbleBowlLaunchPosLeft; // offset 0xE4, size 0x4
    float BubbleBowlLaunchPosUp; // offset 0xE8, size 0x4
    float BubbleBowlLaunchPosAt; // offset 0xEC, size 0x4
    float BubbleBowlLaunchVelLeft; // offset 0xF0, size 0x4
    float BubbleBowlLaunchVelUp; // offset 0xF4, size 0x4
    float BubbleBowlLaunchVelAt; // offset 0xF8, size 0x4
    float BubbleBowlPercentIncrease; // offset 0xFC, size 0x4
    float BubbleBowlMinSpeed; // offset 0x100, size 0x4
    float BubbleBowlMinRecoverTime; // offset 0x104, size 0x4
    float SlideAccelVelMin; // offset 0x108, size 0x4
    float SlideAccelVelMax; // offset 0x10C, size 0x4
    float SlideAccelStart; // offset 0x110, size 0x4
    float SlideAccelEnd; // offset 0x114, size 0x4
    float SlideAccelPlayerFwd; // offset 0x118, size 0x4
    float SlideAccelPlayerBack; // offset 0x11C, size 0x4
    float SlideAccelPlayerSide; // offset 0x120, size 0x4
    float SlideVelMaxStart; // offset 0x124, size 0x4
    float SlideVelMaxEnd; // offset 0x128, size 0x4
    float SlideVelMaxIncTime; // offset 0x12C, size 0x4
    float SlideVelMaxIncAccel; // offset 0x130, size 0x4
    float SlideAirHoldTime; // offset 0x134, size 0x4
    float SlideAirSlowTime; // offset 0x138, size 0x4
    float SlideAirDblHoldTime; // offset 0x13C, size 0x4
    float SlideAirDblSlowTime; // offset 0x140, size 0x4
    float SlideVelDblBoost; // offset 0x144, size 0x4
    unsigned char SlideApplyPhysics; // offset 0x148, size 0x1
    unsigned char PowerUp[2]; // offset 0x149, size 0x2
    unsigned char InitialPowerUp[2]; // offset 0x14B, size 0x2
};
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
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
class zPlayerLassoInfo {
    // total size: 0x120
public:
    class xEnt * target; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    unsigned char destroy; // offset 0x8, size 0x1
    unsigned char targetGuide; // offset 0x9, size 0x1
    float lassoRot; // offset 0xC, size 0x4
    class xEnt * swingTarget; // offset 0x10, size 0x4
    class xEnt * releasedSwing; // offset 0x14, size 0x4
    float copterTime; // offset 0x18, size 0x4
    signed int canCopter; // offset 0x1C, size 0x4
    class zLasso lasso; // offset 0x20, size 0xFC
    class xAnimState * zeroAnim; // offset 0x11C, size 0x4
};
class xGlobals {
    // total size: 0x700
public:
    class xCamera camera; // offset 0x0, size 0x330
    class _tagxPad * pad0; // offset 0x330, size 0x4
    class _tagxPad * pad1; // offset 0x334, size 0x4
    class _tagxPad * pad2; // offset 0x338, size 0x4
    class _tagxPad * pad3; // offset 0x33C, size 0x4
    signed int profile; // offset 0x340, size 0x4
    char profFunc[6][128]; // offset 0x344, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x644, size 0x4
    signed int sceneFirst; // offset 0x648, size 0x4
    char sceneStart[32]; // offset 0x64C, size 0x20
    class RpWorld * currWorld; // offset 0x66C, size 0x4
    class iFogParams fog; // offset 0x670, size 0x1C
    class iFogParams fogA; // offset 0x68C, size 0x1C
    class iFogParams fogB; // offset 0x6A8, size 0x1C
    signed long fog_t0; // offset 0x6C8, size 0x4
    signed long fog_t1; // offset 0x6D0, size 0x4
    signed int option_vibration; // offset 0x6D8, size 0x4
    unsigned int QuarterSpeed; // offset 0x6DC, size 0x4
    float update_dt; // offset 0x6E0, size 0x4
    signed int useHIPHOP; // offset 0x6E4, size 0x4
    unsigned char NoMusic; // offset 0x6E8, size 0x1
    char currentActivePad; // offset 0x6E9, size 0x1
    unsigned char firstStartPressed; // offset 0x6EA, size 0x1
    unsigned int minVSyncCnt; // offset 0x6EC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x6F0, size 0x1
    unsigned char autoSaveFeature; // offset 0x6F1, size 0x1
};
class zLasso {
    // total size: 0xFC
public:
    unsigned int flags; // offset 0x0, size 0x4
    float secsTotal; // offset 0x4, size 0x4
    float secsLeft; // offset 0x8, size 0x4
    float stRadius; // offset 0xC, size 0x4
    float tgRadius; // offset 0x10, size 0x4
    float crRadius; // offset 0x14, size 0x4
    class xVec3 stCenter; // offset 0x18, size 0xC
    class xVec3 tgCenter; // offset 0x24, size 0xC
    class xVec3 crCenter; // offset 0x30, size 0xC
    class xVec3 stNormal; // offset 0x3C, size 0xC
    class xVec3 tgNormal; // offset 0x48, size 0xC
    class xVec3 crNormal; // offset 0x54, size 0xC
    class xVec3 honda; // offset 0x60, size 0xC
    float stSlack; // offset 0x6C, size 0x4
    float stSlackDist; // offset 0x70, size 0x4
    float tgSlack; // offset 0x74, size 0x4
    float tgSlackDist; // offset 0x78, size 0x4
    float crSlack; // offset 0x7C, size 0x4
    float currDist; // offset 0x80, size 0x4
    float lastDist; // offset 0x84, size 0x4
    class xVec3 lastRefs[5]; // offset 0x88, size 0x3C
    unsigned char reindex[5]; // offset 0xC4, size 0x5
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class zLedgeGrabParams {
    // total size: 0x380
public:
    float animGrab; // offset 0x0, size 0x4
    float zdist; // offset 0x4, size 0x4
    class xVec3 tranTable[60]; // offset 0x8, size 0x2D0
    signed int tranCount; // offset 0x2D8, size 0x4
    class xEnt * optr; // offset 0x2DC, size 0x4
    class xMat4x3 omat; // offset 0x2E0, size 0x40
    float y0det; // offset 0x320, size 0x4
    float dydet; // offset 0x324, size 0x4
    float r0det; // offset 0x328, size 0x4
    float drdet; // offset 0x32C, size 0x4
    float thdet; // offset 0x330, size 0x4
    float rtime; // offset 0x334, size 0x4
    float ttime; // offset 0x338, size 0x4
    float tmr; // offset 0x33C, size 0x4
    class xVec3 spos; // offset 0x340, size 0xC
    class xVec3 epos; // offset 0x34C, size 0xC
    class xVec3 tpos; // offset 0x358, size 0xC
    signed int nrays; // offset 0x364, size 0x4
    signed int rrand; // offset 0x368, size 0x4
    float startrot; // offset 0x36C, size 0x4
    float endrot; // offset 0x370, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
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
class zSurfacePropUVFX {
    // total size: 0x68
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    float minmax_timer[2]; // offset 0xC, size 0x8
    class xVec3 trans; // offset 0x14, size 0xC
    class xVec3 trans_spd; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    class xVec3 scale_spd; // offset 0x38, size 0xC
    class xVec3 min; // offset 0x44, size 0xC
    class xVec3 max; // offset 0x50, size 0xC
    class xVec3 minmax_spd; // offset 0x5C, size 0xC
};
class zSurfColorFX {
    // total size: 0x8
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
enum RwCullMode {
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
class xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // total size: 0x16C
public:
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    class xVec3 pos; // offset 0x140, size 0xC
    class xVec3 vel; // offset 0x14C, size 0xC
    float vel_angle_variation; // offset 0x158, size 0x4
    unsigned char rot[3]; // offset 0x15C, size 0x3
    unsigned char padding; // offset 0x15F, size 0x1
    float radius; // offset 0x160, size 0x4
    float emit_interval_current; // offset 0x164, size 0x4
    void * emit_volume; // offset 0x168, size 0x4
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
};

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4130 -> 0x001E413C
*/
// Range: 0x1E4130 -> 0x1E413C
void xFXSceneFinish() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4130 -> 0x1E413C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4140 -> 0x001E4148
*/
// Range: 0x1E4140 -> 0x1E4148
void xFXScenePrepare() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4140 -> 0x1E4148
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4150 -> 0x001E4158
*/
// Range: 0x1E4150 -> 0x1E4158
void xFXSceneReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4150 -> 0x1E4158
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4160 -> 0x001E41A0
*/
// Range: 0x1E4160 -> 0x1E41A0
void xFXSceneSetup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4160 -> 0x1E41A0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E41A0 -> 0x001E41A8
*/
// Range: 0x1E41A0 -> 0x1E41A8
void xFXSceneInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E41A0 -> 0x1E41A8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E41B0 -> 0x001E41B8
*/
// Range: 0x1E41B0 -> 0x1E41B8
void xFXShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E41B0 -> 0x1E41B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E41C0 -> 0x001E41C8
*/
// Range: 0x1E41C0 -> 0x1E41C8
void xFXStartup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E41C0 -> 0x1E41C8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E41D0 -> 0x001E435C
*/
// Range: 0x1E41D0 -> 0x1E435C
void xFXAuraRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E41D0 -> 0x1E435C
        signed int fogstate; // r29+0x3C
        class _xFXAura * ap; // r17
        signed int i; // r16
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4360 -> 0x001E48DC
*/
// Range: 0x1E4360 -> 0x1E48DC
static void RenderRotatedBillboard(class xVec3 * pos /* r29+0xF0 */, class _xFXAuraAngle * rot /* r30 */, unsigned int count /* r29+0xEC */, float width /* r29+0x3720 */, float height /* r29+0x3720 */, class iColor_tag tint /* r29+0x10C */, unsigned int flipUV /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4360 -> 0x1E48DC
        unsigned int i; // r29+0xD0
        class RxObjSpace3DVertex vert[384]; // r29+0x110
        class RxObjSpace3DVertex * vp; // r21
        class xMat4x3 * cammat; // r20
        class xVec3 * rt; // r2
        class xVec3 * up; // r19
        float zero; // r22
        float one; // r21
        float nearclip; // r20
        class xVec3 myat; // r29+0x3710
        float depth; // r29+0x3720
        float camdist; // r1
        float at_offset; // r12
        float scale; // r15
        float dx; // r16
        float dy; // r15
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E48E0 -> 0x001E4AB0
*/
// Range: 0x1E48E0 -> 0x1E4AB0
void xFXAuraUpdate(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E48E0 -> 0x1E4AB0
        class _xFXAura * ap; // r6
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4AB0 -> 0x001E4BB8
*/
// Range: 0x1E4AB0 -> 0x1E4BB8
void xFXAuraAdd(void * parent /* r2 */, class xVec3 * pos /* r2 */, class iColor_tag * color /* r2 */, float size /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4AB0 -> 0x1E4BB8
        signed int i; // r8
        class _xFXAura * ap; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4BC0 -> 0x001E4CF4
*/
// Range: 0x1E4BC0 -> 0x1E4CF4
void xFXRibbonRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4BC0 -> 0x1E4CF4
        class xFXRibbon * prev; // r19
        unsigned int i; // r18
        class xFXRibbon * ribbon; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E4D00 -> 0x001E4E94
*/
// Range: 0x1E4D00 -> 0x1E4E94
void xFXRibbonSceneEnter() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E4D00 -> 0x1E4E94
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E5080 -> 0x001E5120
*/
// Range: 0x1E5080 -> 0x1E5120
signed int render_compare(class xFXRibbon * this /* r2 */, class xFXRibbon & c /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E5080 -> 0x1E5120
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E5120 -> 0x001E5578
*/
// Range: 0x1E5120 -> 0x1E5578
void render_strip(class xFXRibbon * this /* r18 */, class RxObjSpace3DVertex * verts /* r17 */, class iterator first /* r29+0xA0 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E5120 -> 0x1E5578
        class RxObjSpace3DVertex * v; // r16
        signed int back; // r21
        float ulookup[2]; // r29+0x138
        class iterator last; // r29+0x130
        class iColor_tag color; // r29+0x14C
        float width; // r29+0x148
        float offset1; // r6
        float offset2; // r1
        float u; // r29+0x150
        class xVec3 loc1; // r29+0x120
        class xVec3 loc2; // r29+0x110
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E5580 -> 0x001E5A34
*/
// Range: 0x1E5580 -> 0x1E5A34
void eval_joint(class xFXRibbon * this /* r2 */, class joint_data & joint /* r2 */, class iColor_tag & color /* r2 */, float & width /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E5580 -> 0x1E5A34
        float frac; // r4
        class curve_node & node0; // r4
        class curve_node & node1; // r3
        float subfrac; // r29
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E5A40 -> 0x001E5DA0
*/
// Range: 0x1E5A40 -> 0x1E5DA0
void refresh_joint(class xFXRibbon * this /* r2 */, class joint_data & joint /* r16 */, class iterator & it /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E5A40 -> 0x1E5DA0
        class xVec3 offset; // r29+0xB0
        class xVec3 dir; // r29+0xA0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E5DA0 -> 0x001E6050
*/
// Range: 0x1E5DA0 -> 0x1E6050
void get_normal(class xVec3 & norm /* r17 */, class xVec3 & dir /* r16 */, float orient /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E5DA0 -> 0x1E6050
        float a; // r20
        float b; // r29+0x40
        float ax; // r3
        float ay; // r2
        float az; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6050 -> 0x001E60C8
*/
// Range: 0x1E6050 -> 0x1E60C8
void set_texture(class xFXRibbon * this /* r16 */, char * name /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6050 -> 0x1E60C8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E60D0 -> 0x001E6138
*/
// Range: 0x1E60D0 -> 0x1E6138
void set_texture(class xFXRibbon * this /* r16 */, unsigned int id /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E60D0 -> 0x1E6138
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6140 -> 0x001E62D0
*/
// Range: 0x1E6140 -> 0x1E62D0
void render(class xFXRibbon * this /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6140 -> 0x1E62D0
        class RxObjSpace3DVertex * verts; // r19
        signed int it; // r10
        signed int subsize; // r2
        signed int next_it; // r18
        signed int break_it; // r9
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E62D0 -> 0x001E66F4
*/
// Range: 0x1E62D0 -> 0x1E66F4
void update(class xFXRibbon * this /* r20 */, float dt /* r29+0xC0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E62D0 -> 0x1E66F4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6850 -> 0x001E6B88
*/
// Range: 0x1E6850 -> 0x1E6B88
void insert(class xFXRibbon * this /* r20 */, class xVec3 & loc /* r19 */, float orient /* r22 */, float scale /* r21 */, float alpha /* r20 */, unsigned int flags /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6850 -> 0x1E6B88
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6B90 -> 0x001E6ED0
*/
// Range: 0x1E6B90 -> 0x1E6ED0
void insert(class xFXRibbon * this /* r20 */, class xVec3 & loc /* r19 */, class xVec3 & norm /* r18 */, float scale /* r21 */, float alpha /* r20 */, unsigned int flags /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6B90 -> 0x1E6ED0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6ED0 -> 0x001E6EDC
*/
// Range: 0x1E6ED0 -> 0x1E6EDC
void set_curve(class xFXRibbon * this /* r2 */, class curve_node * curve /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6ED0 -> 0x1E6EDC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6EE0 -> 0x001E6F60
*/
// Range: 0x1E6EE0 -> 0x1E6F60
void refresh_config(class xFXRibbon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6EE0 -> 0x1E6F60
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E6F60 -> 0x001E7000
*/
// Range: 0x1E6F60 -> 0x1E7000
void set_default_config(class xFXRibbon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E6F60 -> 0x1E7000
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7000 -> 0x001E70E0
*/
// Range: 0x1E7000 -> 0x1E70E0
void init(class xFXRibbon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7000 -> 0x1E70E0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E70E0 -> 0x001E7134
*/
// Range: 0x1E70E0 -> 0x1E7134
static signed int compare_ribbons(void * e1 /* r2 */, void * e2 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E70E0 -> 0x1E7134
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7140 -> 0x001E7148
*/
// Range: 0x1E7140 -> 0x1E7148
unsigned int xFXShineStart() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7140 -> 0x1E7148
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7150 -> 0x001E780C
*/
// Range: 0x1E7150 -> 0x1E780C
void xFXShineRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7150 -> 0x1E780C
        class xFXShineElem * e; // r21
        signed int shine; // r20
        class xFXShine * s; // r19
        signed int j; // r18
        class RxObjSpace3DVertex * vert; // r17
        class RwFrame * frame; // r16
        class xVec3 v; // r29+0x110
        class xVec3 w; // r29+0x100
        float uoff; // r22
        class xMat3x3 mat; // r29+0xB0
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r4
        class RwRGBA * _col; // r7
        class RwRGBA * _col; // r6
        class RwRGBA * _col; // r5
        class RwRGBA * _col; // r4
        class RxObjSpace3DVertex blah[4]; // @ 0x00567D30
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7810 -> 0x001E7BB4
*/
// Range: 0x1E7810 -> 0x1E7BB4
void xFXShineUpdate(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7810 -> 0x1E7BB4
        signed int i; // r30
        class xFXShine * s; // r21
        signed int j; // r20
        class xFXShineElem * e; // r19
        signed int done; // r6
        signed int j; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7BC0 -> 0x001E7C18
*/
// Range: 0x1E7BC0 -> 0x1E7C18
void xFXShineInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7BC0 -> 0x1E7C18
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7C20 -> 0x001E7CF0
*/
// Range: 0x1E7C20 -> 0x1E7CF0
void xFXStreakUpdate(unsigned int id /* r2 */, class xVec3 * a /* r2 */, class xVec3 * b /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7C20 -> 0x1E7CF0
        class xFXStreak * s; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7CF0 -> 0x001E7D50
*/
// Range: 0x1E7CF0 -> 0x1E7D50
void xFXStreakStop(unsigned int id /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7CF0 -> 0x1E7D50
        class xFXStreak * s; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7D50 -> 0x001E7EEC
*/
// Range: 0x1E7D50 -> 0x1E7EEC
unsigned int xFXStreakStart(float frequency /* r29+0x30 */, float alphaFadeRate /* r29+0x30 */, float alphaStart /* r29+0x30 */, unsigned int textureID /* r2 */, class iColor_tag * edge_a /* r2 */, class iColor_tag * edge_b /* r2 */, signed int taper /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7D50 -> 0x1E7EEC
        unsigned int i; // r17
        signed int j; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E7EF0 -> 0x001E829C
*/
// Range: 0x1E7EF0 -> 0x1E829C
void xFXStreakRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E7EF0 -> 0x1E829C
        class xFXStreakElem * e1; // r4
        signed int streak; // r19
        class xFXStreak * s; // r18
        signed int count; // r17
        signed int j; // r16
        class RwRGBA * _col; // r6
        class RwRGBA * _col; // r6
        class RwRGBA * _col; // r5
        class RwRGBA * _col; // r5
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x005659B0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E82A0 -> 0x001E84A8
*/
// Range: 0x1E82A0 -> 0x1E84A8
void xFXStreakUpdate(float dt /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E82A0 -> 0x1E84A8
        signed int i; // r8
        class xFXStreak * s; // r7
        signed int j; // r15
        class xFXStreakElem * e; // r14
        class xVec3 diff; // r29+0x10
        signed int done; // r15
        signed int j; // r14
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E84B0 -> 0x001E850C
*/
// Range: 0x1E84B0 -> 0x1E850C
void xFXStreakInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E84B0 -> 0x1E850C
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8510 -> 0x001E8AD0
*/
// Range: 0x1E8510 -> 0x1E8AD0
void xFXFireworksUpdate(float dt /* r24 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E8510 -> 0x1E8AD0
        signed int i; // r20
        class xParEmitterCustomSettings trail_info; // r29+0x230
        class zParEmitter * femit; // r19
        class xParEmitterCustomSettings xplo_info; // r29+0xC0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8AD0 -> 0x001E8B30
*/
// Range: 0x1E8AD0 -> 0x1E8B30
void xFXFireworksLaunch(float countdownTime /* r29 */, class xVec3 * pos /* r2 */, float fuelTime /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E8AD0 -> 0x1E8B30
        signed int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8B30 -> 0x001E8BEC
*/
// Range: 0x1E8B30 -> 0x1E8BEC
void xFXFireworksInit(char * fireworksTrailEmitter /* r2 */, char * fireworksEmitter1 /* r19 */, char * fireworksEmitter2 /* r18 */, char * fireworksSound /* r17 */, char * fireworksLaunchSound /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E8B30 -> 0x1E8BEC
        signed int i; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E8BF0 -> 0x001E9D98
*/
// Range: 0x1E8BF0 -> 0x1E9D98
void xFXRenderProximityFade(class xModelInstance & model /* r18 */, float near_dist /* r22 */, float far_dist /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E8BF0 -> 0x1E9D98
        class RpGeometry * geom; // r21
        class RwRaster * raster; // r19
        class RpTriangle * tri; // r29+0x1C0
        class RwFrame * frame; // r17
        class RwTexCoords * uv; // r29+0x1B0
        signed int vert_total; // r16
        class xVec3 * vert; // r29+0x1AC
        class xVec3 * normal; // r29+0x1A8
        unsigned char * alpha; // r29+0x1A4
        float * depth; // r29+0x1A0
        class xMat4x3 & cm; // r20
        class xVec3 ov; // r29+0x530
        float zfrac; // r21
        signed int i; // r19
        float a; // r3
        class RxObjSpace3DVertex * out_vert; // r21
        signed int tri_total; // r17
        unsigned short * alpha_tri_index; // r29+0x19C
        class tri_data * alpha_tri; // r29+0x198
        unsigned int alpha_tri_total; // r22
        class tri_data tri_buffer[2][3]; // r29+0x250
        class tri_data cur_tri; // r29+0x1D0
        class RpTriangle * end; // r29+0x180
        unsigned short vi[3]; // r29+0x528
        float d0; // r3
        float d1; // r2
        float d2; // r1
        unsigned int flags; // r2
        signed int i; // r23
        signed int size1; // r29+0x170
        signed int j; // r20
        unsigned int i; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E9DA0 -> 0x001E9E98
*/
// Range: 0x1E9DA0 -> 0x1E9E98
static void set_vert(class RxObjSpace3DVertex & vert /* r2 */, class vert_data & vd /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E9DA0 -> 0x1E9E98
        unsigned char alpha; // r6
        float a; // r3
        class RwRGBA * _col; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E9EA0 -> 0x001EA358
*/
// Range: 0x1E9EA0 -> 0x1EA358
static void lerp(class vert_data & v /* r2 */, float frac /* r29+0x10 */, class vert_data & v0 /* r2 */, class vert_data & v1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E9EA0 -> 0x1EA358
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA400 -> 0x001EA498
*/
// Range: 0x1EA400 -> 0x1EA498
static void depth_sort(unsigned short * index /* r2 */, class tri_data * tri /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA400 -> 0x1EA498
        unsigned int i; // r11
        unsigned short & e0; // r10
        float d0; // r1
        unsigned int j; // r9
        unsigned short temp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA4A0 -> 0x001EA4C0
*/
// Range: 0x1EA4A0 -> 0x1EA4C0
class RpAtomic * xFXanimUVAtomicSetup(class RpAtomic * atomic /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA4A0 -> 0x1EA4C0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA4C0 -> 0x001EA4C8
*/
// Range: 0x1EA4C0 -> 0x1EA4C8
void xFXanimUV2PSetTexture(class RwTexture * texture /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA4C0 -> 0x1EA4C8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA4D0 -> 0x001EA514
*/
// Range: 0x1EA4D0 -> 0x1EA514
void xFXanimUV2PSetAngle(float angle /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA4D0 -> 0x1EA514
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA520 -> 0x001EA534
*/
// Range: 0x1EA520 -> 0x1EA534
void xFXanimUV2PSetScale(class xVec3 * scale /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA520 -> 0x1EA534
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA540 -> 0x001EA554
*/
// Range: 0x1EA540 -> 0x1EA554
void xFXanimUV2PSetTranslation(class xVec3 * trans /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA540 -> 0x1EA554
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA560 -> 0x001EA5A4
*/
// Range: 0x1EA560 -> 0x1EA5A4
void xFXanimUVSetAngle(float angle /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA560 -> 0x1EA5A4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA5B0 -> 0x001EA5C4
*/
// Range: 0x1EA5B0 -> 0x1EA5C4
void xFXanimUVSetScale(class xVec3 * scale /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA5B0 -> 0x1EA5C4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA5D0 -> 0x001EA5E4
*/
// Range: 0x1EA5D0 -> 0x1EA5E4
void xFXanimUVSetTranslation(class xVec3 * trans /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA5D0 -> 0x1EA5E4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA5F0 -> 0x001EA6B4
*/
// Range: 0x1EA5F0 -> 0x1EA6B4
class RpAtomic * xFXAtomicEnvMapSetup(class RpAtomic * atomic /* r17 */, unsigned int envmapID /* r2 */, float shininess /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA5F0 -> 0x1EA6B4
        class RwTexture * env; // r16
        float tmp; // r20
        class RpSkin * skin; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA6C0 -> 0x001EA8F8
*/
// Range: 0x1EA6C0 -> 0x1EA8F8
class RpAtomic * xFXShinyRender(class RpAtomic * atomic /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA6C0 -> 0x1EA8F8
        enum RwCullMode cmode; // r29+0x4C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EA900 -> 0x001EAB60
*/
// Range: 0x1EA900 -> 0x1EAB60
class RpAtomic * xFXBubbleRender(class RpAtomic * atomic /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EA900 -> 0x1EAB60
        enum RwCullMode cmode; // r29+0x5C
        class xFXBubbleParams * bp; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAB60 -> 0x001EABFC
*/
// Range: 0x1EAB60 -> 0x1EABFC
class RpMaterial * MaterialSetEnvMap2(class RpMaterial * material /* r16 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAB60 -> 0x1EABFC
        char * textureName; // r2
        class RwTexture * texture; // r18
        class RwFrame * frame; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAC00 -> 0x001EACD0
*/
// Range: 0x1EAC00 -> 0x1EACD0
static class RpMaterial * MaterialSetEnvMap(class RpMaterial * material /* r17 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAC00 -> 0x1EACD0
        class RwTexture * texture; // r16
        class RwFrame * frame; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EACD0 -> 0x001EAD1C
*/
// Range: 0x1EACD0 -> 0x1EAD1C
class RpMaterial * MaterialSetShininess(class RpMaterial * material /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EACD0 -> 0x1EAD1C
        enum RpMatFXMaterialFlags flags; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAD20 -> 0x001EAD30
*/
// Range: 0x1EAD20 -> 0x1EAD30
void xFXPreAllocMatFX(class RpClump * clump /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAD20 -> 0x1EAD30
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAD30 -> 0x001EAD74
*/
// Range: 0x1EAD30 -> 0x1EAD74
static class RpAtomic * PreAllocMatFX_cb(class RpAtomic * atomic /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAD30 -> 0x1EAD74
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAD80 -> 0x001EADC4
*/
// Range: 0x1EAD80 -> 0x1EADC4
class RpAtomic * AtomicDisableMatFX(class RpAtomic * atomic /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAD80 -> 0x1EADC4
        class RpGeometry * geometry; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EADD0 -> 0x001EADFC
*/
// Range: 0x1EADD0 -> 0x1EADFC
static class RpMaterial * MaterialDisableMatFX(class RpMaterial * material /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EADD0 -> 0x1EADFC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAE00 -> 0x001EAE78
*/
// Range: 0x1EAE00 -> 0x1EAE78
void xFXUpdate(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAE00 -> 0x1EAE78
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAE80 -> 0x001EAE88
*/
// Range: 0x1EAE80 -> 0x1EAE88
void xFX_SceneExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAE80 -> 0x1EAE88
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EAE90 -> 0x001EB2B8
*/
// Range: 0x1EAE90 -> 0x1EB2B8
void xFX_SceneEnter(class RpWorld * world /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EAE90 -> 0x1EB2B8
        signed int i; // r18
        signed int num; // r22
        class xSurface * sp; // r2
        class zSurfaceProps * pp; // r3
        class zSurfMatFX * fxp; // r17
        class RpMaterial * mp; // r16
        class RwTexture * env; // r2
        class RwTexture * bump; // r21
        class RwTexture * env; // r21
        class RwTexture * bump; // r20
        class zScene * sc; // r21
        class xEnt * ent; // r20
        class RpAtomic * (* tmp)(class RpAtomic *); // r5
        unsigned int bubble; // r19
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB2C0 -> 0x001EB324
*/
// Range: 0x1EB2C0 -> 0x1EB324
void xFXRingRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EB2C0 -> 0x1EB324
        signed int i; // r17
        class xFXRing * ring; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB330 -> 0x001EB3F0
*/
// Range: 0x1EB330 -> 0x1EB3F0
static void xFXRingUpdate(float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EB330 -> 0x1EB3F0
        class xFXRing * ring; // r5
        signed int i; // r4
        float lifetime; // r3
        float t; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB3F0 -> 0x001EB4F4
*/
// Range: 0x1EB3F0 -> 0x1EB4F4
class xFXRing * xFXRingCreate(class xVec3 * pos /* r17 */, class xFXRing * params /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EB3F0 -> 0x1EB4F4
        class xFXRing * ring; // r16
        signed int i; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EB500 -> 0x001EBCA0
*/
// Range: 0x1EB500 -> 0x1EBCA0
static void DrawRing(class xFXRing * m /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EB500 -> 0x1EBCA0
        signed int i; // r19
        unsigned char red; // r6
        unsigned char green; // r5
        unsigned char blue; // r4
        unsigned char alpha; // r2
        float u; // r2
        float radius; // r31
        float oradius; // r30
        float height; // r29
        float tilt; // r20
        enum RwCullMode cmode; // r29+0x9C
        float dt; // r28
        class xVec3 * center; // r18
        class RxObjSpace3DVertex * Im3DBuffer; // r17
        class RxObjSpace3DVertex * imv; // r16
        float oour; // r27
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EBCA0 -> 0x001EBDDC
*/
// Range: 0x1EBCA0 -> 0x1EBDDC
void xFXInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1EBCA0 -> 0x1EBDDC
        class RpLight * light; // r16
        class RwFrame * frame; // r2
    }
}

