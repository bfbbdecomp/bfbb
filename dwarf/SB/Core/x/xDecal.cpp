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
typedef s8*(*type_4)(xBase*);
typedef s32(*type_5)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_7)(RxPipelineNode*, u32, u32, void*);
typedef s8*(*type_8)(u32);
typedef s32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_12)(RxNodeDefinition*);
typedef u32(*type_13)(void*, void*);
typedef void(*type_14)(RxNodeDefinition*);
typedef s32(*type_16)(RxPipelineNode*);
typedef void(*type_18)(RxPipelineNode*);
typedef RpWorldSector*(*type_20)(RpWorldSector*);
typedef s32(*type_21)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_23)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_41)(RpClump*, void*);
typedef xBase*(*type_45)(u32);
typedef void(*type_47)(xAnimPlay*, xAnimState*);
typedef void(*type_53)(xEnt*, xScene*, f32);
typedef void(*type_55)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_57)(xEnt*, xVec3*);
typedef void(*type_59)(xEnt*, xScene*, f32, xEntCollis*);
typedef RwCamera*(*type_61)(RwCamera*);
typedef void(*type_62)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_64)(xEnt*);
typedef RpAtomic*(*type_66)(RpAtomic*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef void(*type_69)(xMemPool*, void*);
typedef u32(*type_71)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_76)(RwResEntry*);
typedef RwObjectHasFrame*(*type_89)(RwObjectHasFrame*);

typedef u8 type_0[22];
typedef u8 type_2[22];
typedef RwFrustumPlane type_6[6];
typedef u32 type_9[11];
typedef RwV3d type_11[8];
typedef xVec3 type_15[5];
typedef u8 type_17[5];
typedef xVec3 type_19[60];
typedef s8* type_22[11];
typedef f32 type_24[22];
typedef f32 type_25[2];
typedef f32 type_26[2];
typedef f32 type_27[22];
typedef xDecalEmitter* type_28[32];
typedef u32 type_29[15];
typedef u32 type_31[15];
typedef u16 type_32[3];
typedef u32 type_33[15];
typedef u8 type_34[2];
typedef xAnimMultiFileEntry type_35[1];
typedef u32 type_36[72];
typedef s8 type_37[4];
typedef analog_data type_39[2];
typedef xBase* type_40[72];
typedef u32 type_42[4];
typedef xVec3 type_43[3];
typedef xVec2 type_44[2];
typedef RwTexCoords* type_46[8];
typedef u8 type_48[2];
typedef u32 type_49[2];
typedef xVec4 type_50[12];
typedef u8 type_51[2];
typedef f32 type_52[6];
typedef f32 type_54[3];
typedef f32 type_56[3];
typedef f32 type_58[16];
typedef xModelTag type_60[2];
typedef f32 type_63[3];
typedef u16 type_65[3];
typedef RpLight* type_68[2];
typedef xEnt* type_70[111];
typedef RwFrame* type_72[2];
typedef u8 type_73[3];
typedef s8 type_74[32];
typedef s8 type_75[32];
typedef xVec3 type_77[4];
typedef f32 type_78[4];
typedef s8 type_79[128];
typedef type_79 type_80[6];
typedef u8 type_81[14];
typedef xModelTag type_82[4];
typedef s8 type_83[32];
typedef xModelInstance* type_84[14];
typedef RxCluster type_85[1];
typedef RwTexCoords* type_86[8];
typedef f32 type_87[4];
typedef s8 type_88[16];
typedef u8 type_90[4];
typedef xCollis type_91[18];
typedef s8 type_92[16];

struct zPlatform
{
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	u32 curve_size;
	u32 curve_index;
	f32 ilife;
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
	_class_0 anim_coll;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	type_78 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
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
		tri_data_0 tri;
	};
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
	type_48 PowerUp;
	type_51 InitialPowerUp;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_47 BeforeEnter;
	type_38 StateCallback;
	type_55 BeforeAnimMatrices;
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

struct zCutsceneMgr
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_42 pad;
};

struct zAssetPickupTable
{
};

