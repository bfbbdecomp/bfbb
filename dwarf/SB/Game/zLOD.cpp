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
typedef struct _class_0;
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
typedef void(*type_85)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
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
typedef int8 type_102[128][6];
typedef RxCluster type_103[1];

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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	float32 matrix[16];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	RpClump*(*callback)(RpClump*, void*);
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
	void(*destroy_notify)(zEntDestructObj&, void*);
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
	uint16 vertIndex[3];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	uint32 pad[4];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	xModelBucket** lodBucket[3];
	float32 lodDist[3];
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

struct zAssetPickupTable
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	uint16 vertIndex[3];
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
	float32 param[4];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint8 NumAnims[2];
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
	float32 wt[4];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	int8 idtag[4];
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
	uint8 pad[2];
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
	int8 name[32];
	int8 mask[32];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xVec4 frustplane[12];
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
	void(*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
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
	uint32 parentID[2];
	float32 lifetime;
	float32 delay;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	float32 val[2];
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

int8 buffer[16];
int8 buffer[16];
uint32 sTableCount;
zLODTable* sTableList;
uint32 sManagerIndex;
uint32 sManagerCount;
zLODManager sManagerList[2048];
zGlobals globals;
xEnt*(*AddToLODList)(xEnt*, xScene*, void*);
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
	// Line 401, Address: 0x184f20, Func Offset: 0
	// Line 400, Address: 0x184f24, Func Offset: 0x4
	// Line 401, Address: 0x184f28, Func Offset: 0x8
	// Line 402, Address: 0x184f40, Func Offset: 0x20
	// Line 403, Address: 0x184f50, Func Offset: 0x30
	// Line 405, Address: 0x184f54, Func Offset: 0x34
	// Line 403, Address: 0x184f58, Func Offset: 0x38
	// Line 404, Address: 0x184f60, Func Offset: 0x40
	// Line 403, Address: 0x184f64, Func Offset: 0x44
	// Line 404, Address: 0x184f68, Func Offset: 0x48
	// Line 413, Address: 0x184f78, Func Offset: 0x58
	// Line 417, Address: 0x184f7c, Func Offset: 0x5c
	// Line 404, Address: 0x184f80, Func Offset: 0x60
	// Line 417, Address: 0x184f84, Func Offset: 0x64
	// Line 404, Address: 0x184f88, Func Offset: 0x68
	// Line 413, Address: 0x184f94, Func Offset: 0x74
	// Line 417, Address: 0x184f98, Func Offset: 0x78
	// Line 413, Address: 0x184f9c, Func Offset: 0x7c
	// Line 414, Address: 0x184fa8, Func Offset: 0x88
	// Line 417, Address: 0x184fb8, Func Offset: 0x98
	// Line 420, Address: 0x184fd0, Func Offset: 0xb0
	// Line 421, Address: 0x184ffc, Func Offset: 0xdc
	// Line 427, Address: 0x185010, Func Offset: 0xf0
	// Line 430, Address: 0x185020, Func Offset: 0x100
	// Line 433, Address: 0x185024, Func Offset: 0x104
	// Line 430, Address: 0x18502c, Func Offset: 0x10c
	// Line 433, Address: 0x185034, Func Offset: 0x114
	// Line 434, Address: 0x18504c, Func Offset: 0x12c
	// Line 435, Address: 0x185050, Func Offset: 0x130
	// Line 436, Address: 0x185058, Func Offset: 0x138
	// Line 437, Address: 0x185064, Func Offset: 0x144
	// Line 438, Address: 0x185068, Func Offset: 0x148
	// Line 441, Address: 0x185070, Func Offset: 0x150
	// Line 446, Address: 0x185078, Func Offset: 0x158
	// Line 448, Address: 0x185088, Func Offset: 0x168
	// Line 449, Address: 0x185090, Func Offset: 0x170
	// Line 450, Address: 0x185094, Func Offset: 0x174
	// Line 453, Address: 0x1850a0, Func Offset: 0x180
	// Line 454, Address: 0x1850a8, Func Offset: 0x188
	// Line 455, Address: 0x1850ac, Func Offset: 0x18c
	// Line 456, Address: 0x1850b4, Func Offset: 0x194
	// Line 455, Address: 0x1850b8, Func Offset: 0x198
	// Line 457, Address: 0x1850c4, Func Offset: 0x1a4
	// Line 460, Address: 0x1850f0, Func Offset: 0x1d0
	// Line 461, Address: 0x185110, Func Offset: 0x1f0
	// Line 462, Address: 0x185118, Func Offset: 0x1f8
	// Line 463, Address: 0x18511c, Func Offset: 0x1fc
	// Line 464, Address: 0x185128, Func Offset: 0x208
	// Line 465, Address: 0x185134, Func Offset: 0x214
	// Line 466, Address: 0x185138, Func Offset: 0x218
	// Line 467, Address: 0x185140, Func Offset: 0x220
	// Line 468, Address: 0x185148, Func Offset: 0x228
	// Line 469, Address: 0x18514c, Func Offset: 0x22c
	// Line 470, Address: 0x185158, Func Offset: 0x238
	// Line 471, Address: 0x185164, Func Offset: 0x244
	// Line 472, Address: 0x185168, Func Offset: 0x248
	// Line 480, Address: 0x185170, Func Offset: 0x250
	// Line 482, Address: 0x185178, Func Offset: 0x258
	// Line 483, Address: 0x185188, Func Offset: 0x268
	// Func End, Address: 0x1851a0, Func Offset: 0x280
}

