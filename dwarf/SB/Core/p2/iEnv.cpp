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
typedef struct RwStreamUnion;
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
typedef struct RwStreamFile;
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
typedef struct _class_2;
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
typedef RwResEntry*(*type_37)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
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
typedef RwResEntry*(*type_72)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
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
typedef int8 type_71[128][6];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	xVec3 corner[4];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint32 pad[4];
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[12];
	uint32 cliIndex[12];
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
	RpClump*(*callback)(RpClump*, void*);
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
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
	void(*destroyNotify)(RwResEntry*);
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	RwResEntry* meshes[1];
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	xVec4 frustplane[12];
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
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	float32 wt[4];
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
	uint32(*cb)(void*, void*);
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
	int8 name[32];
	int8 mask[32];
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
	float32 radius[2];
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
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
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
	uint8 pad[3];
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
	uint16 vertIndex[3];
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
	uint8 pad[1];
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
	uint8 NumAnims[2];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	<unknown fundamental type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	rwPS2AllClusterQuickInfo clquickinfo[12];
	rwPS2AllFieldRec fieldRec[12];
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	uint8 pad[2];
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	rwPS2AllFieldRec fieldRec[12];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
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
	void(*InitCB)(xMemPool*, void*);
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	float32 matrix[16];
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

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	xVec3 vert[3];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
RpAtomic*(*SetPipelineCB)(RpAtomic*, void*);
int32(*RPS2AllObjectSetupCB)(RxPS2AllPipeData*, RwMatrixTag**);
int32(*PS2AllBridgeCB)(RxPS2AllPipeData*);
int32(*RpMeshPS2AllInstanceCallBack)(RxPS2AllPipeData*, void**, uint32);
RwResEntry*(*RpMeshPS2AllResEntryAllocCallBack)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
void* rwPDS_G3_Generic_VU1Transforms[8];
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long32 skyTest_1;
long32 skyClamp_1;
long32 skyTex1_1;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
int32 skyTSClipperMode;
long32 skyPrim_State;
<unknown fundamental type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
RwRaster* skyTextureRaster;
RpLight*(*_rpAtomicPS2AllDoApplyLight)(RpLight*, void*);
uint32 ourGlobals[4096];
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
	// Line 1288, Address: 0x1a8000, Func Offset: 0
	// Line 1291, Address: 0x1a8010, Func Offset: 0x10
	// Line 1293, Address: 0x1a8034, Func Offset: 0x34
	// Line 1294, Address: 0x1a803c, Func Offset: 0x3c
	// Line 1295, Address: 0x1a8048, Func Offset: 0x48
	// Line 1296, Address: 0x1a804c, Func Offset: 0x4c
	// Line 1298, Address: 0x1a8050, Func Offset: 0x50
	// Func End, Address: 0x1a8060, Func Offset: 0x60
}

