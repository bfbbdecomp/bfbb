typedef struct xScene;
typedef struct _tagxRumble;
typedef struct xVec3;
typedef struct zPlatform;
typedef struct RpAtomic;
typedef struct zSaveLoadGame;
typedef enum sound_category;
typedef struct xShadowSimpleCache;
typedef struct xGridBound;
typedef struct RxPipeline;
typedef struct xEnt;
typedef struct xEntBoulder;
typedef struct xAnimState;
typedef struct zGlobals;
typedef struct xEntCollis;
typedef struct RwObjectHasFrame;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef struct xAnimSingle;
typedef struct RwFrame;
typedef struct xEntSplineData;
typedef struct RxPipelineNode;
typedef struct zGlobalSettings;
typedef struct rxHeapFreeBlock;
typedef struct xEnv;
typedef struct RwRaster;
typedef struct xGroup;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RpInterpolator;
typedef struct zEnt;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RxNodeDefinition;
typedef struct xAnimMultiFileBase;
typedef struct RpLight;
typedef struct xAnimFile;
typedef struct xEntMotionPenData;
typedef struct XSGAutoData;
typedef struct xEntFrame;
typedef struct zPlayerLassoInfo;
typedef struct xGroupAsset;
typedef struct zCutsceneMgr;
typedef struct st_XSAVEGAME_DATA;
typedef struct xAnimEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct zScene;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct RxPipelineCluster;
typedef struct xCollis;
typedef struct zLedgeGrabParams;
typedef struct RxPipelineNodeParam;
typedef struct _class_0;
typedef struct xPlatformAsset;
typedef struct RpPolygon;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xLinkAsset;
typedef struct xEntMPData;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xQuat;
typedef struct RpMaterialList;
typedef struct xAnimPlay;
typedef enum _zPlayerWallJumpState;
typedef struct xFFX;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xEntMotionAsset;
typedef struct xModelInstance;
typedef struct rxHeapBlockHeader;
typedef struct xMovePoint;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct xAnimMultiFile;
typedef struct xLightKitLight;
typedef struct zUIAsset;
typedef struct zLasso;
typedef struct RxPipelineRequiresCluster;
typedef struct xSpline3;
typedef struct xClumpCollBSPTree;
typedef struct xEntMotionERData;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RpClump;
typedef struct xUpdateCullGroup;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct anim_coll_data;
typedef struct zPlatFMRunTime;
typedef struct analog_data;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct xVec4;
typedef struct xClumpCollBSPTriangle;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct _tagiTRCPadInfo;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xQCData;
typedef struct xEnvAsset;
typedef struct RpVertexNormal;
typedef struct xCoef3;
typedef struct zCheckPoint;
typedef enum eGameMode;
typedef enum RxClusterValidityReq;
typedef struct zPlayerGlobals;
typedef struct xAnimTable;
typedef struct _zUI;
typedef struct _zPortal;
typedef struct iSndInfo;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct xMemPool;
typedef struct xEntMotionOrbitData;
typedef enum RxNodeDefEditable;
typedef struct xCamera;
typedef enum en_SAVEGAME_MODE;
typedef enum RxClusterValid;
typedef struct zPlayerSettings;
typedef enum sound_listener_game_mode;
typedef struct xRot;
typedef union _class_1;
typedef struct xMovePointAsset;
typedef struct RwCamera;
typedef struct RpTriangle;
typedef struct xSndVoiceInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum en_XSGASYNC_STATUS;
typedef enum _tagTRCState;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iEnv;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef struct iFogParams;
typedef struct st_ISGSESSION;
typedef struct xBox;
typedef struct xBound;
typedef enum _tagPadInit;
typedef struct xLightKit;
typedef struct RxClusterDefinition;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct xPortalAsset;
typedef struct xModelTag;
typedef struct st_XSAVEGAME_CLIENT;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct xEntMotionMPData;
typedef struct xBaseAsset;
typedef struct xEntERData;
typedef struct RxOutputSpec;
typedef struct zSaveLoadUI;
typedef enum _tagPadState;
typedef struct xMat3x3;
typedef struct xJSPHeader;
typedef struct RwTexture;
typedef struct xGlobals;
typedef struct xVec2;
typedef struct RxClusterRef;
typedef struct RpSector;
typedef struct zEntHangable;
typedef struct xModelBucket;
typedef struct RwObject;
typedef struct xEntAsset;
typedef struct _tagxPad;
typedef struct RwLLLink;
typedef struct xEntDrive;
typedef enum en_XSG_WHYFAIL;
typedef struct RxIoSpec;
typedef struct xBBox;
typedef struct _zEnv;
typedef struct xCoef;
typedef struct xEntMotionMechData;
typedef struct iSndVol;
typedef struct RxNodeMethods;
typedef struct _tagPadAnalog;
typedef struct xEntPenData;
typedef struct RpWorld;
typedef struct _tagTRCPadInfo;
typedef struct xSndGlobals;
typedef struct _tagiPad;
typedef struct RwFrustumPlane;
typedef struct zJumpParam;
typedef struct basic_rect;
typedef struct RwPlane;
typedef struct xEntOrbitData;
typedef struct RxCluster;
typedef struct xShadowSimplePoly;
typedef struct RxPacket;
typedef struct xEntMotion;
typedef enum RwFogType;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_0;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct _class_2;
typedef struct RwLinkList;

