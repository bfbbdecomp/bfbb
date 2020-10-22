typedef struct xVec3;
typedef struct RwObjectHasFrame;
typedef struct xMat4x3;
typedef struct xModelInstance;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNode;
typedef struct xBase;
typedef struct rxHeapFreeBlock;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterialList;
typedef struct xAnimSingle;
typedef struct RxNodeDefinition;
typedef struct xEnt;
typedef struct xQCData;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpClump;
typedef struct RxPipelineNodeParam;
typedef struct tri_data;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBA;
typedef struct xQuat;
typedef struct xAnimTransition;
typedef struct RpGeometry;
typedef struct xEnv;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct zGooParams;
typedef struct xAnimEffect;
typedef struct xLinkAsset;
typedef struct RpMorphTarget;
typedef struct xCollis;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFile;
typedef struct xAnimPlay;
typedef struct _class_0;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBaseAsset;
typedef struct rxReq;
typedef struct xEntAsset;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpTriangle;
typedef struct RwResEntry;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xEntFrame;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTable;
typedef struct xShadowSimplePoly;
typedef struct xMemPool;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xSurface;
typedef struct xBBox;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct RwTexture;
typedef struct xScene;
typedef struct RwSphere;
typedef struct xShadowSimpleCache;
typedef struct xModelBucket;
typedef struct xEntCollis;
typedef struct xAnimTransitionList;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RpLight;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xFFX;
typedef struct RxNodeMethods;
typedef struct anim_coll_data;
typedef struct RxCluster;
typedef struct _class_1;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;
typedef struct xBound;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_2)(RxPipelineNode*);
typedef int8*(*type_3)(xBase*);
typedef int8*(*type_4)(uint32);
typedef uint32(*type_5)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_7)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_11)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_13)(RxNodeDefinition*);
typedef void(*type_14)(RxNodeDefinition*);
typedef int32(*type_16)(RxPipelineNode*);
typedef void(*type_19)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_20)(RpAtomic*);
typedef void(*type_22)(xAnimPlay*, xAnimState*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef xBase*(*type_26)(uint32);
typedef void(*type_27)(xEnt*, xScene*, float32);
typedef void(*type_30)(xEnt*, xVec3*);
typedef void(*type_32)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_33)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_34)(xEnt*);
typedef uint32(*type_35)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_37)(xMemPool*, void*);
typedef void(*type_41)(RwResEntry*);

