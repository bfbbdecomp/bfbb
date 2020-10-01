typedef struct zSurfMatFX;
typedef struct xVec3;
typedef union _class_0;
typedef struct z_disco_floor;
typedef struct clone_pipe_data;
typedef struct xAnimState;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct zGlobalSettings;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct RxPipelineCluster;
typedef struct xGroup;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct RxNodeDefinition;
typedef struct RwV3d;
typedef struct zAssetPickupTable;
typedef struct xUpdateCullEnt;
typedef struct z_disco_floor_asset;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct RwResEntry;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef struct zSurfAssetBase;
typedef struct zPlayerLassoInfo;
typedef struct RpMeshHeader;
typedef struct iColor_tag;
typedef struct zScene;
typedef struct xModelPool;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEntShadow;
typedef struct xScene;
typedef struct xAnimFile;
typedef struct bucket_data;
typedef struct zLedgeGrabParams;
typedef struct tile_data;
typedef struct RwLinkList;
typedef struct iEnv;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct RxPipelineNode;
typedef struct xAnimTransition;
typedef struct zEntSimpleObj;
typedef struct xAnimTransitionList;
typedef struct RwCamera;
typedef struct xLightKit;
typedef struct zEnt;
typedef enum _zPlayerWallJumpState;
typedef struct xJSPNodeInfo;
typedef struct xModelTag;
typedef struct RpClump;
typedef struct rxHeapFreeBlock;
typedef struct xSurface;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xPortalAsset;
typedef struct xVec2;
typedef struct zLasso;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef enum RpWorldRenderOrder;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineNodeParam;
typedef struct RpMaterial;
typedef struct xSphere;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct analog_data;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xJSPHeader;
typedef struct xQuat;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xModelBucket;
typedef struct _class_1;
typedef struct rxHeapBlockHeader;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct xEntDrive;
typedef struct zCheckPoint;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct zPlayerGlobals;
typedef struct _zEnv;
typedef struct xLinkAsset;
typedef struct xClumpCollBSPTree;
typedef struct RpLight;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct xEnvAsset;
typedef struct xCamera;
typedef struct RpWorld;
typedef struct xAnimTable;
typedef struct zPlayerSettings;
typedef struct zLODTable;
typedef struct _zPortal;
typedef struct xVec4;
typedef struct xEntFrame;
typedef struct RwSurfaceProperties;
typedef struct zSurfTextureAnim;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xGridBound;
typedef struct xSimpleObjAsset;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xShadowSimplePoly;
typedef struct xEnv;
typedef struct RwLLLink;
typedef struct _class_2;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RxNodeDefEditable;
typedef struct iFogParams;
typedef enum RxClusterValid;
typedef struct _tagxRumble;
typedef struct zSurfacePropTexAnim;
typedef struct tri_data_0;
typedef struct xRot;
typedef struct xAnimSingle;
typedef struct tri_data_1;
typedef struct RpVertexNormal;
typedef struct _class_3;
typedef struct xLightKitLight;
typedef enum rxEmbeddedPacketState;
typedef struct xCollis;
typedef struct xShadowSimpleCache;
typedef enum RwCameraProjection;
typedef struct xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGlobals;
typedef struct render_context;
typedef struct zEntHangable;
typedef struct zSurfColorFX;
typedef struct zSurfacePropUVFX;
typedef struct RpPolygon;
typedef struct _tagxPad;
typedef struct _class_4;
typedef struct RwSphere;
typedef struct RpMaterialList;
typedef struct _class_5;
typedef struct xFFX;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct _tagPadAnalog;
typedef struct xMat3x3;
typedef struct _tagiPad;
typedef struct xQCData;
typedef struct RxClusterRef;
typedef struct zJumpParam;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwObject;
typedef struct zSurfUVFX;
typedef struct anim_coll_data;
typedef struct _class_6;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPTriangle;
typedef struct zPlatform;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct zSurfaceProps;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct zGlobals;

typedef s32(*type_0)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_1)(void*);
typedef void(*type_2)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_3)(xMemPool*, void*);
typedef s8*(*type_4)(xBase*);
typedef s32(*type_5)(RxNodeDefinition*);
typedef s8*(*type_7)(u32);
typedef RpAtomic*(*type_8)(RpAtomic*);
typedef void(*type_9)(RxNodeDefinition*);
typedef void(*type_10)(RwResEntry*);
typedef u32(*type_12)(void*, void*);
typedef RwCamera*(*type_16)(RwCamera*);
typedef s32(*type_17)(RxPipelineNode*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef u32(*type_25)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_27)(RxPipelineNode*, RxPipeline*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef s32(*type_34)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_39)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_45)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_49)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpWorldSector*(*type_50)(RpWorldSector*);
typedef xBase*(*type_57)(u32);
typedef void(*type_66)(xEnt*, xScene*, f32);
typedef u32(*type_70)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_74)(xEnt*, xVec3*);
typedef void(*type_75)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_77)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_79)(xEnt*);
typedef u32(*type_86)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef RpClump*(*type_102)(RpClump*, void*);
typedef s32(*type_105)(void*, void*);

