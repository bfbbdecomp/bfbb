typedef struct tri_data_0;
typedef struct xAnimFile;
typedef struct RxPipelineNodeParam;
typedef struct xEntDrive;
typedef struct xAnimSingle;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct xEntAsset;
typedef struct xQuat;
typedef struct xCollis;
typedef struct RwMatrixTag;
typedef struct xEnt;
typedef struct xBaseAsset;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct xAnimMultiFileBase;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct RpAtomic;
typedef struct tri_data_1;
typedef struct xEnv;
typedef struct _class_0;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct xVec3;
typedef struct RpInterpolator;
typedef struct RwSurfaceProperties;
typedef struct xAnimActiveEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimMultiFile;
typedef struct rxReq;
typedef struct xAnimPlay;
typedef struct xShadowSimplePoly;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct RpMaterialList;
typedef struct _class_1;
typedef struct RpMaterial;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxHeapFreeBlock;
typedef struct xModelPool;
typedef struct xRot;
typedef struct xScene;
typedef struct RpClump;
typedef struct xShadowSimpleCache;
typedef struct xBound;
typedef struct RpGeometry;
typedef struct xEntCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGridBound;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xQCData;
typedef struct xAnimTable;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xMemPool;
typedef struct RpMeshHeader;
typedef struct xFFX;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xLinkAsset;
typedef struct RpTriangle;
typedef struct xEntShadow;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xAnimTransitionList;
typedef struct anim_coll_data;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RwResEntry;
typedef struct xBase;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct RwRGBAReal;
typedef struct xModelBucket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_1)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_4)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef int32(*type_7)(RxPipelineNode*);
typedef uint32(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(RxPipelineNode*);
typedef xBase*(*type_10)(uint32);
typedef int8*(*type_14)(xBase*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_16)(uint32);
typedef void(*type_17)(xEnt*, xScene*, float32);
typedef void(*type_19)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_20)(xEnt*, xVec3*);
typedef void(*type_21)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_22)(xAnimPlay*, xAnimState*);
typedef void(*type_23)(xEnt*);
typedef RpClump*(*type_24)(RpClump*, void*);
typedef uint32(*type_25)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef RpAtomic*(*type_31)(RpAtomic*);
typedef void(*type_35)(xMemPool*, void*);
typedef void(*type_38)(RwResEntry*);
typedef int32(*type_41)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef float32 type_5[2];
typedef uint8 type_11[2];
typedef xAnimMultiFileEntry type_12[1];
typedef xVec3 type_13[3];
typedef float32 type_18[16];
typedef uint32 type_28[4];
typedef xVec3 type_29[4];
typedef uint16 type_30[3];
typedef uint8 type_32[3];
typedef xCollis type_33[18];
typedef float32 type_34[4];
typedef int8 type_36[32];
typedef int8 type_37[32];
typedef RwTexCoords* type_39[8];
typedef RxCluster type_40[1];
typedef float32 type_43[2];

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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
		tri_data_1 tri;
	};
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xEnv
{
};

