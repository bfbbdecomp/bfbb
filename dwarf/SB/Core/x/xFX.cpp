typedef struct RpClump;
typedef struct tri_data_0;
typedef struct xAnimTransition;
typedef struct RwTexture;
typedef struct xFXRibbon;
typedef struct xPEEntBound;
typedef struct RpAtomic;
typedef struct RwV3d;
typedef struct config;
typedef struct xBase;
typedef struct xAnimSingle;
typedef struct zSurfUVFX;
typedef struct RxHeap;
typedef struct RpGeometry;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpSkin;
typedef struct xFXStreak;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef struct RpVertexNormal;
typedef struct RxObjSpace3DVertex;
typedef struct block_data;
typedef struct _tagEmitLine;
typedef struct xQuat;
typedef struct xClumpCollBSPBranchNode;
typedef struct curve_node;
typedef struct _class_0;
typedef struct RwTexCoords;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct _tagxPad;
typedef struct xFXBubbleParams;
typedef struct zPlayerGlobals;
typedef struct zSurfaceProps;
typedef struct zCheckPoint;
typedef struct RpMeshHeader;
typedef struct RwFrame;
typedef struct xJSPHeader;
typedef struct RwResEntry;
typedef struct xModelInstance;
typedef struct RxPipelineRequiresCluster;
typedef struct zSurfAssetBase;
typedef struct xAnimPlay;
typedef struct _tagFirework;
typedef struct xAnimEffect;
typedef struct xVec3;
typedef struct xLinkAsset;
typedef struct _tagxRumble;
typedef struct zPlayerCarryInfo;
typedef struct joint_data;
typedef struct xSurface;
typedef struct _xFXAuraAngle;
typedef enum RpMatFXMaterialFlags;
typedef struct RxPipeline;
typedef struct xFXShine;
typedef struct xModelPool;
typedef struct RpLight;
typedef struct xFXRing;
typedef struct xEnt;
typedef struct RpTriangle;
typedef struct zPlayerSettings;
typedef struct xEntFrame;
typedef struct xGroup;
typedef struct _zPortal;
typedef struct xAnimState;
typedef struct zParEmitter;
typedef struct xParEmitter;
typedef struct zEnt;
typedef struct xUpdateCullEnt;
typedef struct xClumpCollBSPTree;
typedef struct xVec4;
typedef struct RpWorld;
typedef struct _tagEmitVolume;
typedef struct RwRaster;
typedef struct xGroupAsset;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xPortalAsset;
typedef struct xJSPNodeInfo;
typedef struct xParEmitterAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xVec2;
typedef struct rxReq;
typedef struct zSurfMatFX;
typedef struct xParGroup;
typedef struct vert_data;
typedef struct xAnimTable;
typedef struct tier_queue_allocator;
typedef struct xShadowSimplePoly;
typedef struct xParEmitterPropsAsset;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xMemPool;
typedef struct RpWorldSector;
typedef struct tier_queue;
typedef struct zScene;
typedef struct _xFXAura;
typedef struct xFXShineElem;
typedef struct xEnv;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct iEnv;
typedef enum RxClusterValid;
typedef struct _tagEmitOffsetPoint;
typedef struct xFXStreakElem;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xAnimFile;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct iterator;
typedef struct iColor_tag;
typedef struct xEntCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTransitionList;
typedef struct xBBox;
typedef struct xModelBucket;
typedef enum RwCameraProjection;
typedef struct analog_data;
typedef enum RxClusterForcePresent;
typedef struct xEntBoulder;
typedef struct xCylinder;
typedef struct RpSector;
typedef struct xPEVCyl;
typedef struct xBound;
typedef union RxColorUnion;
typedef struct zEntHangable;
typedef struct xParSys;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xCollis;
typedef struct xParInterp;
typedef struct RpMorphTarget;
typedef struct zJumpParam;
typedef struct xModelTag;
typedef struct RwV2d;
typedef struct xFFX;
typedef struct xQCData;
typedef struct xUpdateCullMgr;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xGridBound;
typedef struct RwTexDictionary;
typedef struct zPlatform;
typedef struct xPEEntBone;
typedef struct RxOutputSpec;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntShadow;
typedef struct xMat3x3;
typedef struct zCutsceneMgr;
typedef struct RxClusterRef;
typedef struct zSurfTextureAnim;
typedef struct anim_coll_data;
typedef struct RwCamera;
typedef struct xEnvAsset;
typedef struct RwObject;
typedef struct zAssetPickupTable;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPVertInfo;
typedef struct xPECircle;
typedef struct _class_1;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct tagiRenderInput;
typedef struct xEntDrive;
typedef struct xClumpCollBSPTriangle;
typedef struct iFogParams;
typedef struct zSurfacePropTexAnim;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct xAnimMultiFileEntry;
typedef struct zGlobals;
typedef struct xAnimActiveEffect;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct zGlobalSettings;
typedef struct RxPipelineNodeParam;
typedef enum _tagPadState;
typedef struct _tagEmitSphere;
typedef struct RxPacket;
typedef struct zPlayerLassoInfo;
typedef struct xGlobals;
typedef struct zLasso;
typedef enum RwFogType;
typedef struct RpPolygon;
typedef union _class_2;
typedef struct zLedgeGrabParams;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct zSurfacePropUVFX;
typedef struct zSurfColorFX;
typedef struct xAnimMultiFileBase;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef enum _zPlayerWallJumpState;
typedef struct tri_data_1;
typedef struct _tagEmitRect;
typedef struct _tagPadAnalog;
typedef struct tri_data_2;
typedef struct xParEmitterCustomSettings;
typedef struct _tagiPad;
typedef enum _zPlayerType;

