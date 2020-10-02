typedef struct zPlatform;
typedef struct xEnvAsset;
typedef struct xVec2;
typedef struct xAnimTransitionList;
typedef struct _tagxRumble;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef struct zGlobals;
typedef struct xDecalEmitter;
typedef struct xModelInstance;
typedef struct RwMatrixTag;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xCollis;
typedef struct xQuat;
typedef struct zGlobalSettings;
typedef struct _zPortal;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xAnimState;
typedef struct xGroup;
typedef struct RxPipelineNodeTopSortData;
typedef struct zCutsceneMgr;
typedef struct rxHeapBlockHeader;
typedef struct zAssetPickupTable;
typedef struct RpSector;
typedef struct xUpdateCullEnt;
typedef struct xEnt;
typedef struct xClumpCollBSPTriangle;
typedef struct zPlayerLassoInfo;
typedef struct RpAtomic;
typedef struct curve_node;
typedef struct xEntShadow;
typedef struct xGroupAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct zScene;
typedef struct RwLLLink;
typedef struct _class_0;
typedef struct tri_data_0;
typedef struct xAnimMultiFileEntry;
typedef struct zLedgeGrabParams;
typedef struct xAnimActiveEffect;
typedef struct unit_data;
typedef union _class_1;
typedef struct xVec3;
typedef struct RxPipeline;
typedef struct xEntBoulder;
typedef struct xAnimFile;
typedef struct xBaseAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xAnimSingle;
typedef struct xVec4;
typedef struct RpVertexNormal;
typedef struct RwSurfaceProperties;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct iEnv;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xUpdateCullGroup;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct _class_2;
typedef struct xJSPNodeInfo;
typedef struct xAnimEffect;
typedef struct xAnimTable;
typedef struct xBound;
typedef struct analog_data;
typedef enum texture_mode;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xModelPool;
typedef struct xEntAsset;
typedef struct RpPolygon;
typedef struct zLasso;
typedef struct rxHeapFreeBlock;
typedef struct xAnimPlay;
typedef struct xRot;
typedef struct RpMaterialList;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwTexture;
typedef struct xQCData;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct xAnimMultiFile;
typedef struct xBBox;
typedef struct RpMaterial;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xJSPHeader;
typedef struct static_queue;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct zPlayerCarryInfo;
typedef struct config;
typedef struct xUpdateCullMgr;
typedef struct xCylinder;
typedef struct xEntFrame;
typedef struct RpClump;
typedef struct zPlayerSettings;
typedef struct xPortalAsset;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xCamera;
typedef struct xBox;
typedef struct _zEnv;
typedef struct RxClusterDefinition;
typedef struct xSurface;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct RpMorphTarget;
typedef struct xShadowSimplePoly;
typedef struct xGridBound;
typedef struct _class_3;
typedef struct xEnv;
typedef struct RwSphere;
typedef struct _class_4;
typedef struct RwTexDictionary;
typedef struct ptank_pool;
typedef struct RxOutputSpec;
typedef struct RpMeshHeader;
typedef struct ptank_pool__color_mat_uv2;
typedef struct iFogParams;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct xMat3x3;
typedef struct xEntDrive;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct RwObject;
typedef struct RpWorld;
typedef struct xEntCollis;
typedef struct RxIoSpec;
typedef struct RpTriangle;
typedef struct iColor_tag;
typedef struct RpLight;
typedef struct RxNodeMethods;
typedef enum _tagPadState;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct _class_5;
typedef struct RwPlane;
typedef struct _tagxPad;
typedef struct xFFX;
typedef struct RxCluster;
typedef struct xModelTag;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct xModelBucket;
typedef enum RwFogType;
typedef struct _tagiPad;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct render_state;
typedef struct RwObjectHasFrame;
typedef struct iterator;
typedef struct RwLinkList;
typedef struct RwV2d;
typedef struct xClumpCollBSPVertInfo;
typedef struct zJumpParam;

typedef void(*type_1)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_3)(void*);
typedef int8*(*type_4)(xBase*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_7)(RxPipelineNode*, uint32, uint32, void*);
typedef int8*(*type_8)(uint32);
typedef int32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_12)(RxNodeDefinition*);
typedef uint32(*type_13)(void*, void*);
typedef void(*type_14)(RxNodeDefinition*);
typedef int32(*type_16)(RxPipelineNode*);
typedef void(*type_18)(RxPipelineNode*);
typedef RpWorldSector*(*type_20)(RpWorldSector*);
typedef int32(*type_21)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_23)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_41)(RpClump*, void*);
typedef xBase*(*type_45)(uint32);
typedef void(*type_47)(xAnimPlay*, xAnimState*);
typedef void(*type_53)(xEnt*, xScene*, float32);
typedef void(*type_55)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_57)(xEnt*, xVec3*);
typedef void(*type_59)(xEnt*, xScene*, float32, xEntCollis*);
typedef RwCamera*(*type_61)(RwCamera*);
typedef void(*type_62)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_64)(xEnt*);
typedef RpAtomic*(*type_66)(RpAtomic*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef void(*type_69)(xMemPool*, void*);
typedef uint32(*type_71)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_76)(RwResEntry*);
typedef RwObjectHasFrame*(*type_89)(RwObjectHasFrame*);

