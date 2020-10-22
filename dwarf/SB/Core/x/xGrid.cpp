typedef struct xGridBound;
typedef struct xSurface;
typedef struct xAnimTransition;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimSingle;
typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimPlay;
typedef struct RxPipelineNodeTopSortData;
typedef struct xBound;
typedef struct rxHeapBlockHeader;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct xVec3;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xBBox;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct xMat4x3;
typedef struct xEnt;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xMemPool;
typedef struct xLinkAsset;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpTriangle;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBox;
typedef struct RwResEntry;
typedef struct RxClusterDefinition;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct xAnimTransitionList;
typedef struct xEntCollis;
typedef struct xGrid;
typedef struct RwSphere;
typedef struct RpLight;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xQCData;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntShadow;
typedef struct xGridIterator;
typedef struct RxNodeDefinition;
typedef struct anim_coll_data;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xAnimMultiFileEntry;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;
typedef struct tri_data;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_10)(RxPipelineNode*);
typedef void(*type_11)(RxPipelineNode*);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef int32(*type_14)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef uint32(*type_19)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_21)(uint32);
typedef int8*(*type_23)(xBase*);
typedef int8*(*type_24)(uint32);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef void(*type_27)(xEnt*, xScene*, float32);
typedef void(*type_29)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef void(*type_32)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_33)(xEnt*);
typedef uint32(*type_34)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_38)(xMemPool*, void*);
typedef int32(*type_39)(xEnt*, void*);
typedef void(*type_42)(RwResEntry*);
typedef RwObjectHasFrame*(*type_46)(RwObjectHasFrame*);

typedef float32 type_1[4];
typedef float32 type_3[2];
typedef uint8 type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef int32 type_15[2];
typedef int32 type_17[2][3];
typedef int32 type_18[2][3][4];
typedef xVec3 type_22[3];
typedef uint16 type_25[3];
typedef float32 type_28[16];
typedef uint32 type_31[4];
typedef RwTexCoords* type_36[8];
typedef xVec3 type_37[4];
typedef int8 type_40[32];
typedef int8 type_41[32];
typedef uint8 type_43[3];
typedef xCollis type_44[18];
typedef RxCluster type_45[1];
typedef float32 type_47[2];
typedef uint8 type_48[3];

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

struct xSurface
{
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xFFX
{
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxReq
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xEnv
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	uint32 delfound;
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

struct anim_coll_data
{
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

int32 gGridIterActive;
uint32 gActiveHeap;

void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, int32(*hitCB)(xEnt*, void*), void* cbdata);
int32 xGridEntIsTooBig(xGrid* grid, xEnt* ent);
xGridBound* xGridIterFirstCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz, xGridIterator& it);
void xGridGetCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz);
xGridBound** xGridGetCell(xGrid* grid, xEnt* ent, int32& grx, int32& grz);
void xGridUpdate(xGrid* grid, xEnt* ent);
int32 xGridRemove(xGridBound* gridb);
int32 xGridAdd(xGrid* grid, xEnt* ent);
void xGridEmpty(xGrid* grid);
void xGridKill(xGrid* grid);
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id);
void xGridBoundInit(xGridBound* gridb, void* data);

