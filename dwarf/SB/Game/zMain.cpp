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

typedef uint32(*type_0)(void*, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_6)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_7)(void*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_21)(RxNodeDefinition*);
typedef void(*type_26)(RxNodeDefinition*);
typedef void(*type_27)(xEnt*, xScene*, float32);
typedef int32(*type_28)(RxPipelineNode*);
typedef uint32(*type_29)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef void(*type_35)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_36)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_37)(xEnt*);
typedef RpClump*(*type_43)(RpClump*, void*);
typedef xBase*(*type_44)(uint32);
typedef uint32(*type_46)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_48)();
typedef uint32(*type_50)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_52)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_57)(xBase*);
typedef int8*(*type_64)(uint32);
typedef void(*type_65)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_79)(RpAtomic*);
typedef void(*type_84)(xAnimPlay*, xAnimState*);
typedef void(*type_94)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RwCamera*(*type_111)(RwCamera*);
typedef RwCamera*(*type_118)(RwCamera*);
typedef void(*type_121)(xMemPool*, void*);
typedef RpWorldSector*(*type_125)(RpWorldSector*);
typedef void(*type_130)(RwResEntry*);
typedef RwObjectHasFrame*(*type_150)(RwObjectHasFrame*);

typedef uint32 type_1[2];
typedef uint32 type_2[2];
typedef uint8 type_4[2];
typedef float32 type_5[4];
typedef uint32 type_8[2];
typedef uint8 type_9[22];
typedef int8 type_10[11];
typedef uint8 type_11[22];
typedef float32 type_12[3];
typedef int8 type_13[64];
typedef RwFrustumPlane type_14[6];
typedef uint32 type_15[6];
typedef int8 type_17[64];
typedef xVec3 type_18[3];
typedef RwV3d type_20[8];
typedef int8 type_22[64];
typedef uint16 type_23[3];
typedef float32 type_24[4];
typedef _tagxPad type_25[4];
typedef float32 type_30[4];
typedef float32 type_31[2];
typedef xVec3 type_34[60];
typedef uint8 type_38[2];
typedef float32 type_39[16];
typedef float32 type_40[6];
typedef float32 type_41[22];
typedef float32 type_42[4];
typedef float32 type_45[22];
typedef float32 type_47[4];
typedef _tagTRCPadInfo type_49[4];
typedef int8 type_51[4];
typedef float32 type_53[4];
typedef uint32 type_54[15];
typedef st_SERIAL_PERCID_SIZE type_55[3];
typedef RwTexCoords* type_56[8];
typedef uint32 type_58[15];
typedef uint8 type_59[2];
typedef xAnimMultiFileEntry type_60[1];
typedef int8 type_61[16];
typedef xVec3 type_62[5];
typedef float32 type_63[15];
typedef uint32 type_66[15];
typedef uint8 type_67[5];
typedef uint8 type_68[3];
typedef float32 type_69[15];
typedef float32 type_70[6];
typedef xVec3 type_71[4];
typedef uint32 type_72[15];
typedef float32 type_73[3];
typedef int8 type_74[16];
typedef analog_data type_75[2];
typedef uint32 type_76[101];
typedef uint16 type_77[3];
typedef float32 type_78[4];
typedef float32 type_80[4];
typedef int8 type_81[16];
typedef xVec4 type_82[12];
typedef float32 type_83[12];
typedef int8 type_85[16];
typedef float32 type_86[12];
typedef uint32 type_87[4];
typedef xCollis type_88[18];
typedef float32 type_89[12];
typedef float32 type_90[4];
typedef float32 type_91[12];
typedef int8 type_92[128];
typedef float32 type_93[3];
typedef float32 type_95[12];
typedef uint8 type_96[2];
typedef uint32 type_97[2];
typedef float32 type_98[6];
typedef float32 type_99[3];
typedef float32 type_100[12];
typedef uint8 type_101[2];
typedef float32 type_102[6];
typedef RpLight* type_103[2];
typedef float32 type_104[4];
typedef float32 type_105[3];
typedef uint32 type_106[4096];
typedef RwFrame* type_107[2];
typedef float32 type_108[4];
typedef float32 type_109[3];
typedef xModelTag type_110[2];
typedef uint8 type_112[2];
typedef float32 type_113[3];
typedef RwTexCoords* type_114[8];
typedef uint32 type_115[10];
typedef float32 type_116[4];
typedef int8 type_117[32];
typedef float32 type_119[3];
typedef xEnt* type_120[111];
typedef uint8 type_122[3];
typedef float32 type_123[3];
typedef float32 type_124[3];
typedef int8 type_126[32];
typedef float32 type_127[4];
typedef int8 type_128[32];
typedef float32 type_129[4];
typedef float32 type_131[4];
typedef float32 type_132[2];
typedef uint8 type_133[52247];
typedef int8 type_134[128];
typedef type_134 type_135[6];
typedef int8 type_136[256];
typedef float32 type_137[4];
typedef float32 type_138[4];
typedef uint8 type_139[14];
typedef xModelTag type_140[4];
typedef int8 type_141[256];
typedef _zHipDepend type_142[1];
typedef xModelInstance* type_143[14];
typedef float32 type_144[3];
typedef int8 type_145[32];
typedef uint32 type_146[8];
typedef RxCluster type_147[1];
typedef float32 type_148[3];
typedef uint32 type_149[72];
typedef float32 type_151[4];
typedef xBase* type_152[72];
typedef uint8 type_153[4];
typedef xCutsceneZbuffer type_154[4];

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_46 Conditional;
	type_46 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xVec2
{
	float32 x;
	float32 y;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_127 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
		tri_data_0 tri;
	};
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xEntBoulderAsset
{
	float32 gravity;
	float32 mass;
	float32 bounce;
	float32 friction;
	float32 statFric;
	float32 maxVel;
	float32 maxAngVel;
	float32 stickiness;
	float32 bounceDamp;
	uint32 flags;
	float32 killtimer;
	uint32 hitpoints;
	uint32 soundID;
	float32 volume;
	float32 minSoundVel;
	float32 maxSoundVel;
	float32 innerRadius;
	float32 outerRadius;
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
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
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
	type_0 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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
	type_96 PowerUp;
	type_101 InitialPowerUp;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct zAssetPickupTable
{
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
	type_87 pad;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
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
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct RpPolygon
{
	uint16 matIndex;
	type_23 vertIndex;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_6 eventFunc;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	uint32 BadReadPause;
	float32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	int32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	type_1 SndChannelReq;
	type_2 SndAssetID;
	type_8 SndHandle;
	XCSNNosey* cb_nosey;
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
	type_149 baseCount;
	type_152 baseList;
	_zEnv* zen;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	type_59 NumAnims;
	void** RawData;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xCutsceneZbufferHack
{
	int8* name;
	type_154 times;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_31 BilinearLerp;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_34 tranTable;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zEntHangable
{
};

struct xIniFile
{
	int32 NumValues;
	int32 NumSections;
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
	type_41 up_tmr;
	type_45 down_tmr;
	type_75 analog;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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
	uint32 type;
	RwRGBAReal color;
	type_39 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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
	type_88 colls;
	type_35 post;
	type_50 depenq;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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
	float32 x;
	float32 y;
	float32 z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_29 Callback;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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
	type_71 corner;
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
	type_114 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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
	type_94 BeforeAnimMatrices;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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
	float32 angVel;
	float32 timeToLive;
	int32 hitpoints;
	float32 lastRolling;
	uint32 rollingID;
	uint8 collis_chk;
	uint8 collis_pen;
	type_38 pad1;
};

struct xJSPHeader
{
	type_51 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	type_81 SoundLeft;
	type_85 SoundRight;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
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
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_60 Files;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
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

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_130 destroyNotify;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
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
	type_110 BubbleWandTag;
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
	type_140 HangPawTag;
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
	type_54 Inv_PatsSock;
	type_58 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_66 Inv_LevelPickups;
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
	type_97 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_120 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_139 sb_model_indices;
	type_143 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	type_7 activateCB;
	type_7 deactivateCB;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_132 radius;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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
	float32 a;
	float32 b;
	float32 p;
	float32 w;
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
	int16 matIndex;
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

struct anim_coll_data
{
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_102 MoveSpeed;
	type_105 AnimSneak;
	type_109 AnimWalk;
	type_113 AnimRun;
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
	type_153 talk_filter;
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
	type_62 lastRefs;
	type_67 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlatFMRunTime
{
	uint32 flags;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _zHipDepend
{
	uint32 sceneID;
	uint32 dependID;
};

struct xIniValue
{
	int8* tok;
	int8* val;
};

struct xPlatformAsset
{
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_103 light;
	type_107 light_frame;
	int32 memlvl;
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

struct tag_iFile
{
	uint32 flags;
	type_92 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_121 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	float32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntSplineData
{
	int32 unknown;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct _tagiPad
{
	int32 port;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
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
	float32 Time;
	int32 Index;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_112 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
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
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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
	tri_data_1 tri;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_126 name;
	type_128 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct st_SERIAL_PERCID_SIZE
{
	uint32 idtag;
	int32 needsize;
};

struct RpSector
{
	int32 type;
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
	uint32 matidx;
	type_137 wt;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_4 pad;
	float32 delay;
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
	int32 profile;
	type_135 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_145 sceneStart;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_147 clusters;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	float32 yaw;
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
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RwLinkList
{
	RwLLLink link;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwV2d
{
	float32 x;
	float32 y;
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
int32 gBuildNumber;
uint32 gEE2BuildNumber;
int32 sShowMenuOnBoot;
type_55 g_xser_sizeinfo;
float32 gSkipTimeCutscene;
float32 gSkipTimeFlythrough;
int32 percentageDone;
type_49 gTrcPad;
int32 bad_card_needed;
type_25 mPad;
type_106 ourGlobals;
uint32 gSoak;
uint32 gGameSfxReport;
float32 zcam_overrot_max;
float32 zcam_overrot_mid;
float32 zcam_overrot_min;
float32 zcam_wall_pitch;
float32 zcam_highbounce_pitch;
float32 zcam_below_pitch;
float32 zcam_above_pitch;
float32 zcam_far_pitch;
float32 zcam_near_pitch;
float32 zcam_overrot_tmanual;
float32 zcam_overrot_velmax;
float32 zcam_overrot_velmin;
float32 zcam_overrot_tend;
float32 zcam_overrot_tstart;
float32 zcam_overrot_rate;
float32 zcam_wall_h;
float32 zcam_wall_d;
float32 zcam_highbounce_h;
float32 zcam_highbounce_d;
float32 zcam_below_h;
float32 zcam_below_d;
float32 zcam_above_h;
float32 zcam_above_d;
float32 zcam_far_h;
float32 zcam_far_d;
float32 zcam_near_h;
float32 zcam_near_d;
float32 zcam_pad_pitch_scale;
float32 zcam_pad_pyaw_scale;
float32 xcam_collis_stiffness;
float32 xcam_collis_radius;
_tagxPad* gDebugPad;
type_48 zMainMemLvlChkCB;

void zMainLoadFontHIP();
void zMainMemCardSpaceQuery();
void zMainFirstScreen(int32 mode);
void zMainReadINI();
void zMainLoop();
void zMainMemLvlChkCB();
void zMainParseINIGlobals(xIniFile* ini);
void zMainOutputMgrSetup();
void main(int32 argc, int8** argv);

// zMainLoadFontHIP__Fv
// Start address: 0x185960
void zMainLoadFontHIP()
{
	long32 t;
}

// zMainMemCardSpaceQuery__Fv
// Start address: 0x185a70
void zMainMemCardSpaceQuery()
{
	int32 bytesNeeded;
	int32 availOnDisk;
	int32 neededFiles;
	int32 do_chk;
	int32 fullCard;
	uint8 formatInProgress;
	uint8 formatFailed;
	eStartupErrors startupError;
	int32 status;
}

// zMainFirstScreen__Fi
// Start address: 0x1861f0
void zMainFirstScreen(int32 mode)
{
	RwCamera* cam;
	RwRGBA bg;
	int32 i;
	int32 vbl;
}

// zMainReadINI__Fv
// Start address: 0x186430
void zMainReadINI()
{
	int8* str;
	void* buf;
	uint32 size;
	xIniFile* ini;
}

// zMainLoop__Fv
// Start address: 0x186710
void zMainLoop()
{
	long32 t;
	uint32* preinit;
	RpAtomic* modl;
	RpAtomic* modl;
	RpAtomic* modl;
	uint32 newGameSceneID;
	uint32 iconDataSize;
	void* iconData;
	uint32 gameSceneID;
	uint32 menuModeID;
	int8 @5697;
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
	uint32 use_degrees;
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
void main(int32 argc, int8** argv)
{
	uint32 options;
	int32 i;
}

