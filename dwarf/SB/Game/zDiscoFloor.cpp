typedef struct zSurfMatFX;
typedef struct xVec3;
typedef struct _class_0;
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
typedef int8 type_93[128][6];
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct z_disco_floor : xBase
{
	_class_1 flag;
	z_disco_floor_asset* asset;
	uint8** state_masks;
	uint8* active_state_mask;
	uint8* next_state_mask;
	int8* prefix[3];
	tile_data* tiles[3];
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
	float32 pulse_glow[3];
	float32 cull_dist_glow;
	float32 cull_dist_update;
	float32 glow_fade;
	float32 sound_delay;
	int32 curr_note;

	void distance_cull();
	void refresh_bound();
	void refresh_spheres();
	void set_state_delay(float32 s);
	void set_transition_delay(float32 s);
	void set_state_range(int32 min, int32 max, uint8 immediate);
	void set_state(uint32 state, uint8 immediate);
	void update(float32 dt);
	void setup();
	void load(z_disco_floor_asset& asset);
};

struct clone_pipe_data
{
	bucket_data* buckets;
	uint32 buckets_size;
	RwFrame** frames;
	RwRGBAReal* colors;

	void insert_atomic(xModelInstance* model);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint16 vertIndex[3];
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
	RxCluster clusters[1];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	void(*update)(xEnt*, xScene*, float32);
	void(*endUpdate)(xEnt*, xScene*, float32);
	void(*bupdate)(xEnt*, xVec3*);
	void(*move)(xEnt*, xScene*, float32, xEntFrame*);
	void(*render)(xEnt*);
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	void(*transl)(xEnt*, xVec3*, xMat4x3*);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint32(*cb)(void*, void*);
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
	void(*destroyNotify)(RwResEntry*);
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
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	uint8 NumAnims[2];
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
	xVec3 tranTable[60];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	RwTexCoords* texCoords[8];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32(*Conditional)(xAnimTransition*, xAnimSingle*, void*);
	uint32(*Callback)(xAnimTransition*, xAnimSingle*, void*);
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
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
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
	float32 wt[4];
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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
	uint8 pad[3];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	uint8 pad[3];
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
	xAnimMultiFileEntry Files[1];
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct xJSPHeader
{
	int8 idtag[4];
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
	uint32 pad[4];
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
	RwTexCoords* texCoords[8];
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
	xModelTag BubbleWandTag[2];
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
	xModelTag HangPawTag[4];
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
	uint32 Inv_PatsSock[15];
	uint32 Inv_PatsSock_Max[15];
	uint32 Inv_PatsSock_CurrentLevel;
	uint32 Inv_LevelPickups[15];
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
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[111];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8 sb_model_indices[14];
	xModelInstance* sb_models[14];
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
	float32 param[4];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xVec4 frustplane[12];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
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
	uint8 talk_filter[4];
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float32 noRenderDist;
	xModelBucket** lodBucket[3];
	float32 lodDist[3];
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
	xVec3 vert[3];
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
	xLightKitLight light[1];
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
	float32 BilinearLerp[2];
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
	float32 matrix[16];
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
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
	float32 minmax_timer[2];
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
	uint16 vertIndex[3];
};

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
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
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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

int8 buffer[16];
int8 buffer[16];
float32 close_encounters[5];
float32 blues_scale[6];
_class_2 glow_light;
uint32 current_disco_floor;
uint8 off_flag[3];
uint8 transition_flag[3];
uint8 on_flag[3];
uint8 mask;
uint8 off_flag[3];
uint8 transition_flag[3];
uint8 on_flag[3];
uint8 mask;
uint8 off_flag[3];
uint8 transition_flag[3];
uint8 on_flag[3];
uint8 mask;
clone_pipe_data clone_pipe;
float32 radd;
float32 rmul;
zGlobals globals;
uint32 gActiveHeap;
int32(*event_handler)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 ourGlobals[4096];
int32(*compare_buckets)(void*, void*);

int32 event_handler(xBase* to, uint32 event, float32* argf);
void distance_cull();
void refresh_bound();
void refresh_spheres();
void set_state_delay(float32 s);
void set_transition_delay(float32 s);
void set_state_range(int32 min, int32 max, uint8 immediate);
void set_state(uint32 state, uint8 immediate);
void update(float32 dt);
void setup();
void load(z_disco_floor_asset& asset);
void init(void* ent, void* asset);
void effects_render_all();
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color);
uint8 sphere_hits_screen(xSphere& o);
void render_all();
void destroy();
void post_setup();
int32 compare_buckets(void* e1, void* e2);
void insert_atomic(xModelInstance* model);
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
	// Line 1578, Address: 0x337140, Func Offset: 0
	// Line 1583, Address: 0x337144, Func Offset: 0x4
	// Line 1578, Address: 0x337148, Func Offset: 0x8
	// Line 1583, Address: 0x337150, Func Offset: 0x10
	// Line 1586, Address: 0x337198, Func Offset: 0x58
	// Line 1587, Address: 0x337218, Func Offset: 0xd8
	// Line 1589, Address: 0x337220, Func Offset: 0xe0
	// Line 1591, Address: 0x337228, Func Offset: 0xe8
	// Line 1595, Address: 0x337230, Func Offset: 0xf0
	// Line 1597, Address: 0x337238, Func Offset: 0xf8
	// Line 1598, Address: 0x337288, Func Offset: 0x148
	// Line 1600, Address: 0x337290, Func Offset: 0x150
	// Line 1601, Address: 0x3372b4, Func Offset: 0x174
	// Line 1602, Address: 0x3372bc, Func Offset: 0x17c
	// Line 1603, Address: 0x3372c0, Func Offset: 0x180
	// Line 1604, Address: 0x3372c4, Func Offset: 0x184
	// Line 1605, Address: 0x3372cc, Func Offset: 0x18c
	// Line 1606, Address: 0x3372d0, Func Offset: 0x190
	// Line 1614, Address: 0x3372d8, Func Offset: 0x198
	// Line 1613, Address: 0x3372e0, Func Offset: 0x1a0
	// Line 1614, Address: 0x3372e4, Func Offset: 0x1a4
	// Func End, Address: 0x3372ec, Func Offset: 0x1ac
}