// xGridCheckPosition__FP5xGridP5xVec3P7xQCDataPFP4xEntPv_iPv
// Start address: 0x304480
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, int32(*hitCB)(xEnt*, void*), void* cbdata)
{
	xGridIterator it;
	int32 px;
	int32 pz;
	xGridBound* cell;
	float32 clcenterx;
	float32 clcenterz;
	int32 i;
	int32 _x;
	int32 _z;
	int32 offs[2][3][4];
	int32 k;
	// Line 466, Address: 0x304480, Func Offset: 0
	// Line 470, Address: 0x3044b0, Func Offset: 0x30
	// Line 466, Address: 0x3044b4, Func Offset: 0x34
	// Line 470, Address: 0x3044c0, Func Offset: 0x40
	// Line 466, Address: 0x3044c4, Func Offset: 0x44
	// Line 470, Address: 0x3044c8, Func Offset: 0x48
	// Line 471, Address: 0x3044e0, Func Offset: 0x60
	// Line 473, Address: 0x3044f0, Func Offset: 0x70
	// Line 476, Address: 0x304504, Func Offset: 0x84
	// Line 477, Address: 0x30451c, Func Offset: 0x9c
	// Line 478, Address: 0x3045b0, Func Offset: 0x130
	// Line 481, Address: 0x3045bc, Func Offset: 0x13c
	// Line 482, Address: 0x3046a8, Func Offset: 0x228
	// Line 494, Address: 0x3046b0, Func Offset: 0x230
	// Line 492, Address: 0x3046b4, Func Offset: 0x234
	// Line 482, Address: 0x3046bc, Func Offset: 0x23c
	// Line 494, Address: 0x3046c0, Func Offset: 0x240
	// Line 493, Address: 0x3046c4, Func Offset: 0x244
	// Line 492, Address: 0x3046c8, Func Offset: 0x248
	// Line 494, Address: 0x3046d8, Func Offset: 0x258
	// Line 493, Address: 0x3046dc, Func Offset: 0x25c
	// Line 496, Address: 0x3046e0, Func Offset: 0x260
	// Line 495, Address: 0x3046e4, Func Offset: 0x264
	// Line 493, Address: 0x3046e8, Func Offset: 0x268
	// Line 492, Address: 0x3046ec, Func Offset: 0x26c
	// Line 493, Address: 0x3046f0, Func Offset: 0x270
	// Line 496, Address: 0x3046f4, Func Offset: 0x274
	// Line 497, Address: 0x304700, Func Offset: 0x280
	// Line 499, Address: 0x304710, Func Offset: 0x290
	// Line 500, Address: 0x304718, Func Offset: 0x298
	// Line 502, Address: 0x30471c, Func Offset: 0x29c
	// Line 503, Address: 0x304728, Func Offset: 0x2a8
	// Line 505, Address: 0x304738, Func Offset: 0x2b8
	// Line 506, Address: 0x304740, Func Offset: 0x2c0
	// Line 510, Address: 0x304748, Func Offset: 0x2c8
	// Line 511, Address: 0x304760, Func Offset: 0x2e0
	// Line 510, Address: 0x304764, Func Offset: 0x2e4
	// Line 511, Address: 0x30477c, Func Offset: 0x2fc
	// Line 512, Address: 0x304784, Func Offset: 0x304
	// Line 515, Address: 0x30479c, Func Offset: 0x31c
	// Line 516, Address: 0x3047a8, Func Offset: 0x328
	// Line 519, Address: 0x3047c0, Func Offset: 0x340
	// Line 520, Address: 0x304838, Func Offset: 0x3b8
	// Line 522, Address: 0x304840, Func Offset: 0x3c0
	// Line 525, Address: 0x304854, Func Offset: 0x3d4
	// Line 526, Address: 0x30486c, Func Offset: 0x3ec
	// Line 527, Address: 0x304900, Func Offset: 0x480
	// Line 530, Address: 0x30490c, Func Offset: 0x48c
	// Line 531, Address: 0x3049f8, Func Offset: 0x578
	// Line 532, Address: 0x304a00, Func Offset: 0x580
	// Line 534, Address: 0x304a10, Func Offset: 0x590
	// Line 535, Address: 0x304a48, Func Offset: 0x5c8
	// Line 537, Address: 0x304a50, Func Offset: 0x5d0
	// Line 540, Address: 0x304a64, Func Offset: 0x5e4
	// Line 541, Address: 0x304a7c, Func Offset: 0x5fc
	// Line 542, Address: 0x304b10, Func Offset: 0x690
	// Line 545, Address: 0x304b1c, Func Offset: 0x69c
	// Line 546, Address: 0x304c08, Func Offset: 0x788
	// Line 548, Address: 0x304c10, Func Offset: 0x790
	// Func End, Address: 0x304c40, Func Offset: 0x7c0
}

