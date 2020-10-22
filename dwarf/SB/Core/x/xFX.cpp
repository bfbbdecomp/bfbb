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
typedef struct RxColorUnion;
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
typedef struct _class_2;
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
typedef tri_data_0 type_85[3][2];
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
typedef int8 type_141[128][6];
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
	RpClump*(*callback)(RpClump*, void*);
};

struct tri_data_0
{
	vert_data vert[3];
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

	int32 render_compare(xFXRibbon& c);
	void render_strip(RxObjSpace3DVertex* verts, iterator first, uint32 size);
	void eval_joint(joint_data& joint, iColor_tag& color, float32& width);
	void refresh_joint(joint_data& joint, iterator& it);
	void get_normal(xVec3& norm, xVec3& dir, float32 orient);
	void set_texture(int8* name);
	void set_texture(uint32 id);
	void render();
	void update(float32 dt);
	void insert(xVec3& loc, float32 orient, float32 scale, float32 alpha, uint32 flags);
	void insert(xVec3& loc, xVec3& norm, float32 scale, float32 alpha, uint32 flags);
	void set_curve(curve_node* curve, uint32 size);
	void refresh_config();
	void set_default_config();
	void init();
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	RwTexCoords* texCoords[8];
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
	xFXStreakElem elem[50];
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
	uint32 pad[4];
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

struct xFXBubbleParams
{
	struct
	{
		uint32 pass1 : 1;
		uint32 pass2 : 1;
		uint32 pass3 : 1;
		uint32 padding : 5;
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

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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
	int8 idtag[4];
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
	void(*destroyNotify)(RwResEntry*);
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
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	float32 param[4];
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
	uint8 pad[3];
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
	xFXShineElem elem[100];
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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

	void clear();
	void free_block(uint8 index);
	uint32 mod_block_size(uint32 i);
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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
	void(*InitCB)(xMemPool*, void*);
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

struct tier_queue
{
	uint32 first;
	uint32 _size;
	uint32 wrap_mask;
	tier_queue_allocator* alloc;
	uint8 blocks[256];

