typedef struct RpMaterial;
typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct RpAtomic;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwLLLink;
typedef struct analog_data;
typedef struct RwMatrixTag;
typedef struct RpMaterialList;
typedef struct xScene;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct xShadowSimpleCache;
typedef struct xAnimState;
typedef struct xJSPNodeInfo;
typedef struct iEnv;
typedef struct RxPS2AllPipeData;
typedef struct xEntCollis;
typedef struct xBase;
typedef struct xQuat;
typedef struct rxNodePS2AllPvtData;
typedef struct xGroup;
typedef struct RwCamera;
typedef struct RxPipeline;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpWorld;
typedef struct xGridBound;
typedef struct zCheckPoint;
typedef struct RwStream;
typedef struct zPlayerGlobals;
typedef struct xEntFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct rxNodePS2AllMatPvtData;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpCollisionTriangle;
typedef struct _class_0;
typedef struct RwResEntry;
typedef struct RpWorldSector;
typedef struct xCollis;
typedef struct RpMeshHeader;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct RwMeshCache;
typedef struct xAnimMultiFile;
typedef struct xSurface;
typedef struct xCamera;
typedef struct RpMorphTarget;
typedef struct xJSPHeader;
typedef struct zPlayerSettings;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct xVec4;
typedef struct xModelBucket;
typedef struct zEnt;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwFrame;
typedef struct xModelTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpVertexNormal;
typedef struct iFogParams;
typedef struct rxReq;
typedef struct xUpdateCullEnt;
typedef struct xModelInstance;
typedef struct RwRaster;
typedef struct RwTexture;
typedef enum RxClusterValidityReq;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct xEntShadow;
typedef struct xLightKit;
typedef struct xClumpCollBSPTree;
typedef struct xLinkAsset;
typedef struct xMat4x3;
typedef union RwStreamUnion;
typedef struct anim_coll_data;
typedef struct RpMesh;
typedef struct xAnimTable;
typedef enum RpMeshHeaderFlags;
typedef struct xBound;
typedef enum RxNodeDefEditable;
typedef struct _tagxRumble;
typedef struct xUpdateCullGroup;
typedef enum RxClusterValid;
typedef struct RpLightTie;
typedef enum RwStreamType;
typedef struct _zPortal;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct RwChunkHeaderInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct rwPS2AllFieldRec;
typedef struct xVec2;
typedef enum RwCameraProjection;
typedef struct xAnimMultiFileEntry;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimActiveEffect;
typedef enum _tagPadState;
typedef struct RxNodeDefinition;
typedef struct xEntBoulder;
typedef struct _class_1;
typedef struct xEnv;
typedef struct xAnimFile;
typedef struct xBox;
typedef struct xGlobals;
typedef struct RxClusterDefinition;
typedef struct zEntHangable;
typedef enum RwStreamAccessType;
typedef struct RwSphere;
typedef struct xAnimSingle;
typedef struct _tagxPad;
typedef enum RpWorldRenderOrder;
typedef enum RxInstanceFlags;
typedef struct xAnimMultiFileBase;
typedef struct RwTexDictionary;
typedef struct xAnimEffect;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RxOutputSpec;
typedef struct xEntAsset;
typedef struct zScene;
typedef struct _tagiPad;
typedef struct xMat3x3;
typedef struct RpSector;
typedef struct xPortalAsset;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct rwPS2AllResEntryHeader;
typedef struct rwPS2AllResEntryFormat;
typedef struct zJumpParam;
typedef struct xAnimPlay;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct RwObject;
typedef struct xModelPool;
typedef struct RxIoSpec;
typedef struct rpAtomicPS2AllLightData;
typedef struct RpLight;
typedef struct xMemPool;
typedef struct xQCData;
typedef struct RxNodeMethods;
typedef struct zPlatform;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPipelineCluster;
typedef struct xLightKitLight;
typedef struct _zEnv;
typedef struct RwFrustumPlane;
typedef struct zCutsceneMgr;
typedef union RwStreamFile;
typedef struct xEntDrive;
typedef struct RwPlane;
typedef struct xClumpCollBSPTriangle;
typedef struct xEnvAsset;
typedef struct zAssetPickupTable;
typedef struct RxCluster;
typedef struct zGlobals;
typedef struct RxPipelineNodeParam;
typedef struct zGlobalSettings;
typedef struct RxPacket;
typedef struct zPlayerLassoInfo;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef enum _zPlayerWallJumpState;
typedef struct xShadowSimplePoly;
typedef struct RpInterpolator;
typedef struct RwV2d;
typedef struct xBBox;
typedef struct tri_data_0;
typedef struct xBaseAsset;
typedef struct zLasso;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct tri_data_1;

