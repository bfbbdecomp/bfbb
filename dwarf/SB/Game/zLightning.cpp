typedef struct RxPipelineNode;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct RwResEntry;
typedef struct _tagLightningAdd;
typedef struct xModelBucket;
typedef struct RwObjectHasFrame;
typedef struct xEntAsset;
typedef struct xBase;
typedef struct RpMorphTarget;
typedef struct RpWorldSector;
typedef struct xEntDrive;
typedef struct rxHeapFreeBlock;
typedef struct xUpdateCullMgr;
typedef struct RwRGBA;
typedef struct RwRaster;
typedef struct zLightning;
typedef struct zPlayerCarryInfo;
typedef struct _class_0;
typedef struct xFuncPiece;
typedef struct xModelInstance;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xVec3;
typedef struct RpClump;
typedef struct RpLight;
typedef struct RxNodeDefinition;
typedef struct zLasso;
typedef struct zPlayerSettings;
typedef struct xEnt;
typedef struct xLightKit;
typedef struct tweak_info;
typedef struct xClumpCollBSPTree;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwCamera;
typedef struct zEnt;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct RxPipeline;
typedef struct xSurface;
typedef struct RxPipelineCluster;
typedef struct xEnvAsset;
typedef struct xAnimTable;
typedef struct RxPipelineNodeParam;
typedef struct xUpdateCullEnt;
typedef struct xEntFrame;
typedef struct tweak_callback;
typedef struct _tagEmitVolume;
typedef struct _zPortal;
typedef struct RxHeap;
typedef struct xAnimTransition;
typedef struct RwBBox;
typedef struct xGridBound;
typedef struct xQuat;
typedef struct xPortalAsset;
typedef struct xMat4x3;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpSector;
typedef struct rxHeapBlockHeader;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct RwMatrixTag;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct RxPipelineRequiresCluster;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct RwLLLink;
typedef struct xParEmitter;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xScene;
typedef struct _tagEmitOffsetPoint;
typedef struct xParEmitterAsset;
typedef struct RpAtomic;
typedef struct _class_1;
typedef struct xAnimFile;
typedef struct tri_data_0;
typedef struct xParGroup;
typedef struct RpVertexNormal;
typedef struct tri_data_1;
typedef struct _class_2;
typedef struct xAnimSingle;
typedef struct xVec4;
typedef struct xLightKitLight;
typedef struct xParEmitterPropsAsset;
typedef struct RwSurfaceProperties;
typedef struct xJSPHeader;
typedef struct xCollis;
typedef enum _tagPadState;
typedef struct xShadowSimpleCache;
typedef struct rxReq;
typedef struct xEntCollis;
typedef struct xEntBoulder;
typedef struct RwFrame;
typedef struct RpInterpolator;
typedef enum RxClusterValidityReq;
typedef struct xAnimMultiFileBase;
typedef struct xGlobals;
typedef struct xEnv;
typedef struct xPEVCyl;
typedef struct zEntHangable;
typedef struct xAnimEffect;
typedef struct _tagxPad;
typedef struct _class_3;
typedef struct xParInterp;
typedef struct xLinkAsset;
typedef enum RxNodeDefEditable;
typedef struct RpPolygon;
typedef enum RxClusterValid;
typedef struct _class_4;
typedef struct xRot;
typedef struct RpMaterialList;
typedef struct xAnimPlay;
typedef struct tagiRenderArrays;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct _class_5;
typedef struct RpMaterial;
typedef struct xAnimMultiFile;
typedef struct xFFX;
typedef struct xModelPool;
typedef struct _tagiPad;
typedef enum rxEmbeddedPacketState;
typedef struct xPEEntBone;
typedef struct xSphere;
typedef struct xParSys;
typedef struct RxObjSpace3DVertex;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpGeometry;
typedef struct _class_6;
typedef union RxColorUnion;
typedef struct xEntShadow;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct anim_coll_data;
typedef struct zParEmitter;
typedef struct xClumpCollBSPTriangle;
typedef struct _tagLightningLine;
typedef struct xPECircle;
typedef struct RwSphere;
typedef struct xQCData;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct _class_7;
typedef struct RpMeshHeader;
typedef struct zPlatform;
typedef struct zScene;
typedef struct xMat3x3;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct substr;
typedef struct RwTexture;
typedef struct RxClusterRef;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct _tagLightningRot;
typedef struct zJumpParam;
typedef struct zAssetPickupTable;
typedef struct RwObject;
typedef struct _tagEmitSphere;
typedef struct RpTriangle;
typedef struct zPlayerLassoInfo;
typedef union _class_8;
typedef struct zCutsceneMgr;
typedef struct RxIoSpec;
typedef struct _class_9;
typedef struct zLedgeGrabParams;
typedef struct RxNodeMethods;
typedef struct _class_10;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct _tagEmitRect;
typedef struct RwPlane;
typedef struct _tagLightningZeus;
typedef struct xModelTag;
typedef struct RxCluster;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RxPacket;
typedef struct xBaseAsset;
typedef struct analog_data;
typedef enum RpWorldRenderOrder;
typedef struct _class_11;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xPEEntBound;
typedef struct RwRGBAReal;
typedef struct xVec2;
typedef struct _tagEmitLine;
typedef struct xParEmitterCustomSettings;
typedef struct RwLinkList;
typedef struct zCheckPoint;

