typedef struct RxPipelineNode;
typedef struct zCutsceneMgr;
typedef struct xAnimState;
typedef struct zPlayerGlobals;
typedef struct xEntOrbitData;
typedef struct analog_data;
typedef struct RwObjectHasFrame;
typedef struct xCoef3;
typedef struct zPlatFMRunTime;
typedef struct RpAtomic;
typedef struct rxHeapFreeBlock;
typedef struct xEnt;
typedef struct zAssetPickupTable;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct xGroup;
typedef struct RwV2d;
typedef struct xBaseAsset;
typedef struct st_SERIAL_CLIENTINFO;
typedef enum RpWorldRenderOrder;
typedef struct RxNodeDefinition;
typedef struct xScene;
typedef struct xEntMotion;
typedef struct xClumpCollBSPBranchNode;
typedef struct xEntBoulder;
typedef struct RpMaterial;
typedef struct xPlatformAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zCheckPoint;
typedef struct xEntMotionAsset;
typedef struct RpTriangle;
typedef struct xModelInstance;
typedef struct xSurface;
typedef struct RxPipeline;
typedef struct xMovePointAsset;
typedef struct RxPipelineCluster;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xBound;
typedef struct RwTexture;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeParam;
typedef struct xVec2;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xUpdateCullMgr;
typedef struct RpMeshHeader;
typedef struct zPlayerCarryInfo;
typedef struct xEntAsset;
typedef struct xQuat;
typedef struct EGGItem;
typedef struct RwResEntry;
typedef struct xEntDrive;
typedef struct xCamera;
typedef struct xBBox;
typedef struct RwV3d;
typedef struct xCounterAsset;
typedef struct zPlayerSettings;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct rxHeapBlockHeader;
typedef struct xEntSplineData;
typedef struct _zEnv;
typedef struct zEnt;
typedef struct RpClump;
typedef struct RwCamera;
typedef struct RpLight;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPTree;
typedef struct xLightKit;
typedef struct zGlobalSettings;
typedef struct xUpdateCullEnt;
typedef struct xSerial;
typedef struct xEntMotionPenData;
typedef struct xJSPNodeInfo;
typedef struct RpWorld;
typedef struct xEnvAsset;
typedef struct _zPortal;
typedef struct xEntFrame;
typedef struct xAnimTransitionList;
typedef struct xAnimTable;
typedef struct zLasso;
typedef struct xMat4x3;
typedef struct xPortalAsset;
typedef struct xAnimTransition;
typedef struct xVec4;
typedef struct GECheat;
typedef struct xEntMPData;
typedef struct xGridBound;
typedef struct xVec3;
typedef struct iFogParams;
typedef struct RwSurfaceProperties;
typedef struct _tagxRumble;
typedef struct RwMatrixTag;
typedef struct xUpdateCullGroup;
typedef struct xShadowSimplePoly;
typedef struct rxReq;
typedef struct xMovePoint;
typedef struct iEnv;
typedef enum RxClusterValidityReq;
typedef struct RwLLLink;
typedef struct xSpline3;
typedef struct xAnimMultiFileEntry;
typedef struct EGGItemFuncs;
typedef struct xAnimActiveEffect;
typedef struct xEntMotionERData;
typedef struct tri_data_0;
typedef struct xAnimFile;
typedef struct tri_data_1;
typedef enum RxNodeDefEditable;
typedef struct _class_0;
typedef struct xLightKitLight;
typedef enum _tagPadState;
typedef struct RpVertexNormal;
typedef enum RxClusterValid;
typedef struct xAnimSingle;
typedef struct _xCounter;
typedef struct xCollis;
typedef struct xRot;
typedef struct xShadowSimpleCache;
typedef struct xGlobals;
typedef struct xEntCollis;
typedef struct zEntHangable;
typedef struct RwFrame;
typedef struct _tagxPad;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct xAnimEffect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct EGGMisc;
typedef struct _class_1;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xBox;
typedef struct RpPolygon;
typedef struct xLinkAsset;
typedef struct xEntMotionOrbitData;
typedef struct RxClusterDefinition;
typedef struct xAnimPlay;
typedef struct _tagiPad;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct xModelPool;
typedef struct RwSphere;
typedef union EGGData;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct xMat3x3;
typedef struct xEntMechData;
typedef struct anim_coll_data;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntMotionSplineData;
typedef struct RxClusterRef;
typedef struct xClumpCollBSPTriangle;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct zPlatform;
typedef struct zGlobals;
typedef struct xQCData;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwFrustumPlane;
typedef struct zPlayerLassoInfo;
typedef struct RwPlane;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef struct RxCluster;
typedef struct zJumpParam;
typedef enum _zPlayerWallJumpState;
typedef struct RxPacket;
typedef struct xEntMotionMechData;
typedef struct xCoef;
typedef enum RwFogType;
typedef struct xEntPenData;
typedef struct RwRGBAReal;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RwLinkList;
typedef struct xModelTag;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int32(*type_2)(RxPipelineNode*);
typedef uint32(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef int8*(*type_8)(uint32);
typedef void(*type_10)(RxPipelineNode*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(xAnimPlay*, xAnimState*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_36)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_38)(EGGItem*);
typedef RpWorldSector*(*type_39)(RpWorldSector*);
typedef int32(*type_40)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_43)(RxNodeDefinition*);
typedef void(*type_44)(EGGItem*);
typedef void(*type_47)(RxNodeDefinition*);
typedef void(*type_48)(EGGItem*);
typedef void(*type_53)(float32, EGGItem*);
typedef void(*type_57)(void*);
typedef void(*type_59)(EGGItem*);
typedef void(*type_67)(xEnt*, xScene*, float32);
typedef void(*type_71)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_72)(xEnt*, xVec3*);
typedef uint32(*type_74)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_77)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_81)(xEnt*);
typedef xBase*(*type_85)(uint32);
typedef uint32(*type_87)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_91)(xBase*);
typedef void(*type_92)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_107)();
typedef RpClump*(*type_113)(RpClump*, void*);
typedef uint32(*type_114)(void*, void*);
typedef void(*type_121)(xMemPool*, void*);
typedef int32(*type_130)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_131)(RwResEntry*);