typedef void(*type_0)(xEnt*, xScene*, f32);
typedef s32(*type_1)(void*, u32);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(xEnt*, xScene*, f32, xEntCollis*);
typedef u32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*, xScene*, f32, xEntFrame*);
typedef xBase*(*type_10)(u32);
typedef u32(*type_11)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_12)(xEnt*);
typedef s32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_14)(void*);
typedef s32(*type_17)(RxPS2AllPipeData*);
typedef s32(*type_18)(RxNodeDefinition*);
typedef u32(*type_19)(void*, void*, u32);
typedef s8*(*type_20)(xBase*);
typedef void(*type_21)(RxNodeDefinition*);
typedef u32(*type_22)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_23)(void*, void*, u32);
typedef s32(*type_26)(RxPipelineNode*);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef s8*(*type_28)(u32);
typedef void(*type_30)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_35)(RwResEntry*);
typedef s32(*type_36)(RxPipelineNode*, RxPipeline*);
typedef RwResEntry*(*type_37)(RxPS2AllPipeData*, RwResEntry**, u32, type_35);
typedef void(*type_38)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_41)(RxPS2AllPipeData*, void**, u32);
typedef s32(*type_47)(RxPS2AllPipeData*);
typedef void(*type_49)(void*);
typedef s32(*type_50)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef s32(*type_56)(RxPS2AllPipeData*);
typedef s32(*type_64)(RxPS2AllPipeData*, RwMatrixTag**);
typedef u32(*type_66)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_70)(RpAtomic*, void*);
typedef RwResEntry*(*type_72)(RxPS2AllPipeData*, RwResEntry**, u32, type_35);
typedef s32(*type_76)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_82)(RxPS2AllPipeData*, void**, u32);
typedef RwCamera*(*type_84)(RwCamera*);
typedef RpWorldSector*(*type_85)(RpWorldSector*);
typedef RwCamera*(*type_94)(RwCamera*);
typedef void(*type_95)(xMemPool*, void*);
typedef u32(*type_97)(void*, void*);
typedef RpLight*(*type_103)(RpLight*, void*);
typedef RwObjectHasFrame*(*type_107)(RwObjectHasFrame*);

