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
typedef struct _class_0;
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
typedef struct RwSky2DVertexAlignmentOverlay;
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
typedef <unknown fundamental type (0xa510)> type_10[4];
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
typedef int8 type_109[128][6];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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

	void Remove(_zUI* ui);
	void Touch(_zUI* ui);
	void Setup(zScene* s);
	void Update(zScene* s, float32 dt);
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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
	uint32(*cb)(void*, void*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct RpTriangle
{
	uint16 vertIndex[3];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint16 dim[2];
	uint32 textureID;
	float32 uva[2];
	float32 uvb[2];
	float32 uvc[2];
	float32 uvd[2];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	float32 radius[2];
};

struct menuTask
{
	_zUI* uiSelected;
	_zUI* uiSpatOutline;
	_zUI* uiSpatGray;
	_zUI* uiSpatGold;
	_zUI* uiTaskDesc;
	_xCounter* counter;
	int8 levelSuffix[2];
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
	uint32 pad[4];
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint8 NumAnims[2];
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
	RwTexCoords* texCoords[8];
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
	RpClump*(*callback)(RpClump*, void*);
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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
	uint8 pad[2];
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

struct xJSPHeader
{
	int8 idtag[4];
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
	uint8 pad[3];
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xVec4 frustplane[12];
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
	int8 worldPrefix[2];
	uint32 numTasks;
	menuTask task[8];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	xVec3 vert[3];
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
	uint8 bcolor[4];
	uint8 color[4];
	uint16 inset[4];
	uint16 space[2];
	uint16 cdim[2];
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
	float32 matrix[16];
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
	xVec3 corner[4];
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
	menuTaskInfo taskInfo[8];
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
	uint16 vertIndex[3];
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
	RxCluster clusters[1];
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xCoef
{
	float32 a[4];
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

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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
int8 buffer[16];
int8 buffer[16];
uint32 sSortedCount;
_zUI* sSorted[768];
RwSky2DVertex Vertex[4];
uint16 Index[6];
uint32 cKeyUIid1off;
uint32 cKeyUIid2off;
uint32 cKeyUIid3off;
uint32 cKeyUIid4off;
uint32 cKeyUIid1on;
uint32 cKeyUIid2on;
uint32 cKeyUIid3on;
uint32 cKeyUIid4on;
int8 patsock_text_buffer[6];
_zUI* patsock_ui;
zUIFont* patsock_uif;
uint32 patsock_prev_world;
uint32 patsock_prev_count;
zUIMgr gUIMgr;
float32 ushift;
menuWorldInfo sWorldInfo[15];
menuWorld sWorld[15];
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
int32(*zUIPortalEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
int32(*iRenderQSort_Face)(void*, void*);
xBase*(*zUIRenderIteratorInsert)(xBase*, zScene*, void*);
_tagTRCPadInfo gTrcPad[4];
_tagxPad mPad[4];
xScene* g_xSceneCur;
int32(*zUIEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zUI_Update)(_zUI*, xScene*, float32);
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
void Remove(_zUI* ui);
void Touch(_zUI* ui);
void Setup(zScene* s);
void Update(zScene* s, float32 dt);
void PreUpdate(zScene* s, float32 dt);

// zUI_ScenePortalLoad__FP7xSerial
// Start address: 0x19e050
void zUI_ScenePortalLoad(xSerial* s)
{
	uint32 i;
	uint32 j;
	// Line 2735, Address: 0x19e050, Func Offset: 0
	// Line 2737, Address: 0x19e068, Func Offset: 0x18
	// Line 2735, Address: 0x19e06c, Func Offset: 0x1c
	// Line 2737, Address: 0x19e070, Func Offset: 0x20
	// Line 2735, Address: 0x19e074, Func Offset: 0x24
	// Line 2737, Address: 0x19e078, Func Offset: 0x28
	// Line 2738, Address: 0x19e080, Func Offset: 0x30
	// Line 2741, Address: 0x19e098, Func Offset: 0x48
	// Line 2742, Address: 0x19e0a8, Func Offset: 0x58
	// Line 2743, Address: 0x19e0c0, Func Offset: 0x70
	// Line 2744, Address: 0x19e0d0, Func Offset: 0x80
	// Func End, Address: 0x19e0f0, Func Offset: 0xa0
}

// zUI_ScenePortalSave__FP7xSerial
// Start address: 0x19e0f0
void zUI_ScenePortalSave(xSerial* s)
{
	uint32 i;
	uint32 j;
	// Line 2724, Address: 0x19e0f0, Func Offset: 0
	// Line 2726, Address: 0x19e108, Func Offset: 0x18
	// Line 2724, Address: 0x19e10c, Func Offset: 0x1c
	// Line 2726, Address: 0x19e110, Func Offset: 0x20
	// Line 2724, Address: 0x19e114, Func Offset: 0x24
	// Line 2726, Address: 0x19e118, Func Offset: 0x28
	// Line 2727, Address: 0x19e120, Func Offset: 0x30
	// Line 2730, Address: 0x19e138, Func Offset: 0x48
	// Line 2731, Address: 0x19e148, Func Offset: 0x58
	// Line 2732, Address: 0x19e160, Func Offset: 0x70
	// Line 2733, Address: 0x19e170, Func Offset: 0x80
	// Func End, Address: 0x19e190, Func Offset: 0xa0
}

// zUI_ScenePortalUpdate__Fv
// Start address: 0x19e190
void zUI_ScenePortalUpdate()
{
	uint32 i;
	uint32 j;
	_zUI* select;
	// Line 2629, Address: 0x19e190, Func Offset: 0
	// Line 2631, Address: 0x19e194, Func Offset: 0x4
	// Line 2629, Address: 0x19e198, Func Offset: 0x8
	// Line 2631, Address: 0x19e19c, Func Offset: 0xc
	// Line 2629, Address: 0x19e1a0, Func Offset: 0x10
	// Line 2631, Address: 0x19e1b0, Func Offset: 0x20
	// Line 2632, Address: 0x19e1bc, Func Offset: 0x2c
	// Line 2633, Address: 0x19e1dc, Func Offset: 0x4c
	// Line 2634, Address: 0x19e1e4, Func Offset: 0x54
	// Line 2635, Address: 0x19e1f0, Func Offset: 0x60
	// Line 2634, Address: 0x19e200, Func Offset: 0x70
	// Line 2635, Address: 0x19e3d8, Func Offset: 0x248
	// Line 2636, Address: 0x19e490, Func Offset: 0x300
	// Line 2637, Address: 0x19e494, Func Offset: 0x304
	// Line 2638, Address: 0x19e4b8, Func Offset: 0x328
	// Line 2639, Address: 0x19e4bc, Func Offset: 0x32c
	// Line 2648, Address: 0x19e4dc, Func Offset: 0x34c
	// Line 2651, Address: 0x19e4e0, Func Offset: 0x350
	// Line 2652, Address: 0x19e500, Func Offset: 0x370
	// Line 2654, Address: 0x19e520, Func Offset: 0x390
	// Line 2656, Address: 0x19e548, Func Offset: 0x3b8
	// Line 2658, Address: 0x19e568, Func Offset: 0x3d8
	// Line 2659, Address: 0x19e578, Func Offset: 0x3e8
	// Line 2660, Address: 0x19e584, Func Offset: 0x3f4
	// Line 2662, Address: 0x19e594, Func Offset: 0x404
	// Line 2663, Address: 0x19e5a8, Func Offset: 0x418
	// Line 2664, Address: 0x19e5b8, Func Offset: 0x428
	// Line 2667, Address: 0x19e5d4, Func Offset: 0x444
	// Line 2679, Address: 0x19e630, Func Offset: 0x4a0
	// Line 2680, Address: 0x19e63c, Func Offset: 0x4ac
	// Line 2681, Address: 0x19e644, Func Offset: 0x4b4
	// Line 2683, Address: 0x19e648, Func Offset: 0x4b8
	// Line 2684, Address: 0x19e658, Func Offset: 0x4c8
	// Line 2686, Address: 0x19e660, Func Offset: 0x4d0
	// Line 2695, Address: 0x19e67c, Func Offset: 0x4ec
	// Line 2700, Address: 0x19e6e0, Func Offset: 0x550
	// Line 2701, Address: 0x19e6ec, Func Offset: 0x55c
	// Line 2703, Address: 0x19e6f0, Func Offset: 0x560
	// Line 2705, Address: 0x19e6f8, Func Offset: 0x568
	// Line 2706, Address: 0x19e710, Func Offset: 0x580
	// Line 2707, Address: 0x19e71c, Func Offset: 0x58c
	// Line 2709, Address: 0x19e724, Func Offset: 0x594
	// Line 2710, Address: 0x19e738, Func Offset: 0x5a8
	// Line 2711, Address: 0x19e744, Func Offset: 0x5b4
	// Func End, Address: 0x19e764, Func Offset: 0x5d4
}

// zUI_PortalToKrabs__FUi
// Start address: 0x19e770
void zUI_PortalToKrabs(uint32 taskNum)
{
	xPortalAsset* portal;
	int32 c1;
	int32 c2;
	int8 tempString[32];
	// Line 2611, Address: 0x19e770, Func Offset: 0
	// Line 2612, Address: 0x19e774, Func Offset: 0x4
	// Line 2611, Address: 0x19e778, Func Offset: 0x8
	// Line 2612, Address: 0x19e77c, Func Offset: 0xc
	// Line 2611, Address: 0x19e780, Func Offset: 0x10
	// Line 2612, Address: 0x19e784, Func Offset: 0x14
	// Line 2611, Address: 0x19e788, Func Offset: 0x18
	// Line 2617, Address: 0x19e78c, Func Offset: 0x1c
	// Line 2611, Address: 0x19e790, Func Offset: 0x20
	// Line 2612, Address: 0x19e794, Func Offset: 0x24
	// Line 2613, Address: 0x19e798, Func Offset: 0x28
	// Line 2612, Address: 0x19e79c, Func Offset: 0x2c
	// Line 2613, Address: 0x19e7a0, Func Offset: 0x30
	// Line 2612, Address: 0x19e7a4, Func Offset: 0x34
	// Line 2617, Address: 0x19e7ac, Func Offset: 0x3c
	// Line 2614, Address: 0x19e7b0, Func Offset: 0x40
	// Line 2613, Address: 0x19e7b4, Func Offset: 0x44
	// Line 2614, Address: 0x19e7b8, Func Offset: 0x48
	// Line 2617, Address: 0x19e7c0, Func Offset: 0x50
	// Line 2619, Address: 0x19e7c8, Func Offset: 0x58
	// Line 2620, Address: 0x19e7dc, Func Offset: 0x6c
	// Line 2621, Address: 0x19e7e0, Func Offset: 0x70
	// Line 2622, Address: 0x19e7fc, Func Offset: 0x8c
	// Line 2623, Address: 0x19e800, Func Offset: 0x90
	// Line 2624, Address: 0x19e81c, Func Offset: 0xac
	// Line 2625, Address: 0x19e824, Func Offset: 0xb4
	// Line 2626, Address: 0x19e828, Func Offset: 0xb8
	// Line 2627, Address: 0x19e834, Func Offset: 0xc4
	// Func End, Address: 0x19e84c, Func Offset: 0xdc
}

// refresh_patsocks__FUi
// Start address: 0x19e850
void refresh_patsocks(uint32 world)
{
	uint32 count;
	uint32 max;
	// Line 2583, Address: 0x19e850, Func Offset: 0
	// Line 2582, Address: 0x19e854, Func Offset: 0x4
	// Line 2583, Address: 0x19e85c, Func Offset: 0xc
	// Line 2582, Address: 0x19e860, Func Offset: 0x10
	// Line 2583, Address: 0x19e864, Func Offset: 0x14
	// Line 2582, Address: 0x19e86c, Func Offset: 0x1c
	// Line 2586, Address: 0x19e878, Func Offset: 0x28
	// Line 2588, Address: 0x19e890, Func Offset: 0x40
	// Line 2592, Address: 0x19e894, Func Offset: 0x44
	// Line 2594, Address: 0x19e8a0, Func Offset: 0x50
	// Line 2595, Address: 0x19e8c0, Func Offset: 0x70
	// Line 2597, Address: 0x19e8e8, Func Offset: 0x98
	// Line 2600, Address: 0x19e8f0, Func Offset: 0xa0
	// Line 2601, Address: 0x19e900, Func Offset: 0xb0
	// Line 2602, Address: 0x19e910, Func Offset: 0xc0
	// Line 2603, Address: 0x19e924, Func Offset: 0xd4
	// Line 2604, Address: 0x19e948, Func Offset: 0xf8
	// Line 2605, Address: 0x19e974, Func Offset: 0x124
	// Line 2607, Address: 0x19e980, Func Offset: 0x130
	// Func End, Address: 0x19e98c, Func Offset: 0x13c
}

// zUI_ScenePortalInit__FP6zScene
// Start address: 0x19e990
void zUI_ScenePortalInit(zScene* zsc)
{
	uint32 i;
	uint32 j;
	int8 c;
	int8 c2;
	int8 tempString[32];
	uint32 uiID;
	_zUI* ui;
	uint32 id;
	// Line 2235, Address: 0x19e990, Func Offset: 0
	// Line 2243, Address: 0x19e9b8, Func Offset: 0x28
	// Line 2235, Address: 0x19e9bc, Func Offset: 0x2c
	// Line 2243, Address: 0x19e9c0, Func Offset: 0x30
	// Line 2245, Address: 0x19ea90, Func Offset: 0x100
	// Line 2249, Address: 0x19ea9c, Func Offset: 0x10c
	// Line 2266, Address: 0x19eaa4, Func Offset: 0x114
	// Line 2261, Address: 0x19eaa8, Func Offset: 0x118
	// Line 2266, Address: 0x19eab4, Func Offset: 0x124
	// Line 2250, Address: 0x19eab8, Func Offset: 0x128
	// Line 2253, Address: 0x19eabc, Func Offset: 0x12c
	// Line 2250, Address: 0x19eac0, Func Offset: 0x130
	// Line 2266, Address: 0x19eac4, Func Offset: 0x134
	// Line 2251, Address: 0x19eac8, Func Offset: 0x138
	// Line 2266, Address: 0x19eacc, Func Offset: 0x13c
	// Line 2251, Address: 0x19ead0, Func Offset: 0x140
	// Line 2266, Address: 0x19ead4, Func Offset: 0x144
	// Line 2252, Address: 0x19ead8, Func Offset: 0x148
	// Line 2266, Address: 0x19eadc, Func Offset: 0x14c
	// Line 2252, Address: 0x19eae0, Func Offset: 0x150
	// Line 2253, Address: 0x19eae4, Func Offset: 0x154
	// Line 2257, Address: 0x19eaec, Func Offset: 0x15c
	// Line 2254, Address: 0x19eaf4, Func Offset: 0x164
	// Line 2255, Address: 0x19eafc, Func Offset: 0x16c
	// Line 2256, Address: 0x19eb04, Func Offset: 0x174
	// Line 2258, Address: 0x19eb0c, Func Offset: 0x17c
	// Line 2259, Address: 0x19eb14, Func Offset: 0x184
	// Line 2260, Address: 0x19eb1c, Func Offset: 0x18c
	// Line 2262, Address: 0x19eb24, Func Offset: 0x194
	// Line 2263, Address: 0x19eb2c, Func Offset: 0x19c
	// Line 2266, Address: 0x19eb34, Func Offset: 0x1a4
	// Line 2268, Address: 0x19eb38, Func Offset: 0x1a8
	// Line 2270, Address: 0x19eb48, Func Offset: 0x1b8
	// Line 2269, Address: 0x19eb4c, Func Offset: 0x1bc
	// Line 2270, Address: 0x19eb50, Func Offset: 0x1c0
	// Line 2271, Address: 0x19eb54, Func Offset: 0x1c4
	// Line 2272, Address: 0x19eb60, Func Offset: 0x1d0
	// Line 2274, Address: 0x19eb78, Func Offset: 0x1e8
	// Line 2277, Address: 0x19eb88, Func Offset: 0x1f8
	// Line 2275, Address: 0x19eb8c, Func Offset: 0x1fc
	// Line 2278, Address: 0x19eb9c, Func Offset: 0x20c
	// Line 2279, Address: 0x19eba0, Func Offset: 0x210
	// Line 2285, Address: 0x19eba4, Func Offset: 0x214
	// Line 2281, Address: 0x19eba8, Func Offset: 0x218
	// Line 2285, Address: 0x19ebb0, Func Offset: 0x220
	// Line 2288, Address: 0x19ebc8, Func Offset: 0x238
	// Line 2289, Address: 0x19ebd0, Func Offset: 0x240
	// Line 2291, Address: 0x19ebe0, Func Offset: 0x250
	// Line 2294, Address: 0x19ebec, Func Offset: 0x25c
	// Line 2296, Address: 0x19ebf0, Func Offset: 0x260
	// Line 2299, Address: 0x19ec08, Func Offset: 0x278
	// Line 2303, Address: 0x19ec20, Func Offset: 0x290
	// Line 2304, Address: 0x19ec28, Func Offset: 0x298
	// Line 2309, Address: 0x19ec54, Func Offset: 0x2c4
	// Line 2310, Address: 0x19ec58, Func Offset: 0x2c8
	// Line 2313, Address: 0x19ec60, Func Offset: 0x2d0
	// Line 2310, Address: 0x19ec68, Func Offset: 0x2d8
	// Line 2313, Address: 0x19ec6c, Func Offset: 0x2dc
	// Line 2314, Address: 0x19ec78, Func Offset: 0x2e8
	// Line 2313, Address: 0x19ec80, Func Offset: 0x2f0
	// Line 2314, Address: 0x19ec84, Func Offset: 0x2f4
	// Line 2317, Address: 0x19ec8c, Func Offset: 0x2fc
	// Line 2318, Address: 0x19eca0, Func Offset: 0x310
	// Line 2320, Address: 0x19ecb0, Func Offset: 0x320
	// Line 2319, Address: 0x19ecb4, Func Offset: 0x324
	// Line 2320, Address: 0x19ecb8, Func Offset: 0x328
	// Line 2321, Address: 0x19ecbc, Func Offset: 0x32c
	// Line 2322, Address: 0x19ecc8, Func Offset: 0x338
	// Line 2324, Address: 0x19ece0, Func Offset: 0x350
	// Line 2325, Address: 0x19ecf0, Func Offset: 0x360
	// Line 2326, Address: 0x19ecf4, Func Offset: 0x364
	// Line 2325, Address: 0x19ecf8, Func Offset: 0x368
	// Line 2328, Address: 0x19ed00, Func Offset: 0x370
	// Line 2329, Address: 0x19ed04, Func Offset: 0x374
	// Line 2331, Address: 0x19ed08, Func Offset: 0x378
	// Line 2332, Address: 0x19ed14, Func Offset: 0x384
	// Line 2337, Address: 0x19ed20, Func Offset: 0x390
	// Line 2335, Address: 0x19ed24, Func Offset: 0x394
	// Line 2337, Address: 0x19ed34, Func Offset: 0x3a4
	// Line 2338, Address: 0x19ed48, Func Offset: 0x3b8
	// Line 2341, Address: 0x19ed58, Func Offset: 0x3c8
	// Line 2343, Address: 0x19ed68, Func Offset: 0x3d8
	// Line 2342, Address: 0x19ed6c, Func Offset: 0x3dc
	// Line 2343, Address: 0x19ed70, Func Offset: 0x3e0
	// Line 2344, Address: 0x19ed80, Func Offset: 0x3f0
	// Line 2345, Address: 0x19ed90, Func Offset: 0x400
	// Line 2346, Address: 0x19ed94, Func Offset: 0x404
	// Line 2345, Address: 0x19ed98, Func Offset: 0x408
	// Line 2349, Address: 0x19eda0, Func Offset: 0x410
	// Line 2353, Address: 0x19edac, Func Offset: 0x41c
	// Line 2350, Address: 0x19edb0, Func Offset: 0x420
	// Line 2353, Address: 0x19edb4, Func Offset: 0x424
	// Line 2350, Address: 0x19edb8, Func Offset: 0x428
	// Line 2353, Address: 0x19edbc, Func Offset: 0x42c
	// Line 2355, Address: 0x19ee04, Func Offset: 0x474
	// Line 2353, Address: 0x19ee08, Func Offset: 0x478
	// Line 2355, Address: 0x19ee0c, Func Offset: 0x47c
	// Line 2358, Address: 0x19ee18, Func Offset: 0x488
	// Line 2359, Address: 0x19ee28, Func Offset: 0x498
	// Line 2360, Address: 0x19ee2c, Func Offset: 0x49c
	// Line 2361, Address: 0x19ee38, Func Offset: 0x4a8
	// Line 2362, Address: 0x19ee48, Func Offset: 0x4b8
	// Line 2363, Address: 0x19ee4c, Func Offset: 0x4bc
	// Line 2362, Address: 0x19ee50, Func Offset: 0x4c0
	// Line 2366, Address: 0x19ee58, Func Offset: 0x4c8
	// Line 2370, Address: 0x19ee64, Func Offset: 0x4d4
	// Line 2367, Address: 0x19ee68, Func Offset: 0x4d8
	// Line 2370, Address: 0x19ee6c, Func Offset: 0x4dc
	// Line 2367, Address: 0x19ee70, Func Offset: 0x4e0
	// Line 2370, Address: 0x19ee74, Func Offset: 0x4e4
	// Line 2372, Address: 0x19eebc, Func Offset: 0x52c
	// Line 2373, Address: 0x19eed0, Func Offset: 0x540
	// Line 2375, Address: 0x19eef4, Func Offset: 0x564
	// Line 2378, Address: 0x19ef04, Func Offset: 0x574
	// Line 2379, Address: 0x19ef14, Func Offset: 0x584
	// Line 2380, Address: 0x19ef18, Func Offset: 0x588
	// Line 2381, Address: 0x19ef28, Func Offset: 0x598
	// Line 2382, Address: 0x19ef38, Func Offset: 0x5a8
	// Line 2383, Address: 0x19ef3c, Func Offset: 0x5ac
	// Line 2382, Address: 0x19ef40, Func Offset: 0x5b0
	// Line 2385, Address: 0x19ef48, Func Offset: 0x5b8
	// Line 2386, Address: 0x19ef50, Func Offset: 0x5c0
	// Line 2390, Address: 0x19ef58, Func Offset: 0x5c8
	// Line 2387, Address: 0x19ef5c, Func Offset: 0x5cc
	// Line 2390, Address: 0x19ef60, Func Offset: 0x5d0
	// Line 2387, Address: 0x19ef64, Func Offset: 0x5d4
	// Line 2390, Address: 0x19ef68, Func Offset: 0x5d8
	// Line 2392, Address: 0x19efb4, Func Offset: 0x624
	// Line 2393, Address: 0x19efc8, Func Offset: 0x638
	// Line 2395, Address: 0x19efec, Func Offset: 0x65c
	// Line 2398, Address: 0x19effc, Func Offset: 0x66c
	// Line 2399, Address: 0x19f00c, Func Offset: 0x67c
	// Line 2400, Address: 0x19f010, Func Offset: 0x680
	// Line 2401, Address: 0x19f018, Func Offset: 0x688
	// Line 2403, Address: 0x19f028, Func Offset: 0x698
	// Line 2402, Address: 0x19f02c, Func Offset: 0x69c
	// Line 2404, Address: 0x19f03c, Func Offset: 0x6ac
	// Line 2406, Address: 0x19f040, Func Offset: 0x6b0
	// Line 2410, Address: 0x19f04c, Func Offset: 0x6bc
	// Line 2407, Address: 0x19f050, Func Offset: 0x6c0
	// Line 2410, Address: 0x19f054, Func Offset: 0x6c4
	// Line 2407, Address: 0x19f058, Func Offset: 0x6c8
	// Line 2410, Address: 0x19f05c, Func Offset: 0x6cc
	// Line 2412, Address: 0x19f0a4, Func Offset: 0x714
	// Line 2413, Address: 0x19f0b8, Func Offset: 0x728
	// Line 2415, Address: 0x19f0dc, Func Offset: 0x74c
	// Line 2418, Address: 0x19f0ec, Func Offset: 0x75c
	// Line 2419, Address: 0x19f0fc, Func Offset: 0x76c
	// Line 2420, Address: 0x19f100, Func Offset: 0x770
	// Line 2421, Address: 0x19f108, Func Offset: 0x778
	// Line 2422, Address: 0x19f118, Func Offset: 0x788
	// Line 2423, Address: 0x19f11c, Func Offset: 0x78c
	// Line 2422, Address: 0x19f120, Func Offset: 0x790
	// Line 2426, Address: 0x19f128, Func Offset: 0x798
	// Line 2430, Address: 0x19f134, Func Offset: 0x7a4
	// Line 2427, Address: 0x19f138, Func Offset: 0x7a8
	// Line 2430, Address: 0x19f13c, Func Offset: 0x7ac
	// Line 2427, Address: 0x19f140, Func Offset: 0x7b0
	// Line 2430, Address: 0x19f144, Func Offset: 0x7b4
	// Line 2433, Address: 0x19f18c, Func Offset: 0x7fc
	// Line 2434, Address: 0x19f19c, Func Offset: 0x80c
	// Line 2435, Address: 0x19f1ac, Func Offset: 0x81c
	// Line 2437, Address: 0x19f1b0, Func Offset: 0x820
	// Line 2435, Address: 0x19f1b8, Func Offset: 0x828
	// Line 2437, Address: 0x19f1bc, Func Offset: 0x82c
	// Line 2438, Address: 0x19f1c4, Func Offset: 0x834
	// Line 2441, Address: 0x19f1d4, Func Offset: 0x844
	// Line 2442, Address: 0x19f1e4, Func Offset: 0x854
	// Line 2443, Address: 0x19f1e8, Func Offset: 0x858
	// Line 2444, Address: 0x19f1f8, Func Offset: 0x868
	// Line 2445, Address: 0x19f208, Func Offset: 0x878
	// Line 2446, Address: 0x19f20c, Func Offset: 0x87c
	// Line 2445, Address: 0x19f210, Func Offset: 0x880
	// Line 2449, Address: 0x19f218, Func Offset: 0x888
	// Line 2453, Address: 0x19f224, Func Offset: 0x894
	// Line 2450, Address: 0x19f228, Func Offset: 0x898
	// Line 2453, Address: 0x19f22c, Func Offset: 0x89c
	// Line 2450, Address: 0x19f230, Func Offset: 0x8a0
	// Line 2453, Address: 0x19f234, Func Offset: 0x8a4
	// Line 2456, Address: 0x19f27c, Func Offset: 0x8ec
	// Line 2457, Address: 0x19f28c, Func Offset: 0x8fc
	// Line 2458, Address: 0x19f29c, Func Offset: 0x90c
	// Line 2460, Address: 0x19f2a0, Func Offset: 0x910
	// Line 2458, Address: 0x19f2a8, Func Offset: 0x918
	// Line 2460, Address: 0x19f2ac, Func Offset: 0x91c
	// Line 2461, Address: 0x19f2b4, Func Offset: 0x924
	// Line 2464, Address: 0x19f2c4, Func Offset: 0x934
	// Line 2471, Address: 0x19f2d8, Func Offset: 0x948
	// Line 2472, Address: 0x19f2e0, Func Offset: 0x950
	// Line 2476, Address: 0x19f2e8, Func Offset: 0x958
	// Line 2479, Address: 0x19f33c, Func Offset: 0x9ac
	// Line 2480, Address: 0x19f34c, Func Offset: 0x9bc
	// Line 2481, Address: 0x19f35c, Func Offset: 0x9cc
	// Line 2483, Address: 0x19f360, Func Offset: 0x9d0
	// Line 2481, Address: 0x19f368, Func Offset: 0x9d8
	// Line 2483, Address: 0x19f36c, Func Offset: 0x9dc
	// Line 2487, Address: 0x19f374, Func Offset: 0x9e4
	// Line 2488, Address: 0x19f384, Func Offset: 0x9f4
	// Line 2489, Address: 0x19f388, Func Offset: 0x9f8
	// Line 2488, Address: 0x19f38c, Func Offset: 0x9fc
	// Line 2489, Address: 0x19f390, Func Offset: 0xa00
	// Line 2491, Address: 0x19f398, Func Offset: 0xa08
	// Line 2492, Address: 0x19f3ac, Func Offset: 0xa1c
	// Line 2493, Address: 0x19f3b0, Func Offset: 0xa20
	// Line 2492, Address: 0x19f3b4, Func Offset: 0xa24
	// Line 2493, Address: 0x19f3b8, Func Offset: 0xa28
	// Line 2492, Address: 0x19f3bc, Func Offset: 0xa2c
	// Line 2494, Address: 0x19f3c4, Func Offset: 0xa34
	// Line 2495, Address: 0x19f3c8, Func Offset: 0xa38
	// Line 2498, Address: 0x19f3cc, Func Offset: 0xa3c
	// Line 2495, Address: 0x19f3d0, Func Offset: 0xa40
	// Line 2496, Address: 0x19f3d4, Func Offset: 0xa44
	// Line 2499, Address: 0x19f3e0, Func Offset: 0xa50
	// Line 2500, Address: 0x19f3f8, Func Offset: 0xa68
	// Line 2501, Address: 0x19f408, Func Offset: 0xa78
	// Line 2502, Address: 0x19f40c, Func Offset: 0xa7c
	// Line 2501, Address: 0x19f410, Func Offset: 0xa80
	// Line 2504, Address: 0x19f418, Func Offset: 0xa88
	// Line 2505, Address: 0x19f41c, Func Offset: 0xa8c
	// Line 2507, Address: 0x19f420, Func Offset: 0xa90
	// Line 2508, Address: 0x19f42c, Func Offset: 0xa9c
	// Line 2510, Address: 0x19f480, Func Offset: 0xaf0
	// Line 2511, Address: 0x19f498, Func Offset: 0xb08
	// Line 2514, Address: 0x19f4a8, Func Offset: 0xb18
	// Line 2515, Address: 0x19f4b4, Func Offset: 0xb24
	// Line 2517, Address: 0x19f504, Func Offset: 0xb74
	// Line 2515, Address: 0x19f508, Func Offset: 0xb78
	// Line 2517, Address: 0x19f50c, Func Offset: 0xb7c
	// Line 2518, Address: 0x19f514, Func Offset: 0xb84
	// Line 2520, Address: 0x19f564, Func Offset: 0xbd4
	// Line 2518, Address: 0x19f568, Func Offset: 0xbd8
	// Line 2520, Address: 0x19f56c, Func Offset: 0xbdc
	// Line 2521, Address: 0x19f574, Func Offset: 0xbe4
	// Line 2523, Address: 0x19f5c8, Func Offset: 0xc38
	// Line 2524, Address: 0x19f5d4, Func Offset: 0xc44
	// Line 2525, Address: 0x19f5e4, Func Offset: 0xc54
	// Line 2526, Address: 0x19f634, Func Offset: 0xca4
	// Line 2525, Address: 0x19f638, Func Offset: 0xca8
	// Line 2526, Address: 0x19f63c, Func Offset: 0xcac
	// Line 2529, Address: 0x19f650, Func Offset: 0xcc0
	// Line 2530, Address: 0x19f6ac, Func Offset: 0xd1c
	// Func End, Address: 0x19f6e0, Func Offset: 0xd50
}

// zUI_ScenePortalSetToCurrentLevel__FP6zScene
// Start address: 0x19f6e0
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc)
{
	uint32 i;
	// Line 2206, Address: 0x19f6e0, Func Offset: 0
	// Line 2210, Address: 0x19f6e4, Func Offset: 0x4
	// Line 2216, Address: 0x19f700, Func Offset: 0x20
	// Line 2218, Address: 0x19f71c, Func Offset: 0x3c
	// Line 2219, Address: 0x19f724, Func Offset: 0x44
	// Line 2220, Address: 0x19f728, Func Offset: 0x48
	// Line 2222, Address: 0x19f738, Func Offset: 0x58
	// Func End, Address: 0x19f740, Func Offset: 0x60
}

// zUIPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f740
int32 zUIPortalEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	int32 result;
	// Line 2189, Address: 0x19f740, Func Offset: 0
	// Line 2190, Address: 0x19f758, Func Offset: 0x18
	// Line 2192, Address: 0x19f764, Func Offset: 0x24
	// Line 2193, Address: 0x19f770, Func Offset: 0x30
	// Line 2195, Address: 0x19f7a8, Func Offset: 0x68
	// Line 2197, Address: 0x19f7f4, Func Offset: 0xb4
	// Line 2199, Address: 0x19f7f8, Func Offset: 0xb8
	// Line 2200, Address: 0x19f7fc, Func Offset: 0xbc
	// Func End, Address: 0x19f814, Func Offset: 0xd4
}

// zUI_ParseINI__FP8xIniFile
// Start address: 0x19f820
void zUI_ParseINI(xIniFile* ini)
{
	int8 itemName[16];
	int8* value;
	int8* tok;
	int8* ltok;
	uint32 i;
	uint32 j;
	// Line 2113, Address: 0x19f820, Func Offset: 0
	// Line 2117, Address: 0x19f824, Func Offset: 0x4
	// Line 2113, Address: 0x19f828, Func Offset: 0x8
	// Line 2117, Address: 0x19f82c, Func Offset: 0xc
	// Line 2113, Address: 0x19f830, Func Offset: 0x10
	// Line 2117, Address: 0x19f844, Func Offset: 0x24
	// Line 2113, Address: 0x19f848, Func Offset: 0x28
	// Line 2117, Address: 0x19f850, Func Offset: 0x30
	// Line 2118, Address: 0x19f858, Func Offset: 0x38
	// Line 2119, Address: 0x19f870, Func Offset: 0x50
	// Line 2120, Address: 0x19f87c, Func Offset: 0x5c
	// Line 2121, Address: 0x19f88c, Func Offset: 0x6c
	// Line 2122, Address: 0x19f890, Func Offset: 0x70
	// Line 2121, Address: 0x19f894, Func Offset: 0x74
	// Line 2122, Address: 0x19f89c, Func Offset: 0x7c
	// Line 2126, Address: 0x19f8a0, Func Offset: 0x80
	// Line 2128, Address: 0x19f8b4, Func Offset: 0x94
	// Line 2129, Address: 0x19f8bc, Func Offset: 0x9c
	// Line 2130, Address: 0x19f8c0, Func Offset: 0xa0
	// Line 2129, Address: 0x19f8c4, Func Offset: 0xa4
	// Line 2131, Address: 0x19f8c8, Func Offset: 0xa8
	// Line 2132, Address: 0x19f8cc, Func Offset: 0xac
	// Line 2133, Address: 0x19f8d8, Func Offset: 0xb8
	// Line 2134, Address: 0x19f8e8, Func Offset: 0xc8
	// Line 2137, Address: 0x19f8ec, Func Offset: 0xcc
	// Line 2136, Address: 0x19f8fc, Func Offset: 0xdc
	// Line 2134, Address: 0x19f900, Func Offset: 0xe0
	// Line 2135, Address: 0x19f904, Func Offset: 0xe4
	// Line 2137, Address: 0x19f908, Func Offset: 0xe8
	// Line 2138, Address: 0x19f910, Func Offset: 0xf0
	// Line 2139, Address: 0x19f918, Func Offset: 0xf8
	// Line 2141, Address: 0x19f91c, Func Offset: 0xfc
	// Line 2139, Address: 0x19f92c, Func Offset: 0x10c
	// Line 2140, Address: 0x19f930, Func Offset: 0x110
	// Line 2141, Address: 0x19f934, Func Offset: 0x114
	// Line 2143, Address: 0x19f940, Func Offset: 0x120
	// Line 2145, Address: 0x19f948, Func Offset: 0x128
	// Line 2146, Address: 0x19f950, Func Offset: 0x130
	// Line 2147, Address: 0x19f954, Func Offset: 0x134
	// Line 2148, Address: 0x19f958, Func Offset: 0x138
	// Line 2147, Address: 0x19f95c, Func Offset: 0x13c
	// Line 2148, Address: 0x19f960, Func Offset: 0x140
	// Line 2149, Address: 0x19f970, Func Offset: 0x150
	// Line 2150, Address: 0x19f980, Func Offset: 0x160
	// Func End, Address: 0x19f9c8, Func Offset: 0x1a8
}

// zUIEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f9d0
int32 zUIEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zUI* s;
	uint32 theTextureID;
	RwTexture* texture;
	// Line 1722, Address: 0x19f9d0, Func Offset: 0
	// Line 1730, Address: 0x19f9d4, Func Offset: 0x4
	// Line 1722, Address: 0x19f9d8, Func Offset: 0x8
	// Line 1730, Address: 0x19f9e8, Func Offset: 0x18
	// Line 1732, Address: 0x19fa54, Func Offset: 0x84
	// Line 1733, Address: 0x19fa58, Func Offset: 0x88
	// Line 1734, Address: 0x19fa5c, Func Offset: 0x8c
	// Line 1733, Address: 0x19fa64, Func Offset: 0x94
	// Line 1734, Address: 0x19fa68, Func Offset: 0x98
	// Line 1735, Address: 0x19fa70, Func Offset: 0xa0
	// Line 1738, Address: 0x19fa78, Func Offset: 0xa8
	// Line 1739, Address: 0x19fa7c, Func Offset: 0xac
	// Line 1738, Address: 0x19fa84, Func Offset: 0xb4
	// Line 1739, Address: 0x19fa88, Func Offset: 0xb8
	// Line 1740, Address: 0x19fa90, Func Offset: 0xc0
	// Line 1743, Address: 0x19fa98, Func Offset: 0xc8
	// Line 1744, Address: 0x19fb20, Func Offset: 0x150
	// Line 1751, Address: 0x19fb28, Func Offset: 0x158
	// Line 1755, Address: 0x19fb40, Func Offset: 0x170
	// Line 1757, Address: 0x19fb48, Func Offset: 0x178
	// Line 1759, Address: 0x19fb4c, Func Offset: 0x17c
	// Line 1757, Address: 0x19fb58, Func Offset: 0x188
	// Line 1759, Address: 0x19fb5c, Func Offset: 0x18c
	// Line 1762, Address: 0x19fb64, Func Offset: 0x194
	// Line 1764, Address: 0x19fb6c, Func Offset: 0x19c
	// Line 1766, Address: 0x19fb70, Func Offset: 0x1a0
	// Line 1774, Address: 0x19fb88, Func Offset: 0x1b8
	// Line 1778, Address: 0x19fba0, Func Offset: 0x1d0
	// Line 1781, Address: 0x19fba8, Func Offset: 0x1d8
	// Line 1783, Address: 0x19fbb8, Func Offset: 0x1e8
	// Line 1786, Address: 0x19fbc0, Func Offset: 0x1f0
	// Line 1787, Address: 0x19fbc4, Func Offset: 0x1f4
	// Line 1786, Address: 0x19fbcc, Func Offset: 0x1fc
	// Line 1787, Address: 0x19fbd0, Func Offset: 0x200
	// Line 1790, Address: 0x19fbd8, Func Offset: 0x208
	// Line 1791, Address: 0x19fbe8, Func Offset: 0x218
	// Line 1793, Address: 0x19fbf4, Func Offset: 0x224
	// Line 1795, Address: 0x19fbfc, Func Offset: 0x22c
	// Line 1796, Address: 0x19fc00, Func Offset: 0x230
	// Line 1797, Address: 0x19fc18, Func Offset: 0x248
	// Line 1800, Address: 0x19fc28, Func Offset: 0x258
	// Line 1801, Address: 0x19fc38, Func Offset: 0x268
	// Line 1802, Address: 0x19fc44, Func Offset: 0x274
	// Line 1804, Address: 0x19fc4c, Func Offset: 0x27c
	// Line 1805, Address: 0x19fc50, Func Offset: 0x280
	// Line 1806, Address: 0x19fc5c, Func Offset: 0x28c
	// Line 1807, Address: 0x19fc6c, Func Offset: 0x29c
	// Line 1809, Address: 0x19fc74, Func Offset: 0x2a4
	// Line 1810, Address: 0x19fc78, Func Offset: 0x2a8
	// Line 1811, Address: 0x19fc84, Func Offset: 0x2b4
	// Line 1812, Address: 0x19fc94, Func Offset: 0x2c4
	// Line 1814, Address: 0x19fc9c, Func Offset: 0x2cc
	// Line 1812, Address: 0x19fca0, Func Offset: 0x2d0
	// Line 1816, Address: 0x19fca4, Func Offset: 0x2d4
	// Line 1819, Address: 0x19fcac, Func Offset: 0x2dc
	// Line 1822, Address: 0x19fcb0, Func Offset: 0x2e0
	// Line 1824, Address: 0x19fcb8, Func Offset: 0x2e8
	// Line 1827, Address: 0x19fcc0, Func Offset: 0x2f0
	// Line 1829, Address: 0x19fcc8, Func Offset: 0x2f8
	// Line 1830, Address: 0x19fccc, Func Offset: 0x2fc
	// Line 1833, Address: 0x19fcd8, Func Offset: 0x308
	// Line 1835, Address: 0x19fcdc, Func Offset: 0x30c
	// Line 1838, Address: 0x19fce8, Func Offset: 0x318
	// Line 1847, Address: 0x19fcec, Func Offset: 0x31c
	// Line 1850, Address: 0x19fcf0, Func Offset: 0x320
	// Line 1849, Address: 0x19fcf8, Func Offset: 0x328
	// Line 1850, Address: 0x19fcfc, Func Offset: 0x32c
	// Func End, Address: 0x19fd0c, Func Offset: 0x33c
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
	// Line 1494, Address: 0x19fd10, Func Offset: 0
	// Line 1500, Address: 0x19fd54, Func Offset: 0x44
	// Line 1502, Address: 0x19fd64, Func Offset: 0x54
	// Line 1511, Address: 0x19fdc8, Func Offset: 0xb8
	// Line 1515, Address: 0x19fdd0, Func Offset: 0xc0
	// Line 1519, Address: 0x19fde0, Func Offset: 0xd0
	// Line 1528, Address: 0x19fdf8, Func Offset: 0xe8
	// Line 1531, Address: 0x19fe08, Func Offset: 0xf8
	// Line 1532, Address: 0x19fe10, Func Offset: 0x100
	// Line 1534, Address: 0x19fe18, Func Offset: 0x108
	// Line 1535, Address: 0x19fe1c, Func Offset: 0x10c
	// Line 1537, Address: 0x19fe24, Func Offset: 0x114
	// Line 1539, Address: 0x19fe2c, Func Offset: 0x11c
	// Line 1550, Address: 0x19fe30, Func Offset: 0x120
	// Line 1547, Address: 0x19fe34, Func Offset: 0x124
	// Line 1545, Address: 0x19fe38, Func Offset: 0x128
	// Line 1547, Address: 0x19fe3c, Func Offset: 0x12c
	// Line 1543, Address: 0x19fe40, Func Offset: 0x130
	// Line 1545, Address: 0x19fe44, Func Offset: 0x134
	// Line 1548, Address: 0x19fe48, Func Offset: 0x138
	// Line 1568, Address: 0x19fe50, Func Offset: 0x140
	// Line 1569, Address: 0x19fe54, Func Offset: 0x144
	// Line 1550, Address: 0x19fe60, Func Offset: 0x150
	// Line 1570, Address: 0x19fe64, Func Offset: 0x154
	// Line 1551, Address: 0x19fe68, Func Offset: 0x158
	// Line 1568, Address: 0x19fe6c, Func Offset: 0x15c
	// Line 1552, Address: 0x19fe70, Func Offset: 0x160
	// Line 1553, Address: 0x19fe74, Func Offset: 0x164
	// Line 1554, Address: 0x19fe78, Func Offset: 0x168
	// Line 1555, Address: 0x19fe7c, Func Offset: 0x16c
	// Line 1556, Address: 0x19fe80, Func Offset: 0x170
	// Line 1557, Address: 0x19fe84, Func Offset: 0x174
	// Line 1568, Address: 0x19fe88, Func Offset: 0x178
	// Line 1569, Address: 0x19fe90, Func Offset: 0x180
	// Line 1570, Address: 0x19fea0, Func Offset: 0x190
	// Line 1571, Address: 0x19fed8, Func Offset: 0x1c8
	// Line 1570, Address: 0x19fedc, Func Offset: 0x1cc
	// Line 1571, Address: 0x19feec, Func Offset: 0x1dc
	// Line 1570, Address: 0x19fef4, Func Offset: 0x1e4
	// Line 1571, Address: 0x19fefc, Func Offset: 0x1ec
	// Line 1578, Address: 0x19ff54, Func Offset: 0x244
	// Line 1579, Address: 0x19ff5c, Func Offset: 0x24c
	// Line 1580, Address: 0x19ff7c, Func Offset: 0x26c
	// Line 1582, Address: 0x19ff90, Func Offset: 0x280
	// Line 1583, Address: 0x19ff98, Func Offset: 0x288
	// Line 1585, Address: 0x19ffa4, Func Offset: 0x294
	// Line 1587, Address: 0x19ffa8, Func Offset: 0x298
	// Line 1586, Address: 0x19ffac, Func Offset: 0x29c
	// Line 1594, Address: 0x19ffb0, Func Offset: 0x2a0
	// Line 1587, Address: 0x19ffb4, Func Offset: 0x2a4
	// Line 1596, Address: 0x19ffb8, Func Offset: 0x2a8
	// Line 1587, Address: 0x19ffbc, Func Offset: 0x2ac
	// Line 1594, Address: 0x19ffc0, Func Offset: 0x2b0
	// Line 1595, Address: 0x19ffc4, Func Offset: 0x2b4
	// Line 1603, Address: 0x19ffcc, Func Offset: 0x2bc
	// Line 1604, Address: 0x19ffd4, Func Offset: 0x2c4
	// Line 1612, Address: 0x19ffdc, Func Offset: 0x2cc
	// Line 1613, Address: 0x19ffe4, Func Offset: 0x2d4
	// Line 1621, Address: 0x19ffec, Func Offset: 0x2dc
	// Line 1622, Address: 0x19fff4, Func Offset: 0x2e4
	// Line 1589, Address: 0x19fffc, Func Offset: 0x2ec
	// Line 1598, Address: 0x1a0004, Func Offset: 0x2f4
	// Line 1590, Address: 0x1a000c, Func Offset: 0x2fc
	// Line 1617, Address: 0x1a0014, Func Offset: 0x304
	// Line 1591, Address: 0x1a001c, Func Offset: 0x30c
	// Line 1592, Address: 0x1a0024, Func Offset: 0x314
	// Line 1596, Address: 0x1a002c, Func Offset: 0x31c
	// Line 1599, Address: 0x1a004c, Func Offset: 0x33c
	// Line 1608, Address: 0x1a0054, Func Offset: 0x344
	// Line 1600, Address: 0x1a005c, Func Offset: 0x34c
	// Line 1601, Address: 0x1a0064, Func Offset: 0x354
	// Line 1605, Address: 0x1a006c, Func Offset: 0x35c
	// Line 1607, Address: 0x1a008c, Func Offset: 0x37c
	// Line 1616, Address: 0x1a0094, Func Offset: 0x384
	// Line 1609, Address: 0x1a009c, Func Offset: 0x38c
	// Line 1618, Address: 0x1a00a4, Func Offset: 0x394
	// Line 1593, Address: 0x1a00ac, Func Offset: 0x39c
	// Line 1602, Address: 0x1a00b4, Func Offset: 0x3a4
	// Line 1610, Address: 0x1a00bc, Func Offset: 0x3ac
	// Line 1619, Address: 0x1a00c4, Func Offset: 0x3b4
	// Line 1611, Address: 0x1a00cc, Func Offset: 0x3bc
	// Line 1620, Address: 0x1a00d4, Func Offset: 0x3c4
	// Line 1614, Address: 0x1a00dc, Func Offset: 0x3cc
	// Line 1623, Address: 0x1a00fc, Func Offset: 0x3ec
	// Line 1630, Address: 0x1a0118, Func Offset: 0x408
	// Line 1632, Address: 0x1a01e8, Func Offset: 0x4d8
	// Line 1634, Address: 0x1a02b8, Func Offset: 0x5a8
	// Line 1636, Address: 0x1a0388, Func Offset: 0x678
	// Line 1639, Address: 0x1a0458, Func Offset: 0x748
	// Line 1640, Address: 0x1a0464, Func Offset: 0x754
	// Line 1641, Address: 0x1a0470, Func Offset: 0x760
	// Line 1642, Address: 0x1a047c, Func Offset: 0x76c
	// Line 1643, Address: 0x1a0488, Func Offset: 0x778
	// Line 1644, Address: 0x1a0494, Func Offset: 0x784
	// Line 1645, Address: 0x1a04a0, Func Offset: 0x790
	// Line 1648, Address: 0x1a04ac, Func Offset: 0x79c
	// Line 1651, Address: 0x1a04cc, Func Offset: 0x7bc
	// Line 1655, Address: 0x1a04d8, Func Offset: 0x7c8
	// Line 1663, Address: 0x1a04e4, Func Offset: 0x7d4
	// Line 1670, Address: 0x1a05b8, Func Offset: 0x8a8
	// Line 1663, Address: 0x1a05bc, Func Offset: 0x8ac
	// Line 1670, Address: 0x1a05c0, Func Offset: 0x8b0
	// Line 1663, Address: 0x1a05c4, Func Offset: 0x8b4
	// Line 1670, Address: 0x1a05c8, Func Offset: 0x8b8
	// Line 1673, Address: 0x1a05f0, Func Offset: 0x8e0
	// Line 1674, Address: 0x1a05fc, Func Offset: 0x8ec
	// Line 1673, Address: 0x1a0600, Func Offset: 0x8f0
	// Line 1675, Address: 0x1a0604, Func Offset: 0x8f4
	// Line 1677, Address: 0x1a0620, Func Offset: 0x910
	// Line 1681, Address: 0x1a063c, Func Offset: 0x92c
	// Line 1682, Address: 0x1a0654, Func Offset: 0x944
	// Line 1683, Address: 0x1a065c, Func Offset: 0x94c
	// Line 1687, Address: 0x1a0668, Func Offset: 0x958
	// Line 1690, Address: 0x1a0670, Func Offset: 0x960
	// Line 1691, Address: 0x1a0678, Func Offset: 0x968
	// Line 1690, Address: 0x1a0688, Func Offset: 0x978
	// Line 1691, Address: 0x1a0694, Func Offset: 0x984
	// Line 1694, Address: 0x1a06a0, Func Offset: 0x990
	// Line 1697, Address: 0x1a06a8, Func Offset: 0x998
	// Line 1698, Address: 0x1a06c0, Func Offset: 0x9b0
	// Line 1699, Address: 0x1a06c8, Func Offset: 0x9b8
	// Line 1703, Address: 0x1a06d4, Func Offset: 0x9c4
	// Line 1706, Address: 0x1a06e0, Func Offset: 0x9d0
	// Line 1708, Address: 0x1a06e8, Func Offset: 0x9d8
	// Func End, Address: 0x1a0730, Func Offset: 0xa20
}

// zUIRenderAll__Fv
// Start address: 0x1a0730
void zUIRenderAll()
{
	uint8 rendering_models;
	int32 i;
	// Line 1395, Address: 0x1a0730, Func Offset: 0
	// Line 1396, Address: 0x1a0734, Func Offset: 0x4
	// Line 1395, Address: 0x1a0738, Func Offset: 0x8
	// Line 1396, Address: 0x1a073c, Func Offset: 0xc
	// Line 1395, Address: 0x1a0740, Func Offset: 0x10
	// Line 1397, Address: 0x1a0744, Func Offset: 0x14
	// Line 1395, Address: 0x1a0748, Func Offset: 0x18
	// Line 1396, Address: 0x1a074c, Func Offset: 0x1c
	// Line 1395, Address: 0x1a0750, Func Offset: 0x20
	// Line 1397, Address: 0x1a0754, Func Offset: 0x24
	// Line 1396, Address: 0x1a0758, Func Offset: 0x28
	// Line 1397, Address: 0x1a0760, Func Offset: 0x30
	// Line 1398, Address: 0x1a076c, Func Offset: 0x3c
	// Line 1401, Address: 0x1a0778, Func Offset: 0x48
	// Line 1402, Address: 0x1a0784, Func Offset: 0x54
	// Line 1403, Address: 0x1a0794, Func Offset: 0x64
	// Line 1406, Address: 0x1a07ac, Func Offset: 0x7c
	// Line 1407, Address: 0x1a07b8, Func Offset: 0x88
	// Line 1408, Address: 0x1a07cc, Func Offset: 0x9c
	// Line 1411, Address: 0x1a07d0, Func Offset: 0xa0
	// Line 1410, Address: 0x1a07d4, Func Offset: 0xa4
	// Line 1411, Address: 0x1a07d8, Func Offset: 0xa8
	// Line 1415, Address: 0x1a07f4, Func Offset: 0xc4
	// Line 1421, Address: 0x1a080c, Func Offset: 0xdc
	// Line 1423, Address: 0x1a081c, Func Offset: 0xec
	// Line 1425, Address: 0x1a0834, Func Offset: 0x104
	// Line 1426, Address: 0x1a083c, Func Offset: 0x10c
	// Line 1429, Address: 0x1a0840, Func Offset: 0x110
	// Line 1430, Address: 0x1a0848, Func Offset: 0x118
	// Line 1434, Address: 0x1a0850, Func Offset: 0x120
	// Line 1439, Address: 0x1a0864, Func Offset: 0x134
	// Line 1441, Address: 0x1a0878, Func Offset: 0x148
	// Line 1443, Address: 0x1a0880, Func Offset: 0x150
	// Line 1446, Address: 0x1a0888, Func Offset: 0x158
	// Line 1450, Address: 0x1a0890, Func Offset: 0x160
	// Line 1454, Address: 0x1a08a8, Func Offset: 0x178
	// Func End, Address: 0x1a08c0, Func Offset: 0x190
}

// iRenderQSort_Face__FPCvPCv
// Start address: 0x1a08c0
int32 iRenderQSort_Face(void* arg1, void* arg2)
{
	_zUI* f1;
	_zUI* f2;
	uint8 font1;
	uint8 font2;
	// Line 1360, Address: 0x1a08c0, Func Offset: 0
	// Line 1361, Address: 0x1a08c4, Func Offset: 0x4
	// Line 1367, Address: 0x1a08cc, Func Offset: 0xc
	// Line 1369, Address: 0x1a08dc, Func Offset: 0x1c
	// Line 1370, Address: 0x1a08f8, Func Offset: 0x38
	// Line 1373, Address: 0x1a0910, Func Offset: 0x50
	// Line 1375, Address: 0x1a0950, Func Offset: 0x90
	// Line 1376, Address: 0x1a0968, Func Offset: 0xa8
	// Line 1384, Address: 0x1a0990, Func Offset: 0xd0
	// Line 1385, Address: 0x1a099c, Func Offset: 0xdc
	// Line 1388, Address: 0x1a09a8, Func Offset: 0xe8
	// Line 1391, Address: 0x1a09c0, Func Offset: 0x100
	// Func End, Address: 0x1a09c8, Func Offset: 0x108
}

// zUIRenderIteratorInsert__FP5xBaseP6zScenePv
// Start address: 0x1a09d0
xBase* zUIRenderIteratorInsert(xBase* b)
{
	// Line 1337, Address: 0x1a09d0, Func Offset: 0
	// Line 1343, Address: 0x1a09dc, Func Offset: 0xc
	// Line 1337, Address: 0x1a09e0, Func Offset: 0x10
	// Line 1344, Address: 0x1a09f4, Func Offset: 0x24
	// Func End, Address: 0x1a09fc, Func Offset: 0x2c
}

// zUI_Update__FP4_zUIP6xScenef
// Start address: 0x1a0a00
void zUI_Update(_zUI* ent, float32 dt)
{
	// Line 1216, Address: 0x1a0a00, Func Offset: 0
	// Line 1220, Address: 0x1a0a0c, Func Offset: 0xc
	// Line 1221, Address: 0x1a0a30, Func Offset: 0x30
	// Line 1223, Address: 0x1a0a50, Func Offset: 0x50
	// Line 1224, Address: 0x1a0a58, Func Offset: 0x58
	// Line 1227, Address: 0x1a0a64, Func Offset: 0x64
	// Line 1230, Address: 0x1a0a7c, Func Offset: 0x7c
	// Line 1231, Address: 0x1a0a84, Func Offset: 0x84
	// Line 1232, Address: 0x1a0a90, Func Offset: 0x90
	// Line 1233, Address: 0x1a0a98, Func Offset: 0x98
	// Line 1234, Address: 0x1a0aa4, Func Offset: 0xa4
	// Line 1235, Address: 0x1a0ab0, Func Offset: 0xb0
	// Line 1236, Address: 0x1a0ab8, Func Offset: 0xb8
	// Line 1237, Address: 0x1a0ac4, Func Offset: 0xc4
	// Line 1238, Address: 0x1a0ad0, Func Offset: 0xd0
	// Line 1239, Address: 0x1a0ad8, Func Offset: 0xd8
	// Line 1240, Address: 0x1a0ae4, Func Offset: 0xe4
	// Line 1241, Address: 0x1a0af0, Func Offset: 0xf0
	// Line 1243, Address: 0x1a0af8, Func Offset: 0xf8
	// Line 1244, Address: 0x1a0b04, Func Offset: 0x104
	// Line 1250, Address: 0x1a0b10, Func Offset: 0x110
	// Line 1251, Address: 0x1a0b18, Func Offset: 0x118
	// Line 1257, Address: 0x1a0b24, Func Offset: 0x124
	// Line 1260, Address: 0x1a0b30, Func Offset: 0x130
	// Line 1262, Address: 0x1a0b38, Func Offset: 0x138
	// Line 1263, Address: 0x1a0b44, Func Offset: 0x144
	// Line 1264, Address: 0x1a0b50, Func Offset: 0x150
	// Line 1265, Address: 0x1a0b54, Func Offset: 0x154
	// Line 1266, Address: 0x1a0b60, Func Offset: 0x160
	// Line 1267, Address: 0x1a0b6c, Func Offset: 0x16c
	// Line 1268, Address: 0x1a0b78, Func Offset: 0x178
	// Line 1269, Address: 0x1a0b7c, Func Offset: 0x17c
	// Line 1270, Address: 0x1a0b88, Func Offset: 0x188
	// Line 1271, Address: 0x1a0b94, Func Offset: 0x194
	// Line 1272, Address: 0x1a0ba0, Func Offset: 0x1a0
	// Line 1273, Address: 0x1a0ba8, Func Offset: 0x1a8
	// Line 1274, Address: 0x1a0bb4, Func Offset: 0x1b4
	// Line 1275, Address: 0x1a0bc0, Func Offset: 0x1c0
	// Line 1277, Address: 0x1a0bc8, Func Offset: 0x1c8
	// Line 1278, Address: 0x1a0bd8, Func Offset: 0x1d8
	// Line 1279, Address: 0x1a0be4, Func Offset: 0x1e4
	// Line 1303, Address: 0x1a0bf0, Func Offset: 0x1f0
	// Line 1304, Address: 0x1a0c00, Func Offset: 0x200
	// Line 1305, Address: 0x1a0c0c, Func Offset: 0x20c
	// Line 1306, Address: 0x1a0c18, Func Offset: 0x218
	// Line 1307, Address: 0x1a0c28, Func Offset: 0x228
	// Line 1308, Address: 0x1a0c34, Func Offset: 0x234
	// Line 1309, Address: 0x1a0c40, Func Offset: 0x240
	// Line 1310, Address: 0x1a0c50, Func Offset: 0x250
	// Line 1311, Address: 0x1a0c5c, Func Offset: 0x25c
	// Line 1313, Address: 0x1a0c60, Func Offset: 0x260
	// Line 1317, Address: 0x1a0c70, Func Offset: 0x270
	// Func End, Address: 0x1a0c80, Func Offset: 0x280
}

// zUI_PreUpdate__FP4_zUIP6xScenef
// Start address: 0x1a0c80
void zUI_PreUpdate(_zUI* ent)
{
	_zUI* ui;
	int32 i;
	_tagxPad* pad;
	_tagxPad* p;
	// Line 938, Address: 0x1a0c80, Func Offset: 0
	// Line 941, Address: 0x1a0c94, Func Offset: 0x14
	// Line 938, Address: 0x1a0c98, Func Offset: 0x18
	// Line 952, Address: 0x1a0c9c, Func Offset: 0x1c
	// Line 943, Address: 0x1a0ca4, Func Offset: 0x24
	// Line 952, Address: 0x1a0ca8, Func Offset: 0x28
	// Line 956, Address: 0x1a0cb0, Func Offset: 0x30
	// Line 958, Address: 0x1a0cd4, Func Offset: 0x54
	// Line 959, Address: 0x1a0cd8, Func Offset: 0x58
	// Line 960, Address: 0x1a0cdc, Func Offset: 0x5c
	// Line 961, Address: 0x1a0ce4, Func Offset: 0x64
	// Line 962, Address: 0x1a0ce8, Func Offset: 0x68
	// Line 963, Address: 0x1a0cec, Func Offset: 0x6c
	// Line 965, Address: 0x1a0cf4, Func Offset: 0x74
	// Line 966, Address: 0x1a0cf8, Func Offset: 0x78
	// Line 967, Address: 0x1a0cfc, Func Offset: 0x7c
	// Line 969, Address: 0x1a0d04, Func Offset: 0x84
	// Line 970, Address: 0x1a0d08, Func Offset: 0x88
	// Line 975, Address: 0x1a0d10, Func Offset: 0x90
	// Line 981, Address: 0x1a0d48, Func Offset: 0xc8
	// Line 987, Address: 0x1a0d5c, Func Offset: 0xdc
	// Line 988, Address: 0x1a0d64, Func Offset: 0xe4
	// Line 989, Address: 0x1a0d6c, Func Offset: 0xec
	// Line 990, Address: 0x1a0d78, Func Offset: 0xf8
	// Line 991, Address: 0x1a0d84, Func Offset: 0x104
	// Line 992, Address: 0x1a0d8c, Func Offset: 0x10c
	// Line 993, Address: 0x1a0d98, Func Offset: 0x118
	// Line 994, Address: 0x1a0da4, Func Offset: 0x124
	// Line 995, Address: 0x1a0dac, Func Offset: 0x12c
	// Line 996, Address: 0x1a0db8, Func Offset: 0x138
	// Line 997, Address: 0x1a0dc4, Func Offset: 0x144
	// Line 1046, Address: 0x1a0dd0, Func Offset: 0x150
	// Line 1047, Address: 0x1a0de0, Func Offset: 0x160
	// Line 1048, Address: 0x1a0dec, Func Offset: 0x16c
	// Line 1050, Address: 0x1a0df0, Func Offset: 0x170
	// Line 1051, Address: 0x1a0e00, Func Offset: 0x180
	// Line 1052, Address: 0x1a0e0c, Func Offset: 0x18c
	// Line 1054, Address: 0x1a0e10, Func Offset: 0x190
	// Line 1055, Address: 0x1a0e20, Func Offset: 0x1a0
	// Line 1056, Address: 0x1a0e2c, Func Offset: 0x1ac
	// Line 1057, Address: 0x1a0e30, Func Offset: 0x1b0
	// Line 1058, Address: 0x1a0e40, Func Offset: 0x1c0
	// Line 1059, Address: 0x1a0e4c, Func Offset: 0x1cc
	// Line 1060, Address: 0x1a0e50, Func Offset: 0x1d0
	// Line 1061, Address: 0x1a0e60, Func Offset: 0x1e0
	// Line 1062, Address: 0x1a0e6c, Func Offset: 0x1ec
	// Line 1063, Address: 0x1a0e70, Func Offset: 0x1f0
	// Line 1064, Address: 0x1a0e80, Func Offset: 0x200
	// Line 1065, Address: 0x1a0e8c, Func Offset: 0x20c
	// Line 1067, Address: 0x1a0e90, Func Offset: 0x210
	// Line 1068, Address: 0x1a0ea4, Func Offset: 0x224
	// Line 1070, Address: 0x1a0eb0, Func Offset: 0x230
	// Line 1071, Address: 0x1a0ec4, Func Offset: 0x244
	// Line 1073, Address: 0x1a0ed0, Func Offset: 0x250
	// Line 1074, Address: 0x1a0ee4, Func Offset: 0x264
	// Line 1076, Address: 0x1a0ef0, Func Offset: 0x270
	// Line 1077, Address: 0x1a0f04, Func Offset: 0x284
	// Line 1081, Address: 0x1a0f10, Func Offset: 0x290
	// Line 1083, Address: 0x1a0f1c, Func Offset: 0x29c
	// Line 1085, Address: 0x1a0f24, Func Offset: 0x2a4
	// Line 1088, Address: 0x1a0f30, Func Offset: 0x2b0
	// Line 1093, Address: 0x1a0f40, Func Offset: 0x2c0
	// Line 1096, Address: 0x1a0f48, Func Offset: 0x2c8
	// Line 1097, Address: 0x1a0f50, Func Offset: 0x2d0
	// Line 1096, Address: 0x1a0f54, Func Offset: 0x2d4
	// Line 1098, Address: 0x1a0f5c, Func Offset: 0x2dc
	// Line 1100, Address: 0x1a0f64, Func Offset: 0x2e4
	// Line 1106, Address: 0x1a0f70, Func Offset: 0x2f0
	// Line 1110, Address: 0x1a0fb8, Func Offset: 0x338
	// Line 1117, Address: 0x1a0fc0, Func Offset: 0x340
	// Line 1112, Address: 0x1a0fc4, Func Offset: 0x344
	// Line 1111, Address: 0x1a0fc8, Func Offset: 0x348
	// Line 1112, Address: 0x1a0fcc, Func Offset: 0x34c
	// Line 1117, Address: 0x1a0fd0, Func Offset: 0x350
	// Line 1111, Address: 0x1a0fd4, Func Offset: 0x354
	// Line 1117, Address: 0x1a0fd8, Func Offset: 0x358
	// Line 1120, Address: 0x1a0fe8, Func Offset: 0x368
	// Line 1122, Address: 0x1a0ff4, Func Offset: 0x374
	// Line 1135, Address: 0x1a0ff8, Func Offset: 0x378
	// Line 1122, Address: 0x1a0ffc, Func Offset: 0x37c
	// Line 1123, Address: 0x1a1000, Func Offset: 0x380
	// Line 1135, Address: 0x1a1004, Func Offset: 0x384
	// Line 1123, Address: 0x1a1008, Func Offset: 0x388
	// Line 1135, Address: 0x1a1010, Func Offset: 0x390
	// Line 1141, Address: 0x1a1014, Func Offset: 0x394
	// Line 1135, Address: 0x1a1018, Func Offset: 0x398
	// Line 1141, Address: 0x1a101c, Func Offset: 0x39c
	// Line 1213, Address: 0x1a1028, Func Offset: 0x3a8
	// Func End, Address: 0x1a1044, Func Offset: 0x3c4
}

// zUI_Reset__FP4_zUI
// Start address: 0x1a1050
void zUI_Reset(_zUI* ent)
{
	// Line 919, Address: 0x1a1050, Func Offset: 0
	// Line 921, Address: 0x1a1064, Func Offset: 0x14
	// Line 923, Address: 0x1a1070, Func Offset: 0x20
	// Line 925, Address: 0x1a10d0, Func Offset: 0x80
	// Line 926, Address: 0x1a10d4, Func Offset: 0x84
	// Line 928, Address: 0x1a10e0, Func Offset: 0x90
	// Line 931, Address: 0x1a10e4, Func Offset: 0x94
	// Line 934, Address: 0x1a10f0, Func Offset: 0xa0
	// Line 935, Address: 0x1a10f4, Func Offset: 0xa4
	// Func End, Address: 0x1a110c, Func Offset: 0xbc
}

// zUI_Load__FP4_zUIP7xSerial
// Start address: 0x1a1110
void zUI_Load(_zUI* ent, xSerial* s)
{
	// Line 912, Address: 0x1a1110, Func Offset: 0
	// Func End, Address: 0x1a1118, Func Offset: 0x8
}

// zUI_Save__FP4_zUIP7xSerial
// Start address: 0x1a1120
void zUI_Save(_zUI* ent, xSerial* s)
{
	// Line 893, Address: 0x1a1120, Func Offset: 0
	// Func End, Address: 0x1a1128, Func Offset: 0x8
}

// zUI_Init__FP4_zUIP9xEntAsset
// Start address: 0x1a1130
void zUI_Init(_zUI* ent, xEntAsset* asset)
{
	zUIAsset* sasset;
	xSurface* surf;
	xModelInstance* minst;
	// Line 782, Address: 0x1a1130, Func Offset: 0
	// Line 783, Address: 0x1a1148, Func Offset: 0x18
	// Line 785, Address: 0x1a1150, Func Offset: 0x20
	// Line 797, Address: 0x1a1154, Func Offset: 0x24
	// Line 786, Address: 0x1a1158, Func Offset: 0x28
	// Line 794, Address: 0x1a115c, Func Offset: 0x2c
	// Line 795, Address: 0x1a1160, Func Offset: 0x30
	// Line 797, Address: 0x1a1164, Func Offset: 0x34
	// Line 799, Address: 0x1a117c, Func Offset: 0x4c
	// Line 801, Address: 0x1a120c, Func Offset: 0xdc
	// Line 802, Address: 0x1a1214, Func Offset: 0xe4
	// Line 805, Address: 0x1a1218, Func Offset: 0xe8
	// Line 808, Address: 0x1a121c, Func Offset: 0xec
	// Line 806, Address: 0x1a1220, Func Offset: 0xf0
	// Line 808, Address: 0x1a1224, Func Offset: 0xf4
	// Line 810, Address: 0x1a122c, Func Offset: 0xfc
	// Line 809, Address: 0x1a1230, Func Offset: 0x100
	// Line 810, Address: 0x1a1234, Func Offset: 0x104
	// Line 812, Address: 0x1a123c, Func Offset: 0x10c
	// Line 813, Address: 0x1a1248, Func Offset: 0x118
	// Line 815, Address: 0x1a1250, Func Offset: 0x120
	// Line 818, Address: 0x1a125c, Func Offset: 0x12c
	// Line 822, Address: 0x1a1264, Func Offset: 0x134
	// Line 823, Address: 0x1a1274, Func Offset: 0x144
	// Line 826, Address: 0x1a1278, Func Offset: 0x148
	// Line 828, Address: 0x1a1284, Func Offset: 0x154
	// Line 831, Address: 0x1a12e0, Func Offset: 0x1b0
	// Line 834, Address: 0x1a12ec, Func Offset: 0x1bc
	// Line 835, Address: 0x1a12f4, Func Offset: 0x1c4
	// Line 836, Address: 0x1a12fc, Func Offset: 0x1cc
	// Line 838, Address: 0x1a1304, Func Offset: 0x1d4
	// Line 839, Address: 0x1a1308, Func Offset: 0x1d8
	// Line 842, Address: 0x1a130c, Func Offset: 0x1dc
	// Line 843, Address: 0x1a1310, Func Offset: 0x1e0
	// Line 844, Address: 0x1a1318, Func Offset: 0x1e8
	// Line 845, Address: 0x1a131c, Func Offset: 0x1ec
	// Line 846, Address: 0x1a1320, Func Offset: 0x1f0
	// Line 850, Address: 0x1a1330, Func Offset: 0x200
	// Line 851, Address: 0x1a133c, Func Offset: 0x20c
	// Line 850, Address: 0x1a1340, Func Offset: 0x210
	// Line 851, Address: 0x1a1344, Func Offset: 0x214
	// Line 852, Address: 0x1a134c, Func Offset: 0x21c
	// Line 851, Address: 0x1a1350, Func Offset: 0x220
	// Line 852, Address: 0x1a1354, Func Offset: 0x224
	// Line 853, Address: 0x1a135c, Func Offset: 0x22c
	// Line 852, Address: 0x1a1360, Func Offset: 0x230
	// Line 853, Address: 0x1a1364, Func Offset: 0x234
	// Line 854, Address: 0x1a136c, Func Offset: 0x23c
	// Line 853, Address: 0x1a1370, Func Offset: 0x240
	// Line 854, Address: 0x1a1374, Func Offset: 0x244
	// Line 855, Address: 0x1a137c, Func Offset: 0x24c
	// Line 854, Address: 0x1a1380, Func Offset: 0x250
	// Line 855, Address: 0x1a1384, Func Offset: 0x254
	// Line 856, Address: 0x1a138c, Func Offset: 0x25c
	// Line 855, Address: 0x1a1390, Func Offset: 0x260
	// Line 856, Address: 0x1a1394, Func Offset: 0x264
	// Line 857, Address: 0x1a139c, Func Offset: 0x26c
	// Line 856, Address: 0x1a13a0, Func Offset: 0x270
	// Line 857, Address: 0x1a13a4, Func Offset: 0x274
	// Line 880, Address: 0x1a13b0, Func Offset: 0x280
	// Func End, Address: 0x1a13c8, Func Offset: 0x298
}

// load_anim_list__17@unnamed@zUI_cpp@FR4_zUI
// Start address: 0x1a13d0
void load_anim_list(_zUI& ui)
{
	zUIAsset& a;
	int32 used;
	xAnimState* ast;
	xAnimSingle* single;
	// Line 748, Address: 0x1a13d0, Func Offset: 0
	// Line 749, Address: 0x1a13e0, Func Offset: 0x10
	// Line 750, Address: 0x1a13ec, Func Offset: 0x1c
	// Line 751, Address: 0x1a13f0, Func Offset: 0x20
	// Line 752, Address: 0x1a13fc, Func Offset: 0x2c
	// Line 753, Address: 0x1a1400, Func Offset: 0x30
	// Line 754, Address: 0x1a1408, Func Offset: 0x38
	// Line 756, Address: 0x1a1410, Func Offset: 0x40
	// Line 758, Address: 0x1a141c, Func Offset: 0x4c
	// Line 762, Address: 0x1a1438, Func Offset: 0x68
	// Line 763, Address: 0x1a1448, Func Offset: 0x78
	// Line 764, Address: 0x1a1450, Func Offset: 0x80
	// Line 768, Address: 0x1a1454, Func Offset: 0x84
	// Line 764, Address: 0x1a1458, Func Offset: 0x88
	// Line 766, Address: 0x1a1460, Func Offset: 0x90
	// Line 767, Address: 0x1a1464, Func Offset: 0x94
	// Line 768, Address: 0x1a1468, Func Offset: 0x98
	// Line 769, Address: 0x1a146c, Func Offset: 0x9c
	// Func End, Address: 0x1a1484, Func Offset: 0xb4
}

// zUI_Init__FPvPv
// Start address: 0x1a1490
void zUI_Init(void* ent, void* asset)
{
	// Line 726, Address: 0x1a1490, Func Offset: 0
	// Func End, Address: 0x1a1498, Func Offset: 0x8
}

// zUI_Init__Fv
// Start address: 0x1a14a0
void zUI_Init()
{
	// Line 722, Address: 0x1a14a0, Func Offset: 0
	// Func End, Address: 0x1a14a8, Func Offset: 0x8
}

// Remove__6zUIMgrFP4_zUI
// Start address: 0x1a14b0
void zUIMgr::Remove(_zUI* ui)
{
	// Line 551, Address: 0x1a14b0, Func Offset: 0
	// Line 554, Address: 0x1a14b8, Func Offset: 0x8
	// Line 555, Address: 0x1a1548, Func Offset: 0x98
	// Line 556, Address: 0x1a15d0, Func Offset: 0x120
	// Func End, Address: 0x1a15d8, Func Offset: 0x128
}

// Touch__6zUIMgrFP4_zUI
// Start address: 0x1a15e0
void zUIMgr::Touch(_zUI* ui)
{
	// Line 537, Address: 0x1a15e0, Func Offset: 0
	// Line 541, Address: 0x1a15e4, Func Offset: 0x4
	// Line 537, Address: 0x1a15e8, Func Offset: 0x8
	// Line 541, Address: 0x1a15f8, Func Offset: 0x18
	// Line 546, Address: 0x1a1604, Func Offset: 0x24
	// Line 547, Address: 0x1a1610, Func Offset: 0x30
	// Line 548, Address: 0x1a16e8, Func Offset: 0x108
	// Func End, Address: 0x1a16fc, Func Offset: 0x11c
}

// Setup__6zUIMgrFP6zScene
// Start address: 0x1a1700
void zUIMgr::Setup(zScene* s)
{
	uint32 count;
	uint32 arraySize;
	_zUI* ui;
	uint32 i;
	// Line 509, Address: 0x1a1700, Func Offset: 0
	// Line 518, Address: 0x1a1704, Func Offset: 0x4
	// Line 509, Address: 0x1a1708, Func Offset: 0x8
	// Line 512, Address: 0x1a1724, Func Offset: 0x24
	// Line 515, Address: 0x1a172c, Func Offset: 0x2c
	// Line 516, Address: 0x1a1734, Func Offset: 0x34
	// Line 513, Address: 0x1a1738, Func Offset: 0x38
	// Line 517, Address: 0x1a173c, Func Offset: 0x3c
	// Line 518, Address: 0x1a1740, Func Offset: 0x40
	// Line 523, Address: 0x1a1750, Func Offset: 0x50
	// Line 520, Address: 0x1a1754, Func Offset: 0x54
	// Line 521, Address: 0x1a1758, Func Offset: 0x58
	// Line 522, Address: 0x1a175c, Func Offset: 0x5c
	// Line 523, Address: 0x1a1760, Func Offset: 0x60
	// Line 529, Address: 0x1a1770, Func Offset: 0x70
	// Line 527, Address: 0x1a1774, Func Offset: 0x74
	// Line 529, Address: 0x1a1778, Func Offset: 0x78
	// Line 531, Address: 0x1a178c, Func Offset: 0x8c
	// Line 532, Address: 0x1a1864, Func Offset: 0x164
	// Line 534, Address: 0x1a1880, Func Offset: 0x180
	// Func End, Address: 0x1a18a0, Func Offset: 0x1a0
}

// Update__6zUIMgrFP6zScenef
// Start address: 0x1a18a0
void zUIMgr::Update(zScene* s, float32 dt)
{
	uint32 i;
	// Line 480, Address: 0x1a18a0, Func Offset: 0
	// Line 493, Address: 0x1a18c0, Func Offset: 0x20
	// Line 480, Address: 0x1a18c4, Func Offset: 0x24
	// Line 493, Address: 0x1a18c8, Func Offset: 0x28
	// Line 496, Address: 0x1a18ec, Func Offset: 0x4c
	// Line 498, Address: 0x1a18fc, Func Offset: 0x5c
	// Line 499, Address: 0x1a190c, Func Offset: 0x6c
	// Line 503, Address: 0x1a1928, Func Offset: 0x88
	// Func End, Address: 0x1a1948, Func Offset: 0xa8
}

// PreUpdate__6zUIMgrFP6zScenef
// Start address: 0x1a1950
void zUIMgr::PreUpdate(zScene* s, float32 dt)
{
	_zUI* ui;
	uint32 i;
	_zUI* ui;
	uint32 i;
	// Line 434, Address: 0x1a1950, Func Offset: 0
	// Line 442, Address: 0x1a1970, Func Offset: 0x20
	// Line 444, Address: 0x1a1978, Func Offset: 0x28
	// Line 446, Address: 0x1a197c, Func Offset: 0x2c
	// Line 448, Address: 0x1a1988, Func Offset: 0x38
	// Line 450, Address: 0x1a198c, Func Offset: 0x3c
	// Line 454, Address: 0x1a19a0, Func Offset: 0x50
	// Line 456, Address: 0x1a19a8, Func Offset: 0x58
	// Line 458, Address: 0x1a19ac, Func Offset: 0x5c
	// Line 460, Address: 0x1a19b8, Func Offset: 0x68
	// Line 462, Address: 0x1a19c8, Func Offset: 0x78
	// Line 463, Address: 0x1a19dc, Func Offset: 0x8c
	// Line 477, Address: 0x1a19e0, Func Offset: 0x90
	// Func End, Address: 0x1a19fc, Func Offset: 0xac
}