typedef int32(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xEnt*, xScene*, float32);
typedef RwCamera*(*type_6)(RwCamera*);
typedef void(*type_8)(void*);
typedef void(*type_10)(xEnt*, xScene*, float32, xEntCollis*);
typedef RwObjectHasFrame*(*type_11)(RwObjectHasFrame*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef uint32(*type_16)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_17)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_18)(RxPipelineNode*);
typedef void(*type_21)(xEnt*);
typedef xBase*(*type_24)(uint32);
typedef int8*(*type_26)(xBase*);
typedef uint32(*type_29)(void*, void*);
typedef int32(*type_30)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_32)(uint32);
typedef uint32(*type_33)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_35)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef uint32(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_46)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_48)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_50)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_54)(RxNodeDefinition*);
typedef void(*type_55)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_58)(RxNodeDefinition*);
typedef int32(*type_59)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef RpClump*(*type_62)(RpClump*, void*);
typedef void(*type_69)(xAnimPlay*, xAnimState*);
typedef int32(*type_71)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef void(*type_73)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_74)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_75)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_77)(RpAtomic*);
typedef int32(*type_80)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_91)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_95)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef RwCamera*(*type_105)(RwCamera*);
typedef int32(*type_107)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef RpWorldSector*(*type_108)(RpWorldSector*);
typedef void(*type_112)(xMemPool*, void*);
typedef void(*type_121)(RwResEntry*);