// distance_cull__13z_disco_floorFv
// Start address: 0x3372f0
void z_disco_floor::distance_cull()
{
	xVec3& cam_loc;
	xVec3 offset;
	float32 min_glow_dist;
	float32 max_glow_dist;
	// Line 1500, Address: 0x3372f0, Func Offset: 0
	// Line 1498, Address: 0x3372f4, Func Offset: 0x4
	// Line 1500, Address: 0x3372f8, Func Offset: 0x8
	// Line 1499, Address: 0x3372fc, Func Offset: 0xc
	// Line 1500, Address: 0x337300, Func Offset: 0x10
	// Line 1499, Address: 0x337308, Func Offset: 0x18
	// Line 1500, Address: 0x33730c, Func Offset: 0x1c
	// Line 1504, Address: 0x337310, Func Offset: 0x20
	// Line 1500, Address: 0x337314, Func Offset: 0x24
	// Line 1501, Address: 0x337364, Func Offset: 0x74
	// Line 1500, Address: 0x337368, Func Offset: 0x78
	// Line 1504, Address: 0x33736c, Func Offset: 0x7c
	// Line 1501, Address: 0x337374, Func Offset: 0x84
	// Line 1504, Address: 0x337388, Func Offset: 0x98
	// Line 1501, Address: 0x33738c, Func Offset: 0x9c
	// Line 1504, Address: 0x337394, Func Offset: 0xa4
	// Line 1507, Address: 0x3373a8, Func Offset: 0xb8
	// Line 1508, Address: 0x3373ac, Func Offset: 0xbc
	// Line 1507, Address: 0x3373b0, Func Offset: 0xc0
	// Line 1508, Address: 0x3373b4, Func Offset: 0xc4
	// Line 1507, Address: 0x3373bc, Func Offset: 0xcc
	// Line 1508, Address: 0x3373c0, Func Offset: 0xd0
	// Line 1509, Address: 0x3373c4, Func Offset: 0xd4
	// Line 1510, Address: 0x3373d4, Func Offset: 0xe4
	// Line 1511, Address: 0x3373e0, Func Offset: 0xf0
	// Line 1512, Address: 0x3373f0, Func Offset: 0x100
	// Line 1513, Address: 0x3373fc, Func Offset: 0x10c
	// Line 1515, Address: 0x337408, Func Offset: 0x118
	// Line 1516, Address: 0x337428, Func Offset: 0x138
	// Func End, Address: 0x337430, Func Offset: 0x140
}

// refresh_bound__13z_disco_floorFv
// Start address: 0x337430
void z_disco_floor::refresh_bound()
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
	// Line 1426, Address: 0x337430, Func Offset: 0
	// Line 1433, Address: 0x337434, Func Offset: 0x4
	// Line 1426, Address: 0x337438, Func Offset: 0x8
	// Line 1433, Address: 0x33743c, Func Offset: 0xc
	// Line 1426, Address: 0x337440, Func Offset: 0x10
	// Line 1433, Address: 0x33745c, Func Offset: 0x2c
	// Line 1434, Address: 0x33747c, Func Offset: 0x4c
	// Line 1433, Address: 0x337480, Func Offset: 0x50
	// Line 1434, Address: 0x337484, Func Offset: 0x54
	// Line 1433, Address: 0x337488, Func Offset: 0x58
	// Line 1434, Address: 0x33748c, Func Offset: 0x5c
	// Line 1435, Address: 0x3374b8, Func Offset: 0x88
	// Line 1436, Address: 0x3374f4, Func Offset: 0xc4
	// Line 1435, Address: 0x3374f8, Func Offset: 0xc8
	// Line 1436, Address: 0x337500, Func Offset: 0xd0
	// Line 1435, Address: 0x337508, Func Offset: 0xd8
	// Line 1436, Address: 0x33750c, Func Offset: 0xdc
	// Line 1438, Address: 0x337538, Func Offset: 0x108
	// Line 1439, Address: 0x33754c, Func Offset: 0x11c
	// Line 1442, Address: 0x337558, Func Offset: 0x128
	// Line 1444, Address: 0x3375d4, Func Offset: 0x1a4
	// Line 1445, Address: 0x337654, Func Offset: 0x224
	// Line 1444, Address: 0x33765c, Func Offset: 0x22c
	// Line 1445, Address: 0x337660, Func Offset: 0x230
	// Line 1446, Address: 0x337730, Func Offset: 0x300
	// Line 1447, Address: 0x337740, Func Offset: 0x310
	// Line 1450, Address: 0x337750, Func Offset: 0x320
	// Line 1452, Address: 0x337760, Func Offset: 0x330
	// Line 1450, Address: 0x337764, Func Offset: 0x334
	// Line 1451, Address: 0x33776c, Func Offset: 0x33c
	// Line 1453, Address: 0x337778, Func Offset: 0x348
	// Line 1452, Address: 0x337780, Func Offset: 0x350
	// Line 1453, Address: 0x337784, Func Offset: 0x354
	// Line 1450, Address: 0x337788, Func Offset: 0x358
	// Line 1453, Address: 0x337794, Func Offset: 0x364
	// Line 1450, Address: 0x337798, Func Offset: 0x368
	// Line 1453, Address: 0x33779c, Func Offset: 0x36c
	// Line 1450, Address: 0x3377a0, Func Offset: 0x370
	// Line 1453, Address: 0x3377a4, Func Offset: 0x374
	// Line 1450, Address: 0x3377a8, Func Offset: 0x378
	// Line 1453, Address: 0x3377ac, Func Offset: 0x37c
	// Line 1450, Address: 0x3377b0, Func Offset: 0x380
	// Line 1453, Address: 0x3377b4, Func Offset: 0x384
	// Line 1450, Address: 0x3377b8, Func Offset: 0x388
	// Line 1453, Address: 0x3377bc, Func Offset: 0x38c
	// Line 1450, Address: 0x3377c0, Func Offset: 0x390
	// Line 1453, Address: 0x3377c4, Func Offset: 0x394
	// Line 1450, Address: 0x3377c8, Func Offset: 0x398
	// Line 1453, Address: 0x3377cc, Func Offset: 0x39c
	// Line 1450, Address: 0x3377d0, Func Offset: 0x3a0
	// Line 1453, Address: 0x3377d4, Func Offset: 0x3a4
	// Line 1451, Address: 0x3377d8, Func Offset: 0x3a8
	// Line 1453, Address: 0x3377dc, Func Offset: 0x3ac
	// Line 1450, Address: 0x3377e4, Func Offset: 0x3b4
	// Line 1452, Address: 0x3377fc, Func Offset: 0x3cc
	// Line 1450, Address: 0x337800, Func Offset: 0x3d0
	// Line 1451, Address: 0x337840, Func Offset: 0x410
	// Line 1453, Address: 0x3378cc, Func Offset: 0x49c
	// Line 1460, Address: 0x3378fc, Func Offset: 0x4cc
	// Line 1462, Address: 0x337904, Func Offset: 0x4d4
	// Line 1458, Address: 0x33790c, Func Offset: 0x4dc
	// Line 1453, Address: 0x337914, Func Offset: 0x4e4
	// Line 1455, Address: 0x337918, Func Offset: 0x4e8
	// Line 1456, Address: 0x337924, Func Offset: 0x4f4
	// Line 1458, Address: 0x337930, Func Offset: 0x500
	// Line 1459, Address: 0x3379a8, Func Offset: 0x578
	// Line 1460, Address: 0x3379b8, Func Offset: 0x588
	// Line 1461, Address: 0x337a34, Func Offset: 0x604
	// Line 1462, Address: 0x337a48, Func Offset: 0x618
	// Line 1463, Address: 0x337ac4, Func Offset: 0x694
	// Line 1464, Address: 0x337ad4, Func Offset: 0x6a4
	// Line 1465, Address: 0x337ae8, Func Offset: 0x6b8
	// Line 1468, Address: 0x337af8, Func Offset: 0x6c8
	// Line 1469, Address: 0x337b10, Func Offset: 0x6e0
	// Line 1470, Address: 0x337b30, Func Offset: 0x700
	// Line 1471, Address: 0x337b3c, Func Offset: 0x70c
	// Line 1473, Address: 0x337b68, Func Offset: 0x738
	// Line 1474, Address: 0x337b88, Func Offset: 0x758
	// Func End, Address: 0x337bcc, Func Offset: 0x79c
}