// zLOD_Get__FP4xEnt
// Start address: 0x1851a0
zLODTable* zLOD_Get(xEnt* ent)
{
	uint32 i;
	// Line 289, Address: 0x1851a0, Func Offset: 0
	// Line 291, Address: 0x1851a4, Func Offset: 0x4
	// Line 292, Address: 0x1851ac, Func Offset: 0xc
	// Line 293, Address: 0x1851b4, Func Offset: 0x14
	// Line 296, Address: 0x1851b8, Func Offset: 0x18
	// Line 297, Address: 0x1851d4, Func Offset: 0x34
	// Line 299, Address: 0x1851f0, Func Offset: 0x50
	// Line 300, Address: 0x1851fc, Func Offset: 0x5c
	// Line 301, Address: 0x185200, Func Offset: 0x60
	// Line 304, Address: 0x185210, Func Offset: 0x70
	// Line 305, Address: 0x185218, Func Offset: 0x78
	// Func End, Address: 0x185220, Func Offset: 0x80
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
	// Line 189, Address: 0x185220, Func Offset: 0
	// Line 192, Address: 0x185228, Func Offset: 0x8
	// Line 196, Address: 0x185250, Func Offset: 0x30
	// Line 199, Address: 0x185258, Func Offset: 0x38
	// Line 201, Address: 0x185260, Func Offset: 0x40
	// Line 202, Address: 0x185264, Func Offset: 0x44
	// Line 201, Address: 0x185268, Func Offset: 0x48
	// Line 202, Address: 0x185270, Func Offset: 0x50
	// Line 203, Address: 0x185280, Func Offset: 0x60
	// Line 204, Address: 0x185284, Func Offset: 0x64
	// Line 203, Address: 0x185288, Func Offset: 0x68
	// Line 207, Address: 0x18529c, Func Offset: 0x7c
	// Line 212, Address: 0x1852a0, Func Offset: 0x80
	// Line 218, Address: 0x1852a8, Func Offset: 0x88
	// Line 222, Address: 0x1852ac, Func Offset: 0x8c
	// Line 218, Address: 0x1852b8, Func Offset: 0x98
	// Line 219, Address: 0x1852c8, Func Offset: 0xa8
	// Line 222, Address: 0x1852d8, Func Offset: 0xb8
	// Line 225, Address: 0x1852e8, Func Offset: 0xc8
	// Line 226, Address: 0x185314, Func Offset: 0xf4
	// Line 234, Address: 0x185328, Func Offset: 0x108
	// Line 237, Address: 0x185338, Func Offset: 0x118
	// Line 240, Address: 0x18533c, Func Offset: 0x11c
	// Line 237, Address: 0x185344, Func Offset: 0x124
	// Line 240, Address: 0x18534c, Func Offset: 0x12c
	// Line 241, Address: 0x185364, Func Offset: 0x144
	// Line 242, Address: 0x185368, Func Offset: 0x148
	// Line 243, Address: 0x185370, Func Offset: 0x150
	// Line 244, Address: 0x18537c, Func Offset: 0x15c
	// Line 245, Address: 0x185380, Func Offset: 0x160
	// Line 248, Address: 0x185388, Func Offset: 0x168
	// Line 253, Address: 0x185390, Func Offset: 0x170
	// Line 255, Address: 0x1853a0, Func Offset: 0x180
	// Line 256, Address: 0x1853a8, Func Offset: 0x188
	// Line 257, Address: 0x1853ac, Func Offset: 0x18c
	// Line 260, Address: 0x1853b8, Func Offset: 0x198
	// Line 261, Address: 0x1853c0, Func Offset: 0x1a0
	// Line 262, Address: 0x1853c4, Func Offset: 0x1a4
	// Line 263, Address: 0x1853cc, Func Offset: 0x1ac
	// Line 262, Address: 0x1853d0, Func Offset: 0x1b0
	// Line 264, Address: 0x1853dc, Func Offset: 0x1bc
	// Line 267, Address: 0x185408, Func Offset: 0x1e8
	// Line 268, Address: 0x185428, Func Offset: 0x208
	// Line 269, Address: 0x185430, Func Offset: 0x210
	// Line 270, Address: 0x185434, Func Offset: 0x214
	// Line 271, Address: 0x185440, Func Offset: 0x220
	// Line 272, Address: 0x18544c, Func Offset: 0x22c
	// Line 273, Address: 0x185450, Func Offset: 0x230
	// Line 274, Address: 0x185458, Func Offset: 0x238
	// Line 275, Address: 0x185460, Func Offset: 0x240
	// Line 276, Address: 0x185464, Func Offset: 0x244
	// Line 277, Address: 0x185470, Func Offset: 0x250
	// Line 278, Address: 0x18547c, Func Offset: 0x25c
	// Line 279, Address: 0x185480, Func Offset: 0x260
	// Line 284, Address: 0x185488, Func Offset: 0x268
	// Line 285, Address: 0x185494, Func Offset: 0x274
	// Func End, Address: 0x1854b0, Func Offset: 0x290
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
	// Line 122, Address: 0x1854b0, Func Offset: 0
	// Line 132, Address: 0x1854b4, Func Offset: 0x4
	// Line 122, Address: 0x1854b8, Func Offset: 0x8
	// Line 132, Address: 0x1854bc, Func Offset: 0xc
	// Line 122, Address: 0x1854c0, Func Offset: 0x10
	// Line 124, Address: 0x1854d0, Func Offset: 0x20
	// Line 125, Address: 0x1854d4, Func Offset: 0x24
	// Line 132, Address: 0x1854d8, Func Offset: 0x28
	// Line 133, Address: 0x1854e4, Func Offset: 0x34
	// Line 136, Address: 0x1854ec, Func Offset: 0x3c
	// Line 137, Address: 0x1854f8, Func Offset: 0x48
	// Line 138, Address: 0x18550c, Func Offset: 0x5c
	// Line 139, Address: 0x185510, Func Offset: 0x60
	// Line 138, Address: 0x185514, Func Offset: 0x64
	// Line 139, Address: 0x185518, Func Offset: 0x68
	// Line 138, Address: 0x18551c, Func Offset: 0x6c
	// Line 139, Address: 0x185520, Func Offset: 0x70
	// Line 140, Address: 0x18552c, Func Offset: 0x7c
	// Line 145, Address: 0x185534, Func Offset: 0x84
	// Line 147, Address: 0x185548, Func Offset: 0x98
	// Line 146, Address: 0x18554c, Func Offset: 0x9c
	// Line 147, Address: 0x185550, Func Offset: 0xa0
	// Line 148, Address: 0x185558, Func Offset: 0xa8
	// Line 149, Address: 0x185570, Func Offset: 0xc0
	// Line 150, Address: 0x185584, Func Offset: 0xd4
	// Line 151, Address: 0x185588, Func Offset: 0xd8
	// Line 150, Address: 0x185590, Func Offset: 0xe0
	// Line 151, Address: 0x185594, Func Offset: 0xe4
	// Line 155, Address: 0x1855a0, Func Offset: 0xf0
	// Line 156, Address: 0x1855c0, Func Offset: 0x110
	// Line 157, Address: 0x1855d8, Func Offset: 0x128
	// Line 158, Address: 0x1855e0, Func Offset: 0x130
	// Line 159, Address: 0x1855e8, Func Offset: 0x138
	// Line 160, Address: 0x1855f0, Func Offset: 0x140
	// Line 161, Address: 0x185600, Func Offset: 0x150
	// Line 163, Address: 0x185608, Func Offset: 0x158
	// Line 165, Address: 0x185614, Func Offset: 0x164
	// Line 166, Address: 0x185618, Func Offset: 0x168
	// Line 167, Address: 0x185630, Func Offset: 0x180
	// Line 168, Address: 0x185638, Func Offset: 0x188
	// Line 169, Address: 0x185640, Func Offset: 0x190
	// Line 170, Address: 0x185648, Func Offset: 0x198
	// Line 171, Address: 0x18565c, Func Offset: 0x1ac
	// Line 172, Address: 0x185668, Func Offset: 0x1b8
	// Line 176, Address: 0x18567c, Func Offset: 0x1cc
	// Line 172, Address: 0x185684, Func Offset: 0x1d4
	// Line 175, Address: 0x18568c, Func Offset: 0x1dc
	// Line 176, Address: 0x185698, Func Offset: 0x1e8
	// Line 177, Address: 0x1856a0, Func Offset: 0x1f0
	// Line 182, Address: 0x1856b8, Func Offset: 0x208
	// Line 183, Address: 0x1856d4, Func Offset: 0x224
	// Func End, Address: 0x1856f4, Func Offset: 0x244
}

