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

typedef s32(*type_0)(RxPipelineNode*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef RpWorldSector*(*type_3)(RpWorldSector*);
typedef void(*type_4)(xEnt*, xScene*, f32);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_11)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef u32(*type_13)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_14)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_16)(xEnt*);
typedef s32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_24)(u32);
typedef u32(*type_25)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s8*(*type_26)(xBase*);
typedef u32(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_29)(zParPTank*, f32);
typedef void(*type_30)(xEnt*, xVec3*, xMat4x3*);
typedef s8*(*type_32)(u32);
typedef u32(*type_33)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_38)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_42)(RxNodeDefinition*);
typedef void(*type_46)(RxNodeDefinition*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_49)(zParPTank*, f32);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef u32(*type_52)(void*, void*);
typedef void(*type_56)(void*);
typedef void(*type_59)(xAnimPlay*, xAnimState*);
typedef void(*type_62)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_64)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpAtomic*(*type_67)(RpAtomic*);
typedef void(*type_76)(zParPTank*, f32);
typedef RwCamera*(*type_83)(RwCamera*);
typedef void(*type_86)(xMemPool*, void*);
typedef void(*type_87)(zParPTank*, f32);
typedef void(*type_89)(zParPTank*, f32);
typedef void(*type_93)(RwResEntry*);

typedef RpLight* type_5[2];
typedef zParPTank type_7[7];
typedef xEnt* type_8[111];
typedef RwFrame* type_9[2];
typedef f32 type_10[16];
typedef f32 type_15[2];
typedef u8 type_18[3];
typedef f32 type_19[2];
typedef s8 type_20[128];
typedef u8 type_21[3];
typedef u8 type_22[3];
typedef type_20 type_23[6];
typedef s8 type_28[16];
typedef RwFrustumPlane type_31[6];
typedef u8 type_34[14];
typedef xModelTag type_35[4];
typedef s8 type_36[32];
typedef u16 type_37[3];
typedef xModelInstance* type_39[14];
typedef RwV3d type_40[8];
typedef xVec3 type_41[4];
typedef u8 type_43[2];
typedef s8 type_44[16];
typedef xAnimMultiFileEntry type_45[1];
typedef u8 type_48[4];
typedef f32 type_50[4];
typedef u8 type_53[22];
typedef f32 type_54[3];
typedef u8 type_55[22];
typedef RwTexCoords* type_57[8];
typedef xCollis type_58[18];
typedef xParInterp type_60[1];
typedef xVec3 type_61[5];
typedef u8 type_63[5];
typedef u16 type_65[3];
typedef xVec3 type_66[60];
typedef f32 type_68[22];
typedef xParInterp type_69[4];
typedef f32 type_70[22];
typedef xParInterp type_71[4];
typedef u32 type_72[4];
typedef u32 type_73[15];
typedef u32 type_74[15];
typedef f32 type_75[2];
typedef u32 type_77[4096];
typedef u32 type_78[15];
typedef u32 type_79[72];
typedef RwTexCoords* type_80[8];
typedef analog_data type_81[2];
typedef s8 type_82[4];
typedef f32 type_84[4];
typedef xBase* type_85[72];
typedef s8 type_88[32];
typedef s8 type_90[32];
typedef u8 type_91[2];
typedef xVec4 type_92[12];
typedef u32 type_94[2];
typedef u8 type_95[2];
typedef f32 type_96[6];
typedef f32 type_97[3];
typedef xVec3 type_98[3];
typedef f32 type_99[3];
typedef xModelTag type_100[2];
typedef f32 type_101[3];
typedef RxCluster type_102[1];

struct snow_particle_data
{
	xVec3 loc;
	f32 size;
	xVec3 vel;
	f32 life;
	f32 u;
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
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_43 NumAnims;
	void** RawData;
};

