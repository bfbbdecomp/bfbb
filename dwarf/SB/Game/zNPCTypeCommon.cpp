/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
unsigned int g_hash_lassanim[3]; // size: 0xC, address: 0x5CC160
char * g_strz_lassanim[3]; // size: 0xC, address: 0x4DECE0
char * g_strz_lassevents[6]; // size: 0x18, address: 0x0
char * g_strz_lassstages[4]; // size: 0x10, address: 0x0
static char * g_strz_params[67]; // size: 0x10C, address: 0x4DECF0
static enum en_npcparm mdlVertToParm[20]; // size: 0x50, address: 0x4DEE00
static class NPCConfig * g_ncfghead; // size: 0x4, address: 0x50FE88
static class zNPCSettings * g_dflt_npcsettings; // size: 0x4, address: 0x50FE8C
static signed int g_skipDescent; // size: 0x4, address: 0x50FE90
static float g_tmr_talkless; // size: 0x4, address: 0x50EF70
static signed int g_flg_wonder; // size: 0x4, address: 0x50FE98
static signed int g_isConversation; // size: 0x4, address: 0x50FE9C
static class xBase * g_ownerConversation; // size: 0x4, address: 0x50FEA0
struct /* @anon1 */ {
    // total size: 0xCC
} __vt__10zNPCCommon; // size: 0xCC, address: 0x50A6C0
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *); // size: 0x0, address: 0x213A90
class xVec3 g_O3; // size: 0xC, address: 0x4F8D70
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class xVec3 g_Y3; // size: 0xC, address: 0x4F8D90
unsigned int xUpdateCull_DistanceSquaredCB(void *, void *); // size: 0x0, address: 0x3298A0
unsigned int xUpdateCull_AlwaysTrueCB(void *, void *); // size: 0x0, address: 0x329920
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
enum _CurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x50F3EC
class NPCSndTrax g_sndTrax_General[]; // size: 0x0, address: 0x5CF998
struct /* @anon0 */ {
    // total size: 0x54
} __vt__9xNPCBasic; // size: 0x54, address: 0x50BE30
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class zMovePoint : public xMovePoint {
    // total size: 0x30
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
class xCutsceneTime {
    // total size: 0x10
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
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
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
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
class zFragGroup {
    // total size: 0x54
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
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
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
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
class NPCMsg {
    // total size: 0x44
public:
    enum en_NPC_MSG_ID msgid; // offset 0x0, size 0x4
    unsigned int sendto; // offset 0x4, size 0x4
    unsigned int from; // offset 0x8, size 0x4
    enum en_NPC_MSG_DATA infotype; // offset 0xC, size 0x4
    union { // inferred
        class NPCSysEvent sysevent; // offset 0x10, size 0x28
        class NPCBlastInfo blastarea; // offset 0x10, size 0x14
        class NPCChatInfo chatter; // offset 0x10, size 0x10
        class NPCSpawnInfo spawning; // offset 0x10, size 0x18
        class NPCTargetInfo target; // offset 0x10, size 0x10
        class NPCDamageInfo dmgdata; // offset 0x10, size 0x14
        class NPCStunInfo stundata; // offset 0x10, size 0xC
        class NPCScriptInfo scriptdata; // offset 0x10, size 0x4
        class NPCMountInfo mountdata; // offset 0x10, size 0x8
        class NPCAreaInfo areadata; // offset 0x10, size 0x10
    };
    void * attached; // offset 0x38, size 0x4
    class NPCMsg * next; // offset 0x3C, size 0x4
    float tmr_delay; // offset 0x40, size 0x4
};
class NPCWidget {
    // total size: 0xC
public:
    enum en_NPC_UI_WIDGETS idxID; // offset 0x0, size 0x4
    class xBase * base_widge; // offset 0x4, size 0x4
    class zNPCCommon * npc_ownerlock; // offset 0x8, size 0x4
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
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
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
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
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
enum en_LASSO_EVENT {
    LASS_EVNT_BEGIN = 0,
    LASS_EVNT_ENDED = 1,
    LASS_EVNT_GRABSTART = 2,
    LASS_EVNT_GRABEND = 3,
    LASS_EVNT_YANK = 4,
    LASS_EVNT_ABORT = 5,
    LASS_EVNT_NOMORE = 6,
    LASS_EVNT_FORCEINT = 2147483647,
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
class XCSNNosey {
    // total size: 0xC
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
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
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
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
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
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
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
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
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
class NPCSndProp {
    // total size: 0xC
public:
    enum en_NPC_SOUND sndtype; // offset 0x0, size 0x4
    signed int flg_snd; // offset 0x4, size 0x4
    float tym_delayNext; // offset 0x8, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
enum en_NPC_CARRY_STATE {
    zNPCCARRY_NONE = 0,
    zNPCCARRY_PICKUP = 1,
    zNPCCARRY_THROW = 2,
    zNPCCARRY_ATTEMPTPICKUP = 3,
    zNPCCARRY_FORCEINT = 2147483647,
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class NPCSpawnInfo {
    // total size: 0x18
public:
    class xVec3 pos_spawn; // offset 0x0, size 0xC
    class zMovePoint * nav_firstMovepoint; // offset 0xC, size 0x4
    class zMovePoint * nav_spawnReference; // offset 0x10, size 0x4
    signed int spawnSuccess; // offset 0x14, size 0x4
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
class NPCSndQueue {
    // total size: 0x14
public:
    unsigned int sndDirect; // offset 0x0, size 0x4
    enum en_NPC_SOUND sndtype; // offset 0x4, size 0x4
    signed int flg_snd; // offset 0x8, size 0x4
    float tmr_delay; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
};
class xEntPenData {
    // total size: 0x50
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
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
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
class xFFX {
    // total size: 0x0
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
class zFragParticle {
    // total size: 0x4
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
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
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
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
class zFragSoundAsset : public zFragAsset {
    // total size: 0x4C
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x24
    float volume; // offset 0x40, size 0x4
    float innerRadius; // offset 0x44, size 0x4
    float outerRadius; // offset 0x48, size 0x4
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
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
class xCutsceneZbuffer {
    // total size: 0x10
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float nearPlane; // offset 0x8, size 0x4
    float farPlane; // offset 0xC, size 0x4
};
class zEntHangable {
    // total size: 0x0
};
class xParInterp {
    // total size: 0x14
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
class NPCSysEvent {
    // total size: 0x28
public:
    signed int doLinkEvents; // offset 0x0, size 0x4
    signed int handled; // offset 0x4, size 0x4
    class xBase * from; // offset 0x8, size 0x4
    class xBase * to; // offset 0xC, size 0x4
    unsigned int toEvent; // offset 0x10, size 0x4
    float toParam[4]; // offset 0x14, size 0x10
    class xBase * toParamWidget; // offset 0x24, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class xParSys {
    // total size: 0x0
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
class NPCGlyph {
    // total size: 0x64
public:
    enum en_npcglyph typ_glyph; // offset 0x0, size 0x4
    signed int flg_glyph; // offset 0x4, size 0x4
    class xModelInstance * mdl_glyph; // offset 0x8, size 0x4
    class xVec3 pos_glyph; // offset 0xC, size 0xC
    class xVec3 vel_glyph; // offset 0x18, size 0xC
    class xMat3x3 rot_glyph; // offset 0x24, size 0x30
    class xVec3 scl_glyph; // offset 0x54, size 0xC
    float tmr_glyph; // offset 0x60, size 0x4
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
class RyzMemData {
    // total size: 0x1
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
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
class xFactory : public RyzMemData {
    // total size: 0x34
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
class zCutsceneMgr : public xCutsceneMgr {
    // total size: 0x24
};
class zAnimFxSound {
    // total size: 0x18
public:
    unsigned int ID; // offset 0x0, size 0x4
    float vol; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
    unsigned int priority; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
};
class _tagLightningLine {
    // total size: 0x4
public:
    float unused; // offset 0x0, size 0x4
};
class xModelAssetParam {
    // total size: 0x0
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
class zShrapnelAsset {
    // total size: 0xC
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
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
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
enum en_NPC_MSG_ID {
    NPC_MID_NONE = 0,
    NPC_MID_SYSEVENT = 1,
    NPC_MID_RESPAWN = 2,
    NPC_MID_DAMAGE = 3,
    NPC_MID_EXPLOSION = 4,
    NPC_MID_BUNNYHOP = 5,
    NPC_MID_DTRON_NPCEMIT = 6,
    NPC_MID_DTRON_NPCAVAIL = 7,
    NPC_MID_DTRON_ISDEAD = 8,
    NPC_MID_CHAT_REQUEST = 9,
    NPC_MID_CHAT_DECLINE = 10,
    NPC_MID_CHAT_ACCEPT = 11,
    NPC_MID_CHAT_DONE = 12,
    NPC_MID_CHAT_ABORT = 13,
    NPC_MID_TALKSTART = 14,
    NPC_MID_TALKON = 15,
    NPC_MID_TALKOFF = 16,
    NPC_MID_SAWPLYR = 17,
    NPC_MID_NEEDMEDIC = 18,
    NPC_MID_UNDERATTACK = 19,
    NPC_MID_NPCDIED = 20,
    NPC_MID_PLYRSPATULA = 21,
    NPC_MID_BECOMESCARED = 22,
    NPC_MID_NOLONGERSCARED = 23,
    NPC_MID_CELEBRATE = 24,
    NPC_MID_STUN = 25,
    NPC_MID_SCRIPTBEGIN = 26,
    NPC_MID_SCRIPTEND = 27,
    NPC_MID_SCRIPTHALT = 28,
    NPC_MID_DEV_ANIMSPIN = 29,
    NPC_MID_DEV_ANIMCYCLE = 30,
    NPC_MID_DEV_HEROMODE = 31,
    NPC_MID_DEV_DONE = 32,
    NPC_MID_NOMORE = 33,
    NPC_MID_FORCE = 2147483647,
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
    // total size: 0x0
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
class zAssetPickupTable {
    // total size: 0x0
};
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
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
class xUpdateCullEnt {
    // total size: 0x10
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
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
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
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
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
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
class xPSYNote {
    // total size: 0x4
};
class xPlatformAsset {
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
class NPCTargetInfo {
    // total size: 0x10
public:
    class xBase * bas_tgt; // offset 0x0, size 0x4
    class xVec3 pos_tgt; // offset 0x4, size 0xC
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
class xEntBoulder {
    // total size: 0x0
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
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
class xCurveAsset {
    // total size: 0x0
};
class xCutsceneZbufferHack {
    // total size: 0x44
public:
    char * name; // offset 0x0, size 0x4
    class xCutsceneZbuffer times[4]; // offset 0x4, size 0x40
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
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
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
class _tagLightningRot {
    // total size: 0x48
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
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
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
class xSFX : public xBase {
    // total size: 0x1C
public:
    class xSFXAsset * asset; // offset 0x10, size 0x4
    unsigned int sndID; // offset 0x14, size 0x4
    float cachedOuterDistSquared; // offset 0x18, size 0x4
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
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
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
class xEntSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class xCutsceneBreak {
    // total size: 0x8
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
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
class zParEmitter : public xParEmitter {
    // total size: 0x78
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
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum en_lassanim {
    LASS_ANIM_UNKNOWN = 0,
    LASS_ANIM_GRAB = 1,
    LASS_ANIM_HOLD = 2,
    LASS_ANIM_NOMORE = 3,
    LASS_ANIM_FORCEINT = 2147483647,
};
class NPCDamageInfo {
    // total size: 0x14
public:
    enum en_NPC_DAMAGE_TYPE dmg_type; // offset 0x0, size 0x4
    class xBase * dmg_from; // offset 0x4, size 0x4
    class xVec3 vec_dmghit; // offset 0x8, size 0xC
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
class xCutsceneMgr : public xBase {
    // total size: 0x24
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class xCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
    float oldfov; // offset 0x20, size 0x4
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class rxReq {
    // total size: 0x0
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
class FloatAndVoid {
    // total size: 0x4
public:
    union { // inferred
        float f; // offset 0x0, size 0x4
        void * v; // offset 0x0, size 0x4
    };
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
class _tagLightningZeus {
    // total size: 0xC
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
};
enum en_ZBASETYPE {
    eBaseTypeUnknown = 0,
    eBaseTypeTrigger = 1,
    eBaseTypeVillain = 2,
    eBaseTypePlayer = 3,
    eBaseTypePickup = 4,
    eBaseTypeEnv = 5,
    eBaseTypePlatform = 6,
    eBaseTypeCamera = 7,
    eBaseTypeDoor = 8,
    eBaseTypeSavePoint = 9,
    eBaseTypeItem = 10,
    eBaseTypeStatic = 11,
    eBaseTypeDynamic = 12,
    eBaseTypeMovePoint = 13,
    eBaseTypeTimer = 14,
    eBaseTypeBubble = 15,
    eBaseTypePortal = 16,
    eBaseTypeGroup = 17,
    eBaseTypePendulum = 18,
    eBaseTypeSFX = 19,
    eBaseTypeFFX = 20,
    eBaseTypeVFX = 21,
    eBaseTypeCounter = 22,
    eBaseTypeHangable = 23,
    eBaseTypeButton = 24,
    eBaseTypeProjectile = 25,
    eBaseTypeSurface = 26,
    eBaseTypeDestructObj = 27,
    eBaseTypeGust = 28,
    eBaseTypeVolume = 29,
    eBaseTypeDispatcher = 30,
    eBaseTypeCond = 31,
    eBaseTypeUI = 32,
    eBaseTypeUIFont = 33,
    eBaseTypeProjectileType = 34,
    eBaseTypeLobMaster = 35,
    eBaseTypeFog = 36,
    eBaseTypeLight = 37,
    eBaseTypeParticleEmitter = 38,
    eBaseTypeParticleSystem = 39,
    eBaseTypeCutsceneMgr = 40,
    eBaseTypeEGenerator = 41,
    eBaseTypeScript = 42,
    eBaseTypeNPC = 43,
    eBaseTypeHud = 44,
    eBaseTypeNPCProps = 45,
    eBaseTypeParticleEmitterProps = 46,
    eBaseTypeBoulder = 47,
    eBaseTypeCruiseBubble = 48,
    eBaseTypeTeleportBox = 49,
    eBaseTypeBusStop = 50,
    eBaseTypeTextBox = 51,
    eBaseTypeTalkBox = 52,
    eBaseTypeTaskBox = 53,
    eBaseTypeBoulderGenerator = 54,
    eBaseTypeNPCSettings = 55,
    eBaseTypeDiscoFloor = 56,
    eBaseTypeTaxi = 57,
    eBaseTypeHUD_model = 58,
    eBaseTypeHUD_font_meter = 59,
    eBaseTypeHUD_unit_meter = 60,
    eBaseTypeBungeeHook = 61,
    eBaseTypeCameraFly = 62,
    eBaseTypeTrackPhysics = 63,
    eBaseTypeZipLine = 64,
    eBaseTypeArena = 65,
    eBaseTypeDuplicator = 66,
    eBaseTypeLaserBeam = 67,
    eBaseTypeTurret = 68,
    eBaseTypeCameraTweak = 69,
    eBaseTypeSlideProps = 70,
    eBaseTypeHUD_text = 71,
    eBaseTypeCount = 72,
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum en_NPC_UI_WIDGETS {
    NPC_WIDGE_TALK = 0,
    NPC_WIDGE_NOMORE = 1,
    NPC_WIDGE_FORCE = 2,
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
class zFragLightning {
    // total size: 0x10
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
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
enum en_mdlvert {
    NPC_MDLVERT_ATTACKBASE = 0,
    NPC_MDLVERT_ATTACK = 1,
    NPC_MDLVERT_ATTACK1 = 2,
    NPC_MDLVERT_ATTACK2 = 3,
    NPC_MDLVERT_ATTACK3 = 4,
    NPC_MDLVERT_ATTACK4 = 5,
    NPC_MDLVERT_LOSEYEBALL = 6,
    NPC_MDLVERT_DMGSMOKE_A = 7,
    NPC_MDLVERT_DMGSMOKE_B = 8,
    NPC_MDLVERT_DMGSMOKE_C = 9,
    NPC_MDLVERT_DMGFLAME_A = 10,
    NPC_MDLVERT_DMGFLAME_B = 11,
    NPC_MDLVERT_DMGFLAME_C = 12,
    NPC_MDLVERT_PROPEL = 13,
    NPC_MDLVERT_EXHAUST = 14,
    NPC_MDLVERT_GEN01 = 15,
    NPC_MDLVERT_GEN02 = 16,
    NPC_MDLVERT_GEN03 = 17,
    NPC_MDLVERT_GEN04 = 18,
    NPC_MDLVERT_GEN05 = 19,
    NPC_MDLVERT_NOMORE = 20,
    NPC_MDLVERT_FORCEINT = 2147483647,
};
class zFragBone {
    // total size: 0x10
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
class zFragLightningAsset : public zFragAsset {
    // total size: 0x68
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class XGOFTypeInfo {
    // total size: 0xC
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
class NPCStunInfo {
    // total size: 0xC
public:
    float tym_stuntime; // offset 0x0, size 0x4
    enum en_NPC_CARRY_STATE carrystate; // offset 0x4, size 0x4
    signed int allowStun; // offset 0x8, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
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
enum en_npcbtyp {
    NPCP_BASIS_NONE = 0,
    NPCP_BASIS_EVILROBOT = 1,
    NPCP_BASIS_FRIENDLYROBOT = 2,
    NPCP_BASIS_LOVINGCITIZEN = 3,
    NPCP_BASIS_GRUMPYCITIZEN = 4,
    NPCP_BASIS_NOMORE = 5,
    NPCP_BASIS_FORCE = 2147483647,
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
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
struct /* @anon0 */ {
    // total size: 0x54
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
class tag_iFile {
    // total size: 0x90
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
class xBehaveMgr : public RyzMemData {
    // total size: 0x18
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
};
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
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
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
class xSFXAsset : public xBaseAsset {
    // total size: 0x30
public:
    unsigned short flagsSFX; // offset 0x8, size 0x2
    unsigned short freq; // offset 0xA, size 0x2
    float freqm; // offset 0xC, size 0x4
    unsigned int soundAssetID; // offset 0x10, size 0x4
    unsigned int attachID; // offset 0x14, size 0x4
    unsigned char loopCount; // offset 0x18, size 0x1
    unsigned char priority; // offset 0x19, size 0x1
    unsigned char volume; // offset 0x1A, size 0x1
    unsigned char pad; // offset 0x1B, size 0x1
    class xVec3 pos; // offset 0x1C, size 0xC
    float innerRadius; // offset 0x28, size 0x4
    float outerRadius; // offset 0x2C, size 0x4
};
class zFragLocInfo {
    // total size: 0x20
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
    };
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
enum en_npcparm {
    NPC_PARM_NONE = 0,
    NPC_PARM_MOVERATE = 1,
    NPC_PARM_TURNRATE = 2,
    NPC_PARM_ACCEL = 3,
    NPC_PARM_DRIFT = 4,
    NPC_PARM_MASS = 5,
    NPC_PARM_TOSSGRAV = 6,
    NPC_PARM_TOSSELASTIC = 7,
    NPC_PARM_BND_ISBOX = 8,
    NPC_PARM_BND_CENTER = 9,
    NPC_PARM_BND_EXTENT = 10,
    NPC_PARM_HITPOINTS = 11,
    NPC_PARM_MODELSCALE = 12,
    NPC_PARM_DETECT_RAD = 13,
    NPC_PARM_DETECT_HYT = 14,
    NPC_PARM_DETECT_OFF = 15,
    NPC_PARM_ATTACK_RAD = 16,
    NPC_PARM_ATTACK_FOV = 17,
    NPC_PARM_SND_RAD = 18,
    NPC_PARM_TIMEFIDGET = 19,
    NPC_PARM_TIMEATTACK = 20,
    NPC_PARM_TIMESTUN = 21,
    NPC_PARM_TIMEALERT = 22,
    NPC_PARM_VTX_ATTACKBASE = 23,
    NPC_PARM_VTX_ATTACK = 24,
    NPC_PARM_VTX_ATTACK1 = 25,
    NPC_PARM_VTX_ATTACK2 = 26,
    NPC_PARM_VTX_ATTACK3 = 27,
    NPC_PARM_VTX_ATTACK4 = 28,
    NPC_PARM_VTX_EYEBALL = 29,
    NPC_PARM_VTX_DMGSMOKEA = 30,
    NPC_PARM_VTX_DMGSMOKEB = 31,
    NPC_PARM_VTX_DMGSMOKEC = 32,
    NPC_PARM_VTX_DMGFLAMEA = 33,
    NPC_PARM_VTX_DMGFLAMEB = 34,
    NPC_PARM_VTX_DMGFLAMEC = 35,
    NPC_PARM_VTX_PROPEL = 36,
    NPC_PARM_VTX_EXHAUST = 37,
    NPC_PARM_VTX_GEN01 = 38,
    NPC_PARM_VTX_GEN02 = 39,
    NPC_PARM_VTX_GEN03 = 40,
    NPC_PARM_VTX_GEN04 = 41,
    NPC_PARM_VTX_GEN05 = 42,
    NPC_PARM_ATK_SIZE01 = 43,
    NPC_PARM_ATK_FRAMES01 = 44,
    NPC_PARM_ATK_FRAMES01A = 45,
    NPC_PARM_ATK_FRAMES01B = 46,
    NPC_PARM_ATK_FRAMES02 = 47,
    NPC_PARM_ATK_FRAMES02A = 48,
    NPC_PARM_ATK_FRAMES02B = 49,
    NPC_PARM_ATK_FRAMES03 = 50,
    NPC_PARM_ATK_FRAMES03A = 51,
    NPC_PARM_ATK_FRAMES03B = 52,
    NPC_PARM_ESTEEM_A = 53,
    NPC_PARM_ESTEEM_B = 54,
    NPC_PARM_ESTEEM_C = 55,
    NPC_PARM_ESTEEM_D = 56,
    NPC_PARM_ESTEEM_E = 57,
    NPC_PARM_SHADOW_CASTDIST = 58,
    NPC_PARM_SHADOW_RADCACHE = 59,
    NPC_PARM_SHADOW_RADRASTER = 60,
    NPC_PARAM_TEST_COUNT = 61,
    NPC_PARM_ENDTAG_INI = 62,
    NPC_PARM_FIRSTMVPT = 63,
    NPC_PARM_ENDTAG_PROPS = 64,
    NPC_PARM_BOGUSSHARE = 65,
    NPC_PARM_ENDTAG_SHARE = 66,
    NPC_PARM_NOMORE = 67,
    NPC_PARM_FORCEINT = 2147483647,
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
class xParabola {
    // total size: 0x24
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
class zFragSound {
    // total size: 0x14
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
};
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
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
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class NPCScriptInfo {
    // total size: 0x4
public:
    unsigned int aid_playanim; // offset 0x0, size 0x4
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
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
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
};
class xEntMotionOrbitData {
    // total size: 0x18
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
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
class _zEnv : public xBase {
    // total size: 0x14
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
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
class zFragLocation {
    // total size: 0x24
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
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
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
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
class NPCMountInfo {
    // total size: 0x8
public:
    class xEnt * ent_toMount; // offset 0x0, size 0x4
    class xCollis * col_forMount; // offset 0x4, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
enum _CurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerSandy = 2,
    eCurrentPlayerCount = 3,
};
class anim_coll_data {
    // total size: 0x0
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
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
class NPCBlastInfo {
    // total size: 0x14
public:
    class xVec3 pos_blast; // offset 0x0, size 0xC
    float rad_blast; // offset 0xC, size 0x4
    float spd_expand; // offset 0x10, size 0x4
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
class xEntMotionSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
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
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
class NPCAreaInfo {
    // total size: 0x10
public:
    class zNPCCommon * npc_origin; // offset 0x0, size 0x4
    class xVec3 pos_origin; // offset 0x4, size 0xC
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
enum en_npcglyph {
    NPC_GLYPH_UNKNOWN = 0,
    NPC_GLYPH_SHINYONE = 1,
    NPC_GLYPH_SHINYFIVE = 2,
    NPC_GLYPH_SHINYTEN = 3,
    NPC_GLYPH_SHINYFIFTY = 4,
    NPC_GLYPH_SHINYHUNDRED = 5,
    NPC_GLYPH_TALK = 6,
    NPC_GLYPH_TALKOTHER = 7,
    NPC_GLYPH_FRIEND = 8,
    NPC_GLYPH_DAZED = 9,
    NPC_GLYPH_NOMORE = 10,
    NPC_GLYPH_FORCE = 2147483647,
};
struct /* @anon1 */ {
    // total size: 0xCC
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
enum en_xEventTags {
    eEventUnknown = 0,
    eEventEnable = 1,
    eEventDisable = 2,
    eEventVisible = 3,
    eEventInvisible = 4,
    eEventEnterPlayer = 5,
    eEventExitPlayer = 6,
    eEventTouchPlayer = 7,
    eEventControlOff = 8,
    eEventControlOn = 9,
    eEventReset = 10,
    eEventIncrement = 11,
    eEventDecrement = 12,
    eEventOpen = 13,
    eEventClose = 14,
    eEventToggle = 15,
    eEventTeleportPlayer = 16,
    eEventOutOfBounds = 17,
    eEventRun = 18,
    eEventStop = 19,
    eEventExpired = 20,
    eEventMove = 21,
    eEventDestroy = 22,
    eEventPause = 23,
    eEventPlay = 24,
    eEventPlayOne = 25,
    eEventPlayMaybe = 26,
    eEventRoomStart = 27,
    eEventInvalidate = 28,
    eEventTilt = 29,
    eEventUntilt = 30,
    eEventArrive = 31,
    eEventMount = 32,
    eEventDismount = 33,
    eEventBreak = 34,
    eEventPickup = 35,
    eEventDeath = 36,
    eEventKill = 37,
    eEventOn = 38,
    eEventOff = 39,
    eEventNPCPatrolOn = 40,
    eEventNPCPatrolOff = 41,
    eEventNPCWanderOn = 42,
    eEventNPCWanderOff = 43,
    eEventNPCDetectOn = 44,
    eEventNPCDetectOff = 45,
    eEventNPCChaseOn = 46,
    eEventNPCChaseOff = 47,
    eEventNPCGoToSleep = 48,
    eEventNPCWakeUp = 49,
    eEventNPCRespawn = 50,
    eEventPlayerDeath = 51,
    eEventGiveChance = 52,
    eEventGiveShinyObjects = 53,
    eEventGiveHealth = 54,
    eEventPress = 55,
    eEventUnpress = 56,
    eEventArriveHalfway = 57,
    eEventHit = 58,
    eEventButtonPressAction = 59,
    eEventEvaluate = 60,
    eEventTrue = 61,
    eEventFalse = 62,
    eEventPadPressX = 63,
    eEventPadPressSquare = 64,
    eEventPadPressO = 65,
    eEventPadPressTriangle = 66,
    eEventPadPressL1 = 67,
    eEventPadPressL2 = 68,
    eEventPadPressR1 = 69,
    eEventPadPressR2 = 70,
    eEventPadPressStart = 71,
    eEventPadPressSelect = 72,
    eEventPadPressUp = 73,
    eEventPadPressDown = 74,
    eEventPadPressRight = 75,
    eEventPadPressLeft = 76,
    eEventFontBackdropOn = 77,
    eEventFontBackdropOff = 78,
    eEventUISelect = 79,
    eEventUIUnselect = 80,
    eEventUIFocusOn = 81,
    eEventUIFocusOff = 82,
    eEventCollisionOn = 83,
    eEventCollisionOff = 84,
    eEventCollision_Visible_On = 85,
    eEventCollision_Visible_Off = 86,
    eEventSceneBegin = 87,
    eEventSceneEnd = 88,
    eEventRoomBegin = 89,
    eEventRoomEnd = 90,
    eEventLobMasterShoot = 91,
    eEventLobMasterReset = 92,
    eEventFallToDeath = 93,
    eEventUIFocusOn_Select = 94,
    eEventUIFocusOff_Unselect = 95,
    eEventDispatcher_PadCfg_PresetA = 96,
    eEventDispatcher_PadCfg_PresetB = 97,
    eEventDispatcher_PadCfg_PresetC = 98,
    eEventDispatcher_PadCfg_PresetD = 99,
    eEventDispatcher_PadVibrateOn = 100,
    eEventDispatcher_PadVibrateOff = 101,
    eEventDispatcher_SoundMono = 102,
    eEventDispatcher_SoundStereo = 103,
    eEventDispatcher_SoundMasterIncrease = 104,
    eEventDispatcher_SoundMasterDecrease = 105,
    eEventDispatcher_SoundMusicIncrease = 106,
    eEventDispatcher_SoundMusicDecrease = 107,
    eEventDispatcher_SoundSFXIncrease = 108,
    eEventDispatcher_SoundSFXDecrease = 109,
    eEventDispatcher_IntroState_Sony = 110,
    eEventDispatcher_IntroState_Publisher = 111,
    eEventDispatcher_IntroState_Developer = 112,
    eEventDispatcher_IntroState_License = 113,
    eEventDispatcher_IntroState_Count = 114,
    eEventDispatcher_TitleState_Start = 115,
    eEventDispatcher_TitleState_Attract = 116,
    eEventDispatcher_TitleState_Count = 117,
    eEventDispatcher_LoadState_SelectMemCard = 118,
    eEventDispatcher_LoadState_SelectSlot = 119,
    eEventDispatcher_LoadState_Loading = 120,
    eEventDispatcher_LoadState_Count = 121,
    eEventDispatcher_OptionsState_Options = 122,
    eEventDispatcher_OptionsState_Count = 123,
    eEventDispatcher_SaveState_SelectMemCard = 124,
    eEventDispatcher_SaveState_SelectSlot = 125,
    eEventDispatcher_SaveState_Saving = 126,
    eEventDispatcher_SaveState_Count = 127,
    eEventDispatcher_PauseState_Pause = 128,
    eEventDispatcher_PauseState_Options = 129,
    eEventDispatcher_PauseState_Count = 130,
    eEventDispatcher_GameState_FirstTime = 131,
    eEventDispatcher_GameState_Play = 132,
    eEventDispatcher_GameState_LoseChance = 133,
    eEventDispatcher_GameState_GameOver = 134,
    eEventDispatcher_GameState_SceneSwitch = 135,
    eEventDispatcher_GameState_Dead = 136,
    eEventDispatcher_SetIntroState_Sony = 137,
    eEventDispatcher_SetIntroState_Publisher = 138,
    eEventDispatcher_SetIntroState_Developer = 139,
    eEventDispatcher_SetIntroState_License = 140,
    eEventDispatcher_SetIntroState_Count = 141,
    eEventDispatcher_SetTitleState_Start = 142,
    eEventDispatcher_SetTitleState_Attract = 143,
    eEventDispatcher_SetTitleState_Count = 144,
    eEventDispatcher_SetLoadState_SelectMemCard = 145,
    eEventDispatcher_SetLoadState_SelectSlot = 146,
    eEventDispatcher_SetLoadState_Loading = 147,
    eEventDispatcher_SetLoadState_Count = 148,
    eEventDispatcher_SetOptionsState_Options = 149,
    eEventDispatcher_SetOptionsState_Count = 150,
    eEventDispatcher_SetSaveState_SelectMemCard = 151,
    eEventDispatcher_SetSaveState_SelectSlot = 152,
    eEventDispatcher_SetSaveState_Saving = 153,
    eEventDispatcher_SetSaveState_Count = 154,
    eEventDispatcher_SetPauseState_Pause = 155,
    eEventDispatcher_SetPauseState_Options = 156,
    eEventDispatcher_SetPauseState_Count = 157,
    eEventDispatcher_SetGameState_FirstTime = 158,
    eEventDispatcher_SetGameState_Play = 159,
    eEventDispatcher_SetGameState_LoseChance = 160,
    eEventDispatcher_SetGameState_GameOver = 161,
    eEventDispatcher_SetGameState_SceneSwitch = 162,
    eEventDispatcher_SetGameState_Dead = 163,
    eEventDigup = 164,
    eEventDispatcher_GameState_Exit = 165,
    eEventDispatcher_SetGameState_Exit = 166,
    eEventLobMasterShootFromWidget = 167,
    eEventDispatcher_SLBack = 168,
    eEventDispatcher_SLCancel = 169,
    eEventDispatcher_SLRetry = 170,
    eEventDispatcher_SLSelectCard = 171,
    eEventDispatcher_SLSelectSlot = 172,
    eEventDispatcher_SLOkay = 173,
    eEventVilHurtBoss = 174,
    eEventAttack = 175,
    eEventAttackOn = 176,
    eEventAttackOff = 177,
    eEventDrop = 178,
    eEventVilReport_StartingIdle = 179,
    eEventVilReport_StartingSleep = 180,
    eEventVilReport_StartingGuard = 181,
    eEventVilReport_StartingPatrol = 182,
    eEventVilReport_StartingDazed = 183,
    eEventVilReport_StartingLook = 184,
    eEventVilReport_StartingListen = 185,
    eEventVilReport_StartingInvestigate = 186,
    eEventVilReport_StartingChase = 187,
    eEventVilReport_StartingAttack = 188,
    eEventVilReport_StartingRetreat = 189,
    eEventPreload = 190,
    eEventDone = 191,
    eEventArcto = 192,
    eEventDigupReaction = 193,
    eEventDispatcher_StoreCheckPoint = 194,
    eEventAnimPlay = 195,
    eEventAnimPlayLoop = 196,
    eEventAnimStop = 197,
    eEventAnimPause = 198,
    eEventAnimResume = 199,
    eEventAnimTogglePause = 200,
    eEventAnimPlayRandom = 201,
    eEventAnimPlayMaybe = 202,
    eEventSetSpeed = 203,
    eEventAccelerate = 204,
    eEventMoveToTarget = 205,
    eEventSwingerFollow = 206,
    eEventShaggyMount = 207,
    eEventShaggyWitchDrop = 208,
    eEventShaggySwap = 209,
    eEventShaggyState = 210,
    eEventShaggyAction = 211,
    eEventEnterEntity = 212,
    eEventExitEntity = 213,
    eEventEnterEntityFLAG = 214,
    eEventExitEntityFLAG = 215,
    eEventDrivenby = 216,
    eEventFollowTarget = 217,
    eEventFaceTarget = 218,
    eEventWatchTarget = 219,
    eEventShaggyCollideOnly = 220,
    eEventShaggy1_ThrowTarget = 221,
    eEventShaggy8_CallEnable = 222,
    eEventShaggy8_CallDisable = 223,
    eEventShaggy8_SetMagnet = 224,
    eEventShaggy8_ClearMagnet = 225,
    eEventStartMoving = 226,
    eEventStopMoving = 227,
    eEventSwoosh = 228,
    eEventShaggySetDown = 229,
    eEventShaggyGrabEnable = 230,
    eEventShaggyGrabDisable = 231,
    eEventShaggyGrabbed = 232,
    eEventShaggyThrown = 233,
    eEventVilDoAction = 234,
    eEventGangDoBossAction = 235,
    eEventVilFakeChaseOn = 236,
    eEventVilFakeChaseOff = 237,
    eEventBossMMPushButton = 238,
    eEventVilReport_DecayComplete = 239,
    eEventVilGuardWidget = 240,
    eEventTextureAnimateOn = 241,
    eEventTextureAnimateOff = 242,
    eEventTextureAnimateToggle = 243,
    eEventColorEffectOn = 244,
    eEventColorEffectOff = 245,
    eEventColorEffectToggle = 246,
    eEventSetTextureAnimGroup = 247,
    eEventSetTextureAnimSpeed = 248,
    eEventTextureAnimateStep = 249,
    eEventEmit = 250,
    eEventEmitted = 251,
    eEventTranslucentOn = 252,
    eEventTranslucentOff = 253,
    eEventTranslucentToggle = 254,
    eEventVilGangTalkOn = 255,
    eEventVilGangTalkOff = 256,
    eEventGivePowerUp = 257,
    eEventUnlockR001 = 258,
    eEventUnlockS001 = 259,
    eEventUnlockE001 = 260,
    eEventUnlockF001 = 261,
    eEventDisableGroupContents = 262,
    eEventShaggyPhysHack = 263,
    eEventOccludeOn = 264,
    eEventOccludeOff = 265,
    eEventWaveSetLinear = 266,
    eEventWaveSetRipple = 267,
    eEventSituationLaugh = 268,
    eEventSituationBossBattleGreenGhost = 269,
    eEventSituationBossBattleRedBeard = 270,
    eEventSituationBossBattleMasterMind = 271,
    eEventSituationBossBattleBlacknight = 272,
    eEventSituationPlayerScare = 273,
    eEventSituationPlayerSafe = 274,
    eEventSituationPlayerDanger = 275,
    eEventSituationPlayerChaseBegin = 276,
    eEventSituationPlayerChaseEnd = 277,
    eEventSituationPlayerSeeShaggy = 278,
    eEventSituationPlayerSeeFood = 279,
    eEventSituationPlayerSeeToken = 280,
    eEventSituationPlayerSeeScoobySnack = 281,
    eEventSituationPlayerSeePowerup = 282,
    eEventSituationPlayerSeeMonster = 283,
    eEventSituationPlayerSuccess = 284,
    eEventSituationPlayerFailure = 285,
    eEventDispatcher_ShowHud = 286,
    eEventDispatcher_HideHud = 287,
    eEventDispatcher_FadeOut = 288,
    eEventSetRain = 289,
    eEventSetSnow = 290,
    eEventShaggyMowerStopMode = 291,
    eEventScriptReset = 292,
    eEventWaitForInput = 293,
    eEventPlayMovie = 294,
    eEventDefeatedMM = 295,
    eEventDispatcher_SetGameState_GameStats = 296,
    eEventPlayMusic = 297,
    eEventForward = 298,
    eEventReverse = 299,
    eEventPlayerRumbleTest = 300,
    eEventPlayerRumbleLight = 301,
    eEventPlayerRumbleMedium = 302,
    eEventPlayerRumbleHeavy = 303,
    eEventDispatcherScreenAdjustON = 304,
    eEventDispatcherScreenAdjustOFF = 305,
    eEventSetSkyDome = 306,
    eEventConnectToChild = 307,
    eEventDuploWaveBegin = 308,
    eEventDuploWaveComplete = 309,
    eEventDuploNPCBorn = 310,
    eEventDuploNPCKilled = 311,
    eEventDuploExpiredMaxNPC = 312,
    eEventDuploPause = 313,
    eEventDuploResume = 314,
    eEventSetGoo = 315,
    eEventNPCScript_ScriptBegin = 316,
    eEventNPCScript_ScriptEnd = 317,
    eEventNPCScript_ScriptReady = 318,
    eEventNPCScript_Halt = 319,
    eEventNPCScript_SetPos = 320,
    eEventNPCScript_SetDir = 321,
    eEventNPCScript_LookNormal = 322,
    eEventNPCScript_LookAlert = 323,
    eEventNPCScript_FaceWidget = 324,
    eEventNPCScript_FaceWidgetDone = 325,
    eEventNPCScript_GotoWidget = 326,
    eEventNPCScript_GotoWidgetDone = 327,
    eEventNPCScript_AttackWidget = 328,
    eEventNPCScript_AttackWidgetDone = 329,
    eEventNPCScript_FollowWidget = 330,
    eEventNPCScript_PlayAnim = 331,
    eEventNPCScript_PlayAnimDone = 332,
    eEventNPCScript_LeadPlayer = 333,
    eEventSetText = 334,
    eEventStartConversation = 335,
    eEventEndConversation = 336,
    eEventSwitch = 337,
    eEventAddText = 338,
    eEventClearText = 339,
    eEventOpenTBox = 340,
    eEventCloseTBox = 341,
    eEventTalkBox_OnSignal0 = 342,
    eEventTalkBox_OnSignal1 = 343,
    eEventTalkBox_OnSignal2 = 344,
    eEventTalkBox_OnSignal3 = 345,
    eEventTalkBox_OnSignal4 = 346,
    eEventTalkBox_OnSignal5 = 347,
    eEventTalkBox_OnSignal6 = 348,
    eEventTalkBox_OnSignal7 = 349,
    eEventTalkBox_OnSignal8 = 350,
    eEventTalkBox_OnSignal9 = 351,
    eEventTalkBox_StopWait = 352,
    eEventTalkBox_OnStart = 353,
    eEventTalkBox_OnStop = 354,
    eEventHit_Melee = 355,
    eEventHit_BubbleBounce = 356,
    eEventHit_BubbleBash = 357,
    eEventHit_BubbleBowl = 358,
    eEventHit_PatrickSlam = 359,
    eEventHit_Throw = 360,
    eEventHit_PaddleLeft = 361,
    eEventHit_PaddleRight = 362,
    eEventTaskBox_Initiate = 363,
    eEventTaskBox_SetSuccess = 364,
    eEventTaskBox_SetFailure = 365,
    eEventTaskBox_OnAccept = 366,
    eEventTaskBox_OnDecline = 367,
    eEventTaskBox_OnComplete = 368,
    eEventGenerateBoulder = 369,
    eEventLaunchBoulderAtWidget = 370,
    eEventLaunchBoulderAtPoint = 371,
    eEventLaunchBoulderAtPlayer = 372,
    eEventDuploSuperDuperDone = 373,
    eEventDuploDuperIsDoner = 374,
    eEventBusStopSwitchChr = 375,
    eEventGroupUpdateTogether = 376,
    eEventSetUpdateDistance = 377,
    eEventTranslLocalX = 378,
    eEventTranslLocalY = 379,
    eEventTranslLocalZ = 380,
    eEventTranslWorldX = 381,
    eEventTranslWorldY = 382,
    eEventTranslWorldZ = 383,
    eEventRotLocalX = 384,
    eEventRotLocalY = 385,
    eEventRotLocalZ = 386,
    eEventRotWorldX = 387,
    eEventRotWorldY = 388,
    eEventRotWorldZ = 389,
    eEventTranslLocalXDone = 390,
    eEventTranslLocalYDone = 391,
    eEventTranslLocalZDone = 392,
    eEventTranslWorldXDone = 393,
    eEventTranslWorldYDone = 394,
    eEventTranslWorldZDone = 395,
    eEventRotLocalXDone = 396,
    eEventRotLocalYDone = 397,
    eEventRotLocalZDone = 398,
    eEventRotWorldXDone = 399,
    eEventRotWorldYDone = 400,
    eEventRotWorldZDone = 401,
    eEventCount1 = 402,
    eEventCount2 = 403,
    eEventCount3 = 404,
    eEventCount4 = 405,
    eEventCount5 = 406,
    eEventCount6 = 407,
    eEventCount7 = 408,
    eEventCount8 = 409,
    eEventCount9 = 410,
    eEventCount10 = 411,
    eEventCount11 = 412,
    eEventCount12 = 413,
    eEventCount13 = 414,
    eEventCount14 = 415,
    eEventCount15 = 416,
    eEventCount16 = 417,
    eEventCount17 = 418,
    eEventCount18 = 419,
    eEventCount19 = 420,
    eEventCount20 = 421,
    eEventSetState = 422,
    eEventEnterSpongeBob = 423,
    eEventEnterPatrick = 424,
    eEventEnterSandy = 425,
    eEventExitSpongeBob = 426,
    eEventExitPatrick = 427,
    eEventExitSandy = 428,
    eEventNPCSpecial_PlatformSnap = 429,
    eEventNPCSpecial_PlatformFall = 430,
    eEventGooSetWarb = 431,
    eEventGooSetFreezeDuration = 432,
    eEventGooMelt = 433,
    eEventSetStateRange = 434,
    eEventSetStateDelay = 435,
    eEventSetTransitionDelay = 436,
    eEventNPCFightOn = 437,
    eEventNPCFightOff = 438,
    eEventNPCSplineOKOn = 439,
    eEventNPCSplineOKOff = 440,
    eEventNPCKillQuietly = 441,
    eEventHitHead = 442,
    eEventHitUpperBody = 443,
    eEventHitLeftArm = 444,
    eEventHitRightArm = 445,
    eEventHitLeftLeg = 446,
    eEventHitRightLeg = 447,
    eEventHitLowerBody = 448,
    eEventGiveCurrLevelSocks = 449,
    eEventGiveCurrLevelPickup = 450,
    eEventSetCurrLevelSocks = 451,
    eEventSetCurrLevelPickup = 452,
    eEventTalkBox_OnYes = 453,
    eEventTalkBox_OnNo = 454,
    eEventHit_Cruise = 455,
    eEventDuploKillKids = 456,
    eEventTalkBox_OnSignal10 = 457,
    eEventTalkBox_OnSignal11 = 458,
    eEventTalkBox_OnSignal12 = 459,
    eEventTalkBox_OnSignal13 = 460,
    eEventTalkBox_OnSignal14 = 461,
    eEventTalkBox_OnSignal15 = 462,
    eEventTalkBox_OnSignal16 = 463,
    eEventTalkBox_OnSignal17 = 464,
    eEventTalkBox_OnSignal18 = 465,
    eEventTalkBox_OnSignal19 = 466,
    eEventSpongeballOn = 467,
    eEventSpongeballOff = 468,
    eEventLaunchShrapnel = 469,
    eEventNPCHPIncremented = 470,
    eEventNPCHPDecremented = 471,
    eEventNPCSetActiveOn = 472,
    eEventNPCSetActiveOff = 473,
    eEventPlrSwitchCharacter = 474,
    eEventLevelBegin = 475,
    eEventSceneReset = 476,
    eEventSceneEnter = 477,
    eEventSituationDestroyedTiki = 478,
    eEventSituationDestroyedRobot = 479,
    eEventSituationSeeWoodTiki = 480,
    eEventSituationSeeLoveyTiki = 481,
    eEventSituationSeeShhhTiki = 482,
    eEventSituationSeeThunderTiki = 483,
    eEventSituationSeeStoneTiki = 484,
    eEventSituationSeeFodder = 485,
    eEventSituationSeeHammer = 486,
    eEventSituationSeeTarTar = 487,
    eEventSituationSeeGLove = 488,
    eEventSituationSeeMonsoon = 489,
    eEventSituationSeeSleepyTime = 490,
    eEventSituationSeeArf = 491,
    eEventSituationSeeTubelets = 492,
    eEventSituationSeeSlick = 493,
    eEventSituationSeeKingJellyfish = 494,
    eEventSituationSeePrawn = 495,
    eEventSituationSeeDutchman = 496,
    eEventSituationSeeSandyBoss = 497,
    eEventSituationSeePatrickBoss = 498,
    eEventSituationSeeSpongeBobBoss = 499,
    eEventSituationSeeRobotPlankton = 500,
    eEventUIChangeTexture = 501,
    eEventNPCCheerForMe = 502,
    eEventFastVisible = 503,
    eEventFastInvisible = 504,
    eEventZipLineMount = 505,
    eEventZipLineDismount = 506,
    eEventTarget = 507,
    eEventFire = 508,
    eEventCameraFXShake = 509,
    eEventBulletTime = 510,
    eEventThrown = 511,
    eEventUpdateAnimMatrices = 512,
    eEventEnterCruise = 513,
    eEventExitCruise = 514,
    eEventCruiseFired = 515,
    eEventCruiseDied = 516,
    eEventCruiseAddLife = 517,
    eEventCruiseSetLife = 518,
    eEventCruiseResetLife = 519,
    eEventCameraCollideOff = 520,
    eEventCameraCollideOn = 521,
    eEventOnSliding = 522,
    eEventOffSliding = 523,
    eEventTimerSet = 524,
    eEventTimerAdd = 525,
    eEventNPCForceConverseStart = 526,
    eEventMakeASplash = 527,
    eEventCreditsStart = 528,
    eEventCreditsStop = 529,
    eEventCreditsEnded = 530,
    eEventBubbleWipe = 531,
    eEventSetLightKit = 532,
    eEventSetOpacity = 533,
    eEventTakeSocks = 534,
    eEventDispatcherAssert = 535,
    eEventBorn = 536,
    eEventPlatPause = 537,
    eEventPlatUnpause = 538,
    eEventStoreOptions = 539,
    eEventRestoreOptions = 540,
    eEventCount = 541,
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
enum en_NPC_MSG_DATA {
    NPC_MDAT_BLANK = 0,
    NPC_MDAT_SYSEVENT = 1,
    NPC_MDAT_BLAST = 2,
    NPC_MDAT_CHAT = 3,
    NPC_MDAT_SPAWN = 4,
    NPC_MDAT_TARGET = 5,
    NPC_MDAT_DAMAGE = 6,
    NPC_MDAT_STUN = 7,
    NPC_MDAT_SCRIPT = 8,
    NPC_MDAT_MOUNT = 9,
    NPC_MDAT_AREANOTIFY = 10,
    NPC_MDAT_NOMORE = 11,
    NPC_MDAT_FORCE = 2147483647,
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
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
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
enum en_npcvibe {
    NPC_VIBE_SOFT = 0,
    NPC_VIBE_NORM = 1,
    NPC_VIBE_HARD = 2,
    NPC_VIBE_BUILD_A = 3,
    NPC_VIBE_BUILD_B = 4,
    NPC_VIBE_BUILD_C = 5,
    NPC_VIBE_NOMORE = 6,
    NPC_VIBE_FORCE = 2147483647,
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
class NPCChatInfo {
    // total size: 0x10
public:
    class xVec3 pos_chat; // offset 0x0, size 0xC
    float tym_chat; // offset 0xC, size 0x4
};
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
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

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CF560 -> 0x002CF5C8
*/
// Range: 0x2CF560 -> 0x2CF5C8
void zNPCCommon_EjectPhlemOnPawz() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CF560 -> 0x2CF5C8
        class NPCWidget * talk_font; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CF5D0 -> 0x002CF7D4
*/
// Range: 0x2CF5D0 -> 0x2CF7D4
void NPCC_BuildStandardAnimTran(class xAnimTable * table /* r18 */, char * * namelist /* r17 */, signed int * ourAnims /* r16 */, signed int idx_dflt /* r22 */, float blend /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CF5D0 -> 0x2CF7D4
        class xAnimTransition * def; // r21
        char * * names; // r2
        signed int i; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CF7E0 -> 0x002CF8E8
*/
// Range: 0x2CF7E0 -> 0x2CF8E8
class xAnimTable * ZNPC_AnimTable_LassoGuide() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CF7E0 -> 0x2CF8E8
        class xAnimTable * table; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CF8F0 -> 0x002CF970
*/
// Range: 0x2CF8F0 -> 0x2CF970
class xAnimTable * ZNPC_AnimTable_Common() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CF8F0 -> 0x2CF970
        class xAnimTable * table; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CF970 -> 0x002CFAE8
*/
// Range: 0x2CF970 -> 0x2CFAE8
void AddScripting(class zNPCCommon * this /* r2 */, class xPsyche * psy /* r21 */, signed int (* eval_script)(class xGoal *, void *, enum en_trantype *, float, void *) /* r20 */, signed int (* eval_playanim)(class xGoal *, void *, enum en_trantype *, float, void *) /* r19 */, signed int (* eval_attack)(class xGoal *, void *, enum en_trantype *, float, void *) /* r18 */, signed int (* eval_move)(class xGoal *, void *, enum en_trantype *, float, void *) /* r17 */, signed int (* eval_follow)(class xGoal *, void *, enum en_trantype *, float, void *) /* r16 */, signed int (* eval_lead)(class xGoal *, void *, enum en_trantype *, float, void *) /* r22 */, signed int (* eval_wait)(class xGoal *, void *, enum en_trantype *, float, void *) /* r29+0x80 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CF970 -> 0x2CFAE8
        class xGoal * goal; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFAF0 -> 0x002CFC14
*/
// Range: 0x2CFAF0 -> 0x2CFC14
void AddBaseline(class xPsyche * psy /* r19 */, signed int (* eval_idle)(class xGoal *, void *, enum en_trantype *, float, void *) /* r21 */, signed int (* eval_patrol)(class xGoal *, void *, enum en_trantype *, float, void *) /* r18 */, signed int (* eval_wander)(class xGoal *, void *, enum en_trantype *, float, void *) /* r20 */, signed int (* eval_waiting)(class xGoal *, void *, enum en_trantype *, float, void *) /* r17 */, signed int (* eval_fidget)(class xGoal *, void *, enum en_trantype *, float, void *) /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFAF0 -> 0x2CFC14
        class xGoal * goal; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFC20 -> 0x002CFCA8
*/
// Range: 0x2CFC20 -> 0x2CFCA8
void LassoNotify(class zNPCCommon * this /* r2 */, enum en_LASSO_EVENT event /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFC20 -> 0x2CFCA8
        class zNPCLassoInfo * lass; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFCB0 -> 0x002CFCD0
*/
// Range: 0x2CFCB0 -> 0x2CFCD0
class zNPCLassoInfo * GimmeLassInfo(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFCB0 -> 0x2CFCD0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFCD0 -> 0x002CFD5C
*/
// Range: 0x2CFCD0 -> 0x2CFD5C
void LassoSyncAnims(class zNPCCommon * this /* r2 */, enum en_lassanim lassanim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFCD0 -> 0x2CFD5C
        class xAnimState * lass_ast; // r7
        class xModelInstance * lass_mdl; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFD60 -> 0x002CFEF8
*/
// Range: 0x2CFD60 -> 0x2CFEF8
signed int LassoGetAnims(class zNPCCommon * this /* r2 */, class xModelInstance * modgrab /* r20 */, class xModelInstance * modhold /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFD60 -> 0x2CFEF8
        class xAnimState * ast; // r5
        class xAnimState * ast_grab; // r18
        class xAnimState * ast_hold; // r17
        class zNPCLassoInfo * lass; // r16
        class xAnimPlay * play; // r21
        class xAnimTable * tab; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFF00 -> 0x002CFF94
*/
// Range: 0x2CFF00 -> 0x2CFF94
signed int LassoUseGuides(class zNPCCommon * this /* r2 */, signed int idx_grabmdl /* r2 */, signed int idx_holdmdl /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFF00 -> 0x2CFF94
        class xModelInstance * minst; // r10
        class xModelInstance * mod_grab; // r9
        class xModelInstance * mod_hold; // r8
        class zNPCLassoInfo * lass; // r7
        signed int midx; // r3
        signed int haveAnims; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CFFA0 -> 0x002D0090
*/
// Range: 0x2CFFA0 -> 0x2D0090
signed int LassoSetup(class zNPCCommon * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2CFFA0 -> 0x2D0090
        class zNPCLassoInfo * lass; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0090 -> 0x002D0188
*/
// Range: 0x2D0090 -> 0x2D0188
signed int SndQueUpdate(class zNPCCommon * this /* r20 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0090 -> 0x2D0188
        class NPCSndQueue * que; // r19
        class NPCSndProp * sprop; // r2
        signed int i; // r18
        signed int cnt; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0190 -> 0x002D01F4
*/
// Range: 0x2D0190 -> 0x2D01F4
void SndKillSounds(class zNPCCommon * this /* r2 */, signed int flg_chan /* r2 */, signed int all /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0190 -> 0x2D01F4
        signed int owner; // r17
        signed int i; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0200 -> 0x002D0228
*/
// Range: 0x2D0200 -> 0x2D0228
signed int SndChanIsBusy(class zNPCCommon * this /* r2 */, signed int flg_chan /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0200 -> 0x2D0228
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0230 -> 0x002D0284
*/
// Range: 0x2D0230 -> 0x2D0284
signed int SndIsAnyPlaying(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0230 -> 0x2D0284
        signed int yep; // r2
        signed int owner; // r17
        signed int i; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0290 -> 0x002D0590
*/
// Range: 0x2D0290 -> 0x2D0590
unsigned int SndStart(class zNPCCommon * this /* r21 */, unsigned int aid_toplay /* r20 */, class NPCSndProp * sprop /* r19 */, float radius /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0290 -> 0x2D0590
        float pvary; // r21
        unsigned int priority; // r18
        unsigned int owner; // r2
        unsigned int xsid; // r17
        float vol; // r20
        signed int flg_snd; // r16
        unsigned int xsndflags; // r2
        float pitchChoices[7]; // @ 0x004FE0E0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0590 -> 0x002D0628
*/
// Range: 0x2D0590 -> 0x2D0628
signed int SndPlayRandom(class zNPCCommon * this /* r19 */, enum en_NPC_SOUND sndtype /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0590 -> 0x2D0628
        unsigned int xsid; // r18
        class NPCConfig * cfg; // r17
        class NPCSndProp * sprop; // r16
        unsigned int aidToPlay; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0630 -> 0x002D06D0
*/
// Range: 0x2D0630 -> 0x2D06D0
signed int SndPlayFromSFX(class zNPCCommon * this /* r18 */, class xSFX * sfx /* r17 */, unsigned int * sid_played /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0630 -> 0x2D06D0
        unsigned int aidToPlay; // r2
        unsigned int xsid; // r2
        class NPCSndProp * sprop; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D06D0 -> 0x002D07B4
*/
// Range: 0x2D06D0 -> 0x2D07B4
signed int SndPlayFromAFX(class zNPCCommon * this /* r18 */, class zAnimFxSound * afxsnd /* r17 */, unsigned int * sid_played /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D06D0 -> 0x2D07B4
        enum en_NPC_SOUND sndtype; // r20
        float radius; // r20
        unsigned int aidToPlay; // r2
        unsigned int xsid; // r2
        class NPCSndProp * sprop; // r19
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D07C0 -> 0x002D08B8
*/
// Range: 0x2D07C0 -> 0x2D08B8
signed int SomethingWonderful(class zNPCCommon * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D07C0 -> 0x2D08B8
        signed int flg_wonder; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D08C0 -> 0x002D08F0
*/
// Range: 0x2D08C0 -> 0x2D08F0
void WonderOfTalking(class zNPCCommon * this /* r2 */, signed int inprogress /* r2 */, class xBase * owner /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D08C0 -> 0x2D08F0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D08F0 -> 0x002D08F8
*/
// Range: 0x2D08F0 -> 0x2D08F8
signed int NPCC_NPCIsConversing() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D08F0 -> 0x2D08F8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0900 -> 0x002D0938
*/
// Range: 0x2D0900 -> 0x2D0938
class xVec3 * MatPosSet(class zNPCCommon * this /* r2 */, class xVec3 * pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0900 -> 0x2D0938
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0940 -> 0x002D0A74
*/
// Range: 0x2D0940 -> 0x2D0A74
void Vibrate(enum en_npcvibe vibe /* r2 */, float duration /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0940 -> 0x2D0A74
        enum _tagRumbleType typ_rum; // r16
        float tym_rum; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0A80 -> 0x002D0B54
*/
// Range: 0x2D0A80 -> 0x2D0B54
void Vibrate(class zNPCCommon * this /* r2 */, float ds2_cur /* r29+0x10 */, float ds2_max /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0A80 -> 0x2D0B54
        float rat; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0B60 -> 0x002D0C34
*/
// Range: 0x2D0B60 -> 0x2D0C34
void zNPCSettings_MakeDummy() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0B60 -> 0x2D0C34
        class zNPCSettings dum; // @ 0x005CC260
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0C40 -> 0x002D0C54
*/
// Range: 0x2D0C40 -> 0x2D0C54
float AnimTimeCurrent(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0C40 -> 0x2D0C54
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0C60 -> 0x002D0CC8
*/
// Range: 0x2D0C60 -> 0x2D0CC8
float AnimTimeRemain(class zNPCCommon * this /* r2 */, class xAnimState * ast /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0C60 -> 0x2D0CC8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0CD0 -> 0x002D0D40
*/
// Range: 0x2D0CD0 -> 0x2D0D40
float AnimDuration(class zNPCCommon * this /* r2 */, class xAnimState * ast /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0CD0 -> 0x2D0D40
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0D40 -> 0x002D0DA0
*/
// Range: 0x2D0D40 -> 0x2D0DA0
unsigned int AnimCurStateID(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0D40 -> 0x2D0DA0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0DA0 -> 0x002D0DE8
*/
// Range: 0x2D0DA0 -> 0x2D0DE8
class xAnimState * AnimCurState(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0DA0 -> 0x2D0DE8
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0DF0 -> 0x002D0E38
*/
// Range: 0x2D0DF0 -> 0x2D0E38
class xAnimSingle * AnimCurSingle(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0DF0 -> 0x2D0E38
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0E40 -> 0x002D0E50
*/
// Range: 0x2D0E40 -> 0x2D0E50
class xAnimState * AnimFindState(class zNPCCommon * this /* r2 */, unsigned int animID /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0E40 -> 0x2D0E50
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0E50 -> 0x002D0EA4
*/
// Range: 0x2D0E50 -> 0x2D0EA4
void AnimSetState(class zNPCCommon * this /* r16 */, unsigned int animID /* r2 */, float time /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0E50 -> 0x2D0EA4
        class xAnimState * state; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0EB0 -> 0x002D0FB8
*/
// Range: 0x2D0EB0 -> 0x2D0FB8
signed int AnimStart(class zNPCCommon * this /* r8 */, unsigned int animID /* r2 */, signed int forceRestart /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0EB0 -> 0x2D0FB8
        class xAnimTransition * da_tran; // r16
        signed int dumptable; // @ 0x0050FE94
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0FC0 -> 0x002D0FF0
*/
// Range: 0x2D0FC0 -> 0x2D0FF0
void ModelScaleSet(class zNPCCommon * this /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0FC0 -> 0x2D0FF0
        class xModelInstance * minst; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0FF0 -> 0x002D1040
*/
// Range: 0x2D0FF0 -> 0x2D1040
class xModelInstance * ModelAtomicFind(class zNPCCommon * this /* r2 */, signed int index /* r2 */, signed int idx_prev /* r2 */, class xModelInstance * mdl_prev /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D0FF0 -> 0x2D1040
        class xModelInstance * da_atomic; // r2
        class xModelInstance * minst; // r2
        signed int midx; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1040 -> 0x002D10A4
*/
// Range: 0x2D1040 -> 0x2D10A4
class xModelInstance * ModelAtomicShow(class zNPCCommon * this /* r2 */, signed int index /* r2 */, class xModelInstance * mdl /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D1040 -> 0x2D10A4
        class xModelInstance * minst; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D10B0 -> 0x002D1104
*/
// Range: 0x2D10B0 -> 0x2D1104
class xModelInstance * ModelAtomicHide(class zNPCCommon * this /* r2 */, signed int index /* r2 */, class xModelInstance * mdl /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D10B0 -> 0x2D1104
        class xModelInstance * minst; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1110 -> 0x002D1354
*/
// Range: 0x2D1110 -> 0x2D1354
signed int HaveLOSToPos(class zNPCCommon * this /* r21 */, class xVec3 * pos /* r20 */, float dist /* r20 */, class xScene * xscn /* r19 */, class xBase * tgt /* r18 */, class xCollis * colCallers /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D1110 -> 0x2D1354
        signed int result; // r2
        class xRay3 ray; // r29+0x90
        class xVec3 mypos; // r29+0xC0
        class xCollis * colrec; // r17
        class xCollis localCollis; // @ 0x004DEE50
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1360 -> 0x002D14F8
*/
// Range: 0x2D1360 -> 0x2D14F8
signed int MvptCycle(class zNPCCommon * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D1360 -> 0x2D14F8
        class zMovePoint * nav_tmp; // r29+0x2C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1500 -> 0x002D156C
*/
// Range: 0x2D1500 -> 0x2D156C
void MvptReset(class zNPCCommon * this /* r16 */, class zMovePoint * nav_goto /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D1500 -> 0x2D156C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1570 -> 0x002D15A0
*/
// Range: 0x2D1570 -> 0x2D15A0
class zMovePoint * FirstAssigned(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D1570 -> 0x2D15A0
        class zMovePoint * nav_first; // r29+0x1C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D15A0 -> 0x002D17F0
*/
// Range: 0x2D15A0 -> 0x2D17F0
signed int GetParmDefault(enum en_npcparm pid /* r2 */, void * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D15A0 -> 0x2D17F0
        signed int result; // r2
        signed int * ivp; // r2
        float * fvp; // r2
        float * fvlist; // r2
        class xVec3 * vec; // r2
        class zMovePoint * * mvpt; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D17F0 -> 0x002D19CC
*/
// Range: 0x2D17F0 -> 0x2D19CC
void GetParm(class zNPCCommon * this /* r19 */, enum en_npcparm pid /* r18 */, void * val /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D17F0 -> 0x2D19CC
        char * * names; // r16
        class xModelAssetParam * pmdata; // r21
        unsigned int pmsize; // r20
        class xVec3 vec_tmp; // r29+0x70
        float fv; // r29+0x80
        signed int iv; // r2
        class zMovePoint * mvpt; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D19D0 -> 0x002D19E0
*/
// Range: 0x2D19D0 -> 0x2D19E0
void GetParm(class zNPCCommon * this /* r2 */, enum en_npcparm pid /* r2 */, class zMovePoint * * val /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D19D0 -> 0x2D19E0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D19E0 -> 0x002D1DE4
*/
// Range: 0x2D19E0 -> 0x2D1DE4
void ISeePlayer(class zNPCCommon * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D19E0 -> 0x2D1DE4
        enum en_xEventTags ven; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D1DF0 -> 0x002D2050
*/
// Range: 0x2D1DF0 -> 0x2D2050
void GiveReward(class zNPCCommon * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D1DF0 -> 0x2D2050
        signed int i; // r8
        unsigned int s; // r2
        class NPCConfig * cfg; // r16
        unsigned int shinies[5]; // r29+0x40
        signed int esteem; // r9
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2050 -> 0x002D2178
*/
// Range: 0x2D2050 -> 0x2D2178
signed int IsAttackFrame(class zNPCCommon * this /* r2 */, float tym_anim /* r29 */, signed int series /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D2050 -> 0x2D2178
        signed int result; // r2
        class NPCConfig * cfg; // r6
        float tym; // r29
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2180 -> 0x002D21DC
*/
// Range: 0x2D2180 -> 0x2D21DC
signed int GetVertPos(class zNPCCommon * this /* r2 */, enum en_mdlvert vid /* r2 */, class xVec3 * pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D2180 -> 0x2D21DC
        class NPCConfig * cfg; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D21E0 -> 0x002D23DC
*/
// Range: 0x2D21E0 -> 0x2D23DC
void TagVerts(class zNPCCommon * this /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D21E0 -> 0x2D23DC
        class NPCConfig * cfg; // r20
        signed int i; // r19
        class xVec3 tmp_pos; // r29+0xB0
        float vertinfo[4]; // r29+0xA0
        class xModelInstance * mdl; // r3
        signed int idx_atmoic; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D23E0 -> 0x002D241C
*/
// Range: 0x2D23E0 -> 0x2D241C
void SelfDestroy(class zNPCCommon * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D23E0 -> 0x2D241C
        class xBehaveMgr * bmgr; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2420 -> 0x002D2718
*/
// Range: 0x2D2420 -> 0x2D2718
void CollideReview(class zNPCCommon * this /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D2420 -> 0x2D2718
        class xEntCollis * npccol; // r19
        class xCollis * colrec; // r17
        signed int i; // r6
        signed int hitthings; // r18
        class xEnt * flent; // r16
        class xBase * base; // r2
        signed int cf; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2720 -> 0x002D27AC
*/
// Range: 0x2D2720 -> 0x2D27AC
void ParseProps(class zNPCCommon * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D2720 -> 0x2D27AC
        signed int i; // r16
        enum en_npcparm pid; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D27B0 -> 0x002D2E58
*/
// Range: 0x2D27B0 -> 0x2D2E58
void ParseINI(class zNPCCommon * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D27B0 -> 0x2D2E58
        class NPCConfig * cfg; // r17
        signed int i; // r16
        enum en_npcparm pid; // r2
        float fv; // r29+0x4C
        float fv; // r29+0x48
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2E60 -> 0x002D2F18
*/
// Range: 0x2D2E60 -> 0x2D2F18
void ParseLinks(class zNPCCommon * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D2E60 -> 0x2D2F18
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2F20 -> 0x002D3074
*/
// Range: 0x2D2F20 -> 0x2D3074
float TurnToFace(class zNPCCommon * this /* r16 */, float dt /* r29+0x30 */, class xVec3 * dir_want /* r2 */, float useTurnRate /* r29+0x30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D2F20 -> 0x2D3074
        float ang_caller; // r23
        float ang_wouldbe; // r3
        float rot_lim; // r22
        float ang_true; // r21
        float ang_past; // r20
        float ang_diff; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3080 -> 0x002D31F4
*/
// Range: 0x2D3080 -> 0x2D31F4
float ThrottleApply(class zNPCCommon * this /* r2 */, float dt /* r29+0x40 */, class xVec3 * dir /* r2 */, signed int force3D /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D3080 -> 0x2D31F4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3200 -> 0x002D3288
*/
// Range: 0x2D3200 -> 0x2D3288
float ThrottleAccel(class zNPCCommon * this /* r2 */, float dt /* r29 */, signed int speedup /* r2 */, float pct_max /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D3200 -> 0x2D3288
        class NPCConfig * cfg; // r2
        float acc; // r1
        float spd_top; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3290 -> 0x002D3398
*/
// Range: 0x2D3290 -> 0x2D3398
float ThrottleAdjust(class zNPCCommon * this /* r2 */, float dt /* r29 */, float spd_want /* r29 */, float accel /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D3290 -> 0x2D3398
        class NPCConfig * cfg; // r3
        float acc; // r2
        signed int speedup; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D33A0 -> 0x002D3460
*/
// Range: 0x2D33A0 -> 0x2D3460
void VelStop(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D33A0 -> 0x2D3460
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3460 -> 0x002D36A0
*/
// Range: 0x2D3460 -> 0x2D36A0
void ConvertHitEvent(class zNPCCommon * this /* r17 */, class xBase * from /* r16 */, float * toParam /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D3460 -> 0x2D36A0
        class xVec3 pos_cruiser; // r29+0x30
        class xVec3 * vec_hit; // r2
        float mag; // r2
        enum en_NPC_DAMAGE_TYPE what; // r2
        unsigned int mvinf; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D36A0 -> 0x002D4290
*/
// Range: 0x2D36A0 -> 0x2D4290
signed int SysEvent(class zNPCCommon * this /* r21 */, class xBase * from /* r20 */, class xBase * to /* r19 */, unsigned int toEvent /* r18 */, float * toParam /* r17 */, class xBase * toParamWidget /* r16 */, signed int * handled /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D36A0 -> 0x2D4290
        signed int doOtherEvents; // r23
        class zNPCCommon * npc; // r2
        class xVec3 pos; // r29+0xB0
        class xVec3 dir; // r29+0xA0
        class xPsyche * psy; // r2
        class NPCSysEvent * se; // r4
        class FloatAndVoid dist; // r29+0xBC
        class zShrapnelAsset * shrap; // r2
        class xVec3 currVel; // r29+0x90
        class NPCSysEvent * se; // r4
        class NPCSysEvent * se; // r4
        class NPCSysEvent * se; // r4
        class NPCSysEvent * se; // r4
        class NPCSysEvent * se; // r4
        class NPCMsg npcmsg; // @ 0x005CC210
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4290 -> 0x002D4318
*/
// Range: 0x2D4290 -> 0x2D4318
void NewTime(class zNPCCommon * this /* r17 */, class xScene * xscn /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4290 -> 0x2D4318
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4320 -> 0x002D43F8
*/
// Range: 0x2D4320 -> 0x2D43F8
float BoundAsRadius(class zNPCCommon * this /* r2 */, signed int useCfg /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4320 -> 0x2D43F8
        float rad; // r29+0x10
        class NPCConfig * cfg; // r4
        class xVec3 dim; // r29
        class xBBox * box; // r2
        class xVec3 * le; // r2
        class xVec3 * ue; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4400 -> 0x002D46A8
*/
// Range: 0x2D4400 -> 0x2D46A8
void BUpdate(class zNPCCommon * this /* r16 */, class xVec3 * pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4400 -> 0x2D46A8
        class NPCConfig * cfg; // r12
        class xBBox * box; // r2
        class xVec3 half; // r29+0xB0
        class xSphere * sph; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D46B0 -> 0x002D4704
*/
// Range: 0x2D46B0 -> 0x2D4704
void Process(class zNPCCommon * this /* r2 */, class xScene * xscn /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D46B0 -> 0x2D4704
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4710 -> 0x002D47D0
*/
// Range: 0x2D4710 -> 0x2D47D0
void Move(class zNPCCommon * this /* r16 */, class xScene * xscn /* r2 */, float dt /* r29+0x40 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4710 -> 0x2D47D0
        signed int backit; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D47D0 -> 0x002D4ABC
*/
// Range: 0x2D47D0 -> 0x2D4ABC
signed int NPCMessage(class zNPCCommon * this /* r18 */, class NPCMsg * mail /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D47D0 -> 0x2D4ABC
        signed int handled; // r17
        class xPsyche * psy; // r16
        class zMovePoint * mvpt; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4AC0 -> 0x002D4BDC
*/
// Range: 0x2D4AC0 -> 0x2D4BDC
signed int Respawn(class zNPCCommon * this /* r19 */, class xVec3 * pos /* r18 */, class zMovePoint * mvptFirst /* r17 */, class zMovePoint * mvptSpawnRef /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4AC0 -> 0x2D4BDC
        class NPCMsg msg; // @ 0x005CC1C0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4BE0 -> 0x002D4F08
*/
// Range: 0x2D4BE0 -> 0x2D4F08
void Damage(class zNPCCommon * this /* r20 */, enum en_NPC_DAMAGE_TYPE damtype /* r19 */, class xBase * who /* r18 */, class xVec3 * vec_hit /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4BE0 -> 0x2D4F08
        class NPCDamageInfo * dmg; // r16
        class NPCMsg msg; // @ 0x005CC170
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4F10 -> 0x002D4F20
*/
// Range: 0x2D4F10 -> 0x2D4F20
void Destroy(class zNPCCommon * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4F10 -> 0x2D4F20
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D4F20 -> 0x002D5104
*/
// Range: 0x2D4F20 -> 0x2D5104
void Reset(class zNPCCommon * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D4F20 -> 0x2D5104
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5150 -> 0x002D5590
*/
// Range: 0x2D5150 -> 0x2D5590
void Setup(class zNPCCommon * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5150 -> 0x2D5590
        signed int wason; // r17
        class xPsyche * psy; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5590 -> 0x002D5A34
*/
// Range: 0x2D5590 -> 0x2D5A34
void InitBounds(class zNPCCommon * this /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5590 -> 0x2D5A34
        class NPCConfig * cfg; // r18
        class xVec3 half; // r29+0x50
        class xSphere * sph; // r17
        class xBBox * box; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5A40 -> 0x002D5BD8
*/
// Range: 0x2D5A40 -> 0x2D5BD8
void Init(class zNPCCommon * this /* r16 */, class xEntAsset * entass /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5A40 -> 0x2D5BD8
        class xLinkAsset * npclinx; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5BE0 -> 0x002D5C50
*/
// Range: 0x2D5BE0 -> 0x2D5C50
void zNPCCommon_Timestep(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5BE0 -> 0x2D5C50
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5C50 -> 0x002D5C58
*/
// Range: 0x2D5C50 -> 0x2D5C58
void zNPCCommon_ScenePostInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5C50 -> 0x2D5C58
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5C60 -> 0x002D5C8C
*/
// Range: 0x2D5C60 -> 0x2D5C8C
void zNPCCommon_SceneReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5C60 -> 0x2D5C8C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5C90 -> 0x002D5C98
*/
// Range: 0x2D5C90 -> 0x2D5C98
void zNPCCommon_SceneFinish() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5C90 -> 0x2D5C98
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5CA0 -> 0x002D5CE0
*/
// Range: 0x2D5CA0 -> 0x2D5CE0
void zNPCCommon_ScenePrepare() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5CA0 -> 0x2D5CE0
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5CE0 -> 0x002D5D0C
*/
// Range: 0x2D5CE0 -> 0x2D5D0C
void ZNPC_Common_Shutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5CE0 -> 0x2D5D0C
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5D10 -> 0x002D5D90
*/
// Range: 0x2D5D10 -> 0x2D5D90
void ZNPC_Common_Startup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5D10 -> 0x2D5D90
        signed int i; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5D90 -> 0x002D5DB4
*/
// Range: 0x2D5D90 -> 0x2D5DB4
void ZNPC_Destroy_Common(class xFactoryInst * inst /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5D90 -> 0x2D5DB4
    }
}

/*
    Compile unit: C:\SB\Game\zNPCTypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D5DC0 -> 0x002D5E50
*/
// Range: 0x2D5DC0 -> 0x2D5E50
class xFactoryInst * ZNPC_Create_Common(signed int who /* r16 */, class RyzMemGrow * grow /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2D5DC0 -> 0x2D5E50
        class zNPCCommon * com; // r2
    }
}