typedef u32 type_2[15];
typedef u16 type_3[3];
typedef u32 type_7[15];
typedef RwFrustumPlane type_9[6];
typedef u32 type_15[15];
typedef RwV3d type_16[8];
typedef analog_data type_24[2];
typedef rwPS2AllClusterQuickInfo type_25[12];
typedef rwPS2AllFieldRec type_29[12];
typedef s8 type_34[4];
typedef xVec3 type_39[4];
typedef RwTexCoords* type_40[8];
typedef u8 type_42[2];
typedef xVec4 type_43[12];
typedef u32 type_44[2];
typedef u8 type_45[2];
typedef f32 type_46[6];
typedef u8 type_48[3];
typedef f32 type_51[3];
typedef f32 type_52[4];
typedef u16 type_53[3];
typedef f32 type_54[3];
typedef xCollis type_57[18];
typedef xModelTag type_58[2];
typedef f32 type_59[3];
typedef xVec3 type_60[5];
typedef f32 type_61[4];
typedef u8 type_62[5];
typedef xEnt* type_63[111];
typedef u32 type_65[4];
typedef u8 type_67[1];
typedef f32 type_68[2];
typedef s8 type_69[128];
typedef type_69 type_71[6];
typedef RwTexCoords* type_73[8];
typedef u8 type_74[14];
typedef xModelTag type_75[4];
typedef u32 type_77[4096];
typedef rwPS2AllClusterInstanceInfo type_78[12];
typedef s8 type_79[32];
typedef xModelInstance* type_80[14];
typedef u32 type_81[12];
typedef RwV3d* type_83[3];
typedef u32 type_86[72];
typedef u8 type_87[2];
typedef s8 type_88[64];
typedef f32 type_89[2];
typedef u8 type_90[2];
typedef u8 type_91[4];
typedef xAnimMultiFileEntry type_92[1];
typedef xBase* type_93[72];
typedef f32 type_96[16];
typedef s8 type_98[32];
typedef u8 type_99[22];
typedef s8 type_100[32];
typedef u8 type_101[22];
typedef rwPS2AllFieldRec type_102[12];
typedef RxCluster type_104[1];
typedef RpLight* type_105[2];
typedef xVec3 type_106[60];
typedef xVec3 type_108[3];
typedef RwFrame* type_109[2];
typedef f32 type_110[22];
typedef void* type_111[8];
typedef RwResEntry* type_112[1];
typedef f32 type_113[22];

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_6 Conditional;
	type_6 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	type_0 update;
	type_0 endUpdate;
	type_4 bupdate;
	type_8 move;
	type_12 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_27 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_55 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	type_10 resolvID;
	type_20 base2Name;
	type_28 id2Name;
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
	type_39 corner;
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
	type_30 BeforeEnter;
	type_33 StateCallback;
	type_38 BeforeAnimMatrices;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_105 light;
	type_109 light_frame;
	s32 memlvl;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	u32 objIdentifier;
	f32 spExtra;
	s32 numMorphTargets;
	u32 fastMorphing;
	u8 transType;
	u8 primType;
	u8 matModulate;
	u8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	u32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
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
	type_57 colls;
	type_5 post;
	type_22 depenq;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_76 eventFunc;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct rxNodePS2AllPvtData
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_84 beginUpdate;
	type_94 endUpdate;
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
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_16 frustumCorners;
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

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_65 pad;
};

