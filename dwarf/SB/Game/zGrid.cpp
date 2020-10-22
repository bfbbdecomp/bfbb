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
typedef struct _class_1;
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	void(*destroyNotify)(RwResEntry*);
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwTexCoords* texCoords[8];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RpClump*(*callback)(RpClump*, void*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xJSPHeader
{
	int8 idtag[4];
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
	uint32 pad[4];
};

struct RpTriangle
{
	uint16 vertIndex[3];
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
	xAnimMultiFileEntry Files[1];
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
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
	float32 radius[2];
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
	float32 param[4];
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	xVec3 vert[3];
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
	RxCluster clusters[1];
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
	// Line 163, Address: 0x306050, Func Offset: 0
	// Line 165, Address: 0x30605c, Func Offset: 0xc
	// Line 172, Address: 0x306068, Func Offset: 0x18
	// Line 170, Address: 0x306070, Func Offset: 0x20
	// Line 172, Address: 0x306074, Func Offset: 0x24
	// Line 174, Address: 0x306098, Func Offset: 0x48
	// Line 175, Address: 0x30609c, Func Offset: 0x4c
	// Line 176, Address: 0x3060a4, Func Offset: 0x54
	// Line 178, Address: 0x3060a8, Func Offset: 0x58
	// Line 177, Address: 0x3060ac, Func Offset: 0x5c
	// Line 178, Address: 0x3060b4, Func Offset: 0x64
	// Line 179, Address: 0x3060b8, Func Offset: 0x68
	// Line 182, Address: 0x3060c0, Func Offset: 0x70
	// Line 181, Address: 0x3060c4, Func Offset: 0x74
	// Line 182, Address: 0x3060cc, Func Offset: 0x7c
	// Line 184, Address: 0x3060d4, Func Offset: 0x84
	// Line 187, Address: 0x3060d8, Func Offset: 0x88
	// Line 189, Address: 0x3060f8, Func Offset: 0xa8
	// Line 191, Address: 0x306100, Func Offset: 0xb0
	// Line 192, Address: 0x306108, Func Offset: 0xb8
	// Line 194, Address: 0x306110, Func Offset: 0xc0
	// Line 196, Address: 0x306118, Func Offset: 0xc8
	// Line 197, Address: 0x306128, Func Offset: 0xd8
	// Line 198, Address: 0x30613c, Func Offset: 0xec
	// Line 199, Address: 0x306140, Func Offset: 0xf0
	// Line 200, Address: 0x306148, Func Offset: 0xf8
	// Line 201, Address: 0x30614c, Func Offset: 0xfc
	// Line 202, Address: 0x306150, Func Offset: 0x100
	// Line 203, Address: 0x306160, Func Offset: 0x110
	// Line 204, Address: 0x306168, Func Offset: 0x118
	// Line 205, Address: 0x306180, Func Offset: 0x130
	// Line 206, Address: 0x306194, Func Offset: 0x144
	// Line 207, Address: 0x306198, Func Offset: 0x148
	// Line 208, Address: 0x3061a0, Func Offset: 0x150
	// Line 210, Address: 0x3061a8, Func Offset: 0x158
	// Line 211, Address: 0x3061b8, Func Offset: 0x168
	// Line 212, Address: 0x3061c0, Func Offset: 0x170
	// Line 217, Address: 0x3061d0, Func Offset: 0x180
	// Line 219, Address: 0x3061d8, Func Offset: 0x188
	// Line 220, Address: 0x3061e0, Func Offset: 0x190
	// Line 223, Address: 0x3061e8, Func Offset: 0x198
	// Func End, Address: 0x3061f8, Func Offset: 0x1a8
}

// zGridExit__FP6zScene
// Start address: 0x306200
void zGridExit()
{
	// Line 154, Address: 0x306200, Func Offset: 0
	// Line 155, Address: 0x306204, Func Offset: 0x4
	// Line 154, Address: 0x306208, Func Offset: 0x8
	// Line 155, Address: 0x30620c, Func Offset: 0xc
	// Line 156, Address: 0x306214, Func Offset: 0x14
	// Line 157, Address: 0x306220, Func Offset: 0x20
	// Line 158, Address: 0x30622c, Func Offset: 0x2c
	// Line 159, Address: 0x306230, Func Offset: 0x30
	// Line 160, Address: 0x306234, Func Offset: 0x34
	// Func End, Address: 0x306240, Func Offset: 0x40
}

// zGridInit__FP6zScene
// Start address: 0x306240
void zGridInit(zScene* s)
{
	xBox* ebox;
	float32 min_csize;
	xBox osobox;
	// Line 109, Address: 0x306240, Func Offset: 0
	// Line 115, Address: 0x306268, Func Offset: 0x28
	// Line 117, Address: 0x30627c, Func Offset: 0x3c
	// Line 118, Address: 0x3062a4, Func Offset: 0x64
	// Line 117, Address: 0x3062a8, Func Offset: 0x68
	// Line 118, Address: 0x3062ac, Func Offset: 0x6c
	// Line 120, Address: 0x3062cc, Func Offset: 0x8c
	// Line 121, Address: 0x3062e4, Func Offset: 0xa4
	// Line 127, Address: 0x30649c, Func Offset: 0x25c
	// Line 128, Address: 0x3064a0, Func Offset: 0x260
	// Line 127, Address: 0x3064a4, Func Offset: 0x264
	// Line 128, Address: 0x3064b8, Func Offset: 0x278
	// Line 130, Address: 0x3064c0, Func Offset: 0x280
	// Line 127, Address: 0x3064d0, Func Offset: 0x290
	// Line 132, Address: 0x3064d8, Func Offset: 0x298
	// Line 127, Address: 0x3064dc, Func Offset: 0x29c
	// Line 132, Address: 0x3064e0, Func Offset: 0x2a0
	// Line 127, Address: 0x3064e4, Func Offset: 0x2a4
	// Line 132, Address: 0x3064f0, Func Offset: 0x2b0
	// Line 127, Address: 0x3064f4, Func Offset: 0x2b4
	// Line 128, Address: 0x3064fc, Func Offset: 0x2bc
	// Line 129, Address: 0x306508, Func Offset: 0x2c8
	// Line 130, Address: 0x306514, Func Offset: 0x2d4
	// Line 131, Address: 0x306520, Func Offset: 0x2e0
	// Line 132, Address: 0x306538, Func Offset: 0x2f8
	// Line 133, Address: 0x30654c, Func Offset: 0x30c
	// Line 132, Address: 0x306550, Func Offset: 0x310
	// Line 133, Address: 0x306554, Func Offset: 0x314
	// Line 135, Address: 0x306574, Func Offset: 0x334
	// Line 136, Address: 0x306590, Func Offset: 0x350
	// Line 141, Address: 0x306754, Func Offset: 0x514
	// Line 146, Address: 0x30690c, Func Offset: 0x6cc
	// Line 149, Address: 0x306910, Func Offset: 0x6d0
	// Line 150, Address: 0x30691c, Func Offset: 0x6dc
	// Func End, Address: 0x306944, Func Offset: 0x704
}

// zGridReset__FP6zScene
// Start address: 0x306950
void zGridReset(zScene* s)
{
	uint32 i;
	xBase* base;
	xEnt* ent;
	// Line 83, Address: 0x306950, Func Offset: 0
	// Line 84, Address: 0x306968, Func Offset: 0x18
	// Line 88, Address: 0x306970, Func Offset: 0x20
	// Line 89, Address: 0x306988, Func Offset: 0x38
	// Line 91, Address: 0x306994, Func Offset: 0x44
	// Line 96, Address: 0x3069d8, Func Offset: 0x88
	// Line 97, Address: 0x3069dc, Func Offset: 0x8c
	// Line 98, Address: 0x3069e4, Func Offset: 0x94
	// Line 99, Address: 0x3069f8, Func Offset: 0xa8
	// Line 100, Address: 0x306a00, Func Offset: 0xb0
	// Line 101, Address: 0x306a14, Func Offset: 0xc4
	// Line 103, Address: 0x306a18, Func Offset: 0xc8
	// Line 105, Address: 0x306a20, Func Offset: 0xd0
	// Line 106, Address: 0x306a38, Func Offset: 0xe8
	// Func End, Address: 0x306a54, Func Offset: 0x104
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
	uint32 special_models[25];
	int8 @3381;
	// Line 24, Address: 0x306a60, Func Offset: 0
	// Line 25, Address: 0x306a6c, Func Offset: 0xc
	// Line 58, Address: 0x306c78, Func Offset: 0x218
	// Line 53, Address: 0x306c80, Func Offset: 0x220
	// Line 58, Address: 0x306c84, Func Offset: 0x224
	// Line 59, Address: 0x306c8c, Func Offset: 0x22c
	// Line 61, Address: 0x306c98, Func Offset: 0x238
	// Line 62, Address: 0x306c9c, Func Offset: 0x23c
	// Line 64, Address: 0x306cc0, Func Offset: 0x260
	// Line 66, Address: 0x306cd0, Func Offset: 0x270
	// Line 68, Address: 0x306cdc, Func Offset: 0x27c
	// Line 69, Address: 0x306ce8, Func Offset: 0x288
	// Line 70, Address: 0x306cf4, Func Offset: 0x294
	// Line 71, Address: 0x306d00, Func Offset: 0x2a0
	// Line 73, Address: 0x306d08, Func Offset: 0x2a8
	// Line 74, Address: 0x306d14, Func Offset: 0x2b4
	// Line 75, Address: 0x306d28, Func Offset: 0x2c8
	// Func End, Address: 0x306d38, Func Offset: 0x2d8
}

