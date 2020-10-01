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
typedef s32(*type_2)(RxPipelineNode*);
typedef u32(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef s8*(*type_8)(u32);
typedef void(*type_10)(RxPipelineNode*);
typedef s32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(xAnimPlay*, xAnimState*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_36)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_38)(EGGItem*);
typedef RpWorldSector*(*type_39)(RpWorldSector*);
typedef s32(*type_40)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_43)(RxNodeDefinition*);
typedef void(*type_44)(EGGItem*);
typedef void(*type_47)(RxNodeDefinition*);
typedef void(*type_48)(EGGItem*);
typedef void(*type_53)(f32, EGGItem*);
typedef void(*type_57)(void*);
typedef void(*type_59)(EGGItem*);
typedef void(*type_67)(xEnt*, xScene*, f32);
typedef void(*type_71)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_72)(xEnt*, xVec3*);
typedef u32(*type_74)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_77)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_81)(xEnt*);
typedef xBase*(*type_85)(u32);
typedef u32(*type_87)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s8*(*type_91)(xBase*);
typedef void(*type_92)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_107)();
typedef RpClump*(*type_113)(RpClump*, void*);
typedef u32(*type_114)(void*, void*);
typedef void(*type_121)(xMemPool*, void*);
typedef s32(*type_130)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_131)(RwResEntry*);

typedef u32 type_1[2];
typedef u32 type_4[16];
typedef u32 type_9[15];
typedef f32 type_11[2];
typedef u32 type_12[16];
typedef u32 type_13[15];
typedef f32 type_14[12];
typedef f32 type_15[12];
typedef u32 type_16[16];
typedef u32 type_17[15];
typedef f32 type_18[12];
typedef RwTexCoords* type_20[8];
typedef u32 type_21[16];
typedef f32 type_22[12];
typedef u32 type_24[72];
typedef analog_data type_25[2];
typedef s8 type_26[4];
typedef f32 type_27[4];
typedef f32 type_28[12];
typedef xBase* type_30[72];
typedef f32 type_31[12];
typedef u32 type_32[16];
typedef u32 type_33[16];
typedef RwFrustumPlane type_35[6];
typedef u32 type_37[3];
typedef u32 type_41[16];
typedef RwV3d type_42[8];
typedef u32 type_45[16];
typedef EGGItem type_46[2];
typedef u8 type_49[2];
typedef u32 type_50[16];
typedef u8 type_51[2];
typedef xVec4 type_52[12];
typedef u32 type_54[2];
typedef u8 type_55[2];
typedef f32 type_56[6];
typedef u32 type_58[16];
typedef xVec3 type_60[3];
typedef u32 type_61[16];
typedef f32 type_62[3];
typedef f32 type_63[3];
typedef xModelTag type_64[2];
typedef f32 type_65[3];
typedef u32 type_66[16];
typedef u32 type_68[16];
typedef RpLight* type_69[2];
typedef f32 type_70[16];
typedef u32 type_73[6];
typedef xEnt* type_75[111];
typedef RwFrame* type_76[2];
typedef u32 type_78[16];
typedef s8 type_79[16];
typedef f32 type_80[2];
typedef u32 type_82[16];
typedef s8* type_83[2];
typedef u8 type_84[3];
typedef s8 type_86[128];
typedef u32 type_88[16];
typedef type_86 type_89[6];
typedef s8 type_90[16];
typedef u32 type_93[7];
typedef u16 type_94[3];
typedef u32 type_95[16];
typedef u8 type_96[14];
typedef u32 type_97[2];
typedef xModelTag type_98[4];
typedef s8 type_99[32];
typedef u32 type_100[16];
typedef u32 type_101[4];
typedef xVec3 type_102[4];
typedef xModelInstance* type_103[14];
typedef u8 type_104[2];
typedef xAnimMultiFileEntry type_105[1];
typedef u32 type_106[16];
typedef u8 type_108[4];
typedef s8 type_109[32];
typedef u8 type_110[2];
typedef u32 type_111[16];
typedef f32 type_112[4];
typedef u8 type_115[22];
typedef u32 type_116[16];
typedef u8 type_117[22];
typedef xCollis type_118[18];
typedef RwTexCoords* type_119[8];
typedef u32 type_120[16];
typedef u8 type_122[3];
typedef GECheat type_123[22];
typedef u32 type_124[16];
typedef s8 type_125[32];
typedef xVec3 type_126[5];
typedef u32 type_127[16];
typedef s8 type_128[32];
typedef u8 type_129[5];
typedef u16 type_132[3];
typedef u32 type_133[16];
typedef xVec3 type_134[60];
typedef f32 type_135[4];
typedef u32 type_136[16];
typedef u32 type_137[16];
typedef f32 type_138[22];
typedef f32 type_139[22];
typedef RxCluster type_140[1];

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

