typedef struct xAnimTransition;
typedef struct _zEnv;
typedef struct xVec2;
typedef struct xEntFrame;
typedef struct RwV3d;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpAtomic;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xAnimState;
typedef struct RxPipelineNodeParam;
typedef struct xEnt;
typedef struct xCollis;
typedef struct xEnvAsset;
typedef struct zPlatform;
typedef struct RpInterpolator;
typedef struct xEntBoulderAsset;
typedef struct zGlobals;
typedef struct RxHeap;
typedef struct _tagTRCPadInfo;
typedef struct RwBBox;
typedef struct xSpline3;
typedef struct RwRGBA;
typedef struct XCSNNosey;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xCutsceneMgr;
typedef struct xModelInstance;
typedef struct xQuat;
typedef struct zGlobalSettings;
typedef struct xEntMechData;
typedef struct xAnimMultiFileEntry;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwTexCoords;
typedef struct xAnimActiveEffect;
typedef struct xGroupAsset;
typedef struct xEntMotionSplineData;
typedef struct xCutsceneMgrAsset;
typedef struct xShadowSimplePoly;
typedef struct basic_rect;
typedef struct zCutsceneMgr;
typedef struct RpPolygon;
typedef struct xBase;
typedef struct xCutscene;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimFile;
typedef struct RpMaterialList;
typedef struct zJumpParam;
typedef struct zEnt;
typedef struct xBaseAsset;
typedef struct xCutsceneZbufferHack;
typedef struct xJSPNodeInfo;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef struct RpMaterial;
typedef struct xLightKit;
typedef struct zEntHangable;
typedef struct xIniFile;
typedef struct _tagxPad;
typedef struct xClumpCollBSPBranchNode;
typedef struct xScene;
typedef enum _zPlayerWallJumpState;
typedef struct xLightKitLight;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct xEntCollis;
typedef struct xModelPool;
typedef struct xVec4;
typedef struct xAnimMultiFileBase;
typedef struct RpClump;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct RwSurfaceProperties;
typedef struct xShadowSimpleCache;
typedef struct RpGeometry;
typedef struct RwMatrixTag;
typedef struct RpWorldSector;
typedef struct rxReq;
typedef enum eStartupErrors;
typedef struct xUpdateCullGroup;
typedef struct xAnimPlay;
typedef struct tri_data_0;
typedef struct RwRaster;
typedef struct xCoef;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xEntBoulder;
typedef struct xJSPHeader;
typedef struct RpLight;
typedef struct xCutsceneInfo;
typedef struct xBound;
typedef struct RpVertexNormal;
typedef struct xAnimMultiFile;
typedef struct analog_data;
typedef enum RxNodeDefEditable;
typedef struct xEntMotionMechData;
typedef struct xMat4x3;
typedef enum _tagPadInit;
typedef struct xFFX;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef struct xCamera;
typedef struct xEntPenData;
typedef struct RpMeshHeader;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xCoef3;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xQCData;
typedef struct RwCamera;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct zCheckPoint;
typedef struct _class_0;
typedef struct xSurface;
typedef enum rxEmbeddedPacketState;
typedef struct xUpdateCullMgr;
typedef struct xSphere;
typedef struct xEntShadow;
typedef struct xModelBucket;
typedef enum RwCameraProjection;
typedef struct xEntOrbitData;
typedef enum RxClusterForcePresent;
typedef struct RpTriangle;
typedef struct zPlayerCarryInfo;
typedef struct anim_coll_data;
typedef struct xCylinder;
typedef struct zPlayerSettings;
typedef struct zLasso;
typedef struct zPlatFMRunTime;
typedef struct xMovePointAsset;
typedef struct RxClusterDefinition;
typedef struct xEntMotion;
typedef struct xBox;
typedef struct _zHipDepend;
typedef struct xIniValue;
typedef struct xPlatformAsset;
typedef struct xEntMotionAsset;
typedef struct iEnv;
typedef struct xGridBound;
typedef struct tag_iFile;
typedef struct xCutsceneTime;
typedef struct xMemPool;
typedef struct xPortalAsset;
typedef struct RpWorld;
typedef struct _tagiTRCPadInfo;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct xCutsceneData;
typedef struct RxOutputSpec;
typedef struct xEntSplineData;
typedef struct _zPortal;
typedef struct _tagiPad;
typedef struct _tagxRumble;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xIniSection;
typedef enum RpWorldRenderOrder;
typedef struct tag_xFile;
typedef struct xCutsceneBreak;
typedef struct xEntMotionPenData;
typedef struct RwFrame;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xEntDrive;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct st_SERIAL_PERCID_SIZE;
typedef struct RpSector;
typedef struct xEntMPData;
typedef struct _class_1;
typedef struct RxNodeMethods;
typedef struct xAnimTransitionList;
typedef enum _tagPadState;
typedef struct xModelTag;
typedef struct xMovePoint;
typedef enum _tagTRCState;
typedef struct xGlobals;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct xEntMotionERData;
typedef struct RxCluster;
typedef struct xEnv;
typedef struct xCutsceneZbuffer;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPacket;
typedef struct _tagPadAnalog;
typedef struct xClumpCollBSPTriangle;
typedef enum RwFogType;
typedef struct tri_data_1;
typedef struct RwObjectHasFrame;
typedef struct RwRGBAReal;
typedef struct xEntAsset;
typedef struct RwLinkList;
typedef struct iFogParams;
typedef struct xEntMotionOrbitData;
typedef union _class_2;
typedef struct RwV2d;

