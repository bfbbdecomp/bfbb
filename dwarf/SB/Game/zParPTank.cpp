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
typedef struct _class_2;
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
typedef int8 type_23[128][6];
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
	float32 pad[3];
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
	uint8 NumAnims[2];
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
	int8 name[32];
	int8 mask[32];
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

struct xEntBoulder
{
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

struct zParPTank
{
	uint32 flags;
	void(*update)(zParPTank*, float32);
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
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	xVec3 corner[4];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	float32 val[2];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint32 pad[4];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	RpClump*(*callback)(RpClump*, void*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	uint32(*cb)(void*, void*);
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
	uint16 vertIndex[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	float32 wt[4];
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
	uint8 pad[3];
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
	xVec4 frustplane[12];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	RxCluster clusters[1];
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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

int8 buffer[16];
int8 buffer[16];
uint32 gPTankDisable;
uint32 sNumPTanks;
zParPTank sPTank[7];
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
void(*zParPTankSnowUpdate)(zParPTank*, float32);
void(*zParPTankSteamUpdate)(zParPTank*, float32);
void(*zParPTankBubbleUpdate)(zParPTank*, float32);
void(*zParPTankSparkleUpdate)(zParPTank*, float32);
int32 _rpPTankAtomicDataOffset;
float32 snow_life;
zGlobals globals;
RwCamera* sGameScreenTransCam;
int32 gGameState;
uint32 ourGlobals[4096];
RwCamera* sGameScreenTransCam;

int32 zParPTankConvertEmitRate(xParEmitter* pe, float32 dt);
void zParPTankRender();
void zParPTankUpdate(float32 dt);
void zParPTankExit();
void zParPTankSceneExit();
void zParPTankSceneEnter();
void zParPTankInit();
void zParPTankSteamUpdate(zParPTank* zp, float32 dt);
void zParPTankSteamCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count);
void zParPTankSnowUpdate(zParPTank* zp, float32 dt);
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, uint32 count);
int32 zParPTankBubblesAvailable();
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale);
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale, zParPTank* zp);
void zParPTankBubbleUpdate(zParPTank* zp, float32 dt);
void zParPTankMenuBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));
void zParPTankSpawnSparkles(xVec3* pos, uint32 count);
void zParPTankSparkleUpdate(zParPTank* zp, float32 dt);
void zParPTankSparkleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32));

// zParPTankConvertEmitRate__FP11xParEmitterf
// Start address: 0x399c80
int32 zParPTankConvertEmitRate(xParEmitter* pe, float32 dt)
{
	xParEmitterPropsAsset* prop;
	int32 rate_has_elapsed;
	float32 rate;
	int32 count;
	// Line 1431, Address: 0x399c80, Func Offset: 0
	// Line 1437, Address: 0x399c84, Func Offset: 0x4
	// Line 1431, Address: 0x399c88, Func Offset: 0x8
	// Line 1436, Address: 0x399c98, Func Offset: 0x18
	// Line 1433, Address: 0x399c9c, Func Offset: 0x1c
	// Line 1436, Address: 0x399ca0, Func Offset: 0x20
	// Line 1437, Address: 0x399cac, Func Offset: 0x2c
	// Line 1439, Address: 0x399cc0, Func Offset: 0x40
	// Line 1443, Address: 0x399cd4, Func Offset: 0x54
	// Line 1444, Address: 0x399ce0, Func Offset: 0x60
	// Line 1450, Address: 0x399d04, Func Offset: 0x84
	// Line 1453, Address: 0x399d18, Func Offset: 0x98
	// Line 1455, Address: 0x399d1c, Func Offset: 0x9c
	// Line 1456, Address: 0x399d28, Func Offset: 0xa8
	// Line 1458, Address: 0x399d34, Func Offset: 0xb4
	// Line 1460, Address: 0x399d48, Func Offset: 0xc8
	// Line 1461, Address: 0x399d50, Func Offset: 0xd0
	// Line 1464, Address: 0x399d68, Func Offset: 0xe8
	// Func End, Address: 0x399d7c, Func Offset: 0xfc
}

// zParPTankRender__Fv
// Start address: 0x399d80
void zParPTankRender()
{
	zParPTank* zp;
	uint32 i;
	// Line 1408, Address: 0x399d80, Func Offset: 0
	// Line 1409, Address: 0x399d90, Func Offset: 0x10
	// Line 1410, Address: 0x399d94, Func Offset: 0x14
	// Line 1409, Address: 0x399d98, Func Offset: 0x18
	// Line 1410, Address: 0x399d9c, Func Offset: 0x1c
	// Line 1412, Address: 0x399da8, Func Offset: 0x28
	// Line 1413, Address: 0x399dc4, Func Offset: 0x44
	// Line 1414, Address: 0x399dc8, Func Offset: 0x48
	// Line 1416, Address: 0x399dd4, Func Offset: 0x54
	// Line 1417, Address: 0x399ddc, Func Offset: 0x5c
	// Line 1418, Address: 0x399de8, Func Offset: 0x68
	// Line 1419, Address: 0x399df4, Func Offset: 0x74
	// Line 1420, Address: 0x399e00, Func Offset: 0x80
	// Line 1422, Address: 0x399e0c, Func Offset: 0x8c
	// Line 1423, Address: 0x399e1c, Func Offset: 0x9c
	// Line 1424, Address: 0x399e28, Func Offset: 0xa8
	// Line 1425, Address: 0x399e40, Func Offset: 0xc0
	// Func End, Address: 0x399e54, Func Offset: 0xd4
}

// zParPTankUpdate__Ff
// Start address: 0x399e60
void zParPTankUpdate(float32 dt)
{
	int32 paused;
	zParPTank* zp;
	uint32 i;
	// Line 1396, Address: 0x399e60, Func Offset: 0
	// Line 1397, Address: 0x399e78, Func Offset: 0x18
	// Line 1399, Address: 0x399e80, Func Offset: 0x20
	// Line 1398, Address: 0x399e84, Func Offset: 0x24
	// Line 1397, Address: 0x399e88, Func Offset: 0x28
	// Line 1398, Address: 0x399e8c, Func Offset: 0x2c
	// Line 1399, Address: 0x399e90, Func Offset: 0x30
	// Line 1400, Address: 0x399ea0, Func Offset: 0x40
	// Line 1402, Address: 0x399ebc, Func Offset: 0x5c
	// Line 1403, Address: 0x399ec4, Func Offset: 0x64
	// Line 1404, Address: 0x399ecc, Func Offset: 0x6c
	// Line 1405, Address: 0x399ee8, Func Offset: 0x88
	// Func End, Address: 0x399f04, Func Offset: 0xa4
}