// refresh_spheres__13z_disco_floorFv
// Start address: 0x337bd0
void z_disco_floor::refresh_spheres()
{
	int32 group;
	tile_data* it;
	tile_data* end;
	RwSphere& msphere;
	xVec3& scale;
	// Line 1372, Address: 0x337bd0, Func Offset: 0
	// Line 1373, Address: 0x337be8, Func Offset: 0x18
	// Line 1372, Address: 0x337bec, Func Offset: 0x1c
	// Line 1375, Address: 0x337bf8, Func Offset: 0x28
	// Line 1376, Address: 0x337c10, Func Offset: 0x40
	// Line 1379, Address: 0x337c20, Func Offset: 0x50
	// Line 1384, Address: 0x337c30, Func Offset: 0x60
	// Line 1379, Address: 0x337c34, Func Offset: 0x64
	// Line 1383, Address: 0x337c38, Func Offset: 0x68
	// Line 1380, Address: 0x337c3c, Func Offset: 0x6c
	// Line 1383, Address: 0x337c40, Func Offset: 0x70
	// Line 1384, Address: 0x337c44, Func Offset: 0x74
	// Line 1386, Address: 0x337c54, Func Offset: 0x84
	// Line 1387, Address: 0x337c70, Func Offset: 0xa0
	// Line 1388, Address: 0x337c84, Func Offset: 0xb4
	// Line 1389, Address: 0x337c90, Func Offset: 0xc0
	// Line 1391, Address: 0x337ca0, Func Offset: 0xd0
	// Line 1392, Address: 0x337cac, Func Offset: 0xdc
	// Line 1399, Address: 0x337cb0, Func Offset: 0xe0
	// Line 1395, Address: 0x337cb4, Func Offset: 0xe4
	// Line 1399, Address: 0x337cb8, Func Offset: 0xe8
	// Line 1395, Address: 0x337cc4, Func Offset: 0xf4
	// Line 1396, Address: 0x337cd8, Func Offset: 0x108
	// Line 1399, Address: 0x337ce0, Func Offset: 0x110
	// Line 1400, Address: 0x337cec, Func Offset: 0x11c
	// Line 1402, Address: 0x337cf8, Func Offset: 0x128
	// Line 1403, Address: 0x337d08, Func Offset: 0x138
	// Line 1404, Address: 0x337d18, Func Offset: 0x148
	// Func End, Address: 0x337d38, Func Offset: 0x168
}

// set_state_delay__13z_disco_floorFf
// Start address: 0x337d40
void z_disco_floor::set_state_delay(float32 s)
{
	// Line 1369, Address: 0x337d40, Func Offset: 0
	// Func End, Address: 0x337d48, Func Offset: 0x8
}

// set_transition_delay__13z_disco_floorFf
// Start address: 0x337d50
void z_disco_floor::set_transition_delay(float32 s)
{
	// Line 1364, Address: 0x337d50, Func Offset: 0
	// Func End, Address: 0x337d58, Func Offset: 0x8
}

// set_state_range__13z_disco_floorFiib
// Start address: 0x337d60
void z_disco_floor::set_state_range(int32 min, int32 max, uint8 immediate)
{
	uint32 min_state;
	uint32 max_state;
	uint32 newstate;
	uint32 newstate;
	// Line 1342, Address: 0x337d60, Func Offset: 0
	// Line 1343, Address: 0x337d84, Func Offset: 0x24
	// Line 1344, Address: 0x337da0, Func Offset: 0x40
	// Line 1343, Address: 0x337da8, Func Offset: 0x48
	// Line 1344, Address: 0x337dac, Func Offset: 0x4c
	// Line 1345, Address: 0x337dbc, Func Offset: 0x5c
	// Line 1346, Address: 0x337dd4, Func Offset: 0x74
	// Line 1347, Address: 0x337dd8, Func Offset: 0x78
	// Line 1349, Address: 0x337ddc, Func Offset: 0x7c
	// Line 1351, Address: 0x337de4, Func Offset: 0x84
	// Line 1352, Address: 0x337df0, Func Offset: 0x90
	// Line 1351, Address: 0x337df4, Func Offset: 0x94
	// Line 1352, Address: 0x337df8, Func Offset: 0x98
	// Line 1353, Address: 0x337e08, Func Offset: 0xa8
	// Line 1356, Address: 0x337e10, Func Offset: 0xb0
	// Line 1357, Address: 0x337e1c, Func Offset: 0xbc
	// Line 1356, Address: 0x337e20, Func Offset: 0xc0
	// Line 1357, Address: 0x337e24, Func Offset: 0xc4
	// Line 1358, Address: 0x337e34, Func Offset: 0xd4
	// Line 1359, Address: 0x337e38, Func Offset: 0xd8
	// Func End, Address: 0x337e54, Func Offset: 0xf4
}