	uint32 get_block(uint32 i);
	uint32 wrap_index(uint32 i);
	void clear();
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

struct _xFXAura
{
	xVec3 pos;
	iColor_tag color;
	float32 size;
	void* parent;
	uint32 frame;
	float32 dangle[2];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	xVec3 p[2];
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
	float32 matrix[16];
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
	uint8 NumAnims[2];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	uint8 pad[3];
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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
	float32 val[2];
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
	float32 wt[4];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	xVec4 frustplane[12];
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	RxCluster clusters[1];
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
	uint16 vertIndex[3];
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	float32 minmax_timer[2];
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
	uint8 rot[3];
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

int8 buffer[16];
int8 buffer[16];
RpAtomic*(*gAtomicRenderCallBack)(RpAtomic*);
float32 EnvMapShininess;
float32 BumpMapBumpiness;
RpLight* MainLight;
uint32 xfx_initted;
xFXRing ringlist[8];
RxObjSpace3DVertex* Im3DBuffer;
uint32 Im3DBufferPos;
RwTexture* g_txtr_drawRing;
xFXBubbleParams defaultBFX[1];
uint32 bfx_curr;
uint32 bfx_max;
xFXBubbleParams* BFX;
uint32 sFresnelMap;
uint32 sEnvMap;
int32 sTweaked;
RxPipeline* xFXanimUVPipeline;
float32 xFXanimUVRotMat0[2];
float32 xFXanimUVRotMat1[2];
float32 xFXanimUVTrans[2];
float32 xFXanimUVScale[2];
float32 xFXanimUV2PRotMat0[2];
float32 xFXanimUV2PRotMat1[2];
float32 xFXanimUV2PTrans[2];
float32 xFXanimUV2PScale[2];
RwTexture* xFXanimUV2PTexture;
RxPipeline* xFXgooPipeline;
uint8 alpha_count0[300];
uint8 alpha_count1[300];
uint8 segments[43];
_tagFirework sFirework[10];
zParEmitter* sFireworkTrailEmit;
zParEmitter* sFirework1Emit;
zParEmitter* sFirework2Emit;
uint32 sFireworkSoundID;
uint32 sFireworkLaunchSoundID;
xFXStreak sStreakList[10];
xFXShine sShineList[2];
xFXRibbon* active_ribbons[64];
uint32 active_ribbons_size;
uint8 ribbons_dirty;
int8* blend_mode_labels[11];
uint32 blend_mode_values[11];
uint32 blend_modes;
tier_queue_allocator joint_alloc;
float32 sAuraPulse[2];
float32 sAuraPulseAng[2];
_xFXAuraAngle sAuraAngle[2];
RwTexture* gAuraTex;
_xFXAura sAura[32];
uint32 gFrameCount;
uint32 ourGlobals[4096];
int32(*compare_ribbons)(void*, void*);
uint32 gActiveHeap;
tagiRenderInput gRenderBuffer;
zGlobals globals;
RpAtomic*(*AtomicResetMaterialEffects)(RpAtomic*, void*);
RpMaterial*(*MaterialResetEffects)(RpMaterial*, void*);
uint32 gFXSurfaceFlags;
RpMaterial*(*MaterialSetBumpMap)(RpMaterial*, void*);
RpMaterial*(*MaterialSetBumpiness)(RpMaterial*, void*);
RpMaterial*(*MaterialSetShininess)(RpMaterial*, void*);
RpMaterial*(*MaterialSetEnvMap2)(RpMaterial*, void*);
RpMaterial*(*MatUpdateFrame)(RpMaterial*, void*);
RpMaterial*(*MaterialDisableMatFX)(RpMaterial*, void*);
RpAtomic*(*PreAllocMatFX_cb)(RpAtomic*, void*);
RpAtomic*(*AtomicDefaultRenderCallBack)(RpAtomic*);
RpAtomic*(*xFXBubbleRender)(RpAtomic*);

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
int32 render_compare(xFXRibbon& c);
void render_strip(RxObjSpace3DVertex* verts, iterator first, uint32 size);
void eval_joint(joint_data& joint, iColor_tag& color, float32& width);
void refresh_joint(joint_data& joint, iterator& it);
void get_normal(xVec3& norm, xVec3& dir, float32 orient);
void set_texture(int8* name);
void set_texture(uint32 id);
void render();
void update(float32 dt);
void insert(xVec3& loc, float32 orient, float32 scale, float32 alpha, uint32 flags);
void insert(xVec3& loc, xVec3& norm, float32 scale, float32 alpha, uint32 flags);
void set_curve(curve_node* curve, uint32 size);
void refresh_config();
void set_default_config();
void init();
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
	// Line 4586, Address: 0x1e4130, Func Offset: 0
	// Line 4589, Address: 0x1e4134, Func Offset: 0x4
	// Func End, Address: 0x1e413c, Func Offset: 0xc
}

// xFXScenePrepare__Fv
// Start address: 0x1e4140
void xFXScenePrepare()
{
	// Line 4582, Address: 0x1e4140, Func Offset: 0
	// Func End, Address: 0x1e4148, Func Offset: 0x8
}

// xFXSceneReset__Fv
// Start address: 0x1e4150
void xFXSceneReset()
{
	// Line 4577, Address: 0x1e4150, Func Offset: 0
	// Func End, Address: 0x1e4158, Func Offset: 0x8
}

// xFXSceneSetup__Fv
// Start address: 0x1e4160
void xFXSceneSetup()
{
	// Line 4567, Address: 0x1e4160, Func Offset: 0
	// Line 4568, Address: 0x1e4164, Func Offset: 0x4
	// Line 4567, Address: 0x1e4168, Func Offset: 0x8
	// Line 4568, Address: 0x1e416c, Func Offset: 0xc
	// Line 4569, Address: 0x1e417c, Func Offset: 0x1c
	// Line 4571, Address: 0x1e418c, Func Offset: 0x2c
	// Line 4573, Address: 0x1e4194, Func Offset: 0x34
	// Func End, Address: 0x1e41a0, Func Offset: 0x40
}

// xFXSceneInit__Fv
// Start address: 0x1e41a0
void xFXSceneInit()
{
	// Line 4564, Address: 0x1e41a0, Func Offset: 0
	// Func End, Address: 0x1e41a8, Func Offset: 0x8
}

// xFXShutdown__Fv
// Start address: 0x1e41b0
void xFXShutdown()
{
	// Line 4559, Address: 0x1e41b0, Func Offset: 0
	// Func End, Address: 0x1e41b8, Func Offset: 0x8
}

// xFXStartup__Fv
// Start address: 0x1e41c0
void xFXStartup()
{
	// Line 4554, Address: 0x1e41c0, Func Offset: 0
	// Func End, Address: 0x1e41c8, Func Offset: 0x8
}

// xFXAuraRender__Fv
// Start address: 0x1e41d0
void xFXAuraRender()
{
	int32 fogstate;
	_xFXAura* ap;
	int32 i;
	int32 i;
	// Line 4490, Address: 0x1e41d0, Func Offset: 0
	// Line 4491, Address: 0x1e41e4, Func Offset: 0x14
	// Line 4494, Address: 0x1e41ec, Func Offset: 0x1c
	// Line 4495, Address: 0x1e41f8, Func Offset: 0x28
	// Line 4496, Address: 0x1e4204, Func Offset: 0x34
	// Line 4497, Address: 0x1e4210, Func Offset: 0x40
	// Line 4498, Address: 0x1e421c, Func Offset: 0x4c
	// Line 4499, Address: 0x1e4228, Func Offset: 0x58
	// Line 4501, Address: 0x1e4234, Func Offset: 0x64
	// Line 4502, Address: 0x1e4240, Func Offset: 0x70
	// Line 4504, Address: 0x1e424c, Func Offset: 0x7c
	// Line 4510, Address: 0x1e4250, Func Offset: 0x80
	// Line 4504, Address: 0x1e4254, Func Offset: 0x84
	// Line 4511, Address: 0x1e4258, Func Offset: 0x88
	// Line 4516, Address: 0x1e4268, Func Offset: 0x98
	// Line 4511, Address: 0x1e426c, Func Offset: 0x9c
	// Line 4516, Address: 0x1e4270, Func Offset: 0xa0
	// Line 4517, Address: 0x1e4290, Func Offset: 0xc0
	// Line 4516, Address: 0x1e4294, Func Offset: 0xc4
	// Line 4517, Address: 0x1e4298, Func Offset: 0xc8
	// Line 4518, Address: 0x1e42b8, Func Offset: 0xe8
	// Line 4520, Address: 0x1e42c8, Func Offset: 0xf8
	// Line 4521, Address: 0x1e42d4, Func Offset: 0x104
	// Line 4522, Address: 0x1e42e0, Func Offset: 0x110
	// Line 4523, Address: 0x1e42ec, Func Offset: 0x11c
	// Line 4524, Address: 0x1e42f8, Func Offset: 0x128
	// Line 4529, Address: 0x1e4304, Func Offset: 0x134
	// Line 4530, Address: 0x1e4308, Func Offset: 0x138
	// Line 4529, Address: 0x1e430c, Func Offset: 0x13c
	// Line 4531, Address: 0x1e4310, Func Offset: 0x140
	// Line 4534, Address: 0x1e4324, Func Offset: 0x154
	// Line 4535, Address: 0x1e432c, Func Offset: 0x15c
	// Line 4536, Address: 0x1e4334, Func Offset: 0x164
	// Line 4537, Address: 0x1e4348, Func Offset: 0x178
	// Func End, Address: 0x1e435c, Func Offset: 0x18c
}

// RenderRotatedBillboard__FP5xVec3P13_xFXAuraAngleUiff10iColor_tagUi
// Start address: 0x1e4360
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, uint32 count, float32 width, float32 height, iColor_tag tint, uint32 flipUV)
{
	uint32 i;
	RxObjSpace3DVertex vert[384];
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
	// Line 4324, Address: 0x1e4360, Func Offset: 0
	// Line 4337, Address: 0x1e43c0, Func Offset: 0x60
	// Line 4324, Address: 0x1e43c4, Func Offset: 0x64
	// Line 4337, Address: 0x1e43c8, Func Offset: 0x68
	// Line 4342, Address: 0x1e43cc, Func Offset: 0x6c
	// Line 4343, Address: 0x1e43e0, Func Offset: 0x80
	// Line 4346, Address: 0x1e43e8, Func Offset: 0x88
	// Line 4351, Address: 0x1e43f0, Func Offset: 0x90
	// Line 4347, Address: 0x1e43f4, Func Offset: 0x94
	// Line 4346, Address: 0x1e43f8, Func Offset: 0x98
	// Line 4347, Address: 0x1e4404, Func Offset: 0xa4
	// Line 4346, Address: 0x1e4408, Func Offset: 0xa8
	// Line 4360, Address: 0x1e440c, Func Offset: 0xac
	// Line 4361, Address: 0x1e442c, Func Offset: 0xcc
	// Line 4370, Address: 0x1e4448, Func Offset: 0xe8
	// Line 4373, Address: 0x1e444c, Func Offset: 0xec
	// Line 4370, Address: 0x1e4450, Func Offset: 0xf0
	// Line 4374, Address: 0x1e445c, Func Offset: 0xfc
	// Line 4370, Address: 0x1e4460, Func Offset: 0x100
	// Line 4374, Address: 0x1e4464, Func Offset: 0x104
	// Line 4380, Address: 0x1e4490, Func Offset: 0x130
	// Line 4379, Address: 0x1e4494, Func Offset: 0x134
	// Line 4380, Address: 0x1e4498, Func Offset: 0x138
	// Line 4374, Address: 0x1e449c, Func Offset: 0x13c
	// Line 4379, Address: 0x1e44a0, Func Offset: 0x140
	// Line 4380, Address: 0x1e44d0, Func Offset: 0x170
	// Line 4381, Address: 0x1e44d8, Func Offset: 0x178
	// Line 4384, Address: 0x1e44e4, Func Offset: 0x184
	// Line 4385, Address: 0x1e44f0, Func Offset: 0x190
	// Line 4390, Address: 0x1e4500, Func Offset: 0x1a0
	// Line 4387, Address: 0x1e4504, Func Offset: 0x1a4
	// Line 4390, Address: 0x1e4508, Func Offset: 0x1a8
	// Line 4386, Address: 0x1e4510, Func Offset: 0x1b0
	// Line 4390, Address: 0x1e4514, Func Offset: 0x1b4
	// Line 4392, Address: 0x1e4520, Func Offset: 0x1c0
	// Line 4390, Address: 0x1e4524, Func Offset: 0x1c4
	// Line 4392, Address: 0x1e4534, Func Offset: 0x1d4
	// Line 4390, Address: 0x1e4538, Func Offset: 0x1d8
	// Line 4392, Address: 0x1e4540, Func Offset: 0x1e0
	// Line 4390, Address: 0x1e4544, Func Offset: 0x1e4
	// Line 4394, Address: 0x1e454c, Func Offset: 0x1ec
	// Line 4390, Address: 0x1e4554, Func Offset: 0x1f4
	// Line 4394, Address: 0x1e4558, Func Offset: 0x1f8
	// Line 4395, Address: 0x1e4560, Func Offset: 0x200
	// Line 4390, Address: 0x1e4564, Func Offset: 0x204
	// Line 4395, Address: 0x1e4568, Func Offset: 0x208
	// Line 4394, Address: 0x1e456c, Func Offset: 0x20c
	// Line 4395, Address: 0x1e4578, Func Offset: 0x218
	// Line 4398, Address: 0x1e4580, Func Offset: 0x220
	// Line 4399, Address: 0x1e4588, Func Offset: 0x228
	// Line 4400, Address: 0x1e4590, Func Offset: 0x230
	// Line 4399, Address: 0x1e4594, Func Offset: 0x234
	// Line 4400, Address: 0x1e4598, Func Offset: 0x238
	// Line 4399, Address: 0x1e459c, Func Offset: 0x23c
	// Line 4400, Address: 0x1e45a8, Func Offset: 0x248
	// Line 4405, Address: 0x1e45b4, Func Offset: 0x254
	// Line 4407, Address: 0x1e45dc, Func Offset: 0x27c
	// Line 4408, Address: 0x1e45ec, Func Offset: 0x28c
	// Line 4413, Address: 0x1e45f0, Func Offset: 0x290
	// Line 4414, Address: 0x1e45f8, Func Offset: 0x298
	// Line 4415, Address: 0x1e4608, Func Offset: 0x2a8
	// Line 4414, Address: 0x1e4610, Func Offset: 0x2b0
	// Line 4415, Address: 0x1e4614, Func Offset: 0x2b4
	// Line 4414, Address: 0x1e4624, Func Offset: 0x2c4
	// Line 4415, Address: 0x1e4630, Func Offset: 0x2d0
	// Line 4420, Address: 0x1e463c, Func Offset: 0x2dc
	// Line 4421, Address: 0x1e4664, Func Offset: 0x304
	// Line 4422, Address: 0x1e4674, Func Offset: 0x314
	// Line 4427, Address: 0x1e4678, Func Offset: 0x318
	// Line 4428, Address: 0x1e4680, Func Offset: 0x320
	// Line 4429, Address: 0x1e4688, Func Offset: 0x328
	// Line 4428, Address: 0x1e468c, Func Offset: 0x32c
	// Line 4429, Address: 0x1e469c, Func Offset: 0x33c
	// Line 4428, Address: 0x1e46ac, Func Offset: 0x34c
	// Line 4429, Address: 0x1e46b8, Func Offset: 0x358
	// Line 4434, Address: 0x1e46c4, Func Offset: 0x364
	// Line 4435, Address: 0x1e46ec, Func Offset: 0x38c
	// Line 4436, Address: 0x1e46fc, Func Offset: 0x39c
	// Line 4437, Address: 0x1e4700, Func Offset: 0x3a0
	// Line 4444, Address: 0x1e4704, Func Offset: 0x3a4
	// Line 4445, Address: 0x1e4710, Func Offset: 0x3b0
	// Line 4446, Address: 0x1e4720, Func Offset: 0x3c0
	// Line 4451, Address: 0x1e4724, Func Offset: 0x3c4
	// Line 4452, Address: 0x1e472c, Func Offset: 0x3cc
	// Line 4453, Address: 0x1e473c, Func Offset: 0x3dc
	// Line 4452, Address: 0x1e4744, Func Offset: 0x3e4
	// Line 4453, Address: 0x1e4748, Func Offset: 0x3e8
	// Line 4452, Address: 0x1e4758, Func Offset: 0x3f8
	// Line 4453, Address: 0x1e4764, Func Offset: 0x404
	// Line 4458, Address: 0x1e4770, Func Offset: 0x410
	// Line 4459, Address: 0x1e4794, Func Offset: 0x434
	// Line 4460, Address: 0x1e47a4, Func Offset: 0x444
	// Line 4465, Address: 0x1e47a8, Func Offset: 0x448
	// Line 4466, Address: 0x1e47b0, Func Offset: 0x450
	// Line 4467, Address: 0x1e47b4, Func Offset: 0x454
	// Line 4466, Address: 0x1e47b8, Func Offset: 0x458
	// Line 4467, Address: 0x1e47c4, Func Offset: 0x464
	// Line 4466, Address: 0x1e47c8, Func Offset: 0x468
	// Line 4467, Address: 0x1e47cc, Func Offset: 0x46c
	// Line 4466, Address: 0x1e47d8, Func Offset: 0x478
	// Line 4467, Address: 0x1e47e4, Func Offset: 0x484
	// Line 4472, Address: 0x1e47f0, Func Offset: 0x490
	// Line 4473, Address: 0x1e4814, Func Offset: 0x4b4
	// Line 4474, Address: 0x1e4824, Func Offset: 0x4c4
	// Line 4475, Address: 0x1e4828, Func Offset: 0x4c8
	// Line 4476, Address: 0x1e482c, Func Offset: 0x4cc
	// Line 4477, Address: 0x1e483c, Func Offset: 0x4dc
	// Line 4479, Address: 0x1e4868, Func Offset: 0x508
	// Line 4480, Address: 0x1e4888, Func Offset: 0x528
	// Line 4481, Address: 0x1e4890, Func Offset: 0x530
	// Line 4482, Address: 0x1e4898, Func Offset: 0x538
	// Func End, Address: 0x1e48dc, Func Offset: 0x57c
}

// xFXAuraUpdate__Ff
// Start address: 0x1e48e0
void xFXAuraUpdate(float32 dt)
{
	_xFXAura* ap;
	int32 i;
	// Line 4281, Address: 0x1e48e0, Func Offset: 0
	// Line 4282, Address: 0x1e48ec, Func Offset: 0xc
	// Line 4285, Address: 0x1e48f8, Func Offset: 0x18
	// Line 4286, Address: 0x1e48fc, Func Offset: 0x1c
	// Line 4285, Address: 0x1e4900, Func Offset: 0x20
	// Line 4286, Address: 0x1e4904, Func Offset: 0x24
	// Line 4285, Address: 0x1e4908, Func Offset: 0x28
	// Line 4287, Address: 0x1e4910, Func Offset: 0x30
	// Line 4285, Address: 0x1e4918, Func Offset: 0x38
	// Line 4286, Address: 0x1e4920, Func Offset: 0x40
	// Line 4287, Address: 0x1e4930, Func Offset: 0x50
	// Line 4288, Address: 0x1e4950, Func Offset: 0x70
	// Line 4289, Address: 0x1e4978, Func Offset: 0x98
	// Line 4290, Address: 0x1e498c, Func Offset: 0xac
	// Line 4289, Address: 0x1e4990, Func Offset: 0xb0
	// Line 4290, Address: 0x1e4994, Func Offset: 0xb4
	// Line 4293, Address: 0x1e49a0, Func Offset: 0xc0
	// Line 4290, Address: 0x1e49a4, Func Offset: 0xc4
	// Line 4293, Address: 0x1e49a8, Func Offset: 0xc8
	// Line 4290, Address: 0x1e49ac, Func Offset: 0xcc
	// Line 4293, Address: 0x1e49b0, Func Offset: 0xd0
	// Line 4290, Address: 0x1e49b4, Func Offset: 0xd4
	// Line 4294, Address: 0x1e49b8, Func Offset: 0xd8
	// Line 4293, Address: 0x1e49c0, Func Offset: 0xe0
	// Line 4290, Address: 0x1e49c8, Func Offset: 0xe8
	// Line 4293, Address: 0x1e49cc, Func Offset: 0xec
	// Line 4294, Address: 0x1e49d4, Func Offset: 0xf4
	// Line 4295, Address: 0x1e4a08, Func Offset: 0x128
	// Line 4296, Address: 0x1e4a1c, Func Offset: 0x13c
	// Line 4301, Address: 0x1e4a2c, Func Offset: 0x14c
	// Line 4296, Address: 0x1e4a30, Func Offset: 0x150
	// Line 4301, Address: 0x1e4a34, Func Offset: 0x154
	// Line 4297, Address: 0x1e4a38, Func Offset: 0x158
	// Line 4302, Address: 0x1e4a3c, Func Offset: 0x15c
	// Line 4297, Address: 0x1e4a40, Func Offset: 0x160
	// Line 4298, Address: 0x1e4a44, Func Offset: 0x164
	// Line 4297, Address: 0x1e4a4c, Func Offset: 0x16c
	// Line 4299, Address: 0x1e4a50, Func Offset: 0x170
	// Line 4297, Address: 0x1e4a58, Func Offset: 0x178
	// Line 4298, Address: 0x1e4a60, Func Offset: 0x180
	// Line 4299, Address: 0x1e4a68, Func Offset: 0x188
	// Line 4302, Address: 0x1e4a74, Func Offset: 0x194
	// Line 4303, Address: 0x1e4a78, Func Offset: 0x198
	// Line 4313, Address: 0x1e4a88, Func Offset: 0x1a8
	// Line 4315, Address: 0x1e4a8c, Func Offset: 0x1ac
	// Line 4316, Address: 0x1e4aa0, Func Offset: 0x1c0
	// Func End, Address: 0x1e4ab0, Func Offset: 0x1d0
}

// xFXAuraAdd__FPvP5xVec3P10iColor_tagf
// Start address: 0x1e4ab0
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, float32 size)
{
	int32 i;
	_xFXAura* ap;
	// Line 4251, Address: 0x1e4ab0, Func Offset: 0
	// Line 4252, Address: 0x1e4ab4, Func Offset: 0x4
	// Line 4251, Address: 0x1e4ab8, Func Offset: 0x8
	// Line 4252, Address: 0x1e4abc, Func Offset: 0xc
	// Line 4253, Address: 0x1e4ac0, Func Offset: 0x10
	// Line 4255, Address: 0x1e4acc, Func Offset: 0x1c
	// Line 4256, Address: 0x1e4ad4, Func Offset: 0x24
	// Line 4257, Address: 0x1e4aec, Func Offset: 0x3c
	// Line 4259, Address: 0x1e4b0c, Func Offset: 0x5c
	// Line 4261, Address: 0x1e4b14, Func Offset: 0x64
	// Line 4264, Address: 0x1e4b28, Func Offset: 0x78
	// Line 4265, Address: 0x1e4b2c, Func Offset: 0x7c
	// Line 4264, Address: 0x1e4b30, Func Offset: 0x80
	// Line 4265, Address: 0x1e4b34, Func Offset: 0x84
	// Line 4266, Address: 0x1e4b38, Func Offset: 0x88
	// Line 4268, Address: 0x1e4b44, Func Offset: 0x94
	// Line 4273, Address: 0x1e4b48, Func Offset: 0x98
	// Line 4274, Address: 0x1e4b4c, Func Offset: 0x9c
	// Line 4268, Address: 0x1e4b50, Func Offset: 0xa0
	// Line 4269, Address: 0x1e4b54, Func Offset: 0xa4
	// Line 4270, Address: 0x1e4b58, Func Offset: 0xa8
	// Line 4271, Address: 0x1e4b70, Func Offset: 0xc0
	// Line 4272, Address: 0x1e4b90, Func Offset: 0xe0
	// Line 4273, Address: 0x1e4b94, Func Offset: 0xe4
	// Line 4275, Address: 0x1e4b98, Func Offset: 0xe8
	// Line 4277, Address: 0x1e4ba0, Func Offset: 0xf0
	// Line 4278, Address: 0x1e4bb0, Func Offset: 0x100
	// Func End, Address: 0x1e4bb8, Func Offset: 0x108
}

// xFXRibbonRender__Fv
// Start address: 0x1e4bc0
void xFXRibbonRender()
{
	xFXRibbon* prev;
	uint32 i;
	xFXRibbon* ribbon;
	// Line 4135, Address: 0x1e4bc0, Func Offset: 0
	// Line 4136, Address: 0x1e4bd8, Func Offset: 0x18
	// Line 4139, Address: 0x1e4c08, Func Offset: 0x48
	// Line 4140, Address: 0x1e4c14, Func Offset: 0x54
	// Line 4141, Address: 0x1e4c20, Func Offset: 0x60
	// Line 4142, Address: 0x1e4c2c, Func Offset: 0x6c
	// Line 4145, Address: 0x1e4c38, Func Offset: 0x78
	// Line 4144, Address: 0x1e4c3c, Func Offset: 0x7c
	// Line 4145, Address: 0x1e4c40, Func Offset: 0x80
	// Line 4147, Address: 0x1e4c58, Func Offset: 0x98
	// Line 4149, Address: 0x1e4c5c, Func Offset: 0x9c
	// Line 4150, Address: 0x1e4c74, Func Offset: 0xb4
	// Line 4152, Address: 0x1e4c90, Func Offset: 0xd0
	// Line 4153, Address: 0x1e4cb4, Func Offset: 0xf4
	// Line 4155, Address: 0x1e4cb8, Func Offset: 0xf8
	// Line 4156, Address: 0x1e4cc0, Func Offset: 0x100
	// Line 4157, Address: 0x1e4cd8, Func Offset: 0x118
	// Func End, Address: 0x1e4cf4, Func Offset: 0x134
}

// xFXRibbonSceneEnter__Fv
// Start address: 0x1e4d00
void xFXRibbonSceneEnter()
{
	// Line 4115, Address: 0x1e4d00, Func Offset: 0
	// Line 4118, Address: 0x1e4d04, Func Offset: 0x4
	// Line 4115, Address: 0x1e4d08, Func Offset: 0x8
	// Line 4118, Address: 0x1e4d0c, Func Offset: 0xc
	// Line 4120, Address: 0x1e4e84, Func Offset: 0x184
	// Line 4126, Address: 0x1e4e88, Func Offset: 0x188
	// Func End, Address: 0x1e4e94, Func Offset: 0x194
}

// render_compare__9xFXRibbonCFRC9xFXRibbon
// Start address: 0x1e5080
int32 xFXRibbon::render_compare(xFXRibbon& c)
{
	// Line 3880, Address: 0x1e5080, Func Offset: 0
	// Line 3882, Address: 0x1e5088, Func Offset: 0x8
	// Line 3883, Address: 0x1e50a0, Func Offset: 0x20
	// Line 3884, Address: 0x1e50c0, Func Offset: 0x40
	// Line 3885, Address: 0x1e50d8, Func Offset: 0x58
	// Line 3886, Address: 0x1e50f8, Func Offset: 0x78
	// Line 3887, Address: 0x1e5110, Func Offset: 0x90
	// Line 3889, Address: 0x1e5118, Func Offset: 0x98
	// Func End, Address: 0x1e5120, Func Offset: 0xa0
}

// render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue<Q29xFXRibbon10joint_data>8iteratorUi
// Start address: 0x1e5120
void xFXRibbon::render_strip(RxObjSpace3DVertex* verts, iterator first, uint32 size)
{
	RxObjSpace3DVertex* v;
	int32 back;
	float32 ulookup[2];
	iterator last;
	iColor_tag color;
	float32 width;
	float32 offset1;
	float32 offset2;
	float32 u;
	xVec3 loc1;
	xVec3 loc2;
	// Line 3815, Address: 0x1e5120, Func Offset: 0
	// Line 3846, Address: 0x1e5128, Func Offset: 0x8
	// Line 3815, Address: 0x1e512c, Func Offset: 0xc
	// Line 3846, Address: 0x1e5130, Func Offset: 0x10
	// Line 3815, Address: 0x1e5134, Func Offset: 0x14
	// Line 3846, Address: 0x1e5160, Func Offset: 0x40
	// Line 3816, Address: 0x1e5164, Func Offset: 0x44
	// Line 3819, Address: 0x1e5168, Func Offset: 0x48
	// Line 3846, Address: 0x1e5170, Func Offset: 0x50
	// Line 3816, Address: 0x1e5174, Func Offset: 0x54
	// Line 3819, Address: 0x1e5178, Func Offset: 0x58
	// Line 3846, Address: 0x1e517c, Func Offset: 0x5c
	// Line 3848, Address: 0x1e51c0, Func Offset: 0xa0
	// Line 3851, Address: 0x1e51c8, Func Offset: 0xa8
	// Line 3848, Address: 0x1e51cc, Func Offset: 0xac
	// Line 3851, Address: 0x1e51d0, Func Offset: 0xb0
	// Line 3848, Address: 0x1e51d4, Func Offset: 0xb4
	// Line 3849, Address: 0x1e51e4, Func Offset: 0xc4
	// Line 3851, Address: 0x1e5238, Func Offset: 0x118
	// Line 3854, Address: 0x1e5240, Func Offset: 0x120
	// Line 3856, Address: 0x1e524c, Func Offset: 0x12c
	// Line 3854, Address: 0x1e5250, Func Offset: 0x130
	// Line 3856, Address: 0x1e5254, Func Offset: 0x134
	// Line 3854, Address: 0x1e5258, Func Offset: 0x138
	// Line 3856, Address: 0x1e525c, Func Offset: 0x13c
	// Line 3854, Address: 0x1e5260, Func Offset: 0x140
	// Line 3856, Address: 0x1e5264, Func Offset: 0x144
	// Line 3854, Address: 0x1e5268, Func Offset: 0x148
	// Line 3856, Address: 0x1e526c, Func Offset: 0x14c
	// Line 3861, Address: 0x1e5274, Func Offset: 0x154
	// Line 3859, Address: 0x1e5278, Func Offset: 0x158
	// Line 3861, Address: 0x1e527c, Func Offset: 0x15c
	// Line 3863, Address: 0x1e5280, Func Offset: 0x160
	// Line 3861, Address: 0x1e5284, Func Offset: 0x164
	// Line 3863, Address: 0x1e5288, Func Offset: 0x168
	// Line 3856, Address: 0x1e528c, Func Offset: 0x16c
	// Line 3863, Address: 0x1e5290, Func Offset: 0x170
	// Line 3856, Address: 0x1e5294, Func Offset: 0x174
	// Line 3863, Address: 0x1e5298, Func Offset: 0x178
	// Line 3864, Address: 0x1e52a0, Func Offset: 0x180
	// Line 3859, Address: 0x1e52a4, Func Offset: 0x184
	// Line 3864, Address: 0x1e52a8, Func Offset: 0x188
	// Line 3863, Address: 0x1e52ac, Func Offset: 0x18c
	// Line 3867, Address: 0x1e52b0, Func Offset: 0x190
	// Line 3863, Address: 0x1e52b4, Func Offset: 0x194
	// Line 3867, Address: 0x1e52b8, Func Offset: 0x198
	// Line 3859, Address: 0x1e52bc, Func Offset: 0x19c
	// Line 3867, Address: 0x1e52c0, Func Offset: 0x1a0
	// Line 3868, Address: 0x1e52c8, Func Offset: 0x1a8
	// Line 3870, Address: 0x1e52cc, Func Offset: 0x1ac
	// Line 3858, Address: 0x1e52d0, Func Offset: 0x1b0
	// Line 3863, Address: 0x1e52d4, Func Offset: 0x1b4
	// Line 3859, Address: 0x1e52e4, Func Offset: 0x1c4
	// Line 3863, Address: 0x1e52e8, Func Offset: 0x1c8
	// Line 3864, Address: 0x1e5378, Func Offset: 0x258
	// Line 3867, Address: 0x1e53d4, Func Offset: 0x2b4
	// Line 3868, Address: 0x1e5498, Func Offset: 0x378
	// Line 3870, Address: 0x1e54f4, Func Offset: 0x3d4
	// Line 3873, Address: 0x1e5508, Func Offset: 0x3e8
	// Line 3874, Address: 0x1e5538, Func Offset: 0x418
	// Line 3875, Address: 0x1e5540, Func Offset: 0x420
	// Line 3876, Address: 0x1e5548, Func Offset: 0x428
	// Func End, Address: 0x1e5578, Func Offset: 0x458
}

// eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10iColor_tagRf
// Start address: 0x1e5580
void xFXRibbon::eval_joint(joint_data& joint, iColor_tag& color, float32& width)
{
	float32 frac;
	curve_node& node0;
	curve_node& node1;
	float32 subfrac;
	// Line 3774, Address: 0x1e5580, Func Offset: 0
	// Line 3775, Address: 0x1e55c4, Func Offset: 0x44
	// Line 3774, Address: 0x1e55c8, Func Offset: 0x48
	// Line 3775, Address: 0x1e55d4, Func Offset: 0x54
	// Line 3786, Address: 0x1e55e8, Func Offset: 0x68
	// Line 3788, Address: 0x1e5604, Func Offset: 0x84
	// Line 3790, Address: 0x1e5624, Func Offset: 0xa4
	// Line 3796, Address: 0x1e564c, Func Offset: 0xcc
	// Line 3797, Address: 0x1e5654, Func Offset: 0xd4
	// Line 3796, Address: 0x1e5660, Func Offset: 0xe0
	// Line 3797, Address: 0x1e5664, Func Offset: 0xe4
	// Line 3796, Address: 0x1e5668, Func Offset: 0xe8
	// Line 3800, Address: 0x1e566c, Func Offset: 0xec
	// Line 3797, Address: 0x1e5674, Func Offset: 0xf4
	// Line 3800, Address: 0x1e567c, Func Offset: 0xfc
	// Line 3802, Address: 0x1e5680, Func Offset: 0x100
	// Line 3800, Address: 0x1e5688, Func Offset: 0x108
	// Line 3802, Address: 0x1e569c, Func Offset: 0x11c
	// Line 3803, Address: 0x1e577c, Func Offset: 0x1fc
	// Line 3804, Address: 0x1e5860, Func Offset: 0x2e0
	// Line 3807, Address: 0x1e5944, Func Offset: 0x3c4
	// Line 3808, Address: 0x1e5978, Func Offset: 0x3f8
	// Line 3810, Address: 0x1e5a08, Func Offset: 0x488
	// Line 3811, Address: 0x1e5a20, Func Offset: 0x4a0
	// Line 3812, Address: 0x1e5a2c, Func Offset: 0x4ac
	// Func End, Address: 0x1e5a34, Func Offset: 0x4b4
}

// refresh_joint__9xFXRibbonFRQ29xFXRibbon10joint_dataRCQ236tier_queue<Q29xFXRibbon10joint_data>8iterator
// Start address: 0x1e5a40
void xFXRibbon::refresh_joint(joint_data& joint, iterator& it)
{
	xVec3 offset;
	xVec3 dir;
	// Line 3739, Address: 0x1e5a40, Func Offset: 0
	// Line 3740, Address: 0x1e5a44, Func Offset: 0x4
	// Line 3739, Address: 0x1e5a48, Func Offset: 0x8
	// Line 3740, Address: 0x1e5a54, Func Offset: 0x14
	// Line 3742, Address: 0x1e5a64, Func Offset: 0x24
	// Line 3744, Address: 0x1e5a68, Func Offset: 0x28
	// Line 3742, Address: 0x1e5a6c, Func Offset: 0x2c
	// Line 3744, Address: 0x1e5a70, Func Offset: 0x30
	// Line 3742, Address: 0x1e5a74, Func Offset: 0x34
	// Line 3744, Address: 0x1e5a7c, Func Offset: 0x3c
	// Line 3742, Address: 0x1e5a80, Func Offset: 0x40
	// Line 3744, Address: 0x1e5a84, Func Offset: 0x44
	// Line 3745, Address: 0x1e5ab0, Func Offset: 0x70
	// Line 3746, Address: 0x1e5b40, Func Offset: 0x100
	// Line 3747, Address: 0x1e5bc8, Func Offset: 0x188
	// Line 3750, Address: 0x1e5c50, Func Offset: 0x210
	// Line 3748, Address: 0x1e5c54, Func Offset: 0x214
	// Line 3750, Address: 0x1e5c58, Func Offset: 0x218
	// Line 3748, Address: 0x1e5c5c, Func Offset: 0x21c
	// Line 3750, Address: 0x1e5c6c, Func Offset: 0x22c
	// Line 3748, Address: 0x1e5c70, Func Offset: 0x230
	// Line 3749, Address: 0x1e5cc0, Func Offset: 0x280
	// Line 3748, Address: 0x1e5cc4, Func Offset: 0x284
	// Line 3749, Address: 0x1e5cc8, Func Offset: 0x288
	// Line 3750, Address: 0x1e5cd8, Func Offset: 0x298
	// Line 3752, Address: 0x1e5cfc, Func Offset: 0x2bc
	// Line 3753, Address: 0x1e5d08, Func Offset: 0x2c8
	// Line 3755, Address: 0x1e5d14, Func Offset: 0x2d4
	// Line 3758, Address: 0x1e5d20, Func Offset: 0x2e0
	// Line 3759, Address: 0x1e5d80, Func Offset: 0x340
	// Line 3769, Address: 0x1e5d8c, Func Offset: 0x34c
	// Line 3770, Address: 0x1e5d90, Func Offset: 0x350
	// Func End, Address: 0x1e5da0, Func Offset: 0x360
}

// get_normal__9xFXRibbonFR5xVec3RC5xVec3f
// Start address: 0x1e5da0
void xFXRibbon::get_normal(xVec3& norm, xVec3& dir, float32 orient)
{
	float32 a;
	float32 b;
	float32 ax;
	float32 ay;
	float32 az;
	// Line 3708, Address: 0x1e5da0, Func Offset: 0
	// Line 3710, Address: 0x1e5dbc, Func Offset: 0x1c
	// Line 3713, Address: 0x1e5dd0, Func Offset: 0x30
	// Line 3714, Address: 0x1e5de4, Func Offset: 0x44
	// Line 3716, Address: 0x1e5dfc, Func Offset: 0x5c
	// Line 3719, Address: 0x1e5e00, Func Offset: 0x60
	// Line 3716, Address: 0x1e5e04, Func Offset: 0x64
	// Line 3719, Address: 0x1e5e14, Func Offset: 0x74
	// Line 3716, Address: 0x1e5e18, Func Offset: 0x78
	// Line 3717, Address: 0x1e5e2c, Func Offset: 0x8c
	// Line 3718, Address: 0x1e5e4c, Func Offset: 0xac
	// Line 3719, Address: 0x1e5e6c, Func Offset: 0xcc
	// Line 3720, Address: 0x1e5eb0, Func Offset: 0x110
	// Line 3721, Address: 0x1e5eb8, Func Offset: 0x118
	// Line 3723, Address: 0x1e5ec4, Func Offset: 0x124
	// Line 3726, Address: 0x1e5ec8, Func Offset: 0x128
	// Line 3723, Address: 0x1e5ecc, Func Offset: 0x12c
	// Line 3724, Address: 0x1e5ed4, Func Offset: 0x134
	// Line 3726, Address: 0x1e5ed8, Func Offset: 0x138
	// Line 3723, Address: 0x1e5edc, Func Offset: 0x13c
	// Line 3724, Address: 0x1e5ef0, Func Offset: 0x150
	// Line 3725, Address: 0x1e5f14, Func Offset: 0x174
	// Line 3726, Address: 0x1e5f34, Func Offset: 0x194
	// Line 3727, Address: 0x1e5f78, Func Offset: 0x1d8
	// Line 3733, Address: 0x1e5f80, Func Offset: 0x1e0
	// Line 3730, Address: 0x1e5f84, Func Offset: 0x1e4
	// Line 3732, Address: 0x1e5f90, Func Offset: 0x1f0
	// Line 3733, Address: 0x1e5f94, Func Offset: 0x1f4
	// Line 3730, Address: 0x1e5f98, Func Offset: 0x1f8
	// Line 3731, Address: 0x1e5fac, Func Offset: 0x20c
	// Line 3732, Address: 0x1e5fcc, Func Offset: 0x22c
	// Line 3733, Address: 0x1e5ff0, Func Offset: 0x250
	// Line 3735, Address: 0x1e6038, Func Offset: 0x298
	// Func End, Address: 0x1e6050, Func Offset: 0x2b0
}

// set_texture__9xFXRibbonFPCc
// Start address: 0x1e6050
void xFXRibbon::set_texture(int8* name)
{
	// Line 3691, Address: 0x1e6050, Func Offset: 0
	// Line 3692, Address: 0x1e6060, Func Offset: 0x10
	// Line 3693, Address: 0x1e60b8, Func Offset: 0x68
	// Func End, Address: 0x1e60c8, Func Offset: 0x78
}

// set_texture__9xFXRibbonFUi
// Start address: 0x1e60d0
void xFXRibbon::set_texture(uint32 id)
{
	// Line 3684, Address: 0x1e60d0, Func Offset: 0
	// Line 3688, Address: 0x1e60dc, Func Offset: 0xc
	// Line 3689, Address: 0x1e6128, Func Offset: 0x58
	// Func End, Address: 0x1e6138, Func Offset: 0x68
}

// render__9xFXRibbonFv
// Start address: 0x1e6140
void xFXRibbon::render()
{
	RxObjSpace3DVertex* verts;
	int32 it;
	int32 subsize;
	int32 next_it;
	int32 break_it;
	// Line 3615, Address: 0x1e6140, Func Offset: 0
	// Line 3618, Address: 0x1e6144, Func Offset: 0x4
	// Line 3615, Address: 0x1e6148, Func Offset: 0x8
	// Line 3648, Address: 0x1e6160, Func Offset: 0x20
	// Line 3618, Address: 0x1e6164, Func Offset: 0x24
	// Line 3648, Address: 0x1e6168, Func Offset: 0x28
	// Line 3650, Address: 0x1e6170, Func Offset: 0x30
	// Line 3654, Address: 0x1e6188, Func Offset: 0x48
	// Line 3656, Address: 0x1e6198, Func Offset: 0x58
	// Line 3657, Address: 0x1e619c, Func Offset: 0x5c
	// Line 3656, Address: 0x1e61a0, Func Offset: 0x60
	// Line 3657, Address: 0x1e61a4, Func Offset: 0x64
	// Line 3659, Address: 0x1e61d0, Func Offset: 0x90
	// Line 3660, Address: 0x1e61d4, Func Offset: 0x94
	// Line 3662, Address: 0x1e6228, Func Offset: 0xe8
	// Line 3664, Address: 0x1e622c, Func Offset: 0xec
	// Line 3666, Address: 0x1e6234, Func Offset: 0xf4
	// Line 3668, Address: 0x1e6248, Func Offset: 0x108
	// Line 3670, Address: 0x1e62a0, Func Offset: 0x160
	// Line 3672, Address: 0x1e62b0, Func Offset: 0x170
	// Func End, Address: 0x1e62d0, Func Offset: 0x190
}

// update__9xFXRibbonFf
// Start address: 0x1e62d0
void xFXRibbon::update(float32 dt)
{
	// Line 3582, Address: 0x1e62d0, Func Offset: 0
	// Line 3586, Address: 0x1e62d4, Func Offset: 0x4
	// Line 3582, Address: 0x1e62d8, Func Offset: 0x8
	// Line 3586, Address: 0x1e62dc, Func Offset: 0xc
	// Line 3582, Address: 0x1e62e0, Func Offset: 0x10
	// Line 3586, Address: 0x1e62f8, Func Offset: 0x28
	// Line 3582, Address: 0x1e62fc, Func Offset: 0x2c
	// Line 3586, Address: 0x1e6300, Func Offset: 0x30
	// Line 3582, Address: 0x1e6304, Func Offset: 0x34
	// Line 3586, Address: 0x1e6308, Func Offset: 0x38
	// Line 3590, Address: 0x1e634c, Func Offset: 0x7c
	// Line 3592, Address: 0x1e6370, Func Offset: 0xa0
	// Line 3594, Address: 0x1e641c, Func Offset: 0x14c
	// Line 3595, Address: 0x1e6430, Func Offset: 0x160
	// Line 3596, Address: 0x1e6438, Func Offset: 0x168
	// Line 3595, Address: 0x1e643c, Func Offset: 0x16c
	// Line 3596, Address: 0x1e6440, Func Offset: 0x170
	// Line 3597, Address: 0x1e6500, Func Offset: 0x230
	// Line 3599, Address: 0x1e6554, Func Offset: 0x284
	// Line 3597, Address: 0x1e655c, Func Offset: 0x28c
	// Line 3599, Address: 0x1e6560, Func Offset: 0x290
	// Line 3600, Address: 0x1e65b8, Func Offset: 0x2e8
	// Line 3601, Address: 0x1e6620, Func Offset: 0x350
	// Line 3603, Address: 0x1e6630, Func Offset: 0x360
	// Line 3604, Address: 0x1e66c8, Func Offset: 0x3f8
	// Func End, Address: 0x1e66f4, Func Offset: 0x424
}

// insert__9xFXRibbonFRC5xVec3fffUi
// Start address: 0x1e6850
void xFXRibbon::insert(xVec3& loc, float32 orient, float32 scale, float32 alpha, uint32 flags)
{
	// Line 3551, Address: 0x1e6850, Func Offset: 0
	// Line 3554, Address: 0x1e6890, Func Offset: 0x40
	// Line 3555, Address: 0x1e6960, Func Offset: 0x110
	// Line 3556, Address: 0x1e6998, Func Offset: 0x148
	// Line 3557, Address: 0x1e6a60, Func Offset: 0x210
	// Line 3558, Address: 0x1e6a68, Func Offset: 0x218
	// Line 3557, Address: 0x1e6a70, Func Offset: 0x220
	// Line 3558, Address: 0x1e6a74, Func Offset: 0x224
	// Line 3557, Address: 0x1e6a78, Func Offset: 0x228
	// Line 3558, Address: 0x1e6adc, Func Offset: 0x28c
	// Line 3559, Address: 0x1e6ae0, Func Offset: 0x290
	// Line 3560, Address: 0x1e6af8, Func Offset: 0x2a8
	// Line 3561, Address: 0x1e6afc, Func Offset: 0x2ac
	// Line 3562, Address: 0x1e6b04, Func Offset: 0x2b4
	// Line 3563, Address: 0x1e6b08, Func Offset: 0x2b8
	// Line 3564, Address: 0x1e6b0c, Func Offset: 0x2bc
	// Line 3565, Address: 0x1e6b58, Func Offset: 0x308
	// Func End, Address: 0x1e6b88, Func Offset: 0x338
}

// insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
// Start address: 0x1e6b90
void xFXRibbon::insert(xVec3& loc, xVec3& norm, float32 scale, float32 alpha, uint32 flags)
{
	// Line 3534, Address: 0x1e6b90, Func Offset: 0
	// Line 3537, Address: 0x1e6bd0, Func Offset: 0x40
	// Line 3538, Address: 0x1e6ca0, Func Offset: 0x110
	// Line 3539, Address: 0x1e6cd8, Func Offset: 0x148
	// Line 3540, Address: 0x1e6da0, Func Offset: 0x210
	// Line 3541, Address: 0x1e6db0, Func Offset: 0x220
	// Line 3540, Address: 0x1e6db4, Func Offset: 0x224
	// Line 3541, Address: 0x1e6e14, Func Offset: 0x284
	// Line 3542, Address: 0x1e6e18, Func Offset: 0x288
	// Line 3543, Address: 0x1e6e30, Func Offset: 0x2a0
	// Line 3544, Address: 0x1e6e48, Func Offset: 0x2b8
	// Line 3545, Address: 0x1e6e50, Func Offset: 0x2c0
	// Line 3546, Address: 0x1e6e54, Func Offset: 0x2c4
	// Line 3547, Address: 0x1e6e58, Func Offset: 0x2c8
	// Line 3548, Address: 0x1e6ea0, Func Offset: 0x310
	// Func End, Address: 0x1e6ed0, Func Offset: 0x340
}

// set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUi
// Start address: 0x1e6ed0
void xFXRibbon::set_curve(curve_node* curve, uint32 size)
{
	// Line 3527, Address: 0x1e6ed0, Func Offset: 0
	// Line 3531, Address: 0x1e6ed4, Func Offset: 0x4
	// Func End, Address: 0x1e6edc, Func Offset: 0xc
}

// refresh_config__9xFXRibbonFv
// Start address: 0x1e6ee0
void xFXRibbon::refresh_config()
{
	// Line 3519, Address: 0x1e6ee0, Func Offset: 0
	// Line 3520, Address: 0x1e6eec, Func Offset: 0xc
	// Line 3519, Address: 0x1e6f00, Func Offset: 0x20
	// Line 3520, Address: 0x1e6f08, Func Offset: 0x28
	// Line 3522, Address: 0x1e6f48, Func Offset: 0x68
	// Line 3523, Address: 0x1e6f58, Func Offset: 0x78
	// Func End, Address: 0x1e6f60, Func Offset: 0x80
}

// set_default_config__9xFXRibbonFv
// Start address: 0x1e6f60
void xFXRibbon::set_default_config()
{
	// Line 3508, Address: 0x1e6f60, Func Offset: 0
	// Line 3509, Address: 0x1e6f64, Func Offset: 0x4
	// Line 3508, Address: 0x1e6f68, Func Offset: 0x8
	// Line 3509, Address: 0x1e6f70, Func Offset: 0x10
	// Line 3510, Address: 0x1e6f74, Func Offset: 0x14
	// Line 3511, Address: 0x1e6f78, Func Offset: 0x18
	// Line 3510, Address: 0x1e6f7c, Func Offset: 0x1c
	// Line 3511, Address: 0x1e6f80, Func Offset: 0x20
	// Line 3512, Address: 0x1e6f84, Func Offset: 0x24
	// Line 3513, Address: 0x1e6ff8, Func Offset: 0x98
	// Func End, Address: 0x1e7000, Func Offset: 0xa0
}

// init__9xFXRibbonFPCcPCc
// Start address: 0x1e7000
void xFXRibbon::init()
{
	// Line 3499, Address: 0x1e7000, Func Offset: 0
	// Line 3501, Address: 0x1e7004, Func Offset: 0x4
	// Line 3500, Address: 0x1e7008, Func Offset: 0x8
	// Line 3501, Address: 0x1e700c, Func Offset: 0xc
	// Line 3502, Address: 0x1e701c, Func Offset: 0x1c
	// Line 3501, Address: 0x1e7020, Func Offset: 0x20
	// Line 3502, Address: 0x1e7034, Func Offset: 0x34
	// Line 3503, Address: 0x1e70d4, Func Offset: 0xd4
	// Line 3504, Address: 0x1e70d8, Func Offset: 0xd8
	// Func End, Address: 0x1e70e0, Func Offset: 0xe0
}

// compare_ribbons__17@unnamed@xFX_cpp@FPCvPCv
// Start address: 0x1e70e0
int32 compare_ribbons(void* e1, void* e2)
{
	// Line 3444, Address: 0x1e70e0, Func Offset: 0
	// Line 3445, Address: 0x1e70e4, Func Offset: 0x4
	// Line 3446, Address: 0x1e70f8, Func Offset: 0x18
	// Line 3447, Address: 0x1e7108, Func Offset: 0x28
	// Line 3451, Address: 0x1e7128, Func Offset: 0x48
	// Func End, Address: 0x1e7134, Func Offset: 0x54
}

// xFXShineStart__FPC5xVec3ffffUiPC10iColor_tagPC10iColor_tagfi
// Start address: 0x1e7140
uint32 xFXShineStart()
{
	// Line 3369, Address: 0x1e7140, Func Offset: 0
	// Func End, Address: 0x1e7148, Func Offset: 0x8
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
	RxObjSpace3DVertex blah[4];
	// Line 3145, Address: 0x1e7150, Func Offset: 0
	// Line 3148, Address: 0x1e7164, Func Offset: 0x14
	// Line 3145, Address: 0x1e7168, Func Offset: 0x18
	// Line 3148, Address: 0x1e716c, Func Offset: 0x1c
	// Line 3145, Address: 0x1e7170, Func Offset: 0x20
	// Line 3148, Address: 0x1e7178, Func Offset: 0x28
	// Line 3145, Address: 0x1e717c, Func Offset: 0x2c
	// Line 3148, Address: 0x1e7180, Func Offset: 0x30
	// Line 3145, Address: 0x1e7184, Func Offset: 0x34
	// Line 3148, Address: 0x1e7188, Func Offset: 0x38
	// Line 3145, Address: 0x1e718c, Func Offset: 0x3c
	// Line 3148, Address: 0x1e719c, Func Offset: 0x4c
	// Line 3152, Address: 0x1e71a0, Func Offset: 0x50
	// Line 3158, Address: 0x1e71b0, Func Offset: 0x60
	// Line 3165, Address: 0x1e71bc, Func Offset: 0x6c
	// Line 3170, Address: 0x1e71c8, Func Offset: 0x78
	// Line 3171, Address: 0x1e71d0, Func Offset: 0x80
	// Line 3179, Address: 0x1e71d8, Func Offset: 0x88
	// Line 3174, Address: 0x1e71dc, Func Offset: 0x8c
	// Line 3183, Address: 0x1e71e0, Func Offset: 0x90
	// Line 3179, Address: 0x1e71e4, Func Offset: 0x94
	// Line 3183, Address: 0x1e71e8, Func Offset: 0x98
	// Line 3188, Address: 0x1e71f0, Func Offset: 0xa0
	// Line 3183, Address: 0x1e71f4, Func Offset: 0xa4
	// Line 3188, Address: 0x1e71f8, Func Offset: 0xa8
	// Line 3183, Address: 0x1e71fc, Func Offset: 0xac
	// Line 3174, Address: 0x1e7208, Func Offset: 0xb8
	// Line 3175, Address: 0x1e720c, Func Offset: 0xbc
	// Line 3180, Address: 0x1e7210, Func Offset: 0xc0
	// Line 3175, Address: 0x1e7214, Func Offset: 0xc4
	// Line 3176, Address: 0x1e7218, Func Offset: 0xc8
	// Line 3179, Address: 0x1e7220, Func Offset: 0xd0
	// Line 3180, Address: 0x1e7234, Func Offset: 0xe4
	// Line 3181, Address: 0x1e7248, Func Offset: 0xf8
	// Line 3183, Address: 0x1e7260, Func Offset: 0x110
	// Line 3185, Address: 0x1e72b4, Func Offset: 0x164
	// Line 3183, Address: 0x1e72bc, Func Offset: 0x16c
	// Line 3188, Address: 0x1e72c4, Func Offset: 0x174
	// Line 3189, Address: 0x1e72cc, Func Offset: 0x17c
	// Line 3195, Address: 0x1e72dc, Func Offset: 0x18c
	// Line 3207, Address: 0x1e72e0, Func Offset: 0x190
	// Line 3195, Address: 0x1e72e4, Func Offset: 0x194
	// Line 3221, Address: 0x1e72e8, Func Offset: 0x198
	// Line 3195, Address: 0x1e72ec, Func Offset: 0x19c
	// Line 3221, Address: 0x1e72f0, Func Offset: 0x1a0
	// Line 3207, Address: 0x1e72f4, Func Offset: 0x1a4
	// Line 3221, Address: 0x1e72f8, Func Offset: 0x1a8
	// Line 3195, Address: 0x1e7300, Func Offset: 0x1b0
	// Line 3196, Address: 0x1e730c, Func Offset: 0x1bc
	// Line 3221, Address: 0x1e7310, Func Offset: 0x1c0
	// Line 3197, Address: 0x1e7314, Func Offset: 0x1c4
	// Line 3198, Address: 0x1e7318, Func Offset: 0x1c8
	// Line 3205, Address: 0x1e7334, Func Offset: 0x1e4
	// Line 3206, Address: 0x1e734c, Func Offset: 0x1fc
	// Line 3207, Address: 0x1e7350, Func Offset: 0x200
	// Line 3208, Address: 0x1e7354, Func Offset: 0x204
	// Line 3214, Address: 0x1e7370, Func Offset: 0x220
	// Line 3216, Address: 0x1e73c0, Func Offset: 0x270
	// Line 3217, Address: 0x1e73c4, Func Offset: 0x274
	// Line 3221, Address: 0x1e73c8, Func Offset: 0x278
	// Line 3229, Address: 0x1e7420, Func Offset: 0x2d0
	// Line 3227, Address: 0x1e7424, Func Offset: 0x2d4
	// Line 3233, Address: 0x1e7428, Func Offset: 0x2d8
	// Line 3227, Address: 0x1e742c, Func Offset: 0x2dc
	// Line 3233, Address: 0x1e7430, Func Offset: 0x2e0
	// Line 3227, Address: 0x1e7434, Func Offset: 0x2e4
	// Line 3233, Address: 0x1e744c, Func Offset: 0x2fc
	// Line 3227, Address: 0x1e7450, Func Offset: 0x300
	// Line 3233, Address: 0x1e7454, Func Offset: 0x304
	// Line 3227, Address: 0x1e7458, Func Offset: 0x308
	// Line 3228, Address: 0x1e7484, Func Offset: 0x334
	// Line 3229, Address: 0x1e7488, Func Offset: 0x338
	// Line 3233, Address: 0x1e748c, Func Offset: 0x33c
	// Line 3236, Address: 0x1e74e4, Func Offset: 0x394
	// Line 3238, Address: 0x1e74f0, Func Offset: 0x3a0
	// Line 3240, Address: 0x1e7510, Func Offset: 0x3c0
	// Line 3241, Address: 0x1e7518, Func Offset: 0x3c8
	// Line 3276, Address: 0x1e7520, Func Offset: 0x3d0
	// Line 3250, Address: 0x1e7524, Func Offset: 0x3d4
	// Line 3253, Address: 0x1e7528, Func Offset: 0x3d8
	// Line 3250, Address: 0x1e752c, Func Offset: 0x3dc
	// Line 3263, Address: 0x1e7530, Func Offset: 0x3e0
	// Line 3250, Address: 0x1e7534, Func Offset: 0x3e4
	// Line 3276, Address: 0x1e753c, Func Offset: 0x3ec
	// Line 3253, Address: 0x1e7548, Func Offset: 0x3f8
	// Line 3262, Address: 0x1e754c, Func Offset: 0x3fc
	// Line 3263, Address: 0x1e7550, Func Offset: 0x400
	// Line 3276, Address: 0x1e7554, Func Offset: 0x404
	// Line 3250, Address: 0x1e755c, Func Offset: 0x40c
	// Line 3251, Address: 0x1e7570, Func Offset: 0x420
	// Line 3252, Address: 0x1e7578, Func Offset: 0x428
	// Line 3253, Address: 0x1e7580, Func Offset: 0x430
	// Line 3260, Address: 0x1e7584, Func Offset: 0x434
	// Line 3253, Address: 0x1e7588, Func Offset: 0x438
	// Line 3260, Address: 0x1e75a0, Func Offset: 0x450
	// Line 3261, Address: 0x1e75c0, Func Offset: 0x470
	// Line 3262, Address: 0x1e75c8, Func Offset: 0x478
	// Line 3263, Address: 0x1e75d0, Func Offset: 0x480
	// Line 3271, Address: 0x1e75d4, Func Offset: 0x484
	// Line 3263, Address: 0x1e75d8, Func Offset: 0x488
	// Line 3269, Address: 0x1e75f0, Func Offset: 0x4a0
	// Line 3271, Address: 0x1e7610, Func Offset: 0x4c0
	// Line 3269, Address: 0x1e7614, Func Offset: 0x4c4
	// Line 3272, Address: 0x1e7618, Func Offset: 0x4c8
	// Line 3269, Address: 0x1e7620, Func Offset: 0x4d0
	// Line 3276, Address: 0x1e7648, Func Offset: 0x4f8
	// Line 3288, Address: 0x1e76a0, Func Offset: 0x550
	// Line 3282, Address: 0x1e76a4, Func Offset: 0x554
	// Line 3288, Address: 0x1e76a8, Func Offset: 0x558
	// Line 3282, Address: 0x1e76ac, Func Offset: 0x55c
	// Line 3283, Address: 0x1e76b0, Func Offset: 0x560
	// Line 3282, Address: 0x1e76b4, Func Offset: 0x564
	// Line 3283, Address: 0x1e76b8, Func Offset: 0x568
	// Line 3282, Address: 0x1e76bc, Func Offset: 0x56c
	// Line 3288, Address: 0x1e76c0, Func Offset: 0x570
	// Line 3282, Address: 0x1e76c4, Func Offset: 0x574
	// Line 3288, Address: 0x1e76cc, Func Offset: 0x57c
	// Line 3282, Address: 0x1e76d0, Func Offset: 0x580
	// Line 3288, Address: 0x1e76d4, Func Offset: 0x584
	// Line 3283, Address: 0x1e76d8, Func Offset: 0x588
	// Line 3282, Address: 0x1e76dc, Func Offset: 0x58c
	// Line 3284, Address: 0x1e76e0, Func Offset: 0x590
	// Line 3282, Address: 0x1e76e8, Func Offset: 0x598
	// Line 3288, Address: 0x1e7710, Func Offset: 0x5c0
	// Line 3282, Address: 0x1e7718, Func Offset: 0x5c8
	// Line 3288, Address: 0x1e771c, Func Offset: 0x5cc
	// Line 3291, Address: 0x1e7774, Func Offset: 0x624
	// Line 3293, Address: 0x1e7780, Func Offset: 0x630
	// Line 3295, Address: 0x1e77a0, Func Offset: 0x650
	// Line 3296, Address: 0x1e77a8, Func Offset: 0x658
	// Line 3298, Address: 0x1e77b0, Func Offset: 0x660
	// Line 3300, Address: 0x1e77c0, Func Offset: 0x670
	// Line 3301, Address: 0x1e77d0, Func Offset: 0x680
	// Func End, Address: 0x1e780c, Func Offset: 0x6bc
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
	// Line 3050, Address: 0x1e7810, Func Offset: 0
	// Line 3051, Address: 0x1e7820, Func Offset: 0x10
	// Line 3050, Address: 0x1e7824, Func Offset: 0x14
	// Line 3051, Address: 0x1e7828, Func Offset: 0x18
	// Line 3050, Address: 0x1e782c, Func Offset: 0x1c
	// Line 3051, Address: 0x1e7830, Func Offset: 0x20
	// Line 3050, Address: 0x1e7834, Func Offset: 0x24
	// Line 3051, Address: 0x1e7838, Func Offset: 0x28
	// Line 3050, Address: 0x1e783c, Func Offset: 0x2c
	// Line 3051, Address: 0x1e7840, Func Offset: 0x30
	// Line 3050, Address: 0x1e7844, Func Offset: 0x34
	// Line 3051, Address: 0x1e784c, Func Offset: 0x3c
	// Line 3050, Address: 0x1e7850, Func Offset: 0x40
	// Line 3051, Address: 0x1e7854, Func Offset: 0x44
	// Line 3050, Address: 0x1e7858, Func Offset: 0x48
	// Line 3055, Address: 0x1e7860, Func Offset: 0x50
	// Line 3057, Address: 0x1e786c, Func Offset: 0x5c
	// Line 3062, Address: 0x1e7870, Func Offset: 0x60
	// Line 3057, Address: 0x1e7878, Func Offset: 0x68
	// Line 3058, Address: 0x1e7880, Func Offset: 0x70
	// Line 3060, Address: 0x1e788c, Func Offset: 0x7c
	// Line 3062, Address: 0x1e78a4, Func Offset: 0x94
	// Line 3064, Address: 0x1e78c0, Func Offset: 0xb0
	// Line 3065, Address: 0x1e78d0, Func Offset: 0xc0
	// Line 3066, Address: 0x1e78d4, Func Offset: 0xc4
	// Line 3065, Address: 0x1e78d8, Func Offset: 0xc8
	// Line 3067, Address: 0x1e78dc, Func Offset: 0xcc
	// Line 3069, Address: 0x1e78e4, Func Offset: 0xd4
	// Line 3070, Address: 0x1e78fc, Func Offset: 0xec
	// Line 3072, Address: 0x1e7900, Func Offset: 0xf0
	// Line 3077, Address: 0x1e7908, Func Offset: 0xf8
	// Line 3081, Address: 0x1e7938, Func Offset: 0x128
	// Line 3082, Address: 0x1e7964, Func Offset: 0x154
	// Line 3083, Address: 0x1e7990, Func Offset: 0x180
	// Line 3098, Address: 0x1e79ac, Func Offset: 0x19c
	// Line 3083, Address: 0x1e79b0, Func Offset: 0x1a0
	// Line 3086, Address: 0x1e79c4, Func Offset: 0x1b4
	// Line 3088, Address: 0x1e79dc, Func Offset: 0x1cc
	// Line 3089, Address: 0x1e79e4, Func Offset: 0x1d4
	// Line 3090, Address: 0x1e79ec, Func Offset: 0x1dc
	// Line 3092, Address: 0x1e79f4, Func Offset: 0x1e4
	// Line 3093, Address: 0x1e79fc, Func Offset: 0x1ec
	// Line 3094, Address: 0x1e7a04, Func Offset: 0x1f4
	// Line 3096, Address: 0x1e7a0c, Func Offset: 0x1fc
	// Line 3097, Address: 0x1e7a10, Func Offset: 0x200
	// Line 3098, Address: 0x1e7a14, Func Offset: 0x204
	// Line 3101, Address: 0x1e7a18, Func Offset: 0x208
	// Line 3105, Address: 0x1e7a28, Func Offset: 0x218
	// Line 3107, Address: 0x1e7a34, Func Offset: 0x224
	// Line 3108, Address: 0x1e7ab8, Func Offset: 0x2a8
	// Line 3110, Address: 0x1e7acc, Func Offset: 0x2bc
	// Line 3112, Address: 0x1e7ad8, Func Offset: 0x2c8
	// Line 3113, Address: 0x1e7af8, Func Offset: 0x2e8
	// Line 3116, Address: 0x1e7b00, Func Offset: 0x2f0
	// Line 3117, Address: 0x1e7b04, Func Offset: 0x2f4
	// Line 3120, Address: 0x1e7b08, Func Offset: 0x2f8
	// Line 3122, Address: 0x1e7b18, Func Offset: 0x308
	// Line 3125, Address: 0x1e7b28, Func Offset: 0x318
	// Line 3128, Address: 0x1e7b30, Func Offset: 0x320
	// Line 3131, Address: 0x1e7b48, Func Offset: 0x338
	// Line 3133, Address: 0x1e7b50, Func Offset: 0x340
	// Line 3134, Address: 0x1e7b60, Func Offset: 0x350
	// Line 3136, Address: 0x1e7b68, Func Offset: 0x358
	// Line 3140, Address: 0x1e7b6c, Func Offset: 0x35c
	// Line 3141, Address: 0x1e7b80, Func Offset: 0x370
	// Func End, Address: 0x1e7bb4, Func Offset: 0x3a4
}

// xFXShineInit__Fv
// Start address: 0x1e7bc0
void xFXShineInit()
{
	int32 i;
	// Line 3037, Address: 0x1e7bc0, Func Offset: 0
	// Line 3039, Address: 0x1e7bd0, Func Offset: 0x10
	// Line 3043, Address: 0x1e7be0, Func Offset: 0x20
	// Line 3046, Address: 0x1e7bf0, Func Offset: 0x30
	// Line 3045, Address: 0x1e7bf4, Func Offset: 0x34
	// Line 3046, Address: 0x1e7bf8, Func Offset: 0x38
	// Line 3047, Address: 0x1e7c04, Func Offset: 0x44
	// Func End, Address: 0x1e7c18, Func Offset: 0x58
}

// xFXStreakUpdate__FUiPC5xVec3PC5xVec3
// Start address: 0x1e7c20
void xFXStreakUpdate(uint32 id, xVec3* a, xVec3* b)
{
	xFXStreak* s;
	// Line 2960, Address: 0x1e7c20, Func Offset: 0
	// Line 2964, Address: 0x1e7c2c, Func Offset: 0xc
	// Line 2967, Address: 0x1e7c40, Func Offset: 0x20
	// Line 2970, Address: 0x1e7c50, Func Offset: 0x30
	// Line 2972, Address: 0x1e7c58, Func Offset: 0x38
	// Line 2973, Address: 0x1e7c64, Func Offset: 0x44
	// Line 2974, Address: 0x1e7c74, Func Offset: 0x54
	// Line 2976, Address: 0x1e7c78, Func Offset: 0x58
	// Line 2978, Address: 0x1e7c80, Func Offset: 0x60
	// Line 2976, Address: 0x1e7c84, Func Offset: 0x64
	// Line 2977, Address: 0x1e7ca0, Func Offset: 0x80
	// Line 2978, Address: 0x1e7cc4, Func Offset: 0xa4
	// Line 2979, Address: 0x1e7cd4, Func Offset: 0xb4
	// Line 2982, Address: 0x1e7ce8, Func Offset: 0xc8
	// Func End, Address: 0x1e7cf0, Func Offset: 0xd0
}

// xFXStreakStop__FUi
// Start address: 0x1e7cf0
void xFXStreakStop(uint32 id)
{
	xFXStreak* s;
	// Line 2942, Address: 0x1e7cf0, Func Offset: 0
	// Line 2947, Address: 0x1e7cfc, Func Offset: 0xc
	// Line 2952, Address: 0x1e7d10, Func Offset: 0x20
	// Line 2955, Address: 0x1e7d24, Func Offset: 0x34
	// Line 2956, Address: 0x1e7d38, Func Offset: 0x48
	// Line 2957, Address: 0x1e7d44, Func Offset: 0x54
	// Func End, Address: 0x1e7d50, Func Offset: 0x60
}

// xFXStreakStart__FfffUiPC10iColor_tagPC10iColor_tagi
// Start address: 0x1e7d50
uint32 xFXStreakStart(float32 frequency, float32 alphaFadeRate, float32 alphaStart, uint32 textureID, iColor_tag* edge_a, iColor_tag* edge_b, int32 taper)
{
	uint32 i;
	int32 j;
	// Line 2878, Address: 0x1e7d50, Func Offset: 0
	// Line 2880, Address: 0x1e7d60, Func Offset: 0x10
	// Line 2883, Address: 0x1e7d70, Func Offset: 0x20
	// Line 2887, Address: 0x1e7d7c, Func Offset: 0x2c
	// Line 2888, Address: 0x1e7d84, Func Offset: 0x34
	// Line 2899, Address: 0x1e7d90, Func Offset: 0x40
	// Line 2890, Address: 0x1e7d94, Func Offset: 0x44
	// Line 2891, Address: 0x1e7d9c, Func Offset: 0x4c
	// Line 2892, Address: 0x1e7da0, Func Offset: 0x50
	// Line 2893, Address: 0x1e7da4, Func Offset: 0x54
	// Line 2894, Address: 0x1e7da8, Func Offset: 0x58
	// Line 2895, Address: 0x1e7dac, Func Offset: 0x5c
	// Line 2896, Address: 0x1e7db0, Func Offset: 0x60
	// Line 2897, Address: 0x1e7db4, Func Offset: 0x64
	// Line 2901, Address: 0x1e7db8, Func Offset: 0x68
	// Line 2904, Address: 0x1e7df4, Func Offset: 0xa4
	// Line 2906, Address: 0x1e7dfc, Func Offset: 0xac
	// Line 2907, Address: 0x1e7e18, Func Offset: 0xc8
	// Line 2910, Address: 0x1e7e20, Func Offset: 0xd0
	// Line 2911, Address: 0x1e7e34, Func Offset: 0xe4
	// Line 2913, Address: 0x1e7e38, Func Offset: 0xe8
	// Line 2915, Address: 0x1e7e40, Func Offset: 0xf0
	// Line 2916, Address: 0x1e7e5c, Func Offset: 0x10c
	// Line 2919, Address: 0x1e7e68, Func Offset: 0x118
	// Line 2920, Address: 0x1e7e7c, Func Offset: 0x12c
	// Line 2922, Address: 0x1e7e80, Func Offset: 0x130
	// Line 2923, Address: 0x1e7e88, Func Offset: 0x138
	// Line 2926, Address: 0x1e7e98, Func Offset: 0x148
	// Line 2927, Address: 0x1e7ea8, Func Offset: 0x158
	// Line 2929, Address: 0x1e7eb0, Func Offset: 0x160
	// Line 2933, Address: 0x1e7eb8, Func Offset: 0x168
	// Line 2936, Address: 0x1e7ec0, Func Offset: 0x170
	// Line 2937, Address: 0x1e7ed0, Func Offset: 0x180
	// Line 2938, Address: 0x1e7ed8, Func Offset: 0x188
	// Func End, Address: 0x1e7eec, Func Offset: 0x19c
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
	RxObjSpace3DVertex sStripVert[4];
	// Line 2792, Address: 0x1e7ef0, Func Offset: 0
	// Line 2797, Address: 0x1e7f00, Func Offset: 0x10
	// Line 2792, Address: 0x1e7f04, Func Offset: 0x14
	// Line 2797, Address: 0x1e7f08, Func Offset: 0x18
	// Line 2792, Address: 0x1e7f0c, Func Offset: 0x1c
	// Line 2797, Address: 0x1e7f10, Func Offset: 0x20
	// Line 2801, Address: 0x1e7f18, Func Offset: 0x28
	// Line 2807, Address: 0x1e7f24, Func Offset: 0x34
	// Line 2806, Address: 0x1e7f28, Func Offset: 0x38
	// Line 2809, Address: 0x1e7f2c, Func Offset: 0x3c
	// Line 2811, Address: 0x1e7f30, Func Offset: 0x40
	// Line 2812, Address: 0x1e7f38, Func Offset: 0x48
	// Line 2814, Address: 0x1e7f58, Func Offset: 0x68
	// Line 2825, Address: 0x1e7f70, Func Offset: 0x80
	// Line 2828, Address: 0x1e7f74, Func Offset: 0x84
	// Line 2825, Address: 0x1e7f78, Func Offset: 0x88
	// Line 2828, Address: 0x1e7f7c, Func Offset: 0x8c
	// Line 2825, Address: 0x1e7f80, Func Offset: 0x90
	// Line 2828, Address: 0x1e7f88, Func Offset: 0x98
	// Line 2825, Address: 0x1e7f9c, Func Offset: 0xac
	// Line 2826, Address: 0x1e7fb0, Func Offset: 0xc0
	// Line 2827, Address: 0x1e7fb8, Func Offset: 0xc8
	// Line 2828, Address: 0x1e7fc0, Func Offset: 0xd0
	// Line 2835, Address: 0x1e8018, Func Offset: 0x128
	// Line 2832, Address: 0x1e801c, Func Offset: 0x12c
	// Line 2835, Address: 0x1e8020, Func Offset: 0x130
	// Line 2832, Address: 0x1e8024, Func Offset: 0x134
	// Line 2834, Address: 0x1e8030, Func Offset: 0x140
	// Line 2835, Address: 0x1e8034, Func Offset: 0x144
	// Line 2832, Address: 0x1e8048, Func Offset: 0x158
	// Line 2834, Address: 0x1e805c, Func Offset: 0x16c
	// Line 2833, Address: 0x1e8064, Func Offset: 0x174
	// Line 2835, Address: 0x1e806c, Func Offset: 0x17c
	// Line 2843, Address: 0x1e80c4, Func Offset: 0x1d4
	// Line 2840, Address: 0x1e80c8, Func Offset: 0x1d8
	// Line 2843, Address: 0x1e80cc, Func Offset: 0x1dc
	// Line 2840, Address: 0x1e80d0, Func Offset: 0x1e0
	// Line 2841, Address: 0x1e80dc, Func Offset: 0x1ec
	// Line 2843, Address: 0x1e80e0, Func Offset: 0x1f0
	// Line 2840, Address: 0x1e80f4, Func Offset: 0x204
	// Line 2841, Address: 0x1e8108, Func Offset: 0x218
	// Line 2842, Address: 0x1e8110, Func Offset: 0x220
	// Line 2843, Address: 0x1e8118, Func Offset: 0x228
	// Line 2850, Address: 0x1e8170, Func Offset: 0x280
	// Line 2847, Address: 0x1e8174, Func Offset: 0x284
	// Line 2850, Address: 0x1e8178, Func Offset: 0x288
	// Line 2847, Address: 0x1e817c, Func Offset: 0x28c
	// Line 2848, Address: 0x1e8188, Func Offset: 0x298
	// Line 2850, Address: 0x1e818c, Func Offset: 0x29c
	// Line 2847, Address: 0x1e81a0, Func Offset: 0x2b0
	// Line 2848, Address: 0x1e81b4, Func Offset: 0x2c4
	// Line 2849, Address: 0x1e81bc, Func Offset: 0x2cc
	// Line 2850, Address: 0x1e81c4, Func Offset: 0x2d4
	// Line 2857, Address: 0x1e821c, Func Offset: 0x32c
	// Line 2860, Address: 0x1e8228, Func Offset: 0x338
	// Line 2862, Address: 0x1e8248, Func Offset: 0x358
	// Line 2863, Address: 0x1e8250, Func Offset: 0x360
	// Line 2866, Address: 0x1e8258, Func Offset: 0x368
	// Line 2869, Address: 0x1e825c, Func Offset: 0x36c
	// Line 2870, Address: 0x1e8264, Func Offset: 0x374
	// Line 2871, Address: 0x1e8268, Func Offset: 0x378
	// Line 2873, Address: 0x1e8270, Func Offset: 0x380
	// Line 2874, Address: 0x1e8280, Func Offset: 0x390
	// Func End, Address: 0x1e829c, Func Offset: 0x3ac
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
	// Line 2733, Address: 0x1e82a0, Func Offset: 0
	// Line 2734, Address: 0x1e82a4, Func Offset: 0x4
	// Line 2755, Address: 0x1e82c0, Func Offset: 0x20
	// Line 2763, Address: 0x1e82c4, Func Offset: 0x24
	// Line 2755, Address: 0x1e82c8, Func Offset: 0x28
	// Line 2763, Address: 0x1e82cc, Func Offset: 0x2c
	// Line 2752, Address: 0x1e82d4, Func Offset: 0x34
	// Line 2778, Address: 0x1e82dc, Func Offset: 0x3c
	// Line 2738, Address: 0x1e82e0, Func Offset: 0x40
	// Line 2740, Address: 0x1e82ec, Func Offset: 0x4c
	// Line 2745, Address: 0x1e82f0, Func Offset: 0x50
	// Line 2740, Address: 0x1e82f8, Func Offset: 0x58
	// Line 2741, Address: 0x1e8300, Func Offset: 0x60
	// Line 2745, Address: 0x1e830c, Func Offset: 0x6c
	// Line 2750, Address: 0x1e8310, Func Offset: 0x70
	// Line 2752, Address: 0x1e8320, Func Offset: 0x80
	// Line 2755, Address: 0x1e8378, Func Offset: 0xd8
	// Line 2757, Address: 0x1e83a8, Func Offset: 0x108
	// Line 2758, Address: 0x1e83d8, Func Offset: 0x138
	// Line 2762, Address: 0x1e8408, Func Offset: 0x168
	// Line 2763, Address: 0x1e8418, Func Offset: 0x178
	// Line 2765, Address: 0x1e8424, Func Offset: 0x184
	// Line 2768, Address: 0x1e8428, Func Offset: 0x188
	// Line 2770, Address: 0x1e842c, Func Offset: 0x18c
	// Line 2772, Address: 0x1e8440, Func Offset: 0x1a0
	// Line 2775, Address: 0x1e8450, Func Offset: 0x1b0
	// Line 2778, Address: 0x1e8458, Func Offset: 0x1b8
	// Line 2781, Address: 0x1e8464, Func Offset: 0x1c4
	// Line 2783, Address: 0x1e846c, Func Offset: 0x1cc
	// Line 2784, Address: 0x1e8480, Func Offset: 0x1e0
	// Line 2785, Address: 0x1e8488, Func Offset: 0x1e8
	// Line 2788, Address: 0x1e848c, Func Offset: 0x1ec
	// Line 2789, Address: 0x1e84a0, Func Offset: 0x200
	// Func End, Address: 0x1e84a8, Func Offset: 0x208
}

// xFXStreakInit__Fv
// Start address: 0x1e84b0
void xFXStreakInit()
{
	int32 i;
	// Line 2719, Address: 0x1e84b0, Func Offset: 0
	// Line 2721, Address: 0x1e84c0, Func Offset: 0x10
	// Line 2725, Address: 0x1e84d0, Func Offset: 0x20
	// Line 2727, Address: 0x1e84e0, Func Offset: 0x30
	// Line 2729, Address: 0x1e84e4, Func Offset: 0x34
	// Line 2728, Address: 0x1e84e8, Func Offset: 0x38
	// Line 2729, Address: 0x1e84ec, Func Offset: 0x3c
	// Line 2730, Address: 0x1e84f8, Func Offset: 0x48
	// Func End, Address: 0x1e850c, Func Offset: 0x5c
}

// xFXFireworksUpdate__Ff
// Start address: 0x1e8510
void xFXFireworksUpdate(float32 dt)
{
	int32 i;
	xParEmitterCustomSettings trail_info;
	zParEmitter* femit;
	xParEmitterCustomSettings xplo_info;
	// Line 2549, Address: 0x1e8510, Func Offset: 0
	// Line 2550, Address: 0x1e8528, Func Offset: 0x18
	// Line 2549, Address: 0x1e852c, Func Offset: 0x1c
	// Line 2550, Address: 0x1e8530, Func Offset: 0x20
	// Line 2549, Address: 0x1e8534, Func Offset: 0x24
	// Line 2550, Address: 0x1e8538, Func Offset: 0x28
	// Line 2549, Address: 0x1e853c, Func Offset: 0x2c
	// Line 2550, Address: 0x1e8540, Func Offset: 0x30
	// Line 2549, Address: 0x1e8544, Func Offset: 0x34
	// Line 2550, Address: 0x1e8548, Func Offset: 0x38
	// Line 2549, Address: 0x1e854c, Func Offset: 0x3c
	// Line 2550, Address: 0x1e8554, Func Offset: 0x44
	// Line 2549, Address: 0x1e8558, Func Offset: 0x48
	// Line 2550, Address: 0x1e855c, Func Offset: 0x4c
	// Line 2549, Address: 0x1e8560, Func Offset: 0x50
	// Line 2550, Address: 0x1e8564, Func Offset: 0x54
	// Line 2549, Address: 0x1e8568, Func Offset: 0x58
	// Line 2550, Address: 0x1e856c, Func Offset: 0x5c
	// Line 2549, Address: 0x1e8570, Func Offset: 0x60
	// Line 2550, Address: 0x1e8574, Func Offset: 0x64
	// Line 2549, Address: 0x1e8578, Func Offset: 0x68
	// Line 2550, Address: 0x1e8594, Func Offset: 0x84
	// Line 2554, Address: 0x1e859c, Func Offset: 0x8c
	// Line 2557, Address: 0x1e85a4, Func Offset: 0x94
	// Line 2559, Address: 0x1e85ac, Func Offset: 0x9c
	// Line 2560, Address: 0x1e85b0, Func Offset: 0xa0
	// Line 2559, Address: 0x1e85b8, Func Offset: 0xa8
	// Line 2560, Address: 0x1e85bc, Func Offset: 0xac
	// Line 2563, Address: 0x1e85c8, Func Offset: 0xb8
	// Line 2565, Address: 0x1e85f0, Func Offset: 0xe0
	// Line 2569, Address: 0x1e8610, Func Offset: 0x100
	// Line 2565, Address: 0x1e8614, Func Offset: 0x104
	// Line 2569, Address: 0x1e861c, Func Offset: 0x10c
	// Line 2571, Address: 0x1e8624, Func Offset: 0x114
	// Line 2572, Address: 0x1e862c, Func Offset: 0x11c
	// Line 2582, Address: 0x1e8664, Func Offset: 0x154
	// Line 2588, Address: 0x1e8670, Func Offset: 0x160
	// Line 2589, Address: 0x1e8674, Func Offset: 0x164
	// Line 2588, Address: 0x1e867c, Func Offset: 0x16c
	// Line 2589, Address: 0x1e8680, Func Offset: 0x170
	// Line 2590, Address: 0x1e868c, Func Offset: 0x17c
	// Line 2600, Address: 0x1e8698, Func Offset: 0x188
	// Line 2594, Address: 0x1e869c, Func Offset: 0x18c
	// Line 2602, Address: 0x1e86a0, Func Offset: 0x190
	// Line 2594, Address: 0x1e86a4, Func Offset: 0x194
	// Line 2595, Address: 0x1e86b4, Func Offset: 0x1a4
	// Line 2596, Address: 0x1e86c8, Func Offset: 0x1b8
	// Line 2600, Address: 0x1e86dc, Func Offset: 0x1cc
	// Line 2601, Address: 0x1e86e0, Func Offset: 0x1d0
	// Line 2602, Address: 0x1e86f8, Func Offset: 0x1e8
	// Line 2606, Address: 0x1e8704, Func Offset: 0x1f4
	// Line 2609, Address: 0x1e871c, Func Offset: 0x20c
	// Line 2610, Address: 0x1e8720, Func Offset: 0x210
	// Line 2614, Address: 0x1e8724, Func Offset: 0x214
	// Line 2615, Address: 0x1e8744, Func Offset: 0x234
	// Line 2618, Address: 0x1e8748, Func Offset: 0x238
	// Line 2621, Address: 0x1e8754, Func Offset: 0x244
	// Line 2623, Address: 0x1e8774, Func Offset: 0x264
	// Line 2627, Address: 0x1e877c, Func Offset: 0x26c
	// Line 2628, Address: 0x1e87c4, Func Offset: 0x2b4
	// Line 2629, Address: 0x1e8810, Func Offset: 0x300
	// Line 2630, Address: 0x1e882c, Func Offset: 0x31c
	// Line 2629, Address: 0x1e8830, Func Offset: 0x320
	// Line 2630, Address: 0x1e8834, Func Offset: 0x324
	// Line 2629, Address: 0x1e8838, Func Offset: 0x328
	// Line 2632, Address: 0x1e883c, Func Offset: 0x32c
	// Line 2629, Address: 0x1e8848, Func Offset: 0x338
	// Line 2630, Address: 0x1e8870, Func Offset: 0x360
	// Line 2632, Address: 0x1e8894, Func Offset: 0x384
	// Line 2633, Address: 0x1e889c, Func Offset: 0x38c
	// Line 2635, Address: 0x1e88a8, Func Offset: 0x398
	// Line 2633, Address: 0x1e88ac, Func Offset: 0x39c
	// Line 2635, Address: 0x1e88b0, Func Offset: 0x3a0
	// Line 2633, Address: 0x1e88b4, Func Offset: 0x3a4
	// Line 2635, Address: 0x1e88b8, Func Offset: 0x3a8
	// Line 2633, Address: 0x1e88bc, Func Offset: 0x3ac
	// Line 2635, Address: 0x1e88d0, Func Offset: 0x3c0
	// Line 2638, Address: 0x1e88d8, Func Offset: 0x3c8
	// Line 2654, Address: 0x1e89cc, Func Offset: 0x4bc
	// Line 2651, Address: 0x1e89d8, Func Offset: 0x4c8
	// Line 2654, Address: 0x1e89e0, Func Offset: 0x4d0
	// Line 2651, Address: 0x1e89f4, Func Offset: 0x4e4
	// Line 2654, Address: 0x1e8a0c, Func Offset: 0x4fc
	// Line 2656, Address: 0x1e8a18, Func Offset: 0x508
	// Line 2658, Address: 0x1e8a2c, Func Offset: 0x51c
	// Line 2659, Address: 0x1e8a34, Func Offset: 0x524
	// Line 2673, Address: 0x1e8a6c, Func Offset: 0x55c
	// Line 2674, Address: 0x1e8a80, Func Offset: 0x570
	// Func End, Address: 0x1e8ad0, Func Offset: 0x5c0
}

// xFXFireworksLaunch__FfPC5xVec3f
// Start address: 0x1e8ad0
void xFXFireworksLaunch(float32 countdownTime, xVec3* pos, float32 fuelTime)
{
	int32 i;
	// Line 2533, Address: 0x1e8ad0, Func Offset: 0
	// Line 2537, Address: 0x1e8ae0, Func Offset: 0x10
	// Line 2539, Address: 0x1e8aec, Func Offset: 0x1c
	// Line 2540, Address: 0x1e8af4, Func Offset: 0x24
	// Line 2541, Address: 0x1e8af8, Func Offset: 0x28
	// Line 2543, Address: 0x1e8b10, Func Offset: 0x40
	// Line 2545, Address: 0x1e8b18, Func Offset: 0x48
	// Line 2546, Address: 0x1e8b28, Func Offset: 0x58
	// Func End, Address: 0x1e8b30, Func Offset: 0x60
}

// xFXFireworksInit__FPCcPCcPCcPCcPCc
// Start address: 0x1e8b30
void xFXFireworksInit(int8* fireworksTrailEmitter, int8* fireworksEmitter1, int8* fireworksEmitter2, int8* fireworksSound, int8* fireworksLaunchSound)
{
	int32 i;
	// Line 2516, Address: 0x1e8b30, Func Offset: 0
	// Line 2517, Address: 0x1e8b54, Func Offset: 0x24
	// Line 2518, Address: 0x1e8b5c, Func Offset: 0x2c
	// Line 2519, Address: 0x1e8b68, Func Offset: 0x38
	// Line 2520, Address: 0x1e8b74, Func Offset: 0x44
	// Line 2521, Address: 0x1e8b80, Func Offset: 0x50
	// Line 2524, Address: 0x1e8b8c, Func Offset: 0x5c
	// Line 2521, Address: 0x1e8b90, Func Offset: 0x60
	// Line 2524, Address: 0x1e8b94, Func Offset: 0x64
	// Line 2525, Address: 0x1e8ba4, Func Offset: 0x74
	// Line 2527, Address: 0x1e8bb0, Func Offset: 0x80
	// Line 2529, Address: 0x1e8bd0, Func Offset: 0xa0
	// Func End, Address: 0x1e8bec, Func Offset: 0xbc
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
	tri_data_0 tri_buffer[3][2];
	tri_data_0 cur_tri;
	RpTriangle* end;
	uint16 vi[3];
	float32 d0;
	float32 d1;
	float32 d2;
	uint32 flags;
	int32 i;
	int32 size1;
	int32 j;
	uint32 i;
	// Line 2307, Address: 0x1e8bf0, Func Offset: 0
	// Line 2308, Address: 0x1e8bf4, Func Offset: 0x4
	// Line 2307, Address: 0x1e8bf8, Func Offset: 0x8
	// Line 2308, Address: 0x1e8bfc, Func Offset: 0xc
	// Line 2307, Address: 0x1e8c00, Func Offset: 0x10
	// Line 2308, Address: 0x1e8c28, Func Offset: 0x38
	// Line 2307, Address: 0x1e8c2c, Func Offset: 0x3c
	// Line 2308, Address: 0x1e8c30, Func Offset: 0x40
	// Line 2307, Address: 0x1e8c34, Func Offset: 0x44
	// Line 2308, Address: 0x1e8c44, Func Offset: 0x54
	// Line 2309, Address: 0x1e8c4c, Func Offset: 0x5c
	// Line 2322, Address: 0x1e8c60, Func Offset: 0x70
	// Line 2313, Address: 0x1e8c64, Func Offset: 0x74
	// Line 2322, Address: 0x1e8c68, Func Offset: 0x78
	// Line 2327, Address: 0x1e8c6c, Func Offset: 0x7c
	// Line 2313, Address: 0x1e8c70, Func Offset: 0x80
	// Line 2322, Address: 0x1e8c74, Func Offset: 0x84
	// Line 2316, Address: 0x1e8c78, Func Offset: 0x88
	// Line 2319, Address: 0x1e8c7c, Func Offset: 0x8c
	// Line 2323, Address: 0x1e8c84, Func Offset: 0x94
	// Line 2316, Address: 0x1e8c8c, Func Offset: 0x9c
	// Line 2324, Address: 0x1e8c90, Func Offset: 0xa0
	// Line 2316, Address: 0x1e8c94, Func Offset: 0xa4
	// Line 2327, Address: 0x1e8c9c, Func Offset: 0xac
	// Line 2328, Address: 0x1e8ca4, Func Offset: 0xb4
	// Line 2329, Address: 0x1e8cb0, Func Offset: 0xc0
	// Line 2330, Address: 0x1e8cbc, Func Offset: 0xcc
	// Line 2333, Address: 0x1e8cd4, Func Offset: 0xe4
	// Line 2334, Address: 0x1e8cdc, Func Offset: 0xec
	// Line 2335, Address: 0x1e8cec, Func Offset: 0xfc
	// Line 2336, Address: 0x1e8d08, Func Offset: 0x118
	// Line 2339, Address: 0x1e8d24, Func Offset: 0x134
	// Line 2340, Address: 0x1e8d30, Func Offset: 0x140
	// Line 2341, Address: 0x1e8d38, Func Offset: 0x148
	// Line 2343, Address: 0x1e8d44, Func Offset: 0x154
	// Line 2344, Address: 0x1e8d78, Func Offset: 0x188
	// Line 2346, Address: 0x1e8d98, Func Offset: 0x1a8
	// Line 2347, Address: 0x1e8dd8, Func Offset: 0x1e8
	// Line 2348, Address: 0x1e8ddc, Func Offset: 0x1ec
	// Line 2349, Address: 0x1e8de4, Func Offset: 0x1f4
	// Line 2347, Address: 0x1e8dec, Func Offset: 0x1fc
	// Line 2348, Address: 0x1e8df8, Func Offset: 0x208
	// Line 2349, Address: 0x1e8e00, Func Offset: 0x210
	// Line 2350, Address: 0x1e8e20, Func Offset: 0x230
	// Line 2351, Address: 0x1e8e40, Func Offset: 0x250
	// Line 2352, Address: 0x1e8e9c, Func Offset: 0x2ac
	// Line 2351, Address: 0x1e8ea8, Func Offset: 0x2b8
	// Line 2352, Address: 0x1e8eac, Func Offset: 0x2bc
	// Line 2355, Address: 0x1e8eb8, Func Offset: 0x2c8
	// Line 2360, Address: 0x1e8ebc, Func Offset: 0x2cc
	// Line 2354, Address: 0x1e8ec0, Func Offset: 0x2d0
	// Line 2359, Address: 0x1e8ec4, Func Offset: 0x2d4
	// Line 2354, Address: 0x1e8ec8, Func Offset: 0x2d8
	// Line 2360, Address: 0x1e8ecc, Func Offset: 0x2dc
	// Line 2357, Address: 0x1e8ed4, Func Offset: 0x2e4
	// Line 2360, Address: 0x1e8ed8, Func Offset: 0x2e8
	// Line 2358, Address: 0x1e8edc, Func Offset: 0x2ec
	// Line 2360, Address: 0x1e8ee0, Func Offset: 0x2f0
	// Line 2361, Address: 0x1e8fe0, Func Offset: 0x3f0
	// Line 2363, Address: 0x1e8fec, Func Offset: 0x3fc
	// Line 2364, Address: 0x1e900c, Func Offset: 0x41c
	// Line 2365, Address: 0x1e9014, Func Offset: 0x424
	// Line 2368, Address: 0x1e9018, Func Offset: 0x428
	// Line 2370, Address: 0x1e9024, Func Offset: 0x434
	// Line 2372, Address: 0x1e903c, Func Offset: 0x44c
	// Line 2377, Address: 0x1e9040, Func Offset: 0x450
	// Line 2379, Address: 0x1e90e0, Func Offset: 0x4f0
	// Line 2381, Address: 0x1e9148, Func Offset: 0x558
	// Line 2401, Address: 0x1e914c, Func Offset: 0x55c
	// Line 2381, Address: 0x1e9150, Func Offset: 0x560
	// Line 2382, Address: 0x1e9178, Func Offset: 0x588
	// Line 2381, Address: 0x1e917c, Func Offset: 0x58c
	// Line 2382, Address: 0x1e9180, Func Offset: 0x590
	// Line 2401, Address: 0x1e91a8, Func Offset: 0x5b8
	// Line 2382, Address: 0x1e91ac, Func Offset: 0x5bc
	// Line 2401, Address: 0x1e91c0, Func Offset: 0x5d0
	// Line 2402, Address: 0x1e91d0, Func Offset: 0x5e0
	// Line 2403, Address: 0x1e91e8, Func Offset: 0x5f8
	// Line 2404, Address: 0x1e91f0, Func Offset: 0x600
	// Line 2405, Address: 0x1e9210, Func Offset: 0x620
	// Line 2406, Address: 0x1e9228, Func Offset: 0x638
	// Line 2407, Address: 0x1e9230, Func Offset: 0x640
	// Line 2408, Address: 0x1e9250, Func Offset: 0x660
	// Line 2409, Address: 0x1e9268, Func Offset: 0x678
	// Line 2411, Address: 0x1e9270, Func Offset: 0x680
	// Line 2414, Address: 0x1e929c, Func Offset: 0x6ac
	// Line 2415, Address: 0x1e92a4, Func Offset: 0x6b4
	// Line 2417, Address: 0x1e92b0, Func Offset: 0x6c0
	// Line 2415, Address: 0x1e92b4, Func Offset: 0x6c4
	// Line 2416, Address: 0x1e934c, Func Offset: 0x75c
	// Line 2417, Address: 0x1e93d8, Func Offset: 0x7e8
	// Line 2418, Address: 0x1e945c, Func Offset: 0x86c
	// Line 2419, Address: 0x1e9468, Func Offset: 0x878
	// Line 2425, Address: 0x1e9478, Func Offset: 0x888
	// Line 2426, Address: 0x1e952c, Func Offset: 0x93c
	// Line 2427, Address: 0x1e97e8, Func Offset: 0xbf8
	// Line 2429, Address: 0x1e9800, Func Offset: 0xc10
	// Line 2433, Address: 0x1e9838, Func Offset: 0xc48
	// Line 2434, Address: 0x1e9ab0, Func Offset: 0xec0
	// Line 2436, Address: 0x1e9ac8, Func Offset: 0xed8
	// Line 2440, Address: 0x1e9afc, Func Offset: 0xf0c
	// Line 2441, Address: 0x1e9b20, Func Offset: 0xf30
	// Line 2444, Address: 0x1e9b28, Func Offset: 0xf38
	// Line 2448, Address: 0x1e9b2c, Func Offset: 0xf3c
	// Line 2444, Address: 0x1e9b38, Func Offset: 0xf48
	// Line 2447, Address: 0x1e9b48, Func Offset: 0xf58
	// Line 2448, Address: 0x1e9b4c, Func Offset: 0xf5c
	// Line 2449, Address: 0x1e9b78, Func Offset: 0xf88
	// Line 2448, Address: 0x1e9b7c, Func Offset: 0xf8c
	// Line 2451, Address: 0x1e9b84, Func Offset: 0xf94
	// Line 2452, Address: 0x1e9b9c, Func Offset: 0xfac
	// Line 2455, Address: 0x1e9bb4, Func Offset: 0xfc4
	// Line 2458, Address: 0x1e9be0, Func Offset: 0xff0
	// Line 2459, Address: 0x1e9bf0, Func Offset: 0x1000
	// Line 2461, Address: 0x1e9c08, Func Offset: 0x1018
	// Line 2462, Address: 0x1e9c70, Func Offset: 0x1080
	// Line 2463, Address: 0x1e9cb0, Func Offset: 0x10c0
	// Line 2465, Address: 0x1e9cc8, Func Offset: 0x10d8
	// Line 2467, Address: 0x1e9d18, Func Offset: 0x1128
	// Line 2469, Address: 0x1e9d24, Func Offset: 0x1134
	// Line 2470, Address: 0x1e9d2c, Func Offset: 0x113c
	// Line 2472, Address: 0x1e9d34, Func Offset: 0x1144
	// Line 2473, Address: 0x1e9d38, Func Offset: 0x1148
	// Line 2474, Address: 0x1e9d40, Func Offset: 0x1150
	// Line 2475, Address: 0x1e9d48, Func Offset: 0x1158
	// Line 2476, Address: 0x1e9d50, Func Offset: 0x1160
	// Line 2477, Address: 0x1e9d58, Func Offset: 0x1168
	// Func End, Address: 0x1e9d98, Func Offset: 0x11a8
}

// set_vert__17@unnamed@xFX_cpp@FR18RxObjSpace3DVertexRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9da0
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd)
{
	uint8 alpha;
	float32 a;
	RwRGBA* _col;
	// Line 2065, Address: 0x1e9da0, Func Offset: 0
	// Line 2066, Address: 0x1e9dac, Func Offset: 0xc
	// Line 2065, Address: 0x1e9db4, Func Offset: 0x14
	// Line 2066, Address: 0x1e9db8, Func Offset: 0x18
	// Line 2067, Address: 0x1e9dd0, Func Offset: 0x30
	// Line 2068, Address: 0x1e9de8, Func Offset: 0x48
	// Line 2072, Address: 0x1e9e40, Func Offset: 0xa0
	// Line 2070, Address: 0x1e9e44, Func Offset: 0xa4
	// Line 2071, Address: 0x1e9e5c, Func Offset: 0xbc
	// Line 2072, Address: 0x1e9e74, Func Offset: 0xd4
	// Line 2073, Address: 0x1e9e84, Func Offset: 0xe4
	// Line 2074, Address: 0x1e9e8c, Func Offset: 0xec
	// Line 2075, Address: 0x1e9e90, Func Offset: 0xf0
	// Func End, Address: 0x1e9e98, Func Offset: 0xf8
}

// lerp__17@unnamed@xFX_cpp@FRQ217@unnamed@xFX_cpp@9vert_datafRCQ217@unnamed@xFX_cpp@9vert_dataRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9ea0
void lerp(vert_data& v, float32 frac, vert_data& v0, vert_data& v1)
{
	// Line 2127, Address: 0x1e9ea0, Func Offset: 0
	// Line 2126, Address: 0x1e9ea4, Func Offset: 0x4
	// Line 2127, Address: 0x1e9ea8, Func Offset: 0x8
	// Line 2129, Address: 0x1e9eac, Func Offset: 0xc
	// Line 2127, Address: 0x1e9eb4, Func Offset: 0x14
	// Line 2128, Address: 0x1e9ef4, Func Offset: 0x54
	// Line 2129, Address: 0x1e9f3c, Func Offset: 0x9c
	// Line 2130, Address: 0x1ea320, Func Offset: 0x480
	// Line 2131, Address: 0x1ea350, Func Offset: 0x4b0
	// Func End, Address: 0x1ea358, Func Offset: 0x4b8
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
	// Line 2287, Address: 0x1ea400, Func Offset: 0
	// Line 2290, Address: 0x1ea410, Func Offset: 0x10
	// Line 2291, Address: 0x1ea414, Func Offset: 0x14
	// Line 2290, Address: 0x1ea41c, Func Offset: 0x1c
	// Line 2291, Address: 0x1ea42c, Func Offset: 0x2c
	// Line 2295, Address: 0x1ea444, Func Offset: 0x44
	// Line 2297, Address: 0x1ea464, Func Offset: 0x64
	// Line 2298, Address: 0x1ea468, Func Offset: 0x68
	// Line 2299, Address: 0x1ea46c, Func Offset: 0x6c
	// Line 2301, Address: 0x1ea470, Func Offset: 0x70
	// Line 2302, Address: 0x1ea480, Func Offset: 0x80
	// Line 2303, Address: 0x1ea490, Func Offset: 0x90
	// Func End, Address: 0x1ea498, Func Offset: 0x98
}

// xFXanimUVAtomicSetup__FP8RpAtomic
// Start address: 0x1ea4a0
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic)
{
	// Line 1838, Address: 0x1ea4a0, Func Offset: 0
	// Line 1840, Address: 0x1ea4b4, Func Offset: 0x14
	// Line 1903, Address: 0x1ea4b8, Func Offset: 0x18
	// Func End, Address: 0x1ea4c0, Func Offset: 0x20
}