typedef uint32 type_1[2];
typedef uint32 type_4[16];
typedef uint32 type_9[15];
typedef float32 type_11[2];
typedef uint32 type_12[16];
typedef uint32 type_13[15];
typedef float32 type_14[12];
typedef float32 type_15[12];
typedef uint32 type_16[16];
typedef uint32 type_17[15];
typedef float32 type_18[12];
typedef RwTexCoords* type_20[8];
typedef uint32 type_21[16];
typedef float32 type_22[12];
typedef uint32 type_24[72];
typedef analog_data type_25[2];
typedef int8 type_26[4];
typedef float32 type_27[4];
typedef float32 type_28[12];
typedef xBase* type_30[72];
typedef float32 type_31[12];
typedef uint32 type_32[16];
typedef uint32 type_33[16];
typedef RwFrustumPlane type_35[6];
typedef uint32 type_37[3];
typedef uint32 type_41[16];
typedef RwV3d type_42[8];
typedef uint32 type_45[16];
typedef EGGItem type_46[2];
typedef uint8 type_49[2];
typedef uint32 type_50[16];
typedef uint8 type_51[2];
typedef xVec4 type_52[12];
typedef uint32 type_54[2];
typedef uint8 type_55[2];
typedef float32 type_56[6];
typedef uint32 type_58[16];
typedef xVec3 type_60[3];
typedef uint32 type_61[16];
typedef float32 type_62[3];
typedef float32 type_63[3];
typedef xModelTag type_64[2];
typedef float32 type_65[3];
typedef uint32 type_66[16];
typedef uint32 type_68[16];
typedef RpLight* type_69[2];
typedef float32 type_70[16];
typedef uint32 type_73[6];
typedef xEnt* type_75[111];
typedef RwFrame* type_76[2];
typedef uint32 type_78[16];
typedef int8 type_79[16];
typedef float32 type_80[2];
typedef uint32 type_82[16];
typedef int8* type_83[2];
typedef uint8 type_84[3];
typedef int8 type_86[128];
typedef uint32 type_88[16];
typedef type_86 type_89[6];
typedef int8 type_90[16];
typedef uint32 type_93[7];
typedef uint16 type_94[3];
typedef uint32 type_95[16];
typedef uint8 type_96[14];
typedef uint32 type_97[2];
typedef xModelTag type_98[4];
typedef int8 type_99[32];
typedef uint32 type_100[16];
typedef uint32 type_101[4];
typedef xVec3 type_102[4];
typedef xModelInstance* type_103[14];
typedef uint8 type_104[2];
typedef xAnimMultiFileEntry type_105[1];
typedef uint32 type_106[16];
typedef uint8 type_108[4];
typedef int8 type_109[32];
typedef uint8 type_110[2];
typedef uint32 type_111[16];
typedef float32 type_112[4];
typedef uint8 type_115[22];
typedef uint32 type_116[16];
typedef uint8 type_117[22];
typedef xCollis type_118[18];
typedef RwTexCoords* type_119[8];
typedef uint32 type_120[16];
typedef uint8 type_122[3];
typedef GECheat type_123[22];
typedef uint32 type_124[16];
typedef int8 type_125[32];
typedef xVec3 type_126[5];
typedef uint32 type_127[16];
typedef int8 type_128[32];
typedef uint8 type_129[5];
typedef uint16 type_132[3];
typedef uint32 type_133[16];
typedef xVec3 type_134[60];
typedef float32 type_135[4];
typedef uint32 type_136[16];
typedef uint32 type_137[16];
typedef float32 type_138[22];
typedef float32 type_139[22];
typedef RxCluster type_140[1];

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