// set_state__13z_disco_floorFUib
// Start address: 0x337e60
void z_disco_floor::set_state(uint32 state, uint8 immediate)
{
	uint32 r;
	int32 bit_index;
	// Line 1309, Address: 0x337e60, Func Offset: 0
	// Line 1310, Address: 0x337e88, Func Offset: 0x28
	// Line 1311, Address: 0x337ea4, Func Offset: 0x44
	// Line 1313, Address: 0x337eb8, Func Offset: 0x58
	// Line 1315, Address: 0x337ec0, Func Offset: 0x60
	// Line 1316, Address: 0x337ec8, Func Offset: 0x68
	// Line 1317, Address: 0x337ed0, Func Offset: 0x70
	// Line 1318, Address: 0x337fa8, Func Offset: 0x148
	// Line 1319, Address: 0x337fc8, Func Offset: 0x168
	// Line 1322, Address: 0x337fd0, Func Offset: 0x170
	// Line 1323, Address: 0x337fd4, Func Offset: 0x174
	// Line 1324, Address: 0x337fd8, Func Offset: 0x178
	// Line 1328, Address: 0x3380b0, Func Offset: 0x250
	// Line 1329, Address: 0x3380bc, Func Offset: 0x25c
	// Func End, Address: 0x3380e4, Func Offset: 0x284
}

// update__13z_disco_floorFR6xScenef
// Start address: 0x3380f0
void z_disco_floor::update(float32 dt)
{
	// Line 1267, Address: 0x3380f0, Func Offset: 0
	// Line 1270, Address: 0x338108, Func Offset: 0x18
	// Line 1273, Address: 0x338120, Func Offset: 0x30
	// Line 1274, Address: 0x338128, Func Offset: 0x38
	// Line 1276, Address: 0x338134, Func Offset: 0x44
	// Line 1279, Address: 0x338274, Func Offset: 0x184
	// Line 1282, Address: 0x338280, Func Offset: 0x190
	// Line 1283, Address: 0x338294, Func Offset: 0x1a4
	// Line 1284, Address: 0x338340, Func Offset: 0x250
	// Line 1285, Address: 0x338354, Func Offset: 0x264
	// Line 1306, Address: 0x338360, Func Offset: 0x270
	// Func End, Address: 0x338378, Func Offset: 0x288
}

// setup__13z_disco_floorFv
// Start address: 0x338380
void z_disco_floor::setup()
{
	uint32 data_size;
	uint8* buffer;
	int32 group;
	uint32 i;
	xSurface&* surf;
	int32 i;
	uint32 j;
	// Line 1194, Address: 0x338380, Func Offset: 0
	// Line 1195, Address: 0x33839c, Func Offset: 0x1c
	// Line 1198, Address: 0x3383a4, Func Offset: 0x24
	// Line 1206, Address: 0x3383b4, Func Offset: 0x34
	// Line 1208, Address: 0x3383bc, Func Offset: 0x3c
	// Line 1209, Address: 0x3383c0, Func Offset: 0x40
	// Line 1208, Address: 0x3383c4, Func Offset: 0x44
	// Line 1209, Address: 0x3383cc, Func Offset: 0x4c
	// Line 1211, Address: 0x33844c, Func Offset: 0xcc
	// Line 1212, Address: 0x338454, Func Offset: 0xd4
	// Line 1216, Address: 0x338458, Func Offset: 0xd8
	// Line 1215, Address: 0x33845c, Func Offset: 0xdc
	// Line 1216, Address: 0x338460, Func Offset: 0xe0
	// Line 1215, Address: 0x338464, Func Offset: 0xe4
	// Line 1216, Address: 0x33846c, Func Offset: 0xec
	// Line 1217, Address: 0x33847c, Func Offset: 0xfc
	// Line 1219, Address: 0x338488, Func Offset: 0x108
	// Line 1221, Address: 0x33848c, Func Offset: 0x10c
	// Line 1222, Address: 0x3384a0, Func Offset: 0x120
	// Line 1225, Address: 0x3384b0, Func Offset: 0x130
	// Line 1227, Address: 0x3384c8, Func Offset: 0x148
	// Line 1228, Address: 0x3384e0, Func Offset: 0x160
	// Line 1233, Address: 0x3384f8, Func Offset: 0x178
	// Line 1235, Address: 0x338508, Func Offset: 0x188
	// Line 1238, Address: 0x338520, Func Offset: 0x1a0
	// Line 1240, Address: 0x338528, Func Offset: 0x1a8
	// Line 1238, Address: 0x33852c, Func Offset: 0x1ac
	// Line 1239, Address: 0x338530, Func Offset: 0x1b0
	// Line 1240, Address: 0x338540, Func Offset: 0x1c0
	// Line 1242, Address: 0x338578, Func Offset: 0x1f8
	// Line 1243, Address: 0x338580, Func Offset: 0x200
	// Line 1244, Address: 0x338588, Func Offset: 0x208
	// Line 1246, Address: 0x3385e0, Func Offset: 0x260
	// Line 1248, Address: 0x338668, Func Offset: 0x2e8
	// Func End, Address: 0x338688, Func Offset: 0x308
}

// load__13z_disco_floorFR19z_disco_floor_asset
// Start address: 0x338690
void z_disco_floor::load(z_disco_floor_asset& asset)
{
	uint8* data;
	uint32* state_offsets;
	uint32 i;
	// Line 1158, Address: 0x338690, Func Offset: 0
	// Line 1159, Address: 0x3386a8, Func Offset: 0x18
	// Line 1160, Address: 0x3386b0, Func Offset: 0x20
	// Line 1162, Address: 0x3386b4, Func Offset: 0x24
	// Line 1160, Address: 0x3386b8, Func Offset: 0x28
	// Line 1162, Address: 0x3386bc, Func Offset: 0x2c
	// Line 1161, Address: 0x3386c0, Func Offset: 0x30
	// Line 1162, Address: 0x3386c4, Func Offset: 0x34
	// Line 1163, Address: 0x3386c8, Func Offset: 0x38
	// Line 1167, Address: 0x3386d8, Func Offset: 0x48
	// Line 1164, Address: 0x3386dc, Func Offset: 0x4c
	// Line 1174, Address: 0x3386e0, Func Offset: 0x50
	// Line 1167, Address: 0x3386e4, Func Offset: 0x54
	// Line 1168, Address: 0x3386ec, Func Offset: 0x5c
	// Line 1169, Address: 0x3386f8, Func Offset: 0x68
	// Line 1174, Address: 0x338704, Func Offset: 0x74
	// Line 1176, Address: 0x338718, Func Offset: 0x88
	// Line 1175, Address: 0x338720, Func Offset: 0x90
	// Line 1176, Address: 0x338724, Func Offset: 0x94
	// Line 1177, Address: 0x338738, Func Offset: 0xa8
	// Line 1179, Address: 0x338768, Func Offset: 0xd8
	// Line 1180, Address: 0x338788, Func Offset: 0xf8
	// Line 1182, Address: 0x3387a8, Func Offset: 0x118
	// Line 1183, Address: 0x3387c8, Func Offset: 0x138
	// Line 1185, Address: 0x3387e8, Func Offset: 0x158
	// Line 1188, Address: 0x338808, Func Offset: 0x178
	// Line 1191, Address: 0x338838, Func Offset: 0x1a8
	// Func End, Address: 0x338850, Func Offset: 0x1c0
}

