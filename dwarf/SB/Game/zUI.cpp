typedef struct xAnimState;
typedef struct zScene;
typedef struct zGlobals;
typedef struct RwTexCoords;
typedef struct RwObjectHasFrame;
typedef struct xCoef3;
typedef struct RwV3d;
typedef struct _zPortal;
typedef struct xEntMotion;
typedef struct _zUI;
typedef struct xAnimTable;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct rxHeapFreeBlock;
typedef struct zGlobalSettings;
typedef struct xPlatformAsset;
typedef struct RwRaster;
typedef struct RwRGBA;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntMotionAsset;
typedef struct RwV2d;
typedef struct RpMeshHeader;
typedef struct zUIMgr;
typedef struct xClumpCollBSPTriangle;
typedef struct xGroup;
typedef struct xAnimPlay;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zAssetPickupTable;
typedef struct RxNodeDefinition;
typedef struct xMovePointAsset;
typedef struct xUpdateCullEnt;
typedef struct xQuat;
typedef struct xBase;
typedef struct xVec3;
typedef struct xEnt;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef struct xMgr;
typedef struct rxHeapSuperBlockDescriptor;
typedef union _class_0;
typedef struct xMat4x3;
typedef struct zJumpParam;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zLedgeGrabParams;
typedef struct RxPipelineNodeParam;
typedef struct RpTriangle;
typedef struct RxHeap;
typedef struct RpAtomic;
typedef struct xEntAsset;
typedef struct zUIAsset;
typedef struct RwBBox;
typedef struct xEntSplineData;
typedef struct zEntHangable;
typedef struct RwSky2DVertex;
typedef struct xAnimEffect;
typedef struct RwTexture;
typedef struct xIniFile;
typedef struct zUIFont;
typedef struct xScene;
typedef struct xCounterAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct menuTask;
typedef struct zPlatform;
typedef struct rxHeapBlockHeader;
typedef struct xEntMotionPenData;
typedef struct xLinkAsset;
typedef struct iEnv;
typedef struct xAnimFile;
typedef struct xSerial;
typedef struct xIniValue;
typedef struct RxPipelineRequiresCluster;
typedef struct RpGeometry;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct xIniSection;
typedef struct xJSPNodeInfo;
typedef struct xAnimTransition;
typedef enum _tagRumbleType;
typedef enum _CurrentPlayer;
typedef struct xAnimTransitionList;
typedef enum _zPlayerType;
typedef struct xModelAssetInfo;
typedef struct xUpdateCullGroup;
typedef struct xEntMPData;
typedef struct RpClump;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct _tagxPad;
typedef struct xVec4;
typedef struct analog_data;
typedef struct xMovePoint;
typedef struct xEntBoulder;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct _xCounter;
typedef struct xBaseAsset;
typedef struct xClumpCollBSPBranchNode;
typedef enum RpWorldRenderOrder;
typedef struct xSpline3;
typedef struct rxReq;
typedef struct xEntMotionERData;
typedef struct RpMaterial;
typedef enum RxClusterValidityReq;
typedef struct RwCamera;
typedef struct xJSPHeader;
typedef struct zCheckPoint;
typedef struct xSurface;
typedef struct zPlayerGlobals;
typedef struct xBound;
typedef struct xVec2;
typedef struct xAnimMultiFile;
typedef struct zPlatFMRunTime;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct xBBox;
typedef enum RxNodeDefEditable;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RpWorldSector;
typedef enum RxClusterValid;
typedef struct xEntDrive;
typedef struct zPlayerSettings;
typedef struct RpMorphTarget;
typedef struct xRot;
typedef struct menuWorld;
typedef struct xClumpCollBSPTree;
typedef struct RpLight;
typedef struct xEnvAsset;
typedef struct zLasso;
typedef struct RpWorld;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagiTRCPadInfo;
typedef struct xEntFrame;
typedef struct basic_rect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xEntMotionOrbitData;
typedef struct xGridBound;
typedef struct iFogParams;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct _tagxRumble;
typedef enum _tagPadInit;
typedef struct xShadowSimplePoly;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct RwSphere;
typedef struct xAnimActiveEffect;
typedef struct zUIFontAsset;
typedef struct xEntMechData;
typedef struct RwTexDictionary;
typedef struct tri_data_0;
typedef struct xEntMotionSplineData;
typedef struct tri_data_1;
typedef struct RxOutputSpec;
typedef struct menuTaskInfo;
typedef struct _class_1;
typedef struct xLightKitLight;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef enum _tagPadState;
typedef struct xMat3x3;
typedef enum _tagTRCState;
typedef struct xCollis;
typedef struct xShadowSimpleCache;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct xGlobals;
typedef struct xEntCollis;
typedef struct RwObject;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxIoSpec;
typedef struct xEnv;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct menuWorldInfo;
typedef struct RxNodeMethods;
typedef struct _class_2;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct RwSky2DVertexFields;
typedef struct RwFrustumPlane;
typedef struct RpMaterialList;
typedef struct _tagiPad;
typedef struct xFFX;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct xEntMotionMechData;
typedef struct xEntPenData;
typedef struct RxPacket;
typedef struct xClumpCollBSPVertInfo;
typedef struct xCoef;
typedef enum RwFogType;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct xEntOrbitData;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _tagTRCPadInfo;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct xQCData;

