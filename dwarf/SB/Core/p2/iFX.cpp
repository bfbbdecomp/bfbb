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

typedef u32(*type_7)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_10)(RxPS2AllPipeData*);
typedef u32(*type_11)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_12)(xMemPool*, void*);
typedef void(*type_15)(RwResEntry*);
typedef RpClump*(*type_16)(RpClump*, void*);
typedef xBase*(*type_18)(u32);
typedef RwResEntry*(*type_19)(RxPS2AllPipeData*, RwResEntry**, u32, type_15);
typedef s8*(*type_22)(xBase*);
typedef void(*type_23)(xAnimState*, xAnimSingle*, void*);
typedef s8*(*type_24)(u32);
typedef s32(*type_25)(RxPS2AllPipeData*, void**, u32);
typedef void(*type_26)(xEnt*, xScene*, f32);
typedef void(*type_29)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef s32(*type_31)(RxPS2AllPipeData*);
typedef s32(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_34)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_37)(xEnt*);
typedef void(*type_39)(xAnimPlay*, xAnimState*);
typedef s32(*type_40)(RxNodeDefinition*);
typedef s32(*type_42)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef void(*type_46)(RxNodeDefinition*);
typedef u32(*type_47)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_49)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_50)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_51)(RxPS2AllPipeData*, RwMatrixTag**);
typedef s32(*type_52)(RxPipelineNode*);
typedef void(*type_54)(RxPipelineNode*);
typedef s32(*type_55)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_56)(RwObjectHasFrame*);
typedef s32(*type_58)(RxPipelineNode*, RxPipeline*);
typedef RwResEntry*(*type_63)(RxPS2AllPipeData*, RwResEntry**, u32, type_15);
typedef s32(*type_64)(RxPS2AllPipeData*);
typedef u32(*type_68)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_70)(RxPS2AllPipeData*, void**, u32);
typedef s32(*type_72)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[2];
typedef f32 type_1[2];
typedef RwResEntry* type_2[1];
typedef f32 type_3[2];
typedef f32 type_4[2];
typedef f32 type_5[8];
typedef u32 type_6[4];
typedef f32 type_8[2];
typedef f32 type_9[2];
typedef rwPS2AllClusterQuickInfo type_13[12];
typedef rwPS2AllFieldRec type_14[12];
typedef xVec3 type_17[3];
typedef u8 type_20[2];
typedef xAnimMultiFileEntry type_21[1];
typedef f32 type_27[2];
typedef f32 type_28[16];
typedef f32 type_33[2];
typedef s8 type_35[32];
typedef s8 type_36[32];
typedef f32 type_38[2];
typedef u16 type_41[3];
typedef f32 type_44[4];
typedef f32 type_45[2];
typedef RxCluster type_48[1];
typedef xVec3 type_53[4];
typedef u8 type_57[1];
typedef f32 type_59[8];
typedef void* type_60[32];
typedef u8 type_61[3];
typedef f32 type_62[4];
typedef RwTexCoords* type_65[8];
typedef rwPS2AllClusterInstanceInfo type_66[12];
typedef u32 type_67[12];
typedef xCollis type_69[18];
typedef u8 type_71[2];
typedef rwPS2AllFieldRec type_73[12];

