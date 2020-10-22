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
typedef struct _class_1;
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
typedef int8 type_110[128][6];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zSaveLoadGame
{
	int8 label[64];
	int8 date[32];
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
	xVec3 corner[4];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	uint32(*cb)(void*, void*);
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
	uint8 NumAnims[2];
	void** RawData;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	uint8 pad[2];
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
	int8 label[64];
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
	st_XSAVEGAME_CLIENT cltstk[128];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint16 vertIndex[3];
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
	float32 param[4];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32 pad[4];
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
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
	xAnimMultiFileEntry Files[1];
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

struct zUIAsset : xEntAsset
{
	uint32 uiFlags;
	uint16 dim[2];
	uint32 textureID;
	float32 uva[2];
	float32 uvb[2];
	float32 uvc[2];
	float32 uvd[2];
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
	RpClump*(*callback)(RpClump*, void*);
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
	float32 radius[2];
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
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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
	uint8 pad[3];
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
	void(*destroyNotify)(RwResEntry*);
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
	xVec4 frustplane[12];
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct RpTriangle
{
	uint16 vertIndex[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint8 pad[3];
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
	float32 wt[4];
};

struct st_XSAVEGAME_CLIENT
{
	uint32 idtag;
	int32(*cltinfo)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
	int32(*cltproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
	int32(*cltload)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
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
	int8 idtag[4];
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
	int8 name[32];
	int8 mask[32];
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
	float32 a[4];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	float32 categoryVolFader[5];
	xSndVoiceInfo voice[48];
	xMat4x3 listenerMat[2];
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
	xVec3 vert[3];
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
	RxCluster clusters[1];
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

int8 buffer[16];
int8 buffer[16];
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
int8 currSceneStr[32];
int8 sceneRead[32];
zSaveLoadUI zSaveLoadUITable[62];
int8* thumbIconMap[15];
zSaveLoadGame zSaveLoadGameTable[3];
uint8 preAutoSaving;
int32 ps2Result;
int32 ps2Formatted;
int32 ps2CardType;
int32 ps2FreeSpace;
zGlobals globals;
xSndGlobals gSnd;
eGameMode gGameMode;
_tagTRCPadInfo gTrcPad[4];
int32 gGameState;
int32(*xSGT_LoadPrefsCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSGT_LoadLoadCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSGT_SaveProcPrefsCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSGT_SaveInfoPrefsCB)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSGT_SaveProcCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSGT_SaveInfoCB)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
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
	// Line 4371, Address: 0x192190, Func Offset: 0
	// Line 4367, Address: 0x192194, Func Offset: 0x4
	// Line 4371, Address: 0x192198, Func Offset: 0x8
	// Line 4367, Address: 0x1921b4, Func Offset: 0x24
	// Line 4371, Address: 0x1921b8, Func Offset: 0x28
	// Line 4374, Address: 0x1921c4, Func Offset: 0x34
	// Line 4371, Address: 0x1921c8, Func Offset: 0x38
	// Line 4374, Address: 0x1921d0, Func Offset: 0x40
	// Func End, Address: 0x1921d8, Func Offset: 0x48
}

// xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1921e0
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 bigbuf[32];
	// Line 4322, Address: 0x1921e0, Func Offset: 0
	// Line 4323, Address: 0x1921e4, Func Offset: 0x4
	// Line 4322, Address: 0x1921e8, Func Offset: 0x8
	// Line 4323, Address: 0x1921ec, Func Offset: 0xc
	// Line 4322, Address: 0x1921f0, Func Offset: 0x10
	// Line 4323, Address: 0x1921fc, Func Offset: 0x1c
	// Line 4343, Address: 0x19221c, Func Offset: 0x3c
	// Line 4347, Address: 0x192234, Func Offset: 0x54
	// Line 4350, Address: 0x19224c, Func Offset: 0x6c
	// Line 4353, Address: 0x192264, Func Offset: 0x84
	// Line 4357, Address: 0x19227c, Func Offset: 0x9c
	// Line 4358, Address: 0x19228c, Func Offset: 0xac
	// Line 4360, Address: 0x1922a0, Func Offset: 0xc0
	// Line 4364, Address: 0x1922b0, Func Offset: 0xd0
	// Line 4363, Address: 0x1922b8, Func Offset: 0xd8
	// Line 4364, Address: 0x1922bc, Func Offset: 0xdc
	// Func End, Address: 0x1922c8, Func Offset: 0xe8
}

// xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1922d0
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 bigbuf[32];
	int32 compdiff;
	// Line 4290, Address: 0x1922d0, Func Offset: 0
	// Line 4291, Address: 0x1922d4, Func Offset: 0x4
	// Line 4290, Address: 0x1922d8, Func Offset: 0x8
	// Line 4291, Address: 0x1922dc, Func Offset: 0xc
	// Line 4290, Address: 0x1922e0, Func Offset: 0x10
	// Line 4291, Address: 0x1922f0, Func Offset: 0x20
	// Line 4302, Address: 0x192310, Func Offset: 0x40
	// Line 4295, Address: 0x192314, Func Offset: 0x44
	// Line 4302, Address: 0x192318, Func Offset: 0x48
	// Line 4306, Address: 0x192338, Func Offset: 0x68
	// Line 4307, Address: 0x192358, Func Offset: 0x88
	// Line 4313, Address: 0x192360, Func Offset: 0x90
	// Line 4314, Address: 0x192368, Func Offset: 0x98
	// Line 4317, Address: 0x192378, Func Offset: 0xa8
	// Line 4318, Address: 0x19237c, Func Offset: 0xac
	// Line 4317, Address: 0x192380, Func Offset: 0xb0
	// Line 4318, Address: 0x192384, Func Offset: 0xb4
	// Line 4317, Address: 0x192388, Func Offset: 0xb8
	// Line 4318, Address: 0x19238c, Func Offset: 0xbc
	// Func End, Address: 0x19239c, Func Offset: 0xcc
}

// xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1923a0
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 amy;
	int32 sum;
	// Line 4262, Address: 0x1923a0, Func Offset: 0
	// Line 4269, Address: 0x1923a4, Func Offset: 0x4
	// Line 4262, Address: 0x1923a8, Func Offset: 0x8
	// Line 4269, Address: 0x1923c0, Func Offset: 0x20
	// Line 4272, Address: 0x1923d8, Func Offset: 0x38
	// Line 4270, Address: 0x1923dc, Func Offset: 0x3c
	// Line 4272, Address: 0x1923e0, Func Offset: 0x40
	// Line 4275, Address: 0x1923f4, Func Offset: 0x54
	// Line 4273, Address: 0x1923f8, Func Offset: 0x58
	// Line 4275, Address: 0x1923fc, Func Offset: 0x5c
	// Line 4278, Address: 0x192410, Func Offset: 0x70
	// Line 4276, Address: 0x19241c, Func Offset: 0x7c
	// Line 4278, Address: 0x192420, Func Offset: 0x80
	// Line 4279, Address: 0x19242c, Func Offset: 0x8c
	// Line 4284, Address: 0x192430, Func Offset: 0x90
	// Line 4283, Address: 0x192434, Func Offset: 0x94
	// Line 4284, Address: 0x192438, Func Offset: 0x98
	// Func End, Address: 0x19244c, Func Offset: 0xac
}

// xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192450
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most)
{
	// Line 4253, Address: 0x192450, Func Offset: 0
	// Line 4254, Address: 0x192458, Func Offset: 0x8
	// Line 4258, Address: 0x19245c, Func Offset: 0xc
	// Line 4254, Address: 0x192460, Func Offset: 0x10
	// Line 4259, Address: 0x192464, Func Offset: 0x14
	// Func End, Address: 0x19246c, Func Offset: 0x1c
}

// xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x192470
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 amy;
	int32 sum;
	// Line 4221, Address: 0x192470, Func Offset: 0
	// Line 4228, Address: 0x192474, Func Offset: 0x4
	// Line 4221, Address: 0x192478, Func Offset: 0x8
	// Line 4224, Address: 0x19247c, Func Offset: 0xc
	// Line 4221, Address: 0x192480, Func Offset: 0x10
	// Line 4228, Address: 0x192484, Func Offset: 0x14
	// Line 4221, Address: 0x192488, Func Offset: 0x18
	// Line 4224, Address: 0x192498, Func Offset: 0x28
	// Line 4228, Address: 0x1924a0, Func Offset: 0x30
	// Line 4229, Address: 0x1924a8, Func Offset: 0x38
	// Line 4231, Address: 0x1924d0, Func Offset: 0x60
	// Line 4233, Address: 0x1924e8, Func Offset: 0x78
	// Line 4236, Address: 0x192510, Func Offset: 0xa0
	// Line 4240, Address: 0x192514, Func Offset: 0xa4
	// Line 4239, Address: 0x192518, Func Offset: 0xa8
	// Line 4240, Address: 0x19251c, Func Offset: 0xac
	// Func End, Address: 0x192530, Func Offset: 0xc0
}

// xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192530
int32 xSGT_SaveInfoCB(int32* need, int32* most)
{
	int32 slen;
	// Line 4198, Address: 0x192530, Func Offset: 0
	// Line 4210, Address: 0x192534, Func Offset: 0x4
	// Line 4198, Address: 0x192538, Func Offset: 0x8
	// Line 4210, Address: 0x19253c, Func Offset: 0xc
	// Line 4198, Address: 0x192540, Func Offset: 0x10
	// Line 4210, Address: 0x19254c, Func Offset: 0x1c
	// Line 4211, Address: 0x192554, Func Offset: 0x24
	// Line 4212, Address: 0x192558, Func Offset: 0x28
	// Line 4216, Address: 0x19255c, Func Offset: 0x2c
	// Line 4212, Address: 0x192560, Func Offset: 0x30
	// Line 4217, Address: 0x192568, Func Offset: 0x38
	// Func End, Address: 0x19257c, Func Offset: 0x4c
}