// xGridEntIsTooBig__FP5xGridPC4xEnt
// Start address: 0x304c40
int32 xGridEntIsTooBig(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	float32 maxr;
	xBBox* bbox;
	float32 rx;
	float32 ry;
	float32 rz;
	xBBox* bbox;
	float32 rx;
	float32 rz;
	// Line 390, Address: 0x304c40, Func Offset: 0
	// Line 391, Address: 0x304c44, Func Offset: 0x4
	// Line 390, Address: 0x304c48, Func Offset: 0x8
	// Line 391, Address: 0x304c4c, Func Offset: 0xc
	// Line 393, Address: 0x304c54, Func Offset: 0x14
	// Line 394, Address: 0x304c64, Func Offset: 0x24
	// Line 397, Address: 0x304c6c, Func Offset: 0x2c
	// Line 401, Address: 0x304c7c, Func Offset: 0x3c
	// Line 407, Address: 0x304c80, Func Offset: 0x40
	// Line 401, Address: 0x304c84, Func Offset: 0x44
	// Line 407, Address: 0x304c88, Func Offset: 0x48
	// Line 401, Address: 0x304c8c, Func Offset: 0x4c
	// Line 407, Address: 0x304c98, Func Offset: 0x58
	// Line 401, Address: 0x304c9c, Func Offset: 0x5c
	// Line 407, Address: 0x304cbc, Func Offset: 0x7c
	// Line 401, Address: 0x304cc0, Func Offset: 0x80
	// Line 407, Address: 0x304cc4, Func Offset: 0x84
	// Line 401, Address: 0x304cd8, Func Offset: 0x98
	// Line 407, Address: 0x304cdc, Func Offset: 0x9c
	// Line 401, Address: 0x304ce8, Func Offset: 0xa8
	// Line 407, Address: 0x304cec, Func Offset: 0xac
	// Line 401, Address: 0x304cf8, Func Offset: 0xb8
	// Line 407, Address: 0x304d00, Func Offset: 0xc0
	// Line 401, Address: 0x304d04, Func Offset: 0xc4
	// Line 407, Address: 0x304d08, Func Offset: 0xc8
	// Line 408, Address: 0x304d34, Func Offset: 0xf4
	// Line 411, Address: 0x304d3c, Func Offset: 0xfc
	// Line 417, Address: 0x304d4c, Func Offset: 0x10c
	// Line 414, Address: 0x304d50, Func Offset: 0x110
	// Line 417, Address: 0x304d58, Func Offset: 0x118
	// Line 414, Address: 0x304d5c, Func Offset: 0x11c
	// Line 417, Address: 0x304d68, Func Offset: 0x128
	// Line 414, Address: 0x304d6c, Func Offset: 0x12c
	// Line 417, Address: 0x304d70, Func Offset: 0x130
	// Line 418, Address: 0x304d84, Func Offset: 0x144
	// Line 423, Address: 0x304d8c, Func Offset: 0x14c
	// Line 424, Address: 0x304d90, Func Offset: 0x150
	// Line 425, Address: 0x304d98, Func Offset: 0x158
	// Func End, Address: 0x304da0, Func Offset: 0x160
}

// xGridIterFirstCell__FP5xGridfffRiRiR13xGridIterator
// Start address: 0x304da0
xGridBound* xGridIterFirstCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz, xGridIterator& it)
{
	// Line 381, Address: 0x304da0, Func Offset: 0
	// Line 382, Address: 0x304e98, Func Offset: 0xf8
	// Line 383, Address: 0x304f28, Func Offset: 0x188
	// Func End, Address: 0x304f30, Func Offset: 0x190
}

