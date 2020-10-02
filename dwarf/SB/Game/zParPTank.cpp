typedef struct snow_particle_data;
typedef enum _tagPadState;
typedef struct xAnimFile;
typedef struct tri_data_0;
typedef struct xAnimTable;
typedef struct RwTexture;
typedef struct xEnt;
typedef struct xLightKit;
typedef struct xParEmitterPropsAsset;
typedef struct xEntBoulder;
typedef struct xJSPHeader;
typedef struct zParPTank;
typedef struct _class_0;
typedef struct xLightKitLight;
typedef struct RwObjectHasFrame;
typedef struct xCollis;
typedef struct RpVertexNormal;
typedef struct xGridBound;
typedef struct xAnimSingle;
typedef struct RpLight;
typedef struct xGlobals;
typedef struct xScene;
typedef struct RxPipelineNode;
typedef struct xVec3;
typedef struct rxHeapFreeBlock;
typedef struct RpAtomic;
typedef struct xShadowSimpleCache;
typedef struct RwRaster;
typedef struct RxPipeline;
typedef struct xAnimState;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct zEntHangable;
typedef struct RwV2d;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct xPEVCyl;
typedef struct RxNodeDefinition;
typedef struct _tagxPad;
typedef struct RpInterpolator;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimMultiFileBase;
typedef struct RxPipelineCluster;
typedef struct xEnv;
typedef struct xParInterp;
typedef struct xEntFrame;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct zEnt;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xQuat;
typedef struct _class_1;
typedef struct RpPolygon;
typedef struct xLinkAsset;
typedef struct xUpdateCullMgr;
typedef struct xAnimActiveEffect;
typedef struct BubbleData;
typedef struct _tagiPad;
typedef struct RwCamera;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct ptank_pool;
typedef struct xParGroup;
typedef struct rxHeapBlockHeader;
typedef struct xAnimPlay;
typedef struct xPEEntBone;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct xBase;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFile;
typedef struct xModelInstance;
typedef struct xModelPool;
typedef struct xParEmitterAsset;
typedef struct RpMaterial;
typedef struct RpWorld;
typedef struct xParSys;
typedef struct xClumpCollBSPTree;
typedef struct RpClump;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct xVec4;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpWorldSector;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwSurfaceProperties;
typedef struct anim_coll_data;
typedef struct xSurface;
typedef struct RwMatrixTag;
typedef struct xPECircle;
typedef struct xMat4x3;
typedef struct xClumpCollBSPTriangle;
typedef struct rxReq;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct xEnvAsset;
typedef struct _tagxRumble;
typedef struct zPlatform;
typedef struct zGlobals;
typedef struct xQCData;
typedef struct zGlobalSettings;
typedef struct _zPortal;
typedef struct xGroup;
typedef enum RxNodeDefEditable;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RpMeshHeader;
typedef enum RxClusterValid;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xRot;
typedef struct _tagEmitSphere;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpTriangle;
typedef struct iColor_tag;
typedef struct xVec2;
typedef enum RwCameraProjection;
typedef enum _zPlayerWallJumpState;
typedef struct zJumpParam;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct _tagEmitRect;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct iEnv;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct RwSphere;
typedef struct xPortalAsset;
typedef struct xModelTag;
typedef struct analog_data;
typedef struct RwTexDictionary;
typedef struct _class_3;
typedef struct RxOutputSpec;
typedef struct xPEEntBound;
typedef struct xBaseAsset;
typedef struct xParEmitter;
typedef enum RpWorldRenderOrder;
typedef struct xMat3x3;
typedef struct _tagEmitLine;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RxClusterRef;
typedef struct RpPTankLockStruct;
typedef struct RwObject;
typedef struct xBound;
typedef struct RwLLLink;
typedef struct RpSector;
typedef struct zPlayerCarryInfo;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct ptank_pool__pos_color_size_uv2;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct xEntDrive;
typedef struct xBBox;
typedef struct _zEnv;
typedef struct RxNodeMethods;
typedef struct RwFrustumPlane;
typedef struct _tagEmitVolume;
typedef struct RwPlane;
typedef struct zLasso;
typedef struct RxCluster;
typedef struct iFogParams;
typedef struct RxPacket;
typedef struct xShadowSimplePoly;
typedef enum RwFogType;
typedef struct _tagEmitOffsetPoint;
typedef struct RwRGBAReal;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct render_state;