typedef RpLight* type_0[2];
typedef float32 type_1[2];
typedef uint8 type_4[22];
typedef float32 type_5[12];
typedef float32 type_7[16];
typedef RwFrame* type_9[2];
typedef int8 type_13[64];
typedef int8 type_14[64];
typedef float32 type_15[12];
typedef int8 type_19[32];
typedef _tagTRCPadInfo type_20[4];
typedef float32 type_22[2];
typedef int8* type_23[15];
typedef int8 type_25[32];
typedef uint8 type_27[3];
typedef xVec3 type_28[5];
typedef uint8 type_31[2];
typedef uint8 type_34[5];
typedef int8 type_38[64];
typedef int8 type_39[32];
typedef zSaveLoadUI type_40[62];
typedef uint16 type_41[3];
typedef xVec3 type_42[60];
typedef int8 type_43[256];
typedef RwFrustumPlane type_44[6];
typedef uint32 type_45[4];
typedef xVec3 type_47[4];
typedef uint8 type_49[2];
typedef xAnimMultiFileEntry type_51[1];
typedef float32 type_52[22];
typedef RwV3d type_53[8];
typedef int8 type_56[32];
typedef float32 type_57[22];
typedef float32 type_60[4];
typedef uint32 type_61[15];
typedef int8 type_63[64];
typedef uint32 type_64[15];
typedef int8 type_65[16];
typedef RwTexCoords* type_66[8];
typedef xCollis type_67[18];
typedef uint32 type_68[15];
typedef analog_data type_70[2];
typedef int8 type_72[16];
typedef uint16 type_76[3];
typedef int8 type_78[32];
typedef uint8 type_79[2];
typedef uint8 type_81[2];
typedef xVec4 type_82[12];
typedef int8 type_83[32];
typedef uint32 type_84[2];
typedef uint8 type_85[2];
typedef st_XSAVEGAME_CLIENT type_86[128];
typedef float32 type_87[6];
typedef float32 type_88[3];
typedef uint32 type_89[4];
typedef float32 type_90[3];
typedef xModelTag type_92[2];
typedef float32 type_93[3];
typedef float32 type_94[2];
typedef uint8 type_96[3];
typedef int8 type_97[32];
typedef RwTexCoords* type_98[8];
typedef uint32 type_99[72];
typedef xEnt* type_100[111];
typedef int8 type_101[4];
typedef int8 type_102[128];
typedef float32 type_103[4];
typedef xBase* type_104[72];
typedef int8 type_106[128];
typedef int8 type_109[128];
typedef type_109 type_110[6];
typedef float32 type_111[4];
typedef uint8 type_113[14];
typedef xModelTag type_114[4];
typedef int8 type_115[32];
typedef int8 type_116[32];
typedef xModelInstance* type_117[14];
typedef float32 type_118[5];
typedef int8 type_119[32];
typedef xSndVoiceInfo type_120[48];
typedef xMat4x3 type_122[2];
typedef xVec3 type_123[3];
typedef uint16 type_124[2];
typedef uint8 type_125[4];
typedef int8 type_126[32];
typedef float32 type_127[12];
typedef float32 type_128[2];
typedef float32 type_129[12];
typedef float32 type_130[2];
typedef float32 type_131[12];
typedef float32 type_132[2];
typedef zSaveLoadGame type_133[3];
typedef RxCluster type_134[1];
typedef uint8 type_135[22];
typedef float32 type_136[12];

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
	type_24 resolvID;
	type_26 base2Name;
	type_32 id2Name;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float32 pauseMult;
	float32 pauseDelta;
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
	type_77 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zSaveLoadGame
{
	type_13 label;
	type_19 date;
	int32 progress;
	uint32 size;
	int8 thumbIconIndex;
};

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
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
	type_47 corner;
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
	type_3 update;
	type_3 endUpdate;
	type_12 bupdate;
	type_17 move;
	type_21 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_37 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xEntBoulder
{
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
	type_69 BeforeEnter;
	type_55 StateCallback;
	type_73 BeforeAnimMatrices;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_67 colls;
	type_10 post;
	type_33 depenq;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_11 sync;
};

