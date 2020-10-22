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
typedef struct _class_0;
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
typedef uint32(*type_1)(void*, void*);
typedef int32(*type_3)(RxNodeDefinition*);
typedef void(*type_4)(xEnt*);
typedef uint32(*type_7)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_8)(void*);
typedef void(*type_9)(RxNodeDefinition*);
typedef void(*type_10)(RwResEntry*);
typedef uint8(*type_11)(widget&, motive&, float32);
typedef RwCamera*(*type_14)(RwCamera*);
typedef uint8(*type_15)(widget&, motive&, float32);
typedef int32(*type_16)(RxPipelineNode*);
typedef void(*type_17)(xEnt*, xVec3*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef void(*type_24)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_29)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_32)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_33)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_38)(xAnimPlay*, xAnimState*);
typedef uint32(*type_39)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_40)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_43)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_46)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_51)(uint32);
typedef void(*type_53)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int8*(*type_55)(xBase*);
typedef int8*(*type_57)(uint32);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_67)(widget&, motive&);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef void(*type_99)(xEnt*, xScene*, float32);
typedef void(*type_106)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint8(*type_113)(widget&, motive&, float32);

typedef uint8 type_2[22];
typedef uint8 type_5[22];
typedef xVec3 type_6[4];
typedef uint16 type_12[3];
typedef RxCluster type_13[1];
typedef uint8 type_19[2];
typedef uint32 type_21[5];
typedef xAnimMultiFileEntry type_22[1];
typedef float32 type_25[4];
typedef xVec3 type_26[5];
typedef uint8 type_27[5];
typedef xVec3 type_28[60];
typedef xCollis type_30[18];
typedef float32 type_34[22];
typedef RwTexCoords* type_35[8];
typedef float32 type_36[22];
typedef RwFrustumPlane type_37[6];
typedef int8 type_41[16];
typedef float32 type_42[15];
typedef uint8 type_44[5];
typedef uint32 type_45[15];
typedef float32 type_47[15];
typedef RwV3d type_48[8];
typedef uint32 type_49[15];
typedef uint32 type_50[15];
typedef int32 type_52[5];
typedef int8 type_56[16];
typedef uint32 type_58[15];
typedef uint16 type_59[3];
typedef int8 type_61[16];
typedef uint32 type_62[72];
typedef analog_data type_63[2];
typedef int8 type_64[4];
typedef int8 type_65[16];
typedef xBase* type_66[72];
typedef uint8 type_68[3];
typedef float32 type_69[2];
typedef uint32* type_70[5];
typedef uint8 type_71[2];
typedef uint32 type_72[2];
typedef xVec4 type_73[12];
typedef uint8 type_74[2];
typedef float32 type_75[6];
typedef xCutsceneZbuffer type_76[4];
typedef float32 type_77[3];
typedef RwTexCoords* type_78[8];
typedef widget* type_79[9];
typedef uint32 type_80[2];
typedef float32 type_81[3];
typedef uint32 type_82[2];
typedef xModelTag type_83[2];
typedef int8 type_84[128];
typedef float32 type_85[4];
typedef float32 type_86[3];
typedef uint32 type_87[2];
typedef uint32 type_89[4];
typedef RpLight* type_90[2];
typedef xEnt* type_91[111];
typedef uint32* type_92[5];
typedef RwFrame* type_93[2];
typedef xVec3 type_94[3];
typedef int8 type_95[32];
typedef int8 type_96[128];
typedef int8 type_97[128][6];
typedef uint32 type_98[5];
typedef uint8 type_100[14];
typedef xModelTag type_101[4];
typedef int8 type_102[32];
typedef xModelInstance* type_103[14];
typedef float32 type_104[16];
typedef special_data type_105[15];
typedef uint32 type_107[5];
typedef int32 type_108[5];
typedef int8 type_109[12];
typedef uint8 type_110[4];
typedef int8 type_111[32];
typedef int8* type_112[9];
typedef int8 type_114[32];
typedef float32 type_115[2];

