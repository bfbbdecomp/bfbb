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

typedef int32(*type_0)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_1)(void*);
typedef void(*type_2)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_3)(xMemPool*, void*);
typedef int8*(*type_4)(xBase*);
typedef int32(*type_5)(RxNodeDefinition*);
typedef int8*(*type_7)(uint32);
typedef RpAtomic*(*type_8)(RpAtomic*);
typedef void(*type_9)(RxNodeDefinition*);
typedef void(*type_10)(RwResEntry*);
typedef uint32(*type_12)(void*, void*);
typedef RwCamera*(*type_16)(RwCamera*);
typedef int32(*type_17)(RxPipelineNode*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef uint32(*type_25)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_27)(RxPipelineNode*, RxPipeline*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef int32(*type_34)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_39)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_45)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_49)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_50)(RpWorldSector*);
typedef xBase*(*type_57)(uint32);
typedef void(*type_66)(xEnt*, xScene*, float32);
typedef uint32(*type_70)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_74)(xEnt*, xVec3*);
typedef void(*type_75)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_77)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_79)(xEnt*);
typedef uint32(*type_86)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef RpClump*(*type_102)(RpClump*, void*);
typedef int32(*type_105)(void*, void*);

typedef uint16 type_6[3];
typedef xVec3 type_11[5];
typedef float32 type_13[4];
typedef RxCluster type_14[1];
typedef uint8 type_15[5];
typedef uint8 type_19[3];
typedef uint8 type_21[3];
typedef xVec3 type_22[60];
typedef uint8 type_24[3];
typedef float32 type_26[22];
typedef float32 type_28[22];
typedef float32 type_29[2];
typedef uint32 type_30[15];
typedef RwTexCoords* type_31[8];
typedef zSurfTextureAnim type_33[2];
typedef uint32 type_35[72];
typedef RwFrustumPlane type_36[6];
typedef int8 type_37[4];
typedef uint32 type_38[15];
typedef float32 type_40[4];
typedef uint8 type_42[3];
typedef xBase* type_43[72];
typedef zSurfUVFX type_44[2];
typedef RwV3d type_46[8];
typedef uint32 type_47[15];
typedef uint8 type_48[3];
typedef analog_data type_51[2];
typedef float32 type_52[5];
typedef xVec3 type_53[3];
typedef xVec4 type_54[12];
typedef uint8 type_55[2];
typedef uint8 type_56[3];
typedef uint8 type_58[3];
typedef xLightKitLight type_59[1];
typedef uint32 type_60[2];
typedef uint8 type_61[3];
typedef uint8 type_62[2];
typedef float32 type_63[6];
typedef float32 type_64[3];
typedef RpLight* type_65[2];
typedef float32 type_67[3];
typedef int8 type_68[256];
typedef xModelTag type_69[2];
typedef RwFrame* type_71[2];
typedef float32 type_72[3];
typedef float32 type_73[16];
typedef float32 type_76[2];
typedef int8* type_78[3];
typedef int8 type_80[256];
typedef uint8 type_81[3];
typedef tile_data* type_82[3];
typedef xModelBucket** type_83[3];
typedef xEnt* type_84[111];
typedef float32 type_85[3];
typedef uint32 type_87[4];
typedef uint16 type_88[3];
typedef float32 type_89[2];
typedef uint8 type_90[3];
typedef uint8 type_91[2];
typedef int8 type_92[128];
typedef type_92 type_93[6];
typedef xAnimMultiFileEntry type_94[1];
typedef xVec3 type_95[4];
typedef uint32 type_96[4096];
typedef uint8 type_97[14];
typedef xModelTag type_98[4];
typedef int8 type_99[16];
typedef int8 type_100[32];
typedef xModelInstance* type_101[14];
typedef float32 type_103[3];
typedef int8 type_104[16];
typedef uint8 type_106[4];
typedef uint8 type_107[3];
typedef uint8 type_108[3];
typedef RwTexCoords* type_109[8];
typedef float32 type_110[6];
typedef xCollis type_111[18];
typedef int8 type_112[32];
typedef zSurfacePropTexAnim type_113[2];
typedef uint8 type_114[22];
typedef int8 type_115[32];
typedef zSurfacePropUVFX type_116[2];
typedef uint8 type_117[22];

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	uint8** state_masks;
	uint8* active_state_mask;
	uint8* next_state_mask;
	type_78 prefix;
	type_82 tiles;
	uint32 tiles_size;
	uint32 min_state;
	uint32 max_state;
	uint32 state;
	uint32 next_state;
	uint32 state_counter;
	float32 transition_delay;
	float32 state_delay;
	float32 transition_time;
	float32 state_time;
	xSphere bound;
	float32 pulse_time;
	type_103 pulse_glow;
	float32 cull_dist_glow;
	float32 cull_dist_update;
	float32 glow_fade;
	float32 sound_delay;
	int32 curr_note;
};