typedef RwCamera*(*type_0)(RwCamera*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_6)(void*);
typedef void(*type_7)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_9)(RxPipelineNode*);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_12)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_16)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_18)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_22)(void*, void*);
typedef int32(*type_24)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef uint32(*type_32)(RxPipelineNode*, uint32, uint32, void*);
typedef xBase*(*type_33)(uint32);
typedef void(*type_34)(_zUI*, xScene*, float32);
typedef int32(*type_35)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_38)(RxNodeDefinition*);
typedef int8*(*type_41)(xBase*);
typedef void(*type_42)(RxNodeDefinition*);
typedef uint32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_47)(RxPipelineNode*);
typedef int8*(*type_49)(uint32);
typedef void(*type_68)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_69)(xBase*, zScene*, void*);
typedef RpWorldSector*(*type_71)(RpWorldSector*);
typedef int32(*type_72)(void*, void*);
typedef int32(*type_83)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_85)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_96)(xEnt*, xScene*, float32);
typedef void(*type_99)(xEnt*, xVec3*);
typedef void(*type_101)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_103)(xEnt*);
typedef RwCamera*(*type_104)(RwCamera*);
typedef void(*type_111)(xMemPool*, void*);
typedef void(*type_125)(RwResEntry*);

typedef RwTexCoords* type_1[8];
typedef uint8 type_2[22];
typedef xCollis type_3[18];
typedef float32 type_8[12];
typedef <unknown type (0xa510)> type_10[4];
typedef float32 type_14[12];
typedef float32 type_15[12];
typedef float32 type_17[12];
typedef xVec3 type_20[5];
typedef _tagxPad type_21[4];
typedef float32 type_23[12];
typedef int8 type_25[5];
typedef uint8 type_26[5];
typedef float32 type_27[12];
typedef uint16 type_28[3];
typedef xVec3 type_30[60];
typedef RwFrustumPlane type_31[6];
typedef RwV3d type_36[8];
typedef uint8 type_37[2];
typedef float32 type_39[22];
typedef _tagTRCPadInfo type_40[4];
typedef int8 type_43[256];
typedef float32 type_44[22];
typedef menuWorld type_46[15];
typedef int8 type_48[256];
typedef _zUI* type_50[768];
typedef uint32 type_51[15];
typedef uint16 type_52[2];
typedef uint32 type_53[15];
typedef float32 type_54[2];
typedef int8 type_55[2];
typedef float32 type_56[2];
typedef float32 type_57[2];
typedef uint32 type_58[15];
typedef uint32 type_59[72];
typedef float32 type_60[2];
typedef int8 type_61[4];
typedef RwTexCoords* type_62[8];
typedef xBase* type_63[72];
typedef int8 type_64[6];
typedef float32 type_65[2];
typedef float32 type_66[4];
typedef analog_data type_67[2];
typedef int8 type_70[32];
typedef int8 type_73[2];
typedef menuTask type_74[8];
typedef uint8 type_75[4];
typedef RwSky2DVertex type_76[4];
typedef uint8 type_77[2];
typedef xVec4 type_78[12];
typedef uint8 type_79[4];
typedef uint32 type_80[2];
typedef uint8 type_81[2];
typedef uint16 type_82[4];
typedef float32 type_84[6];
typedef uint16 type_86[2];
typedef xVec3 type_87[3];
typedef float32 type_88[3];
typedef uint16 type_89[2];
typedef uint32 type_90[4];
typedef float32 type_91[3];
typedef xModelTag type_92[2];
typedef float32 type_93[3];
typedef uint8 type_94[2];
typedef RpLight* type_95[2];
typedef RwFrame* type_97[2];
typedef float32 type_98[16];
typedef xEnt* type_100[111];
typedef float32 type_102[2];
typedef int8 type_105[16];
typedef uint8 type_106[3];
typedef int8 type_107[16];
typedef int8 type_108[128];
typedef type_108 type_109[6];
typedef menuTaskInfo type_110[8];
typedef int8 type_112[16];
typedef uint16 type_113[3];
typedef uint8 type_114[14];
typedef xModelTag type_115[4];
typedef int8 type_116[32];
typedef int8 type_117[32];
typedef xModelInstance* type_118[14];
typedef xVec3 type_119[4];
typedef int8 type_120[32];
typedef uint8 type_121[2];
typedef int8 type_122[32];
typedef menuWorldInfo type_123[15];
typedef xAnimMultiFileEntry type_124[1];
typedef uint8 type_126[4];
typedef uint16 type_127[6];
typedef float32 type_128[4];
typedef float32 type_129[4];
typedef RxCluster type_130[1];
typedef uint8 type_131[22];
typedef uint8 type_132[3];

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
	type_4 BeforeEnter;
	type_68 StateCallback;
	type_16 BeforeAnimMatrices;
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
	type_59 baseCount;
	type_63 baseList;
	_zEnv* zen;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct _zUI : zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
	uint16 preUpdateIndex;
	uint16 updateIndex;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_77 PowerUp;
	type_81 InitialPowerUp;
};

