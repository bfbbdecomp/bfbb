typedef struct xShadowSimplePoly;
typedef struct RwMatrixTag;
typedef struct RxPipelineNodeParam;
typedef struct zMovePoint;
typedef struct zCheckPoint;
typedef struct RwLLLink;
typedef struct RxHeap;
typedef struct zPlayerGlobals;
typedef struct xMovePointAsset;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct iEnv;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct xQuat;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RpWorld;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct tri_data_0;
typedef struct xUpdateCullMgr;
typedef struct RpAtomic;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct xVec3;
typedef struct tri_data_1;
typedef struct _class_0;
typedef struct xAnimFile;
typedef struct RpVertexNormal;
typedef struct xEntMotionMechData;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct zPlayerSettings;
typedef struct RxPipelineRequiresCluster;
typedef struct xEnt;
typedef struct xAnimSingle;
typedef struct RxPipeline;
typedef struct RwCamera;
typedef struct xCollis;
typedef struct zEnt;
typedef struct xEntPenData;
typedef struct xJSPHeader;
typedef struct xScene;
typedef struct xSurface;
typedef struct xShadowSimpleCache;
typedef struct xAnimState;
typedef struct RpLight;
typedef struct xUpdateCullEnt;
typedef struct xEntCollis;
typedef struct RpInterpolator;
typedef struct RwFrame;
typedef struct xAnimMultiFileBase;
typedef struct xMat4x3;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct xEntOrbitData;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct xAnimTransition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct iFogParams;
typedef struct rxReq;
typedef struct xBound;
typedef struct xBase;
typedef struct _tagxRumble;
typedef struct RpPolygon;
typedef struct RwRaster;
typedef struct zPlatFMRunTime;
typedef struct _class_1;
typedef struct xUpdateCullGroup;
typedef enum RxClusterValidityReq;
typedef struct xEntMotion;
typedef struct RpMaterialList;
typedef struct xRay3;
typedef struct xPlatformAsset;
typedef struct xAnimPlay;
typedef struct xEntMotionAsset;
typedef struct xVec2;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct xAnimMultiFile;
typedef enum RxNodeDefEditable;
typedef struct xAnimTable;
typedef enum RxClusterValid;
typedef struct xBBox;
typedef struct RpClump;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef enum _tagPadState;
typedef struct xEntAsset;
typedef struct xClumpCollBSPTree;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xEntBoulder;
typedef struct xEntSplineData;
typedef struct xEntShadow;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGlobals;
typedef struct xClumpCollBSPVertInfo;
typedef struct anim_coll_data;
typedef struct zEntHangable;
typedef struct RpMorphTarget;
typedef struct xClumpCollBSPBranchNode;
typedef struct xLinkAsset;
typedef struct xEntMotionPenData;
typedef enum RwCameraProjection;
typedef struct xEnv;
typedef enum RxClusterForcePresent;
typedef struct _tagxPad;
typedef struct xCylinder;
typedef struct xClumpCollBSPTriangle;
typedef struct xSerial;
typedef struct xGridBound;
typedef struct xBox;
typedef struct zScene;
typedef struct RxClusterDefinition;
typedef struct xEnvAsset;
typedef struct xEntMPData;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct _tagiPad;
typedef struct xMovePoint;
typedef struct _zPortal;
typedef struct zJumpParam;
typedef struct RwSphere;
typedef struct xMemPool;
typedef struct xSpline3;
typedef struct RwTexDictionary;
typedef struct xEntMotionERData;
typedef struct RpTriangle;
typedef struct RxOutputSpec;
typedef struct xQCData;
typedef union _class_2;
typedef struct zPlatform;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct zCutsceneMgr;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct zAssetPickupTable;
typedef struct RwTexture;
typedef struct xAnimTransitionList;
typedef struct RxNodeMethods;
typedef struct xModelTag;
typedef struct RxPipelineCluster;
typedef struct xPortalAsset;
typedef struct xJSPNodeInfo;
typedef struct zGlobals;
typedef struct RwFrustumPlane;
typedef struct zGlobalSettings;
typedef struct RxNodeDefinition;
typedef struct xGroup;
typedef struct xEntMotionOrbitData;
typedef struct RwPlane;
typedef enum RpWorldRenderOrder;
typedef struct zPlayerLassoInfo;
typedef struct RxCluster;
typedef struct zLedgeGrabParams;
typedef struct RpSector;
typedef struct RxPacket;
typedef struct xModelBucket;
typedef enum _zPlayerWallJumpState;
typedef enum RwFogType;
typedef struct xEntDrive;
typedef struct xEntMechData;
typedef struct RwRGBAReal;
typedef struct xEntMotionSplineData;
typedef struct RwObjectHasFrame;
typedef struct zLasso;
typedef struct _zEnv;
typedef struct RwLinkList;
typedef enum _tagRumbleType;
typedef struct xBaseAsset;
typedef enum _zPlayerType;
typedef struct RwV2d;
typedef struct analog_data;
typedef struct xEntMotionMPData;
typedef struct xEntERData;

