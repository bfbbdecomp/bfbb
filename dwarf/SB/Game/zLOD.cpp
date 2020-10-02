typedef struct xAnimTransition;
typedef struct RwObjectHasFrame;
typedef struct xParGroup;
typedef struct xFFX;
typedef struct RpAtomic;
typedef struct xPEEntBone;
typedef struct xEnt;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xModelPool;
typedef struct xParSys;
typedef struct xModelInstance;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xLightKitLight;
typedef struct RwRaster;
typedef struct xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTree;
typedef struct xParEmitterAsset;
typedef struct xBase;
typedef struct RpWorld;
typedef struct RxNodeDefinition;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipeline;
typedef struct xParEmitterPropsAsset;
typedef struct RxPipelineCluster;
typedef struct zEntDestructObj;
typedef struct RpWorldSector;
typedef struct xVec3;
typedef struct RxPipelineNodeParam;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct xClumpCollBSPTriangle;
typedef struct anim_coll_data;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct zParEmitter;
typedef struct _tagxPad;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct RpPolygon;
typedef struct xPECircle;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEnvAsset;
typedef struct rxHeapBlockHeader;
typedef struct RpVertexNormal;
typedef struct zPlatform;
typedef struct _tagxRumble;
typedef struct xQCData;
typedef struct zGlobals;
typedef struct RxPipelineRequiresCluster;
typedef struct _zPortal;
typedef struct xAnimTable;
typedef struct zGlobalSettings;
typedef struct RpMeshHeader;
typedef struct xGroup;
typedef struct zLODTable;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zScene;
typedef struct zAssetPickupTable;
typedef struct xUpdateCullEnt;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef union _class_0;
typedef struct xVec4;
typedef struct _tagEmitSphere;
typedef struct zJumpParam;
typedef struct RwSurfaceProperties;
typedef struct zLedgeGrabParams;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct zEntHangable;
typedef enum _zPlayerWallJumpState;
typedef enum RxClusterValidityReq;
typedef struct xLinkAsset;
typedef struct iEnv;
typedef struct xAnimFile;
typedef struct _tagEmitRect;
typedef struct xLightKit;
typedef struct zEnt;
typedef enum RxNodeDefEditable;
typedef struct xJSPNodeInfo;
typedef enum _tagRumbleType;
typedef struct xAnimTransitionList;
typedef enum RxClusterValid;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xRot;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct analog_data;
typedef struct xModelBucket;
typedef struct xEntBoulder;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xPEEntBound;
typedef struct xCylinder;
typedef struct _tagEmitLine;
typedef struct xJSPHeader;
typedef struct zCheckPoint;
typedef struct zEntDestructObjAsset;
typedef struct zPlayerGlobals;
typedef struct xBound;
typedef struct xVec2;
typedef struct RwTexture;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpSector;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct xEntAsset;
typedef struct xBBox;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntDrive;
typedef struct zPlayerSettings;
typedef struct RwSphere;
typedef struct zLODManager;
typedef struct RwCamera;
typedef struct RwTexDictionary;
typedef struct RpLight;
typedef struct zShrapnelAsset;
typedef struct zLasso;
typedef struct RxOutputSpec;
typedef struct _tagEmitVolume;
typedef struct xEntFrame;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct iFogParams;
typedef struct zFrag;
typedef struct RxIoSpec;
typedef struct zFragAsset;
typedef struct xShadowSimplePoly;
typedef struct xParEmitter;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xAnimMultiFileEntry;
typedef struct _tagEmitOffsetPoint;
typedef struct xAnimActiveEffect;
typedef struct tri_data_0;
typedef struct RwFrustumPlane;
typedef struct xSFXAsset;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct RwPlane;
typedef enum _tagPadState;
typedef struct RxCluster;
typedef struct xGlobals;
typedef struct RxPacket;
typedef struct xPEVCyl;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef enum RwFogType;
typedef struct xParInterp;
typedef struct RwRGBAReal;
typedef struct _class_2;
typedef struct _tagPadAnalog;
typedef struct RwLinkList;
typedef enum zFragType;
typedef struct RpMaterialList;
typedef struct _tagiPad;

