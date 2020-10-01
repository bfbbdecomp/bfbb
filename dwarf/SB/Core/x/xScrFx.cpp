typedef struct RpSector;
typedef struct xAnimPlay;
typedef struct _tagxPad;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef enum _zPlayerType;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RxPipelineNode;
typedef struct xBound;
typedef struct RpAtomic;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct xLinkAsset;
typedef struct RwLLLink;
typedef struct xBase;
typedef struct tri_data_0;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xGridBound;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xScene;
typedef struct _tagxRumble;
typedef struct iEnv;
typedef struct xGlare;
typedef struct xVec3;
typedef struct xEnvAsset;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimTable;
typedef struct RpWorld;
typedef struct RxPipelineRequiresCluster;
typedef struct xMemPool;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct RpVertexNormal;
typedef union _class_0;
typedef struct xModelInstance;
typedef struct zCheckPoint;
typedef struct RxPipeline;
typedef struct zPlayerGlobals;
typedef struct xGroupAsset;
typedef struct xAnimEffect;
typedef struct xSurface;
typedef struct xEntAsset;
typedef struct xJSPHeader;
typedef struct zScene;
typedef struct RpLight;
typedef struct xVec4;
typedef struct RwRaster;
typedef struct zPlayerCarryInfo;
typedef struct RpInterpolator;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _class_1;
typedef struct xModelBucket;
typedef struct zJumpParam;
typedef struct rxReq;
typedef struct zPlayerSettings;
typedef struct xEnt;
typedef struct _zPortal;
typedef struct zEnt;
typedef struct xAnimTransition;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xAnimTransitionList;
typedef struct zEntHangable;
typedef struct xEntFrame;
typedef enum RwVideoModeFlag;
typedef struct RpPolygon;
typedef struct xPortalAsset;
typedef struct xGlobals;
typedef struct RpMaterialList;
typedef struct zPlatform;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct xLightKit;
typedef struct xModelTag;
typedef enum RxNodeDefEditable;
typedef struct xJSPNodeInfo;
typedef struct RpMaterial;
typedef enum RxClusterValid;
typedef struct RwTexture;
typedef struct zCutsceneMgr;
typedef struct xShadowSimplePoly;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xClumpCollBSPBranchNode;
typedef struct analog_data;
typedef struct zAssetPickupTable;
typedef struct RpClump;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFile;
typedef struct xSphere;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef enum RwCameraProjection;
typedef struct xEntBoulder;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpMorphTarget;
typedef struct xEnv;
typedef struct xLightKitLight;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct xShadowSimpleCache;
typedef struct RxClusterDefinition;
typedef struct xUpdateCullMgr;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct _class_2;
typedef struct iFogParams;
typedef struct RwSphere;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct RwTexDictionary;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef struct RxObjSpace3DVertex;
typedef struct DistortionParticle;
typedef struct xVec2;
typedef struct zLasso;
typedef struct xMat3x3;
typedef struct RpTriangle;
typedef struct RxClusterRef;
typedef struct xFFX;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct xAnimMultiFileEntry;
typedef struct xCamera;
typedef struct xAnimActiveEffect;
typedef struct _zEnv;
typedef struct RxIoSpec;
typedef struct xEntDrive;
typedef struct iColor_tag;
typedef struct xEntShadow;
typedef struct RxNodeMethods;
typedef struct xModelPool;
typedef struct RxPipelineCluster;
typedef struct anim_coll_data;
typedef struct RwSky2DVertexFields;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef enum _tagPadState;
typedef struct RwPlane;
typedef struct xAnimMultiFileBase;
typedef struct RxCluster;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef struct RxPacket;
typedef struct xBBox;
typedef struct zGlobals;
typedef struct zGlobalSettings;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct _tagPadAnalog;
typedef struct RwObjectHasFrame;
typedef struct tri_data_1;
typedef struct zPlayerLassoInfo;
typedef struct RwLinkList;
typedef struct _tagiPad;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct zLedgeGrabParams;
typedef struct RwV2d;
typedef struct xClumpCollBSPVertInfo;
typedef enum _zPlayerWallJumpState;
typedef struct _xFadeData;

