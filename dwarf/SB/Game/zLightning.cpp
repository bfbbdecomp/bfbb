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
typedef struct RxColorUnion;
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
typedef struct _class_8;
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
typedef xVec3 type_54[2][10];
typedef xEnt* type_56[111];
typedef uint8 type_57[3];
typedef uint8 type_60[3];
typedef uint8 type_62[3];
typedef float32 type_66[2];
typedef int8 type_67[128];
typedef uint16 type_69[3];
typedef int8 type_70[16];
typedef int8 type_71[128][6];
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
	void(*destroyNotify)(RwResEntry*);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	uint8 pad[16];
};

struct xFuncPiece
{
	float32 coef[5];
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
	xVec4 frustplane[12];
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
	RpClump*(*callback)(RpClump*, void*);
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint32(*cb)(void*, void*);
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
	void(*on_change)(tweak_info&);
	void(*on_select)(tweak_info&);
	void(*on_unselect)(tweak_info&);
	void(*on_start_edit)(tweak_info&);
	void(*on_stop_edit)(tweak_info&);
	void(*on_expand)(tweak_info&);
	void(*on_collapse)(tweak_info&);
	void(*on_update)(tweak_info&);
	void(*convert_mem_to_tweak)(tweak_info&, void*);
	void(*convert_tweak_to_mem)(tweak_info&, void*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32 pad[4];
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
	xVec3 vert[3];
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
	uint8 pad[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint8 emit_pad[3];
	uint8 rot[3];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 NumAnims[2];
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
	float32 matrix[16];
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
		xParInterp value[1];
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	xParInterp color_birth[4];
	xParInterp color_death[4];
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
	int8 idtag[4];
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct _class_3
{
	uint32 value_def;
	uint32 value_min;
	uint32 value_max;
};

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct tagiRenderArrays
{
	uint16 m_index[960];
	RxObjSpace3DVertex m_vertex[480];
	float32 m_vertexTZ[480];
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
	xVec3 base_point[16];
	xVec3 point[16];
	int16 total_points;
	int16 end_points;
	float32 arc_height;
	xVec3 arc_normal;
	float32 thickness[16];
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
	xAnimMultiFileEntry Files[1];
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
	RwTexCoords* texCoords[8];
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	void(*InitCB)(xMemPool*, void*);
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
	int8 name[32];
	int8 mask[32];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	float32 deg[16];
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
	uint16 vertIndex[3];
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

struct _class_8
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct _class_10
{
	xVec3 endPoint[2];
	xVec3 direction;
	float32 length;
	float32 scale;
	float32 width;
	float32 endParam[2];
	float32 endVel[2];
	float32 paramSpan[2];
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
	float32 wt[4];
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
	RxCluster clusters[1];
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
	uint8 rot[3];
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

int8 buffer[16];
int8 buffer[16];
zLightning* sLightning[48];
zParEmitter* sSparkEmitter;
RwRaster* sLightningRaster;
xFuncPiece sLFuncX[10];
xFuncPiece sLFuncY[10];
xFuncPiece sLFuncZ[10];
xVec3 sLFuncVal[10];
xVec3 sLFuncSlope[2][10];
float32 sLFuncEnd[10];
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
int8* lightning_type_names[4];
uint8 cSparkColors[24];
xVec3 sPoint[5];
float32 sSize[5];
zGlobals globals;
xMat4x3 g_I3;
tagiRenderArrays gRenderArr;
iColor_tag g_WHITE;
_tagxPad* gDebugPad;
uint32 gActiveHeap;
void(*lightningTweakChangeType)(tweak_info&);
void(*lightningTweakStart)(tweak_info&);

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
	// Line 1409, Address: 0x181530, Func Offset: 0
	// Line 1414, Address: 0x181534, Func Offset: 0x4
	// Line 1409, Address: 0x181538, Func Offset: 0x8
	// Line 1414, Address: 0x181564, Func Offset: 0x34
	// Line 1416, Address: 0x181570, Func Offset: 0x40
	// Line 1417, Address: 0x181580, Func Offset: 0x50
	// Line 1418, Address: 0x181588, Func Offset: 0x58
	// Line 1419, Address: 0x181590, Func Offset: 0x60
	// Line 1421, Address: 0x1815f0, Func Offset: 0xc0
	// Line 1422, Address: 0x18162c, Func Offset: 0xfc
	// Line 1423, Address: 0x181638, Func Offset: 0x108
	// Line 1425, Address: 0x181670, Func Offset: 0x140
	// Line 1426, Address: 0x181680, Func Offset: 0x150
	// Line 1427, Address: 0x1816b8, Func Offset: 0x188
	// Line 1428, Address: 0x1816c4, Func Offset: 0x194
	// Line 1434, Address: 0x1816d0, Func Offset: 0x1a0
	// Line 1431, Address: 0x1816d4, Func Offset: 0x1a4
	// Line 1434, Address: 0x1816d8, Func Offset: 0x1a8
	// Line 1431, Address: 0x1816dc, Func Offset: 0x1ac
	// Line 1432, Address: 0x1816f0, Func Offset: 0x1c0
	// Line 1433, Address: 0x1816fc, Func Offset: 0x1cc
	// Line 1434, Address: 0x18170c, Func Offset: 0x1dc
	// Line 1435, Address: 0x181714, Func Offset: 0x1e4
	// Line 1442, Address: 0x181718, Func Offset: 0x1e8
	// Line 1434, Address: 0x18171c, Func Offset: 0x1ec
	// Line 1441, Address: 0x181720, Func Offset: 0x1f0
	// Line 1434, Address: 0x181724, Func Offset: 0x1f4
	// Line 1439, Address: 0x181728, Func Offset: 0x1f8
	// Line 1434, Address: 0x18172c, Func Offset: 0x1fc
	// Line 1443, Address: 0x181730, Func Offset: 0x200
	// Line 1434, Address: 0x181734, Func Offset: 0x204
	// Line 1437, Address: 0x181738, Func Offset: 0x208
	// Line 1442, Address: 0x181740, Func Offset: 0x210
	// Line 1437, Address: 0x181744, Func Offset: 0x214
	// Line 1441, Address: 0x181748, Func Offset: 0x218
	// Line 1437, Address: 0x18174c, Func Offset: 0x21c
	// Line 1442, Address: 0x18175c, Func Offset: 0x22c
	// Line 1437, Address: 0x181760, Func Offset: 0x230
	// Line 1442, Address: 0x181764, Func Offset: 0x234
	// Line 1443, Address: 0x181778, Func Offset: 0x248
	// Line 1480, Address: 0x181790, Func Offset: 0x260
	// Line 1456, Address: 0x181794, Func Offset: 0x264
	// Line 1480, Address: 0x181798, Func Offset: 0x268
	// Line 1481, Address: 0x18179c, Func Offset: 0x26c
	// Line 1480, Address: 0x1817a0, Func Offset: 0x270
	// Line 1445, Address: 0x1817a8, Func Offset: 0x278
	// Line 1447, Address: 0x1817b8, Func Offset: 0x288
	// Line 1448, Address: 0x1817c4, Func Offset: 0x294
	// Line 1449, Address: 0x1817f8, Func Offset: 0x2c8
	// Line 1450, Address: 0x18180c, Func Offset: 0x2dc
	// Line 1453, Address: 0x18181c, Func Offset: 0x2ec
	// Line 1456, Address: 0x181860, Func Offset: 0x330
	// Line 1458, Address: 0x18186c, Func Offset: 0x33c
	// Line 1459, Address: 0x181884, Func Offset: 0x354
	// Line 1460, Address: 0x18188c, Func Offset: 0x35c
	// Line 1462, Address: 0x181898, Func Offset: 0x368
	// Line 1473, Address: 0x1818a0, Func Offset: 0x370
	// Line 1463, Address: 0x1818a4, Func Offset: 0x374
	// Line 1465, Address: 0x1818b0, Func Offset: 0x380
	// Line 1468, Address: 0x1818f0, Func Offset: 0x3c0
	// Line 1471, Address: 0x181934, Func Offset: 0x404
	// Line 1476, Address: 0x18196c, Func Offset: 0x43c
	// Line 1478, Address: 0x181970, Func Offset: 0x440
	// Line 1480, Address: 0x181980, Func Offset: 0x450
	// Line 1481, Address: 0x181988, Func Offset: 0x458
	// Line 1482, Address: 0x181994, Func Offset: 0x464
	// Line 1487, Address: 0x1819d8, Func Offset: 0x4a8
	// Line 1482, Address: 0x1819e0, Func Offset: 0x4b0
	// Line 1487, Address: 0x1819e4, Func Offset: 0x4b4
	// Line 1490, Address: 0x1819f8, Func Offset: 0x4c8
	// Line 1491, Address: 0x181a0c, Func Offset: 0x4dc
	// Line 1490, Address: 0x181a10, Func Offset: 0x4e0
	// Line 1491, Address: 0x181a24, Func Offset: 0x4f4
	// Line 1492, Address: 0x181a38, Func Offset: 0x508
	// Line 1497, Address: 0x181a40, Func Offset: 0x510
	// Line 1493, Address: 0x181a44, Func Offset: 0x514
	// Line 1497, Address: 0x181a48, Func Offset: 0x518
	// Line 1493, Address: 0x181a54, Func Offset: 0x524
	// Line 1494, Address: 0x181a68, Func Offset: 0x538
	// Line 1495, Address: 0x181a80, Func Offset: 0x550
	// Line 1496, Address: 0x181abc, Func Offset: 0x58c
	// Line 1497, Address: 0x181ad4, Func Offset: 0x5a4
	// Line 1498, Address: 0x181ae0, Func Offset: 0x5b0
	// Line 1499, Address: 0x181b0c, Func Offset: 0x5dc
	// Line 1500, Address: 0x181b18, Func Offset: 0x5e8
	// Line 1501, Address: 0x181b24, Func Offset: 0x5f4
	// Line 1502, Address: 0x181b28, Func Offset: 0x5f8
	// Line 1503, Address: 0x181b3c, Func Offset: 0x60c
	// Line 1504, Address: 0x181b54, Func Offset: 0x624
	// Line 1505, Address: 0x181b68, Func Offset: 0x638
	// Line 1506, Address: 0x181b7c, Func Offset: 0x64c
	// Line 1510, Address: 0x181b90, Func Offset: 0x660
	// Line 1507, Address: 0x181b94, Func Offset: 0x664
	// Line 1510, Address: 0x181b98, Func Offset: 0x668
	// Line 1507, Address: 0x181ba4, Func Offset: 0x674
	// Line 1509, Address: 0x181ba8, Func Offset: 0x678
	// Line 1510, Address: 0x181bac, Func Offset: 0x67c
	// Line 1511, Address: 0x181bd8, Func Offset: 0x6a8
	// Line 1512, Address: 0x181be4, Func Offset: 0x6b4
	// Line 1518, Address: 0x181bf0, Func Offset: 0x6c0
	// Line 1515, Address: 0x181bf4, Func Offset: 0x6c4
	// Line 1518, Address: 0x181bf8, Func Offset: 0x6c8
	// Line 1515, Address: 0x181bfc, Func Offset: 0x6cc
	// Line 1516, Address: 0x181c10, Func Offset: 0x6e0
	// Line 1517, Address: 0x181c1c, Func Offset: 0x6ec
	// Line 1518, Address: 0x181c2c, Func Offset: 0x6fc
	// Line 1520, Address: 0x181c34, Func Offset: 0x704
	// Line 1521, Address: 0x181c38, Func Offset: 0x708
	// Func End, Address: 0x181c64, Func Offset: 0x734
}

// zLightningKill__FP10zLightning
// Start address: 0x181c70
void zLightningKill(zLightning* l)
{
	// Line 1403, Address: 0x181c70, Func Offset: 0
	// Line 1404, Address: 0x181c7c, Func Offset: 0xc
	// Func End, Address: 0x181c84, Func Offset: 0x14
}

// zLightningShow__FP10zLightningi
// Start address: 0x181c90
void zLightningShow(zLightning* l, int32 show)
{
	// Line 1392, Address: 0x181c90, Func Offset: 0
	// Line 1393, Address: 0x181c98, Func Offset: 0x8
	// Line 1395, Address: 0x181ca8, Func Offset: 0x18
	// Line 1396, Address: 0x181cb8, Func Offset: 0x28
	// Func End, Address: 0x181cc0, Func Offset: 0x30
}

// zLightningRender__Fv
// Start address: 0x181cc0
void zLightningRender()
{
	int32 i;
	// Line 1353, Address: 0x181cc0, Func Offset: 0
	// Line 1355, Address: 0x181cd4, Func Offset: 0x14
	// Line 1357, Address: 0x181cdc, Func Offset: 0x1c
	// Line 1359, Address: 0x181ce4, Func Offset: 0x24
	// Line 1361, Address: 0x181ce8, Func Offset: 0x28
	// Line 1362, Address: 0x181cf4, Func Offset: 0x34
	// Line 1365, Address: 0x181d00, Func Offset: 0x40
	// Line 1367, Address: 0x181d14, Func Offset: 0x54
	// Line 1370, Address: 0x181d30, Func Offset: 0x70
	// Line 1372, Address: 0x181d38, Func Offset: 0x78
	// Line 1386, Address: 0x181d48, Func Offset: 0x88
	// Func End, Address: 0x181d5c, Func Offset: 0x9c
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
	RxObjSpace3DVertex sStripVert[128];
	// Line 1016, Address: 0x181d60, Func Offset: 0
	// Line 1023, Address: 0x181d64, Func Offset: 0x4
	// Line 1016, Address: 0x181d68, Func Offset: 0x8
	// Line 1019, Address: 0x181d88, Func Offset: 0x28
	// Line 1016, Address: 0x181d8c, Func Offset: 0x2c
	// Line 1023, Address: 0x181db8, Func Offset: 0x58
	// Line 1026, Address: 0x181dc8, Func Offset: 0x68
	// Line 1027, Address: 0x181dd4, Func Offset: 0x74
	// Line 1028, Address: 0x181e04, Func Offset: 0xa4
	// Line 1030, Address: 0x181e10, Func Offset: 0xb0
	// Line 1029, Address: 0x181e14, Func Offset: 0xb4
	// Line 1030, Address: 0x181e28, Func Offset: 0xc8
	// Line 1031, Address: 0x181e5c, Func Offset: 0xfc
	// Line 1032, Address: 0x181e60, Func Offset: 0x100
	// Line 1044, Address: 0x181eb0, Func Offset: 0x150
	// Line 1032, Address: 0x181eb4, Func Offset: 0x154
	// Line 1044, Address: 0x181eb8, Func Offset: 0x158
	// Line 1045, Address: 0x181ec0, Func Offset: 0x160
	// Line 1046, Address: 0x181ec4, Func Offset: 0x164
	// Line 1045, Address: 0x181ec8, Func Offset: 0x168
	// Line 1046, Address: 0x181ecc, Func Offset: 0x16c
	// Line 1047, Address: 0x181ed4, Func Offset: 0x174
	// Line 1048, Address: 0x181ee0, Func Offset: 0x180
	// Line 1050, Address: 0x181ee4, Func Offset: 0x184
	// Line 1049, Address: 0x181ef4, Func Offset: 0x194
	// Line 1053, Address: 0x181ef8, Func Offset: 0x198
	// Line 1049, Address: 0x181efc, Func Offset: 0x19c
	// Line 1053, Address: 0x181f00, Func Offset: 0x1a0
	// Line 1049, Address: 0x181f04, Func Offset: 0x1a4
	// Line 1048, Address: 0x181f08, Func Offset: 0x1a8
	// Line 1050, Address: 0x181f0c, Func Offset: 0x1ac
	// Line 1048, Address: 0x181f10, Func Offset: 0x1b0
	// Line 1050, Address: 0x181f14, Func Offset: 0x1b4
	// Line 1052, Address: 0x181f50, Func Offset: 0x1f0
	// Line 1053, Address: 0x181f98, Func Offset: 0x238
	// Line 1054, Address: 0x181fa0, Func Offset: 0x240
	// Line 1055, Address: 0x181fcc, Func Offset: 0x26c
	// Line 1057, Address: 0x181fec, Func Offset: 0x28c
	// Line 1069, Address: 0x181ff0, Func Offset: 0x290
	// Line 1058, Address: 0x181ff4, Func Offset: 0x294
	// Line 1078, Address: 0x181ff8, Func Offset: 0x298
	// Line 1055, Address: 0x181ffc, Func Offset: 0x29c
	// Line 1066, Address: 0x182000, Func Offset: 0x2a0
	// Line 1058, Address: 0x182004, Func Offset: 0x2a4
	// Line 1081, Address: 0x182008, Func Offset: 0x2a8
	// Line 1058, Address: 0x18200c, Func Offset: 0x2ac
	// Line 1069, Address: 0x182010, Func Offset: 0x2b0
	// Line 1076, Address: 0x182014, Func Offset: 0x2b4
	// Line 1078, Address: 0x182018, Func Offset: 0x2b8
	// Line 1059, Address: 0x18201c, Func Offset: 0x2bc
	// Line 1066, Address: 0x182020, Func Offset: 0x2c0
	// Line 1067, Address: 0x182024, Func Offset: 0x2c4
	// Line 1081, Address: 0x182028, Func Offset: 0x2c8
	// Line 1059, Address: 0x18202c, Func Offset: 0x2cc
	// Line 1067, Address: 0x182030, Func Offset: 0x2d0
	// Line 1065, Address: 0x182034, Func Offset: 0x2d4
	// Line 1059, Address: 0x18203c, Func Offset: 0x2dc
	// Line 1065, Address: 0x182040, Func Offset: 0x2e0
	// Line 1059, Address: 0x182044, Func Offset: 0x2e4
	// Line 1065, Address: 0x182048, Func Offset: 0x2e8
	// Line 1059, Address: 0x18204c, Func Offset: 0x2ec
	// Line 1065, Address: 0x182050, Func Offset: 0x2f0
	// Line 1059, Address: 0x182054, Func Offset: 0x2f4
	// Line 1065, Address: 0x182058, Func Offset: 0x2f8
	// Line 1069, Address: 0x18205c, Func Offset: 0x2fc
	// Line 1061, Address: 0x182060, Func Offset: 0x300
	// Line 1074, Address: 0x182068, Func Offset: 0x308
	// Line 1069, Address: 0x18206c, Func Offset: 0x30c
	// Line 1061, Address: 0x182070, Func Offset: 0x310
	// Line 1069, Address: 0x182074, Func Offset: 0x314
	// Line 1061, Address: 0x182078, Func Offset: 0x318
	// Line 1069, Address: 0x18207c, Func Offset: 0x31c
	// Line 1061, Address: 0x182084, Func Offset: 0x324
	// Line 1069, Address: 0x18208c, Func Offset: 0x32c
	// Line 1074, Address: 0x182094, Func Offset: 0x334
	// Line 1076, Address: 0x1820a0, Func Offset: 0x340
	// Line 1061, Address: 0x1820a8, Func Offset: 0x348
	// Line 1075, Address: 0x1820ac, Func Offset: 0x34c
	// Line 1074, Address: 0x1820b4, Func Offset: 0x354
	// Line 1078, Address: 0x1820bc, Func Offset: 0x35c
	// Line 1081, Address: 0x1820d8, Func Offset: 0x378
	// Line 1083, Address: 0x182108, Func Offset: 0x3a8
	// Line 1085, Address: 0x182118, Func Offset: 0x3b8
	// Line 1088, Address: 0x182124, Func Offset: 0x3c4
	// Line 1084, Address: 0x182128, Func Offset: 0x3c8
	// Line 1088, Address: 0x18212c, Func Offset: 0x3cc
	// Line 1084, Address: 0x182130, Func Offset: 0x3d0
	// Line 1085, Address: 0x182138, Func Offset: 0x3d8
	// Line 1087, Address: 0x18217c, Func Offset: 0x41c
	// Line 1085, Address: 0x182180, Func Offset: 0x420
	// Line 1087, Address: 0x182190, Func Offset: 0x430
	// Line 1088, Address: 0x1821d4, Func Offset: 0x474
	// Line 1089, Address: 0x1821dc, Func Offset: 0x47c
	// Line 1090, Address: 0x182208, Func Offset: 0x4a8
	// Line 1092, Address: 0x182224, Func Offset: 0x4c4
	// Line 1095, Address: 0x182230, Func Offset: 0x4d0
	// Line 1097, Address: 0x182248, Func Offset: 0x4e8
	// Line 1102, Address: 0x18224c, Func Offset: 0x4ec
	// Line 1097, Address: 0x182260, Func Offset: 0x500
	// Line 1102, Address: 0x182268, Func Offset: 0x508
	// Line 1098, Address: 0x18227c, Func Offset: 0x51c
	// Line 1097, Address: 0x182284, Func Offset: 0x524
	// Line 1098, Address: 0x182288, Func Offset: 0x528
	// Line 1095, Address: 0x18228c, Func Offset: 0x52c
	// Line 1098, Address: 0x182290, Func Offset: 0x530
	// Line 1100, Address: 0x182298, Func Offset: 0x538
	// Line 1098, Address: 0x1822a0, Func Offset: 0x540
	// Line 1100, Address: 0x1822a4, Func Offset: 0x544
	// Line 1102, Address: 0x1822b4, Func Offset: 0x554
	// Line 1104, Address: 0x1822c4, Func Offset: 0x564
	// Line 1106, Address: 0x1822cc, Func Offset: 0x56c
	// Line 1107, Address: 0x1822d4, Func Offset: 0x574
	// Line 1109, Address: 0x1822dc, Func Offset: 0x57c
	// Line 1110, Address: 0x1822ec, Func Offset: 0x58c
	// Line 1112, Address: 0x1822f8, Func Offset: 0x598
	// Line 1113, Address: 0x182300, Func Offset: 0x5a0
	// Line 1115, Address: 0x182308, Func Offset: 0x5a8
	// Line 1116, Address: 0x182310, Func Offset: 0x5b0
	// Line 1119, Address: 0x182314, Func Offset: 0x5b4
	// Line 1125, Address: 0x18232c, Func Offset: 0x5cc
	// Line 1127, Address: 0x182344, Func Offset: 0x5e4
	// Line 1128, Address: 0x18234c, Func Offset: 0x5ec
	// Line 1130, Address: 0x182354, Func Offset: 0x5f4
	// Line 1128, Address: 0x182358, Func Offset: 0x5f8
	// Line 1130, Address: 0x182368, Func Offset: 0x608
	// Line 1131, Address: 0x182374, Func Offset: 0x614
	// Line 1133, Address: 0x182378, Func Offset: 0x618
	// Line 1134, Address: 0x182380, Func Offset: 0x620
	// Line 1136, Address: 0x182388, Func Offset: 0x628
	// Line 1137, Address: 0x182390, Func Offset: 0x630
	// Line 1142, Address: 0x182398, Func Offset: 0x638
	// Line 1140, Address: 0x18239c, Func Offset: 0x63c
	// Line 1144, Address: 0x1823a0, Func Offset: 0x640
	// Line 1140, Address: 0x1823a4, Func Offset: 0x644
	// Line 1144, Address: 0x1823c0, Func Offset: 0x660
	// Line 1148, Address: 0x1823c8, Func Offset: 0x668
	// Line 1150, Address: 0x1823dc, Func Offset: 0x67c
	// Line 1152, Address: 0x182400, Func Offset: 0x6a0
	// Line 1153, Address: 0x182434, Func Offset: 0x6d4
	// Line 1152, Address: 0x182438, Func Offset: 0x6d8
	// Line 1153, Address: 0x18243c, Func Offset: 0x6dc
	// Line 1154, Address: 0x182444, Func Offset: 0x6e4
	// Line 1156, Address: 0x18244c, Func Offset: 0x6ec
	// Line 1159, Address: 0x182458, Func Offset: 0x6f8
	// Line 1156, Address: 0x18245c, Func Offset: 0x6fc
	// Line 1159, Address: 0x182460, Func Offset: 0x700
	// Line 1154, Address: 0x182464, Func Offset: 0x704
	// Line 1156, Address: 0x182468, Func Offset: 0x708
	// Line 1159, Address: 0x18246c, Func Offset: 0x70c
	// Line 1154, Address: 0x182480, Func Offset: 0x720
	// Line 1159, Address: 0x182488, Func Offset: 0x728
	// Line 1154, Address: 0x18248c, Func Offset: 0x72c
	// Line 1159, Address: 0x182494, Func Offset: 0x734
	// Line 1156, Address: 0x182498, Func Offset: 0x738
	// Line 1160, Address: 0x1824b0, Func Offset: 0x750
	// Line 1161, Address: 0x1824b8, Func Offset: 0x758
	// Line 1163, Address: 0x1824d0, Func Offset: 0x770
	// Line 1164, Address: 0x1824e0, Func Offset: 0x780
	// Line 1166, Address: 0x1824e8, Func Offset: 0x788
	// Line 1164, Address: 0x1824ec, Func Offset: 0x78c
	// Line 1166, Address: 0x1824f8, Func Offset: 0x798
	// Line 1171, Address: 0x18250c, Func Offset: 0x7ac
	// Line 1166, Address: 0x182510, Func Offset: 0x7b0
	// Line 1171, Address: 0x182514, Func Offset: 0x7b4
	// Line 1166, Address: 0x182518, Func Offset: 0x7b8
	// Line 1171, Address: 0x18251c, Func Offset: 0x7bc
	// Line 1166, Address: 0x182520, Func Offset: 0x7c0
	// Line 1171, Address: 0x182524, Func Offset: 0x7c4
	// Line 1166, Address: 0x182528, Func Offset: 0x7c8
	// Line 1171, Address: 0x18252c, Func Offset: 0x7cc
	// Line 1166, Address: 0x182534, Func Offset: 0x7d4
	// Line 1171, Address: 0x182544, Func Offset: 0x7e4
	// Line 1172, Address: 0x18254c, Func Offset: 0x7ec
	// Line 1173, Address: 0x182554, Func Offset: 0x7f4
	// Line 1175, Address: 0x182570, Func Offset: 0x810
	// Line 1176, Address: 0x182580, Func Offset: 0x820
	// Line 1179, Address: 0x182590, Func Offset: 0x830
	// Line 1176, Address: 0x182594, Func Offset: 0x834
	// Line 1178, Address: 0x182598, Func Offset: 0x838
	// Line 1179, Address: 0x1825b8, Func Offset: 0x858
	// Line 1185, Address: 0x1825c0, Func Offset: 0x860
	// Line 1187, Address: 0x1825e8, Func Offset: 0x888
	// Line 1188, Address: 0x1825f0, Func Offset: 0x890
	// Line 1198, Address: 0x1825f8, Func Offset: 0x898
	// Line 1197, Address: 0x1825fc, Func Offset: 0x89c
	// Line 1198, Address: 0x182610, Func Offset: 0x8b0
	// Line 1199, Address: 0x182644, Func Offset: 0x8e4
	// Line 1198, Address: 0x182648, Func Offset: 0x8e8
	// Line 1199, Address: 0x18264c, Func Offset: 0x8ec
	// Line 1198, Address: 0x182654, Func Offset: 0x8f4
	// Line 1199, Address: 0x18265c, Func Offset: 0x8fc
	// Line 1200, Address: 0x182698, Func Offset: 0x938
	// Line 1203, Address: 0x1826a4, Func Offset: 0x944
	// Line 1200, Address: 0x1826a8, Func Offset: 0x948
	// Line 1206, Address: 0x1826ac, Func Offset: 0x94c
	// Line 1208, Address: 0x1826bc, Func Offset: 0x95c
	// Line 1211, Address: 0x1826c0, Func Offset: 0x960
	// Line 1208, Address: 0x1826c4, Func Offset: 0x964
	// Line 1211, Address: 0x1826c8, Func Offset: 0x968
	// Line 1207, Address: 0x1826cc, Func Offset: 0x96c
	// Line 1208, Address: 0x1826d8, Func Offset: 0x978
	// Line 1210, Address: 0x182718, Func Offset: 0x9b8
	// Line 1211, Address: 0x182760, Func Offset: 0xa00
	// Line 1212, Address: 0x182768, Func Offset: 0xa08
	// Line 1213, Address: 0x182790, Func Offset: 0xa30
	// Line 1212, Address: 0x182798, Func Offset: 0xa38
	// Line 1213, Address: 0x1827a0, Func Offset: 0xa40
	// Line 1227, Address: 0x1827b8, Func Offset: 0xa58
	// Line 1216, Address: 0x1827bc, Func Offset: 0xa5c
	// Line 1236, Address: 0x1827c0, Func Offset: 0xa60
	// Line 1224, Address: 0x1827c8, Func Offset: 0xa68
	// Line 1213, Address: 0x1827cc, Func Offset: 0xa6c
	// Line 1239, Address: 0x1827d0, Func Offset: 0xa70
	// Line 1216, Address: 0x1827d4, Func Offset: 0xa74
	// Line 1227, Address: 0x1827d8, Func Offset: 0xa78
	// Line 1216, Address: 0x1827dc, Func Offset: 0xa7c
	// Line 1234, Address: 0x1827e0, Func Offset: 0xa80
	// Line 1236, Address: 0x1827e4, Func Offset: 0xa84
	// Line 1217, Address: 0x1827e8, Func Offset: 0xa88
	// Line 1224, Address: 0x1827ec, Func Offset: 0xa8c
	// Line 1219, Address: 0x1827f0, Func Offset: 0xa90
	// Line 1225, Address: 0x1827f4, Func Offset: 0xa94
	// Line 1223, Address: 0x1827fc, Func Offset: 0xa9c
	// Line 1239, Address: 0x182800, Func Offset: 0xaa0
	// Line 1217, Address: 0x182804, Func Offset: 0xaa4
	// Line 1223, Address: 0x18280c, Func Offset: 0xaac
	// Line 1217, Address: 0x182810, Func Offset: 0xab0
	// Line 1223, Address: 0x182814, Func Offset: 0xab4
	// Line 1217, Address: 0x182818, Func Offset: 0xab8
	// Line 1223, Address: 0x18281c, Func Offset: 0xabc
	// Line 1217, Address: 0x182820, Func Offset: 0xac0
	// Line 1223, Address: 0x182824, Func Offset: 0xac4
	// Line 1217, Address: 0x182828, Func Offset: 0xac8
	// Line 1223, Address: 0x18282c, Func Offset: 0xacc
	// Line 1227, Address: 0x182830, Func Offset: 0xad0
	// Line 1219, Address: 0x182834, Func Offset: 0xad4
	// Line 1232, Address: 0x182838, Func Offset: 0xad8
	// Line 1219, Address: 0x18283c, Func Offset: 0xadc
	// Line 1227, Address: 0x182840, Func Offset: 0xae0
	// Line 1219, Address: 0x182848, Func Offset: 0xae8
	// Line 1227, Address: 0x18284c, Func Offset: 0xaec
	// Line 1219, Address: 0x182854, Func Offset: 0xaf4
	// Line 1227, Address: 0x18285c, Func Offset: 0xafc
	// Line 1232, Address: 0x182864, Func Offset: 0xb04
	// Line 1234, Address: 0x182870, Func Offset: 0xb10
	// Line 1219, Address: 0x182878, Func Offset: 0xb18
	// Line 1233, Address: 0x18287c, Func Offset: 0xb1c
	// Line 1232, Address: 0x182884, Func Offset: 0xb24
	// Line 1236, Address: 0x18288c, Func Offset: 0xb2c
	// Line 1239, Address: 0x1828a8, Func Offset: 0xb48
	// Line 1241, Address: 0x1828d0, Func Offset: 0xb70
	// Line 1246, Address: 0x1828e0, Func Offset: 0xb80
	// Line 1242, Address: 0x1828e4, Func Offset: 0xb84
	// Line 1246, Address: 0x1828e8, Func Offset: 0xb88
	// Line 1243, Address: 0x1828ec, Func Offset: 0xb8c
	// Line 1242, Address: 0x1828f4, Func Offset: 0xb94
	// Line 1243, Address: 0x182900, Func Offset: 0xba0
	// Line 1245, Address: 0x182940, Func Offset: 0xbe0
	// Line 1246, Address: 0x182988, Func Offset: 0xc28
	// Line 1247, Address: 0x182990, Func Offset: 0xc30
	// Line 1248, Address: 0x1829b8, Func Offset: 0xc58
	// Line 1247, Address: 0x1829c0, Func Offset: 0xc60
	// Line 1248, Address: 0x1829c8, Func Offset: 0xc68
	// Line 1251, Address: 0x1829e0, Func Offset: 0xc80
	// Line 1256, Address: 0x1829e4, Func Offset: 0xc84
	// Line 1248, Address: 0x1829f0, Func Offset: 0xc90
	// Line 1251, Address: 0x1829f4, Func Offset: 0xc94
	// Line 1256, Address: 0x182a00, Func Offset: 0xca0
	// Line 1252, Address: 0x182a0c, Func Offset: 0xcac
	// Line 1256, Address: 0x182a10, Func Offset: 0xcb0
	// Line 1254, Address: 0x182a20, Func Offset: 0xcc0
	// Line 1256, Address: 0x182a24, Func Offset: 0xcc4
	// Line 1252, Address: 0x182a2c, Func Offset: 0xccc
	// Line 1254, Address: 0x182a44, Func Offset: 0xce4
	// Line 1256, Address: 0x182a58, Func Offset: 0xcf8
	// Line 1258, Address: 0x182a68, Func Offset: 0xd08
	// Line 1260, Address: 0x182a70, Func Offset: 0xd10
	// Line 1261, Address: 0x182a78, Func Offset: 0xd18
	// Line 1263, Address: 0x182a80, Func Offset: 0xd20
	// Line 1264, Address: 0x182a8c, Func Offset: 0xd2c
	// Line 1266, Address: 0x182a98, Func Offset: 0xd38
	// Line 1267, Address: 0x182aa0, Func Offset: 0xd40
	// Line 1269, Address: 0x182aa8, Func Offset: 0xd48
	// Line 1270, Address: 0x182ab0, Func Offset: 0xd50
	// Line 1273, Address: 0x182ab4, Func Offset: 0xd54
	// Line 1279, Address: 0x182acc, Func Offset: 0xd6c
	// Line 1281, Address: 0x182ae0, Func Offset: 0xd80
	// Line 1282, Address: 0x182aec, Func Offset: 0xd8c
	// Line 1284, Address: 0x182af4, Func Offset: 0xd94
	// Line 1282, Address: 0x182af8, Func Offset: 0xd98
	// Line 1284, Address: 0x182b04, Func Offset: 0xda4
	// Line 1285, Address: 0x182b14, Func Offset: 0xdb4
	// Line 1287, Address: 0x182b18, Func Offset: 0xdb8
	// Line 1288, Address: 0x182b20, Func Offset: 0xdc0
	// Line 1290, Address: 0x182b28, Func Offset: 0xdc8
	// Line 1291, Address: 0x182b30, Func Offset: 0xdd0
	// Line 1296, Address: 0x182b38, Func Offset: 0xdd8
	// Line 1294, Address: 0x182b3c, Func Offset: 0xddc
	// Line 1298, Address: 0x182b54, Func Offset: 0xdf4
	// Line 1294, Address: 0x182b58, Func Offset: 0xdf8
	// Line 1298, Address: 0x182b70, Func Offset: 0xe10
	// Line 1302, Address: 0x182b78, Func Offset: 0xe18
	// Line 1304, Address: 0x182b8c, Func Offset: 0xe2c
	// Line 1306, Address: 0x182bb0, Func Offset: 0xe50
	// Line 1307, Address: 0x182be4, Func Offset: 0xe84
	// Line 1306, Address: 0x182be8, Func Offset: 0xe88
	// Line 1307, Address: 0x182bec, Func Offset: 0xe8c
	// Line 1308, Address: 0x182bf4, Func Offset: 0xe94
	// Line 1310, Address: 0x182bfc, Func Offset: 0xe9c
	// Line 1313, Address: 0x182c08, Func Offset: 0xea8
	// Line 1310, Address: 0x182c0c, Func Offset: 0xeac
	// Line 1313, Address: 0x182c10, Func Offset: 0xeb0
	// Line 1310, Address: 0x182c14, Func Offset: 0xeb4
	// Line 1313, Address: 0x182c18, Func Offset: 0xeb8
	// Line 1310, Address: 0x182c20, Func Offset: 0xec0
	// Line 1313, Address: 0x182c24, Func Offset: 0xec4
	// Line 1308, Address: 0x182c2c, Func Offset: 0xecc
	// Line 1313, Address: 0x182c34, Func Offset: 0xed4
	// Line 1310, Address: 0x182c38, Func Offset: 0xed8
	// Line 1308, Address: 0x182c40, Func Offset: 0xee0
	// Line 1313, Address: 0x182c48, Func Offset: 0xee8
	// Line 1308, Address: 0x182c4c, Func Offset: 0xeec
	// Line 1313, Address: 0x182c54, Func Offset: 0xef4
	// Line 1310, Address: 0x182c58, Func Offset: 0xef8
	// Line 1314, Address: 0x182c64, Func Offset: 0xf04
	// Line 1315, Address: 0x182c6c, Func Offset: 0xf0c
	// Line 1317, Address: 0x182c88, Func Offset: 0xf28
	// Line 1318, Address: 0x182c98, Func Offset: 0xf38
	// Line 1320, Address: 0x182ca0, Func Offset: 0xf40
	// Line 1318, Address: 0x182ca4, Func Offset: 0xf44
	// Line 1320, Address: 0x182cb0, Func Offset: 0xf50
	// Line 1325, Address: 0x182cc4, Func Offset: 0xf64
	// Line 1320, Address: 0x182cc8, Func Offset: 0xf68
	// Line 1325, Address: 0x182ccc, Func Offset: 0xf6c
	// Line 1320, Address: 0x182cd0, Func Offset: 0xf70
	// Line 1325, Address: 0x182cd4, Func Offset: 0xf74
	// Line 1320, Address: 0x182cd8, Func Offset: 0xf78
	// Line 1325, Address: 0x182cdc, Func Offset: 0xf7c
	// Line 1320, Address: 0x182ce0, Func Offset: 0xf80
	// Line 1325, Address: 0x182ce4, Func Offset: 0xf84
	// Line 1320, Address: 0x182cec, Func Offset: 0xf8c
	// Line 1325, Address: 0x182cfc, Func Offset: 0xf9c
	// Line 1326, Address: 0x182d04, Func Offset: 0xfa4
	// Line 1327, Address: 0x182d0c, Func Offset: 0xfac
	// Line 1329, Address: 0x182d28, Func Offset: 0xfc8
	// Line 1330, Address: 0x182d38, Func Offset: 0xfd8
	// Line 1333, Address: 0x182d48, Func Offset: 0xfe8
	// Line 1330, Address: 0x182d4c, Func Offset: 0xfec
	// Line 1332, Address: 0x182d50, Func Offset: 0xff0
	// Line 1337, Address: 0x182d6c, Func Offset: 0x100c
	// Line 1339, Address: 0x182d70, Func Offset: 0x1010
	// Line 1341, Address: 0x182d90, Func Offset: 0x1030
	// Line 1342, Address: 0x182d98, Func Offset: 0x1038
	// Line 1345, Address: 0x182da0, Func Offset: 0x1040
	// Line 1346, Address: 0x182da8, Func Offset: 0x1048
	// Line 1348, Address: 0x182db0, Func Offset: 0x1050
	// Func End, Address: 0x182e00, Func Offset: 0x10a0
}

// zLightningFunc_Render__FP10zLightning
// Start address: 0x182e00
void zLightningFunc_Render(zLightning* l)
{
	float32 percent;
	float32 pstep;
	xVec3 val[2];
	float32 param[2];
	xFuncPiece* xI[2];
	xFuncPiece* yI[2];
	xFuncPiece* zI[2];
	int32 i;
	xVec3 drawAxis[2];
	RxObjSpace3DVertex* verts[2];
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
	// Line 852, Address: 0x182e00, Func Offset: 0
	// Line 873, Address: 0x182e04, Func Offset: 0x4
	// Line 852, Address: 0x182e08, Func Offset: 0x8
	// Line 873, Address: 0x182e0c, Func Offset: 0xc
	// Line 852, Address: 0x182e10, Func Offset: 0x10
	// Line 873, Address: 0x182e14, Func Offset: 0x14
	// Line 852, Address: 0x182e18, Func Offset: 0x18
	// Line 872, Address: 0x182e1c, Func Offset: 0x1c
	// Line 852, Address: 0x182e20, Func Offset: 0x20
	// Line 872, Address: 0x182e58, Func Offset: 0x58
	// Line 871, Address: 0x182e5c, Func Offset: 0x5c
	// Line 872, Address: 0x182e60, Func Offset: 0x60
	// Line 873, Address: 0x182e64, Func Offset: 0x64
	// Line 874, Address: 0x182e70, Func Offset: 0x70
	// Line 875, Address: 0x182e8c, Func Offset: 0x8c
	// Line 876, Address: 0x182e98, Func Offset: 0x98
	// Line 877, Address: 0x182e9c, Func Offset: 0x9c
	// Line 876, Address: 0x182ea0, Func Offset: 0xa0
	// Line 878, Address: 0x182ea4, Func Offset: 0xa4
	// Line 879, Address: 0x182eb0, Func Offset: 0xb0
	// Line 880, Address: 0x182eb4, Func Offset: 0xb4
	// Line 884, Address: 0x182eb8, Func Offset: 0xb8
	// Line 883, Address: 0x182ebc, Func Offset: 0xbc
	// Line 885, Address: 0x182ec0, Func Offset: 0xc0
	// Line 886, Address: 0x182ec4, Func Offset: 0xc4
	// Line 884, Address: 0x182ec8, Func Offset: 0xc8
	// Line 885, Address: 0x182ecc, Func Offset: 0xcc
	// Line 886, Address: 0x182ed0, Func Offset: 0xd0
	// Line 899, Address: 0x182ed4, Func Offset: 0xd4
	// Line 895, Address: 0x182ed8, Func Offset: 0xd8
	// Line 899, Address: 0x182edc, Func Offset: 0xdc
	// Line 895, Address: 0x182ee0, Func Offset: 0xe0
	// Line 883, Address: 0x182ee4, Func Offset: 0xe4
	// Line 897, Address: 0x182ee8, Func Offset: 0xe8
	// Line 884, Address: 0x182eec, Func Offset: 0xec
	// Line 899, Address: 0x182ef0, Func Offset: 0xf0
	// Line 885, Address: 0x182ef4, Func Offset: 0xf4
	// Line 886, Address: 0x182ef8, Func Offset: 0xf8
	// Line 895, Address: 0x182f00, Func Offset: 0x100
	// Line 886, Address: 0x182f04, Func Offset: 0x104
	// Line 896, Address: 0x182f08, Func Offset: 0x108
	// Line 886, Address: 0x182f0c, Func Offset: 0x10c
	// Line 896, Address: 0x182f18, Func Offset: 0x118
	// Line 899, Address: 0x182f24, Func Offset: 0x124
	// Line 900, Address: 0x182f34, Func Offset: 0x134
	// Line 903, Address: 0x182f38, Func Offset: 0x138
	// Line 900, Address: 0x182f3c, Func Offset: 0x13c
	// Line 903, Address: 0x182f40, Func Offset: 0x140
	// Line 900, Address: 0x182f44, Func Offset: 0x144
	// Line 901, Address: 0x182f4c, Func Offset: 0x14c
	// Line 902, Address: 0x182f5c, Func Offset: 0x15c
	// Line 903, Address: 0x182f68, Func Offset: 0x168
	// Line 904, Address: 0x182f78, Func Offset: 0x178
	// Line 905, Address: 0x182fc4, Func Offset: 0x1c4
	// Line 906, Address: 0x182fd0, Func Offset: 0x1d0
	// Line 907, Address: 0x182fe0, Func Offset: 0x1e0
	// Line 908, Address: 0x182fec, Func Offset: 0x1ec
	// Line 910, Address: 0x182ff0, Func Offset: 0x1f0
	// Line 914, Address: 0x182ff8, Func Offset: 0x1f8
	// Line 916, Address: 0x183004, Func Offset: 0x204
	// Line 922, Address: 0x183010, Func Offset: 0x210
	// Line 928, Address: 0x183014, Func Offset: 0x214
	// Line 922, Address: 0x183018, Func Offset: 0x218
	// Line 927, Address: 0x18305c, Func Offset: 0x25c
	// Line 928, Address: 0x1830a8, Func Offset: 0x2a8
	// Line 929, Address: 0x1830b4, Func Offset: 0x2b4
	// Line 930, Address: 0x1830c0, Func Offset: 0x2c0
	// Line 934, Address: 0x1830d8, Func Offset: 0x2d8
	// Line 933, Address: 0x1830dc, Func Offset: 0x2dc
	// Line 934, Address: 0x1830e0, Func Offset: 0x2e0
	// Line 938, Address: 0x183100, Func Offset: 0x300
	// Line 936, Address: 0x183104, Func Offset: 0x304
	// Line 938, Address: 0x183120, Func Offset: 0x320
	// Line 935, Address: 0x183124, Func Offset: 0x324
	// Line 936, Address: 0x183130, Func Offset: 0x330
	// Line 935, Address: 0x18313c, Func Offset: 0x33c
	// Line 936, Address: 0x183144, Func Offset: 0x344
	// Line 935, Address: 0x183148, Func Offset: 0x348
	// Line 936, Address: 0x18314c, Func Offset: 0x34c
	// Line 938, Address: 0x18315c, Func Offset: 0x35c
	// Line 940, Address: 0x183160, Func Offset: 0x360
	// Line 939, Address: 0x183164, Func Offset: 0x364
	// Line 940, Address: 0x18316c, Func Offset: 0x36c
	// Line 939, Address: 0x183170, Func Offset: 0x370
	// Line 940, Address: 0x183178, Func Offset: 0x378
	// Line 941, Address: 0x183184, Func Offset: 0x384
	// Line 942, Address: 0x183188, Func Offset: 0x388
	// Line 941, Address: 0x18318c, Func Offset: 0x38c
	// Line 942, Address: 0x1831b8, Func Offset: 0x3b8
	// Line 943, Address: 0x1831c4, Func Offset: 0x3c4
	// Line 944, Address: 0x1831c8, Func Offset: 0x3c8
	// Line 943, Address: 0x1831cc, Func Offset: 0x3cc
	// Line 944, Address: 0x1831d0, Func Offset: 0x3d0
	// Line 943, Address: 0x1831d4, Func Offset: 0x3d4
	// Line 945, Address: 0x1831d8, Func Offset: 0x3d8
	// Line 944, Address: 0x1831dc, Func Offset: 0x3dc
	// Line 945, Address: 0x1831e0, Func Offset: 0x3e0
	// Line 948, Address: 0x1831e8, Func Offset: 0x3e8
	// Line 949, Address: 0x1831ec, Func Offset: 0x3ec
	// Line 950, Address: 0x183200, Func Offset: 0x400
	// Line 951, Address: 0x183214, Func Offset: 0x414
	// Line 952, Address: 0x183224, Func Offset: 0x424
	// Line 951, Address: 0x183228, Func Offset: 0x428
	// Line 952, Address: 0x183230, Func Offset: 0x430
	// Line 951, Address: 0x183234, Func Offset: 0x434
	// Line 952, Address: 0x183244, Func Offset: 0x444
	// Line 955, Address: 0x18324c, Func Offset: 0x44c
	// Line 957, Address: 0x183250, Func Offset: 0x450
	// Line 959, Address: 0x183258, Func Offset: 0x458
	// Line 957, Address: 0x18325c, Func Offset: 0x45c
	// Line 956, Address: 0x183260, Func Offset: 0x460
	// Line 957, Address: 0x183264, Func Offset: 0x464
	// Line 959, Address: 0x18326c, Func Offset: 0x46c
	// Line 957, Address: 0x183270, Func Offset: 0x470
	// Line 959, Address: 0x183278, Func Offset: 0x478
	// Line 957, Address: 0x18327c, Func Offset: 0x47c
	// Line 958, Address: 0x183280, Func Offset: 0x480
	// Line 959, Address: 0x183288, Func Offset: 0x488
	// Line 958, Address: 0x18328c, Func Offset: 0x48c
	// Line 960, Address: 0x183294, Func Offset: 0x494
	// Line 959, Address: 0x183298, Func Offset: 0x498
	// Line 960, Address: 0x18329c, Func Offset: 0x49c
	// Line 959, Address: 0x1832a0, Func Offset: 0x4a0
	// Line 960, Address: 0x1832a4, Func Offset: 0x4a4
	// Line 959, Address: 0x1832ac, Func Offset: 0x4ac
	// Line 960, Address: 0x1832b4, Func Offset: 0x4b4
	// Line 959, Address: 0x1832c0, Func Offset: 0x4c0
	// Line 962, Address: 0x1832c8, Func Offset: 0x4c8
	// Line 960, Address: 0x1832cc, Func Offset: 0x4cc
	// Line 962, Address: 0x1832d0, Func Offset: 0x4d0
	// Line 960, Address: 0x1832d4, Func Offset: 0x4d4
	// Line 959, Address: 0x1832d8, Func Offset: 0x4d8
	// Line 960, Address: 0x1832dc, Func Offset: 0x4dc
	// Line 959, Address: 0x1832e0, Func Offset: 0x4e0
	// Line 960, Address: 0x1832e4, Func Offset: 0x4e4
	// Line 962, Address: 0x1832ec, Func Offset: 0x4ec
	// Line 963, Address: 0x1832f4, Func Offset: 0x4f4
	// Line 964, Address: 0x1832fc, Func Offset: 0x4fc
	// Line 965, Address: 0x183310, Func Offset: 0x510
	// Line 969, Address: 0x18333c, Func Offset: 0x53c
	// Line 974, Address: 0x183340, Func Offset: 0x540
	// Line 976, Address: 0x183350, Func Offset: 0x550
	// Line 983, Address: 0x183360, Func Offset: 0x560
	// Line 989, Address: 0x183364, Func Offset: 0x564
	// Line 983, Address: 0x183368, Func Offset: 0x568
	// Line 984, Address: 0x183374, Func Offset: 0x574
	// Line 989, Address: 0x18337c, Func Offset: 0x57c
	// Line 983, Address: 0x183380, Func Offset: 0x580
	// Line 978, Address: 0x183384, Func Offset: 0x584
	// Line 990, Address: 0x183388, Func Offset: 0x588
	// Line 978, Address: 0x18338c, Func Offset: 0x58c
	// Line 990, Address: 0x183390, Func Offset: 0x590
	// Line 978, Address: 0x183394, Func Offset: 0x594
	// Line 983, Address: 0x1833a0, Func Offset: 0x5a0
	// Line 978, Address: 0x1833a4, Func Offset: 0x5a4
	// Line 983, Address: 0x1833c0, Func Offset: 0x5c0
	// Line 978, Address: 0x1833c4, Func Offset: 0x5c4
	// Line 983, Address: 0x1833c8, Func Offset: 0x5c8
	// Line 984, Address: 0x183414, Func Offset: 0x614
	// Line 989, Address: 0x183418, Func Offset: 0x618
	// Line 984, Address: 0x18341c, Func Offset: 0x61c
	// Line 989, Address: 0x183430, Func Offset: 0x630
	// Line 984, Address: 0x183438, Func Offset: 0x638
	// Line 989, Address: 0x183454, Func Offset: 0x654
	// Line 984, Address: 0x183458, Func Offset: 0x658
	// Line 989, Address: 0x18345c, Func Offset: 0x65c
	// Line 990, Address: 0x1834a8, Func Offset: 0x6a8
	// Line 991, Address: 0x1834b0, Func Offset: 0x6b0
	// Line 995, Address: 0x1834b4, Func Offset: 0x6b4
	// Line 992, Address: 0x1834b8, Func Offset: 0x6b8
	// Line 990, Address: 0x1834bc, Func Offset: 0x6bc
	// Line 991, Address: 0x1834c0, Func Offset: 0x6c0
	// Line 992, Address: 0x1834c8, Func Offset: 0x6c8
	// Line 995, Address: 0x1834d0, Func Offset: 0x6d0
	// Line 996, Address: 0x1834d8, Func Offset: 0x6d8
	// Line 1000, Address: 0x1834f0, Func Offset: 0x6f0
	// Line 1001, Address: 0x1834f8, Func Offset: 0x6f8
	// Line 1003, Address: 0x183500, Func Offset: 0x700
	// Line 1007, Address: 0x18351c, Func Offset: 0x71c
	// Line 1008, Address: 0x183524, Func Offset: 0x724
	// Line 1009, Address: 0x18352c, Func Offset: 0x72c
	// Func End, Address: 0x183594, Func Offset: 0x794
}

// zLightningUpdate__Ff
// Start address: 0x1835a0
void zLightningUpdate(float32 seconds)
{
	int32 i;
	int32 picker;
	int32 j;
	float32 prevEnd;
	// Line 710, Address: 0x1835a0, Func Offset: 0
	// Line 713, Address: 0x1835c8, Func Offset: 0x28
	// Line 710, Address: 0x1835cc, Func Offset: 0x2c
	// Line 713, Address: 0x1835d0, Func Offset: 0x30
	// Line 710, Address: 0x1835d4, Func Offset: 0x34
	// Line 713, Address: 0x1835d8, Func Offset: 0x38
	// Line 715, Address: 0x1835e4, Func Offset: 0x44
	// Line 716, Address: 0x1835fc, Func Offset: 0x5c
	// Line 717, Address: 0x183604, Func Offset: 0x64
	// Line 719, Address: 0x183618, Func Offset: 0x78
	// Line 720, Address: 0x18361c, Func Offset: 0x7c
	// Line 719, Address: 0x183620, Func Offset: 0x80
	// Line 720, Address: 0x183624, Func Offset: 0x84
	// Line 719, Address: 0x18362c, Func Offset: 0x8c
	// Line 720, Address: 0x183634, Func Offset: 0x94
	// Line 721, Address: 0x183640, Func Offset: 0xa0
	// Line 724, Address: 0x183648, Func Offset: 0xa8
	// Line 723, Address: 0x18364c, Func Offset: 0xac
	// Line 724, Address: 0x183654, Func Offset: 0xb4
	// Line 723, Address: 0x18365c, Func Offset: 0xbc
	// Line 724, Address: 0x183664, Func Offset: 0xc4
	// Line 725, Address: 0x183670, Func Offset: 0xd0
	// Line 726, Address: 0x183694, Func Offset: 0xf4
	// Line 727, Address: 0x1836a8, Func Offset: 0x108
	// Line 729, Address: 0x1836b8, Func Offset: 0x118
	// Line 733, Address: 0x183754, Func Offset: 0x1b4
	// Line 737, Address: 0x1837f0, Func Offset: 0x250
	// Line 741, Address: 0x18388c, Func Offset: 0x2ec
	// Line 743, Address: 0x1838a0, Func Offset: 0x300
	// Line 741, Address: 0x1838a4, Func Offset: 0x304
	// Line 743, Address: 0x1838b4, Func Offset: 0x314
	// Line 741, Address: 0x1838b8, Func Offset: 0x318
	// Line 743, Address: 0x1838cc, Func Offset: 0x32c
	// Line 747, Address: 0x183900, Func Offset: 0x360
	// Line 749, Address: 0x183908, Func Offset: 0x368
	// Line 750, Address: 0x18390c, Func Offset: 0x36c
	// Line 751, Address: 0x183918, Func Offset: 0x378
	// Line 752, Address: 0x18391c, Func Offset: 0x37c
	// Line 755, Address: 0x183944, Func Offset: 0x3a4
	// Line 752, Address: 0x183948, Func Offset: 0x3a8
	// Line 755, Address: 0x18394c, Func Offset: 0x3ac
	// Line 760, Address: 0x183960, Func Offset: 0x3c0
	// Line 765, Address: 0x183978, Func Offset: 0x3d8
	// Line 770, Address: 0x183990, Func Offset: 0x3f0
	// Line 765, Address: 0x18399c, Func Offset: 0x3fc
	// Line 770, Address: 0x1839ac, Func Offset: 0x40c
	// Line 772, Address: 0x1839b8, Func Offset: 0x418
	// Line 773, Address: 0x1839bc, Func Offset: 0x41c
	// Line 774, Address: 0x1839c0, Func Offset: 0x420
	// Func End, Address: 0x1839f4, Func Offset: 0x454
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
	// Line 567, Address: 0x183a00, Func Offset: 0
	// Line 571, Address: 0x183a3c, Func Offset: 0x3c
	// Line 573, Address: 0x183a4c, Func Offset: 0x4c
	// Line 576, Address: 0x183a58, Func Offset: 0x58
	// Line 578, Address: 0x183a70, Func Offset: 0x70
	// Line 580, Address: 0x183a80, Func Offset: 0x80
	// Line 581, Address: 0x183a84, Func Offset: 0x84
	// Line 582, Address: 0x183a90, Func Offset: 0x90
	// Line 583, Address: 0x183a98, Func Offset: 0x98
	// Line 584, Address: 0x183aa4, Func Offset: 0xa4
	// Line 583, Address: 0x183aa8, Func Offset: 0xa8
	// Line 586, Address: 0x183aac, Func Offset: 0xac
	// Line 588, Address: 0x183ab8, Func Offset: 0xb8
	// Line 591, Address: 0x183ac8, Func Offset: 0xc8
	// Line 590, Address: 0x183acc, Func Offset: 0xcc
	// Line 592, Address: 0x183ad0, Func Offset: 0xd0
	// Line 591, Address: 0x183ad4, Func Offset: 0xd4
	// Line 592, Address: 0x183ad8, Func Offset: 0xd8
	// Line 590, Address: 0x183adc, Func Offset: 0xdc
	// Line 592, Address: 0x183ae0, Func Offset: 0xe0
	// Line 594, Address: 0x183af8, Func Offset: 0xf8
	// Line 596, Address: 0x183b10, Func Offset: 0x110
	// Line 598, Address: 0x183b28, Func Offset: 0x128
	// Line 601, Address: 0x183b44, Func Offset: 0x144
	// Line 603, Address: 0x183b54, Func Offset: 0x154
	// Line 605, Address: 0x183b5c, Func Offset: 0x15c
	// Line 603, Address: 0x183b64, Func Offset: 0x164
	// Line 605, Address: 0x183b6c, Func Offset: 0x16c
	// Line 603, Address: 0x183b70, Func Offset: 0x170
	// Line 605, Address: 0x183b78, Func Offset: 0x178
	// Line 609, Address: 0x183bcc, Func Offset: 0x1cc
	// Line 610, Address: 0x183be8, Func Offset: 0x1e8
	// Line 611, Address: 0x183bf0, Func Offset: 0x1f0
	// Line 615, Address: 0x183bfc, Func Offset: 0x1fc
	// Line 616, Address: 0x183c00, Func Offset: 0x200
	// Line 615, Address: 0x183c04, Func Offset: 0x204
	// Line 616, Address: 0x183c08, Func Offset: 0x208
	// Line 615, Address: 0x183c0c, Func Offset: 0x20c
	// Line 616, Address: 0x183c48, Func Offset: 0x248
	// Line 618, Address: 0x183c50, Func Offset: 0x250
	// Line 619, Address: 0x183c54, Func Offset: 0x254
	// Line 620, Address: 0x183c5c, Func Offset: 0x25c
	// Line 618, Address: 0x183c64, Func Offset: 0x264
	// Line 620, Address: 0x183c68, Func Offset: 0x268
	// Line 624, Address: 0x183c98, Func Offset: 0x298
	// Line 626, Address: 0x183cd8, Func Offset: 0x2d8
	// Line 629, Address: 0x183cdc, Func Offset: 0x2dc
	// Line 626, Address: 0x183ce4, Func Offset: 0x2e4
	// Line 629, Address: 0x183cf8, Func Offset: 0x2f8
	// Line 630, Address: 0x183cfc, Func Offset: 0x2fc
	// Line 632, Address: 0x183d08, Func Offset: 0x308
	// Line 635, Address: 0x183d10, Func Offset: 0x310
	// Line 633, Address: 0x183d14, Func Offset: 0x314
	// Line 632, Address: 0x183d20, Func Offset: 0x320
	// Line 633, Address: 0x183d24, Func Offset: 0x324
	// Line 632, Address: 0x183d28, Func Offset: 0x328
	// Line 633, Address: 0x183d2c, Func Offset: 0x32c
	// Line 632, Address: 0x183d30, Func Offset: 0x330
	// Line 633, Address: 0x183d38, Func Offset: 0x338
	// Line 635, Address: 0x183d40, Func Offset: 0x340
	// Line 636, Address: 0x183d48, Func Offset: 0x348
	// Line 637, Address: 0x183d74, Func Offset: 0x374
	// Line 639, Address: 0x183d78, Func Offset: 0x378
	// Line 642, Address: 0x183d88, Func Offset: 0x388
	// Line 644, Address: 0x183d8c, Func Offset: 0x38c
	// Line 642, Address: 0x183d90, Func Offset: 0x390
	// Line 644, Address: 0x183d94, Func Offset: 0x394
	// Line 642, Address: 0x183d98, Func Offset: 0x398
	// Line 644, Address: 0x183da0, Func Offset: 0x3a0
	// Line 645, Address: 0x183dac, Func Offset: 0x3ac
	// Line 646, Address: 0x183dbc, Func Offset: 0x3bc
	// Line 647, Address: 0x183de0, Func Offset: 0x3e0
	// Line 650, Address: 0x183df0, Func Offset: 0x3f0
	// Line 651, Address: 0x183e08, Func Offset: 0x408
	// Line 652, Address: 0x183e20, Func Offset: 0x420
	// Line 654, Address: 0x183e3c, Func Offset: 0x43c
	// Line 656, Address: 0x183e6c, Func Offset: 0x46c
	// Line 657, Address: 0x183e7c, Func Offset: 0x47c
	// Line 661, Address: 0x183ec0, Func Offset: 0x4c0
	// Line 657, Address: 0x183ec8, Func Offset: 0x4c8
	// Line 661, Address: 0x183ecc, Func Offset: 0x4cc
	// Line 662, Address: 0x183edc, Func Offset: 0x4dc
	// Line 667, Address: 0x183ee0, Func Offset: 0x4e0
	// Line 669, Address: 0x183efc, Func Offset: 0x4fc
	// Line 673, Address: 0x183f10, Func Offset: 0x510
	// Line 674, Address: 0x183f14, Func Offset: 0x514
	// Line 675, Address: 0x183f3c, Func Offset: 0x53c
	// Line 677, Address: 0x183f54, Func Offset: 0x554
	// Line 689, Address: 0x183f5c, Func Offset: 0x55c
	// Line 692, Address: 0x183f6c, Func Offset: 0x56c
	// Line 694, Address: 0x183f78, Func Offset: 0x578
	// Line 697, Address: 0x183f7c, Func Offset: 0x57c
	// Line 701, Address: 0x183f84, Func Offset: 0x584
	// Line 696, Address: 0x183f88, Func Offset: 0x588
	// Line 695, Address: 0x183f8c, Func Offset: 0x58c
	// Line 696, Address: 0x183fa8, Func Offset: 0x5a8
	// Line 698, Address: 0x183fb8, Func Offset: 0x5b8
	// Line 697, Address: 0x183fbc, Func Offset: 0x5bc
	// Line 698, Address: 0x183fc8, Func Offset: 0x5c8
	// Line 699, Address: 0x183fd8, Func Offset: 0x5d8
	// Line 700, Address: 0x183fe8, Func Offset: 0x5e8
	// Line 701, Address: 0x183ff0, Func Offset: 0x5f0
	// Line 700, Address: 0x183ff4, Func Offset: 0x5f4
	// Line 701, Address: 0x183ff8, Func Offset: 0x5f8
	// Line 702, Address: 0x184000, Func Offset: 0x600
	// Line 704, Address: 0x184010, Func Offset: 0x610
	// Func End, Address: 0x18404c, Func Offset: 0x64c
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
	// Line 364, Address: 0x184050, Func Offset: 0
	// Line 368, Address: 0x184054, Func Offset: 0x4
	// Line 364, Address: 0x184058, Func Offset: 0x8
	// Line 368, Address: 0x18405c, Func Offset: 0xc
	// Line 364, Address: 0x184060, Func Offset: 0x10
	// Line 368, Address: 0x184078, Func Offset: 0x28
	// Line 364, Address: 0x18407c, Func Offset: 0x2c
	// Line 368, Address: 0x18408c, Func Offset: 0x3c
	// Line 369, Address: 0x184110, Func Offset: 0xc0
	// Line 372, Address: 0x184120, Func Offset: 0xd0
	// Line 377, Address: 0x184124, Func Offset: 0xd4
	// Line 372, Address: 0x184128, Func Offset: 0xd8
	// Line 373, Address: 0x18412c, Func Offset: 0xdc
	// Line 375, Address: 0x184138, Func Offset: 0xe8
	// Line 377, Address: 0x184158, Func Offset: 0x108
	// Line 378, Address: 0x184164, Func Offset: 0x114
	// Line 387, Address: 0x184168, Func Offset: 0x118
	// Line 392, Address: 0x18416c, Func Offset: 0x11c
	// Line 378, Address: 0x184170, Func Offset: 0x120
	// Line 379, Address: 0x184174, Func Offset: 0x124
	// Line 380, Address: 0x18417c, Func Offset: 0x12c
	// Line 383, Address: 0x184184, Func Offset: 0x134
	// Line 392, Address: 0x18418c, Func Offset: 0x13c
	// Line 398, Address: 0x1841b0, Func Offset: 0x160
	// Line 399, Address: 0x1841b8, Func Offset: 0x168
	// Line 400, Address: 0x1841bc, Func Offset: 0x16c
	// Line 402, Address: 0x1841c4, Func Offset: 0x174
	// Line 404, Address: 0x1841c8, Func Offset: 0x178
	// Line 405, Address: 0x1841d0, Func Offset: 0x180
	// Line 406, Address: 0x1841d8, Func Offset: 0x188
	// Line 415, Address: 0x1841e0, Func Offset: 0x190
	// Line 416, Address: 0x1841f0, Func Offset: 0x1a0
	// Line 417, Address: 0x1841f8, Func Offset: 0x1a8
	// Line 419, Address: 0x184200, Func Offset: 0x1b0
	// Line 421, Address: 0x184258, Func Offset: 0x208
	// Line 422, Address: 0x1842a4, Func Offset: 0x254
	// Line 423, Address: 0x1842b0, Func Offset: 0x260
	// Line 425, Address: 0x1842f0, Func Offset: 0x2a0
	// Line 426, Address: 0x184300, Func Offset: 0x2b0
	// Line 427, Address: 0x184338, Func Offset: 0x2e8
	// Line 428, Address: 0x184344, Func Offset: 0x2f4
	// Line 434, Address: 0x184350, Func Offset: 0x300
	// Line 431, Address: 0x184354, Func Offset: 0x304
	// Line 434, Address: 0x184358, Func Offset: 0x308
	// Line 431, Address: 0x18435c, Func Offset: 0x30c
	// Line 432, Address: 0x184370, Func Offset: 0x320
	// Line 433, Address: 0x18437c, Func Offset: 0x32c
	// Line 434, Address: 0x18438c, Func Offset: 0x33c
	// Line 435, Address: 0x184394, Func Offset: 0x344
	// Line 440, Address: 0x184398, Func Offset: 0x348
	// Line 434, Address: 0x18439c, Func Offset: 0x34c
	// Line 441, Address: 0x1843a0, Func Offset: 0x350
	// Line 434, Address: 0x1843a4, Func Offset: 0x354
	// Line 440, Address: 0x1843ac, Func Offset: 0x35c
	// Line 434, Address: 0x1843b0, Func Offset: 0x360
	// Line 437, Address: 0x1843b4, Func Offset: 0x364
	// Line 439, Address: 0x1843b8, Func Offset: 0x368
	// Line 437, Address: 0x1843bc, Func Offset: 0x36c
	// Line 439, Address: 0x1843c4, Func Offset: 0x374
	// Line 437, Address: 0x1843c8, Func Offset: 0x378
	// Line 440, Address: 0x1843dc, Func Offset: 0x38c
	// Line 441, Address: 0x1843f8, Func Offset: 0x3a8
	// Line 475, Address: 0x184418, Func Offset: 0x3c8
	// Line 476, Address: 0x18441c, Func Offset: 0x3cc
	// Line 475, Address: 0x184420, Func Offset: 0x3d0
	// Line 467, Address: 0x184424, Func Offset: 0x3d4
	// Line 476, Address: 0x184428, Func Offset: 0x3d8
	// Line 479, Address: 0x18442c, Func Offset: 0x3dc
	// Line 467, Address: 0x184434, Func Offset: 0x3e4
	// Line 513, Address: 0x184438, Func Offset: 0x3e8
	// Line 454, Address: 0x18443c, Func Offset: 0x3ec
	// Line 512, Address: 0x184444, Func Offset: 0x3f4
	// Line 443, Address: 0x18444c, Func Offset: 0x3fc
	// Line 441, Address: 0x184454, Func Offset: 0x404
	// Line 443, Address: 0x184458, Func Offset: 0x408
	// Line 444, Address: 0x184464, Func Offset: 0x414
	// Line 445, Address: 0x184474, Func Offset: 0x424
	// Line 446, Address: 0x184484, Func Offset: 0x434
	// Line 447, Address: 0x184488, Func Offset: 0x438
	// Line 448, Address: 0x184498, Func Offset: 0x448
	// Line 449, Address: 0x1844a4, Func Offset: 0x454
	// Line 448, Address: 0x1844a8, Func Offset: 0x458
	// Line 452, Address: 0x1844ac, Func Offset: 0x45c
	// Line 454, Address: 0x1844c0, Func Offset: 0x470
	// Line 456, Address: 0x1844d0, Func Offset: 0x480
	// Line 458, Address: 0x1844e0, Func Offset: 0x490
	// Line 459, Address: 0x1844f0, Func Offset: 0x4a0
	// Line 460, Address: 0x184520, Func Offset: 0x4d0
	// Line 461, Address: 0x184548, Func Offset: 0x4f8
	// Line 464, Address: 0x184550, Func Offset: 0x500
	// Line 467, Address: 0x1845a0, Func Offset: 0x550
	// Line 472, Address: 0x1845c4, Func Offset: 0x574
	// Line 473, Address: 0x1845c8, Func Offset: 0x578
	// Line 474, Address: 0x1845d0, Func Offset: 0x580
	// Line 475, Address: 0x1845e0, Func Offset: 0x590
	// Line 476, Address: 0x1845e8, Func Offset: 0x598
	// Line 475, Address: 0x1845ec, Func Offset: 0x59c
	// Line 476, Address: 0x1845f0, Func Offset: 0x5a0
	// Line 477, Address: 0x1845f8, Func Offset: 0x5a8
	// Line 478, Address: 0x184608, Func Offset: 0x5b8
	// Line 479, Address: 0x184610, Func Offset: 0x5c0
	// Line 478, Address: 0x184614, Func Offset: 0x5c4
	// Line 479, Address: 0x184618, Func Offset: 0x5c8
	// Line 480, Address: 0x184620, Func Offset: 0x5d0
	// Line 481, Address: 0x184624, Func Offset: 0x5d4
	// Line 483, Address: 0x18462c, Func Offset: 0x5dc
	// Line 485, Address: 0x184630, Func Offset: 0x5e0
	// Line 486, Address: 0x184648, Func Offset: 0x5f8
	// Line 487, Address: 0x184650, Func Offset: 0x600
	// Line 489, Address: 0x18465c, Func Offset: 0x60c
	// Line 500, Address: 0x184668, Func Offset: 0x618
	// Line 490, Address: 0x18466c, Func Offset: 0x61c
	// Line 492, Address: 0x184678, Func Offset: 0x628
	// Line 495, Address: 0x1846b8, Func Offset: 0x668
	// Line 498, Address: 0x1846fc, Func Offset: 0x6ac
	// Line 508, Address: 0x184734, Func Offset: 0x6e4
	// Line 510, Address: 0x184738, Func Offset: 0x6e8
	// Line 512, Address: 0x184748, Func Offset: 0x6f8
	// Line 513, Address: 0x184750, Func Offset: 0x700
	// Line 514, Address: 0x18475c, Func Offset: 0x70c
	// Line 522, Address: 0x1847a0, Func Offset: 0x750
	// Line 521, Address: 0x1847a4, Func Offset: 0x754
	// Line 522, Address: 0x1847ac, Func Offset: 0x75c
	// Line 521, Address: 0x1847b0, Func Offset: 0x760
	// Line 522, Address: 0x1847cc, Func Offset: 0x77c
	// Line 524, Address: 0x1847dc, Func Offset: 0x78c
	// Line 526, Address: 0x1847e8, Func Offset: 0x798
	// Line 529, Address: 0x1847f8, Func Offset: 0x7a8
	// Line 530, Address: 0x184810, Func Offset: 0x7c0
	// Line 531, Address: 0x18481c, Func Offset: 0x7cc
	// Line 530, Address: 0x184820, Func Offset: 0x7d0
	// Line 532, Address: 0x18482c, Func Offset: 0x7dc
	// Line 530, Address: 0x184830, Func Offset: 0x7e0
	// Line 531, Address: 0x184834, Func Offset: 0x7e4
	// Line 532, Address: 0x184838, Func Offset: 0x7e8
	// Line 533, Address: 0x18483c, Func Offset: 0x7ec
	// Line 534, Address: 0x184844, Func Offset: 0x7f4
	// Line 535, Address: 0x18484c, Func Offset: 0x7fc
	// Line 537, Address: 0x184850, Func Offset: 0x800
	// Line 539, Address: 0x184860, Func Offset: 0x810
	// Line 540, Address: 0x184868, Func Offset: 0x818
	// Line 541, Address: 0x184870, Func Offset: 0x820
	// Line 542, Address: 0x18487c, Func Offset: 0x82c
	// Line 546, Address: 0x184880, Func Offset: 0x830
	// Line 547, Address: 0x184888, Func Offset: 0x838
	// Func End, Address: 0x1848b8, Func Offset: 0x868
}

// zLightningInit__Fv
// Start address: 0x1848c0
void zLightningInit()
{
	int32 i;
	RwTexture* tex;
	int32 j;
	float32 prevEnd;
	// Line 115, Address: 0x1848c0, Func Offset: 0
	// Line 118, Address: 0x1848c4, Func Offset: 0x4
	// Line 115, Address: 0x1848c8, Func Offset: 0x8
	// Line 118, Address: 0x1848cc, Func Offset: 0xc
	// Line 115, Address: 0x1848d0, Func Offset: 0x10
	// Line 118, Address: 0x1848d4, Func Offset: 0x14
	// Line 115, Address: 0x1848d8, Func Offset: 0x18
	// Line 120, Address: 0x1848f8, Func Offset: 0x38
	// Line 127, Address: 0x184924, Func Offset: 0x64
	// Line 131, Address: 0x184938, Func Offset: 0x78
	// Line 132, Address: 0x184950, Func Offset: 0x90
	// Line 134, Address: 0x184958, Func Offset: 0x98
	// Line 140, Address: 0x184960, Func Offset: 0xa0
	// Line 141, Address: 0x18497c, Func Offset: 0xbc
	// Line 142, Address: 0x184980, Func Offset: 0xc0
	// Line 143, Address: 0x184984, Func Offset: 0xc4
	// Line 141, Address: 0x184988, Func Offset: 0xc8
	// Line 142, Address: 0x18498c, Func Offset: 0xcc
	// Line 143, Address: 0x184990, Func Offset: 0xd0
	// Line 140, Address: 0x184998, Func Offset: 0xd8
	// Line 141, Address: 0x1849a4, Func Offset: 0xe4
	// Line 142, Address: 0x1849a8, Func Offset: 0xe8
	// Line 141, Address: 0x1849ac, Func Offset: 0xec
	// Line 142, Address: 0x1849b0, Func Offset: 0xf0
	// Line 143, Address: 0x1849b4, Func Offset: 0xf4
	// Line 146, Address: 0x184a08, Func Offset: 0x148
	// Line 150, Address: 0x184a0c, Func Offset: 0x14c
	// Line 146, Address: 0x184a10, Func Offset: 0x150
	// Line 150, Address: 0x184a14, Func Offset: 0x154
	// Line 147, Address: 0x184a18, Func Offset: 0x158
	// Line 150, Address: 0x184a1c, Func Offset: 0x15c
	// Line 147, Address: 0x184a20, Func Offset: 0x160
	// Line 150, Address: 0x184a24, Func Offset: 0x164
	// Line 148, Address: 0x184a28, Func Offset: 0x168
	// Line 150, Address: 0x184a2c, Func Offset: 0x16c
	// Line 148, Address: 0x184a30, Func Offset: 0x170
	// Line 150, Address: 0x184a34, Func Offset: 0x174
	// Line 151, Address: 0x184a40, Func Offset: 0x180
	// Line 155, Address: 0x184aac, Func Offset: 0x1ec
	// Line 159, Address: 0x184b30, Func Offset: 0x270
	// Line 163, Address: 0x184bb4, Func Offset: 0x2f4
	// Line 164, Address: 0x184bdc, Func Offset: 0x31c
	// Line 163, Address: 0x184be4, Func Offset: 0x324
	// Line 164, Address: 0x184bfc, Func Offset: 0x33c
	// Line 167, Address: 0x184c04, Func Offset: 0x344
	// Line 165, Address: 0x184c18, Func Offset: 0x358
	// Line 167, Address: 0x184c20, Func Offset: 0x360
	// Line 165, Address: 0x184c24, Func Offset: 0x364
	// Line 167, Address: 0x184c28, Func Offset: 0x368
	// Line 170, Address: 0x184c40, Func Offset: 0x380
	// Line 172, Address: 0x184c48, Func Offset: 0x388
	// Line 173, Address: 0x184c4c, Func Offset: 0x38c
	// Line 174, Address: 0x184c58, Func Offset: 0x398
	// Line 175, Address: 0x184c5c, Func Offset: 0x39c
	// Line 177, Address: 0x184c84, Func Offset: 0x3c4
	// Line 175, Address: 0x184c88, Func Offset: 0x3c8
	// Line 177, Address: 0x184c8c, Func Offset: 0x3cc
	// Line 182, Address: 0x184ca0, Func Offset: 0x3e0
	// Line 187, Address: 0x184cb8, Func Offset: 0x3f8
	// Line 192, Address: 0x184cd0, Func Offset: 0x410
	// Line 187, Address: 0x184cd4, Func Offset: 0x414
	// Line 192, Address: 0x184cd8, Func Offset: 0x418
	// Line 187, Address: 0x184cdc, Func Offset: 0x41c
	// Line 192, Address: 0x184ce8, Func Offset: 0x428
	// Line 196, Address: 0x184cf0, Func Offset: 0x430
	// Line 203, Address: 0x184cfc, Func Offset: 0x43c
	// Line 197, Address: 0x184d00, Func Offset: 0x440
	// Line 202, Address: 0x184d0c, Func Offset: 0x44c
	// Line 203, Address: 0x184d18, Func Offset: 0x458
	// Line 194, Address: 0x184d28, Func Offset: 0x468
	// Line 203, Address: 0x184d2c, Func Offset: 0x46c
	// Line 204, Address: 0x184d30, Func Offset: 0x470
	// Line 205, Address: 0x184d40, Func Offset: 0x480
	// Line 204, Address: 0x184d44, Func Offset: 0x484
	// Line 207, Address: 0x184d48, Func Offset: 0x488
	// Line 209, Address: 0x184d54, Func Offset: 0x494
	// Line 203, Address: 0x184d60, Func Offset: 0x4a0
	// Line 210, Address: 0x184d64, Func Offset: 0x4a4
	// Line 203, Address: 0x184d68, Func Offset: 0x4a8
	// Line 210, Address: 0x184d6c, Func Offset: 0x4ac
	// Line 211, Address: 0x184d78, Func Offset: 0x4b8
	// Line 212, Address: 0x184d84, Func Offset: 0x4c4
	// Line 204, Address: 0x184d90, Func Offset: 0x4d0
	// Line 213, Address: 0x184d94, Func Offset: 0x4d4
	// Line 204, Address: 0x184d98, Func Offset: 0x4d8
	// Line 213, Address: 0x184d9c, Func Offset: 0x4dc
	// Line 214, Address: 0x184da8, Func Offset: 0x4e8
	// Line 215, Address: 0x184db4, Func Offset: 0x4f4
	// Line 216, Address: 0x184dc0, Func Offset: 0x500
	// Line 205, Address: 0x184dcc, Func Offset: 0x50c
	// Line 217, Address: 0x184dd0, Func Offset: 0x510
	// Line 205, Address: 0x184dd4, Func Offset: 0x514
	// Line 217, Address: 0x184dd8, Func Offset: 0x518
	// Line 219, Address: 0x184de4, Func Offset: 0x524
	// Line 220, Address: 0x184df4, Func Offset: 0x534
	// Line 206, Address: 0x184e04, Func Offset: 0x544
	// Line 208, Address: 0x184e0c, Func Offset: 0x54c
	// Line 218, Address: 0x184e14, Func Offset: 0x554
	// Line 332, Address: 0x184e1c, Func Offset: 0x55c
	// Func End, Address: 0x184e4c, Func Offset: 0x58c
}

// lightningTweakStart__FRC10tweak_info
// Start address: 0x184e50
void lightningTweakStart()
{
	xVec3 s;
	xVec3 e;
	// Line 104, Address: 0x184e50, Func Offset: 0
	// Line 110, Address: 0x184e54, Func Offset: 0x4
	// Line 104, Address: 0x184e58, Func Offset: 0x8
	// Line 108, Address: 0x184e64, Func Offset: 0x14
	// Line 109, Address: 0x184e68, Func Offset: 0x18
	// Line 110, Address: 0x184e6c, Func Offset: 0x1c
	// Line 106, Address: 0x184e70, Func Offset: 0x20
	// Line 107, Address: 0x184ea0, Func Offset: 0x50
	// Line 106, Address: 0x184ea4, Func Offset: 0x54
	// Line 107, Address: 0x184eac, Func Offset: 0x5c
	// Line 106, Address: 0x184eb0, Func Offset: 0x60
	// Line 107, Address: 0x184eb4, Func Offset: 0x64
	// Line 106, Address: 0x184eb8, Func Offset: 0x68
	// Line 107, Address: 0x184ebc, Func Offset: 0x6c
	// Line 108, Address: 0x184ed4, Func Offset: 0x84
	// Line 107, Address: 0x184ed8, Func Offset: 0x88
	// Line 108, Address: 0x184ef0, Func Offset: 0xa0
	// Line 109, Address: 0x184ef4, Func Offset: 0xa4
	// Line 110, Address: 0x184efc, Func Offset: 0xac
	// Line 111, Address: 0x184f04, Func Offset: 0xb4
	// Func End, Address: 0x184f10, Func Offset: 0xc0
}

// lightningTweakChangeType__FRC10tweak_info
// Start address: 0x184f10
void lightningTweakChangeType()
{
	// Line 102, Address: 0x184f10, Func Offset: 0
	// Func End, Address: 0x184f18, Func Offset: 0x8
}