// zSaveLoad_DispatchCB__FUiPCf
// Start address: 0x192580
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam)
{
	st_XSAVEGAME_DATA* inst;
	// Line 4146, Address: 0x192580, Func Offset: 0
	// Line 4148, Address: 0x192584, Func Offset: 0x4
	// Line 4146, Address: 0x192588, Func Offset: 0x8
	// Line 4148, Address: 0x19258c, Func Offset: 0xc
	// Line 4151, Address: 0x1925b4, Func Offset: 0x34
	// Line 4152, Address: 0x1925b8, Func Offset: 0x38
	// Line 4154, Address: 0x1925bc, Func Offset: 0x3c
	// Line 4161, Address: 0x1925c4, Func Offset: 0x44
	// Line 4162, Address: 0x1925c8, Func Offset: 0x48
	// Line 4164, Address: 0x1925cc, Func Offset: 0x4c
	// Line 4166, Address: 0x1925d4, Func Offset: 0x54
	// Line 4169, Address: 0x1925d8, Func Offset: 0x58
	// Line 4167, Address: 0x1925dc, Func Offset: 0x5c
	// Line 4169, Address: 0x1925e0, Func Offset: 0x60
	// Line 4167, Address: 0x1925e4, Func Offset: 0x64
	// Line 4169, Address: 0x1925ec, Func Offset: 0x6c
	// Line 4170, Address: 0x192608, Func Offset: 0x88
	// Line 4169, Address: 0x19260c, Func Offset: 0x8c
	// Line 4170, Address: 0x192610, Func Offset: 0x90
	// Line 4171, Address: 0x192618, Func Offset: 0x98
	// Line 4172, Address: 0x192620, Func Offset: 0xa0
	// Line 4175, Address: 0x192628, Func Offset: 0xa8
	// Line 4177, Address: 0x192634, Func Offset: 0xb4
	// Line 4179, Address: 0x19263c, Func Offset: 0xbc
	// Line 4180, Address: 0x192640, Func Offset: 0xc0
	// Line 4191, Address: 0x192648, Func Offset: 0xc8
	// Func End, Address: 0x192658, Func Offset: 0xd8
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
	// Line 3925, Address: 0x192660, Func Offset: 0
	// Line 3926, Address: 0x192670, Func Offset: 0x10
	// Line 3931, Address: 0x1926a0, Func Offset: 0x40
	// Line 3926, Address: 0x1926a4, Func Offset: 0x44
	// Line 3928, Address: 0x1926ac, Func Offset: 0x4c
	// Line 3926, Address: 0x1926b0, Func Offset: 0x50
	// Line 3938, Address: 0x19271c, Func Offset: 0xbc
	// Line 3940, Address: 0x192720, Func Offset: 0xc0
	// Line 3953, Address: 0x192764, Func Offset: 0x104
	// Line 3959, Address: 0x192768, Func Offset: 0x108
	// Line 3963, Address: 0x192770, Func Offset: 0x110
	// Line 3964, Address: 0x192778, Func Offset: 0x118
	// Line 3968, Address: 0x1927a0, Func Offset: 0x140
	// Line 3972, Address: 0x1927a8, Func Offset: 0x148
	// Line 3979, Address: 0x1927b4, Func Offset: 0x154
	// Line 3976, Address: 0x1927b8, Func Offset: 0x158
	// Line 3979, Address: 0x1927bc, Func Offset: 0x15c
	// Line 3980, Address: 0x1927d0, Func Offset: 0x170
	// Line 3982, Address: 0x1927dc, Func Offset: 0x17c
	// Line 3983, Address: 0x1927f0, Func Offset: 0x190
	// Line 3985, Address: 0x1927fc, Func Offset: 0x19c
	// Line 3986, Address: 0x192810, Func Offset: 0x1b0
	// Line 3988, Address: 0x19281c, Func Offset: 0x1bc
	// Line 3989, Address: 0x192830, Func Offset: 0x1d0
	// Line 3990, Address: 0x19283c, Func Offset: 0x1dc
	// Line 3995, Address: 0x192848, Func Offset: 0x1e8
	// Line 3998, Address: 0x19284c, Func Offset: 0x1ec
	// Line 3995, Address: 0x192850, Func Offset: 0x1f0
	// Line 3998, Address: 0x192854, Func Offset: 0x1f4
	// Line 3999, Address: 0x192868, Func Offset: 0x208
	// Line 4001, Address: 0x192874, Func Offset: 0x214
	// Line 4002, Address: 0x192888, Func Offset: 0x228
	// Line 4004, Address: 0x192894, Func Offset: 0x234
	// Line 4005, Address: 0x1928a8, Func Offset: 0x248
	// Line 4007, Address: 0x1928b4, Func Offset: 0x254
	// Line 4008, Address: 0x1928c8, Func Offset: 0x268
	// Line 4015, Address: 0x1928d4, Func Offset: 0x274
	// Line 4017, Address: 0x1928e8, Func Offset: 0x288
	// Line 4020, Address: 0x1928f4, Func Offset: 0x294
	// Line 4022, Address: 0x1928fc, Func Offset: 0x29c
	// Line 4026, Address: 0x192900, Func Offset: 0x2a0
	// Line 4027, Address: 0x192904, Func Offset: 0x2a4
	// Line 4029, Address: 0x19290c, Func Offset: 0x2ac
	// Line 4035, Address: 0x192910, Func Offset: 0x2b0
	// Line 4039, Address: 0x192918, Func Offset: 0x2b8
	// Line 4041, Address: 0x19291c, Func Offset: 0x2bc
	// Line 4042, Address: 0x192924, Func Offset: 0x2c4
	// Line 4047, Address: 0x19294c, Func Offset: 0x2ec
	// Line 4049, Address: 0x192950, Func Offset: 0x2f0
	// Line 4052, Address: 0x192958, Func Offset: 0x2f8
	// Line 4054, Address: 0x192960, Func Offset: 0x300
	// Line 4062, Address: 0x1929b4, Func Offset: 0x354
	// Line 4064, Address: 0x1929bc, Func Offset: 0x35c
	// Line 4065, Address: 0x1929c0, Func Offset: 0x360
	// Line 4066, Address: 0x1929c8, Func Offset: 0x368
	// Line 4074, Address: 0x1929d0, Func Offset: 0x370
	// Line 4078, Address: 0x1929d8, Func Offset: 0x378
	// Line 4079, Address: 0x1929e0, Func Offset: 0x380
	// Line 4084, Address: 0x1929ec, Func Offset: 0x38c
	// Line 4085, Address: 0x1929f4, Func Offset: 0x394
	// Line 4087, Address: 0x1929fc, Func Offset: 0x39c
	// Line 4092, Address: 0x192a00, Func Offset: 0x3a0
	// Line 4087, Address: 0x192a04, Func Offset: 0x3a4
	// Line 4092, Address: 0x192a08, Func Offset: 0x3a8
	// Line 4093, Address: 0x192a1c, Func Offset: 0x3bc
	// Line 4095, Address: 0x192a28, Func Offset: 0x3c8
	// Line 4097, Address: 0x192a3c, Func Offset: 0x3dc
	// Line 4102, Address: 0x192a44, Func Offset: 0x3e4
	// Line 4105, Address: 0x192a50, Func Offset: 0x3f0
	// Line 4108, Address: 0x192a78, Func Offset: 0x418
	// Line 4109, Address: 0x192acc, Func Offset: 0x46c
	// Line 4111, Address: 0x192ad4, Func Offset: 0x474
	// Line 4112, Address: 0x192ad8, Func Offset: 0x478
	// Line 4113, Address: 0x192b2c, Func Offset: 0x4cc
	// Line 4115, Address: 0x192b34, Func Offset: 0x4d4
	// Line 4117, Address: 0x192b38, Func Offset: 0x4d8
	// Line 4118, Address: 0x192bf4, Func Offset: 0x594
	// Line 4120, Address: 0x192bfc, Func Offset: 0x59c
	// Line 4121, Address: 0x192c00, Func Offset: 0x5a0
	// Line 4124, Address: 0x192c54, Func Offset: 0x5f4
	// Line 4125, Address: 0x192c58, Func Offset: 0x5f8
	// Line 4134, Address: 0x192c5c, Func Offset: 0x5fc
	// Line 4136, Address: 0x192c6c, Func Offset: 0x60c
	// Line 4142, Address: 0x192c70, Func Offset: 0x610
	// Line 4141, Address: 0x192c7c, Func Offset: 0x61c
	// Line 4142, Address: 0x192c80, Func Offset: 0x620
	// Func End, Address: 0x192c88, Func Offset: 0x628
}

