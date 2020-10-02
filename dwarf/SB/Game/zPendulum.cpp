typedef struct _tagxPad;
typedef struct RpGeometry;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct RwObjectHasFrame;
typedef struct xAnimSingle;
typedef struct xAnimPlay;
typedef struct xQCData;
typedef struct _zPendulum;
typedef struct xEnvAsset;
typedef struct RxPipelineNode;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct rxHeapFreeBlock;
typedef struct xSerial;
typedef struct RwV3d;
typedef struct RwRaster;
typedef struct xEntMechData;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xEnt;
typedef struct xEntMotionSplineData;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RxNodeDefinition;
typedef struct _tagxRumble;
typedef struct RpMeshHeader;
typedef struct zPlatform;
typedef struct _zPortal;
typedef struct zScene;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQuat;
typedef struct xBase;
typedef struct xVec3;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipeline;
typedef struct xModelInstance;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct zFrag;
typedef struct xGroup;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct zFragAsset;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RxHeap;
typedef struct xMat4x3;
typedef struct RwBBox;
typedef union _class_0;
typedef struct RpTriangle;
typedef struct xGroupAsset;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct RpAtomic;
typedef struct zEntHangable;
typedef struct xEntMotionMPData;
typedef struct zShrapnelAsset;
typedef struct xEntERData;
typedef struct rxHeapBlockHeader;
typedef struct zLedgeGrabParams;
typedef struct xModelPool;
typedef struct xLinkAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntShadow;
typedef struct xAnimFile;
typedef enum _zPlayerWallJumpState;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xLightKit;
typedef struct RpClump;
typedef struct zEnt;
typedef struct xModelTag;
typedef struct xJSPNodeInfo;
typedef struct xVec4;
typedef enum _tagRumbleType;
typedef struct xEntMotionMechData;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwSurfaceProperties;
typedef struct xPortalAsset;
typedef struct RwMatrixTag;
typedef struct xEntBoulder;
typedef struct xEntPenData;
typedef struct rxReq;
typedef struct xBaseAsset;
typedef struct xScene;
typedef struct analog_data;
typedef enum RpWorldRenderOrder;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMaterial;
typedef struct xBound;
typedef struct xVec2;
typedef enum zFragType;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xEntOrbitData;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef enum RxNodeDefEditable;
typedef struct zCheckPoint;
typedef struct xModelBucket;
typedef enum RxClusterValid;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct xRot;
typedef struct xEntAsset;
typedef struct xEntMotion;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xUpdateCullMgr;
typedef struct xEntDrive;
typedef struct zPlayerCarryInfo;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntMotionAsset;
typedef enum rxEmbeddedPacketState;
typedef struct RpLight;
typedef struct xSphere;
typedef struct zLasso;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct xEntFrame;
typedef struct RwCamera;
typedef enum RwCameraProjection;
typedef struct RpWorld;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xGridBound;
typedef struct xBox;
typedef struct xEntSplineData;
typedef struct RxClusterDefinition;
typedef struct xEntMotionPenData;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct RwSphere;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwTexDictionary;
typedef struct xMovePoint;
typedef struct RxOutputSpec;
typedef struct xEntMPData;
typedef struct xMat3x3;
typedef struct tri_data_0;
typedef struct tri_data_1;
typedef struct xSpline3;
typedef struct _class_1;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef enum _tagPadState;
typedef struct xShadowSimpleCache;
typedef struct xCollis;
typedef struct xEntCollis;
typedef struct xEntMotionERData;
typedef struct RxIoSpec;
typedef struct RwFrame;
typedef union FloatAndVoid;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct xGlobals;
typedef struct RxNodeMethods;
typedef struct RpPolygon;
typedef struct RwFrustumPlane;
typedef struct _class_2;
typedef struct RpMaterialList;
typedef struct RwPlane;
typedef struct _tagPadAnalog;
typedef struct RxCluster;
typedef struct xFFX;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct xEntMotionOrbitData;
typedef enum RwFogType;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwRGBAReal;
typedef struct anim_coll_data;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef void(*type_2)(_zPendulum*, xScene*, float32, xEntFrame*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_5)(RxPipelineNode*);
typedef void(*type_6)(xAnimPlay*, xAnimState*);
typedef uint32(*type_7)(void*, void*);
typedef uint32(*type_10)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_11)(xEnt*, xScene*, float32, xEntCollis*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_14)(void*);
typedef uint32(*type_15)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_16)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_18)(zFrag*, zFragAsset*);
typedef void(*type_19)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_20)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_21)(void*, void*);
typedef uint32(*type_25)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_27)(RpAtomic*);
typedef void(*type_28)(zShrapnelAsset*, xModelInstance*, xVec3*, type_18);
typedef uint32(*type_29)(void*, void*);
typedef int32(*type_30)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_31)(uint32);
typedef int32(*type_33)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_34)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef int8*(*type_37)(xBase*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_40)(uint32);
typedef void(*type_43)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_51)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_56)(RpWorldSector*);
typedef void(*type_70)(xEnt*, xScene*, float32);
typedef RwCamera*(*type_74)(RwCamera*);
typedef void(*type_75)(xEnt*, xVec3*);
typedef void(*type_77)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_79)(xEnt*);
typedef void(*type_81)(xMemPool*, void*);
typedef void(*type_87)(RwResEntry*);
typedef void(*type_95)(_zPendulum*, xScene*, float32);

