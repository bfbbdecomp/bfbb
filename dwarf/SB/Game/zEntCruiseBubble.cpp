/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x4FBD10
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class tweak_group normal_tweak; // size: 0x1B8, address: 0x5CA630
static class tweak_group cheat_tweak; // size: 0x1B8, address: 0x5CA7F0
static class tweak_group * current_tweak; // size: 0x4, address: 0x50EF3C
static class xBase base; // size: 0x10, address: 0x4DCE60
static char * start_anim_states[37]; // size: 0x94, address: 0x4DCE70
static class /* @class */ {
    // total size: 0x1A0
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state[3]; // offset 0x4, size 0xC
    class state_type * states[12]; // offset 0x10, size 0x30
    class xVec2 last_sp; // offset 0x40, size 0x8
    class xVec2 sp; // offset 0x48, size 0x8
    class xVec3 hit_loc; // offset 0x50, size 0xC
    class xVec3 hit_norm; // offset 0x5C, size 0xC
    class xModelInstance * missle_model; // offset 0x68, size 0x4
    class xEnt * hits[32]; // offset 0x6C, size 0x80
    signed int hits_size; // offset 0xEC, size 0x4
    unsigned int player_health; // offset 0xF0, size 0x4
    class xVec3 player_motion; // offset 0xF4, size 0xC
    float fov_default; // offset 0x100, size 0x4
    class zShrapnelAsset * droplet_shrapnel; // offset 0x104, size 0x4
    float dialog_freq; // offset 0x108, size 0x4
    class /* @class */ {
        // total size: 0x60
    public:
        float samples; // offset 0x0, size 0x4
        float bubbles; // offset 0x4, size 0x4
        class xMat4x3 mat; // offset 0x10, size 0x40
        class xQuat dir; // offset 0x50, size 0x10
    } trail; // offset 0x110, size 0x60
    class /* @class */ {
        // total size: 0x14
    public:
        class /* @class */ {
            // total size: 0xC
        public:
            class xAnimState * aim; // offset 0x0, size 0x4
            class xAnimState * fire; // offset 0x4, size 0x4
            class xAnimState * idle; // offset 0x8, size 0x4
        } player; // offset 0x0, size 0xC
        class /* @class */ {
            // total size: 0x8
        public:
            class xAnimState * fire; // offset 0x0, size 0x4
            class xAnimState * fly; // offset 0x4, size 0x4
        } missle; // offset 0xC, size 0x8
    } astate; // offset 0x170, size 0x14
    class /* @class */ {
        // total size: 0x14
    public:
        class /* @class */ {
            // total size: 0x10
        public:
            class xAnimTransition * aim; // offset 0x0, size 0x4
            class xAnimTransition * fire; // offset 0x4, size 0x4
            class xAnimTransition * idle; // offset 0x8, size 0x4
            class xAnimTransition * end; // offset 0xC, size 0x4
        } player; // offset 0x0, size 0x10
        class /* @class */ {
            // total size: 0x4
        public:
            class xAnimTransition * fly; // offset 0x0, size 0x4
        } missle; // offset 0x10, size 0x4
    } atran; // offset 0x184, size 0x14
} shared; // size: 0x1A0, address: 0x4DCF10
static class xMat4x3 start_cam_mat; // size: 0x40, address: 0x5CA9B0
static class fixed_queue missle_record; // size: 0x808, address: 0x5CA9F0
static class xFXRibbon wake_ribbon[2]; // size: 0x280, address: 0x5CB200
static class xDecalEmitter explode_decal; // size: 0x68, address: 0x5CB480
static class curve_node wake_ribbon_curve[2]; // size: 0x18, address: 0x4FBD20
static class curve_node cheat_wake_ribbon_curve[2]; // size: 0x18, address: 0x4FBD40
static class curve_node explode_curve[3]; // size: 0x24, address: 0x4FBD60
static class curve_node cheat_explode_curve[3]; // size: 0x24, address: 0x4FBD90
static class sound_config sounds[4]; // size: 0xA0, address: 0x4DD0B0
static class quadrant_set qzone; // size: 0x14, address: 0x5CB4F0
static class /* @class */ {
    // total size: 0x690
public:
    unsigned char hiding; // offset 0x0, size 0x1
    float alpha; // offset 0x4, size 0x4
    float alpha_vel; // offset 0x8, size 0x4
    float glow; // offset 0xC, size 0x4
    float glow_vel; // offset 0x10, size 0x4
    class /* @class */ {
        // total size: 0x10
    public:
        class xModelInstance * reticle; // offset 0x0, size 0x4
        class xModelInstance * target; // offset 0x4, size 0x4
        class xModelInstance * swirl; // offset 0x8, size 0x4
        class xModelInstance * wind; // offset 0xC, size 0x4
    } model; // offset 0x14, size 0x10
    class hud_gizmo gizmo[33]; // offset 0x24, size 0x630
    unsigned int gizmos_used; // offset 0x654, size 0x4
    class uv_animated_model uv_swirl; // offset 0x658, size 0x1C
    class uv_animated_model uv_wind; // offset 0x674, size 0x1C
} hud; // size: 0x690, address: 0x5CB890
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *); // size: 0x0, address: 0x213A90
unsigned int check_anim_aim(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x2A4020
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
class RpAtomic * AtomicDefaultRenderCallBack(class RpAtomic *); // size: 0x0, address: 0x21F4C0
class RpAtomic * custom_bubble_render(class RpAtomic *); // size: 0x0, address: 0x2A6BE0
class iColor_tag g_WHITE; // size: 0x4, address: 0x4F80A0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
struct /* @anon0 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restore; // size: 0x1C, address: 0x508E60
struct /* @anon5 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_type; // size: 0x1C, address: 0x0
struct /* @anon6 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_survey; // size: 0x1C, address: 0x508E80
struct /* @anon1 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach; // size: 0x1C, address: 0x508EA0
struct /* @anon9 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seize; // size: 0x1C, address: 0x508EC0
struct /* @anon10 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aim; // size: 0x1C, address: 0x508EE0
struct /* @anon3 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode; // size: 0x1C, address: 0x508F00
struct /* @anon7 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_fly; // size: 0x1C, address: 0x508F20
struct /* @anon2 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appear; // size: 0x1C, address: 0x508F40
struct /* @anon4 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_wait; // size: 0x1C, address: 0x508F60
struct /* @anon8 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fire; // size: 0x1C, address: 0x508F80
struct /* @anon11 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aim; // size: 0x1C, address: 0x508FA0
struct /* @anon12 */ {
    // total size: 0x1C
} __vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_halt; // size: 0x1C, address: 0x508FC0
class RpAtomic * (* gAtomicRenderCallBack)(class RpAtomic *); // size: 0x4, address: 0x50F9BC
unsigned int gFXSurfaceFlags; // size: 0x4, address: 0x50F4D8
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x4F9980
class xGrid npcs_grid; // size: 0x34, address: 0x5CEC50
class xGrid colls_oso_grid; // size: 0x34, address: 0x5CEC10
class xGrid colls_grid; // size: 0x34, address: 0x5CEBD0
unsigned char hazard_check(class NPCHazard &, void *); // size: 0x0, address: 0x2A8740
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
void SweptSphereHitsCameraEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x1C4520
void cb_droplet(class zFrag *, class zFragAsset *); // size: 0x0, address: 0x2A9C30
unsigned char hazard_check(class NPCHazard &, void *); // size: 0x0, address: 0x2AA3B0
unsigned char hazard_check(class NPCHazard &, void *); // size: 0x0, address: 0x2AB420
signed int gGridIterActive; // size: 0x4, address: 0x50FFC8
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class zEntHangable {
    // total size: 0x0
};
class fixed_queue {
    // total size: 0x808
public:
    unsigned int _first; // offset 0x0, size 0x4
    unsigned int _last; // offset 0x4, size 0x4
    class missle_record_data _buffer[128]; // offset 0x8, size 0x800
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
class /* @class */ {
    // total size: 0x1C
public:
    class RwTexture * asset; // offset 0x0, size 0x4
    unsigned int units; // offset 0x4, size 0x4
    class xVec2 size; // offset 0x8, size 0x8
    class xVec2 isize; // offset 0x10, size 0x8
    signed int prev; // offset 0x18, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    float halt_time; // offset 0x0, size 0x4
    class /* @class */ {
        // total size: 0x8
    public:
        float turn_speed; // offset 0x0, size 0x4
        float anim_delta; // offset 0x4, size 0x4
    } aim; // offset 0x4, size 0x8
    class /* @class */ {
        // total size: 0x4
    public:
        float delay_wand; // offset 0x0, size 0x4
    } fire; // offset 0xC, size 0x4
};
class zShrapnelAsset {
    // total size: 0xC
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
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
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
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
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
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
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
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
class state_player_fire : public state_type {
    // total size: 0xC
public:
    unsigned char wand_shown; // offset 0x8, size 0x1
};
class missle_record_data {
    // total size: 0x10
public:
    class xVec3 loc; // offset 0x0, size 0xC
    float roll; // offset 0xC, size 0x4
};
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
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
class xModelAssetParam {
    // total size: 0x0
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
class iterator {
    // total size: 0x8
public:
    unsigned int _it; // offset 0x0, size 0x4
    class fixed_queue * _owner; // offset 0x4, size 0x4
};
class xPlatformFMData {
    // total size: 0x4
public:
    signed int nothingyet; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
class hud_gizmo {
    // total size: 0x30
public:
    signed int flags; // offset 0x0, size 0x4
    class basic_rect bound; // offset 0x4, size 0x10
    float alpha; // offset 0x14, size 0x4
    float alpha_vel; // offset 0x18, size 0x4
    float glow; // offset 0x1C, size 0x4
    float glow_vel; // offset 0x20, size 0x4
    float opacity; // offset 0x24, size 0x4
    class xVec3 * target; // offset 0x28, size 0x4
    class xModelInstance * model; // offset 0x2C, size 0x4
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
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
class state_camera_aim : public state_type {
    // total size: 0x50
public:
    float phi; // offset 0x8, size 0x4
    float phi_vel; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float height_vel; // offset 0x14, size 0x4
    float dist; // offset 0x18, size 0x4
    float dist_vel; // offset 0x1C, size 0x4
    class xQuat facing; // offset 0x20, size 0x10
    class xQuat target; // offset 0x30, size 0x10
    float control_delay; // offset 0x40, size 0x4
    float seize_delay; // offset 0x44, size 0x4
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
class HAZTypical {
    // total size: 0x3C
public:
    class xMat3x3 mat_rotDelta; // offset 0x0, size 0x30
    float rad_min; // offset 0x30, size 0x4
    float rad_max; // offset 0x34, size 0x4
    float rad_cur; // offset 0x38, size 0x4
};
struct /* @anon0 */ {
    // total size: 0x1C
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
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
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
class xPlatformFallingData {
    // total size: 0x8
public:
    float speed; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
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
    // total size: 0x8
public:
    float turn_speed; // offset 0x0, size 0x4
    float anim_delta; // offset 0x4, size 0x4
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
class state_player_halt : public state_type {
    // total size: 0x1C
public:
    unsigned char first_update; // offset 0x8, size 0x1
    float time; // offset 0xC, size 0x4
    class xVec3 last_motion; // offset 0x10, size 0xC
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
class xPlatformAsset {
    // total size: 0x3C
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xPlatformERData er; // offset 0x4, size 0x4
        class xPlatformOrbitData orb; // offset 0x4, size 0x4
        class xPlatformSplineData spl; // offset 0x4, size 0x4
        class xPlatformMPData mp; // offset 0x4, size 0x4
        class xPlatformMechData mech; // offset 0x4, size 0x4
        class xPlatformPenData pen; // offset 0x4, size 0x4
        class xPlatformConvBeltData cb; // offset 0x4, size 0x4
        class xPlatformFallingData fall; // offset 0x4, size 0x8
        class xPlatformFRData fr; // offset 0x4, size 0x10
        class xPlatformBreakawayData ba; // offset 0x4, size 0x10
        class xPlatformSpringboardData sb; // offset 0x4, size 0x2C
        class xPlatformTeeterData teet; // offset 0x4, size 0xC
        class xPlatformPaddleData paddle; // offset 0x4, size 0x38
        class xPlatformFMData fm; // offset 0x4, size 0x4
    };
};
class /* @class */ {
    // total size: 0xC
public:
    float size; // offset 0x0, size 0x4
    float du; // offset 0x4, size 0x4
    float dv; // offset 0x8, size 0x4
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
class curve_node {
    // total size: 0xC
public:
    float time; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
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
class curve_node {
    // total size: 0xC
public:
    float time; // offset 0x0, size 0x4
    class iColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
};
class basic_rect {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
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
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    class /* @class */ {
        // total size: 0xC
    public:
        class xAnimState * aim; // offset 0x0, size 0x4
        class xAnimState * fire; // offset 0x4, size 0x4
        class xAnimState * idle; // offset 0x8, size 0x4
    } player; // offset 0x0, size 0xC
    class /* @class */ {
        // total size: 0x8
    public:
        class xAnimState * fire; // offset 0x0, size 0x4
        class xAnimState * fly; // offset 0x4, size 0x4
    } missle; // offset 0xC, size 0x8
};
struct /* @anon1 */ {
    // total size: 0x1C
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
class _tagLightningRot {
    // total size: 0x48
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class xCurveAsset {
    // total size: 0x0
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
enum en_hazcol {
    HAZ_COLTYP_STAT = 0,
    HAZ_COLTYP_DYN = 1,
    HAZ_COLTYP_NPC = 2,
    HAZ_COLTYP_NOMORE = 3,
    HAZ_COLTYP_FORCE = 2147483647,
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
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
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
class /* @class */ {
    // total size: 0x10
public:
    unsigned char pad[16]; // offset 0x0, size 0x10
};
class /* @class */ {
    // total size: 0xC
public:
    class xAnimState * aim; // offset 0x0, size 0x4
    class xAnimState * fire; // offset 0x4, size 0x4
    class xAnimState * idle; // offset 0x8, size 0x4
};
class rxReq {
    // total size: 0x0
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
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
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
class state_missle_explode : public state_type {
    // total size: 0xC
public:
    float hit_time; // offset 0x8, size 0x4
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
class state_camera_attach : public state_type {
    // total size: 0xC
public:
    float reticle_delay; // offset 0x8, size 0x4
};
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
class state_missle_fly : public state_type {
    // total size: 0x3C
public:
    float life; // offset 0x8, size 0x4
    float vel; // offset 0xC, size 0x4
    class xVec3 rot; // offset 0x10, size 0xC
    class xVec3 rot_vel; // offset 0x1C, size 0xC
    float engine_pitch; // offset 0x28, size 0x4
    class xVec3 last_loc; // offset 0x2C, size 0xC
    float flash_time; // offset 0x38, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    float dist_min; // offset 0x0, size 0x4
    float dist_max; // offset 0x4, size 0x4
    float ang_show; // offset 0x8, size 0x4
    float ang_hide; // offset 0xC, size 0x4
    float delay_retarget; // offset 0x10, size 0x4
};
class xEntSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
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
class xFFX {
    // total size: 0x0
};
class /* @class */ {
    // total size: 0x5C
public:
    class /* @class */ {
        // total size: 0x24
    public:
        float dist; // offset 0x0, size 0x4
        float height; // offset 0x4, size 0x4
        float pitch; // offset 0x8, size 0x4
        float accel; // offset 0xC, size 0x4
        float max_vel; // offset 0x10, size 0x4
        float stick_decel; // offset 0x14, size 0x4
        float stick_accel; // offset 0x18, size 0x4
        float stick_max_vel; // offset 0x1C, size 0x4
        float turn_speed; // offset 0x20, size 0x4
    } aim; // offset 0x0, size 0x24
    class /* @class */ {
        // total size: 0x14
    public:
        float delay; // offset 0x0, size 0x4
        float blend_time; // offset 0x4, size 0x4
        float fade_dist; // offset 0x8, size 0x4
        float hide_dist; // offset 0xC, size 0x4
        float fov; // offset 0x10, size 0x4
    } seize; // offset 0x24, size 0x14
    class /* @class */ {
        // total size: 0x20
    public:
        float duration; // offset 0x0, size 0x4
        float min_duration; // offset 0x4, size 0x4
        float min_dist; // offset 0x8, size 0x4
        float cut_dist; // offset 0xC, size 0x4
        float drift_dist; // offset 0x10, size 0x4
        float drift_softness; // offset 0x14, size 0x4
        float jerk_offset; // offset 0x18, size 0x4
        float jerk_deflect; // offset 0x1C, size 0x4
    } survey; // offset 0x38, size 0x20
    class /* @class */ {
        // total size: 0x4
    public:
        float control_delay; // offset 0x0, size 0x4
    } restore; // offset 0x58, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
struct /* @anon2 */ {
    // total size: 0x1C
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
struct /* @anon3 */ {
    // total size: 0x1C
};
class xModelAssetInfo {
    // total size: 0x0
};
class xPlatformFRData {
    // total size: 0x10
public:
    float fspeed; // offset 0x0, size 0x4
    float rspeed; // offset 0x4, size 0x4
    float ret_delay; // offset 0x8, size 0x4
    float post_ret_delay; // offset 0xC, size 0x4
};
class state_missle_appear : public state_type {
    // total size: 0x8
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
class HAZNotify {
    // total size: 0x4
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
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class /* @class */ {
    // total size: 0x4
public:
    float delay_wand; // offset 0x0, size 0x4
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
    // total size: 0x4
public:
    float size; // offset 0x0, size 0x4
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
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class xCutsceneTime {
    // total size: 0x10
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x24
public:
    float dist; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float pitch; // offset 0x8, size 0x4
    float accel; // offset 0xC, size 0x4
    float max_vel; // offset 0x10, size 0x4
    float stick_decel; // offset 0x14, size 0x4
    float stick_accel; // offset 0x18, size 0x4
    float stick_max_vel; // offset 0x1C, size 0x4
    float turn_speed; // offset 0x20, size 0x4
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
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
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
class HAZBall : public HAZTypical {
    // total size: 0x3C
};
class xPSYNote {
    // total size: 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
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
class xShadowPoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
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
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
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
class cb_damage_ent {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class zEntTrigger : public zEnt {
    // total size: 0x140
public:
    class xMat4x3 triggerMatrix; // offset 0xE0, size 0x40
    class xBox triggerBox; // offset 0x120, size 0x18
    unsigned int entered; // offset 0x138, size 0x4
};
class _tagLightningZeus {
    // total size: 0xC
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    class xAnimState * fire; // offset 0x0, size 0x4
    class xAnimState * fly; // offset 0x4, size 0x4
};
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
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
class /* @class */ {
    // total size: 0x690
public:
    unsigned char hiding; // offset 0x0, size 0x1
    float alpha; // offset 0x4, size 0x4
    float alpha_vel; // offset 0x8, size 0x4
    float glow; // offset 0xC, size 0x4
    float glow_vel; // offset 0x10, size 0x4
    class /* @class */ {
        // total size: 0x10
    public:
        class xModelInstance * reticle; // offset 0x0, size 0x4
        class xModelInstance * target; // offset 0x4, size 0x4
        class xModelInstance * swirl; // offset 0x8, size 0x4
        class xModelInstance * wind; // offset 0xC, size 0x4
    } model; // offset 0x14, size 0x10
    class hud_gizmo gizmo[33]; // offset 0x24, size 0x630
    unsigned int gizmos_used; // offset 0x654, size 0x4
    class uv_animated_model uv_swirl; // offset 0x658, size 0x1C
    class uv_animated_model uv_wind; // offset 0x674, size 0x1C
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
class state_camera_seize : public state_type {
    // total size: 0x60
public:
    float blend_time; // offset 0x8, size 0x4
    class xVec3 start_loc; // offset 0xC, size 0xC
    class xQuat start_dir; // offset 0x20, size 0x10
    class xQuat end_dir; // offset 0x30, size 0x10
    class xQuat cur_dir; // offset 0x40, size 0x10
    float last_s; // offset 0x50, size 0x4
    float fov; // offset 0x54, size 0x4
    float wipe_bubbles; // offset 0x58, size 0x4
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
class zParEmitter : public xParEmitter {
    // total size: 0x78
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
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
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
class zFragLightning {
    // total size: 0x10
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    float size; // offset 0x0, size 0x4
};
class xCutsceneBreak {
    // total size: 0x8
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
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
class HAZRing : public HAZTypical {
    // total size: 0x40
public:
    float hyt_ring; // offset 0x3C, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
class state_player_aim : public state_type {
    // total size: 0x14
public:
    float yaw; // offset 0x8, size 0x4
    float yaw_vel; // offset 0xC, size 0x4
    float turn_delay; // offset 0x10, size 0x4
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
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
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
class zFragBone {
    // total size: 0x10
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
class /* @class */ {
    // total size: 0xC
public:
    signed int value_def; // offset 0x0, size 0x4
    signed int value_min; // offset 0x4, size 0x4
    signed int value_max; // offset 0x8, size 0x4
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
class zFragLightningAsset : public zFragAsset {
    // total size: 0x68
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
struct /* @anon4 */ {
    // total size: 0x1C
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
class uv_animated_model {
    // total size: 0x1C
public:
    class RpAtomic * model; // offset 0x0, size 0x4
    class RwTexCoords * uv; // offset 0x4, size 0x4
    signed int uvsize; // offset 0x8, size 0x4
    class xVec2 offset; // offset 0xC, size 0x8
    class xVec2 offset_vel; // offset 0x14, size 0x8
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
class xPlatformBreakawayData {
    // total size: 0x10
public:
    float ba_delay; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
    float reset_delay; // offset 0x8, size 0x4
    unsigned int breakflags; // offset 0xC, size 0x4
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
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
class xParGroup {
    // total size: 0x0
};
class /* @class */ {
    // total size: 0x10
public:
    float sample_rate; // offset 0x0, size 0x4
    float bubble_rate; // offset 0x4, size 0x4
    float bubble_emit_radius; // offset 0x8, size 0x4
    float wake_emit_radius; // offset 0xC, size 0x4
};
class xPlatformERData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
class zFragAsset {
    // total size: 0x18
public:
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
enum thread_enum {
    THREAD_PLAYER = 0,
    THREAD_MISSLE = 1,
    THREAD_CAMERA = 2,
    MAX_THREAD = 3,
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    class xModelInstance * reticle; // offset 0x0, size 0x4
    class xModelInstance * target; // offset 0x4, size 0x4
    class xModelInstance * swirl; // offset 0x8, size 0x4
    class xModelInstance * wind; // offset 0xC, size 0x4
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
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
class /* @class */ {
    // total size: 0x5C
public:
    float life; // offset 0x0, size 0x4
    float hit_dist; // offset 0x4, size 0x4
    float crash_angle; // offset 0x8, size 0x4
    float collide_twist; // offset 0xC, size 0x4
    signed int hit_tests; // offset 0x10, size 0x4
    class /* @class */ {
        // total size: 0x14
    public:
        float delay_show; // offset 0x0, size 0x4
        float delay_fly; // offset 0x4, size 0x4
        class xVec3 offset; // offset 0x8, size 0xC
    } appear; // offset 0x14, size 0x14
    class /* @class */ {
        // total size: 0x2C
    public:
        float accel; // offset 0x0, size 0x4
        float max_vel; // offset 0x4, size 0x4
        float engine_pitch_max; // offset 0x8, size 0x4
        float engine_pitch_sensitivity; // offset 0xC, size 0x4
        float flash_interval; // offset 0x10, size 0x4
        class /* @class */ {
            // total size: 0x18
        public:
            float xdelta; // offset 0x0, size 0x4
            float ydelta; // offset 0x4, size 0x4
            float xdecay; // offset 0x8, size 0x4
            float ydecay; // offset 0xC, size 0x4
            float ybound; // offset 0x10, size 0x4
            float roll_frac; // offset 0x14, size 0x4
        } turn; // offset 0x14, size 0x18
    } fly; // offset 0x28, size 0x2C
    class /* @class */ {
        // total size: 0x8
    public:
        float hit_radius; // offset 0x0, size 0x4
        float hit_duration; // offset 0x4, size 0x4
    } explode; // offset 0x54, size 0x8
};
class zAssetPickupTable {
    // total size: 0x0
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
};
class XCSNNosey {
    // total size: 0xC
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
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
class HAZTarTar : public HAZCollide {
    // total size: 0xA4
public:
    class xVec3 vel; // offset 0x84, size 0xC
    float spd_lob; // offset 0x90, size 0x4
    class xVec3 pos_tgt; // offset 0x94, size 0xC
    unsigned int streakID; // offset 0xA0, size 0x4
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
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
class zCutsceneMgr : public xCutsceneMgr {
    // total size: 0x24
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
class state_camera_restore : public state_type {
    // total size: 0xC
public:
    float control_delay; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x18
public:
    signed int font; // offset 0x0, size 0x4
    float font_width; // offset 0x4, size 0x4
    float font_height; // offset 0x8, size 0x4
    float x; // offset 0xC, size 0x4
    float y; // offset 0x10, size 0x4
    float glow_size; // offset 0x14, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    float delay; // offset 0x0, size 0x4
    float blend_time; // offset 0x4, size 0x4
    float fade_dist; // offset 0x8, size 0x4
    float hide_dist; // offset 0xC, size 0x4
    float fov; // offset 0x10, size 0x4
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
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class HAZShroom : public HAZTypical {
    // total size: 0x54
public:
    class xVec3 vel_rise; // offset 0x3C, size 0xC
    class xVec3 acc_rise; // offset 0x48, size 0xC
};
class state_camera_survey : public state_type {
    // total size: 0x210
public:
    float time; // offset 0x8, size 0x4
    class xVec2 start_sp; // offset 0xC, size 0x8
    float path_distance[127]; // offset 0x14, size 0x1FC
};
class state_type {
    // total size: 0x8
public:
    enum state_enum type; // offset 0x0, size 0x4
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
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
class zFragLocInfo {
    // total size: 0x20
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
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
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
class unit_data {
    // total size: 0x50
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char curve_index; // offset 0x1, size 0x1
    unsigned char u; // offset 0x2, size 0x1
    unsigned char v; // offset 0x3, size 0x1
    float frac; // offset 0x4, size 0x4
    float age; // offset 0x8, size 0x4
    float cull_size; // offset 0xC, size 0x4
    class xMat4x3 mat; // offset 0x10, size 0x40
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class RyzMemData {
    // total size: 0x1
};
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
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
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    class /* @class */ {
        // total size: 0x10
    public:
        class xAnimTransition * aim; // offset 0x0, size 0x4
        class xAnimTransition * fire; // offset 0x4, size 0x4
        class xAnimTransition * idle; // offset 0x8, size 0x4
        class xAnimTransition * end; // offset 0xC, size 0x4
    } player; // offset 0x0, size 0x10
    class /* @class */ {
        // total size: 0x4
    public:
        class xAnimTransition * fly; // offset 0x0, size 0x4
    } missle; // offset 0x10, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
enum state_enum {
    STATE_INVALID = -1,
    BEGIN_STATE_PLAYER = 0,
    BACKUP_STATE_PLAYER = -1,
    STATE_PLAYER_HALT = 0,
    STATE_PLAYER_AIM = 1,
    STATE_PLAYER_FIRE = 2,
    STATE_PLAYER_WAIT = 3,
    END_STATE_PLAYER = 4,
    BEGIN_STATE_MISSLE = 4,
    BACKUP_STATE_MISSLE = 3,
    STATE_MISSLE_APPEAR = 4,
    STATE_MISSLE_FLY = 5,
    STATE_MISSLE_EXPLODE = 6,
    END_STATE_MISSLE = 7,
    BEGIN_STATE_CAMERA = 7,
    BACKUP_STATE_CAMERA = 6,
    STATE_CAMERA_AIM = 7,
    STATE_CAMERA_SEIZE = 8,
    STATE_CAMERA_ATTACH = 9,
    STATE_CAMERA_SURVEY = 10,
    STATE_CAMERA_RESTORE = 11,
    END_STATE_CAMERA = 12,
    MAX_STATE = 12,
};
class xPlatformOrbitData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
class zFragSound {
    // total size: 0x14
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int value_min; // offset 0x4, size 0x4
    unsigned int value_max; // offset 0x8, size 0x4
};
class xCutsceneZbuffer {
    // total size: 0x10
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float nearPlane; // offset 0x8, size 0x4
    float farPlane; // offset 0xC, size 0x4
};
class /* @class */ {
    // total size: 0x14
public:
    float delay_show; // offset 0x0, size 0x4
    float delay_fly; // offset 0x4, size 0x4
    class xVec3 offset; // offset 0x8, size 0xC
};
class xPlatformSpringboardData {
    // total size: 0x2C
public:
    float jmph[3]; // offset 0x0, size 0xC
    float jmpbounce; // offset 0xC, size 0x4
    unsigned int animID[3]; // offset 0x10, size 0xC
    class xVec3 jmpdir; // offset 0x1C, size 0xC
    unsigned int springflags; // offset 0x28, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    class xAnimTransition * aim; // offset 0x0, size 0x4
    class xAnimTransition * fire; // offset 0x4, size 0x4
    class xAnimTransition * idle; // offset 0x8, size 0x4
    class xAnimTransition * end; // offset 0xC, size 0x4
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
struct /* @anon5 */ {
    // total size: 0x1C
};
struct /* @anon6 */ {
    // total size: 0x1C
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
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class sound_config {
    // total size: 0x28
public:
    char * name; // offset 0x0, size 0x4
    float volume; // offset 0x4, size 0x4
    float radius_inner; // offset 0x8, size 0x4
    float radius_outer; // offset 0xC, size 0x4
    unsigned char streamed; // offset 0x10, size 0x1
    unsigned char looping; // offset 0x11, size 0x1
    enum _tagSDRumbleType rumble; // offset 0x14, size 0x4
    signed int first; // offset 0x18, size 0x4
    signed int last; // offset 0x1C, size 0x4
    unsigned int id; // offset 0x20, size 0x4
    unsigned int handle; // offset 0x24, size 0x4
};
class /* @class */ {
    // total size: 0x10
public:
    unsigned int emit; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float vel; // offset 0x8, size 0x4
    float rand_vel; // offset 0xC, size 0x4
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
struct /* @anon7 */ {
    // total size: 0x1C
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
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
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
class xEntMotionOrbitData {
    // total size: 0x18
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
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
class zFragLocation {
    // total size: 0x24
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class xPlatformSplineData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
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
class xParSys {
    // total size: 0x0
};
class block_data {
    // total size: 0x8
public:
    unsigned char prev; // offset 0x0, size 0x1
    unsigned char next; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x20
public:
    float duration; // offset 0x0, size 0x4
    float min_duration; // offset 0x4, size 0x4
    float min_dist; // offset 0x8, size 0x4
    float cut_dist; // offset 0xC, size 0x4
    float drift_dist; // offset 0x10, size 0x4
    float drift_softness; // offset 0x14, size 0x4
    float jerk_offset; // offset 0x18, size 0x4
    float jerk_deflect; // offset 0x1C, size 0x4
};
class tweak_group {
    // total size: 0x1B8
public:
    float aim_delay; // offset 0x0, size 0x4
    class /* @class */ {
        // total size: 0x10
    public:
        float halt_time; // offset 0x0, size 0x4
        class /* @class */ {
            // total size: 0x8
        public:
            float turn_speed; // offset 0x0, size 0x4
            float anim_delta; // offset 0x4, size 0x4
        } aim; // offset 0x4, size 0x8
        class /* @class */ {
            // total size: 0x4
        public:
            float delay_wand; // offset 0x0, size 0x4
        } fire; // offset 0xC, size 0x4
    } player; // offset 0x4, size 0x10
    class /* @class */ {
        // total size: 0x5C
    public:
        float life; // offset 0x0, size 0x4
        float hit_dist; // offset 0x4, size 0x4
        float crash_angle; // offset 0x8, size 0x4
        float collide_twist; // offset 0xC, size 0x4
        signed int hit_tests; // offset 0x10, size 0x4
        class /* @class */ {
            // total size: 0x14
        public:
            float delay_show; // offset 0x0, size 0x4
            float delay_fly; // offset 0x4, size 0x4
            class xVec3 offset; // offset 0x8, size 0xC
        } appear; // offset 0x14, size 0x14
        class /* @class */ {
            // total size: 0x2C
        public:
            float accel; // offset 0x0, size 0x4
            float max_vel; // offset 0x4, size 0x4
            float engine_pitch_max; // offset 0x8, size 0x4
            float engine_pitch_sensitivity; // offset 0xC, size 0x4
            float flash_interval; // offset 0x10, size 0x4
            class /* @class */ {
                // total size: 0x18
            public:
                float xdelta; // offset 0x0, size 0x4
                float ydelta; // offset 0x4, size 0x4
                float xdecay; // offset 0x8, size 0x4
                float ydecay; // offset 0xC, size 0x4
                float ybound; // offset 0x10, size 0x4
                float roll_frac; // offset 0x14, size 0x4
            } turn; // offset 0x14, size 0x18
        } fly; // offset 0x28, size 0x2C
        class /* @class */ {
            // total size: 0x8
        public:
            float hit_radius; // offset 0x0, size 0x4
            float hit_duration; // offset 0x4, size 0x4
        } explode; // offset 0x54, size 0x8
    } missle; // offset 0x14, size 0x5C
    class /* @class */ {
        // total size: 0x5C
    public:
        class /* @class */ {
            // total size: 0x24
        public:
            float dist; // offset 0x0, size 0x4
            float height; // offset 0x4, size 0x4
            float pitch; // offset 0x8, size 0x4
            float accel; // offset 0xC, size 0x4
            float max_vel; // offset 0x10, size 0x4
            float stick_decel; // offset 0x14, size 0x4
            float stick_accel; // offset 0x18, size 0x4
            float stick_max_vel; // offset 0x1C, size 0x4
            float turn_speed; // offset 0x20, size 0x4
        } aim; // offset 0x0, size 0x24
        class /* @class */ {
            // total size: 0x14
        public:
            float delay; // offset 0x0, size 0x4
            float blend_time; // offset 0x4, size 0x4
            float fade_dist; // offset 0x8, size 0x4
            float hide_dist; // offset 0xC, size 0x4
            float fov; // offset 0x10, size 0x4
        } seize; // offset 0x24, size 0x14
        class /* @class */ {
            // total size: 0x20
        public:
            float duration; // offset 0x0, size 0x4
            float min_duration; // offset 0x4, size 0x4
            float min_dist; // offset 0x8, size 0x4
            float cut_dist; // offset 0xC, size 0x4
            float drift_dist; // offset 0x10, size 0x4
            float drift_softness; // offset 0x14, size 0x4
            float jerk_offset; // offset 0x18, size 0x4
            float jerk_deflect; // offset 0x1C, size 0x4
        } survey; // offset 0x38, size 0x20
        class /* @class */ {
            // total size: 0x4
        public:
            float control_delay; // offset 0x0, size 0x4
        } restore; // offset 0x58, size 0x4
    } camera; // offset 0x70, size 0x5C
    class /* @class */ {
        // total size: 0x18
    public:
        float env_alpha; // offset 0x0, size 0x4
        float env_coeff; // offset 0x4, size 0x4
        unsigned int env_texture; // offset 0x8, size 0x4
        float fresnel_alpha; // offset 0xC, size 0x4
        float fresnel_coeff; // offset 0x10, size 0x4
        unsigned int fresnel_texture; // offset 0x14, size 0x4
    } material; // offset 0xCC, size 0x18
    class /* @class */ {
        // total size: 0x14
    public:
        float dist_min; // offset 0x0, size 0x4
        float dist_max; // offset 0x4, size 0x4
        float ang_show; // offset 0x8, size 0x4
        float ang_hide; // offset 0xC, size 0x4
        float delay_retarget; // offset 0x10, size 0x4
    } reticle; // offset 0xE4, size 0x14
    class /* @class */ {
        // total size: 0x10
    public:
        float sample_rate; // offset 0x0, size 0x4
        float bubble_rate; // offset 0x4, size 0x4
        float bubble_emit_radius; // offset 0x8, size 0x4
        float wake_emit_radius; // offset 0xC, size 0x4
    } trail; // offset 0xF8, size 0x10
    class /* @class */ {
        // total size: 0x10
    public:
        unsigned int emit; // offset 0x0, size 0x4
        float radius; // offset 0x4, size 0x4
        float vel; // offset 0x8, size 0x4
        float rand_vel; // offset 0xC, size 0x4
    } blast; // offset 0x108, size 0x10
    class /* @class */ {
        // total size: 0x24
    public:
        float dist_min; // offset 0x0, size 0x4
        float dist_max; // offset 0x4, size 0x4
        unsigned int emit_min; // offset 0x8, size 0x4
        unsigned int emit_max; // offset 0xC, size 0x4
        float vel_min; // offset 0x10, size 0x4
        float vel_max; // offset 0x14, size 0x4
        float vel_perturb; // offset 0x18, size 0x4
        float vel_angle; // offset 0x1C, size 0x4
        float rot_vel_max; // offset 0x20, size 0x4
    } droplet; // offset 0x118, size 0x24
    class /* @class */ {
        // total size: 0x44
    public:
        float glow_size; // offset 0x0, size 0x4
        float time_fade; // offset 0x4, size 0x4
        float time_glow; // offset 0x8, size 0x4
        class /* @class */ {
            // total size: 0xC
        public:
            float size; // offset 0x0, size 0x4
            float du; // offset 0x4, size 0x4
            float dv; // offset 0x8, size 0x4
        } swirl; // offset 0xC, size 0xC
        class /* @class */ {
            // total size: 0xC
        public:
            float size; // offset 0x0, size 0x4
            float du; // offset 0x4, size 0x4
            float dv; // offset 0x8, size 0x4
        } wind; // offset 0x18, size 0xC
        class /* @class */ {
            // total size: 0x4
        public:
            float size; // offset 0x0, size 0x4
        } reticle; // offset 0x24, size 0x4
        class /* @class */ {
            // total size: 0x4
        public:
            float size; // offset 0x0, size 0x4
        } target; // offset 0x28, size 0x4
        class /* @class */ {
            // total size: 0x18
        public:
            signed int font; // offset 0x0, size 0x4
            float font_width; // offset 0x4, size 0x4
            float font_height; // offset 0x8, size 0x4
            float x; // offset 0xC, size 0x4
            float y; // offset 0x10, size 0x4
            float glow_size; // offset 0x14, size 0x4
        } timer; // offset 0x2C, size 0x18
    } hud; // offset 0x13C, size 0x44
    class /* @class */ {
        // total size: 0xC
    public:
        float freq; // offset 0x0, size 0x4
        float decay; // offset 0x4, size 0x4
        float min_freq; // offset 0x8, size 0x4
    } dialog; // offset 0x180, size 0xC
    void * context; // offset 0x18C, size 0x4
    class tweak_callback cb_missle_model; // offset 0x190, size 0x28
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
class /* @class */ {
    // total size: 0xC
public:
    float value_def; // offset 0x0, size 0x4
    float value_min; // offset 0x4, size 0x4
    float value_max; // offset 0x8, size 0x4
};
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
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
class xCutsceneZbufferHack {
    // total size: 0x44
public:
    char * name; // offset 0x0, size 0x4
    class xCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
class xDecalEmitter {
    // total size: 0x68
public:
    class config cfg; // offset 0x0, size 0x28
    class /* @class */ {
        // total size: 0x1C
    public:
        class RwTexture * asset; // offset 0x0, size 0x4
        unsigned int units; // offset 0x4, size 0x4
        class xVec2 size; // offset 0x8, size 0x8
        class xVec2 isize; // offset 0x10, size 0x8
        signed int prev; // offset 0x18, size 0x4
    } texture; // offset 0x28, size 0x1C
    class static_queue units; // offset 0x44, size 0x14
    class curve_node * curve; // offset 0x58, size 0x4
    unsigned int curve_size; // offset 0x5C, size 0x4
    unsigned int curve_index; // offset 0x60, size 0x4
    float ilife; // offset 0x64, size 0x4
};
class /* @class */ {
    // total size: 0x2C
public:
    float accel; // offset 0x0, size 0x4
    float max_vel; // offset 0x4, size 0x4
    float engine_pitch_max; // offset 0x8, size 0x4
    float engine_pitch_sensitivity; // offset 0xC, size 0x4
    float flash_interval; // offset 0x10, size 0x4
    class /* @class */ {
        // total size: 0x18
    public:
        float xdelta; // offset 0x0, size 0x4
        float ydelta; // offset 0x4, size 0x4
        float xdecay; // offset 0x8, size 0x4
        float ydecay; // offset 0xC, size 0x4
        float ybound; // offset 0x10, size 0x4
        float roll_frac; // offset 0x14, size 0x4
    } turn; // offset 0x14, size 0x18
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
struct /* @anon8 */ {
    // total size: 0x1C
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
class /* @class */ {
    // total size: 0x4
public:
    class xAnimTransition * fly; // offset 0x0, size 0x4
};
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
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
class xEntBoulder {
    // total size: 0x0
};
class /* @class */ {
    // total size: 0xC
public:
    float freq; // offset 0x0, size 0x4
    float decay; // offset 0x4, size 0x4
    float min_freq; // offset 0x8, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0x24
public:
    float dist_min; // offset 0x0, size 0x4
    float dist_max; // offset 0x4, size 0x4
    unsigned int emit_min; // offset 0x8, size 0x4
    unsigned int emit_max; // offset 0xC, size 0x4
    float vel_min; // offset 0x10, size 0x4
    float vel_max; // offset 0x14, size 0x4
    float vel_perturb; // offset 0x18, size 0x4
    float vel_angle; // offset 0x1C, size 0x4
    float rot_vel_max; // offset 0x20, size 0x4
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
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
class xPlatformTeeterData {
    // total size: 0xC
public:
    float itilt; // offset 0x0, size 0x4
    float maxtilt; // offset 0x4, size 0x4
    float invmass; // offset 0x8, size 0x4
};
class xPlatformMPData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
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
class /* @class */ {
    // total size: 0x1A0
public:
    signed int flags; // offset 0x0, size 0x4
    class state_type * state[3]; // offset 0x4, size 0xC
    class state_type * states[12]; // offset 0x10, size 0x30
    class xVec2 last_sp; // offset 0x40, size 0x8
    class xVec2 sp; // offset 0x48, size 0x8
    class xVec3 hit_loc; // offset 0x50, size 0xC
    class xVec3 hit_norm; // offset 0x5C, size 0xC
    class xModelInstance * missle_model; // offset 0x68, size 0x4
    class xEnt * hits[32]; // offset 0x6C, size 0x80
    signed int hits_size; // offset 0xEC, size 0x4
    unsigned int player_health; // offset 0xF0, size 0x4
    class xVec3 player_motion; // offset 0xF4, size 0xC
    float fov_default; // offset 0x100, size 0x4
    class zShrapnelAsset * droplet_shrapnel; // offset 0x104, size 0x4
    float dialog_freq; // offset 0x108, size 0x4
    class /* @class */ {
        // total size: 0x60
    public:
        float samples; // offset 0x0, size 0x4
        float bubbles; // offset 0x4, size 0x4
        class xMat4x3 mat; // offset 0x10, size 0x40
        class xQuat dir; // offset 0x50, size 0x10
    } trail; // offset 0x110, size 0x60
    class /* @class */ {
        // total size: 0x14
    public:
        class /* @class */ {
            // total size: 0xC
        public:
            class xAnimState * aim; // offset 0x0, size 0x4
            class xAnimState * fire; // offset 0x4, size 0x4
            class xAnimState * idle; // offset 0x8, size 0x4
        } player; // offset 0x0, size 0xC
        class /* @class */ {
            // total size: 0x8
        public:
            class xAnimState * fire; // offset 0x0, size 0x4
            class xAnimState * fly; // offset 0x4, size 0x4
        } missle; // offset 0xC, size 0x8
    } astate; // offset 0x170, size 0x14
    class /* @class */ {
        // total size: 0x14
    public:
        class /* @class */ {
            // total size: 0x10
        public:
            class xAnimTransition * aim; // offset 0x0, size 0x4
            class xAnimTransition * fire; // offset 0x4, size 0x4
            class xAnimTransition * idle; // offset 0x8, size 0x4
            class xAnimTransition * end; // offset 0xC, size 0x4
        } player; // offset 0x0, size 0x10
        class /* @class */ {
            // total size: 0x4
        public:
            class xAnimTransition * fly; // offset 0x0, size 0x4
        } missle; // offset 0x10, size 0x4
    } atran; // offset 0x184, size 0x14
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
class xEntMotionSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
enum texture_mode {
    TM_DEFAULT = 0,
    TM_RANDOM = 1,
    TM_CYCLE = 2,
    MAX_TM = 3,
    FORCE_INT_TM = -1,
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
class xiMat4x3Union {
    // total size: 0x40
public:
    union { // inferred
        class xMat4x3 xm; // offset 0x0, size 0x40
        class RwMatrixTag im; // offset 0x0, size 0x40
    };
};
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x1
public:
    unsigned char value_def; // offset 0x0, size 0x1
};
class state_player_wait : public state_type {
    // total size: 0x8
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
class xParabola {
    // total size: 0x24
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
class /* @class */ {
    // total size: 0x18
public:
    float xdelta; // offset 0x0, size 0x4
    float ydelta; // offset 0x4, size 0x4
    float xdecay; // offset 0x8, size 0x4
    float ydecay; // offset 0xC, size 0x4
    float ybound; // offset 0x10, size 0x4
    float roll_frac; // offset 0x14, size 0x4
};
class xfont {
    // total size: 0x24
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    class basic_rect clip; // offset 0x14, size 0x10
};
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
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
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class zMovePoint : public xMovePoint {
    // total size: 0x30
};
struct /* @anon9 */ {
    // total size: 0x1C
};
class HAZCatProd : public HAZBall {
    // total size: 0x44
public:
    class zLightning * zap_lyta; // offset 0x3C, size 0x4
    class zLightning * zap_lytb; // offset 0x40, size 0x4
};
class xPlatformMechData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
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
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
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
class xEntMotionMPData {
    // total size: 0xC
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
class config {
    // total size: 0x10
public:
    float life_time; // offset 0x0, size 0x4
    unsigned int blend_src; // offset 0x4, size 0x4
    unsigned int blend_dst; // offset 0x8, size 0x4
    float pivot; // offset 0xC, size 0x4
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
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class /* @class */ {
    // total size: 0x4
public:
    float control_delay; // offset 0x0, size 0x4
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
class config {
    // total size: 0x28
public:
    unsigned int flags; // offset 0x0, size 0x4
    float life_time; // offset 0x4, size 0x4
    unsigned int blend_src; // offset 0x8, size 0x4
    unsigned int blend_dst; // offset 0xC, size 0x4
    class /* @class */ {
        // total size: 0x18
    public:
        class xVec2 uv[2]; // offset 0x0, size 0x10
        unsigned char rows; // offset 0x10, size 0x1
        unsigned char cols; // offset 0x11, size 0x1
        enum texture_mode mode; // offset 0x14, size 0x4
    } texture; // offset 0x10, size 0x18
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class xPlatformPaddleData {
    // total size: 0x38
public:
    signed int startOrient; // offset 0x0, size 0x4
    signed int countOrient; // offset 0x4, size 0x4
    float orientLoop; // offset 0x8, size 0x4
    float orient[6]; // offset 0xC, size 0x18
    unsigned int paddleFlags; // offset 0x24, size 0x4
    float rotateSpeed; // offset 0x28, size 0x4
    float accelTime; // offset 0x2C, size 0x4
    float decelTime; // offset 0x30, size 0x4
    float hubRadius; // offset 0x34, size 0x4
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
class zFragGroup {
    // total size: 0x54
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
};
class anim_coll_data {
    // total size: 0x0
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
class /* @class */ {
    // total size: 0x10
public:
    unsigned int value_def; // offset 0x0, size 0x4
    unsigned int labels_size; // offset 0x4, size 0x4
    char * * labels; // offset 0x8, size 0x4
    void * values; // offset 0xC, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
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
class xPlatformPenData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x44
public:
    float glow_size; // offset 0x0, size 0x4
    float time_fade; // offset 0x4, size 0x4
    float time_glow; // offset 0x8, size 0x4
    class /* @class */ {
        // total size: 0xC
    public:
        float size; // offset 0x0, size 0x4
        float du; // offset 0x4, size 0x4
        float dv; // offset 0x8, size 0x4
    } swirl; // offset 0xC, size 0xC
    class /* @class */ {
        // total size: 0xC
    public:
        float size; // offset 0x0, size 0x4
        float du; // offset 0x4, size 0x4
        float dv; // offset 0x8, size 0x4
    } wind; // offset 0x18, size 0xC
    class /* @class */ {
        // total size: 0x4
    public:
        float size; // offset 0x0, size 0x4
    } reticle; // offset 0x24, size 0x4
    class /* @class */ {
        // total size: 0x4
    public:
        float size; // offset 0x0, size 0x4
    } target; // offset 0x28, size 0x4
    class /* @class */ {
        // total size: 0x18
    public:
        signed int font; // offset 0x0, size 0x4
        float font_width; // offset 0x4, size 0x4
        float font_height; // offset 0x8, size 0x4
        float x; // offset 0xC, size 0x4
        float y; // offset 0x10, size 0x4
        float glow_size; // offset 0x14, size 0x4
    } timer; // offset 0x2C, size 0x18
};
class /* @class */ {
    // total size: 0x18
public:
    class xVec2 uv[2]; // offset 0x0, size 0x10
    unsigned char rows; // offset 0x10, size 0x1
    unsigned char cols; // offset 0x11, size 0x1
    enum texture_mode mode; // offset 0x14, size 0x4
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
class tag_iFile {
    // total size: 0x90
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
class HAZMissile {
    // total size: 0x4
public:
    float vel; // offset 0x0, size 0x4
};
struct /* @anon10 */ {
    // total size: 0x1C
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
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
enum _tagSDRumbleType {
    SDR_None = 0,
    SDR_Test = 1,
    SDR_Damage = 2,
    SDR_Bounce = 3,
    SDR_EventLight = 4,
    SDR_EventMedium = 5,
    SDR_EventHeavy = 6,
    SDR_DustDestroyedObj = 7,
    SDR_XploDestroyedObj = 8,
    SDR_WebDestroyed = 9,
    SDR_Tiki = 10,
    SDR_LassoDestroy = 11,
    SDR_DamageByEGen = 12,
    SDR_BounceHit = 13,
    SDR_CruiseBubbleLaunch = 14,
    SDR_CruiseBubbleExplode = 15,
    SDR_TeleportStart = 16,
    SDR_Teleport = 17,
    SDR_TeleportEject = 18,
    SDR_Total = 19,
};
class zFragParticle {
    // total size: 0x4
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
};
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class xEntPenData {
    // total size: 0x50
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
class RwBBox {
    // total size: 0x18
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
class quadrant_set {
    // total size: 0x14
public:
    unsigned int index; // offset 0x0, size 0x4
    unsigned int mask; // offset 0x4, size 0x4
    unsigned int arcs; // offset 0x8, size 0x4
    float ring; // offset 0xC, size 0x4
    float arc; // offset 0x10, size 0x4
};
class /* @class */ {
    // total size: 0x60
public:
    float samples; // offset 0x0, size 0x4
    float bubbles; // offset 0x4, size 0x4
    class xMat4x3 mat; // offset 0x10, size 0x40
    class xQuat dir; // offset 0x50, size 0x10
};
class /* @class */ {
    // total size: 0xC
public:
    float size; // offset 0x0, size 0x4
    float du; // offset 0x4, size 0x4
    float dv; // offset 0x8, size 0x4
};
class static_queue {
    // total size: 0x14
public:
    unsigned int _first; // offset 0x0, size 0x4
    unsigned int _size; // offset 0x4, size 0x4
    unsigned int _max_size; // offset 0x8, size 0x4
    unsigned int _max_size_mask; // offset 0xC, size 0x4
    class unit_data * _buffer; // offset 0x10, size 0x4
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
struct /* @anon11 */ {
    // total size: 0x1C
};
class xPlatformConvBeltData {
    // total size: 0x4
public:
    float speed; // offset 0x0, size 0x4
};
struct /* @anon12 */ {
    // total size: 0x1C
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
class /* @class */ {
    // total size: 0x18
public:
    float env_alpha; // offset 0x0, size 0x4
    float env_coeff; // offset 0x4, size 0x4
    unsigned int env_texture; // offset 0x8, size 0x4
    float fresnel_alpha; // offset 0xC, size 0x4
    float fresnel_coeff; // offset 0x10, size 0x4
    unsigned int fresnel_texture; // offset 0x14, size 0x4
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};
class _tagLightningLine {
    // total size: 0x4
public:
    float unused; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    float hit_radius; // offset 0x0, size 0x4
    float hit_duration; // offset 0x4, size 0x4
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
class HAZPatriot : public HAZMissile {
    // total size: 0x1C
public:
    class xVec3 pos_began; // offset 0x4, size 0xC
    float spd_peak; // offset 0x10, size 0x4
    float spd_curr; // offset 0x14, size 0x4
    float acc_rate; // offset 0x18, size 0x4
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0070 -> 0x002A01A8
*/
// Range: 0x2A0070 -> 0x2A01A8
unsigned char event_handler(unsigned int event /* r2 */, float * fparam /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0070 -> 0x2A01A8
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A01B0 -> 0x002A0228
*/
// Range: 0x2A01B0 -> 0x2A0228
class xEnt * * get_explode_hits(signed int & size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A01B0 -> 0x2A0228
        class state_missle_explode * state; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0230 -> 0x002A02B8
*/
// Range: 0x2A0230 -> 0x2A02B8
void get_explode_sphere(class xVec3 & center /* r2 */, float & radius /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0230 -> 0x2A02B8
        class state_missle_explode * state; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A02C0 -> 0x002A0308
*/
// Range: 0x2A02C0 -> 0x2A0308
float exploding() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A02C0 -> 0x2A0308
        class state_missle_explode * state; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0310 -> 0x002A0324
*/
// Range: 0x2A0310 -> 0x2A0324
unsigned char active() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0310 -> 0x2A0324
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0330 -> 0x002A0458
*/
// Range: 0x2A0330 -> 0x2A0458
class xAnimTable * anim_table() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0330 -> 0x2A0458
        class xAnimTable & table; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0460 -> 0x002A0748
*/
// Range: 0x2A0460 -> 0x2A0748
void insert_player_animations(class xAnimTable & table /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0460 -> 0x2A0748
        char * start_from; // r19
        char * s; // r18
        unsigned int i; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0750 -> 0x002A0784
*/
// Range: 0x2A0750 -> 0x2A0784
void render_screen() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0750 -> 0x2A0784
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0790 -> 0x002A084C
*/
// Range: 0x2A0790 -> 0x2A084C
unsigned char render() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0790 -> 0x2A084C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0850 -> 0x002A0858
*/
// Range: 0x2A0850 -> 0x2A0858
static void render() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0850 -> 0x2A0858
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0860 -> 0x002A0A90
*/
// Range: 0x2A0860 -> 0x2A0A90
unsigned char update(class xScene * sc /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0860 -> 0x2A0A90
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0A90 -> 0x002A0CC0
*/
// Range: 0x2A0A90 -> 0x2A0CC0
void launch() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0A90 -> 0x2A0CC0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0CC0 -> 0x002A0CC8
*/
// Range: 0x2A0CC0 -> 0x2A0CC8
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0CC0 -> 0x2A0CC8
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0CD0 -> 0x002A0D04
*/
// Range: 0x2A0CD0 -> 0x2A0D04
void reset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0CD0 -> 0x2A0D04
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0D10 -> 0x002A0F34
*/
// Range: 0x2A0D10 -> 0x2A0F34
void init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0D10 -> 0x2A0F34
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0F40 -> 0x002A0FB8
*/
// Range: 0x2A0F40 -> 0x2A0FB8
static void load_settings() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0F40 -> 0x2A0FB8
        unsigned int params_size; // r29+0x1C
        class xModelAssetParam * params; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A0FC0 -> 0x002A3E8C
*/
// Range: 0x2A0FC0 -> 0x2A3E8C
static void register_tweaks(class tweak_group * this /* r19 */, unsigned char init /* r18 */, class xModelAssetParam * ap /* r17 */, unsigned int apsize /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A0FC0 -> 0x2A3E8C
        class xVec3 V0; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A3E90 -> 0x002A401C
*/
// Range: 0x2A3E90 -> 0x2A401C
static void load_cheat_tweak() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A3E90 -> 0x2A401C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4020 -> 0x002A4028
*/
// Range: 0x2A4020 -> 0x2A4028
static unsigned int check_anim_aim() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A4020 -> 0x2A4028
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4030 -> 0x002A4280
*/
// Range: 0x2A4030 -> 0x2A4280
static void check_lock_target(class xVec3 * target /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A4030 -> 0x2A4280
        class xMat4x3 & mat; // r8
        class xVec3 offset; // r29+0x30
        float ang; // r29+0x40
        float min_ang; // r3
        float max_ang; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4280 -> 0x002A44B8
*/
// Range: 0x2A4280 -> 0x2A44B8
static void lock_target(signed int index /* r2 */, class xVec3 * target /* r16 */, float opacity /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A4280 -> 0x2A44B8
        class hud_gizmo & gizmo; // r17
        class xVec3 screen_loc; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A44C0 -> 0x002A45BC
*/
// Range: 0x2A44C0 -> 0x2A45BC
static class xVec3 world_to_screen(class xVec3 & loc /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A44C0 -> 0x2A45BC
        class xMat4x3 & view_mat; // r2
        float iz; // r29+0x40
        class xVec3 screen_loc; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A45C0 -> 0x002A46F0
*/
// Range: 0x2A45C0 -> 0x2A46F0
static void show_hud() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A45C0 -> 0x2A46F0
        class basic_rect reticle_bound; // r29
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A46F0 -> 0x002A4B98
*/
// Range: 0x2A46F0 -> 0x2A4B98
static void render_hud() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A46F0 -> 0x2A4B98
        class basic_rect bound; // r29+0x120
        unsigned int i; // r21
        class hud_gizmo & gizmo; // r20
        float alpha; // r4
        unsigned int i; // r17
        class hud_gizmo & gizmo; // r3
        float glow; // r29+0x170
        float alpha; // r29+0x170
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4BA0 -> 0x002A5150
*/
// Range: 0x2A4BA0 -> 0x2A5150
static void update_hud(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A4BA0 -> 0x2A5150
        float vel_frac; // r3
        unsigned int i; // r7
        unsigned int i; // r17
        unsigned int i; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A5150 -> 0x002A5754
*/
// Range: 0x2A5150 -> 0x2A5754
static void render_timer(float alpha /* r21 */, float glow /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A5150 -> 0x2A5754
        class state_missle_fly * state; // r5
        float life; // r1
        char buffer[16]; // r29+0xA0
        float dsize; // r5
        class xfont font; // r29+0x70
        class basic_rect bound; // r29+0x60
        float x; // r21
        float y; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A5760 -> 0x002A5AAC
*/
// Range: 0x2A5760 -> 0x2A5AAC
static void init_hud() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A5760 -> 0x2A5AAC
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A5AB0 -> 0x002A5D38
*/
// Range: 0x2A5AB0 -> 0x2A5D38
static void render_glow(class xModelInstance * model /* r22 */, class basic_rect & r /* r2 */, float glow /* r29+0x120 */, float alpha /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A5AB0 -> 0x2A5D38
        float dsize; // r22
        float dloc; // r21
        float dalpha; // r20
        class basic_rect bound; // r29+0xF0
        signed int i; // r21
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A5D40 -> 0x002A61E4
*/
// Range: 0x2A5D40 -> 0x2A61E4
static void update_trail(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A5D40 -> 0x2A61E4
        signed int samples; // r21
        class xMat4x3 end_mat; // r29+0x160
        class xQuat end_dir; // r29+0x150
        float ds; // r24
        float ddt; // r23
        class xVec3 dloc; // r29+0x1E0
        class xMat4x3 mat[2]; // r29+0xD0
        signed int flip; // r22
        float s; // r22
        signed int i; // r20
        class xMat4x3 & mat0; // r19
        class xMat4x3 & mat1; // r18
        class xQuat subdir; // r29+0xC0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A61F0 -> 0x002A6780
*/
// Range: 0x2A61F0 -> 0x2A6780
static void add_trail_sample(class xVec3 & loc0 /* r20 */, class xVec3 & dir0 /* r19 */, class xVec3 & loc1 /* r18 */, class xVec3 & dir1 /* r17 */, float dt /* r29+0x1C0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A61F0 -> 0x2A6780
        unsigned int bubbles; // r16
        class xVec3 emit_range; // r29+0x1B0
        class xVec3 offset0; // r29+0x1A0
        class xVec3 offset1; // r29+0x190
        class xVec3 prop_loc0[2]; // r29+0x90
        class xVec3 prop_loc1[2]; // r29+0x70
        class xVec3 offset; // r29+0x180
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6780 -> 0x002A6900
*/
// Range: 0x2A6780 -> 0x2A6900
static void reset_wake_ribbons() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A6780 -> 0x2A6900
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6900 -> 0x002A6BD4
*/
// Range: 0x2A6900 -> 0x2A6BD4
static void init_states() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A6900 -> 0x2A6BD4
        class state_camera_restore camera_return; // @ 0x005CB880
        signed char @8149; // @ 0x0050FE50
        class state_camera_survey camera_survey; // @ 0x005CB670
        signed char @8146; // @ 0x0050FE4C
        class state_camera_attach camera_attach; // @ 0x005CB660
        signed char @8143; // @ 0x0050FE48
        class state_camera_seize camera_seize; // @ 0x005CB600
        signed char @8140; // @ 0x0050FE44
        class state_camera_aim camera_aim; // @ 0x005CB5B0
        signed char @8137; // @ 0x0050FE40
        class state_missle_explode missle_explode; // @ 0x005CB5A0
        signed char @8134; // @ 0x0050FE3C
        class state_missle_fly missle_fly; // @ 0x005CB560
        signed char @8131; // @ 0x0050FE38
        class state_missle_appear missle_appear; // @ 0x0050FE30
        signed char @8128; // @ 0x0050FE28
        class state_player_wait player_wait; // @ 0x0050FE20
        signed char @8125; // @ 0x0050FE1C
        class state_player_fire player_fire; // @ 0x005CB548
        signed char @8122; // @ 0x0050FE18
        class state_player_aim player_aim; // @ 0x005CB530
        signed char @8119; // @ 0x0050FE14
        class state_player_halt player_halt; // @ 0x005CB510
        signed char @8116; // @ 0x0050FE10
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6BE0 -> 0x002A6DD8
*/
// Range: 0x2A6BE0 -> 0x2A6DD8
static class RpAtomic * custom_bubble_render(class RpAtomic * atomic /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A6BE0 -> 0x2A6DD8
        float fade; // r20
        enum RwCullMode old_cull_mode; // r29+0x3C
        float fresnel_coeff; // r21
        float env_coeff; // r21
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6DE0 -> 0x002A6ED0
*/
// Range: 0x2A6DE0 -> 0x2A6ED0
static void update_state(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A6DE0 -> 0x2A6ED0
        signed int i; // r18
        class state_type * & state; // r17
        enum state_enum newtype; // r19
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6ED0 -> 0x002A7084
*/
// Range: 0x2A6ED0 -> 0x2A7084
static void update_player(class xScene & s /* r2 */, float dt /* r29+0x60 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A6ED0 -> 0x2A7084
        class xVec3 pre_update_loc; // r29+0x50
        class xVec3 drive_motion; // r29+0x40
        unsigned char stop; // r8
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7090 -> 0x002A7260
*/
// Range: 0x2A7090 -> 0x2A7260
static void kill(unsigned char reset_camera /* r16 */, unsigned char abortive /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7090 -> 0x2A7260
        signed int i; // r18
        signed int i; // r19
        class xAnimPlay * aplay; // r2
        class xAnimState * astate; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7260 -> 0x002A7268
*/
// Range: 0x2A7260 -> 0x2A7268
static void abort() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7260 -> 0x2A7268
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7270 -> 0x002A7334
*/
// Range: 0x2A7270 -> 0x2A7334
static void exit_triggers(class xScene & s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7270 -> 0x2A7334
        class zEntTrigger * * it; // r17
        class zEntTrigger * * end; // r16
        class zEntTrigger & trig; // r2
        class xLinkAsset * link; // r7
        class xLinkAsset * end_link; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7340 -> 0x002A74F8
*/
// Range: 0x2A7340 -> 0x2A74F8
static void notify_triggers(class xScene & s /* r2 */, class xSphere & o /* r22 */, class xVec3 & dir /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7340 -> 0x2A74F8
        class zEntTrigger * * it; // r20
        class zEntTrigger * * end; // r19
        class zEntTrigger & trig; // r18
        unsigned char want_enter; // r9
        unsigned char want_exit; // r8
        class xLinkAsset * link; // r7
        class xLinkAsset * end_link; // r6
        unsigned char inside; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7500 -> 0x002A75A8
*/
// Range: 0x2A7500 -> 0x2A75A8
static unsigned char can_damage(class xEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7500 -> 0x2A75A8
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A75B0 -> 0x002A79C0
*/
// Range: 0x2A75B0 -> 0x2A79C0
static void damage_entity(class xEnt & ent /* r18 */, class xVec3 & loc /* r17 */, class xVec3 & dir /* r6 */, class xVec3 & hit_norm /* r2 */, float radius /* r29+0xF0 */, unsigned char explosive /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A75B0 -> 0x2A79C0
        class xCollis coll; // r29+0x50
        class xSphere o; // r29+0x40
        class xVec3 hit_dir; // r29+0xE0
        class xVec3 edir; // r29+0xD0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A79C0 -> 0x002A7A7C
*/
// Range: 0x2A79C0 -> 0x2A7A7C
static void stop_sound(signed int which /* r2 */, unsigned int handle /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A79C0 -> 0x2A7A7C
        class sound_config & s; // r17
        signed int i; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7A80 -> 0x002A7BDC
*/
// Range: 0x2A7A80 -> 0x2A7BDC
static void start(class state_camera_restore * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7A80 -> 0x2A7BDC
        class xVec3 loc; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7BE0 -> 0x002A7C44
*/
// Range: 0x2A7BE0 -> 0x2A7C44
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7BE0 -> 0x2A7C44
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7C50 -> 0x002A7C7C
*/
// Range: 0x2A7C50 -> 0x2A7C7C
static enum state_enum update(class state_camera_restore * this /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7C50 -> 0x2A7C7C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7C80 -> 0x002A7F0C
*/
// Range: 0x2A7C80 -> 0x2A7F0C
static void start(class state_camera_survey * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7C80 -> 0x2A7F0C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A7FE0 -> 0x002A81B0
*/
// Range: 0x2A7FE0 -> 0x2A81B0
static void eval_missle_path(class state_camera_survey * this /* r2 */, float dist /* r29 */, class xVec3 & loc /* r2 */, float & roll /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A7FE0 -> 0x2A81B0
        signed int i; // r3
        class missle_record_data & r0; // r7
        class missle_record_data & r1; // r4
        float d0; // r5
        float d1; // r4
        float frac; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8310 -> 0x002A8340
*/
// Range: 0x2A8310 -> 0x2A8340
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8310 -> 0x2A8340
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8340 -> 0x002A856C
*/
// Range: 0x2A8340 -> 0x2A856C
static enum state_enum update(class state_camera_survey * this /* r16 */, float dt /* r29+0x90 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8340 -> 0x2A856C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8570 -> 0x002A85F8
*/
// Range: 0x2A8570 -> 0x2A85F8
static void start() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8570 -> 0x2A85F8
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8600 -> 0x002A8660
*/
// Range: 0x2A8600 -> 0x2A8660
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8600 -> 0x2A8660
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8660 -> 0x002A8720
*/
// Range: 0x2A8660 -> 0x2A8720
static enum state_enum update(class state_camera_attach * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8660 -> 0x2A8720
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8720 -> 0x002A8738
*/
// Range: 0x2A8720 -> 0x2A8738
static void lock_hazard_targets() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8720 -> 0x2A8738
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8740 -> 0x002A8760
*/
// Range: 0x2A8740 -> 0x2A8760
static unsigned char hazard_check(class NPCHazard & haz /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8740 -> 0x2A8760
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8760 -> 0x002A895C
*/
// Range: 0x2A8760 -> 0x2A895C
static void get_view_bound(class xBound & bound /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8760 -> 0x2A895C
        class xMat4x3 & mat; // r16
        float dist; // r20
        float r2; // r29+0xB0
        class xVec3 center; // r29+0xA0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8960 -> 0x002A89E0
*/
// Range: 0x2A8960 -> 0x2A89E0
static void start(class state_camera_seize * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8960 -> 0x2A89E0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A89E0 -> 0x002A8A2C
*/
// Range: 0x2A89E0 -> 0x2A8A2C
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A89E0 -> 0x2A8A2C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8A30 -> 0x002A8ECC
*/
// Range: 0x2A8A30 -> 0x2A8ECC
static enum state_enum update(class state_camera_seize * this /* r16 */, float dt /* r29+0x110 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8A30 -> 0x2A8ECC
        float time_frac; // r2
        float s; // r20
        class xVec3 offset; // r29+0x100
        float dist; // r29+0x110
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A8ED0 -> 0x002A90F8
*/
// Range: 0x2A8ED0 -> 0x2A90F8
static void start(class state_camera_aim * this /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A8ED0 -> 0x2A90F8
        class xMat4x3 & mat; // r17
        class xVec2 offset; // r29+0x58
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A9100 -> 0x002A9130
*/
// Range: 0x2A9100 -> 0x2A9130
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A9100 -> 0x2A9130
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A9130 -> 0x002A97C4
*/
// Range: 0x2A9130 -> 0x2A97C4
static enum state_enum update(class state_camera_aim * this /* r17 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A9130 -> 0x2A97C4
        unsigned char control; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A9860 -> 0x002A9874
*/
// Range: 0x2A9860 -> 0x2A9874
static class xVec3 & get_player_loc() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A9860 -> 0x2A9874
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A9880 -> 0x002A9C30
*/
// Range: 0x2A9880 -> 0x2A9C30
static void start(class state_missle_explode * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A9880 -> 0x2A9C30
        float min_dist; // r21
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A9C30 -> 0x002AA124
*/
// Range: 0x2A9C30 -> 0x2AA124
static void cb_droplet(class zFrag * frag /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2A9C30 -> 0x2AA124
        class zFragProjectile & proj; // r16
        float min_ring; // r20
        float max_ring; // r23
        float min_arc; // r22
        float rr; // r3
        float velmag; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA150 -> 0x002AA394
*/
// Range: 0x2AA150 -> 0x2AA394
static void reset_quadrants(unsigned int size /* r19 */, float ring /* r29+0x50 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA150 -> 0x2AA394
        unsigned int rings; // r16
        unsigned int max_size; // r18
        unsigned int i; // r17
        unsigned int end; // r16
        unsigned int r; // r9
        unsigned int j; // r8
        unsigned int count; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA3A0 -> 0x002AA3B0
*/
// Range: 0x2AA3A0 -> 0x2AA3B0
static class xMat4x3 & get_missle_mat() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA3A0 -> 0x2AA3B0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA3B0 -> 0x002AA474
*/
// Range: 0x2AA3B0 -> 0x2AA474
static unsigned char hazard_check(class NPCHazard & haz /* r2 */, void * context /* r29+0xC */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA3B0 -> 0x2AA474
        float radius; // r6
        class xVec3 offset; // r29+0x20
        float max_dist; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA480 -> 0x002AA49C
*/
// Range: 0x2AA480 -> 0x2AA49C
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA480 -> 0x2AA49C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA4A0 -> 0x002AA5A4
*/
// Range: 0x2AA4A0 -> 0x2AA5A4
static enum state_enum update(class state_missle_explode * this /* r2 */, float dt /* r29+0x80 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA4A0 -> 0x2AA5A4
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA5B0 -> 0x002AA878
*/
// Range: 0x2AA5B0 -> 0x2AA878
static void start(class state_missle_fly * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA5B0 -> 0x2AA878
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA880 -> 0x002AA968
*/
// Range: 0x2AA880 -> 0x2AA968
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA880 -> 0x2AA968
        class xSphere o; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AA970 -> 0x002AAA14
*/
// Range: 0x2AA970 -> 0x2AAA14
static void abort() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AA970 -> 0x2AAA14
        class xSphere o; // r29+0x10
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AAA20 -> 0x002AB418
*/
// Range: 0x2AAA20 -> 0x2AB418
static enum state_enum update(class state_missle_fly * this /* r16 */, float dt /* r25 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AAA20 -> 0x2AB418
        class xMat4x3 & mat; // r3
        class xSphere o; // r29+0x80
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AB420 -> 0x002AB4E8
*/
// Range: 0x2AB420 -> 0x2AB4E8
static unsigned char hazard_check(class NPCHazard & haz /* r2 */, void * context /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AB420 -> 0x2AB4E8
        class xVec3 & loc; // r2
        class xVec3 offset; // r29+0x10
        float max_dist; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AB610 -> 0x002AB8C4
*/
// Range: 0x2AB610 -> 0x2AB8C4
static unsigned char hit_test(class state_missle_fly * this /* r4 */, class xVec3 & hit_loc /* r20 */, class xVec3 & hit_norm /* r19 */, class xVec3 & hit_depen /* r18 */, class xEnt * & hit_ent /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AB610 -> 0x2AB8C4
        class xScene & s; // r16
        class xVec3 & loc; // r21
        class xSweptSphere ss; // r29+0x70
        class xVec3 overshoot; // r29+0x220
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AB8D0 -> 0x002AB988
*/
// Range: 0x2AB8D0 -> 0x2AB988
static void calculate_rotation(class xVec2 & d1 /* r2 */, class xVec2 & v1 /* r2 */, float dt /* r29 */, class xVec2 & d0 /* r2 */, class xVec2 & v0 /* r2 */, class xVec2 & a0 /* r2 */, class xVec2 & a1 /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AB8D0 -> 0x2AB988
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AB9A0 -> 0x002ABA68
*/
// Range: 0x2AB9A0 -> 0x2ABA68
static void start() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AB9A0 -> 0x2ABA68
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABAE0 -> 0x002ABAF0
*/
// Range: 0x2ABAE0 -> 0x2ABAF0
static class xMat4x3 & get_player_mat() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABAE0 -> 0x2ABAF0
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABAF0 -> 0x002ABB08
*/
// Range: 0x2ABAF0 -> 0x2ABB08
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABAF0 -> 0x2ABB08
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABB10 -> 0x002ABC30
*/
// Range: 0x2ABB10 -> 0x2ABC30
static enum state_enum update(float dt /* r29+0x50 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABB10 -> 0x2ABC30
        float time; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABC30 -> 0x002ABC48
*/
// Range: 0x2ABC30 -> 0x2ABC48
static void start() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABC30 -> 0x2ABC48
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABC50 -> 0x002ABC58
*/
// Range: 0x2ABC50 -> 0x2ABC58
static enum state_enum update() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABC50 -> 0x2ABC58
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABC60 -> 0x002ABE84
*/
// Range: 0x2ABC60 -> 0x2ABE84
static void start(class state_player_fire * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABC60 -> 0x2ABE84
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABE90 -> 0x002ABEA8
*/
// Range: 0x2ABE90 -> 0x2ABEA8
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABE90 -> 0x2ABEA8
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABEB0 -> 0x002ABF38
*/
// Range: 0x2ABEB0 -> 0x2ABF38
static enum state_enum update(class state_player_fire * this /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABEB0 -> 0x2ABF38
        class xAnimSingle * asingle; // r5
        class xAnimState * astate; // r3
        float max_time; // r2
        float time; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ABF40 -> 0x002AC000
*/
// Range: 0x2ABF40 -> 0x2AC000
static void start(class state_player_aim * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2ABF40 -> 0x2AC000
        class xVec3 & player_dir; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AC000 -> 0x002AC01C
*/
// Range: 0x2AC000 -> 0x2AC01C
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AC000 -> 0x2AC01C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AC020 -> 0x002AC2FC
*/
// Range: 0x2AC020 -> 0x2AC2FC
static enum state_enum update(class state_player_aim * this /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AC020 -> 0x2AC2FC
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AC300 -> 0x002AC30C
*/
// Range: 0x2AC300 -> 0x2AC30C
static void start(class state_player_halt * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AC300 -> 0x2AC30C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AC310 -> 0x002AC32C
*/
// Range: 0x2AC310 -> 0x2AC32C
static void stop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AC310 -> 0x2AC32C
    }
}

/*
    Compile unit: C:\SB\Game\zEntCruiseBubble.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002AC330 -> 0x002AC448
*/
// Range: 0x2AC330 -> 0x2AC448
static enum state_enum update(class state_player_halt * this /* r2 */, float dt /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2AC330 -> 0x2AC448
        class xVec3 dmotion; // r29+0x10
    }
}

