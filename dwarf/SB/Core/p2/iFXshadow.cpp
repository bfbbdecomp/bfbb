typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpGeometry;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct RpAtomic;
typedef struct RwMatrixTag;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RwCamera;
typedef struct RpMeshHeader;
typedef struct xAnimPlay;
typedef struct RpClump;
typedef struct RwResEntry;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct RpLight;
typedef struct RwMeshCache;
typedef struct RxPS2AllPipeData;
typedef struct xEnt;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RpMorphTarget;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xAnimTable;
typedef struct rwPS2AllResEntryHeader;
typedef struct RxNodeDefinition;
typedef struct tri_data;
typedef struct RxPipelineRequiresCluster;
typedef struct xMemPool;
typedef struct xEntShadow;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwTexture;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct RwRaster;
typedef enum RpMeshHeaderFlags;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct xAnimFile;
typedef struct Shadow;
typedef struct xEnv;
typedef struct RwRGBAReal;
typedef struct rxReq;
typedef struct xLinkAsset;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xModelPool;
typedef enum RxClusterValidityReq;
typedef struct xCollis;
typedef struct _class_0;
typedef struct rwPS2AllFieldRec;
typedef union RwStreamUnion;
typedef struct rxNodePS2AllMatPvtData;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum RwStreamType;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xEntAsset;
typedef struct xBaseAsset;
typedef struct xAnimMultiFile;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxInstanceFlags;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RwStream;
typedef struct xCylinder;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xEntFrame;
typedef struct xBox;
typedef struct RwSphere;
typedef struct RwFrame;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct xBound;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct rwPS2AllResEntryFormat;
typedef struct xModelBucket;
typedef enum RwFrustumTestResult;
typedef struct xShadowSimplePoly;
typedef struct rpAtomicPS2AllLightData;
typedef struct RwTexDictionary;
typedef struct xQCData;
typedef struct RxOutputSpec;
typedef struct xBBox;
typedef struct RwMemory;
typedef struct xLightKit;
typedef struct xMat3x3;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct xLightKitLight;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct RxIoSpec;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xGridBound;
typedef struct RwFrustumPlane;
typedef union RwStreamFile;
typedef struct xAnimMultiFileBase;
typedef struct RwPlane;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct xFFX;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct anim_coll_data;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef struct RpMaterialList;
typedef struct rxNodePS2AllPvtData;
typedef struct RwV2d;

typedef int32(*type_1)(RxPS2AllPipeData*);
typedef void(*type_2)(xEnt*, xScene*, float32, xEntCollis*);
typedef xBase*(*type_3)(uint32);
typedef int32(*type_4)(void*, void*, uint32);
typedef int32(*type_5)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_7)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_9)(xAnimPlay*, xAnimState*);
typedef int8*(*type_11)(xBase*);
typedef int32(*type_12)(void*, uint32);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_14)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_15)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(RwResEntry*);
typedef int8*(*type_19)(uint32);
typedef uint32(*type_20)(RxPipelineNode*, uint32, uint32, void*);
typedef RwResEntry*(*type_21)(RxPS2AllPipeData*, RwResEntry**, uint32, type_16);
typedef int32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_24)(void*);
typedef int32(*type_26)(RxNodeDefinition*);
typedef uint32(*type_27)(void*, void*, uint32);
typedef void(*type_28)(RxNodeDefinition*);
typedef int32(*type_29)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_30)(RxPipelineNode*);
typedef int32(*type_31)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_32)(RxPipelineNode*);
typedef int32(*type_33)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef int32(*type_36)(RxPS2AllPipeData*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_39)(RxPS2AllPipeData*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef RwResEntry*(*type_42)(RxPS2AllPipeData*, RwResEntry**, uint32, type_16);
typedef int32(*type_45)(RxPS2AllPipeData*, void**, uint32);
typedef void(*type_51)(xEnt*, xScene*, float32);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_57)(xEnt*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef void(*type_60)(xMemPool*, void*);
typedef int32(*type_62)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_72)(RwObjectHasFrame*);

typedef float32 type_0[4];
typedef rwPS2AllClusterQuickInfo type_8[12];
typedef rwPS2AllFieldRec type_10[12];
typedef RwFrustumPlane type_17[6];
typedef void* type_18[32];
typedef RwV3d type_25[8];
typedef uint16 type_34[3];
typedef float32 type_37[2];
typedef uint8 type_40[1];
typedef RwTexCoords* type_43[8];
typedef rwPS2AllClusterInstanceInfo type_44[12];
typedef uint32 type_46[12];
typedef uint32 type_47[4];
typedef xVec3 type_48[3];
typedef uint8 type_49[2];
typedef uint32 type_50[4096];
typedef rwPS2AllFieldRec type_53[12];
typedef float32 type_54[16];
typedef int8 type_59[16];
typedef int8 type_61[32];
typedef int8 type_63[32];
typedef int8 type_64[16];
typedef float32 type_65[2];
typedef xVec3 type_66[4];
typedef RwResEntry* type_67[1];
typedef uint8 type_68[2];
typedef xAnimMultiFileEntry type_69[1];
typedef RxCluster type_70[1];
typedef uint8 type_71[3];
typedef xCollis type_73[18];

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_43 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_35 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_52 beginUpdate;
	type_58 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_17 frustumPlanes;
	RwBBox frustumBoundBox;
	type_25 frustumCorners;
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
	type_23 BeforeAnimMatrices;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_16 destroyNotify;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_15 Callback;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	type_67 meshes;
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
	type_51 update;
	type_51 endUpdate;
	type_55 bupdate;
	type_56 move;
	type_57 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_14 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_9 BeforeEnter;
	type_41 StateCallback;
	type_23 BeforeAnimMatrices;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_31 eventFunc;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_65 BilinearLerp;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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
	type_47 pad;
};