typedef RwCamera*(*type_0)(RwCamera*);
typedef s32(*type_2)(RxPipelineNode*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef RwCamera*(*type_8)(RwCamera*);
typedef RwObjectHasFrame*(*type_9)(RwObjectHasFrame*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_13)(RxPipelineNode*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef s32(*type_20)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(tweak_info&);
typedef u32(*type_25)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_34)(RxNodeDefinition*);
typedef void(*type_35)(void*);
typedef void(*type_37)(RxNodeDefinition*);
typedef void(*type_42)(xEnt*, xScene*, f32);
typedef u32(*type_44)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_46)(tweak_info&);
typedef void(*type_47)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_48)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_53)(tweak_info&, void*);
typedef void(*type_55)(xEnt*);
typedef xBase*(*type_58)(u32);
typedef void(*type_59)(tweak_info&);
typedef s8*(*type_61)(xBase*);
typedef u32(*type_63)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef u32(*type_64)(xAnimTransition*, xAnimSingle*, void*);
typedef s8*(*type_65)(u32);
typedef void(*type_68)(xEnt*, xVec3*, xMat4x3*);
typedef RpClump*(*type_92)(RpClump*, void*);
typedef void(*type_96)(xAnimPlay*, xAnimState*);
typedef u32(*type_97)(void*, void*);
typedef s32(*type_104)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpAtomic*(*type_108)(RpAtomic*);
typedef void(*type_112)(xMemPool*, void*);
typedef void(*type_120)(RwResEntry*);

typedef u32 type_1[72];
typedef f32 type_3[4];
typedef f32 type_4[2];
typedef u32 type_6[15];
typedef s8 type_7[4];
typedef xBase* type_10[72];
typedef analog_data type_12[2];
typedef u8 type_14[24];
typedef xFuncPiece* type_15[2];
typedef u8 type_16[3];
typedef u8 type_18[16];
typedef xFuncPiece* type_19[2];
typedef xFuncPiece* type_21[2];
typedef f32 type_22[5];
typedef RwFrustumPlane type_24[6];
typedef xVec4 type_26[12];
typedef u8 type_27[2];
typedef u32 type_29[2];
typedef xVec3 type_30[3];
typedef u8 type_31[2];
typedef RwV3d type_32[8];
typedef f32 type_33[6];
typedef f32 type_36[3];
typedef xFuncPiece type_38[10];
typedef f32 type_39[3];
typedef xModelTag type_40[2];
typedef f32 type_41[3];
typedef RpLight* type_43[2];
typedef f32 type_45[16];
typedef RwFrame* type_49[2];
typedef f32 type_51[2];
typedef xVec3 type_52[2];
typedef type_52 type_54[10];
typedef xEnt* type_56[111];
typedef u8 type_57[3];
typedef u8 type_60[3];
typedef u8 type_62[3];
typedef f32 type_66[2];
typedef s8 type_67[128];
typedef u16 type_69[3];
typedef s8 type_70[16];
typedef type_67 type_71[6];
typedef xVec3 type_72[2];
typedef u16 type_73[960];
typedef xVec3 type_74[16];
typedef u8 type_75[2];
typedef RxObjSpace3DVertex type_76[480];
typedef xVec3 type_77[16];
typedef zLightning* type_78[48];
typedef xAnimMultiFileEntry type_79[1];
typedef xVec3 type_80[4];
typedef u8 type_81[14];
typedef RxObjSpace3DVertex* type_82[2];
typedef xModelTag type_83[4];
typedef s8 type_84[32];
typedef f32 type_85[480];
typedef s8 type_86[16];
typedef xModelInstance* type_87[14];
typedef f32 type_88[4];
typedef f32 type_89[16];
typedef f32 type_90[5];
typedef u8 type_91[4];
typedef u32 type_93[4];
typedef xFuncPiece type_94[10];
typedef RwTexCoords* type_95[8];
typedef u8 type_98[22];
typedef xCollis type_99[18];
typedef u8 type_100[22];
typedef xParInterp type_101[1];
typedef f32 type_102[10];
typedef f32 type_103[16];
typedef s8* type_105[4];
typedef xVec3 type_106[5];
typedef u16 type_107[3];
typedef u8 type_109[5];
typedef xVec3 type_110[5];
typedef xVec3 type_111[60];
typedef xVec3 type_113[2];
typedef RxObjSpace3DVertex type_114[128];
typedef s8 type_115[32];
typedef xParInterp type_116[4];
typedef s8 type_117[32];
typedef f32 type_118[22];
typedef xFuncPiece type_119[10];
typedef xParInterp type_121[4];
typedef f32 type_122[22];
typedef f32 type_123[2];
typedef f32 type_124[2];
typedef f32 type_125[2];
typedef f32 type_126[2];
typedef u32 type_127[15];
typedef u32 type_128[15];
typedef RwTexCoords* type_129[8];
typedef xVec3 type_130[2];
typedef RxCluster type_131[1];
typedef xVec3 type_132[10];

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
	type_40 BubbleWandTag;
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
	type_83 HangPawTag;
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
	type_127 Inv_PatsSock;
	type_128 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_6 Inv_LevelPickups;
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
	type_29 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_56 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_81 sb_model_indices;
	type_87 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_120 destroyNotify;
};