// xGridGetCell__FP5xGridfffRiRi
// Start address: 0x304f30
void xGridGetCell(xGrid* grid, float32 posx, float32 posz, int32& grx, int32& grz)
{
	float32 pgridx;
	float32 pgridz;
	// Line 373, Address: 0x304f30, Func Offset: 0
	// Line 374, Address: 0x304f38, Func Offset: 0x8
	// Line 375, Address: 0x304f40, Func Offset: 0x10
	// Line 373, Address: 0x304f44, Func Offset: 0x14
	// Line 374, Address: 0x304f4c, Func Offset: 0x1c
	// Line 375, Address: 0x304f50, Func Offset: 0x20
	// Line 376, Address: 0x304fb0, Func Offset: 0x80
	// Line 375, Address: 0x304fb8, Func Offset: 0x88
	// Line 376, Address: 0x304fbc, Func Offset: 0x8c
	// Line 377, Address: 0x305020, Func Offset: 0xf0
	// Func End, Address: 0x305028, Func Offset: 0xf8
}

// xGridGetCell__FP5xGridPC4xEntRiRi
// Start address: 0x305030
xGridBound** xGridGetCell(xGrid* grid, xEnt* ent, int32& grx, int32& grz)
{
	xBound* bound;
	xVec3* center;
	// Line 345, Address: 0x305030, Func Offset: 0
	// Line 347, Address: 0x305034, Func Offset: 0x4
	// Line 351, Address: 0x305040, Func Offset: 0x10
	// Line 355, Address: 0x305054, Func Offset: 0x24
	// Line 359, Address: 0x30506c, Func Offset: 0x3c
	// Line 361, Address: 0x305078, Func Offset: 0x48
	// Line 364, Address: 0x305080, Func Offset: 0x50
	// Line 365, Address: 0x305180, Func Offset: 0x150
	// Line 366, Address: 0x3051a8, Func Offset: 0x178
	// Func End, Address: 0x3051b0, Func Offset: 0x180
}

// xGridUpdate__FP5xGridP4xEnt
// Start address: 0x3051b0
void xGridUpdate(xGrid* grid, xEnt* ent)
{
	int32 dx;
	int32 dz;
	// Line 331, Address: 0x3051b0, Func Offset: 0
	// Line 333, Address: 0x3051b8, Func Offset: 0x8
	// Line 331, Address: 0x3051bc, Func Offset: 0xc
	// Line 333, Address: 0x3051c0, Func Offset: 0x10
	// Line 331, Address: 0x3051c4, Func Offset: 0x14
	// Line 333, Address: 0x3051cc, Func Offset: 0x1c
	// Line 334, Address: 0x3051d4, Func Offset: 0x24
	// Line 336, Address: 0x3051f8, Func Offset: 0x48
	// Line 337, Address: 0x305208, Func Offset: 0x58
	// Line 339, Address: 0x305264, Func Offset: 0xb4
	// Line 340, Address: 0x305268, Func Offset: 0xb8
	// Func End, Address: 0x30527c, Func Offset: 0xcc
}

// xGridRemove__FP10xGridBound
// Start address: 0x305280
int32 xGridRemove(xGridBound* gridb)
{
	xGridBound* cur;
	xGridBound** prev;
	// Line 270, Address: 0x305280, Func Offset: 0
	// Line 279, Address: 0x305284, Func Offset: 0x4
	// Line 282, Address: 0x30528c, Func Offset: 0xc
	// Line 284, Address: 0x305298, Func Offset: 0x18
	// Line 285, Address: 0x3052a4, Func Offset: 0x24
	// Line 291, Address: 0x3052a8, Func Offset: 0x28
	// Line 292, Address: 0x3052b0, Func Offset: 0x30
	// Line 293, Address: 0x3052b4, Func Offset: 0x34
	// Line 294, Address: 0x3052b8, Func Offset: 0x38
	// Line 300, Address: 0x3052d0, Func Offset: 0x50
	// Line 305, Address: 0x3052d4, Func Offset: 0x54
	// Line 300, Address: 0x3052d8, Func Offset: 0x58
	// Line 301, Address: 0x3052dc, Func Offset: 0x5c
	// Line 302, Address: 0x3052e0, Func Offset: 0x60
	// Line 303, Address: 0x3052e4, Func Offset: 0x64
	// Line 304, Address: 0x3052e8, Func Offset: 0x68
	// Line 305, Address: 0x3052ec, Func Offset: 0x6c
	// Line 306, Address: 0x3052f0, Func Offset: 0x70
	// Line 307, Address: 0x3052f4, Func Offset: 0x74
	// Line 308, Address: 0x3052f8, Func Offset: 0x78
	// Line 309, Address: 0x305300, Func Offset: 0x80
	// Func End, Address: 0x305308, Func Offset: 0x88
}