// xFXanimUV2PSetTexture__FP9RwTexture
// Start address: 0x1ea4c0
void xFXanimUV2PSetTexture(RwTexture* texture)
{
	// Line 1774, Address: 0x1ea4c0, Func Offset: 0
	// Func End, Address: 0x1ea4c8, Func Offset: 0x8
}

// xFXanimUV2PSetAngle__Ff
// Start address: 0x1ea4d0
void xFXanimUV2PSetAngle(float32 angle)
{
	// Line 1759, Address: 0x1ea4d0, Func Offset: 0
	// Line 1762, Address: 0x1ea4dc, Func Offset: 0xc
	// Line 1763, Address: 0x1ea4e4, Func Offset: 0x14
	// Line 1765, Address: 0x1ea4f0, Func Offset: 0x20
	// Line 1766, Address: 0x1ea4fc, Func Offset: 0x2c
	// Line 1767, Address: 0x1ea504, Func Offset: 0x34
	// Func End, Address: 0x1ea514, Func Offset: 0x44
}

// xFXanimUV2PSetScale__FPC5xVec3
// Start address: 0x1ea520
void xFXanimUV2PSetScale(xVec3* scale)
{
	// Line 1752, Address: 0x1ea520, Func Offset: 0
	// Line 1753, Address: 0x1ea528, Func Offset: 0x8
	// Line 1754, Address: 0x1ea52c, Func Offset: 0xc
	// Func End, Address: 0x1ea534, Func Offset: 0x14
}