// zSaveLoad_LoadLoop__Fv
// Start address: 0x192c90
uint32 zSaveLoad_LoadLoop()
{
	int32 state;
	int32 tmp;
	int32 tmp;
	int32 result;
	// Line 3762, Address: 0x192c90, Func Offset: 0
	// Line 3765, Address: 0x192ca0, Func Offset: 0x10
	// Line 3767, Address: 0x192cd0, Func Offset: 0x40
	// Line 3765, Address: 0x192cd4, Func Offset: 0x44
	// Line 3771, Address: 0x192cd8, Func Offset: 0x48
	// Line 3765, Address: 0x192cdc, Func Offset: 0x4c
	// Line 3767, Address: 0x192ce0, Func Offset: 0x50
	// Line 3765, Address: 0x192ce4, Func Offset: 0x54
	// Line 3775, Address: 0x192d50, Func Offset: 0xc0
	// Line 3791, Address: 0x192d90, Func Offset: 0x100
	// Line 3795, Address: 0x192da8, Func Offset: 0x118
	// Line 3799, Address: 0x192db0, Func Offset: 0x120
	// Line 3800, Address: 0x192db8, Func Offset: 0x128
	// Line 3804, Address: 0x192de8, Func Offset: 0x158
	// Line 3808, Address: 0x192df0, Func Offset: 0x160
	// Line 3816, Address: 0x192df8, Func Offset: 0x168
	// Line 3820, Address: 0x192e00, Func Offset: 0x170
	// Line 3821, Address: 0x192e08, Func Offset: 0x178
	// Line 3828, Address: 0x192e30, Func Offset: 0x1a0
	// Line 3831, Address: 0x192e38, Func Offset: 0x1a8
	// Line 3833, Address: 0x192e40, Func Offset: 0x1b0
	// Line 3840, Address: 0x192e94, Func Offset: 0x204
	// Line 3842, Address: 0x192e9c, Func Offset: 0x20c
	// Line 3843, Address: 0x192ea0, Func Offset: 0x210
	// Line 3844, Address: 0x192ea8, Func Offset: 0x218
	// Line 3848, Address: 0x192eb0, Func Offset: 0x220
	// Line 3853, Address: 0x192eb8, Func Offset: 0x228
	// Line 3854, Address: 0x192ec0, Func Offset: 0x230
	// Line 3856, Address: 0x192edc, Func Offset: 0x24c
	// Line 3860, Address: 0x192ee0, Func Offset: 0x250
	// Line 3861, Address: 0x192ee8, Func Offset: 0x258
	// Line 3865, Address: 0x192ef0, Func Offset: 0x260
	// Line 3862, Address: 0x192ef8, Func Offset: 0x268
	// Line 3866, Address: 0x192efc, Func Offset: 0x26c
	// Line 3868, Address: 0x192f04, Func Offset: 0x274
	// Line 3869, Address: 0x192f08, Func Offset: 0x278
	// Line 3871, Address: 0x192f5c, Func Offset: 0x2cc
	// Line 3872, Address: 0x192f64, Func Offset: 0x2d4
	// Line 3873, Address: 0x192f68, Func Offset: 0x2d8
	// Line 3874, Address: 0x192fbc, Func Offset: 0x32c
	// Line 3885, Address: 0x192fc0, Func Offset: 0x330
	// Line 3887, Address: 0x192fcc, Func Offset: 0x33c
	// Line 3889, Address: 0x193008, Func Offset: 0x378
	// Line 3900, Address: 0x19300c, Func Offset: 0x37c
	// Line 3889, Address: 0x193010, Func Offset: 0x380
	// Line 3900, Address: 0x193014, Func Offset: 0x384
	// Line 3889, Address: 0x19301c, Func Offset: 0x38c
	// Line 3900, Address: 0x19304c, Func Offset: 0x3bc
	// Func End, Address: 0x193054, Func Offset: 0x3c4
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
	// Line 3623, Address: 0x193060, Func Offset: 0
	// Line 3624, Address: 0x193074, Func Offset: 0x14
	// Line 3623, Address: 0x193078, Func Offset: 0x18
	// Line 3625, Address: 0x19307c, Func Offset: 0x1c
	// Line 3623, Address: 0x193080, Func Offset: 0x20
	// Line 3629, Address: 0x193088, Func Offset: 0x28
	// Line 3631, Address: 0x193098, Func Offset: 0x38
	// Line 3630, Address: 0x19309c, Func Offset: 0x3c
	// Line 3631, Address: 0x1930a0, Func Offset: 0x40
	// Line 3634, Address: 0x193104, Func Offset: 0xa4
	// Line 3637, Address: 0x193110, Func Offset: 0xb0
	// Line 3639, Address: 0x19311c, Func Offset: 0xbc
	// Line 3645, Address: 0x193128, Func Offset: 0xc8
	// Line 3648, Address: 0x193144, Func Offset: 0xe4
	// Line 3653, Address: 0x193160, Func Offset: 0x100
	// Line 3656, Address: 0x19316c, Func Offset: 0x10c
	// Line 3658, Address: 0x193174, Func Offset: 0x114
	// Line 3664, Address: 0x193180, Func Offset: 0x120
	// Line 3666, Address: 0x193188, Func Offset: 0x128
	// Line 3667, Address: 0x193194, Func Offset: 0x134
	// Line 3669, Address: 0x19319c, Func Offset: 0x13c
	// Line 3672, Address: 0x1931b0, Func Offset: 0x150
	// Line 3673, Address: 0x1931b8, Func Offset: 0x158
	// Line 3675, Address: 0x1931c0, Func Offset: 0x160
	// Line 3685, Address: 0x1931f0, Func Offset: 0x190
	// Line 3688, Address: 0x1931f8, Func Offset: 0x198
	// Line 3695, Address: 0x1931fc, Func Offset: 0x19c
	// Line 3697, Address: 0x193200, Func Offset: 0x1a0
	// Line 3699, Address: 0x193208, Func Offset: 0x1a8
	// Line 3701, Address: 0x193210, Func Offset: 0x1b0
	// Line 3704, Address: 0x193218, Func Offset: 0x1b8
	// Line 3703, Address: 0x19321c, Func Offset: 0x1bc
	// Line 3705, Address: 0x193220, Func Offset: 0x1c0
	// Line 3708, Address: 0x193228, Func Offset: 0x1c8
	// Line 3710, Address: 0x193230, Func Offset: 0x1d0
	// Line 3714, Address: 0x193234, Func Offset: 0x1d4
	// Line 3717, Address: 0x193238, Func Offset: 0x1d8
	// Line 3719, Address: 0x193288, Func Offset: 0x228
	// Line 3721, Address: 0x193298, Func Offset: 0x238
	// Line 3723, Address: 0x1932a0, Func Offset: 0x240
	// Line 3725, Address: 0x1932b0, Func Offset: 0x250
	// Line 3726, Address: 0x1932b4, Func Offset: 0x254
	// Line 3730, Address: 0x1932bc, Func Offset: 0x25c
	// Line 3736, Address: 0x1932d0, Func Offset: 0x270
	// Line 3737, Address: 0x1932d8, Func Offset: 0x278
	// Line 3741, Address: 0x1932e0, Func Offset: 0x280
	// Line 3742, Address: 0x1932e8, Func Offset: 0x288
	// Line 3745, Address: 0x193300, Func Offset: 0x2a0
	// Line 3749, Address: 0x193308, Func Offset: 0x2a8
	// Line 3756, Address: 0x193310, Func Offset: 0x2b0
	// Func End, Address: 0x193334, Func Offset: 0x2d4
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
	int8 label[64];
	int8* area;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
	// Line 3419, Address: 0x193340, Func Offset: 0
	// Line 3420, Address: 0x193350, Func Offset: 0x10
	// Line 3419, Address: 0x193354, Func Offset: 0x14
	// Line 3421, Address: 0x19335c, Func Offset: 0x1c
	// Line 3419, Address: 0x193360, Func Offset: 0x20
	// Line 3429, Address: 0x19336c, Func Offset: 0x2c
	// Line 3434, Address: 0x19337c, Func Offset: 0x3c
	// Line 3430, Address: 0x193380, Func Offset: 0x40
	// Line 3434, Address: 0x193384, Func Offset: 0x44
	// Line 3431, Address: 0x193388, Func Offset: 0x48
	// Line 3434, Address: 0x19338c, Func Offset: 0x4c
	// Line 3438, Address: 0x1933e8, Func Offset: 0xa8
	// Line 3434, Address: 0x1933ec, Func Offset: 0xac
	// Line 3438, Address: 0x1933f0, Func Offset: 0xb0
	// Line 3441, Address: 0x193400, Func Offset: 0xc0
	// Line 3443, Address: 0x193450, Func Offset: 0x110
	// Line 3450, Address: 0x193458, Func Offset: 0x118
	// Line 3452, Address: 0x193464, Func Offset: 0x124
	// Line 3454, Address: 0x193470, Func Offset: 0x130
	// Line 3459, Address: 0x193480, Func Offset: 0x140
	// Line 3461, Address: 0x193490, Func Offset: 0x150
	// Line 3465, Address: 0x1934b4, Func Offset: 0x174
	// Line 3471, Address: 0x1934d8, Func Offset: 0x198
	// Line 3475, Address: 0x1934e4, Func Offset: 0x1a4
	// Line 3482, Address: 0x1934f8, Func Offset: 0x1b8
	// Line 3475, Address: 0x193500, Func Offset: 0x1c0
	// Line 3482, Address: 0x193504, Func Offset: 0x1c4
	// Line 3486, Address: 0x193528, Func Offset: 0x1e8
	// Line 3499, Address: 0x193538, Func Offset: 0x1f8
	// Line 3501, Address: 0x19355c, Func Offset: 0x21c
	// Line 3508, Address: 0x193568, Func Offset: 0x228
	// Line 3510, Address: 0x193570, Func Offset: 0x230
	// Line 3511, Address: 0x19357c, Func Offset: 0x23c
	// Line 3513, Address: 0x193584, Func Offset: 0x244
	// Line 3517, Address: 0x193598, Func Offset: 0x258
	// Line 3521, Address: 0x1935a4, Func Offset: 0x264
	// Line 3525, Address: 0x1935b0, Func Offset: 0x270
	// Line 3526, Address: 0x1935b8, Func Offset: 0x278
	// Line 3529, Address: 0x1935c0, Func Offset: 0x280
	// Line 3540, Address: 0x1935f0, Func Offset: 0x2b0
	// Line 3543, Address: 0x1935f8, Func Offset: 0x2b8
	// Line 3552, Address: 0x1935fc, Func Offset: 0x2bc
	// Line 3554, Address: 0x193600, Func Offset: 0x2c0
	// Line 3555, Address: 0x193608, Func Offset: 0x2c8
	// Line 3556, Address: 0x193610, Func Offset: 0x2d0
	// Line 3557, Address: 0x19361c, Func Offset: 0x2dc
	// Line 3562, Address: 0x193620, Func Offset: 0x2e0
	// Line 3565, Address: 0x193634, Func Offset: 0x2f4
	// Line 3567, Address: 0x193680, Func Offset: 0x340
	// Line 3574, Address: 0x193688, Func Offset: 0x348
	// Line 3576, Address: 0x1936d8, Func Offset: 0x398
	// Line 3578, Address: 0x1936e8, Func Offset: 0x3a8
	// Line 3579, Address: 0x1936f0, Func Offset: 0x3b0
	// Line 3581, Address: 0x193700, Func Offset: 0x3c0
	// Line 3585, Address: 0x193708, Func Offset: 0x3c8
	// Line 3591, Address: 0x19371c, Func Offset: 0x3dc
	// Line 3592, Address: 0x193724, Func Offset: 0x3e4
	// Line 3593, Address: 0x19372c, Func Offset: 0x3ec
	// Line 3597, Address: 0x193730, Func Offset: 0x3f0
	// Line 3598, Address: 0x193738, Func Offset: 0x3f8
	// Line 3611, Address: 0x193750, Func Offset: 0x410
	// Line 3614, Address: 0x193758, Func Offset: 0x418
	// Line 3619, Address: 0x193760, Func Offset: 0x420
	// Func End, Address: 0x193788, Func Offset: 0x448
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
	int8 label[64];
	int8* area;
	// Line 3243, Address: 0x193790, Func Offset: 0
	// Line 3244, Address: 0x1937a0, Func Offset: 0x10
	// Line 3243, Address: 0x1937a4, Func Offset: 0x14
	// Line 3245, Address: 0x1937b0, Func Offset: 0x20
	// Line 3243, Address: 0x1937b4, Func Offset: 0x24
	// Line 3247, Address: 0x1937b8, Func Offset: 0x28
	// Line 3243, Address: 0x1937bc, Func Offset: 0x2c
	// Line 3252, Address: 0x1937c0, Func Offset: 0x30
	// Line 3259, Address: 0x193818, Func Offset: 0x88
	// Line 3261, Address: 0x193824, Func Offset: 0x94
	// Line 3263, Address: 0x19382c, Func Offset: 0x9c
	// Line 3264, Address: 0x193834, Func Offset: 0xa4
	// Line 3266, Address: 0x193838, Func Offset: 0xa8
	// Line 3268, Address: 0x193848, Func Offset: 0xb8
	// Line 3271, Address: 0x193850, Func Offset: 0xc0
	// Line 3272, Address: 0x193858, Func Offset: 0xc8
	// Line 3271, Address: 0x19385c, Func Offset: 0xcc
	// Line 3275, Address: 0x193860, Func Offset: 0xd0
	// Line 3277, Address: 0x193868, Func Offset: 0xd8
	// Line 3280, Address: 0x193874, Func Offset: 0xe4
	// Line 3282, Address: 0x193880, Func Offset: 0xf0
	// Line 3284, Address: 0x19388c, Func Offset: 0xfc
	// Line 3289, Address: 0x193898, Func Offset: 0x108
	// Line 3291, Address: 0x1938a8, Func Offset: 0x118
	// Line 3295, Address: 0x1938cc, Func Offset: 0x13c
	// Line 3301, Address: 0x1938f0, Func Offset: 0x160
	// Line 3305, Address: 0x1938fc, Func Offset: 0x16c
	// Line 3311, Address: 0x193910, Func Offset: 0x180
	// Line 3305, Address: 0x193918, Func Offset: 0x188
	// Line 3311, Address: 0x19391c, Func Offset: 0x18c
	// Line 3315, Address: 0x193940, Func Offset: 0x1b0
	// Line 3328, Address: 0x193950, Func Offset: 0x1c0
	// Line 3331, Address: 0x193974, Func Offset: 0x1e4
	// Line 3334, Address: 0x193980, Func Offset: 0x1f0
	// Line 3335, Address: 0x193988, Func Offset: 0x1f8
	// Line 3336, Address: 0x193994, Func Offset: 0x204
	// Line 3339, Address: 0x1939b0, Func Offset: 0x220
	// Line 3343, Address: 0x1939bc, Func Offset: 0x22c
	// Line 3347, Address: 0x1939c8, Func Offset: 0x238
	// Line 3348, Address: 0x1939d0, Func Offset: 0x240
	// Line 3351, Address: 0x1939d8, Func Offset: 0x248
	// Line 3362, Address: 0x193a08, Func Offset: 0x278
	// Line 3365, Address: 0x193a10, Func Offset: 0x280
	// Line 3374, Address: 0x193a14, Func Offset: 0x284
	// Line 3376, Address: 0x193a18, Func Offset: 0x288
	// Line 3377, Address: 0x193a20, Func Offset: 0x290
	// Line 3378, Address: 0x193a28, Func Offset: 0x298
	// Line 3379, Address: 0x193a34, Func Offset: 0x2a4
	// Line 3383, Address: 0x193a38, Func Offset: 0x2a8
	// Line 3385, Address: 0x193a40, Func Offset: 0x2b0
	// Line 3388, Address: 0x193a50, Func Offset: 0x2c0
	// Line 3390, Address: 0x193a60, Func Offset: 0x2d0
	// Line 3392, Address: 0x193a68, Func Offset: 0x2d8
	// Line 3396, Address: 0x193a70, Func Offset: 0x2e0
	// Line 3402, Address: 0x193a84, Func Offset: 0x2f4
	// Line 3405, Address: 0x193a90, Func Offset: 0x300
	// Line 3409, Address: 0x193a98, Func Offset: 0x308
	// Line 3411, Address: 0x193aa0, Func Offset: 0x310
	// Line 3413, Address: 0x193aa8, Func Offset: 0x318
	// Line 3414, Address: 0x193ab0, Func Offset: 0x320
	// Line 3416, Address: 0x193ab8, Func Offset: 0x328
	// Func End, Address: 0x193ae4, Func Offset: 0x354
}