struct RwStreamCustom
{
	type_14 sfnclose;
	type_19 sfnread;
	type_23 sfnwrite;
	type_1 sfnskip;
	void* data;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	type_85 renderCallBack;
	RxPipeline* pipeline;
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

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	s32 position;
	RwStreamUnion Type;
	s32 rwOwned;
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
	type_58 BubbleWandTag;
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
	type_75 HangPawTag;
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
	type_2 Inv_PatsSock;
	type_7 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_15 Inv_LevelPickups;
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
	type_44 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_63 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_74 sb_model_indices;
	type_80 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct rxNodePS2AllMatPvtData
{
	type_17 meshInstanceTestCB;
	type_37 resEntryAllocCB;
	type_41 instanceCB;
	type_50 bridgeCB;
	type_56 postMeshCB;
	s32 vifOffset;
	void** vu1CodeArray;
	u32 codeArrayLength;
	type_78 clinfo;
	type_81 cliIndex;
	RpMeshHeaderFlags pipeType;
	u8 totallyOpaque;
	u8 numStripes;
	u8 sizeOnVU;
	u8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	u32 magicValue;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_31 callback;
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
	type_73 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	s32 index;
	type_83 vertices;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_35 destroyNotify;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_40 texCoords;
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
		_class_0 tuv;
		tri_data_1 tri;
	};
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct RwMeshCache
{
	u32 lengthOfMeshesArray;
	type_112 meshes;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_92 Files;
};

struct xSurface
{
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
	type_43 frustplane;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPHeader
{
	type_34 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_46 MoveSpeed;
	type_51 AnimSneak;
	type_54 AnimWalk;
	type_59 AnimRun;
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
	type_91 talk_filter;
};

struct RpPolygon
{
	u16 matIndex;
	type_3 vertIndex;
};

struct xFFX
{
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_52 wt;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct rxReq
{
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_97 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	_class_1 anim_coll;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_98 name;
	type_100 mask;
	u32 filterAddressing;
	s32 refCount;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct rwPS2AllClusterInstanceInfo
{
	u32 attrib;
	u32 stride;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_89 radius;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_61 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct anim_coll_data
{
};

struct RpMesh
{
	u16* indices;
	u32 numIndices;
	RpMaterial* material;
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

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_48 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
	RwLLLink WorldSectorInLight;
	RpWorldSector* sect;
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RpTriangle
{
	type_53 vertIndex;
	s16 matIndex;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct RwChunkHeaderInfo
{
	u32 type;
	u32 length;
	u32 version;
	u32 buildNum;
	s32 isComplex;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct rwPS2AllFieldRec
{
	s32 numVerts;
	s32 morphNumVerts;
	s32 dataoffset;
	s32 morphDataoffset;
	s16 skip;
	s16 morphSkip;
	s16 reverse;
	u8 vuoffset;
	type_67 pad;
};

struct xVec2
{
	f32 x;
	f32 y;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xEntBoulder
{
};

struct _class_1
{
	xVec3* verts;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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
	type_87 NumAnims;
	void** RawData;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_71 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_79 sceneStart;
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

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct zEntHangable
{
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_68 BilinearLerp;
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

struct _tagxPad
{
	type_99 value;
	type_101 last_value;
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
	type_110 up_tmr;
	type_113 down_tmr;
	type_24 analog;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_66 Callback;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_86 baseCount;
	type_93 baseList;
	_zEnv* zen;
};

struct _tagiPad
{
	s32 port;
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

struct RpSector
{
	s32 type;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct RwStreamMemory
{
	u32 position;
	u32 nSize;
	u8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct rwPS2AllResEntryHeader
{
	s32 refCnt;
	s32 clrCnt;
	<unknown type (0xa510)>* data;
	u32 numVerts;
	u32 objIdentifier;
	u32 meshIdentifier;
	s32 batchSize;
	s32 numBatches;
	s32 batchesPerTag;
	s32 morphStart;
	s32 morphFinish;
	s32 morphNum;
	type_25 clquickinfo;
	type_29 fieldRec;
};

struct rwPS2AllResEntryFormat
{
	u8 batchRound;
	u8 stripReverse;
	type_90 pad;
	u32 maxInputSize;
	s32 batchSize;
	s32 batchesPerTag;
	s32 morphBatchSize;
	s32 morphBatchesPerTag;
	type_102 fieldRec;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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
	type_38 BeforeAnimMatrices;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	u32 stride;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	f32 invScale;
	f32 recipInvScale;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_95 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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

struct RxNodeMethods
{
	type_13 nodeBody;
	type_18 nodeInit;
	type_21 nodeTerm;
	type_26 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_36 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct zPlatform
{
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_96 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct zCutsceneMgr
{
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct zAssetPickupTable
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_42 PowerUp;
	type_45 InitialPowerUp;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_104 clusters;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_106 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_107 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xShadowSimplePoly
{
	type_108 vert;
	xVec3 norm;
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

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	type_60 lastRefs;
	type_62 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

s32 sBeginDrawFX;
s32 ps2AllFirstAtomic;
u8 ps2AllClipType;
RxPipeline* ps2AllPipeOptimized;
RxPipeline* ps2AllMatPipeOptimized;
RpWorld* sPipeWorld;
RwCamera* sPipeCamera;
iEnv* lastEnv;
RwCamera* globalCamera;
zGlobals globals;
type_70 SetPipelineCB;
type_64 RPS2AllObjectSetupCB;
type_47 PS2AllBridgeCB;
type_82 RpMeshPS2AllInstanceCallBack;
type_72 RpMeshPS2AllResEntryAllocCallBack;
type_111 rwPDS_G3_Generic_VU1Transforms;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
s32 skyTest_1;
s32 skyClamp_1;
s32 skyTex1_1;
u32 skyUserSwitch1;
u32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
s32 skyTLClipperMode;
s32 skyTSClipperMode;
s32 skyPrim_State;
<unknown type (0xa510)> gifTag128;
s32 skyAlphaTex;
s32 skyVertexAlpha;
RwRaster* skyTextureRaster;
type_103 _rpAtomicPS2AllDoApplyLight;
type_77 ourGlobals;
u32 _rwSkyLightQWordsWritten;
u8 skyTransType;
s32 rwPip2GeometryOffset;

void iEnvEndRenderFX();
void iEnvRender(iEnv* env);
void JspPS2_ClumpRender(RpClump* clump, xJSPNodeInfo* nodeInfo);
void iEnvLightingBasics();
void iEnvDefaultLighting();
void iEnvFree(iEnv* env);
void iEnvLoad(iEnv* env, void* data, s32 dataType);
void iEnvStartup();
void iEnvSetBSP(iEnv* env, s32 envDataType, RpWorld* bsp);
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data);
s32 PS2AllOptimizedPipelinesCreate();
s32 PS2AllBridgeCB(RxPS2AllPipeData* ps2AllPipeData);
s32 RPS2AllObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);

// iEnvEndRenderFX__FP4iEnv
// Start address: 0x1a8000
void iEnvEndRenderFX()
{
}

// iEnvRender__FP4iEnv
// Start address: 0x1a8060
void iEnvRender(iEnv* env)
{
}

// JspPS2_ClumpRender__FP7RpClumpP12xJSPNodeInfo
// Start address: 0x1a80c0
void JspPS2_ClumpRender(RpClump* clump, xJSPNodeInfo* nodeInfo)
{
	s32 backcullon;
	s32 zbufferon;
	RwLLLink* cur;
	RwLLLink* end;
	RpAtomic* apAtom;
	RwFrame* frame;
	s32 insideFlag;
}

// iEnvLightingBasics__FP4iEnvP9xEnvAsset
// Start address: 0x1a8320
void iEnvLightingBasics()
{
}

// iEnvDefaultLighting__FP4iEnv
// Start address: 0x1a8330
void iEnvDefaultLighting()
{
}

// iEnvFree__FP4iEnv
// Start address: 0x1a8340
void iEnvFree(iEnv* env)
{
}

// iEnvLoad__FP4iEnvPCvUii
// Start address: 0x1a83a0
void iEnvLoad(iEnv* env, void* data, s32 dataType)
{
	RpWorld* bsp;
	xJSPHeader* jsp;
	RwBBox tmpbbox;
}

// iEnvStartup__Fv
// Start address: 0x1a84f0
void iEnvStartup()
{
}

// iEnvSetBSP__FP4iEnviP7RpWorld
// Start address: 0x1a8520
void iEnvSetBSP(iEnv* env, s32 envDataType, RpWorld* bsp)
{
}

// SetPipelineCB__FP8RpAtomicPv
// Start address: 0x1a8580
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data)
{
}

// PS2AllOptimizedPipelinesCreate__Fv
// Start address: 0x1a85e0
s32 PS2AllOptimizedPipelinesCreate()
{
	RxPipeline* allMatPipe;
	RxPipeline* allPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
	RxPipelineNode* plNode;
}

// PS2AllBridgeCB__FP16RxPS2AllPipeData
// Start address: 0x1a8840
s32 PS2AllBridgeCB(RxPS2AllPipeData* ps2AllPipeData)
{
	u32 numInitialQW;
	u32 numExtraQW;
	RwTexture* tex;
	RwRaster* ras;
	u32 _itQW;
	u32 _xaQW;
	u32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	u32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	u32 __tmp;
	u32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	u32 stat;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	u32 cFormat;
	s32 textureUploadSuccess;
	u32 _itQW;
	u32 _xaQW;
	u32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	u32 __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	f32 __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	u32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	u32 __tmp;
	u32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	u32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	u32 __tmp;
	u32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	u32 stat;
}

// RPS2AllObjectSetupCB__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x1a91f0
s32 RPS2AllObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RpGeometry* geom;
	RwMatrixTag* _viewMatrix;
	RwMatrixTag* _mpLocalToWorld;
	RpAtomic* _atmc;
	RpGeometry* _gmty;
	RwLLLink* cur;
	RwLLLink* end;
	RpMeshHeader* meshHeader;
	rpAtomicPS2AllLightData lightingData;
	RwMatrixTag* frameMat;
	f32 temp;
	RwLLLink* curLight;
	RwLLLink* endLight;
	RpLightTie* lightTie;
	RwMatrixTag* matrixLight;
	RwV3d* pos;
	RwSphere* sphere;
	f32 distanceCollision;
}