typedef RwTexCoords* type_4[8];
typedef uint8 type_8[22];
typedef xCollis type_9[18];
typedef uint8 type_12[22];
typedef xVec3 type_22[5];
typedef uint16 type_23[3];
typedef RwFrustumPlane type_24[6];
typedef uint8 type_26[5];
typedef RwV3d type_32[8];
typedef xVec3 type_35[60];
typedef float32 type_39[22];
typedef int8 type_41[16];
typedef float32 type_42[22];
typedef float32 type_44[2];
typedef uint32 type_45[15];
typedef int8 type_46[16];
typedef uint32 type_47[15];
typedef RwTexCoords* type_48[8];
typedef uint32 type_49[72];
typedef float32 type_50[4];
typedef int8 type_52[4];
typedef uint32 type_53[15];
typedef xBase* type_54[72];
typedef analog_data type_55[2];
typedef xVec4 type_57[12];
typedef uint8 type_58[2];
typedef uint32 type_59[4];
typedef uint32 type_60[2];
typedef uint32 type_61[2];
typedef xVec3 type_62[3];
typedef uint8 type_63[2];
typedef uint8 type_64[2];
typedef float32 type_65[6];
typedef float32 type_66[3];
typedef float32 type_67[3];
typedef xModelTag type_68[2];
typedef float32 type_69[3];
typedef RpLight* type_71[2];
typedef float32 type_72[16];
typedef RwFrame* type_73[2];
typedef float32 type_76[2];
typedef xEnt* type_78[111];
typedef uint8 type_80[3];
typedef int8 type_82[128];
typedef int8 type_83[32];
typedef uint16 type_84[3];
typedef type_82 type_85[6];
typedef int8 type_86[32];
typedef uint8 type_88[2];
typedef xAnimMultiFileEntry type_89[1];
typedef xVec3 type_90[4];
typedef uint8 type_91[14];
typedef xModelTag type_92[4];
typedef int8 type_93[32];
typedef xModelInstance* type_94[14];
typedef float32 type_96[4];
typedef uint8 type_97[4];
typedef RxCluster type_98[1];

