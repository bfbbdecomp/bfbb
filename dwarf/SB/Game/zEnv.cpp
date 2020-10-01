typedef struct xModelInstance;
typedef struct xEnvAsset;
typedef struct RpTriangle;
typedef struct RwObjectHasFrame;
typedef struct xEnt;
typedef struct zPlatform;
typedef struct RpAtomic;
typedef struct xAnimMultiFileEntry;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xAnimActiveEffect;
typedef struct _tagxRumble;
typedef struct zGlobals;
typedef struct xEnv;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct zEnt;
typedef struct RwRaster;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xPlatformAsset;
typedef struct RpLight;
typedef struct RpMeshHeader;
typedef struct xSerial;
typedef struct zGlobalSettings;
typedef struct RxNodeDefinition;
typedef struct xAnimFile;
typedef struct xEntMPData;
typedef struct zSurfaceProps;
typedef struct RxPipeline;
typedef struct xGroup;
typedef struct zScene;
typedef struct xEntBoulder;
typedef struct xAnimSingle;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xUpdateCullEnt;
typedef struct RwResEntry;
typedef struct zPlayerLassoInfo;
typedef struct zSurfAssetBase;
typedef struct xGridBound;
typedef struct zCutsceneMgr;
typedef struct RxPipelineCluster;
typedef struct iEnv;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct xGroupAsset;
typedef struct xEntMotionAsset;
typedef struct RxPipelineNodeParam;
typedef struct xMovePoint;
typedef struct xEntAsset;
typedef struct xBase;
typedef struct RpWorld;
typedef struct RxHeap;
typedef struct zLedgeGrabParams;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xSpline3;
typedef struct xQuat;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct _zEnv;
typedef struct xAnimMultiFileBase;
typedef struct xEntMotionERData;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct rxHeapBlockHeader;
typedef enum _zPlayerWallJumpState;
typedef struct zSurfMatFX;
typedef struct xJSPHeader;
typedef struct _zPortal;
typedef struct zPlatFMRunTime;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntFrame;
typedef enum RpWorldRenderOrder;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct RpMaterial;
typedef struct RwFrame;
typedef struct xPortalAsset;
typedef struct xAnimPlay;
typedef struct xCollis;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RwTexture;
typedef struct xUpdateCullGroup;
typedef struct xVec3;
typedef struct zLasso;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RpSector;
typedef struct xVec4;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct xFFX;
typedef struct RwMatrixTag;
typedef struct analog_data;
typedef struct xLinkAsset;
typedef struct xQCData;
typedef struct rxReq;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xModelPool;
typedef enum RxClusterValidityReq;
typedef struct xCoef3;
typedef struct xEntMotionOrbitData;
typedef struct tri_data_0;
typedef struct xClumpCollBSPTree;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct xCamera;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef struct xMovePointAsset;
typedef struct xScene;
typedef enum RxNodeDefEditable;
typedef struct zPlayerCarryInfo;
typedef struct xShadowSimpleCache;
typedef enum RxClusterValid;
typedef struct xUpdateCullMgr;
typedef struct xClumpCollBSPBranchNode;
typedef struct xRot;
typedef struct xBaseAsset;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimTable;
typedef struct xEntMechData;
typedef struct RwCamera;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntMotionSplineData;
typedef struct xMemPool;
typedef struct RwLLLink;
typedef enum RwCameraProjection;
typedef struct _class_0;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef union _class_1;
typedef struct xBound;
typedef struct zSurfTextureAnim;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct iFogParams;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RpInterpolator;
typedef struct xEntDrive;
typedef struct RwTexDictionary;
typedef struct xAnimTransitionList;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xMat3x3;
typedef struct xModelTag;
typedef enum _tagPadState;
typedef struct RxClusterRef;
typedef struct zSurfacePropTexAnim;
typedef struct RpPolygon;
typedef struct xEntMotionMechData;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct xEntPenData;
typedef struct xJSPNodeInfo;
typedef struct RxIoSpec;
typedef struct _tagxPad;
typedef struct RxNodeMethods;
typedef struct xCoef;
typedef struct _class_2;
typedef struct xVec2;
typedef struct xEntOrbitData;
typedef struct _tagPadAnalog;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xBBox;
typedef struct _tagiPad;
typedef struct tri_data_1;
typedef struct xEntMotion;
typedef struct zSurfColorFX;
typedef struct zSurfacePropUVFX;
typedef struct RxCluster;
typedef struct zJumpParam;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xEntSplineData;
typedef struct RwLinkList;
typedef struct zSurfUVFX;
typedef struct xEntMotionPenData;