// iEnvRender__FP4iEnv
// Start address: 0x1a8060
void iEnvRender(iEnv* env)
{
	// Line 1215, Address: 0x1a8060, Func Offset: 0
	// Line 1228, Address: 0x1a8070, Func Offset: 0x10
	// Line 1232, Address: 0x1a807c, Func Offset: 0x1c
	// Line 1234, Address: 0x1a8084, Func Offset: 0x24
	// Line 1239, Address: 0x1a8090, Func Offset: 0x30
	// Line 1240, Address: 0x1a8098, Func Offset: 0x38
	// Line 1243, Address: 0x1a80a0, Func Offset: 0x40
	// Line 1245, Address: 0x1a80a4, Func Offset: 0x44
	// Func End, Address: 0x1a80b4, Func Offset: 0x54
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
	// Line 871, Address: 0x1a80c0, Func Offset: 0
	// Line 876, Address: 0x1a80d8, Func Offset: 0x18
	// Line 871, Address: 0x1a80dc, Func Offset: 0x1c
	// Line 877, Address: 0x1a80e0, Func Offset: 0x20
	// Line 871, Address: 0x1a80e4, Func Offset: 0x24
	// Line 880, Address: 0x1a80ec, Func Offset: 0x2c
	// Line 879, Address: 0x1a80f0, Func Offset: 0x30
	// Line 883, Address: 0x1a80f4, Func Offset: 0x34
	// Line 894, Address: 0x1a8100, Func Offset: 0x40
	// Line 900, Address: 0x1a8110, Func Offset: 0x50
	// Line 909, Address: 0x1a8114, Func Offset: 0x54
	// Line 910, Address: 0x1a8124, Func Offset: 0x64
	// Line 911, Address: 0x1a8128, Func Offset: 0x68
	// Line 912, Address: 0x1a812c, Func Offset: 0x6c
	// Line 913, Address: 0x1a8130, Func Offset: 0x70
	// Line 914, Address: 0x1a8134, Func Offset: 0x74
	// Line 915, Address: 0x1a8138, Func Offset: 0x78
	// Line 916, Address: 0x1a813c, Func Offset: 0x7c
	// Line 917, Address: 0x1a8140, Func Offset: 0x80
	// Line 918, Address: 0x1a8144, Func Offset: 0x84
	// Line 919, Address: 0x1a8148, Func Offset: 0x88
	// Line 920, Address: 0x1a814c, Func Offset: 0x8c
	// Line 921, Address: 0x1a8150, Func Offset: 0x90
	// Line 922, Address: 0x1a8154, Func Offset: 0x94
	// Line 923, Address: 0x1a8158, Func Offset: 0x98
	// Line 924, Address: 0x1a815c, Func Offset: 0x9c
	// Line 925, Address: 0x1a8160, Func Offset: 0xa0
	// Line 927, Address: 0x1a8164, Func Offset: 0xa4
	// Line 928, Address: 0x1a8168, Func Offset: 0xa8
	// Line 929, Address: 0x1a816c, Func Offset: 0xac
	// Line 930, Address: 0x1a8170, Func Offset: 0xb0
	// Line 931, Address: 0x1a8174, Func Offset: 0xb4
	// Line 932, Address: 0x1a8178, Func Offset: 0xb8
	// Line 933, Address: 0x1a817c, Func Offset: 0xbc
	// Line 934, Address: 0x1a8180, Func Offset: 0xc0
	// Line 936, Address: 0x1a8184, Func Offset: 0xc4
	// Line 937, Address: 0x1a8188, Func Offset: 0xc8
	// Line 938, Address: 0x1a818c, Func Offset: 0xcc
	// Line 939, Address: 0x1a8190, Func Offset: 0xd0
	// Line 940, Address: 0x1a8194, Func Offset: 0xd4
	// Line 941, Address: 0x1a8198, Func Offset: 0xd8
	// Line 942, Address: 0x1a819c, Func Offset: 0xdc
	// Line 943, Address: 0x1a81a0, Func Offset: 0xe0
	// Line 945, Address: 0x1a81a4, Func Offset: 0xe4
	// Line 946, Address: 0x1a81a8, Func Offset: 0xe8
	// Line 947, Address: 0x1a81ac, Func Offset: 0xec
	// Line 949, Address: 0x1a81b0, Func Offset: 0xf0
	// Line 950, Address: 0x1a81b4, Func Offset: 0xf4
	// Line 951, Address: 0x1a81b8, Func Offset: 0xf8
	// Line 952, Address: 0x1a81bc, Func Offset: 0xfc
	// Line 953, Address: 0x1a81c0, Func Offset: 0x100
	// Line 954, Address: 0x1a81c4, Func Offset: 0x104
	// Line 955, Address: 0x1a81c8, Func Offset: 0x108
	// Line 957, Address: 0x1a81cc, Func Offset: 0x10c
	// Line 959, Address: 0x1a81d4, Func Offset: 0x114
	// Line 963, Address: 0x1a81dc, Func Offset: 0x11c
	// Line 964, Address: 0x1a81e0, Func Offset: 0x120
	// Line 965, Address: 0x1a81e4, Func Offset: 0x124
	// Line 966, Address: 0x1a81e8, Func Offset: 0x128
	// Line 967, Address: 0x1a81ec, Func Offset: 0x12c
	// Line 968, Address: 0x1a81f0, Func Offset: 0x130
	// Line 969, Address: 0x1a81f4, Func Offset: 0x134
	// Line 970, Address: 0x1a81f8, Func Offset: 0x138
	// Line 971, Address: 0x1a81fc, Func Offset: 0x13c
	// Line 972, Address: 0x1a8200, Func Offset: 0x140
	// Line 973, Address: 0x1a8204, Func Offset: 0x144
	// Line 974, Address: 0x1a8208, Func Offset: 0x148
	// Line 975, Address: 0x1a820c, Func Offset: 0x14c
	// Line 976, Address: 0x1a8210, Func Offset: 0x150
	// Line 1048, Address: 0x1a8214, Func Offset: 0x154
	// Line 1049, Address: 0x1a821c, Func Offset: 0x15c
	// Line 1052, Address: 0x1a8220, Func Offset: 0x160
	// Line 1053, Address: 0x1a8228, Func Offset: 0x168
	// Line 1056, Address: 0x1a822c, Func Offset: 0x16c
	// Line 1065, Address: 0x1a8230, Func Offset: 0x170
	// Line 1066, Address: 0x1a8238, Func Offset: 0x178
	// Line 1072, Address: 0x1a8248, Func Offset: 0x188
	// Line 1074, Address: 0x1a8254, Func Offset: 0x194
	// Line 1075, Address: 0x1a8260, Func Offset: 0x1a0
	// Line 1081, Address: 0x1a8270, Func Offset: 0x1b0
	// Line 1083, Address: 0x1a827c, Func Offset: 0x1bc
	// Line 1086, Address: 0x1a8280, Func Offset: 0x1c0
	// Line 1087, Address: 0x1a8288, Func Offset: 0x1c8
	// Line 1089, Address: 0x1a8298, Func Offset: 0x1d8
	// Line 1091, Address: 0x1a82a4, Func Offset: 0x1e4
	// Line 1092, Address: 0x1a82b0, Func Offset: 0x1f0
	// Line 1093, Address: 0x1a82c0, Func Offset: 0x200
	// Line 1094, Address: 0x1a82c4, Func Offset: 0x204
	// Line 1099, Address: 0x1a82d0, Func Offset: 0x210
	// Line 1100, Address: 0x1a82dc, Func Offset: 0x21c
	// Line 1104, Address: 0x1a82e0, Func Offset: 0x220
	// Line 1105, Address: 0x1a82e4, Func Offset: 0x224
	// Line 1106, Address: 0x1a82e8, Func Offset: 0x228
	// Line 1107, Address: 0x1a82f0, Func Offset: 0x230
	// Func End, Address: 0x1a8314, Func Offset: 0x254
}