// zSaveLoadAutoSaveUpdate__Fv
// Start address: 0x193af0
void zSaveLoadAutoSaveUpdate()
{
	xBase* sendTo;
	XSGAutoData* autodata;
	int32 result;
	// Line 3004, Address: 0x193af0, Func Offset: 0
	// Line 3006, Address: 0x193af4, Func Offset: 0x4
	// Line 3004, Address: 0x193af8, Func Offset: 0x8
	// Line 3006, Address: 0x193b00, Func Offset: 0x10
	// Line 3008, Address: 0x193b20, Func Offset: 0x30
	// Line 3088, Address: 0x193b28, Func Offset: 0x38
	// Line 3090, Address: 0x193b34, Func Offset: 0x44
	// Line 3091, Address: 0x193b3c, Func Offset: 0x4c
	// Line 3094, Address: 0x193b40, Func Offset: 0x50
	// Line 3099, Address: 0x193b48, Func Offset: 0x58
	// Line 3100, Address: 0x193b58, Func Offset: 0x68
	// Line 3102, Address: 0x193b7c, Func Offset: 0x8c
	// Line 3104, Address: 0x193b80, Func Offset: 0x90
	// Line 3105, Address: 0x193b98, Func Offset: 0xa8
	// Line 3107, Address: 0x193ba0, Func Offset: 0xb0
	// Line 3118, Address: 0x193ba8, Func Offset: 0xb8
	// Line 3121, Address: 0x193bc4, Func Offset: 0xd4
	// Line 3123, Address: 0x193bd4, Func Offset: 0xe4
	// Line 3125, Address: 0x193bdc, Func Offset: 0xec
	// Line 3126, Address: 0x193be4, Func Offset: 0xf4
	// Line 3127, Address: 0x193be8, Func Offset: 0xf8
	// Line 3131, Address: 0x193bf0, Func Offset: 0x100
	// Line 3133, Address: 0x193bf8, Func Offset: 0x108
	// Line 3136, Address: 0x193c00, Func Offset: 0x110
	// Line 3138, Address: 0x193c34, Func Offset: 0x144
	// Line 3140, Address: 0x193c38, Func Offset: 0x148
	// Line 3142, Address: 0x193c50, Func Offset: 0x160
	// Line 3144, Address: 0x193c58, Func Offset: 0x168
	// Line 3146, Address: 0x193c60, Func Offset: 0x170
	// Line 3151, Address: 0x193c68, Func Offset: 0x178
	// Line 3154, Address: 0x193c88, Func Offset: 0x198
	// Line 3156, Address: 0x193c98, Func Offset: 0x1a8
	// Line 3160, Address: 0x193ca0, Func Offset: 0x1b0
	// Line 3162, Address: 0x193cb4, Func Offset: 0x1c4
	// Line 3163, Address: 0x193cb8, Func Offset: 0x1c8
	// Line 3165, Address: 0x193cc0, Func Offset: 0x1d0
	// Line 3168, Address: 0x193cc8, Func Offset: 0x1d8
	// Line 3172, Address: 0x193cd0, Func Offset: 0x1e0
	// Line 3174, Address: 0x193cd8, Func Offset: 0x1e8
	// Line 3182, Address: 0x193ce0, Func Offset: 0x1f0
	// Line 3184, Address: 0x193cf4, Func Offset: 0x204
	// Line 3186, Address: 0x193cfc, Func Offset: 0x20c
	// Line 3187, Address: 0x193d04, Func Offset: 0x214
	// Line 3188, Address: 0x193d08, Func Offset: 0x218
	// Line 3192, Address: 0x193d10, Func Offset: 0x220
	// Line 3194, Address: 0x193d18, Func Offset: 0x228
	// Line 3204, Address: 0x193d20, Func Offset: 0x230
	// Func End, Address: 0x193d30, Func Offset: 0x240
}

// zSaveLoadPreAutoSave__Fb
// Start address: 0x193d30
void zSaveLoadPreAutoSave(uint8 onOff)
{
	// Line 3000, Address: 0x193d30, Func Offset: 0
	// Func End, Address: 0x193d38, Func Offset: 0x8
}