// init__13z_disco_floorFPvPv
// Start address: 0x338850
void init(void* ent, void* asset)
{
	// Line 1154, Address: 0x338850, Func Offset: 0
	// Func End, Address: 0x338858, Func Offset: 0x8
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
	// Line 1092, Address: 0x338860, Func Offset: 0
	// Line 1095, Address: 0x338864, Func Offset: 0x4
	// Line 1092, Address: 0x338868, Func Offset: 0x8
	// Line 1093, Address: 0x33886c, Func Offset: 0xc
	// Line 1092, Address: 0x338870, Func Offset: 0x10
	// Line 1093, Address: 0x3388a8, Func Offset: 0x48
	// Line 1095, Address: 0x3388ac, Func Offset: 0x4c
	// Line 1098, Address: 0x3388b4, Func Offset: 0x54
	// Line 1100, Address: 0x3388c8, Func Offset: 0x68
	// Line 1105, Address: 0x3388cc, Func Offset: 0x6c
	// Line 1100, Address: 0x3388d0, Func Offset: 0x70
	// Line 1101, Address: 0x3388d4, Func Offset: 0x74
	// Line 1102, Address: 0x3388dc, Func Offset: 0x7c
	// Line 1107, Address: 0x338900, Func Offset: 0xa0
	// Line 1109, Address: 0x338918, Func Offset: 0xb8
	// Line 1110, Address: 0x338944, Func Offset: 0xe4
	// Line 1113, Address: 0x338958, Func Offset: 0xf8
	// Line 1115, Address: 0x338960, Func Offset: 0x100
	// Line 1116, Address: 0x338964, Func Offset: 0x104
	// Line 1115, Address: 0x338968, Func Offset: 0x108
	// Line 1116, Address: 0x33896c, Func Offset: 0x10c
	// Line 1119, Address: 0x338978, Func Offset: 0x118
	// Line 1118, Address: 0x33897c, Func Offset: 0x11c
	// Line 1119, Address: 0x338980, Func Offset: 0x120
	// Line 1122, Address: 0x338984, Func Offset: 0x124
	// Line 1119, Address: 0x338988, Func Offset: 0x128
	// Line 1118, Address: 0x33898c, Func Offset: 0x12c
	// Line 1122, Address: 0x33899c, Func Offset: 0x13c
	// Line 1123, Address: 0x3389b8, Func Offset: 0x158
	// Line 1125, Address: 0x3389dc, Func Offset: 0x17c
	// Line 1126, Address: 0x3389ec, Func Offset: 0x18c
	// Line 1128, Address: 0x3389f8, Func Offset: 0x198
	// Line 1129, Address: 0x338a00, Func Offset: 0x1a0
	// Line 1131, Address: 0x338a08, Func Offset: 0x1a8
	// Line 1132, Address: 0x338a0c, Func Offset: 0x1ac
	// Line 1136, Address: 0x338a88, Func Offset: 0x228
	// Line 1135, Address: 0x338a8c, Func Offset: 0x22c
	// Line 1136, Address: 0x338a94, Func Offset: 0x234
	// Line 1138, Address: 0x338a98, Func Offset: 0x238
	// Line 1139, Address: 0x338afc, Func Offset: 0x29c
	// Line 1141, Address: 0x338c30, Func Offset: 0x3d0
	// Line 1140, Address: 0x338c34, Func Offset: 0x3d4
	// Line 1141, Address: 0x338c38, Func Offset: 0x3d8
	// Line 1142, Address: 0x338c44, Func Offset: 0x3e4
	// Line 1143, Address: 0x338c54, Func Offset: 0x3f4
	// Line 1142, Address: 0x338c58, Func Offset: 0x3f8
	// Line 1143, Address: 0x338c64, Func Offset: 0x404
	// Line 1144, Address: 0x338c80, Func Offset: 0x420
	// Line 1146, Address: 0x338ca8, Func Offset: 0x448
	// Line 1147, Address: 0x338ea0, Func Offset: 0x640
	// Func End, Address: 0x338ee4, Func Offset: 0x684
}

