typedef struct xScene;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xModelInstance;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xQuat;
typedef struct xEnt;
typedef struct xAnimTransition;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xShadowSimpleCache;
typedef struct _class_0;
typedef struct RpMaterialList;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct RpMaterial;
typedef struct RpCollisionTriangle;
typedef struct xRay3;
typedef struct RpAtomic;
typedef struct RpLight;
typedef struct xQCData;
typedef struct RxPipeline;
typedef struct xEntFrame;
typedef union _class_1;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct xCollis;
typedef struct RpClump;
typedef struct xBound;
typedef struct RpGeometry;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RpWorldSector;
typedef struct RwMatrixTag;
typedef struct xEnv;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RpIntersection;
typedef struct RwRaster;
typedef struct RpMorphTarget;
typedef struct xFFX;
typedef enum RxClusterValidityReq;
typedef struct xGrid;
typedef struct iEnv;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xJSPNodeInfo;
typedef struct xMemPool;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xEntShadow;
typedef enum RxClusterValid;
typedef struct xBox;
typedef struct xNearFloorPoly;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct rxHeapFreeBlock;
typedef struct anim_coll_data;
typedef struct xRot;
typedef struct cb_ray_hits_ent;
typedef struct xClumpCollBSPBranchNode;
typedef enum rxEmbeddedPacketState;
typedef struct xLinkAsset;
typedef struct xSphere;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef struct xBase;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xJSPHeader;
typedef struct xAnimTransitionList;
typedef struct RxClusterDefinition;
typedef struct xQCControl;
typedef struct xClumpCollBSPTree;
typedef struct RwSphere;
typedef struct xLine3;
typedef struct RwTexDictionary;
typedef enum RpIntersectType;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef enum RpWorldRenderOrder;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RxIoSpec;
typedef struct RpSector;
typedef struct RpWorld;
typedef struct RwLine;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xModelBucket;
typedef struct RxPipelineCluster;
typedef union RpIntersectData;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct xEntAsset;
typedef struct xAnimMultiFileEntry;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xBaseAsset;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct xGridIterator;
typedef struct tri_data;
typedef struct xShadowSimplePoly;
typedef struct _class_2;
typedef struct xClumpCollBSPVertInfo;
typedef struct xBBox;
typedef struct RpInterpolator;

typedef void(*type_4)(xEnt*, xScene*, float32);
typedef uint32(*type_6)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_9)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_10)(xEnt*, xVec3*);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_13)(xEnt*, xScene*, float32, xEntFrame*);
typedef int32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(xEnt*);
typedef void(*type_16)(xEnt*);
typedef void(*type_17)(RxNodeDefinition*);
typedef xEnt*(*type_18)(xEnt*, xScene*, void*);
typedef int32(*type_19)(RxPipelineNode*);
typedef void(*type_20)(RxPipelineNode*);
typedef uint32(*type_21)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_22)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_25)(RpClump*, void*);
typedef uint32(*type_26)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_27)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_31)(xEnt*, void*);
typedef xBase*(*type_36)(uint32);
typedef RpAtomic*(*type_37)(RpAtomic*);
typedef uint32(*type_39)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_41)(xBase*);
typedef void(*type_43)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef int8*(*type_45)(uint32);
typedef int32(*type_48)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_50)(xMemPool*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef void(*type_56)(RwResEntry*);
typedef void(*type_57)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RpCollisionTriangle*(*type_58)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_61)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RwObjectHasFrame*(*type_62)(RwObjectHasFrame*);

typedef float32 type_0[3];
typedef RwV3d* type_1[3];
typedef uint8 type_2[2];
typedef float32 type_3[3];
typedef xAnimMultiFileEntry type_5[1];
typedef float32 type_8[16];
typedef uint16 type_12[3];
typedef xVec3 type_28[4];
typedef RwTexCoords* type_30[8];
typedef uint8 type_32[3];
typedef xVec3 type_33[3];
typedef uint16 type_34[3];
typedef xCollis type_35[18];
typedef int8 type_38[4];
typedef xVec3 type_40[3];
typedef xVec3 type_42[4];
typedef uint32 type_44[4];
typedef float32 type_46[4];
typedef RwTexCoords* type_47[8];
typedef float32 type_49[2];
typedef RpLight* type_52[2];
typedef int8 type_53[32];
typedef RwFrame* type_54[2];
typedef int8 type_55[32];
typedef RxCluster type_59[1];
typedef xVec3 type_60[3];
typedef float32 type_63[2];
typedef xVec3 type_64[3];
typedef uint8 type_65[3];

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
	type_36 resolvID;
	type_41 base2Name;
	type_45 id2Name;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	_class_2 anim_coll;
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
	type_24 BeforeEnter;
	type_7 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_5 Files;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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
	type_29 BeforeAnimMatrices;
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
	type_8 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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
	type_10 bupdate;
	type_13 move;
	type_16 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_23 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_39 Conditional;
	type_39 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_63 BilinearLerp;
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