typedef uint8 type_0[22];
typedef uint8 type_2[22];
typedef RwFrustumPlane type_6[6];
typedef uint32 type_9[11];
typedef RwV3d type_11[8];
typedef xVec3 type_15[5];
typedef uint8 type_17[5];
typedef xVec3 type_19[60];
typedef int8* type_22[11];
typedef float32 type_24[22];
typedef float32 type_25[2];
typedef float32 type_26[2];
typedef float32 type_27[22];
typedef xDecalEmitter* type_28[32];
typedef uint32 type_29[15];
typedef uint32 type_31[15];
typedef uint16 type_32[3];
typedef uint32 type_33[15];
typedef uint8 type_34[2];
typedef xAnimMultiFileEntry type_35[1];
typedef uint32 type_36[72];
typedef int8 type_37[4];
typedef analog_data type_39[2];
typedef xBase* type_40[72];
typedef uint32 type_42[4];
typedef xVec3 type_43[3];
typedef xVec2 type_44[2];
typedef RwTexCoords* type_46[8];
typedef uint8 type_48[2];
typedef uint32 type_49[2];
typedef xVec4 type_50[12];
typedef uint8 type_51[2];
typedef float32 type_52[6];
typedef float32 type_54[3];
typedef float32 type_56[3];
typedef float32 type_58[16];
typedef xModelTag type_60[2];
typedef float32 type_63[3];
typedef uint16 type_65[3];
typedef RpLight* type_68[2];
typedef xEnt* type_70[111];
typedef RwFrame* type_72[2];
typedef uint8 type_73[3];
typedef int8 type_74[32];
typedef int8 type_75[32];
typedef xVec3 type_77[4];
typedef float32 type_78[4];
typedef int8 type_79[128];
typedef type_79 type_80[6];
typedef uint8 type_81[14];
typedef xModelTag type_82[4];
typedef int8 type_83[32];
typedef xModelInstance* type_84[14];
typedef RxCluster type_85[1];
typedef RwTexCoords* type_86[8];
typedef float32 type_87[4];
typedef int8 type_88[16];
typedef uint8 type_90[4];
typedef xCollis type_91[18];
typedef int8 type_92[16];

struct zPlatform
{
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xDecalEmitter
{
	config cfg;
	_class_5 texture;
	static_queue units;
	curve_node* curve;
	uint32 curve_size;
	uint32 curve_index;
	float32 ilife;
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
	_class_0 anim_coll;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_78 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
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
		tri_data_0 tri;
	};
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
	type_48 PowerUp;
	type_51 InitialPowerUp;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_47 BeforeEnter;
	type_38 StateCallback;
	type_55 BeforeAnimMatrices;
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

struct zCutsceneMgr
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_42 pad;
};

struct zAssetPickupTable
{
};

