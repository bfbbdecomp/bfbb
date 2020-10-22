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
typedef struct _class_2;
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
typedef int8 type_135[128][6];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	float32 param[4];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32(*cb)(void*, void*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	uint32 pad[4];
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
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	uint16 vertIndex[3];
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
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	uint8 NumAnims[2];
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
	xCutsceneZbuffer times[4];
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
	int8 name[256];
	int8 pathname[256];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	float32 matrix[16];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	RpClump*(*callback)(RpClump*, void*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	xVec3 corner[4];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	float32 a[4];
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
	uint8 pad1[2];
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
	int8 SoundLeft[16];
	int8 SoundRight[16];
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	xVec4 frustplane[12];
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
	void(*destroyNotify)(RwResEntry*);
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
	uint8 pad[3];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	float32 radius[2];
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
	uint16 vertIndex[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	int8 path[128];
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
	void(*InitCB)(xMemPool*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	int8 relname[32];
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
	uint8 pad[2];
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
	int8 name[32];
	int8 mask[32];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	float32 wt[4];
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct RwV2d
{
	float32 x;
	float32 y;
};

int8 buffer[16];
int8 buffer[16];
basic_rect screen_bounds;
basic_rect default_adjust;
_zHipDepend sHipDependTable[1];
uint32 RlePalette[101];
uint8 RleData[52247];
zGlobals globals;
xGlobals* xglobals;
int32 gBuildNumber;
uint32 gEE2BuildNumber;
int32 sShowMenuOnBoot;
st_SERIAL_PERCID_SIZE g_xser_sizeinfo[3];
float32 gSkipTimeCutscene;
float32 gSkipTimeFlythrough;
int32 percentageDone;
_tagTRCPadInfo gTrcPad[4];
int32 bad_card_needed;
_tagxPad mPad[4];
uint32 ourGlobals[4096];
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
void(*zMainMemLvlChkCB)();

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
	// Line 2860, Address: 0x185960, Func Offset: 0
	// Line 2869, Address: 0x185968, Func Offset: 0x8
	// Line 2875, Address: 0x185970, Func Offset: 0x10
	// Line 2876, Address: 0x18597c, Func Offset: 0x1c
	// Line 2880, Address: 0x185994, Func Offset: 0x34
	// Line 2884, Address: 0x1859a8, Func Offset: 0x48
	// Line 2885, Address: 0x1859b4, Func Offset: 0x54
	// Line 2889, Address: 0x1859cc, Func Offset: 0x6c
	// Line 2891, Address: 0x1859dc, Func Offset: 0x7c
	// Line 2892, Address: 0x1859e8, Func Offset: 0x88
	// Line 2898, Address: 0x185a00, Func Offset: 0xa0
	// Line 2900, Address: 0x185a24, Func Offset: 0xc4
	// Line 2902, Address: 0x185a30, Func Offset: 0xd0
	// Line 2903, Address: 0x185a3c, Func Offset: 0xdc
	// Line 2906, Address: 0x185a54, Func Offset: 0xf4
	// Func End, Address: 0x185a64, Func Offset: 0x104
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
	// Line 2362, Address: 0x185a70, Func Offset: 0
	// Line 2371, Address: 0x185a8c, Func Offset: 0x1c
	// Line 2362, Address: 0x185a90, Func Offset: 0x20
	// Line 2372, Address: 0x185a94, Func Offset: 0x24
	// Line 2362, Address: 0x185a98, Func Offset: 0x28
	// Line 2374, Address: 0x185a9c, Func Offset: 0x2c
	// Line 2362, Address: 0x185aa0, Func Offset: 0x30
	// Line 2368, Address: 0x185aa8, Func Offset: 0x38
	// Line 2365, Address: 0x185aac, Func Offset: 0x3c
	// Line 2366, Address: 0x185ab0, Func Offset: 0x40
	// Line 2369, Address: 0x185ab4, Func Offset: 0x44
	// Line 2367, Address: 0x185ab8, Func Offset: 0x48
	// Line 2389, Address: 0x185abc, Func Offset: 0x4c
	// Line 2394, Address: 0x185ac0, Func Offset: 0x50
	// Line 2396, Address: 0x185ad0, Func Offset: 0x60
	// Line 2404, Address: 0x185ae0, Func Offset: 0x70
	// Line 2405, Address: 0x185af0, Func Offset: 0x80
	// Line 2407, Address: 0x185b00, Func Offset: 0x90
	// Line 2408, Address: 0x185b10, Func Offset: 0xa0
	// Line 2410, Address: 0x185b20, Func Offset: 0xb0
	// Line 2415, Address: 0x185b2c, Func Offset: 0xbc
	// Line 2414, Address: 0x185b34, Func Offset: 0xc4
	// Line 2415, Address: 0x185b38, Func Offset: 0xc8
	// Line 2416, Address: 0x185b40, Func Offset: 0xd0
	// Line 2415, Address: 0x185b44, Func Offset: 0xd4
	// Line 2417, Address: 0x185b5c, Func Offset: 0xec
	// Line 2421, Address: 0x185b68, Func Offset: 0xf8
	// Line 2423, Address: 0x185b70, Func Offset: 0x100
	// Line 2425, Address: 0x185b98, Func Offset: 0x128
	// Line 2431, Address: 0x185b9c, Func Offset: 0x12c
	// Line 2434, Address: 0x185ba8, Func Offset: 0x138
	// Line 2438, Address: 0x185bc8, Func Offset: 0x158
	// Line 2434, Address: 0x185bcc, Func Offset: 0x15c
	// Line 2438, Address: 0x185bd0, Func Offset: 0x160
	// Line 2439, Address: 0x185be8, Func Offset: 0x178
	// Line 2545, Address: 0x185bf8, Func Offset: 0x188
	// Line 2560, Address: 0x185c08, Func Offset: 0x198
	// Line 2562, Address: 0x185c20, Func Offset: 0x1b0
	// Line 2564, Address: 0x185c30, Func Offset: 0x1c0
	// Line 2565, Address: 0x185cc0, Func Offset: 0x250
	// Line 2568, Address: 0x185cc8, Func Offset: 0x258
	// Line 2570, Address: 0x185cd0, Func Offset: 0x260
	// Line 2573, Address: 0x185cf0, Func Offset: 0x280
	// Line 2575, Address: 0x185cf8, Func Offset: 0x288
	// Line 2577, Address: 0x185d74, Func Offset: 0x304
	// Line 2579, Address: 0x185d7c, Func Offset: 0x30c
	// Line 2580, Address: 0x185d80, Func Offset: 0x310
	// Line 2581, Address: 0x185e00, Func Offset: 0x390
	// Line 2583, Address: 0x185e08, Func Offset: 0x398
	// Line 2584, Address: 0x185e88, Func Offset: 0x418
	// Line 2587, Address: 0x185e90, Func Offset: 0x420
	// Line 2588, Address: 0x185f10, Func Offset: 0x4a0
	// Line 2591, Address: 0x185f18, Func Offset: 0x4a8
	// Line 2592, Address: 0x185f98, Func Offset: 0x528
	// Line 2598, Address: 0x185fa0, Func Offset: 0x530
	// Line 2612, Address: 0x186020, Func Offset: 0x5b0
	// Line 2614, Address: 0x186030, Func Offset: 0x5c0
	// Line 2615, Address: 0x186044, Func Offset: 0x5d4
	// Line 2614, Address: 0x186048, Func Offset: 0x5d8
	// Line 2619, Address: 0x186050, Func Offset: 0x5e0
	// Line 2625, Address: 0x18606c, Func Offset: 0x5fc
	// Line 2626, Address: 0x186070, Func Offset: 0x600
	// Line 2627, Address: 0x186074, Func Offset: 0x604
	// Line 2628, Address: 0x186078, Func Offset: 0x608
	// Line 2630, Address: 0x18607c, Func Offset: 0x60c
	// Line 2631, Address: 0x1860f8, Func Offset: 0x688
	// Line 2634, Address: 0x186100, Func Offset: 0x690
	// Line 2637, Address: 0x18611c, Func Offset: 0x6ac
	// Line 2798, Address: 0x186124, Func Offset: 0x6b4
	// Line 2803, Address: 0x186130, Func Offset: 0x6c0
	// Line 2815, Address: 0x1861b4, Func Offset: 0x744
	// Func End, Address: 0x1861e4, Func Offset: 0x774
}

// zMainFirstScreen__Fi
// Start address: 0x1861f0
void zMainFirstScreen(int32 mode)
{
	RwCamera* cam;
	RwRGBA bg;
	int32 i;
	int32 vbl;
	// Line 2308, Address: 0x1861f0, Func Offset: 0
	// Line 2311, Address: 0x1861f4, Func Offset: 0x4
	// Line 2308, Address: 0x1861f8, Func Offset: 0x8
	// Line 2311, Address: 0x1861fc, Func Offset: 0xc
	// Line 2308, Address: 0x186200, Func Offset: 0x10
	// Line 2311, Address: 0x186214, Func Offset: 0x24
	// Line 2312, Address: 0x186224, Func Offset: 0x34
	// Line 2314, Address: 0x186248, Func Offset: 0x58
	// Line 2317, Address: 0x186250, Func Offset: 0x60
	// Line 2318, Address: 0x186260, Func Offset: 0x70
	// Line 2321, Address: 0x186268, Func Offset: 0x78
	// Line 2323, Address: 0x186270, Func Offset: 0x80
	// Line 2324, Address: 0x1863ac, Func Offset: 0x1bc
	// Line 2326, Address: 0x1863b0, Func Offset: 0x1c0
	// Line 2327, Address: 0x1863b8, Func Offset: 0x1c8
	// Line 2329, Address: 0x1863c8, Func Offset: 0x1d8
	// Line 2333, Address: 0x1863d8, Func Offset: 0x1e8
	// Line 2335, Address: 0x1863e8, Func Offset: 0x1f8
	// Line 2336, Address: 0x1863f0, Func Offset: 0x200
	// Line 2338, Address: 0x186408, Func Offset: 0x218
	// Line 2339, Address: 0x186410, Func Offset: 0x220
	// Func End, Address: 0x186430, Func Offset: 0x240
}

// zMainReadINI__Fv
// Start address: 0x186430
void zMainReadINI()
{
	int8* str;
	void* buf;
	uint32 size;
	xIniFile* ini;
	// Line 2036, Address: 0x186430, Func Offset: 0
	// Line 2053, Address: 0x186434, Func Offset: 0x4
	// Line 2036, Address: 0x186438, Func Offset: 0x8
	// Line 2053, Address: 0x18643c, Func Offset: 0xc
	// Line 2036, Address: 0x186440, Func Offset: 0x10
	// Line 2053, Address: 0x186444, Func Offset: 0x14
	// Line 2036, Address: 0x186448, Func Offset: 0x18
	// Line 2053, Address: 0x18644c, Func Offset: 0x1c
	// Line 2056, Address: 0x18645c, Func Offset: 0x2c
	// Line 2057, Address: 0x186464, Func Offset: 0x34
	// Line 2060, Address: 0x186474, Func Offset: 0x44
	// Line 2061, Address: 0x186490, Func Offset: 0x60
	// Line 2064, Address: 0x186498, Func Offset: 0x68
	// Line 2113, Address: 0x1864b4, Func Offset: 0x84
	// Line 2114, Address: 0x1864c8, Func Offset: 0x98
	// Line 2116, Address: 0x1864dc, Func Offset: 0xac
	// Line 2119, Address: 0x1864e8, Func Offset: 0xb8
	// Line 2121, Address: 0x186500, Func Offset: 0xd0
	// Line 2122, Address: 0x186504, Func Offset: 0xd4
	// Line 2121, Address: 0x186510, Func Offset: 0xe0
	// Line 2122, Address: 0x186514, Func Offset: 0xe4
	// Line 2131, Address: 0x18651c, Func Offset: 0xec
	// Line 2136, Address: 0x186520, Func Offset: 0xf0
	// Line 2159, Address: 0x186538, Func Offset: 0x108
	// Line 2136, Address: 0x186540, Func Offset: 0x110
	// Line 2159, Address: 0x186544, Func Offset: 0x114
	// Line 2160, Address: 0x186568, Func Offset: 0x138
	// Line 2159, Address: 0x186570, Func Offset: 0x140
	// Line 2160, Address: 0x186574, Func Offset: 0x144
	// Line 2161, Address: 0x18659c, Func Offset: 0x16c
	// Line 2160, Address: 0x1865a4, Func Offset: 0x174
	// Line 2161, Address: 0x1865a8, Func Offset: 0x178
	// Line 2162, Address: 0x1865d0, Func Offset: 0x1a0
	// Line 2161, Address: 0x1865d8, Func Offset: 0x1a8
	// Line 2162, Address: 0x1865dc, Func Offset: 0x1ac
	// Line 2163, Address: 0x186604, Func Offset: 0x1d4
	// Line 2162, Address: 0x18660c, Func Offset: 0x1dc
	// Line 2163, Address: 0x186610, Func Offset: 0x1e0
	// Line 2164, Address: 0x186638, Func Offset: 0x208
	// Line 2163, Address: 0x186640, Func Offset: 0x210
	// Line 2164, Address: 0x186644, Func Offset: 0x214
	// Line 2167, Address: 0x18666c, Func Offset: 0x23c
	// Line 2164, Address: 0x186670, Func Offset: 0x240
	// Line 2167, Address: 0x186674, Func Offset: 0x244
	// Line 2170, Address: 0x18668c, Func Offset: 0x25c
	// Line 2167, Address: 0x186690, Func Offset: 0x260
	// Line 2170, Address: 0x186694, Func Offset: 0x264
	// Line 2173, Address: 0x1866ac, Func Offset: 0x27c
	// Line 2176, Address: 0x1866b8, Func Offset: 0x288
	// Line 2179, Address: 0x1866c0, Func Offset: 0x290
	// Line 2194, Address: 0x1866c8, Func Offset: 0x298
	// Line 2204, Address: 0x1866e0, Func Offset: 0x2b0
	// Line 2208, Address: 0x1866f0, Func Offset: 0x2c0
	// Func End, Address: 0x186708, Func Offset: 0x2d8
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
	uint32 preinit_bubble_matfx[6];
	uint32 preinit_shiny_models[8];
	uint32 preinit_ADC_models[10];
	// Line 1543, Address: 0x186710, Func Offset: 0
	// Line 1565, Address: 0x18671c, Func Offset: 0xc
	// Line 1567, Address: 0x186868, Func Offset: 0x158
	// Line 1573, Address: 0x186870, Func Offset: 0x160
	// Line 1574, Address: 0x18687c, Func Offset: 0x16c
	// Line 1578, Address: 0x186894, Func Offset: 0x184
	// Line 1581, Address: 0x1868a8, Func Offset: 0x198
	// Line 1582, Address: 0x1868b4, Func Offset: 0x1a4
	// Line 1586, Address: 0x1868cc, Func Offset: 0x1bc
	// Line 1588, Address: 0x1868dc, Func Offset: 0x1cc
	// Line 1589, Address: 0x1868e8, Func Offset: 0x1d8
	// Line 1599, Address: 0x186900, Func Offset: 0x1f0
	// Line 1603, Address: 0x186924, Func Offset: 0x214
	// Line 1605, Address: 0x186930, Func Offset: 0x220
	// Line 1606, Address: 0x18693c, Func Offset: 0x22c
	// Line 1610, Address: 0x186954, Func Offset: 0x244
	// Line 1625, Address: 0x186aa0, Func Offset: 0x390
	// Line 1628, Address: 0x186ab4, Func Offset: 0x3a4
	// Line 1632, Address: 0x186ac4, Func Offset: 0x3b4
	// Line 1635, Address: 0x186aec, Func Offset: 0x3dc
	// Line 1637, Address: 0x186af8, Func Offset: 0x3e8
	// Line 1639, Address: 0x186c48, Func Offset: 0x538
	// Line 1645, Address: 0x186c50, Func Offset: 0x540
	// Line 1648, Address: 0x186c58, Func Offset: 0x548
	// Line 1649, Address: 0x186c70, Func Offset: 0x560
	// Line 1658, Address: 0x186c78, Func Offset: 0x568
	// Line 1660, Address: 0x186c80, Func Offset: 0x570
	// Line 1661, Address: 0x186c8c, Func Offset: 0x57c
	// Line 1665, Address: 0x186ca4, Func Offset: 0x594
	// Line 1669, Address: 0x186cb8, Func Offset: 0x5a8
	// Line 1670, Address: 0x186cc4, Func Offset: 0x5b4
	// Line 1674, Address: 0x186cdc, Func Offset: 0x5cc
	// Line 1676, Address: 0x186cec, Func Offset: 0x5dc
	// Line 1677, Address: 0x186cf8, Func Offset: 0x5e8
	// Line 1687, Address: 0x186d10, Func Offset: 0x600
	// Line 1698, Address: 0x186d34, Func Offset: 0x624
	// Line 1700, Address: 0x186d40, Func Offset: 0x630
	// Line 1702, Address: 0x186e90, Func Offset: 0x780
	// Line 1703, Address: 0x186e9c, Func Offset: 0x78c
	// Line 1710, Address: 0x186eb4, Func Offset: 0x7a4
	// Line 1713, Address: 0x186ebc, Func Offset: 0x7ac
	// Line 1715, Address: 0x186ec8, Func Offset: 0x7b8
	// Line 1719, Address: 0x186ee0, Func Offset: 0x7d0
	// Line 1728, Address: 0x186ef4, Func Offset: 0x7e4
	// Line 1730, Address: 0x186f00, Func Offset: 0x7f0
	// Line 1734, Address: 0x186f18, Func Offset: 0x808
	// Line 1736, Address: 0x186f28, Func Offset: 0x818
	// Line 1737, Address: 0x186f34, Func Offset: 0x824
	// Line 1745, Address: 0x186f4c, Func Offset: 0x83c
	// Line 1754, Address: 0x186f74, Func Offset: 0x864
	// Line 1756, Address: 0x186f80, Func Offset: 0x870
	// Line 1757, Address: 0x1870d0, Func Offset: 0x9c0
	// Line 1759, Address: 0x1870dc, Func Offset: 0x9cc
	// Line 1772, Address: 0x1870f4, Func Offset: 0x9e4
	// Line 1776, Address: 0x1870fc, Func Offset: 0x9ec
	// Line 1777, Address: 0x187108, Func Offset: 0x9f8
	// Line 1778, Address: 0x187114, Func Offset: 0xa04
	// Line 1800, Address: 0x187120, Func Offset: 0xa10
	// Line 1801, Address: 0x18712c, Func Offset: 0xa1c
	// Line 1802, Address: 0x187138, Func Offset: 0xa28
	// Line 1803, Address: 0x187140, Func Offset: 0xa30
	// Line 1804, Address: 0x187150, Func Offset: 0xa40
	// Line 1805, Address: 0x187158, Func Offset: 0xa48
	// Line 1816, Address: 0x187160, Func Offset: 0xa50
	// Line 1817, Address: 0x18716c, Func Offset: 0xa5c
	// Line 1818, Address: 0x187178, Func Offset: 0xa68
	// Line 1819, Address: 0x187180, Func Offset: 0xa70
	// Line 1820, Address: 0x187190, Func Offset: 0xa80
	// Line 1821, Address: 0x187198, Func Offset: 0xa88
	// Line 1834, Address: 0x1871a0, Func Offset: 0xa90
	// Line 1835, Address: 0x1871ac, Func Offset: 0xa9c
	// Line 1836, Address: 0x1871b8, Func Offset: 0xaa8
	// Line 1837, Address: 0x1871c0, Func Offset: 0xab0
	// Line 1838, Address: 0x1871d0, Func Offset: 0xac0
	// Line 1839, Address: 0x1871d8, Func Offset: 0xac8
	// Line 1846, Address: 0x1871e0, Func Offset: 0xad0
	// Line 1856, Address: 0x187234, Func Offset: 0xb24
	// Line 1862, Address: 0x187240, Func Offset: 0xb30
	// Line 1873, Address: 0x187248, Func Offset: 0xb38
	// Line 1879, Address: 0x187398, Func Offset: 0xc88
	// Line 1880, Address: 0x1873b4, Func Offset: 0xca4
	// Line 1881, Address: 0x1873bc, Func Offset: 0xcac
	// Line 1889, Address: 0x1873c8, Func Offset: 0xcb8
	// Line 1902, Address: 0x1873d0, Func Offset: 0xcc0
	// Line 1924, Address: 0x1873d8, Func Offset: 0xcc8
	// Line 1927, Address: 0x187530, Func Offset: 0xe20
	// Line 1929, Address: 0x187538, Func Offset: 0xe28
	// Line 1931, Address: 0x187540, Func Offset: 0xe30
	// Line 1932, Address: 0x187690, Func Offset: 0xf80
	// Line 1935, Address: 0x18769c, Func Offset: 0xf8c
	// Line 1936, Address: 0x1876a4, Func Offset: 0xf94
	// Line 1937, Address: 0x1877f0, Func Offset: 0x10e0
	// Line 1938, Address: 0x187940, Func Offset: 0x1230
	// Line 1945, Address: 0x187948, Func Offset: 0x1238
	// Line 1948, Address: 0x187960, Func Offset: 0x1250
	// Line 1949, Address: 0x187968, Func Offset: 0x1258
	// Line 1950, Address: 0x187970, Func Offset: 0x1260
	// Line 1953, Address: 0x187978, Func Offset: 0x1268
	// Line 1954, Address: 0x18797c, Func Offset: 0x126c
	// Line 1953, Address: 0x187980, Func Offset: 0x1270
	// Line 1963, Address: 0x187984, Func Offset: 0x1274
	// Line 1964, Address: 0x187990, Func Offset: 0x1280
	// Line 1967, Address: 0x187998, Func Offset: 0x1288
	// Line 1970, Address: 0x1879a0, Func Offset: 0x1290
	// Line 1971, Address: 0x1879a8, Func Offset: 0x1298
	// Line 1974, Address: 0x1879b4, Func Offset: 0x12a4
	// Line 1978, Address: 0x1879ec, Func Offset: 0x12dc
	// Line 1991, Address: 0x1879f8, Func Offset: 0x12e8
	// Line 1993, Address: 0x187a04, Func Offset: 0x12f4
	// Line 1996, Address: 0x187a08, Func Offset: 0x12f8
	// Line 1998, Address: 0x187a10, Func Offset: 0x1300
	// Line 2006, Address: 0x187a18, Func Offset: 0x1308
	// Line 2008, Address: 0x187a20, Func Offset: 0x1310
	// Line 2009, Address: 0x187a28, Func Offset: 0x1318
	// Line 2011, Address: 0x187a30, Func Offset: 0x1320
	// Func End, Address: 0x187a38, Func Offset: 0x1328
}

// zMainMemLvlChkCB__Fv
// Start address: 0x187a40
void zMainMemLvlChkCB()
{
	// Line 1469, Address: 0x187a40, Func Offset: 0
	// Func End, Address: 0x187a48, Func Offset: 0x8
}

// zMainParseINIGlobals__FP8xIniFile
// Start address: 0x187a50
void zMainParseINIGlobals(xIniFile* ini)
{
	uint32 use_degrees;
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[6];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[6];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[4];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[3];
	float32 fbuf[6];
	// Line 804, Address: 0x187a50, Func Offset: 0
	// Line 815, Address: 0x187a54, Func Offset: 0x4
	// Line 804, Address: 0x187a58, Func Offset: 0x8
	// Line 815, Address: 0x187a5c, Func Offset: 0xc
	// Line 804, Address: 0x187a60, Func Offset: 0x10
	// Line 815, Address: 0x187a64, Func Offset: 0x14
	// Line 816, Address: 0x187a78, Func Offset: 0x28
	// Line 815, Address: 0x187a7c, Func Offset: 0x2c
	// Line 816, Address: 0x187a80, Func Offset: 0x30
	// Line 823, Address: 0x187a94, Func Offset: 0x44
	// Line 816, Address: 0x187a9c, Func Offset: 0x4c
	// Line 823, Address: 0x187aa0, Func Offset: 0x50
	// Line 824, Address: 0x187ab4, Func Offset: 0x64
	// Line 826, Address: 0x187ad0, Func Offset: 0x80
	// Line 827, Address: 0x187ae8, Func Offset: 0x98
	// Line 826, Address: 0x187aec, Func Offset: 0x9c
	// Line 827, Address: 0x187af0, Func Offset: 0xa0
	// Line 829, Address: 0x187b04, Func Offset: 0xb4
	// Line 827, Address: 0x187b08, Func Offset: 0xb8
	// Line 829, Address: 0x187b0c, Func Offset: 0xbc
	// Line 830, Address: 0x187b20, Func Offset: 0xd0
	// Line 829, Address: 0x187b24, Func Offset: 0xd4
	// Line 830, Address: 0x187b28, Func Offset: 0xd8
	// Line 831, Address: 0x187b3c, Func Offset: 0xec
	// Line 830, Address: 0x187b40, Func Offset: 0xf0
	// Line 831, Address: 0x187b44, Func Offset: 0xf4
	// Line 832, Address: 0x187b58, Func Offset: 0x108
	// Line 831, Address: 0x187b5c, Func Offset: 0x10c
	// Line 832, Address: 0x187b60, Func Offset: 0x110
	// Line 833, Address: 0x187b74, Func Offset: 0x124
	// Line 832, Address: 0x187b78, Func Offset: 0x128
	// Line 833, Address: 0x187b7c, Func Offset: 0x12c
	// Line 841, Address: 0x187b90, Func Offset: 0x140
	// Line 833, Address: 0x187b94, Func Offset: 0x144
	// Line 841, Address: 0x187b98, Func Offset: 0x148
	// Line 842, Address: 0x187bac, Func Offset: 0x15c
	// Line 841, Address: 0x187bb0, Func Offset: 0x160
	// Line 842, Address: 0x187bb4, Func Offset: 0x164
	// Line 843, Address: 0x187bc8, Func Offset: 0x178
	// Line 842, Address: 0x187bcc, Func Offset: 0x17c
	// Line 843, Address: 0x187bd0, Func Offset: 0x180
	// Line 844, Address: 0x187be4, Func Offset: 0x194
	// Line 843, Address: 0x187be8, Func Offset: 0x198
	// Line 844, Address: 0x187bec, Func Offset: 0x19c
	// Line 845, Address: 0x187c00, Func Offset: 0x1b0
	// Line 844, Address: 0x187c04, Func Offset: 0x1b4
	// Line 845, Address: 0x187c08, Func Offset: 0x1b8
	// Line 846, Address: 0x187c1c, Func Offset: 0x1cc
	// Line 845, Address: 0x187c20, Func Offset: 0x1d0
	// Line 846, Address: 0x187c24, Func Offset: 0x1d4
	// Line 847, Address: 0x187c38, Func Offset: 0x1e8
	// Line 846, Address: 0x187c3c, Func Offset: 0x1ec
	// Line 847, Address: 0x187c40, Func Offset: 0x1f0
	// Line 848, Address: 0x187c54, Func Offset: 0x204
	// Line 847, Address: 0x187c58, Func Offset: 0x208
	// Line 848, Address: 0x187c5c, Func Offset: 0x20c
	// Line 849, Address: 0x187c70, Func Offset: 0x220
	// Line 848, Address: 0x187c74, Func Offset: 0x224
	// Line 849, Address: 0x187c78, Func Offset: 0x228
	// Line 850, Address: 0x187c8c, Func Offset: 0x23c
	// Line 849, Address: 0x187c90, Func Offset: 0x240
	// Line 850, Address: 0x187c94, Func Offset: 0x244
	// Line 851, Address: 0x187ca8, Func Offset: 0x258
	// Line 850, Address: 0x187cac, Func Offset: 0x25c
	// Line 851, Address: 0x187cb0, Func Offset: 0x260
	// Line 852, Address: 0x187cc4, Func Offset: 0x274
	// Line 851, Address: 0x187cc8, Func Offset: 0x278
	// Line 852, Address: 0x187ccc, Func Offset: 0x27c
	// Line 853, Address: 0x187ce0, Func Offset: 0x290
	// Line 852, Address: 0x187ce4, Func Offset: 0x294
	// Line 853, Address: 0x187ce8, Func Offset: 0x298
	// Line 854, Address: 0x187cfc, Func Offset: 0x2ac
	// Line 853, Address: 0x187d00, Func Offset: 0x2b0
	// Line 854, Address: 0x187d04, Func Offset: 0x2b4
	// Line 855, Address: 0x187d18, Func Offset: 0x2c8
	// Line 854, Address: 0x187d1c, Func Offset: 0x2cc
	// Line 855, Address: 0x187d20, Func Offset: 0x2d0
	// Line 856, Address: 0x187d34, Func Offset: 0x2e4
	// Line 855, Address: 0x187d38, Func Offset: 0x2e8
	// Line 856, Address: 0x187d3c, Func Offset: 0x2ec
	// Line 857, Address: 0x187d50, Func Offset: 0x300
	// Line 856, Address: 0x187d54, Func Offset: 0x304
	// Line 857, Address: 0x187d58, Func Offset: 0x308
	// Line 859, Address: 0x187d6c, Func Offset: 0x31c
	// Line 857, Address: 0x187d70, Func Offset: 0x320
	// Line 859, Address: 0x187d74, Func Offset: 0x324
	// Line 860, Address: 0x187d8c, Func Offset: 0x33c
	// Line 859, Address: 0x187d90, Func Offset: 0x340
	// Line 860, Address: 0x187d94, Func Offset: 0x344
	// Line 862, Address: 0x187dac, Func Offset: 0x35c
	// Line 860, Address: 0x187db0, Func Offset: 0x360
	// Line 862, Address: 0x187db4, Func Offset: 0x364
	// Line 860, Address: 0x187dc4, Func Offset: 0x374
	// Line 862, Address: 0x187dc8, Func Offset: 0x378
	// Line 863, Address: 0x187dd0, Func Offset: 0x380
	// Line 862, Address: 0x187dd4, Func Offset: 0x384
	// Line 863, Address: 0x187dd8, Func Offset: 0x388
	// Line 862, Address: 0x187de8, Func Offset: 0x398
	// Line 863, Address: 0x187dec, Func Offset: 0x39c
	// Line 864, Address: 0x187df4, Func Offset: 0x3a4
	// Line 863, Address: 0x187df8, Func Offset: 0x3a8
	// Line 864, Address: 0x187dfc, Func Offset: 0x3ac
	// Line 863, Address: 0x187e0c, Func Offset: 0x3bc
	// Line 864, Address: 0x187e10, Func Offset: 0x3c0
	// Line 865, Address: 0x187e18, Func Offset: 0x3c8
	// Line 864, Address: 0x187e1c, Func Offset: 0x3cc
	// Line 865, Address: 0x187e20, Func Offset: 0x3d0
	// Line 866, Address: 0x187e38, Func Offset: 0x3e8
	// Line 865, Address: 0x187e3c, Func Offset: 0x3ec
	// Line 866, Address: 0x187e40, Func Offset: 0x3f0
	// Line 868, Address: 0x187e58, Func Offset: 0x408
	// Line 866, Address: 0x187e5c, Func Offset: 0x40c
	// Line 868, Address: 0x187e60, Func Offset: 0x410
	// Line 869, Address: 0x187e78, Func Offset: 0x428
	// Line 868, Address: 0x187e7c, Func Offset: 0x42c
	// Line 869, Address: 0x187e80, Func Offset: 0x430
	// Line 870, Address: 0x187e98, Func Offset: 0x448
	// Line 869, Address: 0x187e9c, Func Offset: 0x44c
	// Line 870, Address: 0x187ea0, Func Offset: 0x450
	// Line 869, Address: 0x187eb0, Func Offset: 0x460
	// Line 870, Address: 0x187eb4, Func Offset: 0x464
	// Line 871, Address: 0x187ec0, Func Offset: 0x470
	// Line 870, Address: 0x187ec4, Func Offset: 0x474
	// Line 871, Address: 0x187ec8, Func Offset: 0x478
	// Line 874, Address: 0x187ed0, Func Offset: 0x480
	// Line 871, Address: 0x187ed4, Func Offset: 0x484
	// Line 874, Address: 0x187ed8, Func Offset: 0x488
	// Line 871, Address: 0x187edc, Func Offset: 0x48c
	// Line 874, Address: 0x187ee0, Func Offset: 0x490
	// Line 872, Address: 0x187eec, Func Offset: 0x49c
	// Line 871, Address: 0x187ef4, Func Offset: 0x4a4
	// Line 872, Address: 0x187ef8, Func Offset: 0x4a8
	// Line 871, Address: 0x187efc, Func Offset: 0x4ac
	// Line 872, Address: 0x187f04, Func Offset: 0x4b4
	// Line 874, Address: 0x187f08, Func Offset: 0x4b8
	// Line 875, Address: 0x187f10, Func Offset: 0x4c0
	// Line 874, Address: 0x187f14, Func Offset: 0x4c4
	// Line 875, Address: 0x187f18, Func Offset: 0x4c8
	// Line 876, Address: 0x187f30, Func Offset: 0x4e0
	// Line 875, Address: 0x187f34, Func Offset: 0x4e4
	// Line 876, Address: 0x187f38, Func Offset: 0x4e8
	// Line 875, Address: 0x187f48, Func Offset: 0x4f8
	// Line 876, Address: 0x187f4c, Func Offset: 0x4fc
	// Line 877, Address: 0x187f58, Func Offset: 0x508
	// Line 876, Address: 0x187f5c, Func Offset: 0x50c
	// Line 877, Address: 0x187f60, Func Offset: 0x510
	// Line 880, Address: 0x187f68, Func Offset: 0x518
	// Line 877, Address: 0x187f6c, Func Offset: 0x51c
	// Line 880, Address: 0x187f70, Func Offset: 0x520
	// Line 877, Address: 0x187f74, Func Offset: 0x524
	// Line 880, Address: 0x187f78, Func Offset: 0x528
	// Line 878, Address: 0x187f84, Func Offset: 0x534
	// Line 877, Address: 0x187f8c, Func Offset: 0x53c
	// Line 878, Address: 0x187f90, Func Offset: 0x540
	// Line 877, Address: 0x187f94, Func Offset: 0x544
	// Line 878, Address: 0x187f9c, Func Offset: 0x54c
	// Line 880, Address: 0x187fa0, Func Offset: 0x550
	// Line 881, Address: 0x187fa8, Func Offset: 0x558
	// Line 880, Address: 0x187fac, Func Offset: 0x55c
	// Line 881, Address: 0x187fb0, Func Offset: 0x560
	// Line 882, Address: 0x187fc8, Func Offset: 0x578
	// Line 881, Address: 0x187fcc, Func Offset: 0x57c
	// Line 882, Address: 0x187fd0, Func Offset: 0x580
	// Line 883, Address: 0x187fe8, Func Offset: 0x598
	// Line 882, Address: 0x187fec, Func Offset: 0x59c
	// Line 883, Address: 0x187ff0, Func Offset: 0x5a0
	// Line 884, Address: 0x188008, Func Offset: 0x5b8
	// Line 883, Address: 0x18800c, Func Offset: 0x5bc
	// Line 884, Address: 0x188010, Func Offset: 0x5c0
	// Line 887, Address: 0x188028, Func Offset: 0x5d8
	// Line 884, Address: 0x18802c, Func Offset: 0x5dc
	// Line 887, Address: 0x188030, Func Offset: 0x5e0
	// Line 888, Address: 0x18804c, Func Offset: 0x5fc
	// Line 887, Address: 0x188058, Func Offset: 0x608
	// Line 888, Address: 0x18805c, Func Offset: 0x60c
	// Line 889, Address: 0x188064, Func Offset: 0x614
	// Line 888, Address: 0x188068, Func Offset: 0x618
	// Line 889, Address: 0x18806c, Func Offset: 0x61c
	// Line 890, Address: 0x188084, Func Offset: 0x634
	// Line 889, Address: 0x188088, Func Offset: 0x638
	// Line 890, Address: 0x18808c, Func Offset: 0x63c
	// Line 891, Address: 0x1880a8, Func Offset: 0x658
	// Line 890, Address: 0x1880b4, Func Offset: 0x664
	// Line 891, Address: 0x1880b8, Func Offset: 0x668
	// Line 892, Address: 0x1880c4, Func Offset: 0x674
	// Line 891, Address: 0x1880d0, Func Offset: 0x680
	// Line 892, Address: 0x1880d4, Func Offset: 0x684
	// Line 893, Address: 0x1880dc, Func Offset: 0x68c
	// Line 892, Address: 0x1880e0, Func Offset: 0x690
	// Line 893, Address: 0x1880e4, Func Offset: 0x694
	// Line 894, Address: 0x1880fc, Func Offset: 0x6ac
	// Line 893, Address: 0x188100, Func Offset: 0x6b0
	// Line 894, Address: 0x188104, Func Offset: 0x6b4
	// Line 893, Address: 0x188114, Func Offset: 0x6c4
	// Line 894, Address: 0x188118, Func Offset: 0x6c8
	// Line 895, Address: 0x188120, Func Offset: 0x6d0
	// Line 894, Address: 0x188124, Func Offset: 0x6d4
	// Line 895, Address: 0x188128, Func Offset: 0x6d8
	// Line 894, Address: 0x188138, Func Offset: 0x6e8
	// Line 895, Address: 0x18813c, Func Offset: 0x6ec
	// Line 896, Address: 0x188144, Func Offset: 0x6f4
	// Line 895, Address: 0x188148, Func Offset: 0x6f8
	// Line 896, Address: 0x18814c, Func Offset: 0x6fc
	// Line 895, Address: 0x18815c, Func Offset: 0x70c
	// Line 896, Address: 0x188160, Func Offset: 0x710
	// Line 898, Address: 0x188168, Func Offset: 0x718
	// Line 896, Address: 0x18816c, Func Offset: 0x71c
	// Line 898, Address: 0x188170, Func Offset: 0x720
	// Line 899, Address: 0x188188, Func Offset: 0x738
	// Line 898, Address: 0x18818c, Func Offset: 0x73c
	// Line 899, Address: 0x188190, Func Offset: 0x740
	// Line 900, Address: 0x1881a8, Func Offset: 0x758
	// Line 899, Address: 0x1881ac, Func Offset: 0x75c
	// Line 900, Address: 0x1881b0, Func Offset: 0x760
	// Line 901, Address: 0x1881c8, Func Offset: 0x778
	// Line 900, Address: 0x1881cc, Func Offset: 0x77c
	// Line 901, Address: 0x1881d0, Func Offset: 0x780
	// Line 902, Address: 0x1881e8, Func Offset: 0x798
	// Line 901, Address: 0x1881ec, Func Offset: 0x79c
	// Line 902, Address: 0x1881f0, Func Offset: 0x7a0
	// Line 903, Address: 0x188208, Func Offset: 0x7b8
	// Line 902, Address: 0x18820c, Func Offset: 0x7bc
	// Line 903, Address: 0x188210, Func Offset: 0x7c0
	// Line 904, Address: 0x188228, Func Offset: 0x7d8
	// Line 903, Address: 0x18822c, Func Offset: 0x7dc
	// Line 904, Address: 0x188230, Func Offset: 0x7e0
	// Line 905, Address: 0x188248, Func Offset: 0x7f8
	// Line 904, Address: 0x18824c, Func Offset: 0x7fc
	// Line 905, Address: 0x188250, Func Offset: 0x800
	// Line 906, Address: 0x188268, Func Offset: 0x818
	// Line 905, Address: 0x18826c, Func Offset: 0x81c
	// Line 906, Address: 0x188270, Func Offset: 0x820
	// Line 907, Address: 0x188288, Func Offset: 0x838
	// Line 906, Address: 0x18828c, Func Offset: 0x83c
	// Line 907, Address: 0x188290, Func Offset: 0x840
	// Line 908, Address: 0x1882a8, Func Offset: 0x858
	// Line 907, Address: 0x1882ac, Func Offset: 0x85c
	// Line 908, Address: 0x1882b0, Func Offset: 0x860
	// Line 909, Address: 0x1882c8, Func Offset: 0x878
	// Line 908, Address: 0x1882cc, Func Offset: 0x87c
	// Line 909, Address: 0x1882d0, Func Offset: 0x880
	// Line 910, Address: 0x1882e8, Func Offset: 0x898
	// Line 909, Address: 0x1882ec, Func Offset: 0x89c
	// Line 910, Address: 0x1882f0, Func Offset: 0x8a0
	// Line 911, Address: 0x188308, Func Offset: 0x8b8
	// Line 910, Address: 0x18830c, Func Offset: 0x8bc
	// Line 911, Address: 0x188310, Func Offset: 0x8c0
	// Line 912, Address: 0x188328, Func Offset: 0x8d8
	// Line 911, Address: 0x18832c, Func Offset: 0x8dc
	// Line 912, Address: 0x188330, Func Offset: 0x8e0
	// Line 913, Address: 0x188348, Func Offset: 0x8f8
	// Line 912, Address: 0x18834c, Func Offset: 0x8fc
	// Line 913, Address: 0x188350, Func Offset: 0x900
	// Line 915, Address: 0x18836c, Func Offset: 0x91c
	// Line 913, Address: 0x188370, Func Offset: 0x920
	// Line 915, Address: 0x188374, Func Offset: 0x924
	// Line 919, Address: 0x188388, Func Offset: 0x938
	// Line 915, Address: 0x18838c, Func Offset: 0x93c
	// Line 919, Address: 0x188390, Func Offset: 0x940
	// Line 920, Address: 0x1883a4, Func Offset: 0x954
	// Line 919, Address: 0x1883a8, Func Offset: 0x958
	// Line 920, Address: 0x1883ac, Func Offset: 0x95c
	// Line 921, Address: 0x1883c0, Func Offset: 0x970
	// Line 920, Address: 0x1883c4, Func Offset: 0x974
	// Line 921, Address: 0x1883c8, Func Offset: 0x978
	// Line 922, Address: 0x1883dc, Func Offset: 0x98c
	// Line 921, Address: 0x1883e0, Func Offset: 0x990
	// Line 922, Address: 0x1883e4, Func Offset: 0x994
	// Line 923, Address: 0x1883f8, Func Offset: 0x9a8
	// Line 922, Address: 0x1883fc, Func Offset: 0x9ac
	// Line 923, Address: 0x188400, Func Offset: 0x9b0
	// Line 940, Address: 0x188414, Func Offset: 0x9c4
	// Line 923, Address: 0x188418, Func Offset: 0x9c8
	// Line 940, Address: 0x18841c, Func Offset: 0x9cc
	// Line 934, Address: 0x188424, Func Offset: 0x9d4
	// Line 940, Address: 0x18842c, Func Offset: 0x9dc
	// Line 935, Address: 0x188430, Func Offset: 0x9e0
	// Line 940, Address: 0x188434, Func Offset: 0x9e4
	// Line 941, Address: 0x188440, Func Offset: 0x9f0
	// Line 940, Address: 0x188444, Func Offset: 0x9f4
	// Line 941, Address: 0x188448, Func Offset: 0x9f8
	// Line 944, Address: 0x188460, Func Offset: 0xa10
	// Line 941, Address: 0x188464, Func Offset: 0xa14
	// Line 944, Address: 0x188468, Func Offset: 0xa18
	// Line 945, Address: 0x188480, Func Offset: 0xa30
	// Line 944, Address: 0x188484, Func Offset: 0xa34
	// Line 945, Address: 0x188488, Func Offset: 0xa38
	// Line 944, Address: 0x188498, Func Offset: 0xa48
	// Line 945, Address: 0x18849c, Func Offset: 0xa4c
	// Line 946, Address: 0x1884a4, Func Offset: 0xa54
	// Line 945, Address: 0x1884a8, Func Offset: 0xa58
	// Line 946, Address: 0x1884ac, Func Offset: 0xa5c
	// Line 945, Address: 0x1884bc, Func Offset: 0xa6c
	// Line 946, Address: 0x1884c0, Func Offset: 0xa70
	// Line 948, Address: 0x1884c8, Func Offset: 0xa78
	// Line 946, Address: 0x1884cc, Func Offset: 0xa7c
	// Line 948, Address: 0x1884d0, Func Offset: 0xa80
	// Line 954, Address: 0x1884ec, Func Offset: 0xa9c
	// Line 948, Address: 0x1884f0, Func Offset: 0xaa0
	// Line 954, Address: 0x1884f4, Func Offset: 0xaa4
	// Line 963, Address: 0x1884fc, Func Offset: 0xaac
	// Line 954, Address: 0x188500, Func Offset: 0xab0
	// Line 963, Address: 0x188504, Func Offset: 0xab4
	// Line 954, Address: 0x188508, Func Offset: 0xab8
	// Line 963, Address: 0x18850c, Func Offset: 0xabc
	// Line 954, Address: 0x188510, Func Offset: 0xac0
	// Line 955, Address: 0x188518, Func Offset: 0xac8
	// Line 954, Address: 0x188520, Func Offset: 0xad0
	// Line 958, Address: 0x188524, Func Offset: 0xad4
	// Line 955, Address: 0x18852c, Func Offset: 0xadc
	// Line 958, Address: 0x188530, Func Offset: 0xae0
	// Line 954, Address: 0x188534, Func Offset: 0xae4
	// Line 955, Address: 0x188540, Func Offset: 0xaf0
	// Line 958, Address: 0x188548, Func Offset: 0xaf8
	// Line 955, Address: 0x18854c, Func Offset: 0xafc
	// Line 958, Address: 0x188550, Func Offset: 0xb00
	// Line 963, Address: 0x188558, Func Offset: 0xb08
	// Line 966, Address: 0x18857c, Func Offset: 0xb2c
	// Line 963, Address: 0x188584, Func Offset: 0xb34
	// Line 966, Address: 0x188588, Func Offset: 0xb38
	// Line 967, Address: 0x188594, Func Offset: 0xb44
	// Line 966, Address: 0x18859c, Func Offset: 0xb4c
	// Line 967, Address: 0x1885a0, Func Offset: 0xb50
	// Line 968, Address: 0x1885ac, Func Offset: 0xb5c
	// Line 967, Address: 0x1885b4, Func Offset: 0xb64
	// Line 968, Address: 0x1885b8, Func Offset: 0xb68
	// Line 969, Address: 0x1885c4, Func Offset: 0xb74
	// Line 968, Address: 0x1885cc, Func Offset: 0xb7c
	// Line 969, Address: 0x1885d0, Func Offset: 0xb80
	// Line 970, Address: 0x1885dc, Func Offset: 0xb8c
	// Line 969, Address: 0x1885e4, Func Offset: 0xb94
	// Line 970, Address: 0x1885e8, Func Offset: 0xb98
	// Line 971, Address: 0x1885f4, Func Offset: 0xba4
	// Line 970, Address: 0x1885fc, Func Offset: 0xbac
	// Line 971, Address: 0x188600, Func Offset: 0xbb0
	// Line 972, Address: 0x18860c, Func Offset: 0xbbc
	// Line 973, Address: 0x18865c, Func Offset: 0xc0c
	// Line 972, Address: 0x188664, Func Offset: 0xc14
	// Line 973, Address: 0x188668, Func Offset: 0xc18
	// Line 974, Address: 0x188674, Func Offset: 0xc24
	// Line 973, Address: 0x18867c, Func Offset: 0xc2c
	// Line 974, Address: 0x188680, Func Offset: 0xc30
	// Line 975, Address: 0x18868c, Func Offset: 0xc3c
	// Line 976, Address: 0x1886dc, Func Offset: 0xc8c
	// Line 975, Address: 0x1886e4, Func Offset: 0xc94
	// Line 976, Address: 0x1886e8, Func Offset: 0xc98
	// Line 977, Address: 0x1886f4, Func Offset: 0xca4
	// Line 976, Address: 0x1886fc, Func Offset: 0xcac
	// Line 977, Address: 0x188700, Func Offset: 0xcb0
	// Line 978, Address: 0x18870c, Func Offset: 0xcbc
	// Line 979, Address: 0x18875c, Func Offset: 0xd0c
	// Line 978, Address: 0x188764, Func Offset: 0xd14
	// Line 979, Address: 0x188768, Func Offset: 0xd18
	// Line 980, Address: 0x188774, Func Offset: 0xd24
	// Line 979, Address: 0x18877c, Func Offset: 0xd2c
	// Line 980, Address: 0x188780, Func Offset: 0xd30
	// Line 981, Address: 0x18878c, Func Offset: 0xd3c
	// Line 982, Address: 0x1887dc, Func Offset: 0xd8c
	// Line 981, Address: 0x1887e4, Func Offset: 0xd94
	// Line 982, Address: 0x1887e8, Func Offset: 0xd98
	// Line 983, Address: 0x1887f4, Func Offset: 0xda4
	// Line 982, Address: 0x1887fc, Func Offset: 0xdac
	// Line 983, Address: 0x188800, Func Offset: 0xdb0
	// Line 984, Address: 0x18880c, Func Offset: 0xdbc
	// Line 985, Address: 0x18885c, Func Offset: 0xe0c
	// Line 984, Address: 0x188864, Func Offset: 0xe14
	// Line 985, Address: 0x188868, Func Offset: 0xe18
	// Line 986, Address: 0x188874, Func Offset: 0xe24
	// Line 985, Address: 0x18887c, Func Offset: 0xe2c
	// Line 986, Address: 0x188880, Func Offset: 0xe30
	// Line 987, Address: 0x18888c, Func Offset: 0xe3c
	// Line 989, Address: 0x1888dc, Func Offset: 0xe8c
	// Line 987, Address: 0x1888ec, Func Offset: 0xe9c
	// Line 989, Address: 0x1888f0, Func Offset: 0xea0
	// Line 990, Address: 0x188920, Func Offset: 0xed0
	// Line 989, Address: 0x188930, Func Offset: 0xee0
	// Line 990, Address: 0x188934, Func Offset: 0xee4
	// Line 991, Address: 0x188964, Func Offset: 0xf14
	// Line 990, Address: 0x188974, Func Offset: 0xf24
	// Line 991, Address: 0x188978, Func Offset: 0xf28
	// Line 992, Address: 0x1889a8, Func Offset: 0xf58
	// Line 991, Address: 0x1889b0, Func Offset: 0xf60
	// Line 992, Address: 0x1889b4, Func Offset: 0xf64
	// Line 993, Address: 0x1889c0, Func Offset: 0xf70
	// Line 992, Address: 0x1889c8, Func Offset: 0xf78
	// Line 993, Address: 0x1889cc, Func Offset: 0xf7c
	// Line 994, Address: 0x1889d8, Func Offset: 0xf88
	// Line 993, Address: 0x1889e0, Func Offset: 0xf90
	// Line 994, Address: 0x1889e4, Func Offset: 0xf94
	// Line 995, Address: 0x1889f0, Func Offset: 0xfa0
	// Line 994, Address: 0x1889f8, Func Offset: 0xfa8
	// Line 995, Address: 0x1889fc, Func Offset: 0xfac
	// Line 996, Address: 0x188a08, Func Offset: 0xfb8
	// Line 995, Address: 0x188a10, Func Offset: 0xfc0
	// Line 996, Address: 0x188a14, Func Offset: 0xfc4
	// Line 997, Address: 0x188a20, Func Offset: 0xfd0
	// Line 996, Address: 0x188a28, Func Offset: 0xfd8
	// Line 997, Address: 0x188a2c, Func Offset: 0xfdc
	// Line 1003, Address: 0x188a38, Func Offset: 0xfe8
	// Line 1005, Address: 0x188a40, Func Offset: 0xff0
	// Line 1006, Address: 0x188a54, Func Offset: 0x1004
	// Line 1007, Address: 0x188a58, Func Offset: 0x1008
	// Line 1008, Address: 0x188a5c, Func Offset: 0x100c
	// Line 1005, Address: 0x188a60, Func Offset: 0x1010
	// Line 1009, Address: 0x188a64, Func Offset: 0x1014
	// Line 1010, Address: 0x188a68, Func Offset: 0x1018
	// Line 1005, Address: 0x188a6c, Func Offset: 0x101c
	// Line 1006, Address: 0x188a74, Func Offset: 0x1024
	// Line 1007, Address: 0x188a78, Func Offset: 0x1028
	// Line 1008, Address: 0x188a7c, Func Offset: 0x102c
	// Line 1009, Address: 0x188a80, Func Offset: 0x1030
	// Line 1010, Address: 0x188a84, Func Offset: 0x1034
	// Line 1005, Address: 0x188a88, Func Offset: 0x1038
	// Line 1006, Address: 0x188a8c, Func Offset: 0x103c
	// Line 1007, Address: 0x188a90, Func Offset: 0x1040
	// Line 1008, Address: 0x188a94, Func Offset: 0x1044
	// Line 1009, Address: 0x188a98, Func Offset: 0x1048
	// Line 1010, Address: 0x188a9c, Func Offset: 0x104c
	// Line 1005, Address: 0x188aa0, Func Offset: 0x1050
	// Line 1006, Address: 0x188aa4, Func Offset: 0x1054
	// Line 1007, Address: 0x188aa8, Func Offset: 0x1058
	// Line 1008, Address: 0x188aac, Func Offset: 0x105c
	// Line 1009, Address: 0x188ab0, Func Offset: 0x1060
	// Line 1010, Address: 0x188ab4, Func Offset: 0x1064
	// Line 1013, Address: 0x188ab8, Func Offset: 0x1068
	// Line 1014, Address: 0x188ac4, Func Offset: 0x1074
	// Line 1018, Address: 0x188ac8, Func Offset: 0x1078
	// Line 1015, Address: 0x188acc, Func Offset: 0x107c
	// Line 1018, Address: 0x188ad0, Func Offset: 0x1080
	// Line 1013, Address: 0x188ad4, Func Offset: 0x1084
	// Line 1018, Address: 0x188ad8, Func Offset: 0x1088
	// Line 1013, Address: 0x188ae0, Func Offset: 0x1090
	// Line 1014, Address: 0x188aec, Func Offset: 0x109c
	// Line 1015, Address: 0x188af0, Func Offset: 0x10a0
	// Line 1013, Address: 0x188af4, Func Offset: 0x10a4
	// Line 1014, Address: 0x188af8, Func Offset: 0x10a8
	// Line 1015, Address: 0x188afc, Func Offset: 0x10ac
	// Line 1013, Address: 0x188b00, Func Offset: 0x10b0
	// Line 1015, Address: 0x188b04, Func Offset: 0x10b4
	// Line 1014, Address: 0x188b08, Func Offset: 0x10b8
	// Line 1018, Address: 0x188b0c, Func Offset: 0x10bc
	// Line 1019, Address: 0x188b14, Func Offset: 0x10c4
	// Line 1018, Address: 0x188b1c, Func Offset: 0x10cc
	// Line 1019, Address: 0x188b20, Func Offset: 0x10d0
	// Line 1020, Address: 0x188b30, Func Offset: 0x10e0
	// Line 1019, Address: 0x188b34, Func Offset: 0x10e4
	// Line 1020, Address: 0x188b38, Func Offset: 0x10e8
	// Line 1021, Address: 0x188b60, Func Offset: 0x1110
	// Line 1029, Address: 0x188b80, Func Offset: 0x1130
	// Line 1030, Address: 0x188ba0, Func Offset: 0x1150
	// Line 1029, Address: 0x188ba4, Func Offset: 0x1154
	// Line 1030, Address: 0x188ba8, Func Offset: 0x1158
	// Line 1029, Address: 0x188bb8, Func Offset: 0x1168
	// Line 1030, Address: 0x188bbc, Func Offset: 0x116c
	// Line 1031, Address: 0x188bc4, Func Offset: 0x1174
	// Line 1030, Address: 0x188bc8, Func Offset: 0x1178
	// Line 1031, Address: 0x188bcc, Func Offset: 0x117c
	// Line 1030, Address: 0x188bdc, Func Offset: 0x118c
	// Line 1031, Address: 0x188be0, Func Offset: 0x1190
	// Line 1032, Address: 0x188be8, Func Offset: 0x1198
	// Line 1031, Address: 0x188bec, Func Offset: 0x119c
	// Line 1032, Address: 0x188bf0, Func Offset: 0x11a0
	// Line 1031, Address: 0x188c00, Func Offset: 0x11b0
	// Line 1032, Address: 0x188c04, Func Offset: 0x11b4
	// Line 1033, Address: 0x188c0c, Func Offset: 0x11bc
	// Line 1032, Address: 0x188c10, Func Offset: 0x11c0
	// Line 1033, Address: 0x188c14, Func Offset: 0x11c4
	// Line 1035, Address: 0x188c2c, Func Offset: 0x11dc
	// Line 1033, Address: 0x188c30, Func Offset: 0x11e0
	// Line 1035, Address: 0x188c34, Func Offset: 0x11e4
	// Line 1036, Address: 0x188c4c, Func Offset: 0x11fc
	// Line 1035, Address: 0x188c50, Func Offset: 0x1200
	// Line 1036, Address: 0x188c54, Func Offset: 0x1204
	// Line 1037, Address: 0x188c6c, Func Offset: 0x121c
	// Line 1036, Address: 0x188c70, Func Offset: 0x1220
	// Line 1037, Address: 0x188c74, Func Offset: 0x1224
	// Line 1038, Address: 0x188c8c, Func Offset: 0x123c
	// Line 1037, Address: 0x188c90, Func Offset: 0x1240
	// Line 1038, Address: 0x188c94, Func Offset: 0x1244
	// Line 1039, Address: 0x188cac, Func Offset: 0x125c
	// Line 1038, Address: 0x188cb0, Func Offset: 0x1260
	// Line 1039, Address: 0x188cb4, Func Offset: 0x1264
	// Line 1040, Address: 0x188ccc, Func Offset: 0x127c
	// Line 1039, Address: 0x188cd0, Func Offset: 0x1280
	// Line 1040, Address: 0x188cd4, Func Offset: 0x1284
	// Line 1042, Address: 0x188cf0, Func Offset: 0x12a0
	// Line 1040, Address: 0x188cfc, Func Offset: 0x12ac
	// Line 1042, Address: 0x188d00, Func Offset: 0x12b0
	// Line 1043, Address: 0x188d08, Func Offset: 0x12b8
	// Line 1042, Address: 0x188d0c, Func Offset: 0x12bc
	// Line 1043, Address: 0x188d10, Func Offset: 0x12c0
	// Line 1042, Address: 0x188d20, Func Offset: 0x12d0
	// Line 1043, Address: 0x188d24, Func Offset: 0x12d4
	// Line 1046, Address: 0x188d2c, Func Offset: 0x12dc
	// Line 1043, Address: 0x188d30, Func Offset: 0x12e0
	// Line 1046, Address: 0x188d34, Func Offset: 0x12e4
	// Line 1047, Address: 0x188d4c, Func Offset: 0x12fc
	// Line 1046, Address: 0x188d50, Func Offset: 0x1300
	// Line 1047, Address: 0x188d54, Func Offset: 0x1304
	// Line 1048, Address: 0x188d6c, Func Offset: 0x131c
	// Line 1047, Address: 0x188d70, Func Offset: 0x1320
	// Line 1048, Address: 0x188d74, Func Offset: 0x1324
	// Line 1051, Address: 0x188d8c, Func Offset: 0x133c
	// Line 1048, Address: 0x188d90, Func Offset: 0x1340
	// Line 1051, Address: 0x188d94, Func Offset: 0x1344
	// Line 1048, Address: 0x188da4, Func Offset: 0x1354
	// Line 1051, Address: 0x188da8, Func Offset: 0x1358
	// Line 1052, Address: 0x188db0, Func Offset: 0x1360
	// Line 1051, Address: 0x188db4, Func Offset: 0x1364
	// Line 1052, Address: 0x188db8, Func Offset: 0x1368
	// Line 1053, Address: 0x188dd0, Func Offset: 0x1380
	// Line 1052, Address: 0x188dd4, Func Offset: 0x1384
	// Line 1053, Address: 0x188dd8, Func Offset: 0x1388
	// Line 1052, Address: 0x188de8, Func Offset: 0x1398
	// Line 1053, Address: 0x188dec, Func Offset: 0x139c
	// Line 1054, Address: 0x188df4, Func Offset: 0x13a4
	// Line 1053, Address: 0x188df8, Func Offset: 0x13a8
	// Line 1054, Address: 0x188dfc, Func Offset: 0x13ac
	// Line 1053, Address: 0x188e0c, Func Offset: 0x13bc
	// Line 1054, Address: 0x188e10, Func Offset: 0x13c0
	// Line 1055, Address: 0x188e18, Func Offset: 0x13c8
	// Line 1054, Address: 0x188e1c, Func Offset: 0x13cc
	// Line 1055, Address: 0x188e20, Func Offset: 0x13d0
	// Line 1054, Address: 0x188e30, Func Offset: 0x13e0
	// Line 1055, Address: 0x188e34, Func Offset: 0x13e4
	// Line 1056, Address: 0x188e3c, Func Offset: 0x13ec
	// Line 1055, Address: 0x188e40, Func Offset: 0x13f0
	// Line 1056, Address: 0x188e44, Func Offset: 0x13f4
	// Line 1058, Address: 0x188e5c, Func Offset: 0x140c
	// Line 1056, Address: 0x188e60, Func Offset: 0x1410
	// Line 1058, Address: 0x188e64, Func Offset: 0x1414
	// Line 1061, Address: 0x188e80, Func Offset: 0x1430
	// Line 1058, Address: 0x188e84, Func Offset: 0x1434
	// Line 1061, Address: 0x188e88, Func Offset: 0x1438
	// Line 1062, Address: 0x188ec0, Func Offset: 0x1470
	// Line 1061, Address: 0x188ec4, Func Offset: 0x1474
	// Line 1062, Address: 0x188ec8, Func Offset: 0x1478
	// Line 1065, Address: 0x188f00, Func Offset: 0x14b0
	// Line 1062, Address: 0x188f04, Func Offset: 0x14b4
	// Line 1065, Address: 0x188f08, Func Offset: 0x14b8
	// Line 1066, Address: 0x188f1c, Func Offset: 0x14cc
	// Line 1065, Address: 0x188f20, Func Offset: 0x14d0
	// Line 1066, Address: 0x188f24, Func Offset: 0x14d4
	// Line 1067, Address: 0x188f38, Func Offset: 0x14e8
	// Line 1066, Address: 0x188f40, Func Offset: 0x14f0
	// Line 1067, Address: 0x188f44, Func Offset: 0x14f4
	// Line 1226, Address: 0x188f54, Func Offset: 0x1504
	// Line 1228, Address: 0x188f94, Func Offset: 0x1544
	// Line 1229, Address: 0x188fd4, Func Offset: 0x1584
	// Line 1230, Address: 0x189014, Func Offset: 0x15c4
	// Line 1232, Address: 0x189054, Func Offset: 0x1604
	// Line 1233, Address: 0x18906c, Func Offset: 0x161c
	// Line 1232, Address: 0x189070, Func Offset: 0x1620
	// Line 1233, Address: 0x189074, Func Offset: 0x1624
	// Line 1234, Address: 0x18908c, Func Offset: 0x163c
	// Line 1233, Address: 0x189090, Func Offset: 0x1640
	// Line 1234, Address: 0x189094, Func Offset: 0x1644
	// Line 1235, Address: 0x1890ac, Func Offset: 0x165c
	// Line 1234, Address: 0x1890b0, Func Offset: 0x1660
	// Line 1235, Address: 0x1890b4, Func Offset: 0x1664
	// Line 1237, Address: 0x1890cc, Func Offset: 0x167c
	// Line 1235, Address: 0x1890d0, Func Offset: 0x1680
	// Line 1237, Address: 0x1890d4, Func Offset: 0x1684
	// Line 1238, Address: 0x1890f0, Func Offset: 0x16a0
	// Line 1237, Address: 0x1890f4, Func Offset: 0x16a4
	// Line 1238, Address: 0x1890f8, Func Offset: 0x16a8
	// Line 1240, Address: 0x189100, Func Offset: 0x16b0
	// Line 1238, Address: 0x189104, Func Offset: 0x16b4
	// Line 1240, Address: 0x189118, Func Offset: 0x16c8
	// Line 1241, Address: 0x189120, Func Offset: 0x16d0
	// Line 1242, Address: 0x189128, Func Offset: 0x16d8
	// Line 1244, Address: 0x189130, Func Offset: 0x16e0
	// Line 1245, Address: 0x189170, Func Offset: 0x1720
	// Line 1246, Address: 0x1891b0, Func Offset: 0x1760
	// Line 1247, Address: 0x1891f0, Func Offset: 0x17a0
	// Line 1248, Address: 0x189230, Func Offset: 0x17e0
	// Line 1251, Address: 0x189270, Func Offset: 0x1820
	// Line 1253, Address: 0x189284, Func Offset: 0x1834
	// Line 1251, Address: 0x189288, Func Offset: 0x1838
	// Line 1253, Address: 0x18928c, Func Offset: 0x183c
	// Line 1254, Address: 0x1892a4, Func Offset: 0x1854
	// Line 1253, Address: 0x1892a8, Func Offset: 0x1858
	// Line 1254, Address: 0x1892ac, Func Offset: 0x185c
	// Line 1257, Address: 0x1892c8, Func Offset: 0x1878
	// Line 1254, Address: 0x1892cc, Func Offset: 0x187c
	// Line 1258, Address: 0x1892d0, Func Offset: 0x1880
	// Line 1257, Address: 0x1892d4, Func Offset: 0x1884
	// Line 1258, Address: 0x1892e0, Func Offset: 0x1890
	// Line 1259, Address: 0x1892ec, Func Offset: 0x189c
	// Line 1260, Address: 0x1892fc, Func Offset: 0x18ac
	// Line 1261, Address: 0x18930c, Func Offset: 0x18bc
	// Line 1262, Address: 0x18931c, Func Offset: 0x18cc
	// Line 1265, Address: 0x18932c, Func Offset: 0x18dc
	// Line 1266, Address: 0x189344, Func Offset: 0x18f4
	// Line 1265, Address: 0x189348, Func Offset: 0x18f8
	// Line 1266, Address: 0x18934c, Func Offset: 0x18fc
	// Line 1267, Address: 0x189360, Func Offset: 0x1910
	// Line 1266, Address: 0x189364, Func Offset: 0x1914
	// Line 1267, Address: 0x189368, Func Offset: 0x1918
	// Line 1268, Address: 0x18937c, Func Offset: 0x192c
	// Line 1267, Address: 0x189380, Func Offset: 0x1930
	// Line 1268, Address: 0x189384, Func Offset: 0x1934
	// Line 1269, Address: 0x189398, Func Offset: 0x1948
	// Line 1268, Address: 0x18939c, Func Offset: 0x194c
	// Line 1269, Address: 0x1893a0, Func Offset: 0x1950
	// Line 1270, Address: 0x1893b4, Func Offset: 0x1964
	// Line 1269, Address: 0x1893b8, Func Offset: 0x1968
	// Line 1270, Address: 0x1893bc, Func Offset: 0x196c
	// Line 1271, Address: 0x1893d0, Func Offset: 0x1980
	// Line 1270, Address: 0x1893d4, Func Offset: 0x1984
	// Line 1271, Address: 0x1893d8, Func Offset: 0x1988
	// Line 1272, Address: 0x1893ec, Func Offset: 0x199c
	// Line 1271, Address: 0x1893f0, Func Offset: 0x19a0
	// Line 1272, Address: 0x1893f4, Func Offset: 0x19a4
	// Line 1273, Address: 0x189408, Func Offset: 0x19b8
	// Line 1272, Address: 0x18940c, Func Offset: 0x19bc
	// Line 1273, Address: 0x189410, Func Offset: 0x19c0
	// Line 1274, Address: 0x189424, Func Offset: 0x19d4
	// Line 1273, Address: 0x189428, Func Offset: 0x19d8
	// Line 1274, Address: 0x18942c, Func Offset: 0x19dc
	// Line 1275, Address: 0x189440, Func Offset: 0x19f0
	// Line 1274, Address: 0x189444, Func Offset: 0x19f4
	// Line 1275, Address: 0x189448, Func Offset: 0x19f8
	// Line 1276, Address: 0x18945c, Func Offset: 0x1a0c
	// Line 1275, Address: 0x189460, Func Offset: 0x1a10
	// Line 1276, Address: 0x189464, Func Offset: 0x1a14
	// Line 1277, Address: 0x189478, Func Offset: 0x1a28
	// Line 1276, Address: 0x18947c, Func Offset: 0x1a2c
	// Line 1277, Address: 0x189480, Func Offset: 0x1a30
	// Line 1278, Address: 0x189494, Func Offset: 0x1a44
	// Line 1277, Address: 0x189498, Func Offset: 0x1a48
	// Line 1278, Address: 0x18949c, Func Offset: 0x1a4c
	// Line 1284, Address: 0x1894b0, Func Offset: 0x1a60
	// Line 1278, Address: 0x1894b4, Func Offset: 0x1a64
	// Line 1284, Address: 0x1894b8, Func Offset: 0x1a68
	// Line 1286, Address: 0x1894f4, Func Offset: 0x1aa4
	// Line 1287, Address: 0x189534, Func Offset: 0x1ae4
	// Line 1288, Address: 0x189574, Func Offset: 0x1b24
	// Line 1290, Address: 0x1895b4, Func Offset: 0x1b64
	// Line 1291, Address: 0x1895cc, Func Offset: 0x1b7c
	// Line 1290, Address: 0x1895d0, Func Offset: 0x1b80
	// Line 1291, Address: 0x1895d4, Func Offset: 0x1b84
	// Line 1292, Address: 0x1895ec, Func Offset: 0x1b9c
	// Line 1291, Address: 0x1895f0, Func Offset: 0x1ba0
	// Line 1292, Address: 0x1895f4, Func Offset: 0x1ba4
	// Line 1293, Address: 0x18960c, Func Offset: 0x1bbc
	// Line 1292, Address: 0x189610, Func Offset: 0x1bc0
	// Line 1293, Address: 0x189614, Func Offset: 0x1bc4
	// Line 1295, Address: 0x18962c, Func Offset: 0x1bdc
	// Line 1293, Address: 0x189630, Func Offset: 0x1be0
	// Line 1295, Address: 0x189634, Func Offset: 0x1be4
	// Line 1296, Address: 0x189650, Func Offset: 0x1c00
	// Line 1295, Address: 0x189654, Func Offset: 0x1c04
	// Line 1296, Address: 0x189658, Func Offset: 0x1c08
	// Line 1300, Address: 0x189660, Func Offset: 0x1c10
	// Line 1296, Address: 0x189664, Func Offset: 0x1c14
	// Line 1300, Address: 0x189668, Func Offset: 0x1c18
	// Line 1296, Address: 0x18966c, Func Offset: 0x1c1c
	// Line 1300, Address: 0x189670, Func Offset: 0x1c20
	// Line 1296, Address: 0x189678, Func Offset: 0x1c28
	// Line 1300, Address: 0x189680, Func Offset: 0x1c30
	// Line 1301, Address: 0x1896b4, Func Offset: 0x1c64
	// Line 1302, Address: 0x1896f4, Func Offset: 0x1ca4
	// Line 1303, Address: 0x189734, Func Offset: 0x1ce4
	// Line 1304, Address: 0x189774, Func Offset: 0x1d24
	// Line 1308, Address: 0x1897b4, Func Offset: 0x1d64
	// Line 1309, Address: 0x1897b8, Func Offset: 0x1d68
	// Line 1308, Address: 0x1897bc, Func Offset: 0x1d6c
	// Line 1309, Address: 0x1897c4, Func Offset: 0x1d74
	// Line 1308, Address: 0x1897c8, Func Offset: 0x1d78
	// Line 1309, Address: 0x1897cc, Func Offset: 0x1d7c
	// Line 1310, Address: 0x1897d4, Func Offset: 0x1d84
	// Line 1311, Address: 0x1897e4, Func Offset: 0x1d94
	// Line 1312, Address: 0x1897f4, Func Offset: 0x1da4
	// Line 1313, Address: 0x189804, Func Offset: 0x1db4
	// Line 1316, Address: 0x189814, Func Offset: 0x1dc4
	// Line 1321, Address: 0x18982c, Func Offset: 0x1ddc
	// Line 1316, Address: 0x189830, Func Offset: 0x1de0
	// Line 1321, Address: 0x189834, Func Offset: 0x1de4
	// Line 1323, Address: 0x189870, Func Offset: 0x1e20
	// Line 1324, Address: 0x1898b0, Func Offset: 0x1e60
	// Line 1325, Address: 0x1898f0, Func Offset: 0x1ea0
	// Line 1327, Address: 0x189930, Func Offset: 0x1ee0
	// Line 1328, Address: 0x189948, Func Offset: 0x1ef8
	// Line 1327, Address: 0x18994c, Func Offset: 0x1efc
	// Line 1328, Address: 0x189950, Func Offset: 0x1f00
	// Line 1329, Address: 0x189968, Func Offset: 0x1f18
	// Line 1328, Address: 0x18996c, Func Offset: 0x1f1c
	// Line 1329, Address: 0x189970, Func Offset: 0x1f20
	// Line 1330, Address: 0x189988, Func Offset: 0x1f38
	// Line 1329, Address: 0x18998c, Func Offset: 0x1f3c
	// Line 1330, Address: 0x189990, Func Offset: 0x1f40
	// Line 1332, Address: 0x1899a8, Func Offset: 0x1f58
	// Line 1330, Address: 0x1899ac, Func Offset: 0x1f5c
	// Line 1332, Address: 0x1899b0, Func Offset: 0x1f60
	// Line 1333, Address: 0x1899cc, Func Offset: 0x1f7c
	// Line 1332, Address: 0x1899d0, Func Offset: 0x1f80
	// Line 1333, Address: 0x1899d4, Func Offset: 0x1f84
	// Line 1337, Address: 0x1899dc, Func Offset: 0x1f8c
	// Line 1333, Address: 0x1899e0, Func Offset: 0x1f90
	// Line 1337, Address: 0x1899e4, Func Offset: 0x1f94
	// Line 1333, Address: 0x1899e8, Func Offset: 0x1f98
	// Line 1337, Address: 0x1899ec, Func Offset: 0x1f9c
	// Line 1333, Address: 0x1899f4, Func Offset: 0x1fa4
	// Line 1337, Address: 0x1899fc, Func Offset: 0x1fac
	// Line 1338, Address: 0x189a30, Func Offset: 0x1fe0
	// Line 1339, Address: 0x189a70, Func Offset: 0x2020
	// Line 1340, Address: 0x189ab0, Func Offset: 0x2060
	// Line 1341, Address: 0x189af0, Func Offset: 0x20a0
	// Line 1345, Address: 0x189b30, Func Offset: 0x20e0
	// Line 1346, Address: 0x189b34, Func Offset: 0x20e4
	// Line 1345, Address: 0x189b38, Func Offset: 0x20e8
	// Line 1346, Address: 0x189b40, Func Offset: 0x20f0
	// Line 1345, Address: 0x189b44, Func Offset: 0x20f4
	// Line 1346, Address: 0x189b48, Func Offset: 0x20f8
	// Line 1347, Address: 0x189b50, Func Offset: 0x2100
	// Line 1348, Address: 0x189b60, Func Offset: 0x2110
	// Line 1349, Address: 0x189b70, Func Offset: 0x2120
	// Line 1350, Address: 0x189b80, Func Offset: 0x2130
	// Line 1353, Address: 0x189b90, Func Offset: 0x2140
	// Line 1359, Address: 0x189ba8, Func Offset: 0x2158
	// Line 1353, Address: 0x189bac, Func Offset: 0x215c
	// Line 1359, Address: 0x189bb0, Func Offset: 0x2160
	// Line 1379, Address: 0x189bc0, Func Offset: 0x2170
	// Line 1359, Address: 0x189bc8, Func Offset: 0x2178
	// Line 1379, Address: 0x189bcc, Func Offset: 0x217c
	// Line 1388, Address: 0x189bd8, Func Offset: 0x2188
	// Line 1379, Address: 0x189be4, Func Offset: 0x2194
	// Line 1388, Address: 0x189be8, Func Offset: 0x2198
	// Line 1390, Address: 0x189bec, Func Offset: 0x219c
	// Line 1391, Address: 0x189bf8, Func Offset: 0x21a8
	// Line 1389, Address: 0x189c04, Func Offset: 0x21b4
	// Line 1411, Address: 0x189c0c, Func Offset: 0x21bc
	// Func End, Address: 0x189c20, Func Offset: 0x21d0
}

// zMainOutputMgrSetup__Fv
// Start address: 0x189c20
void zMainOutputMgrSetup()
{
	// Line 605, Address: 0x189c20, Func Offset: 0
	// Line 680, Address: 0x189c28, Func Offset: 0x8
	// Line 707, Address: 0x189c40, Func Offset: 0x20
	// Func End, Address: 0x189c4c, Func Offset: 0x2c
}

// 
// Start address: 0x189c50
void main(int32 argc, int8** argv)
{
	uint32 options;
	int32 i;
	// Line 256, Address: 0x189c50, Func Offset: 0
	// Line 265, Address: 0x189c6c, Func Offset: 0x1c
	// Line 273, Address: 0x189c74, Func Offset: 0x24
	// Line 277, Address: 0x189c88, Func Offset: 0x38
	// Line 281, Address: 0x189c94, Func Offset: 0x44
	// Line 293, Address: 0x189c98, Func Offset: 0x48
	// Line 294, Address: 0x189ca8, Func Offset: 0x58
	// Line 295, Address: 0x189cc0, Func Offset: 0x70
	// Line 296, Address: 0x189cc8, Func Offset: 0x78
	// Line 297, Address: 0x189ce0, Func Offset: 0x90
	// Line 298, Address: 0x189cf0, Func Offset: 0xa0
	// Line 299, Address: 0x189d08, Func Offset: 0xb8
	// Line 300, Address: 0x189d10, Func Offset: 0xc0
	// Line 301, Address: 0x189d28, Func Offset: 0xd8
	// Line 305, Address: 0x189d40, Func Offset: 0xf0
	// Line 307, Address: 0x189d48, Func Offset: 0xf8
	// Line 311, Address: 0x189d50, Func Offset: 0x100
	// Line 325, Address: 0x189d58, Func Offset: 0x108
	// Line 328, Address: 0x189d60, Func Offset: 0x110
	// Line 342, Address: 0x189d68, Func Offset: 0x118
	// Line 345, Address: 0x189d74, Func Offset: 0x124
	// Line 347, Address: 0x189da8, Func Offset: 0x158
	// Line 350, Address: 0x189db0, Func Offset: 0x160
	// Line 353, Address: 0x189db8, Func Offset: 0x168
	// Line 354, Address: 0x189dc0, Func Offset: 0x170
	// Line 361, Address: 0x189dc8, Func Offset: 0x178
	// Line 364, Address: 0x189f18, Func Offset: 0x2c8
	// Line 372, Address: 0x189f20, Func Offset: 0x2d0
	// Line 405, Address: 0x189f28, Func Offset: 0x2d8
	// Line 411, Address: 0x189f3c, Func Offset: 0x2ec
	// Line 414, Address: 0x189f44, Func Offset: 0x2f4
	// Line 417, Address: 0x189f54, Func Offset: 0x304
	// Line 420, Address: 0x189f5c, Func Offset: 0x30c
	// Line 422, Address: 0x189f64, Func Offset: 0x314
	// Line 424, Address: 0x189f6c, Func Offset: 0x31c
	// Line 441, Address: 0x18a0b8, Func Offset: 0x468
	// Line 442, Address: 0x18a0c0, Func Offset: 0x470
	// Line 445, Address: 0x18a0c8, Func Offset: 0x478
	// Line 449, Address: 0x18a0d0, Func Offset: 0x480
	// Line 454, Address: 0x18a0d8, Func Offset: 0x488
	// Line 465, Address: 0x18a0e0, Func Offset: 0x490
	// Line 458, Address: 0x18a0e4, Func Offset: 0x494
	// Line 465, Address: 0x18a0e8, Func Offset: 0x498
	// Line 458, Address: 0x18a0ec, Func Offset: 0x49c
	// Line 465, Address: 0x18a0f0, Func Offset: 0x4a0
	// Line 468, Address: 0x18a100, Func Offset: 0x4b0
	// Line 493, Address: 0x18a108, Func Offset: 0x4b8
	// Line 496, Address: 0x18a120, Func Offset: 0x4d0
	// Line 499, Address: 0x18a128, Func Offset: 0x4d8
	// Line 512, Address: 0x18a130, Func Offset: 0x4e0
	// Line 515, Address: 0x18a138, Func Offset: 0x4e8
	// Line 519, Address: 0x18a288, Func Offset: 0x638
	// Line 520, Address: 0x18a290, Func Offset: 0x640
	// Line 542, Address: 0x18a298, Func Offset: 0x648
	// Line 554, Address: 0x18a2a0, Func Offset: 0x650
	// Line 555, Address: 0x18a2a8, Func Offset: 0x658
	// Line 557, Address: 0x18a2b0, Func Offset: 0x660
	// Line 559, Address: 0x18a2b8, Func Offset: 0x668
	// Line 562, Address: 0x18a2c0, Func Offset: 0x670
	// Line 564, Address: 0x18a2c8, Func Offset: 0x678
	// Line 566, Address: 0x18a2d0, Func Offset: 0x680
	// Line 567, Address: 0x18a2d8, Func Offset: 0x688
	// Line 578, Address: 0x18a2e0, Func Offset: 0x690
	// Line 583, Address: 0x18a2e8, Func Offset: 0x698
	// Func End, Address: 0x18a304, Func Offset: 0x6b4
}

