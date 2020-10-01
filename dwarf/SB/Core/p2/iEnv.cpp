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

typedef void(*type_0)(xEnt*, xScene*, float32);
typedef int32(*type_1)(void*, uint32);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*, xScene*, float32, xEntFrame*);
typedef xBase*(*type_10)(uint32);
typedef uint32(*type_11)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_12)(xEnt*);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_14)(void*);
typedef int32(*type_17)(RxPS2AllPipeData*);
typedef int32(*type_18)(RxNodeDefinition*);
typedef uint32(*type_19)(void*, void*, uint32);
typedef int8*(*type_20)(xBase*);
typedef void(*type_21)(RxNodeDefinition*);
typedef uint32(*type_22)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_23)(void*, void*, uint32);
typedef int32(*type_26)(RxPipelineNode*);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_28)(uint32);
typedef void(*type_30)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_35)(RwResEntry*);
typedef int32(*type_36)(RxPipelineNode*, RxPipeline*);
typedef RwResEntry*(*type_37)(RxPS2AllPipeData*, RwResEntry**, uint32, type_35);
typedef void(*type_38)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_41)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_47)(RxPS2AllPipeData*);
typedef void(*type_49)(void*);
typedef int32(*type_50)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef int32(*type_56)(RxPS2AllPipeData*);
typedef int32(*type_64)(RxPS2AllPipeData*, RwMatrixTag**);
typedef uint32(*type_66)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_70)(RpAtomic*, void*);
typedef RwResEntry*(*type_72)(RxPS2AllPipeData*, RwResEntry**, uint32, type_35);
typedef int32(*type_76)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_82)(RxPS2AllPipeData*, void**, uint32);
typedef RwCamera*(*type_84)(RwCamera*);
typedef RpWorldSector*(*type_85)(RpWorldSector*);
typedef RwCamera*(*type_94)(RwCamera*);
typedef void(*type_95)(xMemPool*, void*);
typedef uint32(*type_97)(void*, void*);
typedef RpLight*(*type_103)(RpLight*, void*);
typedef RwObjectHasFrame*(*type_107)(RwObjectHasFrame*);

typedef uint32 type_2[15];
typedef uint16 type_3[3];
typedef uint32 type_7[15];
typedef RwFrustumPlane type_9[6];
typedef uint32 type_15[15];
typedef RwV3d type_16[8];
typedef analog_data type_24[2];
typedef rwPS2AllClusterQuickInfo type_25[12];
typedef rwPS2AllFieldRec type_29[12];
typedef int8 type_34[4];
typedef xVec3 type_39[4];
typedef RwTexCoords* type_40[8];
typedef uint8 type_42[2];
typedef xVec4 type_43[12];
typedef uint32 type_44[2];
typedef uint8 type_45[2];
typedef float32 type_46[6];
typedef uint8 type_48[3];
typedef float32 type_51[3];
typedef float32 type_52[4];
typedef uint16 type_53[3];
typedef float32 type_54[3];
typedef xCollis type_57[18];
typedef xModelTag type_58[2];
typedef float32 type_59[3];
typedef xVec3 type_60[5];
typedef float32 type_61[4];
typedef uint8 type_62[5];
typedef xEnt* type_63[111];
typedef uint32 type_65[4];
typedef uint8 type_67[1];
typedef float32 type_68[2];
typedef int8 type_69[128];
typedef type_69 type_71[6];
typedef RwTexCoords* type_73[8];
typedef uint8 type_74[14];
typedef xModelTag type_75[4];
typedef uint32 type_77[4096];
typedef rwPS2AllClusterInstanceInfo type_78[12];
typedef int8 type_79[32];
typedef xModelInstance* type_80[14];
typedef uint32 type_81[12];
typedef RwV3d* type_83[3];
typedef uint32 type_86[72];
typedef uint8 type_87[2];
typedef int8 type_88[64];
typedef float32 type_89[2];
typedef uint8 type_90[2];
typedef uint8 type_91[4];
typedef xAnimMultiFileEntry type_92[1];
typedef xBase* type_93[72];
typedef float32 type_96[16];
typedef int8 type_98[32];
typedef uint8 type_99[22];
typedef int8 type_100[32];
typedef uint8 type_101[22];
typedef rwPS2AllFieldRec type_102[12];
typedef RxCluster type_104[1];
typedef RpLight* type_105[2];
typedef xVec3 type_106[60];
typedef xVec3 type_108[3];
typedef RwFrame* type_109[2];
typedef float32 type_110[22];
typedef void* type_111[8];
typedef RwResEntry* type_112[1];
typedef float32 type_113[22];

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_6 Conditional;
	type_6 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	int32 driveMode;
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
	uint16 renderFrame;
	uint16 pad;
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
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
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
	float32 mag;
	float32 ang;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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
	type_39 corner;
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
	type_30 BeforeEnter;
	type_33 StateCallback;
	type_38 BeforeAnimMatrices;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	int32 memlvl;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
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
	type_57 colls;
	type_5 post;
	type_22 depenq;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_76 eventFunc;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct rxNodePS2AllPvtData
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_16 frustumCorners;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
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
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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
	type_85 renderCallBack;
	RxPipeline* pipeline;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
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
	type_58 BubbleWandTag;
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
	type_75 HangPawTag;
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
	type_2 Inv_PatsSock;
	type_7 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_15 Inv_LevelPickups;
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
	type_44 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_63 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_74 sb_model_indices;
	type_80 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct rxNodePS2AllMatPvtData
{
	type_17 meshInstanceTestCB;
	type_37 resEntryAllocCB;
	type_41 instanceCB;
	type_50 bridgeCB;
	type_56 postMeshCB;
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	type_78 clinfo;
	type_81 cliIndex;
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
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
	type_73 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_83 vertices;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_35 destroyNotify;
};

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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
		_class_0 tuv;
		tri_data_1 tri;
	};
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
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
	uint32 version;
	uint32 jspNodeCount;
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
	type_91 talk_filter;
};