// zSaveLoadGetPreAutoSave__Fv
// Start address: 0x193d40
uint8 zSaveLoadGetPreAutoSave()
{
	// Line 2980, Address: 0x193d40, Func Offset: 0
	// Func End, Address: 0x193d48, Func Offset: 0x8
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
	// Line 2586, Address: 0x193d50, Func Offset: 0
	// Line 2590, Address: 0x193d54, Func Offset: 0x4
	// Line 2586, Address: 0x193d58, Func Offset: 0x8
	// Line 2588, Address: 0x193d78, Func Offset: 0x28
	// Line 2586, Address: 0x193d7c, Func Offset: 0x2c
	// Line 2590, Address: 0x193d88, Func Offset: 0x38
	// Line 2592, Address: 0x193d8c, Func Offset: 0x3c
	// Line 2604, Address: 0x193d90, Func Offset: 0x40
	// Line 2594, Address: 0x193d94, Func Offset: 0x44
	// Line 2604, Address: 0x193d9c, Func Offset: 0x4c
	// Line 2606, Address: 0x193da8, Func Offset: 0x58
	// Line 2608, Address: 0x193db4, Func Offset: 0x64
	// Line 2609, Address: 0x193dc8, Func Offset: 0x78
	// Line 2610, Address: 0x193de0, Func Offset: 0x90
	// Line 2611, Address: 0x193df8, Func Offset: 0xa8
	// Line 2614, Address: 0x193e00, Func Offset: 0xb0
	// Line 2619, Address: 0x193e18, Func Offset: 0xc8
	// Line 2618, Address: 0x193e24, Func Offset: 0xd4
	// Line 2619, Address: 0x193e28, Func Offset: 0xd8
	// Line 2621, Address: 0x193e38, Func Offset: 0xe8
	// Line 2624, Address: 0x193e44, Func Offset: 0xf4
	// Line 2633, Address: 0x193e50, Func Offset: 0x100
	// Line 2636, Address: 0x193e64, Func Offset: 0x114
	// Line 2637, Address: 0x193e70, Func Offset: 0x120
	// Line 2638, Address: 0x193e88, Func Offset: 0x138
	// Line 2639, Address: 0x193e98, Func Offset: 0x148
	// Line 2641, Address: 0x193ea8, Func Offset: 0x158
	// Line 2643, Address: 0x193eac, Func Offset: 0x15c
	// Line 2642, Address: 0x193eb0, Func Offset: 0x160
	// Line 2644, Address: 0x193eb4, Func Offset: 0x164
	// Line 2645, Address: 0x193eb8, Func Offset: 0x168
	// Line 2649, Address: 0x193ec0, Func Offset: 0x170
	// Line 2651, Address: 0x193ed8, Func Offset: 0x188
	// Line 2653, Address: 0x193ef8, Func Offset: 0x1a8
	// Line 2655, Address: 0x193f10, Func Offset: 0x1c0
	// Line 2656, Address: 0x193f28, Func Offset: 0x1d8
	// Line 2657, Address: 0x193f38, Func Offset: 0x1e8
	// Line 2660, Address: 0x193f48, Func Offset: 0x1f8
	// Line 2689, Address: 0x193f50, Func Offset: 0x200
	// Line 2660, Address: 0x193f54, Func Offset: 0x204
	// Line 2661, Address: 0x193f60, Func Offset: 0x210
	// Line 2663, Address: 0x193f6c, Func Offset: 0x21c
	// Line 2689, Address: 0x193f78, Func Offset: 0x228
	// Line 2690, Address: 0x193fb0, Func Offset: 0x260
	// Line 2691, Address: 0x193fbc, Func Offset: 0x26c
	// Line 2690, Address: 0x193fc0, Func Offset: 0x270
	// Line 2691, Address: 0x193fc4, Func Offset: 0x274
	// Line 2694, Address: 0x193fd8, Func Offset: 0x288
	// Line 2700, Address: 0x193fe0, Func Offset: 0x290
	// Line 2703, Address: 0x193fe8, Func Offset: 0x298
	// Line 2700, Address: 0x193fec, Func Offset: 0x29c
	// Line 2703, Address: 0x193ff0, Func Offset: 0x2a0
	// Line 2700, Address: 0x193ff4, Func Offset: 0x2a4
	// Line 2703, Address: 0x193ff8, Func Offset: 0x2a8
	// Line 2707, Address: 0x194000, Func Offset: 0x2b0
	// Line 2710, Address: 0x19400c, Func Offset: 0x2bc
	// Line 2716, Address: 0x194018, Func Offset: 0x2c8
	// Line 2718, Address: 0x194038, Func Offset: 0x2e8
	// Line 2719, Address: 0x194048, Func Offset: 0x2f8
	// Line 2720, Address: 0x19405c, Func Offset: 0x30c
	// Line 2721, Address: 0x194068, Func Offset: 0x318
	// Line 2722, Address: 0x19407c, Func Offset: 0x32c
	// Line 2724, Address: 0x194080, Func Offset: 0x330
	// Line 2730, Address: 0x194088, Func Offset: 0x338
	// Line 2733, Address: 0x194094, Func Offset: 0x344
	// Line 2735, Address: 0x194098, Func Offset: 0x348
	// Line 2737, Address: 0x1940d8, Func Offset: 0x388
	// Line 2738, Address: 0x194100, Func Offset: 0x3b0
	// Line 2740, Address: 0x194108, Func Offset: 0x3b8
	// Line 2743, Address: 0x194118, Func Offset: 0x3c8
	// Line 2746, Address: 0x194120, Func Offset: 0x3d0
	// Line 2747, Address: 0x194138, Func Offset: 0x3e8
	// Line 2755, Address: 0x194150, Func Offset: 0x400
	// Line 2760, Address: 0x194158, Func Offset: 0x408
	// Line 2761, Address: 0x194160, Func Offset: 0x410
	// Line 2765, Address: 0x1941a4, Func Offset: 0x454
	// Line 2766, Address: 0x1941b0, Func Offset: 0x460
	// Line 2769, Address: 0x1941b8, Func Offset: 0x468
	// Line 2771, Address: 0x1941c8, Func Offset: 0x478
	// Line 2772, Address: 0x1941d8, Func Offset: 0x488
	// Line 2774, Address: 0x1941e4, Func Offset: 0x494
	// Line 2775, Address: 0x1941e8, Func Offset: 0x498
	// Line 2776, Address: 0x1941ec, Func Offset: 0x49c
	// Line 2777, Address: 0x1941f4, Func Offset: 0x4a4
	// Line 2779, Address: 0x1941f8, Func Offset: 0x4a8
	// Line 2781, Address: 0x194200, Func Offset: 0x4b0
	// Line 2782, Address: 0x194210, Func Offset: 0x4c0
	// Line 2784, Address: 0x19421c, Func Offset: 0x4cc
	// Line 2788, Address: 0x194238, Func Offset: 0x4e8
	// Line 2787, Address: 0x19423c, Func Offset: 0x4ec
	// Line 2789, Address: 0x194240, Func Offset: 0x4f0
	// Line 2791, Address: 0x194248, Func Offset: 0x4f8
	// Line 2795, Address: 0x19424c, Func Offset: 0x4fc
	// Line 2797, Address: 0x194254, Func Offset: 0x504
	// Line 2799, Address: 0x194258, Func Offset: 0x508
	// Line 2800, Address: 0x194268, Func Offset: 0x518
	// Line 2814, Address: 0x194274, Func Offset: 0x524
	// Line 2817, Address: 0x1942a4, Func Offset: 0x554
	// Line 2820, Address: 0x1942a8, Func Offset: 0x558
	// Line 2821, Address: 0x1942ac, Func Offset: 0x55c
	// Line 2823, Address: 0x1942b4, Func Offset: 0x564
	// Line 2825, Address: 0x1942b8, Func Offset: 0x568
	// Line 2828, Address: 0x1942c0, Func Offset: 0x570
	// Line 2830, Address: 0x19439c, Func Offset: 0x64c
	// Line 2834, Address: 0x1943ac, Func Offset: 0x65c
	// Line 2835, Address: 0x1943b4, Func Offset: 0x664
	// Line 2842, Address: 0x1943b8, Func Offset: 0x668
	// Line 2843, Address: 0x1943bc, Func Offset: 0x66c
	// Line 2844, Address: 0x1943c0, Func Offset: 0x670
	// Line 2851, Address: 0x1943c8, Func Offset: 0x678
	// Line 2850, Address: 0x1943cc, Func Offset: 0x67c
	// Line 2852, Address: 0x1943d0, Func Offset: 0x680
	// Line 2858, Address: 0x1943d8, Func Offset: 0x688
	// Line 2860, Address: 0x1943dc, Func Offset: 0x68c
	// Line 2858, Address: 0x1943e0, Func Offset: 0x690
	// Line 2861, Address: 0x1943e4, Func Offset: 0x694
	// Line 2870, Address: 0x1943ec, Func Offset: 0x69c
	// Line 2872, Address: 0x1943f0, Func Offset: 0x6a0
	// Line 2878, Address: 0x1943fc, Func Offset: 0x6ac
	// Line 2879, Address: 0x194510, Func Offset: 0x7c0
	// Line 2881, Address: 0x19451c, Func Offset: 0x7cc
	// Line 2885, Address: 0x194558, Func Offset: 0x808
	// Line 2884, Address: 0x19455c, Func Offset: 0x80c
	// Line 2886, Address: 0x194560, Func Offset: 0x810
	// Line 2888, Address: 0x194568, Func Offset: 0x818
	// Line 2890, Address: 0x19456c, Func Offset: 0x81c
	// Line 2893, Address: 0x194574, Func Offset: 0x824
	// Line 2895, Address: 0x194578, Func Offset: 0x828
	// Line 2894, Address: 0x19457c, Func Offset: 0x82c
	// Line 2904, Address: 0x194580, Func Offset: 0x830
	// Line 2907, Address: 0x194588, Func Offset: 0x838
	// Line 2919, Address: 0x19458c, Func Offset: 0x83c
	// Line 2921, Address: 0x1945a8, Func Offset: 0x858
	// Line 2927, Address: 0x1945b4, Func Offset: 0x864
	// Line 2928, Address: 0x1945bc, Func Offset: 0x86c
	// Line 2930, Address: 0x1945d0, Func Offset: 0x880
	// Line 2932, Address: 0x19460c, Func Offset: 0x8bc
	// Line 2934, Address: 0x194610, Func Offset: 0x8c0
	// Func End, Address: 0x194640, Func Offset: 0x8f0
}

// zSaveLoad_BuildName__FPci
// Start address: 0x194640
void zSaveLoad_BuildName(int8* name_txt, int32 idx)
{
	int8 desired[128];
	int8 current_name[128];
	int32 counter;
	int32 i;
	// Line 2548, Address: 0x194640, Func Offset: 0
	// Line 2555, Address: 0x194660, Func Offset: 0x20
	// Line 2548, Address: 0x194664, Func Offset: 0x24
	// Line 2555, Address: 0x194668, Func Offset: 0x28
	// Line 2558, Address: 0x194670, Func Offset: 0x30
	// Line 2557, Address: 0x194674, Func Offset: 0x34
	// Line 2558, Address: 0x194678, Func Offset: 0x38
	// Line 2560, Address: 0x1946a0, Func Offset: 0x60
	// Line 2562, Address: 0x1946ac, Func Offset: 0x6c
	// Line 2567, Address: 0x1946d4, Func Offset: 0x94
	// Line 2569, Address: 0x1946d8, Func Offset: 0x98
	// Line 2571, Address: 0x1946e8, Func Offset: 0xa8
	// Line 2575, Address: 0x1946f0, Func Offset: 0xb0
	// Line 2577, Address: 0x194704, Func Offset: 0xc4
	// Line 2581, Address: 0x194710, Func Offset: 0xd0
	// Line 2582, Address: 0x19471c, Func Offset: 0xdc
	// Line 2583, Address: 0x194720, Func Offset: 0xe0
	// Func End, Address: 0x194744, Func Offset: 0x104
}

// BuildIt__FPci
// Start address: 0x194750
void BuildIt(int8* build_txt, int32 i)
{
	int8 date1[32];
	int8 date2[32];
	int8 biggerbuf[256];
	int8 displaySizeUnit[32];
	// Line 2468, Address: 0x194750, Func Offset: 0
	// Line 2469, Address: 0x194754, Func Offset: 0x4
	// Line 2468, Address: 0x194758, Func Offset: 0x8
	// Line 2469, Address: 0x19475c, Func Offset: 0xc
	// Line 2468, Address: 0x194760, Func Offset: 0x10
	// Line 2469, Address: 0x19476c, Func Offset: 0x1c
	// Line 2471, Address: 0x19478c, Func Offset: 0x3c
	// Line 2483, Address: 0x1947c4, Func Offset: 0x74
	// Line 2471, Address: 0x1947c8, Func Offset: 0x78
	// Line 2483, Address: 0x1947cc, Func Offset: 0x7c
	// Line 2471, Address: 0x1947d4, Func Offset: 0x84
	// Line 2483, Address: 0x1947d8, Func Offset: 0x88
	// Line 2485, Address: 0x194870, Func Offset: 0x120
	// Line 2486, Address: 0x19487c, Func Offset: 0x12c
	// Line 2487, Address: 0x194884, Func Offset: 0x134
	// Line 2486, Address: 0x194888, Func Offset: 0x138
	// Line 2491, Address: 0x194890, Func Offset: 0x140
	// Line 2486, Address: 0x194894, Func Offset: 0x144
	// Line 2491, Address: 0x194898, Func Offset: 0x148
	// Line 2493, Address: 0x1948a4, Func Offset: 0x154
	// Line 2492, Address: 0x1948a8, Func Offset: 0x158
	// Line 2493, Address: 0x1948ac, Func Offset: 0x15c
	// Line 2492, Address: 0x1948b4, Func Offset: 0x164
	// Line 2493, Address: 0x1948b8, Func Offset: 0x168
	// Line 2494, Address: 0x1948e0, Func Offset: 0x190
	// Line 2497, Address: 0x1948f0, Func Offset: 0x1a0
	// Line 2509, Address: 0x194904, Func Offset: 0x1b4
	// Line 2524, Address: 0x194914, Func Offset: 0x1c4
	// Line 2528, Address: 0x19493c, Func Offset: 0x1ec
	// Line 2541, Address: 0x19494c, Func Offset: 0x1fc
	// Line 2544, Address: 0x194950, Func Offset: 0x200
	// Func End, Address: 0x194968, Func Offset: 0x218
}

