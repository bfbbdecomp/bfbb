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
typedef void(*type_7)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_9)(RxPipelineNode*);
typedef u32(*type_11)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_12)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_16)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_18)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_22)(void*, void*);
typedef s32(*type_24)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef u32(*type_32)(RxPipelineNode*, u32, u32, void*);
typedef xBase*(*type_33)(u32);
typedef void(*type_34)(_zUI*, xScene*, f32);
typedef s32(*type_35)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_38)(RxNodeDefinition*);
typedef s8*(*type_41)(xBase*);
typedef void(*type_42)(RxNodeDefinition*);
typedef u32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_47)(RxPipelineNode*);
typedef s8*(*type_49)(u32);
typedef void(*type_68)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_69)(xBase*, zScene*, void*);
typedef RpWorldSector*(*type_71)(RpWorldSector*);
typedef s32(*type_72)(void*, void*);
typedef s32(*type_83)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_85)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_96)(xEnt*, xScene*, f32);
typedef void(*type_99)(xEnt*, xVec3*);
typedef void(*type_101)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_103)(xEnt*);
typedef RwCamera*(*type_104)(RwCamera*);
typedef void(*type_111)(xMemPool*, void*);
typedef void(*type_125)(RwResEntry*);

typedef RwTexCoords* type_1[8];
typedef u8 type_2[22];
typedef xCollis type_3[18];
typedef f32 type_8[12];
typedef <unknown type (0xa510)> type_10[4];
typedef f32 type_14[12];
typedef f32 type_15[12];
typedef f32 type_17[12];
typedef xVec3 type_20[5];
typedef _tagxPad type_21[4];
typedef f32 type_23[12];
typedef s8 type_25[5];
typedef u8 type_26[5];
typedef f32 type_27[12];
typedef u16 type_28[3];
typedef xVec3 type_30[60];
typedef RwFrustumPlane type_31[6];
typedef RwV3d type_36[8];
typedef u8 type_37[2];
typedef f32 type_39[22];
typedef _tagTRCPadInfo type_40[4];
typedef s8 type_43[256];
typedef f32 type_44[22];
typedef menuWorld type_46[15];
typedef s8 type_48[256];
typedef _zUI* type_50[768];
typedef u32 type_51[15];
typedef u16 type_52[2];
typedef u32 type_53[15];
typedef f32 type_54[2];
typedef s8 type_55[2];
typedef f32 type_56[2];
typedef f32 type_57[2];
typedef u32 type_58[15];
typedef u32 type_59[72];
typedef f32 type_60[2];
typedef s8 type_61[4];
typedef RwTexCoords* type_62[8];
typedef xBase* type_63[72];
typedef s8 type_64[6];
typedef f32 type_65[2];
typedef f32 type_66[4];
typedef analog_data type_67[2];
typedef s8 type_70[32];
typedef s8 type_73[2];
typedef menuTask type_74[8];
typedef u8 type_75[4];
typedef RwSky2DVertex type_76[4];
typedef u8 type_77[2];
typedef xVec4 type_78[12];
typedef u8 type_79[4];
typedef u32 type_80[2];
typedef u8 type_81[2];
typedef u16 type_82[4];
typedef f32 type_84[6];
typedef u16 type_86[2];
typedef xVec3 type_87[3];
typedef f32 type_88[3];
typedef u16 type_89[2];
typedef u32 type_90[4];
typedef f32 type_91[3];
typedef xModelTag type_92[2];
typedef f32 type_93[3];
typedef u8 type_94[2];
typedef RpLight* type_95[2];
typedef RwFrame* type_97[2];
typedef f32 type_98[16];
typedef xEnt* type_100[111];
typedef f32 type_102[2];
typedef s8 type_105[16];
typedef u8 type_106[3];
typedef s8 type_107[16];
typedef s8 type_108[128];
typedef type_108 type_109[6];
typedef menuTaskInfo type_110[8];
typedef s8 type_112[16];
typedef u16 type_113[3];
typedef u8 type_114[14];
typedef xModelTag type_115[4];
typedef s8 type_116[32];
typedef s8 type_117[32];
typedef xModelInstance* type_118[14];
typedef xVec3 type_119[4];
typedef s8 type_120[32];
typedef u8 type_121[2];
typedef s8 type_122[32];
typedef menuWorldInfo type_123[15];
typedef xAnimMultiFileEntry type_124[1];
typedef u8 type_126[4];
typedef u16 type_127[6];
typedef f32 type_128[4];
typedef f32 type_129[4];
typedef RxCluster type_130[1];
typedef u8 type_131[22];
typedef u8 type_132[3];

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
	type_4 BeforeEnter;
	type_68 StateCallback;
	type_16 BeforeAnimMatrices;
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
	f32 u;
	f32 v;
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
	f32 x;
	f32 y;
	f32 z;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct _zUI : zEnt
{
	zUIAsset* sasset;
	u32 uiFlags;
	u32 uiButton;
	u16 preUpdateIndex;
	u16 updateIndex;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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
	type_77 PowerUp;
	type_81 InitialPowerUp;
};