// xGridAdd__FP5xGridP4xEnt
// Start address: 0x305310
int32 xGridAdd(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	xVec3* center;
	float32 maxr;
	xSphere* sph;
	xBBox* bbox;
	float32 rx;
	float32 ry;
	float32 rz;
	xBBox* bbox;
	float32 rx;
	float32 rz;
	float32 cgridx;
	float32 cgridz;
	int32 x;
	int32 z;
	// Line 165, Address: 0x305310, Func Offset: 0
	// Line 174, Address: 0x305314, Func Offset: 0x4
	// Line 165, Address: 0x305318, Func Offset: 0x8
	// Line 173, Address: 0x305338, Func Offset: 0x28
	// Line 174, Address: 0x305340, Func Offset: 0x30
	// Line 177, Address: 0x305348, Func Offset: 0x38
	// Line 181, Address: 0x305358, Func Offset: 0x48
	// Line 182, Address: 0x3053b0, Func Offset: 0xa0
	// Line 183, Address: 0x3053b8, Func Offset: 0xa8
	// Line 185, Address: 0x3053c0, Func Offset: 0xb0
	// Line 191, Address: 0x3053c8, Func Offset: 0xb8
	// Line 202, Address: 0x3053d4, Func Offset: 0xc4
	// Line 196, Address: 0x3053d8, Func Offset: 0xc8
	// Line 202, Address: 0x3053e4, Func Offset: 0xd4
	// Line 196, Address: 0x3053e8, Func Offset: 0xd8
	// Line 202, Address: 0x305408, Func Offset: 0xf8
	// Line 196, Address: 0x30540c, Func Offset: 0xfc
	// Line 202, Address: 0x305410, Func Offset: 0x100
	// Line 196, Address: 0x305418, Func Offset: 0x108
	// Line 202, Address: 0x30541c, Func Offset: 0x10c
	// Line 196, Address: 0x305424, Func Offset: 0x114
	// Line 202, Address: 0x305428, Func Offset: 0x118
	// Line 196, Address: 0x30542c, Func Offset: 0x11c
	// Line 202, Address: 0x305430, Func Offset: 0x120
	// Line 196, Address: 0x30543c, Func Offset: 0x12c
	// Line 202, Address: 0x305440, Func Offset: 0x130
	// Line 196, Address: 0x30544c, Func Offset: 0x13c
	// Line 202, Address: 0x305454, Func Offset: 0x144
	// Line 196, Address: 0x305458, Func Offset: 0x148
	// Line 202, Address: 0x30545c, Func Offset: 0x14c
	// Line 209, Address: 0x305488, Func Offset: 0x178
	// Line 210, Address: 0x3054e0, Func Offset: 0x1d0
	// Line 211, Address: 0x3054e8, Func Offset: 0x1d8
	// Line 213, Address: 0x3054f0, Func Offset: 0x1e0
	// Line 219, Address: 0x3054f8, Func Offset: 0x1e8
	// Line 226, Address: 0x305504, Func Offset: 0x1f4
	// Line 223, Address: 0x305508, Func Offset: 0x1f8
	// Line 226, Address: 0x305510, Func Offset: 0x200
	// Line 223, Address: 0x305514, Func Offset: 0x204
	// Line 226, Address: 0x305520, Func Offset: 0x210
	// Line 223, Address: 0x305524, Func Offset: 0x214
	// Line 226, Address: 0x305528, Func Offset: 0x218
	// Line 233, Address: 0x30553c, Func Offset: 0x22c
	// Line 234, Address: 0x305598, Func Offset: 0x288
	// Line 235, Address: 0x3055a0, Func Offset: 0x290
	// Line 237, Address: 0x3055a8, Func Offset: 0x298
	// Line 245, Address: 0x3055b0, Func Offset: 0x2a0
	// Line 250, Address: 0x3055b8, Func Offset: 0x2a8
	// Line 251, Address: 0x3055c8, Func Offset: 0x2b8
	// Line 252, Address: 0x3055d0, Func Offset: 0x2c0
	// Line 250, Address: 0x3055d4, Func Offset: 0x2c4
	// Line 251, Address: 0x3055dc, Func Offset: 0x2cc
	// Line 252, Address: 0x3055e0, Func Offset: 0x2d0
	// Line 253, Address: 0x305640, Func Offset: 0x330
	// Line 252, Address: 0x305648, Func Offset: 0x338
	// Line 253, Address: 0x30564c, Func Offset: 0x33c
	// Line 255, Address: 0x3056ac, Func Offset: 0x39c
	// Line 253, Address: 0x3056b8, Func Offset: 0x3a8
	// Line 255, Address: 0x3056c0, Func Offset: 0x3b0
	// Line 256, Address: 0x305720, Func Offset: 0x410
	// Line 259, Address: 0x305724, Func Offset: 0x414
	// Line 257, Address: 0x305728, Func Offset: 0x418
	// Line 258, Address: 0x30572c, Func Offset: 0x41c
	// Line 259, Address: 0x305730, Func Offset: 0x420
	// Line 261, Address: 0x305738, Func Offset: 0x428
	// Line 262, Address: 0x305740, Func Offset: 0x430
	// Func End, Address: 0x305760, Func Offset: 0x450
}