// xFXanimUV2PSetTranslation__FPC5xVec3
// Start address: 0x1ea540
void xFXanimUV2PSetTranslation(xVec3* trans)
{
	// Line 1738, Address: 0x1ea540, Func Offset: 0
	// Line 1739, Address: 0x1ea548, Func Offset: 0x8
	// Line 1740, Address: 0x1ea54c, Func Offset: 0xc
	// Func End, Address: 0x1ea554, Func Offset: 0x14
}

// xFXanimUVSetAngle__Ff
// Start address: 0x1ea560
void xFXanimUVSetAngle(float32 angle)
{
	// Line 1705, Address: 0x1ea560, Func Offset: 0
	// Line 1708, Address: 0x1ea56c, Func Offset: 0xc
	// Line 1709, Address: 0x1ea574, Func Offset: 0x14
	// Line 1711, Address: 0x1ea580, Func Offset: 0x20
	// Line 1712, Address: 0x1ea58c, Func Offset: 0x2c
	// Line 1713, Address: 0x1ea594, Func Offset: 0x34
	// Func End, Address: 0x1ea5a4, Func Offset: 0x44
}

// xFXanimUVSetScale__FPC5xVec3
// Start address: 0x1ea5b0
void xFXanimUVSetScale(xVec3* scale)
{
	// Line 1698, Address: 0x1ea5b0, Func Offset: 0
	// Line 1699, Address: 0x1ea5b8, Func Offset: 0x8
	// Line 1700, Address: 0x1ea5bc, Func Offset: 0xc
	// Func End, Address: 0x1ea5c4, Func Offset: 0x14
}