typedef int32(*type_0)(void*, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_8)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_11)(RxPipelineNode*, uint32, uint32, void*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef int32(*type_14)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_15)(void*, void*);
typedef int32(*type_20)(RxNodeDefinition*);
typedef RpMaterial*(*type_21)(RpMaterial*, void*);
typedef void(*type_23)(void*);
typedef void(*type_24)(RxNodeDefinition*);
typedef int32(*type_28)(RxPipelineNode*);
typedef void(*type_30)(xAnimPlay*, xAnimState*);
typedef void(*type_32)(RxPipelineNode*);
typedef RpMaterial*(*type_33)(RpMaterial*, void*);
typedef RpMaterial*(*type_34)(RpMaterial*, void*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef uint32(*type_36)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_37)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_51)(uint32);
typedef void(*type_54)(xEnt*, xScene*, float32);
typedef int8*(*type_56)(xBase*);
typedef RpMaterial*(*type_63)(RpMaterial*, void*);
typedef int8*(*type_64)(uint32);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_72)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_74)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_75)(xEnt*);
typedef RpAtomic*(*type_76)(RpAtomic*);
typedef RpAtomic*(*type_77)(RpAtomic*);
typedef uint32(*type_78)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_87)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_89)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_91)(RpWorldSector*);
typedef RpAtomic*(*type_105)(RpAtomic*, void*);
typedef RpMaterial*(*type_109)(RpMaterial*, void*);
typedef RwCamera*(*type_112)(RwCamera*);
typedef RwCamera*(*type_118)(RwCamera*);
typedef RpAtomic*(*type_119)(RpAtomic*, void*);
typedef void(*type_122)(xMemPool*, void*);
typedef void(*type_128)(RwResEntry*);
typedef RpMaterial*(*type_136)(RpMaterial*, void*);
typedef RwObjectHasFrame*(*type_142)(RwObjectHasFrame*);
typedef RpMaterial*(*type_149)(RpMaterial*, void*);

typedef xAnimMultiFileEntry type_1[1];
typedef uint32 type_2[15];
typedef vert_data type_3[3];
typedef int8 type_5[16];
typedef uint32 type_6[15];
typedef RwTexCoords* type_7[8];
typedef RwFrustumPlane type_9[6];
typedef _xFXAura type_10[32];
typedef uint32 type_12[15];
typedef xFXRibbon* type_16[64];
typedef RwV3d type_17[8];
typedef int8 type_18[4];
typedef uint8 type_19[22];
typedef float32 type_22[2];
typedef uint8 type_25[22];
typedef zSurfacePropTexAnim type_26[2];
typedef uint8 type_27[300];
typedef zSurfacePropUVFX type_29[2];
typedef uint16 type_31[3];
typedef uint32 type_38[11];
typedef float32 type_39[2];
typedef xVec3 type_41[5];
typedef xVec3 type_42[3];
typedef uint8 type_43[43];
typedef _tagFirework type_44[10];
typedef uint8 type_45[5];
typedef uint8 type_46[2];
typedef uint32 type_47[2];
typedef uint8 type_48[2];
typedef float32 type_49[6];
typedef _xFXAuraAngle type_50[2];
typedef float32 type_52[3];
typedef int8* type_53[11];
typedef uint8 type_55[3];
typedef RxObjSpace3DVertex type_57[4];
typedef float32 type_58[3];
typedef float32 type_59[22];
typedef float32 type_60[2];
typedef xVec3 type_61[2];
typedef uint8 type_62[3];
typedef xModelTag type_65[2];
typedef xFXBubbleParams type_66[1];
typedef float32 type_68[3];
typedef float32 type_69[22];
typedef float32 type_70[16];
typedef RxObjSpace3DVertex type_71[384];
typedef uint8 type_73[3];
typedef RwTexCoords* type_79[8];
typedef RpLight* type_80[2];
typedef float32 type_81[2];
typedef RwFrame* type_82[2];
typedef xEnt* type_83[111];
typedef tri_data_0 type_84[3];
typedef type_84 type_85[2];
typedef zSurfTextureAnim type_86[2];
typedef float32 type_88[2];
typedef float32 type_90[2];
typedef uint8 type_92[256];
typedef zSurfUVFX type_93[2];
typedef uint32 type_94[4];
typedef uint32 type_95[72];
typedef analog_data type_96[2];
typedef uint8 type_97[3];
typedef xBase* type_98[72];
typedef xVec3 type_99[4];
typedef uint8 type_100[300];
typedef uint8 type_101[14];
typedef float32 type_102[2];
typedef xModelTag type_103[4];
typedef float32 type_104[2];
typedef uint16 type_106[3];
typedef uint32 type_107[4096];
typedef xModelInstance* type_108[14];
typedef xFXStreakElem type_110[50];
typedef float32 type_111[4];
typedef xFXRing type_113[8];
typedef uint8 type_114[4];
typedef xFXShineElem type_115[100];
typedef RxObjSpace3DVertex type_116[4];
typedef xFXStreak type_117[10];
typedef xCollis type_120[18];
typedef xVec4 type_121[12];
typedef uint8 type_123[3];
typedef xFXShine type_124[2];
typedef int8 type_125[32];
typedef int8 type_126[32];
typedef xParInterp type_127[1];
typedef float32 type_129[2];
typedef float32 type_130[2];
typedef uint16 type_131[3];
typedef float32 type_132[4];
typedef RxCluster type_133[1];
typedef float32 type_134[2];
typedef xVec3 type_135[60];
typedef xParInterp type_137[4];
typedef float32 type_138[2];
typedef int8 type_139[128];
typedef float32 type_140[2];
typedef type_139 type_141[6];
typedef float32 type_143[2];
typedef xParInterp type_144[4];
typedef float32 type_145[2];
typedef int8 type_146[16];
typedef int8 type_147[32];
typedef float32 type_148[2];
typedef uint8 type_150[3];
typedef uint8 type_151[2];

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
};

