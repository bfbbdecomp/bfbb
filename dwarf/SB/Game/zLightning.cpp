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
typedef int32(*type_2)(RxPipelineNode*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef RwCamera*(*type_8)(RwCamera*);
typedef RwObjectHasFrame*(*type_9)(RwObjectHasFrame*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_13)(RxPipelineNode*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef int32(*type_20)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(tweak_info&);
typedef uint32(*type_25)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_34)(RxNodeDefinition*);
typedef void(*type_35)(void*);
typedef void(*type_37)(RxNodeDefinition*);
typedef void(*type_42)(xEnt*, xScene*, float32);
typedef uint32(*type_44)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_46)(tweak_info&);
typedef void(*type_47)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_48)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_53)(tweak_info&, void*);
typedef void(*type_55)(xEnt*);
typedef xBase*(*type_58)(uint32);
typedef void(*type_59)(tweak_info&);
typedef int8*(*type_61)(xBase*);
typedef uint32(*type_63)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef uint32(*type_64)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_65)(uint32);
typedef void(*type_68)(xEnt*, xVec3*, xMat4x3*);
typedef RpClump*(*type_92)(RpClump*, void*);
typedef void(*type_96)(xAnimPlay*, xAnimState*);
typedef uint32(*type_97)(void*, void*);
typedef int32(*type_104)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_108)(RpAtomic*);
typedef void(*type_112)(xMemPool*, void*);
typedef void(*type_120)(RwResEntry*);

typedef uint32 type_1[72];
typedef float32 type_3[4];
typedef float32 type_4[2];
typedef uint32 type_6[15];
typedef int8 type_7[4];
typedef xBase* type_10[72];
typedef analog_data type_12[2];
typedef uint8 type_14[24];
typedef xFuncPiece* type_15[2];
typedef uint8 type_16[3];
typedef uint8 type_18[16];
typedef xFuncPiece* type_19[2];
typedef xFuncPiece* type_21[2];
typedef float32 type_22[5];
typedef RwFrustumPlane type_24[6];
typedef xVec4 type_26[12];
typedef uint8 type_27[2];
typedef uint32 type_29[2];
typedef xVec3 type_30[3];
typedef uint8 type_31[2];
typedef RwV3d type_32[8];
typedef float32 type_33[6];
typedef float32 type_36[3];
typedef xFuncPiece type_38[10];
typedef float32 type_39[3];
typedef xModelTag type_40[2];
typedef float32 type_41[3];
typedef RpLight* type_43[2];
typedef float32 type_45[16];
typedef RwFrame* type_49[2];
typedef float32 type_51[2];
typedef xVec3 type_52[2];
typedef type_52 type_54[10];
typedef xEnt* type_56[111];
typedef uint8 type_57[3];
typedef uint8 type_60[3];
typedef uint8 type_62[3];
typedef float32 type_66[2];
typedef int8 type_67[128];
typedef uint16 type_69[3];
typedef int8 type_70[16];
typedef type_67 type_71[6];
typedef xVec3 type_72[2];
typedef uint16 type_73[960];
typedef xVec3 type_74[16];
typedef uint8 type_75[2];
typedef RxObjSpace3DVertex type_76[480];
typedef xVec3 type_77[16];
typedef zLightning* type_78[48];
typedef xAnimMultiFileEntry type_79[1];
typedef xVec3 type_80[4];
typedef uint8 type_81[14];
typedef RxObjSpace3DVertex* type_82[2];
typedef xModelTag type_83[4];
typedef int8 type_84[32];
typedef float32 type_85[480];
typedef int8 type_86[16];
typedef xModelInstance* type_87[14];
typedef float32 type_88[4];
typedef float32 type_89[16];
typedef float32 type_90[5];
typedef uint8 type_91[4];
typedef uint32 type_93[4];
typedef xFuncPiece type_94[10];
typedef RwTexCoords* type_95[8];
typedef uint8 type_98[22];
typedef xCollis type_99[18];
typedef uint8 type_100[22];
typedef xParInterp type_101[1];
typedef float32 type_102[10];
typedef float32 type_103[16];
typedef int8* type_105[4];
typedef xVec3 type_106[5];
typedef uint16 type_107[3];
typedef uint8 type_109[5];
typedef xVec3 type_110[5];
typedef xVec3 type_111[60];
typedef xVec3 type_113[2];
typedef RxObjSpace3DVertex type_114[128];
typedef int8 type_115[32];
typedef xParInterp type_116[4];
typedef int8 type_117[32];
typedef float32 type_118[22];
typedef xFuncPiece type_119[10];
typedef xParInterp type_121[4];
typedef float32 type_122[22];
typedef float32 type_123[2];
typedef float32 type_124[2];
typedef float32 type_125[2];
typedef float32 type_126[2];
typedef uint32 type_127[15];
typedef uint32 type_128[15];
typedef RwTexCoords* type_129[8];
typedef xVec3 type_130[2];
typedef RxCluster type_131[1];
typedef xVec3 type_132[10];

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
	type_40 BubbleWandTag;
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
	type_83 HangPawTag;
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
	type_127 Inv_PatsSock;
	type_128 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_6 Inv_LevelPickups;
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
	type_29 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_56 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_81 sb_model_indices;
	type_87 sb_models;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_120 destroyNotify;
};