// iEnvLightingBasics__FP4iEnvP9xEnvAsset
// Start address: 0x1a8320
void iEnvLightingBasics()
{
	// Line 865, Address: 0x1a8320, Func Offset: 0
	// Func End, Address: 0x1a8328, Func Offset: 0x8
}

// iEnvDefaultLighting__FP4iEnv
// Start address: 0x1a8330
void iEnvDefaultLighting()
{
	// Line 835, Address: 0x1a8330, Func Offset: 0
	// Func End, Address: 0x1a8338, Func Offset: 0x8
}

// iEnvFree__FP4iEnv
// Start address: 0x1a8340
void iEnvFree(iEnv* env)
{
	// Line 712, Address: 0x1a8340, Func Offset: 0
	// Line 741, Address: 0x1a834c, Func Offset: 0xc
	// Line 743, Address: 0x1a8354, Func Offset: 0x14
	// Line 748, Address: 0x1a835c, Func Offset: 0x1c
	// Line 750, Address: 0x1a8364, Func Offset: 0x24
	// Line 754, Address: 0x1a836c, Func Offset: 0x2c
	// Line 759, Address: 0x1a8374, Func Offset: 0x34
	// Line 762, Address: 0x1a837c, Func Offset: 0x3c
	// Line 766, Address: 0x1a8384, Func Offset: 0x44
	// Line 771, Address: 0x1a838c, Func Offset: 0x4c
	// Line 773, Address: 0x1a8390, Func Offset: 0x50
	// Func End, Address: 0x1a83a0, Func Offset: 0x60
}

