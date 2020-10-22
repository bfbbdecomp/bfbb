typedef struct xAnimTable;
typedef struct xEntShadow;
typedef struct RwObjectHasFrame;
typedef struct widget;
typedef struct xEnt;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct anim_coll_data;
typedef struct motive_node;
typedef struct xGlobals;
typedef struct RxPipelineNodeTopSortData;
typedef struct zPlatform;
typedef struct xVec3;
typedef struct RwV2d;
typedef struct block_allocator;
typedef struct color32u;
typedef struct motive;
typedef struct xAnimTransition;
typedef struct zGlobals;
typedef struct font_context;
typedef struct RxNodeDefinition;
typedef struct functor_update;
typedef struct RpSector;
typedef struct xAnimState;
typedef struct _tagxPad;
typedef struct iEnv;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobalSettings;
typedef struct holder;
typedef struct xBase;
typedef struct xVec2;
typedef struct RxPipeline;
typedef struct xAnimMultiFileEntry;
typedef struct RxPipelineCluster;
typedef struct xAnimActiveEffect;
typedef struct zAssetPickupTable;
typedef struct RpWorld;
typedef struct RxPipelineNodeParam;
typedef struct RwLLLink;
typedef struct zCutsceneMgr;
typedef struct xModelAssetInfo;
typedef struct zPlayerLassoInfo;
typedef struct RxHeap;
typedef struct xBaseAsset;
typedef struct xGroupAsset;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct zScene;
typedef struct substr;
typedef struct xAnimFile;
typedef struct tri_data_0;
typedef struct _tagPadAnalog;
typedef struct xQuat;
typedef struct RpAtomic;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef struct widget_chunk;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct _tagiPad;
typedef struct xJSPHeader;
typedef struct _class_0;
typedef struct xUpdateCullMgr;
typedef struct rxHeapBlockHeader;
typedef struct RpLight;
typedef struct xCollis;
typedef struct RpVertexNormal;
typedef struct xBound;
typedef struct RxPipelineRequiresCluster;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct xAnimMultiFileBase;
typedef struct xPortalAsset;
typedef struct xScene;
typedef struct render_context;
typedef struct basic_rect;
typedef struct xBBox;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct xAnimEffect;
typedef enum _zPlayerType;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct _class_1;
typedef struct rxReq;
typedef struct RpPolygon;
typedef struct xAnimMultiFile;
typedef struct xCamera;
typedef enum RxClusterValidityReq;
typedef struct xAnimPlay;
typedef struct tri_data_1;
typedef struct RpMaterialList;
typedef struct _tagxRumble;
typedef struct xClumpCollBSPTree;
typedef struct xModelPool;
typedef struct header;
typedef struct xGridBound;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwCamera;
typedef struct RpMaterial;
typedef struct asset;
typedef struct xGroup;
typedef struct zPlayerGlobals;
typedef struct _class_2;
typedef struct zCheckPoint;
typedef struct xUpdateCullEnt;
typedef enum RxNodeDefEditable;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxClusterValid;
typedef struct RpClump;
typedef struct xRot;
typedef struct xClumpCollBSPTriangle;
typedef struct RpGeometry;
typedef struct zPlayerCarryInfo;
typedef struct RpWorldSector;
typedef struct zPlayerSettings;
typedef struct _zPortal;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zEnt;
typedef struct iFogParams;
typedef struct RpMorphTarget;
typedef struct xSurface;
typedef struct _class_3;
typedef enum RwCameraProjection;
typedef struct functor_disable;
typedef struct xEnvAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xEntAsset;
typedef struct jot;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct _class_4;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct RpMeshHeader;
typedef struct xLinkAsset;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct RwSphere;
typedef struct xEntFrame;
typedef struct zJumpParam;
typedef struct analog_data;
typedef struct RwTexDictionary;
typedef struct RpTriangle;
typedef struct split_tag;
typedef struct RxOutputSpec;
typedef struct zEntHangable;
typedef struct xEnv;
typedef struct xLightKit;
typedef struct xtextbox;
typedef struct xMat3x3;
typedef struct xDynAsset;
typedef struct xShadowSimplePoly;
typedef struct RxClusterRef;
typedef struct callback;
typedef struct tag_type;
typedef struct xEntBoulder;
typedef struct RwObject;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct RxIoSpec;
typedef struct xfont;
typedef struct RwTexture;
typedef struct xModelTag;
typedef struct RxNodeMethods;
typedef struct _class_5;
typedef struct xLightKitLight;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct RwFrustumPlane;
typedef enum RpWorldRenderOrder;
typedef struct RwPlane;
typedef struct _zEnv;
typedef struct RxCluster;
typedef struct xModelBucket;
typedef struct RxPacket;
typedef struct _anon0;
typedef struct xEntDrive;
typedef enum RwFogType;
typedef struct xQCData;
typedef enum _enum;
typedef struct xFFX;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct zLasso;
typedef enum _tagPadState;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(widget&);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_7)(uint32);
typedef void(*type_11)(xEnt*, xScene*, float32, xEntCollis*);
typedef int8*(*type_12)(xBase*);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_15)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef uint32(*type_18)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int8*(*type_21)(uint32);
typedef int32(*type_25)(RxNodeDefinition*);
typedef void(*type_26)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_27)(RxNodeDefinition*);
typedef int32(*type_29)(RxPipelineNode*);
typedef void(*type_30)(widget&);
typedef uint32(*type_31)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_32)(void*, void*);
typedef void(*type_38)(void*);
typedef uint8(*type_41)(widget&, motive&, float32);
typedef void(*type_42)(xAnimState*, xAnimSingle*, void*);
typedef uint8(*type_45)(widget&, motive&, float32);
typedef RpClump*(*type_48)(RpClump*, void*);
typedef void(*type_49)(xAnimPlay*, xAnimState*);
typedef uint8(*type_51)(widget&, motive&, float32);
typedef void(*type_56)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpAtomic*(*type_69)(RpAtomic*);
typedef void(*type_70)(jot&, xtextbox&, float32, float32);
typedef void(*type_71)(widget&);
typedef void(*type_73)(widget&);
typedef RwCamera*(*type_76)(RwCamera*);
typedef int32(*type_77)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_78)(jot&, xtextbox&, xtextbox&);
typedef void(*type_81)(xEnt*, xScene*, float32);
typedef void(*type_83)(xMemPool*, void*);
typedef void(*type_87)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef void(*type_88)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_95)(RwResEntry*);
typedef int32(*type_99)(xBase*, xBase*, uint32, float32*, xBase*);