// AddToLODList__FP4xEntP6xScenePv
// Start address: 0x185700
xEnt* AddToLODList(xEnt* ent)
{
	zEntDestructObj* destruct;
	// Line 91, Address: 0x185700, Func Offset: 0
	// Line 92, Address: 0x185714, Func Offset: 0x14
	// Line 93, Address: 0x18571c, Func Offset: 0x1c
	// Line 94, Address: 0x185724, Func Offset: 0x24
	// Line 97, Address: 0x185728, Func Offset: 0x28
	// Line 100, Address: 0x185730, Func Offset: 0x30
	// Line 105, Address: 0x185740, Func Offset: 0x40
	// Line 109, Address: 0x185744, Func Offset: 0x44
	// Line 110, Address: 0x18574c, Func Offset: 0x4c
	// Line 112, Address: 0x18575c, Func Offset: 0x5c
	// Line 113, Address: 0x185764, Func Offset: 0x64
	// Line 115, Address: 0x18576c, Func Offset: 0x6c
	// Line 117, Address: 0x185770, Func Offset: 0x70
	// Line 118, Address: 0x185778, Func Offset: 0x78
	// Func End, Address: 0x185788, Func Offset: 0x88
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
	// Line 42, Address: 0x185790, Func Offset: 0
	// Line 43, Address: 0x1857a8, Func Offset: 0x18
	// Line 45, Address: 0x1857b4, Func Offset: 0x24
	// Line 47, Address: 0x1857c8, Func Offset: 0x38
	// Line 48, Address: 0x1857e4, Func Offset: 0x54
	// Line 53, Address: 0x185800, Func Offset: 0x70
	// Line 55, Address: 0x185804, Func Offset: 0x74
	// Line 57, Address: 0x185810, Func Offset: 0x80
	// Line 56, Address: 0x185814, Func Offset: 0x84
	// Line 58, Address: 0x185818, Func Offset: 0x88
	// Line 61, Address: 0x185828, Func Offset: 0x98
	// Line 63, Address: 0x185834, Func Offset: 0xa4
	// Line 67, Address: 0x185838, Func Offset: 0xa8
	// Line 63, Address: 0x185844, Func Offset: 0xb4
	// Line 64, Address: 0x185850, Func Offset: 0xc0
	// Line 67, Address: 0x185860, Func Offset: 0xd0
	// Line 68, Address: 0x185874, Func Offset: 0xe4
	// Line 69, Address: 0x185880, Func Offset: 0xf0
	// Line 70, Address: 0x185898, Func Offset: 0x108
	// Line 71, Address: 0x1858a0, Func Offset: 0x110
	// Line 72, Address: 0x1858a4, Func Offset: 0x114
	// Line 77, Address: 0x1858b4, Func Offset: 0x124
	// Line 74, Address: 0x1858b8, Func Offset: 0x128
	// Line 77, Address: 0x1858bc, Func Offset: 0x12c
	// Line 75, Address: 0x1858c0, Func Offset: 0x130
	// Line 76, Address: 0x1858c4, Func Offset: 0x134
	// Line 77, Address: 0x1858c8, Func Offset: 0x138
	// Line 74, Address: 0x1858cc, Func Offset: 0x13c
	// Line 77, Address: 0x1858d0, Func Offset: 0x140
	// Line 75, Address: 0x1858d4, Func Offset: 0x144
	// Line 76, Address: 0x1858d8, Func Offset: 0x148
	// Line 74, Address: 0x1858e0, Func Offset: 0x150
	// Line 75, Address: 0x1858e4, Func Offset: 0x154
	// Line 74, Address: 0x1858e8, Func Offset: 0x158
	// Line 77, Address: 0x1858ec, Func Offset: 0x15c
	// Line 76, Address: 0x1858f0, Func Offset: 0x160
	// Line 74, Address: 0x1858f4, Func Offset: 0x164
	// Line 75, Address: 0x1858f8, Func Offset: 0x168
	// Line 76, Address: 0x185900, Func Offset: 0x170
	// Line 77, Address: 0x185908, Func Offset: 0x178
	// Line 78, Address: 0x185918, Func Offset: 0x188
	// Line 79, Address: 0x185920, Func Offset: 0x190
	// Line 82, Address: 0x185928, Func Offset: 0x198
	// Line 83, Address: 0x185938, Func Offset: 0x1a8
	// Func End, Address: 0x185958, Func Offset: 0x1c8
}