typedef u32(*type_0)(void*, void*);
typedef s32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef s32(*type_6)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_7)(void*);
typedef u32(*type_16)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_21)(RxNodeDefinition*);
typedef void(*type_26)(RxNodeDefinition*);
typedef void(*type_27)(xEnt*, xScene*, f32);
typedef s32(*type_28)(RxPipelineNode*);
typedef u32(*type_29)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef void(*type_35)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_36)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_37)(xEnt*);
typedef RpClump*(*type_43)(RpClump*, void*);
typedef xBase*(*type_44)(u32);
typedef u32(*type_46)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_48)();
typedef u32(*type_50)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_52)(xEnt*, xVec3*, xMat4x3*);
typedef s8*(*type_57)(xBase*);
typedef s8*(*type_64)(u32);
typedef void(*type_65)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_79)(RpAtomic*);
typedef void(*type_84)(xAnimPlay*, xAnimState*);
typedef void(*type_94)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RwCamera*(*type_111)(RwCamera*);
typedef RwCamera*(*type_118)(RwCamera*);
typedef void(*type_121)(xMemPool*, void*);
typedef RpWorldSector*(*type_125)(RpWorldSector*);
typedef void(*type_130)(RwResEntry*);
typedef RwObjectHasFrame*(*type_150)(RwObjectHasFrame*);