struct st_XSAVEGAME_READCONTEXT
{
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_22 BilinearLerp;
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

struct xEntSplineData
{
	int32 unknown;
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
	type_81 PowerUp;
	type_85 InitialPowerUp;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_29 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
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

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_49 NumAnims;
	void** RawData;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_31 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct XSGAutoData
{
	int32 flg_autodata;
	int32 lastTarg;
	int32 lastGame;
	int32 lastPhysicalSlot;
	st_ISGSESSION* isg_monitor;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct zCutsceneMgr
{
};

struct st_XSAVEGAME_DATA
{
	int32 gfile_idx;
	en_SAVEGAME_MODE mode;
	uint32 stage;
	int32 gslot;
	type_63 label;
	int32 progress;
	int32 thumbIconIdx;
	long32 playtime;
	int8* membuf;
	int32 memsize;
	int8* buf_curpos;
	int8* buf_sizespot;
	int8* buf_cksmspot;
	int32 totamt;
	uint32 chksum;
	uint32 upd_tally;
	int32 cltneed;
	int32 cltmax;
	int32 chdrneed;
	int32 stkcnt;
	type_86 cltstk;
	st_XSAVEGAME_CLIENT dfltloadclt;
	uint32 file_chksum;
	uint32 read_chksum;
	int32 readsize;
	int8* loadbuf;
	int32 loadsize;
	int8* walkpos;
	int32 walkremain;
	st_ISGSESSION* isgsess;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_16 Callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_36 Conditional;
	type_36 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_75 eventFunc;
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
	type_99 baseCount;
	type_104 baseList;
	_zEnv* zen;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_42 tranTable;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct xPlatformAsset
{
};

struct RpPolygon
{
	uint16 matIndex;
	type_41 vertIndex;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_60 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	type_73 BeforeAnimMatrices;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xFFX
{
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

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_89 pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_79 pad;
	float32 delay;
	xSpline3* spl;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_51 Files;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_7 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct zUIAsset : xEntAsset
{
	uint32 uiFlags;
	type_124 dim;
	uint32 textureID;
	type_128 uva;
	type_130 uvb;
	type_132 uvc;
	type_1 uvd;
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
	type_28 lastRefs;
	type_34 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_62 callback;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_94 radius;
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
	type_98 texCoords;
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
	type_66 texCoords;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct anim_coll_data
{
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_127 tmrs;
	type_129 ttms;
	type_131 atms;
	type_136 dtms;
	type_5 vms;
	type_15 dss;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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
	type_96 pad;
	void* moprops;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_92 BubbleWandTag;
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
	type_114 HangPawTag;
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
	type_61 Inv_PatsSock;
	type_64 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_68 Inv_LevelPickups;
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
	type_84 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_100 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_113 sb_model_indices;
	type_117 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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

struct _zUI : zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
	uint16 preUpdateIndex;
	uint16 updateIndex;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_121 destroyNotify;
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
	type_8 activateCB;
	type_8 deactivateCB;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_82 frustplane;
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_87 MoveSpeed;
	type_88 AnimSneak;
	type_90 AnimWalk;
	type_93 AnimRun;
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
	type_125 talk_filter;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_105 beginUpdate;
	type_6 endUpdate;
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
	type_44 frustumPlanes;
	RwBBox frustumBoundBox;
	type_53 frustumCorners;
};

struct RpTriangle
{
	type_76 vertIndex;
	int16 matIndex;
};

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	xVec3* parentPos;
	int32 internalID;
	uint32 flags;
	uint16 pad;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float32 innerRadius2;
	float32 outerRadius2;
	uint32 lock_owner;
	iSndInfo ps;
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

enum en_XSGASYNC_STATUS
{
	XSG_ASTAT_NOOP,
	XSG_ASTAT_INPROG,
	XSG_ASTAT_SUCCESS,
	XSG_ASTAT_FAILED
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_0 light;
	type_9 light_frame;
	int32 memlvl;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
};

struct xEntMotionSplineData
{
	int32 unknown;
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

struct st_ISGSESSION
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_103 wt;
};

struct st_XSAVEGAME_CLIENT
{
	uint32 idtag;
	type_35 cltinfo;
	type_48 cltproc;
	type_59 cltload;
	void* cltdata;
	int32 needamt;
	int32 maxamt;
	int32 realamt;
	int8* buf_sizepos;
	int8* buf_maxpos;
	int32 blokact;
	int32 blokmax;
	int8* blokpos;
	int8* readpos;
	int32 readamt;
	int32 readremain;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zSaveLoadUI
{
	uint32 entry;
	uint32 nameID;
	int8* name;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xJSPHeader
{
	type_101 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_116 name;
	type_119 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_110 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_115 sceneStart;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpSector
{
	int32 type;
};

struct zEntHangable
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _tagxPad
{
	type_135 value;
	type_4 last_value;
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
	type_52 up_tmr;
	type_57 down_tmr;
	type_70 analog;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

enum en_XSG_WHYFAIL
{
	XSG_WHYERR_NONE,
	XSG_WHYERR_NOCARD,
	XSG_WHYERR_NOROOM,
	XSG_WHYERR_DAMAGE,
	XSG_WHYERR_CARDYANKED,
	XSG_WHYERR_OTHER,
	XSG_WHYERR_NOMORE
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCoef
{
	type_111 a;
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct RxNodeMethods
{
	type_50 nodeBody;
	type_54 nodeInit;
	type_58 nodeTerm;
	type_2 pipelineNodeInit;
	type_18 pipelineNodeTerm;
	type_30 pipelineNodeConfig;
	type_46 configMsgHandler;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
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
	type_108 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	type_118 categoryVolFader;
	type_120 voice;
	type_122 listenerMat;
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

struct _tagiPad
{
	int32 port;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
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

struct xShadowSimplePoly
{
	type_123 vert;
	xVec3 norm;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_134 clusters;
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_2
{
	xVec3* verts;
};

struct RwLinkList
{
	RwLLLink link;
};

type_65 buffer;
type_72 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
uint32 saveSuccess;
float32 time_elapsed;
float32 time_last;
float32 time_current;
long32 t0;
long32 t1;
int32 currentCard;
int32 currentGame;
int32 promptSel;
int32 badCard;
int32 sAvailable;
int32 sNeeded;
int32 sAccessType;
float32 dontPoll;
int32 sLastCard;
int32 sLastGame;
int32 autoSaveCard;
type_83 currSceneStr;
type_126 sceneRead;
type_40 zSaveLoadUITable;
type_23 thumbIconMap;
type_133 zSaveLoadGameTable;
uint8 preAutoSaving;
int32 ps2Result;
int32 ps2Formatted;
int32 ps2CardType;
int32 ps2FreeSpace;
zGlobals globals;
xSndGlobals gSnd;
eGameMode gGameMode;
type_20 gTrcPad;
int32 gGameState;
type_107 xSGT_LoadPrefsCB;
type_80 xSGT_LoadLoadCB;
type_95 xSGT_SaveProcPrefsCB;
type_91 xSGT_SaveInfoPrefsCB;
type_74 xSGT_SaveProcCB;
type_71 xSGT_SaveInfoCB;
uint32 gFrameCount;
float32 sTimeElapsed;
long32 sTimeLast;
long32 sTimeCurrent;

uint32 zSaveLoad_slotIsEmpty(uint32 i);
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most);
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoCB(int32* need, int32* most);
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam);
uint32 zSaveLoad_SaveLoop();
uint32 zSaveLoad_LoadLoop();
int32 zSaveLoad_LoadGame();
int32 zSaveLoad_SaveGame();
int32 zSaveLoad_DoAutoSave();
void zSaveLoadAutoSaveUpdate();
void zSaveLoadPreAutoSave(uint8 onOff);
uint8 zSaveLoadGetPreAutoSave();
int32 zSaveLoad_GameSelect(int32 mode);
void zSaveLoad_BuildName(int8* name_txt, int32 idx);
void BuildIt(int8* build_txt, int32 i);
int32 zSaveLoad_CardPick(int32 mode);
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckFormatted(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheck(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num, int32 game);
int32 zSaveLoad_CardCheckGamesSingle(int32 num);
int32 zSaveLoad_CardCheckSpaceSingle(int32 num);
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num);
int32 zSaveLoad_CardCheckFormattedSingle(int32 num);
int32 zSaveLoad_CardCheckSingle(int32 num);
int32 zSaveLoad_CardPrompt(int32 mode);
int32 CardtoTgt(int32 card);
int32 format(int32 num, int32 mode);
int32 zSaveLoadGetAutoSaveCard();
int32 zSaveLoad_getMCAccessType();
int32 zSaveLoad_getMCneeded();
int32 zSaveLoad_getMCavailable();
int32 zSaveLoad_getcard();
int32 zSaveLoad_getgame();
void zSaveLoad_Tick();
void zUpdateThumbIcon();

// zSaveLoad_slotIsEmpty__FUi
// Start address: 0x192190
uint32 zSaveLoad_slotIsEmpty(uint32 i)
{
}

// xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1921e0
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_78 bigbuf;
}

// xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1922d0
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_97 bigbuf;
	int32 compdiff;
}

// xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1923a0
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 amy;
	int32 sum;
}

// xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192450
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most)
{
}

// xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x192470
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 amy;
	int32 sum;
}

// xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192530
int32 xSGT_SaveInfoCB(int32* need, int32* most)
{
	int32 slen;
}

// zSaveLoad_DispatchCB__FUiPCf
// Start address: 0x192580
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam)
{
	st_XSAVEGAME_DATA* inst;
}

// zSaveLoad_SaveLoop__Fv
// Start address: 0x192660
uint32 zSaveLoad_SaveLoop()
{
	int32 result;
	int32 state;
	int32 tmp;
	xBase* sendTo;
	xBase* sendTo;
	int32 tmp;
	xBase* sendTo;
}

// zSaveLoad_LoadLoop__Fv
// Start address: 0x192c90
uint32 zSaveLoad_LoadLoop()
{
	int32 state;
	int32 tmp;
	int32 tmp;
	int32 result;
}

// zSaveLoad_LoadGame__Fv
// Start address: 0x193060
int32 zSaveLoad_LoadGame()
{
	int32 success;
	int32 teststat;
	int32 rc;
	en_XSGASYNC_STATUS asstat;
	int32 use_tgt;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
	int32 use_game;
}

// zSaveLoad_SaveGame__Fv
// Start address: 0x193340
int32 zSaveLoad_SaveGame()
{
	int32 success;
	int32 teststat;
	int32 rc;
	en_XSGASYNC_STATUS asstat;
	int32 use_tgt;
	int32 use_game;
	uint32 progress;
	type_38 label;
	int8* area;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
}

// zSaveLoad_DoAutoSave__Fv
// Start address: 0x193790
int32 zSaveLoad_DoAutoSave()
{
	int32 success;
	int32 teststat;
	int32 rc;
	en_XSGASYNC_STATUS asstat;
	st_XSAVEGAME_DATA* svinst;
	XSGAutoData* autodata;
	int32 use_tgt;
	uint32 progress;
	type_14 label;
	int8* area;
}

// zSaveLoadAutoSaveUpdate__Fv
// Start address: 0x193af0
void zSaveLoadAutoSaveUpdate()
{
	xBase* sendTo;
	XSGAutoData* autodata;
	int32 result;
}

// zSaveLoadPreAutoSave__Fb
// Start address: 0x193d30
void zSaveLoadPreAutoSave(uint8 onOff)
{
}

// zSaveLoadGetPreAutoSave__Fv
// Start address: 0x193d40
uint8 zSaveLoadGetPreAutoSave()
{
}

// zSaveLoad_GameSelect__Fi
// Start address: 0x193d50
int32 zSaveLoad_GameSelect(int32 mode)
{
	int32 done;
	int32 i;
	st_XSAVEGAME_DATA* svinst;
	int32 use_tgt;
	int32 emptyCount;
}

// zSaveLoad_BuildName__FPci
// Start address: 0x194640
void zSaveLoad_BuildName(int8* name_txt, int32 idx)
{
	type_102 desired;
	type_106 current_name;
	int32 counter;
	int32 i;
}

// BuildIt__FPci
// Start address: 0x194750
void BuildIt(int8* build_txt, int32 i)
{
	type_25 date1;
	type_39 date2;
	type_43 biggerbuf;
	type_56 displaySizeUnit;
}

// zSaveLoad_CardPick__Fi
// Start address: 0x194970
int32 zSaveLoad_CardPick(int32 mode)
{
	int32 done;
	uint8 formatDone;
}

// zSaveLoad_CardCheckSlotOverwrite__Fii
// Start address: 0x194f30
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber)
{
}

// zSaveLoad_CardCheckGames__Fii
// Start address: 0x195190
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode)
{
	int32 result;
	int32 tmp;
}

// zSaveLoad_CardCheckSpace__Fii
// Start address: 0x195330
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode)
{
	int32 result;
	int32 tmp;
}

// zSaveLoad_CardCheckValid__Fii
// Start address: 0x1954d0
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode)
{
}

// zSaveLoad_CardCheckFormatted__Fii
// Start address: 0x195510
int32 zSaveLoad_CardCheckFormatted(int32 cardNumber, int32 mode)
{
	int32 result;
}

// zSaveLoad_CardCheck__Fii
// Start address: 0x195700
int32 zSaveLoad_CardCheck(int32 cardNumber, int32 mode)
{
	int32 result;
	int32 cardResult;
}

// zSaveLoad_CardCheckSlotEmpty_hasGame__Fii
// Start address: 0x1957a0
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
}

// zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii
// Start address: 0x1958a0
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num, int32 game)
{
	int32 rc;
}

// zSaveLoad_CardCheckGamesSingle__Fi
// Start address: 0x1959e0
int32 zSaveLoad_CardCheckGamesSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
}

// zSaveLoad_CardCheckSpaceSingle__Fi
// Start address: 0x195b40
int32 zSaveLoad_CardCheckSpaceSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
}

// zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi
// Start address: 0x195c20
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num)
{
	int32 rc;
}

// zSaveLoad_CardCheckFormattedSingle__Fi
// Start address: 0x195cb0
int32 zSaveLoad_CardCheckFormattedSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
}

// zSaveLoad_CardCheckSingle__Fi
// Start address: 0x195df0
int32 zSaveLoad_CardCheckSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 tgtslot;
}

// zSaveLoad_CardPrompt__Fi
// Start address: 0x195eb0
int32 zSaveLoad_CardPrompt(int32 mode)
{
}

// CardtoTgt__Fi
// Start address: 0x196060
int32 CardtoTgt(int32 card)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
}

// format__Fii
// Start address: 0x196100
int32 format(int32 num, int32 mode)
{
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
}

// zSaveLoadGetAutoSaveCard__Fv
// Start address: 0x1965e0
int32 zSaveLoadGetAutoSaveCard()
{
}

// zSaveLoad_getMCAccessType__Fv
// Start address: 0x1965f0
int32 zSaveLoad_getMCAccessType()
{
}

// zSaveLoad_getMCneeded__Fv
// Start address: 0x196600
int32 zSaveLoad_getMCneeded()
{
}

// zSaveLoad_getMCavailable__Fv
// Start address: 0x196610
int32 zSaveLoad_getMCavailable()
{
}

// zSaveLoad_getcard__Fv
// Start address: 0x196620
int32 zSaveLoad_getcard()
{
}

// zSaveLoad_getgame__Fv
// Start address: 0x196630
int32 zSaveLoad_getgame()
{
}

// zSaveLoad_Tick__Fv
// Start address: 0x196640
void zSaveLoad_Tick()
{
	xMat4x3 playerMat;
}

// zUpdateThumbIcon__Fv
// Start address: 0x196830
void zUpdateThumbIcon()
{
	int32 i;
	_zUI* gameSlot;
	int32 start;
	int32 end;
	uint32 id;
	_zUI* thumbIcon;
	int32 index;
}