struct zCutsceneMgr
{
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
	type_64 BubbleWandTag;
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
	type_98 HangPawTag;
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
	type_9 Inv_PatsSock;
	type_13 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_17 Inv_LevelPickups;
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
	type_54 TongueFlags;
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
	type_96 sb_model_indices;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	f32 a;
	f32 b;
	f32 p;
	f32 w;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	u32 flags;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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
	s32 driveMode;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
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
	type_85 resolvID;
	type_91 base2Name;
	type_8 id2Name;
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

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	s16 refCount;
	s16 pad;
};

struct xPlatformAsset
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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

struct RpTriangle
{
	type_132 vertIndex;
	s16 matIndex;
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
	type_122 pad;
	void* moprops;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_130 eventFunc;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 filterAddressing;
	s32 refCount;
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
	f32 x;
	f32 y;
};

struct RpSector
{
	s32 type;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xJSPHeader
{
	type_26 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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
	type_57 activateCB;
	type_57 deactivateCB;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct EGGItem
{
	type_38 fun_check;
	EGGItemFuncs* funcs;
	s32 enabled;
	EGGData eggdata;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_131 destroyNotify;
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
	type_52 frustplane;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xCounterAsset : xBaseAsset
{
	s16 count;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_56 MoveSpeed;
	type_62 AnimSneak;
	type_63 AnimWalk;
	type_65 AnimRun;
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
	type_108 talk_filter;
};

struct RpWorldSector
{
	s32 type;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_101 pad;
};

struct xEntSplineData
{
	s32 unknown;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_35 frustumPlanes;
	RwBBox frustumBoundBox;
	type_42 frustumCorners;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
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
	type_51 PowerUp;
	type_55 InitialPowerUp;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_114 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_49 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	type_39 renderCallBack;
	RxPipeline* pipeline;
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
	u32 mode;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_126 lastRefs;
	type_129 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct GECheat
{
	u32* key_code;
	type_107 fun_cheat;
	s32 flg_keep;
	s32 flg_mode;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	u32 node_wt_sum;
	u8 on;
	type_110 pad;
	f32 delay;
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
	s32 memlvl;
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

struct xAnimMultiFileEntry
{
	u32 ID;
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
	u32 Handle;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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
	type_104 NumAnims;
	void** RawData;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
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
	u32 type;
	RwRGBAReal color;
	type_70 matrix;
	f32 radius;
	f32 angle;
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
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_80 BilinearLerp;
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	s16 count;
	u8 state;
	u8 counterFlags;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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
	type_102 corner;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_89 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_99 sceneStart;
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
	f32 r;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	f32 r;
	f32 h;
};

struct EGGMisc
{
	s32 other;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RpPolygon
{
	u16 matIndex;
	type_94 vertIndex;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_112 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	type_34 BeforeAnimMatrices;
};

struct _tagiPad
{
	s32 port;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xFFX
{
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

union EGGData
{
	s32 placeholder;
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
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_11 radius;
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
	type_20 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct anim_coll_data
{
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xEntMotionSplineData
{
	s32 unknown;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_121 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
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

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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
	type_24 baseCount;
	type_30 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_134 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_140 clusters;
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
	f32 w;
	xMat4x3 omat;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
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
	u32 matidx;
	type_27 wt;
};

type_79 buffer;
type_90 buffer;
s32 g_enableGameExtras;
s32 g_currDay;
s32 g_currMonth;
s32 g_gameExtraFlags;
EGGItemFuncs EGGModuleTest;
EGGItemFuncs EGGBirthDay;
EGGItemFuncs EGGSnow;
EGGItemFuncs EGGRain;
EGGItemFuncs EGGEmpty;
type_46 g_eggBasket;
s32 g_flg_chEnabled;
f32 sCheatTimer;
s32 sCheatInputCount;
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

u32 zGame_HackIsGallery();
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
void zGameCheats(f32 dt);
void zGameExtras_Load(xSerial* xser);
void zGameExtras_Save(xSerial* xser);
void zGameExtras_NewGameReset();
s32 zGameExtras_CheatFlags();
s32 EGG_check_ExtrasFlags();
void zGameExtras_SceneUpdate(f32 dt);
void zGameExtras_SceneExit();
void zGameExtras_SceneReset();
void zGameExtras_SceneInit();
void zGameExtras_MoDay(s32* month, s32* day);
s32 zGameExtras_ExtrasFlags();

// zGame_HackIsGallery__Fv
// Start address: 0x17cee0
u32 zGame_HackIsGallery()
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
	s8 @5620;
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
	s8 @5449;
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
	s8 @5598;
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
	s8 @5558;
}

// GEC_cb_ChaChing__Fv
// Start address: 0x17e060
void GEC_cb_ChaChing()
{
	zGlobalSettings* gs;
	u32 aid_snd;
}

// GEC_cb_UnlockArtTheatre__Fv
// Start address: 0x17e0e0
void GEC_cb_UnlockArtTheatre()
{
	s8* nam_theatreCounter;
	u32 aid_theatreCounter;
	_xCounter* cntr;
}

// GEC_cb_MonsterGallery__Fv
// Start address: 0x17e120
void GEC_cb_MonsterGallery()
{
	type_109 tempString;
	s8 c;
	s32 i;
	u32 id;
	_xCounter* cntr;
}

// GEC_cb_CruiseBubble__Fv
// Start address: 0x17e1e0
void GEC_cb_CruiseBubble()
{
	u32 aid_snd;
}

// GEC_cb_BubbleBowl__Fv
// Start address: 0x17e240
void GEC_cb_BubbleBowl()
{
	u32 aid_snd;
}

// GEC_cb_AddSpatulas__Fv
// Start address: 0x17e2a0
void GEC_cb_AddSpatulas()
{
	zPlayerGlobals* pg;
	u32 aid_snd;
}

// GEC_cb_AddShiny__Fv
// Start address: 0x17e320
void GEC_cb_AddShiny()
{
	zPlayerGlobals* pg;
	u32 aid_snd;
}

// zGameCheats__Ff
// Start address: 0x17e3c0
void zGameCheats(f32 dt)
{
	s32 startover;
	s32 match;
	GECheat* rec_next;
	GECheat* rec_curr;
}

// zGameExtras_Load__FP7xSerial
// Start address: 0x17e670
void zGameExtras_Load(xSerial* xser)
{
	s32 keepers;
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
s32 zGameExtras_CheatFlags()
{
}

// EGG_check_ExtrasFlags__FP7EGGItem
// Start address: 0x17e700
s32 EGG_check_ExtrasFlags()
{
}

// zGameExtras_SceneUpdate__Ff
// Start address: 0x17e930
void zGameExtras_SceneUpdate(f32 dt)
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
	s32 somethingIsEnabled;
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_MoDay__FPiPi
// Start address: 0x17ebb0
void zGameExtras_MoDay(s32* month, s32* day)
{
}

// zGameExtras_ExtrasFlags__Fv
// Start address: 0x17ebd0
s32 zGameExtras_ExtrasFlags()
{
}