// xFXanimUVSetTranslation__FPC5xVec3
// Start address: 0x1ea5d0
void xFXanimUVSetTranslation(xVec3* trans)
{
	// Line 1684, Address: 0x1ea5d0, Func Offset: 0
	// Line 1685, Address: 0x1ea5d8, Func Offset: 0x8
	// Line 1686, Address: 0x1ea5dc, Func Offset: 0xc
	// Func End, Address: 0x1ea5e4, Func Offset: 0x14
}

// xFXAtomicEnvMapSetup__FP8RpAtomicUif
// Start address: 0x1ea5f0
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess)
{
	RwTexture* env;
	float32 tmp;
	RpSkin* skin;
	// Line 1360, Address: 0x1ea5f0, Func Offset: 0
	// Line 1361, Address: 0x1ea608, Func Offset: 0x18
	// Line 1362, Address: 0x1ea620, Func Offset: 0x30
	// Line 1363, Address: 0x1ea628, Func Offset: 0x38
	// Line 1364, Address: 0x1ea648, Func Offset: 0x58
	// Line 1365, Address: 0x1ea64c, Func Offset: 0x5c
	// Line 1366, Address: 0x1ea650, Func Offset: 0x60
	// Line 1367, Address: 0x1ea668, Func Offset: 0x78
	// Line 1372, Address: 0x1ea66c, Func Offset: 0x7c
	// Line 1373, Address: 0x1ea674, Func Offset: 0x84
	// Line 1374, Address: 0x1ea67c, Func Offset: 0x8c
	// Line 1377, Address: 0x1ea688, Func Offset: 0x98
	// Line 1381, Address: 0x1ea690, Func Offset: 0xa0
	// Line 1382, Address: 0x1ea698, Func Offset: 0xa8
	// Func End, Address: 0x1ea6b4, Func Offset: 0xc4
}