typedef void(*type_0)(xAnimPlay*, xAnimState*);
typedef void(*type_1)();
typedef uint32(*type_3)(void*, void*);
typedef uint32(*type_5)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_8)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_9)(void*);
typedef xBase*(*type_10)(uint32);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_15)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_18)(RxNodeDefinition*);
typedef RpWorldSector*(*type_19)(RpWorldSector*);
typedef int8*(*type_20)(xBase*);
typedef void(*type_21)(RxNodeDefinition*);
typedef int32(*type_24)(RxPipelineNode*);
typedef int8*(*type_25)(uint32);
typedef void(*type_28)(RxPipelineNode*);
typedef int32(*type_29)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_34)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_46)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_48)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_51)(xEnt*, xScene*, float32);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_57)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_59)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_61)(xEnt*);
typedef uint32(*type_64)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_65)(xEnt*, xVec3*, xMat4x3*);
typedef RpAtomic*(*type_71)(RpAtomic*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef RwCamera*(*type_76)(RwCamera*);
typedef void(*type_78)(xMemPool*, void*);
typedef void(*type_83)(RwResEntry*);
typedef RwObjectHasFrame*(*type_91)(RwObjectHasFrame*);

typedef xVec4 type_2[12];
typedef uint8 type_4[22];
typedef RwFrustumPlane type_6[6];
typedef float32 type_7[2];
typedef uint32 type_11[15];
typedef uint8 type_12[22];
typedef DistortionParticle type_14[100];
typedef uint32 type_16[15];
typedef RwV3d type_17[8];
typedef uint32 type_22[15];
typedef int8 type_23[16];
typedef RpLight* type_26[2];
typedef uint8 type_27[3];
typedef RwFrame* type_30[2];
typedef float32 type_31[4];
typedef int8 type_32[16];
typedef xGlare type_33[10];
typedef float32 type_35[22];
typedef uint16 type_36[3];
typedef xVec3 type_37[5];
typedef float32 type_38[22];
typedef uint8 type_39[5];
typedef uint8 type_40[2];
typedef xVec3 type_41[3];
typedef uint32 type_42[2];
typedef uint8 type_43[2];
typedef float32 type_44[6];
typedef float32 type_45[3];
typedef float32 type_47[3];
typedef xModelTag type_49[2];
typedef float32 type_50[3];
typedef float32 type_53[4];
typedef int8 type_54[4];
typedef float32 type_56[16];
typedef analog_data type_58[2];
typedef RwTexCoords* type_60[8];
typedef uint32 type_62[4];
typedef xEnt* type_63[111];
typedef uint32 type_66[72];
typedef uint32 type_67[4096];
typedef xBase* type_68[72];
typedef uint16 type_69[3];
typedef xVec3 type_70[4];
typedef uint8 type_72[14];
typedef xModelTag type_73[4];
typedef xModelInstance* type_75[14];
typedef RxObjSpace3DVertex type_77[4];
typedef uint8 type_79[4];
typedef int8 type_80[32];
typedef int8 type_81[32];
typedef float32 type_82[2];
typedef xCollis type_84[18];
typedef RwTexCoords* type_85[8];
typedef int8 type_86[128];
typedef type_86 type_87[6];
typedef uint8 type_88[2];
typedef RxCluster type_89[1];
typedef xAnimMultiFileEntry type_90[1];
typedef int8 type_92[32];
typedef <unknown type (0xa510)> type_93[4];
typedef RwSky2DVertex type_94[4];
typedef xVec3 type_95[60];
typedef uint16 type_96[4];

struct RpSector
{
	int32 type;
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
	type_15 BeforeAnimMatrices;
};

struct _tagxPad
{
	type_4 value;
	type_12 last_value;
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
	type_35 up_tmr;
	type_38 down_tmr;
	type_58 analog;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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
	type_0 BeforeEnter;
	type_48 StateCallback;
	type_15 BeforeAnimMatrices;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_27 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_71 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_82 BilinearLerp;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_31 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_46 eventFunc;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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
	type_62 pad;
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
	type_25 id2Name;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_26 light;
	type_30 light_frame;
	int32 memlvl;
};

struct xGlare
{
	int32 flags;
	xVec3 pos;
	float32 intensity;
	float32 intensityFadeRate;
	float32 lifetime;
	float32 size;
	RwRGBAReal col;
	RwRaster* raster;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	type_19 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_78 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_3 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	_class_2 anim_coll;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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
	type_49 BubbleWandTag;
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
	type_73 HangPawTag;
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
	type_11 Inv_PatsSock;
	type_16 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_22 Inv_LevelPickups;
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
	type_42 TongueFlags;
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
	type_72 sb_model_indices;
	type_75 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_5 Callback;
};

struct xSurface
{
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

struct xJSPHeader
{
	type_54 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_66 baseCount;
	type_68 baseList;
	_zEnv* zen;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_88 NumAnims;
	void** RawData;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _class_1
{
	float32 t;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct rxReq
{
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_44 MoveSpeed;
	type_45 AnimSneak;
	type_47 AnimWalk;
	type_50 AnimRun;
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
	type_79 talk_filter;
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
	type_51 update;
	type_51 endUpdate;
	type_55 bupdate;
	type_59 move;
	type_61 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_65 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_34 Conditional;
	type_34 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zEntHangable
{
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

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	type_36 vertIndex;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_87 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_92 sceneStart;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zPlatform
{
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_53 wt;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_80 name;
	type_81 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct zCutsceneMgr
{
};

struct xShadowSimplePoly
{
	type_41 vert;
	xVec3 norm;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct zAssetPickupTable
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_52 callback;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_90 Files;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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
	type_85 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_60 texCoords;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntBoulder
{
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_56 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_70 corner;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_9 activateCB;
	type_9 deactivateCB;
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
	type_84 colls;
	type_57 post;
	type_64 depenq;
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
		_class_1 tuv;
		tri_data_0 tri;
	};
};

struct _class_2
{
	xVec3* verts;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_83 destroyNotify;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
	int32 refRate;
	int32 format;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct DistortionParticle
{
	xVec3 pos;
	uint32 flags;
	xVec3 dir;
	float32 life;
	xVec3 vel;
	float32 death;
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
	type_37 lastRefs;
	type_39 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct RpTriangle
{
	type_69 vertIndex;
	int16 matIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xFFX
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_74 beginUpdate;
	type_76 endUpdate;
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
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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
	type_2 frustplane;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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
	tri_data_1 tri;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_7 radius;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_18 nodeInit;
	type_21 nodeTerm;
	type_24 pipelineNodeInit;
	type_28 pipelineNodeTerm;
	type_29 pipelineNodeConfig;
	type_8 configMsgHandler;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct anim_coll_data
{
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_89 clusters;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_40 PowerUp;
	type_43 InitialPowerUp;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_91 sync;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct RwLinkList
{
	RwLLLink link;
};

struct _tagiPad
{
	int32 port;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_93 qWords;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_95 tranTable;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _xFadeData
{
	int32 active;
	int32 hold;
	iColor_tag src;
	iColor_tag dest;
	float32 time_passed;
	float32 time_total;
	type_1 cb;
};

type_23 buffer;
type_32 buffer;
uint8 g_debugRenderSafeArea;
_xFadeData mFade;
float32 mLetterboxO;
float32 mLetterboxTO;
float32 sLetterBoxSize;
uint8 sLetterBoxAlpha;
type_14 gDistortionParticles;
int32 gNumDistortionParticles;
float32 sNoGlobalTime;
xVec3 ddir;
type_33 sGlare;
xVec3 sFullScreenGlareDir;
float32 sFullScreenGlareIntensity;
RwRGBA sFullScreenGlareColor;
int32 sFullScreenGlareEnabled;
uint32 sFullScreenGlareTextureID;
RwTexture* sFullScreenGlareTexturePtr;
xGlobals* xglobals;
zGlobals globals;
uint32 gFrameCount;
type_67 ourGlobals;

void xScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha, float32 ushift, float32 vshift);
void xScrFXGlareRender(xCamera* cam);
void xScrFXFullScreenGlareRender();
int32 xScrFXGlareAdd(xVec3* pos, float32 life, float32 intensity, float32 size, float32 r, float32 g, float32 b, float32 a, RwRaster* raster);
void xScrFxDistortionUpdate(float32 dt);
void xScrFxDistortionAdd();
void xScrFxDrawSafeArea();
int32 xScrFxIsLetterbox();
void xScrFxUpdateLetterBox(float32 seconds);
void xScrFxLetterbox(int32 enable);
void xScrFxLetterBoxSetAlpha(uint8 alpha);
void xScrFxLetterBoxSetSize(float32 size);
void xScrFxLetterboxReset();
void xScrFxUpdateFade(float32 seconds);
int32 xScrFxIsFading();
void xScrFxStopFade();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, type_1 callback, int32 hold);
void xScrFxDrawScreenSizeRectangle();
void xScrFxRender();
void xScrFxUpdate(RwCamera* cam, float32 dt);
void xScrFxReset();
void xScrFxInit();

// xScrFxDrawBox__FffffUcUcUcUcff
// Start address: 0x2010c0
void xScrFxDrawBox(float32 x1, float32 y1, float32 x2, float32 y2, uint8 red, uint8 green, uint8 blue, uint8 alpha, float32 ushift, float32 vshift)
{
	float32 oocameraNearClipPlane;
	type_96 indices;
	type_94 v;
}

// xScrFXGlareRender__FP7xCamera
// Start address: 0x201570
void xScrFXGlareRender(xCamera* cam)
{
	int32 i;
	xVec3 w;
	xVec3 h;
	xVec3 v;
	xVec3 glareDir;
	float32 val;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_77 sStripVert;
}

// xScrFXFullScreenGlareRender__Fv
// Start address: 0x201eb0
void xScrFXFullScreenGlareRender()
{
	xMat4x3 mat;
	xVec3 v;
	xVec3 glareDir;
	float32 d;
	float32 alpha;
}

// xScrFXGlareAdd__FP5xVec3fffffffP8RwRaster
// Start address: 0x2020e0
int32 xScrFXGlareAdd(xVec3* pos, float32 life, float32 intensity, float32 size, float32 r, float32 g, float32 b, float32 a, RwRaster* raster)
{
	int32 i;
	RwTexture* texturePtr;
}

// xScrFxDistortionUpdate__Ff
// Start address: 0x2022a0
void xScrFxDistortionUpdate(float32 dt)
{
	DistortionParticle* dp;
	int32 i;
	xVec3 pos;
}

// xScrFxDistortionAdd__FP5xVec3P5xVec3i
// Start address: 0x202450
void xScrFxDistortionAdd()
{
}

// xScrFxDrawSafeArea__Fv
// Start address: 0x202460
void xScrFxDrawSafeArea()
{
	RwVideoMode videoMode;
	uint32 screenWidth;
	uint32 screenHeight;
	uint32 xMargin;
	uint32 yMargin;
	int32 top;
	int32 bottom;
	int32 left;
	int32 right;
}

// xScrFxIsLetterbox__Fv
// Start address: 0x2026b0
int32 xScrFxIsLetterbox()
{
}

// xScrFxUpdateLetterBox__FP8RwCameraf
// Start address: 0x2026e0
void xScrFxUpdateLetterBox(float32 seconds)
{
	RwVideoMode video_mode;
}

// xScrFxLetterbox__Fi
// Start address: 0x202800
void xScrFxLetterbox(int32 enable)
{
}

// xScrFxLetterBoxSetAlpha__FUc
// Start address: 0x202850
void xScrFxLetterBoxSetAlpha(uint8 alpha)
{
}

// xScrFxLetterBoxSetSize__Ff
// Start address: 0x202860
void xScrFxLetterBoxSetSize(float32 size)
{
}

// xScrFxLetterboxReset__Fv
// Start address: 0x202870
void xScrFxLetterboxReset()
{
}

// xScrFxUpdateFade__FP8RwCameraf
// Start address: 0x202880
void xScrFxUpdateFade(float32 seconds)
{
	float32 t;
	RwVideoMode video_mode;
}

// xScrFxIsFading__Fv
// Start address: 0x202c50
int32 xScrFxIsFading()
{
}

// xScrFxStopFade__Fv
// Start address: 0x202c60
void xScrFxStopFade()
{
}

// xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
// Start address: 0x202c70
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, type_1 callback, int32 hold)
{
}

// xScrFxDrawScreenSizeRectangle__Fv
// Start address: 0x202d20
void xScrFxDrawScreenSizeRectangle()
{
	RwVideoMode video_mode;
}

// xScrFxRender__FP8RwCamera
// Start address: 0x202d80
void xScrFxRender()
{
}

// xScrFxUpdate__FP8RwCameraf
// Start address: 0x202dd0
void xScrFxUpdate(RwCamera* cam, float32 dt)
{
}

// xScrFxReset__Fv
// Start address: 0x202e90
void xScrFxReset()
{
}

// xScrFxInit__Fv
// Start address: 0x202ed0
void xScrFxInit()
{
}