struct RpPolygon
{
	uint16 matIndex;
	type_3 vertIndex;
};

struct xFFX
{
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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
	uint32 matidx;
	type_52 wt;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct rxReq
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
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
	_class_1 anim_coll;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_98 name;
	type_100 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	uint32 attrib;
	uint32 stride;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_89 radius;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_61 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
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
	uint8 type;
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
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
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
	int16 matIndex;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct RwChunkHeaderInfo
{
	uint32 type;
	uint32 length;
	uint32 version;
	uint32 buildNum;
	int32 isComplex;
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
	float32 r;
};

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	type_67 pad;
};

struct xVec2
{
	float32 x;
	float32 y;
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
	uint32 ID;
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
	float32 r;
	float32 h;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
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
	int32 profile;
	type_71 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_79 sceneStart;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	float32 radius;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_68 BilinearLerp;
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

struct _tagxPad
{
	type_99 value;
	type_101 last_value;
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
	uint32 Count;
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
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_66 Callback;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_86 baseCount;
	type_93 baseList;
	_zEnv* zen;
};

struct _tagiPad
{
	int32 port;
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

struct RpSector
{
	int32 type;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	type_25 clquickinfo;
	type_29 fieldRec;
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	type_90 pad;
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	type_102 fieldRec;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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
	type_38 BeforeAnimMatrices;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	uint32 stride;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	float32 invScale;
	float32 recipInvScale;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_95 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_96 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct zAssetPickupTable
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_42 PowerUp;
	type_45 InitialPowerUp;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_104 clusters;
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
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_106 tranTable;
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
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	uint32 index;
	float32 r;
	float32 d;
};

int32 sBeginDrawFX;
int32 ps2AllFirstAtomic;
uint8 ps2AllClipType;
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
long32 skyTest_1;
long32 skyClamp_1;
long32 skyTex1_1;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
int32 skyTSClipperMode;
long32 skyPrim_State;
<unknown type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
RwRaster* skyTextureRaster;
type_103 _rpAtomicPS2AllDoApplyLight;
type_77 ourGlobals;
uint32 _rwSkyLightQWordsWritten;
uint8 skyTransType;
int32 rwPip2GeometryOffset;

void iEnvEndRenderFX();
void iEnvRender(iEnv* env);
void JspPS2_ClumpRender(RpClump* clump, xJSPNodeInfo* nodeInfo);
void iEnvLightingBasics();
void iEnvDefaultLighting();
void iEnvFree(iEnv* env);
void iEnvLoad(iEnv* env, void* data, int32 dataType);
void iEnvStartup();
void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp);
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data);
int32 PS2AllOptimizedPipelinesCreate();
int32 PS2AllBridgeCB(RxPS2AllPipeData* ps2AllPipeData);
int32 RPS2AllObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);

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
	int32 backcullon;
	int32 zbufferon;
	RwLLLink* cur;
	RwLLLink* end;
	RpAtomic* apAtom;
	RwFrame* frame;
	int32 insideFlag;
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
void iEnvLoad(iEnv* env, void* data, int32 dataType)
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
void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp)
{
}

// SetPipelineCB__FP8RpAtomicPv
// Start address: 0x1a8580
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data)
{
}

// PS2AllOptimizedPipelinesCreate__Fv
// Start address: 0x1a85e0
int32 PS2AllOptimizedPipelinesCreate()
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
int32 PS2AllBridgeCB(RxPS2AllPipeData* ps2AllPipeData)
{
	uint32 numInitialQW;
	uint32 numExtraQW;
	RwTexture* tex;
	RwRaster* ras;
	uint32 _itQW;
	uint32 _xaQW;
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	uint32 stat;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	int32 textureUploadSuccess;
	uint32 _itQW;
	uint32 _xaQW;
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	float32 __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	ulong32 __tmp;
	ulong32 __tmp1;
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
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	uint32 stat;
}

// RPS2AllObjectSetupCB__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x1a91f0
int32 RPS2AllObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
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
	float32 temp;
	RwLLLink* curLight;
	RwLLLink* endLight;
	RpLightTie* lightTie;
	RwMatrixTag* matrixLight;
	RwV3d* pos;
	RwSphere* sphere;
	float32 distanceCollision;
}