typedef int8 type_1[20];
typedef int8 type_8[128];
typedef xCollis type_9[18];
typedef int8 type_10[128][6];
typedef RwFrustumPlane type_13[6];
typedef RpLight* type_16[2];
typedef int8 type_20[32];
typedef RwFrame* type_22[2];
typedef RwV3d type_23[8];
typedef xVec3 type_24[60];
typedef float32 type_28[2];
typedef uint32 type_33[15];
typedef uint8 type_34[22];
typedef uint32 type_35[15];
typedef uint8 type_36[2];
typedef uint16 type_37[3];
typedef uint8 type_39[22];
typedef xAnimMultiFileEntry type_40[1];
typedef uint32 type_43[15];
typedef float32 type_44[2];
typedef xVec4 type_46[12];
typedef _class_2 type_47[4];
typedef RwTexCoords* type_50[8];
typedef xVec3 type_52[5];
typedef uint8 type_53[5];
typedef float32 type_54[22];
typedef uint8 type_55[2];
typedef uint32 type_57[2];
typedef float32 type_58[22];
typedef uint32 type_59[4];
typedef uint8 type_60[2];
typedef uint8 type_61[3];
typedef float32 type_62[6];
typedef float32 type_63[3];
typedef float32 type_64[3];
typedef uint16 type_65[3];
typedef xModelTag type_66[2];
typedef int8 type_67[16];
typedef float32 type_68[3];
typedef xVec3 type_72[3];
typedef float32 type_74[4];
typedef int8 type_75[16];
typedef analog_data type_79[2];
typedef xEnt* type_80[111];
typedef uint32 type_82[72];
typedef float32 type_84[16];
typedef uint8 type_85[1];
typedef xBase* type_86[72];
typedef int8 type_89[32];
typedef int8 type_91[32];
typedef int8 type_92[4];
typedef uint8 type_93[14];
typedef xModelTag type_94[4];
typedef float32 type_96[4];
typedef RwTexCoords* type_97[8];
typedef xModelInstance* type_98[14];
typedef float32 type_100[4];
typedef uint8 type_101[4];
typedef RxCluster type_102[1];
typedef xVec3 type_103[4];

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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct widget
{
	_class_5 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;

	void setup();
	void update(float32 dt);
	void dispatch(uint32 event);
	void clear_motives(uint8(*fp_update)(widget&, motive&, float32), void* context);
	void add_motive(motive& m);
	void hide();
	void show();
	void updater(float32 dt);
	void presetup();
	void destruct();
	void* __ct(asset& a);
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct anim_coll_data
{
};

struct motive_node
{
	motive m;
	motive_node* next;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct zPlatform
{
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct block_allocator
{
	uint32 _block_size;
	uint32 _alloc_size;
	holder* _top;
	block_allocator* _next_alloc;
};

struct color32u
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	uint8(*fp_update)(widget&, motive&, float32);
	void* context;
	uint8 inverse;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct font_context
{
	uint32 id;
	int32 justify;
	float32 w;
	float32 h;
	float32 space;
	float32 drop_x;
	float32 drop_y;
	color32u c;
	color32u drop_c;
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

struct functor_update
{
	float32 dt;
};

struct RpSector
{
	int32 type;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct holder
{
	header h;
	uint8 data[1];
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

struct xVec2
{
	float32 x;
	float32 y;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct zAssetPickupTable
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zCutsceneMgr
{
};

struct xModelAssetInfo
{
	uint32 Magic;
	uint32 NumModelInst;
	uint32 AnimTableID;
	uint32 CombatID;
	uint32 BrainID;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct substr
{
	int8* text;
	uint32 size;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct widget_chunk : xBase
{
	widget w;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _tagiPad
{
	int32 port;
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

struct _class_0
{
	xVec3* verts;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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
		_class_3 tuv;
		tri_data_1 tri;
	};
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _class_1
{
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
	};
	uint16 dummy : 4;
};

struct rxReq
{
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct header
{
	holder* next;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct _class_2
{
	uint8 type;
	uint32 size;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xClumpCollBSPTriangle
{
	_class_4 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xSurface
{
};

struct _class_3
{
	float32 t;
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

struct functor_disable
{
	uint8 destroy_widgets;
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

struct jot
{
	substr s;
	_class_1 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
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

struct _class_4
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zEntHangable
{
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct callback
{
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
};

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
};

struct xEntBoulder
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect clip;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _class_5
{
	uint8 visible;
	uint8 enabled;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct _anon0
{
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xFFX
{
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
_class_2 known_types[4];
block_allocator* _head_alloc;
uint8 inited;
_anon0 __vt__Q24xhud6widget;
long32 skyTest_1;
callback text_cb;
iColor_tag g_WHITE;
uint32 gActiveHeap;
void(*fp_hide)(widget&);
void(*fp_show)(widget&);
void(*fp_render)(widget&);
void(*fp_setup)(widget&);
uint8(*linear_motive_update)(widget&, motive&, float32);
uint8(*accelerate_motive_update)(widget&, motive&, float32);
int32(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*);
zGlobals globals;

uint8 delay_motive_update(widget& w, motive& m, float32 dt);
uint8 shake_motive_update(motive& m);
uint8 accelerate_motive_update(motive& m, float32 dt);
uint8 linear_motive_update(motive& m, float32 dt);
void render_model(xModelInstance& m, render_context& rc);
xModelInstance* load_model(uint32 id);
int32 cb_dispatch(xBase* from, xBase* to, uint32 event, float32* argf, xBase* argw);
void clear_motives(uint8(*fp_update)(widget&, motive&, float32), void* context);
void add_motive(motive& m);
void fp_render(widget& w);
void fp_setup(widget& w);
void hide();
void show();
uint8 is(uint32 id);
uint32 type();
void updater(float32 dt);
void presetup();
void destruct();
void init_base(xBase& data, xBaseAsset& asset, uint32 chunk_size);
void* __ct(asset& a);
void render();
void update(float32 dt);
void destroy();
void setup();
void init();
void for_each(uint8 type, uint32 size, functor_update f);
void for_each(uint8 type, uint32 size, void(*f)(widget&));
void for_each(uint8 type, uint32 size, functor_disable f);

// delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x2981f0
uint8 delay_motive_update(widget& w, motive& m, float32 dt)
{
	// Line 1025, Address: 0x2981f0, Func Offset: 0
	// Line 1033, Address: 0x2981f8, Func Offset: 0x8
	// Line 1031, Address: 0x2981fc, Func Offset: 0xc
	// Line 1033, Address: 0x298208, Func Offset: 0x18
	// Line 1036, Address: 0x298220, Func Offset: 0x30
	// Line 1038, Address: 0x29822c, Func Offset: 0x3c
	// Line 1039, Address: 0x298234, Func Offset: 0x44
	// Line 1040, Address: 0x298238, Func Offset: 0x48
	// Line 1041, Address: 0x298240, Func Offset: 0x50
	// Func End, Address: 0x29824c, Func Offset: 0x5c
}

// shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x298250
uint8 shake_motive_update(motive& m)
{
	uint32& iter;
	uint32 i;
	float32 diff;
	float32 mult[4];
	// Line 1007, Address: 0x298250, Func Offset: 0
	// Line 1008, Address: 0x298260, Func Offset: 0x10
	// Line 1010, Address: 0x29826c, Func Offset: 0x1c
	// Line 1013, Address: 0x298270, Func Offset: 0x20
	// Line 1011, Address: 0x298274, Func Offset: 0x24
	// Line 1013, Address: 0x298288, Func Offset: 0x38
	// Line 1016, Address: 0x298290, Func Offset: 0x40
	// Line 1017, Address: 0x298294, Func Offset: 0x44
	// Line 1018, Address: 0x2982ac, Func Offset: 0x5c
	// Line 1019, Address: 0x2982c0, Func Offset: 0x70
	// Line 1021, Address: 0x2982c4, Func Offset: 0x74
	// Line 1019, Address: 0x2982c8, Func Offset: 0x78
	// Line 1020, Address: 0x2982d4, Func Offset: 0x84
	// Line 1022, Address: 0x2982e0, Func Offset: 0x90
	// Func End, Address: 0x2982e8, Func Offset: 0x98
}

// accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x2982f0
uint8 accelerate_motive_update(motive& m, float32 dt)
{
	float32 diff;
	float32 remaining;
	// Line 974, Address: 0x2982f0, Func Offset: 0
	// Line 982, Address: 0x2982f4, Func Offset: 0x4
	// Line 986, Address: 0x298300, Func Offset: 0x10
	// Line 982, Address: 0x298308, Func Offset: 0x18
	// Line 984, Address: 0x298314, Func Offset: 0x24
	// Line 982, Address: 0x29831c, Func Offset: 0x2c
	// Line 984, Address: 0x298320, Func Offset: 0x30
	// Line 986, Address: 0x298324, Func Offset: 0x34
	// Line 985, Address: 0x298328, Func Offset: 0x38
	// Line 986, Address: 0x298330, Func Offset: 0x40
	// Line 989, Address: 0x298368, Func Offset: 0x78
	// Line 991, Address: 0x29836c, Func Offset: 0x7c
	// Line 989, Address: 0x298370, Func Offset: 0x80
	// Line 990, Address: 0x29837c, Func Offset: 0x8c
	// Line 991, Address: 0x298380, Func Offset: 0x90
	// Line 993, Address: 0x298388, Func Offset: 0x98
	// Line 995, Address: 0x29838c, Func Offset: 0x9c
	// Line 993, Address: 0x298390, Func Offset: 0xa0
	// Line 994, Address: 0x29839c, Func Offset: 0xac
	// Line 996, Address: 0x2983a8, Func Offset: 0xb8
	// Func End, Address: 0x2983b0, Func Offset: 0xc0
}

// linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x2983b0
uint8 linear_motive_update(motive& m, float32 dt)
{
	float32 diff;
	float32 remaining;
	// Line 959, Address: 0x2983b0, Func Offset: 0
	// Line 960, Address: 0x2983b4, Func Offset: 0x4
	// Line 961, Address: 0x2983bc, Func Offset: 0xc
	// Line 959, Address: 0x2983c0, Func Offset: 0x10
	// Line 961, Address: 0x2983c4, Func Offset: 0x14
	// Line 964, Address: 0x298400, Func Offset: 0x50
	// Line 966, Address: 0x298404, Func Offset: 0x54
	// Line 964, Address: 0x298408, Func Offset: 0x58
	// Line 965, Address: 0x298414, Func Offset: 0x64
	// Line 966, Address: 0x298418, Func Offset: 0x68
	// Line 968, Address: 0x298420, Func Offset: 0x70
	// Line 970, Address: 0x298424, Func Offset: 0x74
	// Line 968, Address: 0x298428, Func Offset: 0x78
	// Line 969, Address: 0x298434, Func Offset: 0x84
	// Line 971, Address: 0x298440, Func Offset: 0x90
	// Func End, Address: 0x298448, Func Offset: 0x98
}

// render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context
// Start address: 0x298450
void render_model(xModelInstance& m, render_context& rc)
{
	basic_rect r;
	xVec3 from;
	xVec3 to;
	xMat4x3 frame;
	xModelInstance* model;
	// Line 872, Address: 0x298450, Func Offset: 0
	// Line 873, Address: 0x298454, Func Offset: 0x4
	// Line 872, Address: 0x298458, Func Offset: 0x8
	// Line 873, Address: 0x29845c, Func Offset: 0xc
	// Line 872, Address: 0x298460, Func Offset: 0x10
	// Line 873, Address: 0x298470, Func Offset: 0x20
	// Line 875, Address: 0x298494, Func Offset: 0x44
	// Line 876, Address: 0x2984a0, Func Offset: 0x50
	// Line 873, Address: 0x2984a8, Func Offset: 0x58
	// Line 875, Address: 0x2984c4, Func Offset: 0x74
	// Line 876, Address: 0x2984d0, Func Offset: 0x80
	// Line 879, Address: 0x2984fc, Func Offset: 0xac
	// Line 880, Address: 0x298510, Func Offset: 0xc0
	// Line 885, Address: 0x298520, Func Offset: 0xd0
	// Line 880, Address: 0x298524, Func Offset: 0xd4
	// Line 885, Address: 0x298528, Func Offset: 0xd8
	// Line 880, Address: 0x29852c, Func Offset: 0xdc
	// Line 885, Address: 0x298540, Func Offset: 0xf0
	// Line 880, Address: 0x298550, Func Offset: 0x100
	// Line 881, Address: 0x29855c, Func Offset: 0x10c
	// Line 885, Address: 0x298560, Func Offset: 0x110
	// Line 887, Address: 0x298568, Func Offset: 0x118
	// Line 888, Address: 0x298574, Func Offset: 0x124
	// Line 885, Address: 0x298578, Func Offset: 0x128
	// Line 881, Address: 0x298580, Func Offset: 0x130
	// Line 885, Address: 0x298588, Func Offset: 0x138
	// Line 881, Address: 0x29858c, Func Offset: 0x13c
	// Line 885, Address: 0x298594, Func Offset: 0x144
	// Line 881, Address: 0x298598, Func Offset: 0x148
	// Line 943, Address: 0x2985ac, Func Offset: 0x15c
	// Line 944, Address: 0x2985b8, Func Offset: 0x168
	// Line 946, Address: 0x2986e8, Func Offset: 0x298
	// Func End, Address: 0x298700, Func Offset: 0x2b0
}

// load_model__4xhudFUi
// Start address: 0x298700
xModelInstance* load_model(uint32 id)
{
	uint32 bufsize;
	xModelAssetInfo* minf;
	RpAtomic* imodel;
	// Line 761, Address: 0x298700, Func Offset: 0
	// Line 765, Address: 0x298704, Func Offset: 0x4
	// Line 761, Address: 0x298708, Func Offset: 0x8
	// Line 765, Address: 0x29870c, Func Offset: 0xc
	// Line 761, Address: 0x298710, Func Offset: 0x10
	// Line 765, Address: 0x298714, Func Offset: 0x14
	// Line 766, Address: 0x298728, Func Offset: 0x28
	// Line 769, Address: 0x298740, Func Offset: 0x40
	// Line 771, Address: 0x29874c, Func Offset: 0x4c
	// Line 772, Address: 0x298770, Func Offset: 0x70
	// Line 773, Address: 0x298780, Func Offset: 0x80
	// Line 774, Address: 0x298798, Func Offset: 0x98
	// Func End, Address: 0x2987a8, Func Offset: 0xa8
}

// cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2987b0
int32 cb_dispatch(xBase* from, xBase* to, uint32 event, float32* argf, xBase* argw)
{
	// Line 619, Address: 0x2987b0, Func Offset: 0
	// Line 624, Address: 0x2987b8, Func Offset: 0x8
	// Line 619, Address: 0x2987bc, Func Offset: 0xc
	// Line 624, Address: 0x2987c0, Func Offset: 0x10
	// Line 626, Address: 0x2987d0, Func Offset: 0x20
	// Line 625, Address: 0x2987d4, Func Offset: 0x24
	// Line 626, Address: 0x2987d8, Func Offset: 0x28
	// Func End, Address: 0x2987e0, Func Offset: 0x30
}

// clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv
// Start address: 0x2987e0
void widget::clear_motives(uint8(*fp_update)(widget&, motive&, float32), void* context)
{
	motive_node** itp;
	motive_node* it;
	block_allocator ba;
	int8 @4476;
	// Line 591, Address: 0x2987e0, Func Offset: 0
	// Line 596, Address: 0x2987ec, Func Offset: 0xc
	// Line 591, Address: 0x2987fc, Func Offset: 0x1c
	// Line 593, Address: 0x298800, Func Offset: 0x20
	// Line 595, Address: 0x298818, Func Offset: 0x38
	// Line 596, Address: 0x298820, Func Offset: 0x40
	// Line 597, Address: 0x298874, Func Offset: 0x94
	// Line 598, Address: 0x298880, Func Offset: 0xa0
	// Line 599, Address: 0x298888, Func Offset: 0xa8
	// Line 600, Address: 0x29888c, Func Offset: 0xac
	// Line 601, Address: 0x298898, Func Offset: 0xb8
	// Line 602, Address: 0x2988a8, Func Offset: 0xc8
	// Func End, Address: 0x2988b0, Func Offset: 0xd0
}

// add_motive__Q24xhud6widgetFRCQ24xhud6motive
// Start address: 0x2988b0
void widget::add_motive(motive& m)
{
	motive_node* n;
	// Line 559, Address: 0x2988b0, Func Offset: 0
	// Line 560, Address: 0x2988cc, Func Offset: 0x1c
	// Line 561, Address: 0x29898c, Func Offset: 0xdc
	// Line 562, Address: 0x2989d8, Func Offset: 0x128
	// Line 564, Address: 0x2989e4, Func Offset: 0x134
	// Line 566, Address: 0x2989ec, Func Offset: 0x13c
	// Line 569, Address: 0x2989f8, Func Offset: 0x148
	// Line 570, Address: 0x298a08, Func Offset: 0x158
	// Line 571, Address: 0x298a10, Func Offset: 0x160
	// Line 572, Address: 0x298a14, Func Offset: 0x164
	// Line 573, Address: 0x298a18, Func Offset: 0x168
	// Func End, Address: 0x298a34, Func Offset: 0x184
}

// fp_render__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget
// Start address: 0x298a40
void fp_render(widget& w)
{
	// Line 505, Address: 0x298a40, Func Offset: 0
	// Func End, Address: 0x298a84, Func Offset: 0x44
}

// fp_setup__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget
// Start address: 0x298a90
void fp_setup(widget& w)
{
	// Line 498, Address: 0x298a90, Func Offset: 0
	// Func End, Address: 0x298aa0, Func Offset: 0x10
}

// hide__Q24xhud6widgetFv
// Start address: 0x298aa0
void widget::hide()
{
	float32 x;
	float32 y;
	float32 sx;
	float32 sy;
	float32 cx;
	float32 cy;
	float32 tx;
	float32 ty;
	float32 tcx;
	float32 tcy;
	float32 acx;
	float32 acy;
	float32 dist;
	float32 vx;
	float32 vy;
	float32 ex;
	float32 ey;
	// Line 396, Address: 0x298aa0, Func Offset: 0
	// Line 414, Address: 0x298aa4, Func Offset: 0x4
	// Line 396, Address: 0x298aa8, Func Offset: 0x8
	// Line 401, Address: 0x298aac, Func Offset: 0xc
	// Line 396, Address: 0x298ab0, Func Offset: 0x10
	// Line 414, Address: 0x298ab4, Func Offset: 0x14
	// Line 396, Address: 0x298ab8, Func Offset: 0x18
	// Line 401, Address: 0x298ac4, Func Offset: 0x24
	// Line 415, Address: 0x298ac8, Func Offset: 0x28
	// Line 416, Address: 0x298acc, Func Offset: 0x2c
	// Line 414, Address: 0x298ad0, Func Offset: 0x30
	// Line 417, Address: 0x298ad4, Func Offset: 0x34
	// Line 415, Address: 0x298ad8, Func Offset: 0x38
	// Line 418, Address: 0x298adc, Func Offset: 0x3c
	// Line 414, Address: 0x298ae0, Func Offset: 0x40
	// Line 418, Address: 0x298ae4, Func Offset: 0x44
	// Line 419, Address: 0x298ae8, Func Offset: 0x48
	// Line 421, Address: 0x298aec, Func Offset: 0x4c
	// Line 422, Address: 0x298af0, Func Offset: 0x50
	// Line 423, Address: 0x298af4, Func Offset: 0x54
	// Line 421, Address: 0x298af8, Func Offset: 0x58
	// Line 423, Address: 0x298afc, Func Offset: 0x5c
	// Line 422, Address: 0x298b00, Func Offset: 0x60
	// Line 423, Address: 0x298b04, Func Offset: 0x64
	// Line 426, Address: 0x298b1c, Func Offset: 0x7c
	// Line 427, Address: 0x298b24, Func Offset: 0x84
	// Line 428, Address: 0x298b28, Func Offset: 0x88
	// Line 430, Address: 0x298b34, Func Offset: 0x94
	// Line 431, Address: 0x298b60, Func Offset: 0xc0
	// Line 432, Address: 0x298b70, Func Offset: 0xd0
	// Line 435, Address: 0x298b78, Func Offset: 0xd8
	// Line 436, Address: 0x298ba8, Func Offset: 0x108
	// Line 439, Address: 0x298bb0, Func Offset: 0x110
	// Line 442, Address: 0x298bb8, Func Offset: 0x118
	// Line 443, Address: 0x298bbc, Func Offset: 0x11c
	// Line 466, Address: 0x298bc0, Func Offset: 0x120
	// Line 440, Address: 0x298bc4, Func Offset: 0x124
	// Line 466, Address: 0x298bc8, Func Offset: 0x128
	// Line 440, Address: 0x298bcc, Func Offset: 0x12c
	// Line 466, Address: 0x298bd0, Func Offset: 0x130
	// Line 439, Address: 0x298bd4, Func Offset: 0x134
	// Line 466, Address: 0x298bd8, Func Offset: 0x138
	// Line 440, Address: 0x298be0, Func Offset: 0x140
	// Line 439, Address: 0x298be4, Func Offset: 0x144
	// Line 440, Address: 0x298be8, Func Offset: 0x148
	// Line 442, Address: 0x298bec, Func Offset: 0x14c
	// Line 443, Address: 0x298bf0, Func Offset: 0x150
	// Line 442, Address: 0x298bf4, Func Offset: 0x154
	// Line 443, Address: 0x298bf8, Func Offset: 0x158
	// Line 442, Address: 0x298bfc, Func Offset: 0x15c
	// Line 443, Address: 0x298c00, Func Offset: 0x160
	// Line 466, Address: 0x298c04, Func Offset: 0x164
	// Line 442, Address: 0x298c10, Func Offset: 0x170
	// Line 443, Address: 0x298c14, Func Offset: 0x174
	// Line 445, Address: 0x298c18, Func Offset: 0x178
	// Line 447, Address: 0x298c28, Func Offset: 0x188
	// Line 448, Address: 0x298c2c, Func Offset: 0x18c
	// Line 466, Address: 0x298c30, Func Offset: 0x190
	// Line 467, Address: 0x298c58, Func Offset: 0x1b8
	// Line 470, Address: 0x298c90, Func Offset: 0x1f0
	// Line 472, Address: 0x298ce0, Func Offset: 0x240
	// Func End, Address: 0x298cf8, Func Offset: 0x258
}

// show__Q24xhud6widgetFv
// Start address: 0x298d00
void widget::show()
{
	float32 dx;
	float32 dy;
	float32 d2;
	float32 vx;
	float32 vy;
	float32 a;
	float32 da;
	// Line 318, Address: 0x298d00, Func Offset: 0
	// Line 327, Address: 0x298d20, Func Offset: 0x20
	// Line 329, Address: 0x298de0, Func Offset: 0xe0
	// Line 332, Address: 0x298de8, Func Offset: 0xe8
	// Line 337, Address: 0x298dec, Func Offset: 0xec
	// Line 332, Address: 0x298df0, Func Offset: 0xf0
	// Line 337, Address: 0x298df4, Func Offset: 0xf4
	// Line 333, Address: 0x298df8, Func Offset: 0xf8
	// Line 337, Address: 0x298e00, Func Offset: 0x100
	// Line 332, Address: 0x298e04, Func Offset: 0x104
	// Line 333, Address: 0x298e08, Func Offset: 0x108
	// Line 334, Address: 0x298e0c, Func Offset: 0x10c
	// Line 337, Address: 0x298e14, Func Offset: 0x114
	// Line 339, Address: 0x298e20, Func Offset: 0x120
	// Line 340, Address: 0x298e38, Func Offset: 0x138
	// Line 341, Address: 0x298e3c, Func Offset: 0x13c
	// Line 342, Address: 0x298e44, Func Offset: 0x144
	// Line 352, Address: 0x298e48, Func Offset: 0x148
	// Line 344, Address: 0x298e4c, Func Offset: 0x14c
	// Line 347, Address: 0x298e50, Func Offset: 0x150
	// Line 373, Address: 0x298e54, Func Offset: 0x154
	// Line 347, Address: 0x298e78, Func Offset: 0x178
	// Line 352, Address: 0x298e7c, Func Offset: 0x17c
	// Line 347, Address: 0x298e84, Func Offset: 0x184
	// Line 348, Address: 0x298e88, Func Offset: 0x188
	// Line 352, Address: 0x298e8c, Func Offset: 0x18c
	// Line 373, Address: 0x298ea0, Func Offset: 0x1a0
	// Line 374, Address: 0x298ec4, Func Offset: 0x1c4
	// Line 377, Address: 0x298f04, Func Offset: 0x204
	// Line 378, Address: 0x298f10, Func Offset: 0x210
	// Line 377, Address: 0x298f28, Func Offset: 0x228
	// Line 378, Address: 0x298f2c, Func Offset: 0x22c
	// Line 380, Address: 0x298f54, Func Offset: 0x254
	// Func End, Address: 0x298f78, Func Offset: 0x278
}

// is__Q24xhud6widgetCFUi
// Start address: 0x298f80
uint8 is(uint32 id)
{
	uint32 myid;
	int8 @4606;
	// Line 309, Address: 0x298f80, Func Offset: 0
	// Line 310, Address: 0x298f8c, Func Offset: 0xc
	// Line 311, Address: 0x298fb4, Func Offset: 0x34
	// Line 310, Address: 0x298fb8, Func Offset: 0x38
	// Line 311, Address: 0x298fbc, Func Offset: 0x3c
	// Line 310, Address: 0x298fc0, Func Offset: 0x40
	// Line 311, Address: 0x298fc4, Func Offset: 0x44
	// Func End, Address: 0x298fcc, Func Offset: 0x4c
}

// type__Q24xhud6widgetCFv
// Start address: 0x298fd0
uint32 type()
{
	// Line 303, Address: 0x298fd0, Func Offset: 0
	// Line 304, Address: 0x298fd8, Func Offset: 0x8
	// Line 306, Address: 0x298ff8, Func Offset: 0x28
	// Line 305, Address: 0x298ffc, Func Offset: 0x2c
	// Line 306, Address: 0x299000, Func Offset: 0x30
	// Func End, Address: 0x299008, Func Offset: 0x38
}

// updater__Q24xhud6widgetFf
// Start address: 0x299010
void widget::updater(float32 dt)
{
	motive_node** itp;
	motive_node* it;
	// Line 218, Address: 0x299010, Func Offset: 0
	// Line 224, Address: 0x299028, Func Offset: 0x18
	// Line 218, Address: 0x29902c, Func Offset: 0x1c
	// Line 226, Address: 0x299030, Func Offset: 0x20
	// Line 224, Address: 0x299034, Func Offset: 0x24
	// Line 226, Address: 0x299038, Func Offset: 0x28
	// Line 228, Address: 0x299048, Func Offset: 0x38
	// Line 230, Address: 0x299064, Func Offset: 0x54
	// Line 236, Address: 0x29906c, Func Offset: 0x5c
	// Line 237, Address: 0x2990d4, Func Offset: 0xc4
	// Line 240, Address: 0x2990e0, Func Offset: 0xd0
	// Line 245, Address: 0x2990e4, Func Offset: 0xd4
	// Line 246, Address: 0x2990e8, Func Offset: 0xd8
	// Line 247, Address: 0x2990ec, Func Offset: 0xdc
	// Line 248, Address: 0x2990f8, Func Offset: 0xe8
	// Line 250, Address: 0x299104, Func Offset: 0xf4
	// Line 251, Address: 0x299110, Func Offset: 0x100
	// Line 252, Address: 0x299118, Func Offset: 0x108
	// Line 253, Address: 0x29911c, Func Offset: 0x10c
	// Line 254, Address: 0x299120, Func Offset: 0x110
	// Line 256, Address: 0x299124, Func Offset: 0x114
	// Line 257, Address: 0x299138, Func Offset: 0x128
	// Func End, Address: 0x299154, Func Offset: 0x144
}

// presetup__Q24xhud6widgetFv
// Start address: 0x299160
void widget::presetup()
{
	// Line 215, Address: 0x299160, Func Offset: 0
	// Func End, Address: 0x299168, Func Offset: 0x8
}

// destruct__Q24xhud6widgetFv
// Start address: 0x299170
void widget::destruct()
{
	// Line 209, Address: 0x299170, Func Offset: 0
	// Func End, Address: 0x299178, Func Offset: 0x8
}

// init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUi
// Start address: 0x299180
void init_base(xBase& data, xBaseAsset& asset, uint32 chunk_size)
{
	widget_chunk& wc;
	// Line 201, Address: 0x299180, Func Offset: 0
	// Line 203, Address: 0x29919c, Func Offset: 0x1c
	// Line 204, Address: 0x2991a4, Func Offset: 0x24
	// Line 205, Address: 0x2991b0, Func Offset: 0x30
	// Line 206, Address: 0x2991c0, Func Offset: 0x40
	// Func End, Address: 0x2991d8, Func Offset: 0x58
}

// __ct__Q24xhud6widgetFRCQ24xhud5asset
// Start address: 0x2991e0
void* widget::__ct(asset& a)
{
	// Line 187, Address: 0x2991e0, Func Offset: 0
	// Line 189, Address: 0x2991e4, Func Offset: 0x4
	// Line 187, Address: 0x2991e8, Func Offset: 0x8
	// Line 193, Address: 0x2991ec, Func Offset: 0xc
	// Line 187, Address: 0x2991f0, Func Offset: 0x10
	// Line 198, Address: 0x2991f8, Func Offset: 0x18
	// Line 187, Address: 0x2991fc, Func Offset: 0x1c
	// Line 189, Address: 0x299208, Func Offset: 0x28
	// Line 190, Address: 0x29920c, Func Offset: 0x2c
	// Line 191, Address: 0x299210, Func Offset: 0x30
	// Line 192, Address: 0x299228, Func Offset: 0x48
	// Line 193, Address: 0x299240, Func Offset: 0x60
	// Line 194, Address: 0x299250, Func Offset: 0x70
	// Line 198, Address: 0x2992b4, Func Offset: 0xd4
	// Func End, Address: 0x2992bc, Func Offset: 0xdc
}

// render__4xhudFv
// Start address: 0x2992c0
void render()
{
	// Line 161, Address: 0x2992c0, Func Offset: 0
	// Line 162, Address: 0x2992d0, Func Offset: 0x10
	// Line 163, Address: 0x2992dc, Func Offset: 0x1c
	// Line 164, Address: 0x299310, Func Offset: 0x50
	// Func End, Address: 0x299324, Func Offset: 0x64
}

// update__4xhudFf
// Start address: 0x299330
void update(float32 dt)
{
	// Line 159, Address: 0x299330, Func Offset: 0
	// Func End, Address: 0x299384, Func Offset: 0x54
}

// destroy__4xhudFv
// Start address: 0x299390
void destroy()
{
	// Line 153, Address: 0x299390, Func Offset: 0
	// Line 155, Address: 0x299394, Func Offset: 0x4
	// Line 153, Address: 0x299398, Func Offset: 0x8
	// Line 155, Address: 0x2993a4, Func Offset: 0x14
	// Line 156, Address: 0x2993dc, Func Offset: 0x4c
	// Line 157, Address: 0x299400, Func Offset: 0x70
	// Func End, Address: 0x299414, Func Offset: 0x84
}

// setup__4xhudFv
// Start address: 0x299420
void setup()
{
	// Line 148, Address: 0x299420, Func Offset: 0
	// Line 149, Address: 0x299430, Func Offset: 0x10
	// Line 150, Address: 0x299464, Func Offset: 0x44
	// Func End, Address: 0x299478, Func Offset: 0x58
}

// init__4xhudFv
// Start address: 0x299480
void init()
{
	// Line 139, Address: 0x299480, Func Offset: 0
	// Line 140, Address: 0x299490, Func Offset: 0x10
	// Line 143, Address: 0x29949c, Func Offset: 0x1c
	// Line 144, Address: 0x2994a8, Func Offset: 0x28
	// Line 145, Address: 0x2994e0, Func Offset: 0x60
	// Func End, Address: 0x2994f4, Func Offset: 0x74
}

// for_each<Q34xhud18@unnamed@xHud_cpp@14functor_update>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@14functor_update_v
// Start address: 0x299500
void for_each(uint8 type, uint32 size, functor_update f)
{
	zScene& s;
	uint8* it;
	uint8* end;
	widget_chunk* wc;
	// Line 477, Address: 0x299500, Func Offset: 0
	// Line 478, Address: 0x29950c, Func Offset: 0xc
	// Line 477, Address: 0x299510, Func Offset: 0x10
	// Line 478, Address: 0x299528, Func Offset: 0x28
	// Line 479, Address: 0x29952c, Func Offset: 0x2c
	// Line 480, Address: 0x299534, Func Offset: 0x34
	// Line 481, Address: 0x299540, Func Offset: 0x40
	// Line 484, Address: 0x299548, Func Offset: 0x48
	// Line 485, Address: 0x299568, Func Offset: 0x68
	// Line 486, Address: 0x299578, Func Offset: 0x78
	// Func End, Address: 0x299594, Func Offset: 0x94
}

// for_each<PFRQ24xhud6widget_v>__Q24xhud18@unnamed@xHud_cpp@FUcUiPFRQ24xhud6widget_v_v
// Start address: 0x2995a0
void for_each(uint8 type, uint32 size, void(*f)(widget&))
{
	zScene& s;
	uint8* it;
	uint8* end;
	// Line 477, Address: 0x2995a0, Func Offset: 0
	// Line 478, Address: 0x2995ac, Func Offset: 0xc
	// Line 477, Address: 0x2995b0, Func Offset: 0x10
	// Line 478, Address: 0x2995c8, Func Offset: 0x28
	// Line 479, Address: 0x2995cc, Func Offset: 0x2c
	// Line 480, Address: 0x2995d4, Func Offset: 0x34
	// Line 481, Address: 0x2995e0, Func Offset: 0x40
	// Line 484, Address: 0x2995e8, Func Offset: 0x48
	// Line 485, Address: 0x2995f0, Func Offset: 0x50
	// Line 486, Address: 0x299600, Func Offset: 0x60
	// Func End, Address: 0x29961c, Func Offset: 0x7c
}

// for_each<Q34xhud18@unnamed@xHud_cpp@15functor_disable>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@15functor_disable_v
// Start address: 0x299620
void for_each(uint8 type, uint32 size, functor_disable f)
{
	zScene& s;
	uint8* it;
	uint8* end;
	widget_chunk* wc;
	// Line 477, Address: 0x299620, Func Offset: 0
	// Line 478, Address: 0x29962c, Func Offset: 0xc
	// Line 477, Address: 0x299630, Func Offset: 0x10
	// Line 478, Address: 0x299644, Func Offset: 0x24
	// Line 477, Address: 0x29964c, Func Offset: 0x2c
	// Line 479, Address: 0x299650, Func Offset: 0x30
	// Line 480, Address: 0x299658, Func Offset: 0x38
	// Line 481, Address: 0x299664, Func Offset: 0x44
	// Line 484, Address: 0x299670, Func Offset: 0x50
	// Line 485, Address: 0x299688, Func Offset: 0x68
	// Line 486, Address: 0x299698, Func Offset: 0x78
	// Func End, Address: 0x2996b4, Func Offset: 0x94
}