typedef RwCamera*(*type_1)(RwCamera*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_5)(xEnt*);
typedef void(*type_7)(RxPipelineNode*);
typedef void(*type_12)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_14)(RxPipelineNode*, RxPipeline*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef uint32(*type_19)(void*, void*);
typedef uint32(*type_20)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_26)(xAnimPlay*, xAnimState*);
typedef void(*type_27)(void*);
typedef int32(*type_29)(RxNodeDefinition*);
typedef void(*type_30)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_32)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_33)(RxNodeDefinition*);
typedef uint32(*type_34)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_36)(RxPipelineNode*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef xBase*(*type_45)(uint32);
typedef int8*(*type_51)(xBase*);
typedef uint32(*type_54)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_55)(uint32);
typedef RpWorldSector*(*type_70)(RpWorldSector*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef void(*type_77)(zFrag*, zFragAsset*);
typedef void(*type_78)(zEntDestructObj&, void*);
typedef void(*type_84)(xMemPool*, void*);
typedef void(*type_85)(zShrapnelAsset*, xModelInstance*, xVec3*, type_77);
typedef void(*type_88)(xEnt*, xScene*, float32);
typedef xEnt*(*type_91)(xEnt*, xScene*, void*);
typedef void(*type_93)(RwResEntry*);
typedef void(*type_95)(xEnt*, xScene*, float32, xEntFrame*);

typedef uint16 type_0[3];
typedef uint8 type_2[14];
typedef xModelTag type_3[4];
typedef int8 type_6[32];
typedef xModelInstance* type_8[14];
typedef xVec3 type_9[4];
typedef uint8 type_10[2];
typedef xAnimMultiFileEntry type_11[1];
typedef uint8 type_13[4];
typedef float32 type_16[4];
typedef RwFrustumPlane type_18[6];
typedef uint8 type_21[22];
typedef RwTexCoords* type_23[8];
typedef uint8 type_24[22];
typedef xCollis type_25[18];
typedef RwV3d type_28[8];
typedef uint32 type_31[2];
typedef xParInterp type_35[1];
typedef xVec3 type_39[5];
typedef uint8 type_41[5];
typedef uint16 type_42[3];
typedef xVec3 type_44[60];
typedef int8 type_46[16];
typedef xParInterp type_47[4];
typedef uint8 type_48[2];
typedef float32 type_49[22];
typedef xParInterp type_50[4];
typedef float32 type_52[22];
typedef int8 type_53[16];
typedef uint32 type_56[15];
typedef uint32 type_57[15];
typedef float32 type_58[2];
typedef xModelBucket** type_59[3];
typedef zLODManager type_60[2048];
typedef float32 type_61[3];
typedef uint32 type_62[15];
typedef uint32 type_63[72];
typedef int8 type_64[4];
typedef RwTexCoords* type_65[8];
typedef xBase* type_66[72];
typedef float32 type_67[4];
typedef analog_data type_68[2];
typedef uint32 type_69[4];
typedef uint8 type_71[2];
typedef xVec4 type_72[12];
typedef uint32 type_73[2];
typedef uint8 type_75[2];
typedef float32 type_76[6];
typedef xVec3 type_79[3];
typedef float32 type_80[3];
typedef float32 type_81[3];
typedef xModelTag type_82[2];
typedef float32 type_83[3];
typedef RpLight* type_86[2];
typedef int8 type_87[32];
typedef int8 type_89[32];
typedef RwFrame* type_90[2];
typedef float32 type_92[16];
typedef xEnt* type_94[111];
typedef float32 type_96[2];
typedef uint8 type_97[3];
typedef uint8 type_98[3];
typedef uint8 type_99[3];
typedef float32 type_100[2];
typedef int8 type_101[128];
typedef type_101 type_102[6];
typedef RxCluster type_103[1];

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_54 Conditional;
	type_54 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_4 sync;
};

struct xParGroup
{
};