struct _class_0
{
	xVec3* verts;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct rxReq
{
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _class_1
{
	float32 t;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xFFX
{
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct anim_coll_data
{
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xSurface
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};


void xEntDriveUpdate(xEntDrive* drv, float32 dt);
void xEntDriveDismount(xEntDrive* drv, float32 dmt);
void xEntDriveMount(xEntDrive* drv, xEnt* driver, float32 mt, xCollis* coll);
void xEntDriveInit(xEntDrive* drv, xEnt* driven);

// xEntDriveUpdate__FP9xEntDriveP6xScenefPC7xCollis
// Start address: 0x1d5810
void xEntDriveUpdate(xEntDrive* drv, float32 dt)
{
	xVec3 euler;
	xMat3x3 rot;
	xMat3x3 a_descaled;
	float32 dummy;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	xVec3 newq;
	xModelInstance& m;
	xVec3 world_loc;
	xVec3 new_loc;
	xMat4x3 oldmat;
	// Line 169, Address: 0x1d5810, Func Offset: 0
	// Line 173, Address: 0x1d5820, Func Offset: 0x10
	// Line 177, Address: 0x1d5828, Func Offset: 0x18
	// Line 187, Address: 0x1d5840, Func Offset: 0x30
	// Line 189, Address: 0x1d5870, Func Offset: 0x60
	// Line 190, Address: 0x1d58a0, Func Offset: 0x90
	// Line 193, Address: 0x1d58a8, Func Offset: 0x98
	// Line 194, Address: 0x1d58c0, Func Offset: 0xb0
	// Line 195, Address: 0x1d58c4, Func Offset: 0xb4
	// Line 199, Address: 0x1d58d0, Func Offset: 0xc0
	// Line 202, Address: 0x1d58d4, Func Offset: 0xc4
	// Line 203, Address: 0x1d58e0, Func Offset: 0xd0
	// Line 205, Address: 0x1d58ec, Func Offset: 0xdc
	// Line 206, Address: 0x1d58f0, Func Offset: 0xe0
	// Line 208, Address: 0x1d5908, Func Offset: 0xf8
	// Line 210, Address: 0x1d5914, Func Offset: 0x104
	// Line 212, Address: 0x1d591c, Func Offset: 0x10c
	// Line 213, Address: 0x1d5928, Func Offset: 0x118
	// Line 215, Address: 0x1d5944, Func Offset: 0x134
	// Line 217, Address: 0x1d5948, Func Offset: 0x138
	// Line 222, Address: 0x1d5970, Func Offset: 0x160
	// Line 224, Address: 0x1d5998, Func Offset: 0x188
	// Line 225, Address: 0x1d59b0, Func Offset: 0x1a0
	// Line 226, Address: 0x1d59e0, Func Offset: 0x1d0
	// Line 235, Address: 0x1d59e8, Func Offset: 0x1d8
	// Line 236, Address: 0x1d5ad8, Func Offset: 0x2c8
	// Line 237, Address: 0x1d5c08, Func Offset: 0x3f8
	// Line 238, Address: 0x1d5d38, Func Offset: 0x528
	// Line 239, Address: 0x1d5d44, Func Offset: 0x534
	// Line 240, Address: 0x1d5d60, Func Offset: 0x550
	// Line 241, Address: 0x1d5d74, Func Offset: 0x564
	// Line 242, Address: 0x1d5d7c, Func Offset: 0x56c
	// Line 244, Address: 0x1d5d80, Func Offset: 0x570
	// Line 247, Address: 0x1d5d90, Func Offset: 0x580
	// Line 248, Address: 0x1d5da0, Func Offset: 0x590
	// Line 249, Address: 0x1d5db8, Func Offset: 0x5a8
	// Line 250, Address: 0x1d5de8, Func Offset: 0x5d8
	// Line 253, Address: 0x1d5df0, Func Offset: 0x5e0
	// Line 254, Address: 0x1d5e78, Func Offset: 0x668
	// Line 253, Address: 0x1d5e7c, Func Offset: 0x66c
	// Line 254, Address: 0x1d5e90, Func Offset: 0x680
	// Line 255, Address: 0x1d5ec4, Func Offset: 0x6b4
	// Line 256, Address: 0x1d5ef4, Func Offset: 0x6e4
	// Line 257, Address: 0x1d5f2c, Func Offset: 0x71c
	// Line 258, Address: 0x1d5f64, Func Offset: 0x754
	// Line 259, Address: 0x1d5f68, Func Offset: 0x758
	// Line 260, Address: 0x1d5f80, Func Offset: 0x770
	// Line 261, Address: 0x1d5f98, Func Offset: 0x788
	// Line 262, Address: 0x1d5fc8, Func Offset: 0x7b8
	// Line 265, Address: 0x1d5fd0, Func Offset: 0x7c0
	// Line 267, Address: 0x1d5fe0, Func Offset: 0x7d0
	// Line 268, Address: 0x1d5fe4, Func Offset: 0x7d4
	// Line 271, Address: 0x1d6000, Func Offset: 0x7f0
	// Line 272, Address: 0x1d6008, Func Offset: 0x7f8
	// Line 271, Address: 0x1d600c, Func Offset: 0x7fc
	// Line 272, Address: 0x1d6010, Func Offset: 0x800
	// Line 271, Address: 0x1d6014, Func Offset: 0x804
	// Line 272, Address: 0x1d6018, Func Offset: 0x808
	// Line 271, Address: 0x1d601c, Func Offset: 0x80c
	// Line 272, Address: 0x1d60ac, Func Offset: 0x89c
	// Line 273, Address: 0x1d60b8, Func Offset: 0x8a8
	// Line 272, Address: 0x1d60bc, Func Offset: 0x8ac
	// Line 273, Address: 0x1d60c0, Func Offset: 0x8b0
	// Line 272, Address: 0x1d60c4, Func Offset: 0x8b4
	// Line 273, Address: 0x1d60c8, Func Offset: 0x8b8
	// Line 272, Address: 0x1d60cc, Func Offset: 0x8bc
	// Line 273, Address: 0x1d60d8, Func Offset: 0x8c8
	// Line 288, Address: 0x1d6148, Func Offset: 0x938
	// Line 291, Address: 0x1d61b8, Func Offset: 0x9a8
	// Line 293, Address: 0x1d61d8, Func Offset: 0x9c8
	// Line 294, Address: 0x1d6208, Func Offset: 0x9f8
	// Line 296, Address: 0x1d620c, Func Offset: 0x9fc
	// Line 294, Address: 0x1d6210, Func Offset: 0xa00
	// Line 296, Address: 0x1d6214, Func Offset: 0xa04
	// Line 294, Address: 0x1d621c, Func Offset: 0xa0c
	// Line 296, Address: 0x1d629c, Func Offset: 0xa8c
	// Line 297, Address: 0x1d62a8, Func Offset: 0xa98
	// Line 296, Address: 0x1d62b0, Func Offset: 0xaa0
	// Line 297, Address: 0x1d62c4, Func Offset: 0xab4
	// Line 298, Address: 0x1d6300, Func Offset: 0xaf0
	// Line 299, Address: 0x1d6390, Func Offset: 0xb80
	// Line 302, Address: 0x1d6398, Func Offset: 0xb88
	// Line 303, Address: 0x1d6420, Func Offset: 0xc10
	// Line 302, Address: 0x1d6424, Func Offset: 0xc14
	// Line 303, Address: 0x1d6438, Func Offset: 0xc28
	// Line 304, Address: 0x1d646c, Func Offset: 0xc5c
	// Line 306, Address: 0x1d6470, Func Offset: 0xc60
	// Line 307, Address: 0x1d64a0, Func Offset: 0xc90
	// Line 308, Address: 0x1d64d8, Func Offset: 0xcc8
	// Line 313, Address: 0x1d6510, Func Offset: 0xd00
	// Line 314, Address: 0x1d6520, Func Offset: 0xd10
	// Line 318, Address: 0x1d6540, Func Offset: 0xd30
	// Line 319, Address: 0x1d6544, Func Offset: 0xd34
	// Line 318, Address: 0x1d6548, Func Offset: 0xd38
	// Line 319, Address: 0x1d6564, Func Offset: 0xd54
	// Line 320, Address: 0x1d6574, Func Offset: 0xd64
	// Line 321, Address: 0x1d6590, Func Offset: 0xd80
	// Line 322, Address: 0x1d65c0, Func Offset: 0xdb0
	// Line 325, Address: 0x1d65c8, Func Offset: 0xdb8
	// Line 326, Address: 0x1d6604, Func Offset: 0xdf4
	// Line 327, Address: 0x1d6608, Func Offset: 0xdf8
	// Line 328, Address: 0x1d6620, Func Offset: 0xe10
	// Line 329, Address: 0x1d6638, Func Offset: 0xe28
	// Line 330, Address: 0x1d6668, Func Offset: 0xe58
	// Line 333, Address: 0x1d6670, Func Offset: 0xe60
	// Line 334, Address: 0x1d66ac, Func Offset: 0xe9c
	// Line 336, Address: 0x1d66b0, Func Offset: 0xea0
	// Func End, Address: 0x1d66c4, Func Offset: 0xeb4
}

// xEntDriveDismount__FP9xEntDrivef
// Start address: 0x1d66d0
void xEntDriveDismount(xEntDrive* drv, float32 dmt)
{
	// Line 131, Address: 0x1d66d0, Func Offset: 0
	// Line 135, Address: 0x1d66d4, Func Offset: 0x4
	// Line 139, Address: 0x1d66e0, Func Offset: 0x10
	// Line 146, Address: 0x1d66ec, Func Offset: 0x1c
	// Line 148, Address: 0x1d6710, Func Offset: 0x40
	// Line 149, Address: 0x1d6740, Func Offset: 0x70
	// Line 152, Address: 0x1d6748, Func Offset: 0x78
	// Line 153, Address: 0x1d674c, Func Offset: 0x7c
	// Line 154, Address: 0x1d6754, Func Offset: 0x84
	// Line 155, Address: 0x1d6758, Func Offset: 0x88
	// Line 156, Address: 0x1d6768, Func Offset: 0x98
	// Line 157, Address: 0x1d6780, Func Offset: 0xb0
	// Line 158, Address: 0x1d6784, Func Offset: 0xb4
	// Line 161, Address: 0x1d6788, Func Offset: 0xb8
	// Line 159, Address: 0x1d678c, Func Offset: 0xbc
	// Line 160, Address: 0x1d6790, Func Offset: 0xc0
	// Line 161, Address: 0x1d6794, Func Offset: 0xc4
	// Line 163, Address: 0x1d67a0, Func Offset: 0xd0
	// Line 165, Address: 0x1d67c0, Func Offset: 0xf0
	// Line 166, Address: 0x1d6804, Func Offset: 0x134
	// Func End, Address: 0x1d6814, Func Offset: 0x144
}

// xEntDriveMount__FP9xEntDriveP4xEntfPC7xCollis
// Start address: 0x1d6820
void xEntDriveMount(xEntDrive* drv, xEnt* driver, float32 mt, xCollis* coll)
{
	xVec3 euler;
	xMat3x3 a_descaled;
	float32 dummy;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	// Line 50, Address: 0x1d6820, Func Offset: 0
	// Line 60, Address: 0x1d683c, Func Offset: 0x1c
	// Line 62, Address: 0x1d6868, Func Offset: 0x48
	// Line 63, Address: 0x1d6898, Func Offset: 0x78
	// Line 66, Address: 0x1d68a0, Func Offset: 0x80
	// Line 68, Address: 0x1d68b0, Func Offset: 0x90
	// Line 70, Address: 0x1d68cc, Func Offset: 0xac
	// Line 74, Address: 0x1d68d0, Func Offset: 0xb0
	// Line 71, Address: 0x1d68d4, Func Offset: 0xb4
	// Line 74, Address: 0x1d68dc, Func Offset: 0xbc
	// Line 75, Address: 0x1d68e4, Func Offset: 0xc4
	// Line 77, Address: 0x1d68ec, Func Offset: 0xcc
	// Line 79, Address: 0x1d68f8, Func Offset: 0xd8
	// Line 78, Address: 0x1d68fc, Func Offset: 0xdc
	// Line 79, Address: 0x1d6900, Func Offset: 0xe0
	// Line 78, Address: 0x1d6910, Func Offset: 0xf0
	// Line 79, Address: 0x1d6914, Func Offset: 0xf4
	// Line 81, Address: 0x1d6918, Func Offset: 0xf8
	// Line 82, Address: 0x1d691c, Func Offset: 0xfc
	// Line 83, Address: 0x1d6920, Func Offset: 0x100
	// Line 84, Address: 0x1d6924, Func Offset: 0x104
	// Line 86, Address: 0x1d6928, Func Offset: 0x108
	// Line 87, Address: 0x1d6930, Func Offset: 0x110
	// Line 88, Address: 0x1d6934, Func Offset: 0x114
	// Line 91, Address: 0x1d6938, Func Offset: 0x118
	// Line 88, Address: 0x1d6944, Func Offset: 0x124
	// Line 91, Address: 0x1d6948, Func Offset: 0x128
	// Line 92, Address: 0x1d6950, Func Offset: 0x130
	// Line 94, Address: 0x1d6958, Func Offset: 0x138
	// Line 95, Address: 0x1d6960, Func Offset: 0x140
	// Line 96, Address: 0x1d6964, Func Offset: 0x144
	// Line 99, Address: 0x1d6968, Func Offset: 0x148
	// Line 100, Address: 0x1d696c, Func Offset: 0x14c
	// Line 102, Address: 0x1d6970, Func Offset: 0x150
	// Line 108, Address: 0x1d6980, Func Offset: 0x160
	// Line 109, Address: 0x1d6a78, Func Offset: 0x258
	// Line 110, Address: 0x1d6ba8, Func Offset: 0x388
	// Line 111, Address: 0x1d6cd8, Func Offset: 0x4b8
	// Line 112, Address: 0x1d6ce4, Func Offset: 0x4c4
	// Line 113, Address: 0x1d6cec, Func Offset: 0x4cc
	// Line 115, Address: 0x1d6cf0, Func Offset: 0x4d0
	// Line 117, Address: 0x1d6d08, Func Offset: 0x4e8
	// Line 119, Address: 0x1d6d0c, Func Offset: 0x4ec
	// Line 117, Address: 0x1d6d10, Func Offset: 0x4f0
	// Line 118, Address: 0x1d6d18, Func Offset: 0x4f8
	// Line 119, Address: 0x1d6d30, Func Offset: 0x510
	// Line 120, Address: 0x1d6d40, Func Offset: 0x520
	// Line 119, Address: 0x1d6d48, Func Offset: 0x528
	// Line 120, Address: 0x1d6d5c, Func Offset: 0x53c
	// Line 121, Address: 0x1d6d98, Func Offset: 0x578
	// Line 122, Address: 0x1d6d9c, Func Offset: 0x57c
	// Line 124, Address: 0x1d6da0, Func Offset: 0x580
	// Line 126, Address: 0x1d6da4, Func Offset: 0x584
	// Line 124, Address: 0x1d6dac, Func Offset: 0x58c
	// Line 126, Address: 0x1d6dc8, Func Offset: 0x5a8
	// Line 127, Address: 0x1d6e04, Func Offset: 0x5e4
	// Func End, Address: 0x1d6e20, Func Offset: 0x600
}

// xEntDriveInit__FP9xEntDriveP4xEnt
// Start address: 0x1d6e20
void xEntDriveInit(xEntDrive* drv, xEnt* driven)
{
	// Line 33, Address: 0x1d6e20, Func Offset: 0
	// Line 37, Address: 0x1d6e28, Func Offset: 0x8
	// Line 38, Address: 0x1d6e2c, Func Offset: 0xc
	// Line 39, Address: 0x1d6e30, Func Offset: 0x10
	// Line 40, Address: 0x1d6e34, Func Offset: 0x14
	// Line 41, Address: 0x1d6e38, Func Offset: 0x18
	// Line 42, Address: 0x1d6e3c, Func Offset: 0x1c
	// Line 43, Address: 0x1d6e40, Func Offset: 0x20
	// Line 44, Address: 0x1d6e44, Func Offset: 0x24
	// Line 45, Address: 0x1d6e48, Func Offset: 0x28
	// Line 46, Address: 0x1d6e4c, Func Offset: 0x2c
	// Line 47, Address: 0x1d6e50, Func Offset: 0x30
	// Func End, Address: 0x1d6e58, Func Offset: 0x38
}

