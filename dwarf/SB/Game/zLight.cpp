typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xJSPNodeInfo;
typedef struct xEntShadow;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct RpAtomic;
typedef struct xSerial;
typedef struct RxNodeDefinition;
typedef struct xVolumeAsset;
typedef struct xAnimSingle;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xAnimState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RpWorld;
typedef struct RxPipelineCluster;
typedef struct xAnimTable;
typedef struct xVolume;
typedef struct RxPipelineNodeParam;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct xMemPool;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct xVec3;
typedef struct _xFColor;
typedef struct xModelInstance;
typedef struct xJSPHeader;
typedef struct RpVertexNormal;
typedef struct RwTexCoords;
typedef struct _zLight;
typedef struct rxHeapBlockHeader;
typedef struct xSurface;
typedef struct xBase;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RwResEntry;
typedef struct zLightAsset;
typedef struct xModelBucket;
typedef struct xCollis;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwLLLink;
typedef struct xEntAsset;
typedef struct RpTriangle;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xLinkAsset;
typedef struct rxReq;
typedef struct xQCData;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct iEnv;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct _tagPartLink;
typedef enum RxClusterValid;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef struct xBaseAsset;
typedef struct xBBox;
typedef enum RpWorldRenderOrder;
typedef enum rxEmbeddedPacketState;
typedef struct RpLight;
typedef struct xSphere;
typedef struct RpMaterial;
typedef struct tri_data;
typedef struct _class_0;
typedef struct RwFrame;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct RpSector;
typedef struct zVolume;
typedef struct xBox;
typedef struct xScene;
typedef struct RxClusterDefinition;
typedef struct xShadowSimpleCache;
typedef struct _tagPartSpace;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xMat3x3;
typedef struct xAnimActiveEffect;
typedef struct RxClusterRef;
typedef struct _tagPartition;
typedef struct xFFX;
typedef struct RwObject;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPTriangle;
typedef struct RxNodeMethods;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xAnimMultiFileBase;
typedef struct anim_coll_data;
typedef struct iLight;
typedef struct RxCluster;
typedef struct RpInterpolator;
typedef union _class_2;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(RxPipelineNode*);
typedef xBase*(*type_3)(uint32);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int8*(*type_5)(xBase*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_7)(uint32);
typedef uint32(*type_8)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_12)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_15)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_16)(RxNodeDefinition*);
typedef void(*type_17)(_zLight*, float32);
typedef void(*type_18)(RxNodeDefinition*);
typedef int32(*type_20)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_21)(RxPipelineNode*);
typedef void(*type_22)(_zLight*);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef uint32(*type_26)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xEnt*, xScene*, float32);
typedef void(*type_36)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_37)(xEnt*, xVec3*);
typedef void(*type_38)(xEnt*, xScene*, float32, xEntFrame*);
typedef RpWorldSector*(*type_40)(RpWorldSector*);
typedef void(*type_41)(xEnt*);
typedef uint32(*type_42)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_44)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_48)(xMemPool*, void*);
typedef int32(*type_50)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_54)(RwResEntry*);

typedef float32 type_2[4];
typedef RwTexCoords* type_11[8];
typedef float32 type_13[2];
typedef int8 type_14[4];
typedef int8 type_19[16];
typedef _zLight* type_23[32];
typedef uint16 type_24[3];
typedef int8 type_27[16];
typedef _zLight* type_28[32];
typedef xVec3 type_29[3];
typedef RpLight* type_31[2];
typedef RwFrame* type_32[2];
typedef RwTexCoords* type_33[8];
typedef float32 type_35[16];
typedef uint32 type_39[4];
typedef type_22 type_43[18];
typedef type_17 type_45[18];
typedef xVec3 type_46[4];
typedef float32 type_47[2];
typedef uint8 type_49[3];
typedef int8 type_51[32];
typedef int8 type_52[32];
typedef uint8 type_53[2];
typedef xCollis type_55[18];
typedef float32 type_56[4];
typedef uint8 type_57[2];
typedef xAnimMultiFileEntry type_58[1];
typedef RxCluster type_59[1];
typedef uint16 type_60[3];

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
	type_34 update;
	type_34 endUpdate;
	type_37 bupdate;
	type_38 move;
	type_41 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_44 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
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
	type_10 BeforeAnimMatrices;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_13 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_8 Callback;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_9 callback;
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
	type_25 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
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