// xGridEmpty__FP5xGrid
// Start address: 0x305760
void xGridEmpty(xGrid* grid)
{
	xGridBound** head;
	xGridBound* curr;
	int32 x;
	int32 z;
	xGridBound* currnext;
	xGridBound* currnext;
	// Line 100, Address: 0x305760, Func Offset: 0
	// Line 106, Address: 0x305774, Func Offset: 0x14
	// Line 100, Address: 0x30577c, Func Offset: 0x1c
	// Line 101, Address: 0x305780, Func Offset: 0x20
	// Line 102, Address: 0x305790, Func Offset: 0x30
	// Line 103, Address: 0x3057a8, Func Offset: 0x48
	// Line 104, Address: 0x3057ac, Func Offset: 0x4c
	// Line 105, Address: 0x3057b8, Func Offset: 0x58
	// Line 106, Address: 0x3057bc, Func Offset: 0x5c
	// Line 108, Address: 0x3057d8, Func Offset: 0x78
	// Line 109, Address: 0x3057e0, Func Offset: 0x80
	// Line 110, Address: 0x3057e4, Func Offset: 0x84
	// Line 111, Address: 0x3057f8, Func Offset: 0x98
	// Line 114, Address: 0x305810, Func Offset: 0xb0
	// Line 115, Address: 0x305814, Func Offset: 0xb4
	// Line 117, Address: 0x30581c, Func Offset: 0xbc
	// Line 115, Address: 0x305824, Func Offset: 0xc4
	// Line 116, Address: 0x305828, Func Offset: 0xc8
	// Line 117, Address: 0x30582c, Func Offset: 0xcc
	// Line 119, Address: 0x305848, Func Offset: 0xe8
	// Line 122, Address: 0x305850, Func Offset: 0xf0
	// Func End, Address: 0x305858, Func Offset: 0xf8
}

