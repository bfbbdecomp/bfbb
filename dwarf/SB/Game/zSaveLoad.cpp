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

typedef s32(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xEnt*, xScene*, f32);
typedef RwCamera*(*type_6)(RwCamera*);
typedef void(*type_8)(void*);
typedef void(*type_10)(xEnt*, xScene*, f32, xEntCollis*);
typedef RwObjectHasFrame*(*type_11)(RwObjectHasFrame*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef u32(*type_16)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_17)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_18)(RxPipelineNode*);
typedef void(*type_21)(xEnt*);
typedef xBase*(*type_24)(u32);
typedef s8*(*type_26)(xBase*);
typedef u32(*type_29)(void*, void*);
typedef s32(*type_30)(RxPipelineNode*, RxPipeline*);
typedef s8*(*type_32)(u32);
typedef u32(*type_33)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_35)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef u32(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_46)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_48)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_50)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_54)(RxNodeDefinition*);
typedef void(*type_55)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_58)(RxNodeDefinition*);
typedef s32(*type_59)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef RpClump*(*type_62)(RpClump*, void*);
typedef void(*type_69)(xAnimPlay*, xAnimState*);
typedef s32(*type_71)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef void(*type_73)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_74)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_75)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpAtomic*(*type_77)(RpAtomic*);
typedef s32(*type_80)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef s32(*type_91)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef s32(*type_95)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef RwCamera*(*type_105)(RwCamera*);
typedef s32(*type_107)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef RpWorldSector*(*type_108)(RpWorldSector*);
typedef void(*type_112)(xMemPool*, void*);
typedef void(*type_121)(RwResEntry*);

typedef RpLight* type_0[2];
typedef f32 type_1[2];
typedef u8 type_4[22];
typedef f32 type_5[12];
typedef f32 type_7[16];
typedef RwFrame* type_9[2];
typedef s8 type_13[64];
typedef s8 type_14[64];
typedef f32 type_15[12];
typedef s8 type_19[32];
typedef _tagTRCPadInfo type_20[4];
typedef f32 type_22[2];
typedef s8* type_23[15];
typedef s8 type_25[32];
typedef u8 type_27[3];
typedef xVec3 type_28[5];
typedef u8 type_31[2];
typedef u8 type_34[5];
typedef s8 type_38[64];
typedef s8 type_39[32];
typedef zSaveLoadUI type_40[62];
typedef u16 type_41[3];
typedef xVec3 type_42[60];
typedef s8 type_43[256];
typedef RwFrustumPlane type_44[6];
typedef u32 type_45[4];
typedef xVec3 type_47[4];
typedef u8 type_49[2];
typedef xAnimMultiFileEntry type_51[1];
typedef f32 type_52[22];
typedef RwV3d type_53[8];
typedef s8 type_56[32];
typedef f32 type_57[22];
typedef f32 type_60[4];
typedef u32 type_61[15];
typedef s8 type_63[64];
typedef u32 type_64[15];
typedef s8 type_65[16];
typedef RwTexCoords* type_66[8];
typedef xCollis type_67[18];
typedef u32 type_68[15];
typedef analog_data type_70[2];
typedef s8 type_72[16];
typedef u16 type_76[3];
typedef s8 type_78[32];
typedef u8 type_79[2];
typedef u8 type_81[2];
typedef xVec4 type_82[12];
typedef s8 type_83[32];
typedef u32 type_84[2];
typedef u8 type_85[2];
typedef st_XSAVEGAME_CLIENT type_86[128];
typedef f32 type_87[6];
typedef f32 type_88[3];
typedef u32 type_89[4];
typedef f32 type_90[3];
typedef xModelTag type_92[2];
typedef f32 type_93[3];
typedef f32 type_94[2];
typedef u8 type_96[3];
typedef s8 type_97[32];
typedef RwTexCoords* type_98[8];
typedef u32 type_99[72];
typedef xEnt* type_100[111];
typedef s8 type_101[4];
typedef s8 type_102[128];
typedef f32 type_103[4];
typedef xBase* type_104[72];
typedef s8 type_106[128];
typedef s8 type_109[128];
typedef type_109 type_110[6];
typedef f32 type_111[4];
typedef u8 type_113[14];
typedef xModelTag type_114[4];
typedef s8 type_115[32];
typedef s8 type_116[32];
typedef xModelInstance* type_117[14];
typedef f32 type_118[5];
typedef s8 type_119[32];
typedef xSndVoiceInfo type_120[48];
typedef xMat4x3 type_122[2];
typedef xVec3 type_123[3];
typedef u16 type_124[2];
typedef u8 type_125[4];
typedef s8 type_126[32];
typedef f32 type_127[12];
typedef f32 type_128[2];
typedef f32 type_129[12];
typedef f32 type_130[2];
typedef f32 type_131[12];
typedef f32 type_132[2];
typedef zSaveLoadGame type_133[3];
typedef RxCluster type_134[1];
typedef u8 type_135[22];
typedef f32 type_136[12];

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
	type_24 resolvID;
	type_26 base2Name;
	type_32 id2Name;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	u16 state;
	u16 plat_flags;
	f32 tmr;
	s32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	s32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	f32 pauseMult;
	f32 pauseDelta;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zSaveLoadGame
{
	type_13 label;
	type_19 date;
	s32 progress;
	u32 size;
	s8 thumbIconIndex;
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
	type_47 corner;
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
	s32 driveMode;
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
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_22 BilinearLerp;
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
	s32 unknown;
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
	type_81 PowerUp;
	type_85 InitialPowerUp;
};