// clip_render__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP8RpAtomicR7xMat4x3RC7xSphere10iColor_tag
// Start address: 0x338ef0
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color)
{
	RpGeometry* geom;
	uint32 flags;
	int32 materials;
	int32 i;
	// Line 855, Address: 0x338ef0, Func Offset: 0
	// Line 858, Address: 0x338ef4, Func Offset: 0x4
	// Line 855, Address: 0x338ef8, Func Offset: 0x8
	// Line 856, Address: 0x338f0c, Func Offset: 0x1c
	// Line 858, Address: 0x338f10, Func Offset: 0x20
	// Line 857, Address: 0x338f14, Func Offset: 0x24
	// Line 858, Address: 0x338f18, Func Offset: 0x28
	// Line 859, Address: 0x338f20, Func Offset: 0x30
	// Line 862, Address: 0x338f30, Func Offset: 0x40
	// Line 863, Address: 0x338f38, Func Offset: 0x48
	// Line 864, Address: 0x338f3c, Func Offset: 0x4c
	// Line 867, Address: 0x338f68, Func Offset: 0x78
	// Line 868, Address: 0x3390f4, Func Offset: 0x204
	// Line 867, Address: 0x3390f8, Func Offset: 0x208
	// Line 868, Address: 0x3390fc, Func Offset: 0x20c
	// Line 867, Address: 0x339100, Func Offset: 0x210
	// Line 868, Address: 0x339124, Func Offset: 0x234
	// Line 869, Address: 0x33912c, Func Offset: 0x23c
	// Line 871, Address: 0x339130, Func Offset: 0x240
	// Line 872, Address: 0x3391ec, Func Offset: 0x2fc
	// Func End, Address: 0x339200, Func Offset: 0x310
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
	// Line 918, Address: 0x339200, Func Offset: 0
	// Line 917, Address: 0x339204, Func Offset: 0x4
	// Line 918, Address: 0x339208, Func Offset: 0x8
	// Line 920, Address: 0x33920c, Func Offset: 0xc
	// Line 919, Address: 0x339214, Func Offset: 0x14
	// Line 920, Address: 0x339218, Func Offset: 0x18
	// Line 939, Address: 0x33923c, Func Offset: 0x3c
	// Line 920, Address: 0x339240, Func Offset: 0x40
	// Line 939, Address: 0x339244, Func Offset: 0x44
	// Line 920, Address: 0x339254, Func Offset: 0x54
	// Line 944, Address: 0x339264, Func Offset: 0x64
	// Line 920, Address: 0x339268, Func Offset: 0x68
	// Line 944, Address: 0x339278, Func Offset: 0x78
	// Line 920, Address: 0x33927c, Func Offset: 0x7c
	// Line 944, Address: 0x339284, Func Offset: 0x84
	// Line 939, Address: 0x33928c, Func Offset: 0x8c
	// Line 944, Address: 0x339290, Func Offset: 0x90
	// Line 942, Address: 0x339298, Func Offset: 0x98
	// Line 944, Address: 0x33929c, Func Offset: 0x9c
	// Line 939, Address: 0x3392a4, Func Offset: 0xa4
	// Line 944, Address: 0x3392a8, Func Offset: 0xa8
	// Line 939, Address: 0x3392b0, Func Offset: 0xb0
	// Line 944, Address: 0x3392b4, Func Offset: 0xb4
	// Line 947, Address: 0x3392d0, Func Offset: 0xd0
	// Line 948, Address: 0x3392d4, Func Offset: 0xd4
	// Line 949, Address: 0x339320, Func Offset: 0x120
	// Line 951, Address: 0x339370, Func Offset: 0x170
	// Line 952, Address: 0x339378, Func Offset: 0x178
	// Func End, Address: 0x339380, Func Offset: 0x180
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
	// Line 1050, Address: 0x339400, Func Offset: 0
	// Line 1054, Address: 0x339404, Func Offset: 0x4
	// Line 1050, Address: 0x339408, Func Offset: 0x8
	// Line 1051, Address: 0x33940c, Func Offset: 0xc
	// Line 1050, Address: 0x339410, Func Offset: 0x10
	// Line 1054, Address: 0x339414, Func Offset: 0x14
	// Line 1050, Address: 0x339418, Func Offset: 0x18
	// Line 1051, Address: 0x339438, Func Offset: 0x38
	// Line 1054, Address: 0x339440, Func Offset: 0x40
	// Line 1056, Address: 0x33944c, Func Offset: 0x4c
	// Line 1061, Address: 0x339450, Func Offset: 0x50
	// Line 1056, Address: 0x339454, Func Offset: 0x54
	// Line 1057, Address: 0x339458, Func Offset: 0x58
	// Line 1058, Address: 0x339460, Func Offset: 0x60
	// Line 1063, Address: 0x339484, Func Offset: 0x84
	// Line 1065, Address: 0x339498, Func Offset: 0x98
	// Line 1066, Address: 0x3394c4, Func Offset: 0xc4
	// Line 1069, Address: 0x3394d8, Func Offset: 0xd8
	// Line 1072, Address: 0x3394e0, Func Offset: 0xe0
	// Line 1073, Address: 0x339500, Func Offset: 0x100
	// Line 1075, Address: 0x339514, Func Offset: 0x114
	// Line 1076, Address: 0x339524, Func Offset: 0x124
	// Line 1077, Address: 0x339530, Func Offset: 0x130
	// Line 1078, Address: 0x339538, Func Offset: 0x138
	// Line 1080, Address: 0x339540, Func Offset: 0x140
	// Line 1081, Address: 0x339544, Func Offset: 0x144
	// Line 1083, Address: 0x3395c0, Func Offset: 0x1c0
	// Line 1084, Address: 0x3396f4, Func Offset: 0x2f4
	// Line 1085, Address: 0x339708, Func Offset: 0x308
	// Line 1086, Address: 0x339718, Func Offset: 0x318
	// Line 1088, Address: 0x339740, Func Offset: 0x340
	// Line 1089, Address: 0x339938, Func Offset: 0x538
	// Func End, Address: 0x339968, Func Offset: 0x568
}

// destroy__13z_disco_floorFv
// Start address: 0x339970
void destroy()
{
	// Line 989, Address: 0x339970, Func Offset: 0
	// Line 990, Address: 0x339974, Func Offset: 0x4
	// Line 989, Address: 0x339978, Func Offset: 0x8
	// Line 990, Address: 0x33997c, Func Offset: 0xc
	// Line 989, Address: 0x339980, Func Offset: 0x10
	// Line 990, Address: 0x339988, Func Offset: 0x18
	// Line 991, Address: 0x339990, Func Offset: 0x20
	// Line 992, Address: 0x339a30, Func Offset: 0xc0
	// Func End, Address: 0x339a48, Func Offset: 0xd8
}

// post_setup__13z_disco_floorFv
// Start address: 0x339a50
void post_setup()
{
	// Line 984, Address: 0x339a50, Func Offset: 0
	// Line 985, Address: 0x339a54, Func Offset: 0x4
	// Line 984, Address: 0x339a58, Func Offset: 0x8
	// Line 985, Address: 0x339a5c, Func Offset: 0xc
	// Line 984, Address: 0x339a60, Func Offset: 0x10
	// Line 985, Address: 0x339a7c, Func Offset: 0x2c
	// Line 986, Address: 0x339c88, Func Offset: 0x238
	// Func End, Address: 0x339cb0, Func Offset: 0x260
}

// compare_buckets__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFPCvPCv
// Start address: 0x339cb0
int32 compare_buckets(void* e1, void* e2)
{
	// Line 958, Address: 0x339cb0, Func Offset: 0
	// Line 959, Address: 0x339cb8, Func Offset: 0x8
	// Func End, Address: 0x339cc0, Func Offset: 0x10
}