struct zCutsceneMgr
{
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
	type_23 BeforeEnter;
	type_29 StateCallback;
	type_34 BeforeAnimMatrices;
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
	type_64 BubbleWandTag;
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
	type_98 HangPawTag;
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
	type_9 Inv_PatsSock;
	type_13 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_17 Inv_LevelPickups;
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
	type_54 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_75 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_96 sb_model_indices;
	type_103 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_6 sync;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_14 tmrs;
	type_15 ttms;
	type_18 atms;
	type_22 dtms;
	type_28 vms;
	type_31 dss;
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
	type_7 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_67 update;
	type_67 endUpdate;
	type_72 bupdate;
	type_77 move;
	type_81 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_92 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zAssetPickupTable
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct st_SERIAL_CLIENTINFO
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_85 resolvID;
	type_91 base2Name;
	type_8 id2Name;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xEntBoulder
{
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

struct xPlatformAsset
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RpTriangle
{
	type_132 vertIndex;
	int16 matIndex;
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
	type_122 pad;
	void* moprops;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_130 eventFunc;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_84 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_125 name;
	type_128 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_105 Files;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RpSector
{
	int32 type;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xJSPHeader
{
	type_26 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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
	type_57 activateCB;
	type_57 deactivateCB;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct EGGItem
{
	type_38 fun_check;
	EGGItemFuncs* funcs;
	int32 enabled;
	EGGData eggdata;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_131 destroyNotify;
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
	type_52 frustplane;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xCounterAsset : xBaseAsset
{
	int16 count;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_56 MoveSpeed;
	type_62 AnimSneak;
	type_63 AnimWalk;
	type_65 AnimRun;
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
	type_108 talk_filter;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_119 texCoords;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_101 pad;
};

struct xEntSplineData
{
	int32 unknown;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_113 callback;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_5 endUpdate;
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
	type_35 frustumPlanes;
	RwBBox frustumBoundBox;
	type_42 frustumCorners;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_51 PowerUp;
	type_55 InitialPowerUp;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_114 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_49 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_39 renderCallBack;
	RxPipeline* pipeline;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_126 lastRefs;
	type_129 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct GECheat
{
	uint32* key_code;
	type_107 fun_cheat;
	int32 flg_keep;
	int32 flg_mode;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xShadowSimplePoly
{
	type_60 vert;
	xVec3 norm;
};

struct rxReq
{
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_110 pad;
	float32 delay;
	xSpline3* spl;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_69 light;
	type_76 light_frame;
	int32 memlvl;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct EGGItemFuncs
{
	type_53 fun_update;
	type_44 fun_init;
	type_59 fun_reset;
	type_48 fun_done;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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
	type_104 NumAnims;
	void** RawData;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_70 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_80 BilinearLerp;
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	int16 count;
	uint8 state;
	uint8 counterFlags;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	type_102 corner;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_89 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_99 sceneStart;
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
	type_118 colls;
	type_71 post;
	type_87 depenq;
};

struct zEntHangable
{
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

struct _tagxPad
{
	type_115 value;
	type_117 last_value;
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
	type_138 up_tmr;
	type_139 down_tmr;
	type_25 analog;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_74 Callback;
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

struct EGGMisc
{
	int32 other;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RpPolygon
{
	uint16 matIndex;
	type_94 vertIndex;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_112 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_34 BeforeAnimMatrices;
};

struct _tagiPad
{
	int32 port;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xFFX
{
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

union EGGData
{
	int32 placeholder;
	EGGMisc misc;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_11 radius;
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
	type_20 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct anim_coll_data
{
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct RxNodeMethods
{
	type_40 nodeBody;
	type_43 nodeInit;
	type_47 nodeTerm;
	type_2 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_36 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_121 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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
	type_24 baseCount;
	type_30 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_134 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_140 clusters;
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

struct xCoef
{
	type_135 a;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RwLinkList
{
	RwLLLink link;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_27 wt;
};

type_79 buffer;
type_90 buffer;
int32 g_enableGameExtras;
int32 g_currDay;
int32 g_currMonth;
int32 g_gameExtraFlags;
EGGItemFuncs EGGModuleTest;
EGGItemFuncs EGGBirthDay;
EGGItemFuncs EGGSnow;
EGGItemFuncs EGGRain;
EGGItemFuncs EGGEmpty;
type_46 g_eggBasket;
int32 g_flg_chEnabled;
float32 sCheatTimer;
int32 sCheatInputCount;
type_16 sCheatAddShiny;
type_78 sCheatAddSpatulas;
type_124 sCheatBubbleBowl;
type_41 sCheatCruiseBubble;
type_95 sCheatMonsterGallery;
type_136 sCheatArtTheatre;
type_58 sCheatChaChing;
type_111 sCheatExpertMode;
type_12 sCheatTikiCheat;
type_68 sCheatSwapCCLR;
type_120 sCheatSwapCCUD;
type_33 sCheatRestoreHealth;
type_88 sCheatTeflonPlayer;
type_133 sCheatVikingFeet;
type_50 sCheatDryBobMode;
type_106 sCheatShrapBob;
type_4 sCheatBigFlopper;
type_66 sCheatNoPants;
type_116 sCheatCruiseControl;
type_21 sCheatBigPlank;
type_82 sCheatSmallPeep;
type_127 sCheatSmallCoStars;
type_45 sCheatRichPeep;
type_100 sCheatPanHandle;
type_137 sCheatMedics;
type_61 sCheatDogTrix;
type_123 cheatList;
type_32 sCheatPressed;
xEnt* sGalleryTitle;
zGlobals globals;

uint32 zGame_HackIsGallery();
void zGame_HackGalleryInit();
void GEC_cb_PanHandle();
void GEC_cb_RichPeep();
void GEC_cb_SmallCostars();
void GEC_cb_SmallPeep();
void GEC_cb_DogTrix();
void GEC_cb_Medics();
void GEC_cb_BigPlank();
void GEC_cb_SwapCCUD();
void GEC_cb_SwapCCLR();
void GEC_cb_CruiseControl();
void GEC_cb_NoPantsMode();
void GEC_cb_ShrapBobMode();
void GEC_cb_ExpertMode();
void GEC_cb_RestoreHealth();
void GEC_cb_ChaChing();
void GEC_cb_UnlockArtTheatre();
void GEC_cb_MonsterGallery();
void GEC_cb_CruiseBubble();
void GEC_cb_BubbleBowl();
void GEC_cb_AddSpatulas();
void GEC_cb_AddShiny();
void zGameCheats(float32 dt);
void zGameExtras_Load(xSerial* xser);
void zGameExtras_Save(xSerial* xser);
void zGameExtras_NewGameReset();
int32 zGameExtras_CheatFlags();
int32 EGG_check_ExtrasFlags();
void zGameExtras_SceneUpdate(float32 dt);
void zGameExtras_SceneExit();
void zGameExtras_SceneReset();
void zGameExtras_SceneInit();
void zGameExtras_MoDay(int32* month, int32* day);
int32 zGameExtras_ExtrasFlags();

// zGame_HackIsGallery__Fv
// Start address: 0x17cee0
uint32 zGame_HackIsGallery()
{
}

// zGame_HackGalleryInit__Fv
// Start address: 0x17cf20
void zGame_HackGalleryInit()
{
}

// GEC_cb_PanHandle__Fv
// Start address: 0x17cf50
void GEC_cb_PanHandle()
{
	type_73 aid_sndList;
	int8 @5620;
}

// GEC_cb_RichPeep__Fv
// Start address: 0x17d0a0
void GEC_cb_RichPeep()
{
}

// GEC_cb_SmallCostars__Fv
// Start address: 0x17d1f0
void GEC_cb_SmallCostars()
{
}

// GEC_cb_SmallPeep__Fv
// Start address: 0x17d340
void GEC_cb_SmallPeep()
{
}

// GEC_cb_DogTrix__Fv
// Start address: 0x17d490
void GEC_cb_DogTrix()
{
}

// GEC_cb_Medics__Fv
// Start address: 0x17d5e0
void GEC_cb_Medics()
{
}

// GEC_cb_BigPlank__Fv
// Start address: 0x17d730
void GEC_cb_BigPlank()
{
}

// GEC_cb_SwapCCUD__Fv
// Start address: 0x17d880
void GEC_cb_SwapCCUD()
{
	type_93 aid_sndList;
	int8 @5449;
}

// GEC_cb_SwapCCLR__Fv
// Start address: 0x17d9e0
void GEC_cb_SwapCCLR()
{
}

// GEC_cb_CruiseControl__Fv
// Start address: 0x17db40
void GEC_cb_CruiseControl()
{
	type_37 choices;
	int8 @5598;
}

// GEC_cb_NoPantsMode__Fv
// Start address: 0x17dc50
void GEC_cb_NoPantsMode()
{
}

// GEC_cb_ShrapBobMode__Fv
// Start address: 0x17dca0
void GEC_cb_ShrapBobMode()
{
}

// GEC_cb_ExpertMode__Fv
// Start address: 0x17de00
void GEC_cb_ExpertMode()
{
}

// GEC_cb_RestoreHealth__Fv
// Start address: 0x17df60
void GEC_cb_RestoreHealth()
{
	type_97 choices;
	int8 @5558;
}

// GEC_cb_ChaChing__Fv
// Start address: 0x17e060
void GEC_cb_ChaChing()
{
	zGlobalSettings* gs;
	uint32 aid_snd;
}

// GEC_cb_UnlockArtTheatre__Fv
// Start address: 0x17e0e0
void GEC_cb_UnlockArtTheatre()
{
	int8* nam_theatreCounter;
	uint32 aid_theatreCounter;
	_xCounter* cntr;
}

// GEC_cb_MonsterGallery__Fv
// Start address: 0x17e120
void GEC_cb_MonsterGallery()
{
	type_109 tempString;
	int8 c;
	int32 i;
	uint32 id;
	_xCounter* cntr;
}

// GEC_cb_CruiseBubble__Fv
// Start address: 0x17e1e0
void GEC_cb_CruiseBubble()
{
	uint32 aid_snd;
}

// GEC_cb_BubbleBowl__Fv
// Start address: 0x17e240
void GEC_cb_BubbleBowl()
{
	uint32 aid_snd;
}

// GEC_cb_AddSpatulas__Fv
// Start address: 0x17e2a0
void GEC_cb_AddSpatulas()
{
	zPlayerGlobals* pg;
	uint32 aid_snd;
}

// GEC_cb_AddShiny__Fv
// Start address: 0x17e320
void GEC_cb_AddShiny()
{
	zPlayerGlobals* pg;
	uint32 aid_snd;
}

// zGameCheats__Ff
// Start address: 0x17e3c0
void zGameCheats(float32 dt)
{
	int32 startover;
	int32 match;
	GECheat* rec_next;
	GECheat* rec_curr;
}

// zGameExtras_Load__FP7xSerial
// Start address: 0x17e670
void zGameExtras_Load(xSerial* xser)
{
	int32 keepers;
}

// zGameExtras_Save__FP7xSerial
// Start address: 0x17e6a0
void zGameExtras_Save(xSerial* xser)
{
}

// zGameExtras_NewGameReset__Fv
// Start address: 0x17e6b0
void zGameExtras_NewGameReset()
{
	zGlobalSettings* gs;
}

// zGameExtras_CheatFlags__Fv
// Start address: 0x17e6f0
int32 zGameExtras_CheatFlags()
{
}

// EGG_check_ExtrasFlags__FP7EGGItem
// Start address: 0x17e700
int32 EGG_check_ExtrasFlags()
{
}

// zGameExtras_SceneUpdate__Ff
// Start address: 0x17e930
void zGameExtras_SceneUpdate(float32 dt)
{
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_SceneExit__Fv
// Start address: 0x17e9d0
void zGameExtras_SceneExit()
{
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_SceneReset__Fv
// Start address: 0x17ea80
void zGameExtras_SceneReset()
{
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_SceneInit__Fv
// Start address: 0x17eaf0
void zGameExtras_SceneInit()
{
	int32 somethingIsEnabled;
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_MoDay__FPiPi
// Start address: 0x17ebb0
void zGameExtras_MoDay(int32* month, int32* day)
{
}

// zGameExtras_ExtrasFlags__Fv
// Start address: 0x17ebd0
int32 zGameExtras_ExtrasFlags()
{
}

