typedef struct xBase;
typedef struct xAnimPlay;
typedef struct RpClump;
typedef struct xEnt;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RpGeometry;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct xFFXShakeState;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xMemPool;
typedef struct xLinkAsset;
typedef struct xVec3;
typedef struct xModelInstance;
typedef struct xShadowSimplePoly;
typedef struct RxPipeline;
typedef struct xCollis;
typedef struct xFFXRotMatchState;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xLightKitLight;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpLight;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xBox;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct xEntShadow;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xGridBound;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct _class_0;
typedef struct RxNodeDefinition;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef struct xEntAsset;

typedef RpClump*(*type_0)(RpClump*, void*);
typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_5)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef xBase*(*type_8)(uint32);
typedef void(*type_9)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_10)(RxPipelineNode*);
typedef int8*(*type_12)(xBase*);
typedef void(*type_13)(RxPipelineNode*);
typedef int8*(*type_14)(uint32);
typedef int32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_17)(RpAtomic*);
typedef void(*type_18)(xEnt*, xScene*, float32);
typedef void(*type_20)(xEnt*, xVec3*);
typedef void(*type_21)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_22)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_23)(xEnt*);
typedef uint32(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_25)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_26)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_32)(xMemPool*, void*);
typedef void(*type_35)(RwResEntry*);
typedef void(*type_37)(xEnt*, xScene*, float32, void*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef xVec3 type_11[3];
typedef uint16 type_16[3];
typedef float32 type_19[16];
typedef RwTexCoords* type_27[8];
typedef xVec3 type_28[4];
typedef uint32 type_30[4];
typedef xCollis type_31[18];
typedef int8 type_33[32];
typedef int8 type_34[32];
typedef float32 type_36[2];
typedef uint8 type_38[3];
typedef RxCluster type_39[1];
typedef float32 type_40[4];
typedef float32 type_41[2];
typedef uint8 type_43[2];
typedef xAnimMultiFileEntry type_44[1];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xFFX
{
	uint32 flags;
	void(*doEffect)(xEnt*, xScene*, float32, void*);
	void* fdata;
	xFFX* next;
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

struct xFFXShakeState
{
	xVec3 disp;
	float32 dur;
	float32 freq;
	float32 tmr;
	float32 alpha;
	float32 lval;
	xFFXShakeState* next;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xEnv
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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
		tri_data tri;
	};
};

struct xFFXRotMatchState
{
	int32 lgrounded;
	xVec3 lfup;
	xVec3 lfat;
	xVec3 plfat;
	float32 tmr;
	float32 mrate;
	float32 tmatch;
	float32 rrate;
	float32 trelax;
	float32 max_decl;
	xFFXRotMatchState* next;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct anim_coll_data
{
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct _class_0
{
	xVec3* verts;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct _class_1
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

struct RwLinkList
{
	RwLLLink link;
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

uint32 psize;
xFFX* pool;
xFFX* alist;
uint32 shake_psize;
xFFXShakeState* shake_pool;
xFFXShakeState* shake_alist;
uint32 rot_match_psize;
xFFXRotMatchState* rot_match_pool;
xFFXRotMatchState* rot_match_alist;
uint32 gActiveHeap;

xFFXRotMatchState* xFFXRotMatchAlloc();
void xFFXRotMatchPoolInit(uint32 num);
void xFFXShakeFree(xFFXShakeState* s);
xFFXShakeState* xFFXShakeAlloc();
void xFFXShakePoolInit(uint32 num);
void xFFXShakeUpdateEnt(xEnt* ent, float32 dt, void* fdata);
void xFFXApply(xEnt* ent, xScene* sc, float32 dt);
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float32 dt);
int16 xFFXAddEffect(xEnt* ent, void(*dof)(xEnt*, xScene*, float32, void*), void* fd);
int16 xFFXAddEffect(xEnt* ent, xFFX* f);
void xFFXTurnOff(xFFX* f);
void xFFXTurnOn(xFFX* f);
xFFX* xFFXAlloc();
void xFFXPoolInit(uint32 num_ffx);

// xFFXRotMatchAlloc__Fv
// Start address: 0x1da8c0
xFFXRotMatchState* xFFXRotMatchAlloc()
{
	// Line 497, Address: 0x1da8c0, Func Offset: 0
	// Line 499, Address: 0x1da8c4, Func Offset: 0x4
	// Line 500, Address: 0x1da8cc, Func Offset: 0xc
	// Line 501, Address: 0x1da8d4, Func Offset: 0x14
	// Line 504, Address: 0x1da8d8, Func Offset: 0x18
	// Line 506, Address: 0x1da8e0, Func Offset: 0x20
	// Func End, Address: 0x1da8e8, Func Offset: 0x28
}

// xFFXRotMatchPoolInit__FUi
// Start address: 0x1da8f0
void xFFXRotMatchPoolInit(uint32 num)
{
	uint32 i;
	// Line 483, Address: 0x1da8f0, Func Offset: 0
	// Line 488, Address: 0x1da8f4, Func Offset: 0x4
	// Line 483, Address: 0x1da8f8, Func Offset: 0x8
	// Line 488, Address: 0x1da8fc, Func Offset: 0xc
	// Line 487, Address: 0x1da900, Func Offset: 0x10
	// Line 488, Address: 0x1da904, Func Offset: 0x14
	// Line 489, Address: 0x1da918, Func Offset: 0x28
	// Line 490, Address: 0x1da920, Func Offset: 0x30
	// Line 491, Address: 0x1da93c, Func Offset: 0x4c
	// Line 492, Address: 0x1da940, Func Offset: 0x50
	// Line 491, Address: 0x1da944, Func Offset: 0x54
	// Line 492, Address: 0x1da950, Func Offset: 0x60
	// Line 493, Address: 0x1da960, Func Offset: 0x70
	// Line 494, Address: 0x1da97c, Func Offset: 0x8c
	// Func End, Address: 0x1da988, Func Offset: 0x98
}

// xFFXShakeFree__FP14xFFXShakeState
// Start address: 0x1da990
void xFFXShakeFree(xFFXShakeState* s)
{
	// Line 325, Address: 0x1da990, Func Offset: 0
	// Line 327, Address: 0x1da998, Func Offset: 0x8
	// Func End, Address: 0x1da9a0, Func Offset: 0x10
}

// xFFXShakeAlloc__Fv
// Start address: 0x1da9a0
xFFXShakeState* xFFXShakeAlloc()
{
	// Line 309, Address: 0x1da9a0, Func Offset: 0
	// Line 311, Address: 0x1da9a4, Func Offset: 0x4
	// Line 312, Address: 0x1da9ac, Func Offset: 0xc
	// Line 313, Address: 0x1da9b4, Func Offset: 0x14
	// Line 316, Address: 0x1da9b8, Func Offset: 0x18
	// Line 318, Address: 0x1da9c0, Func Offset: 0x20
	// Func End, Address: 0x1da9c8, Func Offset: 0x28
}

// xFFXShakePoolInit__FUi
// Start address: 0x1da9d0
void xFFXShakePoolInit(uint32 num)
{
	uint32 i;
	// Line 295, Address: 0x1da9d0, Func Offset: 0
	// Line 300, Address: 0x1da9d4, Func Offset: 0x4
	// Line 295, Address: 0x1da9d8, Func Offset: 0x8
	// Line 300, Address: 0x1da9dc, Func Offset: 0xc
	// Line 299, Address: 0x1da9e0, Func Offset: 0x10
	// Line 300, Address: 0x1da9e4, Func Offset: 0x14
	// Line 301, Address: 0x1da9f8, Func Offset: 0x28
	// Line 302, Address: 0x1daa00, Func Offset: 0x30
	// Line 303, Address: 0x1daa1c, Func Offset: 0x4c
	// Line 304, Address: 0x1daa20, Func Offset: 0x50
	// Line 303, Address: 0x1daa24, Func Offset: 0x54
	// Line 304, Address: 0x1daa30, Func Offset: 0x60
	// Line 305, Address: 0x1daa40, Func Offset: 0x70
	// Line 306, Address: 0x1daa5c, Func Offset: 0x8c
	// Func End, Address: 0x1daa68, Func Offset: 0x98
}

// xFFXShakeUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x1daa70
void xFFXShakeUpdateEnt(xEnt* ent, float32 dt, void* fdata)
{
	xFFXShakeState* ss;
	float32 tnext;
	float32 mag;
	// Line 252, Address: 0x1daa70, Func Offset: 0
	// Line 259, Address: 0x1daa90, Func Offset: 0x20
	// Line 263, Address: 0x1daa94, Func Offset: 0x24
	// Line 259, Address: 0x1daa98, Func Offset: 0x28
	// Line 263, Address: 0x1daa9c, Func Offset: 0x2c
	// Line 266, Address: 0x1daab8, Func Offset: 0x48
	// Line 272, Address: 0x1daacc, Func Offset: 0x5c
	// Line 273, Address: 0x1daafc, Func Offset: 0x8c
	// Line 274, Address: 0x1dab50, Func Offset: 0xe0
	// Line 275, Address: 0x1dab58, Func Offset: 0xe8
	// Line 279, Address: 0x1dab60, Func Offset: 0xf0
	// Line 278, Address: 0x1dab64, Func Offset: 0xf4
	// Line 279, Address: 0x1dab68, Func Offset: 0xf8
	// Line 278, Address: 0x1dab6c, Func Offset: 0xfc
	// Line 279, Address: 0x1dab74, Func Offset: 0x104
	// Line 278, Address: 0x1dab78, Func Offset: 0x108
	// Line 279, Address: 0x1dab7c, Func Offset: 0x10c
	// Line 278, Address: 0x1dab8c, Func Offset: 0x11c
	// Line 279, Address: 0x1dab90, Func Offset: 0x120
	// Line 278, Address: 0x1dab9c, Func Offset: 0x12c
	// Line 279, Address: 0x1daba0, Func Offset: 0x130
	// Line 281, Address: 0x1daba8, Func Offset: 0x138
	// Line 282, Address: 0x1dabac, Func Offset: 0x13c
	// Line 283, Address: 0x1dabb0, Func Offset: 0x140
	// Func End, Address: 0x1dabcc, Func Offset: 0x15c
}

// xFFXApply__FP4xEntP6xScenef
// Start address: 0x1dabd0
void xFFXApply(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 242, Address: 0x1dabd0, Func Offset: 0
	// Line 245, Address: 0x1dabe4, Func Offset: 0x14
	// Line 246, Address: 0x1dabec, Func Offset: 0x1c
	// Line 247, Address: 0x1dabf4, Func Offset: 0x24
	// Line 248, Address: 0x1dabf8, Func Offset: 0x28
	// Func End, Address: 0x1dac04, Func Offset: 0x34
}

// xFFXApplyOne__FP4xFFXP4xEntP6xScenef
// Start address: 0x1dac10
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float32 dt)
{
	// Line 227, Address: 0x1dac10, Func Offset: 0
	// Line 233, Address: 0x1dac4c, Func Offset: 0x3c
	// Line 234, Address: 0x1dac58, Func Offset: 0x48
	// Line 236, Address: 0x1dad60, Func Offset: 0x150
	// Line 237, Address: 0x1dad70, Func Offset: 0x160
	// Line 239, Address: 0x1dad88, Func Offset: 0x178
	// Func End, Address: 0x1dadb8, Func Offset: 0x1a8
}

// xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv
// Start address: 0x1dadc0
int16 xFFXAddEffect(xEnt* ent, void(*dof)(xEnt*, xScene*, float32, void*), void* fd)
{
	// Line 126, Address: 0x1dadc0, Func Offset: 0
	// Line 127, Address: 0x1dadc4, Func Offset: 0x4
	// Line 129, Address: 0x1dade0, Func Offset: 0x20
	// Line 130, Address: 0x1dade8, Func Offset: 0x28
	// Line 133, Address: 0x1dadf0, Func Offset: 0x30
	// Line 134, Address: 0x1dadf4, Func Offset: 0x34
	// Line 135, Address: 0x1dadf8, Func Offset: 0x38
	// Line 136, Address: 0x1dae20, Func Offset: 0x60
	// Func End, Address: 0x1dae28, Func Offset: 0x68
}

// xFFXAddEffect__FP4xEntP4xFFX
// Start address: 0x1dae30
int16 xFFXAddEffect(xEnt* ent, xFFX* f)
{
	// Line 119, Address: 0x1dae30, Func Offset: 0
	// Line 120, Address: 0x1dae38, Func Offset: 0x8
	// Line 121, Address: 0x1dae44, Func Offset: 0x14
	// Line 122, Address: 0x1dae48, Func Offset: 0x18
	// Line 123, Address: 0x1dae50, Func Offset: 0x20
	// Func End, Address: 0x1dae58, Func Offset: 0x28
}

// xFFXTurnOff__FP4xFFX
// Start address: 0x1dae60
void xFFXTurnOff(xFFX* f)
{
	// Line 78, Address: 0x1dae60, Func Offset: 0
	// Line 79, Address: 0x1dae6c, Func Offset: 0xc
	// Func End, Address: 0x1dae74, Func Offset: 0x14
}

// xFFXTurnOn__FP4xFFX
// Start address: 0x1dae80
void xFFXTurnOn(xFFX* f)
{
	// Line 72, Address: 0x1dae80, Func Offset: 0
	// Line 73, Address: 0x1dae88, Func Offset: 0x8
	// Func End, Address: 0x1dae90, Func Offset: 0x10
}

// xFFXAlloc__Fv
// Start address: 0x1dae90
xFFX* xFFXAlloc()
{
	// Line 43, Address: 0x1dae90, Func Offset: 0
	// Line 45, Address: 0x1dae94, Func Offset: 0x4
	// Line 46, Address: 0x1dae9c, Func Offset: 0xc
	// Line 47, Address: 0x1daea4, Func Offset: 0x14
	// Line 50, Address: 0x1daea8, Func Offset: 0x18
	// Line 52, Address: 0x1daeb0, Func Offset: 0x20
	// Func End, Address: 0x1daeb8, Func Offset: 0x28
}

// xFFXPoolInit__FUi
// Start address: 0x1daec0
void xFFXPoolInit(uint32 num_ffx)
{
	uint32 i;
	// Line 29, Address: 0x1daec0, Func Offset: 0
	// Line 34, Address: 0x1daec4, Func Offset: 0x4
	// Line 29, Address: 0x1daec8, Func Offset: 0x8
	// Line 33, Address: 0x1daecc, Func Offset: 0xc
	// Line 34, Address: 0x1daed0, Func Offset: 0x10
	// Line 35, Address: 0x1daee0, Func Offset: 0x20
	// Line 36, Address: 0x1daee8, Func Offset: 0x28
	// Line 37, Address: 0x1daf04, Func Offset: 0x44
	// Line 38, Address: 0x1daf0c, Func Offset: 0x4c
	// Line 37, Address: 0x1daf10, Func Offset: 0x50
	// Line 38, Address: 0x1daf1c, Func Offset: 0x5c
	// Line 39, Address: 0x1daf30, Func Offset: 0x70
	// Line 40, Address: 0x1daf44, Func Offset: 0x84
	// Func End, Address: 0x1daf50, Func Offset: 0x90
}