// iEnvLoad__FP4iEnvPCvUii
// Start address: 0x1a83a0
void iEnvLoad(iEnv* env, void* data, int32 dataType)
{
	RpWorld* bsp;
	xJSPHeader* jsp;
	RwBBox tmpbbox;
	// Line 641, Address: 0x1a83a0, Func Offset: 0
	// Line 648, Address: 0x1a83a4, Func Offset: 0x4
	// Line 641, Address: 0x1a83a8, Func Offset: 0x8
	// Line 645, Address: 0x1a83ac, Func Offset: 0xc
	// Line 641, Address: 0x1a83b0, Func Offset: 0x10
	// Line 648, Address: 0x1a83c4, Func Offset: 0x24
	// Line 654, Address: 0x1a83fc, Func Offset: 0x5c
	// Line 658, Address: 0x1a8404, Func Offset: 0x64
	// Line 660, Address: 0x1a841c, Func Offset: 0x7c
	// Line 665, Address: 0x1a8428, Func Offset: 0x88
	// Line 669, Address: 0x1a843c, Func Offset: 0x9c
	// Line 670, Address: 0x1a8444, Func Offset: 0xa4
	// Line 673, Address: 0x1a8450, Func Offset: 0xb0
	// Line 674, Address: 0x1a8454, Func Offset: 0xb4
	// Line 681, Address: 0x1a8470, Func Offset: 0xd0
	// Line 684, Address: 0x1a847c, Func Offset: 0xdc
	// Line 685, Address: 0x1a8488, Func Offset: 0xe8
	// Line 686, Address: 0x1a8490, Func Offset: 0xf0
	// Line 690, Address: 0x1a8494, Func Offset: 0xf4
	// Line 693, Address: 0x1a84a0, Func Offset: 0x100
	// Line 694, Address: 0x1a84a8, Func Offset: 0x108
	// Line 695, Address: 0x1a84ac, Func Offset: 0x10c
	// Line 698, Address: 0x1a84b0, Func Offset: 0x110
	// Line 699, Address: 0x1a84bc, Func Offset: 0x11c
	// Line 701, Address: 0x1a84c0, Func Offset: 0x120
	// Line 703, Address: 0x1a84c8, Func Offset: 0x128
	// Line 704, Address: 0x1a84d4, Func Offset: 0x134
	// Line 705, Address: 0x1a84d8, Func Offset: 0x138
	// Func End, Address: 0x1a84f0, Func Offset: 0x150
}

// iEnvStartup__Fv
// Start address: 0x1a84f0
void iEnvStartup()
{
	// Line 607, Address: 0x1a84f0, Func Offset: 0
	// Line 610, Address: 0x1a84f8, Func Offset: 0x8
	// Line 611, Address: 0x1a8504, Func Offset: 0x14
	// Line 613, Address: 0x1a850c, Func Offset: 0x1c
	// Line 615, Address: 0x1a8510, Func Offset: 0x20
	// Func End, Address: 0x1a851c, Func Offset: 0x2c
}

// iEnvSetBSP__FP4iEnviP7RpWorld
// Start address: 0x1a8520
void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp)
{
	// Line 506, Address: 0x1a8520, Func Offset: 0
	// Line 512, Address: 0x1a8528, Func Offset: 0x8
	// Line 513, Address: 0x1a8530, Func Offset: 0x10
	// Line 517, Address: 0x1a853c, Func Offset: 0x1c
	// Line 518, Address: 0x1a8548, Func Offset: 0x28
	// Line 522, Address: 0x1a8554, Func Offset: 0x34
	// Line 523, Address: 0x1a8560, Func Offset: 0x40
	// Line 526, Address: 0x1a856c, Func Offset: 0x4c
	// Line 576, Address: 0x1a8570, Func Offset: 0x50
	// Func End, Address: 0x1a8578, Func Offset: 0x58
}