struct RpPolygon
{
	uint16 matIndex;
	type_12 vertIndex;
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
	type_44 pad;
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
	type_28 corner;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	type_35 colls;
	type_9 post;
	type_21 depenq;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_1 vertices;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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
	type_37 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_26 Callback;
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
		tri_data tri;
	};
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_25 callback;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_32 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_47 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_30 texCoords;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xFFX
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xGrid
{
	uint8 ingrid_id;
	type_65 pad;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_52 light;
	type_54 light_frame;
	int32 memlvl;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_50 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_49 radius;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xNearFloorPoly
{
	xBox box;
	xVec3 center;
	xVec3 facingVec;
	float32 facingDot;
	float32 floorDot;
	type_33 vert;
	float32 neardist;
	xVec3 nearpt;
	int32 nearvert;
	int32 nearedge;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_56 destroyNotify;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct anim_coll_data
{
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct cb_ray_hits_ent
{
	xRay3& ray;
	xCollis& coll;
	uint8 chkby;
	uint8 collType;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_46 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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
	type_2 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_34 vertIndex;
	int16 matIndex;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_48 eventFunc;
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

struct xJSPHeader
{
	type_38 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xLine3
{
	xVec3 p1;
	xVec3 p2;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_53 name;
	type_55 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xSurface
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

struct RpSector
{
	int32 type;
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
	type_51 renderCallBack;
	RxPipeline* pipeline;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_14 nodeInit;
	type_17 nodeTerm;
	type_19 pipelineNodeInit;
	type_20 pipelineNodeTerm;
	type_22 pipelineNodeConfig;
	type_6 configMsgHandler;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_62 sync;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	uint32 delfound;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xShadowSimplePoly
{
	type_64 vert;
	xVec3 norm;
};

struct _class_2
{
	xVec3* verts;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

int8* g_xScene_FMT;
xScene* g_xSceneCur;
type_15 cb_seethru_func;
uint8 cb_collType;
xMat4x3* sBoxTestMat;
uint8 sUseJSP;
void* sTestOPtr;
xModelInstance* sTestMPtr;
xBound sNearestBound;
uint8 sNearestChk;
uint8 sNearestCollType;
RpIntersection sSphereIsx;
type_58 sectorNearestFloorCB;
type_31 gridNearestFloorCB;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
type_27 boxNearestFloorCB;
xGrid npcs_grid;
type_61 xRayHitsEnt;
type_57 xRayHitsTikiLandableEnt;
int32 gGridIterActive;
uint32 gActiveHeap;

uint32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, uint8 collType, uint8 chk);
int32 gridNearestFloorCB(xEnt* ent, void* cbdata);
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data);
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data);
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data);
uint32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox);
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, uint8 collType, uint8 chk);
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, type_43 rentcb, xQCData* qcr, void* data);
void xSceneForAllNPCs(xScene* sc, type_18 func, void* data);
void xSceneForAllDynamics(xScene* sc, type_18 func, void* data);
void xSceneForAllStatics(xScene* sc, type_18 func, void* data);
void xSceneForAllEnts(xScene* sc, type_18 func, void* data);
int8* xSceneID2Name(xScene* sc, uint32 id);
xBase* xSceneResolvID(xScene* sc, uint32 id);
void xSceneAddEnt(xScene* sc, xEnt* ent);
void xSceneSetup(xScene* sc);
void xSceneLoad();
void xSceneSave();
void xSceneExit();
void xSceneInit(xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs);

// xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc
// Start address: 0x1fd4a0
uint32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, uint8 collType, uint8 chk)
{
	RpIntersection isx;
}

// gridNearestFloorCB__FP4xEntPv
// Start address: 0x1fd810
int32 gridNearestFloorCB(xEnt* ent, void* cbdata)
{
	xNearFloorPoly* nfpoly;
	xCollis tempC;
}

// sectorNearestFloorCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1fd940
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data)
{
}

// boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fd950
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data)
{
	xNearFloorPoly* nfpoly;
	type_40 xformVert;
}

// nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fdc40
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data)
{
	xNearFloorPoly* nfpoly;
	float32 currnear;
	int32 currvert;
	int32 curredge;
	type_42 xformVert;
	xVec3 xformNorm;
	uint32 potentialOID;
	int32 i;
	type_0 pdx;
	type_3 pdz;
	float32 numer;
	float32 denom;
	float32 t;
	float32 testdist2;
	float32 neardx;
	float32 neardz;
}

// Mgc_TriBoxTest__FP5xVec3P4xBox
// Start address: 0x1fe420
uint32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox)
{
	float32 fMin0;
	float32 fMax0;
	float32 fMin1;
	float32 fMax1;
	xVec3 kD;
	type_60 akE;
	xVec3 baxis;
	uint32 andflag;
	uint32 curflag;
	int32 i;
	int32 i0;
	int32 i1;
}

// xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
// Start address: 0x1fe910
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, uint8 collType, uint8 chk)
{
	cb_ray_hits_ent cb;
	xBound bound;
	xCollis temp_coll;
}

// xRayHitsScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fecf0
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
}

// xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fee30
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
}

// xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1fef70
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
}

// xRayHitsTikiLandableEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1ff020
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
}

// xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
// Start address: 0x1ff120
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, type_43 rentcb, xQCData* qcr, void* data)
{
	xLine3 ln;
	xGridIterator it;
	xVec3 delta;
	float32 len;
	int32 sclgx;
	int32 sclgz;
	int32 eclgx;
	int32 eclgz;
	float32 sclcx;
	float32 sclcz;
	float32 eclcx;
	float32 eclcz;
	float32 halfclx;
	float32 halfclz;
	float32 quatrclx;
	float32 quatrclz;
	int32 sz;
	int32 ez;
	int32 x;
	int32 z;
	float32 dxdz;
	float32 cz;
	float32 lz;
	float32 rz;
	float32 lx;
	float32 rx;
	float32 ly;
	float32 ry;
	int32 aclgx;
	int32 aclgz;
	int32 bclgx;
	int32 bclgz;
	float32 aclcx;
	float32 aclcz;
	float32 bclcx;
	float32 bclcz;
	int32 ax;
	int32 bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	float32 cz;
	float32 lz;
	float32 rz;
	float32 lx;
	float32 rx;
	float32 ly;
	float32 ry;
	int32 aclgx;
	int32 aclgz;
	int32 bclgx;
	int32 bclgz;
	float32 aclcx;
	float32 aclcz;
	float32 bclcx;
	float32 bclcz;
	int32 ax;
	int32 bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
}

// xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2000d0
void xSceneForAllNPCs(xScene* sc, type_18 func, void* data)
{
	uint16 i;
}

// xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200170
void xSceneForAllDynamics(xScene* sc, type_18 func, void* data)
{
	uint16 i;
}

// xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200210
void xSceneForAllStatics(xScene* sc, type_18 func, void* data)
{
	uint16 i;
}

// xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2002b0
void xSceneForAllEnts(xScene* sc, type_18 func, void* data)
{
	uint16 i;
}

// xSceneID2Name__FP6xSceneUi
// Start address: 0x200350
int8* xSceneID2Name(xScene* sc, uint32 id)
{
}

// xSceneResolvID__FP6xSceneUi
// Start address: 0x200390
xBase* xSceneResolvID(xScene* sc, uint32 id)
{
}

// xSceneAddEnt__FP6xSceneP4xEnt
// Start address: 0x2003d0
void xSceneAddEnt(xScene* sc, xEnt* ent)
{
}

// xSceneSetup__FP6xScene
// Start address: 0x2004b0
void xSceneSetup(xScene* sc)
{
}

// xSceneLoad__FP6xSceneP7xSerial
// Start address: 0x2004c0
void xSceneLoad()
{
}

// xSceneSave__FP6xSceneP7xSerial
// Start address: 0x2004d0
void xSceneSave()
{
}

// xSceneExit__FP6xScene
// Start address: 0x2004e0
void xSceneExit()
{
}

// xSceneInit__FP6xSceneUsUsUsUs
// Start address: 0x2004f0
void xSceneInit(xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs)
{
}