// zSaveLoad_CardPick__Fi
// Start address: 0x194970
int32 zSaveLoad_CardPick(int32 mode)
{
	int32 done;
	uint8 formatDone;
	// Line 2186, Address: 0x194970, Func Offset: 0
	// Line 2270, Address: 0x194974, Func Offset: 0x4
	// Line 2186, Address: 0x194978, Func Offset: 0x8
	// Line 2275, Address: 0x19498c, Func Offset: 0x1c
	// Line 2269, Address: 0x194990, Func Offset: 0x20
	// Line 2270, Address: 0x194994, Func Offset: 0x24
	// Line 2272, Address: 0x194998, Func Offset: 0x28
	// Line 2275, Address: 0x19499c, Func Offset: 0x2c
	// Line 2276, Address: 0x1949dc, Func Offset: 0x6c
	// Line 2279, Address: 0x194a18, Func Offset: 0xa8
	// Line 2282, Address: 0x194a24, Func Offset: 0xb4
	// Line 2284, Address: 0x194a30, Func Offset: 0xc0
	// Line 2285, Address: 0x194a3c, Func Offset: 0xcc
	// Line 2288, Address: 0x194a60, Func Offset: 0xf0
	// Line 2290, Address: 0x194a64, Func Offset: 0xf4
	// Line 2292, Address: 0x194a6c, Func Offset: 0xfc
	// Line 2294, Address: 0x194a70, Func Offset: 0x100
	// Line 2295, Address: 0x194a74, Func Offset: 0x104
	// Line 2298, Address: 0x194a7c, Func Offset: 0x10c
	// Line 2299, Address: 0x194b20, Func Offset: 0x1b0
	// Line 2301, Address: 0x194b24, Func Offset: 0x1b4
	// Line 2302, Address: 0x194b2c, Func Offset: 0x1bc
	// Line 2305, Address: 0x194b30, Func Offset: 0x1c0
	// Line 2307, Address: 0x194b3c, Func Offset: 0x1cc
	// Line 2308, Address: 0x194b4c, Func Offset: 0x1dc
	// Line 2310, Address: 0x194b9c, Func Offset: 0x22c
	// Line 2311, Address: 0x194ba0, Func Offset: 0x230
	// Line 2312, Address: 0x194ba4, Func Offset: 0x234
	// Line 2316, Address: 0x194bb0, Func Offset: 0x240
	// Line 2321, Address: 0x194bb8, Func Offset: 0x248
	// Line 2324, Address: 0x194bc0, Func Offset: 0x250
	// Line 2331, Address: 0x194bc8, Func Offset: 0x258
	// Line 2332, Address: 0x194bcc, Func Offset: 0x25c
	// Line 2335, Address: 0x194bd4, Func Offset: 0x264
	// Line 2336, Address: 0x194c78, Func Offset: 0x308
	// Line 2338, Address: 0x194c7c, Func Offset: 0x30c
	// Line 2341, Address: 0x194c84, Func Offset: 0x314
	// Line 2342, Address: 0x194c88, Func Offset: 0x318
	// Line 2344, Address: 0x194c90, Func Offset: 0x320
	// Line 2348, Address: 0x194c98, Func Offset: 0x328
	// Line 2349, Address: 0x194c9c, Func Offset: 0x32c
	// Line 2351, Address: 0x194ca4, Func Offset: 0x334
	// Line 2352, Address: 0x194ca8, Func Offset: 0x338
	// Line 2355, Address: 0x194cac, Func Offset: 0x33c
	// Line 2357, Address: 0x194cb0, Func Offset: 0x340
	// Line 2358, Address: 0x194cc0, Func Offset: 0x350
	// Line 2360, Address: 0x194cfc, Func Offset: 0x38c
	// Line 2363, Address: 0x194d00, Func Offset: 0x390
	// Line 2364, Address: 0x194d04, Func Offset: 0x394
	// Line 2366, Address: 0x194d0c, Func Offset: 0x39c
	// Line 2368, Address: 0x194d10, Func Offset: 0x3a0
	// Line 2371, Address: 0x194d1c, Func Offset: 0x3ac
	// Line 2373, Address: 0x194dfc, Func Offset: 0x48c
	// Line 2376, Address: 0x194e0c, Func Offset: 0x49c
	// Line 2377, Address: 0x194e10, Func Offset: 0x4a0
	// Line 2381, Address: 0x194e18, Func Offset: 0x4a8
	// Line 2385, Address: 0x194e20, Func Offset: 0x4b0
	// Line 2389, Address: 0x194e28, Func Offset: 0x4b8
	// Line 2390, Address: 0x194e2c, Func Offset: 0x4bc
	// Line 2402, Address: 0x194e34, Func Offset: 0x4c4
	// Line 2403, Address: 0x194e38, Func Offset: 0x4c8
	// Line 2406, Address: 0x194e40, Func Offset: 0x4d0
	// Line 2409, Address: 0x194e48, Func Offset: 0x4d8
	// Line 2410, Address: 0x194e4c, Func Offset: 0x4dc
	// Line 2413, Address: 0x194e54, Func Offset: 0x4e4
	// Line 2417, Address: 0x194e58, Func Offset: 0x4e8
	// Line 2418, Address: 0x194e60, Func Offset: 0x4f0
	// Line 2421, Address: 0x194e78, Func Offset: 0x508
	// Line 2426, Address: 0x194ebc, Func Offset: 0x54c
	// Line 2428, Address: 0x194ecc, Func Offset: 0x55c
	// Line 2429, Address: 0x194ed4, Func Offset: 0x564
	// Line 2431, Address: 0x194ed8, Func Offset: 0x568
	// Line 2433, Address: 0x194ee4, Func Offset: 0x574
	// Line 2434, Address: 0x194eec, Func Offset: 0x57c
	// Line 2433, Address: 0x194ef0, Func Offset: 0x580
	// Line 2437, Address: 0x194ef4, Func Offset: 0x584
	// Line 2441, Address: 0x194f10, Func Offset: 0x5a0
	// Func End, Address: 0x194f28, Func Offset: 0x5b8
}

// zSaveLoad_CardCheckSlotOverwrite__Fii
// Start address: 0x194f30
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber)
{
	// Line 2137, Address: 0x194f30, Func Offset: 0
	// Line 2140, Address: 0x194f38, Func Offset: 0x8
	// Line 2141, Address: 0x194f90, Func Offset: 0x60
	// Line 2144, Address: 0x194f98, Func Offset: 0x68
	// Line 2148, Address: 0x194fb0, Func Offset: 0x80
	// Line 2150, Address: 0x194fbc, Func Offset: 0x8c
	// Line 2151, Address: 0x195074, Func Offset: 0x144
	// Line 2153, Address: 0x195078, Func Offset: 0x148
	// Line 2165, Address: 0x195080, Func Offset: 0x150
	// Line 2168, Address: 0x195128, Func Offset: 0x1f8
	// Line 2169, Address: 0x195140, Func Offset: 0x210
	// Line 2171, Address: 0x195158, Func Offset: 0x228
	// Line 2179, Address: 0x195160, Func Offset: 0x230
	// Line 2180, Address: 0x195178, Func Offset: 0x248
	// Line 2182, Address: 0x195180, Func Offset: 0x250
	// Func End, Address: 0x195190, Func Offset: 0x260
}

// zSaveLoad_CardCheckGames__Fii
// Start address: 0x195190
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode)
{
	int32 result;
	int32 tmp;
	// Line 2081, Address: 0x195190, Func Offset: 0
	// Line 2084, Address: 0x1951a4, Func Offset: 0x14
	// Line 2085, Address: 0x1951ac, Func Offset: 0x1c
	// Line 2087, Address: 0x1951b8, Func Offset: 0x28
	// Line 2089, Address: 0x1951c0, Func Offset: 0x30
	// Line 2090, Address: 0x1951c8, Func Offset: 0x38
	// Line 2091, Address: 0x1951e8, Func Offset: 0x58
	// Line 2096, Address: 0x1951f0, Func Offset: 0x60
	// Line 2097, Address: 0x1952d8, Func Offset: 0x148
	// Line 2099, Address: 0x1952f0, Func Offset: 0x160
	// Line 2101, Address: 0x1952f8, Func Offset: 0x168
	// Line 2102, Address: 0x195308, Func Offset: 0x178
	// Line 2103, Address: 0x195310, Func Offset: 0x180
	// Func End, Address: 0x195324, Func Offset: 0x194
}

// zSaveLoad_CardCheckSpace__Fii
// Start address: 0x195330
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode)
{
	int32 result;
	int32 tmp;
	// Line 2058, Address: 0x195330, Func Offset: 0
	// Line 2060, Address: 0x195344, Func Offset: 0x14
	// Line 2061, Address: 0x19534c, Func Offset: 0x1c
	// Line 2063, Address: 0x195358, Func Offset: 0x28
	// Line 2065, Address: 0x195360, Func Offset: 0x30
	// Line 2066, Address: 0x195368, Func Offset: 0x38
	// Line 2067, Address: 0x195388, Func Offset: 0x58
	// Line 2071, Address: 0x195390, Func Offset: 0x60
	// Line 2072, Address: 0x195478, Func Offset: 0x148
	// Line 2074, Address: 0x195490, Func Offset: 0x160
	// Line 2076, Address: 0x195498, Func Offset: 0x168
	// Line 2077, Address: 0x1954a8, Func Offset: 0x178
	// Line 2078, Address: 0x1954b0, Func Offset: 0x180
	// Func End, Address: 0x1954c4, Func Offset: 0x194
}

// zSaveLoad_CardCheckValid__Fii
// Start address: 0x1954d0
int32 zSaveLoad_CardCheckValid(int32 cardNumber, int32 mode)
{
	// Line 2049, Address: 0x1954d0, Func Offset: 0
	// Line 2051, Address: 0x1954d4, Func Offset: 0x4
	// Line 2055, Address: 0x1954f8, Func Offset: 0x28
	// Func End, Address: 0x195504, Func Offset: 0x34
}

// zSaveLoad_CardCheckFormatted__Fii
// Start address: 0x195510
int32 zSaveLoad_CardCheckFormatted(int32 cardNumber, int32 mode)
{
	int32 result;
	// Line 2006, Address: 0x195510, Func Offset: 0
	// Line 2008, Address: 0x195524, Func Offset: 0x14
	// Line 2010, Address: 0x195530, Func Offset: 0x20
	// Line 2012, Address: 0x195534, Func Offset: 0x24
	// Line 2013, Address: 0x19553c, Func Offset: 0x2c
	// Line 2015, Address: 0x195548, Func Offset: 0x38
	// Line 2018, Address: 0x195550, Func Offset: 0x40
	// Line 2020, Address: 0x19555c, Func Offset: 0x4c
	// Line 2024, Address: 0x195564, Func Offset: 0x54
	// Line 2025, Address: 0x195678, Func Offset: 0x168
	// Line 2027, Address: 0x195690, Func Offset: 0x180
	// Line 2032, Address: 0x195698, Func Offset: 0x188
	// Line 2033, Address: 0x19569c, Func Offset: 0x18c
	// Line 2034, Address: 0x1956ac, Func Offset: 0x19c
	// Line 2038, Address: 0x1956b0, Func Offset: 0x1a0
	// Line 2043, Address: 0x1956d0, Func Offset: 0x1c0
	// Line 2044, Address: 0x1956e4, Func Offset: 0x1d4
	// Line 2045, Address: 0x1956e8, Func Offset: 0x1d8
	// Func End, Address: 0x1956fc, Func Offset: 0x1ec
}

// zSaveLoad_CardCheck__Fii
// Start address: 0x195700
int32 zSaveLoad_CardCheck(int32 cardNumber, int32 mode)
{
	int32 result;
	int32 cardResult;
	// Line 1984, Address: 0x195700, Func Offset: 0
	// Line 1986, Address: 0x195714, Func Offset: 0x14
	// Line 1987, Address: 0x19571c, Func Offset: 0x1c
	// Line 1989, Address: 0x195728, Func Offset: 0x28
	// Line 1991, Address: 0x195730, Func Offset: 0x30
	// Line 1992, Address: 0x195738, Func Offset: 0x38
	// Line 1994, Address: 0x195750, Func Offset: 0x50
	// Line 1996, Address: 0x195758, Func Offset: 0x58
	// Line 1997, Address: 0x195760, Func Offset: 0x60
	// Line 2000, Address: 0x195768, Func Offset: 0x68
	// Line 2003, Address: 0x195780, Func Offset: 0x80
	// Func End, Address: 0x195794, Func Offset: 0x94
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
	// Line 1883, Address: 0x1957a0, Func Offset: 0
	// Line 1887, Address: 0x1957bc, Func Offset: 0x1c
	// Line 1896, Address: 0x1957cc, Func Offset: 0x2c
	// Line 1900, Address: 0x1957dc, Func Offset: 0x3c
	// Line 1906, Address: 0x195800, Func Offset: 0x60
	// Line 1908, Address: 0x195814, Func Offset: 0x74
	// Line 1914, Address: 0x195820, Func Offset: 0x80
	// Line 1920, Address: 0x195828, Func Offset: 0x88
	// Line 1926, Address: 0x195830, Func Offset: 0x90
	// Line 1928, Address: 0x19583c, Func Offset: 0x9c
	// Line 1929, Address: 0x195844, Func Offset: 0xa4
	// Line 1931, Address: 0x195848, Func Offset: 0xa8
	// Line 1933, Address: 0x195854, Func Offset: 0xb4
	// Line 1935, Address: 0x195860, Func Offset: 0xc0
	// Line 1939, Address: 0x195868, Func Offset: 0xc8
	// Line 1941, Address: 0x19586c, Func Offset: 0xcc
	// Line 1943, Address: 0x195870, Func Offset: 0xd0
	// Line 1944, Address: 0x195878, Func Offset: 0xd8
	// Line 1947, Address: 0x19587c, Func Offset: 0xdc
	// Func End, Address: 0x195898, Func Offset: 0xf8
}

// zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii
// Start address: 0x1958a0
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num, int32 game)
{
	int32 rc;
	// Line 1827, Address: 0x1958a0, Func Offset: 0
	// Line 1830, Address: 0x1958c0, Func Offset: 0x20
	// Line 1832, Address: 0x1958cc, Func Offset: 0x2c
	// Line 1835, Address: 0x1958d4, Func Offset: 0x34
	// Line 1839, Address: 0x1958dc, Func Offset: 0x3c
	// Line 1841, Address: 0x1958e0, Func Offset: 0x40
	// Line 1843, Address: 0x1958ec, Func Offset: 0x4c
	// Line 1849, Address: 0x1958fc, Func Offset: 0x5c
	// Line 1843, Address: 0x195908, Func Offset: 0x68
	// Line 1849, Address: 0x195910, Func Offset: 0x70
	// Line 1843, Address: 0x195914, Func Offset: 0x74
	// Line 1849, Address: 0x195918, Func Offset: 0x78
	// Line 1852, Address: 0x195954, Func Offset: 0xb4
	// Line 1853, Address: 0x19595c, Func Offset: 0xbc
	// Line 1857, Address: 0x195960, Func Offset: 0xc0
	// Line 1860, Address: 0x195968, Func Offset: 0xc8
	// Line 1861, Address: 0x195984, Func Offset: 0xe4
	// Line 1864, Address: 0x19598c, Func Offset: 0xec
	// Line 1870, Address: 0x195998, Func Offset: 0xf8
	// Line 1873, Address: 0x1959a0, Func Offset: 0x100
	// Line 1875, Address: 0x1959a8, Func Offset: 0x108
	// Line 1877, Address: 0x1959ac, Func Offset: 0x10c
	// Line 1879, Address: 0x1959b0, Func Offset: 0x110
	// Line 1880, Address: 0x1959b8, Func Offset: 0x118
	// Func End, Address: 0x1959d4, Func Offset: 0x134
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
	// Line 1762, Address: 0x1959e0, Func Offset: 0
	// Line 1767, Address: 0x1959f4, Func Offset: 0x14
	// Line 1776, Address: 0x195a04, Func Offset: 0x24
	// Line 1780, Address: 0x195a14, Func Offset: 0x34
	// Line 1785, Address: 0x195a38, Func Offset: 0x58
	// Line 1789, Address: 0x195a80, Func Offset: 0xa0
	// Line 1795, Address: 0x195a8c, Func Offset: 0xac
	// Line 1798, Address: 0x195a94, Func Offset: 0xb4
	// Line 1800, Address: 0x195a9c, Func Offset: 0xbc
	// Line 1804, Address: 0x195aa0, Func Offset: 0xc0
	// Line 1806, Address: 0x195aac, Func Offset: 0xcc
	// Line 1807, Address: 0x195ab4, Func Offset: 0xd4
	// Line 1809, Address: 0x195ab8, Func Offset: 0xd8
	// Line 1811, Address: 0x195ac4, Func Offset: 0xe4
	// Line 1813, Address: 0x195b08, Func Offset: 0x128
	// Line 1817, Address: 0x195b10, Func Offset: 0x130
	// Line 1819, Address: 0x195b14, Func Offset: 0x134
	// Line 1821, Address: 0x195b18, Func Offset: 0x138
	// Line 1822, Address: 0x195b20, Func Offset: 0x140
	// Line 1823, Address: 0x195b24, Func Offset: 0x144
	// Func End, Address: 0x195b3c, Func Offset: 0x15c
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
	// Line 1674, Address: 0x195b40, Func Offset: 0
	// Line 1679, Address: 0x195b54, Func Offset: 0x14
	// Line 1688, Address: 0x195b64, Func Offset: 0x24
	// Line 1692, Address: 0x195b74, Func Offset: 0x34
	// Line 1698, Address: 0x195b98, Func Offset: 0x58
	// Line 1699, Address: 0x195ba8, Func Offset: 0x68
	// Line 1703, Address: 0x195bb0, Func Offset: 0x70
	// Line 1709, Address: 0x195bb8, Func Offset: 0x78
	// Line 1711, Address: 0x195bc4, Func Offset: 0x84
	// Line 1712, Address: 0x195bcc, Func Offset: 0x8c
	// Line 1714, Address: 0x195bd0, Func Offset: 0x90
	// Line 1716, Address: 0x195bdc, Func Offset: 0x9c
	// Line 1718, Address: 0x195be4, Func Offset: 0xa4
	// Line 1720, Address: 0x195bec, Func Offset: 0xac
	// Line 1722, Address: 0x195bf0, Func Offset: 0xb0
	// Line 1724, Address: 0x195bf4, Func Offset: 0xb4
	// Line 1726, Address: 0x195bf8, Func Offset: 0xb8
	// Line 1727, Address: 0x195c00, Func Offset: 0xc0
	// Line 1729, Address: 0x195c04, Func Offset: 0xc4
	// Func End, Address: 0x195c1c, Func Offset: 0xdc
}

// zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi
// Start address: 0x195c20
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num)
{
	int32 rc;
	// Line 1626, Address: 0x195c20, Func Offset: 0
	// Line 1629, Address: 0x195c24, Func Offset: 0x4
	// Line 1626, Address: 0x195c28, Func Offset: 0x8
	// Line 1629, Address: 0x195c38, Func Offset: 0x18
	// Line 1631, Address: 0x195c40, Func Offset: 0x20
	// Line 1632, Address: 0x195c48, Func Offset: 0x28
	// Line 1634, Address: 0x195c50, Func Offset: 0x30
	// Line 1636, Address: 0x195c5c, Func Offset: 0x3c
	// Line 1663, Address: 0x195c68, Func Offset: 0x48
	// Line 1668, Address: 0x195c88, Func Offset: 0x68
	// Line 1671, Address: 0x195c98, Func Offset: 0x78
	// Func End, Address: 0x195cac, Func Offset: 0x8c
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
	// Line 1521, Address: 0x195cb0, Func Offset: 0
	// Line 1525, Address: 0x195cc4, Func Offset: 0x14
	// Line 1534, Address: 0x195cd4, Func Offset: 0x24
	// Line 1538, Address: 0x195ce4, Func Offset: 0x34
	// Line 1544, Address: 0x195d08, Func Offset: 0x58
	// Line 1557, Address: 0x195d18, Func Offset: 0x68
	// Line 1561, Address: 0x195d38, Func Offset: 0x88
	// Line 1564, Address: 0x195d40, Func Offset: 0x90
	// Line 1570, Address: 0x195d48, Func Offset: 0x98
	// Line 1576, Address: 0x195d50, Func Offset: 0xa0
	// Line 1579, Address: 0x195d5c, Func Offset: 0xac
	// Line 1583, Address: 0x195d64, Func Offset: 0xb4
	// Line 1584, Address: 0x195d6c, Func Offset: 0xbc
	// Line 1586, Address: 0x195d70, Func Offset: 0xc0
	// Line 1589, Address: 0x195d7c, Func Offset: 0xcc
	// Line 1593, Address: 0x195d88, Func Offset: 0xd8
	// Line 1597, Address: 0x195da8, Func Offset: 0xf8
	// Line 1600, Address: 0x195db0, Func Offset: 0x100
	// Line 1613, Address: 0x195db8, Func Offset: 0x108
	// Line 1616, Address: 0x195dc0, Func Offset: 0x110
	// Line 1619, Address: 0x195dc4, Func Offset: 0x114
	// Line 1621, Address: 0x195dc8, Func Offset: 0x118
	// Line 1622, Address: 0x195dd0, Func Offset: 0x120
	// Line 1623, Address: 0x195dd4, Func Offset: 0x124
	// Func End, Address: 0x195dec, Func Offset: 0x13c
}

// zSaveLoad_CardCheckSingle__Fi
// Start address: 0x195df0
int32 zSaveLoad_CardCheckSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 tgtslot;
	// Line 1447, Address: 0x195df0, Func Offset: 0
	// Line 1449, Address: 0x195e04, Func Offset: 0x14
	// Line 1458, Address: 0x195e14, Func Offset: 0x24
	// Line 1462, Address: 0x195e20, Func Offset: 0x30
	// Line 1465, Address: 0x195e44, Func Offset: 0x54
	// Line 1468, Address: 0x195e48, Func Offset: 0x58
	// Line 1469, Address: 0x195e50, Func Offset: 0x60
	// Line 1477, Address: 0x195e58, Func Offset: 0x68
	// Line 1479, Address: 0x195e68, Func Offset: 0x78
	// Line 1494, Address: 0x195e70, Func Offset: 0x80
	// Line 1500, Address: 0x195e7c, Func Offset: 0x8c
	// Line 1511, Address: 0x195e80, Func Offset: 0x90
	// Line 1512, Address: 0x195e88, Func Offset: 0x98
	// Line 1517, Address: 0x195e90, Func Offset: 0xa0
	// Line 1519, Address: 0x195e98, Func Offset: 0xa8
	// Func End, Address: 0x195eb0, Func Offset: 0xc0
}

// zSaveLoad_CardPrompt__Fi
// Start address: 0x195eb0
int32 zSaveLoad_CardPrompt(int32 mode)
{
	// Line 1155, Address: 0x195eb0, Func Offset: 0
	// Line 1156, Address: 0x195eb4, Func Offset: 0x4
	// Line 1155, Address: 0x195eb8, Func Offset: 0x8
	// Line 1156, Address: 0x195ec4, Func Offset: 0x14
	// Line 1158, Address: 0x195f04, Func Offset: 0x54
	// Line 1161, Address: 0x195f40, Func Offset: 0x90
	// Line 1162, Address: 0x195f7c, Func Offset: 0xcc
	// Line 1163, Address: 0x195fc0, Func Offset: 0x110
	// Line 1167, Address: 0x195fc8, Func Offset: 0x118
	// Line 1169, Address: 0x195fd0, Func Offset: 0x120
	// Line 1172, Address: 0x195fe4, Func Offset: 0x134
	// Line 1174, Address: 0x196020, Func Offset: 0x170
	// Line 1175, Address: 0x19602c, Func Offset: 0x17c
	// Line 1178, Address: 0x196040, Func Offset: 0x190
	// Line 1177, Address: 0x196048, Func Offset: 0x198
	// Line 1178, Address: 0x19604c, Func Offset: 0x19c
	// Func End, Address: 0x196054, Func Offset: 0x1a4
}