struct RpSector
{
	s32 type;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_13 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct curve_node
{
	f32 time;
	iColor_tag color;
	f32 scale;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_25 radius;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	u32 index;
	f32 r;
	f32 d;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_19 tranTable;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct unit_data
{
	u8 flags;
	u8 curve_index;
	u8 u;
	u8 v;
	f32 frac;
	f32 age;
	f32 cull_size;
	xMat4x3 mat;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct xEntBoulder
{
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
	type_34 NumAnims;
	void** RawData;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_26 BilinearLerp;
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

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	s32 memlvl;
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

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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

struct _class_2
{
	f32 t;
	f32 u;
	f32 v;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_23 Callback;
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

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 mag;
	f32 ang;
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
	u32 NumMatrices;
	xModelInstance* List;
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

struct RpPolygon
{
	u16 matIndex;
	type_32 vertIndex;
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
	type_15 lastRefs;
	type_17 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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
	type_55 BeforeAnimMatrices;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_74 name;
	type_75 mask;
	u32 filterAddressing;
	s32 refCount;
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
	type_60 BubbleWandTag;
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
	type_82 HangPawTag;
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
	type_29 Inv_PatsSock;
	type_31 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_33 Inv_LevelPickups;
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
	type_49 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_70 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_81 sb_model_indices;
	type_84 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	s16 refCount;
	s16 pad;
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

struct xJSPHeader
{
	type_37 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct static_queue
{
	u32 _first;
	u32 _size;
	u32 _max_size;
	u32 _max_size_mask;
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

struct config
{
	u32 flags;
	f32 life_time;
	u32 blend_src;
	u32 blend_dst;
	_class_3 texture;
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
	type_3 activateCB;
	type_3 deactivateCB;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
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
	type_90 talk_filter;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	type_86 texCoords;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xSurface
{
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
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
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct _class_3
{
	type_44 uv;
	u8 rows;
	u8 cols;
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
	f32 radius;
};

struct _class_4
{
	u8* data;
	s32 stride;
	u32 size;
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
	u32 used;
	RpAtomic* ptank;
	_class_4 hide;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct ptank_pool__color_mat_uv2 : ptank_pool
{
	iColor_tag* color;
	xMat4x3* mat;
	xVec2* uv;
	s32 stride;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_69 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_76 destroyNotify;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_58 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	type_45 resolvID;
	type_4 base2Name;
	type_8 id2Name;
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
	type_77 corner;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
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
	type_20 renderCallBack;
	RxPipeline* pipeline;
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
	type_91 colls;
	type_59 post;
	type_71 depenq;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpTriangle
{
	type_65 vertIndex;
	s16 matIndex;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
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
	u32 creationAttributes;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_80 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_83 sceneStart;
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

struct zEntHangable
{
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

struct _class_5
{
	RwTexture* asset;
	u32 units;
	xVec2 size;
	xVec2 isize;
	s32 prev;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct _tagxPad
{
	type_0 value;
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
	type_24 up_tmr;
	type_27 down_tmr;
	type_39 analog;
};

struct xFFX
{
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_87 wt;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_85 clusters;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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
	s32 ClipFlags;
	u32 PipeFlags;
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
	s32 port;
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

struct render_state
{
	RwTexture* texture;
	u32 src_blend;
	u32 dst_blend;
	u32 flags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_89 sync;
};

struct iterator
{
	u32 _it;
	static_queue* _owner;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

type_88 buffer;
type_92 buffer;
type_28 active_emitters;
u32 active_emitters_size;
type_22 blend_mode_labels;
type_9 blend_mode_values;
u32 blend_modes;
zGlobals globals;
s32 _rpPTankAtomicDataOffset;
u32 gActiveHeap;

void get_render_data(xDecalEmitter* this, unit_data& unit, f32 scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1);
void update(xDecalEmitter* this, f32 dt);
void emit(xDecalEmitter* this, xMat4x3& mat, xVec3& scale, s32 texture_index);
void emit(xDecalEmitter* this, xMat4x3& mat, s32 texture_index);
void set_curve(xDecalEmitter* this, curve_node* curve, u32 size);
void refresh_config(xDecalEmitter* this);
void set_texture(xDecalEmitter* this, s8* name);
void set_default_config(xDecalEmitter* this);
void init(xDecalEmitter* this, s32 max_size);
void xDecalUpdate(f32 dt);
void xDecalInit();

// get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2
// Start address: 0x3ae5d0
void get_render_data(xDecalEmitter* this, unit_data& unit, f32 scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1)
{
}

// update__13xDecalEmitterFf
// Start address: 0x3aecc0
void update(xDecalEmitter* this, f32 dt)
{
	f32 dage;
	ptank_pool__color_mat_uv2 pool;
	iterator it;
	unit_data& unit;
	curve_node& node0;
	curve_node& node1;
	f32 scale;
	xVec4* _loc;
	f32 par_dist;
}

// emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
// Start address: 0x3af1c0
void emit(xDecalEmitter* this, xMat4x3& mat, xVec3& scale, s32 texture_index)
{
}

// emit__13xDecalEmitterFRC7xMat4x3i
// Start address: 0x3af550
void emit(xDecalEmitter* this, xMat4x3& mat, s32 texture_index)
{
}

// set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUi
// Start address: 0x3af830
void set_curve(xDecalEmitter* this, curve_node* curve, u32 size)
{
}

// refresh_config__13xDecalEmitterFv
// Start address: 0x3af840
void refresh_config(xDecalEmitter* this)
{
}

// set_texture__13xDecalEmitterFPCc
// Start address: 0x3afa20
void set_texture(xDecalEmitter* this, s8* name)
{
}

// set_default_config__13xDecalEmitterFv
// Start address: 0x3afa70
void set_default_config(xDecalEmitter* this)
{
}

// init__13xDecalEmitterFiPCc
// Start address: 0x3afab0
void init(xDecalEmitter* this, s32 max_size)
{
}

// xDecalUpdate__Ff
// Start address: 0x3afb70
void xDecalUpdate(f32 dt)
{
	u32 i;
}

// xDecalInit__Fv
// Start address: 0x3afc00
void xDecalInit()
{
}