struct special_data
{
	int8* hud_model;
	int32 max_value;
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

struct meter_widget : widget
{
	meter_asset& res;
	float32 value;
	float32 min_value;
	float32 max_value;
	float32 end_value;
	float32 value_vel;
	float32 value_accel;
	float32 ping_delay;
	float32 pitch;
	sound_queue pings;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
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

struct zPlatform
{
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	RxCluster clusters[1];
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	uint8(*fp_update)(widget&, motive&, float32);
	void* context;
	uint8 inverse;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	_class_2 anim_coll;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	uint32 last_index;
	int32 flg_group;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct RwLinkList
{
	RwLLLink link;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct zCutsceneMgr : xCutsceneMgr
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct rxHeapFreeBlock
{
	uint32 size;
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
	RpClump*(*callback)(RpClump*, void*);
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct _class_0
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

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	int32 precision;
	xVec2 offset;
	int8 buffer[12];
	int32 last_value;
	xfont xf;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct meter_asset : asset
{
	float32 start_value;
	float32 min_value;
	float32 max_value;
	float32 increment_time;
	float32 decrement_time;
	_class_3 sound;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _class_1
{
	uint8 visible;
	uint8 enabled;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct sound_queue
{
	uint32 _playing[5];
	int32 head;
	int32 tail;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
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
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
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

struct rxReq
{
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xSurface
{
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
		_class_4 tuv;
		tri_data_1 tri;
	};
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct color32u
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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
	float32 angle;
};

struct model_widget : widget
{
	uint32 mid;
	xModelInstance* model;
};

struct xCutsceneZbufferHack
{
	int8* name;
	xCutsceneZbuffer times[4];
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
	float32 r;
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

struct font_context
{
	uint32 id;
	int32 justify;
	float32 w;
	float32 h;
	float32 space;
	float32 drop_x;
	float32 drop_y;
	color32u c;
	color32u drop_c;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	int32 offset;
	int32 length;
};

struct RpSector
{
	int32 type;
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

struct xEntBoulder
{
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float32 r;
	float32 g;
	float32 b;
	float32 a;
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
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
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct _tagiPad
{
	int32 port;
};

struct tri_data_1
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct _class_2
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _class_3
{
	uint32 start_increment;
	uint32 increment;
	uint32 start_decrement;
	uint32 decrement;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
int32 meter_widget_index[5];
int32 model_widget_index[5];
uint32* value[5];
uint32 old_value[5];
uint32* max_value[5];
uint32 old_max_value[5];
uint8 hiding[5];
uint8 inited;
uint8 last_paused;
int8* widget_resources[9];
special_data level_specials[15];
widget* widgets[9];
void(*hide_widget)(widget&, motive&);
uint8(*delay_motive_update)(widget&, motive&, float32);
uint8(*shake_motive_update)(widget&, motive&, float32);
zGlobals globals;
eGameMode gGameMode;

void hide();
void show();
void render();
void update(float32 dt);
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
	uint8* it;
	uint8* end;
	// Line 363, Address: 0x17faf0, Func Offset: 0
	// Line 364, Address: 0x17fb00, Func Offset: 0x10
	// Line 366, Address: 0x17fb20, Func Offset: 0x30
	// Line 367, Address: 0x17fb24, Func Offset: 0x34
	// Line 368, Address: 0x17fb3c, Func Offset: 0x4c
	// Line 369, Address: 0x17fb44, Func Offset: 0x54
	// Line 370, Address: 0x17fb58, Func Offset: 0x68
	// Line 371, Address: 0x17fb68, Func Offset: 0x78
	// Line 372, Address: 0x17fb80, Func Offset: 0x90
	// Func End, Address: 0x17fb94, Func Offset: 0xa4
}

// show__4zhudFv
// Start address: 0x17fba0
void show()
{
	widget** it;
	widget** end;
	widget* widget;
	uint8* it;
	uint8* end;
	// Line 349, Address: 0x17fba0, Func Offset: 0
	// Line 350, Address: 0x17fbb0, Func Offset: 0x10
	// Line 352, Address: 0x17fbd0, Func Offset: 0x30
	// Line 353, Address: 0x17fbd4, Func Offset: 0x34
	// Line 354, Address: 0x17fbdc, Func Offset: 0x3c
	// Line 355, Address: 0x17fbf0, Func Offset: 0x50
	// Line 356, Address: 0x17fc00, Func Offset: 0x60
	// Line 357, Address: 0x17fc08, Func Offset: 0x68
	// Line 358, Address: 0x17fc18, Func Offset: 0x78
	// Line 359, Address: 0x17fc28, Func Offset: 0x88
	// Line 360, Address: 0x17fc40, Func Offset: 0xa0
	// Func End, Address: 0x17fc58, Func Offset: 0xb8
}

// render__4zhudFv
// Start address: 0x17fc60
void render()
{
	// Line 345, Address: 0x17fc60, Func Offset: 0
	// Func End, Address: 0x17fc68, Func Offset: 0x8
}

// update__4zhudFf
// Start address: 0x17fc70
void update(float32 dt)
{
	int32 i;
	int32 i;
	int8 @3956;
	uint32 model_type;
	int8 @3948;
	uint32 meter_type;
	// Line 273, Address: 0x17fc70, Func Offset: 0
	// Line 274, Address: 0x17fca8, Func Offset: 0x38
	// Line 276, Address: 0x17fcc0, Func Offset: 0x50
	// Line 280, Address: 0x17fcc8, Func Offset: 0x58
	// Line 282, Address: 0x17fcd8, Func Offset: 0x68
	// Line 285, Address: 0x17fce0, Func Offset: 0x70
	// Line 288, Address: 0x17fd14, Func Offset: 0xa4
	// Line 289, Address: 0x17fd2c, Func Offset: 0xbc
	// Line 290, Address: 0x17fd34, Func Offset: 0xc4
	// Line 293, Address: 0x17fd38, Func Offset: 0xc8
	// Line 295, Address: 0x17fd54, Func Offset: 0xe4
	// Line 296, Address: 0x17fd5c, Func Offset: 0xec
	// Line 297, Address: 0x17fd60, Func Offset: 0xf0
	// Line 298, Address: 0x17fd68, Func Offset: 0xf8
	// Line 301, Address: 0x17fd84, Func Offset: 0x114
	// Line 305, Address: 0x17fd88, Func Offset: 0x118
	// Line 308, Address: 0x17fdc0, Func Offset: 0x150
	// Line 309, Address: 0x17fdd8, Func Offset: 0x168
	// Line 310, Address: 0x17fe10, Func Offset: 0x1a0
	// Line 311, Address: 0x17fe1c, Func Offset: 0x1ac
	// Line 312, Address: 0x17fe38, Func Offset: 0x1c8
	// Line 313, Address: 0x17fe6c, Func Offset: 0x1fc
	// Line 315, Address: 0x17fe74, Func Offset: 0x204
	// Line 316, Address: 0x17fe7c, Func Offset: 0x20c
	// Line 318, Address: 0x17feb0, Func Offset: 0x240
	// Line 319, Address: 0x17febc, Func Offset: 0x24c
	// Line 321, Address: 0x17fef4, Func Offset: 0x284
	// Line 322, Address: 0x17ff64, Func Offset: 0x2f4
	// Line 323, Address: 0x17ff70, Func Offset: 0x300
	// Line 324, Address: 0x18000c, Func Offset: 0x39c
	// Line 323, Address: 0x180018, Func Offset: 0x3a8
	// Line 324, Address: 0x180030, Func Offset: 0x3c0
	// Line 326, Address: 0x180038, Func Offset: 0x3c8
	// Line 328, Address: 0x180048, Func Offset: 0x3d8
	// Line 330, Address: 0x180074, Func Offset: 0x404
	// Line 331, Address: 0x180090, Func Offset: 0x420
	// Line 332, Address: 0x1800c4, Func Offset: 0x454
	// Line 334, Address: 0x1800e4, Func Offset: 0x474
	// Line 333, Address: 0x1800e8, Func Offset: 0x478
	// Line 334, Address: 0x1800ec, Func Offset: 0x47c
	// Line 335, Address: 0x180134, Func Offset: 0x4c4
	// Line 336, Address: 0x180140, Func Offset: 0x4d0
	// Line 337, Address: 0x1801cc, Func Offset: 0x55c
	// Line 336, Address: 0x1801d8, Func Offset: 0x568
	// Line 337, Address: 0x1801e0, Func Offset: 0x570
	// Line 340, Address: 0x1801e8, Func Offset: 0x578
	// Line 341, Address: 0x1801f0, Func Offset: 0x580
	// Func End, Address: 0x180224, Func Offset: 0x5b4
}

// destroy__4zhudFv
// Start address: 0x180230
void destroy()
{
	// Line 264, Address: 0x180230, Func Offset: 0
	// Line 267, Address: 0x180234, Func Offset: 0x4
	// Line 264, Address: 0x180238, Func Offset: 0x8
	// Line 267, Address: 0x18023c, Func Offset: 0xc
	// Line 268, Address: 0x180250, Func Offset: 0x20
	// Line 269, Address: 0x180258, Func Offset: 0x28
	// Line 270, Address: 0x180260, Func Offset: 0x30
	// Func End, Address: 0x18026c, Func Offset: 0x3c
}

// setup__4zhudFv
// Start address: 0x180270
void setup()
{
	int32 i;
	uint32 id;
	widget_chunk* wc;
	special_data& special;
	uint32 id;
	widget_chunk* wc;
	font_meter_widget& meter;
	uint32 id;
	widget_chunk* wc;
	int32 i;
	// Line 196, Address: 0x180270, Func Offset: 0
	// Line 197, Address: 0x180294, Func Offset: 0x24
	// Line 199, Address: 0x18029c, Func Offset: 0x2c
	// Line 201, Address: 0x1802b0, Func Offset: 0x40
	// Line 202, Address: 0x1802b8, Func Offset: 0x48
	// Line 204, Address: 0x1802c0, Func Offset: 0x50
	// Line 207, Address: 0x1802c4, Func Offset: 0x54
	// Line 204, Address: 0x1802c8, Func Offset: 0x58
	// Line 206, Address: 0x1802cc, Func Offset: 0x5c
	// Line 207, Address: 0x1802d4, Func Offset: 0x64
	// Line 206, Address: 0x1802d8, Func Offset: 0x68
	// Line 207, Address: 0x1802e0, Func Offset: 0x70
	// Line 210, Address: 0x1802e8, Func Offset: 0x78
	// Line 211, Address: 0x180300, Func Offset: 0x90
	// Line 213, Address: 0x18030c, Func Offset: 0x9c
	// Line 214, Address: 0x180310, Func Offset: 0xa0
	// Line 215, Address: 0x180314, Func Offset: 0xa4
	// Line 219, Address: 0x180320, Func Offset: 0xb0
	// Line 220, Address: 0x18032c, Func Offset: 0xbc
	// Line 224, Address: 0x180334, Func Offset: 0xc4
	// Line 222, Address: 0x180338, Func Offset: 0xc8
	// Line 225, Address: 0x18033c, Func Offset: 0xcc
	// Line 226, Address: 0x180340, Func Offset: 0xd0
	// Line 224, Address: 0x180344, Func Offset: 0xd4
	// Line 225, Address: 0x18034c, Func Offset: 0xdc
	// Line 226, Address: 0x180354, Func Offset: 0xe4
	// Line 227, Address: 0x180358, Func Offset: 0xe8
	// Line 230, Address: 0x180364, Func Offset: 0xf4
	// Line 231, Address: 0x18036c, Func Offset: 0xfc
	// Line 233, Address: 0x180374, Func Offset: 0x104
	// Line 235, Address: 0x180380, Func Offset: 0x110
	// Line 239, Address: 0x180390, Func Offset: 0x120
	// Line 240, Address: 0x1803a4, Func Offset: 0x134
	// Line 241, Address: 0x1803a8, Func Offset: 0x138
	// Line 240, Address: 0x1803ac, Func Offset: 0x13c
	// Line 247, Address: 0x1803b8, Func Offset: 0x148
	// Line 241, Address: 0x1803bc, Func Offset: 0x14c
	// Line 242, Address: 0x1803c8, Func Offset: 0x158
	// Line 243, Address: 0x1803d8, Func Offset: 0x168
	// Line 244, Address: 0x1803e8, Func Offset: 0x178
	// Line 245, Address: 0x1803f4, Func Offset: 0x184
	// Line 244, Address: 0x1803f8, Func Offset: 0x188
	// Line 247, Address: 0x1803fc, Func Offset: 0x18c
	// Line 245, Address: 0x18040c, Func Offset: 0x19c
	// Line 247, Address: 0x180414, Func Offset: 0x1a4
	// Line 245, Address: 0x180418, Func Offset: 0x1a8
	// Line 247, Address: 0x18041c, Func Offset: 0x1ac
	// Line 249, Address: 0x18043c, Func Offset: 0x1cc
	// Line 250, Address: 0x180458, Func Offset: 0x1e8
	// Line 252, Address: 0x18048c, Func Offset: 0x21c
	// Line 254, Address: 0x180494, Func Offset: 0x224
	// Line 255, Address: 0x18049c, Func Offset: 0x22c
	// Line 257, Address: 0x1804d0, Func Offset: 0x260
	// Line 258, Address: 0x1804dc, Func Offset: 0x26c
	// Line 259, Address: 0x180514, Func Offset: 0x2a4
	// Line 260, Address: 0x180518, Func Offset: 0x2a8
	// Line 259, Address: 0x180520, Func Offset: 0x2b0
	// Line 260, Address: 0x180534, Func Offset: 0x2c4
	// Line 261, Address: 0x18053c, Func Offset: 0x2cc
	// Func End, Address: 0x180568, Func Offset: 0x2f8
}

// init__4zhudFv
// Start address: 0x180570
void init()
{
	// Line 191, Address: 0x180570, Func Offset: 0
	// Line 192, Address: 0x180574, Func Offset: 0x4
	// Func End, Address: 0x18057c, Func Offset: 0xc
}

// hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x180580
void hide_widget(widget& w)
{
	// Line 80, Address: 0x180580, Func Offset: 0
	// Func End, Address: 0x180588, Func Offset: 0x8
}