// SetPipelineCB__FP8RpAtomicPv
// Start address: 0x1a8580
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data)
{
	// Line 463, Address: 0x1a8580, Func Offset: 0
	// Line 467, Address: 0x1a8594, Func Offset: 0x14
	// Line 468, Address: 0x1a85a8, Func Offset: 0x28
	// Line 469, Address: 0x1a85b0, Func Offset: 0x30
	// Line 475, Address: 0x1a85b8, Func Offset: 0x38
	// Line 488, Address: 0x1a85bc, Func Offset: 0x3c
	// Line 489, Address: 0x1a85c0, Func Offset: 0x40
	// Func End, Address: 0x1a85d4, Func Offset: 0x54
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
	// Line 281, Address: 0x1a85e0, Func Offset: 0
	// Line 289, Address: 0x1a85f0, Func Offset: 0x10
	// Line 290, Address: 0x1a85f8, Func Offset: 0x18
	// Line 296, Address: 0x1a8600, Func Offset: 0x20
	// Line 298, Address: 0x1a8608, Func Offset: 0x28
	// Line 301, Address: 0x1a8614, Func Offset: 0x34
	// Line 306, Address: 0x1a8628, Func Offset: 0x48
	// Line 301, Address: 0x1a862c, Func Offset: 0x4c
	// Line 306, Address: 0x1a8630, Func Offset: 0x50
	// Line 312, Address: 0x1a8644, Func Offset: 0x64
	// Line 317, Address: 0x1a8658, Func Offset: 0x78
	// Line 322, Address: 0x1a866c, Func Offset: 0x8c
	// Line 327, Address: 0x1a8680, Func Offset: 0xa0
	// Line 333, Address: 0x1a8694, Func Offset: 0xb4
	// Line 338, Address: 0x1a86a8, Func Offset: 0xc8
	// Line 340, Address: 0x1a86b4, Func Offset: 0xd4
	// Line 342, Address: 0x1a86bc, Func Offset: 0xdc
	// Line 347, Address: 0x1a86d0, Func Offset: 0xf0
	// Line 351, Address: 0x1a86e0, Func Offset: 0x100
	// Line 362, Address: 0x1a86f4, Func Offset: 0x114
	// Line 365, Address: 0x1a8704, Func Offset: 0x124
	// Line 370, Address: 0x1a8718, Func Offset: 0x138
	// Line 375, Address: 0x1a872c, Func Offset: 0x14c
	// Line 386, Address: 0x1a8740, Func Offset: 0x160
	// Line 389, Address: 0x1a8748, Func Offset: 0x168
	// Line 392, Address: 0x1a8750, Func Offset: 0x170
	// Line 393, Address: 0x1a875c, Func Offset: 0x17c
	// Line 397, Address: 0x1a8764, Func Offset: 0x184
	// Line 399, Address: 0x1a8770, Func Offset: 0x190
	// Line 401, Address: 0x1a8778, Func Offset: 0x198
	// Line 405, Address: 0x1a8784, Func Offset: 0x1a4
	// Line 410, Address: 0x1a879c, Func Offset: 0x1bc
	// Line 412, Address: 0x1a87a8, Func Offset: 0x1c8
	// Line 414, Address: 0x1a87b0, Func Offset: 0x1d0
	// Line 424, Address: 0x1a87c8, Func Offset: 0x1e8
	// Line 427, Address: 0x1a87dc, Func Offset: 0x1fc
	// Line 433, Address: 0x1a87ec, Func Offset: 0x20c
	// Line 436, Address: 0x1a87f8, Func Offset: 0x218
	// Line 438, Address: 0x1a87fc, Func Offset: 0x21c
	// Line 439, Address: 0x1a8804, Func Offset: 0x224
	// Line 442, Address: 0x1a8808, Func Offset: 0x228
	// Line 444, Address: 0x1a8810, Func Offset: 0x230
	// Line 447, Address: 0x1a8818, Func Offset: 0x238
	// Line 452, Address: 0x1a8820, Func Offset: 0x240
	// Line 453, Address: 0x1a8828, Func Offset: 0x248
	// Func End, Address: 0x1a8840, Func Offset: 0x260
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
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
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
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __prmTmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	float32 __colScale;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	ulong32 tmp;
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	uint32 stat;
	// Line 193, Address: 0x1a8840, Func Offset: 0
	// Line 194, Address: 0x1a8844, Func Offset: 0x4
	// Line 193, Address: 0x1a8848, Func Offset: 0x8
	// Line 194, Address: 0x1a8858, Func Offset: 0x18
	// Line 197, Address: 0x1a885c, Func Offset: 0x1c
	// Line 198, Address: 0x1a8868, Func Offset: 0x28
	// Line 199, Address: 0x1a886c, Func Offset: 0x2c
	// Line 200, Address: 0x1a8874, Func Offset: 0x34
	// Line 201, Address: 0x1a8878, Func Offset: 0x38
	// Line 208, Address: 0x1a8884, Func Offset: 0x44
	// Line 211, Address: 0x1a88c4, Func Offset: 0x84
	// Line 213, Address: 0x1a89d4, Func Offset: 0x194
	// Line 211, Address: 0x1a89e4, Func Offset: 0x1a4
	// Line 213, Address: 0x1a8a00, Func Offset: 0x1c0
	// Line 215, Address: 0x1a8a98, Func Offset: 0x258
	// Line 224, Address: 0x1a8aa0, Func Offset: 0x260
	// Line 226, Address: 0x1a8ab4, Func Offset: 0x274
	// Line 229, Address: 0x1a8bd0, Func Offset: 0x390
	// Line 234, Address: 0x1a8bd4, Func Offset: 0x394
	// Line 235, Address: 0x1a8bd8, Func Offset: 0x398
	// Line 245, Address: 0x1a8c1c, Func Offset: 0x3dc
	// Line 250, Address: 0x1a8cf4, Func Offset: 0x4b4
	// Line 245, Address: 0x1a8cf8, Func Offset: 0x4b8
	// Line 250, Address: 0x1a8cfc, Func Offset: 0x4bc
	// Line 245, Address: 0x1a8d00, Func Offset: 0x4c0
	// Line 250, Address: 0x1a8d0c, Func Offset: 0x4cc
	// Line 245, Address: 0x1a8d10, Func Offset: 0x4d0
	// Line 250, Address: 0x1a8d14, Func Offset: 0x4d4
	// Line 245, Address: 0x1a8d18, Func Offset: 0x4d8
	// Line 250, Address: 0x1a8d1c, Func Offset: 0x4dc
	// Line 245, Address: 0x1a8d20, Func Offset: 0x4e0
	// Line 250, Address: 0x1a8d24, Func Offset: 0x4e4
	// Line 245, Address: 0x1a8d28, Func Offset: 0x4e8
	// Line 250, Address: 0x1a8d34, Func Offset: 0x4f4
	// Line 245, Address: 0x1a8d38, Func Offset: 0x4f8
	// Line 250, Address: 0x1a8d3c, Func Offset: 0x4fc
	// Line 245, Address: 0x1a8d40, Func Offset: 0x500
	// Line 250, Address: 0x1a8d44, Func Offset: 0x504
	// Line 245, Address: 0x1a8d48, Func Offset: 0x508
	// Line 250, Address: 0x1a8d58, Func Offset: 0x518
	// Line 253, Address: 0x1a8da8, Func Offset: 0x568
	// Line 256, Address: 0x1a8dec, Func Offset: 0x5ac
	// Line 260, Address: 0x1a8f30, Func Offset: 0x6f0
	// Line 263, Address: 0x1a9094, Func Offset: 0x854
	// Line 265, Address: 0x1a90b4, Func Offset: 0x874
	// Line 268, Address: 0x1a9110, Func Offset: 0x8d0
	// Line 270, Address: 0x1a91c8, Func Offset: 0x988
	// Line 271, Address: 0x1a91d0, Func Offset: 0x990
	// Func End, Address: 0x1a91e8, Func Offset: 0x9a8
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
	// Line 77, Address: 0x1a91f0, Func Offset: 0
	// Line 81, Address: 0x1a921c, Func Offset: 0x2c
	// Line 82, Address: 0x1a9220, Func Offset: 0x30
	// Line 91, Address: 0x1a9224, Func Offset: 0x34
	// Line 92, Address: 0x1a922c, Func Offset: 0x3c
	// Line 113, Address: 0x1a927c, Func Offset: 0x8c
	// Line 121, Address: 0x1a9280, Func Offset: 0x90
	// Line 92, Address: 0x1a9284, Func Offset: 0x94
	// Line 113, Address: 0x1a9288, Func Offset: 0x98
	// Line 121, Address: 0x1a9294, Func Offset: 0xa4
	// Line 123, Address: 0x1a92a0, Func Offset: 0xb0
	// Line 127, Address: 0x1a92ac, Func Offset: 0xbc
	// Line 140, Address: 0x1a92b0, Func Offset: 0xc0
	// Line 141, Address: 0x1a92bc, Func Offset: 0xcc
	// Line 142, Address: 0x1a92dc, Func Offset: 0xec
	// Line 144, Address: 0x1a92e8, Func Offset: 0xf8
	// Line 145, Address: 0x1a92ec, Func Offset: 0xfc
	// Line 157, Address: 0x1a92f0, Func Offset: 0x100
	// Line 158, Address: 0x1a92f8, Func Offset: 0x108
	// Line 168, Address: 0x1a9308, Func Offset: 0x118
	// Line 175, Address: 0x1a9314, Func Offset: 0x124
	// Line 180, Address: 0x1a9320, Func Offset: 0x130
	// Line 182, Address: 0x1a94f0, Func Offset: 0x300
	// Line 183, Address: 0x1a94f8, Func Offset: 0x308
	// Func End, Address: 0x1a9520, Func Offset: 0x330
}

