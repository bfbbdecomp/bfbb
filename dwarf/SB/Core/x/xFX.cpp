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

typedef s32(*type_0)(void*, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_8)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_11)(RxPipelineNode*, u32, u32, void*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef s32(*type_14)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_15)(void*, void*);
typedef s32(*type_20)(RxNodeDefinition*);
typedef RpMaterial*(*type_21)(RpMaterial*, void*);
typedef void(*type_23)(void*);
typedef void(*type_24)(RxNodeDefinition*);
typedef s32(*type_28)(RxPipelineNode*);
typedef void(*type_30)(xAnimPlay*, xAnimState*);
typedef void(*type_32)(RxPipelineNode*);
typedef RpMaterial*(*type_33)(RpMaterial*, void*);
typedef RpMaterial*(*type_34)(RpMaterial*, void*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef u32(*type_36)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_37)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef xBase*(*type_51)(u32);
typedef void(*type_54)(xEnt*, xScene*, f32);
typedef s8*(*type_56)(xBase*);
typedef RpMaterial*(*type_63)(RpMaterial*, void*);
typedef s8*(*type_64)(u32);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_72)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_74)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_75)(xEnt*);
typedef RpAtomic*(*type_76)(RpAtomic*);
typedef RpAtomic*(*type_77)(RpAtomic*);
typedef u32(*type_78)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_87)(xEnt*, xEnt*, xScene*, f32, xCollis*);
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
typedef u32 type_2[15];
typedef vert_data type_3[3];
typedef s8 type_5[16];
typedef u32 type_6[15];
typedef RwTexCoords* type_7[8];
typedef RwFrustumPlane type_9[6];
typedef _xFXAura type_10[32];
typedef u32 type_12[15];
typedef xFXRibbon* type_16[64];
typedef RwV3d type_17[8];
typedef s8 type_18[4];
typedef u8 type_19[22];
typedef f32 type_22[2];
typedef u8 type_25[22];
typedef zSurfacePropTexAnim type_26[2];
typedef u8 type_27[300];
typedef zSurfacePropUVFX type_29[2];
typedef u16 type_31[3];
typedef u32 type_38[11];
typedef f32 type_39[2];
typedef xVec3 type_41[5];
typedef xVec3 type_42[3];
typedef u8 type_43[43];
typedef _tagFirework type_44[10];
typedef u8 type_45[5];
typedef u8 type_46[2];
typedef u32 type_47[2];
typedef u8 type_48[2];
typedef f32 type_49[6];
typedef _xFXAuraAngle type_50[2];
typedef f32 type_52[3];
typedef s8* type_53[11];
typedef u8 type_55[3];
typedef RxObjSpace3DVertex type_57[4];
typedef f32 type_58[3];
typedef f32 type_59[22];
typedef f32 type_60[2];
typedef xVec3 type_61[2];
typedef u8 type_62[3];
typedef xModelTag type_65[2];
typedef xFXBubbleParams type_66[1];
typedef f32 type_68[3];
typedef f32 type_69[22];
typedef f32 type_70[16];
typedef RxObjSpace3DVertex type_71[384];
typedef u8 type_73[3];
typedef RwTexCoords* type_79[8];
typedef RpLight* type_80[2];
typedef f32 type_81[2];
typedef RwFrame* type_82[2];
typedef xEnt* type_83[111];
typedef tri_data_0 type_84[3];
typedef type_84 type_85[2];
typedef zSurfTextureAnim type_86[2];
typedef f32 type_88[2];
typedef f32 type_90[2];
typedef u8 type_92[256];
typedef zSurfUVFX type_93[2];
typedef u32 type_94[4];
typedef u32 type_95[72];
typedef analog_data type_96[2];
typedef u8 type_97[3];
typedef xBase* type_98[72];
typedef xVec3 type_99[4];
typedef u8 type_100[300];
typedef u8 type_101[14];
typedef f32 type_102[2];
typedef xModelTag type_103[4];
typedef f32 type_104[2];
typedef u16 type_106[3];
typedef u32 type_107[4096];
typedef xModelInstance* type_108[14];
typedef xFXStreakElem type_110[50];
typedef f32 type_111[4];
typedef xFXRing type_113[8];
typedef u8 type_114[4];
typedef xFXShineElem type_115[100];
typedef RxObjSpace3DVertex type_116[4];
typedef xFXStreak type_117[10];
typedef xCollis type_120[18];
typedef xVec4 type_121[12];
typedef u8 type_123[3];
typedef xFXShine type_124[2];
typedef s8 type_125[32];
typedef s8 type_126[32];
typedef xParInterp type_127[1];
typedef f32 type_129[2];
typedef f32 type_130[2];
typedef u16 type_131[3];
typedef f32 type_132[4];
typedef RxCluster type_133[1];
typedef f32 type_134[2];
typedef xVec3 type_135[60];
typedef xParInterp type_137[4];
typedef f32 type_138[2];
typedef s8 type_139[128];
typedef f32 type_140[2];
typedef type_139 type_141[6];
typedef f32 type_143[2];
typedef xParInterp type_144[4];
typedef f32 type_145[2];
typedef s8 type_146[16];
typedef s8 type_147[32];
typedef f32 type_148[2];
typedef u8 type_150[3];
typedef u8 type_151[2];

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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_125 name;
	type_126 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xFXRibbon
{
	config cfg;
	u8 activated;
	RwRaster* raster;
	tier_queue joints;
	curve_node* curve;
	u32 curve_size;
	u32 curve_index;
	f32 ilife;
	u32 mtime;
	u32 mlife;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct config
{
	f32 life_time;
	u32 blend_src;
	u32 blend_dst;
	f32 pivot;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_8 eventFunc;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_138 BilinearLerp;
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

struct zSurfUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
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
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RpSkin
{
};

struct xFXStreak
{
	u32 flags;
	f32 frequency;
	f32 alphaFadeRate;
	f32 alphaStart;
	f32 elapsed;
	f32 lifetime;
	u32 head;
	iColor_tag color_a;
	iColor_tag color_b;
	RwTexture* texturePtr;
	RwRaster* textureRasterPtr;
	type_110 elem;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
};

struct block_data
{
	u8 prev;
	u8 next;
	u16 flags;
	void* data;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct curve_node
{
	f32 time;
	iColor_tag color;
	f32 scale;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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
	type_94 pad;
};

struct _tagxPad
{
	type_19 value;
	type_25 last_value;
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
	type_59 up_tmr;
	type_69 down_tmr;
	type_96 analog;
};

struct xFXBubbleParams
{
	union
	{
		u32 pass1;
		u32 pass2;
		u32 pass3;
		u32 padding;
	};
	u8 pass1_alpha;
	u8 pass2_alpha;
	u8 pass3_alpha;
	u32 pass1_fbmsk;
	u32 fresnel_map;
	f32 fresnel_map_coeff;
	u32 env_map;
	f32 env_map_coeff;
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
	type_65 BubbleWandTag;
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
	type_103 HangPawTag;
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
	type_2 Inv_PatsSock;
	type_6 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_12 Inv_LevelPickups;
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
	type_47 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_83 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_101 sb_model_indices;
	type_108 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	u32 texanim_flags;
	type_26 texanim;
	u32 uvfx_flags;
	type_29 uvfx;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	_class_1 anim_coll;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct zSurfAssetBase : xBaseAsset
{
	u8 game_damage_type;
	u8 game_sticky;
	u8 game_damage_flags;
	u8 surf_type;
	u8 phys_pad;
	u8 sld_start;
	u8 sld_stop;
	u8 phys_flags;
	f32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	u32 texture_anim_flags;
	type_86 texture_anim;
	u32 uvfx_flags;
	type_93 uvfx;
	u8 on;
	type_97 surf_pad;
	f32 oob_delay;
	f32 walljump_scale_xz;
	f32 walljump_scale_y;
	f32 damage_timer;
	f32 damage_bounce;
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
	type_40 BeforeAnimMatrices;
};

struct _tagFirework
{
	s32 state;
	f32 timer;
	xVec3 vel;
	xVec3 pos;
	f32 fuel;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_36 Callback;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_132 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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

struct joint_data
{
	u32 flags;
	u32 born;
	xVec3 loc;
	xVec3 norm;
	f32 orient;
	f32 scale;
	f32 alpha;
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
	type_73 pad;
	void* moprops;
};

struct _xFXAuraAngle
{
	f32 angle;
	f32 cc;
	f32 ss;
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

struct xFXShine
{
	u32 flags;
	xVec3* ppos;
	xVec3 pos;
	f32 spd;
	f32 width;
	f32 frequency;
	f32 elapsed;
	f32 lifetimeElemMax;
	f32 lifetimeMax;
	f32 lifetime;
	f32 rotateSpeed;
	f32 rotateZ;
	iColor_tag color_a;
	iColor_tag color_b;
	RwTexture* texturePtr;
	RwRaster* textureRasterPtr;
	type_115 elem;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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

struct xFXRing
{
	u32 texture;
	f32 lifetime;
	xVec3 pos;
	f32 time;
	f32 ring_radius;
	f32 ring_radius_delta;
	f32 ring_tilt;
	f32 ring_tilt_delta;
	f32 ring_height;
	f32 ring_height_delta;
	iColor_tag ring_color;
	u16 ring_segs;
	u8 u_repeat;
	u8 v_repeat;
	xFXRing** parent;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RpTriangle
{
	type_31 vertIndex;
	s16 matIndex;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_49 MoveSpeed;
	type_52 AnimSneak;
	type_58 AnimWalk;
	type_68 AnimRun;
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
	u32 mode;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_55 emit_pad;
	type_62 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
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
	u16 index;
	s16 groupIndex;
	type_15 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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
	type_91 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
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

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct rxReq
{
};

struct zSurfMatFX
{
	u32 flags;
	u32 bumpmapID;
	u32 envmapID;
	f32 shininess;
	f32 bumpiness;
	u32 dualmapID;
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
	f32 depth;
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

struct tier_queue_allocator
{
	block_data* blocks;
	u32 _unit_size;
	u32 _block_size;
	u32 _block_size_shift;
	u32 _max_blocks;
	u32 _max_blocks_shift;
	u8 head;
};

struct xShadowSimplePoly
{
	type_42 vert;
	xVec3 norm;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_122 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct tier_queue
{
	u32 first;
	u32 _size;
	u32 wrap_mask;
	tier_queue_allocator* alloc;
	type_92 blocks;
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
	type_95 baseCount;
	type_98 baseList;
	_zEnv* zen;
};

struct _xFXAura
{
	xVec3 pos;
	iColor_tag color;
	f32 size;
	void* parent;
	u32 frame;
	type_60 dangle;
};

struct xFXShineElem
{
	u32 flag;
	xVec3 p;
	xVec3 vel;
	f32 lifetime;
	f32 a;
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
	u32 pad3;
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
	s32 memlvl;
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
	u32 flag;
	type_61 p;
	f32 a;
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
	type_70 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_151 NumAnims;
	void** RawData;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	type_56 base2Name;
	type_64 id2Name;
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
	type_99 corner;
};

struct iterator
{
	u32 it;
	tier_queue* owner;
};

struct iColor_tag
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
	f32 r;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	f32 r;
	f32 h;
};

struct RpSector
{
	s32 type;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
		_class_0 tuv;
		tri_data_2 tri;
	};
};

struct xParInterp
{
	type_90 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
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
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_111 wt;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xFFX
{
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
	f32 radius;
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
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct RxOutputSpec
{
	s8* name;
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
	type_121 frustplane;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_148 radius;
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

struct zCutsceneMgr
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct zSurfTextureAnim
{
	u16 pad;
	u16 mode;
	u32 group;
	f32 speed;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
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
	u32 creationAttributes;
};

struct tagiRenderInput
{
	u16* m_index;
	RxObjSpace3DVertex* m_vertex;
	f32* m_vertexTZ;
	u32 m_mode;
	s32 m_vertexType;
	s32 m_vertexTypeSize;
	s32 m_indexCount;
	s32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
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
	tri_data_1 tri;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct zSurfacePropTexAnim
{
	u16 mode;
	f32 speed;
	f32 frame;
	u32 group;
	s32 group_idx;
	xBase* group_ptr;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xAnimMultiFileEntry
{
	u32 ID;
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
	u32 Handle;
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
	f32 radius;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_133 clusters;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_141 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_147 sceneStart;
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
	u16 matIndex;
	type_131 vertIndex;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_135 tranTable;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_142 sync;
};

struct zSurfacePropUVFX
{
	s32 mode;
	f32 rot;
	f32 rot_spd;
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
	u16 flags;
	u16 mode;
	f32 speed;
};

struct xAnimMultiFileBase
{
	u32 Count;
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
	f32 yaw;
	xCollis* coll;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct tri_data_2
{
	u32 index;
	f32 r;
	f32 d;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_150 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

struct _tagiPad
{
	s32 port;
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
f32 EnvMapShininess;
f32 BumpMapBumpiness;
RpLight* MainLight;
u32 xfx_initted;
type_113 ringlist;
RxObjSpace3DVertex* Im3DBuffer;
u32 Im3DBufferPos;
RwTexture* g_txtr_drawRing;
type_66 defaultBFX;
u32 bfx_curr;
u32 bfx_max;
xFXBubbleParams* BFX;
u32 sFresnelMap;
u32 sEnvMap;
s32 sTweaked;
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
u32 sFireworkSoundID;
u32 sFireworkLaunchSoundID;
type_117 sStreakList;
type_124 sShineList;
type_16 active_ribbons;
u32 active_ribbons_size;
u8 ribbons_dirty;
type_53 blend_mode_labels;
type_38 blend_mode_values;
u32 blend_modes;
tier_queue_allocator joint_alloc;
type_102 sAuraPulse;
type_145 sAuraPulseAng;
type_50 sAuraAngle;
RwTexture* gAuraTex;
type_10 sAura;
u32 gFrameCount;
type_107 ourGlobals;
type_0 compare_ribbons;
u32 gActiveHeap;
tagiRenderInput gRenderBuffer;
zGlobals globals;
type_105 AtomicResetMaterialEffects;
type_34 MaterialResetEffects;
u32 gFXSurfaceFlags;
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
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, u32 count, f32 width, f32 height, iColor_tag tint, u32 flipUV);
void xFXAuraUpdate(f32 dt);
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, f32 size);
void xFXRibbonRender();
void xFXRibbonSceneEnter();
s32 render_compare(xFXRibbon* this, xFXRibbon& c);
void render_strip(xFXRibbon* this, RxObjSpace3DVertex* verts, iterator first, u32 size);
void eval_joint(xFXRibbon* this, joint_data& joint, iColor_tag& color, f32& width);
void refresh_joint(xFXRibbon* this, joint_data& joint, iterator& it);
void get_normal(xVec3& norm, xVec3& dir, f32 orient);
void set_texture(xFXRibbon* this, s8* name);
void set_texture(xFXRibbon* this, u32 id);
void render(xFXRibbon* this);
void update(xFXRibbon* this, f32 dt);
void insert(xFXRibbon* this, xVec3& loc, f32 orient, f32 scale, f32 alpha, u32 flags);
void insert(xFXRibbon* this, xVec3& loc, xVec3& norm, f32 scale, f32 alpha, u32 flags);
void set_curve(xFXRibbon* this, curve_node* curve, u32 size);
void refresh_config(xFXRibbon* this);
void set_default_config(xFXRibbon* this);
void init(xFXRibbon* this);
s32 compare_ribbons(void* e1, void* e2);
u32 xFXShineStart();
void xFXShineRender();
void xFXShineUpdate(f32 dt);
void xFXShineInit();
void xFXStreakUpdate(u32 id, xVec3* a, xVec3* b);
void xFXStreakStop(u32 id);
u32 xFXStreakStart(f32 frequency, f32 alphaFadeRate, f32 alphaStart, u32 textureID, iColor_tag* edge_a, iColor_tag* edge_b, s32 taper);
void xFXStreakRender();
void xFXStreakUpdate(f32 dt);
void xFXStreakInit();
void xFXFireworksUpdate(f32 dt);
void xFXFireworksLaunch(f32 countdownTime, xVec3* pos, f32 fuelTime);
void xFXFireworksInit(s8* fireworksTrailEmitter, s8* fireworksEmitter1, s8* fireworksEmitter2, s8* fireworksSound, s8* fireworksLaunchSound);
void xFXRenderProximityFade(xModelInstance& model, f32 near_dist, f32 far_dist);
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd);
void lerp(vert_data& v, f32 frac, vert_data& v0, vert_data& v1);
void depth_sort(u16* index, tri_data_0* tri, u32 size);
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic);
void xFXanimUV2PSetTexture(RwTexture* texture);
void xFXanimUV2PSetAngle(f32 angle);
void xFXanimUV2PSetScale(xVec3* scale);
void xFXanimUV2PSetTranslation(xVec3* trans);
void xFXanimUVSetAngle(f32 angle);
void xFXanimUVSetScale(xVec3* scale);
void xFXanimUVSetTranslation(xVec3* trans);
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, u32 envmapID, f32 shininess);
RpAtomic* xFXShinyRender(RpAtomic* atomic);
RpAtomic* xFXBubbleRender(RpAtomic* atomic);
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data);
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data);
RpMaterial* MaterialSetShininess(RpMaterial* material);
void xFXPreAllocMatFX(RpClump* clump);
RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic);
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic);
RpMaterial* MaterialDisableMatFX(RpMaterial* material);
void xFXUpdate(f32 dt);
void xFX_SceneExit();
void xFX_SceneEnter(RpWorld* world);
void xFXRingRender();
void xFXRingUpdate(f32 dt);
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
	s32 fogstate;
	_xFXAura* ap;
	s32 i;
	s32 i;
}

// RenderRotatedBillboard__FP5xVec3P13_xFXAuraAngleUiff10iColor_tagUi
// Start address: 0x1e4360
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, u32 count, f32 width, f32 height, iColor_tag tint, u32 flipUV)
{
	u32 i;
	type_71 vert;
	RxObjSpace3DVertex* vp;
	xMat4x3* cammat;
	xVec3* rt;
	xVec3* up;
	f32 zero;
	f32 one;
	f32 nearclip;
	xVec3 myat;
	f32 depth;
	f32 camdist;
	f32 at_offset;
	f32 scale;
	f32 dx;
	f32 dy;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// xFXAuraUpdate__Ff
// Start address: 0x1e48e0
void xFXAuraUpdate(f32 dt)
{
	_xFXAura* ap;
	s32 i;
}

// xFXAuraAdd__FPvP5xVec3P10iColor_tagf
// Start address: 0x1e4ab0
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, f32 size)
{
	s32 i;
	_xFXAura* ap;
}

// xFXRibbonRender__Fv
// Start address: 0x1e4bc0
void xFXRibbonRender()
{
	xFXRibbon* prev;
	u32 i;
	xFXRibbon* ribbon;
}

// xFXRibbonSceneEnter__Fv
// Start address: 0x1e4d00
void xFXRibbonSceneEnter()
{
}

// render_compare__9xFXRibbonCFRC9xFXRibbon
// Start address: 0x1e5080
s32 render_compare(xFXRibbon* this, xFXRibbon& c)
{
}

// render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue<Q29xFXRibbon10joint_data>8iteratorUi
// Start address: 0x1e5120
void render_strip(xFXRibbon* this, RxObjSpace3DVertex* verts, iterator first, u32 size)
{
	RxObjSpace3DVertex* v;
	s32 back;
	type_81 ulookup;
	iterator last;
	iColor_tag color;
	f32 width;
	f32 offset1;
	f32 offset2;
	f32 u;
	xVec3 loc1;
	xVec3 loc2;
}

// eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10iColor_tagRf
// Start address: 0x1e5580
void eval_joint(xFXRibbon* this, joint_data& joint, iColor_tag& color, f32& width)
{
	f32 frac;
	curve_node& node0;
	curve_node& node1;
	f32 subfrac;
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
void get_normal(xVec3& norm, xVec3& dir, f32 orient)
{
	f32 a;
	f32 b;
	f32 ax;
	f32 ay;
	f32 az;
}

// set_texture__9xFXRibbonFPCc
// Start address: 0x1e6050
void set_texture(xFXRibbon* this, s8* name)
{
}

// set_texture__9xFXRibbonFUi
// Start address: 0x1e60d0
void set_texture(xFXRibbon* this, u32 id)
{
}

// render__9xFXRibbonFv
// Start address: 0x1e6140
void render(xFXRibbon* this)
{
	RxObjSpace3DVertex* verts;
	s32 it;
	s32 subsize;
	s32 next_it;
	s32 break_it;
}

// update__9xFXRibbonFf
// Start address: 0x1e62d0
void update(xFXRibbon* this, f32 dt)
{
}

// insert__9xFXRibbonFRC5xVec3fffUi
// Start address: 0x1e6850
void insert(xFXRibbon* this, xVec3& loc, f32 orient, f32 scale, f32 alpha, u32 flags)
{
}

// insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
// Start address: 0x1e6b90
void insert(xFXRibbon* this, xVec3& loc, xVec3& norm, f32 scale, f32 alpha, u32 flags)
{
}

// set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUi
// Start address: 0x1e6ed0
void set_curve(xFXRibbon* this, curve_node* curve, u32 size)
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
s32 compare_ribbons(void* e1, void* e2)
{
}

// xFXShineStart__FPC5xVec3ffffUiPC10iColor_tagPC10iColor_tagfi
// Start address: 0x1e7140
u32 xFXShineStart()
{
}

// xFXShineRender__Fv
// Start address: 0x1e7150
void xFXShineRender()
{
	xFXShineElem* e;
	s32 shine;
	xFXShine* s;
	s32 j;
	RxObjSpace3DVertex* vert;
	RwFrame* frame;
	xVec3 v;
	xVec3 w;
	f32 uoff;
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
void xFXShineUpdate(f32 dt)
{
	s32 i;
	xFXShine* s;
	s32 j;
	xFXShineElem* e;
	s32 done;
	s32 j;
}

// xFXShineInit__Fv
// Start address: 0x1e7bc0
void xFXShineInit()
{
	s32 i;
}

// xFXStreakUpdate__FUiPC5xVec3PC5xVec3
// Start address: 0x1e7c20
void xFXStreakUpdate(u32 id, xVec3* a, xVec3* b)
{
	xFXStreak* s;
}

// xFXStreakStop__FUi
// Start address: 0x1e7cf0
void xFXStreakStop(u32 id)
{
	xFXStreak* s;
}

// xFXStreakStart__FfffUiPC10iColor_tagPC10iColor_tagi
// Start address: 0x1e7d50
u32 xFXStreakStart(f32 frequency, f32 alphaFadeRate, f32 alphaStart, u32 textureID, iColor_tag* edge_a, iColor_tag* edge_b, s32 taper)
{
	u32 i;
	s32 j;
}

// xFXStreakRender__Fv
// Start address: 0x1e7ef0
void xFXStreakRender()
{
	xFXStreakElem* e1;
	s32 streak;
	xFXStreak* s;
	s32 count;
	s32 j;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_57 sStripVert;
}

// xFXStreakUpdate__Ff
// Start address: 0x1e82a0
void xFXStreakUpdate(f32 dt)
{
	s32 i;
	xFXStreak* s;
	s32 j;
	xFXStreakElem* e;
	xVec3 diff;
	s32 done;
	s32 j;
}

// xFXStreakInit__Fv
// Start address: 0x1e84b0
void xFXStreakInit()
{
	s32 i;
}

// xFXFireworksUpdate__Ff
// Start address: 0x1e8510
void xFXFireworksUpdate(f32 dt)
{
	s32 i;
	xParEmitterCustomSettings trail_info;
	zParEmitter* femit;
	xParEmitterCustomSettings xplo_info;
}

// xFXFireworksLaunch__FfPC5xVec3f
// Start address: 0x1e8ad0
void xFXFireworksLaunch(f32 countdownTime, xVec3* pos, f32 fuelTime)
{
	s32 i;
}

// xFXFireworksInit__FPCcPCcPCcPCcPCc
// Start address: 0x1e8b30
void xFXFireworksInit(s8* fireworksTrailEmitter, s8* fireworksEmitter1, s8* fireworksEmitter2, s8* fireworksSound, s8* fireworksLaunchSound)
{
	s32 i;
}

// xFXRenderProximityFade__FRC14xModelInstanceff
// Start address: 0x1e8bf0
void xFXRenderProximityFade(xModelInstance& model, f32 near_dist, f32 far_dist)
{
	RpGeometry* geom;
	RwRaster* raster;
	RpTriangle* tri;
	RwFrame* frame;
	RwTexCoords* uv;
	s32 vert_total;
	xVec3* vert;
	xVec3* normal;
	u8* alpha;
	f32* depth;
	xMat4x3& cm;
	xVec3 ov;
	f32 zfrac;
	s32 i;
	f32 a;
	RxObjSpace3DVertex* out_vert;
	s32 tri_total;
	u16* alpha_tri_index;
	tri_data_0* alpha_tri;
	u32 alpha_tri_total;
	type_85 tri_buffer;
	tri_data_0 cur_tri;
	RpTriangle* end;
	type_106 vi;
	f32 d0;
	f32 d1;
	f32 d2;
	u32 flags;
	s32 i;
	s32 size1;
	s32 j;
	u32 i;
}

// set_vert__17@unnamed@xFX_cpp@FR18RxObjSpace3DVertexRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9da0
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd)
{
	u8 alpha;
	f32 a;
	RwRGBA* _col;
}

// lerp__17@unnamed@xFX_cpp@FRQ217@unnamed@xFX_cpp@9vert_datafRCQ217@unnamed@xFX_cpp@9vert_dataRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9ea0
void lerp(vert_data& v, f32 frac, vert_data& v0, vert_data& v1)
{
}

// depth_sort__17@unnamed@xFX_cpp@FPUsPCQ217@unnamed@xFX_cpp@8tri_dataUi
// Start address: 0x1ea400
void depth_sort(u16* index, tri_data_0* tri, u32 size)
{
	u32 i;
	u16& e0;
	f32 d0;
	u32 j;
	u16 temp;
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
void xFXanimUV2PSetAngle(f32 angle)
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
void xFXanimUVSetAngle(f32 angle)
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
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, u32 envmapID, f32 shininess)
{
	RwTexture* env;
	f32 tmp;
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
	s8* textureName;
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
void xFXUpdate(f32 dt)
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
	s32 i;
	s32 num;
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
	u32 bubble;
}

// xFXRingRender__Fv
// Start address: 0x1eb2c0
void xFXRingRender()
{
	s32 i;
	xFXRing* ring;
}

// xFXRingUpdate__Ff
// Start address: 0x1eb330
void xFXRingUpdate(f32 dt)
{
	xFXRing* ring;
	s32 i;
	f32 lifetime;
	f32 t;
}

// xFXRingCreate__FPC5xVec3PC7xFXRing
// Start address: 0x1eb3f0
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params)
{
	xFXRing* ring;
	s32 i;
}

// DrawRing__FP7xFXRing
// Start address: 0x1eb500
void DrawRing(xFXRing* m)
{
	s32 i;
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
	f32 u;
	f32 radius;
	f32 oradius;
	f32 height;
	f32 tilt;
	RwCullMode cmode;
	f32 dt;
	xVec3* center;
	RxObjSpace3DVertex* Im3DBuffer;
	RxObjSpace3DVertex* imv;
	f32 oour;
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