struct _tagLightningAdd
{
	u32 type;
	f32 setup_degrees;
	f32 move_degrees;
	f32 rot_radius;
	xVec3* start;
	xVec3* end;
	s16 total_points;
	s16 end_points;
	f32 time;
	f32 arc_height;
	f32 thickness;
	iColor_tag color;
	f32 rand_radius;
	u32 flags;
	f32 zeus_normal_offset;
	f32 zeus_back_offset;
	f32 zeus_side_offset;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_9 sync;
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
	type_104 eventFunc;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_95 texCoords;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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
	type_35 activateCB;
	type_35 deactivateCB;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct zLightning
{
	u32 type;
	u32 flags;
	union
	{
		_class_5 legacy;
		_class_10 func;
	};
	iColor_tag color;
	f32 time_left;
	f32 time_total;
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

struct _class_0
{
	type_18 pad;
};

struct xFuncPiece
{
	type_90 coef;
	f32 end;
	s32 order;
	xFuncPiece* next;
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
	type_26 frustplane;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_92 callback;
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

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
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
	type_106 lastRefs;
	type_109 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_33 MoveSpeed;
	type_36 AnimSneak;
	type_39 AnimWalk;
	type_41 AnimRun;
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
	type_91 talk_filter;
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
	type_42 update;
	type_42 endUpdate;
	type_48 bupdate;
	type_50 move;
	type_55 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_68 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct tweak_info
{
	substr name;
	void* value;
	tweak_callback* cb;
	void* context;
	u8 type;
	u8 value_size;
	u16 flags;
	union
	{
		_class_1 int_context;
		_class_3 uint_context;
		_class_6 float_context;
		_class_7 bool_context;
		_class_9 select_context;
		_class_11 flag_context;
		_class_0 all_context;
	};
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_8 endUpdate;
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
	type_32 frustumCorners;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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
	type_17 renderCallBack;
	RxPipeline* pipeline;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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

struct xSurface
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_97 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct tweak_callback
{
	type_23 on_change;
	type_23 on_select;
	type_23 on_unselect;
	type_23 on_start_edit;
	type_23 on_stop_edit;
	type_23 on_expand;
	type_23 on_collapse;
	type_23 on_update;
	type_53 convert_mem_to_tweak;
	type_53 convert_tweak_to_mem;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_64 Conditional;
	type_64 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	type_96 BeforeEnter;
	type_5 StateCallback;
	type_11 BeforeAnimMatrices;
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

struct RpSector
{
	s32 type;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_93 pad;
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

struct xShadowSimplePoly
{
	type_30 vert;
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

struct xBound
{
	xQCData qcd;
	u8 type;
	type_57 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_43 light;
	type_49 light_frame;
	s32 memlvl;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_60 emit_pad;
	type_62 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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
	type_58 resolvID;
	type_61 base2Name;
	type_65 id2Name;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xParEmitterAsset : xBaseAsset
{
	u8 emit_flags;
	u8 emit_type;
	u16 pad;
	u32 propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	u32 cull_mode;
	f32 cull_dist_sqr;
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
	type_108 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_1
{
	s32 value_def;
	s32 value_min;
	s32 value_max;
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
	type_75 NumAnims;
	void** RawData;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct xParGroup
{
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct _class_2
{
	xVec3* verts;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_51 BilinearLerp;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_45 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
	union
	{
		xParInterp rate;
		type_101 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_116 color_birth;
	type_121 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xJSPHeader
{
	type_7 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_80 corner;
};

struct rxReq
{
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
	type_99 colls;
	type_47 post;
	type_63 depenq;
};

struct xEntBoulder
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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_71 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_84 sceneStart;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct zEntHangable
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_44 Callback;
};

struct _tagxPad
{
	type_98 value;
	type_100 last_value;
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
	type_118 up_tmr;
	type_122 down_tmr;
	type_12 analog;
};

struct _class_3
{
	u32 value_def;
	u32 value_min;
	u32 value_max;
};

struct xParInterp
{
	type_66 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_88 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	u16 matIndex;
	type_69 vertIndex;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
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
	type_11 BeforeAnimMatrices;
};

struct tagiRenderArrays
{
	type_73 m_index;
	type_76 m_vertex;
	type_85 m_vertexTZ;
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

struct _class_5
{
	type_74 base_point;
	type_77 point;
	s16 total_points;
	s16 end_points;
	f32 arc_height;
	xVec3 arc_normal;
	type_89 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	f32 rand_radius;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_79 Files;
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

struct _tagiPad
{
	s32 port;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xPEEntBone
{
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xParSys
{
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
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
	type_129 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct _class_6
{
	f32 value_def;
	f32 value_min;
	f32 value_max;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_125 radius;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct anim_coll_data
{
};

struct zParEmitter : xParEmitter
{
};

struct xClumpCollBSPTriangle
{
	_class_8 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct _tagLightningLine
{
	f32 unused;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct _class_7
{
	u8 value_def;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct zPlatform
{
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
	type_1 baseCount;
	type_10 baseList;
	_zEnv* zen;
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

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct substr
{
	s8* text;
	u32 size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_115 name;
	type_117 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	type_27 PowerUp;
	type_31 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct _tagLightningRot
{
	type_103 deg;
	f32 degrees;
	f32 height;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct zAssetPickupTable
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

struct _tagEmitSphere
{
	f32 radius;
};

struct RpTriangle
{
	type_107 vertIndex;
	s16 matIndex;
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

union _class_8
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zCutsceneMgr
{
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct _class_9
{
	u32 value_def;
	u32 labels_size;
	s8** labels;
	void* values;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_111 tranTable;
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

struct RxNodeMethods
{
	type_28 nodeBody;
	type_34 nodeInit;
	type_37 nodeTerm;
	type_2 pipelineNodeInit;
	type_13 pipelineNodeTerm;
	type_20 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct _class_10
{
	type_113 endPoint;
	xVec3 direction;
	f32 length;
	f32 scale;
	f32 width;
	type_123 endParam;
	type_124 endVel;
	type_126 paramSpan;
	f32 arc_height;
	xVec3 arc_normal;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct _tagLightningZeus
{
	f32 normal_offset;
	f32 back_offset;
	f32 side_offset;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_3 wt;
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

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_131 clusters;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_11
{
	u32 value_def;
	u32 mask;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_16 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

type_70 buffer;
type_86 buffer;
type_78 sLightning;
zParEmitter* sSparkEmitter;
RwRaster* sLightningRaster;
type_119 sLFuncX;
type_38 sLFuncY;
type_94 sLFuncZ;
type_132 sLFuncVal;
type_54 sLFuncSlope;
type_102 sLFuncEnd;
f32 sLFuncJerkFreq;
f32 sLFuncJerkTime;
f32 sLFuncShift;
f32 sLFuncMaxPStep;
f32 sLFuncMinPStep;
f32 sLFuncMinScale;
f32 sLFuncMaxScale;
f32 sLFuncScalePerLength;
f32 sLFuncMinSpan;
f32 sLFuncSpanPerLength;
f32 sLFuncSlopeRange;
f32 sLFuncUVSpeed;
f32 sLFuncUVOffset;
_tagLightningAdd gLightningTweakAddInfo;
xVec3 sTweakStart;
xVec3 sTweakEnd;
tweak_callback sLightningStartCB;
tweak_callback sLightningChangeCB;
type_105 lightning_type_names;
type_14 cSparkColors;
type_110 sPoint;
type_22 sSize;
zGlobals globals;
xMat4x3 g_I3;
tagiRenderArrays gRenderArr;
iColor_tag g_WHITE;
_tagxPad* gDebugPad;
u32 gActiveHeap;
type_46 lightningTweakChangeType;
type_59 lightningTweakStart;

void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end);
void zLightningKill(zLightning* l);
void zLightningShow(zLightning* l, s32 show);
void zLightningRender();
void RenderLightning(zLightning* l);
void zLightningFunc_Render(zLightning* l);
void zLightningUpdate(f32 seconds);
void UpdateLightning(zLightning* l, f32 seconds);
zLightning* zLightningAdd(_tagLightningAdd* add);
void zLightningInit();
void lightningTweakStart();
void lightningTweakChangeType();

// zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
// Start address: 0x181530
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end)
{
	s32 i;
	xVec3 dir;
	s32 j;
	s32 zeusOnStraightPoint;
	f32 pos;
	f32 inc;
	s32 j;
	f32 scalar;
	xVec3* dir;
}

// zLightningKill__FP10zLightning
// Start address: 0x181c70
void zLightningKill(zLightning* l)
{
}

// zLightningShow__FP10zLightningi
// Start address: 0x181c90
void zLightningShow(zLightning* l, s32 show)
{
}

// zLightningRender__Fv
// Start address: 0x181cc0
void zLightningRender()
{
	s32 i;
}

// RenderLightning__FP10zLightning
// Start address: 0x181d60
void RenderLightning(zLightning* l)
{
	xMat4x3* cam;
	f32 alphaf;
	u8 alphau8;
	s32 i;
	u32 verts;
	xVec3 nextN;
	xVec3 next;
	f32 len;
	s32 lastPoint;
	RwRGBA* _col;
	RwRGBA* _col;
	s32 backwards;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	f32 thicknessScale;
	RwRGBA* _col;
	RwRGBA* _col;
	s32 backwards;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_114 sStripVert;
}

// zLightningFunc_Render__FP10zLightning
// Start address: 0x182e00
void zLightningFunc_Render(zLightning* l)
{
	f32 percent;
	f32 pstep;
	type_130 val;
	type_4 param;
	type_15 xI;
	type_19 yI;
	type_21 zI;
	s32 i;
	type_72 drawAxis;
	type_82 verts;
	u32 numVerts;
	s32 u;
	u8 aVal;
	RwRGBA* _col;
	RwRGBA* _col;
	f32 newParam;
	f32 p2;
	f32 p3;
	f32 w1;
	f32 w2;
	f32 scalar;
	RwRGBA* _col;
	RwRGBA* _col;
}

// zLightningUpdate__Ff
// Start address: 0x1835a0
void zLightningUpdate(f32 seconds)
{
	s32 i;
	s32 picker;
	s32 j;
	f32 prevEnd;
}

// UpdateLightning__FP10zLightningf
// Start address: 0x183a00
void UpdateLightning(zLightning* l, f32 seconds)
{
	s32 i;
	f32 full;
	f32 half;
	f32 sc1;
	xVec3 dir;
	f32 full;
	f32 half;
	s32 i;
	xMat3x3 mat3;
	xVec3 vec;
	f32 sc2;
	f32 sc1;
	xParEmitterCustomSettings info;
	s32 i;
}

// zLightningAdd__FP16_tagLightningAdd
// Start address: 0x184050
zLightning* zLightningAdd(_tagLightningAdd* add)
{
	f32 currot;
	s32 zeusOnStraightPoint;
	xVec3 dir;
	s32 j;
	f32 pos;
	f32 inc;
	s32 i;
	s32 j;
	f32 scalar;
}

// zLightningInit__Fv
// Start address: 0x1848c0
void zLightningInit()
{
	s32 i;
	RwTexture* tex;
	s32 j;
	f32 prevEnd;
}

// lightningTweakStart__FRC10tweak_info
// Start address: 0x184e50
void lightningTweakStart()
{
	xVec3 s;
	xVec3 e;
}

// lightningTweakChangeType__FRC10tweak_info
// Start address: 0x184f10
void lightningTweakChangeType()
{
}

