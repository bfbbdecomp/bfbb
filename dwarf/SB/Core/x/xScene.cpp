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
typedef struct _class_1;
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
typedef struct RpIntersectData;
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	RwV3d* vertices[3];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	RpClump*(*callback)(RpClump*, void*);
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
	uint8 pad[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	void(*InitCB)(xMemPool*, void*);
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
	float32 radius[2];
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
	xVec3 vert[3];
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
	void(*destroyNotify)(RwResEntry*);
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
	float32 param[4];
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
	uint8 NumAnims[2];
	void** RawData;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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
	int8 idtag[4];
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
	int8 name[32];
	int8 mask[32];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
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

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	xVec3 vert[3];
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
void(*cb_seethru_func)(xEnt*);
uint8 cb_collType;
xMat4x3* sBoxTestMat;
uint8 sUseJSP;
void* sTestOPtr;
xModelInstance* sTestMPtr;
xBound sNearestBound;
uint8 sNearestChk;
uint8 sNearestCollType;
RpIntersection sSphereIsx;
RpCollisionTriangle*(*sectorNearestFloorCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
int32(*gridNearestFloorCB)(xEnt*, void*);
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
RpCollisionTriangle*(*boxNearestFloorCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
xGrid npcs_grid;
void(*xRayHitsEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);
void(*xRayHitsTikiLandableEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);
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
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, void(*rentcb)(xScene*, xRay3*, xQCData*, xEnt*, void*), xQCData* qcr, void* data);
void xSceneForAllNPCs(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllDynamics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllStatics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
void xSceneForAllEnts(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data);
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
	// Line 1526, Address: 0x1fd4a0, Func Offset: 0
	// Line 1534, Address: 0x1fd4a4, Func Offset: 0x4
	// Line 1526, Address: 0x1fd4a8, Func Offset: 0x8
	// Line 1533, Address: 0x1fd4ac, Func Offset: 0xc
	// Line 1526, Address: 0x1fd4b0, Func Offset: 0x10
	// Line 1533, Address: 0x1fd4b4, Func Offset: 0x14
	// Line 1526, Address: 0x1fd4b8, Func Offset: 0x18
	// Line 1537, Address: 0x1fd4c4, Func Offset: 0x24
	// Line 1526, Address: 0x1fd4c8, Func Offset: 0x28
	// Line 1534, Address: 0x1fd4d4, Func Offset: 0x34
	// Line 1533, Address: 0x1fd4d8, Func Offset: 0x38
	// Line 1534, Address: 0x1fd4dc, Func Offset: 0x3c
	// Line 1535, Address: 0x1fd4e4, Func Offset: 0x44
	// Line 1534, Address: 0x1fd4e8, Func Offset: 0x48
	// Line 1535, Address: 0x1fd4f8, Func Offset: 0x58
	// Line 1537, Address: 0x1fd504, Func Offset: 0x64
	// Line 1534, Address: 0x1fd508, Func Offset: 0x68
	// Line 1537, Address: 0x1fd524, Func Offset: 0x84
	// Line 1534, Address: 0x1fd528, Func Offset: 0x88
	// Line 1537, Address: 0x1fd52c, Func Offset: 0x8c
	// Line 1534, Address: 0x1fd530, Func Offset: 0x90
	// Line 1535, Address: 0x1fd538, Func Offset: 0x98
	// Line 1537, Address: 0x1fd598, Func Offset: 0xf8
	// Line 1546, Address: 0x1fd5a0, Func Offset: 0x100
	// Line 1545, Address: 0x1fd5a4, Func Offset: 0x104
	// Line 1546, Address: 0x1fd5a8, Func Offset: 0x108
	// Line 1545, Address: 0x1fd5ac, Func Offset: 0x10c
	// Line 1551, Address: 0x1fd5b0, Func Offset: 0x110
	// Line 1546, Address: 0x1fd5b4, Func Offset: 0x114
	// Line 1547, Address: 0x1fd5c0, Func Offset: 0x120
	// Line 1550, Address: 0x1fd5c8, Func Offset: 0x128
	// Line 1557, Address: 0x1fd5cc, Func Offset: 0x12c
	// Line 1551, Address: 0x1fd5d0, Func Offset: 0x130
	// Line 1546, Address: 0x1fd5d8, Func Offset: 0x138
	// Line 1557, Address: 0x1fd5e0, Func Offset: 0x140
	// Line 1546, Address: 0x1fd5e4, Func Offset: 0x144
	// Line 1567, Address: 0x1fd5e8, Func Offset: 0x148
	// Line 1546, Address: 0x1fd5ec, Func Offset: 0x14c
	// Line 1547, Address: 0x1fd5fc, Func Offset: 0x15c
	// Line 1550, Address: 0x1fd620, Func Offset: 0x180
	// Line 1554, Address: 0x1fd630, Func Offset: 0x190
	// Line 1550, Address: 0x1fd634, Func Offset: 0x194
	// Line 1554, Address: 0x1fd638, Func Offset: 0x198
	// Line 1550, Address: 0x1fd63c, Func Offset: 0x19c
	// Line 1554, Address: 0x1fd64c, Func Offset: 0x1ac
	// Line 1551, Address: 0x1fd678, Func Offset: 0x1d8
	// Line 1557, Address: 0x1fd69c, Func Offset: 0x1fc
	// Line 1558, Address: 0x1fd6a0, Func Offset: 0x200
	// Line 1561, Address: 0x1fd6c4, Func Offset: 0x224
	// Line 1562, Address: 0x1fd6c8, Func Offset: 0x228
	// Line 1567, Address: 0x1fd6cc, Func Offset: 0x22c
	// Line 1570, Address: 0x1fd6d4, Func Offset: 0x234
	// Line 1568, Address: 0x1fd6f8, Func Offset: 0x258
	// Line 1570, Address: 0x1fd6fc, Func Offset: 0x25c
	// Line 1571, Address: 0x1fd704, Func Offset: 0x264
	// Line 1572, Address: 0x1fd72c, Func Offset: 0x28c
	// Line 1652, Address: 0x1fd730, Func Offset: 0x290
	// Line 1653, Address: 0x1fd73c, Func Offset: 0x29c
	// Line 1654, Address: 0x1fd740, Func Offset: 0x2a0
	// Line 1656, Address: 0x1fd744, Func Offset: 0x2a4
	// Line 1658, Address: 0x1fd750, Func Offset: 0x2b0
	// Line 1662, Address: 0x1fd75c, Func Offset: 0x2bc
	// Line 1660, Address: 0x1fd760, Func Offset: 0x2c0
	// Line 1662, Address: 0x1fd764, Func Offset: 0x2c4
	// Line 1668, Address: 0x1fd784, Func Offset: 0x2e4
	// Line 1669, Address: 0x1fd790, Func Offset: 0x2f0
	// Line 1682, Address: 0x1fd7a8, Func Offset: 0x308
	// Line 1669, Address: 0x1fd7ac, Func Offset: 0x30c
	// Line 1682, Address: 0x1fd7b0, Func Offset: 0x310
	// Line 1685, Address: 0x1fd7c8, Func Offset: 0x328
	// Line 1686, Address: 0x1fd7d8, Func Offset: 0x338
	// Line 1688, Address: 0x1fd7e4, Func Offset: 0x344
	// Line 1689, Address: 0x1fd7e8, Func Offset: 0x348
	// Line 1691, Address: 0x1fd7f0, Func Offset: 0x350
	// Func End, Address: 0x1fd810, Func Offset: 0x370
}

// gridNearestFloorCB__FP4xEntPv
// Start address: 0x1fd810
int32 gridNearestFloorCB(xEnt* ent, void* cbdata)
{
	xNearFloorPoly* nfpoly;
	xCollis tempC;
	// Line 1482, Address: 0x1fd810, Func Offset: 0
	// Line 1484, Address: 0x1fd824, Func Offset: 0x14
	// Line 1485, Address: 0x1fd834, Func Offset: 0x24
	// Line 1486, Address: 0x1fd83c, Func Offset: 0x2c
	// Line 1487, Address: 0x1fd840, Func Offset: 0x30
	// Line 1488, Address: 0x1fd854, Func Offset: 0x44
	// Line 1489, Address: 0x1fd85c, Func Offset: 0x4c
	// Line 1490, Address: 0x1fd860, Func Offset: 0x50
	// Line 1491, Address: 0x1fd874, Func Offset: 0x64
	// Line 1492, Address: 0x1fd87c, Func Offset: 0x6c
	// Line 1497, Address: 0x1fd880, Func Offset: 0x70
	// Line 1498, Address: 0x1fd898, Func Offset: 0x88
	// Line 1499, Address: 0x1fd8a8, Func Offset: 0x98
	// Line 1501, Address: 0x1fd8b0, Func Offset: 0xa0
	// Line 1503, Address: 0x1fd8c0, Func Offset: 0xb0
	// Line 1504, Address: 0x1fd8c8, Func Offset: 0xb8
	// Line 1508, Address: 0x1fd8e0, Func Offset: 0xd0
	// Line 1510, Address: 0x1fd8f8, Func Offset: 0xe8
	// Line 1509, Address: 0x1fd908, Func Offset: 0xf8
	// Line 1510, Address: 0x1fd910, Func Offset: 0x100
	// Line 1519, Address: 0x1fd91c, Func Offset: 0x10c
	// Line 1520, Address: 0x1fd920, Func Offset: 0x110
	// Line 1521, Address: 0x1fd928, Func Offset: 0x118
	// Func End, Address: 0x1fd93c, Func Offset: 0x12c
}

// sectorNearestFloorCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1fd940
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data)
{
	// Line 1478, Address: 0x1fd940, Func Offset: 0
	// Func End, Address: 0x1fd94c, Func Offset: 0xc
}

// boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fd950
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float32 distance, void* data)
{
	xNearFloorPoly* nfpoly;
	xVec3 xformVert[3];
	// Line 1441, Address: 0x1fd950, Func Offset: 0
	// Line 1444, Address: 0x1fd974, Func Offset: 0x24
	// Line 1446, Address: 0x1fd978, Func Offset: 0x28
	// Line 1447, Address: 0x1fd980, Func Offset: 0x30
	// Line 1448, Address: 0x1fd99c, Func Offset: 0x4c
	// Line 1447, Address: 0x1fd9a0, Func Offset: 0x50
	// Line 1448, Address: 0x1fd9a4, Func Offset: 0x54
	// Line 1447, Address: 0x1fd9a8, Func Offset: 0x58
	// Line 1448, Address: 0x1fd9ac, Func Offset: 0x5c
	// Line 1447, Address: 0x1fd9b0, Func Offset: 0x60
	// Line 1449, Address: 0x1fd9b4, Func Offset: 0x64
	// Line 1447, Address: 0x1fd9b8, Func Offset: 0x68
	// Line 1449, Address: 0x1fd9bc, Func Offset: 0x6c
	// Line 1447, Address: 0x1fd9c0, Func Offset: 0x70
	// Line 1449, Address: 0x1fd9c4, Func Offset: 0x74
	// Line 1447, Address: 0x1fd9c8, Func Offset: 0x78
	// Line 1448, Address: 0x1fda40, Func Offset: 0xf0
	// Line 1449, Address: 0x1fdae0, Func Offset: 0x190
	// Line 1450, Address: 0x1fdb7c, Func Offset: 0x22c
	// Line 1451, Address: 0x1fdb88, Func Offset: 0x238
	// Line 1452, Address: 0x1fdba4, Func Offset: 0x254
	// Line 1453, Address: 0x1fdbc0, Func Offset: 0x270
	// Line 1454, Address: 0x1fdbdc, Func Offset: 0x28c
	// Line 1457, Address: 0x1fdbe0, Func Offset: 0x290
	// Line 1464, Address: 0x1fdbf4, Func Offset: 0x2a4
	// Line 1465, Address: 0x1fdc0c, Func Offset: 0x2bc
	// Line 1466, Address: 0x1fdc10, Func Offset: 0x2c0
	// Line 1467, Address: 0x1fdc18, Func Offset: 0x2c8
	// Func End, Address: 0x1fdc34, Func Offset: 0x2e4
}

// nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fdc40
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data)
{
	xNearFloorPoly* nfpoly;
	float32 currnear;
	int32 currvert;
	int32 curredge;
	xVec3 xformVert[4];
	xVec3 xformNorm;
	uint32 potentialOID;
	int32 i;
	float32 pdx[3];
	float32 pdz[3];
	float32 numer;
	float32 denom;
	float32 t;
	float32 testdist2;
	float32 neardx;
	float32 neardz;
	// Line 1280, Address: 0x1fdc40, Func Offset: 0
	// Line 1292, Address: 0x1fdc80, Func Offset: 0x40
	// Line 1283, Address: 0x1fdc84, Func Offset: 0x44
	// Line 1292, Address: 0x1fdc88, Func Offset: 0x48
	// Line 1295, Address: 0x1fdc94, Func Offset: 0x54
	// Line 1296, Address: 0x1fdca4, Func Offset: 0x64
	// Line 1297, Address: 0x1fdcac, Func Offset: 0x6c
	// Line 1298, Address: 0x1fdcb0, Func Offset: 0x70
	// Line 1299, Address: 0x1fdcb4, Func Offset: 0x74
	// Line 1300, Address: 0x1fdcc0, Func Offset: 0x80
	// Line 1304, Address: 0x1fdccc, Func Offset: 0x8c
	// Line 1305, Address: 0x1fdcd4, Func Offset: 0x94
	// Line 1306, Address: 0x1fdcf0, Func Offset: 0xb0
	// Line 1305, Address: 0x1fdcf4, Func Offset: 0xb4
	// Line 1306, Address: 0x1fdcf8, Func Offset: 0xb8
	// Line 1305, Address: 0x1fdcfc, Func Offset: 0xbc
	// Line 1306, Address: 0x1fdd00, Func Offset: 0xc0
	// Line 1305, Address: 0x1fdd04, Func Offset: 0xc4
	// Line 1307, Address: 0x1fdd08, Func Offset: 0xc8
	// Line 1305, Address: 0x1fdd0c, Func Offset: 0xcc
	// Line 1307, Address: 0x1fdd10, Func Offset: 0xd0
	// Line 1305, Address: 0x1fdd14, Func Offset: 0xd4
	// Line 1307, Address: 0x1fdd18, Func Offset: 0xd8
	// Line 1305, Address: 0x1fdd1c, Func Offset: 0xdc
	// Line 1308, Address: 0x1fdd20, Func Offset: 0xe0
	// Line 1305, Address: 0x1fdd24, Func Offset: 0xe4
	// Line 1309, Address: 0x1fdd2c, Func Offset: 0xec
	// Line 1305, Address: 0x1fdd34, Func Offset: 0xf4
	// Line 1306, Address: 0x1fdda0, Func Offset: 0x160
	// Line 1307, Address: 0x1fde40, Func Offset: 0x200
	// Line 1308, Address: 0x1fdee0, Func Offset: 0x2a0
	// Line 1309, Address: 0x1fdf48, Func Offset: 0x308
	// Line 1310, Address: 0x1fdf50, Func Offset: 0x310
	// Line 1311, Address: 0x1fdf58, Func Offset: 0x318
	// Line 1312, Address: 0x1fdf5c, Func Offset: 0x31c
	// Line 1313, Address: 0x1fdf64, Func Offset: 0x324
	// Line 1314, Address: 0x1fdf6c, Func Offset: 0x32c
	// Line 1311, Address: 0x1fdf70, Func Offset: 0x330
	// Line 1312, Address: 0x1fdf88, Func Offset: 0x348
	// Line 1313, Address: 0x1fdfa4, Func Offset: 0x364
	// Line 1314, Address: 0x1fdfc0, Func Offset: 0x380
	// Line 1318, Address: 0x1fdfd8, Func Offset: 0x398
	// Line 1319, Address: 0x1fdfec, Func Offset: 0x3ac
	// Line 1320, Address: 0x1fdff4, Func Offset: 0x3b4
	// Line 1327, Address: 0x1fdff8, Func Offset: 0x3b8
	// Line 1319, Address: 0x1fdffc, Func Offset: 0x3bc
	// Line 1327, Address: 0x1fe000, Func Offset: 0x3c0
	// Line 1326, Address: 0x1fe004, Func Offset: 0x3c4
	// Line 1327, Address: 0x1fe008, Func Offset: 0x3c8
	// Line 1332, Address: 0x1fe014, Func Offset: 0x3d4
	// Line 1319, Address: 0x1fe018, Func Offset: 0x3d8
	// Line 1326, Address: 0x1fe01c, Func Offset: 0x3dc
	// Line 1327, Address: 0x1fe028, Func Offset: 0x3e8
	// Line 1326, Address: 0x1fe034, Func Offset: 0x3f4
	// Line 1327, Address: 0x1fe038, Func Offset: 0x3f8
	// Line 1326, Address: 0x1fe04c, Func Offset: 0x40c
	// Line 1327, Address: 0x1fe050, Func Offset: 0x410
	// Line 1329, Address: 0x1fe064, Func Offset: 0x424
	// Line 1327, Address: 0x1fe068, Func Offset: 0x428
	// Line 1329, Address: 0x1fe06c, Func Offset: 0x42c
	// Line 1330, Address: 0x1fe080, Func Offset: 0x440
	// Line 1331, Address: 0x1fe088, Func Offset: 0x448
	// Line 1332, Address: 0x1fe08c, Func Offset: 0x44c
	// Line 1336, Address: 0x1fe0e0, Func Offset: 0x4a0
	// Line 1337, Address: 0x1fe0e4, Func Offset: 0x4a4
	// Line 1345, Address: 0x1fe0e8, Func Offset: 0x4a8
	// Line 1337, Address: 0x1fe0ec, Func Offset: 0x4ac
	// Line 1338, Address: 0x1fe100, Func Offset: 0x4c0
	// Line 1339, Address: 0x1fe118, Func Offset: 0x4d8
	// Line 1342, Address: 0x1fe130, Func Offset: 0x4f0
	// Line 1343, Address: 0x1fe138, Func Offset: 0x4f8
	// Line 1344, Address: 0x1fe140, Func Offset: 0x500
	// Line 1345, Address: 0x1fe144, Func Offset: 0x504
	// Line 1346, Address: 0x1fe14c, Func Offset: 0x50c
	// Line 1351, Address: 0x1fe150, Func Offset: 0x510
	// Line 1354, Address: 0x1fe15c, Func Offset: 0x51c
	// Line 1351, Address: 0x1fe160, Func Offset: 0x520
	// Line 1354, Address: 0x1fe174, Func Offset: 0x534
	// Line 1367, Address: 0x1fe180, Func Offset: 0x540
	// Line 1372, Address: 0x1fe188, Func Offset: 0x548
	// Line 1367, Address: 0x1fe18c, Func Offset: 0x54c
	// Line 1354, Address: 0x1fe190, Func Offset: 0x550
	// Line 1356, Address: 0x1fe194, Func Offset: 0x554
	// Line 1357, Address: 0x1fe19c, Func Offset: 0x55c
	// Line 1358, Address: 0x1fe1a4, Func Offset: 0x564
	// Line 1359, Address: 0x1fe1a8, Func Offset: 0x568
	// Line 1356, Address: 0x1fe1ac, Func Offset: 0x56c
	// Line 1357, Address: 0x1fe1b0, Func Offset: 0x570
	// Line 1358, Address: 0x1fe1b4, Func Offset: 0x574
	// Line 1360, Address: 0x1fe1b8, Func Offset: 0x578
	// Line 1363, Address: 0x1fe1bc, Func Offset: 0x57c
	// Line 1361, Address: 0x1fe1c8, Func Offset: 0x588
	// Line 1364, Address: 0x1fe1cc, Func Offset: 0x58c
	// Line 1363, Address: 0x1fe1d4, Func Offset: 0x594
	// Line 1364, Address: 0x1fe1d8, Func Offset: 0x598
	// Line 1367, Address: 0x1fe1e0, Func Offset: 0x5a0
	// Line 1368, Address: 0x1fe1fc, Func Offset: 0x5bc
	// Line 1369, Address: 0x1fe204, Func Offset: 0x5c4
	// Line 1372, Address: 0x1fe208, Func Offset: 0x5c8
	// Line 1373, Address: 0x1fe214, Func Offset: 0x5d4
	// Line 1374, Address: 0x1fe220, Func Offset: 0x5e0
	// Line 1378, Address: 0x1fe22c, Func Offset: 0x5ec
	// Line 1379, Address: 0x1fe230, Func Offset: 0x5f0
	// Line 1378, Address: 0x1fe234, Func Offset: 0x5f4
	// Line 1380, Address: 0x1fe238, Func Offset: 0x5f8
	// Line 1378, Address: 0x1fe23c, Func Offset: 0x5fc
	// Line 1383, Address: 0x1fe240, Func Offset: 0x600
	// Line 1386, Address: 0x1fe254, Func Offset: 0x614
	// Line 1387, Address: 0x1fe260, Func Offset: 0x620
	// Line 1388, Address: 0x1fe268, Func Offset: 0x628
	// Line 1389, Address: 0x1fe270, Func Offset: 0x630
	// Line 1390, Address: 0x1fe280, Func Offset: 0x640
	// Line 1394, Address: 0x1fe294, Func Offset: 0x654
	// Line 1397, Address: 0x1fe2a0, Func Offset: 0x660
	// Line 1399, Address: 0x1fe2a4, Func Offset: 0x664
	// Line 1398, Address: 0x1fe2a8, Func Offset: 0x668
	// Line 1400, Address: 0x1fe2ac, Func Offset: 0x66c
	// Line 1398, Address: 0x1fe2b0, Func Offset: 0x670
	// Line 1404, Address: 0x1fe2b8, Func Offset: 0x678
	// Line 1407, Address: 0x1fe2c8, Func Offset: 0x688
	// Line 1410, Address: 0x1fe2dc, Func Offset: 0x69c
	// Line 1414, Address: 0x1fe2f0, Func Offset: 0x6b0
	// Line 1412, Address: 0x1fe2f8, Func Offset: 0x6b8
	// Line 1413, Address: 0x1fe2fc, Func Offset: 0x6bc
	// Line 1414, Address: 0x1fe308, Func Offset: 0x6c8
	// Line 1413, Address: 0x1fe30c, Func Offset: 0x6cc
	// Line 1414, Address: 0x1fe314, Func Offset: 0x6d4
	// Line 1415, Address: 0x1fe320, Func Offset: 0x6e0
	// Line 1416, Address: 0x1fe328, Func Offset: 0x6e8
	// Line 1417, Address: 0x1fe350, Func Offset: 0x710
	// Line 1421, Address: 0x1fe358, Func Offset: 0x718
	// Line 1422, Address: 0x1fe370, Func Offset: 0x730
	// Line 1423, Address: 0x1fe388, Func Offset: 0x748
	// Line 1424, Address: 0x1fe3a0, Func Offset: 0x760
	// Line 1425, Address: 0x1fe3a4, Func Offset: 0x764
	// Line 1426, Address: 0x1fe3b0, Func Offset: 0x770
	// Line 1427, Address: 0x1fe3b4, Func Offset: 0x774
	// Line 1430, Address: 0x1fe3b8, Func Offset: 0x778
	// Line 1431, Address: 0x1fe3c0, Func Offset: 0x780
	// Line 1432, Address: 0x1fe3c8, Func Offset: 0x788
	// Line 1435, Address: 0x1fe3d0, Func Offset: 0x790
	// Line 1436, Address: 0x1fe3d8, Func Offset: 0x798
	// Func End, Address: 0x1fe418, Func Offset: 0x7d8
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
	xVec3 akE[3];
	xVec3 baxis;
	uint32 andflag;
	uint32 curflag;
	int32 i;
	int32 i0;
	int32 i1;
	// Line 1206, Address: 0x1fe420, Func Offset: 0
	// Line 1211, Address: 0x1fe424, Func Offset: 0x4
	// Line 1213, Address: 0x1fe428, Func Offset: 0x8
	// Line 1215, Address: 0x1fe430, Func Offset: 0x10
	// Line 1216, Address: 0x1fe460, Func Offset: 0x40
	// Line 1217, Address: 0x1fe478, Func Offset: 0x58
	// Line 1218, Address: 0x1fe4a8, Func Offset: 0x88
	// Line 1219, Address: 0x1fe4c0, Func Offset: 0xa0
	// Line 1220, Address: 0x1fe4f0, Func Offset: 0xd0
	// Line 1223, Address: 0x1fe508, Func Offset: 0xe8
	// Line 1224, Address: 0x1fe510, Func Offset: 0xf0
	// Line 1228, Address: 0x1fe518, Func Offset: 0xf8
	// Line 1229, Address: 0x1fe51c, Func Offset: 0xfc
	// Line 1232, Address: 0x1fe52c, Func Offset: 0x10c
	// Line 1233, Address: 0x1fe534, Func Offset: 0x114
	// Line 1234, Address: 0x1fe53c, Func Offset: 0x11c
	// Line 1242, Address: 0x1fe540, Func Offset: 0x120
	// Line 1237, Address: 0x1fe544, Func Offset: 0x124
	// Line 1242, Address: 0x1fe54c, Func Offset: 0x12c
	// Line 1237, Address: 0x1fe550, Func Offset: 0x130
	// Line 1239, Address: 0x1fe560, Func Offset: 0x140
	// Line 1237, Address: 0x1fe564, Func Offset: 0x144
	// Line 1239, Address: 0x1fe574, Func Offset: 0x154
	// Line 1237, Address: 0x1fe578, Func Offset: 0x158
	// Line 1238, Address: 0x1fe580, Func Offset: 0x160
	// Line 1239, Address: 0x1fe588, Func Offset: 0x168
	// Line 1238, Address: 0x1fe58c, Func Offset: 0x16c
	// Line 1239, Address: 0x1fe59c, Func Offset: 0x17c
	// Line 1238, Address: 0x1fe5a0, Func Offset: 0x180
	// Line 1239, Address: 0x1fe5b0, Func Offset: 0x190
	// Line 1238, Address: 0x1fe5b4, Func Offset: 0x194
	// Line 1239, Address: 0x1fe5b8, Func Offset: 0x198
	// Line 1238, Address: 0x1fe5bc, Func Offset: 0x19c
	// Line 1239, Address: 0x1fe5c0, Func Offset: 0x1a0
	// Line 1242, Address: 0x1fe5e4, Func Offset: 0x1c4
	// Line 1240, Address: 0x1fe5ec, Func Offset: 0x1cc
	// Line 1242, Address: 0x1fe5fc, Func Offset: 0x1dc
	// Line 1240, Address: 0x1fe608, Func Offset: 0x1e8
	// Line 1242, Address: 0x1fe610, Func Offset: 0x1f0
	// Line 1240, Address: 0x1fe614, Func Offset: 0x1f4
	// Line 1242, Address: 0x1fe620, Func Offset: 0x200
	// Line 1240, Address: 0x1fe630, Func Offset: 0x210
	// Line 1242, Address: 0x1fe634, Func Offset: 0x214
	// Line 1243, Address: 0x1fe6a0, Func Offset: 0x280
	// Line 1244, Address: 0x1fe6b8, Func Offset: 0x298
	// Line 1247, Address: 0x1fe6c0, Func Offset: 0x2a0
	// Line 1250, Address: 0x1fe6c4, Func Offset: 0x2a4
	// Line 1248, Address: 0x1fe6c8, Func Offset: 0x2a8
	// Line 1249, Address: 0x1fe6cc, Func Offset: 0x2ac
	// Line 1251, Address: 0x1fe6d0, Func Offset: 0x2b0
	// Line 1250, Address: 0x1fe6d8, Func Offset: 0x2b8
	// Line 1251, Address: 0x1fe6e8, Func Offset: 0x2c8
	// Line 1253, Address: 0x1fe6f0, Func Offset: 0x2d0
	// Line 1255, Address: 0x1fe708, Func Offset: 0x2e8
	// Line 1256, Address: 0x1fe714, Func Offset: 0x2f4
	// Line 1257, Address: 0x1fe75c, Func Offset: 0x33c
	// Line 1258, Address: 0x1fe760, Func Offset: 0x340
	// Line 1259, Address: 0x1fe818, Func Offset: 0x3f8
	// Line 1260, Address: 0x1fe8b8, Func Offset: 0x498
	// Line 1261, Address: 0x1fe8d0, Func Offset: 0x4b0
	// Line 1262, Address: 0x1fe8d8, Func Offset: 0x4b8
	// Line 1263, Address: 0x1fe8ec, Func Offset: 0x4cc
	// Line 1265, Address: 0x1fe8fc, Func Offset: 0x4dc
	// Line 1266, Address: 0x1fe900, Func Offset: 0x4e0
	// Func End, Address: 0x1fe908, Func Offset: 0x4e8
}

// xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
// Start address: 0x1fe910
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, uint8 collType, uint8 chk)
{
	cb_ray_hits_ent cb;
	xBound bound;
	xCollis temp_coll;
	// Line 1073, Address: 0x1fe910, Func Offset: 0
	// Line 1077, Address: 0x1fe914, Func Offset: 0x4
	// Line 1073, Address: 0x1fe918, Func Offset: 0x8
	// Line 1077, Address: 0x1fe91c, Func Offset: 0xc
	// Line 1073, Address: 0x1fe920, Func Offset: 0x10
	// Line 1078, Address: 0x1fe924, Func Offset: 0x14
	// Line 1073, Address: 0x1fe928, Func Offset: 0x18
	// Line 1077, Address: 0x1fe940, Func Offset: 0x30
	// Line 1078, Address: 0x1fe944, Func Offset: 0x34
	// Line 1083, Address: 0x1fe948, Func Offset: 0x38
	// Line 1078, Address: 0x1fe94c, Func Offset: 0x3c
	// Line 1079, Address: 0x1fe958, Func Offset: 0x48
	// Line 1083, Address: 0x1fe960, Func Offset: 0x50
	// Line 1079, Address: 0x1fe964, Func Offset: 0x54
	// Line 1084, Address: 0x1fe96c, Func Offset: 0x5c
	// Line 1085, Address: 0x1feaac, Func Offset: 0x19c
	// Line 1086, Address: 0x1feab8, Func Offset: 0x1a8
	// Line 1084, Address: 0x1feabc, Func Offset: 0x1ac
	// Line 1085, Address: 0x1feac0, Func Offset: 0x1b0
	// Line 1086, Address: 0x1feac8, Func Offset: 0x1b8
	// Line 1085, Address: 0x1feacc, Func Offset: 0x1bc
	// Line 1086, Address: 0x1fead0, Func Offset: 0x1c0
	// Line 1085, Address: 0x1fead8, Func Offset: 0x1c8
	// Line 1086, Address: 0x1feb20, Func Offset: 0x210
	// Line 1089, Address: 0x1feb2c, Func Offset: 0x21c
	// Line 1091, Address: 0x1feb38, Func Offset: 0x228
	// Line 1092, Address: 0x1feb4c, Func Offset: 0x23c
	// Line 1093, Address: 0x1feb64, Func Offset: 0x254
	// Line 1094, Address: 0x1feb68, Func Offset: 0x258
	// Line 1095, Address: 0x1feb74, Func Offset: 0x264
	// Line 1098, Address: 0x1feb88, Func Offset: 0x278
	// Line 1101, Address: 0x1feb94, Func Offset: 0x284
	// Line 1102, Address: 0x1feb98, Func Offset: 0x288
	// Line 1101, Address: 0x1feb9c, Func Offset: 0x28c
	// Line 1102, Address: 0x1feba0, Func Offset: 0x290
	// Line 1103, Address: 0x1feba4, Func Offset: 0x294
	// Line 1101, Address: 0x1feba8, Func Offset: 0x298
	// Line 1102, Address: 0x1febac, Func Offset: 0x29c
	// Line 1103, Address: 0x1febb0, Func Offset: 0x2a0
	// Line 1104, Address: 0x1febbc, Func Offset: 0x2ac
	// Line 1106, Address: 0x1febd0, Func Offset: 0x2c0
	// Line 1107, Address: 0x1febdc, Func Offset: 0x2cc
	// Line 1108, Address: 0x1febe0, Func Offset: 0x2d0
	// Line 1110, Address: 0x1febe4, Func Offset: 0x2d4
	// Line 1173, Address: 0x1febe8, Func Offset: 0x2d8
	// Func End, Address: 0x1fec04, Func Offset: 0x2f4
}

// xRayHitsScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fecf0
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
	// Line 835, Address: 0x1fecf0, Func Offset: 0
	// Line 847, Address: 0x1fecf4, Func Offset: 0x4
	// Line 835, Address: 0x1fecf8, Func Offset: 0x8
	// Line 847, Address: 0x1fecfc, Func Offset: 0xc
	// Line 835, Address: 0x1fed00, Func Offset: 0x10
	// Line 850, Address: 0x1fed14, Func Offset: 0x24
	// Line 847, Address: 0x1fed1c, Func Offset: 0x2c
	// Line 850, Address: 0x1fed20, Func Offset: 0x30
	// Line 862, Address: 0x1fed30, Func Offset: 0x40
	// Line 863, Address: 0x1fed54, Func Offset: 0x64
	// Line 864, Address: 0x1fed78, Func Offset: 0x88
	// Line 903, Address: 0x1fed9c, Func Offset: 0xac
	// Line 904, Address: 0x1fedb0, Func Offset: 0xc0
	// Line 905, Address: 0x1fedc0, Func Offset: 0xd0
	// Line 906, Address: 0x1fedc4, Func Offset: 0xd4
	// Line 907, Address: 0x1fedcc, Func Offset: 0xdc
	// Line 908, Address: 0x1fedd0, Func Offset: 0xe0
	// Line 912, Address: 0x1fedd4, Func Offset: 0xe4
	// Line 913, Address: 0x1fedd8, Func Offset: 0xe8
	// Line 914, Address: 0x1fedf8, Func Offset: 0x108
	// Line 915, Address: 0x1fee00, Func Offset: 0x110
	// Line 916, Address: 0x1fee08, Func Offset: 0x118
	// Line 918, Address: 0x1fee18, Func Offset: 0x128
	// Func End, Address: 0x1fee30, Func Offset: 0x140
}

// xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fee30
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
	// Line 765, Address: 0x1fee30, Func Offset: 0
	// Line 777, Address: 0x1fee34, Func Offset: 0x4
	// Line 765, Address: 0x1fee38, Func Offset: 0x8
	// Line 777, Address: 0x1fee3c, Func Offset: 0xc
	// Line 765, Address: 0x1fee40, Func Offset: 0x10
	// Line 780, Address: 0x1fee54, Func Offset: 0x24
	// Line 777, Address: 0x1fee5c, Func Offset: 0x2c
	// Line 780, Address: 0x1fee60, Func Offset: 0x30
	// Line 792, Address: 0x1fee70, Func Offset: 0x40
	// Line 793, Address: 0x1fee94, Func Offset: 0x64
	// Line 794, Address: 0x1feeb8, Func Offset: 0x88
	// Line 817, Address: 0x1feedc, Func Offset: 0xac
	// Line 818, Address: 0x1feef0, Func Offset: 0xc0
	// Line 819, Address: 0x1fef00, Func Offset: 0xd0
	// Line 820, Address: 0x1fef04, Func Offset: 0xd4
	// Line 821, Address: 0x1fef0c, Func Offset: 0xdc
	// Line 822, Address: 0x1fef10, Func Offset: 0xe0
	// Line 826, Address: 0x1fef14, Func Offset: 0xe4
	// Line 827, Address: 0x1fef18, Func Offset: 0xe8
	// Line 828, Address: 0x1fef38, Func Offset: 0x108
	// Line 829, Address: 0x1fef40, Func Offset: 0x110
	// Line 830, Address: 0x1fef48, Func Offset: 0x118
	// Line 832, Address: 0x1fef58, Func Offset: 0x128
	// Func End, Address: 0x1fef70, Func Offset: 0x140
}

// xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1fef70
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
	// Line 727, Address: 0x1fef70, Func Offset: 0
	// Line 730, Address: 0x1fef8c, Func Offset: 0x1c
	// Line 734, Address: 0x1fef98, Func Offset: 0x28
	// Line 741, Address: 0x1fefb0, Func Offset: 0x40
	// Line 742, Address: 0x1fefc0, Func Offset: 0x50
	// Line 753, Address: 0x1fefd4, Func Offset: 0x64
	// Line 754, Address: 0x1fefe4, Func Offset: 0x74
	// Line 755, Address: 0x1fefe8, Func Offset: 0x78
	// Line 756, Address: 0x1feff0, Func Offset: 0x80
	// Line 757, Address: 0x1feff4, Func Offset: 0x84
	// Line 758, Address: 0x1feffc, Func Offset: 0x8c
	// Line 759, Address: 0x1ff000, Func Offset: 0x90
	// Func End, Address: 0x1ff018, Func Offset: 0xa8
}

// xRayHitsTikiLandableEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1ff020
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
	// Line 687, Address: 0x1ff020, Func Offset: 0
	// Line 690, Address: 0x1ff03c, Func Offset: 0x1c
	// Line 691, Address: 0x1ff048, Func Offset: 0x28
	// Line 692, Address: 0x1ff058, Func Offset: 0x38
	// Line 699, Address: 0x1ff068, Func Offset: 0x48
	// Line 706, Address: 0x1ff080, Func Offset: 0x60
	// Line 707, Address: 0x1ff090, Func Offset: 0x70
	// Line 711, Address: 0x1ff0a0, Func Offset: 0x80
	// Line 712, Address: 0x1ff0b0, Func Offset: 0x90
	// Line 713, Address: 0x1ff0c0, Func Offset: 0xa0
	// Line 718, Address: 0x1ff0d4, Func Offset: 0xb4
	// Line 719, Address: 0x1ff0e4, Func Offset: 0xc4
	// Line 720, Address: 0x1ff0e8, Func Offset: 0xc8
	// Line 721, Address: 0x1ff0f0, Func Offset: 0xd0
	// Line 722, Address: 0x1ff0f4, Func Offset: 0xd4
	// Line 723, Address: 0x1ff0fc, Func Offset: 0xdc
	// Line 724, Address: 0x1ff100, Func Offset: 0xe0
	// Func End, Address: 0x1ff118, Func Offset: 0xf8
}

// xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
// Start address: 0x1ff120
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, void(*rentcb)(xScene*, xRay3*, xQCData*, xEnt*, void*), xQCData* qcr, void* data)
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
	// Line 381, Address: 0x1ff120, Func Offset: 0
	// Line 394, Address: 0x1ff184, Func Offset: 0x64
	// Line 395, Address: 0x1ff190, Func Offset: 0x70
	// Line 402, Address: 0x1ff290, Func Offset: 0x170
	// Line 395, Address: 0x1ff294, Func Offset: 0x174
	// Line 402, Address: 0x1ff2ac, Func Offset: 0x18c
	// Line 395, Address: 0x1ff2b0, Func Offset: 0x190
	// Line 403, Address: 0x1ff2b4, Func Offset: 0x194
	// Line 395, Address: 0x1ff2b8, Func Offset: 0x198
	// Line 402, Address: 0x1ff2cc, Func Offset: 0x1ac
	// Line 403, Address: 0x1ff2d4, Func Offset: 0x1b4
	// Line 407, Address: 0x1ff2d8, Func Offset: 0x1b8
	// Line 402, Address: 0x1ff2dc, Func Offset: 0x1bc
	// Line 403, Address: 0x1ff2e4, Func Offset: 0x1c4
	// Line 407, Address: 0x1ff2ec, Func Offset: 0x1cc
	// Line 408, Address: 0x1ff308, Func Offset: 0x1e8
	// Line 410, Address: 0x1ff320, Func Offset: 0x200
	// Line 411, Address: 0x1ff328, Func Offset: 0x208
	// Line 413, Address: 0x1ff334, Func Offset: 0x214
	// Line 417, Address: 0x1ff338, Func Offset: 0x218
	// Line 415, Address: 0x1ff33c, Func Offset: 0x21c
	// Line 417, Address: 0x1ff340, Func Offset: 0x220
	// Line 415, Address: 0x1ff344, Func Offset: 0x224
	// Line 417, Address: 0x1ff348, Func Offset: 0x228
	// Line 415, Address: 0x1ff358, Func Offset: 0x238
	// Line 417, Address: 0x1ff364, Func Offset: 0x244
	// Line 418, Address: 0x1ff36c, Func Offset: 0x24c
	// Line 419, Address: 0x1ff388, Func Offset: 0x268
	// Line 420, Address: 0x1ff390, Func Offset: 0x270
	// Line 422, Address: 0x1ff394, Func Offset: 0x274
	// Line 436, Address: 0x1ff398, Func Offset: 0x278
	// Line 419, Address: 0x1ff3a0, Func Offset: 0x280
	// Line 422, Address: 0x1ff3a4, Func Offset: 0x284
	// Line 419, Address: 0x1ff3a8, Func Offset: 0x288
	// Line 422, Address: 0x1ff3ac, Func Offset: 0x28c
	// Line 419, Address: 0x1ff3b0, Func Offset: 0x290
	// Line 422, Address: 0x1ff3b4, Func Offset: 0x294
	// Line 420, Address: 0x1ff3b8, Func Offset: 0x298
	// Line 422, Address: 0x1ff3bc, Func Offset: 0x29c
	// Line 423, Address: 0x1ff3c4, Func Offset: 0x2a4
	// Line 421, Address: 0x1ff3c8, Func Offset: 0x2a8
	// Line 436, Address: 0x1ff3cc, Func Offset: 0x2ac
	// Line 439, Address: 0x1ff3d8, Func Offset: 0x2b8
	// Line 441, Address: 0x1ff3ec, Func Offset: 0x2cc
	// Line 443, Address: 0x1ff3f0, Func Offset: 0x2d0
	// Line 445, Address: 0x1ff41c, Func Offset: 0x2fc
	// Line 448, Address: 0x1ff428, Func Offset: 0x308
	// Line 456, Address: 0x1ff430, Func Offset: 0x310
	// Line 459, Address: 0x1ff448, Func Offset: 0x328
	// Line 457, Address: 0x1ff44c, Func Offset: 0x32c
	// Line 459, Address: 0x1ff450, Func Offset: 0x330
	// Line 460, Address: 0x1ff45c, Func Offset: 0x33c
	// Line 461, Address: 0x1ff460, Func Offset: 0x340
	// Line 462, Address: 0x1ff468, Func Offset: 0x348
	// Line 464, Address: 0x1ff478, Func Offset: 0x358
	// Line 465, Address: 0x1ff488, Func Offset: 0x368
	// Line 466, Address: 0x1ff48c, Func Offset: 0x36c
	// Line 467, Address: 0x1ff498, Func Offset: 0x378
	// Line 468, Address: 0x1ff4ac, Func Offset: 0x38c
	// Line 476, Address: 0x1ff4b0, Func Offset: 0x390
	// Line 469, Address: 0x1ff4b4, Func Offset: 0x394
	// Line 476, Address: 0x1ff4b8, Func Offset: 0x398
	// Line 477, Address: 0x1ff4cc, Func Offset: 0x3ac
	// Line 478, Address: 0x1ff4e8, Func Offset: 0x3c8
	// Line 481, Address: 0x1ff4f0, Func Offset: 0x3d0
	// Line 479, Address: 0x1ff4f4, Func Offset: 0x3d4
	// Line 484, Address: 0x1ff4f8, Func Offset: 0x3d8
	// Line 478, Address: 0x1ff4fc, Func Offset: 0x3dc
	// Line 481, Address: 0x1ff50c, Func Offset: 0x3ec
	// Line 479, Address: 0x1ff514, Func Offset: 0x3f4
	// Line 481, Address: 0x1ff518, Func Offset: 0x3f8
	// Line 482, Address: 0x1ff520, Func Offset: 0x400
	// Line 480, Address: 0x1ff524, Func Offset: 0x404
	// Line 484, Address: 0x1ff528, Func Offset: 0x408
	// Line 487, Address: 0x1ff530, Func Offset: 0x410
	// Line 489, Address: 0x1ff544, Func Offset: 0x424
	// Line 491, Address: 0x1ff548, Func Offset: 0x428
	// Line 493, Address: 0x1ff56c, Func Offset: 0x44c
	// Line 496, Address: 0x1ff570, Func Offset: 0x450
	// Line 497, Address: 0x1ff578, Func Offset: 0x458
	// Line 498, Address: 0x1ff600, Func Offset: 0x4e0
	// Line 499, Address: 0x1ff608, Func Offset: 0x4e8
	// Line 500, Address: 0x1ff60c, Func Offset: 0x4ec
	// Line 502, Address: 0x1ff61c, Func Offset: 0x4fc
	// Line 504, Address: 0x1ff638, Func Offset: 0x518
	// Line 505, Address: 0x1ff720, Func Offset: 0x600
	// Line 506, Address: 0x1ff728, Func Offset: 0x608
	// Line 508, Address: 0x1ff73c, Func Offset: 0x61c
	// Line 511, Address: 0x1ff748, Func Offset: 0x628
	// Line 513, Address: 0x1ff75c, Func Offset: 0x63c
	// Line 515, Address: 0x1ff760, Func Offset: 0x640
	// Line 517, Address: 0x1ff784, Func Offset: 0x664
	// Line 520, Address: 0x1ff788, Func Offset: 0x668
	// Line 521, Address: 0x1ff790, Func Offset: 0x670
	// Line 522, Address: 0x1ff818, Func Offset: 0x6f8
	// Line 523, Address: 0x1ff820, Func Offset: 0x700
	// Line 524, Address: 0x1ff824, Func Offset: 0x704
	// Line 526, Address: 0x1ff834, Func Offset: 0x714
	// Line 528, Address: 0x1ff850, Func Offset: 0x730
	// Line 529, Address: 0x1ff938, Func Offset: 0x818
	// Line 530, Address: 0x1ff940, Func Offset: 0x820
	// Line 532, Address: 0x1ff954, Func Offset: 0x834
	// Line 534, Address: 0x1ff970, Func Offset: 0x850
	// Line 537, Address: 0x1ff978, Func Offset: 0x858
	// Line 539, Address: 0x1ff98c, Func Offset: 0x86c
	// Line 540, Address: 0x1ff994, Func Offset: 0x874
	// Line 541, Address: 0x1ff998, Func Offset: 0x878
	// Line 543, Address: 0x1ff9c4, Func Offset: 0x8a4
	// Line 546, Address: 0x1ff9c8, Func Offset: 0x8a8
	// Line 554, Address: 0x1ff9d0, Func Offset: 0x8b0
	// Line 557, Address: 0x1ff9d8, Func Offset: 0x8b8
	// Line 554, Address: 0x1ff9dc, Func Offset: 0x8bc
	// Line 555, Address: 0x1ff9f4, Func Offset: 0x8d4
	// Line 557, Address: 0x1ff9f8, Func Offset: 0x8d8
	// Line 558, Address: 0x1ffa04, Func Offset: 0x8e4
	// Line 559, Address: 0x1ffa08, Func Offset: 0x8e8
	// Line 560, Address: 0x1ffa10, Func Offset: 0x8f0
	// Line 562, Address: 0x1ffa20, Func Offset: 0x900
	// Line 563, Address: 0x1ffa30, Func Offset: 0x910
	// Line 564, Address: 0x1ffa34, Func Offset: 0x914
	// Line 565, Address: 0x1ffa40, Func Offset: 0x920
	// Line 566, Address: 0x1ffa54, Func Offset: 0x934
	// Line 574, Address: 0x1ffa58, Func Offset: 0x938
	// Line 567, Address: 0x1ffa5c, Func Offset: 0x93c
	// Line 574, Address: 0x1ffa60, Func Offset: 0x940
	// Line 575, Address: 0x1ffa74, Func Offset: 0x954
	// Line 580, Address: 0x1ffa90, Func Offset: 0x970
	// Line 583, Address: 0x1ffa98, Func Offset: 0x978
	// Line 581, Address: 0x1ffa9c, Func Offset: 0x97c
	// Line 586, Address: 0x1ffaa0, Func Offset: 0x980
	// Line 580, Address: 0x1ffaa4, Func Offset: 0x984
	// Line 583, Address: 0x1ffab4, Func Offset: 0x994
	// Line 581, Address: 0x1ffabc, Func Offset: 0x99c
	// Line 583, Address: 0x1ffac0, Func Offset: 0x9a0
	// Line 584, Address: 0x1ffac8, Func Offset: 0x9a8
	// Line 582, Address: 0x1ffacc, Func Offset: 0x9ac
	// Line 586, Address: 0x1ffad0, Func Offset: 0x9b0
	// Line 589, Address: 0x1ffad8, Func Offset: 0x9b8
	// Line 591, Address: 0x1ffaec, Func Offset: 0x9cc
	// Line 593, Address: 0x1ffaf0, Func Offset: 0x9d0
	// Line 595, Address: 0x1ffb14, Func Offset: 0x9f4
	// Line 598, Address: 0x1ffb18, Func Offset: 0x9f8
	// Line 599, Address: 0x1ffb20, Func Offset: 0xa00
	// Line 600, Address: 0x1ffba8, Func Offset: 0xa88
	// Line 601, Address: 0x1ffbb0, Func Offset: 0xa90
	// Line 602, Address: 0x1ffbb4, Func Offset: 0xa94
	// Line 604, Address: 0x1ffbc4, Func Offset: 0xaa4
	// Line 606, Address: 0x1ffbe0, Func Offset: 0xac0
	// Line 607, Address: 0x1ffcc8, Func Offset: 0xba8
	// Line 608, Address: 0x1ffcd0, Func Offset: 0xbb0
	// Line 610, Address: 0x1ffce4, Func Offset: 0xbc4
	// Line 613, Address: 0x1ffcf0, Func Offset: 0xbd0
	// Line 615, Address: 0x1ffd04, Func Offset: 0xbe4
	// Line 617, Address: 0x1ffd08, Func Offset: 0xbe8
	// Line 619, Address: 0x1ffd2c, Func Offset: 0xc0c
	// Line 622, Address: 0x1ffd30, Func Offset: 0xc10
	// Line 623, Address: 0x1ffd38, Func Offset: 0xc18
	// Line 624, Address: 0x1ffdc0, Func Offset: 0xca0
	// Line 625, Address: 0x1ffdc8, Func Offset: 0xca8
	// Line 626, Address: 0x1ffdcc, Func Offset: 0xcac
	// Line 628, Address: 0x1ffddc, Func Offset: 0xcbc
	// Line 630, Address: 0x1ffdf8, Func Offset: 0xcd8
	// Line 631, Address: 0x1ffee0, Func Offset: 0xdc0
	// Line 632, Address: 0x1ffee8, Func Offset: 0xdc8
	// Line 634, Address: 0x1ffefc, Func Offset: 0xddc
	// Line 635, Address: 0x1fff14, Func Offset: 0xdf4
	// Line 636, Address: 0x1fff18, Func Offset: 0xdf8
	// Line 637, Address: 0x1fff50, Func Offset: 0xe30
	// Line 638, Address: 0x1fff58, Func Offset: 0xe38
	// Line 639, Address: 0x1fff5c, Func Offset: 0xe3c
	// Line 641, Address: 0x1fff6c, Func Offset: 0xe4c
	// Line 643, Address: 0x1fff88, Func Offset: 0xe68
	// Line 644, Address: 0x200070, Func Offset: 0xf50
	// Line 645, Address: 0x200078, Func Offset: 0xf58
	// Func End, Address: 0x2000cc, Func Offset: 0xfac
}

// xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2000d0
void xSceneForAllNPCs(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 367, Address: 0x2000d0, Func Offset: 0
	// Line 371, Address: 0x2000f8, Func Offset: 0x28
	// Line 373, Address: 0x200110, Func Offset: 0x40
	// Line 376, Address: 0x200130, Func Offset: 0x60
	// Line 377, Address: 0x200148, Func Offset: 0x78
	// Func End, Address: 0x200168, Func Offset: 0x98
}

// xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200170
void xSceneForAllDynamics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 354, Address: 0x200170, Func Offset: 0
	// Line 358, Address: 0x200198, Func Offset: 0x28
	// Line 360, Address: 0x2001b0, Func Offset: 0x40
	// Line 364, Address: 0x2001d0, Func Offset: 0x60
	// Line 365, Address: 0x2001e8, Func Offset: 0x78
	// Func End, Address: 0x200208, Func Offset: 0x98
}

// xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200210
void xSceneForAllStatics(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 342, Address: 0x200210, Func Offset: 0
	// Line 346, Address: 0x200238, Func Offset: 0x28
	// Line 348, Address: 0x200250, Func Offset: 0x40
	// Line 351, Address: 0x200270, Func Offset: 0x60
	// Line 352, Address: 0x200288, Func Offset: 0x78
	// Func End, Address: 0x2002a8, Func Offset: 0x98
}

// xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2002b0
void xSceneForAllEnts(xScene* sc, xEnt*(*func)(xEnt*, xScene*, void*), void* data)
{
	uint16 i;
	// Line 318, Address: 0x2002b0, Func Offset: 0
	// Line 322, Address: 0x2002d8, Func Offset: 0x28
	// Line 323, Address: 0x2002f0, Func Offset: 0x40
	// Line 326, Address: 0x200310, Func Offset: 0x60
	// Line 327, Address: 0x200328, Func Offset: 0x78
	// Func End, Address: 0x200348, Func Offset: 0x98
}

// xSceneID2Name__FP6xSceneUi
// Start address: 0x200350
int8* xSceneID2Name(xScene* sc, uint32 id)
{
	// Line 282, Address: 0x200350, Func Offset: 0
	// Line 286, Address: 0x20035c, Func Offset: 0xc
	// Line 289, Address: 0x200378, Func Offset: 0x28
	// Func End, Address: 0x200384, Func Offset: 0x34
}

// xSceneResolvID__FP6xSceneUi
// Start address: 0x200390
xBase* xSceneResolvID(xScene* sc, uint32 id)
{
	// Line 264, Address: 0x200390, Func Offset: 0
	// Line 268, Address: 0x20039c, Func Offset: 0xc
	// Line 271, Address: 0x2003b8, Func Offset: 0x28
	// Func End, Address: 0x2003c4, Func Offset: 0x34
}

// xSceneAddEnt__FP6xSceneP4xEnt
// Start address: 0x2003d0
void xSceneAddEnt(xScene* sc, xEnt* ent)
{
	// Line 185, Address: 0x2003d0, Func Offset: 0
	// Line 189, Address: 0x2003d4, Func Offset: 0x4
	// Line 192, Address: 0x2003e0, Func Offset: 0x10
	// Line 194, Address: 0x2003f8, Func Offset: 0x28
	// Line 197, Address: 0x20040c, Func Offset: 0x3c
	// Line 199, Address: 0x200424, Func Offset: 0x54
	// Line 202, Address: 0x20043c, Func Offset: 0x6c
	// Line 204, Address: 0x200454, Func Offset: 0x84
	// Line 207, Address: 0x20046c, Func Offset: 0x9c
	// Line 220, Address: 0x200488, Func Offset: 0xb8
	// Line 221, Address: 0x2004a0, Func Offset: 0xd0
	// Func End, Address: 0x2004a8, Func Offset: 0xd8
}

// xSceneSetup__FP6xScene
// Start address: 0x2004b0
void xSceneSetup(xScene* sc)
{
	// Line 182, Address: 0x2004b0, Func Offset: 0
	// Func End, Address: 0x2004b8, Func Offset: 0x8
}

// xSceneLoad__FP6xSceneP7xSerial
// Start address: 0x2004c0
void xSceneLoad()
{
	// Line 159, Address: 0x2004c0, Func Offset: 0
	// Func End, Address: 0x2004c8, Func Offset: 0x8
}

// xSceneSave__FP6xSceneP7xSerial
// Start address: 0x2004d0
void xSceneSave()
{
	// Line 141, Address: 0x2004d0, Func Offset: 0
	// Func End, Address: 0x2004d8, Func Offset: 0x8
}

// xSceneExit__FP6xScene
// Start address: 0x2004e0
void xSceneExit()
{
	// Line 125, Address: 0x2004e0, Func Offset: 0
	// Func End, Address: 0x2004e8, Func Offset: 0x8
}

// xSceneInit__FP6xSceneUsUsUsUs
// Start address: 0x2004f0
void xSceneInit(xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs)
{
	// Line 42, Address: 0x2004f0, Func Offset: 0
	// Line 48, Address: 0x2004f4, Func Offset: 0x4
	// Line 42, Address: 0x2004f8, Func Offset: 0x8
	// Line 45, Address: 0x200520, Func Offset: 0x30
	// Line 47, Address: 0x200528, Func Offset: 0x38
	// Line 48, Address: 0x20052c, Func Offset: 0x3c
	// Line 52, Address: 0x200540, Func Offset: 0x50
	// Line 51, Address: 0x200544, Func Offset: 0x54
	// Line 52, Address: 0x200548, Func Offset: 0x58
	// Line 56, Address: 0x20055c, Func Offset: 0x6c
	// Line 55, Address: 0x200560, Func Offset: 0x70
	// Line 56, Address: 0x200564, Func Offset: 0x74
	// Line 60, Address: 0x200578, Func Offset: 0x88
	// Line 59, Address: 0x20057c, Func Offset: 0x8c
	// Line 60, Address: 0x200580, Func Offset: 0x90
	// Line 72, Address: 0x200590, Func Offset: 0xa0
	// Line 60, Address: 0x20059c, Func Offset: 0xac
	// Line 72, Address: 0x2005a0, Func Offset: 0xb0
	// Line 75, Address: 0x2005a4, Func Offset: 0xb4
	// Line 72, Address: 0x2005a8, Func Offset: 0xb8
	// Line 74, Address: 0x2005b8, Func Offset: 0xc8
	// Line 75, Address: 0x2005bc, Func Offset: 0xcc
	// Line 79, Address: 0x2005d0, Func Offset: 0xe0
	// Line 78, Address: 0x2005d4, Func Offset: 0xe4
	// Line 79, Address: 0x2005d8, Func Offset: 0xe8
	// Line 82, Address: 0x2005ec, Func Offset: 0xfc
	// Line 83, Address: 0x2005f0, Func Offset: 0x100
	// Line 84, Address: 0x2005f4, Func Offset: 0x104
	// Line 85, Address: 0x2005f8, Func Offset: 0x108
	// Line 86, Address: 0x2005fc, Func Offset: 0x10c
	// Line 90, Address: 0x200600, Func Offset: 0x110
	// Line 91, Address: 0x200608, Func Offset: 0x118
	// Line 96, Address: 0x200610, Func Offset: 0x120
	// Line 97, Address: 0x200628, Func Offset: 0x138
	// Line 98, Address: 0x200634, Func Offset: 0x144
	// Line 99, Address: 0x200640, Func Offset: 0x150
	// Line 102, Address: 0x20064c, Func Offset: 0x15c
	// Line 104, Address: 0x200654, Func Offset: 0x164
	// Line 105, Address: 0x20065c, Func Offset: 0x16c
	// Line 106, Address: 0x200664, Func Offset: 0x174
	// Func End, Address: 0x200684, Func Offset: 0x194
}