typedef u16 type_6[3];
typedef xVec3 type_11[5];
typedef f32 type_13[4];
typedef RxCluster type_14[1];
typedef u8 type_15[5];
typedef u8 type_19[3];
typedef u8 type_21[3];
typedef xVec3 type_22[60];
typedef u8 type_24[3];
typedef f32 type_26[22];
typedef f32 type_28[22];
typedef f32 type_29[2];
typedef u32 type_30[15];
typedef RwTexCoords* type_31[8];
typedef zSurfTextureAnim type_33[2];
typedef u32 type_35[72];
typedef RwFrustumPlane type_36[6];
typedef s8 type_37[4];
typedef u32 type_38[15];
typedef f32 type_40[4];
typedef u8 type_42[3];
typedef xBase* type_43[72];
typedef zSurfUVFX type_44[2];
typedef RwV3d type_46[8];
typedef u32 type_47[15];
typedef u8 type_48[3];
typedef analog_data type_51[2];
typedef f32 type_52[5];
typedef xVec3 type_53[3];
typedef xVec4 type_54[12];
typedef u8 type_55[2];
typedef u8 type_56[3];
typedef u8 type_58[3];
typedef xLightKitLight type_59[1];
typedef u32 type_60[2];
typedef u8 type_61[3];
typedef u8 type_62[2];
typedef f32 type_63[6];
typedef f32 type_64[3];
typedef RpLight* type_65[2];
typedef f32 type_67[3];
typedef s8 type_68[256];
typedef xModelTag type_69[2];
typedef RwFrame* type_71[2];
typedef f32 type_72[3];
typedef f32 type_73[16];
typedef f32 type_76[2];
typedef s8* type_78[3];
typedef s8 type_80[256];
typedef u8 type_81[3];
typedef tile_data* type_82[3];
typedef xModelBucket** type_83[3];
typedef xEnt* type_84[111];
typedef f32 type_85[3];
typedef u32 type_87[4];
typedef u16 type_88[3];
typedef f32 type_89[2];
typedef u8 type_90[3];
typedef u8 type_91[2];
typedef s8 type_92[128];
typedef type_92 type_93[6];
typedef xAnimMultiFileEntry type_94[1];
typedef xVec3 type_95[4];
typedef u32 type_96[4096];
typedef u8 type_97[14];
typedef xModelTag type_98[4];
typedef s8 type_99[16];
typedef s8 type_100[32];
typedef xModelInstance* type_101[14];
typedef f32 type_103[3];
typedef s8 type_104[16];
typedef u8 type_106[4];
typedef u8 type_107[3];
typedef u8 type_108[3];
typedef RwTexCoords* type_109[8];
typedef f32 type_110[6];
typedef xCollis type_111[18];
typedef s8 type_112[32];
typedef zSurfacePropTexAnim type_113[2];
typedef u8 type_114[22];
typedef s8 type_115[32];
typedef zSurfacePropUVFX type_116[2];
typedef u8 type_117[22];

