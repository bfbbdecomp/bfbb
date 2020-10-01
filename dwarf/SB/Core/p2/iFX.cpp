typedef struct RwRaster;
typedef enum RxNodeDefEditable;
typedef struct xAnimTransitionList;
typedef enum RxClusterValid;
typedef struct rxHeapBlockHeader;
typedef struct xAnimTransition;
typedef struct rxHeapFreeBlock;
typedef struct RxPS2AllPipeData;
typedef struct xAnimState;
typedef struct RpAtomic;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef struct RwMeshCache;
typedef struct _class_0;
typedef struct xBaseAsset;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct RwResEntry;
typedef struct rwPS2AllResEntryHeader;
typedef struct xAnimFile;
typedef struct RxClusterDefinition;
typedef struct xAnimSingle;
typedef struct xMat3x3;
typedef struct RpMaterial;
typedef struct xEntAsset;
typedef struct RpMaterialList;
typedef struct xEnt;
typedef struct rxReq;
typedef struct RwLLLink;
typedef struct xAnimMultiFileBase;
typedef struct rxNodePS2AllPvtData;
typedef struct RwObject;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct xMemPool;
typedef struct RwTexDictionary;
typedef struct rxNodePS2AllMatPvtData;
typedef struct xVec3;
typedef struct RpClump;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef struct RwTexture;
typedef struct RpMeshHeader;
typedef struct xAnimPlay;
typedef struct xEnv;
typedef struct RxIoSpec;
typedef struct xShadowSimplePoly;
typedef struct RpMorphTarget;
typedef struct xAnimMultiFile;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxPipeline;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwV3d;
typedef struct RxNodeDefinition;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef enum RpMeshHeaderFlags;
typedef struct RxPipelineNode;
typedef struct xScene;
typedef struct xAnimTable;
typedef struct xShadowSimpleCache;
typedef struct RxCluster;
typedef struct RwLinkList;
typedef struct xEntCollis;
typedef struct RxPipelineNodeParam;
typedef struct xGridBound;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct RpLight;
typedef struct rwPS2AllFieldRec;
typedef struct RwRGBAReal;
typedef struct RwSurfaceProperties;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct xQuat;
typedef struct xLinkAsset;
typedef enum RwCullMode;
typedef struct RwMatrixTag;
typedef struct xFFX;
typedef struct RwObjectHasFrame;
typedef struct xSurface;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct xModelBucket;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntShadow;
typedef enum RxInstanceFlags;
typedef struct RwRGBA;
typedef struct anim_coll_data;
typedef struct RxHeap;
typedef struct rwPS2AllResEntryFormat;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct xBase;
typedef struct xMat4x3;
typedef struct xBound;
typedef struct xSphere;
typedef struct xQCData;
typedef struct xRot;
typedef struct xCylinder;
typedef struct _class_1;
typedef struct tri_data;
typedef struct xBox;

typedef uint32(*type_7)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_10)(RxPS2AllPipeData*);
typedef uint32(*type_11)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_12)(xMemPool*, void*);
typedef void(*type_15)(RwResEntry*);
typedef RpClump*(*type_16)(RpClump*, void*);
typedef xBase*(*type_18)(uint32);
typedef RwResEntry*(*type_19)(RxPS2AllPipeData*, RwResEntry**, uint32, type_15);
typedef int8*(*type_22)(xBase*);
typedef void(*type_23)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_24)(uint32);
typedef int32(*type_25)(RxPS2AllPipeData*, void**, uint32);
typedef void(*type_26)(xEnt*, xScene*, float32);
typedef void(*type_29)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef int32(*type_31)(RxPS2AllPipeData*);
typedef int32(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_34)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_37)(xEnt*);
typedef void(*type_39)(xAnimPlay*, xAnimState*);
typedef int32(*type_40)(RxNodeDefinition*);
typedef int32(*type_42)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef void(*type_46)(RxNodeDefinition*);
typedef uint32(*type_47)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_49)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_50)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_51)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_52)(RxPipelineNode*);
typedef void(*type_54)(RxPipelineNode*);
typedef int32(*type_55)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_56)(RwObjectHasFrame*);
typedef int32(*type_58)(RxPipelineNode*, RxPipeline*);
typedef RwResEntry*(*type_63)(RxPS2AllPipeData*, RwResEntry**, uint32, type_15);
typedef int32(*type_64)(RxPS2AllPipeData*);
typedef uint32(*type_68)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_70)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_72)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[2];
typedef float32 type_1[2];
typedef RwResEntry* type_2[1];
typedef float32 type_3[2];
typedef float32 type_4[2];
typedef float32 type_5[8];
typedef uint32 type_6[4];
typedef float32 type_8[2];
typedef float32 type_9[2];
typedef rwPS2AllClusterQuickInfo type_13[12];
typedef rwPS2AllFieldRec type_14[12];
typedef xVec3 type_17[3];
typedef uint8 type_20[2];
typedef xAnimMultiFileEntry type_21[1];
typedef float32 type_27[2];
typedef float32 type_28[16];
typedef float32 type_33[2];
typedef int8 type_35[32];
typedef int8 type_36[32];
typedef float32 type_38[2];
typedef uint16 type_41[3];
typedef float32 type_44[4];
typedef float32 type_45[2];
typedef RxCluster type_48[1];
typedef xVec3 type_53[4];
typedef uint8 type_57[1];
typedef float32 type_59[8];
typedef void* type_60[32];
typedef uint8 type_61[3];
typedef float32 type_62[4];
typedef RwTexCoords* type_65[8];
typedef rwPS2AllClusterInstanceInfo type_66[12];
typedef uint32 type_67[12];
typedef xCollis type_69[18];
typedef uint8 type_71[2];
typedef rwPS2AllFieldRec type_73[12];

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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_6 pad;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_11 Conditional;
	type_11 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
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
	type_39 BeforeEnter;
	type_23 StateCallback;
	type_49 BeforeAnimMatrices;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	type_2 meshes;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_15 destroyNotify;
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	type_13 clquickinfo;
	type_14 fieldRec;
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
	type_20 NumAnims;
	void** RawData;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_9 BilinearLerp;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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
	type_26 update;
	type_26 endUpdate;
	type_30 bupdate;
	type_34 move;
	type_37 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_50 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct rxReq
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct rxNodePS2AllPvtData
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_7 Callback;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_12 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxNodePS2AllMatPvtData
{
	type_10 meshInstanceTestCB;
	type_19 resEntryAllocCB;
	type_25 instanceCB;
	type_31 bridgeCB;
	type_42 postMeshCB;
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	type_66 clinfo;
	type_67 cliIndex;
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_16 callback;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_35 name;
	type_36 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	type_49 BeforeAnimMatrices;
};