typedef u32 type_1[2];
typedef u32 type_2[2];
typedef u8 type_4[2];
typedef f32 type_5[4];
typedef u32 type_8[2];
typedef u8 type_9[22];
typedef s8 type_10[11];
typedef u8 type_11[22];
typedef f32 type_12[3];
typedef s8 type_13[64];
typedef RwFrustumPlane type_14[6];
typedef u32 type_15[6];
typedef s8 type_17[64];
typedef xVec3 type_18[3];
typedef RwV3d type_20[8];
typedef s8 type_22[64];
typedef u16 type_23[3];
typedef f32 type_24[4];
typedef _tagxPad type_25[4];
typedef f32 type_30[4];
typedef f32 type_31[2];
typedef xVec3 type_34[60];
typedef u8 type_38[2];
typedef f32 type_39[16];
typedef f32 type_40[6];
typedef f32 type_41[22];
typedef f32 type_42[4];
typedef f32 type_45[22];
typedef f32 type_47[4];
typedef _tagTRCPadInfo type_49[4];
typedef s8 type_51[4];
typedef f32 type_53[4];
typedef u32 type_54[15];
typedef st_SERIAL_PERCID_SIZE type_55[3];
typedef RwTexCoords* type_56[8];
typedef u32 type_58[15];
typedef u8 type_59[2];
typedef xAnimMultiFileEntry type_60[1];
typedef s8 type_61[16];
typedef xVec3 type_62[5];
typedef f32 type_63[15];
typedef u32 type_66[15];
typedef u8 type_67[5];
typedef u8 type_68[3];
typedef f32 type_69[15];
typedef f32 type_70[6];
typedef xVec3 type_71[4];
typedef u32 type_72[15];
typedef f32 type_73[3];
typedef s8 type_74[16];
typedef analog_data type_75[2];
typedef u32 type_76[101];
typedef u16 type_77[3];
typedef f32 type_78[4];
typedef f32 type_80[4];
typedef s8 type_81[16];
typedef xVec4 type_82[12];
typedef f32 type_83[12];
typedef s8 type_85[16];
typedef f32 type_86[12];
typedef u32 type_87[4];
typedef xCollis type_88[18];
typedef f32 type_89[12];
typedef f32 type_90[4];
typedef f32 type_91[12];
typedef s8 type_92[128];
typedef f32 type_93[3];
typedef f32 type_95[12];
typedef u8 type_96[2];
typedef u32 type_97[2];
typedef f32 type_98[6];
typedef f32 type_99[3];
typedef f32 type_100[12];
typedef u8 type_101[2];
typedef f32 type_102[6];
typedef RpLight* type_103[2];
typedef f32 type_104[4];
typedef f32 type_105[3];
typedef u32 type_106[4096];
typedef RwFrame* type_107[2];
typedef f32 type_108[4];
typedef f32 type_109[3];
typedef xModelTag type_110[2];
typedef u8 type_112[2];
typedef f32 type_113[3];
typedef RwTexCoords* type_114[8];
typedef u32 type_115[10];
typedef f32 type_116[4];
typedef s8 type_117[32];
typedef f32 type_119[3];
typedef xEnt* type_120[111];
typedef u8 type_122[3];
typedef f32 type_123[3];
typedef f32 type_124[3];
typedef s8 type_126[32];
typedef f32 type_127[4];
typedef s8 type_128[32];
typedef f32 type_129[4];
typedef f32 type_131[4];
typedef f32 type_132[2];
typedef u8 type_133[52247];
typedef s8 type_134[128];
typedef type_134 type_135[6];
typedef s8 type_136[256];
typedef f32 type_137[4];
typedef f32 type_138[4];
typedef u8 type_139[14];
typedef xModelTag type_140[4];
typedef s8 type_141[256];
typedef _zHipDepend type_142[1];
typedef xModelInstance* type_143[14];
typedef f32 type_144[3];
typedef s8 type_145[32];
typedef u32 type_146[8];
typedef RxCluster type_147[1];
typedef f32 type_148[3];
typedef u32 type_149[72];
typedef f32 type_151[4];
typedef xBase* type_152[72];
typedef u8 type_153[4];
typedef xCutsceneZbuffer type_154[4];

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_46 Conditional;
	type_46 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xVec2
{
	f32 x;
	f32 y;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_79 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_127 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	type_84 BeforeEnter;
	type_65 StateCallback;
	type_94 BeforeAnimMatrices;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_27 update;
	type_27 endUpdate;
	type_33 bupdate;
	type_36 move;
	type_37 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_52 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
		tri_data_0 tri;
	};
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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct xEntBoulderAsset
{
	f32 gravity;
	f32 mass;
	f32 bounce;
	f32 friction;
	f32 statFric;
	f32 maxVel;
	f32 maxAngVel;
	f32 stickiness;
	f32 bounceDamp;
	u32 flags;
	f32 killtimer;
	u32 hitpoints;
	u32 soundID;
	f32 volume;
	f32 minSoundVel;
	f32 maxSoundVel;
	f32 innerRadius;
	f32 outerRadius;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	s32 id;
	_tagTRCState state;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
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
	type_0 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
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

struct xQuat
{
	xVec3 v;
	f32 s;
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
	type_96 PowerUp;
	type_101 InitialPowerUp;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct zAssetPickupTable
{
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
	type_87 pad;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct xEntMotionSplineData
{
	s32 unknown;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_63 startTime;
	type_69 endTime;
	type_72 emitID;
};

struct xShadowSimplePoly
{
	type_18 vert;
	xVec3 norm;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct RpPolygon
{
	u16 matIndex;
	type_23 vertIndex;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_6 eventFunc;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	u32* TimeChunkOffs;
	u32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	u32 Waiting;
	u32 BadReadPause;
	f32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	f32 Time;
	f32 CamTime;
	u32 PlayIndex;
	u32 Ready;
	s32 DataLoading;
	u32 GotData;
	u32 ShutDownWait;
	f32 PlaybackSpeed;
	u32 Opened;
	tag_xFile File;
	s32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	u32 SndStarted;
	u32 SndNumChannel;
	type_1 SndChannelReq;
	type_2 SndAssetID;
	type_8 SndHandle;
	XCSNNosey* cb_nosey;
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
	type_149 baseCount;
	type_152 baseList;
	_zEnv* zen;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	type_59 NumAnims;
	void** RawData;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xCutsceneZbufferHack
{
	s8* name;
	type_154 times;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_31 BilinearLerp;
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_34 tranTable;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct zEntHangable
{
};

struct xIniFile
{
	s32 NumValues;
	s32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_136 name;
	type_141 pathname;
};

struct _tagxPad
{
	type_9 value;
	type_11 last_value;
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
	type_41 up_tmr;
	type_45 down_tmr;
	type_75 analog;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	type_44 resolvID;
	type_57 base2Name;
	type_64 id2Name;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_39 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
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
	type_88 colls;
	type_35 post;
	type_50 depenq;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_43 callback;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_29 Callback;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	type_71 corner;
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
	type_114 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_56 texCoords;
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

struct rxReq
{
};

enum eStartupErrors
{
	eNoError,
	eNoFormat,
	eDamagedCard,
	eWrongDevice,
	eNoCards,
	eCorruptFile,
	eNoController
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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
	type_94 BeforeAnimMatrices;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
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

struct xCoef
{
	type_42 a;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xEntBoulder : xEnt
{
	xEntBoulderAsset* basset;
	xShadowSimpleCache simpShadow_embedded;
	xEntShadow entShadow_embedded;
	xVec3 localCenter;
	xVec3 vel;
	xVec3 rotVec;
	xVec3 force;
	xVec3 instForce;
	f32 angVel;
	f32 timeToLive;
	s32 hitpoints;
	f32 lastRolling;
	u32 rollingID;
	u8 collis_chk;
	u8 collis_pen;
	type_38 pad1;
};

struct xJSPHeader
{
	type_51 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xCutsceneInfo
{
	u32 Magic;
	u32 AssetID;
	u32 NumData;
	u32 NumTime;
	u32 MaxModel;
	u32 MaxBufEven;
	u32 MaxBufOdd;
	u32 HeaderSize;
	u32 VisCount;
	u32 VisSize;
	u32 BreakCount;
	u32 pad;
	type_81 SoundLeft;
	type_85 SoundRight;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_122 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_60 Files;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct xFFX
{
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_130 destroyNotify;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_111 beginUpdate;
	type_118 endUpdate;
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
	type_14 frustumPlanes;
	RwBBox frustumBoundBox;
	type_20 frustumCorners;
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
	type_110 BubbleWandTag;
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
	type_140 HangPawTag;
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
	type_54 Inv_PatsSock;
	type_58 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_66 Inv_LevelPickups;
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
	type_97 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_120 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_139 sb_model_indices;
	type_143 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
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
	type_68 pad;
	void* moprops;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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
	type_7 activateCB;
	type_7 deactivateCB;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_132 radius;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	type_77 vertIndex;
	s16 matIndex;
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

struct anim_coll_data
{
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_102 MoveSpeed;
	type_105 AnimSneak;
	type_109 AnimWalk;
	type_113 AnimRun;
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
	type_153 talk_filter;
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
	type_62 lastRefs;
	type_67 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_83 tmrs;
	type_86 ttms;
	type_89 atms;
	type_91 dtms;
	type_95 vms;
	type_100 dss;
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

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _zHipDepend
{
	u32 sceneID;
	u32 dependID;
};

struct xIniValue
{
	s8* tok;
	s8* val;
};

struct xPlatformAsset
{
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_103 light;
	type_107 light_frame;
	s32 memlvl;
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

struct tag_iFile
{
	u32 flags;
	type_92 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_121 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	type_125 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct xCutsceneData
{
	u32 DataType;
	u32 AssetID;
	u32 ChunkSize;
	union
	{
		u32 FileOffset;
		void* DataPtr;
	};
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntSplineData
{
	s32 unknown;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct _tagiPad
{
	s32 port;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xIniSection
{
	s8* sec;
	s32 first;
	s32 count;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_xFile
{
	type_117 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_112 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
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

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
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
	tri_data_1 tri;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_126 name;
	type_128 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct st_SERIAL_PERCID_SIZE
{
	u32 idtag;
	s32 needsize;
};

struct RpSector
{
	s32 type;
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

struct _class_1
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_19 nodeBody;
	type_21 nodeInit;
	type_26 nodeTerm;
	type_28 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_3 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_137 wt;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_4 pad;
	f32 delay;
	xSpline3* spl;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_135 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_145 sceneStart;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_147 clusters;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_150 sync;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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

struct RwLinkList
{
	RwLLLink link;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

type_61 buffer;
type_74 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_142 sHipDependTable;
type_76 RlePalette;
type_133 RleData;
zGlobals globals;
xGlobals* xglobals;
s32 gBuildNumber;
u32 gEE2BuildNumber;
s32 sShowMenuOnBoot;
type_55 g_xser_sizeinfo;
f32 gSkipTimeCutscene;
f32 gSkipTimeFlythrough;
s32 percentageDone;
type_49 gTrcPad;
s32 bad_card_needed;
type_25 mPad;
type_106 ourGlobals;
u32 gSoak;
u32 gGameSfxReport;
f32 zcam_overrot_max;
f32 zcam_overrot_mid;
f32 zcam_overrot_min;
f32 zcam_wall_pitch;
f32 zcam_highbounce_pitch;
f32 zcam_below_pitch;
f32 zcam_above_pitch;
f32 zcam_far_pitch;
f32 zcam_near_pitch;
f32 zcam_overrot_tmanual;
f32 zcam_overrot_velmax;
f32 zcam_overrot_velmin;
f32 zcam_overrot_tend;
f32 zcam_overrot_tstart;
f32 zcam_overrot_rate;
f32 zcam_wall_h;
f32 zcam_wall_d;
f32 zcam_highbounce_h;
f32 zcam_highbounce_d;
f32 zcam_below_h;
f32 zcam_below_d;
f32 zcam_above_h;
f32 zcam_above_d;
f32 zcam_far_h;
f32 zcam_far_d;
f32 zcam_near_h;
f32 zcam_near_d;
f32 zcam_pad_pitch_scale;
f32 zcam_pad_pyaw_scale;
f32 xcam_collis_stiffness;
f32 xcam_collis_radius;
_tagxPad* gDebugPad;
type_48 zMainMemLvlChkCB;

void zMainLoadFontHIP();
void zMainMemCardSpaceQuery();
void zMainFirstScreen(s32 mode);
void zMainReadINI();
void zMainLoop();
void zMainMemLvlChkCB();
void zMainParseINIGlobals(xIniFile* ini);
void zMainOutputMgrSetup();
void main(s32 argc, s8** argv);

// zMainLoadFontHIP__Fv
// Start address: 0x185960
void zMainLoadFontHIP()
{
	s32 t;
}

// zMainMemCardSpaceQuery__Fv
// Start address: 0x185a70
void zMainMemCardSpaceQuery()
{
	s32 bytesNeeded;
	s32 availOnDisk;
	s32 neededFiles;
	s32 do_chk;
	s32 fullCard;
	u8 formatInProgress;
	u8 formatFailed;
	eStartupErrors startupError;
	s32 status;
}

// zMainFirstScreen__Fi
// Start address: 0x1861f0
void zMainFirstScreen(s32 mode)
{
	RwCamera* cam;
	RwRGBA bg;
	s32 i;
	s32 vbl;
}

// zMainReadINI__Fv
// Start address: 0x186430
void zMainReadINI()
{
	s8* str;
	void* buf;
	u32 size;
	xIniFile* ini;
}

// zMainLoop__Fv
// Start address: 0x186710
void zMainLoop()
{
	s32 t;
	u32* preinit;
	RpAtomic* modl;
	RpAtomic* modl;
	RpAtomic* modl;
	u32 newGameSceneID;
	u32 iconDataSize;
	void* iconData;
	u32 gameSceneID;
	u32 menuModeID;
	s8 @5697;
	type_15 preinit_bubble_matfx;
	type_146 preinit_shiny_models;
	type_115 preinit_ADC_models;
}

// zMainMemLvlChkCB__Fv
// Start address: 0x187a40
void zMainMemLvlChkCB()
{
}

// zMainParseINIGlobals__FP8xIniFile
// Start address: 0x187a50
void zMainParseINIGlobals(xIniFile* ini)
{
	u32 use_degrees;
	type_131 fbuf;
	type_108 fbuf;
	type_80 fbuf;
	type_53 fbuf;
	type_24 fbuf;
	type_124 fbuf;
	type_99 fbuf;
	type_73 fbuf;
	type_40 fbuf;
	type_151 fbuf;
	type_129 fbuf;
	type_104 fbuf;
	type_78 fbuf;
	type_47 fbuf;
	type_144 fbuf;
	type_119 fbuf;
	type_93 fbuf;
	type_70 fbuf;
	type_30 fbuf;
	type_5 fbuf;
	type_138 fbuf;
	type_116 fbuf;
	type_90 fbuf;
	type_12 fbuf;
	type_148 fbuf;
	type_123 fbuf;
	type_98 fbuf;
}

// zMainOutputMgrSetup__Fv
// Start address: 0x189c20
void zMainOutputMgrSetup()
{
}

// 
// Start address: 0x189c50
void main(s32 argc, s8** argv)
{
	u32 options;
	s32 i;
}