// zParPTankExit__Fv
// Start address: 0x399f10
void zParPTankExit()
{
	zParPTank* zp;
	uint32 i;
	RwFrame* tmpframe;
	// Line 1359, Address: 0x399f10, Func Offset: 0
	// Line 1360, Address: 0x399f20, Func Offset: 0x10
	// Line 1359, Address: 0x399f24, Func Offset: 0x14
	// Line 1360, Address: 0x399f28, Func Offset: 0x18
	// Line 1361, Address: 0x399f2c, Func Offset: 0x1c
	// Line 1362, Address: 0x399f44, Func Offset: 0x34
	// Line 1365, Address: 0x399f4c, Func Offset: 0x3c
	// Line 1366, Address: 0x399f50, Func Offset: 0x40
	// Line 1367, Address: 0x399f58, Func Offset: 0x48
	// Line 1369, Address: 0x399f60, Func Offset: 0x50
	// Line 1371, Address: 0x399f68, Func Offset: 0x58
	// Line 1387, Address: 0x399f84, Func Offset: 0x74
	// Line 1388, Address: 0x399f8c, Func Offset: 0x7c
	// Line 1389, Address: 0x399f98, Func Offset: 0x88
	// Line 1390, Address: 0x399f9c, Func Offset: 0x8c
	// Line 1391, Address: 0x399fa4, Func Offset: 0x94
	// Line 1392, Address: 0x399fb0, Func Offset: 0xa0
	// Line 1393, Address: 0x399fb4, Func Offset: 0xa4
	// Func End, Address: 0x399fcc, Func Offset: 0xbc
}

// zParPTankSceneExit__Fv
// Start address: 0x399fd0
void zParPTankSceneExit()
{
	// Line 1356, Address: 0x399fd0, Func Offset: 0
	// Func End, Address: 0x399fd8, Func Offset: 0x8
}

// zParPTankSceneEnter__Fv
// Start address: 0x399fe0
void zParPTankSceneEnter()
{
	// Line 1342, Address: 0x399fe0, Func Offset: 0
	// Line 1347, Address: 0x399fe4, Func Offset: 0x4
	// Line 1342, Address: 0x399fe8, Func Offset: 0x8
	// Line 1348, Address: 0x399fec, Func Offset: 0xc
	// Line 1342, Address: 0x399ff0, Func Offset: 0x10
	// Line 1348, Address: 0x399ff4, Func Offset: 0x14
	// Line 1347, Address: 0x399ff8, Func Offset: 0x18
	// Line 1348, Address: 0x39a000, Func Offset: 0x20
	// Line 1347, Address: 0x39a00c, Func Offset: 0x2c
	// Line 1348, Address: 0x39a028, Func Offset: 0x48
	// Line 1351, Address: 0x39a094, Func Offset: 0xb4
	// Func End, Address: 0x39a0a4, Func Offset: 0xc4
}