struct xEnv
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

struct xShadowSimplePoly
{
	type_17 vert;
	xVec3 norm;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_21 Files;
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

struct RxNodeMethods
{
	type_32 nodeBody;
	type_40 nodeInit;
	type_46 nodeTerm;
	type_52 pipelineNodeInit;
	type_54 pipelineNodeTerm;
	type_58 pipelineNodeConfig;
	type_68 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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
	type_28 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
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
	type_18 resolvID;
	type_22 base2Name;
	type_24 id2Name;
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
	type_53 corner;
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

struct RwLinkList
{
	RwLLLink link;
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
	type_69 colls;
	type_29 post;
	type_47 depenq;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpTriangle
{
	type_41 vertIndex;
	int16 matIndex;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_48 clusters;
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

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	type_57 pad;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_62 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct xFFX
{
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_56 sync;
};

struct xSurface
{
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_0 radius;
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	type_71 pad;
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	type_73 fieldRec;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	uint32 stride;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_72 eventFunc;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_61 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

type_59 sinRangePoint5;
type_5 xFXWarbleParam;
xEnt* warbEnt;
type_44 warbc;
xVec3* vbuf;
xVec3* nbuf;
uint32 warbMode;
float32 warbTime;
ulong32 gs_alpha_2;
type_51 RpAtomicPS2AllObjectSetupCallBack;
type_64 iFXanimUVBridgeCallBack;
type_70 RpMeshPS2AllInstanceCallBack;
type_63 RpMeshPS2AllResEntryAllocCallBack;
type_55 RpMeshPS2AllMeshInstanceTestCallBack;
long32 FXanimUVPRS;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long32 skyTest_1;
long32 skyClamp_1;
long32 skyTex1_1;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
int32 skyTSClipperMode;
long32 skyPrim_State;
<unknown type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
type_45 xFXanimUV2PScale;
type_38 xFXanimUV2PTrans;
type_33 xFXanimUV2PRotMat1;
type_27 xFXanimUV2PRotMat0;
type_8 xFXanimUVScale;
type_4 xFXanimUVTrans;
type_3 xFXanimUVRotMat1;
type_1 xFXanimUVRotMat0;
RwTexture* xFXanimUV2PTexture;
RwRaster* skyTextureRaster;

RxPipeline* iFXanimUVCreatePipe();
RxPipeline* iFXanimUVCreateMaterialPipe();
int32 iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);

// iFXanimUVCreatePipe__Fv
// Start address: 0x1aa3f0
RxPipeline* iFXanimUVCreatePipe()
{
	RxPipeline* newPipe;
	RxPipeline* matPipe;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
}

// iFXanimUVCreateMaterialPipe__Fv
// Start address: 0x1aa4c0
RxPipeline* iFXanimUVCreateMaterialPipe()
{
	RxPipeline* newPipe;
	RxPipeline* lockedPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	type_60 VUCodeArray;
}

// iFXanimUVBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x1aa6a0
int32 iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	uint32 numInitialQW;
	uint32 numUserInitialQW;
	uint32 numExtraQW;
	uint32 prim;
	uint32 primSwitch;
	uint32 fogSwitch;
	RwRaster* customRaster;
	ulong32 tmp;
	ulong32 tmp1;
	<unknown type (0xa510)> ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	int32 textureUploadSuccess;
	uint32 _itQW;
	uint32 _xaQW;
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	float32 __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	ulong32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	uint32 stat;
}