// xFXShinyRender__FP8RpAtomic
// Start address: 0x1ea6c0
RpAtomic* xFXShinyRender(RpAtomic* atomic)
{
	RwCullMode cmode;
	// Line 1232, Address: 0x1ea6c0, Func Offset: 0
	// Line 1233, Address: 0x1ea6d4, Func Offset: 0x14
	// Line 1234, Address: 0x1ea6e0, Func Offset: 0x20
	// Line 1235, Address: 0x1ea6ec, Func Offset: 0x2c
	// Line 1234, Address: 0x1ea6f0, Func Offset: 0x30
	// Line 1235, Address: 0x1ea6f4, Func Offset: 0x34
	// Line 1259, Address: 0x1ea700, Func Offset: 0x40
	// Line 1264, Address: 0x1ea708, Func Offset: 0x48
	// Line 1265, Address: 0x1ea714, Func Offset: 0x54
	// Line 1268, Address: 0x1ea720, Func Offset: 0x60
	// Line 1269, Address: 0x1ea728, Func Offset: 0x68
	// Line 1270, Address: 0x1ea734, Func Offset: 0x74
	// Line 1271, Address: 0x1ea758, Func Offset: 0x98
	// Line 1272, Address: 0x1ea764, Func Offset: 0xa4
	// Line 1275, Address: 0x1ea76c, Func Offset: 0xac
	// Line 1277, Address: 0x1ea778, Func Offset: 0xb8
	// Line 1276, Address: 0x1ea77c, Func Offset: 0xbc
	// Line 1277, Address: 0x1ea784, Func Offset: 0xc4
	// Line 1279, Address: 0x1ea7f8, Func Offset: 0x138
	// Line 1282, Address: 0x1ea808, Func Offset: 0x148
	// Line 1283, Address: 0x1ea814, Func Offset: 0x154
	// Line 1285, Address: 0x1ea838, Func Offset: 0x178
	// Line 1284, Address: 0x1ea83c, Func Offset: 0x17c
	// Line 1285, Address: 0x1ea840, Func Offset: 0x180
	// Line 1287, Address: 0x1ea8c0, Func Offset: 0x200
	// Line 1289, Address: 0x1ea8d0, Func Offset: 0x210
	// Line 1291, Address: 0x1ea8dc, Func Offset: 0x21c
	// Line 1292, Address: 0x1ea8e0, Func Offset: 0x220
	// Func End, Address: 0x1ea8f8, Func Offset: 0x238
}