// insert_atomic__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP14xModelInstance
// Start address: 0x339cc0
void clone_pipe_data::insert_atomic(xModelInstance* model)
{
	RpAtomic* atomic;
	bucket_data* it;
	bucket_data* end;
	// Line 820, Address: 0x339cc0, Func Offset: 0
	// Line 824, Address: 0x339cd4, Func Offset: 0x14
	// Line 821, Address: 0x339cd8, Func Offset: 0x18
	// Line 824, Address: 0x339cdc, Func Offset: 0x1c
	// Line 825, Address: 0x339ce8, Func Offset: 0x28
	// Line 827, Address: 0x339cf0, Func Offset: 0x30
	// Line 829, Address: 0x339cfc, Func Offset: 0x3c
	// Line 830, Address: 0x339d04, Func Offset: 0x44
	// Line 831, Address: 0x339d0c, Func Offset: 0x4c
	// Line 832, Address: 0x339d10, Func Offset: 0x50
	// Line 836, Address: 0x339d20, Func Offset: 0x60
	// Line 838, Address: 0x339d24, Func Offset: 0x64
	// Line 841, Address: 0x339d28, Func Offset: 0x68
	// Line 838, Address: 0x339d2c, Func Offset: 0x6c
	// Line 839, Address: 0x339d30, Func Offset: 0x70
	// Line 841, Address: 0x339d3c, Func Offset: 0x7c
	// Line 852, Address: 0x339e10, Func Offset: 0x150
	// Func End, Address: 0x339e28, Func Offset: 0x168
}

// init__13z_disco_floorFv
// Start address: 0x339e30
void init()
{
	// Line 976, Address: 0x339e30, Func Offset: 0
	// Line 977, Address: 0x339e34, Func Offset: 0x4
	// Line 976, Address: 0x339e38, Func Offset: 0x8
	// Line 977, Address: 0x339e3c, Func Offset: 0xc
	// Line 980, Address: 0x339eb0, Func Offset: 0x80
	// Line 981, Address: 0x339eb8, Func Offset: 0x88
	// Func End, Address: 0x339ec4, Func Offset: 0x94
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
	// Line 387, Address: 0x339ed0, Func Offset: 0
	// Line 392, Address: 0x339edc, Func Offset: 0xc
	// Line 393, Address: 0x339ef0, Func Offset: 0x20
	// Line 394, Address: 0x339ef8, Func Offset: 0x28
	// Line 395, Address: 0x339f04, Func Offset: 0x34
	// Line 394, Address: 0x339f0c, Func Offset: 0x3c
	// Line 395, Address: 0x339f10, Func Offset: 0x40
	// Line 394, Address: 0x339f1c, Func Offset: 0x4c
	// Line 395, Address: 0x339fbc, Func Offset: 0xec
	// Line 396, Address: 0x33a068, Func Offset: 0x198
	// Line 397, Address: 0x33a1cc, Func Offset: 0x2fc
	// Line 398, Address: 0x33a1d0, Func Offset: 0x300
	// Line 400, Address: 0x33a1d4, Func Offset: 0x304
	// Line 396, Address: 0x33a1d8, Func Offset: 0x308
	// Line 397, Address: 0x33a1dc, Func Offset: 0x30c
	// Line 398, Address: 0x33a1e0, Func Offset: 0x310
	// Line 399, Address: 0x33a1e4, Func Offset: 0x314
	// Line 400, Address: 0x33a1e8, Func Offset: 0x318
	// Line 396, Address: 0x33a1ec, Func Offset: 0x31c
	// Line 397, Address: 0x33a244, Func Offset: 0x374
	// Line 398, Address: 0x33a24c, Func Offset: 0x37c
	// Line 399, Address: 0x33a254, Func Offset: 0x384
	// Line 400, Address: 0x33a25c, Func Offset: 0x38c
	// Line 401, Address: 0x33a260, Func Offset: 0x390
	// Func End, Address: 0x33a270, Func Offset: 0x3a0
}

// update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf
// Start address: 0x33a2a0
void update_state(z_disco_floor& df, float32 dt)
{
	// Line 358, Address: 0x33a2a0, Func Offset: 0
	// Line 359, Address: 0x33a2cc, Func Offset: 0x2c
	// Line 360, Address: 0x33a2e0, Func Offset: 0x40
	// Line 361, Address: 0x33a2ec, Func Offset: 0x4c
	// Line 362, Address: 0x33a2fc, Func Offset: 0x5c
	// Line 363, Address: 0x33a300, Func Offset: 0x60
	// Line 364, Address: 0x33a304, Func Offset: 0x64
	// Line 365, Address: 0x33a320, Func Offset: 0x80
	// Line 367, Address: 0x33a334, Func Offset: 0x94
	// Line 368, Address: 0x33a358, Func Offset: 0xb8
	// Line 370, Address: 0x33a360, Func Offset: 0xc0
	// Line 372, Address: 0x33a374, Func Offset: 0xd4
	// Line 373, Address: 0x33a398, Func Offset: 0xf8
	// Line 375, Address: 0x33a3a0, Func Offset: 0x100
	// Line 376, Address: 0x33a478, Func Offset: 0x1d8
	// Line 378, Address: 0x33a488, Func Offset: 0x1e8
	// Line 379, Address: 0x33a490, Func Offset: 0x1f0
	// Line 380, Address: 0x33a49c, Func Offset: 0x1fc
	// Line 381, Address: 0x33a4bc, Func Offset: 0x21c
	// Line 382, Address: 0x33a4c8, Func Offset: 0x228
	// Line 383, Address: 0x33a4d0, Func Offset: 0x230
	// Line 384, Address: 0x33a4d8, Func Offset: 0x238
	// Func End, Address: 0x33a504, Func Offset: 0x264
}