typedef u32(*type_1)(void*, void*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_7)(RxPipelineNode*);
typedef void(*type_11)(void*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef xBase*(*type_13)(u32);
typedef s8*(*type_15)(xBase*);
typedef s32(*type_16)(RxPipelineNode*, RxPipeline*);
typedef s8*(*type_17)(u32);
typedef u32(*type_19)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_25)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_32)(RxNodeDefinition*);
typedef u32(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_35)(RxNodeDefinition*);
typedef s32(*type_37)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_38)(RxPipelineNode*);
typedef void(*type_45)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_47)(RpWorldSector*);
typedef void(*type_49)(xEnt*, xScene*, f32);
typedef void(*type_50)(xEnt*, xVec3*);
typedef void(*type_52)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_53)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_55)(xAnimPlay*, xAnimState*);
typedef void(*type_56)(xEnt*);
typedef u32(*type_59)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_61)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_62)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_63)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_77)(RwCamera*);
typedef void(*type_83)(xMemPool*, void*);
typedef RpClump*(*type_90)(RpClump*, void*);
typedef void(*type_94)(RwResEntry*);

typedef f32 type_0[16];
typedef u8 type_3[22];
typedef f32 type_5[2];
typedef u16 type_6[3];
typedef s8 type_8[16];
typedef u8 type_9[22];
typedef u8 type_10[2];
typedef f32 type_14[4];
typedef s8 type_18[16];
typedef zSurfacePropTexAnim type_20[2];
typedef f32 type_21[2];
typedef zSurfacePropUVFX type_22[2];
typedef xVec3 type_23[5];
typedef RwFrustumPlane type_24[6];
typedef xVec3 type_26[60];
typedef u8 type_27[5];
typedef RpLight* type_29[2];
typedef u8 type_30[3];
typedef RwV3d type_31[8];
typedef RwFrame* type_34[2];
typedef f32 type_36[22];
typedef f32 type_39[22];
typedef RwTexCoords* type_40[8];
typedef u8 type_41[2];
typedef xAnimMultiFileEntry type_42[1];
typedef xVec3 type_43[3];
typedef u32 type_44[15];
typedef u32 type_46[15];
typedef u32 type_48[15];
typedef analog_data type_51[2];
typedef zSurfTextureAnim type_54[2];
typedef u8 type_57[2];
typedef zSurfUVFX type_58[2];
typedef u8 type_60[3];
typedef u8 type_64[2];
typedef xVec4 type_65[12];
typedef u32 type_66[2];
typedef f32 type_67[6];
typedef u8 type_68[2];
typedef xVec3 type_69[4];
typedef u32 type_70[4];
typedef f32 type_71[3];
typedef f32 type_72[3];
typedef xModelTag type_73[2];
typedef f32 type_74[3];
typedef xEnt* type_75[111];
typedef u16 type_76[3];
typedef xCollis type_78[18];
typedef u32 type_79[72];
typedef xBase* type_80[72];
typedef f32 type_81[4];
typedef s8 type_82[128];
typedef f32 type_84[4];
typedef type_82 type_85[6];
typedef s8 type_86[32];
typedef u8 type_87[14];
typedef xModelTag type_88[4];
typedef s8 type_89[32];
typedef f32 type_91[12];
typedef s8 type_92[32];
typedef xModelInstance* type_93[14];
typedef u8 type_95[3];
typedef s8 type_96[4];
typedef f32 type_97[12];
typedef f32 type_98[12];
typedef f32 type_99[2];
typedef RwTexCoords* type_100[8];
typedef f32 type_101[12];
typedef u8 type_102[4];
typedef f32 type_103[12];
typedef f32 type_104[12];
typedef RxCluster type_105[1];

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