// xFXBubbleRender__FP8RpAtomic
// Start address: 0x1ea900
RpAtomic* xFXBubbleRender(RpAtomic* atomic)
{
	RwCullMode cmode;
	xFXBubbleParams* bp;
	// Line 1176, Address: 0x1ea900, Func Offset: 0
	// Line 1180, Address: 0x1ea908, Func Offset: 0x8
	// Line 1176, Address: 0x1ea90c, Func Offset: 0xc
	// Line 1180, Address: 0x1ea920, Func Offset: 0x20
	// Line 1176, Address: 0x1ea924, Func Offset: 0x24
	// Line 1178, Address: 0x1ea928, Func Offset: 0x28
	// Line 1180, Address: 0x1ea93c, Func Offset: 0x3c
	// Line 1181, Address: 0x1ea944, Func Offset: 0x44
	// Line 1185, Address: 0x1ea950, Func Offset: 0x50
	// Line 1186, Address: 0x1ea958, Func Offset: 0x58
	// Line 1187, Address: 0x1ea964, Func Offset: 0x64
	// Line 1188, Address: 0x1ea974, Func Offset: 0x74
	// Line 1190, Address: 0x1ea998, Func Offset: 0x98
	// Line 1191, Address: 0x1ea9a4, Func Offset: 0xa4
	// Line 1192, Address: 0x1ea9a8, Func Offset: 0xa8
	// Line 1194, Address: 0x1ea9b0, Func Offset: 0xb0
	// Line 1195, Address: 0x1ea9bc, Func Offset: 0xbc
	// Line 1196, Address: 0x1ea9d0, Func Offset: 0xd0
	// Line 1197, Address: 0x1ea9d4, Func Offset: 0xd4
	// Line 1201, Address: 0x1eaa50, Func Offset: 0x150
	// Line 1205, Address: 0x1eaa60, Func Offset: 0x160
	// Line 1206, Address: 0x1eaa6c, Func Offset: 0x16c
	// Line 1207, Address: 0x1eaa80, Func Offset: 0x180
	// Line 1208, Address: 0x1eaaa0, Func Offset: 0x1a0
	// Line 1209, Address: 0x1eaaa8, Func Offset: 0x1a8
	// Line 1212, Address: 0x1eab20, Func Offset: 0x220
	// Line 1215, Address: 0x1eab30, Func Offset: 0x230
	// Line 1217, Address: 0x1eab3c, Func Offset: 0x23c
	// Line 1218, Address: 0x1eab40, Func Offset: 0x240
	// Func End, Address: 0x1eab60, Func Offset: 0x260
}

// MaterialSetEnvMap2__FP10RpMaterialPv
// Start address: 0x1eab60
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data)
{
	int8* textureName;
	RwTexture* texture;
	RwFrame* frame;
	// Line 1130, Address: 0x1eab60, Func Offset: 0
	// Line 1134, Address: 0x1eab74, Func Offset: 0x14
	// Line 1155, Address: 0x1eab80, Func Offset: 0x20
	// Line 1139, Address: 0x1eab84, Func Offset: 0x24
	// Line 1155, Address: 0x1eab88, Func Offset: 0x28
	// Line 1140, Address: 0x1eab90, Func Offset: 0x30
	// Line 1155, Address: 0x1eab94, Func Offset: 0x34
	// Line 1157, Address: 0x1eabb8, Func Offset: 0x58
	// Line 1159, Address: 0x1eabc4, Func Offset: 0x64
	// Line 1166, Address: 0x1eabdc, Func Offset: 0x7c
	// Line 1168, Address: 0x1eabe0, Func Offset: 0x80
	// Line 1169, Address: 0x1eabe4, Func Offset: 0x84
	// Func End, Address: 0x1eabfc, Func Offset: 0x9c
}

// MaterialSetEnvMap__FP10RpMaterialPv
// Start address: 0x1eac00
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data)
{
	RwTexture* texture;
	RwFrame* frame;
	// Line 1077, Address: 0x1eac00, Func Offset: 0
	// Line 1080, Address: 0x1eac14, Func Offset: 0x14
	// Line 1082, Address: 0x1eac1c, Func Offset: 0x1c
	// Line 1083, Address: 0x1eac24, Func Offset: 0x24
	// Line 1087, Address: 0x1eac28, Func Offset: 0x28
	// Line 1094, Address: 0x1eac34, Func Offset: 0x34
	// Line 1098, Address: 0x1eac3c, Func Offset: 0x3c
	// Line 1100, Address: 0x1eac50, Func Offset: 0x50
	// Line 1101, Address: 0x1eac58, Func Offset: 0x58
	// Line 1104, Address: 0x1eac60, Func Offset: 0x60
	// Line 1106, Address: 0x1eac64, Func Offset: 0x64
	// Line 1109, Address: 0x1eac70, Func Offset: 0x70
	// Line 1111, Address: 0x1eac78, Func Offset: 0x78
	// Line 1115, Address: 0x1eac84, Func Offset: 0x84
	// Line 1117, Address: 0x1eaca0, Func Offset: 0xa0
	// Line 1120, Address: 0x1eaca8, Func Offset: 0xa8
	// Line 1124, Address: 0x1eacb0, Func Offset: 0xb0
	// Line 1125, Address: 0x1eacb8, Func Offset: 0xb8
	// Func End, Address: 0x1eacd0, Func Offset: 0xd0
}

// MaterialSetShininess__FP10RpMaterialPv
// Start address: 0x1eacd0
RpMaterial* MaterialSetShininess(RpMaterial* material)
{
	RpMatFXMaterialFlags flags;
	// Line 1042, Address: 0x1eacd0, Func Offset: 0
	// Line 1045, Address: 0x1eacdc, Func Offset: 0xc
	// Line 1047, Address: 0x1eace4, Func Offset: 0x14
	// Line 1049, Address: 0x1eacf8, Func Offset: 0x28
	// Line 1050, Address: 0x1ead04, Func Offset: 0x34
	// Line 1052, Address: 0x1ead08, Func Offset: 0x38
	// Line 1053, Address: 0x1ead0c, Func Offset: 0x3c
	// Func End, Address: 0x1ead1c, Func Offset: 0x4c
}

// xFXPreAllocMatFX__FP7RpClump
// Start address: 0x1ead20
void xFXPreAllocMatFX(RpClump* clump)
{
	// Line 1032, Address: 0x1ead20, Func Offset: 0
	// Func End, Address: 0x1ead30, Func Offset: 0x10
}

// PreAllocMatFX_cb__FP8RpAtomicPv
// Start address: 0x1ead30
RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic)
{
	// Line 1024, Address: 0x1ead30, Func Offset: 0
	// Line 1025, Address: 0x1ead3c, Func Offset: 0xc
	// Line 1026, Address: 0x1ead60, Func Offset: 0x30
	// Line 1027, Address: 0x1ead64, Func Offset: 0x34
	// Func End, Address: 0x1ead74, Func Offset: 0x44
}

// AtomicDisableMatFX__FP8RpAtomic
// Start address: 0x1ead80
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic)
{
	RpGeometry* geometry;
	// Line 1011, Address: 0x1ead80, Func Offset: 0
	// Line 1012, Address: 0x1ead8c, Func Offset: 0xc
	// Line 1014, Address: 0x1ead94, Func Offset: 0x14
	// Line 1015, Address: 0x1ead98, Func Offset: 0x18
	// Line 1017, Address: 0x1eada0, Func Offset: 0x20
	// Line 1018, Address: 0x1eadac, Func Offset: 0x2c
	// Line 1020, Address: 0x1eadb0, Func Offset: 0x30
	// Line 1021, Address: 0x1eadb4, Func Offset: 0x34
	// Func End, Address: 0x1eadc4, Func Offset: 0x44
}

// MaterialDisableMatFX__FP10RpMaterialPv
// Start address: 0x1eadd0
RpMaterial* MaterialDisableMatFX(RpMaterial* material)
{
	// Line 1003, Address: 0x1eadd0, Func Offset: 0
	// Line 1004, Address: 0x1eadd4, Func Offset: 0x4
	// Line 1003, Address: 0x1eadd8, Func Offset: 0x8
	// Line 1004, Address: 0x1eade0, Func Offset: 0x10
	// Line 1006, Address: 0x1eade8, Func Offset: 0x18
	// Line 1007, Address: 0x1eadec, Func Offset: 0x1c
	// Func End, Address: 0x1eadfc, Func Offset: 0x2c
}

// xFXUpdate__Ff
// Start address: 0x1eae00
void xFXUpdate(float32 dt)
{
	// Line 838, Address: 0x1eae00, Func Offset: 0
	// Line 839, Address: 0x1eae14, Func Offset: 0x14
	// Line 840, Address: 0x1eae1c, Func Offset: 0x1c
	// Line 841, Address: 0x1eae58, Func Offset: 0x58
	// Line 879, Address: 0x1eae60, Func Offset: 0x60
	// Func End, Address: 0x1eae78, Func Offset: 0x78
}