typedef s32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_5)(RxPipelineNode*, u32, u32, void*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef s32(*type_7)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_9)(void*, xVec3*, zMovePoint*);
typedef void(*type_10)(xEnt*, xScene*, f32);
typedef s32(*type_11)(RxNodeDefinition*);
typedef void(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_16)(xEnt*, xVec3*);
typedef u32(*type_17)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_18)(RxPipelineNode*);
typedef void(*type_19)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_22)(xEnt*);
typedef void(*type_23)(RxPipelineNode*);
typedef u32(*type_26)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef u32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_31)(void*, xVec3*, zMovePoint*);
typedef void(*type_32)(void*);
typedef void(*type_33)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_34)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef xBase*(*type_53)(u32);
typedef s8*(*type_55)(xBase*);
typedef void(*type_58)(xAnimPlay*, xAnimState*);
typedef s8*(*type_60)(u32);
typedef void(*type_65)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpAtomic*(*type_69)(RpAtomic*);
typedef RwCamera*(*type_72)(RwCamera*);
typedef u32(*type_73)(void*, void*);
typedef RwCamera*(*type_76)(RwCamera*);
typedef s32(*type_78)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_79)(xMemPool*, void*);
typedef void(*type_84)(RwResEntry*);
typedef RwObjectHasFrame*(*type_95)(RwObjectHasFrame*);

typedef xVec3 type_1[3];
typedef u32 type_2[15];
typedef analog_data type_3[2];
typedef RwFrustumPlane type_4[6];
typedef RwV3d type_8[8];
typedef RpLight* type_12[2];
typedef f32 type_13[16];
typedef RwFrame* type_20[2];
typedef f32 type_21[2];
typedef xVec4 type_24[12];
typedef u8 type_25[2];
typedef u32 type_27[2];
typedef u8 type_28[2];
typedef f32 type_29[6];
typedef u16 type_35[3];
typedef f32 type_36[12];
typedef f32 type_37[3];
typedef f32 type_38[12];
typedef f32 type_39[3];
typedef f32 type_40[12];
typedef xModelTag type_41[2];
typedef xVec3 type_42[4];
typedef f32 type_43[3];
typedef u8 type_44[2];
typedef f32 type_45[12];
typedef xAnimMultiFileEntry type_46[1];
typedef f32 type_48[12];
typedef f32 type_49[12];
typedef xEnt* type_50[111];
typedef u8 type_52[2];
typedef RwTexCoords* type_54[8];
typedef s8 type_56[128];
typedef xCollis type_57[18];
typedef type_56 type_59[6];
typedef u32 type_61[4];
typedef u8 type_62[14];
typedef xModelTag type_63[4];
typedef s8 type_64[32];
typedef f32 type_66[4];
typedef xModelInstance* type_67[14];
typedef u16 type_68[3];
typedef u8 type_70[4];
typedef u8 type_71[2];
typedef u8 type_74[3];
typedef u8 type_75[22];
typedef u8 type_77[22];
typedef s8 type_80[32];
typedef f32 type_81[2];
typedef s8 type_82[32];
typedef xVec3 type_83[5];
typedef u8 type_85[5];
typedef RwTexCoords* type_86[8];
typedef f32 type_87[4];
typedef u32 type_88[72];
typedef s8 type_89[4];
typedef xVec3 type_90[60];
typedef xBase* type_91[72];
typedef RxCluster type_92[1];
typedef f32 type_93[22];
typedef f32 type_94[22];
typedef u32 type_96[15];
typedef u32 type_97[15];