struct tri_data_0
{
	type_3 vert;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_78 Conditional;
	type_78 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_125 name;
	type_126 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xFXRibbon
{
	config cfg;
	uint8 activated;
	RwRaster* raster;
	tier_queue joints;
	curve_node* curve;
	uint32 curve_size;
	uint32 curve_index;
	float32 ilife;
	uint32 mtime;
	uint32 mlife;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_35 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct config
{
	float32 life_time;
	uint32 blend_src;
	uint32 blend_dst;
	float32 pivot;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_8 eventFunc;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_138 BilinearLerp;
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

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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
	type_79 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpSkin
{
};

struct xFXStreak
{
	uint32 flags;
	float32 frequency;
	float32 alphaFadeRate;
	float32 alphaStart;
	float32 elapsed;
	float32 lifetime;
	uint32 head;
	iColor_tag color_a;
	iColor_tag color_b;
	RwTexture* texturePtr;
	RwRaster* textureRasterPtr;
	type_110 elem;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct block_data
{
	uint8 prev;
	uint8 next;
	uint16 flags;
	void* data;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct curve_node
{
	float32 time;
	iColor_tag color;
	float32 scale;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_94 pad;
};

struct _tagxPad
{
	type_19 value;
	type_25 last_value;
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
	type_59 up_tmr;
	type_69 down_tmr;
	type_96 analog;
};

struct xFXBubbleParams
{
	union
	{
		uint32 pass1;
		uint32 pass2;
		uint32 pass3;
		uint32 padding;
	};
	uint8 pass1_alpha;
	uint8 pass2_alpha;
	uint8 pass3_alpha;
	uint32 pass1_fbmsk;
	uint32 fresnel_map;
	float32 fresnel_map_coeff;
	uint32 env_map;
	float32 env_map_coeff;
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
	type_65 BubbleWandTag;
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
	type_103 HangPawTag;
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
	type_2 Inv_PatsSock;
	type_6 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_12 Inv_LevelPickups;
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
	type_47 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_83 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_101 sb_model_indices;
	type_108 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	type_26 texanim;
	uint32 uvfx_flags;
	type_29 uvfx;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xJSPHeader
{
	type_18 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_128 destroyNotify;
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
	_class_1 anim_coll;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct zSurfAssetBase : xBaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	type_86 texture_anim;
	uint32 uvfx_flags;
	type_93 uvfx;
	uint8 on;
	type_97 surf_pad;
	float32 oob_delay;
	float32 walljump_scale_xz;
	float32 walljump_scale_y;
	float32 damage_timer;
	float32 damage_bounce;
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
	type_40 BeforeAnimMatrices;
};

struct _tagFirework
{
	int32 state;
	float32 timer;
	xVec3 vel;
	xVec3 pos;
	float32 fuel;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_36 Callback;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_132 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct joint_data
{
	uint32 flags;
	uint32 born;
	xVec3 loc;
	xVec3 norm;
	float32 orient;
	float32 scale;
	float32 alpha;
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
	type_73 pad;
	void* moprops;
};

struct _xFXAuraAngle
{
	float32 angle;
	float32 cc;
	float32 ss;
};

enum RpMatFXMaterialFlags
{
	rpMATFXEFFECTNULL,
	rpMATFXEFFECTBUMPMAP,
	rpMATFXEFFECTENVMAP,
	rpMATFXEFFECTBUMPENVMAP,
	rpMATFXEFFECTDUAL,
	rpMATFXEFFECTUVTRANSFORM,
	rpMATFXEFFECTDUALUVTRANSFORM,
	rpMATFXEFFECTMAX,
	rpMATFXNUMEFFECTS = 0x6,
	rpMATFXFORCEENUMSIZEINT = 0x7fffffff
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

struct xFXShine
{
	uint32 flags;
	xVec3* ppos;
	xVec3 pos;
	float32 spd;
	float32 width;
	float32 frequency;
	float32 elapsed;
	float32 lifetimeElemMax;
	float32 lifetimeMax;
	float32 lifetime;
	float32 rotateSpeed;
	float32 rotateZ;
	iColor_tag color_a;
	iColor_tag color_b;
	RwTexture* texturePtr;
	RwRaster* textureRasterPtr;
	type_115 elem;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xFXRing
{
	uint32 texture;
	float32 lifetime;
	xVec3 pos;
	float32 time;
	float32 ring_radius;
	float32 ring_radius_delta;
	float32 ring_tilt;
	float32 ring_tilt_delta;
	float32 ring_height;
	float32 ring_height_delta;
	iColor_tag ring_color;
	uint16 ring_segs;
	uint8 u_repeat;
	uint8 v_repeat;
	xFXRing** parent;
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
	type_54 update;
	type_54 endUpdate;
	type_67 bupdate;
	type_74 move;
	type_75 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_89 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RpTriangle
{
	type_31 vertIndex;
	int16 matIndex;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_49 MoveSpeed;
	type_52 AnimSneak;
	type_58 AnimWalk;
	type_68 AnimRun;
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
	type_114 talk_filter;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_30 BeforeEnter;
	type_4 StateCallback;
	type_40 BeforeAnimMatrices;
};

struct zParEmitter : xParEmitter
{
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
	type_55 emit_pad;
	type_62 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_15 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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
	type_91 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct rxReq
{
};

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct xParGroup
{
};

struct vert_data
{
	xVec3 loc;
	xVec3 norm;
	RwRGBA color;
	RwTexCoords uv;
	float32 depth;
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

struct tier_queue_allocator
{
	block_data* blocks;
	uint32 _unit_size;
	uint32 _block_size;
	uint32 _block_size_shift;
	uint32 _max_blocks;
	uint32 _max_blocks_shift;
	uint8 head;
};

struct xShadowSimplePoly
{
	type_42 vert;
	xVec3 norm;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_127 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_137 color_birth;
	type_144 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_122 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_7 texCoords;
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

struct tier_queue
{
	uint32 first;
	uint32 _size;
	uint32 wrap_mask;
	tier_queue_allocator* alloc;
	type_92 blocks;
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
	type_95 baseCount;
	type_98 baseList;
	_zEnv* zen;
};

struct _xFXAura
{
	xVec3 pos;
	iColor_tag color;
	float32 size;
	void* parent;
	uint32 frame;
	type_60 dangle;
};

struct xFXShineElem
{
	uint32 flag;
	xVec3 p;
	xVec3 vel;
	float32 lifetime;
	float32 a;
	iColor_tag cola;
	iColor_tag colb;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_80 light;
	type_82 light_frame;
	int32 memlvl;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xFXStreakElem
{
	uint32 flag;
	type_61 p;
	float32 a;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	type_151 NumAnims;
	void** RawData;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_51 resolvID;
	type_56 base2Name;
	type_64 id2Name;
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
	type_99 corner;
};

struct iterator
{
	uint32 it;
	tier_queue* owner;
};

struct iColor_tag
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
	type_120 colls;
	type_72 post;
	type_87 depenq;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntBoulder
{
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RpSector
{
	int32 type;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_123 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct zEntHangable
{
};

struct xParSys
{
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
		_class_0 tuv;
		tri_data_2 tri;
	};
};

struct xParInterp
{
	type_90 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_111 wt;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xFFX
{
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
	type_23 activateCB;
	type_23 deactivateCB;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_1 Files;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zPlatform
{
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_121 frustplane;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_148 radius;
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

struct zCutsceneMgr
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
};

struct anim_coll_data
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_112 beginUpdate;
	type_118 endUpdate;
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
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct zAssetPickupTable
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct _class_1
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_14 nodeBody;
	type_20 nodeInit;
	type_24 nodeTerm;
	type_28 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_37 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct tagiRenderInput
{
	uint16* m_index;
	RxObjSpace3DVertex* m_vertex;
	float32* m_vertexTZ;
	uint32 m_mode;
	int32 m_vertexType;
	int32 m_vertexTypeSize;
	int32 m_indexCount;
	int32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
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
	tri_data_1 tri;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	type_46 PowerUp;
	type_48 InitialPowerUp;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagEmitSphere
{
	float32 radius;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_133 clusters;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_141 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_147 sceneStart;
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
	type_41 lastRefs;
	type_45 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	type_131 vertIndex;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_135 tranTable;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_142 sync;
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	type_143 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct tri_data_1 : tri_data_2
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct tri_data_2
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_150 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

struct _tagiPad
{
	int32 port;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

type_146 buffer;
type_5 buffer;
type_35 gAtomicRenderCallBack;
float32 EnvMapShininess;
float32 BumpMapBumpiness;
RpLight* MainLight;
uint32 xfx_initted;
type_113 ringlist;
RxObjSpace3DVertex* Im3DBuffer;
uint32 Im3DBufferPos;
RwTexture* g_txtr_drawRing;
type_66 defaultBFX;
uint32 bfx_curr;
uint32 bfx_max;
xFXBubbleParams* BFX;
uint32 sFresnelMap;
uint32 sEnvMap;
int32 sTweaked;
RxPipeline* xFXanimUVPipeline;
type_134 xFXanimUVRotMat0;
type_39 xFXanimUVRotMat1;
type_104 xFXanimUVTrans;
type_140 xFXanimUVScale;
type_129 xFXanimUV2PRotMat0;
type_22 xFXanimUV2PRotMat1;
type_88 xFXanimUV2PTrans;
type_130 xFXanimUV2PScale;
RwTexture* xFXanimUV2PTexture;
RxPipeline* xFXgooPipeline;
type_27 alpha_count0;
type_100 alpha_count1;
type_43 segments;
type_44 sFirework;
zParEmitter* sFireworkTrailEmit;
zParEmitter* sFirework1Emit;
zParEmitter* sFirework2Emit;
uint32 sFireworkSoundID;
uint32 sFireworkLaunchSoundID;
type_117 sStreakList;
type_124 sShineList;
type_16 active_ribbons;
uint32 active_ribbons_size;
uint8 ribbons_dirty;
type_53 blend_mode_labels;
type_38 blend_mode_values;
uint32 blend_modes;
tier_queue_allocator joint_alloc;
type_102 sAuraPulse;
type_145 sAuraPulseAng;
type_50 sAuraAngle;
RwTexture* gAuraTex;
type_10 sAura;
uint32 gFrameCount;
type_107 ourGlobals;
type_0 compare_ribbons;
uint32 gActiveHeap;
tagiRenderInput gRenderBuffer;
zGlobals globals;
type_105 AtomicResetMaterialEffects;
type_34 MaterialResetEffects;
uint32 gFXSurfaceFlags;
type_21 MaterialSetBumpMap;
type_149 MaterialSetBumpiness;
type_63 MaterialSetShininess;
type_33 MaterialSetEnvMap2;
type_136 MatUpdateFrame;
type_109 MaterialDisableMatFX;
type_119 PreAllocMatFX_cb;
type_76 AtomicDefaultRenderCallBack;
type_77 xFXBubbleRender;

void xFXSceneFinish();
void xFXScenePrepare();
void xFXSceneReset();
void xFXSceneSetup();
void xFXSceneInit();
void xFXShutdown();
void xFXStartup();
void xFXAuraRender();
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, uint32 count, float32 width, float32 height, iColor_tag tint, uint32 flipUV);
void xFXAuraUpdate(float32 dt);
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, float32 size);
void xFXRibbonRender();
void xFXRibbonSceneEnter();
int32 render_compare(xFXRibbon* this, xFXRibbon& c);
void render_strip(xFXRibbon* this, RxObjSpace3DVertex* verts, iterator first, uint32 size);
void eval_joint(xFXRibbon* this, joint_data& joint, iColor_tag& color, float32& width);
void refresh_joint(xFXRibbon* this, joint_data& joint, iterator& it);
void get_normal(xVec3& norm, xVec3& dir, float32 orient);
void set_texture(xFXRibbon* this, int8* name);
void set_texture(xFXRibbon* this, uint32 id);
void render(xFXRibbon* this);
void update(xFXRibbon* this, float32 dt);
void insert(xFXRibbon* this, xVec3& loc, float32 orient, float32 scale, float32 alpha, uint32 flags);
void insert(xFXRibbon* this, xVec3& loc, xVec3& norm, float32 scale, float32 alpha, uint32 flags);
void set_curve(xFXRibbon* this, curve_node* curve, uint32 size);
void refresh_config(xFXRibbon* this);
void set_default_config(xFXRibbon* this);
void init(xFXRibbon* this);
int32 compare_ribbons(void* e1, void* e2);
uint32 xFXShineStart();
void xFXShineRender();
void xFXShineUpdate(float32 dt);
void xFXShineInit();
void xFXStreakUpdate(uint32 id, xVec3* a, xVec3* b);
void xFXStreakStop(uint32 id);
uint32 xFXStreakStart(float32 frequency, float32 alphaFadeRate, float32 alphaStart, uint32 textureID, iColor_tag* edge_a, iColor_tag* edge_b, int32 taper);
void xFXStreakRender();
void xFXStreakUpdate(float32 dt);
void xFXStreakInit();
void xFXFireworksUpdate(float32 dt);
void xFXFireworksLaunch(float32 countdownTime, xVec3* pos, float32 fuelTime);
void xFXFireworksInit(int8* fireworksTrailEmitter, int8* fireworksEmitter1, int8* fireworksEmitter2, int8* fireworksSound, int8* fireworksLaunchSound);
void xFXRenderProximityFade(xModelInstance& model, float32 near_dist, float32 far_dist);
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd);
void lerp(vert_data& v, float32 frac, vert_data& v0, vert_data& v1);
void depth_sort(uint16* index, tri_data_0* tri, uint32 size);
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic);
void xFXanimUV2PSetTexture(RwTexture* texture);
void xFXanimUV2PSetAngle(float32 angle);
void xFXanimUV2PSetScale(xVec3* scale);
void xFXanimUV2PSetTranslation(xVec3* trans);
void xFXanimUVSetAngle(float32 angle);
void xFXanimUVSetScale(xVec3* scale);
void xFXanimUVSetTranslation(xVec3* trans);
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess);
RpAtomic* xFXShinyRender(RpAtomic* atomic);
RpAtomic* xFXBubbleRender(RpAtomic* atomic);
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data);
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data);
RpMaterial* MaterialSetShininess(RpMaterial* material);
void xFXPreAllocMatFX(RpClump* clump);
RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic);
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic);
RpMaterial* MaterialDisableMatFX(RpMaterial* material);
void xFXUpdate(float32 dt);
void xFX_SceneExit();
void xFX_SceneEnter(RpWorld* world);
void xFXRingRender();
void xFXRingUpdate(float32 dt);
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params);
void DrawRing(xFXRing* m);
void xFXInit();

// xFXSceneFinish__Fv
// Start address: 0x1e4130
void xFXSceneFinish()
{
}

// xFXScenePrepare__Fv
// Start address: 0x1e4140
void xFXScenePrepare()
{
}

// xFXSceneReset__Fv
// Start address: 0x1e4150
void xFXSceneReset()
{
}

// xFXSceneSetup__Fv
// Start address: 0x1e4160
void xFXSceneSetup()
{
}

// xFXSceneInit__Fv
// Start address: 0x1e41a0
void xFXSceneInit()
{
}

// xFXShutdown__Fv
// Start address: 0x1e41b0
void xFXShutdown()
{
}

// xFXStartup__Fv
// Start address: 0x1e41c0
void xFXStartup()
{
}

// xFXAuraRender__Fv
// Start address: 0x1e41d0
void xFXAuraRender()
{
	int32 fogstate;
	_xFXAura* ap;
	int32 i;
	int32 i;
}

// RenderRotatedBillboard__FP5xVec3P13_xFXAuraAngleUiff10iColor_tagUi
// Start address: 0x1e4360
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, uint32 count, float32 width, float32 height, iColor_tag tint, uint32 flipUV)
{
	uint32 i;
	type_71 vert;
	RxObjSpace3DVertex* vp;
	xMat4x3* cammat;
	xVec3* rt;
	xVec3* up;
	float32 zero;
	float32 one;
	float32 nearclip;
	xVec3 myat;
	float32 depth;
	float32 camdist;
	float32 at_offset;
	float32 scale;
	float32 dx;
	float32 dy;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// xFXAuraUpdate__Ff
// Start address: 0x1e48e0
void xFXAuraUpdate(float32 dt)
{
	_xFXAura* ap;
	int32 i;
}

// xFXAuraAdd__FPvP5xVec3P10iColor_tagf
// Start address: 0x1e4ab0
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, float32 size)
{
	int32 i;
	_xFXAura* ap;
}

// xFXRibbonRender__Fv
// Start address: 0x1e4bc0
void xFXRibbonRender()
{
	xFXRibbon* prev;
	uint32 i;
	xFXRibbon* ribbon;
}

// xFXRibbonSceneEnter__Fv
// Start address: 0x1e4d00
void xFXRibbonSceneEnter()
{
}

// render_compare__9xFXRibbonCFRC9xFXRibbon
// Start address: 0x1e5080
int32 render_compare(xFXRibbon* this, xFXRibbon& c)
{
}

// render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue<Q29xFXRibbon10joint_data>8iteratorUi
// Start address: 0x1e5120
void render_strip(xFXRibbon* this, RxObjSpace3DVertex* verts, iterator first, uint32 size)
{
	RxObjSpace3DVertex* v;
	int32 back;
	type_81 ulookup;
	iterator last;
	iColor_tag color;
	float32 width;
	float32 offset1;
	float32 offset2;
	float32 u;
	xVec3 loc1;
	xVec3 loc2;
}

// eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10iColor_tagRf
// Start address: 0x1e5580
void eval_joint(xFXRibbon* this, joint_data& joint, iColor_tag& color, float32& width)
{
	float32 frac;
	curve_node& node0;
	curve_node& node1;
	float32 subfrac;
}

// refresh_joint__9xFXRibbonFRQ29xFXRibbon10joint_dataRCQ236tier_queue<Q29xFXRibbon10joint_data>8iterator
// Start address: 0x1e5a40
void refresh_joint(xFXRibbon* this, joint_data& joint, iterator& it)
{
	xVec3 offset;
	xVec3 dir;
}

// get_normal__9xFXRibbonFR5xVec3RC5xVec3f
// Start address: 0x1e5da0
void get_normal(xVec3& norm, xVec3& dir, float32 orient)
{
	float32 a;
	float32 b;
	float32 ax;
	float32 ay;
	float32 az;
}

// set_texture__9xFXRibbonFPCc
// Start address: 0x1e6050
void set_texture(xFXRibbon* this, int8* name)
{
}

// set_texture__9xFXRibbonFUi
// Start address: 0x1e60d0
void set_texture(xFXRibbon* this, uint32 id)
{
}

// render__9xFXRibbonFv
// Start address: 0x1e6140
void render(xFXRibbon* this)
{
	RxObjSpace3DVertex* verts;
	int32 it;
	int32 subsize;
	int32 next_it;
	int32 break_it;
}

// update__9xFXRibbonFf
// Start address: 0x1e62d0
void update(xFXRibbon* this, float32 dt)
{
}

// insert__9xFXRibbonFRC5xVec3fffUi
// Start address: 0x1e6850
void insert(xFXRibbon* this, xVec3& loc, float32 orient, float32 scale, float32 alpha, uint32 flags)
{
}

// insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
// Start address: 0x1e6b90
void insert(xFXRibbon* this, xVec3& loc, xVec3& norm, float32 scale, float32 alpha, uint32 flags)
{
}

// set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUi
// Start address: 0x1e6ed0
void set_curve(xFXRibbon* this, curve_node* curve, uint32 size)
{
}

// refresh_config__9xFXRibbonFv
// Start address: 0x1e6ee0
void refresh_config(xFXRibbon* this)
{
}

// set_default_config__9xFXRibbonFv
// Start address: 0x1e6f60
void set_default_config(xFXRibbon* this)
{
}

// init__9xFXRibbonFPCcPCc
// Start address: 0x1e7000
void init(xFXRibbon* this)
{
}

// compare_ribbons__17@unnamed@xFX_cpp@FPCvPCv
// Start address: 0x1e70e0
int32 compare_ribbons(void* e1, void* e2)
{
}

// xFXShineStart__FPC5xVec3ffffUiPC10iColor_tagPC10iColor_tagfi
// Start address: 0x1e7140
uint32 xFXShineStart()
{
}

// xFXShineRender__Fv
// Start address: 0x1e7150
void xFXShineRender()
{
	xFXShineElem* e;
	int32 shine;
	xFXShine* s;
	int32 j;
	RxObjSpace3DVertex* vert;
	RwFrame* frame;
	xVec3 v;
	xVec3 w;
	float32 uoff;
	xMat3x3 mat;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_116 blah;
}

// xFXShineUpdate__Ff
// Start address: 0x1e7810
void xFXShineUpdate(float32 dt)
{
	int32 i;
	xFXShine* s;
	int32 j;
	xFXShineElem* e;
	int32 done;
	int32 j;
}

// xFXShineInit__Fv
// Start address: 0x1e7bc0
void xFXShineInit()
{
	int32 i;
}

// xFXStreakUpdate__FUiPC5xVec3PC5xVec3
// Start address: 0x1e7c20
void xFXStreakUpdate(uint32 id, xVec3* a, xVec3* b)
{
	xFXStreak* s;
}

// xFXStreakStop__FUi
// Start address: 0x1e7cf0
void xFXStreakStop(uint32 id)
{
	xFXStreak* s;
}

// xFXStreakStart__FfffUiPC10iColor_tagPC10iColor_tagi
// Start address: 0x1e7d50
uint32 xFXStreakStart(float32 frequency, float32 alphaFadeRate, float32 alphaStart, uint32 textureID, iColor_tag* edge_a, iColor_tag* edge_b, int32 taper)
{
	uint32 i;
	int32 j;
}

// xFXStreakRender__Fv
// Start address: 0x1e7ef0
void xFXStreakRender()
{
	xFXStreakElem* e1;
	int32 streak;
	xFXStreak* s;
	int32 count;
	int32 j;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_57 sStripVert;
}

// xFXStreakUpdate__Ff
// Start address: 0x1e82a0
void xFXStreakUpdate(float32 dt)
{
	int32 i;
	xFXStreak* s;
	int32 j;
	xFXStreakElem* e;
	xVec3 diff;
	int32 done;
	int32 j;
}

// xFXStreakInit__Fv
// Start address: 0x1e84b0
void xFXStreakInit()
{
	int32 i;
}

// xFXFireworksUpdate__Ff
// Start address: 0x1e8510
void xFXFireworksUpdate(float32 dt)
{
	int32 i;
	xParEmitterCustomSettings trail_info;
	zParEmitter* femit;
	xParEmitterCustomSettings xplo_info;
}

// xFXFireworksLaunch__FfPC5xVec3f
// Start address: 0x1e8ad0
void xFXFireworksLaunch(float32 countdownTime, xVec3* pos, float32 fuelTime)
{
	int32 i;
}

// xFXFireworksInit__FPCcPCcPCcPCcPCc
// Start address: 0x1e8b30
void xFXFireworksInit(int8* fireworksTrailEmitter, int8* fireworksEmitter1, int8* fireworksEmitter2, int8* fireworksSound, int8* fireworksLaunchSound)
{
	int32 i;
}

// xFXRenderProximityFade__FRC14xModelInstanceff
// Start address: 0x1e8bf0
void xFXRenderProximityFade(xModelInstance& model, float32 near_dist, float32 far_dist)
{
	RpGeometry* geom;
	RwRaster* raster;
	RpTriangle* tri;
	RwFrame* frame;
	RwTexCoords* uv;
	int32 vert_total;
	xVec3* vert;
	xVec3* normal;
	uint8* alpha;
	float32* depth;
	xMat4x3& cm;
	xVec3 ov;
	float32 zfrac;
	int32 i;
	float32 a;
	RxObjSpace3DVertex* out_vert;
	int32 tri_total;
	uint16* alpha_tri_index;
	tri_data_0* alpha_tri;
	uint32 alpha_tri_total;
	type_85 tri_buffer;
	tri_data_0 cur_tri;
	RpTriangle* end;
	type_106 vi;
	float32 d0;
	float32 d1;
	float32 d2;
	uint32 flags;
	int32 i;
	int32 size1;
	int32 j;
	uint32 i;
}

// set_vert__17@unnamed@xFX_cpp@FR18RxObjSpace3DVertexRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9da0
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd)
{
	uint8 alpha;
	float32 a;
	RwRGBA* _col;
}

// lerp__17@unnamed@xFX_cpp@FRQ217@unnamed@xFX_cpp@9vert_datafRCQ217@unnamed@xFX_cpp@9vert_dataRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9ea0
void lerp(vert_data& v, float32 frac, vert_data& v0, vert_data& v1)
{
}

// depth_sort__17@unnamed@xFX_cpp@FPUsPCQ217@unnamed@xFX_cpp@8tri_dataUi
// Start address: 0x1ea400
void depth_sort(uint16* index, tri_data_0* tri, uint32 size)
{
	uint32 i;
	uint16& e0;
	float32 d0;
	uint32 j;
	uint16 temp;
}

// xFXanimUVAtomicSetup__FP8RpAtomic
// Start address: 0x1ea4a0
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic)
{
}

// xFXanimUV2PSetTexture__FP9RwTexture
// Start address: 0x1ea4c0
void xFXanimUV2PSetTexture(RwTexture* texture)
{
}

// xFXanimUV2PSetAngle__Ff
// Start address: 0x1ea4d0
void xFXanimUV2PSetAngle(float32 angle)
{
}

// xFXanimUV2PSetScale__FPC5xVec3
// Start address: 0x1ea520
void xFXanimUV2PSetScale(xVec3* scale)
{
}

// xFXanimUV2PSetTranslation__FPC5xVec3
// Start address: 0x1ea540
void xFXanimUV2PSetTranslation(xVec3* trans)
{
}

// xFXanimUVSetAngle__Ff
// Start address: 0x1ea560
void xFXanimUVSetAngle(float32 angle)
{
}

// xFXanimUVSetScale__FPC5xVec3
// Start address: 0x1ea5b0
void xFXanimUVSetScale(xVec3* scale)
{
}

// xFXanimUVSetTranslation__FPC5xVec3
// Start address: 0x1ea5d0
void xFXanimUVSetTranslation(xVec3* trans)
{
}

// xFXAtomicEnvMapSetup__FP8RpAtomicUif
// Start address: 0x1ea5f0
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess)
{
	RwTexture* env;
	float32 tmp;
	RpSkin* skin;
}

// xFXShinyRender__FP8RpAtomic
// Start address: 0x1ea6c0
RpAtomic* xFXShinyRender(RpAtomic* atomic)
{
	RwCullMode cmode;
}

// xFXBubbleRender__FP8RpAtomic
// Start address: 0x1ea900
RpAtomic* xFXBubbleRender(RpAtomic* atomic)
{
	RwCullMode cmode;
	xFXBubbleParams* bp;
}

// MaterialSetEnvMap2__FP10RpMaterialPv
// Start address: 0x1eab60
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data)
{
	int8* textureName;
	RwTexture* texture;
	RwFrame* frame;
}

// MaterialSetEnvMap__FP10RpMaterialPv
// Start address: 0x1eac00
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data)
{
	RwTexture* texture;
	RwFrame* frame;
}

// MaterialSetShininess__FP10RpMaterialPv
// Start address: 0x1eacd0
RpMaterial* MaterialSetShininess(RpMaterial* material)
{
	RpMatFXMaterialFlags flags;
}

// xFXPreAllocMatFX__FP7RpClump
// Start address: 0x1ead20
void xFXPreAllocMatFX(RpClump* clump)
{
}

// PreAllocMatFX_cb__FP8RpAtomicPv
// Start address: 0x1ead30
RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic)
{
}

// AtomicDisableMatFX__FP8RpAtomic
// Start address: 0x1ead80
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic)
{
	RpGeometry* geometry;
}

// MaterialDisableMatFX__FP10RpMaterialPv
// Start address: 0x1eadd0
RpMaterial* MaterialDisableMatFX(RpMaterial* material)
{
}

// xFXUpdate__Ff
// Start address: 0x1eae00
void xFXUpdate(float32 dt)
{
}

// xFX_SceneExit__FP7RpWorld
// Start address: 0x1eae80
void xFX_SceneExit()
{
}

// xFX_SceneEnter__FP7RpWorld
// Start address: 0x1eae90
void xFX_SceneEnter(RpWorld* world)
{
	int32 i;
	int32 num;
	xSurface* sp;
	zSurfaceProps* pp;
	zSurfMatFX* fxp;
	RpMaterial* mp;
	RwTexture* env;
	RwTexture* bump;
	RwTexture* env;
	RwTexture* bump;
	zScene* sc;
	xEnt* ent;
	type_35 tmp;
	uint32 bubble;
}

// xFXRingRender__Fv
// Start address: 0x1eb2c0
void xFXRingRender()
{
	int32 i;
	xFXRing* ring;
}

// xFXRingUpdate__Ff
// Start address: 0x1eb330
void xFXRingUpdate(float32 dt)
{
	xFXRing* ring;
	int32 i;
	float32 lifetime;
	float32 t;
}

// xFXRingCreate__FPC5xVec3PC7xFXRing
// Start address: 0x1eb3f0
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params)
{
	xFXRing* ring;
	int32 i;
}

// DrawRing__FP7xFXRing
// Start address: 0x1eb500
void DrawRing(xFXRing* m)
{
	int32 i;
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
	float32 u;
	float32 radius;
	float32 oradius;
	float32 height;
	float32 tilt;
	RwCullMode cmode;
	float32 dt;
	xVec3* center;
	RxObjSpace3DVertex* Im3DBuffer;
	RxObjSpace3DVertex* imv;
	float32 oour;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// xFXInit__Fv
// Start address: 0x1ebca0
void xFXInit()
{
	RpLight* light;
	RwFrame* frame;
}