typedef int32(*type_0)(RxPipelineNode*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef RpWorldSector*(*type_3)(RpWorldSector*);
typedef void(*type_4)(xEnt*, xScene*, float32);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_11)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef uint32(*type_13)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_14)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_16)(xEnt*);
typedef int32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_24)(uint32);
typedef uint32(*type_25)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_26)(xBase*);
typedef uint32(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_29)(zParPTank*, float32);
typedef void(*type_30)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_32)(uint32);
typedef uint32(*type_33)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_38)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_42)(RxNodeDefinition*);
typedef void(*type_46)(RxNodeDefinition*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_49)(zParPTank*, float32);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef uint32(*type_52)(void*, void*);
typedef void(*type_56)(void*);
typedef void(*type_59)(xAnimPlay*, xAnimState*);
typedef void(*type_62)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_64)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_67)(RpAtomic*);
typedef void(*type_76)(zParPTank*, float32);
typedef RwCamera*(*type_83)(RwCamera*);
typedef void(*type_86)(xMemPool*, void*);
typedef void(*type_87)(zParPTank*, float32);
typedef void(*type_89)(zParPTank*, float32);
typedef void(*type_93)(RwResEntry*);

typedef RpLight* type_5[2];
typedef zParPTank type_7[7];
typedef xEnt* type_8[111];
typedef RwFrame* type_9[2];
typedef float32 type_10[16];
typedef float32 type_15[2];
typedef uint8 type_18[3];
typedef float32 type_19[2];
typedef int8 type_20[128];
typedef uint8 type_21[3];
typedef uint8 type_22[3];
typedef type_20 type_23[6];
typedef int8 type_28[16];
typedef RwFrustumPlane type_31[6];
typedef uint8 type_34[14];
typedef xModelTag type_35[4];
typedef int8 type_36[32];
typedef uint16 type_37[3];
typedef xModelInstance* type_39[14];
typedef RwV3d type_40[8];
typedef xVec3 type_41[4];
typedef uint8 type_43[2];
typedef int8 type_44[16];
typedef xAnimMultiFileEntry type_45[1];
typedef uint8 type_48[4];
typedef float32 type_50[4];
typedef uint8 type_53[22];
typedef float32 type_54[3];
typedef uint8 type_55[22];
typedef RwTexCoords* type_57[8];
typedef xCollis type_58[18];
typedef xParInterp type_60[1];
typedef xVec3 type_61[5];
typedef uint8 type_63[5];
typedef uint16 type_65[3];
typedef xVec3 type_66[60];
typedef float32 type_68[22];
typedef xParInterp type_69[4];
typedef float32 type_70[22];
typedef xParInterp type_71[4];
typedef uint32 type_72[4];
typedef uint32 type_73[15];
typedef uint32 type_74[15];
typedef float32 type_75[2];
typedef uint32 type_77[4096];
typedef uint32 type_78[15];
typedef uint32 type_79[72];
typedef RwTexCoords* type_80[8];
typedef analog_data type_81[2];
typedef int8 type_82[4];
typedef float32 type_84[4];
typedef xBase* type_85[72];
typedef int8 type_88[32];
typedef int8 type_90[32];
typedef uint8 type_91[2];
typedef xVec4 type_92[12];
typedef uint32 type_94[2];
typedef uint8 type_95[2];
typedef float32 type_96[6];
typedef float32 type_97[3];
typedef xVec3 type_98[3];
typedef float32 type_99[3];
typedef xModelTag type_100[2];
typedef float32 type_101[3];
typedef RxCluster type_102[1];