struct xVolumeAsset
{
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_47 BilinearLerp;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_11 texCoords;
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
	type_4 BeforeEnter;
	type_30 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_40 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_48 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RpPolygon
{
	uint16 matIndex;
	type_60 vertIndex;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
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

struct xJSPHeader
{
	type_14 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _zLight : xBase
{
	uint32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int32 true_idx;
	float32* reg;
	int32 effect_idx;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_39 pad;
};

struct xSurface
{
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_20 eventFunc;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_54 destroyNotify;
};

struct zLightAsset : xBaseAsset
{
	uint8 lightType;
	uint8 lightEffect;
	type_53 lightPad;
	uint32 lightFlags;
	type_56 lightColor;
	xVec3 lightDir;
	float32 lightConeAngle;
	xSphere lightSphere;
	uint32 attachID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_57 NumAnims;
	void** RawData;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpTriangle
{
	type_24 vertIndex;
	int16 matIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_26 Conditional;
	type_26 Callback;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_2 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct rxReq
{
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_31 light;
	type_32 light_frame;
	int32 memlvl;
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

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_49 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_58 Files;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xShadowSimplePoly
{
	type_29 vert;
	xVec3 norm;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_0
{
	xVec3* verts;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_51 name;
	type_52 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_35 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RpSector
{
	int32 type;
};

struct zVolume : xVolume
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_5 base2Name;
	type_7 id2Name;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_46 corner;
};

struct _tagPartSpace
{
	int32 total;
	_tagPartLink head;
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
	type_55 colls;
	type_36 post;
	type_42 depenq;
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

struct _class_1
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _tagPartition
{
	xVec3 min;
	xVec3 max;
	xVec3 space_dim;
	int32 total_x;
	int32 total_y;
	int32 total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct xFFX
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RxNodeMethods
{
	type_15 nodeBody;
	type_16 nodeInit;
	type_18 nodeTerm;
	type_21 pipelineNodeInit;
	type_1 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_12 configMsgHandler;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct anim_coll_data
{
};

struct iLight
{
	uint32 type;
	RpLight* hw;
	xSphere sph;
	float32 radius_sq;
	_xFColor color;
	xVec3 dir;
	float32 coneangle;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

type_19 buffer;
type_27 buffer;
type_23 sLight;
int32 sLightTotal;
_tagPartition sLightPart;
zVolume* sPartitionVolume;
int32 gNumTemporaryLights;
type_28 gTemporaryLights;
type_45 sEffectFuncs;
type_43 sEffectInitFuncs;
xVec3 sDefaultShadowVec;
RpWorld* gLightWorld;
uint32 gActiveHeap;
type_50 zLightEventCB;

void zLightOn(_zLight* zl, int32 on);
void zLightSetVolume(zVolume* vol);
void zLightRemoveLocalEnv();
void zLightAddLocal(xEnt* ent);
void zLightAddLocalEnv();
void zLightUpdate(xBase* to, float32 dt);
int32 zLightEventCB(xBase* to, uint32 toEvent);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightSave(_zLight* ent, xSerial* s);
void zLightDestroyAll();
void zLightResolveLinks();
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightInit(void* b, void* tasset);
void zLightResetAll(xEnv* env);

// zLightOn__FP7_zLighti
// Start address: 0x180590
void zLightOn(_zLight* zl, int32 on)
{
}

// zLightSetVolume__FP7zVolume
// Start address: 0x1805c0
void zLightSetVolume(zVolume* vol)
{
	uint32 lp_id;
}

// zLightRemoveLocalEnv__Fv
// Start address: 0x180610
void zLightRemoveLocalEnv()
{
	int32 i;
	RwLLLink* link;
}

// zLightAddLocal__FP4xEnt
// Start address: 0x180660
void zLightAddLocal(xEnt* ent)
{
	xVec3 default_light_pos;
}

// zLightAddLocalEnv__Fv
// Start address: 0x180740
void zLightAddLocalEnv()
{
	int32 i;
	_zLight* zlight;
	iLight* light;
}

// zLightUpdate__FP5xBaseP6xScenef
// Start address: 0x180850
void zLightUpdate(xBase* to, float32 dt)
{
	_zLight* t;
	xVec3 pos;
}

// zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x180940
int32 zLightEventCB(xBase* to, uint32 toEvent)
{
	_zLight* t;
}

// zLightLoad__FP7_zLightP7xSerial
// Start address: 0x180a30
void zLightLoad(_zLight* ent, xSerial* s)
{
}

// zLightSave__FP7_zLightP7xSerial
// Start address: 0x180a40
void zLightSave(_zLight* ent, xSerial* s)
{
}

// zLightDestroyAll__Fv
// Start address: 0x180a50
void zLightDestroyAll()
{
	int32 total;
	int32 i;
}

// zLightResolveLinks__Fv
// Start address: 0x180ad0
void zLightResolveLinks()
{
	int32 i;
	_zLight* zl;
}

// zLightInit__FP5xBaseP11zLightAsset
// Start address: 0x180b60
void zLightInit(xBase* b, zLightAsset* tasset)
{
	_zLight* t;
	uint32 itype;
}

// zLightInit__FPvPv
// Start address: 0x180d60
void zLightInit(void* b, void* tasset)
{
}

// zLightResetAll__FP4xEnv
// Start address: 0x180d70
void zLightResetAll(xEnv* env)
{
}