struct RwStreamCustom
{
	type_24 sfnclose;
	type_27 sfnread;
	type_4 sfnwrite;
	type_12 sfnskip;
	void* data;
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
	type_8 clquickinfo;
	type_10 fieldRec;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_60 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_37 radius;
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_61 name;
	type_63 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct RpTriangle
{
	type_34 vertIndex;
	int16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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
	type_68 NumAnims;
	void** RawData;
};

struct Shadow
{
};

struct xEnv
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct rxReq
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_0 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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
	type_40 pad;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct rxNodePS2AllMatPvtData
{
	type_1 meshInstanceTestCB;
	type_21 resEntryAllocCB;
	type_29 instanceCB;
	type_33 bridgeCB;
	type_36 postMeshCB;
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	type_44 clinfo;
	type_46 cliIndex;
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
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

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_69 Files;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

struct xSurface
{
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_71 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	uint32 stride;
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	type_49 pad;
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	type_53 fieldRec;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

enum RwFrustumTestResult
{
	rwSPHEREOUTSIDE,
	rwSPHEREBOUNDARY,
	rwSPHEREINSIDE,
	rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 0x7fffffff
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	float32 invScale;
	float32 recipInvScale;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwMemory
{
	uint8* start;
	uint32 length;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_54 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	type_3 resolvID;
	type_11 base2Name;
	type_19 id2Name;
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
	type_66 corner;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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
	type_73 colls;
	type_2 post;
	type_7 depenq;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_26 nodeInit;
	type_28 nodeTerm;
	type_30 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_20 configMsgHandler;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _class_1
{
	xVec3* verts;
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

struct xFFX
{
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_70 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_72 sync;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct rxNodePS2AllPvtData
{
};

struct RwV2d
{
	float32 x;
	float32 y;
};

type_59 buffer;
type_64 buffer;
RxPipeline* ShadowMapMaterialPipeline;
RxPipeline* ShadowMapAtomicPipeline;
int32 ShadowAtomicOffset;
int32 ShadowLightOffset;
int32 ShadowWorldOffset;
type_18 VUCodeArray;
uint32 ShadowMapLightOffset;
RwV3d Yaxis;
RwV3d Zaxis;
uint32 ShadowWidth;
uint32 ShadowHeight;
float32 ViewScale;
float32 PointLightRadius;
float32 PointLightBrightness;
float32 DirectionalLightBrightness;
RpAtomic* MainAtomic;
RpAtomic* ShadowAtomic;
RpAtomic* ShadowMapAtomic;
RwV3d sc_offset;
RwV3d light_offset;
RwCamera* ShadowCamera;
type_50 ourGlobals;
RpLight* ShadowLight;
RwCamera* ShadowCamera;
type_5 ShadowMapObjectSetupCallBack;
type_62 ShadowMapBridgeCallBack;
type_45 RpMeshPS2AllInstanceCallBack;
type_42 RpMeshPS2AllResEntryAllocCallBack;
type_39 RpMeshPS2AllMeshInstanceTestCallBack;
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
RwRaster* skyTextureRaster;
RwRaster* ShadowCameraRaster;
float32 ShadowStrength;
RwMatrixTag sm_matrix;
RwCamera* ShadowCamera;
uint8 skyTransType;
int32 skyCameraExt;
int32 rwPip2GeometryOffset;
int32 rwPip2AtomicOffset;
RpLight* ShadowLight;

int32 ShadowMapCreatePipelines();
RxPipeline* ShadowMapCreateMaterialPipeline();
int32 ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, uint32 numShadows);
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data);
int32 ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData);

// ShadowMapCreatePipelines__Fv
// Start address: 0x33b190
int32 ShadowMapCreatePipelines()
{
}

// ShadowMapCreateMaterialPipeline__Fv
// Start address: 0x33b2b0
RxPipeline* ShadowMapCreateMaterialPipeline()
{
	RxPipeline* pipe;
	RxPipeline* lpipe;
	RxNodeDefinition* ps2allmat;
	RxPipelineNode* plnode;
}

// ShadowMapBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x33b470
int32 ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	uint32 numInitialQW;
	uint32 numExtraQW;
	uint32 numShadows;
	uint32 numShadowQW;
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

// ShadowMapUpload__FP16RxPS2AllPipeDataUi
// Start address: 0x33bbc0
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, uint32 numShadows)
{
	ulong32 tmp;
	ulong32 tmp1;
}

// DKShadowDataUpload__FP6ShadowP16RxPS2AllPipeData
// Start address: 0x33bdc0
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data)
{
	uint32 msw;
	uint32 lsw;
	ulong32 tmp;
	RwMatrixTag matrix;
	RwCamera* camera;
	float32 val;
}

// ShadowMapObjectSetupCallBack__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x33bf30
int32 ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RwFrustumTestResult inFrustum;
	RpGeometry* _gmty;
	RpInterpolator* _itpltr;
	RpGeometry* _gmty;
	RwResEntry* resEntry;
	rwPS2AllResEntryHeader* ps2AllResHeader;
	RpInterpolator* interpolator;
	RwMatrixTag* _viewMatrix;
	RwMatrixTag* _mpLocalToWorld;
	RwFrustumTestResult* _infm;
	RwFrustumPlane* _frustPlane;
	RwSphere* _sphere;
	uint32 _numPlanes;
	float32 dot;
	RwFrustumTestResult _infm;
}

// ShadowMapLightingSetup__FP16RxPS2AllPipeData
// Start address: 0x33c3a0
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData)
{
	RpAtomic* atomic;
	RpGeometry* geometry;
	RpMeshHeader* meshHeader;
	rpAtomicPS2AllLightData lightingData;
	RwMatrixTag* frameMat;
	float32 temp;
}