struct xFFX
{
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
	type_43 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_88 update;
	type_88 endUpdate;
	type_15 bupdate;
	type_95 move;
	type_5 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_38 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_26 BeforeEnter;
	type_12 StateCallback;
	type_37 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_11 Files;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xParSys
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_92 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_96 BilinearLerp;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
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
	type_70 renderCallBack;
	RxPipeline* pipeline;
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
	type_9 corner;
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
	type_25 colls;
	type_30 post;
	type_34 depenq;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_58 radius;
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
	type_65 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_35 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_47 color_birth;
	type_50 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct zEntDestructObj : zEnt
{
	zEntDestructObjAsset* dasset;
	uint32 state;
	uint32 healthCnt;
	float32 fx_timer;
	zParEmitter* fx_emitter;
	float32 respawn_timer;
	uint32 throw_target;
	zShrapnelAsset* shrapnel_destroy;
	zShrapnelAsset* shrapnel_hit;
	xModelInstance* base_model;
	xModelInstance* hit_model;
	xModelInstance* destroy_model;
	type_78 destroy_notify;
	void* notify_context;
	xSFXAsset* sfx_destroy;
	xSFXAsset* sfx_hit;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_23 texCoords;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xSurface
{
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct anim_coll_data
{
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

struct zParEmitter : xParEmitter
{
};

struct _tagxPad
{
	type_21 value;
	type_24 last_value;
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
	type_49 up_tmr;
	type_52 down_tmr;
	type_68 analog;
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
	type_37 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpPolygon
{
	uint16 matIndex;
	type_0 vertIndex;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_32 Callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_69 pad;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct zPlatform
{
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_71 PowerUp;
	type_75 InitialPowerUp;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float32 noRenderDist;
	type_59 lodBucket;
	type_61 lodDist;
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
	type_84 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	type_63 baseCount;
	type_66 baseList;
	_zEnv* zen;
};

struct zAssetPickupTable
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_19 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_44 tranTable;
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

struct RpTriangle
{
	type_42 vertIndex;
	int16 matIndex;
};

struct rxReq
{
};

struct zEntHangable
{
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_16 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_86 light;
	type_90 light_frame;
	int32 memlvl;
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
	type_10 NumAnims;
	void** RawData;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_67 wt;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xEntBoulder
{
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	type_45 resolvID;
	type_51 base2Name;
	type_55 id2Name;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xJSPHeader
{
	type_64 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct zEntDestructObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint32 health;
	uint32 spawnItemID;
	uint32 dflags;
	uint8 collType;
	uint8 fxType;
	type_48 pad;
	float32 blast_radius;
	float32 blast_strength;
	uint32 shrapnelID_destroy;
	uint32 shrapnelID_hit;
	uint32 sfx_destroy;
	uint32 sfx_hit;
	uint32 hitModel;
	uint32 destroyModel;
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
	type_82 BubbleWandTag;
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
	type_3 HangPawTag;
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
	type_56 Inv_PatsSock;
	type_57 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_62 Inv_LevelPickups;
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
	type_73 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_94 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_2 sb_model_indices;
	type_8 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_99 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_87 name;
	type_89 mask;
	uint32 filterAddressing;
	int32 refCount;
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
	type_27 activateCB;
	type_27 deactivateCB;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_72 frustplane;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_76 MoveSpeed;
	type_80 AnimSneak;
	type_81 AnimWalk;
	type_83 AnimRun;
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
	type_13 talk_filter;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct zLODManager
{
	int32 numextra;
	zLODTable* lod;
	xModelInstance* model;
	float32 adjustNoRenderDist;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_74 beginUpdate;
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
	type_18 frustumPlanes;
	RwBBox frustumBoundBox;
	type_28 frustumCorners;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	type_85 initCB;
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
	type_39 lastRefs;
	type_41 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct zFrag
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

struct zFragAsset
{
	zFragType type;
	uint32 id;
	type_31 parentID;
	float32 lifetime;
	float32 delay;
};

struct xShadowSimplePoly
{
	type_79 vert;
	xVec3 norm;
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
	type_97 emit_pad;
	type_98 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_29 nodeInit;
	type_33 nodeTerm;
	type_36 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_14 pipelineNodeConfig;
	type_20 configMsgHandler;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xSFXAsset : xBaseAsset
{
	uint16 flagsSFX;
	uint16 freq;
	float32 freqm;
	uint32 soundAssetID;
	uint32 attachID;
	uint8 loopCount;
	uint8 priority;
	uint8 volume;
	uint8 pad;
	xVec3 pos;
	float32 innerRadius;
	float32 outerRadius;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_1
{
	xVec3* verts;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_102 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_6 sceneStart;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_103 clusters;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xParInterp
{
	type_100 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwLinkList
{
	RwLLLink link;
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagiPad
{
	int32 port;
};

type_46 buffer;
type_53 buffer;
uint32 sTableCount;
zLODTable* sTableList;
uint32 sManagerIndex;
uint32 sManagerCount;
type_60 sManagerList;
zGlobals globals;
type_91 AddToLODList;
uint32 gActiveHeap;

void zLOD_UseCustomTable(xEnt* ent, zLODTable* lod);
zLODTable* zLOD_Get(xEnt* ent);
void zLOD_Update(uint32 percent_update);
void zLOD_Setup();
xEnt* AddToLODList(xEnt* ent);
void AddToLODList(xModelInstance* model);

// zLOD_UseCustomTable__FP4xEntP9zLODTable
// Start address: 0x184f20
void zLOD_UseCustomTable(xEnt* ent, zLODTable* lod)
{
	uint32 i;
	xModelInstance* model;
	xVec3* campos;
	float32 camdist2;
	float32 distscale;
	int32 i;
}

// zLOD_Get__FP4xEnt
// Start address: 0x1851a0
zLODTable* zLOD_Get(xEnt* ent)
{
	uint32 i;
}

// zLOD_Update__FUi
// Start address: 0x185220
void zLOD_Update(uint32 percent_update)
{
	xVec3* campos;
	uint32 numUpdates;
	zLODTable* lod;
	xModelInstance* model;
	float32 camdist2;
	float32 distscale;
	int32 i;
}

// zLOD_Setup__Fv
// Start address: 0x1854b0
void zLOD_Setup()
{
	uint32 tmpsize;
	uint32 i;
	uint32 j;
	void* data;
	uint32 count;
	zLODTable* tableCurr;
	RpAtomic* model;
	RpAtomic* model;
}

// AddToLODList__FP4xEntP6xScenePv
// Start address: 0x185700
xEnt* AddToLODList(xEnt* ent)
{
	zEntDestructObj* destruct;
}

// AddToLODList__FP14xModelInstance
// Start address: 0x185790
void AddToLODList(xModelInstance* model)
{
	uint32 i;
	uint32 i;
	xModelInstance* minst;
	uint32 numextra;
	float32 distscale;
}