struct snow_particle_data
{
	xVec3 loc;
	float32 size;
	xVec3 vel;
	float32 life;
	float32 u;
	type_54 pad;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_43 NumAnims;
	void** RawData;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_88 name;
	type_90 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	type_4 update;
	type_4 endUpdate;
	type_12 bupdate;
	type_14 move;
	type_16 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_30 transl;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_60 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_69 color_birth;
	type_71 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct xEntBoulder
{
};

struct xJSPHeader
{
	type_82 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zParPTank
{
	uint32 flags;
	type_29 update;
	RpAtomic* ptank;
	uint32 num_particles;
	uint32 max_particles;
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_10 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
		tri_data_0 tri;
	};
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_15 BilinearLerp;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_23 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_36 sceneStart;
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
	type_24 resolvID;
	type_26 base2Name;
	type_32 id2Name;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_67 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_41 corner;
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
	type_59 BeforeEnter;
	type_47 StateCallback;
	type_62 BeforeAnimMatrices;
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

struct zEntHangable
{
};

struct RwV2d
{
	float32 x;
	float32 y;
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
	type_58 colls;
	type_11 post;
	type_25 depenq;
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

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
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

struct _tagxPad
{
	type_53 value;
	type_55 last_value;
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
	type_68 up_tmr;
	type_70 down_tmr;
	type_81 analog;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xParInterp
{
	type_19 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_13 Callback;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_27 Conditional;
	type_27 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpPolygon
{
	uint16 matIndex;
	type_37 vertIndex;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_50 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_56 activateCB;
	type_56 deactivateCB;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct BubbleData
{
	xVec3 vel;
	float32 life;
};

struct _tagiPad
{
	int32 port;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_83 beginUpdate;
	type_1 endUpdate;
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
	type_31 frustumPlanes;
	RwBBox frustumBoundBox;
	type_40 frustumCorners;
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

struct ptank_pool
{
	render_state rs;
	uint32 used;
	RpAtomic* ptank;
	_class_3 hide;
};

struct xParGroup
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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
	type_62 BeforeAnimMatrices;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xFFX
{
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_64 eventFunc;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_45 Files;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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
	type_3 renderCallBack;
	RxPipeline* pipeline;
};

struct xParSys
{
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_75 radius;
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
	type_80 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_57 texCoords;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct anim_coll_data
{
};

struct xSurface
{
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

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct rxReq
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct zPlatform
{
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
	type_91 PowerUp;
	type_95 InitialPowerUp;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_52 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_93 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_86 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct zCutsceneMgr
{
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct _tagEmitSphere
{
	float32 radius;
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
	type_79 baseCount;
	type_85 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_66 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct RpTriangle
{
	type_65 vertIndex;
	int16 matIndex;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xVec2
{
	float32 x;
	float32 y;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_5 light;
	type_9 light_frame;
	int32 memlvl;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_84 wt;
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

struct _class_3
{
	uint8* data;
	int32 stride;
	uint32 size;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	type_18 emit_pad;
	type_21 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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
	type_100 BubbleWandTag;
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
	type_35 HangPawTag;
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
	type_73 Inv_PatsSock;
	type_74 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_78 Inv_LevelPickups;
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
	type_94 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_8 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_34 sb_model_indices;
	type_39 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpPTankLockStruct
{
	uint8* data;
	int32 stride;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_22 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpSector
{
	int32 type;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
	xVec3* pos;
	iColor_tag* color;
	xVec2* size;
	xVec2* uv;
	int32 stride;
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
	type_92 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_96 MoveSpeed;
	type_97 AnimSneak;
	type_99 AnimWalk;
	type_101 AnimRun;
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
	type_48 talk_filter;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxNodeMethods
{
	type_38 nodeBody;
	type_42 nodeInit;
	type_46 nodeTerm;
	type_0 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_33 configMsgHandler;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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
	type_61 lastRefs;
	type_63 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_102 clusters;
};

struct xShadowSimplePoly
{
	type_98 vert;
	xVec3 norm;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct RwLinkList
{
	RwLLLink link;
};

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	uint32 flags;
};

type_28 buffer;
type_44 buffer;
uint32 gPTankDisable;
uint32 sNumPTanks;
type_7 sPTank;
zParPTank* sSparklePTank;
zParPTank* sBubblePTank;
zParPTank* sMenuBubblePTank;
zParPTank* sSnowPTank;
zParPTank* sSteamPTank;
zParPTank* sExplosionPTank;
RwV2d sparkle_size;
float32 sSparkleAnimTime;
BubbleData* sBubbleData;
BubbleData* sMenuBubbleData;
RwRGBA bubble_color;
RwRGBA snow_color;
snow_particle_data* snow_particles;
ptank_pool__pos_color_size_uv2 snow_pool;
RwV2d steam_size;
float32 sSteamAnimTime;
uint32 gActiveHeap;
type_87 zParPTankSnowUpdate;
type_89 zParPTankSteamUpdate;
type_76 zParPTankBubbleUpdate;
type_49 zParPTankSparkleUpdate;
int32 _rpPTankAtomicDataOffset;
float32 snow_life;
zGlobals globals;
RwCamera* sGameScreenTransCam;
int32 gGameState;
type_77 ourGlobals;
RwCamera* sGameScreenTransCam;

int32 zParPTankConvertEmitRate(xParEmitter* pe, float32 dt);
void zParPTankRender();
void zParPTankUpdate(float32 dt);
void zParPTankExit();
void zParPTankSceneExit();
void zParPTankSceneEnter();
void zParPTankInit();
void zParPTankSteamUpdate(zParPTank* zp, float32 dt);
void zParPTankSteamCreate(zParPTank* zp, uint32 max_particles, type_29 update);
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count);
void zParPTankSnowUpdate(zParPTank* zp, float32 dt);
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, uint32 count);
int32 zParPTankBubblesAvailable();
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale);
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale, zParPTank* zp);
void zParPTankBubbleUpdate(zParPTank* zp, float32 dt);
void zParPTankMenuBubbleCreate(zParPTank* zp, uint32 max_particles, type_29 update);
void zParPTankBubbleCreate(zParPTank* zp, uint32 max_particles, type_29 update);
void zParPTankSpawnSparkles(xVec3* pos, uint32 count);
void zParPTankSparkleUpdate(zParPTank* zp, float32 dt);
void zParPTankSparkleCreate(zParPTank* zp, uint32 max_particles, type_29 update);

// zParPTankConvertEmitRate__FP11xParEmitterf
// Start address: 0x399c80
int32 zParPTankConvertEmitRate(xParEmitter* pe, float32 dt)
{
	xParEmitterPropsAsset* prop;
	int32 rate_has_elapsed;
	float32 rate;
	int32 count;
}

// zParPTankRender__Fv
// Start address: 0x399d80
void zParPTankRender()
{
	zParPTank* zp;
	uint32 i;
}

// zParPTankUpdate__Ff
// Start address: 0x399e60
void zParPTankUpdate(float32 dt)
{
	int32 paused;
	zParPTank* zp;
	uint32 i;
}

// zParPTankExit__Fv
// Start address: 0x399f10
void zParPTankExit()
{
	zParPTank* zp;
	uint32 i;
	RwFrame* tmpframe;
}

// zParPTankSceneExit__Fv
// Start address: 0x399fd0
void zParPTankSceneExit()
{
}

// zParPTankSceneEnter__Fv
// Start address: 0x399fe0
void zParPTankSceneEnter()
{
}

// zParPTankInit__Fv
// Start address: 0x39a0b0
void zParPTankInit()
{
}

// zParPTankSteamUpdate__FP9zParPTankf
// Start address: 0x39a1b0
void zParPTankSteamUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 uvlock_base;
	uint32 i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankSteamCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39a3b0
void zParPTankSteamCreate(zParPTank* zp, uint32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
}

// zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
// Start address: 0x39a600
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count)
{
	uint32 old_size;
	snow_particle_data* it;
	snow_particle_data* end;
}

// zParPTankSnowUpdate__FP9zParPTankf
// Start address: 0x39a770
void zParPTankSnowUpdate(zParPTank* zp, float32 dt)
{
	snow_particle_data* end;
	float32 fadein_life;
	float32 fadeout_life;
	float32 ilife;
	float32 ifadein;
	float32 ifadeout;
	snow_particle_data* it;
	xVec4* _loc;
	float32 par_dist;
}

// zParPTankSpawnMenuBubbles__FP5xVec3P5xVec3Ui
// Start address: 0x39acf0
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, uint32 count)
{
}

// zParPTankBubblesAvailable__Fv
// Start address: 0x39ad10
int32 zParPTankBubblesAvailable()
{
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif
// Start address: 0x39ad30
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale)
{
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3UifP9zParPTank
// Start address: 0x39ada0
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale, zParPTank* zp)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 clock_base;
	uint32 slock_base;
	uint32 uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	uint32 i;
	RwTexCoords* uv;
	RwV2d* size;
}

// zParPTankBubbleUpdate__FP9zParPTankf
// Start address: 0x39b150
void zParPTankBubbleUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 clock_base;
	uint32 slock_base;
	uint32 uvlock_base;
	float32 damp;
	BubbleData* base_xp;
	BubbleData* xp;
	uint32 i;
	xVec3* pos;
	RwTexCoords* uv;
	RwRGBA* color;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankMenuBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b7e0
void zParPTankMenuBubbleCreate(zParPTank* zp, uint32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwFrame* frame;
}

// zParPTankBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b960
void zParPTankBubbleCreate(zParPTank* zp, uint32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwFrame* frame;
}

// zParPTankSpawnSparkles__FP5xVec3Ui
// Start address: 0x39bae0
void zParPTankSpawnSparkles(xVec3* pos, uint32 count)
{
	zParPTank* zp;
	RpPTankLockStruct posLock;
	RpPTankLockStruct vtx2TexCoordsLock;
	uint32 poslock_base;
	uint32 uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	uint32 i;
	RwTexCoords* uv;
}

// zParPTankSparkleUpdate__FP9zParPTankf
// Start address: 0x39bcf0
void zParPTankSparkleUpdate(zParPTank* zp, float32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	uint32 plock_base;
	uint32 uvlock_base;
	uint32 i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankSparkleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39bec0
void zParPTankSparkleCreate(zParPTank* zp, uint32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
}