// CardtoTgt__Fi
// Start address: 0x196060
int32 CardtoTgt(int32 card)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	// Line 1085, Address: 0x196060, Func Offset: 0
	// Line 1087, Address: 0x196074, Func Offset: 0x14
	// Line 1095, Address: 0x196080, Func Offset: 0x20
	// Line 1098, Address: 0x19608c, Func Offset: 0x2c
	// Line 1104, Address: 0x1960b0, Func Offset: 0x50
	// Line 1105, Address: 0x1960b8, Func Offset: 0x58
	// Line 1112, Address: 0x1960c0, Func Offset: 0x60
	// Line 1113, Address: 0x1960c8, Func Offset: 0x68
	// Line 1120, Address: 0x1960d0, Func Offset: 0x70
	// Line 1121, Address: 0x1960d8, Func Offset: 0x78
	// Line 1126, Address: 0x1960e0, Func Offset: 0x80
	// Line 1128, Address: 0x1960e8, Func Offset: 0x88
	// Func End, Address: 0x1960fc, Func Offset: 0x9c
}

// format__Fii
// Start address: 0x196100
int32 format(int32 num, int32 mode)
{
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	// Line 920, Address: 0x196100, Func Offset: 0
	// Line 923, Address: 0x196104, Func Offset: 0x4
	// Line 920, Address: 0x196108, Func Offset: 0x8
	// Line 923, Address: 0x196120, Func Offset: 0x20
	// Line 931, Address: 0x196184, Func Offset: 0x84
	// Line 934, Address: 0x196194, Func Offset: 0x94
	// Line 940, Address: 0x1961b8, Func Offset: 0xb8
	// Line 941, Address: 0x1961c4, Func Offset: 0xc4
	// Line 944, Address: 0x1961d4, Func Offset: 0xd4
	// Line 941, Address: 0x1961d8, Func Offset: 0xd8
	// Line 944, Address: 0x1961dc, Func Offset: 0xdc
	// Line 946, Address: 0x196228, Func Offset: 0x128
	// Line 948, Address: 0x196234, Func Offset: 0x134
	// Line 950, Address: 0x1962d0, Func Offset: 0x1d0
	// Line 954, Address: 0x1962d8, Func Offset: 0x1d8
	// Line 958, Address: 0x1962e0, Func Offset: 0x1e0
	// Line 959, Address: 0x196378, Func Offset: 0x278
	// Line 968, Address: 0x196380, Func Offset: 0x280
	// Line 971, Address: 0x196388, Func Offset: 0x288
	// Line 977, Address: 0x196390, Func Offset: 0x290
	// Line 980, Address: 0x19639c, Func Offset: 0x29c
	// Line 983, Address: 0x1963a4, Func Offset: 0x2a4
	// Line 985, Address: 0x1963f0, Func Offset: 0x2f0
	// Line 988, Address: 0x1963f8, Func Offset: 0x2f8
	// Line 991, Address: 0x196458, Func Offset: 0x358
	// Line 992, Address: 0x196464, Func Offset: 0x364
	// Line 995, Address: 0x196474, Func Offset: 0x374
	// Line 992, Address: 0x196478, Func Offset: 0x378
	// Line 995, Address: 0x19647c, Func Offset: 0x37c
	// Line 997, Address: 0x1964c8, Func Offset: 0x3c8
	// Line 1002, Address: 0x1964d0, Func Offset: 0x3d0
	// Line 1003, Address: 0x196568, Func Offset: 0x468
	// Line 1023, Address: 0x196570, Func Offset: 0x470
	// Line 1028, Address: 0x1965c0, Func Offset: 0x4c0
	// Line 1030, Address: 0x1965c4, Func Offset: 0x4c4
	// Func End, Address: 0x1965e0, Func Offset: 0x4e0
}

// zSaveLoadGetAutoSaveCard__Fv
// Start address: 0x1965e0
int32 zSaveLoadGetAutoSaveCard()
{
	// Line 913, Address: 0x1965e0, Func Offset: 0
	// Func End, Address: 0x1965e8, Func Offset: 0x8
}

// zSaveLoad_getMCAccessType__Fv
// Start address: 0x1965f0
int32 zSaveLoad_getMCAccessType()
{
	// Line 908, Address: 0x1965f0, Func Offset: 0
	// Func End, Address: 0x1965f8, Func Offset: 0x8
}

// zSaveLoad_getMCneeded__Fv
// Start address: 0x196600
int32 zSaveLoad_getMCneeded()
{
	// Line 904, Address: 0x196600, Func Offset: 0
	// Func End, Address: 0x196608, Func Offset: 0x8
}

// zSaveLoad_getMCavailable__Fv
// Start address: 0x196610
int32 zSaveLoad_getMCavailable()
{
	// Line 900, Address: 0x196610, Func Offset: 0
	// Func End, Address: 0x196618, Func Offset: 0x8
}

// zSaveLoad_getcard__Fv
// Start address: 0x196620
int32 zSaveLoad_getcard()
{
	// Line 896, Address: 0x196620, Func Offset: 0
	// Func End, Address: 0x196628, Func Offset: 0x8
}

// zSaveLoad_getgame__Fv
// Start address: 0x196630
int32 zSaveLoad_getgame()
{
	// Line 892, Address: 0x196630, Func Offset: 0
	// Func End, Address: 0x196638, Func Offset: 0x8
}

// zSaveLoad_Tick__Fv
// Start address: 0x196640
void zSaveLoad_Tick()
{
	xMat4x3 playerMat;
	// Line 638, Address: 0x196640, Func Offset: 0
	// Line 644, Address: 0x196648, Func Offset: 0x8
	// Line 645, Address: 0x196664, Func Offset: 0x24
	// Line 644, Address: 0x196668, Func Offset: 0x28
	// Line 645, Address: 0x19666c, Func Offset: 0x2c
	// Line 650, Address: 0x196670, Func Offset: 0x30
	// Line 644, Address: 0x196674, Func Offset: 0x34
	// Line 650, Address: 0x196678, Func Offset: 0x38
	// Line 652, Address: 0x196684, Func Offset: 0x44
	// Line 654, Address: 0x19668c, Func Offset: 0x4c
	// Line 655, Address: 0x196698, Func Offset: 0x58
	// Line 657, Address: 0x1966b4, Func Offset: 0x74
	// Line 659, Address: 0x1966bc, Func Offset: 0x7c
	// Line 666, Address: 0x1966c0, Func Offset: 0x80
	// Line 662, Address: 0x1966c4, Func Offset: 0x84
	// Line 664, Address: 0x1966cc, Func Offset: 0x8c
	// Line 666, Address: 0x1966d0, Func Offset: 0x90
	// Line 662, Address: 0x1966d4, Func Offset: 0x94
	// Line 667, Address: 0x1966d8, Func Offset: 0x98
	// Line 674, Address: 0x1966e0, Func Offset: 0xa0
	// Line 675, Address: 0x1966e8, Func Offset: 0xa8
	// Line 676, Address: 0x1966f8, Func Offset: 0xb8
	// Line 681, Address: 0x1966fc, Func Offset: 0xbc
	// Line 675, Address: 0x196708, Func Offset: 0xc8
	// Line 681, Address: 0x19670c, Func Offset: 0xcc
	// Line 692, Address: 0x196714, Func Offset: 0xd4
	// Line 693, Address: 0x19671c, Func Offset: 0xdc
	// Line 699, Address: 0x196724, Func Offset: 0xe4
	// Line 700, Address: 0x196758, Func Offset: 0x118
	// Line 701, Address: 0x196764, Func Offset: 0x124
	// Line 700, Address: 0x196768, Func Offset: 0x128
	// Line 701, Address: 0x19676c, Func Offset: 0x12c
	// Line 700, Address: 0x196774, Func Offset: 0x134
	// Line 701, Address: 0x196778, Func Offset: 0x138
	// Line 702, Address: 0x196780, Func Offset: 0x140
	// Line 703, Address: 0x19678c, Func Offset: 0x14c
	// Line 705, Address: 0x196794, Func Offset: 0x154
	// Line 711, Address: 0x1967b0, Func Offset: 0x170
	// Line 720, Address: 0x1967b8, Func Offset: 0x178
	// Line 722, Address: 0x1967c8, Func Offset: 0x188
	// Line 726, Address: 0x1967d8, Func Offset: 0x198
	// Line 728, Address: 0x1967e0, Func Offset: 0x1a0
	// Line 733, Address: 0x1967e8, Func Offset: 0x1a8
	// Line 740, Address: 0x1967f0, Func Offset: 0x1b0
	// Line 741, Address: 0x196804, Func Offset: 0x1c4
	// Line 748, Address: 0x19680c, Func Offset: 0x1cc
	// Line 750, Address: 0x196818, Func Offset: 0x1d8
	// Line 752, Address: 0x196824, Func Offset: 0x1e4
	// Func End, Address: 0x196830, Func Offset: 0x1f0
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
	// Line 563, Address: 0x196830, Func Offset: 0
	// Line 570, Address: 0x196834, Func Offset: 0x4
	// Line 563, Address: 0x196838, Func Offset: 0x8
	// Line 570, Address: 0x196854, Func Offset: 0x24
	// Line 572, Address: 0x196860, Func Offset: 0x30
	// Line 574, Address: 0x196864, Func Offset: 0x34
	// Line 577, Address: 0x196870, Func Offset: 0x40
	// Line 578, Address: 0x196874, Func Offset: 0x44
	// Line 581, Address: 0x196878, Func Offset: 0x48
	// Line 583, Address: 0x1968a0, Func Offset: 0x70
	// Line 584, Address: 0x1968a8, Func Offset: 0x78
	// Line 589, Address: 0x1968c0, Func Offset: 0x90
	// Line 591, Address: 0x1968e8, Func Offset: 0xb8
	// Line 592, Address: 0x1968f0, Func Offset: 0xc0
	// Line 594, Address: 0x1968f8, Func Offset: 0xc8
	// Line 595, Address: 0x19691c, Func Offset: 0xec
	// Line 597, Address: 0x19692c, Func Offset: 0xfc
	// Line 595, Address: 0x196934, Func Offset: 0x104
	// Line 597, Address: 0x196940, Func Offset: 0x110
	// Line 599, Address: 0x196954, Func Offset: 0x124
	// Line 601, Address: 0x1969b4, Func Offset: 0x184
	// Line 604, Address: 0x1969c0, Func Offset: 0x190
	// Line 635, Address: 0x196a20, Func Offset: 0x1f0
	// Line 636, Address: 0x196a30, Func Offset: 0x200
	// Func End, Address: 0x196a54, Func Offset: 0x224
}