struct clone_pipe_data
{
	bucket_data* buckets;
	uint32 buckets_size;
	RwFrame** frames;
	RwRGBAReal* colors;
};

struct xAnimState
{
	xAnimState* Next;
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
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
	uint32 pad3;
};

struct RxPipeline
{
	int32 locked;
	uint32 numNodes;
	RxPipelineNode* nodes;
	uint32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	uint32 superBlockSize;
	uint32 entryPoint;
	uint32 pluginId;
	uint32 pluginData;
};

struct RpTriangle
{
	type_6 vertIndex;
	int16 matIndex;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_14 clusters;
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	type_55 PowerUp;
	type_62 InitialPowerUp;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	uint32 PipeFlags;
	float32 RedMultiplier;
	float32 GreenMultiplier;
	float32 BlueMultiplier;
	float32 Alpha;
	float32 FadeStart;
	float32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	uint32 modelID;
	uint32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_3 anim_coll;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	uint16 idx;
	uint16 num_updates;
	uint8 flags;
	uint8 miscflags;
	uint8 subType;
	uint8 pflags;
	uint8 moreFlags;
	uint8 isCulled;
	uint8 driving_count;
	uint8 num_ffx;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
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
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_70 Callback;
};

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct zAssetPickupTable
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_12 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct z_disco_floor_asset : xBaseAsset
{
	uint32 flags;
	_class_5 interval;
	_class_6 prefix_offset;
	uint32 state_mask_size;
	uint32 states_offset;
	uint32 states_size;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_10 destroyNotify;
};

struct zCutsceneMgr
{
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct zSurfAssetBase : xBaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	type_33 texture_anim;
	uint32 uvfx_flags;
	type_44 uvfx;
	uint8 on;
	type_48 surf_pad;
	float32 oob_delay;
	float32 walljump_scale_xz;
	float32 walljump_scale_y;
	float32 damage_timer;
	float32 damage_bounce;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	type_35 baseCount;
	type_43 baseList;
	_zEnv* zen;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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
	float32 dst_cast;
	type_29 radius;
};

struct xScene
{
	uint32 sceneID;
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
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
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_91 NumAnims;
	void** RawData;
};