// xGridKill__FP5xGrid
// Start address: 0x305860
void xGridKill(xGrid* grid)
{
	// Line 86, Address: 0x305860, Func Offset: 0
	// Line 88, Address: 0x30586c, Func Offset: 0xc
	// Line 90, Address: 0x305874, Func Offset: 0x14
	// Line 91, Address: 0x305878, Func Offset: 0x18
	// Func End, Address: 0x305888, Func Offset: 0x28
}

// xGridInit__FP5xGridPC4xBoxUsUsUc
// Start address: 0x305890
void xGridInit(xGrid* grid, xBox* bounds, uint16 nx, uint16 nz, uint8 ingrid_id)
{
	float32 gsizex;
	float32 gsizez;
	// Line 34, Address: 0x305890, Func Offset: 0
	// Line 42, Address: 0x3058ac, Func Offset: 0x1c
	// Line 43, Address: 0x3058b4, Func Offset: 0x24
	// Line 44, Address: 0x3058b8, Func Offset: 0x28
	// Line 45, Address: 0x3058bc, Func Offset: 0x2c
	// Line 46, Address: 0x3058c4, Func Offset: 0x34
	// Line 47, Address: 0x3058cc, Func Offset: 0x3c
	// Line 48, Address: 0x3058d4, Func Offset: 0x44
	// Line 49, Address: 0x3058dc, Func Offset: 0x4c
	// Line 50, Address: 0x3058e4, Func Offset: 0x54
	// Line 49, Address: 0x3058ec, Func Offset: 0x5c
	// Line 51, Address: 0x3058f0, Func Offset: 0x60
	// Line 52, Address: 0x305934, Func Offset: 0xa4
	// Line 53, Address: 0x305970, Func Offset: 0xe0
	// Line 52, Address: 0x305974, Func Offset: 0xe4
	// Line 53, Address: 0x305978, Func Offset: 0xe8
	// Line 55, Address: 0x305998, Func Offset: 0x108
	// Line 56, Address: 0x3059a0, Func Offset: 0x110
	// Line 57, Address: 0x3059dc, Func Offset: 0x14c
	// Line 58, Address: 0x3059e0, Func Offset: 0x150
	// Line 60, Address: 0x305a04, Func Offset: 0x174
	// Line 61, Address: 0x305a10, Func Offset: 0x180
	// Line 62, Address: 0x305a4c, Func Offset: 0x1bc
	// Line 63, Address: 0x305a50, Func Offset: 0x1c0
	// Line 64, Address: 0x305a80, Func Offset: 0x1f0
	// Line 63, Address: 0x305a88, Func Offset: 0x1f8
	// Line 64, Address: 0x305a8c, Func Offset: 0x1fc
	// Line 63, Address: 0x305a94, Func Offset: 0x204
	// Line 64, Address: 0x305a98, Func Offset: 0x208
	// Line 66, Address: 0x305aa4, Func Offset: 0x214
	// Line 64, Address: 0x305ab0, Func Offset: 0x220
	// Line 66, Address: 0x305ab4, Func Offset: 0x224
	// Line 83, Address: 0x305ac4, Func Offset: 0x234
	// Func End, Address: 0x305adc, Func Offset: 0x24c
}

// xGridBoundInit__FP10xGridBoundPv
// Start address: 0x305ae0
void xGridBoundInit(xGridBound* gridb, void* data)
{
	// Line 23, Address: 0x305ae0, Func Offset: 0
	// Line 30, Address: 0x305ae4, Func Offset: 0x4
	// Line 24, Address: 0x305ae8, Func Offset: 0x8
	// Line 25, Address: 0x305af0, Func Offset: 0x10
	// Line 26, Address: 0x305af4, Func Offset: 0x14
	// Line 27, Address: 0x305af8, Func Offset: 0x18
	// Line 28, Address: 0x305afc, Func Offset: 0x1c
	// Line 29, Address: 0x305b00, Func Offset: 0x20
	// Line 31, Address: 0x305b04, Func Offset: 0x24
	// Func End, Address: 0x305b0c, Func Offset: 0x2c
}

