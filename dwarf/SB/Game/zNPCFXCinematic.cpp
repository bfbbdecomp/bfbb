/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class NCINEntry g_JF01_cin_fodder[7]; // size: 0x32C, address: 0x4E46F0
static class NCINEntry g_RB01_cin_fodBomb[1]; // size: 0x74, address: 0x0
static class NCINEntry g_RB01_cin_fodBzzt[1]; // size: 0x74, address: 0x0
static class NCINEntry g_RB01_cin_chomper[1]; // size: 0x74, address: 0x0
static class NCINEntry g_JF01_cin_hammer[8]; // size: 0x3A0, address: 0x4E4A20
static class NCINEntry g_JF03_cin_tartar[10]; // size: 0x488, address: 0x4E4DC0
static class NCINEntry g_BB01_cin_glove[6]; // size: 0x2B8, address: 0x4E5250
static class NCINEntry g_GL01_cin_monsoon[2]; // size: 0xE8, address: 0x4E5510
static class NCINEntry g_RB01_cin_sleepytime[3]; // size: 0x15C, address: 0x4E5600
static class NCINEntry g_BC01_cin_arfarf[9]; // size: 0x414, address: 0x4E5760
static class NCINEntry g_BB01_cin_chuck[3]; // size: 0x15C, address: 0x4E5B80
static class NCINEntry g_KF01_cin_tubelet[5]; // size: 0x244, address: 0x4E5CE0
static class NCINEntry g_GY01_cin_slick[5]; // size: 0x244, address: 0x4E5F30
static class NCINEntry g_GY01_cin_gy_open[2]; // size: 0xE8, address: 0x4E6180
static class NCINEntry g_GY01_cin_gy_end[2]; // size: 0xE8, address: 0x4E6270
static class NCINEntry g_B101_b1_open[4]; // size: 0x1D0, address: 0x4E6360
static class NCINEntry g_B101_b1_round2[4]; // size: 0x1D0, address: 0x4E6530
static class NCINEntry g_B101_b1_ending[10]; // size: 0x488, address: 0x4E6700
static class NCINEntry g_B201_b2_open[2]; // size: 0xE8, address: 0x4E6B90
static class NCINEntry g_B201_b2_round2[4]; // size: 0x1D0, address: 0x4E6C80
static class NCINEntry g_B201_b2_round3[2]; // size: 0xE8, address: 0x4E6E50
static class NCINEntry g_B201_b2_ending[2]; // size: 0xE8, address: 0x4E6F40
static class NCINEntry g_B302_begin[27]; // size: 0xC3C, address: 0x4E7030
static class NCINEntry g_B302_end[31]; // size: 0xE0C, address: 0x4E7C70
static class NCINEntry g_B303_end[28]; // size: 0xCB0, address: 0x4E8A80
static class NCINEntry g_HB00_prologue[24]; // size: 0xAE0, address: 0x4E9730
static class NCINMap g_cutmap[24]; // size: 0x120, address: 0x4EA210
class NCINBeNosey * g_noz_ncin; // size: 0x4, address: 0x5102FC
struct /* @anon1 */ {
    // total size: 0x10
} __vt__11NCINBeNosey; // size: 0x10, address: 0x50E3F0
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
class zNPCB_SB2 * _singleton; // size: 0x4, address: 0x510184
class xVec3 g_NX3; // size: 0xC, address: 0x4F8DB0
class xVec3 g_Z3; // size: 0xC, address: 0x4F8DA0
class xVec3 g_Y3; // size: 0xC, address: 0x4F8D90
class xVec3 g_X3; // size: 0xC, address: 0x4F8D80
struct /* @anon0 */ {
    // total size: 0x10
} __vt__9XCSNNosey; // size: 0x10, address: 0x0
class NCINDRay {
    // total size: 0x4
public:
    class RwRaster * rast; // offset 0x0, size 0x4
};
class zCutsceneMgr : public xCutsceneMgr {
    // total size: 0x24
};
class _tagLightningAdd {
    // total size: 0x40
public:
    unsigned int type; // offset 0x0, size 0x4
    float setup_degrees; // offset 0x4, size 0x4
    float move_degrees; // offset 0x8, size 0x4
    float rot_radius; // offset 0xC, size 0x4
    class xVec3 * start; // offset 0x10, size 0x4
    class xVec3 * end; // offset 0x14, size 0x4
    signed short total_points; // offset 0x18, size 0x2
    signed short end_points; // offset 0x1A, size 0x2
    float time; // offset 0x1C, size 0x4
    float arc_height; // offset 0x20, size 0x4
    float thickness; // offset 0x24, size 0x4
    class iColor_tag color; // offset 0x28, size 0x4
    float rand_radius; // offset 0x2C, size 0x4
    unsigned int flags; // offset 0x30, size 0x4
    float zeus_normal_offset; // offset 0x34, size 0x4
    float zeus_back_offset; // offset 0x38, size 0x4
    float zeus_side_offset; // offset 0x3C, size 0x4
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
class xUpdateCullEnt {
    // total size: 0x10
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
class xShadowCache {
    // total size: 0x3070
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    unsigned int entCount; // offset 0x10, size 0x4
    unsigned int polyCount; // offset 0x14, size 0x4
    float polyRayDepth[5]; // offset 0x18, size 0x14
    unsigned short castOnEnt; // offset 0x2C, size 0x2
    unsigned short castOnPoly; // offset 0x2E, size 0x2
    class xEnt * ent[16]; // offset 0x30, size 0x40
    class xShadowPoly poly[256]; // offset 0x70, size 0x3000
};
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class NCINEntry {
    // total size: 0x74
public:
    enum en_ncinfx typ_ncinfx; // offset 0x0, size 0x4
    void (* cb_fxupd)(class zCutsceneMgr *, class NCINEntry *, signed int); // offset 0x4, size 0x4
    void (* cb_fxanim)(class zCutsceneMgr *, class NCINEntry *, class RpAtomic *, class RwMatrixTag *, unsigned int, unsigned int); // offset 0x8, size 0x4
    void (* cb_fxrend)(class zCutsceneMgr *, class NCINEntry *); // offset 0xC, size 0x4
    float tym_beg; // offset 0x10, size 0x4
    float tym_end; // offset 0x14, size 0x4
    class xVec3 pos_A[2]; // offset 0x18, size 0x18
    class xVec3 pos_B[2]; // offset 0x30, size 0x18
    char * twk_name; // offset 0x48, size 0x4
    signed int idx_anim; // offset 0x4C, size 0x4
    signed int idx_bone; // offset 0x50, size 0x4
    signed int flg_stat; // offset 0x54, size 0x4
    class NCINData fxdata; // offset 0x58, size 0x1C
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
class /* @class */ {
    // total size: 0x30
public:
    class xVec3 body; // offset 0x0, size 0xC
    class xVec3 mouth; // offset 0xC, size 0xC
    class xVec3 hand[2]; // offset 0x18, size 0x18
};
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
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
class RpSkin {
    // total size: 0x0
};
class xModelAssetParam {
    // total size: 0x0
};
class zFragProjectile {
    // total size: 0x60
public:
    class zFragProjectileAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * model; // offset 0x4, size 0x4
    class xParabola path; // offset 0x8, size 0x24
    float angVel; // offset 0x2C, size 0x4
    float t; // offset 0x30, size 0x4
    float tColl; // offset 0x34, size 0x4
    signed int numBounces; // offset 0x38, size 0x4
    float scale; // offset 0x3C, size 0x4
    float parentScale; // offset 0x40, size 0x4
    float alpha; // offset 0x44, size 0x4
    class xVec3 N; // offset 0x48, size 0xC
    class xVec3 axis; // offset 0x54, size 0xC
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
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
class zFragProjectileAsset : public zFragAsset {
    // total size: 0x90
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    class RpAtomic * modelFile; // offset 0x1C, size 0x4
    class zFragLocation launch; // offset 0x20, size 0x24
    class zFragLocation vel; // offset 0x44, size 0x24
    float bounce; // offset 0x68, size 0x4
    signed int maxBounces; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
    unsigned int childID; // offset 0x74, size 0x4
    class zShrapnelAsset * child; // offset 0x78, size 0x4
    float minScale; // offset 0x7C, size 0x4
    float maxScale; // offset 0x80, size 0x4
    unsigned int scaleCurveID; // offset 0x84, size 0x4
    class xCurveAsset * scaleCurve; // offset 0x88, size 0x4
    float gravity; // offset 0x8C, size 0x4
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
class NPCHazard {
    // total size: 0xE4
public:
    enum en_npchaz typ_hazard; // offset 0x0, size 0x4
    signed int flg_hazard; // offset 0x4, size 0x4
    class xVec3 pos_hazard; // offset 0x8, size 0xC
    class xModelInstance * mdl_hazard; // offset 0x14, size 0x4
    class UVAModelInfo * uva_uvanim; // offset 0x18, size 0x4
    float tym_lifespan; // offset 0x1C, size 0x4
    float tmr_remain; // offset 0x20, size 0x4
    float pam_interp; // offset 0x24, size 0x4
    union { // inferred
        float tmr_generic; // offset 0x28, size 0x4
        float tmr_nextglob; // offset 0x28, size 0x4
    };
    union { // inferred
        signed int cnt_generic; // offset 0x2C, size 0x4
        signed int cnt_nextemit; // offset 0x2C, size 0x4
        signed int flg_casthurt; // offset 0x2C, size 0x4
    };
    class /* @class */ {
        // total size: 0xA4
    public:
        union { // inferred
            class HAZTypical typical; // offset 0x0, size 0x3C
            class HAZCollide collide; // offset 0x0, size 0x84
            class HAZBall ball; // offset 0x0, size 0x3C
            class HAZRing ring; // offset 0x0, size 0x40
            class HAZShroom shroom; // offset 0x0, size 0x54
            class HAZCloud cloud; // offset 0x0, size 0x68
            class HAZPatriot patriot; // offset 0x0, size 0x1C
            class HAZTarTar tartar; // offset 0x0, size 0xA4
            class HAZCatProd catprod; // offset 0x0, size 0x44
        };
    } custdata; // offset 0x30, size 0xA4
    class HAZNotify * cb_notify; // offset 0xD4, size 0x4
    class zNPCCommon * npc_owner; // offset 0xD8, size 0x4
    class NPCHazard * haz_parent; // offset 0xDC, size 0x4
    class xShadowCache * shadowCache; // offset 0xE0, size 0x4
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
class xModelTagWithNormal : public xModelTag {
    // total size: 0x2C
public:
    class xVec3 normal; // offset 0x20, size 0xC
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
class zParEmitter : public xParEmitter {
    // total size: 0x78
};
class zLightning {
    // total size: 0x234
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    union { // inferred
        class /* @class */ {
            // total size: 0x220
        public:
            class xVec3 base_point[16]; // offset 0x0, size 0xC0
            class xVec3 point[16]; // offset 0xC0, size 0xC0
            signed short total_points; // offset 0x180, size 0x2
            signed short end_points; // offset 0x182, size 0x2
            float arc_height; // offset 0x184, size 0x4
            class xVec3 arc_normal; // offset 0x188, size 0xC
            float thickness[16]; // offset 0x194, size 0x40
            union { // inferred
                class _tagLightningLine line; // offset 0x1D4, size 0x4
                class _tagLightningRot rot; // offset 0x1D4, size 0x48
                class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
            };
            float rand_radius; // offset 0x21C, size 0x4
        } legacy; // offset 0x8, size 0x220
        class /* @class */ {
            // total size: 0x58
        public:
            class xVec3 endPoint[2]; // offset 0x0, size 0x18
            class xVec3 direction; // offset 0x18, size 0xC
            float length; // offset 0x24, size 0x4
            float scale; // offset 0x28, size 0x4
            float width; // offset 0x2C, size 0x4
            float endParam[2]; // offset 0x30, size 0x8
            float endVel[2]; // offset 0x38, size 0x8
            float paramSpan[2]; // offset 0x40, size 0x8
            float arc_height; // offset 0x48, size 0x4
            class xVec3 arc_normal; // offset 0x4C, size 0xC
        } func; // offset 0x8, size 0x58
    };
    class iColor_tag color; // offset 0x228, size 0x4
    float time_left; // offset 0x22C, size 0x4
    float time_total; // offset 0x230, size 0x4
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
};
class zNPCLassoInfo {
    // total size: 0x18
public:
    enum en_LASSO_STATUS stage; // offset 0x0, size 0x4
    class xEnt * lassoee; // offset 0x4, size 0x4
    class xAnimState * holdGuideAnim; // offset 0x8, size 0x4
    class xModelInstance * holdGuideModel; // offset 0xC, size 0x4
    class xAnimState * grabGuideAnim; // offset 0x10, size 0x4
    class xModelInstance * grabGuideModel; // offset 0x14, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
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
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
class zFragShockwaveAsset : public zFragAsset {
    // total size: 0x54
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    float birthRadius; // offset 0x1C, size 0x4
    float deathRadius; // offset 0x20, size 0x4
    float birthVelocity; // offset 0x24, size 0x4
    float deathVelocity; // offset 0x28, size 0x4
    float birthSpin; // offset 0x2C, size 0x4
    float deathSpin; // offset 0x30, size 0x4
    float birthColor[4]; // offset 0x34, size 0x10
    float deathColor[4]; // offset 0x44, size 0x10
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
class xParSysAsset : public xBaseAsset {
    // total size: 0x20
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned int parentParSysID; // offset 0xC, size 0x4
    unsigned int textureID; // offset 0x10, size 0x4
    unsigned char parFlags; // offset 0x14, size 0x1
    unsigned char priority; // offset 0x15, size 0x1
    unsigned short maxPar; // offset 0x16, size 0x2
    unsigned char renderFunc; // offset 0x18, size 0x1
    unsigned char renderSrcBlendMode; // offset 0x19, size 0x1
    unsigned char renderDstBlendMode; // offset 0x1A, size 0x1
    unsigned char cmdCount; // offset 0x1B, size 0x1
    unsigned int cmdSize; // offset 0x1C, size 0x4
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
class NCINLamp {
    // total size: 0x10
public:
    class xVec3 pos_robo; // offset 0x0, size 0xC
    class RwRaster * rast; // offset 0xC, size 0x4
};
class xCurveAsset {
    // total size: 0x0
};
class _zEnv : public xBase {
    // total size: 0x14
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
class xEntOrbitData {
    // total size: 0x28
public:
    class xVec3 orig; // offset 0x0, size 0xC
    class xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class HAZTarTar : public HAZCollide {
    // total size: 0xA4
public:
    class xVec3 vel; // offset 0x84, size 0xC
    float spd_lob; // offset 0x90, size 0x4
    class xVec3 pos_tgt; // offset 0x94, size 0xC
    unsigned int streakID; // offset 0xA0, size 0x4
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
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
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
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
class xParCmd {
    // total size: 0x8
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
};
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
class zFrag {
    // total size: 0x84
public:
    enum zFragType type; // offset 0x0, size 0x4
    class zFragInfo info; // offset 0x4, size 0x60
    float delay; // offset 0x64, size 0x4
    float alivetime; // offset 0x68, size 0x4
    float lifetime; // offset 0x6C, size 0x4
    void (* update)(class zFrag *, float); // offset 0x70, size 0x4
    class xModelInstance * parent[2]; // offset 0x74, size 0x8
    class zFrag * prev; // offset 0x7C, size 0x4
    class zFrag * next; // offset 0x80, size 0x4
};
enum zFragLocType {
    eFragLocBone = 0,
    eFragLocBoneUpdated = 1,
    eFragLocBoneLocal = 2,
    eFragLocBoneLocalUpdated = 3,
    eFragLocTag = 4,
    eFragLocTagUpdated = 5,
    eFragLocCount = 6,
    eFragLocForceSize = 2147483647,
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
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class NCINStrk {
    // total size: 0x8
public:
    unsigned int sid_vert; // offset 0x0, size 0x4
    unsigned int sid_horz; // offset 0x4, size 0x4
};
class xParSys : public xBase {
    // total size: 0x2C
public:
    class xParSysAsset * tasset; // offset 0x10, size 0x4
    unsigned int cmdCount; // offset 0x14, size 0x4
    class xParCmd * cmd; // offset 0x18, size 0x4
    class xParSys * parent; // offset 0x1C, size 0x4
    class xParGroup * group; // offset 0x20, size 0x4
    unsigned char visible; // offset 0x24, size 0x1
    class RwTexture * txtr_particle; // offset 0x28, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
class HAZShroom : public HAZTypical {
    // total size: 0x54
public:
    class xVec3 vel_rise; // offset 0x3C, size 0xC
    class xVec3 acc_rise; // offset 0x48, size 0xC
};
enum en_npchaz {
    NPC_HAZ_UNKNOWN = 0,
    NPC_HAZ_EXPLODE = 1,
    NPC_HAZ_EXPLODE_INNER = 2,
    NPC_HAZ_FODBOMB = 3,
    NPC_HAZ_CATTLEPROD = 4,
    NPC_HAZ_TUBELETBLAST = 5,
    NPC_HAZ_PUPPYNUKE = 6,
    NPC_HAZ_DUPLOBOOM = 7,
    NPC_HAZ_DUPLO_SHROOM = 8,
    NPC_HAZ_PATRIOT = 9,
    NPC_HAZ_TARTARPROJ = 10,
    NPC_HAZ_TARTARSPILL = 11,
    NPC_HAZ_TARTARSTINK = 12,
    NPC_HAZ_CHUCKBOMB = 13,
    NPC_HAZ_CHUCKBLAST = 14,
    NPC_HAZ_CHUCKBLOOSH = 15,
    NPC_HAZ_ARFBONE = 16,
    NPC_HAZ_ARFBONEBLAST = 17,
    NPC_HAZ_OILBUBBLE = 18,
    NPC_HAZ_OILSLICK = 19,
    NPC_HAZ_OILBURST = 20,
    NPC_HAZ_OILGLOB = 21,
    NPC_HAZ_MONCLOUD = 22,
    NPC_HAZ_FUNFRAG = 23,
    NPC_HAZ_THUNDER = 24,
    NPC_HAZ_ROBOBITS = 25,
    NPC_HAZ_VISSPLASH = 26,
    NPC_HAZ_NOMORE = 27,
    NPC_HAZ_FORCE = 2147483647,
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
class zPlatFMRunTime {
    // total size: 0x124
public:
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[12]; // offset 0x4, size 0x30
    float ttms[12]; // offset 0x34, size 0x30
    float atms[12]; // offset 0x64, size 0x30
    float dtms[12]; // offset 0x94, size 0x30
    float vms[12]; // offset 0xC4, size 0x30
    float dss[12]; // offset 0xF4, size 0x30
};
class xParGroup {
    // total size: 0x24
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
class xCutsceneZbufferHack {
    // total size: 0x44
public:
    char * name; // offset 0x0, size 0x4
    class xCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
class xCutscene {
    // total size: 0x138
public:
    class xCutsceneInfo * Info; // offset 0x0, size 0x4
    class xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    class xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    class xCutsceneTime * Play; // offset 0x14, size 0x4
    class xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    signed int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    class tag_xFile File; // offset 0x54, size 0xB4
    signed int AsyncID; // offset 0x108, size 0x4
    void * MemBuf; // offset 0x10C, size 0x4
    void * MemCurr; // offset 0x110, size 0x4
    unsigned int SndStarted; // offset 0x114, size 0x4
    unsigned int SndNumChannel; // offset 0x118, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x11C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x124, size 0x8
    unsigned int SndHandle[2]; // offset 0x12C, size 0x8
    class XCSNNosey * cb_nosey; // offset 0x134, size 0x4
};
class xEntMotion {
    // total size: 0x80
public:
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class xEntERData er; // offset 0x20, size 0x44
        class xEntOrbitData orb; // offset 0x20, size 0x28
        class xEntSplineData spl; // offset 0x20, size 0x4
        class xEntMPData mp; // offset 0x20, size 0x40
        class xEntMechData mech; // offset 0x20, size 0x4C
        class xEntPenData pen; // offset 0x20, size 0x50
    };
    class xEnt * owner; // offset 0x70, size 0x4
    class xEnt * target; // offset 0x74, size 0x4
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
class xGoal : public xListItem, public xFactoryInst {
    // total size: 0x3C
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    signed int goalID; // offset 0x1C, size 0x4
    enum en_GOALSTATE stat; // offset 0x20, size 0x4
    signed int flg_able; // offset 0x24, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x28, size 0x4
    signed int (* fun_precalc)(class xGoal *, void *, float, void *); // offset 0x2C, size 0x4
    signed int (* fun_chkRule)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x30, size 0x4
    void * cbdata; // offset 0x34, size 0x4
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
class xPlatformAsset {
    // total size: 0x0
};
class zNPCNewsFish {
    // total size: 0x0
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class NCINBeNosey : public XCSNNosey {
    // total size: 0x14
public:
    class zCutsceneMgr * use_csnmgr; // offset 0xC, size 0x4
    class NCINEntry * use_fxtab; // offset 0x10, size 0x4
};
class xEntMotionAsset {
    // total size: 0x30
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xEntMotionERData er; // offset 0x4, size 0x28
        class xEntMotionOrbitData orb; // offset 0x4, size 0x18
        class xEntMotionSplineData spl; // offset 0x4, size 0x4
        class xEntMotionMPData mp; // offset 0x4, size 0xC
        class xEntMotionMechData mech; // offset 0x4, size 0x2C
        class xEntMotionPenData pen; // offset 0x4, size 0x14
    };
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
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class NCINMap {
    // total size: 0xC
public:
    char * cinname; // offset 0x0, size 0x4
    class NCINEntry * cinfxtab; // offset 0x4, size 0x4
    unsigned int cinhash; // offset 0x8, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
class xEntBoulder {
    // total size: 0x0
};
class RxPipelineNodeTopSortData {
    // total size: 0xC
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
class RwV2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class zFragParticleAsset : public zFragAsset {
    // total size: 0x1D4
public:
    class zFragLocation source; // offset 0x18, size 0x24
    class zFragLocation vel; // offset 0x3C, size 0x24
    class xParEmitterCustomSettings emit; // offset 0x60, size 0x16C
    unsigned int parEmitterID; // offset 0x1CC, size 0x4
    class zParEmitter * parEmitter; // offset 0x1D0, size 0x4
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class xParCmdTex : public xParCmdAsset {
    // total size: 0x24
public:
    float x1; // offset 0x8, size 0x4
    float y1; // offset 0xC, size 0x4
    float x2; // offset 0x10, size 0x4
    float y2; // offset 0x14, size 0x4
    unsigned char birthMode; // offset 0x18, size 0x1
    unsigned char rows; // offset 0x19, size 0x1
    unsigned char cols; // offset 0x1A, size 0x1
    unsigned char unit_count; // offset 0x1B, size 0x1
    float unit_width; // offset 0x1C, size 0x4
    float unit_height; // offset 0x20, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
class node_data {
    // total size: 0x74
public:
    class zEntDestructObj * ent; // offset 0x0, size 0x4
    float pulse; // offset 0x4, size 0x4
    class xLightKit * old_light_kit; // offset 0x8, size 0x4
    class RpAtomic * skin_model; // offset 0xC, size 0x4
    class RwMatrixTag * skin_mat; // offset 0x10, size 0x4
    union { // inferred
        class /* @class */ {
            // total size: 0x4C
        public:
            class xModelTagWithNormal tag; // offset 0x0, size 0x2C
            class xModelTag uptag; // offset 0x2C, size 0x20
        } v2n1; // offset 0x14, size 0x4C
        class /* @class */ {
            // total size: 0x60
        public:
            class xModelTag tag[3]; // offset 0x0, size 0x60
        } v3; // offset 0x14, size 0x60
    };
};
class zEntHangable {
    // total size: 0x0
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
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class NPARMgmt {
    // total size: 0x20
public:
    enum en_nparptyp typ_npar; // offset 0x0, size 0x4
    signed int flg_npar; // offset 0x4, size 0x4
    class NPARData * par_buf; // offset 0x8, size 0x4
    signed int cnt_active; // offset 0xC, size 0x4
    signed int num_max; // offset 0x10, size 0x4
    class RwTexture * txtr; // offset 0x14, size 0x4
    class NPARXtraData * xtra_data; // offset 0x18, size 0x4
    void * * user_data; // offset 0x1C, size 0x4
};
class NPCConfig : public xListItem {
    // total size: 0x3B0
public:
    unsigned int modelID; // offset 0xC, size 0x4
    signed int flg_config; // offset 0x10, size 0x4
    float spd_turnMax; // offset 0x14, size 0x4
    float spd_moveMax; // offset 0x18, size 0x4
    float fac_accelMax; // offset 0x1C, size 0x4
    float fac_driftMax; // offset 0x20, size 0x4
    float fac_gravKnock; // offset 0x24, size 0x4
    float fac_elastic; // offset 0x28, size 0x4
    signed int pts_damage; // offset 0x2C, size 0x4
    signed int useBoxBound; // offset 0x30, size 0x4
    class xVec3 off_bound; // offset 0x34, size 0xC
    class xVec3 dim_bound; // offset 0x40, size 0xC
    float npcMass; // offset 0x4C, size 0x4
    float npcMassInv; // offset 0x50, size 0x4
    float rad_detect; // offset 0x54, size 0x4
    float hyt_detect; // offset 0x58, size 0x4
    float off_detect; // offset 0x5C, size 0x4
    float rad_attack; // offset 0x60, size 0x4
    float fov_attack; // offset 0x64, size 0x4
    class xVec3 scl_model; // offset 0x68, size 0xC
    float tym_attack; // offset 0x74, size 0x4
    float tym_fidget; // offset 0x78, size 0x4
    float tym_stun; // offset 0x7C, size 0x4
    float tym_alert; // offset 0x80, size 0x4
    float dst_castShadow; // offset 0x84, size 0x4
    float rad_shadowCache; // offset 0x88, size 0x4
    float rad_shadowRaster; // offset 0x8C, size 0x4
    float rad_dmgSize; // offset 0x90, size 0x4
    signed int flg_vert; // offset 0x94, size 0x4
    class xModelTag tag_vert[20]; // offset 0x98, size 0x280
    class xVec3 animFrameRange[9]; // offset 0x318, size 0x6C
    signed int cnt_esteem[5]; // offset 0x384, size 0x14
    float rad_sound; // offset 0x398, size 0x4
    class NPCSndTrax * snd_trax; // offset 0x39C, size 0x4
    class NPCSndTrax * snd_traxShare; // offset 0x3A0, size 0x4
    signed int test_count; // offset 0x3A4, size 0x4
    unsigned char talk_filter[4]; // offset 0x3A8, size 0x4
    unsigned char talk_filter_size; // offset 0x3AC, size 0x1
};
class bound_data {
    // total size: 0x140
public:
    class xEnt ent; // offset 0x0, size 0xD0
    class xMat4x3 mat; // offset 0xD0, size 0x40
    class xMat3x3 rot_mat; // offset 0x110, size 0x30
};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
class xMovePointAsset : public xBaseAsset {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
class HAZNotify {
    // total size: 0x4
};
class zNPCSettings : public xDynAsset {
    // total size: 0x2C
public:
    enum en_npcbtyp basisType; // offset 0x10, size 0x4
    char allowDetect; // offset 0x14, size 0x1
    char allowPatrol; // offset 0x15, size 0x1
    char allowWander; // offset 0x16, size 0x1
    char reduceCollide; // offset 0x17, size 0x1
    char useNavSplines; // offset 0x18, size 0x1
    char pad[3]; // offset 0x19, size 0x3
    char allowChase; // offset 0x1C, size 0x1
    char allowAttack; // offset 0x1D, size 0x1
    char assumeLOS; // offset 0x1E, size 0x1
    char assumeFOV; // offset 0x1F, size 0x1
    enum en_dupowavmod duploWaveMode; // offset 0x20, size 0x4
    float duploSpawnDelay; // offset 0x24, size 0x4
    signed int duploSpawnLifeMax; // offset 0x28, size 0x4
};
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
class xCutsceneBreak {
    // total size: 0x8
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
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
class zEntDestructObj {
    // total size: 0x0
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
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class NCINArc {
    // total size: 0x10
public:
    class zLightning * lightning; // offset 0x0, size 0x4
    class xVec3 endPos; // offset 0x4, size 0xC
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
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
class xEntSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class HAZCloud : public HAZTypical {
    // total size: 0x68
public:
    float spd_cloud; // offset 0x3C, size 0x4
    class xVec3 pos_home; // offset 0x40, size 0xC
    float rad_maxRange; // offset 0x4C, size 0x4
    float tmr_dozap; // offset 0x50, size 0x4
    class zLightning * zap_lytnin; // offset 0x54, size 0x4
    class zLightning * zap_warnin; // offset 0x58, size 0x4
    class xVec3 pos_warnin; // offset 0x5C, size 0xC
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
class NPCTarget {
    // total size: 0x14
public:
    enum en_npctgt typ_target; // offset 0x0, size 0x4
    union { // inferred
        class xEnt * ent_target; // offset 0x4, size 0x4
        class xBase * bas_target; // offset 0x4, size 0x4
        class xVec3 pos_target; // offset 0x4, size 0xC
        class zMovePoint * nav_target; // offset 0x4, size 0x4
    };
    class zNPCCommon * npc_owner; // offset 0x10, size 0x4
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
class NPARXtraData {
    // total size: 0x1
};
class zNPCBPlankton {
    // total size: 0x0
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
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class XCSNNosey {
    // total size: 0xC
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
};
class zFragLightning {
    // total size: 0x10
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
class xCutsceneMgr : public xBase {
    // total size: 0x24
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class xCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
    float oldfov; // offset 0x20, size 0x4
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
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class xEntMotionPenData {
    // total size: 0x14
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
class xPSYNote {
    // total size: 0x4
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class UVAModelInfo {
    // total size: 0x20
public:
    class xVec2 offset_vel; // offset 0x0, size 0x8
    unsigned int flg_uvam; // offset 0x8, size 0x4
    class RpAtomic * model; // offset 0xC, size 0x4
    class RwTexCoords * uv; // offset 0x10, size 0x4
    signed int uvsize; // offset 0x14, size 0x4
    class xVec2 offset; // offset 0x18, size 0x8
};
class zFragBone {
    // total size: 0x10
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
class zFragLightningAsset : public zFragAsset {
    // total size: 0x68
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
class xCutsceneMgrAsset : public xBaseAsset {
    // total size: 0xC8
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    float startTime[15]; // offset 0x14, size 0x3C
    float endTime[15]; // offset 0x50, size 0x3C
    unsigned int emitID[15]; // offset 0x8C, size 0x3C
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
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
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
class zNPCB_SB2 : public zNPCBoss {
    // total size: 0x1B40
public:
    class /* @class */ {
        // total size: 0x10
    public:
        unsigned char face_player; // offset 0x0, size 0x1
        unsigned char face_follow; // offset 0x1, size 0x1
        unsigned char dizzy; // offset 0x2, size 0x1
        enum move_enum move; // offset 0x4, size 0x4
        unsigned char vulnerable; // offset 0x8, size 0x1
        unsigned char cruise_exploding; // offset 0x9, size 0x1
        unsigned char cruise_hit_body; // offset 0xA, size 0x1
        unsigned char cruise_hit_target; // offset 0xB, size 0x1
        unsigned char nodes_taken; // offset 0xC, size 0x1
        unsigned char updated; // offset 0xD, size 0x1
    } flag; // offset 0x2B4, size 0x10
    signed int life; // offset 0x2C4, size 0x4
    signed int round; // offset 0x2C8, size 0x4
    signed int stage; // offset 0x2CC, size 0x4
    float delay; // offset 0x2D0, size 0x4
    float stage_delay; // offset 0x2D4, size 0x4
    float player_damage_timer; // offset 0x2D8, size 0x4
    unsigned int old_player_health; // offset 0x2DC, size 0x4
    enum hand_enum active_hand; // offset 0x2E0, size 0x4
    class zNPCBPlankton * plankton; // offset 0x2E4, size 0x4
    class zNPCNewsFish * newsfish; // offset 0x2E8, size 0x4
    unsigned char said_intro; // offset 0x2EC, size 0x1
    class xModelInstance * models[4]; // offset 0x2F0, size 0x10
    class node_data nodes[9]; // offset 0x300, size 0x414
    class hand_data hands[2]; // offset 0x714, size 0x218
    class platform_data platforms[16]; // offset 0x92C, size 0x5C0
    class bound_data bounds[5]; // offset 0xEF0, size 0x640
    class slug_data slugs[3]; // offset 0x1530, size 0x270
    class /* @class */ {
        // total size: 0x14
    public:
        class xVec2 dir; // offset 0x0, size 0x8
        float vel; // offset 0x8, size 0x4
        float accel; // offset 0xC, size 0x4
        float max_vel; // offset 0x10, size 0x4
    } turn; // offset 0x17A0, size 0x14
    class move_data move; // offset 0x17B4, size 0x2C
    class /* @class */ {
        // total size: 0x10
    public:
        float begin; // offset 0x0, size 0x4
        float end; // offset 0x4, size 0x4
        float time; // offset 0x8, size 0x4
        float end_time; // offset 0xC, size 0x4
    } ymove; // offset 0x17E0, size 0x10
    class /* @class */ {
        // total size: 0x30
    public:
        class xVec3 body; // offset 0x0, size 0xC
        class xVec3 mouth; // offset 0xC, size 0xC
        class xVec3 hand[2]; // offset 0x18, size 0x18
    } sound_loc; // offset 0x17F0, size 0x30
    float node_pulse; // offset 0x1820, size 0x4
    class /* @class */ {
        // total size: 0x310
    public:
        class xLightKit kit; // offset 0x0, size 0x10
        class xLightKitLight light[8]; // offset 0x10, size 0x300
    } glow_light; // offset 0x1824, size 0x310
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
class xAnimEffect {
    // total size: 0x14
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x10
};
enum en_ncinfx {
    NCIN_FXTYP_UNKNOWN = 0,
    NCIN_FXTYP_EXAMPLE = 1,
    NCIN_FXTYP_BUBSLAM_LG = 2,
    NCIN_FXTYP_BUBSLAM_SM = 3,
    NCIN_FXTYP_SMOKETRAIL = 4,
    NCIN_FXTYP_BUBTRAIL = 5,
    NCIN_FXTYP_BUBTRAILBONE = 6,
    NCIN_FXTYP_BUBWIPE = 7,
    NCIN_FXTYP_JELLYLIGHT_01 = 8,
    NCIN_FXTYP_WATERSPLASH = 9,
    NCIN_FXTYP_TARTARSHOOT = 10,
    NCIN_FXTYP_OILSHOOT = 11,
    NCIN_FXTYP_BONESHOOT = 12,
    NCIN_FXTYP_BONETRAIL = 13,
    NCIN_FXTYP_BOMBTRAIL = 14,
    NCIN_FXTYP_OILHAZARD = 15,
    NCIN_FXTYP_TARTARSTEAM = 16,
    NCIN_FXTYP_ARFDOGBOOM = 17,
    NCIN_FXTYP_SHIELDPOP = 18,
    NCIN_FXTYP_TTGUNSMOKE = 19,
    NCIN_FXTYP_SPATULAGLOW = 20,
    NCIN_FXTYP_HOOKRECOIL = 21,
    NCIN_FXTYP_FODDERPROD = 22,
    NCIN_FXTYP_BZZTDANCE = 23,
    NCIN_FXTYP_BZZTBEAM = 24,
    NCIN_FXTYP_BADBREATH = 25,
    NCIN_FXTYP_BOMBBLINK = 26,
    NCIN_FXTYP_HAMSHOCK = 27,
    NCIN_FXTYP_HAMSTREAK = 28,
    NCIN_FXTYP_MONCLOUD = 29,
    NCIN_FXTYP_MIDFISH = 30,
    NCIN_FXTYP_GLOVEFRAG = 31,
    NCIN_FXTYP_MARYBOOM = 32,
    NCIN_FXTYP_PETEBONK = 33,
    NCIN_FXTYP_FIRESPIRAL = 34,
    NCIN_FXTYP_SLEEPYLAMP = 35,
    NCIN_FXTYP_SLEEPYDRAY = 36,
    NCIN_FXTYP_B101OPEN_SBENTER = 37,
    NCIN_FXTYP_B101OPEN_PATENTER = 38,
    NCIN_FXTYP_B101OPEN_SHOCKWAVE = 39,
    NCIN_FXTYP_B101ROUND1_SHOCK1 = 40,
    NCIN_FXTYP_B101ROUND1_SHOCK2 = 41,
    NCIN_FXTYP_B101ROUND1_SHOCK3 = 42,
    NCIN_FXTYP_B101ENDING_SHOCK1 = 43,
    NCIN_FXTYP_B101ENDING_SHOCK2 = 44,
    NCIN_FXTYP_B101ENDING_SHOCK3 = 45,
    NCIN_FXTYP_B101ENDING_SHOCK4 = 46,
    NCIN_FXTYP_B101ENDING_SHOCKWAVE = 47,
    NCIN_FXTYP_B201OPEN_FREEZE = 48,
    NCIN_FXTYP_B201ROUND1_FREEZE = 49,
    NCIN_FXTYP_B201HIDECONVEYOR = 50,
    NCIN_FXTYP_B201GOOLEVER = 51,
    NCIN_FXTYP_B201FRAG = 52,
    NCIN_FXTYP_B303STUFF = 53,
    NCIN_FXTYP_PAR_ENTITY_BONE = 54,
    NCIN_FXTYP_PROBE = 55,
    NCIN_FXTYP_DUPLOPUFFS = 56,
    NCIN_FXTYP_SPAWNRING = 57,
    NCIN_FXTYP_BUBPLYRSKEL = 58,
    NCIN_FXTYP_GLINT = 59,
    NCIN_FXTYP_NOMORE = 60,
    NCIN_FXTYP_FORCE = 2147483647,
};
class zFragAsset {
    // total size: 0x18
public:
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
class xEntMPData {
    // total size: 0x40
public:
    float curdist; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    class xMovePoint * dest; // offset 0x8, size 0x4
    class xMovePoint * src; // offset 0xC, size 0x4
    class xSpline3 * spl; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
    unsigned int padalign; // offset 0x18, size 0x4
    class xQuat aquat; // offset 0x20, size 0x10
    class xQuat bquat; // offset 0x30, size 0x10
};
class xPar {
    // total size: 0x60
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
class zPlatform : public zEnt {
    // total size: 0x210
public:
    class xPlatformAsset * passet; // offset 0xD4, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0x80
    unsigned short state; // offset 0x160, size 0x2
    unsigned short plat_flags; // offset 0x162, size 0x2
    float tmr; // offset 0x164, size 0x4
    signed int ctr; // offset 0x168, size 0x4
    class xMovePoint * src; // offset 0x16C, size 0x4
    class xModelInstance * am; // offset 0x170, size 0x4
    class xModelInstance * bm; // offset 0x174, size 0x4
    signed int moving; // offset 0x178, size 0x4
    class xEntDrive drv; // offset 0x17C, size 0x7C
    class zPlatFMRunTime * fmrt; // offset 0x1F8, size 0x4
    float pauseMult; // offset 0x1FC, size 0x4
    float pauseDelta; // offset 0x200, size 0x4
};
class NPCSndQueue {
    // total size: 0x14
public:
    unsigned int sndDirect; // offset 0x0, size 0x4
    enum en_NPC_SOUND sndtype; // offset 0x4, size 0x4
    signed int flg_snd; // offset 0x8, size 0x4
    float tmr_delay; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
};
class NCINPar {
    // total size: 0x4
public:
    class zParEmitter * emitter; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x4C
public:
    class xModelTagWithNormal tag; // offset 0x0, size 0x2C
    class xModelTag uptag; // offset 0x2C, size 0x20
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
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
class xParInterp {
    // total size: 0x14
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
class zNPCCommon : public xNPCBasic {
    // total size: 0x2A0
public:
    class xEntAsset * entass; // offset 0x1BC, size 0x4
    class xEntNPCAsset * npcass; // offset 0x1C0, size 0x4
    class zNPCSettings * npcsetass; // offset 0x1C4, size 0x4
    signed int flg_vuln; // offset 0x1C8, size 0x4
    signed int flg_move; // offset 0x1CC, size 0x4
    signed int flg_misc; // offset 0x1D0, size 0x4
    signed int flg_able; // offset 0x1D4, size 0x4
    class NPCConfig * cfg_npc; // offset 0x1D8, size 0x4
    class zNPCSettings npcset; // offset 0x1DC, size 0x2C
    class zMovePoint * nav_past; // offset 0x208, size 0x4
    class zMovePoint * nav_curr; // offset 0x20C, size 0x4
    class zMovePoint * nav_dest; // offset 0x210, size 0x4
    class zMovePoint * nav_lead; // offset 0x214, size 0x4
    class xSpline3 * spl_mvptspline; // offset 0x218, size 0x4
    float len_mvptspline; // offset 0x21C, size 0x4
    float dst_curspline; // offset 0x220, size 0x4
    class xEntDrive * drv_data; // offset 0x224, size 0x4
    class xPsyche * psy_instinct; // offset 0x228, size 0x4
    class zNPCCommon * npc_duplodude; // offset 0x22C, size 0x4
    float spd_throttle; // offset 0x230, size 0x4
    signed int flg_xtrarend; // offset 0x234, size 0x4
    float tmr_fidget; // offset 0x238, size 0x4
    float tmr_invuln; // offset 0x23C, size 0x4
    class zShrapnelAsset * explosion; // offset 0x240, size 0x4
    class xModelAssetParam * parmdata; // offset 0x244, size 0x4
    unsigned int pdatsize; // offset 0x248, size 0x4
    class zNPCLassoInfo * lassdata; // offset 0x24C, size 0x4
    class NPCSndQueue snd_queue[4]; // offset 0x250, size 0x50
};
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class zShrapnelAsset {
    // total size: 0xC
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
class zMovePoint : public xMovePoint {
    // total size: 0x30
};
class xMovePoint : public xBase {
    // total size: 0x30
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[2]; // offset 0x25, size 0x2
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
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
class NPARData {
    // total size: 0x50
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float xy_size[2]; // offset 0xC, size 0x8
    float uv_tl[2]; // offset 0x14, size 0x8
    float uv_br[2]; // offset 0x1C, size 0x8
    class RwRGBA color; // offset 0x24, size 0x4
    float tmr_remain; // offset 0x28, size 0x4
    float tym_exist; // offset 0x2C, size 0x4
    float fac_abuse; // offset 0x30, size 0x4
    class xVec3 vel; // offset 0x34, size 0xC
    signed int flg_popts : 24; // offset 0x40, size 0x4
    signed int nparmode : 8; // offset 0x40, size 0x4
    float unused[3]; // offset 0x44, size 0xC
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class xParCmdAsset {
    // total size: 0x8
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class zFragLocInfo {
    // total size: 0x20
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
    };
};
class tag_iFile {
    // total size: 0x90
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
class xFFX {
    // total size: 0x0
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class xSpline3 {
    // total size: 0x2C
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
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
class xEntMotionERData {
    // total size: 0x28
public:
    class xVec3 ret_pos; // offset 0x0, size 0xC
    class xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
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
class rxReq {
    // total size: 0x0
};
class zFragSound {
    // total size: 0x14
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    class xVec2 dir; // offset 0x0, size 0x8
    float vel; // offset 0x8, size 0x4
    float accel; // offset 0xC, size 0x4
    float max_vel; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0x220
public:
    class xVec3 base_point[16]; // offset 0x0, size 0xC0
    class xVec3 point[16]; // offset 0xC0, size 0xC0
    signed short total_points; // offset 0x180, size 0x2
    signed short end_points; // offset 0x182, size 0x2
    float arc_height; // offset 0x184, size 0x4
    class xVec3 arc_normal; // offset 0x188, size 0xC
    float thickness[16]; // offset 0x194, size 0x40
    union { // inferred
        class _tagLightningLine line; // offset 0x1D4, size 0x4
        class _tagLightningRot rot; // offset 0x1D4, size 0x48
        class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
    };
    float rand_radius; // offset 0x21C, size 0x4
};
class /* @class */ {
    // total size: 0x310
public:
    class xLightKit kit; // offset 0x0, size 0x10
    class xLightKitLight light[8]; // offset 0x10, size 0x300
};
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class xPsyche : public RyzMemData {
    // total size: 0x68
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
};
class HAZCatProd : public HAZBall {
    // total size: 0x44
public:
    class zLightning * zap_lyta; // offset 0x3C, size 0x4
    class zLightning * zap_lytb; // offset 0x40, size 0x4
};
class NCINEnts {
    // total size: 0x10
public:
    class xEnt * ent[4]; // offset 0x0, size 0x10
};
class zFragSoundAsset : public zFragAsset {
    // total size: 0x4C
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x24
    float volume; // offset 0x40, size 0x4
    float innerRadius; // offset 0x44, size 0x4
    float outerRadius; // offset 0x48, size 0x4
};
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class xEntNPCAsset {
    // total size: 0x18
public:
    signed int npcFlags; // offset 0x0, size 0x4
    signed int npcModel; // offset 0x4, size 0x4
    signed int npcProps; // offset 0x8, size 0x4
    unsigned int movepoint; // offset 0xC, size 0x4
    unsigned int taskWidgetPrime; // offset 0x10, size 0x4
    unsigned int taskWidgetSecond; // offset 0x14, size 0x4
};
enum slug_stage {
    SLUG_INACTIVE = 0,
    SLUG_AIM = 1,
    SLUG_DELAY = 2,
    SLUG_DYING = 3,
    SLUG_FIRE = 4,
};
class /* @class */ {
    // total size: 0x60
public:
    class xModelTag tag[3]; // offset 0x0, size 0x60
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
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
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
class anim_coll_data {
    // total size: 0x0
};
class zFragLocation {
    // total size: 0x24
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
class zAssetPickupTable {
    // total size: 0x0
};
class NCINMat {
    // total size: 0x4
public:
    class RwMatrixTag * mat; // offset 0x0, size 0x4
};
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
enum hand_enum {
    LEFT_HAND = 0,
    RIGHT_HAND = 1,
};
class NCINShrap {
    // total size: 0x4
public:
    class zShrapnelAsset * shrap; // offset 0x0, size 0x4
};
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class zFragShockwave {
    // total size: 0x38
public:
    class zFragShockwaveAsset * fasset; // offset 0x0, size 0x4
    float currSize; // offset 0x4, size 0x4
    float currVelocity; // offset 0x8, size 0x4
    float deltVelocity; // offset 0xC, size 0x4
    float currSpin; // offset 0x10, size 0x4
    float deltSpin; // offset 0x14, size 0x4
    float currColor[4]; // offset 0x18, size 0x10
    float deltColor[4]; // offset 0x28, size 0x10
};
class move_config {
    // total size: 0x10
public:
    float accel; // offset 0x0, size 0x4
    float max_vel; // offset 0x4, size 0x4
    float turn_accel; // offset 0x8, size 0x4
    float turn_max_vel; // offset 0xC, size 0x4
};
class _tagLightningLine {
    // total size: 0x4
public:
    float unused; // offset 0x0, size 0x4
};
class slug_data {
    // total size: 0xD0
public:
    enum slug_stage stage; // offset 0x0, size 0x4
    unsigned char spun; // offset 0x4, size 0x1
    unsigned char abandoned; // offset 0x5, size 0x1
    float time; // offset 0x8, size 0x4
    float stage_delay; // offset 0xC, size 0x4
    class xEnt * ent; // offset 0x10, size 0x4
    class platform_data * target; // offset 0x14, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 dmat; // offset 0x60, size 0x40
    class xVec3 move_dir; // offset 0xA0, size 0xC
    float dist; // offset 0xAC, size 0x4
    float vel; // offset 0xB0, size 0x4
    float accel; // offset 0xB4, size 0x4
    float end_dist; // offset 0xB8, size 0x4
    float max_vel; // offset 0xBC, size 0x4
    float ydist; // offset 0xC0, size 0x4
    float yvel; // offset 0xC4, size 0x4
    float end_ydist; // offset 0xC8, size 0x4
    unsigned int sound_handle; // offset 0xCC, size 0x4
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
class HAZMissile {
    // total size: 0x4
public:
    float vel; // offset 0x0, size 0x4
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
class NCINData {
    // total size: 0x1C
public:
    union { // inferred
        class NCINLyt lytdata; // offset 0x0, size 0x4
        class NCINHaz hazdata; // offset 0x0, size 0x4
        class NCINLamp lampdata; // offset 0x0, size 0x10
        class NCINDRay draydata; // offset 0x0, size 0x4
        class NCINStrk strkdata; // offset 0x0, size 0x8
        class NCINArc arcdata; // offset 0x0, size 0x10
        class NCINPar pardata; // offset 0x0, size 0x4
        class NCINEnts entdata; // offset 0x0, size 0x10
        class NCINShrap shrapdata; // offset 0x0, size 0x4
        class NCINCustom customdata; // offset 0x0, size 0x1C
        class NCINRast rastinfo; // offset 0x0, size 0x4
        class NCINMat matdata; // offset 0x0, size 0x4
    };
};
class NPCCone {
    // total size: 0x20
public:
    float rad_cone; // offset 0x0, size 0x4
    class RwRGBA rgba_top; // offset 0x4, size 0x4
    class RwRGBA rgba_bot; // offset 0x8, size 0x4
    class RwRaster * rast_cone; // offset 0xC, size 0x4
    float uv_tip[2]; // offset 0x10, size 0x8
    float uv_slice[2]; // offset 0x18, size 0x8
};
class xEntMotionOrbitData {
    // total size: 0x18
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
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
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragCount = 8,
    eFragForceSize = 2147483647,
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
class xCutsceneInfo {
    // total size: 0x50
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    char SoundLeft[16]; // offset 0x30, size 0x10
    char SoundRight[16]; // offset 0x40, size 0x10
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
class RxColorUnion {
    // total size: 0x4
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
class /* @class */ {
    // total size: 0xA4
public:
    union { // inferred
        class HAZTypical typical; // offset 0x0, size 0x3C
        class HAZCollide collide; // offset 0x0, size 0x84
        class HAZBall ball; // offset 0x0, size 0x3C
        class HAZRing ring; // offset 0x0, size 0x40
        class HAZShroom shroom; // offset 0x0, size 0x54
        class HAZCloud cloud; // offset 0x0, size 0x68
        class HAZPatriot patriot; // offset 0x0, size 0x1C
        class HAZTarTar tartar; // offset 0x0, size 0xA4
        class HAZCatProd catprod; // offset 0x0, size 0x44
    };
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
};
class NCINLyt {
    // total size: 0x4
public:
    class zLightning * lyt_zap; // offset 0x0, size 0x4
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class NCINCustom {
    // total size: 0x1C
public:
    float f[1]; // offset 0x0, size 0x4
    class xVec3 v[2]; // offset 0x4, size 0x18
};
class RyzMemData {
    // total size: 0x1
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class platform_data {
    // total size: 0x5C
public:
    unsigned char stopping; // offset 0x0, size 0x1
    class xEnt * ent; // offset 0x4, size 0x4
    float radius; // offset 0x8, size 0x4
    class xMat3x3 mat; // offset 0xC, size 0x30
    class /* @class */ {
        // total size: 0x20
    public:
        class xVec3 axis; // offset 0x0, size 0xC
        float ang; // offset 0xC, size 0x4
        float end_ang; // offset 0x10, size 0x4
        float vel; // offset 0x14, size 0x4
        float max_vel; // offset 0x18, size 0x4
        float accel; // offset 0x1C, size 0x4
    } spin; // offset 0x3C, size 0x20
};
class HAZPatriot : public HAZMissile {
    // total size: 0x1C
public:
    class xVec3 pos_began; // offset 0x4, size 0xC
    float spd_peak; // offset 0x10, size 0x4
    float spd_curr; // offset 0x14, size 0x4
    float acc_rate; // offset 0x18, size 0x4
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class _tagLightningRot {
    // total size: 0x48
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
};
class move_data : public move_config {
    // total size: 0x2C
public:
    class xVec2 dest; // offset 0x10, size 0x8
    class xVec2 dir; // offset 0x18, size 0x8
    float vel; // offset 0x20, size 0x4
    float yaw; // offset 0x24, size 0x4
    float yaw_vel; // offset 0x28, size 0x4
};
class hand_data {
    // total size: 0x10C
public:
    unsigned char hurt_player; // offset 0x0, size 0x1
    unsigned char hit_platforms; // offset 0x1, size 0x1
    class xModelTag head_tag[4]; // offset 0x4, size 0x80
    class xModelTag tail_tag[4]; // offset 0x84, size 0x80
    class xEnt * ent; // offset 0x104, size 0x4
    float radius; // offset 0x108, size 0x4
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
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class xCutsceneTime {
    // total size: 0x10
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
};
class xEntMechData {
    // total size: 0x4C
public:
    class xVec3 apos; // offset 0x0, size 0xC
    class xVec3 bpos; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float arot; // offset 0x24, size 0x4
    float brot; // offset 0x28, size 0x4
    float ss; // offset 0x2C, size 0x4
    float sr; // offset 0x30, size 0x4
    signed int state; // offset 0x34, size 0x4
    float tsfd; // offset 0x38, size 0x4
    float trfd; // offset 0x3C, size 0x4
    float tsbd; // offset 0x40, size 0x4
    float trbd; // offset 0x44, size 0x4
    float * rotptr; // offset 0x48, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class xEntMotionSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class HAZTypical {
    // total size: 0x3C
public:
    class xMat3x3 mat_rotDelta; // offset 0x0, size 0x30
    float rad_min; // offset 0x30, size 0x4
    float rad_max; // offset 0x34, size 0x4
    float rad_cur; // offset 0x38, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class xCutsceneData {
    // total size: 0x10
public:
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
class NCINHaz {
    // total size: 0x4
public:
    class NPCHazard * npchaz; // offset 0x0, size 0x4
};
class zFragGroup {
    // total size: 0x54
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
};
enum en_hazcol {
    HAZ_COLTYP_STAT = 0,
    HAZ_COLTYP_DYN = 1,
    HAZ_COLTYP_NPC = 2,
    HAZ_COLTYP_NOMORE = 3,
    HAZ_COLTYP_FORCE = 2147483647,
};
class NCINRast {
    // total size: 0x4
public:
    class RwRaster * raster; // offset 0x0, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
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
class /* @class */ {
    // total size: 0x58
public:
    class xVec3 endPoint[2]; // offset 0x0, size 0x18
    class xVec3 direction; // offset 0x18, size 0xC
    float length; // offset 0x24, size 0x4
    float scale; // offset 0x28, size 0x4
    float width; // offset 0x2C, size 0x4
    float endParam[2]; // offset 0x30, size 0x8
    float endVel[2]; // offset 0x38, size 0x8
    float paramSpan[2]; // offset 0x40, size 0x8
    float arc_height; // offset 0x48, size 0x4
    class xVec3 arc_normal; // offset 0x4C, size 0xC
};
enum en_nparptyp {
    NPAR_TYP_UNKNOWN = 0,
    NPAR_TYP_OILBUB = 1,
    NPAR_TYP_TUBESPIRAL = 2,
    NPAR_TYP_TUBECONFETTI = 3,
    NPAR_TYP_GLOVEDUST = 4,
    NPAR_TYP_MONSOONRAIN = 5,
    NPAR_TYP_SLEEPYZEEZ = 6,
    NPAR_TYP_CHUCKSPLASH = 7,
    NPAR_TYP_TARTARGUNK = 8,
    NPAR_TYP_DOGBREATH = 9,
    NPAR_TYP_VISSPLASH = 10,
    NPAR_TYP_FIREWORKS = 11,
    NPAR_TYP_NOMORE = 12,
    NPAR_TYP_FORCE = 2147483647,
};
class zFragInfo {
    // total size: 0x60
public:
    union { // inferred
        class zFragGroup group; // offset 0x0, size 0x54
        class zFragParticle particle; // offset 0x0, size 0x4
        class zFragProjectile projectile; // offset 0x0, size 0x60
        class zFragLightning lightning; // offset 0x0, size 0x10
        class zFragSound sound; // offset 0x0, size 0x14
        class zFragShockwave shockwave; // offset 0x0, size 0x38
    };
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
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
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
class HAZCollide : public HAZTypical {
    // total size: 0x84
public:
    class xVec3 pos_collide; // offset 0x3C, size 0xC
    class xVec3 dir_normal; // offset 0x48, size 0xC
    class xParabola parabinfo; // offset 0x54, size 0x24
    signed int flg_collide : 8; // offset 0x78, size 0x4
    signed int flg_result : 8; // offset 0x78, size 0x4
    signed int flg_unused : 16; // offset 0x78, size 0x4
    signed int cnt_skipcol; // offset 0x7C, size 0x4
    enum en_hazcol idx_rotateCol; // offset 0x80, size 0x4
};
class xEntMotionMPData {
    // total size: 0xC
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
class xEntERData {
    // total size: 0x44
public:
    class xVec3 a; // offset 0x0, size 0xC
    class xVec3 b; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    signed int state; // offset 0x40, size 0x4
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
class _tagLightningZeus {
    // total size: 0xC
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
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
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
class /* @class */ {
    // total size: 0x10
public:
    float begin; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float time; // offset 0x8, size 0x4
    float end_time; // offset 0xC, size 0x4
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
class xParabola {
    // total size: 0x24
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
class xShadowPoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
class zFragParticle {
    // total size: 0x4
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
};
class HAZBall : public HAZTypical {
    // total size: 0x3C
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned char face_player; // offset 0x0, size 0x1
    unsigned char face_follow; // offset 0x1, size 0x1
    unsigned char dizzy; // offset 0x2, size 0x1
    enum move_enum move; // offset 0x4, size 0x4
    unsigned char vulnerable; // offset 0x8, size 0x1
    unsigned char cruise_exploding; // offset 0x9, size 0x1
    unsigned char cruise_hit_body; // offset 0xA, size 0x1
    unsigned char cruise_hit_target; // offset 0xB, size 0x1
    unsigned char nodes_taken; // offset 0xC, size 0x1
    unsigned char updated; // offset 0xD, size 0x1
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
enum _SDRenderState {
    SDRS_Unknown = 0,
    SDRS_Default = 1,
    SDRS_OpaqueModels = 2,
    SDRS_AlphaModels = 3,
    SDRS_Bubble = 4,
    SDRS_Projectile = 5,
    SDRS_Font = 6,
    SDRS_HUD = 7,
    SDRS_Particles = 8,
    SDRS_Lightning = 9,
    SDRS_Streak = 10,
    SDRS_SkyBack = 11,
    SDRS_Environment = 12,
    SDRS_Fill = 13,
    SDRS_NPCVisual = 14,
    SDRS_OOBFade = 15,
    SDRS_OOBPlayerZ = 16,
    SDRS_OOBPlayerAlpha = 17,
    SDRS_OOBHand = 18,
    SDRS_Glare = 19,
    SDRS_Newsfish = 20,
    SDRS_CruiseHUD = 21,
    SDRS_DiscoFloorGlow = 22,
    SDRS_Total = -1,
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
enum en_npcbtyp {
    NPCP_BASIS_NONE = 0,
    NPCP_BASIS_EVILROBOT = 1,
    NPCP_BASIS_FRIENDLYROBOT = 2,
    NPCP_BASIS_LOVINGCITIZEN = 3,
    NPCP_BASIS_GRUMPYCITIZEN = 4,
    NPCP_BASIS_NOMORE = 5,
    NPCP_BASIS_FORCE = 2147483647,
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
class RwFrustumPlane {
    // total size: 0x14
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};
enum en_npctgt {
    NPC_TGT_NONE = 0,
    NPC_TGT_PLYR = 1,
    NPC_TGT_ENT = 2,
    NPC_TGT_BASE = 3,
    NPC_TGT_POS = 4,
    NPC_TGT_MVPT = 5,
    NPC_TGT_NOMORE = 6,
    NPC_TGT_FORCEINT = 2147483647,
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
class xEntMotionMechData {
    // total size: 0x2C
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    float sld_dist; // offset 0x4, size 0x4
    float sld_tm; // offset 0x8, size 0x4
    float sld_acc_tm; // offset 0xC, size 0x4
    float sld_dec_tm; // offset 0x10, size 0x4
    float rot_dist; // offset 0x14, size 0x4
    float rot_tm; // offset 0x18, size 0x4
    float rot_acc_tm; // offset 0x1C, size 0x4
    float rot_dec_tm; // offset 0x20, size 0x4
    float ret_delay; // offset 0x24, size 0x4
    float post_ret_delay; // offset 0x28, size 0x4
};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};
class xNPCBasic : public xEnt, public xFactoryInst {
    // total size: 0x1BC
public:
    void (* f_setup)(class xEnt *); // offset 0xDC, size 0x4
    void (* f_reset)(class xEnt *); // offset 0xE0, size 0x4
    signed int flg_basenpc : 16; // offset 0xE4, size 0x4
    signed int inUpdate : 8; // offset 0xE4, size 0x4
    signed int flg_upward : 8; // offset 0xE4, size 0x4
    signed int colFreq; // offset 0xE8, size 0x4
    signed int colFreqReset; // offset 0xEC, size 0x4
    unsigned int flg_colCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_penCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_unused : 16; // offset 0xF0, size 0x4
    signed int myNPCType; // offset 0xF4, size 0x4
    class xEntShadow entShadow_embedded; // offset 0xF8, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0x120, size 0x98
};
enum move_enum {
    MOVE_NONE = 0,
    MOVE_HALT = 1,
    MOVE_FOLLOW = 2,
    MOVE_Y = 3,
};
class /* @class */ {
    // total size: 0x20
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float ang; // offset 0xC, size 0x4
    float end_ang; // offset 0x10, size 0x4
    float vel; // offset 0x14, size 0x4
    float max_vel; // offset 0x18, size 0x4
    float accel; // offset 0x1C, size 0x4
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
class zNPCBoss : public zNPCCommon {
    // total size: 0x2B4
public:
    class NPCTarget tgt_cur; // offset 0x2A0, size 0x14
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
class xCutsceneZbuffer {
    // total size: 0x10
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float nearPlane; // offset 0x8, size 0x4
    float farPlane; // offset 0xC, size 0x4
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
struct /* @anon1 */ {
    // total size: 0x10
};
class xEntPenData {
    // total size: 0x50
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
class HAZRing : public HAZTypical {
    // total size: 0x40
public:
    float hyt_ring; // offset 0x3C, size 0x4
};

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CEB00 -> 0x003CECD0
*/
// Range: 0x3CEB00 -> 0x3CECD0
static void NCIN_SBBNode_AR(class NCINEntry * fxrec /* r20 */, class RpAtomic * model /* r19 */, class RwMatrixTag * animMat /* r18 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CEB00 -> 0x3CECD0
        class NCINMat & data; // r17
        signed int bones; // r16
        class RpGeometry * geom; // r2
        class RpSkin * skin; // r2
        class xMat3x3 imat; // r29+0x80
        signed int i; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CECD0 -> 0x003CED50
*/
// Range: 0x3CECD0 -> 0x3CED50
static void NCIN_SBBNode_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CECD0 -> 0x3CED50
        class NCINMat & data; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CED50 -> 0x003CF0AC
*/
// Range: 0x3CED50 -> 0x3CF0AC
static void NCIN_BubbleTrail_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CED50 -> 0x3CF0AC
        class xVec3 & offset; // r3
        class xVec3 & root_vel; // r12
        float rand_diameter; // r1
        float rand_vel; // r29+0xB0
        float scale; // r29+0xB0
        class NCINCustom & data; // r10
        class xVec3 & oldloc; // r17
        class xVec3 & oldvel; // r16
        signed int total; // r2
        class xMat4x3 mat; // r29+0x30
        class xVec3 vel; // r29+0xA0
        class xVec3 loc; // r29+0x90
        class xVec3 rloc; // r29+0x80
        class xVec3 rvel; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF0B0 -> 0x003CF0F0
*/
// Range: 0x3CF0B0 -> 0x3CF0F0
static void NCIN_BubbleTrail_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF0B0 -> 0x3CF0F0
        class NCINCustom & data; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF0F0 -> 0x003CF6D8
*/
// Range: 0x3CF0F0 -> 0x3CF6D8
static void NCIN_EntityBonePar_AR(class NCINEntry * fxrec /* r17 */, class RwMatrixTag * animMat /* r16 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF0F0 -> 0x3CF6D8
        float dt; // r24
        class xParEmitter * pe; // r21
        class xParEmitterAsset * a; // r29+0xC0
        class xParEmitterPropsAsset * prop; // r20
        class xParSys * ps; // r23
        class xParGroup * g; // r18
        signed int rate_has_elapsed; // r2
        float rate; // r29+0x160
        signed int count; // r30
        float life; // r23
        float size_birth; // r25
        float size_death; // r29+0x160
        class xMat4x3 bone_mat; // r29+0xD0
        class xVec3 oldloc; // r29+0x150
        class xVec3 loc; // r29+0x140
        class xVec3 vel; // r29+0x130
        signed int i; // r22
        class xPar * p; // r19
        signed int c; // r18
        float fc1; // r25
        float fc2; // r29+0x160
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF6E0 -> 0x003CF778
*/
// Range: 0x3CF6E0 -> 0x3CF778
static void NCIN_GloveShrapnel_AR(class NCINEntry * fxrec /* r18 */, class RpAtomic * model /* r17 */, class RwMatrixTag * animMat /* r16 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF6E0 -> 0x3CF778
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF780 -> 0x003CF810
*/
// Range: 0x3CF780 -> 0x3CF810
static void NCIN_GloveShrapnel_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF780 -> 0x3CF810
        class zShrapnelAsset * sasset; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF810 -> 0x003CF9B8
*/
// Range: 0x3CF810 -> 0x3CF9B8
static void NCIN_SpatGlow_AR(class NCINEntry * fxrec /* r18 */, class RpAtomic * model /* r2 */, class RwMatrixTag * animMat /* r17 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF810 -> 0x3CF9B8
        signed int boneIndex; // r16
        class iColor_tag color; // r29+0x4C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF9C0 -> 0x003CF9E0
*/
// Range: 0x3CF9C0 -> 0x3CF9E0
static void NCIN_SpatGlow_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF9C0 -> 0x3CF9E0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CF9E0 -> 0x003CFA24
*/
// Range: 0x3CF9E0 -> 0x3CFA24
static void NCIN_PatBossShrapnel_AR(class NCINEntry * fxrec /* r2 */, class RpAtomic * model /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CF9E0 -> 0x3CFA24
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFA30 -> 0x003CFAC0
*/
// Range: 0x3CFA30 -> 0x3CFAC0
static void NCIN_PatBossShrapnel_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFA30 -> 0x3CFAC0
        class zShrapnelAsset * sasset; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFAC0 -> 0x003CFB38
*/
// Range: 0x3CFAC0 -> 0x3CFB38
static void NCIN_GooLever_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFAC0 -> 0x3CFB38
        float fudgeRate; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFB40 -> 0x003CFBC8
*/
// Range: 0x3CFB40 -> 0x3CFBC8
static void NCIN_GooLever_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFB40 -> 0x3CFBC8
        class zParEmitter * emitter; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFBD0 -> 0x003CFCF8
*/
// Range: 0x3CFBD0 -> 0x3CFCF8
static void NCIN_B201HideBelt_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFBD0 -> 0x3CFCF8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFD00 -> 0x003CFED4
*/
// Range: 0x3CFD00 -> 0x3CFED4
static void NCIN_FreezeBreath_AR(class zCutsceneMgr * csnmgr /* r2 */, class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFD00 -> 0x3CFED4
        class xVec3 pnt1; // r29+0x20
        class xVec3 pnt2; // r29+0x10
        signed int boneIndex; // r24
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFEE0 -> 0x003CFF38
*/
// Range: 0x3CFEE0 -> 0x3CFF38
static void NCIN_FreezeBreath_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFEE0 -> 0x3CFF38
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003CFF40 -> 0x003D0070
*/
// Range: 0x3CFF40 -> 0x3D0070
static void NCIN_B101Shockwave_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3CFF40 -> 0x3D0070
        class zParEmitter * emitter; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0070 -> 0x003D0264
*/
// Range: 0x3D0070 -> 0x3D0264
static void NCIN_LightninBone_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0070 -> 0x3D0264
        class xVec3 pnt1; // r29+0x20
        class xVec3 pnt2; // r29+0x10
        signed int boneIndex; // r15
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0270 -> 0x003D0434
*/
// Range: 0x3D0270 -> 0x3D0434
static void NCIN_LightninBone_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0270 -> 0x3D0434
        class _tagLightningAdd addInfo; // r29+0x30
        class xVec3 pnt; // r29+0x70
        class zLightning * light; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0440 -> 0x003D06BC
*/
// Range: 0x3D0440 -> 0x3D06BC
static void NCIN_Lightnin2Bones_AR(class NCINEntry * fxrec /* r19 */, class RwMatrixTag * animMat /* r18 */, unsigned int animIndex /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0440 -> 0x3D06BC
        class zLightning * light; // r16
        class xVec3 pnt1; // r29+0x60
        signed int boneIndex; // r5
        class xVec3 pnt1; // r29+0x50
        signed int boneIndex; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D06C0 -> 0x003D0770
*/
// Range: 0x3D06C0 -> 0x3D0770
static void NCIN_Lightnin2Bones_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D06C0 -> 0x3D0770
        class _tagLightningAdd addInfo; // r29+0x20
        class xVec3 pnt; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0770 -> 0x003D08B4
*/
// Range: 0x3D0770 -> 0x3D08B4
static void NCIN_HookRecoil_AR(class zCutsceneMgr * csnmgr /* r2 */, class RpAtomic * model /* r2 */, class RwMatrixTag * animMat /* r21 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0770 -> 0x3D08B4
        signed int idx_anim; // r3
        unsigned int num_bones; // r20
        class xMat4x3 * mat_root; // r2
        unsigned int i; // r19
        class xVec3 pos_emit; // r29+0x80
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D08C0 -> 0x003D08E0
*/
// Range: 0x3D08C0 -> 0x3D08E0
static void NCIN_HookRecoil_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D08C0 -> 0x3D08E0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D08E0 -> 0x003D090C
*/
// Range: 0x3D08E0 -> 0x3D090C
static void NCIN_BoneTrail_AR(class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D08E0 -> 0x3D090C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0910 -> 0x003D0930
*/
// Range: 0x3D0910 -> 0x3D0930
static void NCIN_BoneTrail_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0910 -> 0x3D0930
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0930 -> 0x003D0954
*/
// Range: 0x3D0930 -> 0x3D0954
static void NCIN_BombTrail_AR(class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0930 -> 0x3D0954
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0960 -> 0x003D0980
*/
// Range: 0x3D0960 -> 0x3D0980
static void NCIN_BombTrail_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0960 -> 0x3D0980
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0980 -> 0x003D0B18
*/
// Range: 0x3D0980 -> 0x3D0B18
static void NCIN_MidFish_AR(class RwMatrixTag * animMat /* r16 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0980 -> 0x3D0B18
        class xMat4x3 * mat_root; // r2
        signed int i; // r20
        class xVec3 pos_emit; // r29+0x90
        class xMat4x3 * mat_root; // r2
        signed int idx_bone; // r2
        class xVec3 pos_emit; // r29+0x80
        signed int g_idx_handbone[6]; // @ 0x004EA360
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0B20 -> 0x003D0B40
*/
// Range: 0x3D0B20 -> 0x3D0B40
static void NCIN_MidFish_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0B20 -> 0x3D0B40
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0B40 -> 0x003D0E1C
*/
// Range: 0x3D0B40 -> 0x3D0E1C
static void NCIN_FodProdBone_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0B40 -> 0x3D0E1C
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_bone; // r14
        class NPCHazard * haz; // r2
        class xVec3 pos_poke; // r29+0x70
        class xVec3 vec_offset; // @ 0x00507C08
        signed char @7361; // @ 0x00510308
        signed int idx_bonePoke; // @ 0x00507C00
        signed char @7353; // @ 0x00510304
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0E20 -> 0x003D0F3C
*/
// Range: 0x3D0E20 -> 0x3D0F3C
static void NCIN_FodProdBone_Upd(class NCINEntry * fxrec /* r17 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0E20 -> 0x3D0F3C
        class NPCHazard * haz; // r4
        class NPCHazard * haz; // r16
        signed int rc; // r2
        float tym; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D0F40 -> 0x003D1164
*/
// Range: 0x3D0F40 -> 0x3D1164
static void NCIN_FodProd_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D0F40 -> 0x3D1164
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_bone; // r14
        class NPCHazard * haz; // r2
        class xVec3 pos_poke; // r29+0x70
        class xVec3 vec_offset; // @ 0x00507BF0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1170 -> 0x003D128C
*/
// Range: 0x3D1170 -> 0x3D128C
static void NCIN_FodProd_Upd(class NCINEntry * fxrec /* r17 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1170 -> 0x3D128C
        class NPCHazard * haz; // r4
        class NPCHazard * haz; // r16
        signed int rc; // r2
        float tym; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1290 -> 0x003D1784
*/
// Range: 0x3D1290 -> 0x3D1784
static void NCIN_OilHazard(class NCINEntry * fxrec /* r21 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1290 -> 0x3D1784
        class NPCHazard * haz; // r4
        class xVec3 pos_emit; // r29+0x120
        signed int i; // r20
        class xVec3 vel_emit; // r29+0x110
        class NPCHazard * haz; // r16
        signed int rc; // r2
        float tym; // r29+0x130
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1790 -> 0x003D17F0
*/
// Range: 0x3D1790 -> 0x3D17F0
static void NCIN_ShieldPop(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1790 -> 0x3D17F0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D17F0 -> 0x003D19CC
*/
// Range: 0x3D17F0 -> 0x3D19CC
static void NCIN_FireSpiral_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D17F0 -> 0x3D19CC
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_emit; // r29+0x50
        class xVec3 dir_emit; // r29+0x40
        class xVec3 vel; // r29+0x30
        float tym; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D19D0 -> 0x003D1A04
*/
// Range: 0x3D19D0 -> 0x3D1A04
static void NCIN_FireSpiral_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D19D0 -> 0x3D1A04
        class NPARMgmt * mgr; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1A10 -> 0x003D1A70
*/
// Range: 0x3D1A10 -> 0x3D1A70
static void NCIN_PeteBonk(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1A10 -> 0x3D1A70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1A70 -> 0x003D1B3C
*/
// Range: 0x3D1A70 -> 0x3D1B3C
static void NCIN_MaryBoom(class NCINEntry * fxrec /* r17 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1A70 -> 0x3D1B3C
        class NPCHazard * haz; // r4
        class NPCHazard * haz; // r16
        signed int rc; // r2
        float tym; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1B40 -> 0x003D1D90
*/
// Range: 0x3D1B40 -> 0x3D1D90
static void NCIN_SleepyDRay_AR(class zCutsceneMgr * csnmgr /* r2 */, class NCINEntry * fxrec /* r16 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1B40 -> 0x3D1D90
        class xMat4x3 * mat_root; // r20
        class xVec3 * pos_orig; // r19
        signed int i; // r18
        float rat; // r2
        class xVec3 pos_emit; // r29+0xB0
        class xMat4x3 * mat_root; // r2
        class xVec3 pos_dray; // r29+0xA0
        class RwRGBA rgba_top; // r29+0xCC
        class RwRGBA rgba_bot; // r29+0xC8
        float tym_instate; // r2
        class NPCCone conedata; // r29+0x70
        float uv_slice_dray[2]; // @ 0x00507BE8
        float uv_scroll_dray[2]; // @ 0x00507BE0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1D90 -> 0x003D1E10
*/
// Range: 0x3D1D90 -> 0x3D1E10
static void NCIN_SleepyDRay_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1D90 -> 0x3D1E10
        char * nam_texture; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D1E10 -> 0x003D2228
*/
// Range: 0x3D1E10 -> 0x3D2228
static void NCIN_SleepyLamp_AR(class zCutsceneMgr * csnmgr /* r2 */, class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D1E10 -> 0x3D2228
        class NCINLamp * lampdat; // r2
        class xMat4x3 * mat_root; // r2
        class NCINLamp * lampdat; // r16
        class xVec3 pos_lamp; // r29+0x60
        class RwRGBA rgba_top; // r29+0x7C
        class RwRGBA rgba_bot; // r29+0x78
        class xVec3 rgb_peace; // r29+0x50
        class xVec3 rgb_anger; // r29+0x40
        float rat; // r5
        class NPCCone conedata; // r29+0x20
        float tym_anger[4]; // @ 0x00507BD0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2230 -> 0x003D2288
*/
// Range: 0x3D2230 -> 0x3D2288
static void NCIN_SleepyLamp_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2230 -> 0x3D2288
        char * nam_texture; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2290 -> 0x003D236C
*/
// Range: 0x3D2290 -> 0x3D236C
static void NCIN_ArfDogBoom(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2290 -> 0x3D236C
        class NPCHazard * haz; // r4
        class NPCHazard * haz; // r17
        signed int rc; // r2
        float tym; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2370 -> 0x003D290C
*/
// Range: 0x3D2370 -> 0x3D290C
static void NCIN_TTGunSmoke_AR(class zCutsceneMgr * csnmgr /* r2 */, class NCINEntry * fxrec /* r16 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2370 -> 0x3D290C
        unsigned int idx_roboAnim; // r5
        signed int idx_boneGun; // r2
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_bone; // r12
        class xVec3 vec_offset; // r29+0x130
        class xVec3 pos_smoke; // r29+0x120
        float spd_blow; // r20
        float tym_blow[2]; // r29+0x118
        class xCutscene * csn; // r2
        float blowPeriod; // r4
        float tym_blown; // r3
        float rat_blow; // r2
        float bowl; // r2
        class xVec3 dir_blow; // r29+0x108
        class xVec3 vel_smoke; // r29+0xF8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2910 -> 0x003D2C88
*/
// Range: 0x3D2910 -> 0x3D2C88
static void NCIN_HazTTSteam_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2910 -> 0x3D2C88
        signed int idx_boneSign; // r3
        class xVec3 vec_offset; // r29+0xC0
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_bone; // r12
        class NPCHazard * haz; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2C90 -> 0x003D2D84
*/
// Range: 0x3D2C90 -> 0x3D2D84
static void NCIN_HazTTSteam_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2C90 -> 0x3D2D84
        class NPCHazard * haz; // r4
        class NPCHazard * haz; // r17
        signed int rc; // r2
        float tym; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2D90 -> 0x003D2F88
*/
// Range: 0x3D2D90 -> 0x3D2F88
static void NCIN_HazProjShoot(class NCINEntry * fxrec /* r17 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2D90 -> 0x3D2F88
        class NPCHazard * haz; // r4
        enum en_npchaz use_haztyp; // r18
        class NPCHazard * haz; // r16
        signed int rc; // r2
        class HAZTarTar * tartar; // r6
        class xVec3 pos_dest; // r29+0x60
        class xVec3 diff; // r29+0x50
        float tym; // r29+0x70
        class NPCHazard * haz; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D2F90 -> 0x003D2FF8
*/
// Range: 0x3D2F90 -> 0x3D2FF8
static void NCIN_WaterSplash(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D2F90 -> 0x3D2FF8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3000 -> 0x003D3238
*/
// Range: 0x3D3000 -> 0x3D3238
static void NCIN_HammerStreak_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3000 -> 0x3D3238
        unsigned int idx_hamBone[4]; // r29+0x30
        class xMat4x3 * mat_root; // r2
        class xMat4x3 * mat_hamBone[4]; // r29+0x20
        class xVec3 left; // r29+0xB0
        class xVec3 right; // r29+0xA0
        class xVec3 top; // r29+0x90
        class xVec3 bottom; // r29+0x80
        class NCINStrk * strkdat; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3240 -> 0x003D32B8
*/
// Range: 0x3D3240 -> 0x3D32B8
static void NCIN_HammerStreak_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3240 -> 0x3D32B8
        class NCINStrk * strkdat; // r16
        class NCINStrk * strkdat; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D32C0 -> 0x003D3320
*/
// Range: 0x3D32C0 -> 0x3D3320
static void NCIN_HammerShock(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D32C0 -> 0x3D3320
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3320 -> 0x003D346C
*/
// Range: 0x3D3320 -> 0x3D346C
static void NCIN_Zapper(class NCINEntry * fxrec /* r17 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3320 -> 0x3D346C
        class NCINData * fxdat; // r16
        class _tagLightningAdd info; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3470 -> 0x003D34D0
*/
// Range: 0x3D3470 -> 0x3D34D0
static void NCIN_BubHit(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3470 -> 0x3D34D0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D34D0 -> 0x003D356C
*/
// Range: 0x3D34D0 -> 0x3D356C
static void NCIN_BubTrailBone_AR(class NCINEntry * fxrec /* r2 */, class RwMatrixTag * animMat /* r2 */, unsigned int animIndex /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D34D0 -> 0x3D356C
        signed int idx_boneInterest; // r4
        class xVec3 pos_emit; // r29+0x10
        class xMat4x3 * mat_bone; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3570 -> 0x003D3880
*/
// Range: 0x3D3570 -> 0x3D3880
static void NCIN_BubWipe(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3570 -> 0x3D3880
        class xMat4x3 * mat; // r21
        class xVec3 * pos; // r20
        class xVec3 * vel; // r19
        class xVec3 vec_infront; // r29+0x90
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        signed int i; // r16
        class xVec3 vel_wall; // @ 0x00507BC0
        class xVec3 scl_wall; // @ 0x00507BB0
        class xMat4x3 mat_fake; // @ 0x0061DDC0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3880 -> 0x003D3934
*/
// Range: 0x3D3880 -> 0x3D3934
static void NCIN_BubSlam(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3880 -> 0x3D3934
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3940 -> 0x003D3960
*/
// Range: 0x3D3940 -> 0x3D3960
static void NCIN_Generic_Upd(class NCINEntry * fxrec /* r2 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3940 -> 0x3D3960
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3960 -> 0x003D3B24
*/
// Range: 0x3D3960 -> 0x3D3B24
void zNPCFXCutscene(class zCutsceneMgr * csnmgr /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3960 -> 0x3D3B24
        class NCINEntry * fxtab; // r20
        class xCutscene * csn; // r19
        signed int need_animated; // r18
        signed int need_render; // r17
        class NCINEntry * nextrec; // r2
        class NCINEntry * fxrec; // r16
        signed int flags; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3B30 -> 0x003D3C08
*/
// Range: 0x3D3B30 -> 0x3D3C08
void zNPCFXCutsceneDone(class zCutsceneMgr * csnmgr /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3B30 -> 0x3D3C08
        class NCINEntry * fxtab; // r17
        class NCINEntry * nextrec; // r2
        class NCINEntry * fxrec; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3C10 -> 0x003D3D80
*/
// Range: 0x3D3C10 -> 0x3D3D80
signed int zNPCFXCutscenePrep(class zCutsceneMgr * csnmgr /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3C10 -> 0x3D3D80
        class NCINEntry * fxtab; // r17
        class NCINEntry * nextrec; // r16
        class NCINEntry * fxrec; // r3
        class NCINEntry * fxrec; // [invalid]
        char tweakBase[128]; // r29+0xC0
        char tweakName[128]; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3D80 -> 0x003D3E44
*/
// Range: 0x3D3D80 -> 0x3D3E44
static class NCINEntry * zNPCFXCutscenePickTable(class zCutsceneMgr * csnmgr /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3D80 -> 0x3D3E44
        class NCINEntry * da_fxtab; // r16
        class NCINMap * cutrec; // r18
        signed int needinit; // @ 0x0050F16C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3E50 -> 0x003D3E58
*/
// Range: 0x3D3E50 -> 0x3D3E58
void zNPCFXShutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3E50 -> 0x3D3E58
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3E60 -> 0x003D3E90
*/
// Range: 0x3D3E60 -> 0x3D3E90
void zNPCFXStartup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3E60 -> 0x3D3E90
        class NCINBeNosey nozey_npc_cinematics; // @ 0x0061DDA0
        signed char @6424; // @ 0x00510300
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3E90 -> 0x003D3F4C
*/
// Range: 0x3D3E90 -> 0x3D3F4C
void UpdatedAnimated(class NCINBeNosey * this /* r2 */, class RpAtomic * model /* r21 */, class RwMatrixTag * animMat /* r20 */, unsigned int animIndex /* r19 */, unsigned int dataIndex /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3E90 -> 0x3D3F4C
        class zCutsceneMgr * csnmgr; // r17
        class NCINEntry * fxtab; // r16
        class NCINEntry * nextrec; // r2
        class NCINEntry * fxrec; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3F50 -> 0x003D3FCC
*/
// Range: 0x3D3F50 -> 0x3D3FCC
void CanRenderNow(class NCINBeNosey * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3F50 -> 0x3D3FCC
        class zCutsceneMgr * csnmgr; // r17
        class NCINEntry * fxtab; // r16
        class NCINEntry * nextrec; // r2
        class NCINEntry * fxrec; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3FD0 -> 0x003D40EC
*/
// Range: 0x3D3FD0 -> 0x3D40EC
static void NCIN_Par_CIN_PLATFORM_JETS_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D3FD0 -> 0x3D40EC
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D40F0 -> 0x003D420C
*/
// Range: 0x3D40F0 -> 0x3D420C
static void NCIN_Par_CIN_BIGDUP_SPAWN_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D40F0 -> 0x3D420C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4210 -> 0x003D432C
*/
// Range: 0x3D4210 -> 0x3D432C
static void NCIN_Par_CIN_BIGDUP_SMOKE_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4210 -> 0x3D432C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4330 -> 0x003D444C
*/
// Range: 0x3D4330 -> 0x3D444C
static void NCIN_Par_BPLANK_SBB_SMOKE_2_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4330 -> 0x3D444C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4450 -> 0x003D456C
*/
// Range: 0x3D4450 -> 0x3D456C
static void NCIN_Par_BPLANK_SBB_SMOKE_1_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4450 -> 0x3D456C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4570 -> 0x003D468C
*/
// Range: 0x3D4570 -> 0x3D468C
static void NCIN_Par_BPLANK_SBB_JET_2_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4570 -> 0x3D468C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4690 -> 0x003D47AC
*/
// Range: 0x3D4690 -> 0x3D47AC
static void NCIN_Par_BPLANK_SBB_JET_1_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4690 -> 0x3D47AC
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D47B0 -> 0x003D48CC
*/
// Range: 0x3D47B0 -> 0x3D48CC
static void NCIN_Par_BPLANK_SBB_FLAMES_2_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D47B0 -> 0x3D48CC
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D48D0 -> 0x003D49EC
*/
// Range: 0x3D48D0 -> 0x3D49EC
static void NCIN_Par_BPLANK_SBB_FLAMES_1_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D48D0 -> 0x3D49EC
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D49F0 -> 0x003D4B0C
*/
// Range: 0x3D49F0 -> 0x3D4B0C
static void NCIN_Par_BPLANK_JET_2_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D49F0 -> 0x3D4B0C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCFXCinematic.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4B10 -> 0x003D4C2C
*/
// Range: 0x3D4B10 -> 0x3D4C2C
static void NCIN_Par_BPLANK_JET_1_Upd(class NCINEntry * fxrec /* r16 */, signed int killit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3D4B10 -> 0x3D4C2C
        class zParEmitter * & emitter; // r17
        class xParEmitterAsset * a; // r5
    }
}