typedef float32 type_8[2];
typedef float32 type_15[2];
typedef uint8 type_17[2];
typedef xAnimMultiFileEntry type_18[1];
typedef uint16 type_21[3];
typedef uint8 type_24[3];
typedef xVec3 type_25[3];
typedef uint32 type_28[4];
typedef RwTexCoords* type_29[8];
typedef float32 type_31[16];
typedef xVec3 type_36[4];
typedef int8 type_38[16];
typedef int8 type_39[32];
typedef int8 type_40[32];
typedef int8 type_42[16];
typedef uint8 type_43[3];
typedef float32 type_44[4];
typedef xCollis type_45[18];
typedef RxCluster type_46[1];

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xEnv
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct zGooParams
{
	float32 depth;
	float32 orig_depth;
	xEnt* goo_ent;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct rxReq
{
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	uint8 pad[3];
	void* moprops;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xFFX
{
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

struct _class_1
{
	xVec3* verts;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

int8 buffer[16];
int8 buffer[16];
zGooParams* zgoo_gps;
int32 zgoo_ngps;
int32 zgoo_nused;
uint32 gActiveHeap;

void zGooMeltFinished(RpAtomic* atomic);
void zGooStopTide();
void zGooCollsEnd();
void zGooCollsBegin();
int32 zGooIs(xEnt* obj, float32& depth, uint32 playerCheck);
int32 zGooAdd(xEnt* obj, float32 depth, int32 freezeGroup);
void zGooExit();
void zGooInit(int32 nobj);

// zGooMeltFinished__FP8RpAtomic
// Start address: 0x30f8a0
void zGooMeltFinished(RpAtomic* atomic)
{
	int32 i;
	xEnt* gooey;
	// Line 185, Address: 0x30f8a0, Func Offset: 0
	// Line 187, Address: 0x30f8b8, Func Offset: 0x18
	// Line 188, Address: 0x30f8d0, Func Offset: 0x30
	// Line 189, Address: 0x30f8dc, Func Offset: 0x3c
	// Line 192, Address: 0x30f8ec, Func Offset: 0x4c
	// Line 194, Address: 0x30f908, Func Offset: 0x68
	// Line 195, Address: 0x30f920, Func Offset: 0x80
	// Func End, Address: 0x30f938, Func Offset: 0x98
}

// zGooStopTide__Fv
// Start address: 0x30f940
void zGooStopTide()
{
	int32 i;
	// Line 176, Address: 0x30f940, Func Offset: 0
	// Line 178, Address: 0x30f950, Func Offset: 0x10
	// Line 180, Address: 0x30f968, Func Offset: 0x28
	// Line 181, Address: 0x30f98c, Func Offset: 0x4c
	// Line 182, Address: 0x30f9a0, Func Offset: 0x60
	// Func End, Address: 0x30f9b4, Func Offset: 0x74
}

// zGooCollsEnd__Fv
// Start address: 0x30f9c0
void zGooCollsEnd()
{
	int32 i;
	xEnt* gooey;
	xVec3 change;
	// Line 160, Address: 0x30f9c0, Func Offset: 0
	// Line 162, Address: 0x30f9d8, Func Offset: 0x18
	// Line 163, Address: 0x30fa00, Func Offset: 0x40
	// Line 164, Address: 0x30fa04, Func Offset: 0x44
	// Line 166, Address: 0x30fa10, Func Offset: 0x50
	// Line 169, Address: 0x30fa14, Func Offset: 0x54
	// Line 167, Address: 0x30fa18, Func Offset: 0x58
	// Line 168, Address: 0x30fa20, Func Offset: 0x60
	// Line 169, Address: 0x30fa24, Func Offset: 0x64
	// Line 171, Address: 0x30fa30, Func Offset: 0x70
	// Line 172, Address: 0x30fa48, Func Offset: 0x88
	// Func End, Address: 0x30fa64, Func Offset: 0xa4
}

// zGooCollsBegin__Fv
// Start address: 0x30fa70
void zGooCollsBegin()
{
	int32 i;
	xEnt* gooey;
	float32 ignoredepth;
	xVec3 change;
	// Line 142, Address: 0x30fa70, Func Offset: 0
	// Line 144, Address: 0x30fa90, Func Offset: 0x20
	// Line 147, Address: 0x30fab4, Func Offset: 0x44
	// Line 145, Address: 0x30fabc, Func Offset: 0x4c
	// Line 147, Address: 0x30fac4, Func Offset: 0x54
	// Line 148, Address: 0x30fb58, Func Offset: 0xe8
	// Line 151, Address: 0x30fb64, Func Offset: 0xf4
	// Line 153, Address: 0x30fb68, Func Offset: 0xf8
	// Line 150, Address: 0x30fb6c, Func Offset: 0xfc
	// Line 153, Address: 0x30fb70, Func Offset: 0x100
	// Line 151, Address: 0x30fb74, Func Offset: 0x104
	// Line 152, Address: 0x30fb84, Func Offset: 0x114
	// Line 153, Address: 0x30fb88, Func Offset: 0x118
	// Line 154, Address: 0x30fb94, Func Offset: 0x124
	// Line 155, Address: 0x30fb98, Func Offset: 0x128
	// Line 156, Address: 0x30fbb0, Func Offset: 0x140
	// Func End, Address: 0x30fbd4, Func Offset: 0x164
}

// zGooIs__FP4xEntRfUi
// Start address: 0x30fbe0
int32 zGooIs(xEnt* obj, float32& depth, uint32 playerCheck)
{
	int32 ret;
	int32 i;
	// Line 115, Address: 0x30fbe0, Func Offset: 0
	// Line 116, Address: 0x30fbe4, Func Offset: 0x4
	// Line 115, Address: 0x30fbe8, Func Offset: 0x8
	// Line 119, Address: 0x30fbf8, Func Offset: 0x18
	// Line 120, Address: 0x30fc10, Func Offset: 0x30
	// Line 122, Address: 0x30fc2c, Func Offset: 0x4c
	// Line 121, Address: 0x30fc30, Func Offset: 0x50
	// Line 123, Address: 0x30fc3c, Func Offset: 0x5c
	// Line 124, Address: 0x30fc44, Func Offset: 0x64
	// Line 125, Address: 0x30fc48, Func Offset: 0x68
	// Line 127, Address: 0x30fc58, Func Offset: 0x78
	// Line 132, Address: 0x30fc60, Func Offset: 0x80
	// Line 127, Address: 0x30fc68, Func Offset: 0x88
	// Line 133, Address: 0x30fc6c, Func Offset: 0x8c
	// Line 132, Address: 0x30fc74, Func Offset: 0x94
	// Line 133, Address: 0x30fc7c, Func Offset: 0x9c
	// Line 134, Address: 0x30fc84, Func Offset: 0xa4
	// Line 135, Address: 0x30fc94, Func Offset: 0xb4
	// Line 138, Address: 0x30fc98, Func Offset: 0xb8
	// Func End, Address: 0x30fcac, Func Offset: 0xcc
}

// zGooAdd__FP4xEntfi
// Start address: 0x30fcb0
int32 zGooAdd(xEnt* obj, float32 depth, int32 freezeGroup)
{
	int32 i;
	zGooParams* gp;
	// Line 58, Address: 0x30fcb0, Func Offset: 0
	// Line 77, Address: 0x30fcb8, Func Offset: 0x8
	// Line 78, Address: 0x30fcd0, Func Offset: 0x20
	// Line 79, Address: 0x30fcdc, Func Offset: 0x2c
	// Line 81, Address: 0x30fce4, Func Offset: 0x34
	// Line 82, Address: 0x30fcf8, Func Offset: 0x48
	// Line 85, Address: 0x30fd08, Func Offset: 0x58
	// Line 95, Address: 0x30fd10, Func Offset: 0x60
	// Line 96, Address: 0x30fd24, Func Offset: 0x74
	// Line 97, Address: 0x30fd2c, Func Offset: 0x7c
	// Line 98, Address: 0x30fd30, Func Offset: 0x80
	// Line 104, Address: 0x30fd44, Func Offset: 0x94
	// Line 105, Address: 0x30fd4c, Func Offset: 0x9c
	// Line 108, Address: 0x30fd58, Func Offset: 0xa8
	// Line 109, Address: 0x30fd60, Func Offset: 0xb0
	// Func End, Address: 0x30fd6c, Func Offset: 0xbc
}

// zGooExit__Fv
// Start address: 0x30fd70
void zGooExit()
{
	// Line 34, Address: 0x30fd70, Func Offset: 0
	// Line 35, Address: 0x30fd74, Func Offset: 0x4
	// Line 37, Address: 0x30fd78, Func Offset: 0x8
	// Func End, Address: 0x30fd80, Func Offset: 0x10
}

// zGooInit__Fi
// Start address: 0x30fd80
void zGooInit(int32 nobj)
{
	// Line 22, Address: 0x30fd80, Func Offset: 0
	// Line 24, Address: 0x30fd84, Func Offset: 0x4
	// Line 22, Address: 0x30fd88, Func Offset: 0x8
	// Line 24, Address: 0x30fd8c, Func Offset: 0xc
	// Line 22, Address: 0x30fd90, Func Offset: 0x10
	// Line 24, Address: 0x30fd94, Func Offset: 0x14
	// Line 26, Address: 0x30fda8, Func Offset: 0x28
	// Line 24, Address: 0x30fdac, Func Offset: 0x2c
	// Line 28, Address: 0x30fdb0, Func Offset: 0x30
	// Func End, Address: 0x30fdc0, Func Offset: 0x40
}

