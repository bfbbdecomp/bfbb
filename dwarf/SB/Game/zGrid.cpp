typedef struct xBaseAsset;
typedef struct RwObjectHasFrame;
typedef struct xModelPool;
typedef struct xScene;
typedef struct xAnimFile;
typedef struct xPortalAsset;
typedef struct RwResEntry;
typedef struct xShadowSimpleCache;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct xEntCollis;
typedef struct rxHeapFreeBlock;
typedef struct RpGeometry;
typedef struct xAnimEffect;
typedef struct xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct zScene;
typedef struct xAnimTransitionList;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct RpWorld;
typedef struct RpLight;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntFrame;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct xCollis;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xBound;
typedef struct xJSPHeader;
typedef struct xQuat;
typedef enum RpWorldRenderOrder;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct rxHeapBlockHeader;
typedef struct RpTriangle;
typedef struct xFFX;
typedef struct RwFrame;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct RxPipelineRequiresCluster;
typedef struct RpSector;
typedef struct xGrid;
typedef struct xModelBucket;
typedef struct xQCData;
typedef struct RpMeshHeader;
typedef struct xBBox;
typedef struct xEntShadow;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct anim_coll_data;
typedef struct xLightKit;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xAnimTable;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xGridBound;
typedef struct xClumpCollBSPTree;
typedef struct zEnt;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef enum RxNodeDefEditable;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct RwLLLink;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEnvAsset;
typedef struct _class_0;
typedef struct xBox;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef enum RxClusterForcePresent;
typedef struct xLinkAsset;
typedef struct xCylinder;
typedef struct _zPortal;
typedef struct RxClusterDefinition;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef union _class_1;
typedef struct RwSphere;
typedef struct RpPolygon;
typedef struct RwTexDictionary;
typedef struct _class_2;
typedef struct RxOutputSpec;
typedef struct RpMaterialList;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xJSPNodeInfo;
typedef struct RwObject;
typedef struct xEntAsset;
typedef struct RxIoSpec;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxCluster;
typedef struct xEnv;
typedef struct _zEnv;
typedef struct xShadowSimplePoly;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef void(*type_0)(xEnt*, xScene*, float32);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_5)(xEnt*, xVec3*);
typedef void(*type_6)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_7)(xEnt*);
typedef uint32(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_9)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef uint32(*type_11)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_13)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_19)(xAnimPlay*, xAnimState*);
typedef int32(*type_20)(RxNodeDefinition*);
typedef void(*type_21)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_22)(RxNodeDefinition*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_24)(RxPipelineNode*);
typedef RpWorldSector*(*type_25)(RpWorldSector*);
typedef xBase*(*type_28)(uint32);
typedef int8*(*type_30)(xBase*);
typedef int8*(*type_31)(uint32);
typedef uint32(*type_32)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_41)(RpClump*, void*);
typedef void(*type_42)(xMemPool*, void*);
typedef int32(*type_43)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_50)(RwResEntry*);

typedef float32 type_2[16];
typedef RpLight* type_12[2];
typedef RwFrame* type_15[2];
typedef RwTexCoords* type_17[8];
typedef xVec3 type_18[4];
typedef uint8 type_26[3];
typedef xCollis type_27[18];
typedef uint32 type_29[25];
typedef float32 type_33[2];
typedef uint8 type_34[3];
typedef uint32 type_35[4];
typedef float32 type_36[4];
typedef float32 type_37[2];
typedef uint16 type_38[3];
typedef uint8 type_39[2];
typedef xAnimMultiFileEntry type_40[1];
typedef int8 type_44[32];
typedef uint32 type_45[72];
typedef RwTexCoords* type_46[8];
typedef int8 type_47[4];
typedef int8 type_48[32];
typedef xBase* type_49[72];
typedef xVec3 type_51[3];
typedef uint16 type_52[3];
typedef RxCluster type_53[1];

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	type_28 resolvID;
	type_30 base2Name;
	type_31 id2Name;
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
	type_39 NumAnims;
	void** RawData;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_50 destroyNotify;
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
	type_18 corner;
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
	type_23 BeforeAnimMatrices;
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
	type_27 colls;
	type_4 post;
	type_11 depenq;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_17 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_32 Callback;
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
	type_0 update;
	type_0 endUpdate;
	type_5 bupdate;
	type_6 move;
	type_7 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_13 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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
	type_10 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_12 light;
	type_15 light_frame;
	int32 memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_8 Conditional;
	type_8 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_45 baseCount;
	type_49 baseList;
	_zEnv* zen;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_19 BeforeEnter;
	type_21 StateCallback;
	type_23 BeforeAnimMatrices;
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
	type_25 renderCallBack;
	RxPipeline* pipeline;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_41 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
		tri_data tri;
	};
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_43 eventFunc;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_34 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xJSPHeader
{
	type_47 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct RpTriangle
{
	type_52 vertIndex;
	int16 matIndex;
};

struct xFFX
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

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_40 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_44 name;
	type_48 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_2 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpSector
{
	int32 type;
};

struct xGrid
{
	uint8 ingrid_id;
	type_26 pad;
	uint16 nx;
	uint16 nz;
	float32 minx;
	float32 minz;
	float32 maxx;
	float32 maxz;
	float32 csizex;
	float32 csizez;
	float32 inv_csizex;
	float32 inv_csizez;
	float32 maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_37 radius;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_46 texCoords;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct anim_coll_data
{
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct rxReq
{
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct _class_0
{
	xVec3* verts;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_33 BilinearLerp;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_36 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpPolygon
{
	uint16 matIndex;
	type_38 vertIndex;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_42 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RxNodeMethods
{
	type_16 nodeBody;
	type_20 nodeInit;
	type_22 nodeTerm;
	type_24 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_9 pipelineNodeConfig;
	type_14 configMsgHandler;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_53 clusters;
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

xGrid colls_grid;
xGrid colls_oso_grid;
xGrid npcs_grid;
int32 zGridInitted;
int32 gGridIterActive;

void zGridUpdateEnt(xEnt* ent);
void zGridExit();
void zGridInit(zScene* s);
void zGridReset(zScene* s);
void hack_flag_shadows(zScene* s);

// zGridUpdateEnt__FP4xEnt
// Start address: 0x306050
void zGridUpdateEnt(xEnt* ent)
{
	int32 oversize;
	xGrid* grid;
}

// zGridExit__FP6zScene
// Start address: 0x306200
void zGridExit()
{
}

// zGridInit__FP6zScene
// Start address: 0x306240
void zGridInit(zScene* s)
{
	xBox* ebox;
	float32 min_csize;
	xBox osobox;
}

// zGridReset__FP6zScene
// Start address: 0x306950
void zGridReset(zScene* s)
{
	uint32 i;
	xBase* base;
	xEnt* ent;
}

// hack_flag_shadows__FP6zScene
// Start address: 0x306a60
void hack_flag_shadows(zScene* s)
{
	uint32* end_special_models;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	uint32* id;
	type_29 special_models;
	int8 @3381;
}