struct bucket_data
{
	RpAtomic* atomic;
	RpAtomic* atomic_clone;
	render_context* rc;
	uint16 size;
	uint16 used;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_22 tranTable;
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

struct tile_data
{
	uint8 culled;
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
	int32 memlvl;
};

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
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
	uint16 NumSingle;
	uint16 BoneCount;
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
	uint32 numOutputs;
	uint32* outputs;
	RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	uint32 initializationDataSize;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_25 Conditional;
	type_25 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct zEntSimpleObj : zEnt
{
	xSimpleObjAsset* sasset;
	uint32 sflags;
	void* anim;
	float32 animTime;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_36 frustumPlanes;
	RwBBox frustumBoundBox;
	type_46 frustumCorners;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
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
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
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
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	type_24 pad;
	void* moprops;
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	type_11 lastRefs;
	type_15 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
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
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
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
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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
	int16 refCount;
	int16 pad;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct RxHeap
{
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
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
	uint32 filterAddressing;
	int32 refCount;
};

struct xJSPHeader
{
	type_37 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpSector
{
	int32 type;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct _class_1
{
	uint8 enabled;
	uint8 forward;
	uint8 culled;
	uint8 glow_culled;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
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
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint8 pad;
	uint32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_69 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	type_98 HangPawTag;
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	type_30 Inv_PatsSock;
	type_38 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_47 Inv_LevelPickups;
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_60 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_84 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_97 sb_model_indices;
	type_101 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_13 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
};

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	type_1 activateCB;
	type_1 deactivateCB;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
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
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	type_54 frustplane;
};

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
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
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_63 MoveSpeed;
	type_64 AnimSneak;
	type_67 AnimWalk;
	type_72 AnimRun;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	type_106 talk_filter;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float32 noRenderDist;
	type_83 lodBucket;
	type_85 lodDist;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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
	uint32 mode;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct rxReq
{
};

struct xGridBound
{
	void* data;
	uint16 gx;
	uint16 gz;
	uint8 ingrid;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct xSimpleObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint8 collType;
	uint8 flags;
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
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	uint32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
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
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_76 BilinearLerp;
	xAnimEffect* Effect;
	uint32 ActiveCount;
	float32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
	uint32 pad;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _class_3
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_73 matrix;
	float32 radius;
	float32 angle;
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
	uint32 flags;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
	float32 dist;
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
	uint16 flags;
	uint8 alpha;
	uint8 pad;
	uint32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float32 envHeight;
	float32 shadowHeight;
	uint32 raster;
	float32 dydx;
	float32 dydz;
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
	uint8 chk;
	uint8 pen;
	uint8 env_sidx;
	uint8 env_eidx;
	uint8 npc_sidx;
	uint8 npc_eidx;
	uint8 dyn_sidx;
	uint8 dyn_eidx;
	uint8 stat_sidx;
	uint8 stat_eidx;
	uint8 idx;
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
	float32 r;
	float32 h;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_93 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_100 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	uint32 QuarterSpeed;
	float32 update_dt;
	int32 useHIPHOP;
	uint8 NoMusic;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
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
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
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
	uint16 matIndex;
	type_88 vertIndex;
};

struct _tagxPad
{
	type_114 value;
	type_117 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_26 up_tmr;
	type_28 down_tmr;
	type_51 analog;
};

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _class_5
{
	float32 transition;
	float32 state;
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
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct _tagiPad
{
	int32 port;
};

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
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
	uint32 off;
	uint32 transition;
	uint32 on;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_3 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	type_113 texanim;
	uint32 uvfx_flags;
	type_116 uvfx;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	RxPipelineCluster* clusterRef;
	uint32 attributes;
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
uint32 current_disco_floor;
type_61 off_flag;
type_108 transition_flag;
type_42 on_flag;
uint8 mask;
type_21 off_flag;
type_58 transition_flag;
type_107 on_flag;
uint8 mask;
type_90 off_flag;
type_19 transition_flag;
type_56 on_flag;
uint8 mask;
clone_pipe_data clone_pipe;
float32 radd;
float32 rmul;
zGlobals globals;
uint32 gActiveHeap;
type_49 event_handler;
type_96 ourGlobals;
type_105 compare_buckets;

int32 event_handler(xBase* to, uint32 event, float32* argf);
void distance_cull(z_disco_floor* this);
void refresh_bound(z_disco_floor* this);
void refresh_spheres(z_disco_floor* this);
void set_state_delay(z_disco_floor* this, float32 s);
void set_transition_delay(z_disco_floor* this, float32 s);
void set_state_range(z_disco_floor* this, int32 min, int32 max, uint8 immediate);
void set_state(z_disco_floor* this, uint32 state, uint8 immediate);
void update(z_disco_floor* this, float32 dt);
void setup(z_disco_floor* this);
void load(z_disco_floor* this, z_disco_floor_asset& asset);
void init(void* ent, void* asset);
void effects_render_all();
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color);
uint8 sphere_hits_screen(xSphere& o);
void render_all();
void destroy();
void post_setup();
int32 compare_buckets(void* e1, void* e2);
void insert_atomic(clone_pipe_data* this, xModelInstance* model);
void init();
xSurface& get_damage_surface();
void update_state(z_disco_floor& df, float32 dt);
void play_sound(z_disco_floor& df);
void refresh_state(z_disco_floor& df);
uint32 find_tiles(int8* name, tile_data* tiles, uint32 size);
void object_prefix(int8* name, uint32& size, uint32& first);

// event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x337140
int32 event_handler(xBase* to, uint32 event, float32* argf)
{
	z_disco_floor& f;
}

// distance_cull__13z_disco_floorFv
// Start address: 0x3372f0
void distance_cull(z_disco_floor* this)
{
	xVec3& cam_loc;
	xVec3 offset;
	float32 min_glow_dist;
	float32 max_glow_dist;
}

// refresh_bound__13z_disco_floorFv
// Start address: 0x337430
void refresh_bound(z_disco_floor* this)
{
	xVec3 avg_center;
	xBox box;
	float32 itotal;
	int32 group;
	tile_data* it;
	tile_data* end;
	xBox ent_box;
	xVec3 box_center;
	xVec3 mid_center;
	float32 avg_radius;
	float32 box_radius;
	float32 mid_radius;
	int32 group;
	tile_data* it;
	tile_data* end;
	float32 avg_r;
	float32 box_r;
	float32 mid_r;
}

// refresh_spheres__13z_disco_floorFv
// Start address: 0x337bd0
void refresh_spheres(z_disco_floor* this)
{
	int32 group;
	tile_data* it;
	tile_data* end;
	RwSphere& msphere;
	xVec3& scale;
}

// set_state_delay__13z_disco_floorFf
// Start address: 0x337d40
void set_state_delay(z_disco_floor* this, float32 s)
{
}

// set_transition_delay__13z_disco_floorFf
// Start address: 0x337d50
void set_transition_delay(z_disco_floor* this, float32 s)
{
}

// set_state_range__13z_disco_floorFiib
// Start address: 0x337d60
void set_state_range(z_disco_floor* this, int32 min, int32 max, uint8 immediate)
{
	uint32 min_state;
	uint32 max_state;
	uint32 newstate;
	uint32 newstate;
}

// set_state__13z_disco_floorFUib
// Start address: 0x337e60
void set_state(z_disco_floor* this, uint32 state, uint8 immediate)
{
	uint32 r;
	int32 bit_index;
}

// update__13z_disco_floorFR6xScenef
// Start address: 0x3380f0
void update(z_disco_floor* this, float32 dt)
{
}

// setup__13z_disco_floorFv
// Start address: 0x338380
void setup(z_disco_floor* this)
{
	uint32 data_size;
	uint8* buffer;
	int32 group;
	uint32 i;
	xSurface&* surf;
	int32 i;
	uint32 j;
}

// load__13z_disco_floorFR19z_disco_floor_asset
// Start address: 0x338690
void load(z_disco_floor* this, z_disco_floor_asset& asset)
{
	uint8* data;
	uint32* state_offsets;
	uint32 i;
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
	int32 group;
	float32 glow;
	float32 dalpha;
	float32 dyoffset;
	tile_data* tile;
	tile_data* end_tile;
	xModelInstance* model;
	float32 alpha;
	float32 yoffset;
	int32 i;
}

// clip_render__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP8RpAtomicR7xMat4x3RC7xSphere10iColor_tag
// Start address: 0x338ef0
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color)
{
	RpGeometry* geom;
	uint32 flags;
	int32 materials;
	int32 i;
}

// sphere_hits_screen__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFRC7xSphere
// Start address: 0x339200
uint8 sphere_hits_screen(xSphere& o)
{
	RwCamera* camera;
	xMat4x3& cammat;
	xVec3 offset;
	float32 radius;
	float32 near_dist;
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
	int32 group;
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
int32 compare_buckets(void* e1, void* e2)
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
	uint8 inited;
}

// update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf
// Start address: 0x33a2a0
void update_state(z_disco_floor& df, float32 dt)
{
}

// play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a510
void play_sound(z_disco_floor& df)
{
	float32 pitch;
	float32 pitch_offset;
}

// refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a750
void refresh_state(z_disco_floor& df)
{
	uint32 i;
	uint32 i;
}

// find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUi
// Start address: 0x33af40
uint32 find_tiles(int8* name, tile_data* tiles, uint32 size)
{
	type_68 buffer;
	uint32 prefix_size;
	uint32 start;
	uint32 i;
	uint32 total;
	int32 j;
}

// object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUiRUi
// Start address: 0x33b080
void object_prefix(int8* name, uint32& size, uint32& first)
{
	uint32 namelen;
	int32 i;
}