struct _tagxPad
{
	type_8 value;
	type_12 last_value;
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
	type_42 down_tmr;
	type_55 analog;
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
	type_48 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_10 Callback;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_76 BilinearLerp;
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
	type_17 BeforeAnimMatrices;
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

struct _zPendulum : zEnt
{
	xEntMotion motion;
	float32 lt;
	float32 q1t;
	float32 q3t;
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
	type_6 BeforeEnter;
	type_51 StateCallback;
	type_17 BeforeAnimMatrices;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xSerial
{
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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
	type_70 update;
	type_70 endUpdate;
	type_75 bupdate;
	type_77 move;
	type_79 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_19 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xEntMotionSplineData
{
	int32 unknown;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct zPlatform
{
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_49 baseCount;
	type_54 baseList;
	_zEnv* zen;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_87 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_81 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_20 eventFunc;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_58 PowerUp;
	type_63 InitialPowerUp;
};

struct zFrag
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_60 parentID;
	float32 lifetime;
	float32 delay;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_7 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RpTriangle
{
	type_23 vertIndex;
	int16 matIndex;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_27 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zEntHangable
{
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	type_28 initCB;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_59 pad;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_35 tranTable;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_96 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_44 radius;
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
	type_88 NumAnims;
	void** RawData;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_71 light;
	type_73 light_frame;
	int32 memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_50 wt;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xEntBoulder
{
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct rxReq
{
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	type_31 resolvID;
	type_37 base2Name;
	type_40 id2Name;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_80 pad;
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

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_89 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_83 name;
	type_86 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct RpSector
{
	int32 type;
};

struct xJSPHeader
{
	type_52 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_68 BubbleWandTag;
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
	type_92 HangPawTag;
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
	type_45 Inv_PatsSock;
	type_47 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_53 Inv_LevelPickups;
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
	type_61 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_78 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_91 sb_model_indices;
	type_94 sb_models;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_4 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_14 activateCB;
	type_14 deactivateCB;
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
	type_57 frustplane;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	float32 r;
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
	type_22 lastRefs;
	type_26 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_65 MoveSpeed;
	type_66 AnimSneak;
	type_67 AnimWalk;
	type_69 AnimRun;
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
	type_97 talk_filter;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_74 beginUpdate;
	type_1 endUpdate;
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
	type_24 frustumPlanes;
	RwBBox frustumBoundBox;
	type_32 frustumCorners;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_56 renderCallBack;
	RxPipeline* pipeline;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xEntSplineData
{
	int32 unknown;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_64 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
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

struct xShadowSimplePoly
{
	type_62 vert;
	xVec3 norm;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xMovePoint
{
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xSpline3
{
};

struct _class_1
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_72 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_90 corner;
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
	type_9 colls;
	type_11 post;
	type_15 depenq;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

union FloatAndVoid
{
	float32 f;
	void* v;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_85 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_93 sceneStart;
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

struct RxNodeMethods
{
	type_30 nodeBody;
	type_34 nodeInit;
	type_36 nodeTerm;
	type_0 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_16 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct RpPolygon
{
	uint16 matIndex;
	type_84 vertIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct xFFX
{
};

struct _tagiPad
{
	int32 port;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_98 clusters;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

type_41 buffer;
type_46 buffer;
type_29 xUpdateCull_DistanceSquaredCB;
type_21 xUpdateCull_AlwaysTrueCB;
zGlobals globals;
type_43 zPendulumTranslate;
type_33 zPendulumEventCB;
type_2 zPendulum_Move;
type_95 zPendulum_Update;

int32 zPendulumEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat);
void zPendulum_Move(_zPendulum* pend, xScene* s, float32 dt, xEntFrame* frame);
void zPendulum_Update(_zPendulum* pend, xScene* sc, float32 dt);
void zPendulum_Reset(_zPendulum* pend, xScene* sc);
void zPendulum_Setup(_zPendulum* pend);
void zPendulum_Load(_zPendulum* pend, xSerial* s);
void zPendulum_Save(_zPendulum* pend, xSerial* s);
void zPendulum_Init(_zPendulum* pend, xEntAsset* asset);
void zPendulum_Init(void* pend, void* asset);

// zPendulumEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x18cdf0
int32 zPendulumEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	_zPendulum* pend;
	FloatAndVoid dist;
	zShrapnelAsset* shrap;
}

// zPendulumTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x18d060
void zPendulumTranslate(xEnt* xent, xVec3* dpos, xMat4x3* dmat)
{
	_zPendulum* pend;
}

// zPendulum_Move__FP10_zPendulumP6xScenefP9xEntFrame
// Start address: 0x18d0b0
void zPendulum_Move(_zPendulum* pend, xScene* s, float32 dt, xEntFrame* frame)
{
}

// zPendulum_Update__FP10_zPendulumP6xScenef
// Start address: 0x18d0c0
void zPendulum_Update(_zPendulum* pend, xScene* sc, float32 dt)
{
	xEntMotionPenData* aspen;
	float32 t;
}

// zPendulum_Reset__FP10_zPendulumP6xScene
// Start address: 0x18d170
void zPendulum_Reset(_zPendulum* pend, xScene* sc)
{
	xEntMotionPenData* aspen;
}

// zPendulum_Setup__FP10_zPendulumP6xScene
// Start address: 0x18d2c0
void zPendulum_Setup(_zPendulum* pend)
{
}

// zPendulum_Load__FP10_zPendulumP7xSerial
// Start address: 0x18d2d0
void zPendulum_Load(_zPendulum* pend, xSerial* s)
{
}

// zPendulum_Save__FP10_zPendulumP7xSerial
// Start address: 0x18d2e0
void zPendulum_Save(_zPendulum* pend, xSerial* s)
{
}

// zPendulum_Init__FP10_zPendulumP9xEntAsset
// Start address: 0x18d2f0
void zPendulum_Init(_zPendulum* pend, xEntAsset* asset)
{
	xEntMotionAsset* motionAsset;
}

// zPendulum_Init__FPvPv
// Start address: 0x18d3a0
void zPendulum_Init(void* pend, void* asset)
{
}