struct RpSector
{
	int32 type;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_13 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_53 update;
	type_53 endUpdate;
	type_57 bupdate;
	type_62 move;
	type_64 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_1 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_66 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct curve_node
{
	float32 time;
	iColor_tag color;
	float32 scale;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_25 radius;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	type_36 baseCount;
	type_40 baseList;
	_zEnv* zen;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_19 tranTable;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct unit_data
{
	uint8 flags;
	uint8 curve_index;
	uint8 u;
	uint8 v;
	float32 frac;
	float32 age;
	float32 cull_size;
	xMat4x3 mat;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xEntBoulder
{
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
	type_34 NumAnims;
	void** RawData;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_26 BilinearLerp;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_68 light;
	type_72 light_frame;
	int32 memlvl;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_23 Callback;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_73 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum texture_mode
{
	TM_DEFAULT,
	TM_RANDOM,
	TM_CYCLE,
	MAX_TM,
	FORCE_INT_TM = 0xffffffff
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RpPolygon
{
	uint16 matIndex;
	type_32 vertIndex;
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
	type_15 lastRefs;
	type_17 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_55 BeforeAnimMatrices;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_74 name;
	type_75 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	type_60 BubbleWandTag;
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
	type_82 HangPawTag;
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
	type_29 Inv_PatsSock;
	type_31 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_33 Inv_LevelPickups;
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
	type_49 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_70 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_81 sb_model_indices;
	type_84 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_35 Files;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xJSPHeader
{
	type_37 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct static_queue
{
	uint32 _first;
	uint32 _size;
	uint32 _max_size;
	uint32 _max_size_mask;
	unit_data* _buffer;
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

struct config
{
	uint32 flags;
	float32 life_time;
	uint32 blend_src;
	uint32 blend_dst;
	_class_3 texture;
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
	type_3 activateCB;
	type_3 deactivateCB;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_41 callback;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_52 MoveSpeed;
	type_54 AnimSneak;
	type_56 AnimWalk;
	type_63 AnimRun;
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
	type_90 talk_filter;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	type_86 texCoords;
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
	type_46 texCoords;
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
	type_50 frustplane;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xSurface
{
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_61 beginUpdate;
	type_67 endUpdate;
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
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_11 frustumCorners;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xShadowSimplePoly
{
	type_43 vert;
	xVec3 norm;
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

struct _class_3
{
	type_44 uv;
	uint8 rows;
	uint8 cols;
	texture_mode mode;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _class_4
{
	uint8* data;
	int32 stride;
	uint32 size;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct ptank_pool
{
	render_state rs;
	uint32 used;
	RpAtomic* ptank;
	_class_4 hide;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct ptank_pool__color_mat_uv2 : ptank_pool
{
	iColor_tag* color;
	xMat4x3* mat;
	xVec2* uv;
	int32 stride;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_69 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_76 destroyNotify;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_58 matrix;
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
	type_45 resolvID;
	type_4 base2Name;
	type_8 id2Name;
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
	type_77 corner;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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
	type_20 renderCallBack;
	RxPipeline* pipeline;
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
	type_91 colls;
	type_59 post;
	type_71 depenq;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpTriangle
{
	type_65 vertIndex;
	int16 matIndex;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct RxNodeMethods
{
	type_10 nodeBody;
	type_12 nodeInit;
	type_14 nodeTerm;
	type_16 pipelineNodeInit;
	type_18 pipelineNodeTerm;
	type_21 pipelineNodeConfig;
	type_7 configMsgHandler;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_80 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_83 sceneStart;
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

struct zEntHangable
{
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

struct _class_5
{
	RwTexture* asset;
	uint32 units;
	xVec2 size;
	xVec2 isize;
	int32 prev;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _tagxPad
{
	type_0 value;
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
	type_24 up_tmr;
	type_27 down_tmr;
	type_39 analog;
};

struct xFFX
{
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_87 wt;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_85 clusters;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagiPad
{
	int32 port;
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

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	uint32 flags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_89 sync;
};

struct iterator
{
	uint32 _it;
	static_queue* _owner;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

type_88 buffer;
type_92 buffer;
type_28 active_emitters;
uint32 active_emitters_size;
type_22 blend_mode_labels;
type_9 blend_mode_values;
uint32 blend_modes;
zGlobals globals;
int32 _rpPTankAtomicDataOffset;
uint32 gActiveHeap;

void get_render_data(xDecalEmitter* this, unit_data& unit, float32 scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1);
void update(xDecalEmitter* this, float32 dt);
void emit(xDecalEmitter* this, xMat4x3& mat, xVec3& scale, int32 texture_index);
void emit(xDecalEmitter* this, xMat4x3& mat, int32 texture_index);
void set_curve(xDecalEmitter* this, curve_node* curve, uint32 size);
void refresh_config(xDecalEmitter* this);
void set_texture(xDecalEmitter* this, int8* name);
void set_default_config(xDecalEmitter* this);
void init(xDecalEmitter* this, int32 max_size);
void xDecalUpdate(float32 dt);
void xDecalInit();

// get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2
// Start address: 0x3ae5d0
void get_render_data(xDecalEmitter* this, unit_data& unit, float32 scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1)
{
}

// update__13xDecalEmitterFf
// Start address: 0x3aecc0
void update(xDecalEmitter* this, float32 dt)
{
	float32 dage;
	ptank_pool__color_mat_uv2 pool;
	iterator it;
	unit_data& unit;
	curve_node& node0;
	curve_node& node1;
	float32 scale;
	xVec4* _loc;
	float32 par_dist;
}

// emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
// Start address: 0x3af1c0
void emit(xDecalEmitter* this, xMat4x3& mat, xVec3& scale, int32 texture_index)
{
}

// emit__13xDecalEmitterFRC7xMat4x3i
// Start address: 0x3af550
void emit(xDecalEmitter* this, xMat4x3& mat, int32 texture_index)
{
}

// set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUi
// Start address: 0x3af830
void set_curve(xDecalEmitter* this, curve_node* curve, uint32 size)
{
}

// refresh_config__13xDecalEmitterFv
// Start address: 0x3af840
void refresh_config(xDecalEmitter* this)
{
}

// set_texture__13xDecalEmitterFPCc
// Start address: 0x3afa20
void set_texture(xDecalEmitter* this, int8* name)
{
}

// set_default_config__13xDecalEmitterFv
// Start address: 0x3afa70
void set_default_config(xDecalEmitter* this)
{
}

// init__13xDecalEmitterFiPCc
// Start address: 0x3afab0
void init(xDecalEmitter* this, int32 max_size)
{
}

// xDecalUpdate__Ff
// Start address: 0x3afb70
void xDecalUpdate(float32 dt)
{
	uint32 i;
}

// xDecalInit__Fv
// Start address: 0x3afc00
void xDecalInit()
{
}