struct RwRaster
{
	RwRaster* parent;
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
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
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_6 pad;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_11 Conditional;
	type_11 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct rxHeapFreeBlock
{
	u32 size;
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
	u32 objIdentifier;
	f32 spExtra;
	s32 numMorphTargets;
	u32 fastMorphing;
	u8 transType;
	u8 primType;
	u8 matModulate;
	u8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	u32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct xAnimState
{
	xAnimState* Next;
	s8* Name;
	u32 ID;
	u32 Flags;
	u32 UserFlags;
	f32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	f32* BoneBlend;
	f32* TimeSnap;
	f32 FadeRecip;
	u16* FadeOffset;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	u32 lengthOfMeshesArray;
	type_2 meshes;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct RpMesh
{
	u16* indices;
	u32 numIndices;
	RpMaterial* material;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	u32 PipeFlags;
	f32 RedMultiplier;
	f32 GreenMultiplier;
	f32 BlueMultiplier;
	f32 Alpha;
	f32 FadeStart;
	f32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	u16 Flags;
	u8 BoneCount;
	u8 BoneIndex;
	u8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	u32 modelID;
	u32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_1 anim_coll;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_15 destroyNotify;
};

struct rwPS2AllResEntryHeader
{
	s32 refCnt;
	s32 clrCnt;
	<unknown type (0xa510)>* data;
	u32 numVerts;
	u32 objIdentifier;
	u32 meshIdentifier;
	s32 batchSize;
	s32 numBatches;
	s32 batchesPerTag;
	s32 morphStart;
	s32 morphFinish;
	s32 morphNum;
	type_13 clquickinfo;
	type_14 fieldRec;
};

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_20 NumAnims;
	void** RawData;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_9 BilinearLerp;
	xAnimEffect* Effect;
	u32 ActiveCount;
	f32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	f32 BlendFactor;
	u32 pad;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct xEntAsset : xBaseAsset
{
	u8 flags;
	u8 subtype;
	u8 pflags;
	u8 moreFlags;
	u8 pad;
	u32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	f32 redMult;
	f32 greenMult;
	f32 blueMult;
	f32 seeThru;
	f32 seeThruSpeed;
	u32 modelInfoID;
	u32 animListID;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	u16 idx;
	u16 num_updates;
	u8 flags;
	u8 miscflags;
	u8 subType;
	u8 pflags;
	u8 moreFlags;
	u8 isCulled;
	u8 driving_count;
	u8 num_ffx;
	u8 collType;
	u8 collLev;
	u8 chkby;
	u8 penby;
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
	s32 driveMode;
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
	u32 Count;
};

struct rxNodePS2AllPvtData
{
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	u32 mode;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_12 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	s32 vifOffset;
	void** vu1CodeArray;
	u32 codeArrayLength;
	type_66 clinfo;
	type_67 cliIndex;
	RpMeshHeaderFlags pipeType;
	u8 totallyOpaque;
	u8 numStripes;
	u8 sizeOnVU;
	u8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	u32 magicValue;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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
	u32 reserved;
};

struct RpGeometry
{
	RwObject object;
	u32 flags;
	u16 lockedSinceLastInst;
	s16 refCount;
	s32 numTriangles;
	s32 numVertices;
	s32 numMorphTargets;
	s32 numTexCoordSets;
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
	u32 filterAddressing;
	s32 refCount;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	u16 NumSingle;
	u16 BoneCount;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	u32 creationAttributes;
};

struct RxPipeline
{
	s32 locked;
	u32 numNodes;
	RxPipelineNode* nodes;
	u32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	u32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	u32 superBlockSize;
	u32 entryPoint;
	u32 pluginId;
	u32 pluginData;
};

struct rwPS2AllClusterInstanceInfo
{
	u32 attrib;
	u32 stride;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_28 matrix;
	f32 radius;
	f32 angle;
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
	u32 numOutputs;
	u32* outputs;
	RxPipelineCluster** slotClusterRefs;
	u32* slotsContinue;
	void* privateData;
	u32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	u32 initializationDataSize;
};

struct xScene
{
	u32 sceneID;
	u16 flags;
	u16 num_ents;
	u16 num_trigs;
	u16 num_stats;
	u16 num_dyns;
	u16 num_npcs;
	u16 num_act_ents;
	u16 num_nact_ents;
	f32 gravity;
	f32 drag;
	f32 friction;
	u16 num_ents_allocd;
	u16 num_trigs_allocd;
	u16 num_stats_allocd;
	u16 num_dyns_allocd;
	u16 num_npcs_allocd;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct xShadowSimpleCache
{
	u16 flags;
	u8 alpha;
	u8 pad;
	u32 collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	f32 envHeight;
	f32 shadowHeight;
	u32 raster;
	f32 dydx;
	f32 dydz;
	type_53 corner;
};

struct RxCluster
{
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xEntCollis
{
	u8 chk;
	u8 pen;
	u8 env_sidx;
	u8 env_eidx;
	u8 npc_sidx;
	u8 npc_eidx;
	u8 dyn_sidx;
	u8 dyn_eidx;
	u8 stat_sidx;
	u8 stat_eidx;
	u8 idx;
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
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct RpTriangle
{
	type_41 vertIndex;
	s16 matIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_48 clusters;
};

struct RpLight
{
	RwObjectHasFrame object;
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
};

struct rwPS2AllFieldRec
{
	s32 numVerts;
	s32 morphNumVerts;
	s32 dataoffset;
	s32 morphDataoffset;
	s16 skip;
	s16 morphSkip;
	s16 reverse;
	u8 vuoffset;
	type_57 pad;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xCollis
{
	u32 flags;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
	f32 dist;
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
	f32 s;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_62 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
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
	f32 u;
	f32 v;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct anim_coll_data
{
};

struct RxHeap
{
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct rwPS2AllResEntryFormat
{
	u8 batchRound;
	u8 stripReverse;
	type_71 pad;
	u32 maxInputSize;
	s32 batchSize;
	s32 batchesPerTag;
	s32 morphBatchSize;
	s32 morphBatchesPerTag;
	type_73 fieldRec;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	u32 stride;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_72 eventFunc;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 r;
};

struct xQCData
{
	s8 xmin;
	s8 ymin;
	s8 zmin;
	s8 zmin_dup;
	s8 xmax;
	s8 ymax;
	s8 zmax;
	s8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
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
u32 warbMode;
f32 warbTime;
u32 gs_alpha_2;
type_51 RpAtomicPS2AllObjectSetupCallBack;
type_64 iFXanimUVBridgeCallBack;
type_70 RpMeshPS2AllInstanceCallBack;
type_63 RpMeshPS2AllResEntryAllocCallBack;
type_55 RpMeshPS2AllMeshInstanceTestCallBack;
s32 FXanimUVPRS;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
s32 skyTest_1;
s32 skyClamp_1;
s32 skyTex1_1;
u32 skyUserSwitch1;
u32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
s32 skyTLClipperMode;
s32 skyTSClipperMode;
s32 skyPrim_State;
<unknown type (0xa510)> gifTag128;
s32 skyAlphaTex;
s32 skyVertexAlpha;
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
s32 iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);

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
s32 iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	u32 numInitialQW;
	u32 numUserInitialQW;
	u32 numExtraQW;
	u32 prim;
	u32 primSwitch;
	u32 fogSwitch;
	RwRaster* customRaster;
	u32 tmp;
	u32 tmp1;
	<unknown type (0xa510)> ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	u32 cFormat;
	s32 textureUploadSuccess;
	u32 _itQW;
	u32 _xaQW;
	u32 tmp;
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
	u32 __tmp1;
	u32 __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	f32 __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	u32 __tmp1;
	u32 __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	u32 __tmp;
	u32 __tmp1;
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
	u32 tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	u32 __tmp;
	u32 __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	u32 stat;
}