struct xPlatformAsset
{
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	f32 x;
	f32 y;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct zUIMgr : xMgr
{
	s32 m_preUpdateStart;
	s32 m_preUpdateEnd;
	u32 m_preUpdateMax;
	_zUI** m_preUpdate;
	s32 m_updateStart;
	s32 m_updateEnd;
	u32 m_updateMax;
	_zUI** m_update;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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
	type_16 BeforeAnimMatrices;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_125 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_111 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_22 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct zCutsceneMgr
{
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct xMgr
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	u32 pad3;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_30 tranTable;
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

struct RpTriangle
{
	type_28 vertIndex;
	s16 matIndex;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct zUIAsset : xEntAsset
{
	u32 uiFlags;
	type_52 dim;
	u32 textureID;
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
	s32 unknown;
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
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_11 Callback;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_116 name;
	type_120 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xIniFile
{
	s32 NumValues;
	s32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_43 name;
	type_48 pathname;
};

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	u16 uiFontFlags;
	u16 uiFontHackFlags;
	u32 text_id;
	f32 yscroll;
	u32 text_index;
	s8* text;
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
	type_33 resolvID;
	type_41 base2Name;
	type_49 id2Name;
};

struct xCounterAsset : xBaseAsset
{
	s16 count;
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
	u32 NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_90 pad;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_37 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_128 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	s32 memlvl;
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
	type_121 NumAnims;
	void** RawData;
};

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
};

struct xIniValue
{
	s8* tok;
	s8* val;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	type_62 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xIniSection
{
	s8* sec;
	s32 first;
	s32 count;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_45 Conditional;
	type_45 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	u32 Magic;
	u32 NumModelInst;
	u32 AnimTableID;
	u32 CombatID;
	u32 BrainID;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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
	u32 matidx;
	type_66 wt;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct _tagxPad
{
	type_131 value;
	type_2 last_value;
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
	type_39 up_tmr;
	type_44 down_tmr;
	type_67 analog;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_94 pad;
	f32 delay;
	xSpline3* spl;
};

struct xEntBoulder
{
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	s16 count;
	u8 state;
	u8 counterFlags;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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

struct rxReq
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_31 frustumPlanes;
	RwBBox frustumBoundBox;
	type_36 frustumCorners;
};

struct xJSPHeader
{
	type_61 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	type_115 HangPawTag;
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
	type_51 Inv_PatsSock;
	type_53 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_58 Inv_LevelPickups;
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
	type_80 TongueFlags;
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
	type_114 sb_model_indices;
	type_118 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 x;
	f32 y;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_124 Files;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_8 tmrs;
	type_14 ttms;
	type_15 atms;
	type_17 dtms;
	type_23 vms;
	type_27 dss;
};

struct RpSector
{
	s32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	type_78 frustplane;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_84 MoveSpeed;
	type_88 AnimSneak;
	type_91 AnimWalk;
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
	f32 angle;
};

struct menuWorld
{
	_zUI* uiSelected;
	type_73 worldPrefix;
	u32 numTasks;
	type_74 task;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_20 lastRefs;
	type_26 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	f32 r;
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
	u32 mode;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	u32 ID;
	xAnimFile* File;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct zUIFontAsset : zUIAsset
{
	u16 uiFontFlags;
	u8 mode;
	u8 fontID;
	u32 textAssetID;
	type_75 bcolor;
	type_79 color;
	type_82 inset;
	type_86 space;
	type_89 cdim;
	u32 max_height;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xEntMotionSplineData
{
	s32 unknown;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct menuTaskInfo
{
	f32 ang;
	_CurrentPlayer player;
};

struct _class_1
{
	xVec3* verts;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_98 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_102 BilinearLerp;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
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
	u32 reserved;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_109 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_117 sceneStart;
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
	type_3 colls;
	type_7 post;
	type_12 depenq;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
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

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	f32 t;
	f32 u;
	f32 v;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RpPolygon
{
	u16 matIndex;
	type_113 vertIndex;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _tagiPad
{
	s32 port;
};

struct xFFX
{
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_130 clusters;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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

struct st_SERIAL_CLIENTINFO
{
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	s32 id;
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

basic_rect screen_bounds;
basic_rect default_adjust;
type_105 buffer;
type_112 buffer;
u32 sSortedCount;
type_50 sSorted;
type_76 Vertex;
type_127 Index;
u32 cKeyUIid1off;
u32 cKeyUIid2off;
u32 cKeyUIid3off;
u32 cKeyUIid4off;
u32 cKeyUIid1on;
u32 cKeyUIid2on;
u32 cKeyUIid3on;
u32 cKeyUIid4on;
type_64 patsock_text_buffer;
_zUI* patsock_ui;
zUIFont* patsock_uif;
u32 patsock_prev_world;
u32 patsock_prev_count;
zUIMgr gUIMgr;
f32 ushift;
type_123 sWorldInfo;
type_46 sWorld;
_zUI* sTakeTaxi;
_zUI* sNoneTaskDesc;
_zUI* sCurrTaskDesc;
u32 sCurrWorld;
u32 sCurrTask;
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
u32 gActiveHeap;

void zUI_ScenePortalLoad(xSerial* s);
void zUI_ScenePortalSave(xSerial* s);
void zUI_ScenePortalUpdate();
void zUI_PortalToKrabs(u32 taskNum);
void refresh_patsocks(u32 world);
void zUI_ScenePortalInit(zScene* zsc);
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc);
s32 zUIPortalEventCB(xBase* from, xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget);
void zUI_ParseINI(xIniFile* ini);
s32 zUIEventCB(xBase* to, u32 toEvent, f32* toParam);
void zUI_Render(xEnt* ent);
void zUIRenderAll();
s32 iRenderQSort_Face(void* arg1, void* arg2);
xBase* zUIRenderIteratorInsert(xBase* b);
void zUI_Update(_zUI* ent, f32 dt);
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
void Update(zUIMgr* this, zScene* s, f32 dt);
void PreUpdate(zScene* s, f32 dt);

// zUI_ScenePortalLoad__FP7xSerial
// Start address: 0x19e050
void zUI_ScenePortalLoad(xSerial* s)
{
	u32 i;
	u32 j;
}

// zUI_ScenePortalSave__FP7xSerial
// Start address: 0x19e0f0
void zUI_ScenePortalSave(xSerial* s)
{
	u32 i;
	u32 j;
}

// zUI_ScenePortalUpdate__Fv
// Start address: 0x19e190
void zUI_ScenePortalUpdate()
{
	u32 i;
	u32 j;
	_zUI* select;
}

// zUI_PortalToKrabs__FUi
// Start address: 0x19e770
void zUI_PortalToKrabs(u32 taskNum)
{
	xPortalAsset* portal;
	s32 c1;
	s32 c2;
	type_122 tempString;
}

// refresh_patsocks__FUi
// Start address: 0x19e850
void refresh_patsocks(u32 world)
{
	u32 count;
	u32 max;
}

// zUI_ScenePortalInit__FP6zScene
// Start address: 0x19e990
void zUI_ScenePortalInit(zScene* zsc)
{
	u32 i;
	u32 j;
	s8 c;
	s8 c2;
	type_70 tempString;
	u32 uiID;
	_zUI* ui;
	u32 id;
}

// zUI_ScenePortalSetToCurrentLevel__FP6zScene
// Start address: 0x19f6e0
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc)
{
	u32 i;
}

// zUIPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f740
s32 zUIPortalEventCB(xBase* from, xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget)
{
	s32 result;
}

// zUI_ParseINI__FP8xIniFile
// Start address: 0x19f820
void zUI_ParseINI(xIniFile* ini)
{
	type_107 itemName;
	s8* value;
	s8* tok;
	s8* ltok;
	u32 i;
	u32 j;
}

// zUIEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f9d0
s32 zUIEventCB(xBase* to, u32 toEvent, f32* toParam)
{
	_zUI* s;
	u32 theTextureID;
	RwTexture* texture;
}

// zUI_Render__FP4xEnt
// Start address: 0x19fd10
void zUI_Render(xEnt* ent)
{
	_zUI* ui;
	RwTexture* texture;
	RwRaster* raster;
	u8 r;
	u8 g;
	u8 b;
	u8 a;
	RwCamera* camera;
	f32 w;
	f32 h;
	f32 u1;
	f32 v1;
	f32 u2;
	f32 v2;
	f32 u3;
	f32 v3;
	f32 u4;
	f32 v4;
	f32 x1;
	f32 y1;
	f32 x2;
	f32 y2;
	f32 z;
	f32 cz;
	f32 cooz;
	zUIAsset& a;
	basic_rect r;
	u32 srcblend;
	u32 destblend;
	xVec3 to;
	xVec3 from;
}

// zUIRenderAll__Fv
// Start address: 0x1a0730
void zUIRenderAll()
{
	u8 rendering_models;
	s32 i;
}

// iRenderQSort_Face__FPCvPCv
// Start address: 0x1a08c0
s32 iRenderQSort_Face(void* arg1, void* arg2)
{
	_zUI* f1;
	_zUI* f2;
	u8 font1;
	u8 font2;
}

// zUIRenderIteratorInsert__FP5xBaseP6zScenePv
// Start address: 0x1a09d0
xBase* zUIRenderIteratorInsert(xBase* b)
{
}

// zUI_Update__FP4_zUIP6xScenef
// Start address: 0x1a0a00
void zUI_Update(_zUI* ent, f32 dt)
{
}

// zUI_PreUpdate__FP4_zUIP6xScenef
// Start address: 0x1a0c80
void zUI_PreUpdate(_zUI* ent)
{
	_zUI* ui;
	s32 i;
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
	s32 used;
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
	u32 count;
	u32 arraySize;
	_zUI* ui;
	u32 i;
}

// Update__6zUIMgrFP6zScenef
// Start address: 0x1a18a0
void Update(zUIMgr* this, zScene* s, f32 dt)
{
	u32 i;
}

// PreUpdate__6zUIMgrFP6zScenef
// Start address: 0x1a1950
void PreUpdate(zScene* s, f32 dt)
{
	_zUI* ui;
	u32 i;
	_zUI* ui;
	u32 i;
}