// xFX_SceneExit__FP7RpWorld
// Start address: 0x1eae80
void xFX_SceneExit()
{
	// Line 835, Address: 0x1eae80, Func Offset: 0
	// Func End, Address: 0x1eae88, Func Offset: 0x8
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
	RpAtomic*(*tmp)(RpAtomic*);
	uint32 bubble;
	// Line 697, Address: 0x1eae90, Func Offset: 0
	// Line 705, Address: 0x1eaec0, Func Offset: 0x30
	// Line 706, Address: 0x1eaec4, Func Offset: 0x34
	// Line 707, Address: 0x1eaed0, Func Offset: 0x40
	// Line 708, Address: 0x1eaed8, Func Offset: 0x48
	// Line 709, Address: 0x1eaedc, Func Offset: 0x4c
	// Line 712, Address: 0x1eaef0, Func Offset: 0x60
	// Line 714, Address: 0x1eaef4, Func Offset: 0x64
	// Line 718, Address: 0x1eaefc, Func Offset: 0x6c
	// Line 719, Address: 0x1eaf08, Func Offset: 0x78
	// Line 721, Address: 0x1eaf10, Func Offset: 0x80
	// Line 723, Address: 0x1eaf20, Func Offset: 0x90
	// Line 729, Address: 0x1eaf2c, Func Offset: 0x9c
	// Line 731, Address: 0x1eaf34, Func Offset: 0xa4
	// Line 732, Address: 0x1eaf44, Func Offset: 0xb4
	// Line 733, Address: 0x1eaf54, Func Offset: 0xc4
	// Line 737, Address: 0x1eaf5c, Func Offset: 0xcc
	// Line 738, Address: 0x1eaf64, Func Offset: 0xd4
	// Line 742, Address: 0x1eaf7c, Func Offset: 0xec
	// Line 743, Address: 0x1eaf80, Func Offset: 0xf0
	// Line 744, Address: 0x1eaf90, Func Offset: 0x100
	// Line 745, Address: 0x1eafa0, Func Offset: 0x110
	// Line 749, Address: 0x1eafa8, Func Offset: 0x118
	// Line 750, Address: 0x1eb008, Func Offset: 0x178
	// Line 753, Address: 0x1eb014, Func Offset: 0x184
	// Line 754, Address: 0x1eb018, Func Offset: 0x188
	// Line 755, Address: 0x1eb028, Func Offset: 0x198
	// Line 756, Address: 0x1eb034, Func Offset: 0x1a4
	// Line 755, Address: 0x1eb038, Func Offset: 0x1a8
	// Line 756, Address: 0x1eb03c, Func Offset: 0x1ac
	// Line 757, Address: 0x1eb044, Func Offset: 0x1b4
	// Line 764, Address: 0x1eb054, Func Offset: 0x1c4
	// Line 771, Address: 0x1eb0c0, Func Offset: 0x230
	// Line 775, Address: 0x1eb0d4, Func Offset: 0x244
	// Line 785, Address: 0x1eb0d8, Func Offset: 0x248
	// Line 786, Address: 0x1eb0f0, Func Offset: 0x260
	// Line 791, Address: 0x1eb0f4, Func Offset: 0x264
	// Line 786, Address: 0x1eb0f8, Func Offset: 0x268
	// Line 791, Address: 0x1eb0fc, Func Offset: 0x26c
	// Line 792, Address: 0x1eb114, Func Offset: 0x284
	// Line 793, Address: 0x1eb118, Func Offset: 0x288
	// Line 794, Address: 0x1eb140, Func Offset: 0x2b0
	// Line 795, Address: 0x1eb150, Func Offset: 0x2c0
	// Line 796, Address: 0x1eb17c, Func Offset: 0x2ec
	// Line 800, Address: 0x1eb180, Func Offset: 0x2f0
	// Line 801, Address: 0x1eb18c, Func Offset: 0x2fc
	// Line 802, Address: 0x1eb190, Func Offset: 0x300
	// Line 803, Address: 0x1eb19c, Func Offset: 0x30c
	// Line 802, Address: 0x1eb1a4, Func Offset: 0x314
	// Line 803, Address: 0x1eb1ac, Func Offset: 0x31c
	// Line 804, Address: 0x1eb1b8, Func Offset: 0x328
	// Line 803, Address: 0x1eb1c0, Func Offset: 0x330
	// Line 804, Address: 0x1eb1c8, Func Offset: 0x338
	// Line 805, Address: 0x1eb1d4, Func Offset: 0x344
	// Line 804, Address: 0x1eb1dc, Func Offset: 0x34c
	// Line 805, Address: 0x1eb1e4, Func Offset: 0x354
	// Line 806, Address: 0x1eb1f0, Func Offset: 0x360
	// Line 805, Address: 0x1eb1f8, Func Offset: 0x368
	// Line 806, Address: 0x1eb200, Func Offset: 0x370
	// Line 807, Address: 0x1eb20c, Func Offset: 0x37c
	// Line 806, Address: 0x1eb210, Func Offset: 0x380
	// Line 807, Address: 0x1eb214, Func Offset: 0x384
	// Line 809, Address: 0x1eb22c, Func Offset: 0x39c
	// Line 810, Address: 0x1eb234, Func Offset: 0x3a4
	// Line 811, Address: 0x1eb23c, Func Offset: 0x3ac
	// Line 815, Address: 0x1eb270, Func Offset: 0x3e0
	// Line 830, Address: 0x1eb288, Func Offset: 0x3f8
	// Func End, Address: 0x1eb2b8, Func Offset: 0x428
}

// xFXRingRender__Fv
// Start address: 0x1eb2c0
void xFXRingRender()
{
	int32 i;
	xFXRing* ring;
	// Line 403, Address: 0x1eb2c0, Func Offset: 0
	// Line 407, Address: 0x1eb2d0, Func Offset: 0x10
	// Line 405, Address: 0x1eb2d4, Func Offset: 0x14
	// Line 407, Address: 0x1eb2dc, Func Offset: 0x1c
	// Line 408, Address: 0x1eb2e0, Func Offset: 0x20
	// Line 409, Address: 0x1eb2f8, Func Offset: 0x38
	// Line 410, Address: 0x1eb300, Func Offset: 0x40
	// Line 411, Address: 0x1eb310, Func Offset: 0x50
	// Func End, Address: 0x1eb324, Func Offset: 0x64
}

// xFXRingUpdate__Ff
// Start address: 0x1eb330
void xFXRingUpdate(float32 dt)
{
	xFXRing* ring;
	int32 i;
	float32 lifetime;
	float32 t;
	// Line 380, Address: 0x1eb330, Func Offset: 0
	// Line 382, Address: 0x1eb338, Func Offset: 0x8
	// Line 385, Address: 0x1eb35c, Func Offset: 0x2c
	// Line 386, Address: 0x1eb370, Func Offset: 0x40
	// Line 389, Address: 0x1eb380, Func Offset: 0x50
	// Line 390, Address: 0x1eb398, Func Offset: 0x68
	// Line 391, Address: 0x1eb3a0, Func Offset: 0x70
	// Line 392, Address: 0x1eb3a8, Func Offset: 0x78
	// Line 393, Address: 0x1eb3b4, Func Offset: 0x84
	// Line 394, Address: 0x1eb3b8, Func Offset: 0x88
	// Line 395, Address: 0x1eb3c4, Func Offset: 0x94
	// Line 397, Address: 0x1eb3c8, Func Offset: 0x98
	// Line 399, Address: 0x1eb3cc, Func Offset: 0x9c
	// Line 400, Address: 0x1eb3e4, Func Offset: 0xb4
	// Func End, Address: 0x1eb3f0, Func Offset: 0xc0
}

// xFXRingCreate__FPC5xVec3PC7xFXRing
// Start address: 0x1eb3f0
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params)
{
	xFXRing* ring;
	int32 i;
	// Line 356, Address: 0x1eb3f0, Func Offset: 0
	// Line 357, Address: 0x1eb404, Func Offset: 0x14
	// Line 359, Address: 0x1eb408, Func Offset: 0x18
	// Line 360, Address: 0x1eb418, Func Offset: 0x28
	// Line 363, Address: 0x1eb420, Func Offset: 0x30
	// Line 364, Address: 0x1eb424, Func Offset: 0x34
	// Line 366, Address: 0x1eb448, Func Offset: 0x58
	// Line 367, Address: 0x1eb450, Func Offset: 0x60
	// Line 369, Address: 0x1eb454, Func Offset: 0x64
	// Line 367, Address: 0x1eb458, Func Offset: 0x68
	// Line 369, Address: 0x1eb460, Func Offset: 0x70
	// Line 368, Address: 0x1eb464, Func Offset: 0x74
	// Line 372, Address: 0x1eb468, Func Offset: 0x78
	// Line 368, Address: 0x1eb46c, Func Offset: 0x7c
	// Line 369, Address: 0x1eb480, Func Offset: 0x90
	// Line 370, Address: 0x1eb494, Func Offset: 0xa4
	// Line 371, Address: 0x1eb4a8, Func Offset: 0xb8
	// Line 372, Address: 0x1eb4bc, Func Offset: 0xcc
	// Line 374, Address: 0x1eb4c4, Func Offset: 0xd4
	// Line 375, Address: 0x1eb4d8, Func Offset: 0xe8
	// Line 376, Address: 0x1eb4e0, Func Offset: 0xf0
	// Func End, Address: 0x1eb4f4, Func Offset: 0x104
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
	// Line 186, Address: 0x1eb500, Func Offset: 0
	// Line 196, Address: 0x1eb508, Func Offset: 0x8
	// Line 186, Address: 0x1eb50c, Func Offset: 0xc
	// Line 196, Address: 0x1eb554, Func Offset: 0x54
	// Line 199, Address: 0x1eb560, Func Offset: 0x60
	// Line 203, Address: 0x1eb564, Func Offset: 0x64
	// Line 204, Address: 0x1eb568, Func Offset: 0x68
	// Line 206, Address: 0x1eb56c, Func Offset: 0x6c
	// Line 203, Address: 0x1eb570, Func Offset: 0x70
	// Line 204, Address: 0x1eb574, Func Offset: 0x74
	// Line 199, Address: 0x1eb578, Func Offset: 0x78
	// Line 206, Address: 0x1eb57c, Func Offset: 0x7c
	// Line 203, Address: 0x1eb580, Func Offset: 0x80
	// Line 206, Address: 0x1eb584, Func Offset: 0x84
	// Line 204, Address: 0x1eb588, Func Offset: 0x88
	// Line 206, Address: 0x1eb58c, Func Offset: 0x8c
	// Line 203, Address: 0x1eb590, Func Offset: 0x90
	// Line 204, Address: 0x1eb594, Func Offset: 0x94
	// Line 207, Address: 0x1eb598, Func Offset: 0x98
	// Line 208, Address: 0x1eb5a8, Func Offset: 0xa8
	// Line 218, Address: 0x1eb5b4, Func Offset: 0xb4
	// Line 210, Address: 0x1eb5bc, Func Offset: 0xbc
	// Line 218, Address: 0x1eb5c0, Func Offset: 0xc0
	// Line 212, Address: 0x1eb5c4, Func Offset: 0xc4
	// Line 211, Address: 0x1eb5c8, Func Offset: 0xc8
	// Line 210, Address: 0x1eb5cc, Func Offset: 0xcc
	// Line 213, Address: 0x1eb5d0, Func Offset: 0xd0
	// Line 215, Address: 0x1eb5d4, Func Offset: 0xd4
	// Line 216, Address: 0x1eb5d8, Func Offset: 0xd8
	// Line 222, Address: 0x1eb5dc, Func Offset: 0xdc
	// Line 227, Address: 0x1eb5f0, Func Offset: 0xf0
	// Line 228, Address: 0x1eb5fc, Func Offset: 0xfc
	// Line 233, Address: 0x1eb608, Func Offset: 0x108
	// Line 234, Address: 0x1eb614, Func Offset: 0x114
	// Line 236, Address: 0x1eb620, Func Offset: 0x120
	// Line 237, Address: 0x1eb62c, Func Offset: 0x12c
	// Line 239, Address: 0x1eb638, Func Offset: 0x138
	// Line 242, Address: 0x1eb6a8, Func Offset: 0x1a8
	// Line 245, Address: 0x1eb6cc, Func Offset: 0x1cc
	// Line 247, Address: 0x1eb6d8, Func Offset: 0x1d8
	// Line 250, Address: 0x1eb6ec, Func Offset: 0x1ec
	// Line 251, Address: 0x1eb6f4, Func Offset: 0x1f4
	// Line 252, Address: 0x1eb6fc, Func Offset: 0x1fc
	// Line 254, Address: 0x1eb700, Func Offset: 0x200
	// Line 255, Address: 0x1eb704, Func Offset: 0x204
	// Line 257, Address: 0x1eb708, Func Offset: 0x208
	// Line 259, Address: 0x1eb71c, Func Offset: 0x21c
	// Line 260, Address: 0x1eb780, Func Offset: 0x280
	// Line 261, Address: 0x1eb78c, Func Offset: 0x28c
	// Line 268, Address: 0x1eb79c, Func Offset: 0x29c
	// Line 266, Address: 0x1eb7a0, Func Offset: 0x2a0
	// Line 265, Address: 0x1eb7a8, Func Offset: 0x2a8
	// Line 263, Address: 0x1eb7ac, Func Offset: 0x2ac
	// Line 268, Address: 0x1eb7bc, Func Offset: 0x2bc
	// Line 265, Address: 0x1eb7c0, Func Offset: 0x2c0
	// Line 268, Address: 0x1eb7c4, Func Offset: 0x2c4
	// Line 270, Address: 0x1eb7c8, Func Offset: 0x2c8
	// Line 271, Address: 0x1eb82c, Func Offset: 0x32c
	// Line 272, Address: 0x1eb890, Func Offset: 0x390
	// Line 273, Address: 0x1eb8f4, Func Offset: 0x3f4
	// Line 274, Address: 0x1eb958, Func Offset: 0x458
	// Line 275, Address: 0x1eb970, Func Offset: 0x470
	// Line 276, Address: 0x1eb988, Func Offset: 0x488
	// Line 277, Address: 0x1eb9a0, Func Offset: 0x4a0
	// Line 286, Address: 0x1eb9b8, Func Offset: 0x4b8
	// Line 287, Address: 0x1eb9f8, Func Offset: 0x4f8
	// Line 288, Address: 0x1eba38, Func Offset: 0x538
	// Line 289, Address: 0x1eba78, Func Offset: 0x578
	// Line 297, Address: 0x1ebac0, Func Offset: 0x5c0
	// Line 314, Address: 0x1ebac4, Func Offset: 0x5c4
	// Line 297, Address: 0x1ebac8, Func Offset: 0x5c8
	// Line 314, Address: 0x1ebacc, Func Offset: 0x5cc
	// Line 297, Address: 0x1ebad0, Func Offset: 0x5d0
	// Line 292, Address: 0x1ebad4, Func Offset: 0x5d4
	// Line 298, Address: 0x1ebad8, Func Offset: 0x5d8
	// Line 332, Address: 0x1ebae0, Func Offset: 0x5e0
	// Line 292, Address: 0x1ebae4, Func Offset: 0x5e4
	// Line 298, Address: 0x1ebae8, Func Offset: 0x5e8
	// Line 299, Address: 0x1ebaec, Func Offset: 0x5ec
	// Line 301, Address: 0x1ebaf8, Func Offset: 0x5f8
	// Line 292, Address: 0x1ebb04, Func Offset: 0x604
	// Line 302, Address: 0x1ebb08, Func Offset: 0x608
	// Line 303, Address: 0x1ebb14, Func Offset: 0x614
	// Line 305, Address: 0x1ebb20, Func Offset: 0x620
	// Line 306, Address: 0x1ebb28, Func Offset: 0x628
	// Line 307, Address: 0x1ebb2c, Func Offset: 0x62c
	// Line 309, Address: 0x1ebb30, Func Offset: 0x630
	// Line 310, Address: 0x1ebb34, Func Offset: 0x634
	// Line 311, Address: 0x1ebb38, Func Offset: 0x638
	// Line 313, Address: 0x1ebb3c, Func Offset: 0x63c
	// Line 330, Address: 0x1ebb40, Func Offset: 0x640
	// Line 314, Address: 0x1ebb44, Func Offset: 0x644
	// Line 330, Address: 0x1ebb48, Func Offset: 0x648
	// Line 315, Address: 0x1ebb4c, Func Offset: 0x64c
	// Line 330, Address: 0x1ebb50, Func Offset: 0x650
	// Line 317, Address: 0x1ebb54, Func Offset: 0x654
	// Line 331, Address: 0x1ebb58, Func Offset: 0x658
	// Line 318, Address: 0x1ebb5c, Func Offset: 0x65c
	// Line 331, Address: 0x1ebb60, Func Offset: 0x660
	// Line 319, Address: 0x1ebb64, Func Offset: 0x664
	// Line 321, Address: 0x1ebb68, Func Offset: 0x668
	// Line 322, Address: 0x1ebb78, Func Offset: 0x678
	// Line 323, Address: 0x1ebb88, Func Offset: 0x688
	// Line 324, Address: 0x1ebb98, Func Offset: 0x698
	// Line 325, Address: 0x1ebba8, Func Offset: 0x6a8
	// Line 326, Address: 0x1ebbb8, Func Offset: 0x6b8
	// Line 328, Address: 0x1ebbc8, Func Offset: 0x6c8
	// Line 332, Address: 0x1ebbd4, Func Offset: 0x6d4
	// Line 337, Address: 0x1ebbec, Func Offset: 0x6ec
	// Line 339, Address: 0x1ebbf4, Func Offset: 0x6f4
	// Line 342, Address: 0x1ebc08, Func Offset: 0x708
	// Line 343, Address: 0x1ebc10, Func Offset: 0x710
	// Line 346, Address: 0x1ebc18, Func Offset: 0x718
	// Line 347, Address: 0x1ebc1c, Func Offset: 0x71c
	// Line 349, Address: 0x1ebc20, Func Offset: 0x720
	// Line 350, Address: 0x1ebc2c, Func Offset: 0x72c
	// Line 351, Address: 0x1ebc38, Func Offset: 0x738
	// Line 352, Address: 0x1ebc44, Func Offset: 0x744
	// Line 353, Address: 0x1ebc50, Func Offset: 0x750
	// Func End, Address: 0x1ebca0, Func Offset: 0x7a0
}

// xFXInit__Fv
// Start address: 0x1ebca0
void xFXInit()
{
	RpLight* light;
	RwFrame* frame;
	// Line 114, Address: 0x1ebca0, Func Offset: 0
	// Line 115, Address: 0x1ebcb0, Func Offset: 0x10
	// Line 123, Address: 0x1ebcbc, Func Offset: 0x1c
	// Line 124, Address: 0x1ebcc8, Func Offset: 0x28
	// Line 128, Address: 0x1ebcd0, Func Offset: 0x30
	// Line 129, Address: 0x1ebcd8, Func Offset: 0x38
	// Line 131, Address: 0x1ebce0, Func Offset: 0x40
	// Line 133, Address: 0x1ebce8, Func Offset: 0x48
	// Line 138, Address: 0x1ebd50, Func Offset: 0xb0
	// Line 139, Address: 0x1ebd58, Func Offset: 0xb8
	// Line 143, Address: 0x1ebd60, Func Offset: 0xc0
	// Line 145, Address: 0x1ebd78, Func Offset: 0xd8
	// Line 148, Address: 0x1ebd90, Func Offset: 0xf0
	// Line 149, Address: 0x1ebdc4, Func Offset: 0x124
	// Func End, Address: 0x1ebddc, Func Offset: 0x13c
}

