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
typedef u32(*type_3)(void*, void*);
typedef u32(*type_5)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_8)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_9)(void*);
typedef xBase*(*type_10)(u32);
typedef s32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_15)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_18)(RxNodeDefinition*);
typedef RpWorldSector*(*type_19)(RpWorldSector*);
typedef s8*(*type_20)(xBase*);
typedef void(*type_21)(RxNodeDefinition*);
typedef s32(*type_24)(RxPipelineNode*);
typedef s8*(*type_25)(u32);
typedef void(*type_28)(RxPipelineNode*);
typedef s32(*type_29)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_34)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_46)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_48)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_51)(xEnt*, xScene*, f32);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_57)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_59)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_61)(xEnt*);
typedef u32(*type_64)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_65)(xEnt*, xVec3*, xMat4x3*);
typedef RpAtomic*(*type_71)(RpAtomic*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef RwCamera*(*type_76)(RwCamera*);
typedef void(*type_78)(xMemPool*, void*);
typedef void(*type_83)(RwResEntry*);
typedef RwObjectHasFrame*(*type_91)(RwObjectHasFrame*);

typedef xVec4 type_2[12];
typedef u8 type_4[22];
typedef RwFrustumPlane type_6[6];
typedef f32 type_7[2];
typedef u32 type_11[15];
typedef u8 type_12[22];
typedef DistortionParticle type_14[100];
typedef u32 type_16[15];
typedef RwV3d type_17[8];
typedef u32 type_22[15];
typedef s8 type_23[16];
typedef RpLight* type_26[2];
typedef u8 type_27[3];
typedef RwFrame* type_30[2];
typedef f32 type_31[4];
typedef s8 type_32[16];
typedef xGlare type_33[10];
typedef f32 type_35[22];
typedef u16 type_36[3];
typedef xVec3 type_37[5];
typedef f32 type_38[22];
typedef u8 type_39[5];
typedef u8 type_40[2];
typedef xVec3 type_41[3];
typedef u32 type_42[2];
typedef u8 type_43[2];
typedef f32 type_44[6];
typedef f32 type_45[3];
typedef f32 type_47[3];
typedef xModelTag type_49[2];
typedef f32 type_50[3];
typedef f32 type_53[4];
typedef s8 type_54[4];
typedef f32 type_56[16];
typedef analog_data type_58[2];
typedef RwTexCoords* type_60[8];
typedef u32 type_62[4];
typedef xEnt* type_63[111];
typedef u32 type_66[72];
typedef u32 type_67[4096];
typedef xBase* type_68[72];
typedef u16 type_69[3];
typedef xVec3 type_70[4];
typedef u8 type_72[14];
typedef xModelTag type_73[4];
typedef xModelInstance* type_75[14];
typedef RxObjSpace3DVertex type_77[4];
typedef u8 type_79[4];
typedef s8 type_80[32];
typedef s8 type_81[32];
typedef f32 type_82[2];
typedef xCollis type_84[18];
typedef RwTexCoords* type_85[8];
typedef s8 type_86[128];
typedef type_86 type_87[6];
typedef u8 type_88[2];
typedef RxCluster type_89[1];
typedef xAnimMultiFileEntry type_90[1];
typedef s8 type_92[32];
typedef <unknown type (0xa510)> type_93[4];
typedef RwSky2DVertex type_94[4];
typedef xVec3 type_95[60];
typedef u16 type_96[4];

struct RpSector
{
	s32 type;
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
	type_15 BeforeAnimMatrices;
};

struct _tagxPad
{
	type_4 value;
	type_12 last_value;
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
	type_35 up_tmr;
	type_38 down_tmr;
	type_58 analog;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_82 BilinearLerp;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_31 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_46 eventFunc;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
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
	type_62 pad;
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
	type_25 id2Name;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	s32 memlvl;
};

struct xGlare
{
	s32 flags;
	xVec3 pos;
	f32 intensity;
	f32 intensityFadeRate;
	f32 lifetime;
	f32 size;
	RwRGBAReal col;
	RwRaster* raster;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	type_19 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_78 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_3 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	_class_2 anim_coll;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	type_49 BubbleWandTag;
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
	type_73 HangPawTag;
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
	type_11 Inv_PatsSock;
	type_16 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_22 Inv_LevelPickups;
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
	type_42 TongueFlags;
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
	type_72 sb_model_indices;
	type_75 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_5 Callback;
};

struct xSurface
{
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

struct xJSPHeader
{
	type_54 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_66 baseCount;
	type_68 baseList;
	_zEnv* zen;
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

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
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
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _class_1
{
	f32 t;
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

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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
	type_79 talk_filter;
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
	s32 driveMode;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	u32 mode;
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
	u16 matIndex;
	type_36 vertIndex;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_87 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_92 sceneStart;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct zPlatform
{
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
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
	s32 originalMatIndex;
	s32 nodeFlags;
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
	u32 filterAddressing;
	s32 refCount;
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
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	f32 r;
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
	type_85 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	f32 r;
	f32 h;
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
	u32 type;
	RwRGBAReal color;
	type_56 matrix;
	f32 radius;
	f32 angle;
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
	type_70 corner;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	type_9 activateCB;
	type_9 deactivateCB;
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
	type_84 colls;
	type_57 post;
	type_64 depenq;
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
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	s32 width;
	s32 height;
	s32 depth;
	RwVideoModeFlag flags;
	s32 refRate;
	s32 format;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
};

struct DistortionParticle
{
	xVec3 pos;
	u32 flags;
	xVec3 dir;
	f32 life;
	xVec3 vel;
	f32 death;
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
	type_37 lastRefs;
	type_39 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct RpTriangle
{
	type_69 vertIndex;
	s16 matIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xAnimMultiFileEntry
{
	u32 ID;
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
	type_2 frustplane;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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
	tri_data_1 tri;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
	u32 NumMatrices;
	xModelInstance* List;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct anim_coll_data
{
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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
	f32 distance;
};

struct xAnimMultiFileBase
{
	u32 Count;
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

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
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
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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
	f32 yaw;
	xCollis* coll;
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

struct RwLinkList
{
	RwLLLink link;
};

struct _tagiPad
{
	s32 port;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_93 qWords;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_95 tranTable;
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

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	s32 active;
	s32 hold;
	iColor_tag src;
	iColor_tag dest;
	f32 time_passed;
	f32 time_total;
	type_1 cb;
};

type_23 buffer;
type_32 buffer;
u8 g_debugRenderSafeArea;
_xFadeData mFade;
f32 mLetterboxO;
f32 mLetterboxTO;
f32 sLetterBoxSize;
u8 sLetterBoxAlpha;
type_14 gDistortionParticles;
s32 gNumDistortionParticles;
f32 sNoGlobalTime;
xVec3 ddir;
type_33 sGlare;
xVec3 sFullScreenGlareDir;
f32 sFullScreenGlareIntensity;
RwRGBA sFullScreenGlareColor;
s32 sFullScreenGlareEnabled;
u32 sFullScreenGlareTextureID;
RwTexture* sFullScreenGlareTexturePtr;
xGlobals* xglobals;
zGlobals globals;
u32 gFrameCount;
type_67 ourGlobals;

void xScrFxDrawBox(f32 x1, f32 y1, f32 x2, f32 y2, u8 red, u8 green, u8 blue, u8 alpha, f32 ushift, f32 vshift);
void xScrFXGlareRender(xCamera* cam);
void xScrFXFullScreenGlareRender();
s32 xScrFXGlareAdd(xVec3* pos, f32 life, f32 intensity, f32 size, f32 r, f32 g, f32 b, f32 a, RwRaster* raster);
void xScrFxDistortionUpdate(f32 dt);
void xScrFxDistortionAdd();
void xScrFxDrawSafeArea();
s32 xScrFxIsLetterbox();
void xScrFxUpdateLetterBox(f32 seconds);
void xScrFxLetterbox(s32 enable);
void xScrFxLetterBoxSetAlpha(u8 alpha);
void xScrFxLetterBoxSetSize(f32 size);
void xScrFxLetterboxReset();
void xScrFxUpdateFade(f32 seconds);
s32 xScrFxIsFading();
void xScrFxStopFade();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, f32 seconds, type_1 callback, s32 hold);
void xScrFxDrawScreenSizeRectangle();
void xScrFxRender();
void xScrFxUpdate(RwCamera* cam, f32 dt);
void xScrFxReset();
void xScrFxInit();

// xScrFxDrawBox__FffffUcUcUcUcff
// Start address: 0x2010c0
void xScrFxDrawBox(f32 x1, f32 y1, f32 x2, f32 y2, u8 red, u8 green, u8 blue, u8 alpha, f32 ushift, f32 vshift)
{
	f32 oocameraNearClipPlane;
	type_96 indices;
	type_94 v;
}

// xScrFXGlareRender__FP7xCamera
// Start address: 0x201570
void xScrFXGlareRender(xCamera* cam)
{
	s32 i;
	xVec3 w;
	xVec3 h;
	xVec3 v;
	xVec3 glareDir;
	f32 val;
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
	f32 d;
	f32 alpha;
}

// xScrFXGlareAdd__FP5xVec3fffffffP8RwRaster
// Start address: 0x2020e0
s32 xScrFXGlareAdd(xVec3* pos, f32 life, f32 intensity, f32 size, f32 r, f32 g, f32 b, f32 a, RwRaster* raster)
{
	s32 i;
	RwTexture* texturePtr;
}

// xScrFxDistortionUpdate__Ff
// Start address: 0x2022a0
void xScrFxDistortionUpdate(f32 dt)
{
	DistortionParticle* dp;
	s32 i;
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
	u32 screenWidth;
	u32 screenHeight;
	u32 xMargin;
	u32 yMargin;
	s32 top;
	s32 bottom;
	s32 left;
	s32 right;
}

// xScrFxIsLetterbox__Fv
// Start address: 0x2026b0
s32 xScrFxIsLetterbox()
{
}

// xScrFxUpdateLetterBox__FP8RwCameraf
// Start address: 0x2026e0
void xScrFxUpdateLetterBox(f32 seconds)
{
	RwVideoMode video_mode;
}

// xScrFxLetterbox__Fi
// Start address: 0x202800
void xScrFxLetterbox(s32 enable)
{
}

// xScrFxLetterBoxSetAlpha__FUc
// Start address: 0x202850
void xScrFxLetterBoxSetAlpha(u8 alpha)
{
}

// xScrFxLetterBoxSetSize__Ff
// Start address: 0x202860
void xScrFxLetterBoxSetSize(f32 size)
{
}

// xScrFxLetterboxReset__Fv
// Start address: 0x202870
void xScrFxLetterboxReset()
{
}

// xScrFxUpdateFade__FP8RwCameraf
// Start address: 0x202880
void xScrFxUpdateFade(f32 seconds)
{
	f32 t;
	RwVideoMode video_mode;
}

// xScrFxIsFading__Fv
// Start address: 0x202c50
s32 xScrFxIsFading()
{
}

// xScrFxStopFade__Fv
// Start address: 0x202c60
void xScrFxStopFade()
{
}

// xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
// Start address: 0x202c70
void xScrFxFade(iColor_tag* base, iColor_tag* dest, f32 seconds, type_1 callback, s32 hold)
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
void xScrFxUpdate(RwCamera* cam, f32 dt)
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