struct zSurfMatFX
{
	u32 flags;
	u32 bumpmapID;
	u32 envmapID;
	f32 shininess;
	f32 bumpiness;
	u32 dualmapID;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct z_disco_floor : xBase
{
	_class_1 flag;
	z_disco_floor_asset* asset;
	u8** state_masks;
	u8* active_state_mask;
	u8* next_state_mask;
	type_78 prefix;
	type_82 tiles;
	u32 tiles_size;
	u32 min_state;
	u32 max_state;
	u32 state;
	u32 next_state;
	u32 state_counter;
	f32 transition_delay;
	f32 state_delay;
	f32 transition_time;
	f32 state_time;
	xSphere bound;
	f32 pulse_time;
	type_103 pulse_glow;
	f32 cull_dist_glow;
	f32 cull_dist_update;
	f32 glow_fade;
	f32 sound_delay;
	s32 curr_note;
};

struct clone_pipe_data
{
	bucket_data* buckets;
	u32 buckets_size;
	RwFrame** frames;
	RwRGBAReal* colors;
};

struct xAnimState
{
	xAnimState* Next;
	s8* Name;
	u32 ID;
	u32 Flags;
	u32 UserFlags;
	f32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	f32* BoneBlend;
	f32* TimeSnap;
	f32 FadeRecip;
	u16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_32 BeforeEnter;
	type_41 StateCallback;
	type_45 BeforeAnimMatrices;
};

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RxPipeline
{
	s32 locked;
	u32 numNodes;
	RxPipelineNode* nodes;
	u32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	u32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	u32 superBlockSize;
	u32 entryPoint;
	u32 pluginId;
	u32 pluginData;
};

struct RpTriangle
{
	type_6 vertIndex;
	s16 matIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_14 clusters;
};

struct zGlobalSettings
{
	u16 AnalogMin;
	u16 AnalogMax;
	f32 SundaeTime;
	f32 SundaeMult;
	u32 InitialShinyCount;
	u32 InitialSpatulaCount;
	s32 ShinyValuePurple;
	s32 ShinyValueBlue;
	s32 ShinyValueGreen;
	s32 ShinyValueYellow;
	s32 ShinyValueRed;
	s32 ShinyValueCombo0;
	s32 ShinyValueCombo1;
	s32 ShinyValueCombo2;
	s32 ShinyValueCombo3;
	s32 ShinyValueCombo4;
	s32 ShinyValueCombo5;
	s32 ShinyValueCombo6;
	s32 ShinyValueCombo7;
	s32 ShinyValueCombo8;
	s32 ShinyValueCombo9;
	s32 ShinyValueCombo10;
	s32 ShinyValueCombo11;
	s32 ShinyValueCombo12;
	s32 ShinyValueCombo13;
	s32 ShinyValueCombo14;
	s32 ShinyValueCombo15;
	f32 ComboTimer;
	u32 Initial_Specials;
	u32 TakeDamage;
	f32 DamageTimeHit;
	f32 DamageTimeSurface;
	f32 DamageTimeEGen;
	f32 DamageSurfKnock;
	f32 DamageGiveHealthKnock;
	u32 CheatSpongeball;
	u32 CheatPlayerSwitch;
	u32 CheatAlwaysPortal;
	u32 CheatFlyToggle;
	u32 DisableForceConversation;
	f32 StartSlideAngle;
	f32 StopSlideAngle;
	f32 RotMatchMaxAngle;
	f32 RotMatchMatchTime;
	f32 RotMatchRelaxTime;
	f32 Gravity;
	f32 BBashTime;
	f32 BBashHeight;
	f32 BBashDelay;
	f32 BBashCVTime;
	f32 BBounceSpeed;
	f32 BSpinMinFrame;
	f32 BSpinMaxFrame;
	f32 BSpinRadius;
	f32 SandyMeleeMinFrame;
	f32 SandyMeleeMaxFrame;
	f32 SandyMeleeRadius;
	f32 BubbleBowlTimeDelay;
	f32 BubbleBowlLaunchPosLeft;
	f32 BubbleBowlLaunchPosUp;
	f32 BubbleBowlLaunchPosAt;
	f32 BubbleBowlLaunchVelLeft;
	f32 BubbleBowlLaunchVelUp;
	f32 BubbleBowlLaunchVelAt;
	f32 BubbleBowlPercentIncrease;
	f32 BubbleBowlMinSpeed;
	f32 BubbleBowlMinRecoverTime;
	f32 SlideAccelVelMin;
	f32 SlideAccelVelMax;
	f32 SlideAccelStart;
	f32 SlideAccelEnd;
	f32 SlideAccelPlayerFwd;
	f32 SlideAccelPlayerBack;
	f32 SlideAccelPlayerSide;
	f32 SlideVelMaxStart;
	f32 SlideVelMaxEnd;
	f32 SlideVelMaxIncTime;
	f32 SlideVelMaxIncAccel;
	f32 SlideAirHoldTime;
	f32 SlideAirSlowTime;
	f32 SlideAirDblHoldTime;
	f32 SlideAirDblSlowTime;
	f32 SlideVelDblBoost;
	u8 SlideApplyPhysics;
	type_55 PowerUp;
	type_62 InitialPowerUp;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_34 eventFunc;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	u32 PipeFlags;
	f32 RedMultiplier;
	f32 GreenMultiplier;
	f32 BlueMultiplier;
	f32 Alpha;
	f32 FadeStart;
	f32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	u16 Flags;
	u8 BoneCount;
	u8 BoneIndex;
	u8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	u32 modelID;
	u32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_3 anim_coll;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	u16 idx;
	u16 num_updates;
	u8 flags;
	u8 miscflags;
	u8 subType;
	u8 pflags;
	u8 moreFlags;
	u8 isCulled;
	u8 driving_count;
	u8 num_ffx;
	u8 collType;
	u8 collLev;
	u8 chkby;
	u8 penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	type_66 update;
	type_66 endUpdate;
	type_74 bupdate;
	type_77 move;
	type_79 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_2 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_8 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_70 Callback;
};

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct zAssetPickupTable
{
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_12 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct z_disco_floor_asset : xBaseAsset
{
	u32 flags;
	_class_5 interval;
	_class_6 prefix_offset;
	u32 state_mask_size;
	u32 states_offset;
	u32 states_size;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_10 destroyNotify;
};

struct zCutsceneMgr
{
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct zSurfAssetBase : xBaseAsset
{
	u8 game_damage_type;
	u8 game_sticky;
	u8 game_damage_flags;
	u8 surf_type;
	u8 phys_pad;
	u8 sld_start;
	u8 sld_stop;
	u8 phys_flags;
	f32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	u32 texture_anim_flags;
	type_33 texture_anim;
	u32 uvfx_flags;
	type_44 uvfx;
	u8 on;
	type_48 surf_pad;
	f32 oob_delay;
	f32 walljump_scale_xz;
	f32 walljump_scale_y;
	f32 damage_timer;
	f32 damage_bounce;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	f32 dist;
	u8 destroy;
	u8 targetGuide;
	f32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	f32 copterTime;
	s32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		u32 num_ents;
		u32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	u32 num_update_base;
	xBase** update_base;
	type_35 baseCount;
	type_43 baseList;
	_zEnv* zen;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_29 radius;
};

struct xScene
{
	u32 sceneID;
	u16 flags;
	u16 num_ents;
	u16 num_trigs;
	u16 num_stats;
	u16 num_dyns;
	u16 num_npcs;
	u16 num_act_ents;
	u16 num_nact_ents;
	f32 gravity;
	f32 drag;
	f32 friction;
	u16 num_ents_allocd;
	u16 num_trigs_allocd;
	u16 num_stats_allocd;
	u16 num_dyns_allocd;
	u16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_57 resolvID;
	type_4 base2Name;
	type_7 id2Name;
};

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_91 NumAnims;
	void** RawData;
};

struct bucket_data
{
	RpAtomic* atomic;
	RpAtomic* atomic_clone;
	render_context* rc;
	u16 size;
	u16 used;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_22 tranTable;
	s32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	f32 y0det;
	f32 dydet;
	f32 r0det;
	f32 drdet;
	f32 thdet;
	f32 rtime;
	f32 ttime;
	f32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	s32 nrays;
	s32 rrand;
	f32 startrot;
	f32 endrot;
};

struct tile_data
{
	u8 culled;
	zEntSimpleObj* ent;
	xSphere sphere;
};

struct RwLinkList
{
	RwLLLink link;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_71 light_frame;
	s32 memlvl;
};

struct RpGeometry
{
	RwObject object;
	u32 flags;
	u16 lockedSinceLastInst;
	s16 refCount;
	s32 numTriangles;
	s32 numVertices;
	s32 numMorphTargets;
	s32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	type_31 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	u16 NumSingle;
	u16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_45 BeforeAnimMatrices;
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	u32 numOutputs;
	u32* outputs;
	RxPipelineCluster** slotClusterRefs;
	u32* slotsContinue;
	void* privateData;
	u32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	u32 initializationDataSize;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_25 Conditional;
	type_25 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct zEntSimpleObj : zEnt
{
	xSimpleObjAsset* sasset;
	u32 sflags;
	void* anim;
	f32 animTime;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_16 beginUpdate;
	type_18 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_36 frustumPlanes;
	RwBBox frustumBoundBox;
	type_46 frustumCorners;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_40 wt;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_102 callback;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xSurface : xBase
{
	u32 idx;
	u32 type;
	union
	{
		u32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	f32 friction;
	u8 state;
	type_24 pad;
	void* moprops;
};

struct RwRaster
{
	RwRaster* parent;
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct zLasso
{
	u32 flags;
	f32 secsTotal;
	f32 secsLeft;
	f32 stRadius;
	f32 tgRadius;
	f32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	f32 stSlack;
	f32 stSlackDist;
	f32 tgSlack;
	f32 tgSlackDist;
	f32 crSlack;
	f32 currDist;
	f32 lastDist;
	type_11 lastRefs;
	type_15 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct RxHeap
{
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_81 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_94 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_115 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xJSPHeader
{
	type_37 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RpSector
{
	s32 type;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct _class_1
{
	u8 enabled;
	u8 forward;
	u8 culled;
	u8 glow_culled;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_87 pad;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xEntAsset : xBaseAsset
{
	u8 flags;
	u8 subtype;
	u8 pflags;
	u8 moreFlags;
	u8 pad;
	u32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	f32 redMult;
	f32 greenMult;
	f32 blueMult;
	f32 seeThru;
	f32 seeThruSpeed;
	u32 modelInfoID;
	u32 animListID;
};

struct xEntDrive
{
	u32 flags;
	f32 otm;
	f32 otmr;
	f32 os;
	f32 tm;
	f32 tmr;
	f32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	f32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_109 texCoords;
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	u32 Visible;
	u32 Health;
	s32 Speed;
	f32 SpeedMult;
	s32 Sneak;
	s32 Teeter;
	f32 SlipFadeTimer;
	s32 Slide;
	f32 SlideTimer;
	s32 Stepping;
	s32 JumpState;
	s32 LastJumpState;
	f32 JumpTimer;
	f32 LookAroundTimer;
	u32 LookAroundRand;
	u32 LastProjectile;
	f32 DecelRun;
	f32 DecelRunSpeed;
	f32 HotsauceTimer;
	f32 LeanLerp;
	f32 ScareTimer;
	xBase* ScareSource;
	f32 CowerTimer;
	f32 DamageTimer;
	f32 SundaeTimer;
	f32 ControlOffTimer;
	f32 HelmetTimer;
	u32 WorldDisguise;
	u32 Bounced;
	f32 FallDeathTimer;
	f32 HeadbuttVel;
	f32 HeadbuttTimer;
	u32 SpecialReceived;
	xEnt* MountChimney;
	f32 MountChimOldY;
	u32 MaxHealth;
	u32 DoMeleeCheck;
	f32 VictoryTimer;
	f32 BadGuyNearTimer;
	f32 ForceSlipperyTimer;
	f32 ForceSlipperyFriction;
	f32 ShockRadius;
	f32 ShockRadiusOld;
	f32 Face_ScareTimer;
	u32 Face_ScareRandom;
	u32 Face_Event;
	f32 Face_EventTimer;
	f32 Face_PantTimer;
	u32 Face_AnimSpecific;
	u32 IdleRand;
	f32 IdleMinorTimer;
	f32 IdleMajorTimer;
	f32 IdleSitTimer;
	s32 Transparent;
	zEnt* FireTarget;
	u32 ControlOff;
	u32 ControlOnEvent;
	u32 AutoMoveSpeed;
	f32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	f32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_69 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	f32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	f32 HangLength;
	xVec3 HangStartPos;
	f32 HangStartLerp;
	type_98 HangPawTag;
	f32 HangPawOffset;
	f32 HangElapsed;
	f32 Jump_CurrGravity;
	f32 Jump_HoldTimer;
	f32 Jump_ChangeTimer;
	s32 Jump_CanDouble;
	s32 Jump_CanFloat;
	s32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	s32 CanJump;
	s32 CanBubbleSpin;
	s32 CanBubbleBounce;
	s32 CanBubbleBash;
	s32 IsJumping;
	s32 IsDJumping;
	s32 IsBubbleSpinning;
	s32 IsBubbleBouncing;
	s32 IsBubbleBashing;
	s32 IsBubbleBowling;
	s32 WasDJumping;
	s32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	s32 cheat_mode;
	u32 Inv_Shiny;
	u32 Inv_Spatula;
	type_30 Inv_PatsSock;
	type_38 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_47 Inv_LevelPickups;
	u32 Inv_LevelPickups_CurrentLevel;
	u32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	s32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_60 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_84 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_97 sb_model_indices;
	type_101 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_13 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpLight
{
	RwObjectHasFrame object;
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
};

struct xUpdateCullMgr
{
	u32 entCount;
	u32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	u32 mgrCount;
	u32 mgrCurr;
	xUpdateCullEnt* mgrList;
	u32 grpCount;
	xUpdateCullGroup* grpList;
	type_1 activateCB;
	type_1 deactivateCB;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	u32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	f32 minDist;
	f32 maxDist;
	f32 minHeight;
	f32 maxHeight;
	f32 maxCosAngle;
	f32 throwMinDist;
	f32 throwMaxDist;
	f32 throwMinHeight;
	f32 throwMaxHeight;
	f32 throwMaxStack;
	f32 throwMaxCosAngle;
	f32 throwTargetRotRate;
	f32 targetRot;
	u32 grabTarget;
	xVec3 grabOffset;
	f32 grabLerpMin;
	f32 grabLerpMax;
	f32 grabLerpLast;
	u32 grabYclear;
	f32 throwGravity;
	f32 throwHeight;
	f32 throwDistance;
	f32 fruitFloorDecayMin;
	f32 fruitFloorDecayMax;
	f32 fruitFloorBounce;
	f32 fruitFloorFriction;
	f32 fruitCeilingBounce;
	f32 fruitWallBounce;
	f32 fruitLifetime;
	xEnt* patLauncher;
};

struct xEnvAsset : xBaseAsset
{
	u32 bspAssetID;
	u32 startCameraAssetID;
	u32 climateFlags;
	f32 climateStrengthMin;
	f32 climateStrengthMax;
	u32 bspLightKit;
	u32 objectLightKit;
	f32 padF1;
	u32 bspCollisionAssetID;
	u32 bspFXAssetID;
	u32 bspCameraAssetID;
	u32 bspMapperID;
	u32 bspMapperCollisionID;
	u32 bspMapperFXID;
	f32 loldHeight;
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	f32 fov;
	u32 flags;
	f32 tmr;
	f32 tm_acc;
	f32 tm_dec;
	f32 ltmr;
	f32 ltm_acc;
	f32 ltm_dec;
	f32 dmin;
	f32 dmax;
	f32 dcur;
	f32 dgoal;
	f32 hmin;
	f32 hmax;
	f32 hcur;
	f32 hgoal;
	f32 pmin;
	f32 pmax;
	f32 pcur;
	f32 pgoal;
	f32 depv;
	f32 hepv;
	f32 pepv;
	f32 orn_epv;
	f32 yaw_epv;
	f32 pitch_epv;
	f32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	f32 yaw_cur;
	f32 yaw_goal;
	f32 pitch_cur;
	f32 pitch_goal;
	f32 roll_cur;
	f32 roll_goal;
	f32 dct;
	f32 dcd;
	f32 dccv;
	f32 dcsv;
	f32 hct;
	f32 hcd;
	f32 hccv;
	f32 hcsv;
	f32 pct;
	f32 pcd;
	f32 pccv;
	f32 pcsv;
	f32 orn_ct;
	f32 orn_cd;
	f32 orn_ccv;
	f32 orn_csv;
	f32 yaw_ct;
	f32 yaw_cd;
	f32 yaw_ccv;
	f32 yaw_csv;
	f32 pitch_ct;
	f32 pitch_cd;
	f32 pitch_ccv;
	f32 pitch_csv;
	f32 roll_ct;
	f32 roll_cd;
	f32 roll_ccv;
	f32 roll_csv;
	type_54 frustplane;
};

struct RpWorld
{
	RwObject object;
	u32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	s32 numTexCoordSets;
	s32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	type_50 renderCallBack;
	RxPipeline* pipeline;
};

struct xAnimTable
{
	xAnimTable* Next;
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_63 MoveSpeed;
	type_64 AnimSneak;
	type_67 AnimWalk;
	type_72 AnimRun;
	f32 JumpGravity;
	f32 GravSmooth;
	f32 FloatSpeed;
	f32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	f32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	f32 spin_damp_xz;
	f32 spin_damp_y;
	u8 talk_anims;
	u8 talk_filter_size;
	type_106 talk_filter;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	f32 noRenderDist;
	type_83 lodBucket;
	type_85 lodDist;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dpos;
	xVec3 dvel;
	xVec3 vel;
	u32 mode;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct zSurfTextureAnim
{
	u16 pad;
	u16 mode;
	u32 group;
	f32 speed;
};

struct RwMatrixTag
{
	RwV3d right;
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct rxReq
{
};

struct xGridBound
{
	void* data;
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct xSimpleObjAsset
{
	f32 animSpeed;
	u32 initAnimState;
	u8 collType;
	u8 flags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xShadowSimplePoly
{
	type_53 vert;
	xVec3 norm;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _class_2
{
	xLightKit kit;
	type_59 light;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct iFogParams
{
	RwFogType type;
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct zSurfacePropTexAnim
{
	u16 mode;
	f32 speed;
	f32 frame;
	u32 group;
	s32 group_idx;
	xBase* group_ptr;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_76 BilinearLerp;
	xAnimEffect* Effect;
	u32 ActiveCount;
	f32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	f32 BlendFactor;
	u32 pad;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct _class_3
{
	xVec3* verts;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_73 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCollis
{
	u32 flags;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
	f32 dist;
	xVec3 norm;
	xVec3 tohit;
	xVec3 depen;
	xVec3 hdng;
	union
	{
		_class_4 tuv;
		tri_data_1 tri;
	};
};

struct xShadowSimpleCache
{
	u16 flags;
	u8 alpha;
	u8 pad;
	u32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	f32 envHeight;
	f32 shadowHeight;
	u32 raster;
	f32 dydx;
	f32 dydz;
	type_95 corner;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntCollis
{
	u8 chk;
	u8 pen;
	u8 env_sidx;
	u8 env_eidx;
	u8 npc_sidx;
	u8 npc_eidx;
	u8 dyn_sidx;
	u8 dyn_eidx;
	u8 stat_sidx;
	u8 stat_eidx;
	u8 idx;
	type_111 colls;
	type_75 post;
	type_86 depenq;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xEntBoulder
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_93 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_100 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	s32 fog_t0;
	s32 fog_t1;
	s32 option_vibration;
	u32 QuarterSpeed;
	f32 update_dt;
	s32 useHIPHOP;
	u8 NoMusic;
	s8 currentActivePad;
	u8 firstStartPressed;
	u32 minVSyncCnt;
	u8 dontShowPadMessageDuringLoadingOrCutScene;
	u8 autoSaveFeature;
};

struct render_context
{
	xMat4x3 mat;
	iColor_tag color;
};

struct zEntHangable
{
};

struct zSurfColorFX
{
	u16 flags;
	u16 mode;
	f32 speed;
};

struct zSurfacePropUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	type_89 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct RpPolygon
{
	u16 matIndex;
	type_88 vertIndex;
};

struct _tagxPad
{
	type_114 value;
	type_117 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_26 up_tmr;
	type_28 down_tmr;
	type_51 analog;
};

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _class_5
{
	f32 transition;
	f32 state;
};

struct xFFX
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct _tagiPad
{
	s32 port;
};

struct xQCData
{
	s8 xmin;
	s8 ymin;
	s8 zmin;
	s8 zmin_dup;
	s8 xmax;
	s8 ymax;
	s8 zmax;
	s8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct zSurfUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct anim_coll_data
{
};

struct _class_6
{
	u32 off;
	u32 transition;
	u32 on;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct zPlatform
{
};

struct RxNodeMethods
{
	type_0 nodeBody;
	type_5 nodeInit;
	type_9 nodeTerm;
	type_17 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_27 pipelineNodeConfig;
	type_39 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_3 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	u32 texanim_flags;
	type_113 texanim;
	u32 uvfx_flags;
	type_116 uvfx;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct RxCluster
{
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

type_99 buffer;
type_104 buffer;
type_52 close_encounters;
type_110 blues_scale;
_class_2 glow_light;
u32 current_disco_floor;
type_61 off_flag;
type_108 transition_flag;
type_42 on_flag;
u8 mask;
type_21 off_flag;
type_58 transition_flag;
type_107 on_flag;
u8 mask;
type_90 off_flag;
type_19 transition_flag;
type_56 on_flag;
u8 mask;
clone_pipe_data clone_pipe;
f32 radd;
f32 rmul;
zGlobals globals;
u32 gActiveHeap;
type_49 event_handler;
type_96 ourGlobals;
type_105 compare_buckets;

s32 event_handler(xBase* to, u32 event, f32* argf);
void distance_cull(z_disco_floor* this);
void refresh_bound(z_disco_floor* this);
void refresh_spheres(z_disco_floor* this);
void set_state_delay(z_disco_floor* this, f32 s);
void set_transition_delay(z_disco_floor* this, f32 s);
void set_state_range(z_disco_floor* this, s32 min, s32 max, u8 immediate);
void set_state(z_disco_floor* this, u32 state, u8 immediate);
void update(z_disco_floor* this, f32 dt);
void setup(z_disco_floor* this);
void load(z_disco_floor* this, z_disco_floor_asset& asset);
void init(void* ent, void* asset);
void effects_render_all();
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color);
u8 sphere_hits_screen(xSphere& o);
void render_all();
void destroy();
void post_setup();
s32 compare_buckets(void* e1, void* e2);
void insert_atomic(clone_pipe_data* this, xModelInstance* model);
void init();
xSurface& get_damage_surface();
void update_state(z_disco_floor& df, f32 dt);
void play_sound(z_disco_floor& df);
void refresh_state(z_disco_floor& df);
u32 find_tiles(s8* name, tile_data* tiles, u32 size);
void object_prefix(s8* name, u32& size, u32& first);

// event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x337140
s32 event_handler(xBase* to, u32 event, f32* argf)
{
	z_disco_floor& f;
}

// distance_cull__13z_disco_floorFv
// Start address: 0x3372f0
void distance_cull(z_disco_floor* this)
{
	xVec3& cam_loc;
	xVec3 offset;
	f32 min_glow_dist;
	f32 max_glow_dist;
}

// refresh_bound__13z_disco_floorFv
// Start address: 0x337430
void refresh_bound(z_disco_floor* this)
{
	xVec3 avg_center;
	xBox box;
	f32 itotal;
	s32 group;
	tile_data* it;
	tile_data* end;
	xBox ent_box;
	xVec3 box_center;
	xVec3 mid_center;
	f32 avg_radius;
	f32 box_radius;
	f32 mid_radius;
	s32 group;
	tile_data* it;
	tile_data* end;
	f32 avg_r;
	f32 box_r;
	f32 mid_r;
}

// refresh_spheres__13z_disco_floorFv
// Start address: 0x337bd0
void refresh_spheres(z_disco_floor* this)
{
	s32 group;
	tile_data* it;
	tile_data* end;
	RwSphere& msphere;
	xVec3& scale;
}

// set_state_delay__13z_disco_floorFf
// Start address: 0x337d40
void set_state_delay(z_disco_floor* this, f32 s)
{
}

// set_transition_delay__13z_disco_floorFf
// Start address: 0x337d50
void set_transition_delay(z_disco_floor* this, f32 s)
{
}

// set_state_range__13z_disco_floorFiib
// Start address: 0x337d60
void set_state_range(z_disco_floor* this, s32 min, s32 max, u8 immediate)
{
	u32 min_state;
	u32 max_state;
	u32 newstate;
	u32 newstate;
}

// set_state__13z_disco_floorFUib
// Start address: 0x337e60
void set_state(z_disco_floor* this, u32 state, u8 immediate)
{
	u32 r;
	s32 bit_index;
}

// update__13z_disco_floorFR6xScenef
// Start address: 0x3380f0
void update(z_disco_floor* this, f32 dt)
{
}

// setup__13z_disco_floorFv
// Start address: 0x338380
void setup(z_disco_floor* this)
{
	u32 data_size;
	u8* buffer;
	s32 group;
	u32 i;
	xSurface&* surf;
	s32 i;
	u32 j;
}

// load__13z_disco_floorFR19z_disco_floor_asset
// Start address: 0x338690
void load(z_disco_floor* this, z_disco_floor_asset& asset)
{
	u8* data;
	u32* state_offsets;
	u32 i;
}

// init__13z_disco_floorFPvPv
// Start address: 0x338850
void init(void* ent, void* asset)
{
}

// effects_render_all__13z_disco_floorFv
// Start address: 0x338860
void effects_render_all()
{
	iColor_tag color;
	zScene& s;
	z_disco_floor* begin_floor;
	z_disco_floor* end_floor;
	RpAtomic* atomic;
	bucket_data* bucket;
	z_disco_floor* floor;
	s32 group;
	f32 glow;
	f32 dalpha;
	f32 dyoffset;
	tile_data* tile;
	tile_data* end_tile;
	xModelInstance* model;
	f32 alpha;
	f32 yoffset;
	s32 i;
}

// clip_render__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP8RpAtomicR7xMat4x3RC7xSphere10iColor_tag
// Start address: 0x338ef0
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color)
{
	RpGeometry* geom;
	u32 flags;
	s32 materials;
	s32 i;
}

// sphere_hits_screen__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFRC7xSphere
// Start address: 0x339200
u8 sphere_hits_screen(xSphere& o)
{
	RwCamera* camera;
	xMat4x3& cammat;
	xVec3 offset;
	f32 radius;
	f32 near_dist;
	xVec2& window;
}

// render_all__13z_disco_floorFv
// Start address: 0x339400
void render_all()
{
	iColor_tag color;
	zScene& s;
	z_disco_floor* begin_floor;
	z_disco_floor* end_floor;
	RpAtomic* atomic;
	bucket_data* bucket;
	z_disco_floor* floor;
	s32 group;
	tile_data* tile;
	tile_data* end_tile;
	xModelInstance* model;
}

// destroy__13z_disco_floorFv
// Start address: 0x339970
void destroy()
{
}

// post_setup__13z_disco_floorFv
// Start address: 0x339a50
void post_setup()
{
}

// compare_buckets__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFPCvPCv
// Start address: 0x339cb0
s32 compare_buckets(void* e1, void* e2)
{
}

// insert_atomic__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP14xModelInstance
// Start address: 0x339cc0
void insert_atomic(clone_pipe_data* this, xModelInstance* model)
{
	RpAtomic* atomic;
	bucket_data* it;
	bucket_data* end;
}

// init__13z_disco_floorFv
// Start address: 0x339e30
void init()
{
}

// get_damage_surface__25@unnamed@zDiscoFloor_cpp@Fv
// Start address: 0x339ed0
xSurface& get_damage_surface()
{
	xSurface& defsurf;
	xSurface surf;
	zSurfAssetBase asset;
	zSurfaceProps props;
	u8 inited;
}

// update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf
// Start address: 0x33a2a0
void update_state(z_disco_floor& df, f32 dt)
{
}

// play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a510
void play_sound(z_disco_floor& df)
{
	f32 pitch;
	f32 pitch_offset;
}

// refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a750
void refresh_state(z_disco_floor& df)
{
	u32 i;
	u32 i;
}

// find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUi
// Start address: 0x33af40
u32 find_tiles(s8* name, tile_data* tiles, u32 size)
{
	type_68 buffer;
	u32 prefix_size;
	u32 start;
	u32 i;
	u32 total;
	s32 j;
}

// object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUiRUi
// Start address: 0x33b080
void object_prefix(s8* name, u32& size, u32& first)
{
	u32 namelen;
	s32 i;
}

