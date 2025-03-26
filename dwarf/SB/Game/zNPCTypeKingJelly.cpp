/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static char * sound_name[11][3]; // size: 0x84, address: 0x4E0AC0
static unsigned char sound_flags[11]; // size: 0xB, address: 0x501738
static class tweak_group tweak; // size: 0x298, address: 0x5E26D0
static class xBinaryCamera boss_cam; // size: 0x70, address: 0x4E0B50
static class sound_data_type sound_data[11]; // size: 0x108, address: 0x5E2970
static unsigned char tentacle_bone[7][4]; // size: 0x1C, address: 0x501750
static signed int bored_anims[2]; // size: 0x8, address: 0x501770
static class zParEmitter * spawn_emitter; // size: 0x4, address: 0x510168
static class xParEmitterCustomSettings spawn_emitter_settings; // size: 0x16C, address: 0x5E2A80
static class zParEmitter * zap_emitter; // size: 0x4, address: 0x51016C
static class xParEmitterCustomSettings zap_emitter_settings; // size: 0x16C, address: 0x5E2BF0
static class zParEmitter * shock_ring_emitter; // size: 0x4, address: 0x510170
static class xParEmitterCustomSettings shock_ring_emitter_settings; // size: 0x16C, address: 0x5E2D60
static class zParEmitter * thump_ring_emitter; // size: 0x4, address: 0x510174
static class xParEmitterCustomSettings thump_ring_emitter_settings; // size: 0x16C, address: 0x5E2ED0
static class xVec3 ring_segments[64]; // size: 0x300, address: 0x5E3040
struct /* @anon3 */ {
    // total size: 0x34
} __vt__15zNPCGoalKJDeath; // size: 0x34, address: 0x50CD20
unsigned int g_hash_subbanim[23]; // size: 0x5C, address: 0x5DE4D0
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
void expand_ring_update(class lightning_ring &, float); // size: 0x0, address: 0x34A020
void updown_ring_update(class lightning_ring &, float); // size: 0x0, address: 0x34A120
class NPCSndTrax g_sndTrax_KingJelly[]; // size: 0x0, address: 0x5CF9F8
class xVec3 g_O3; // size: 0xC, address: 0x4F8D70
struct /* @anon0 */ {
    // total size: 0xCC
} __vt__13zNPCKingJelly; // size: 0xCC, address: 0x50CEE0
struct /* @anon4 */ {
    // total size: 0xCC
} __vt__11zNPCSubBoss; // size: 0xCC, address: 0x50C5F0
struct /* @anon1 */ {
    // total size: 0xCC
} __vt__10zNPCCommon; // size: 0xCC, address: 0x50A6C0
struct /* @anon7 */ {
    // total size: 0x54
} __vt__9xNPCBasic; // size: 0x54, address: 0x50BE30
char * g_strz_subbanim[23]; // size: 0x5C, address: 0x4E06C0
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *); // size: 0x0, address: 0x213A90
struct /* @anon9 */ {
    // total size: 0x34
} __vt__16zNPCGoalKJDamage; // size: 0x34, address: 0x50CD60
struct /* @anon5 */ {
    // total size: 0x34
} __vt__21zNPCGoalKJShockGround; // size: 0x34, address: 0x50CDA0
struct /* @anon10 */ {
    // total size: 0x34
} __vt__15zNPCGoalKJTaunt; // size: 0x34, address: 0x50CDE0
struct /* @anon6 */ {
    // total size: 0x34
} __vt__19zNPCGoalKJSpawnKids; // size: 0x34, address: 0x50CE20
struct /* @anon2 */ {
    // total size: 0x34
} __vt__15zNPCGoalKJBored; // size: 0x34, address: 0x50CE60
struct /* @anon8 */ {
    // total size: 0x34
} __vt__14zNPCGoalKJIdle; // size: 0x34, address: 0x50CEA0
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class zNPCKingJelly : public zNPCSubBoss {
    // total size: 0x10B8
public:
    class /* @class */ {
        // total size: 0x1
    public:
        unsigned char moreFlags; // offset 0x0, size 0x1
    } old; // offset 0x2B4, size 0x1
    class /* @class */ {
        // total size: 0x5
    public:
        unsigned char fighting; // offset 0x0, size 0x1
        unsigned char died; // offset 0x1, size 0x1
        unsigned char charging; // offset 0x2, size 0x1
        unsigned char stop_moving; // offset 0x3, size 0x1
        unsigned char updated; // offset 0x4, size 0x1
    } flag; // offset 0x2B5, size 0x5
    signed int round; // offset 0x2BC, size 0x4
    signed int attack; // offset 0x2C0, size 0x4
    signed int life; // offset 0x2C4, size 0x4
    unsigned int player_life; // offset 0x2C8, size 0x4
    signed int show_vertex; // offset 0x2CC, size 0x4
    unsigned char enabled; // offset 0x2D0, size 0x1
    enum shockstate_enum shockstate; // offset 0x2D4, size 0x4
    float spawn_particle_vel; // offset 0x2D8, size 0x4
    class xModelInstance * submodel[4]; // offset 0x2DC, size 0x10
    class /* @class */ {
        // total size: 0x10
    public:
        unsigned char active; // offset 0x0, size 0x1
        signed int count; // offset 0x4, size 0x4
        float intensity; // offset 0x8, size 0x4
        float delay; // offset 0xC, size 0x4
    } blink; // offset 0x2EC, size 0x10
    class /* @class */ {
        // total size: 0x10
    public:
        float last_yaw; // offset 0x0, size 0x4
        class xVec3 last_target; // offset 0x4, size 0xC
    } camera; // offset 0x2FC, size 0x10
    class child_data children[32]; // offset 0x30C, size 0x580
    unsigned int children_size; // offset 0x88C, size 0x4
    float last_tentacle_shock; // offset 0x890, size 0x4
    class zLightning * tentacle_lightning[7]; // offset 0x894, size 0x1C
    class xVec3 tentacle_points[7][13]; // offset 0x8B0, size 0x444
    class lightning_ring ambient_rings[3]; // offset 0xCF4, size 0x18C
    class lightning_ring wave_rings[4]; // offset 0xE80, size 0x210
    unsigned char disable_tentacle_damage; // offset 0x1090, size 0x1
    float next_pulse; // offset 0x1094, size 0x4
    float last_pulse; // offset 0x1098, size 0x4
    class zEnt * curtain_ent; // offset 0x109C, size 0x4
    class xModelInstance * curtain_model[5]; // offset 0x10A0, size 0x14
    unsigned char first_update; // offset 0x10B4, size 0x1
};
class zAssetPickupTable {
    // total size: 0x0
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
class sound_data_type {
    // total size: 0x18
public:
    unsigned int id[2]; // offset 0x0, size 0x8
    unsigned char delayed; // offset 0x8, size 0x1
    signed char amount; // offset 0x9, size 0x1
    signed char playing; // offset 0xA, size 0x1
    float time; // offset 0xC, size 0x4
    unsigned int handle; // offset 0x10, size 0x4
    class xVec3 * loc; // offset 0x14, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
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
class _zEnv : public xBase {
    // total size: 0x14
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
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
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
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
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
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
class zCutsceneMgr {
    // total size: 0x0
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
class xEntShadow {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
class tweak_callback {
    // total size: 0x28
public:
    void (* on_change)(class tweak_info &); // offset 0x0, size 0x4
    void (* on_select)(class tweak_info &); // offset 0x4, size 0x4
    void (* on_unselect)(class tweak_info &); // offset 0x8, size 0x4
    void (* on_start_edit)(class tweak_info &); // offset 0xC, size 0x4
    void (* on_stop_edit)(class tweak_info &); // offset 0x10, size 0x4
    void (* on_expand)(class tweak_info &); // offset 0x14, size 0x4
    void (* on_collapse)(class tweak_info &); // offset 0x18, size 0x4
    void (* on_update)(class tweak_info &); // offset 0x1C, size 0x4
    void (* convert_mem_to_tweak)(class tweak_info &, void *); // offset 0x20, size 0x4
    void (* convert_tweak_to_mem)(class tweak_info &, void *); // offset 0x24, size 0x4
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
class unit_type {
    // total size: 0x1C
public:
    float radius_offset; // offset 0x0, size 0x4
    float height_offset; // offset 0x4, size 0x4
    unsigned char line; // offset 0x8, size 0x1
    float thickness; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    float rot_radius; // offset 0x14, size 0x4
    float degrees; // offset 0x18, size 0x4
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
class zNPCGoalKJIdle : public zNPCGoalCommon {
    // total size: 0x50
public:
    float attack_delay; // offset 0x4C, size 0x4
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
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
class zShrapnelAsset {
    // total size: 0xC
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
class zNPCJelly : public zNPCAmbient {
    // total size: 0x2B0
public:
    signed int cnt_angerLevel; // offset 0x2A0, size 0x4
    signed int hitpoints; // offset 0x2A4, size 0x4
    float tmr_pulseAlpha; // offset 0x2A8, size 0x4
    class zNPCCommon * npc_daddyJelly; // offset 0x2AC, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
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
class zNPCGoalCommon : public xGoal {
    // total size: 0x4C
public:
    signed int flg_npcgauto; // offset 0x3C, size 0x4
    signed int flg_npcgable; // offset 0x40, size 0x4
    unsigned int anid_played; // offset 0x44, size 0x4
    signed int flg_info : 16; // offset 0x48, size 0x4
    signed int flg_user : 16; // offset 0x48, size 0x4
};
class anim_coll_data {
    // total size: 0x0
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
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    signed int i; // offset 0x0, size 0x4
    signed int j; // offset 0x4, size 0x4
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
class xUpdateCullEnt {
    // total size: 0x10
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
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
class zNPCGoalKJShockGround : public zNPCGoalCommon {
    // total size: 0x54
public:
    float delay; // offset 0x4C, size 0x4
    signed int strikes; // offset 0x50, size 0x4
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
struct /* @anon0 */ {
    // total size: 0xCC
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
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class zNPCGoalKJSpawnKids : public zNPCGoalCommon {
    // total size: 0x60
public:
    float delay; // offset 0x4C, size 0x4
    signed int cycle; // offset 0x50, size 0x4
    unsigned char spawned; // offset 0x54, size 0x1
    unsigned char spewed; // offset 0x55, size 0x1
    signed int child_count; // offset 0x58, size 0x4
    signed int spawn_count; // offset 0x5C, size 0x4
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
class /* @class */ {
    // total size: 0x1C
public:
    float duration; // offset 0x0, size 0x4
    signed int amount; // offset 0x4, size 0x4
    float drop_off; // offset 0x8, size 0x4
    class /* @class */ {
        // total size: 0x10
    public:
        float r; // offset 0x0, size 0x4
        float g; // offset 0x4, size 0x4
        float b; // offset 0x8, size 0x4
        float a; // offset 0xC, size 0x4
    } color; // offset 0xC, size 0x10
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
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
class lightning_ring {
    // total size: 0x84
public:
    unsigned char active; // offset 0x0, size 0x1
    class xVec3 center; // offset 0x4, size 0xC
    float segment_length; // offset 0x10, size 0x4
    float min_height; // offset 0x14, size 0x4
    float max_height; // offset 0x18, size 0x4
    float min_radius; // offset 0x1C, size 0x4
    float max_radius; // offset 0x20, size 0x4
    float delay; // offset 0x24, size 0x4
    float accel; // offset 0x28, size 0x4
    float max_vel; // offset 0x2C, size 0x4
    float width; // offset 0x30, size 0x4
    class /* @class */ {
        // total size: 0x14
    public:
        float height; // offset 0x0, size 0x4
        float radius; // offset 0x4, size 0x4
        float vel; // offset 0x8, size 0x4
        float accel; // offset 0xC, size 0x4
        float time; // offset 0x10, size 0x4
    } current; // offset 0x34, size 0x14
    class /* @class */ {
        // total size: 0x14
    public:
        unsigned char line; // offset 0x0, size 0x1
        float thickness; // offset 0x4, size 0x4
        class iColor_tag color; // offset 0x8, size 0x4
        float rot_radius; // offset 0xC, size 0x4
        float degrees; // offset 0x10, size 0x4
    } property; // offset 0x48, size 0x14
    class zLightning * arcs[8]; // offset 0x5C, size 0x20
    unsigned int arcs_size; // offset 0x7C, size 0x4
    void (* update_callback)(class lightning_ring &, float); // offset 0x80, size 0x4
};
class xCurveAsset {
    // total size: 0x0
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
    // total size: 0x8
public:
    unsigned short model; // offset 0x0, size 0x2
    unsigned char pflags; // offset 0x2, size 0x1
    unsigned char moreFlags; // offset 0x3, size 0x1
    unsigned char flg_colCheck; // offset 0x4, size 0x1
    unsigned char flg_penCheck; // offset 0x5, size 0x1
    unsigned char chkby; // offset 0x6, size 0x1
    unsigned char penby; // offset 0x7, size 0x1
};
class xEntMotionSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
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
struct /* @anon1 */ {
    // total size: 0xCC
};
class /* @class */ {
    // total size: 0x14
public:
    float volume; // offset 0x0, size 0x4
    float delay; // offset 0x4, size 0x4
    float radius_inner; // offset 0x8, size 0x4
    float radius_outer; // offset 0xC, size 0x4
    signed int priority; // offset 0x10, size 0x4
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
class xBehaveMgr : public RyzMemData {
    // total size: 0x18
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
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
class /* @class */ {
    // total size: 0x10
public:
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
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
class zNPCGoalKJBored : public zNPCGoalCommon {
    // total size: 0x4C
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
class RwFrustumPlane {
    // total size: 0x14
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
class tweak_info {
    // total size: 0x28
public:
    class substr name; // offset 0x0, size 0x8
    void * value; // offset 0x8, size 0x4
    class tweak_callback * cb; // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
    unsigned char type; // offset 0x14, size 0x1
    unsigned char value_size; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    union { // inferred
        class /* @class */ {
            // total size: 0xC
        public:
            signed int value_def; // offset 0x0, size 0x4
            signed int value_min; // offset 0x4, size 0x4
            signed int value_max; // offset 0x8, size 0x4
        } int_context; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0xC
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int value_min; // offset 0x4, size 0x4
            unsigned int value_max; // offset 0x8, size 0x4
        } uint_context; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0xC
        public:
            float value_def; // offset 0x0, size 0x4
            float value_min; // offset 0x4, size 0x4
            float value_max; // offset 0x8, size 0x4
        } float_context; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0x1
        public:
            unsigned char value_def; // offset 0x0, size 0x1
        } bool_context; // offset 0x18, size 0x1
        class /* @class */ {
            // total size: 0x10
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int labels_size; // offset 0x4, size 0x4
            char * * labels; // offset 0x8, size 0x4
            void * values; // offset 0xC, size 0x4
        } select_context; // offset 0x18, size 0x10
        class /* @class */ {
            // total size: 0x8
        public:
            unsigned int value_def; // offset 0x0, size 0x4
            unsigned int mask; // offset 0x4, size 0x4
        } flag_context; // offset 0x18, size 0x8
        class /* @class */ {
            // total size: 0x10
        public:
            unsigned char pad[16]; // offset 0x0, size 0x10
        } all_context; // offset 0x18, size 0x10
    };
};
class zNPCSubBoss : public zNPCCommon {
    // total size: 0x2B4
public:
    class NPCTarget tgt_cur; // offset 0x2A0, size 0x14
};
class zMovePoint : public xMovePoint {
    // total size: 0x30
};
class zParEmitter : public xParEmitter {
    // total size: 0x78
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
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
class zFragLightningAsset : public zFragAsset {
    // total size: 0x68
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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
class xParGroup {
    // total size: 0x0
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
struct /* @anon2 */ {
    // total size: 0x34
};
struct /* @anon3 */ {
    // total size: 0x34
};
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
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
class zFragGroup {
    // total size: 0x54
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
};
class xEntMotionMPData {
    // total size: 0xC
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
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
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class child_data {
    // total size: 0x2C
public:
    class zNPCCommon * npc; // offset 0x0, size 0x4
    unsigned char wave; // offset 0x4, size 0x1
    unsigned char active; // offset 0x5, size 0x1
    class /* @class */ {
        // total size: 0x1C
    public:
        signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0x0, size 0x4
        void (* update)(class xEnt *, class xScene *, float); // offset 0x4, size 0x4
        void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x8, size 0x4
        void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0xC, size 0x4
        void (* render)(class xEnt *); // offset 0x10, size 0x4
        void (* updateTimerFunc)(class xEnt *); // offset 0x14, size 0x4
        void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0x18, size 0x4
    } callback; // offset 0x8, size 0x1C
    class /* @class */ {
        // total size: 0x8
    public:
        unsigned short model; // offset 0x0, size 0x2
        unsigned char pflags; // offset 0x2, size 0x1
        unsigned char moreFlags; // offset 0x3, size 0x1
        unsigned char flg_colCheck; // offset 0x4, size 0x1
        unsigned char flg_penCheck; // offset 0x5, size 0x1
        unsigned char chkby; // offset 0x6, size 0x1
        unsigned char penby; // offset 0x7, size 0x1
    } flags; // offset 0x24, size 0x8
};
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
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
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
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
class /* @class */ {
    // total size: 0xC
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
class zNPCGoalKJDamage : public zNPCGoalCommon {
    // total size: 0x4C
};
class /* @class */ {
    // total size: 0x34
public:
    float radius; // offset 0x0, size 0x4
    float min_height; // offset 0x4, size 0x4
    float max_height; // offset 0x8, size 0x4
    float speed; // offset 0xC, size 0x4
    float segment_length; // offset 0x10, size 0x4
    float thickness; // offset 0x14, size 0x4
    class iColor_tag color; // offset 0x18, size 0x4
    float knock_back; // offset 0x1C, size 0x4
    class /* @class */ {
        // total size: 0x14
    public:
        float radius; // offset 0x0, size 0x4
        float max_height; // offset 0x4, size 0x4
        float speed; // offset 0x8, size 0x4
        float thickness; // offset 0xC, size 0x4
        class iColor_tag color; // offset 0x10, size 0x4
    } charge; // offset 0x20, size 0x14
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
class zNPCGoalKJTaunt : public zNPCGoalCommon {
    // total size: 0x4C
};
class xModelAssetParam {
    // total size: 0x0
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
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
class /* @class */ {
    // total size: 0x1
public:
    unsigned char moreFlags; // offset 0x0, size 0x1
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
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
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
class tweak_group {
    // total size: 0x298
public:
    void * context; // offset 0x0, size 0x4
    class tweak_callback * cb_fade_obstructions; // offset 0x4, size 0x4
    class tweak_callback * cb_ambient_ring; // offset 0x8, size 0x4
    signed int max_life; // offset 0xC, size 0x4
    float min_dist; // offset 0x10, size 0x4
    float move_radius; // offset 0x14, size 0x4
    float vel_decay; // offset 0x18, size 0x4
    float repel_radius; // offset 0x1C, size 0x4
    float repel_radius_ground; // offset 0x20, size 0x4
    float fade_obstructions; // offset 0x24, size 0x4
    float music_fade; // offset 0x28, size 0x4
    float music_fade_delay; // offset 0x2C, size 0x4
    class /* @class */ {
        // total size: 0x1C
    public:
        float duration; // offset 0x0, size 0x4
        signed int amount; // offset 0x4, size 0x4
        float drop_off; // offset 0x8, size 0x4
        class /* @class */ {
            // total size: 0x10
        public:
            float r; // offset 0x0, size 0x4
            float g; // offset 0x4, size 0x4
            float b; // offset 0x8, size 0x4
            float a; // offset 0xC, size 0x4
        } color; // offset 0xC, size 0x10
    } blink; // offset 0x30, size 0x1C
    class /* @class */ {
        // total size: 0x1C
    public:
        float variance; // offset 0x0, size 0x4
        float attack[3]; // offset 0x4, size 0xC
        float warm_up; // offset 0x10, size 0x4
        float release; // offset 0x14, size 0x4
        float cool_down; // offset 0x18, size 0x4
    } interval; // offset 0x4C, size 0x1C
    class /* @class */ {
        // total size: 0x24
    public:
        signed int cycles; // offset 0x0, size 0x4
        float voffset; // offset 0x4, size 0x4
        float hoffset; // offset 0x8, size 0x4
        float delay; // offset 0xC, size 0x4
        float fall_time; // offset 0x10, size 0x4
        class /* @class */ {
            // total size: 0x10
        public:
            float speed; // offset 0x0, size 0x4
            float drop_off; // offset 0x4, size 0x4
            float delay; // offset 0x8, size 0x4
            float voffset; // offset 0xC, size 0x4
        } spew; // offset 0x14, size 0x10
    } spawn; // offset 0x68, size 0x24
    class wave_ring_type wave_ring; // offset 0x8C, size 0xA0
    class /* @class */ {
        // total size: 0x34
    public:
        float radius; // offset 0x0, size 0x4
        float min_height; // offset 0x4, size 0x4
        float max_height; // offset 0x8, size 0x4
        float speed; // offset 0xC, size 0x4
        float segment_length; // offset 0x10, size 0x4
        float thickness; // offset 0x14, size 0x4
        class iColor_tag color; // offset 0x18, size 0x4
        float knock_back; // offset 0x1C, size 0x4
        class /* @class */ {
            // total size: 0x14
        public:
            float radius; // offset 0x0, size 0x4
            float max_height; // offset 0x4, size 0x4
            float speed; // offset 0x8, size 0x4
            float thickness; // offset 0xC, size 0x4
            class iColor_tag color; // offset 0x10, size 0x4
        } charge; // offset 0x20, size 0x14
    } ambient_ring; // offset 0x12C, size 0x34
    class /* @class */ {
        // total size: 0x38
    public:
        float thickness; // offset 0x0, size 0x4
        float rand_radius; // offset 0x4, size 0x4
        float rot_radius; // offset 0x8, size 0x4
        float move_degrees; // offset 0xC, size 0x4
        class iColor_tag color; // offset 0x10, size 0x4
        float delay; // offset 0x14, size 0x4
        float time; // offset 0x18, size 0x4
        signed int max; // offset 0x1C, size 0x4
        float particles; // offset 0x20, size 0x4
        float knock_back; // offset 0x24, size 0x4
        float damage_width; // offset 0x28, size 0x4
        class /* @class */ {
            // total size: 0xC
        public:
            float thickness; // offset 0x0, size 0x4
            class iColor_tag color; // offset 0x4, size 0x4
            float move_degrees; // offset 0x8, size 0x4
        } charge; // offset 0x2C, size 0xC
    } tentacle; // offset 0x160, size 0x38
    class /* @class */ {
        // total size: 0x24
    public:
        float delay; // offset 0x0, size 0x4
        signed int rings; // offset 0x4, size 0x4
        float voffset; // offset 0x8, size 0x4
        float particles; // offset 0xC, size 0x4
        float radius; // offset 0x10, size 0x4
        float width; // offset 0x14, size 0x4
        float vel; // offset 0x18, size 0x4
        float particle_drop_off; // offset 0x1C, size 0x4
        float vel_drop_off; // offset 0x20, size 0x4
    } thump; // offset 0x198, size 0x24
    class /* @class */ {
        // total size: 0x14
    public:
        float volume; // offset 0x0, size 0x4
        float delay; // offset 0x4, size 0x4
        float radius_inner; // offset 0x8, size 0x4
        float radius_outer; // offset 0xC, size 0x4
        signed int priority; // offset 0x10, size 0x4
    } sound[11]; // offset 0x1BC, size 0xDC
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned char active; // offset 0x0, size 0x1
    signed int count; // offset 0x4, size 0x4
    float intensity; // offset 0x8, size 0x4
    float delay; // offset 0xC, size 0x4
};
class zFragParticle {
    // total size: 0x4
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
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
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
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
class zFragSoundAsset : public zFragAsset {
    // total size: 0x4C
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x24
    float volume; // offset 0x40, size 0x4
    float innerRadius; // offset 0x44, size 0x4
    float outerRadius; // offset 0x48, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x1C
public:
    float variance; // offset 0x0, size 0x4
    float attack[3]; // offset 0x4, size 0xC
    float warm_up; // offset 0x10, size 0x4
    float release; // offset 0x14, size 0x4
    float cool_down; // offset 0x18, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float vel; // offset 0x8, size 0x4
    float accel; // offset 0xC, size 0x4
    float time; // offset 0x10, size 0x4
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
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class xFFX {
    // total size: 0x0
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
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class xEntPenData {
    // total size: 0x50
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
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
class /* @class */ {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float max_height; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
    float thickness; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
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
class /* @class */ {
    // total size: 0x5
public:
    unsigned char fighting; // offset 0x0, size 0x1
    unsigned char died; // offset 0x1, size 0x1
    unsigned char charging; // offset 0x2, size 0x1
    unsigned char stop_moving; // offset 0x3, size 0x1
    unsigned char updated; // offset 0x4, size 0x1
};
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class xParInterp {
    // total size: 0x14
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
class xParSys {
    // total size: 0x0
};
class RyzMemData {
    // total size: 0x1
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class xFactory : public RyzMemData {
    // total size: 0x34
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
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
class zEntHangable {
    // total size: 0x0
};
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
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
class _tagLightningLine {
    // total size: 0x4
public:
    float unused; // offset 0x0, size 0x4
};
struct /* @anon4 */ {
    // total size: 0xCC
};
class RyzMemGrow {
    // total size: 0x1C
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    float last_yaw; // offset 0x0, size 0x4
    class xVec3 last_target; // offset 0x4, size 0xC
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
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
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
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    unsigned char line; // offset 0x0, size 0x1
    float thickness; // offset 0x4, size 0x4
    class iColor_tag color; // offset 0x8, size 0x4
    float rot_radius; // offset 0xC, size 0x4
    float degrees; // offset 0x10, size 0x4
};
class xPSYNote {
    // total size: 0x4
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
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class xPlatformAsset {
    // total size: 0x0
};
class /* @class */ {
    // total size: 0x24
public:
    signed int cycles; // offset 0x0, size 0x4
    float voffset; // offset 0x4, size 0x4
    float hoffset; // offset 0x8, size 0x4
    float delay; // offset 0xC, size 0x4
    float fall_time; // offset 0x10, size 0x4
    class /* @class */ {
        // total size: 0x10
    public:
        float speed; // offset 0x0, size 0x4
        float drop_off; // offset 0x4, size 0x4
        float delay; // offset 0x8, size 0x4
        float voffset; // offset 0xC, size 0x4
    } spew; // offset 0x14, size 0x10
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
class /* @class */ {
    // total size: 0x1
public:
    unsigned char value_def; // offset 0x0, size 0x1
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
class zNPCAmbient : public zNPCCommon {
    // total size: 0x2A0
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
class xEntBoulder {
    // total size: 0x0
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
class _tagLightningRot {
    // total size: 0x48
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
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
class zNPCGoalKJDeath : public zNPCGoalCommon {
    // total size: 0x4C
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
struct /* @anon5 */ {
    // total size: 0x34
};
class /* @class */ {
    // total size: 0x38
public:
    float thickness; // offset 0x0, size 0x4
    float rand_radius; // offset 0x4, size 0x4
    float rot_radius; // offset 0x8, size 0x4
    float move_degrees; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
    float time; // offset 0x18, size 0x4
    signed int max; // offset 0x1C, size 0x4
    float particles; // offset 0x20, size 0x4
    float knock_back; // offset 0x24, size 0x4
    float damage_width; // offset 0x28, size 0x4
    class /* @class */ {
        // total size: 0xC
    public:
        float thickness; // offset 0x0, size 0x4
        class iColor_tag color; // offset 0x4, size 0x4
        float move_degrees; // offset 0x8, size 0x4
    } charge; // offset 0x2C, size 0xC
};
struct /* @anon6 */ {
    // total size: 0x34
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class xEntSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
class /* @class */ {
    // total size: 0x10
public:
    float speed; // offset 0x0, size 0x4
    float drop_off; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
    float voffset; // offset 0xC, size 0x4
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
class RpMeshHeader {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
enum shockstate_enum {
    SS_START = 0,
    SS_WARM_UP = 1,
    SS_RELEASE = 2,
    SS_COOL_DOWN = 3,
    SS_STOP = 4,
    MAX_SS = 5,
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class rxReq {
    // total size: 0x0
};
class xBinaryCamera {
    // total size: 0x70
public:
    class config cfg; // offset 0x0, size 0x3C
    class xCamera * camera; // offset 0x3C, size 0x4
    class xQuat cam_dir; // offset 0x40, size 0x10
    class xVec3 * s1; // offset 0x50, size 0x4
    class xVec3 * s2; // offset 0x54, size 0x4
    float s2_radius; // offset 0x58, size 0x4
    class xVec2 stick_offset; // offset 0x5C, size 0x8
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
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class zFragLightning {
    // total size: 0x10
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
class zone_data {
    // total size: 0xC
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float height_focus; // offset 0x8, size 0x4
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
class zFragBone {
    // total size: 0x10
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
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
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class _tagLightningZeus {
    // total size: 0xC
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    float thickness; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    float move_degrees; // offset 0x8, size 0x4
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
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class XGOFTypeInfo {
    // total size: 0xC
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
struct /* @anon7 */ {
    // total size: 0x54
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class zFragLocInfo {
    // total size: 0x20
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
    };
};
class wave_ring_type {
    // total size: 0xA0
public:
    float min_radius; // offset 0x0, size 0x4
    float max_radius; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float fade_time; // offset 0xC, size 0x4
    float max_vel; // offset 0x10, size 0x4
    float accel; // offset 0x14, size 0x4
    float segment_length; // offset 0x18, size 0x4
    float particle_height; // offset 0x1C, size 0x4
    float particles; // offset 0x20, size 0x4
    float damage_height; // offset 0x24, size 0x4
    float damage_width; // offset 0x28, size 0x4
    float knock_back; // offset 0x2C, size 0x4
    class unit_type unit[4]; // offset 0x30, size 0x70
};
class config {
    // total size: 0x3C
public:
    class zone_data zone_rest; // offset 0x0, size 0xC
    class zone_data zone_above; // offset 0xC, size 0xC
    class zone_data zone_below; // offset 0x18, size 0xC
    float move_speed; // offset 0x24, size 0x4
    float turn_speed; // offset 0x28, size 0x4
    float stick_speed; // offset 0x2C, size 0x4
    float stick_yaw_vel; // offset 0x30, size 0x4
    float max_yaw_vel; // offset 0x34, size 0x4
    float margin_angle; // offset 0x38, size 0x4
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
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
class zFragSound {
    // total size: 0x14
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
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
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
struct /* @anon8 */ {
    // total size: 0x34
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
struct /* @anon9 */ {
    // total size: 0x34
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
struct /* @anon10 */ {
    // total size: 0x34
};
class /* @class */ {
    // total size: 0x1C
public:
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0x0, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x4, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x8, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0xC, size 0x4
    void (* render)(class xEnt *); // offset 0x10, size 0x4
    void (* updateTimerFunc)(class xEnt *); // offset 0x14, size 0x4
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0x18, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
};
class /* @class */ {
    // total size: 0x24
public:
    float delay; // offset 0x0, size 0x4
    signed int rings; // offset 0x4, size 0x4
    float voffset; // offset 0x8, size 0x4
    float particles; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
    float width; // offset 0x14, size 0x4
    float vel; // offset 0x18, size 0x4
    float particle_drop_off; // offset 0x1C, size 0x4
    float vel_drop_off; // offset 0x20, size 0x4
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
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class zFragLocation {
    // total size: 0x24
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
enum en_NPC_DAMAGE_TYPE {
    DMGTYP_UNDECIDED = 0,
    DMGTYP_ABOVE = 1,
    DMGTYP_BELOW = 2,
    DMGTYP_SIDE = 3,
    DMGTYP_INSTAKILL = 4,
    DMGTYP_KILLEVENT = 5,
    DMGTYP_HITBYTOSS = 6,
    DMGTYP_NPCATTACK = 7,
    DMGTYP_ROPE = 8,
    DMGTYP_CRUISEBUBBLE = 9,
    DMGTYP_PROJECTILE = 10,
    DMGTYP_BOULDER = 11,
    DMGTYP_BUBBOWL = 12,
    DMGTYP_THUNDER_TIKI_EXPLOSION = 13,
    DMGTYP_DAMAGE_SURFACE = 14,
    DMGTYP_BUNGEED = 15,
    DMGTYP_SURFACE = 16,
    DMGTYP_NOMORE = 17,
    DMGTYP_FORCEINT = 2147483647,
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
class xEntMotionOrbitData {
    // total size: 0x18
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C4B0 -> 0x0033C4B8
*/
// Range: 0x33C4B0 -> 0x33C4B8
signed int Process(class zNPCGoalKJDeath * this /* r2 */, enum en_trantype * trantype /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */, class xScene * xscn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C4B0 -> 0x33C4B8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C4C0 -> 0x0033C4C8
*/
// Range: 0x33C4C0 -> 0x33C4C8
signed int Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C4C0 -> 0x33C4C8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C4D0 -> 0x0033C570
*/
// Range: 0x33C4D0 -> 0x33C570
signed int Enter(class zNPCGoalKJDeath * this /* r18 */, float dt /* r20 */, void * updCtxt /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C4D0 -> 0x33C570
        class zNPCKingJelly & kj; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C570 -> 0x0033C64C
*/
// Range: 0x33C570 -> 0x33C64C
signed int Process(class zNPCGoalKJDamage * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C570 -> 0x33C64C
        class zNPCKingJelly & kj; // r16
        class xAnimState * anim; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C650 -> 0x0033C6AC
*/
// Range: 0x33C650 -> 0x33C6AC
signed int Exit(class zNPCGoalKJDamage * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C650 -> 0x33C6AC
        class zNPCKingJelly & kj; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C6B0 -> 0x0033C94C
*/
// Range: 0x33C6B0 -> 0x33C94C
signed int Enter(class zNPCGoalKJDamage * this /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C6B0 -> 0x33C94C
        class zNPCKingJelly & kj; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C950 -> 0x0033CB74
*/
// Range: 0x33C950 -> 0x33CB74
enum shockstate_enum update_cool_down(class zNPCGoalKJShockGround * this /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33C950 -> 0x33CB74
        class zNPCKingJelly & kj; // r18
        class xAnimState * anim; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033CB80 -> 0x0033CE64
*/
// Range: 0x33CB80 -> 0x33CE64
enum shockstate_enum update_warm_up(class zNPCGoalKJShockGround * this /* r19 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33CB80 -> 0x33CE64
        class zNPCKingJelly & kj; // r16
        float charge_frac; // r29+0x80
        class xAnimState * anim; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033CE70 -> 0x0033D0D0
*/
// Range: 0x33CE70 -> 0x33D0D0
signed int Process(class zNPCGoalKJShockGround * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33CE70 -> 0x33D0D0
        class zNPCKingJelly & kj; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033D0D0 -> 0x0033D168
*/
// Range: 0x33D0D0 -> 0x33D168
signed int Exit(class zNPCGoalKJShockGround * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33D0D0 -> 0x33D168
        class zNPCKingJelly & kj; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033D170 -> 0x0033D314
*/
// Range: 0x33D170 -> 0x33D314
signed int Enter(class zNPCGoalKJShockGround * this /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33D170 -> 0x33D314
        class zNPCKingJelly & kj; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033D320 -> 0x0033D3E4
*/
// Range: 0x33D320 -> 0x33D3E4
signed int Process(class zNPCGoalKJTaunt * this /* r19 */, enum en_trantype * trantype /* r18 */, float dt /* r20 */, void * updCtxt /* r17 */, class xScene * xscn /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33D320 -> 0x33D3E4
        class zNPCKingJelly & kj; // r20
        class xAnimState * anim; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033D3F0 -> 0x0033D3F8
*/
// Range: 0x33D3F0 -> 0x33D3F8
signed int Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33D3F0 -> 0x33D3F8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033D400 -> 0x0033D694
*/
// Range: 0x33D400 -> 0x33D694
signed int Enter(class zNPCGoalKJTaunt * this /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33D400 -> 0x33D694
        class zNPCKingJelly & kj; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033D6A0 -> 0x0033DAA0
*/
// Range: 0x33D6A0 -> 0x33DAA0
signed int Process(class zNPCGoalKJSpawnKids * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33D6A0 -> 0x33DAA0
        class zNPCKingJelly & kj; // r17
        signed int amount; // r16
        class xAnimState * anim; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033DAA0 -> 0x0033DAF8
*/
// Range: 0x33DAA0 -> 0x33DAF8
signed int Exit(class zNPCGoalKJSpawnKids * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33DAA0 -> 0x33DAF8
        class zNPCKingJelly & kj; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033DB00 -> 0x0033DB60
*/
// Range: 0x33DB00 -> 0x33DB60
signed int Enter(class zNPCGoalKJSpawnKids * this /* r2 */, float dt /* r29 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33DB00 -> 0x33DB60
        class zNPCKingJelly & kj; // r9
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033DB60 -> 0x0033DC64
*/
// Range: 0x33DB60 -> 0x33DC64
signed int Process(class zNPCGoalKJBored * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33DB60 -> 0x33DC64
        class zNPCKingJelly & kj; // r16
        class xAnimState * anim; // r2
        unsigned char found; // r7
        unsigned int i; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033DC70 -> 0x0033DC78
*/
// Range: 0x33DC70 -> 0x33DC78
signed int Exit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33DC70 -> 0x33DC78
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033DC80 -> 0x0033DF14
*/
// Range: 0x33DC80 -> 0x33DF14
signed int Enter(class zNPCGoalKJBored * this /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33DC80 -> 0x33DF14
        class zNPCKingJelly & kj; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033DF20 -> 0x0033E590
*/
// Range: 0x33DF20 -> 0x33E590
void move(class zNPCGoalKJIdle * this /* r2 */, float dt /* r29+0x170 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33DF20 -> 0x33E590
        class zNPCKingJelly & kj; // r5
        class xMat4x3 & imat; // r4
        class xVec3 & target; // r8
        class xVec3 & vel; // r3
        class xVec3 offset; // r29+0x160
        float dist; // r5
        class xVec3 dir; // r29+0x150
        float maxvel; // r1
        float a; // r6
        class xVec3 newvel; // r29+0x140
        float frac; // r5
        class xVec3 displace; // r29+0x130
        float maxdist; // r7
        float edgedist; // r5
        float edgedist2; // r3
        class xVec3 dir; // r29+0x120
        float frac; // r7
        class xVec3 dir; // r29+0x110
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033E590 -> 0x0033E83C
*/
// Range: 0x33E590 -> 0x33E83C
signed int Process(class zNPCGoalKJIdle * this /* r20 */, enum en_trantype * trantype /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */, class xScene * xscn /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33E590 -> 0x33E83C
        class zNPCKingJelly & kj; // r16
        class xAnimState * anim; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033E840 -> 0x0033E8A0
*/
// Range: 0x33E840 -> 0x33E8A0
signed int Exit(class zNPCGoalKJIdle * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33E840 -> 0x33E8A0
        class zNPCKingJelly & kj; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033E8A0 -> 0x0033EA68
*/
// Range: 0x33E8A0 -> 0x33EA68
signed int Enter(class zNPCGoalKJIdle * this /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33E8A0 -> 0x33EA68
        class zNPCKingJelly & kj; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033EA70 -> 0x0033EC00
*/
// Range: 0x33EA70 -> 0x33EC00
void update_blink(class zNPCKingJelly * this /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33EA70 -> 0x33EC00
        float max_delay; // r2
        float ii; // r4
        float i; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033EC00 -> 0x0033F5C4
*/
// Range: 0x33EC00 -> 0x33F5C4
void update_charge(class zNPCKingJelly * this /* r2 */, float frac /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33EC00 -> 0x33F5C4
        float thickness; // r29+0x20
        class iColor_tag color; // r29+0x1C
        signed int i; // r13
        class zLightning * & zap; // r12
        signed int j; // r11
        float radius; // r3
        float max_height; // r2
        float speed; // r1
        float thickness; // r29+0x20
        class iColor_tag color; // r29+0x18
        signed int i; // r9
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033F5D0 -> 0x0033F7D0
*/
// Range: 0x33F5D0 -> 0x33F7D0
void start_charge(class zNPCKingJelly * this /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33F5D0 -> 0x33F7D0
        signed int i; // r18
        class zLightning * & zap; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033F7D0 -> 0x0033F968
*/
// Range: 0x33F7D0 -> 0x33F968
void generate_thump_particles(class zNPCKingJelly * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33F7D0 -> 0x33F968
        class xParEmitterCustomSettings & s; // r17
        float iring; // r10
        float drate; // r20
        float dvel; // r22
        float dradius; // r21
        signed int i; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033F970 -> 0x0033FC80
*/
// Range: 0x33F970 -> 0x33FC80
void generate_ring_particles(class lightning_ring & ring /* r2 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33F970 -> 0x33FC80
        float amount; // r20
        signed int ring_size; // r20
        signed int total; // r22
        signed int emitted; // r29+0xB0
        signed int j; // r19
        signed int particles; // r21
        class xVec3 offset; // r29+0x110
        signed int k; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033FC80 -> 0x0033FDF4
*/
// Range: 0x33FC80 -> 0x33FDF4
void update_spawn_particles(class zNPCKingJelly * this /* r2 */, float dt /* r29+0x40 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33FC80 -> 0x33FDF4
        float & amount; // r5
        float accel; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033FE00 -> 0x0033FFC0
*/
// Range: 0x33FE00 -> 0x33FFC0
void create_wave_rings(class zNPCKingJelly * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33FE00 -> 0x33FFC0
        signed int i; // r9
        class lightning_ring & ring; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033FFC0 -> 0x0034014C
*/
// Range: 0x33FFC0 -> 0x34014C
void create_ambient_rings(class zNPCKingJelly * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x33FFC0 -> 0x34014C
        signed int i; // r9
        class lightning_ring & ring; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340150 -> 0x00340304
*/
// Range: 0x340150 -> 0x340304
void update_rings(class zNPCKingJelly * this /* r16 */, float dt /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340150 -> 0x340304
        class xVec3 & subloc; // r21
        class xVec3 & offset; // r20
        float bound_radius; // r22
        class xVec3 center; // r29+0x80
        signed int i; // r19
        class lightning_ring & ring; // r18
        signed int i; // r21
        class lightning_ring & ring; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340310 -> 0x0034048C
*/
// Range: 0x340310 -> 0x34048C
void refresh_tentacle_points(class zNPCKingJelly * this /* r22 */, signed int which /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340310 -> 0x34048C
        signed int j; // r21
        signed int j; // r12
        class xVec3 & start; // r11
        class xVec3 & end; // r10
        float pos; // r3
        signed int k; // r9
        class xVec3 & v; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340490 -> 0x00340784
*/
// Range: 0x340490 -> 0x340784
void generate_zap_particles(class zLightning & zap /* r20 */, float amount /* r22 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340490 -> 0x340784
        float frac; // r21
        signed int total; // r22
        signed int emitted; // r29+0xB0
        signed int j; // r19
        signed int particles; // r21
        class xVec3 offset; // r29+0x110
        signed int k; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340790 -> 0x00340A28
*/
// Range: 0x340790 -> 0x340A28
void update_tentacle_lightning(class zNPCKingJelly * this /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340790 -> 0x340A28
        signed int i; // r20
        class zLightning * & zap; // r19
        signed int i; // r18
        signed int pick_max; // r18
        unsigned int pick_mask; // r21
        signed int picked; // r17
        unsigned int i; // r4
        signed int i; // r20
        class zLightning * & zap; // r19
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340A30 -> 0x00340B74
*/
// Range: 0x340A30 -> 0x340B74
class zLightning * new_tentacle_lightning(class xVec3 * points /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340A30 -> 0x340B74
        class _tagLightningAdd info; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340B80 -> 0x00340B88
*/
// Range: 0x340B80 -> 0x340B88
void create_tentacle_lightning() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340B80 -> 0x340B88
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340B90 -> 0x00340D94
*/
// Range: 0x340B90 -> 0x340D94
void decompose(class zNPCKingJelly * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340B90 -> 0x340D94
        unsigned int i; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340DA0 -> 0x003410E8
*/
// Range: 0x340DA0 -> 0x3410E8
void start_fight(class zNPCKingJelly * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x340DA0 -> 0x3410E8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003410F0 -> 0x00341148
*/
// Range: 0x3410F0 -> 0x341148
void check_player_damage(class zNPCKingJelly * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3410F0 -> 0x341148
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00341150 -> 0x003413D4
*/
// Range: 0x341150 -> 0x3413D4
unsigned char apply_ambient_damage(class zNPCKingJelly * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x341150 -> 0x3413D4
        class xEnt & player; // r10
        class xVec3 center; // r29+0x70
        class xVec3 offset; // r29+0x60
        float r; // r29+0x80
        class xVec3 & player_vel; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003413E0 -> 0x00341674
*/
// Range: 0x3413E0 -> 0x341674
unsigned char apply_wave_damage(class zNPCKingJelly * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3413E0 -> 0x341674
        class lightning_ring & ring; // r6
        class xVec3 & loc; // r2
        class xEnt & player; // r5
        class xSphere & o; // r3
        float lower; // r9
        float upper; // r8
        class xVec3 & player_vel; // r8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00341680 -> 0x00341B00
*/
// Range: 0x341680 -> 0x341B00
unsigned char apply_tentacle_damage(class zNPCKingJelly * this /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x341680 -> 0x341B00
        class xSphere o; // r29+0xC0
        class xVec3 v1; // r29+0x120
        class xVec3 v2; // r29+0x110
        class xEnt & player; // r20
        class xVec3 joint[2]; // r29+0xA0
        signed int i; // r19
        signed int j; // r18
        class xVec3 & player_vel; // r7
        class /* @class */ {
            // total size: 0x8
        public:
            signed int i; // offset 0x0, size 0x4
            signed int j; // offset 0x4, size 0x4
        } last_hit_at; // @ 0x0050F0E8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00341B00 -> 0x00341CF8
*/
// Range: 0x341B00 -> 0x341CF8
static unsigned char sphere_hits_line(class xSphere & o /* r2 */, class xVec3 & v1 /* r2 */, class xVec3 & v2 /* r2 */, float width /* r29+0x40 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x341B00 -> 0x341CF8
        class xVec3 d1; // r29+0x30
        class xVec3 d2; // r29+0x20
        float r; // r11
        float b; // r3
        float q; // r1
        float d; // r5
        float r1; // r3
        float r2; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00341D00 -> 0x00342090
*/
// Range: 0x341D00 -> 0x342090
void repel_player(class zNPCKingJelly * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x341D00 -> 0x342090
        class xVec3 center; // r29+0x90
        class xVec3 & player_loc; // r3
        class xVec3 & player_vel; // r8
        class xVec3 offset; // r29+0x80
        float imag; // r6
        class xVec3 dir; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342090 -> 0x00342374
*/
// Range: 0x342090 -> 0x342374
void spawn_children(class zNPCKingJelly * this /* r21 */, signed int wave /* r2 */, signed int count /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342090 -> 0x342374
        unsigned char active[32]; // r29+0xB0
        signed int total; // r19
        unsigned int i; // r7
        unsigned int i; // r3
        class child_data & child; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342380 -> 0x003424A8
*/
// Range: 0x342380 -> 0x3424A8
void add_child(class zNPCKingJelly * this /* r18 */, class xBase & child /* r17 */, signed int wave /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342380 -> 0x3424A8
        unsigned int i; // r20
        unsigned int size; // r19
        class xBase * entry; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003424B0 -> 0x003425F8
*/
// Range: 0x3424B0 -> 0x3425F8
void set_life(class zNPCKingJelly * this /* r17 */, signed int life /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3424B0 -> 0x3425F8
        signed int oldlife; // r16
        signed int state; // r2
        signed int i; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342600 -> 0x0034272C
*/
// Range: 0x342600 -> 0x34272C
unsigned int AnimPick(signed int gid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342600 -> 0x34272C
        signed int index; // r2
        unsigned int animID; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342730 -> 0x0034282C
*/
// Range: 0x342730 -> 0x34282C
void Damage(class zNPCKingJelly * this /* r17 */, enum en_NPC_DAMAGE_TYPE damtype /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342730 -> 0x34282C
        signed int state; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342830 -> 0x00342928
*/
// Range: 0x342830 -> 0x342928
void SelfSetup(class zNPCKingJelly * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342830 -> 0x342928
        class xBehaveMgr * bmgr; // r2
        class xPsyche * psy; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342930 -> 0x003429C0
*/
// Range: 0x342930 -> 0x3429C0
void ParseLinks(class zNPCKingJelly * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342930 -> 0x3429C0
        class xLinkAsset * it; // r17
        class xLinkAsset * end; // r16
        class xBase * child; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003429C0 -> 0x00342A50
*/
// Range: 0x3429C0 -> 0x342A50
void ParseINI(class zNPCKingJelly * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3429C0 -> 0x342A50
        class tweak_callback cb_ambient_ring; // @ 0x004E0C20
        class tweak_callback cb_fade_obstructions; // @ 0x004E0BF0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00342A50 -> 0x003485E4
*/
// Range: 0x342A50 -> 0x3485E4
static void register_tweaks(class tweak_group * this /* r19 */, unsigned char init /* r18 */, class xModelAssetParam * ap /* r17 */, unsigned int apsize /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x342A50 -> 0x3485E4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348650 -> 0x00348658
*/
// Range: 0x348650 -> 0x348658
void RenderExtra() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x348650 -> 0x348658
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348660 -> 0x003486E4
*/
// Range: 0x348660 -> 0x3486E4
signed int SysEvent(class zNPCKingJelly * this /* r2 */, class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, signed int * handled /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x348660 -> 0x3486E4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003486F0 -> 0x00348770
*/
// Range: 0x3486F0 -> 0x348770
void BUpdate(class zNPCKingJelly * this /* r2 */, class xVec3 * pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3486F0 -> 0x348770
        class xVec3 & subloc; // r2
        class xVec3 loc; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348770 -> 0x00348B44
*/
// Range: 0x348770 -> 0x348B44
void Process(class zNPCKingJelly * this /* r22 */, class xScene * xscn /* r21 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x348770 -> 0x348B44
        class xEnt * tub; // r2
        class xVec3 & vel; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348B50 -> 0x00348BBC
*/
// Range: 0x348B50 -> 0x348BBC
void Destroy(class zNPCKingJelly * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x348B50 -> 0x348BBC
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348BC0 -> 0x00348FDC
*/
// Range: 0x348BC0 -> 0x348FDC
void Reset(class zNPCKingJelly * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x348BC0 -> 0x348FDC
        unsigned int i; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348FE0 -> 0x00349118
*/
// Range: 0x348FE0 -> 0x349118
void Setup(class zNPCKingJelly * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x348FE0 -> 0x349118
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349120 -> 0x0034916C
*/
// Range: 0x349120 -> 0x34916C
void Init(class zNPCKingJelly * this /* r16 */, class xEntAsset * asset /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x349120 -> 0x34916C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349170 -> 0x003492B0
*/
// Range: 0x349170 -> 0x3492B0
void * __ct(class zNPCKingJelly * this /* r22 */, signed int myType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x349170 -> 0x3492B0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003492B0 -> 0x00349BA8
*/
// Range: 0x3492B0 -> 0x349BA8
class xAnimTable * ZNPC_AnimTable_KingJelly() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3492B0 -> 0x349BA8
        class xAnimTable * table; // r16
        signed int ourAnims[11]; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349BB0 -> 0x0034A018
*/
// Range: 0x349BB0 -> 0x34A018
void refresh(class lightning_ring * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x349BB0 -> 0x34A018
        class xVec3 center; // r29+0xE0
        signed int size; // r20
        signed int current_size; // r7
        unsigned int i; // r6
        signed int i; // r18
        class zLightning & arc; // r17
        signed int points; // r16
        float * it; // r4
        float * end; // r3
        unsigned int i; // r16
        signed int i; // r19
        signed int points; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A020 -> 0x0034A118
*/
// Range: 0x34A020 -> 0x34A118
static void expand_ring_update(class lightning_ring & ring /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A020 -> 0x34A118
        float frac; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A120 -> 0x0034A1CC
*/
// Range: 0x34A120 -> 0x34A1CC
static void updown_ring_update(class lightning_ring & ring /* r16 */, float dt /* r29+0x30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A120 -> 0x34A1CC
        float mag; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeKingJelly.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A1D0 -> 0x0034A4C8
*/
// Range: 0x34A1D0 -> 0x34A4C8
static signed int set_ring_segments(class xVec3 & center /* r17 */, float radius /* r20 */, float segment_length /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x34A1D0 -> 0x34A4C8
        float pos; // r21
        signed int i; // r16
        signed int size; // r3
        class xVec3 * v; // r9
        class xVec3 * end; // r8
        signed int inc; // r3
        float * lsin; // r6
        float * lcos; // r5
        class xVec3 * v0; // r8
        class xVec3 * end; // r7
        class xVec3 * v1; // r4
        class xVec3 * v0; // r7
        class xVec3 * end; // r6
        class xVec3 * v1; // r5
        class xVec3 * v0; // r6
        class xVec3 * end; // r5
        class xVec3 * v1; // r4
        class xVec3 * v; // r4
        class xVec3 * end; // r3
        float cos_lookup[9]; // @ 0x005E3370
        float sin_lookup[9]; // @ 0x005E3340
        unsigned char sclookup_inited; // @ 0x00510178
    }
}

