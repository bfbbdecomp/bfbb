typedef struct special_data;
typedef struct xLinkAsset;
typedef struct meter_widget;
typedef struct RxPipelineCluster;
typedef struct xEnt;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct tag_xFile;
typedef struct RxNodeDefinition;
typedef struct zPlatform;
typedef struct xAnimTransition;
typedef struct xEnvAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct zGlobals;
typedef struct _tagxRumble;
typedef struct xAnimSingle;
typedef enum RwFogType;
typedef struct RpAtomic;
typedef struct RwResEntry;
typedef struct RpPolygon;
typedef struct iColor_tag;
typedef struct xCutsceneMgrAsset;
typedef struct xLightKitLight;
typedef struct xAnimActiveEffect;
typedef struct widget;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct zGlobalSettings;
typedef struct xShadowSimpleCache;
typedef struct motive;
typedef struct xModelPool;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xBound;
typedef struct xModelInstance;
typedef struct RpMaterialList;
typedef struct _zPortal;
typedef struct zAssetPickupTable;
typedef struct xGroup;
typedef struct xEntShadow;
typedef struct RwLinkList;
typedef struct xUpdateCullEnt;
typedef struct xAnimState;
typedef struct zCutsceneMgr;
typedef struct RxPipelineNode;
typedef struct xAnimMultiFile;
typedef struct zPlayerLassoInfo;
typedef struct RpMaterial;
typedef struct xGroupAsset;
typedef struct xClumpCollBSPTriangle;
typedef struct xVec3;
typedef struct zScene;
typedef struct anim_coll_data;
typedef struct xBBox;
typedef struct xBase;
typedef struct zLedgeGrabParams;
typedef struct rxHeapFreeBlock;
typedef struct widget_chunk;
typedef struct RpClump;
typedef struct RwRaster;
typedef struct xCutsceneTime;
typedef struct xCutscene;
typedef struct RxPipelineNodeTopSortData;
typedef union _class_0;
typedef struct RwV2d;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xCutsceneInfo;
typedef struct font_meter_widget;
typedef struct RwV3d;
typedef enum _zPlayerWallJumpState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xCutsceneData;
typedef struct RxPipeline;
typedef struct RpMorphTarget;
typedef struct meter_asset;
typedef struct xAnimTable;
typedef struct RxPipelineNodeParam;
typedef struct _class_1;
typedef struct RxHeap;
typedef struct xAnimEffect;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct iEnv;
typedef enum eGameMode;
typedef struct RpVertexNormal;
typedef struct xCutsceneBreak;
typedef struct xGridBound;
typedef struct xQuat;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwTexCoords;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct rxHeapBlockHeader;
typedef struct xJSPNodeInfo;
typedef struct xMat4x3;
typedef struct xEntAsset;
typedef struct RpMeshHeader;
typedef struct xEnv;
typedef struct xDynAsset;
typedef struct analog_data;
typedef struct XCSNNosey;
typedef struct xMemPool;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpTriangle;
typedef struct asset;
typedef struct zPlayerGlobals;
typedef struct sound_queue;
typedef struct zCheckPoint;
typedef struct xfont;
typedef enum _enum;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xJSPHeader;
typedef struct xCutsceneZbuffer;
typedef struct zPlayerCarryInfo;
typedef struct rxReq;
typedef struct xUpdateCullMgr;
typedef struct xPortalAsset;
typedef struct zPlayerSettings;
typedef enum RxClusterValidityReq;
typedef struct xCamera;
typedef struct _zEnv;
typedef struct xSurface;
typedef struct xCollis;
typedef struct zJumpParam;
typedef struct xAnimTransitionList;
typedef struct motive_node;
typedef struct RwCamera;
typedef struct xClumpCollBSPTree;
typedef struct color32u;
typedef struct xEntCollis;
typedef enum RxNodeDefEditable;
typedef struct xModelTag;
typedef enum RxClusterValid;
typedef struct zEntHangable;
typedef struct xRot;
typedef struct model_widget;
typedef struct xCutsceneZbufferHack;
typedef enum RpWorldRenderOrder;
typedef enum rxEmbeddedPacketState;
typedef struct xFFX;
typedef struct xSphere;
typedef struct xQCData;
typedef struct xEntDrive;
typedef struct iFogParams;
typedef struct xModelBucket;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwTexture;
typedef struct font_context;
typedef struct tag_iFile;
typedef struct RpSector;
typedef struct xScene;
typedef struct RpWorld;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xEntBoulder;
typedef struct render_context;
typedef struct xEntFrame;
typedef struct xCutsceneMgr;
typedef enum _tagPadState;
typedef struct RpLight;
typedef struct RwSphere;
typedef struct xGlobals;
typedef struct xVec2;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xShadowSimplePoly;
typedef struct _tagxPad;
typedef struct xBaseAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct tri_data_0;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct _tagPadAnalog;
typedef struct RxIoSpec;
typedef struct zLasso;
typedef struct _tagiPad;
typedef struct tri_data_1;
typedef struct xAnimMultiFileEntry;
typedef struct basic_rect;
typedef struct _class_2;
typedef struct RxNodeMethods;
typedef struct RwFrustumPlane;
typedef struct _class_3;
typedef struct RwPlane;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimMultiFileBase;
typedef struct _class_4;