struct _tagLightningAdd
{
	uint32 type;
	float32 setup_degrees;
	float32 move_degrees;
	float32 rot_radius;
	xVec3* start;
	xVec3* end;
	int16 total_points;
	int16 end_points;
	float32 time;
	float32 arc_height;
	float32 thickness;
	iColor_tag color;
	float32 rand_radius;
	uint32 flags;
	float32 zeus_normal_offset;
	float32 zeus_back_offset;
	float32 zeus_side_offset;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_9 sync;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_35 activateCB;
	type_35 deactivateCB;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct zLightning
{
	uint32 type;
	uint32 flags;
	union
	{
		_class_5 legacy;
		_class_10 func;
	};
	iColor_tag color;
	float32 time_left;
	float32 time_total;
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

struct _class_0
{
	type_18 pad;
};

struct xFuncPiece
{
	type_90 coef;
	float32 end;
	int32 order;
	xFuncPiece* next;
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
	type_26 frustplane;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
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
	type_91 talk_filter;
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
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct tweak_info
{
	substr name;
	void* value;
	tweak_callback* cb;
	void* context;
	uint8 type;
	uint8 value_size;
	uint16 flags;
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
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
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
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
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
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xSurface
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
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
	uint32 mode;
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
	uint32 emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_64 Conditional;
	type_64 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_96 BeforeEnter;
	type_5 StateCallback;
	type_11 BeforeAnimMatrices;
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

struct RpSector
{
	int32 type;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_93 pad;
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
	type_30 vert;
	xVec3 norm;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
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
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
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
	int32 memlvl;
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
	uint8 rate_mode;
	float32 rate;
	float32 rate_time;
	float32 rate_fraction;
	float32 rate_fraction_cull;
	uint8 emit_flags;
	type_60 emit_pad;
	type_62 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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
	uint8 emit_flags;
	uint8 emit_type;
	uint16 pad;
	uint32 propID;
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
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint32 cull_mode;
	float32 cull_dist_sqr;
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
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_1
{
	int32 value_def;
	int32 value_min;
	int32 value_max;
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
	type_75 NumAnims;
	void** RawData;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xParGroup
{
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_2
{
	xVec3* verts;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_51 BilinearLerp;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_45 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
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
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xJSPHeader
{
	type_7 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_80 corner;
};

struct rxReq
{
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
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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
	uint32 Count;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_71 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_84 sceneStart;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct zEntHangable
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_44 Callback;
};

struct _tagxPad
{
	type_98 value;
	type_100 last_value;
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
	type_118 up_tmr;
	type_122 down_tmr;
	type_12 analog;
};

struct _class_3
{
	uint32 value_def;
	uint32 value_min;
	uint32 value_max;
};

struct xParInterp
{
	type_66 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_88 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
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
	float32 t;
	float32 u;
	float32 v;
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
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _class_5
{
	type_74 base_point;
	type_77 point;
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	type_89 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float32 rand_radius;
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
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _tagiPad
{
	int32 port;
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
	uint8 flags;
	uint8 type;
	uint8 bone;
	uint8 pad1;
	xVec3 offset;
	float32 radius;
	float32 deflection;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xParSys
{
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
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
	type_129 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct _class_6
{
	float32 value_def;
	float32 value_min;
	float32 value_max;
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
	float32 dst_cast;
	type_125 radius;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct _tagLightningLine
{
	float32 unused;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _class_7
{
	uint8 value_def;
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
	type_1 baseCount;
	type_10 baseList;
	_zEnv* zen;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_112 InitCB;
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

struct substr
{
	int8* text;
	uint32 size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_115 name;
	type_117 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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
	type_27 PowerUp;
	type_31 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct _tagLightningRot
{
	type_103 deg;
	float32 degrees;
	float32 height;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct zAssetPickupTable
{
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct RpTriangle
{
	type_107 vertIndex;
	int16 matIndex;
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
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _class_9
{
	uint32 value_def;
	uint32 labels_size;
	int8** labels;
	void* values;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_111 tranTable;
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
	float32 length;
	float32 scale;
	float32 width;
	type_123 endParam;
	type_124 endVel;
	type_126 paramSpan;
	float32 arc_height;
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
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _tagLightningZeus
{
	float32 normal_offset;
	float32 back_offset;
	float32 side_offset;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_3 wt;
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
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_131 clusters;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _class_11
{
	uint32 value_def;
	uint32 mask;
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
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_16 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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
float32 sLFuncJerkFreq;
float32 sLFuncJerkTime;
float32 sLFuncShift;
float32 sLFuncMaxPStep;
float32 sLFuncMinPStep;
float32 sLFuncMinScale;
float32 sLFuncMaxScale;
float32 sLFuncScalePerLength;
float32 sLFuncMinSpan;
float32 sLFuncSpanPerLength;
float32 sLFuncSlopeRange;
float32 sLFuncUVSpeed;
float32 sLFuncUVOffset;
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
uint32 gActiveHeap;
type_46 lightningTweakChangeType;
type_59 lightningTweakStart;

void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end);
void zLightningKill(zLightning* l);
void zLightningShow(zLightning* l, int32 show);
void zLightningRender();
void RenderLightning(zLightning* l);
void zLightningFunc_Render(zLightning* l);
void zLightningUpdate(float32 seconds);
void UpdateLightning(zLightning* l, float32 seconds);
zLightning* zLightningAdd(_tagLightningAdd* add);
void zLightningInit();
void lightningTweakStart();
void lightningTweakChangeType();

// zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
// Start address: 0x181530
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end)
{
	int32 i;
	xVec3 dir;
	int32 j;
	int32 zeusOnStraightPoint;
	float32 pos;
	float32 inc;
	int32 j;
	float32 scalar;
	xVec3* dir;
}

// zLightningKill__FP10zLightning
// Start address: 0x181c70
void zLightningKill(zLightning* l)
{
}

// zLightningShow__FP10zLightningi
// Start address: 0x181c90
void zLightningShow(zLightning* l, int32 show)
{
}

// zLightningRender__Fv
// Start address: 0x181cc0
void zLightningRender()
{
	int32 i;
}

// RenderLightning__FP10zLightning
// Start address: 0x181d60
void RenderLightning(zLightning* l)
{
	xMat4x3* cam;
	float32 alphaf;
	uint8 alphau8;
	int32 i;
	uint32 verts;
	xVec3 nextN;
	xVec3 next;
	float32 len;
	int32 lastPoint;
	RwRGBA* _col;
	RwRGBA* _col;
	int32 backwards;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 thicknessScale;
	RwRGBA* _col;
	RwRGBA* _col;
	int32 backwards;
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
	float32 percent;
	float32 pstep;
	type_130 val;
	type_4 param;
	type_15 xI;
	type_19 yI;
	type_21 zI;
	int32 i;
	type_72 drawAxis;
	type_82 verts;
	uint32 numVerts;
	int32 u;
	uint8 aVal;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 newParam;
	float32 p2;
	float32 p3;
	float32 w1;
	float32 w2;
	float32 scalar;
	RwRGBA* _col;
	RwRGBA* _col;
}

// zLightningUpdate__Ff
// Start address: 0x1835a0
void zLightningUpdate(float32 seconds)
{
	int32 i;
	int32 picker;
	int32 j;
	float32 prevEnd;
}

// UpdateLightning__FP10zLightningf
// Start address: 0x183a00
void UpdateLightning(zLightning* l, float32 seconds)
{
	int32 i;
	float32 full;
	float32 half;
	float32 sc1;
	xVec3 dir;
	float32 full;
	float32 half;
	int32 i;
	xMat3x3 mat3;
	xVec3 vec;
	float32 sc2;
	float32 sc1;
	xParEmitterCustomSettings info;
	int32 i;
}

// zLightningAdd__FP16_tagLightningAdd
// Start address: 0x184050
zLightning* zLightningAdd(_tagLightningAdd* add)
{
	float32 currot;
	int32 zeusOnStraightPoint;
	xVec3 dir;
	int32 j;
	float32 pos;
	float32 inc;
	int32 i;
	int32 j;
	float32 scalar;
}

// zLightningInit__Fv
// Start address: 0x1848c0
void zLightningInit()
{
	int32 i;
	RwTexture* tex;
	int32 j;
	float32 prevEnd;
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