struct rxHeapFreeBlock
{
	u32 size;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_29 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
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

struct xAnimMultiFileBase
{
	u32 Count;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_49 NumAnims;
	void** RawData;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_31 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct XSGAutoData
{
	s32 flg_autodata;
	s32 lastTarg;
	s32 lastGame;
	s32 lastPhysicalSlot;
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
	u32 mode;
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

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct zCutsceneMgr
{
};

struct st_XSAVEGAME_DATA
{
	s32 gfile_idx;
	en_SAVEGAME_MODE mode;
	u32 stage;
	s32 gslot;
	type_63 label;
	s32 progress;
	s32 thumbIconIdx;
	s32 playtime;
	s8* membuf;
	s32 memsize;
	s8* buf_curpos;
	s8* buf_sizespot;
	s8* buf_cksmspot;
	s32 totamt;
	u32 chksum;
	u32 upd_tally;
	s32 cltneed;
	s32 cltmax;
	s32 chdrneed;
	s32 stkcnt;
	type_86 cltstk;
	st_XSAVEGAME_CLIENT dfltloadclt;
	u32 file_chksum;
	u32 read_chksum;
	s32 readsize;
	s8* loadbuf;
	s32 loadsize;
	s8* walkpos;
	s32 walkremain;
	st_ISGSESSION* isgsess;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_16 Callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_36 Conditional;
	type_36 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_75 eventFunc;
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
	u32 creationAttributes;
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_42 tranTable;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct xPlatformAsset
{
};

struct RpPolygon
{
	u16 matIndex;
	type_41 vertIndex;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_60 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xEntMPData
{
	f32 curdist;
	f32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	f32 dist;
	u32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	f32 u;
	f32 v;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xEntMotionAsset
{
	u8 type;
	u8 use_banking;
	u16 flags;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_89 pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_79 pad;
	f32 delay;
	xSpline3* spl;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_51 Files;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_7 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct zUIAsset : xEntAsset
{
	u32 uiFlags;
	type_124 dim;
	u32 textureID;
	type_128 uva;
	type_130 uvb;
	type_132 uvc;
	type_1 uvd;
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
	u32 slotIndex;
};

struct xSpline3
{
	u16 type;
	u16 flags;
	u32 N;
	u32 allocN;
	xVec3* points;
	f32* time;
	xVec3* p12;
	xVec3* bctrl;
	f32* knot;
	xCoef3* coef;
	u32 arcSample;
	f32* arcLength;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	f32 ext_tm;
	f32 ext_wait_tm;
	f32 ret_tm;
	f32 ret_wait_tm;
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
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_94 radius;
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
	type_98 texCoords;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct anim_coll_data
{
};

struct zPlatFMRunTime
{
	u32 flags;
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
	f32 mag;
	f32 ang;
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
	type_96 pad;
	void* moprops;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	f32 rot;
	u32 initCamID;
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
	type_92 BubbleWandTag;
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
	type_114 HangPawTag;
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
	type_61 Inv_PatsSock;
	type_64 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_68 Inv_LevelPickups;
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
	type_84 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_100 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_113 sb_model_indices;
	type_117 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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

struct _zUI : zEnt
{
	zUIAsset* sasset;
	u32 uiFlags;
	u32 uiButton;
	u16 preUpdateIndex;
	u16 updateIndex;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct iSndInfo
{
	u32 flags;
	iSndVol vol;
	u32 pitch;
	s32 lastStreamBuffer;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_121 destroyNotify;
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
	type_8 activateCB;
	type_8 deactivateCB;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
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
	f32 angle;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	u16 wt;
	u8 on;
	u8 bezIndex;
	u8 flg_props;
	u8 pad;
	u16 numPoints;
	f32 delay;
	f32 zoneRadius;
	f32 arenaRadius;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_44 frustumPlanes;
	RwBBox frustumBoundBox;
	type_53 frustumCorners;
};

struct RpTriangle
{
	type_76 vertIndex;
	s16 matIndex;
};

struct xSndVoiceInfo
{
	u32 assetID;
	u32 sndID;
	u32 parentID;
	xVec3* parentPos;
	s32 internalID;
	u32 flags;
	u16 pad;
	u16 priority;
	f32 vol;
	f32 pitch;
	u32 sample_rate;
	u32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	f32 innerRadius2;
	f32 outerRadius2;
	u32 lock_owner;
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
	f32 r;
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
	f32 r;
	f32 h;
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
	s32 memlvl;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	f32 arot;
	f32 brot;
	f32 ss;
	f32 sr;
	s32 state;
	f32 tsfd;
	f32 trfd;
	f32 tsbd;
	f32 trbd;
	f32* rotptr;
};

struct xEntMotionSplineData
{
	s32 unknown;
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
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_103 wt;
};

struct st_XSAVEGAME_CLIENT
{
	u32 idtag;
	type_35 cltinfo;
	type_48 cltproc;
	type_59 cltload;
	void* cltdata;
	s32 needamt;
	s32 maxamt;
	s32 realamt;
	s8* buf_sizepos;
	s8* buf_maxpos;
	s32 blokact;
	s32 blokmax;
	s8* blokpos;
	s8* readpos;
	s32 readamt;
	s32 readremain;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	f32 et;
	f32 wet;
	f32 rt;
	f32 wrt;
	f32 p;
	f32 brt;
	f32 ert;
	s32 state;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zSaveLoadUI
{
	u32 entry;
	u32 nameID;
	s8* name;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct xJSPHeader
{
	type_101 idtag;
	u32 version;
	u32 jspNodeCount;
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
	u32 filterAddressing;
	s32 refCount;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_110 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_115 sceneStart;
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RpSector
{
	s32 type;
};

struct zEntHangable
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
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

struct _tagxPad
{
	type_135 value;
	type_4 last_value;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	u8 type;
	u8 flags;
	u8 sld_axis;
	u8 rot_axis;
	f32 sld_dist;
	f32 sld_tm;
	f32 sld_acc_tm;
	f32 sld_dec_tm;
	f32 rot_dist;
	f32 rot_tm;
	f32 rot_acc_tm;
	f32 rot_dec_tm;
	f32 ret_delay;
	f32 post_ret_delay;
};

struct iSndVol
{
	s16 volL;
	s16 volR;
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
	s8 x;
	s8 y;
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
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
	type_108 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	s32 id;
	_tagTRCState state;
};

struct xSndGlobals
{
	u32 stereo;
	u32 SndCount;
	type_118 categoryVolFader;
	type_120 voice;
	type_122 listenerMat;
	sound_listener_game_mode listenerMode;
	u32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

struct _tagiPad
{
	s32 port;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	f32 a;
	f32 b;
	f32 p;
	f32 w;
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

struct xShadowSimplePoly
{
	type_123 vert;
	xVec3 norm;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_134 clusters;
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	u8 type;
	u8 pad;
	u16 flags;
	f32 t;
	f32 tmr;
	f32 d;
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
	u32 ID;
	xAnimFile* File;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
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
u32 saveSuccess;
f32 time_elapsed;
f32 time_last;
f32 time_current;
s32 t0;
s32 t1;
s32 currentCard;
s32 currentGame;
s32 promptSel;
s32 badCard;
s32 sAvailable;
s32 sNeeded;
s32 sAccessType;
f32 dontPoll;
s32 sLastCard;
s32 sLastGame;
s32 autoSaveCard;
type_83 currSceneStr;
type_126 sceneRead;
type_40 zSaveLoadUITable;
type_23 thumbIconMap;
type_133 zSaveLoadGameTable;
u8 preAutoSaving;
s32 ps2Result;
s32 ps2Formatted;
s32 ps2CardType;
s32 ps2FreeSpace;
zGlobals globals;
xSndGlobals gSnd;
eGameMode gGameMode;
type_20 gTrcPad;
s32 gGameState;
type_107 xSGT_LoadPrefsCB;
type_80 xSGT_LoadLoadCB;
type_95 xSGT_SaveProcPrefsCB;
type_91 xSGT_SaveInfoPrefsCB;
type_74 xSGT_SaveProcCB;
type_71 xSGT_SaveInfoCB;
u32 gFrameCount;
f32 sTimeElapsed;
s32 sTimeLast;
s32 sTimeCurrent;

u32 zSaveLoad_slotIsEmpty(u32 i);
s32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
s32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
s32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
s32 xSGT_SaveInfoPrefsCB(s32* need, s32* most);
s32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
s32 xSGT_SaveInfoCB(s32* need, s32* most);
void zSaveLoad_DispatchCB(u32 dispatchEvent, f32* toParam);
u32 zSaveLoad_SaveLoop();
u32 zSaveLoad_LoadLoop();
s32 zSaveLoad_LoadGame();
s32 zSaveLoad_SaveGame();
s32 zSaveLoad_DoAutoSave();
void zSaveLoadAutoSaveUpdate();
void zSaveLoadPreAutoSave(u8 onOff);
u8 zSaveLoadGetPreAutoSave();
s32 zSaveLoad_GameSelect(s32 mode);
void zSaveLoad_BuildName(s8* name_txt, s32 idx);
void BuildIt(s8* build_txt, s32 i);
s32 zSaveLoad_CardPick(s32 mode);
s32 zSaveLoad_CardCheckSlotOverwrite(s32 cardNumber, s32 gameNumber);
s32 zSaveLoad_CardCheckGames(s32 cardNumber, s32 mode);
s32 zSaveLoad_CardCheckSpace(s32 cardNumber, s32 mode);
s32 zSaveLoad_CardCheckValid(s32 cardNumber, s32 mode);
s32 zSaveLoad_CardCheckFormatted(s32 cardNumber, s32 mode);
s32 zSaveLoad_CardCheck(s32 cardNumber, s32 mode);
s32 zSaveLoad_CardCheckSlotEmpty_hasGame(s32 num, s32 game);
s32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, s32 num, s32 game);
s32 zSaveLoad_CardCheckGamesSingle(s32 num);
s32 zSaveLoad_CardCheckSpaceSingle(s32 num);
s32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, s32 num);
s32 zSaveLoad_CardCheckFormattedSingle(s32 num);
s32 zSaveLoad_CardCheckSingle(s32 num);
s32 zSaveLoad_CardPrompt(s32 mode);
s32 CardtoTgt(s32 card);
s32 format(s32 num, s32 mode);
s32 zSaveLoadGetAutoSaveCard();
s32 zSaveLoad_getMCAccessType();
s32 zSaveLoad_getMCneeded();
s32 zSaveLoad_getMCavailable();
s32 zSaveLoad_getcard();
s32 zSaveLoad_getgame();
void zSaveLoad_Tick();
void zUpdateThumbIcon();

// zSaveLoad_slotIsEmpty__FUi
// Start address: 0x192190
u32 zSaveLoad_slotIsEmpty(u32 i)
{
}

// xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1921e0
s32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_78 bigbuf;
}

// xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1922d0
s32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_97 bigbuf;
	s32 compdiff;
}

// xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1923a0
s32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	s32 amy;
	s32 sum;
}

// xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192450
s32 xSGT_SaveInfoPrefsCB(s32* need, s32* most)
{
}

// xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x192470
s32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	s32 amy;
	s32 sum;
}

// xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192530
s32 xSGT_SaveInfoCB(s32* need, s32* most)
{
	s32 slen;
}

// zSaveLoad_DispatchCB__FUiPCf
// Start address: 0x192580
void zSaveLoad_DispatchCB(u32 dispatchEvent, f32* toParam)
{
	st_XSAVEGAME_DATA* inst;
}

// zSaveLoad_SaveLoop__Fv
// Start address: 0x192660
u32 zSaveLoad_SaveLoop()
{
	s32 result;
	s32 state;
	s32 tmp;
	xBase* sendTo;
	xBase* sendTo;
	s32 tmp;
	xBase* sendTo;
}

// zSaveLoad_LoadLoop__Fv
// Start address: 0x192c90
u32 zSaveLoad_LoadLoop()
{
	s32 state;
	s32 tmp;
	s32 tmp;
	s32 result;
}

// zSaveLoad_LoadGame__Fv
// Start address: 0x193060
s32 zSaveLoad_LoadGame()
{
	s32 success;
	s32 teststat;
	s32 rc;
	en_XSGASYNC_STATUS asstat;
	s32 use_tgt;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
	s32 use_game;
}

// zSaveLoad_SaveGame__Fv
// Start address: 0x193340
s32 zSaveLoad_SaveGame()
{
	s32 success;
	s32 teststat;
	s32 rc;
	en_XSGASYNC_STATUS asstat;
	s32 use_tgt;
	s32 use_game;
	u32 progress;
	type_38 label;
	s8* area;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
}

// zSaveLoad_DoAutoSave__Fv
// Start address: 0x193790
s32 zSaveLoad_DoAutoSave()
{
	s32 success;
	s32 teststat;
	s32 rc;
	en_XSGASYNC_STATUS asstat;
	st_XSAVEGAME_DATA* svinst;
	XSGAutoData* autodata;
	s32 use_tgt;
	u32 progress;
	type_14 label;
	s8* area;
}

// zSaveLoadAutoSaveUpdate__Fv
// Start address: 0x193af0
void zSaveLoadAutoSaveUpdate()
{
	xBase* sendTo;
	XSGAutoData* autodata;
	s32 result;
}

// zSaveLoadPreAutoSave__Fb
// Start address: 0x193d30
void zSaveLoadPreAutoSave(u8 onOff)
{
}

// zSaveLoadGetPreAutoSave__Fv
// Start address: 0x193d40
u8 zSaveLoadGetPreAutoSave()
{
}

// zSaveLoad_GameSelect__Fi
// Start address: 0x193d50
s32 zSaveLoad_GameSelect(s32 mode)
{
	s32 done;
	s32 i;
	st_XSAVEGAME_DATA* svinst;
	s32 use_tgt;
	s32 emptyCount;
}

// zSaveLoad_BuildName__FPci
// Start address: 0x194640
void zSaveLoad_BuildName(s8* name_txt, s32 idx)
{
	type_102 desired;
	type_106 current_name;
	s32 counter;
	s32 i;
}

// BuildIt__FPci
// Start address: 0x194750
void BuildIt(s8* build_txt, s32 i)
{
	type_25 date1;
	type_39 date2;
	type_43 biggerbuf;
	type_56 displaySizeUnit;
}

// zSaveLoad_CardPick__Fi
// Start address: 0x194970
s32 zSaveLoad_CardPick(s32 mode)
{
	s32 done;
	u8 formatDone;
}

// zSaveLoad_CardCheckSlotOverwrite__Fii
// Start address: 0x194f30
s32 zSaveLoad_CardCheckSlotOverwrite(s32 cardNumber, s32 gameNumber)
{
}

// zSaveLoad_CardCheckGames__Fii
// Start address: 0x195190
s32 zSaveLoad_CardCheckGames(s32 cardNumber, s32 mode)
{
	s32 result;
	s32 tmp;
}

// zSaveLoad_CardCheckSpace__Fii
// Start address: 0x195330
s32 zSaveLoad_CardCheckSpace(s32 cardNumber, s32 mode)
{
	s32 result;
	s32 tmp;
}

// zSaveLoad_CardCheckValid__Fii
// Start address: 0x1954d0
s32 zSaveLoad_CardCheckValid(s32 cardNumber, s32 mode)
{
}

// zSaveLoad_CardCheckFormatted__Fii
// Start address: 0x195510
s32 zSaveLoad_CardCheckFormatted(s32 cardNumber, s32 mode)
{
	s32 result;
}

// zSaveLoad_CardCheck__Fii
// Start address: 0x195700
s32 zSaveLoad_CardCheck(s32 cardNumber, s32 mode)
{
	s32 result;
	s32 cardResult;
}

// zSaveLoad_CardCheckSlotEmpty_hasGame__Fii
// Start address: 0x1957a0
s32 zSaveLoad_CardCheckSlotEmpty_hasGame(s32 num, s32 game)
{
	st_XSAVEGAME_DATA* ldinst;
	s32 tgtcnt;
	s32 tgtmax;
	s32 rc;
	s32 tgtslot;
}

// zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii
// Start address: 0x1958a0
s32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, s32 num, s32 game)
{
	s32 rc;
}

// zSaveLoad_CardCheckGamesSingle__Fi
// Start address: 0x1959e0
s32 zSaveLoad_CardCheckGamesSingle(s32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	s32 tgtcnt;
	s32 tgtmax;
	s32 rc;
	s32 tgtslot;
}

// zSaveLoad_CardCheckSpaceSingle__Fi
// Start address: 0x195b40
s32 zSaveLoad_CardCheckSpaceSingle(s32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	s32 tgtcnt;
	s32 tgtmax;
	s32 rc;
	s32 tgtslot;
}

// zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi
// Start address: 0x195c20
s32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, s32 num)
{
	s32 rc;
}

// zSaveLoad_CardCheckFormattedSingle__Fi
// Start address: 0x195cb0
s32 zSaveLoad_CardCheckFormattedSingle(s32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	s32 tgtcnt;
	s32 tgtmax;
	s32 rc;
	s32 tgtslot;
}

// zSaveLoad_CardCheckSingle__Fi
// Start address: 0x195df0
s32 zSaveLoad_CardCheckSingle(s32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	s32 tgtcnt;
	s32 tgtmax;
	s32 tgtslot;
}

// zSaveLoad_CardPrompt__Fi
// Start address: 0x195eb0
s32 zSaveLoad_CardPrompt(s32 mode)
{
}

// CardtoTgt__Fi
// Start address: 0x196060
s32 CardtoTgt(s32 card)
{
	st_XSAVEGAME_DATA* ldinst;
	s32 tgtcnt;
	s32 tgtmax;
}

// format__Fii
// Start address: 0x196100
s32 format(s32 num, s32 mode)
{
	s32 tgtcnt;
	s32 tgtmax;
	s32 rc;
	s32 tgtslot;
}

// zSaveLoadGetAutoSaveCard__Fv
// Start address: 0x1965e0
s32 zSaveLoadGetAutoSaveCard()
{
}

// zSaveLoad_getMCAccessType__Fv
// Start address: 0x1965f0
s32 zSaveLoad_getMCAccessType()
{
}

// zSaveLoad_getMCneeded__Fv
// Start address: 0x196600
s32 zSaveLoad_getMCneeded()
{
}

// zSaveLoad_getMCavailable__Fv
// Start address: 0x196610
s32 zSaveLoad_getMCavailable()
{
}

// zSaveLoad_getcard__Fv
// Start address: 0x196620
s32 zSaveLoad_getcard()
{
}

// zSaveLoad_getgame__Fv
// Start address: 0x196630
s32 zSaveLoad_getgame()
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
	s32 i;
	_zUI* gameSlot;
	s32 start;
	s32 end;
	u32 id;
	_zUI* thumbIcon;
	s32 index;
}