struct xShadowSimplePoly
{
	type_1 vert;
	xVec3 norm;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zMovePoint : xMovePoint
{
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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
	type_41 BubbleWandTag;
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
	type_63 HangPawTag;
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
	type_96 Inv_PatsSock;
	type_97 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_2 Inv_LevelPickups;
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
	type_27 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_50 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_62 sb_model_indices;
	type_67 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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
	type_12 light;
	type_20 light_frame;
	s32 memlvl;
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
	_class_0 anim_coll;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
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
	type_6 renderCallBack;
	RxPipeline* pipeline;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
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
	type_32 activateCB;
	type_32 deactivateCB;
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
	type_69 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_61 pad;
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
	type_24 frustplane;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct _class_0
{
	xVec3* verts;
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
	type_44 NumAnims;
	void** RawData;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_13 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_29 MoveSpeed;
	type_37 AnimSneak;
	type_39 AnimWalk;
	type_43 AnimRun;
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
	type_70 talk_filter;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	type_10 update;
	type_10 endUpdate;
	type_16 bupdate;
	type_19 move;
	type_22 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_33 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_72 beginUpdate;
	type_76 endUpdate;
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
	type_4 frustumPlanes;
	RwBBox frustumBoundBox;
	type_8 frustumCorners;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct xJSPHeader
{
	type_89 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_53 resolvID;
	type_55 base2Name;
	type_60 id2Name;
};

struct xSurface
{
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
	type_42 corner;
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
	type_58 BeforeEnter;
	type_47 StateCallback;
	type_65 BeforeAnimMatrices;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_73 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_57 colls;
	type_15 post;
	type_26 depenq;
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

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	f32 a;
	f32 b;
	f32 p;
	f32 w;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_17 Callback;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct rxReq
{
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_74 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_78 eventFunc;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct RpPolygon
{
	u16 matIndex;
	type_35 vertIndex;
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

struct zPlatFMRunTime
{
	u32 flags;
	type_36 tmrs;
	type_38 ttms;
	type_40 atms;
	type_45 dtms;
	type_48 vms;
	type_49 dss;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xPlatformAsset
{
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
	type_65 BeforeAnimMatrices;
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

struct xVec2
{
	f32 x;
	f32 y;
};

struct xFFX
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_46 Files;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_51 callback;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_54 texCoords;
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

struct xEntBoulder
{
};

struct xEntSplineData
{
	s32 unknown;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_81 radius;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_59 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_64 sceneStart;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct anim_coll_data
{
};

struct zEntHangable
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_66 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_52 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxPad
{
	type_75 value;
	type_77 last_value;
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
	type_93 up_tmr;
	type_94 down_tmr;
	type_3 analog;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xSerial
{
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_88 baseCount;
	type_91 baseList;
	_zEnv* zen;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_84 destroyNotify;
};

struct _tagiPad
{
	s32 port;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_71 pad;
	f32 delay;
	xSpline3* spl;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_79 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xSpline3
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RpTriangle
{
	type_68 vertIndex;
	s16 matIndex;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct zCutsceneMgr
{
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

struct zAssetPickupTable
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_80 name;
	type_82 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxNodeMethods
{
	type_7 nodeBody;
	type_11 nodeInit;
	type_14 nodeTerm;
	type_18 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_5 configMsgHandler;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_87 wt;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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
	type_25 PowerUp;
	type_28 InitialPowerUp;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_90 tranTable;
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

struct RpSector
{
	s32 type;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_92 clusters;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xEntMotionSplineData
{
	s32 unknown;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_95 sync;
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
	type_83 lastRefs;
	type_85 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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

zMovePoint* g_mvpt_list;
s32 g_mvpt_cnt;
zGlobals globals;
type_31 MVPT_dflt_chklos;
type_34 zMovePointEventCB;
u32 gActiveHeap;

f32 zMovePointGetDelay(zMovePoint* m);
xVec3* zMovePointGetPos(zMovePoint* m);
f32 zMovePointGetNext(zMovePoint* current, zMovePoint* prev, zMovePoint** next, xVec3* hdng);
s32 zMovePointEventCB(xBase* to, u32 toEvent, f32* toParam);
void zMovePointLoad(zMovePoint* ent, xSerial* s);
void zMovePointSave(zMovePoint* ent, xSerial* s);
zMovePoint* zMovePoint_From_xAssetID(u32 aid);
void zMovePointSetup(zMovePoint* mvpt, zScene* scn);
zMovePoint* zMovePoint_GetInst(s32 n);
void zMovePointInit(zMovePoint* m, xMovePointAsset* asset);
zMovePoint* zMovePoint_GetMemPool(s32 cnt);

// zMovePointGetDelay__FPC10zMovePoint
// Start address: 0x18af90
f32 zMovePointGetDelay(zMovePoint* m)
{
}

// zMovePointGetPos__FPC10zMovePoint
// Start address: 0x18afa0
xVec3* zMovePointGetPos(zMovePoint* m)
{
}

// zMovePointGetNext__FPC10zMovePointPC10zMovePointPP10zMovePointP5xVec3
// Start address: 0x18afb0
f32 zMovePointGetNext(zMovePoint* current, zMovePoint* prev, zMovePoint** next, xVec3* hdng)
{
	f32 dist;
}

// zMovePointEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x18afc0
s32 zMovePointEventCB(xBase* to, u32 toEvent, f32* toParam)
{
	zMovePoint* m;
}

// zMovePointLoad__FP10zMovePointP7xSerial
// Start address: 0x18b080
void zMovePointLoad(zMovePoint* ent, xSerial* s)
{
}

// zMovePointSave__FP10zMovePointP7xSerial
// Start address: 0x18b090
void zMovePointSave(zMovePoint* ent, xSerial* s)
{
}

// zMovePoint_From_xAssetID__FUi
// Start address: 0x18b0a0
zMovePoint* zMovePoint_From_xAssetID(u32 aid)
{
	zMovePoint* da_mvpt;
	s32 i;
}

// zMovePointSetup__FP10zMovePointP6zScene
// Start address: 0x18b0f0
void zMovePointSetup(zMovePoint* mvpt, zScene* scn)
{
}

// zMovePoint_GetInst__Fi
// Start address: 0x18b100
zMovePoint* zMovePoint_GetInst(s32 n)
{
}

// zMovePointInit__FP10zMovePointP15xMovePointAsset
// Start address: 0x18b120
void zMovePointInit(zMovePoint* m, xMovePointAsset* asset)
{
}

// zMovePoint_GetMemPool__Fi
// Start address: 0x18b190
zMovePoint* zMovePoint_GetMemPool(s32 cnt)
{
}