// play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a510
void play_sound(z_disco_floor& df)
{
	float32 pitch;
	float32 pitch_offset;
	// Line 307, Address: 0x33a510, Func Offset: 0
	// Line 313, Address: 0x33a514, Func Offset: 0x4
	// Line 307, Address: 0x33a518, Func Offset: 0x8
	// Line 309, Address: 0x33a51c, Func Offset: 0xc
	// Line 307, Address: 0x33a520, Func Offset: 0x10
	// Line 313, Address: 0x33a524, Func Offset: 0x14
	// Line 307, Address: 0x33a528, Func Offset: 0x18
	// Line 309, Address: 0x33a530, Func Offset: 0x20
	// Line 313, Address: 0x33a548, Func Offset: 0x38
	// Line 309, Address: 0x33a550, Func Offset: 0x40
	// Line 313, Address: 0x33a55c, Func Offset: 0x4c
	// Line 309, Address: 0x33a560, Func Offset: 0x50
	// Line 313, Address: 0x33a56c, Func Offset: 0x5c
	// Line 315, Address: 0x33a588, Func Offset: 0x78
	// Line 316, Address: 0x33a594, Func Offset: 0x84
	// Line 317, Address: 0x33a5a4, Func Offset: 0x94
	// Line 318, Address: 0x33a5dc, Func Offset: 0xcc
	// Line 319, Address: 0x33a5e4, Func Offset: 0xd4
	// Line 320, Address: 0x33a5f8, Func Offset: 0xe8
	// Line 321, Address: 0x33a640, Func Offset: 0x130
	// Line 320, Address: 0x33a644, Func Offset: 0x134
	// Line 321, Address: 0x33a648, Func Offset: 0x138
	// Line 322, Address: 0x33a660, Func Offset: 0x150
	// Line 323, Address: 0x33a664, Func Offset: 0x154
	// Line 324, Address: 0x33a688, Func Offset: 0x178
	// Line 325, Address: 0x33a68c, Func Offset: 0x17c
	// Line 327, Address: 0x33a698, Func Offset: 0x188
	// Line 326, Address: 0x33a69c, Func Offset: 0x18c
	// Line 327, Address: 0x33a6a0, Func Offset: 0x190
	// Line 329, Address: 0x33a6a4, Func Offset: 0x194
	// Line 331, Address: 0x33a6a8, Func Offset: 0x198
	// Line 327, Address: 0x33a6ac, Func Offset: 0x19c
	// Line 329, Address: 0x33a6b0, Func Offset: 0x1a0
	// Line 327, Address: 0x33a6b8, Func Offset: 0x1a8
	// Line 329, Address: 0x33a6bc, Func Offset: 0x1ac
	// Line 331, Address: 0x33a6c4, Func Offset: 0x1b4
	// Line 332, Address: 0x33a6d0, Func Offset: 0x1c0
	// Line 333, Address: 0x33a6d4, Func Offset: 0x1c4
	// Line 334, Address: 0x33a6d8, Func Offset: 0x1c8
	// Line 332, Address: 0x33a6dc, Func Offset: 0x1cc
	// Line 334, Address: 0x33a6e0, Func Offset: 0x1d0
	// Line 339, Address: 0x33a72c, Func Offset: 0x21c
	// Line 341, Address: 0x33a730, Func Offset: 0x220
	// Func End, Address: 0x33a748, Func Offset: 0x238
}

// refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a750
void refresh_state(z_disco_floor& df)
{
	uint32 i;
	uint32 i;
	// Line 282, Address: 0x33a750, Func Offset: 0
	// Line 283, Address: 0x33a774, Func Offset: 0x24
	// Line 284, Address: 0x33a77c, Func Offset: 0x2c
	// Line 286, Address: 0x33a78c, Func Offset: 0x3c
	// Line 288, Address: 0x33a7a8, Func Offset: 0x58
	// Line 289, Address: 0x33a818, Func Offset: 0xc8
	// Line 290, Address: 0x33a880, Func Offset: 0x130
	// Line 291, Address: 0x33a9b0, Func Offset: 0x260
	// Line 292, Address: 0x33aae0, Func Offset: 0x390
	// Line 293, Address: 0x33abfc, Func Offset: 0x4ac
	// Line 292, Address: 0x33ac08, Func Offset: 0x4b8
	// Line 293, Address: 0x33ac0c, Func Offset: 0x4bc
	// Line 294, Address: 0x33ac18, Func Offset: 0x4c8
	// Line 297, Address: 0x33ac20, Func Offset: 0x4d0
	// Line 299, Address: 0x33ac38, Func Offset: 0x4e8
	// Line 300, Address: 0x33aca8, Func Offset: 0x558
	// Line 301, Address: 0x33add8, Func Offset: 0x688
	// Line 302, Address: 0x33aef4, Func Offset: 0x7a4
	// Line 301, Address: 0x33af00, Func Offset: 0x7b0
	// Line 302, Address: 0x33af04, Func Offset: 0x7b4
	// Line 304, Address: 0x33af10, Func Offset: 0x7c0
	// Func End, Address: 0x33af38, Func Offset: 0x7e8
}

// find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUi
// Start address: 0x33af40
uint32 find_tiles(int8* name, tile_data* tiles, uint32 size)
{
	int8 buffer[256];
	uint32 prefix_size;
	uint32 start;
	uint32 i;
	uint32 total;
	int32 j;
	// Line 178, Address: 0x33af40, Func Offset: 0
	// Line 181, Address: 0x33af60, Func Offset: 0x20
	// Line 178, Address: 0x33af64, Func Offset: 0x24
	// Line 181, Address: 0x33af68, Func Offset: 0x28
	// Line 178, Address: 0x33af6c, Func Offset: 0x2c
	// Line 181, Address: 0x33af70, Func Offset: 0x30
	// Line 182, Address: 0x33af78, Func Offset: 0x38
	// Line 183, Address: 0x33af88, Func Offset: 0x48
	// Line 185, Address: 0x33af90, Func Offset: 0x50
	// Line 186, Address: 0x33af98, Func Offset: 0x58
	// Line 188, Address: 0x33afb8, Func Offset: 0x78
	// Line 186, Address: 0x33afc0, Func Offset: 0x80
	// Line 187, Address: 0x33afc4, Func Offset: 0x84
	// Line 188, Address: 0x33afcc, Func Offset: 0x8c
	// Line 190, Address: 0x33afd0, Func Offset: 0x90
	// Line 191, Address: 0x33aff0, Func Offset: 0xb0
	// Line 192, Address: 0x33b010, Func Offset: 0xd0
	// Line 193, Address: 0x33b01c, Func Offset: 0xdc
	// Line 194, Address: 0x33b030, Func Offset: 0xf0
	// Line 195, Address: 0x33b044, Func Offset: 0x104
	// Line 197, Address: 0x33b050, Func Offset: 0x110
	// Func End, Address: 0x33b074, Func Offset: 0x134
}

// object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUiRUi
// Start address: 0x33b080
void object_prefix(int8* name, uint32& size, uint32& first)
{
	uint32 namelen;
	int32 i;
	// Line 142, Address: 0x33b080, Func Offset: 0
	// Line 143, Address: 0x33b09c, Func Offset: 0x1c
	// Line 144, Address: 0x33b0a4, Func Offset: 0x24
	// Line 145, Address: 0x33b0ac, Func Offset: 0x2c
	// Line 146, Address: 0x33b0b4, Func Offset: 0x34
	// Line 149, Address: 0x33b0c8, Func Offset: 0x48
	// Line 150, Address: 0x33b0e0, Func Offset: 0x60
	// Line 151, Address: 0x33b0ec, Func Offset: 0x6c
	// Line 152, Address: 0x33b100, Func Offset: 0x80
	// Line 153, Address: 0x33b108, Func Offset: 0x88
	// Line 154, Address: 0x33b118, Func Offset: 0x98
	// Func End, Address: 0x33b130, Func Offset: 0xb0
}