// zParPTankInit__Fv
// Start address: 0x39a0b0
void zParPTankInit()
{
	// Line 1298, Address: 0x39a0b0, Func Offset: 0
	// Line 1303, Address: 0x39a0b4, Func Offset: 0x4
	// Line 1298, Address: 0x39a0b8, Func Offset: 0x8
	// Line 1303, Address: 0x39a0bc, Func Offset: 0xc
	// Line 1299, Address: 0x39a0c0, Func Offset: 0x10
	// Line 1304, Address: 0x39a0c4, Func Offset: 0x14
	// Line 1303, Address: 0x39a0c8, Func Offset: 0x18
	// Line 1304, Address: 0x39a0cc, Func Offset: 0x1c
	// Line 1303, Address: 0x39a0d0, Func Offset: 0x20
	// Line 1304, Address: 0x39a0d4, Func Offset: 0x24
	// Line 1303, Address: 0x39a0d8, Func Offset: 0x28
	// Line 1304, Address: 0x39a0dc, Func Offset: 0x2c
	// Line 1307, Address: 0x39a0e4, Func Offset: 0x34
	// Line 1308, Address: 0x39a0ec, Func Offset: 0x3c
	// Line 1307, Address: 0x39a0f0, Func Offset: 0x40
	// Line 1308, Address: 0x39a0f4, Func Offset: 0x44
	// Line 1307, Address: 0x39a0fc, Func Offset: 0x4c
	// Line 1308, Address: 0x39a114, Func Offset: 0x64
	// Line 1310, Address: 0x39a11c, Func Offset: 0x6c
	// Line 1313, Address: 0x39a120, Func Offset: 0x70
	// Line 1314, Address: 0x39a124, Func Offset: 0x74
	// Line 1313, Address: 0x39a128, Func Offset: 0x78
	// Line 1314, Address: 0x39a12c, Func Offset: 0x7c
	// Line 1310, Address: 0x39a134, Func Offset: 0x84
	// Line 1313, Address: 0x39a140, Func Offset: 0x90
	// Line 1314, Address: 0x39a15c, Func Offset: 0xac
	// Line 1324, Address: 0x39a164, Func Offset: 0xb4
	// Line 1325, Address: 0x39a16c, Func Offset: 0xbc
	// Line 1324, Address: 0x39a170, Func Offset: 0xc0
	// Line 1325, Address: 0x39a174, Func Offset: 0xc4
	// Line 1324, Address: 0x39a17c, Func Offset: 0xcc
	// Line 1325, Address: 0x39a194, Func Offset: 0xe4
	// Line 1339, Address: 0x39a19c, Func Offset: 0xec
	// Func End, Address: 0x39a1a8, Func Offset: 0xf8
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
	// Line 1178, Address: 0x39a1b0, Func Offset: 0
	// Line 1183, Address: 0x39a1b4, Func Offset: 0x4
	// Line 1178, Address: 0x39a1b8, Func Offset: 0x8
	// Line 1183, Address: 0x39a1bc, Func Offset: 0xc
	// Line 1178, Address: 0x39a1c0, Func Offset: 0x10
	// Line 1179, Address: 0x39a1c4, Func Offset: 0x14
	// Line 1183, Address: 0x39a1d4, Func Offset: 0x24
	// Line 1179, Address: 0x39a1dc, Func Offset: 0x2c
	// Line 1181, Address: 0x39a210, Func Offset: 0x60
	// Line 1183, Address: 0x39a218, Func Offset: 0x68
	// Line 1188, Address: 0x39a224, Func Offset: 0x74
	// Line 1189, Address: 0x39a238, Func Offset: 0x88
	// Line 1195, Address: 0x39a24c, Func Offset: 0x9c
	// Line 1192, Address: 0x39a250, Func Offset: 0xa0
	// Line 1193, Address: 0x39a254, Func Offset: 0xa4
	// Line 1195, Address: 0x39a258, Func Offset: 0xa8
	// Line 1199, Address: 0x39a26c, Func Offset: 0xbc
	// Line 1202, Address: 0x39a270, Func Offset: 0xc0
	// Line 1199, Address: 0x39a274, Func Offset: 0xc4
	// Line 1202, Address: 0x39a278, Func Offset: 0xc8
	// Line 1195, Address: 0x39a27c, Func Offset: 0xcc
	// Line 1197, Address: 0x39a280, Func Offset: 0xd0
	// Line 1199, Address: 0x39a284, Func Offset: 0xd4
	// Line 1200, Address: 0x39a290, Func Offset: 0xe0
	// Line 1202, Address: 0x39a29c, Func Offset: 0xec
	// Line 1205, Address: 0x39a2b0, Func Offset: 0x100
	// Line 1213, Address: 0x39a2c4, Func Offset: 0x114
	// Line 1205, Address: 0x39a2c8, Func Offset: 0x118
	// Line 1207, Address: 0x39a2e4, Func Offset: 0x134
	// Line 1208, Address: 0x39a2f8, Func Offset: 0x148
	// Line 1209, Address: 0x39a308, Func Offset: 0x158
	// Line 1211, Address: 0x39a318, Func Offset: 0x168
	// Line 1214, Address: 0x39a324, Func Offset: 0x174
	// Line 1215, Address: 0x39a334, Func Offset: 0x184
	// Line 1216, Address: 0x39a338, Func Offset: 0x188
	// Line 1217, Address: 0x39a340, Func Offset: 0x190
	// Line 1216, Address: 0x39a344, Func Offset: 0x194
	// Line 1217, Address: 0x39a34c, Func Offset: 0x19c
	// Line 1219, Address: 0x39a360, Func Offset: 0x1b0
	// Line 1221, Address: 0x39a368, Func Offset: 0x1b8
	// Line 1228, Address: 0x39a3a0, Func Offset: 0x1f0
	// Func End, Address: 0x39a3b0, Func Offset: 0x200
}

// zParPTankSteamCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39a3b0
void zParPTankSteamCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
	// Line 1141, Address: 0x39a3b0, Func Offset: 0
	// Line 1143, Address: 0x39a3c4, Func Offset: 0x14
	// Line 1144, Address: 0x39a3c8, Func Offset: 0x18
	// Line 1146, Address: 0x39a3cc, Func Offset: 0x1c
	// Line 1147, Address: 0x39a3d0, Func Offset: 0x20
	// Line 1149, Address: 0x39a3d4, Func Offset: 0x24
	// Line 1150, Address: 0x39a3f0, Func Offset: 0x40
	// Line 1152, Address: 0x39a3f8, Func Offset: 0x48
	// Line 1157, Address: 0x39a3fc, Func Offset: 0x4c
	// Line 1152, Address: 0x39a400, Func Offset: 0x50
	// Line 1157, Address: 0x39a404, Func Offset: 0x54
	// Line 1154, Address: 0x39a408, Func Offset: 0x58
	// Line 1152, Address: 0x39a40c, Func Offset: 0x5c
	// Line 1154, Address: 0x39a418, Func Offset: 0x68
	// Line 1157, Address: 0x39a420, Func Offset: 0x70
	// Line 1164, Address: 0x39a42c, Func Offset: 0x7c
	// Line 1165, Address: 0x39a434, Func Offset: 0x84
	// Line 1166, Address: 0x39a47c, Func Offset: 0xcc
	// Line 1168, Address: 0x39a488, Func Offset: 0xd8
	// Line 1169, Address: 0x39a508, Func Offset: 0x158
	// Line 1168, Address: 0x39a50c, Func Offset: 0x15c
	// Line 1169, Address: 0x39a520, Func Offset: 0x170
	// Line 1170, Address: 0x39a560, Func Offset: 0x1b0
	// Line 1171, Address: 0x39a578, Func Offset: 0x1c8
	// Line 1172, Address: 0x39a58c, Func Offset: 0x1dc
	// Line 1171, Address: 0x39a590, Func Offset: 0x1e0
	// Line 1172, Address: 0x39a5cc, Func Offset: 0x21c
	// Line 1174, Address: 0x39a5e0, Func Offset: 0x230
	// Line 1175, Address: 0x39a5e4, Func Offset: 0x234
	// Func End, Address: 0x39a5fc, Func Offset: 0x24c
}

// zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
// Start address: 0x39a600
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count)
{
	uint32 old_size;
	snow_particle_data* it;
	snow_particle_data* end;
	// Line 908, Address: 0x39a600, Func Offset: 0
	// Line 909, Address: 0x39a620, Func Offset: 0x20
	// Line 914, Address: 0x39a634, Func Offset: 0x34
	// Line 913, Address: 0x39a638, Func Offset: 0x38
	// Line 914, Address: 0x39a63c, Func Offset: 0x3c
	// Line 915, Address: 0x39a648, Func Offset: 0x48
	// Line 916, Address: 0x39a658, Func Offset: 0x58
	// Line 920, Address: 0x39a660, Func Offset: 0x60
	// Line 921, Address: 0x39a68c, Func Offset: 0x8c
	// Line 923, Address: 0x39a698, Func Offset: 0x98
	// Line 924, Address: 0x39a6b0, Func Offset: 0xb0
	// Line 925, Address: 0x39a6c8, Func Offset: 0xc8
	// Line 926, Address: 0x39a6cc, Func Offset: 0xcc
	// Line 927, Address: 0x39a6ec, Func Offset: 0xec
	// Line 928, Address: 0x39a72c, Func Offset: 0x12c
	// Line 927, Address: 0x39a730, Func Offset: 0x130
	// Line 928, Address: 0x39a740, Func Offset: 0x140
	// Line 929, Address: 0x39a750, Func Offset: 0x150
	// Func End, Address: 0x39a76c, Func Offset: 0x16c
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
	// Line 835, Address: 0x39a770, Func Offset: 0
	// Line 840, Address: 0x39a774, Func Offset: 0x4
	// Line 835, Address: 0x39a778, Func Offset: 0x8
	// Line 838, Address: 0x39a77c, Func Offset: 0xc
	// Line 835, Address: 0x39a780, Func Offset: 0x10
	// Line 838, Address: 0x39a784, Func Offset: 0x14
	// Line 835, Address: 0x39a788, Func Offset: 0x18
	// Line 838, Address: 0x39a78c, Func Offset: 0x1c
	// Line 835, Address: 0x39a790, Func Offset: 0x20
	// Line 840, Address: 0x39a794, Func Offset: 0x24
	// Line 835, Address: 0x39a798, Func Offset: 0x28
	// Line 839, Address: 0x39a79c, Func Offset: 0x2c
	// Line 835, Address: 0x39a7a0, Func Offset: 0x30
	// Line 839, Address: 0x39a7a4, Func Offset: 0x34
	// Line 835, Address: 0x39a7a8, Func Offset: 0x38
	// Line 849, Address: 0x39a7b4, Func Offset: 0x44
	// Line 835, Address: 0x39a7b8, Func Offset: 0x48
	// Line 838, Address: 0x39a7bc, Func Offset: 0x4c
	// Line 836, Address: 0x39a7c0, Func Offset: 0x50
	// Line 839, Address: 0x39a7c4, Func Offset: 0x54
	// Line 836, Address: 0x39a7c8, Func Offset: 0x58
	// Line 841, Address: 0x39a7d0, Func Offset: 0x60
	// Line 840, Address: 0x39a7e0, Func Offset: 0x70
	// Line 836, Address: 0x39a7e4, Func Offset: 0x74
	// Line 842, Address: 0x39a7ec, Func Offset: 0x7c
	// Line 849, Address: 0x39a7f0, Func Offset: 0x80
	// Line 836, Address: 0x39a7f4, Func Offset: 0x84
	// Line 849, Address: 0x39a7f8, Func Offset: 0x88
	// Line 850, Address: 0x39a7fc, Func Offset: 0x8c
	// Line 842, Address: 0x39a800, Func Offset: 0x90
	// Line 849, Address: 0x39a804, Func Offset: 0x94
	// Line 850, Address: 0x39a808, Func Offset: 0x98
	// Line 836, Address: 0x39a80c, Func Offset: 0x9c
	// Line 841, Address: 0x39a810, Func Offset: 0xa0
	// Line 842, Address: 0x39a814, Func Offset: 0xa4
	// Line 838, Address: 0x39a818, Func Offset: 0xa8
	// Line 839, Address: 0x39a81c, Func Offset: 0xac
	// Line 842, Address: 0x39a820, Func Offset: 0xb0
	// Line 850, Address: 0x39a824, Func Offset: 0xb4
	// Line 851, Address: 0x39a834, Func Offset: 0xc4
	// Line 853, Address: 0x39a840, Func Offset: 0xd0
	// Line 854, Address: 0x39a844, Func Offset: 0xd4
	// Line 853, Address: 0x39a84c, Func Offset: 0xdc
	// Line 854, Address: 0x39a850, Func Offset: 0xe0
	// Line 856, Address: 0x39a85c, Func Offset: 0xec
	// Line 857, Address: 0x39a8bc, Func Offset: 0x14c
	// Line 858, Address: 0x39a8c4, Func Offset: 0x154
	// Line 861, Address: 0x39a8c8, Func Offset: 0x158
	// Line 863, Address: 0x39a94c, Func Offset: 0x1dc
	// Line 868, Address: 0x39a9dc, Func Offset: 0x26c
	// Line 869, Address: 0x39aab0, Func Offset: 0x340
	// Line 872, Address: 0x39aac0, Func Offset: 0x350
	// Line 876, Address: 0x39aac8, Func Offset: 0x358
	// Line 877, Address: 0x39aad8, Func Offset: 0x368
	// Line 878, Address: 0x39aae8, Func Offset: 0x378
	// Line 879, Address: 0x39ab50, Func Offset: 0x3e0
	// Line 880, Address: 0x39ab5c, Func Offset: 0x3ec
	// Line 882, Address: 0x39abb8, Func Offset: 0x448
	// Line 885, Address: 0x39abc8, Func Offset: 0x458
	// Line 890, Address: 0x39abd4, Func Offset: 0x464
	// Line 889, Address: 0x39abd8, Func Offset: 0x468
	// Line 890, Address: 0x39abdc, Func Offset: 0x46c
	// Line 885, Address: 0x39abe4, Func Offset: 0x474
	// Line 886, Address: 0x39abe8, Func Offset: 0x478
	// Line 885, Address: 0x39abec, Func Offset: 0x47c
	// Line 886, Address: 0x39abfc, Func Offset: 0x48c
	// Line 889, Address: 0x39ac08, Func Offset: 0x498
	// Line 886, Address: 0x39ac0c, Func Offset: 0x49c
	// Line 889, Address: 0x39ac10, Func Offset: 0x4a0
	// Line 890, Address: 0x39ac1c, Func Offset: 0x4ac
	// Line 889, Address: 0x39ac20, Func Offset: 0x4b0
	// Line 890, Address: 0x39ac24, Func Offset: 0x4b4
	// Line 897, Address: 0x39ac40, Func Offset: 0x4d0
	// Line 898, Address: 0x39ac44, Func Offset: 0x4d4
	// Line 901, Address: 0x39ac50, Func Offset: 0x4e0
	// Line 903, Address: 0x39ac8c, Func Offset: 0x51c
	// Line 904, Address: 0x39acbc, Func Offset: 0x54c
	// Func End, Address: 0x39ace8, Func Offset: 0x578
}