struct tri_data_0
{
	u32 index;
	f32 r;
	f32 d;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_88 name;
	type_90 mask;
	u32 filterAddressing;
	s32 refCount;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct xEntBoulder
{
};

struct xJSPHeader
{
	type_82 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zParPTank
{
	u32 flags;
	type_29 update;
	RpAtomic* ptank;
	u32 num_particles;
	u32 max_particles;
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_10 matrix;
	f32 radius;
	f32 angle;
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
		_class_1 tuv;
		tri_data_0 tri;
	};
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_15 BilinearLerp;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_23 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_36 sceneStart;
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
	type_24 resolvID;
	type_26 base2Name;
	type_32 id2Name;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapFreeBlock
{
	u32 size;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_41 corner;
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
	type_59 BeforeEnter;
	type_47 StateCallback;
	type_62 BeforeAnimMatrices;
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

struct zEntHangable
{
};

struct RwV2d
{
	f32 x;
	f32 y;
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
	f32 height;
	f32 radius;
	f32 deflection;
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

struct _tagxPad
{
	type_53 value;
	type_55 last_value;
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
	type_68 up_tmr;
	type_70 down_tmr;
	type_81 analog;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	u32 interp;
	f32 freq;
	f32 oofreq;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpPolygon
{
	u16 matIndex;
	type_37 vertIndex;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_50 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	type_56 activateCB;
	type_56 deactivateCB;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct BubbleData
{
	xVec3 vel;
	f32 life;
};

struct _tagiPad
{
	s32 port;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_31 frustumPlanes;
	RwBBox frustumBoundBox;
	type_40 frustumCorners;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct ptank_pool
{
	render_state rs;
	u32 used;
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
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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
	type_62 BeforeAnimMatrices;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xFFX
{
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_64 eventFunc;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	_class_0 anim_coll;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
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
	type_3 renderCallBack;
	RxPipeline* pipeline;
};

struct xParSys
{
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
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
	f32 dst_cast;
	type_75 radius;
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
	type_80 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	u32 last_index;
	s32 flg_group;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_52 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_93 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_86 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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

struct zCutsceneMgr
{
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct _tagEmitSphere
{
	f32 radius;
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
	type_79 baseCount;
	type_85 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_66 tranTable;
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
	f32 r;
};

struct RpTriangle
{
	type_65 vertIndex;
	s16 matIndex;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xVec2
{
	f32 x;
	f32 y;
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
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_5 light;
	type_9 light_frame;
	s32 memlvl;
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
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_84 wt;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_3
{
	u8* data;
	s32 stride;
	u32 size;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	type_18 emit_pad;
	type_21 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	type_100 BubbleWandTag;
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
	type_35 HangPawTag;
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
	type_73 Inv_PatsSock;
	type_74 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_78 Inv_LevelPickups;
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
	type_94 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_8 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_34 sb_model_indices;
	type_39 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RpPTankLockStruct
{
	u8* data;
	s32 stride;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	s32 type;
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

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
	xVec3* pos;
	iColor_tag* color;
	xVec2* size;
	xVec2* uv;
	s32 stride;
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
	type_92 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_96 MoveSpeed;
	type_97 AnimSneak;
	type_99 AnimWalk;
	type_101 AnimRun;
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
	type_48 talk_filter;
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
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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
	type_61 lastRefs;
	type_63 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
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
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct RwLinkList
{
	RwLLLink link;
};

struct render_state
{
	RwTexture* texture;
	u32 src_blend;
	u32 dst_blend;
	u32 flags;
};

type_28 buffer;
type_44 buffer;
u32 gPTankDisable;
u32 sNumPTanks;
type_7 sPTank;
zParPTank* sSparklePTank;
zParPTank* sBubblePTank;
zParPTank* sMenuBubblePTank;
zParPTank* sSnowPTank;
zParPTank* sSteamPTank;
zParPTank* sExplosionPTank;
RwV2d sparkle_size;
f32 sSparkleAnimTime;
BubbleData* sBubbleData;
BubbleData* sMenuBubbleData;
RwRGBA bubble_color;
RwRGBA snow_color;
snow_particle_data* snow_particles;
ptank_pool__pos_color_size_uv2 snow_pool;
RwV2d steam_size;
f32 sSteamAnimTime;
u32 gActiveHeap;
type_87 zParPTankSnowUpdate;
type_89 zParPTankSteamUpdate;
type_76 zParPTankBubbleUpdate;
type_49 zParPTankSparkleUpdate;
s32 _rpPTankAtomicDataOffset;
f32 snow_life;
zGlobals globals;
RwCamera* sGameScreenTransCam;
s32 gGameState;
type_77 ourGlobals;
RwCamera* sGameScreenTransCam;

s32 zParPTankConvertEmitRate(xParEmitter* pe, f32 dt);
void zParPTankRender();
void zParPTankUpdate(f32 dt);
void zParPTankExit();
void zParPTankSceneExit();
void zParPTankSceneEnter();
void zParPTankInit();
void zParPTankSteamUpdate(zParPTank* zp, f32 dt);
void zParPTankSteamCreate(zParPTank* zp, u32 max_particles, type_29 update);
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, u32 count);
void zParPTankSnowUpdate(zParPTank* zp, f32 dt);
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, u32 count);
s32 zParPTankBubblesAvailable();
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, u32 count, f32 scale);
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, u32 count, f32 scale, zParPTank* zp);
void zParPTankBubbleUpdate(zParPTank* zp, f32 dt);
void zParPTankMenuBubbleCreate(zParPTank* zp, u32 max_particles, type_29 update);
void zParPTankBubbleCreate(zParPTank* zp, u32 max_particles, type_29 update);
void zParPTankSpawnSparkles(xVec3* pos, u32 count);
void zParPTankSparkleUpdate(zParPTank* zp, f32 dt);
void zParPTankSparkleCreate(zParPTank* zp, u32 max_particles, type_29 update);

// zParPTankConvertEmitRate__FP11xParEmitterf
// Start address: 0x399c80
s32 zParPTankConvertEmitRate(xParEmitter* pe, f32 dt)
{
	xParEmitterPropsAsset* prop;
	s32 rate_has_elapsed;
	f32 rate;
	s32 count;
}

// zParPTankRender__Fv
// Start address: 0x399d80
void zParPTankRender()
{
	zParPTank* zp;
	u32 i;
}

// zParPTankUpdate__Ff
// Start address: 0x399e60
void zParPTankUpdate(f32 dt)
{
	s32 paused;
	zParPTank* zp;
	u32 i;
}

// zParPTankExit__Fv
// Start address: 0x399f10
void zParPTankExit()
{
	zParPTank* zp;
	u32 i;
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
void zParPTankSteamUpdate(zParPTank* zp, f32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	u32 plock_base;
	u32 uvlock_base;
	u32 i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankSteamCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39a3b0
void zParPTankSteamCreate(zParPTank* zp, u32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
}

// zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
// Start address: 0x39a600
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, u32 count)
{
	u32 old_size;
	snow_particle_data* it;
	snow_particle_data* end;
}

// zParPTankSnowUpdate__FP9zParPTankf
// Start address: 0x39a770
void zParPTankSnowUpdate(zParPTank* zp, f32 dt)
{
	snow_particle_data* end;
	f32 fadein_life;
	f32 fadeout_life;
	f32 ilife;
	f32 ifadein;
	f32 ifadeout;
	snow_particle_data* it;
	xVec4* _loc;
	f32 par_dist;
}

// zParPTankSpawnMenuBubbles__FP5xVec3P5xVec3Ui
// Start address: 0x39acf0
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, u32 count)
{
}

// zParPTankBubblesAvailable__Fv
// Start address: 0x39ad10
s32 zParPTankBubblesAvailable()
{
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif
// Start address: 0x39ad30
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, u32 count, f32 scale)
{
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3UifP9zParPTank
// Start address: 0x39ada0
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, u32 count, f32 scale, zParPTank* zp)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	u32 plock_base;
	u32 clock_base;
	u32 slock_base;
	u32 uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	u32 i;
	RwTexCoords* uv;
	RwV2d* size;
}

// zParPTankBubbleUpdate__FP9zParPTankf
// Start address: 0x39b150
void zParPTankBubbleUpdate(zParPTank* zp, f32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	u32 plock_base;
	u32 clock_base;
	u32 slock_base;
	u32 uvlock_base;
	f32 damp;
	BubbleData* base_xp;
	BubbleData* xp;
	u32 i;
	xVec3* pos;
	RwTexCoords* uv;
	RwRGBA* color;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankMenuBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b7e0
void zParPTankMenuBubbleCreate(zParPTank* zp, u32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwFrame* frame;
}

// zParPTankBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b960
void zParPTankBubbleCreate(zParPTank* zp, u32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwFrame* frame;
}

// zParPTankSpawnSparkles__FP5xVec3Ui
// Start address: 0x39bae0
void zParPTankSpawnSparkles(xVec3* pos, u32 count)
{
	zParPTank* zp;
	RpPTankLockStruct posLock;
	RpPTankLockStruct vtx2TexCoordsLock;
	u32 poslock_base;
	u32 uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	u32 i;
	RwTexCoords* uv;
}

// zParPTankSparkleUpdate__FP9zParPTankf
// Start address: 0x39bcf0
void zParPTankSparkleUpdate(zParPTank* zp, f32 dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	u32 plock_base;
	u32 uvlock_base;
	u32 i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankSparkleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39bec0
void zParPTankSparkleCreate(zParPTank* zp, u32 max_particles, type_29 update)
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
}