struct RpTriangle
{
	type_6 vertIndex;
	s16 matIndex;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_4 sync;
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
	type_49 update;
	type_49 endUpdate;
	type_50 bupdate;
	type_53 move;
	type_56 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_63 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_12 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct zAssetPickupTable
{
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

struct xPlatformAsset
{
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	type_64 PowerUp;
	type_68 InitialPowerUp;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_41 NumAnims;
	void** RawData;
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

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	u32 texanim_flags;
	type_20 texanim;
	u32 uvfx_flags;
	type_22 uvfx;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
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
	type_79 baseCount;
	type_80 baseList;
	_zEnv* zen;
};

struct xEntBoulder
{
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_21 BilinearLerp;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_1 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_94 destroyNotify;
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

struct zSurfAssetBase : xBaseAsset
{
	u8 game_damage_type;
	u8 game_sticky;
	u8 game_damage_flags;
	u8 surf_type;
	u8 phys_pad;
	u8 sld_start;
	u8 sld_stop;
	u8 phys_flags;
	f32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	u32 texture_anim_flags;
	type_54 texture_anim;
	u32 uvfx_flags;
	type_58 uvfx;
	u8 on;
	type_60 surf_pad;
	f32 oob_delay;
	f32 walljump_scale_xz;
	f32 walljump_scale_y;
	f32 damage_timer;
	f32 damage_bounce;
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

struct zCutsceneMgr
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_29 light;
	type_34 light_frame;
	s32 memlvl;
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
	type_40 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_55 BeforeEnter;
	type_45 StateCallback;
	type_61 BeforeAnimMatrices;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_57 pad;
	f32 delay;
	xSpline3* spl;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_37 eventFunc;
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
	type_47 renderCallBack;
	RxPipeline* pipeline;
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_26 tranTable;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_90 callback;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xAnimMultiFileBase
{
	u32 Count;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_19 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_33 Conditional;
	type_33 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_70 pad;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct zSurfMatFX
{
	u32 flags;
	u32 bumpmapID;
	u32 envmapID;
	f32 shininess;
	f32 bumpiness;
	u32 dualmapID;
};

struct xJSPHeader
{
	type_96 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zPlatFMRunTime
{
	u32 flags;
	type_91 tmrs;
	type_97 ttms;
	type_98 atms;
	type_101 dtms;
	type_103 vms;
	type_104 dss;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_0 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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
	type_78 colls;
	type_52 post;
	type_59 depenq;
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

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	type_61 BeforeAnimMatrices;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_89 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	type_23 lastRefs;
	type_27 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_95 pad;
	void* moprops;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_42 Files;
};

struct RpSector
{
	s32 type;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xShadowSimplePoly
{
	type_43 vert;
	xVec3 norm;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xFFX
{
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_14 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

struct rxReq
{
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_100 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_73 BubbleWandTag;
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
	type_88 HangPawTag;
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
	type_44 Inv_PatsSock;
	type_46 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_48 Inv_LevelPickups;
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
	type_66 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_75 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_87 sb_model_indices;
	type_93 sb_models;
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
	type_65 frustplane;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	type_13 resolvID;
	type_15 base2Name;
	type_17 id2Name;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_69 corner;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_11 activateCB;
	type_11 deactivateCB;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_67 MoveSpeed;
	type_71 AnimSneak;
	type_72 AnimWalk;
	type_74 AnimRun;
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
	type_102 talk_filter;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_77 beginUpdate;
	type_2 endUpdate;
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
	type_24 frustumPlanes;
	RwBBox frustumBoundBox;
	type_31 frustumCorners;
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

struct xEntMotionSplineData
{
	s32 unknown;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_83 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_30 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct zSurfTextureAnim
{
	u16 pad;
	u16 mode;
	u32 group;
	f32 speed;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_5 radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct anim_coll_data
{
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_84 wt;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct zSurfacePropTexAnim
{
	u16 mode;
	f32 speed;
	f32 frame;
	u32 group;
	s32 group_idx;
	xBase* group_ptr;
};

struct RpPolygon
{
	u16 matIndex;
	type_76 vertIndex;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_85 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_92 sceneStart;
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

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct _tagxPad
{
	type_3 value;
	type_9 last_value;
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
	type_36 up_tmr;
	type_39 down_tmr;
	type_51 analog;
};

struct RxNodeMethods
{
	type_28 nodeBody;
	type_32 nodeInit;
	type_35 nodeTerm;
	type_38 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_16 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct xCoef
{
	type_81 a;
};

struct _class_2
{
	xVec3* verts;
};

struct xVec2
{
	f32 x;
	f32 y;
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

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _tagiPad
{
	s32 port;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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

struct zSurfColorFX
{
	u16 flags;
	u16 mode;
	f32 speed;
};

struct zSurfacePropUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	type_99 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_105 clusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xEntSplineData
{
	s32 unknown;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zSurfUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_10 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

type_8 buffer;
type_18 buffer;
zGlobals globals;
type_62 zEnvEventCB;

s32 zEnvEventCB(xBase* to, u32 toEvent, f32* toParam);
void zEnvLoad(_zEnv* ent, xSerial* s);
void zEnvSave(_zEnv* ent, xSerial* s);
void zEnvRender(xEnv* env);
void zEnvStartingCamera(_zEnv* env);
void zEnvSetup(_zEnv* env);
void zEnvInit(_zEnv* env, xEnvAsset* easset);
void zEnvInit(void* env, void* easset);

// zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x175240
s32 zEnvEventCB(xBase* to, u32 toEvent, f32* toParam)
{
}

// zEnvLoad__FP5_zEnvP7xSerial
// Start address: 0x1752c0
void zEnvLoad(_zEnv* ent, xSerial* s)
{
}

// zEnvSave__FP5_zEnvP7xSerial
// Start address: 0x1752d0
void zEnvSave(_zEnv* ent, xSerial* s)
{
}

// zEnvRender__FP4xEnv
// Start address: 0x1752e0
void zEnvRender(xEnv* env)
{
	RpWorld* world;
	s32 num;
	s32 i;
	xSurface* sp;
	zSurfaceProps* pp;
	RpMaterial* mp;
	xGroup* g;
	u32 texid;
	RwTexture* texptr;
}

// zEnvStartingCamera__FP5_zEnv
// Start address: 0x1753e0
void zEnvStartingCamera(_zEnv* env)
{
	xCamera* cam;
}

// zEnvSetup__FP5_zEnv
// Start address: 0x175430
void zEnvSetup(_zEnv* env)
{
}

// zEnvInit__FP5_zEnvP9xEnvAsset
// Start address: 0x175470
void zEnvInit(_zEnv* env, xEnvAsset* easset)
{
	u32 bufsize;
	void* buf;
}

// zEnvInit__FPvPv
// Start address: 0x175610
void zEnvInit(void* env, void* easset)
{
}