typedef void(*type_0)(xMemPool*, void*);
typedef u32(*type_1)(void*, void*);
typedef s32(*type_3)(RxNodeDefinition*);
typedef void(*type_4)(xEnt*);
typedef u32(*type_7)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_8)(void*);
typedef void(*type_9)(RxNodeDefinition*);
typedef void(*type_10)(RwResEntry*);
typedef u8(*type_11)(widget&, motive&, f32);
typedef RwCamera*(*type_14)(RwCamera*);
typedef u8(*type_15)(widget&, motive&, f32);
typedef s32(*type_16)(RxPipelineNode*);
typedef void(*type_17)(xEnt*, xVec3*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef void(*type_24)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_29)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_32)(xEnt*, xScene*, f32, xEntCollis*);
typedef u32(*type_33)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_38)(xAnimPlay*, xAnimState*);
typedef u32(*type_39)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_40)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_43)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_46)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_51)(u32);
typedef void(*type_53)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_54)(xBase*, xBase*, u32, f32*, xBase*);
typedef s8*(*type_55)(xBase*);
typedef s8*(*type_57)(u32);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_67)(widget&, motive&);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef void(*type_99)(xEnt*, xScene*, f32);
typedef void(*type_106)(xEnt*, xScene*, f32, xEntFrame*);
typedef u8(*type_113)(widget&, motive&, f32);

typedef u8 type_2[22];
typedef u8 type_5[22];
typedef xVec3 type_6[4];
typedef u16 type_12[3];
typedef RxCluster type_13[1];
typedef u8 type_19[2];
typedef u32 type_21[5];
typedef xAnimMultiFileEntry type_22[1];
typedef f32 type_25[4];
typedef xVec3 type_26[5];
typedef u8 type_27[5];
typedef xVec3 type_28[60];
typedef xCollis type_30[18];
typedef f32 type_34[22];
typedef RwTexCoords* type_35[8];
typedef f32 type_36[22];
typedef RwFrustumPlane type_37[6];
typedef s8 type_41[16];
typedef f32 type_42[15];
typedef u8 type_44[5];
typedef u32 type_45[15];
typedef f32 type_47[15];
typedef RwV3d type_48[8];
typedef u32 type_49[15];
typedef u32 type_50[15];
typedef s32 type_52[5];
typedef s8 type_56[16];
typedef u32 type_58[15];
typedef u16 type_59[3];
typedef s8 type_61[16];
typedef u32 type_62[72];
typedef analog_data type_63[2];
typedef s8 type_64[4];
typedef s8 type_65[16];
typedef xBase* type_66[72];
typedef u8 type_68[3];
typedef f32 type_69[2];
typedef u32* type_70[5];
typedef u8 type_71[2];
typedef u32 type_72[2];
typedef xVec4 type_73[12];
typedef u8 type_74[2];
typedef f32 type_75[6];
typedef xCutsceneZbuffer type_76[4];
typedef f32 type_77[3];
typedef RwTexCoords* type_78[8];
typedef widget* type_79[9];
typedef u32 type_80[2];
typedef f32 type_81[3];
typedef u32 type_82[2];
typedef xModelTag type_83[2];
typedef s8 type_84[128];
typedef f32 type_85[4];
typedef f32 type_86[3];
typedef u32 type_87[2];
typedef u32 type_89[4];
typedef RpLight* type_90[2];
typedef xEnt* type_91[111];
typedef u32* type_92[5];
typedef RwFrame* type_93[2];
typedef xVec3 type_94[3];
typedef s8 type_95[32];
typedef s8 type_96[128];
typedef type_96 type_97[6];
typedef u32 type_98[5];
typedef u8 type_100[14];
typedef xModelTag type_101[4];
typedef s8 type_102[32];
typedef xModelInstance* type_103[14];
typedef f32 type_104[16];
typedef special_data type_105[15];
typedef u32 type_107[5];
typedef s32 type_108[5];
typedef s8 type_109[12];
typedef u8 type_110[4];
typedef s8 type_111[32];
typedef s8* type_112[9];
typedef s8 type_114[32];
typedef f32 type_115[2];

