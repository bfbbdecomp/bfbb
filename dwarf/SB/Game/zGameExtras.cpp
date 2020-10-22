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
typedef struct EGGData;
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
typedef struct _class_2;
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
typedef int8 type_89[128][6];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	uint16 vertIndex[3];
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
	uint8 pad[3];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	int8 idtag[4];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	int32(*fun_check)(EGGItem*);
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
	void(*destroyNotify)(RwResEntry*);
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
	xVec4 frustplane[12];
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
	uint32 pad[4];
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
	RpClump*(*callback)(RpClump*, void*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
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
	uint8 pad[2];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	void(*fun_cheat)();
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
	xVec3 vert[3];
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
	uint8 pad[2];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	void(*fun_update)(float32, EGGItem*);
	void(*fun_init)(EGGItem*);
	void(*fun_reset)(EGGItem*);
	void(*fun_done)(EGGItem*);
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
	uint8 NumAnims[2];
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
	float32 matrix[16];
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
	xVec3 corner[4];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint16 vertIndex[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct EGGData
{
	union
	{
		int32 placeholder;
		EGGMisc misc;
	};
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
	float32 radius[2];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	uint32 baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	RxCluster clusters[1];
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
	float32 a[4];
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
	float32 wt[4];
};

int8 buffer[16];
int8 buffer[16];
int32 g_enableGameExtras;
int32 g_currDay;
int32 g_currMonth;
int32 g_gameExtraFlags;
EGGItemFuncs EGGModuleTest;
EGGItemFuncs EGGBirthDay;
EGGItemFuncs EGGSnow;
EGGItemFuncs EGGRain;
EGGItemFuncs EGGEmpty;
EGGItem g_eggBasket[2];
int32 g_flg_chEnabled;
float32 sCheatTimer;
int32 sCheatInputCount;
uint32 sCheatAddShiny[16];
uint32 sCheatAddSpatulas[16];
uint32 sCheatBubbleBowl[16];
uint32 sCheatCruiseBubble[16];
uint32 sCheatMonsterGallery[16];
uint32 sCheatArtTheatre[16];
uint32 sCheatChaChing[16];
uint32 sCheatExpertMode[16];
uint32 sCheatTikiCheat[16];
uint32 sCheatSwapCCLR[16];
uint32 sCheatSwapCCUD[16];
uint32 sCheatRestoreHealth[16];
uint32 sCheatTeflonPlayer[16];
uint32 sCheatVikingFeet[16];
uint32 sCheatDryBobMode[16];
uint32 sCheatShrapBob[16];
uint32 sCheatBigFlopper[16];
uint32 sCheatNoPants[16];
uint32 sCheatCruiseControl[16];
uint32 sCheatBigPlank[16];
uint32 sCheatSmallPeep[16];
uint32 sCheatSmallCoStars[16];
uint32 sCheatRichPeep[16];
uint32 sCheatPanHandle[16];
uint32 sCheatMedics[16];
uint32 sCheatDogTrix[16];
GECheat cheatList[22];
uint32 sCheatPressed[16];
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
	// Line 1712, Address: 0x17cee0, Func Offset: 0
	// Line 1713, Address: 0x17cf10, Func Offset: 0x30
	// Line 1714, Address: 0x17cf18, Func Offset: 0x38
	// Func End, Address: 0x17cf20, Func Offset: 0x40
}

// zGame_HackGalleryInit__Fv
// Start address: 0x17cf20
void zGame_HackGalleryInit()
{
	// Line 1707, Address: 0x17cf20, Func Offset: 0
	// Line 1708, Address: 0x17cf24, Func Offset: 0x4
	// Line 1707, Address: 0x17cf28, Func Offset: 0x8
	// Line 1708, Address: 0x17cf2c, Func Offset: 0xc
	// Line 1709, Address: 0x17cf40, Func Offset: 0x20
	// Func End, Address: 0x17cf4c, Func Offset: 0x2c
}

// GEC_cb_PanHandle__Fv
// Start address: 0x17cf50
void GEC_cb_PanHandle()
{
	uint32 aid_sndList[6];
	int8 @5620;
	// Line 1695, Address: 0x17cf50, Func Offset: 0
	// Line 1697, Address: 0x17cf58, Func Offset: 0x8
	// Line 1699, Address: 0x17d088, Func Offset: 0x138
	// Func End, Address: 0x17d094, Func Offset: 0x144
}

// GEC_cb_RichPeep__Fv
// Start address: 0x17d0a0
void GEC_cb_RichPeep()
{
	// Line 1688, Address: 0x17d0a0, Func Offset: 0
	// Line 1690, Address: 0x17d0a8, Func Offset: 0x8
	// Line 1692, Address: 0x17d1d8, Func Offset: 0x138
	// Func End, Address: 0x17d1e4, Func Offset: 0x144
}

// GEC_cb_SmallCostars__Fv
// Start address: 0x17d1f0
void GEC_cb_SmallCostars()
{
	// Line 1681, Address: 0x17d1f0, Func Offset: 0
	// Line 1683, Address: 0x17d1f8, Func Offset: 0x8
	// Line 1685, Address: 0x17d328, Func Offset: 0x138
	// Func End, Address: 0x17d334, Func Offset: 0x144
}

// GEC_cb_SmallPeep__Fv
// Start address: 0x17d340
void GEC_cb_SmallPeep()
{
	// Line 1674, Address: 0x17d340, Func Offset: 0
	// Line 1676, Address: 0x17d348, Func Offset: 0x8
	// Line 1678, Address: 0x17d478, Func Offset: 0x138
	// Func End, Address: 0x17d484, Func Offset: 0x144
}

// GEC_cb_DogTrix__Fv
// Start address: 0x17d490
void GEC_cb_DogTrix()
{
	// Line 1667, Address: 0x17d490, Func Offset: 0
	// Line 1669, Address: 0x17d498, Func Offset: 0x8
	// Line 1671, Address: 0x17d5c8, Func Offset: 0x138
	// Func End, Address: 0x17d5d4, Func Offset: 0x144
}

// GEC_cb_Medics__Fv
// Start address: 0x17d5e0
void GEC_cb_Medics()
{
	// Line 1660, Address: 0x17d5e0, Func Offset: 0
	// Line 1662, Address: 0x17d5e8, Func Offset: 0x8
	// Line 1664, Address: 0x17d718, Func Offset: 0x138
	// Func End, Address: 0x17d724, Func Offset: 0x144
}

// GEC_cb_BigPlank__Fv
// Start address: 0x17d730
void GEC_cb_BigPlank()
{
	// Line 1653, Address: 0x17d730, Func Offset: 0
	// Line 1655, Address: 0x17d738, Func Offset: 0x8
	// Line 1657, Address: 0x17d868, Func Offset: 0x138
	// Func End, Address: 0x17d874, Func Offset: 0x144
}

// GEC_cb_SwapCCUD__Fv
// Start address: 0x17d880
void GEC_cb_SwapCCUD()
{
	uint32 aid_sndList[7];
	int8 @5449;
	// Line 1624, Address: 0x17d880, Func Offset: 0
	// Line 1626, Address: 0x17d888, Func Offset: 0x8
	// Line 1628, Address: 0x17d9d0, Func Offset: 0x150
	// Func End, Address: 0x17d9dc, Func Offset: 0x15c
}

// GEC_cb_SwapCCLR__Fv
// Start address: 0x17d9e0
void GEC_cb_SwapCCLR()
{
	// Line 1617, Address: 0x17d9e0, Func Offset: 0
	// Line 1619, Address: 0x17d9e8, Func Offset: 0x8
	// Line 1621, Address: 0x17db30, Func Offset: 0x150
	// Func End, Address: 0x17db3c, Func Offset: 0x15c
}

// GEC_cb_CruiseControl__Fv
// Start address: 0x17db40
void GEC_cb_CruiseControl()
{
	uint32 choices[3];
	int8 @5598;
	// Line 1593, Address: 0x17db40, Func Offset: 0
	// Line 1596, Address: 0x17db48, Func Offset: 0x8
	// Line 1603, Address: 0x17db98, Func Offset: 0x58
	// Line 1604, Address: 0x17dc10, Func Offset: 0xd0
	// Line 1607, Address: 0x17dc40, Func Offset: 0x100
	// Func End, Address: 0x17dc4c, Func Offset: 0x10c
}

// GEC_cb_NoPantsMode__Fv
// Start address: 0x17dc50
void GEC_cb_NoPantsMode()
{
	// Line 1586, Address: 0x17dc50, Func Offset: 0
	// Line 1588, Address: 0x17dc54, Func Offset: 0x4
	// Line 1586, Address: 0x17dc58, Func Offset: 0x8
	// Line 1588, Address: 0x17dc5c, Func Offset: 0xc
	// Line 1590, Address: 0x17dc8c, Func Offset: 0x3c
	// Func End, Address: 0x17dc98, Func Offset: 0x48
}

// GEC_cb_ShrapBobMode__Fv
// Start address: 0x17dca0
void GEC_cb_ShrapBobMode()
{
	// Line 1572, Address: 0x17dca0, Func Offset: 0
	// Line 1574, Address: 0x17dca8, Func Offset: 0x8
	// Line 1576, Address: 0x17ddf0, Func Offset: 0x150
	// Func End, Address: 0x17ddfc, Func Offset: 0x15c
}

// GEC_cb_ExpertMode__Fv
// Start address: 0x17de00
void GEC_cb_ExpertMode()
{
	// Line 1551, Address: 0x17de00, Func Offset: 0
	// Line 1553, Address: 0x17de08, Func Offset: 0x8
	// Line 1555, Address: 0x17df50, Func Offset: 0x150
	// Func End, Address: 0x17df5c, Func Offset: 0x15c
}

// GEC_cb_RestoreHealth__Fv
// Start address: 0x17df60
void GEC_cb_RestoreHealth()
{
	uint32 choices[2];
	int8 @5558;
	// Line 1510, Address: 0x17df60, Func Offset: 0
	// Line 1514, Address: 0x17df64, Func Offset: 0x4
	// Line 1510, Address: 0x17df68, Func Offset: 0x8
	// Line 1514, Address: 0x17df6c, Func Offset: 0xc
	// Line 1518, Address: 0x17df70, Func Offset: 0x10
	// Line 1514, Address: 0x17df74, Func Offset: 0x14
	// Line 1518, Address: 0x17df78, Func Offset: 0x18
	// Line 1523, Address: 0x17dfa8, Func Offset: 0x48
	// Line 1524, Address: 0x17e018, Func Offset: 0xb8
	// Line 1527, Address: 0x17e048, Func Offset: 0xe8
	// Func End, Address: 0x17e054, Func Offset: 0xf4
}

// GEC_cb_ChaChing__Fv
// Start address: 0x17e060
void GEC_cb_ChaChing()
{
	zGlobalSettings* gs;
	uint32 aid_snd;
	// Line 1484, Address: 0x17e060, Func Offset: 0
	// Line 1487, Address: 0x17e064, Func Offset: 0x4
	// Line 1484, Address: 0x17e068, Func Offset: 0x8
	// Line 1487, Address: 0x17e06c, Func Offset: 0xc
	// Line 1495, Address: 0x17e070, Func Offset: 0x10
	// Line 1496, Address: 0x17e074, Func Offset: 0x14
	// Line 1495, Address: 0x17e078, Func Offset: 0x18
	// Line 1503, Address: 0x17e07c, Func Offset: 0x1c
	// Line 1496, Address: 0x17e080, Func Offset: 0x20
	// Line 1497, Address: 0x17e084, Func Offset: 0x24
	// Line 1498, Address: 0x17e08c, Func Offset: 0x2c
	// Line 1499, Address: 0x17e090, Func Offset: 0x30
	// Line 1498, Address: 0x17e094, Func Offset: 0x34
	// Line 1503, Address: 0x17e098, Func Offset: 0x38
	// Line 1504, Address: 0x17e0a4, Func Offset: 0x44
	// Line 1507, Address: 0x17e0cc, Func Offset: 0x6c
	// Func End, Address: 0x17e0d8, Func Offset: 0x78
}

// GEC_cb_UnlockArtTheatre__Fv
// Start address: 0x17e0e0
void GEC_cb_UnlockArtTheatre()
{
	int8* nam_theatreCounter;
	uint32 aid_theatreCounter;
	_xCounter* cntr;
	// Line 1465, Address: 0x17e0e0, Func Offset: 0
	// Line 1468, Address: 0x17e0e4, Func Offset: 0x4
	// Line 1465, Address: 0x17e0e8, Func Offset: 0x8
	// Line 1469, Address: 0x17e0ec, Func Offset: 0xc
	// Line 1471, Address: 0x17e0f4, Func Offset: 0x14
	// Line 1474, Address: 0x17e0fc, Func Offset: 0x1c
	// Line 1477, Address: 0x17e100, Func Offset: 0x20
	// Line 1480, Address: 0x17e110, Func Offset: 0x30
	// Func End, Address: 0x17e11c, Func Offset: 0x3c
}

// GEC_cb_MonsterGallery__Fv
// Start address: 0x17e120
void GEC_cb_MonsterGallery()
{
	int8 tempString[32];
	int8 c;
	int32 i;
	uint32 id;
	_xCounter* cntr;
	// Line 1433, Address: 0x17e120, Func Offset: 0
	// Line 1439, Address: 0x17e124, Func Offset: 0x4
	// Line 1433, Address: 0x17e128, Func Offset: 0x8
	// Line 1439, Address: 0x17e12c, Func Offset: 0xc
	// Line 1433, Address: 0x17e130, Func Offset: 0x10
	// Line 1439, Address: 0x17e134, Func Offset: 0x14
	// Line 1433, Address: 0x17e138, Func Offset: 0x18
	// Line 1439, Address: 0x17e140, Func Offset: 0x20
	// Line 1440, Address: 0x17e148, Func Offset: 0x28
	// Line 1441, Address: 0x17e14c, Func Offset: 0x2c
	// Line 1442, Address: 0x17e158, Func Offset: 0x38
	// Line 1443, Address: 0x17e168, Func Offset: 0x48
	// Line 1444, Address: 0x17e16c, Func Offset: 0x4c
	// Line 1443, Address: 0x17e170, Func Offset: 0x50
	// Line 1446, Address: 0x17e178, Func Offset: 0x58
	// Line 1447, Address: 0x17e17c, Func Offset: 0x5c
	// Line 1449, Address: 0x17e180, Func Offset: 0x60
	// Line 1450, Address: 0x17e18c, Func Offset: 0x6c
	// Line 1455, Address: 0x17e194, Func Offset: 0x74
	// Line 1456, Address: 0x17e198, Func Offset: 0x78
	// Line 1455, Address: 0x17e19c, Func Offset: 0x7c
	// Line 1456, Address: 0x17e1a0, Func Offset: 0x80
	// Line 1459, Address: 0x17e1ac, Func Offset: 0x8c
	// Line 1462, Address: 0x17e1b8, Func Offset: 0x98
	// Func End, Address: 0x17e1d4, Func Offset: 0xb4
}

// GEC_cb_CruiseBubble__Fv
// Start address: 0x17e1e0
void GEC_cb_CruiseBubble()
{
	uint32 aid_snd;
	// Line 1417, Address: 0x17e1e0, Func Offset: 0
	// Line 1426, Address: 0x17e1e4, Func Offset: 0x4
	// Line 1417, Address: 0x17e1e8, Func Offset: 0x8
	// Line 1423, Address: 0x17e1ec, Func Offset: 0xc
	// Line 1426, Address: 0x17e1f4, Func Offset: 0x14
	// Line 1427, Address: 0x17e204, Func Offset: 0x24
	// Line 1430, Address: 0x17e230, Func Offset: 0x50
	// Func End, Address: 0x17e23c, Func Offset: 0x5c
}

// GEC_cb_BubbleBowl__Fv
// Start address: 0x17e240
void GEC_cb_BubbleBowl()
{
	uint32 aid_snd;
	// Line 1400, Address: 0x17e240, Func Offset: 0
	// Line 1410, Address: 0x17e244, Func Offset: 0x4
	// Line 1400, Address: 0x17e248, Func Offset: 0x8
	// Line 1407, Address: 0x17e24c, Func Offset: 0xc
	// Line 1410, Address: 0x17e254, Func Offset: 0x14
	// Line 1411, Address: 0x17e264, Func Offset: 0x24
	// Line 1414, Address: 0x17e290, Func Offset: 0x50
	// Func End, Address: 0x17e29c, Func Offset: 0x5c
}

// GEC_cb_AddSpatulas__Fv
// Start address: 0x17e2a0
void GEC_cb_AddSpatulas()
{
	zPlayerGlobals* pg;
	uint32 aid_snd;
	// Line 1378, Address: 0x17e2a0, Func Offset: 0
	// Line 1387, Address: 0x17e2a4, Func Offset: 0x4
	// Line 1378, Address: 0x17e2a8, Func Offset: 0x8
	// Line 1387, Address: 0x17e2ac, Func Offset: 0xc
	// Line 1390, Address: 0x17e2b8, Func Offset: 0x18
	// Line 1393, Address: 0x17e2d0, Func Offset: 0x30
	// Line 1390, Address: 0x17e2d4, Func Offset: 0x34
	// Line 1393, Address: 0x17e2d8, Func Offset: 0x38
	// Line 1394, Address: 0x17e2e4, Func Offset: 0x44
	// Line 1397, Address: 0x17e310, Func Offset: 0x70
	// Func End, Address: 0x17e31c, Func Offset: 0x7c
}

// GEC_cb_AddShiny__Fv
// Start address: 0x17e320
void GEC_cb_AddShiny()
{
	zPlayerGlobals* pg;
	uint32 aid_snd;
	// Line 1352, Address: 0x17e320, Func Offset: 0
	// Line 1356, Address: 0x17e324, Func Offset: 0x4
	// Line 1352, Address: 0x17e328, Func Offset: 0x8
	// Line 1356, Address: 0x17e32c, Func Offset: 0xc
	// Line 1364, Address: 0x17e334, Func Offset: 0x14
	// Line 1365, Address: 0x17e344, Func Offset: 0x24
	// Line 1366, Address: 0x17e350, Func Offset: 0x30
	// Line 1367, Address: 0x17e354, Func Offset: 0x34
	// Line 1368, Address: 0x17e360, Func Offset: 0x40
	// Line 1372, Address: 0x17e368, Func Offset: 0x48
	// Line 1373, Address: 0x17e378, Func Offset: 0x58
	// Line 1375, Address: 0x17e3a8, Func Offset: 0x88
	// Func End, Address: 0x17e3b4, Func Offset: 0x94
}

// zGameCheats__Ff
// Start address: 0x17e3c0
void zGameCheats(float32 dt)
{
	int32 startover;
	int32 match;
	GECheat* rec_next;
	GECheat* rec_curr;
	// Line 1219, Address: 0x17e3c0, Func Offset: 0
	// Line 1221, Address: 0x17e3d4, Func Offset: 0x14
	// Line 1248, Address: 0x17e3e8, Func Offset: 0x28
	// Line 1245, Address: 0x17e3ec, Func Offset: 0x2c
	// Line 1248, Address: 0x17e3f0, Func Offset: 0x30
	// Line 1245, Address: 0x17e3f4, Func Offset: 0x34
	// Line 1248, Address: 0x17e3fc, Func Offset: 0x3c
	// Line 1249, Address: 0x17e420, Func Offset: 0x60
	// Line 1250, Address: 0x17e438, Func Offset: 0x78
	// Line 1254, Address: 0x17e448, Func Offset: 0x88
	// Line 1256, Address: 0x17e44c, Func Offset: 0x8c
	// Line 1254, Address: 0x17e454, Func Offset: 0x94
	// Line 1256, Address: 0x17e458, Func Offset: 0x98
	// Line 1257, Address: 0x17e470, Func Offset: 0xb0
	// Line 1264, Address: 0x17e478, Func Offset: 0xb8
	// Line 1265, Address: 0x17e480, Func Offset: 0xc0
	// Line 1266, Address: 0x17e498, Func Offset: 0xd8
	// Line 1267, Address: 0x17e4a4, Func Offset: 0xe4
	// Line 1270, Address: 0x17e4a8, Func Offset: 0xe8
	// Line 1271, Address: 0x17e4b0, Func Offset: 0xf0
	// Line 1273, Address: 0x17e4b4, Func Offset: 0xf4
	// Line 1271, Address: 0x17e4b8, Func Offset: 0xf8
	// Line 1273, Address: 0x17e4bc, Func Offset: 0xfc
	// Line 1271, Address: 0x17e4c0, Func Offset: 0x100
	// Line 1273, Address: 0x17e4c4, Func Offset: 0x104
	// Line 1274, Address: 0x17e4d4, Func Offset: 0x114
	// Line 1275, Address: 0x17e4dc, Func Offset: 0x11c
	// Line 1283, Address: 0x17e4e0, Func Offset: 0x120
	// Line 1284, Address: 0x17e534, Func Offset: 0x174
	// Line 1283, Address: 0x17e538, Func Offset: 0x178
	// Line 1284, Address: 0x17e53c, Func Offset: 0x17c
	// Line 1293, Address: 0x17e544, Func Offset: 0x184
	// Line 1292, Address: 0x17e54c, Func Offset: 0x18c
	// Line 1291, Address: 0x17e550, Func Offset: 0x190
	// Line 1293, Address: 0x17e554, Func Offset: 0x194
	// Line 1294, Address: 0x17e560, Func Offset: 0x1a0
	// Line 1299, Address: 0x17e564, Func Offset: 0x1a4
	// Line 1295, Address: 0x17e568, Func Offset: 0x1a8
	// Line 1299, Address: 0x17e56c, Func Offset: 0x1ac
	// Line 1300, Address: 0x17e5b0, Func Offset: 0x1f0
	// Line 1306, Address: 0x17e5b8, Func Offset: 0x1f8
	// Line 1307, Address: 0x17e5c8, Func Offset: 0x208
	// Line 1309, Address: 0x17e5e0, Func Offset: 0x220
	// Line 1313, Address: 0x17e5f4, Func Offset: 0x234
	// Line 1315, Address: 0x17e604, Func Offset: 0x244
	// Line 1318, Address: 0x17e618, Func Offset: 0x258
	// Line 1319, Address: 0x17e620, Func Offset: 0x260
	// Line 1320, Address: 0x17e624, Func Offset: 0x264
	// Line 1319, Address: 0x17e62c, Func Offset: 0x26c
	// Line 1320, Address: 0x17e630, Func Offset: 0x270
	// Line 1321, Address: 0x17e63c, Func Offset: 0x27c
	// Line 1323, Address: 0x17e640, Func Offset: 0x280
	// Line 1324, Address: 0x17e658, Func Offset: 0x298
	// Func End, Address: 0x17e670, Func Offset: 0x2b0
}

// zGameExtras_Load__FP7xSerial
// Start address: 0x17e670
void zGameExtras_Load(xSerial* xser)
{
	int32 keepers;
	// Line 745, Address: 0x17e670, Func Offset: 0
	// Line 750, Address: 0x17e678, Func Offset: 0x8
	// Line 751, Address: 0x17e684, Func Offset: 0x14
	// Line 753, Address: 0x17e694, Func Offset: 0x24
	// Func End, Address: 0x17e6a0, Func Offset: 0x30
}

// zGameExtras_Save__FP7xSerial
// Start address: 0x17e6a0
void zGameExtras_Save(xSerial* xser)
{
	// Line 739, Address: 0x17e6a0, Func Offset: 0
	// Func End, Address: 0x17e6a8, Func Offset: 0x8
}

// zGameExtras_NewGameReset__Fv
// Start address: 0x17e6b0
void zGameExtras_NewGameReset()
{
	zGlobalSettings* gs;
	// Line 718, Address: 0x17e6b0, Func Offset: 0
	// Line 715, Address: 0x17e6b4, Func Offset: 0x4
	// Line 718, Address: 0x17e6b8, Func Offset: 0x8
	// Line 725, Address: 0x17e6bc, Func Offset: 0xc
	// Line 726, Address: 0x17e6c4, Func Offset: 0x14
	// Line 727, Address: 0x17e6cc, Func Offset: 0x1c
	// Line 728, Address: 0x17e6d4, Func Offset: 0x24
	// Line 729, Address: 0x17e6dc, Func Offset: 0x2c
	// Line 732, Address: 0x17e6e0, Func Offset: 0x30
	// Func End, Address: 0x17e6e8, Func Offset: 0x38
}

// zGameExtras_CheatFlags__Fv
// Start address: 0x17e6f0
int32 zGameExtras_CheatFlags()
{
	// Line 712, Address: 0x17e6f0, Func Offset: 0
	// Func End, Address: 0x17e6f8, Func Offset: 0x8
}

// EGG_check_ExtrasFlags__FP7EGGItem
// Start address: 0x17e700
int32 EGG_check_ExtrasFlags()
{
	// Line 611, Address: 0x17e700, Func Offset: 0
	// Line 614, Address: 0x17e728, Func Offset: 0x28
	// Line 615, Address: 0x17e740, Func Offset: 0x40
	// Line 619, Address: 0x17e748, Func Offset: 0x48
	// Line 620, Address: 0x17e760, Func Offset: 0x60
	// Line 624, Address: 0x17e76c, Func Offset: 0x6c
	// Line 626, Address: 0x17e788, Func Offset: 0x88
	// Line 628, Address: 0x17e7a0, Func Offset: 0xa0
	// Line 630, Address: 0x17e7b8, Func Offset: 0xb8
	// Line 634, Address: 0x17e7d0, Func Offset: 0xd0
	// Line 635, Address: 0x17e7e4, Func Offset: 0xe4
	// Line 637, Address: 0x17e7ec, Func Offset: 0xec
	// Line 638, Address: 0x17e7f0, Func Offset: 0xf0
	// Line 639, Address: 0x17e808, Func Offset: 0x108
	// Line 645, Address: 0x17e810, Func Offset: 0x110
	// Line 646, Address: 0x17e828, Func Offset: 0x128
	// Line 649, Address: 0x17e830, Func Offset: 0x130
	// Line 650, Address: 0x17e848, Func Offset: 0x148
	// Line 653, Address: 0x17e850, Func Offset: 0x150
	// Line 654, Address: 0x17e868, Func Offset: 0x168
	// Line 658, Address: 0x17e870, Func Offset: 0x170
	// Line 659, Address: 0x17e888, Func Offset: 0x188
	// Line 662, Address: 0x17e894, Func Offset: 0x194
	// Line 663, Address: 0x17e8b0, Func Offset: 0x1b0
	// Line 664, Address: 0x17e8c8, Func Offset: 0x1c8
	// Line 665, Address: 0x17e8e0, Func Offset: 0x1e0
	// Line 666, Address: 0x17e8f4, Func Offset: 0x1f4
	// Line 668, Address: 0x17e8fc, Func Offset: 0x1fc
	// Line 670, Address: 0x17e900, Func Offset: 0x200
	// Line 679, Address: 0x17e91c, Func Offset: 0x21c
	// Line 683, Address: 0x17e920, Func Offset: 0x220
	// Func End, Address: 0x17e928, Func Offset: 0x228
}

// zGameExtras_SceneUpdate__Ff
// Start address: 0x17e930
void zGameExtras_SceneUpdate(float32 dt)
{
	EGGItem* egg_next;
	EGGItem* egg;
	// Line 335, Address: 0x17e930, Func Offset: 0
	// Line 336, Address: 0x17e940, Func Offset: 0x10
	// Line 337, Address: 0x17e94c, Func Offset: 0x1c
	// Line 338, Address: 0x17e95c, Func Offset: 0x2c
	// Line 341, Address: 0x17e96c, Func Offset: 0x3c
	// Line 342, Address: 0x17e970, Func Offset: 0x40
	// Line 343, Address: 0x17e980, Func Offset: 0x50
	// Line 347, Address: 0x17e984, Func Offset: 0x54
	// Line 349, Address: 0x17e998, Func Offset: 0x68
	// Line 351, Address: 0x17e9a0, Func Offset: 0x70
	// Line 353, Address: 0x17e9a8, Func Offset: 0x78
	// Line 356, Address: 0x17e9b8, Func Offset: 0x88
	// Func End, Address: 0x17e9cc, Func Offset: 0x9c
}

// zGameExtras_SceneExit__Fv
// Start address: 0x17e9d0
void zGameExtras_SceneExit()
{
	EGGItem* egg_next;
	EGGItem* egg;
	// Line 302, Address: 0x17e9d0, Func Offset: 0
	// Line 303, Address: 0x17e9dc, Func Offset: 0xc
	// Line 304, Address: 0x17e9e8, Func Offset: 0x18
	// Line 305, Address: 0x17e9f4, Func Offset: 0x24
	// Line 308, Address: 0x17ea04, Func Offset: 0x34
	// Line 309, Address: 0x17ea08, Func Offset: 0x38
	// Line 310, Address: 0x17ea18, Func Offset: 0x48
	// Line 315, Address: 0x17ea1c, Func Offset: 0x4c
	// Line 316, Address: 0x17ea28, Func Offset: 0x58
	// Line 318, Address: 0x17ea34, Func Offset: 0x64
	// Line 319, Address: 0x17ea3c, Func Offset: 0x6c
	// Line 321, Address: 0x17ea44, Func Offset: 0x74
	// Line 324, Address: 0x17ea58, Func Offset: 0x88
	// Line 325, Address: 0x17ea5c, Func Offset: 0x8c
	// Line 326, Address: 0x17ea60, Func Offset: 0x90
	// Line 328, Address: 0x17ea64, Func Offset: 0x94
	// Line 329, Address: 0x17ea68, Func Offset: 0x98
	// Func End, Address: 0x17ea78, Func Offset: 0xa8
}

// zGameExtras_SceneReset__Fv
// Start address: 0x17ea80
void zGameExtras_SceneReset()
{
	EGGItem* egg_next;
	EGGItem* egg;
	// Line 278, Address: 0x17ea80, Func Offset: 0
	// Line 279, Address: 0x17ea8c, Func Offset: 0xc
	// Line 282, Address: 0x17ea98, Func Offset: 0x18
	// Line 283, Address: 0x17ea9c, Func Offset: 0x1c
	// Line 284, Address: 0x17eaa8, Func Offset: 0x28
	// Line 289, Address: 0x17eaac, Func Offset: 0x2c
	// Line 292, Address: 0x17eac0, Func Offset: 0x40
	// Line 293, Address: 0x17eac8, Func Offset: 0x48
	// Line 295, Address: 0x17ead0, Func Offset: 0x50
	// Line 298, Address: 0x17eae0, Func Offset: 0x60
	// Func End, Address: 0x17eaf0, Func Offset: 0x70
}

// zGameExtras_SceneInit__Fv
// Start address: 0x17eaf0
void zGameExtras_SceneInit()
{
	int32 somethingIsEnabled;
	EGGItem* egg_next;
	EGGItem* egg;
	// Line 237, Address: 0x17eaf0, Func Offset: 0
	// Line 244, Address: 0x17eb04, Func Offset: 0x14
	// Line 245, Address: 0x17eb10, Func Offset: 0x20
	// Line 250, Address: 0x17eb1c, Func Offset: 0x2c
	// Line 245, Address: 0x17eb20, Func Offset: 0x30
	// Line 251, Address: 0x17eb24, Func Offset: 0x34
	// Line 248, Address: 0x17eb2c, Func Offset: 0x3c
	// Line 251, Address: 0x17eb30, Func Offset: 0x40
	// Line 252, Address: 0x17eb38, Func Offset: 0x48
	// Line 257, Address: 0x17eb3c, Func Offset: 0x4c
	// Line 260, Address: 0x17eb50, Func Offset: 0x60
	// Line 262, Address: 0x17eb5c, Func Offset: 0x6c
	// Line 264, Address: 0x17eb64, Func Offset: 0x74
	// Line 265, Address: 0x17eb6c, Func Offset: 0x7c
	// Line 267, Address: 0x17eb74, Func Offset: 0x84
	// Line 269, Address: 0x17eb88, Func Offset: 0x98
	// Line 272, Address: 0x17eb98, Func Offset: 0xa8
	// Func End, Address: 0x17ebb0, Func Offset: 0xc0
}

// zGameExtras_MoDay__FPiPi
// Start address: 0x17ebb0
void zGameExtras_MoDay(int32* month, int32* day)
{
	// Line 138, Address: 0x17ebb0, Func Offset: 0
	// Line 139, Address: 0x17ebb8, Func Offset: 0x8
	// Line 140, Address: 0x17ebbc, Func Offset: 0xc
	// Func End, Address: 0x17ebc4, Func Offset: 0x14
}

// zGameExtras_ExtrasFlags__Fv
// Start address: 0x17ebd0
int32 zGameExtras_ExtrasFlags()
{
	// Line 134, Address: 0x17ebd0, Func Offset: 0
	// Func End, Address: 0x17ebd8, Func Offset: 0x8
}