struct xPlatformAsset
{
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct zUIMgr : xMgr
{
	int32 m_preUpdateStart;
	int32 m_preUpdateEnd;
	uint32 m_preUpdateMax;
	_zUI** m_preUpdate;
	int32 m_updateStart;
	int32 m_updateEnd;
	uint32 m_updateMax;
	_zUI** m_update;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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
	type_16 BeforeAnimMatrices;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_125 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_111 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_22 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	type_96 update;
	type_96 endUpdate;
	type_99 bupdate;
	type_101 move;
	type_103 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_18 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct zCutsceneMgr
{
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xMgr
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_30 tranTable;
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

struct RpTriangle
{
	type_28 vertIndex;
	int16 matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_29 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct zUIAsset : xEntAsset
{
	uint32 uiFlags;
	type_52 dim;
	uint32 textureID;
	type_56 uva;
	type_57 uvb;
	type_60 uvc;
	type_65 uvd;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xEntSplineData
{
	int32 unknown;
};

struct zEntHangable
{
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_11 Callback;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_116 name;
	type_120 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xIniFile
{
	int32 NumValues;
	int32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_43 name;
	type_48 pathname;
};

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	uint16 uiFontFlags;
	uint16 uiFontHackFlags;
	uint32 text_id;
	float32 yscroll;
	uint32 text_index;
	int8* text;
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
	type_33 resolvID;
	type_41 base2Name;
	type_49 id2Name;
};

struct xCounterAsset : xBaseAsset
{
	int16 count;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_54 radius;
};

struct menuTask
{
	_zUI* uiSelected;
	_zUI* uiSpatOutline;
	_zUI* uiSpatGray;
	_zUI* uiSpatGold;
	_zUI* uiTaskDesc;
	_xCounter* counter;
	type_55 levelSuffix;
	_zPortal portal;
	xPortalAsset portalAsset;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_90 pad;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_37 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_128 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_95 light;
	type_97 light_frame;
	int32 memlvl;
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
	type_121 NumAnims;
	void** RawData;
};

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct xIniValue
{
	int8* tok;
	int8* val;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	type_62 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_45 Conditional;
	type_45 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xModelAssetInfo
{
	uint32 Magic;
	uint32 NumModelInst;
	uint32 AnimTableID;
	uint32 CombatID;
	uint32 BrainID;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_66 wt;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct _tagxPad
{
	type_131 value;
	type_2 last_value;
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
	type_39 up_tmr;
	type_44 down_tmr;
	type_67 analog;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_94 pad;
	float32 delay;
	xSpline3* spl;
};

struct xEntBoulder
{
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	int16 count;
	uint8 state;
	uint8 counterFlags;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct rxReq
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_104 beginUpdate;
	type_0 endUpdate;
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
	type_31 frustumPlanes;
	RwBBox frustumBoundBox;
	type_36 frustumCorners;
};

struct xJSPHeader
{
	type_61 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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
	type_132 pad;
	void* moprops;
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
	type_115 HangPawTag;
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
	type_51 Inv_PatsSock;
	type_53 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_58 Inv_LevelPickups;
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
	type_80 TongueFlags;
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
	type_114 sb_model_indices;
	type_118 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_106 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_124 Files;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_8 tmrs;
	type_14 ttms;
	type_15 atms;
	type_17 dtms;
	type_23 vms;
	type_27 dss;
};

struct RpSector
{
	int32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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
	type_6 activateCB;
	type_6 deactivateCB;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_78 frustplane;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_1 texCoords;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_84 MoveSpeed;
	type_88 AnimSneak;
	type_91 AnimWalk;
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
	type_126 talk_filter;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct menuWorld
{
	_zUI* uiSelected;
	type_73 worldPrefix;
	uint32 numTasks;
	type_74 task;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_20 lastRefs;
	type_26 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_71 renderCallBack;
	RxPipeline* pipeline;
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

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xShadowSimplePoly
{
	type_87 vert;
	xVec3 norm;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct zUIFontAsset : zUIAsset
{
	uint16 uiFontFlags;
	uint8 mode;
	uint8 fontID;
	uint32 textAssetID;
	type_75 bcolor;
	type_79 color;
	type_82 inset;
	type_86 space;
	type_89 cdim;
	uint32 max_height;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct menuTaskInfo
{
	float32 ang;
	_CurrentPlayer player;
};

struct _class_1
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_98 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_102 BilinearLerp;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
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
	type_119 corner;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_109 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_117 sceneStart;
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
	type_3 colls;
	type_7 post;
	type_12 depenq;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct menuWorldInfo
{
	type_110 taskInfo;
};

struct RxNodeMethods
{
	type_35 nodeBody;
	type_38 nodeInit;
	type_42 nodeTerm;
	type_47 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_32 configMsgHandler;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RpPolygon
{
	uint16 matIndex;
	type_113 vertIndex;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagiPad
{
	int32 port;
};

struct xFFX
{
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_130 clusters;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xCoef
{
	type_129 a;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct st_SERIAL_CLIENTINFO
{
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_10 qWords;
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

basic_rect screen_bounds;
basic_rect default_adjust;
type_105 buffer;
type_112 buffer;
uint32 sSortedCount;
type_50 sSorted;
type_76 Vertex;
type_127 Index;
uint32 cKeyUIid1off;
uint32 cKeyUIid2off;
uint32 cKeyUIid3off;
uint32 cKeyUIid4off;
uint32 cKeyUIid1on;
uint32 cKeyUIid2on;
uint32 cKeyUIid3on;
uint32 cKeyUIid4on;
type_64 patsock_text_buffer;
_zUI* patsock_ui;
zUIFont* patsock_uif;
uint32 patsock_prev_world;
uint32 patsock_prev_count;
zUIMgr gUIMgr;
float32 ushift;
type_123 sWorldInfo;
type_46 sWorld;
_zUI* sTakeTaxi;
_zUI* sNoneTaskDesc;
_zUI* sCurrTaskDesc;
uint32 sCurrWorld;
uint32 sCurrTask;
_zUI* sPauseManager;
_zUI* sConfirmation;
xGroup* sTaxiConfirmGrp;
zGlobals globals;
_CurrentPlayer gPendingPlayer;
type_85 zUIPortalEventCB;
type_72 iRenderQSort_Face;
type_69 zUIRenderIteratorInsert;
type_40 gTrcPad;
type_21 mPad;
xScene* g_xSceneCur;
type_83 zUIEventCB;
type_34 zUI_Update;
uint32 gActiveHeap;

void zUI_ScenePortalLoad(xSerial* s);
void zUI_ScenePortalSave(xSerial* s);
void zUI_ScenePortalUpdate();
void zUI_PortalToKrabs(uint32 taskNum);
void refresh_patsocks(uint32 world);
void zUI_ScenePortalInit(zScene* zsc);
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc);
int32 zUIPortalEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zUI_ParseINI(xIniFile* ini);
int32 zUIEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zUI_Render(xEnt* ent);
void zUIRenderAll();
int32 iRenderQSort_Face(void* arg1, void* arg2);
xBase* zUIRenderIteratorInsert(xBase* b);
void zUI_Update(_zUI* ent, float32 dt);
void zUI_PreUpdate(_zUI* ent);
void zUI_Reset(_zUI* ent);
void zUI_Load(_zUI* ent, xSerial* s);
void zUI_Save(_zUI* ent, xSerial* s);
void zUI_Init(_zUI* ent, xEntAsset* asset);
void load_anim_list(_zUI& ui);
void zUI_Init(void* ent, void* asset);
void zUI_Init();
void Remove(zUIMgr* this, _zUI* ui);
void Touch(zUIMgr* this, _zUI* ui);
void Setup(zUIMgr* this, zScene* s);
void Update(zUIMgr* this, zScene* s, float32 dt);
void PreUpdate(zScene* s, float32 dt);

// zUI_ScenePortalLoad__FP7xSerial
// Start address: 0x19e050
void zUI_ScenePortalLoad(xSerial* s)
{
	uint32 i;
	uint32 j;
}

// zUI_ScenePortalSave__FP7xSerial
// Start address: 0x19e0f0
void zUI_ScenePortalSave(xSerial* s)
{
	uint32 i;
	uint32 j;
}

// zUI_ScenePortalUpdate__Fv
// Start address: 0x19e190
void zUI_ScenePortalUpdate()
{
	uint32 i;
	uint32 j;
	_zUI* select;
}

// zUI_PortalToKrabs__FUi
// Start address: 0x19e770
void zUI_PortalToKrabs(uint32 taskNum)
{
	xPortalAsset* portal;
	int32 c1;
	int32 c2;
	type_122 tempString;
}

// refresh_patsocks__FUi
// Start address: 0x19e850
void refresh_patsocks(uint32 world)
{
	uint32 count;
	uint32 max;
}

// zUI_ScenePortalInit__FP6zScene
// Start address: 0x19e990
void zUI_ScenePortalInit(zScene* zsc)
{
	uint32 i;
	uint32 j;
	int8 c;
	int8 c2;
	type_70 tempString;
	uint32 uiID;
	_zUI* ui;
	uint32 id;
}

// zUI_ScenePortalSetToCurrentLevel__FP6zScene
// Start address: 0x19f6e0
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc)
{
	uint32 i;
}

// zUIPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f740
int32 zUIPortalEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	int32 result;
}

// zUI_ParseINI__FP8xIniFile
// Start address: 0x19f820
void zUI_ParseINI(xIniFile* ini)
{
	type_107 itemName;
	int8* value;
	int8* tok;
	int8* ltok;
	uint32 i;
	uint32 j;
}

// zUIEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f9d0
int32 zUIEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zUI* s;
	uint32 theTextureID;
	RwTexture* texture;
}

// zUI_Render__FP4xEnt
// Start address: 0x19fd10
void zUI_Render(xEnt* ent)
{
	_zUI* ui;
	RwTexture* texture;
	RwRaster* raster;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwCamera* camera;
	float32 w;
	float32 h;
	float32 u1;
	float32 v1;
	float32 u2;
	float32 v2;
	float32 u3;
	float32 v3;
	float32 u4;
	float32 v4;
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	float32 z;
	float32 cz;
	float32 cooz;
	zUIAsset& a;
	basic_rect r;
	uint32 srcblend;
	uint32 destblend;
	xVec3 to;
	xVec3 from;
}

// zUIRenderAll__Fv
// Start address: 0x1a0730
void zUIRenderAll()
{
	uint8 rendering_models;
	int32 i;
}

// iRenderQSort_Face__FPCvPCv
// Start address: 0x1a08c0
int32 iRenderQSort_Face(void* arg1, void* arg2)
{
	_zUI* f1;
	_zUI* f2;
	uint8 font1;
	uint8 font2;
}

// zUIRenderIteratorInsert__FP5xBaseP6zScenePv
// Start address: 0x1a09d0
xBase* zUIRenderIteratorInsert(xBase* b)
{
}

// zUI_Update__FP4_zUIP6xScenef
// Start address: 0x1a0a00
void zUI_Update(_zUI* ent, float32 dt)
{
}

// zUI_PreUpdate__FP4_zUIP6xScenef
// Start address: 0x1a0c80
void zUI_PreUpdate(_zUI* ent)
{
	_zUI* ui;
	int32 i;
	_tagxPad* pad;
	_tagxPad* p;
}

// zUI_Reset__FP4_zUI
// Start address: 0x1a1050
void zUI_Reset(_zUI* ent)
{
}

// zUI_Load__FP4_zUIP7xSerial
// Start address: 0x1a1110
void zUI_Load(_zUI* ent, xSerial* s)
{
}

// zUI_Save__FP4_zUIP7xSerial
// Start address: 0x1a1120
void zUI_Save(_zUI* ent, xSerial* s)
{
}

// zUI_Init__FP4_zUIP9xEntAsset
// Start address: 0x1a1130
void zUI_Init(_zUI* ent, xEntAsset* asset)
{
	zUIAsset* sasset;
	xSurface* surf;
	xModelInstance* minst;
}

// load_anim_list__17@unnamed@zUI_cpp@FR4_zUI
// Start address: 0x1a13d0
void load_anim_list(_zUI& ui)
{
	zUIAsset& a;
	int32 used;
	xAnimState* ast;
	xAnimSingle* single;
}

// zUI_Init__FPvPv
// Start address: 0x1a1490
void zUI_Init(void* ent, void* asset)
{
}

// zUI_Init__Fv
// Start address: 0x1a14a0
void zUI_Init()
{
}

// Remove__6zUIMgrFP4_zUI
// Start address: 0x1a14b0
void Remove(zUIMgr* this, _zUI* ui)
{
}

// Touch__6zUIMgrFP4_zUI
// Start address: 0x1a15e0
void Touch(zUIMgr* this, _zUI* ui)
{
}

// Setup__6zUIMgrFP6zScene
// Start address: 0x1a1700
void Setup(zUIMgr* this, zScene* s)
{
	uint32 count;
	uint32 arraySize;
	_zUI* ui;
	uint32 i;
}

// Update__6zUIMgrFP6zScenef
// Start address: 0x1a18a0
void Update(zUIMgr* this, zScene* s, float32 dt)
{
	uint32 i;
}

// PreUpdate__6zUIMgrFP6zScenef
// Start address: 0x1a1950
void PreUpdate(zScene* s, float32 dt)
{
	_zUI* ui;
	uint32 i;
	_zUI* ui;
	uint32 i;
}