struct special_data
{
	s8* hud_model;
	s32 max_value;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_25 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct meter_widget : widget
{
	meter_asset& res;
	f32 value;
	f32 min_value;
	f32 max_value;
	f32 end_value;
	f32 value_vel;
	f32 value_accel;
	f32 ping_delay;
	f32 pitch;
	sound_queue pings;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	type_99 update;
	type_99 endUpdate;
	type_17 bupdate;
	type_106 move;
	type_4 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_40 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_19 NumAnims;
	void** RawData;
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

struct tag_xFile
{
	type_95 relname;
	tag_iFile ps;
	void* user_data;
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

struct zPlatform
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_7 Conditional;
	type_7 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_115 BilinearLerp;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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
	type_60 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_10 destroyNotify;
};

struct RpPolygon
{
	u16 matIndex;
	type_12 vertIndex;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_42 startTime;
	type_47 endTime;
	type_49 emitID;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_104 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct widget
{
	_class_1 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_13 clusters;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
	type_71 PowerUp;
	type_74 InitialPowerUp;
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
	type_6 corner;
};

struct motive
{
	f32* value;
	f32 delta;
	f32 start_delta;
	f32 max_offset;
	f32 offset;
	f32 accel;
	type_15 fp_update;
	void* context;
	u8 inverse;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
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
	type_53 BeforeAnimMatrices;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_68 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	_class_2 anim_coll;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zAssetPickupTable
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_69 radius;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_1 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_38 BeforeEnter;
	type_24 StateCallback;
	type_53 BeforeAnimMatrices;
};

struct zCutsceneMgr : xCutsceneMgr
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_22 Files;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	type_62 baseCount;
	type_66 baseList;
	_zEnv* zen;
};

struct anim_coll_data
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_28 tranTable;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct widget_chunk : xBase
{
	widget w;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_31 callback;
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

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
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
	type_80 SndChannelReq;
	type_82 SndAssetID;
	type_87 SndHandle;
	XCSNNosey* cb_nosey;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwV2d
{
	f32 x;
	f32 y;
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
	type_78 texCoords;
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
	type_35 texCoords;
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
	type_61 SoundLeft;
	type_65 SoundRight;
};

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	s32 precision;
	xVec2 offset;
	type_109 buffer;
	s32 last_value;
	xfont xf;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct meter_asset : asset
{
	f32 start_value;
	f32 min_value;
	f32 max_value;
	f32 increment_time;
	f32 decrement_time;
	_class_3 sound;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _class_1
{
	u8 visible;
	u8 enabled;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_46 Callback;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_90 light;
	type_93 light_frame;
	s32 memlvl;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
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

struct xQuat
{
	xVec3 v;
	f32 s;
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

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_89 pad;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_0 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RpTriangle
{
	type_59 vertIndex;
	s16 matIndex;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
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
	type_83 BubbleWandTag;
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
	type_101 HangPawTag;
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
	type_45 Inv_PatsSock;
	type_50 Inv_PatsSock_Max;
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
	type_72 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_91 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_100 sb_model_indices;
	type_103 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct sound_queue
{
	type_98 _playing;
	s32 head;
	s32 tail;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct xfont
{
	u32 id;
	f32 width;
	f32 height;
	f32 space;
	iColor_tag color;
	basic_rect clip;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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

struct xJSPHeader
{
	type_64 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xCutsceneZbuffer
{
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
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

struct rxReq
{
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
	type_8 activateCB;
	type_8 deactivateCB;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_75 MoveSpeed;
	type_77 AnimSneak;
	type_81 AnimWalk;
	type_86 AnimRun;
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
	type_110 talk_filter;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_73 frustplane;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xSurface
{
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
		_class_4 tuv;
		tri_data_1 tri;
	};
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_14 beginUpdate;
	type_18 endUpdate;
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
	type_37 frustumPlanes;
	RwBBox frustumBoundBox;
	type_48 frustumCorners;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct color32u
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
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
	type_30 colls;
	type_32 post;
	type_33 depenq;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_85 wt;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zEntHangable
{
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct model_widget : widget
{
	u32 mid;
	xModelInstance* model;
};

struct xCutsceneZbufferHack
{
	s8* name;
	type_76 times;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
};

struct xSphere
{
	xVec3 center;
	f32 r;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_111 name;
	type_114 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct font_context
{
	u32 id;
	s32 justify;
	f32 w;
	f32 h;
	f32 space;
	f32 drop_x;
	f32 drop_y;
	color32u c;
	color32u drop_c;
};

struct tag_iFile
{
	u32 flags;
	type_84 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct RpSector
{
	s32 type;
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
	type_51 resolvID;
	type_55 base2Name;
	type_57 id2Name;
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
	type_88 renderCallBack;
	RxPipeline* pipeline;
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

struct xEntBoulder
{
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	f32 r;
	f32 g;
	f32 b;
	f32 a;
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_97 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_102 sceneStart;
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xShadowSimplePoly
{
	type_94 vert;
	xVec3 norm;
};

struct _tagxPad
{
	type_2 value;
	type_5 last_value;
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
	type_34 up_tmr;
	type_36 down_tmr;
	type_63 analog;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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
	type_26 lastRefs;
	type_27 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _tagiPad
{
	s32 port;
};

struct tri_data_1
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

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct _class_2
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_43 nodeBody;
	type_3 nodeInit;
	type_9 nodeTerm;
	type_16 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_29 pipelineNodeConfig;
	type_39 configMsgHandler;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct _class_3
{
	u32 start_increment;
	u32 increment;
	u32 start_decrement;
	u32 decrement;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_41 buffer;
type_56 buffer;
type_108 meter_widget_index;
type_52 model_widget_index;
type_92 value;
type_21 old_value;
type_70 max_value;
type_107 old_max_value;
type_44 hiding;
u8 inited;
u8 last_paused;
type_112 widget_resources;
type_105 level_specials;
type_79 widgets;
type_67 hide_widget;
type_11 delay_motive_update;
type_113 shake_motive_update;
zGlobals globals;
eGameMode gGameMode;

void hide();
void show();
void render();
void update(f32 dt);
void destroy();
void setup();
void init();
void hide_widget(widget& w);

// hide__4zhudFv
// Start address: 0x17faf0
void hide()
{
	widget** it;
	widget** end;
	widget* widget;
	u8* it;
	u8* end;
}

// show__4zhudFv
// Start address: 0x17fba0
void show()
{
	widget** it;
	widget** end;
	widget* widget;
	u8* it;
	u8* end;
}

// render__4zhudFv
// Start address: 0x17fc60
void render()
{
}

// update__4zhudFf
// Start address: 0x17fc70
void update(f32 dt)
{
	s32 i;
	s32 i;
	s8 @3956;
	u32 model_type;
	s8 @3948;
	u32 meter_type;
}

// destroy__4zhudFv
// Start address: 0x180230
void destroy()
{
}

// setup__4zhudFv
// Start address: 0x180270
void setup()
{
	s32 i;
	u32 id;
	widget_chunk* wc;
	special_data& special;
	u32 id;
	widget_chunk* wc;
	font_meter_widget& meter;
	u32 id;
	widget_chunk* wc;
	s32 i;
}

// init__4zhudFv
// Start address: 0x180570
void init()
{
}

// hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x180580
void hide_widget(widget& w)
{
}