// zParPTankSpawnMenuBubbles__FP5xVec3P5xVec3Ui
// Start address: 0x39acf0
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, uint32 count)
{
	// Line 702, Address: 0x39acf0, Func Offset: 0
	// Func End, Address: 0x39ad04, Func Offset: 0x14
}

// zParPTankBubblesAvailable__Fv
// Start address: 0x39ad10
int32 zParPTankBubblesAvailable()
{
	// Line 695, Address: 0x39ad10, Func Offset: 0
	// Line 696, Address: 0x39ad14, Func Offset: 0x4
	// Line 697, Address: 0x39ad1c, Func Offset: 0xc
	// Func End, Address: 0x39ad24, Func Offset: 0x14
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif
// Start address: 0x39ad30
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float32 scale)
{
	// Line 687, Address: 0x39ad30, Func Offset: 0
	// Line 688, Address: 0x39ad54, Func Offset: 0x24
	// Line 691, Address: 0x39ad64, Func Offset: 0x34
	// Line 692, Address: 0x39ad7c, Func Offset: 0x4c
	// Func End, Address: 0x39ad9c, Func Offset: 0x6c
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
	// Line 595, Address: 0x39ada0, Func Offset: 0
	// Line 596, Address: 0x39ade8, Func Offset: 0x48
	// Line 597, Address: 0x39ae00, Func Offset: 0x60
	// Line 599, Address: 0x39ae14, Func Offset: 0x74
	// Line 600, Address: 0x39ae20, Func Offset: 0x80
	// Line 603, Address: 0x39ae28, Func Offset: 0x88
	// Line 606, Address: 0x39ae30, Func Offset: 0x90
	// Line 613, Address: 0x39ae48, Func Offset: 0xa8
	// Line 614, Address: 0x39ae5c, Func Offset: 0xbc
	// Line 616, Address: 0x39ae68, Func Offset: 0xc8
	// Line 617, Address: 0x39ae7c, Func Offset: 0xdc
	// Line 619, Address: 0x39ae88, Func Offset: 0xe8
	// Line 620, Address: 0x39ae9c, Func Offset: 0xfc
	// Line 622, Address: 0x39aea8, Func Offset: 0x108
	// Line 623, Address: 0x39aec0, Func Offset: 0x120
	// Line 626, Address: 0x39aec8, Func Offset: 0x128
	// Line 633, Address: 0x39aecc, Func Offset: 0x12c
	// Line 634, Address: 0x39aed4, Func Offset: 0x134
	// Line 626, Address: 0x39aed8, Func Offset: 0x138
	// Line 627, Address: 0x39aedc, Func Offset: 0x13c
	// Line 628, Address: 0x39aee4, Func Offset: 0x144
	// Line 634, Address: 0x39aeec, Func Offset: 0x14c
	// Line 635, Address: 0x39af00, Func Offset: 0x160
	// Line 638, Address: 0x39af08, Func Offset: 0x168
	// Line 642, Address: 0x39af18, Func Offset: 0x178
	// Line 643, Address: 0x39af24, Func Offset: 0x184
	// Line 645, Address: 0x39af2c, Func Offset: 0x18c
	// Line 646, Address: 0x39af30, Func Offset: 0x190
	// Line 645, Address: 0x39af34, Func Offset: 0x194
	// Line 646, Address: 0x39af38, Func Offset: 0x198
	// Line 645, Address: 0x39af3c, Func Offset: 0x19c
	// Line 646, Address: 0x39af4c, Func Offset: 0x1ac
	// Line 645, Address: 0x39af50, Func Offset: 0x1b0
	// Line 646, Address: 0x39af5c, Func Offset: 0x1bc
	// Line 651, Address: 0x39af78, Func Offset: 0x1d8
	// Line 654, Address: 0x39af88, Func Offset: 0x1e8
	// Line 658, Address: 0x39af8c, Func Offset: 0x1ec
	// Line 660, Address: 0x39af90, Func Offset: 0x1f0
	// Line 659, Address: 0x39af94, Func Offset: 0x1f4
	// Line 651, Address: 0x39af9c, Func Offset: 0x1fc
	// Line 653, Address: 0x39afbc, Func Offset: 0x21c
	// Line 654, Address: 0x39afe0, Func Offset: 0x240
	// Line 656, Address: 0x39aff0, Func Offset: 0x250
	// Line 657, Address: 0x39b004, Func Offset: 0x264
	// Line 658, Address: 0x39b008, Func Offset: 0x268
	// Line 659, Address: 0x39b00c, Func Offset: 0x26c
	// Line 660, Address: 0x39b018, Func Offset: 0x278
	// Line 662, Address: 0x39b01c, Func Offset: 0x27c
	// Line 663, Address: 0x39b030, Func Offset: 0x290
	// Line 665, Address: 0x39b04c, Func Offset: 0x2ac
	// Line 663, Address: 0x39b050, Func Offset: 0x2b0
	// Line 665, Address: 0x39b05c, Func Offset: 0x2bc
	// Line 663, Address: 0x39b060, Func Offset: 0x2c0
	// Line 665, Address: 0x39b070, Func Offset: 0x2d0
	// Line 677, Address: 0x39b0b0, Func Offset: 0x310
	// Line 678, Address: 0x39b0bc, Func Offset: 0x31c
	// Line 677, Address: 0x39b0c8, Func Offset: 0x328
	// Line 678, Address: 0x39b0cc, Func Offset: 0x32c
	// Line 680, Address: 0x39b0d8, Func Offset: 0x338
	// Line 682, Address: 0x39b0e0, Func Offset: 0x340
	// Line 683, Address: 0x39b118, Func Offset: 0x378
	// Func End, Address: 0x39b14c, Func Offset: 0x3ac
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
	// Line 487, Address: 0x39b150, Func Offset: 0
	// Line 490, Address: 0x39b154, Func Offset: 0x4
	// Line 487, Address: 0x39b158, Func Offset: 0x8
	// Line 490, Address: 0x39b15c, Func Offset: 0xc
	// Line 487, Address: 0x39b160, Func Offset: 0x10
	// Line 490, Address: 0x39b164, Func Offset: 0x14
	// Line 487, Address: 0x39b168, Func Offset: 0x18
	// Line 490, Address: 0x39b198, Func Offset: 0x48
	// Line 491, Address: 0x39b1a4, Func Offset: 0x54
	// Line 492, Address: 0x39b1b8, Func Offset: 0x68
	// Line 493, Address: 0x39b1cc, Func Offset: 0x7c
	// Line 498, Address: 0x39b1e0, Func Offset: 0x90
	// Line 503, Address: 0x39b1e8, Func Offset: 0x98
	// Line 499, Address: 0x39b1f0, Func Offset: 0xa0
	// Line 503, Address: 0x39b1f4, Func Offset: 0xa4
	// Line 499, Address: 0x39b1f8, Func Offset: 0xa8
	// Line 500, Address: 0x39b1fc, Func Offset: 0xac
	// Line 501, Address: 0x39b204, Func Offset: 0xb4
	// Line 503, Address: 0x39b20c, Func Offset: 0xbc
	// Line 505, Address: 0x39b21c, Func Offset: 0xcc
	// Line 508, Address: 0x39b234, Func Offset: 0xe4
	// Line 506, Address: 0x39b238, Func Offset: 0xe8
	// Line 508, Address: 0x39b23c, Func Offset: 0xec
	// Line 524, Address: 0x39b260, Func Offset: 0x110
	// Line 510, Address: 0x39b264, Func Offset: 0x114
	// Line 524, Address: 0x39b268, Func Offset: 0x118
	// Line 510, Address: 0x39b270, Func Offset: 0x120
	// Line 512, Address: 0x39b278, Func Offset: 0x128
	// Line 514, Address: 0x39b27c, Func Offset: 0x12c
	// Line 515, Address: 0x39b290, Func Offset: 0x140
	// Line 516, Address: 0x39b2a4, Func Offset: 0x154
	// Line 518, Address: 0x39b2b8, Func Offset: 0x168
	// Line 519, Address: 0x39b2c4, Func Offset: 0x174
	// Line 520, Address: 0x39b2d0, Func Offset: 0x180
	// Line 521, Address: 0x39b2d8, Func Offset: 0x188
	// Line 523, Address: 0x39b2e4, Func Offset: 0x194
	// Line 524, Address: 0x39b2e8, Func Offset: 0x198
	// Line 525, Address: 0x39b2f4, Func Offset: 0x1a4
	// Line 526, Address: 0x39b3a0, Func Offset: 0x250
	// Line 527, Address: 0x39b3ac, Func Offset: 0x25c
	// Line 526, Address: 0x39b3b0, Func Offset: 0x260
	// Line 529, Address: 0x39b3b4, Func Offset: 0x264
	// Line 532, Address: 0x39b3d4, Func Offset: 0x284
	// Line 534, Address: 0x39b3f0, Func Offset: 0x2a0
	// Line 535, Address: 0x39b460, Func Offset: 0x310
	// Line 537, Address: 0x39b484, Func Offset: 0x334
	// Line 538, Address: 0x39b4e0, Func Offset: 0x390
	// Line 539, Address: 0x39b4e8, Func Offset: 0x398
	// Line 542, Address: 0x39b4f0, Func Offset: 0x3a0
	// Line 549, Address: 0x39b560, Func Offset: 0x410
	// Line 553, Address: 0x39b588, Func Offset: 0x438
	// Line 572, Address: 0x39b590, Func Offset: 0x440
	// Line 553, Address: 0x39b594, Func Offset: 0x444
	// Line 555, Address: 0x39b5bc, Func Offset: 0x46c
	// Line 557, Address: 0x39b5f4, Func Offset: 0x4a4
	// Line 560, Address: 0x39b624, Func Offset: 0x4d4
	// Line 559, Address: 0x39b630, Func Offset: 0x4e0
	// Line 560, Address: 0x39b634, Func Offset: 0x4e4
	// Line 561, Address: 0x39b644, Func Offset: 0x4f4
	// Line 562, Address: 0x39b654, Func Offset: 0x504
	// Line 564, Address: 0x39b664, Func Offset: 0x514
	// Line 567, Address: 0x39b68c, Func Offset: 0x53c
	// Line 570, Address: 0x39b6a0, Func Offset: 0x550
	// Line 573, Address: 0x39b6a4, Func Offset: 0x554
	// Line 570, Address: 0x39b6a8, Func Offset: 0x558
	// Line 574, Address: 0x39b6b0, Func Offset: 0x560
	// Line 575, Address: 0x39b6b8, Func Offset: 0x568
	// Line 576, Address: 0x39b6bc, Func Offset: 0x56c
	// Line 577, Address: 0x39b6c0, Func Offset: 0x570
	// Line 574, Address: 0x39b6c4, Func Offset: 0x574
	// Line 575, Address: 0x39b6cc, Func Offset: 0x57c
	// Line 576, Address: 0x39b6d8, Func Offset: 0x588
	// Line 577, Address: 0x39b6e8, Func Offset: 0x598
	// Line 579, Address: 0x39b6f8, Func Offset: 0x5a8
	// Line 583, Address: 0x39b700, Func Offset: 0x5b0
	// Line 580, Address: 0x39b704, Func Offset: 0x5b4
	// Line 581, Address: 0x39b708, Func Offset: 0x5b8
	// Line 582, Address: 0x39b70c, Func Offset: 0x5bc
	// Line 579, Address: 0x39b710, Func Offset: 0x5c0
	// Line 580, Address: 0x39b718, Func Offset: 0x5c8
	// Line 581, Address: 0x39b724, Func Offset: 0x5d4
	// Line 582, Address: 0x39b734, Func Offset: 0x5e4
	// Line 583, Address: 0x39b744, Func Offset: 0x5f4
	// Line 585, Address: 0x39b758, Func Offset: 0x608
	// Line 587, Address: 0x39b760, Func Offset: 0x610
	// Line 592, Address: 0x39b798, Func Offset: 0x648
	// Func End, Address: 0x39b7d4, Func Offset: 0x684
}

// zParPTankMenuBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b7e0
void zParPTankMenuBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 448, Address: 0x39b7e0, Func Offset: 0
	// Line 450, Address: 0x39b7f4, Func Offset: 0x14
	// Line 451, Address: 0x39b7f8, Func Offset: 0x18
	// Line 453, Address: 0x39b7fc, Func Offset: 0x1c
	// Line 454, Address: 0x39b800, Func Offset: 0x20
	// Line 456, Address: 0x39b804, Func Offset: 0x24
	// Line 457, Address: 0x39b820, Func Offset: 0x40
	// Line 459, Address: 0x39b828, Func Offset: 0x48
	// Line 464, Address: 0x39b82c, Func Offset: 0x4c
	// Line 459, Address: 0x39b830, Func Offset: 0x50
	// Line 464, Address: 0x39b834, Func Offset: 0x54
	// Line 459, Address: 0x39b838, Func Offset: 0x58
	// Line 464, Address: 0x39b844, Func Offset: 0x64
	// Line 473, Address: 0x39b850, Func Offset: 0x70
	// Line 474, Address: 0x39b858, Func Offset: 0x78
	// Line 475, Address: 0x39b8a0, Func Offset: 0xc0
	// Line 477, Address: 0x39b8ac, Func Offset: 0xcc
	// Line 478, Address: 0x39b8c4, Func Offset: 0xe4
	// Line 479, Address: 0x39b8d8, Func Offset: 0xf8
	// Line 478, Address: 0x39b8dc, Func Offset: 0xfc
	// Line 479, Address: 0x39b918, Func Offset: 0x138
	// Line 482, Address: 0x39b92c, Func Offset: 0x14c
	// Line 484, Address: 0x39b93c, Func Offset: 0x15c
	// Func End, Address: 0x39b954, Func Offset: 0x174
}

// zParPTankBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b960
void zParPTankBubbleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwFrame* frame;
	// Line 409, Address: 0x39b960, Func Offset: 0
	// Line 411, Address: 0x39b974, Func Offset: 0x14
	// Line 412, Address: 0x39b978, Func Offset: 0x18
	// Line 414, Address: 0x39b97c, Func Offset: 0x1c
	// Line 415, Address: 0x39b980, Func Offset: 0x20
	// Line 417, Address: 0x39b984, Func Offset: 0x24
	// Line 418, Address: 0x39b9a0, Func Offset: 0x40
	// Line 420, Address: 0x39b9a8, Func Offset: 0x48
	// Line 425, Address: 0x39b9ac, Func Offset: 0x4c
	// Line 420, Address: 0x39b9b0, Func Offset: 0x50
	// Line 425, Address: 0x39b9b4, Func Offset: 0x54
	// Line 420, Address: 0x39b9b8, Func Offset: 0x58
	// Line 425, Address: 0x39b9c4, Func Offset: 0x64
	// Line 434, Address: 0x39b9d0, Func Offset: 0x70
	// Line 435, Address: 0x39b9d8, Func Offset: 0x78
	// Line 436, Address: 0x39ba20, Func Offset: 0xc0
	// Line 438, Address: 0x39ba2c, Func Offset: 0xcc
	// Line 439, Address: 0x39ba44, Func Offset: 0xe4
	// Line 440, Address: 0x39ba58, Func Offset: 0xf8
	// Line 439, Address: 0x39ba5c, Func Offset: 0xfc
	// Line 440, Address: 0x39ba98, Func Offset: 0x138
	// Line 443, Address: 0x39baac, Func Offset: 0x14c
	// Line 445, Address: 0x39babc, Func Offset: 0x15c
	// Func End, Address: 0x39bad4, Func Offset: 0x174
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
	// Line 315, Address: 0x39bae0, Func Offset: 0
	// Line 316, Address: 0x39baf8, Func Offset: 0x18
	// Line 321, Address: 0x39bb0c, Func Offset: 0x2c
	// Line 322, Address: 0x39bb24, Func Offset: 0x44
	// Line 324, Address: 0x39bb28, Func Offset: 0x48
	// Line 330, Address: 0x39bb30, Func Offset: 0x50
	// Line 331, Address: 0x39bb44, Func Offset: 0x64
	// Line 333, Address: 0x39bb50, Func Offset: 0x70
	// Line 334, Address: 0x39bb68, Func Offset: 0x88
	// Line 343, Address: 0x39bb70, Func Offset: 0x90
	// Line 337, Address: 0x39bb74, Func Offset: 0x94
	// Line 343, Address: 0x39bb78, Func Offset: 0x98
	// Line 342, Address: 0x39bb7c, Func Offset: 0x9c
	// Line 343, Address: 0x39bb80, Func Offset: 0xa0
	// Line 344, Address: 0x39bb90, Func Offset: 0xb0
	// Line 347, Address: 0x39bb98, Func Offset: 0xb8
	// Line 365, Address: 0x39bbac, Func Offset: 0xcc
	// Line 364, Address: 0x39bbb0, Func Offset: 0xd0
	// Line 365, Address: 0x39bbb4, Func Offset: 0xd4
	// Line 355, Address: 0x39bbb8, Func Offset: 0xd8
	// Line 351, Address: 0x39bbc0, Func Offset: 0xe0
	// Line 352, Address: 0x39bbcc, Func Offset: 0xec
	// Line 354, Address: 0x39bbd4, Func Offset: 0xf4
	// Line 355, Address: 0x39bbf8, Func Offset: 0x118
	// Line 358, Address: 0x39bc14, Func Offset: 0x134
	// Line 360, Address: 0x39bc18, Func Offset: 0x138
	// Line 362, Address: 0x39bc40, Func Offset: 0x160
	// Line 363, Address: 0x39bc50, Func Offset: 0x170
	// Line 364, Address: 0x39bc54, Func Offset: 0x174
	// Line 365, Address: 0x39bc58, Func Offset: 0x178
	// Line 366, Address: 0x39bc64, Func Offset: 0x184
	// Line 368, Address: 0x39bc70, Func Offset: 0x190
	// Line 369, Address: 0x39bc7c, Func Offset: 0x19c
	// Line 371, Address: 0x39bc90, Func Offset: 0x1b0
	// Line 373, Address: 0x39bc98, Func Offset: 0x1b8
	// Line 374, Address: 0x39bcd0, Func Offset: 0x1f0
	// Func End, Address: 0x39bce8, Func Offset: 0x208
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
	// Line 259, Address: 0x39bcf0, Func Offset: 0
	// Line 266, Address: 0x39bcf4, Func Offset: 0x4
	// Line 259, Address: 0x39bcf8, Func Offset: 0x8
	// Line 266, Address: 0x39bcfc, Func Offset: 0xc
	// Line 259, Address: 0x39bd00, Func Offset: 0x10
	// Line 266, Address: 0x39bd04, Func Offset: 0x14
	// Line 264, Address: 0x39bd08, Func Offset: 0x18
	// Line 266, Address: 0x39bd14, Func Offset: 0x24
	// Line 271, Address: 0x39bd20, Func Offset: 0x30
	// Line 272, Address: 0x39bd34, Func Offset: 0x44
	// Line 278, Address: 0x39bd48, Func Offset: 0x58
	// Line 275, Address: 0x39bd4c, Func Offset: 0x5c
	// Line 276, Address: 0x39bd50, Func Offset: 0x60
	// Line 278, Address: 0x39bd54, Func Offset: 0x64
	// Line 282, Address: 0x39bd68, Func Offset: 0x78
	// Line 285, Address: 0x39bd6c, Func Offset: 0x7c
	// Line 282, Address: 0x39bd70, Func Offset: 0x80
	// Line 285, Address: 0x39bd74, Func Offset: 0x84
	// Line 280, Address: 0x39bd78, Func Offset: 0x88
	// Line 282, Address: 0x39bd7c, Func Offset: 0x8c
	// Line 283, Address: 0x39bd88, Func Offset: 0x98
	// Line 285, Address: 0x39bd94, Func Offset: 0xa4
	// Line 288, Address: 0x39bda8, Func Offset: 0xb8
	// Line 296, Address: 0x39bdbc, Func Offset: 0xcc
	// Line 288, Address: 0x39bdc0, Func Offset: 0xd0
	// Line 290, Address: 0x39bddc, Func Offset: 0xec
	// Line 291, Address: 0x39bdf0, Func Offset: 0x100
	// Line 292, Address: 0x39be00, Func Offset: 0x110
	// Line 294, Address: 0x39be10, Func Offset: 0x120
	// Line 297, Address: 0x39be1c, Func Offset: 0x12c
	// Line 298, Address: 0x39be2c, Func Offset: 0x13c
	// Line 299, Address: 0x39be30, Func Offset: 0x140
	// Line 300, Address: 0x39be38, Func Offset: 0x148
	// Line 299, Address: 0x39be3c, Func Offset: 0x14c
	// Line 300, Address: 0x39be44, Func Offset: 0x154
	// Line 302, Address: 0x39be58, Func Offset: 0x168
	// Line 304, Address: 0x39be60, Func Offset: 0x170
	// Line 306, Address: 0x39be64, Func Offset: 0x174
	// Line 304, Address: 0x39be68, Func Offset: 0x178
	// Line 306, Address: 0x39be6c, Func Offset: 0x17c
	// Line 304, Address: 0x39be74, Func Offset: 0x184
	// Line 306, Address: 0x39bea4, Func Offset: 0x1b4
	// Line 312, Address: 0x39beb0, Func Offset: 0x1c0
	// Func End, Address: 0x39bec0, Func Offset: 0x1d0
}

// zParPTankSparkleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39bec0
void zParPTankSparkleCreate(zParPTank* zp, uint32 max_particles, void(*update)(zParPTank*, float32))
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
	// Line 222, Address: 0x39bec0, Func Offset: 0
	// Line 224, Address: 0x39bed4, Func Offset: 0x14
	// Line 225, Address: 0x39bed8, Func Offset: 0x18
	// Line 227, Address: 0x39bedc, Func Offset: 0x1c
	// Line 228, Address: 0x39bee0, Func Offset: 0x20
	// Line 230, Address: 0x39bee4, Func Offset: 0x24
	// Line 231, Address: 0x39bf00, Func Offset: 0x40
	// Line 233, Address: 0x39bf08, Func Offset: 0x48
	// Line 238, Address: 0x39bf0c, Func Offset: 0x4c
	// Line 233, Address: 0x39bf10, Func Offset: 0x50
	// Line 238, Address: 0x39bf14, Func Offset: 0x54
	// Line 235, Address: 0x39bf18, Func Offset: 0x58
	// Line 233, Address: 0x39bf1c, Func Offset: 0x5c
	// Line 235, Address: 0x39bf28, Func Offset: 0x68
	// Line 238, Address: 0x39bf30, Func Offset: 0x70
	// Line 245, Address: 0x39bf3c, Func Offset: 0x7c
	// Line 246, Address: 0x39bf44, Func Offset: 0x84
	// Line 247, Address: 0x39bf8c, Func Offset: 0xcc
	// Line 249, Address: 0x39bf98, Func Offset: 0xd8
	// Line 250, Address: 0x39c018, Func Offset: 0x158
	// Line 249, Address: 0x39c01c, Func Offset: 0x15c
	// Line 250, Address: 0x39c030, Func Offset: 0x170
	// Line 251, Address: 0x39c070, Func Offset: 0x1b0
	// Line 252, Address: 0x39c088, Func Offset: 0x1c8
	// Line 253, Address: 0x39c09c, Func Offset: 0x1dc
	// Line 252, Address: 0x39c0a0, Func Offset: 0x1e0
	// Line 253, Address: 0x39c0dc, Func Offset: 0x21c
	// Line 255, Address: 0x39c0f0, Func Offset: 0x230
	// Line 256, Address: 0x39c0f4, Func Offset: 0x234
	// Func End, Address: 0x39c10c, Func Offset: 0x24c
}

