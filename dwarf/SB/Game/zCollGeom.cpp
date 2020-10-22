typedef struct xEnt;
typedef struct xCollis;
typedef struct RpPolygon;
typedef struct xAnimActiveEffect;
typedef struct _class_0;
typedef struct RwObjectHasFrame;
typedef struct xScene;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct RxNodeDefinition;
typedef struct xEnv;
typedef struct xModelInstance;
typedef struct xAnimSingle;
typedef struct xLightKitLight;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntCollis;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpClump;
typedef struct RxPipelineNodeParam;
typedef struct xShadowSimpleCache;
typedef struct xClumpCollBSPTree;
typedef struct RpGeometry;
typedef struct RxHeap;
typedef struct RpWorldSector;
typedef struct xEntShadow;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct xQuat;
typedef struct xVec3;
typedef struct anim_coll_data;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMorphTarget;
typedef struct xClumpCollBSPBranchNode;
typedef struct rxHeapBlockHeader;
typedef struct xAnimEffect;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineRequiresCluster;
typedef struct RpVertexNormal;
typedef struct xQCData;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct xBase;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct RpTriangle;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct _class_1;
typedef struct xLinkAsset;
typedef struct xAnimFile;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xAnimTransitionList;
typedef struct iEnv;
typedef struct xLightKit;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xJSPNodeInfo;
typedef struct xBaseAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef enum RpWorldRenderOrder;
typedef struct zCollGeomTable;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xBound;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xJSPHeader;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xEntAsset;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RpLight;
typedef struct xMat3x3;
typedef struct RpWorld;
typedef struct RxClusterRef;
typedef struct xEntFrame;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xGridBound;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xShadowSimplePoly;
typedef struct RwFrame;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct _class_2;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef uint32(*type_1)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_2)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_3)(uint32);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_5)(xEnt*, xScene*, float32);
typedef void(*type_6)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_8)(RxPipelineNode*);
typedef void(*type_9)(xEnt*);
typedef void(*type_13)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_14)(RxPipelineNode*, RxPipeline*);
typedef void(*type_16)(xEnt*, xVec3*);
typedef uint32(*type_17)(RxPipelineNode*, uint32, uint32, void*);
typedef RpClump*(*type_18)(RpClump*, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_20)(RxNodeDefinition*);
typedef void(*type_22)(xAnimPlay*, xAnimState*);
typedef void(*type_23)(RxNodeDefinition*);
typedef void(*type_25)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_26)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_27)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_28)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_31)(RpAtomic*);
typedef xBase*(*type_32)(uint32);
typedef int8*(*type_34)(xBase*);
typedef RpWorldSector*(*type_41)(RpWorldSector*);
typedef void(*type_43)(xMemPool*, void*);
typedef void(*type_46)(RwResEntry*);
typedef void(*type_51)(xEnt*, xScene*, float32, xEntFrame*);

typedef uint16 type_7[3];
typedef uint8 type_10[2];
typedef xAnimMultiFileEntry type_11[1];
typedef xVec3 type_12[4];
typedef float32 type_15[4];
typedef RwTexCoords* type_21[8];
typedef xCollis type_24[18];
typedef uint16 type_29[3];
typedef int8 type_30[16];
typedef int8 type_33[16];
typedef uint32 type_35[3];
typedef float32 type_36[2];
typedef RpAtomic* type_37[1];
typedef RwTexCoords* type_38[8];
typedef uint32 type_39[4];
typedef int8 type_40[4];
typedef xVec3 type_42[3];
typedef int8 type_44[32];
typedef int8 type_45[32];
typedef zCollGeomTable* type_47[3];
typedef RpLight* type_48[2];
typedef float32 type_49[16];
typedef float32 type_50[2];
typedef RwFrame* type_52[2];
typedef uint8 type_53[3];
typedef RxCluster type_54[1];

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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xFFX
{
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct xSurface
{
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct anim_coll_data
{
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zCollGeomTable
{
	RpAtomic* baseModel;
	RpAtomic* colModel[1];
	RpAtomic* camcolModel;
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

struct RpSector
{
	int32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct _class_2
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

struct xAnimMultiFileBase
{
	uint32 Count;
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

int8 buffer[16];
int8 buffer[16];
uint32 sNumTables;
uint32 sTableCount[3];
zCollGeomTable* sTableList[3];

void zCollGeom_CamDisable(xEnt* ent);
void zCollGeom_CamEnable(xEnt* ent);
void zCollGeom_Init();
uint32 zCollGeom_EntSetup(xEnt* ent);

// zCollGeom_CamDisable__FP4xEnt
// Start address: 0x2f32e0
void zCollGeom_CamDisable(xEnt* ent)
{
	// Line 226, Address: 0x2f32e0, Func Offset: 0
	// Func End, Address: 0x2f32e8, Func Offset: 0x8
}

// zCollGeom_CamEnable__FP4xEnt
// Start address: 0x2f32f0
void zCollGeom_CamEnable(xEnt* ent)
{
	// Line 218, Address: 0x2f32f0, Func Offset: 0
	// Line 219, Address: 0x2f32fc, Func Offset: 0xc
	// Line 220, Address: 0x2f3304, Func Offset: 0x14
	// Line 221, Address: 0x2f3308, Func Offset: 0x18
	// Func End, Address: 0x2f3310, Func Offset: 0x20
}

// zCollGeom_Init__Fv
// Start address: 0x2f3310
void zCollGeom_Init()
{
	uint32 tmpsize;
	uint32 i;
	uint32 k;
	void* data;
	// Line 162, Address: 0x2f3310, Func Offset: 0
	// Line 166, Address: 0x2f3314, Func Offset: 0x4
	// Line 162, Address: 0x2f3318, Func Offset: 0x8
	// Line 166, Address: 0x2f331c, Func Offset: 0xc
	// Line 162, Address: 0x2f3320, Func Offset: 0x10
	// Line 166, Address: 0x2f3330, Func Offset: 0x20
	// Line 167, Address: 0x2f3340, Func Offset: 0x30
	// Line 171, Address: 0x2f3348, Func Offset: 0x38
	// Line 172, Address: 0x2f3360, Func Offset: 0x50
	// Line 173, Address: 0x2f3374, Func Offset: 0x64
	// Line 176, Address: 0x2f337c, Func Offset: 0x6c
	// Line 177, Address: 0x2f3384, Func Offset: 0x74
	// Line 178, Address: 0x2f3390, Func Offset: 0x80
	// Line 179, Address: 0x2f339c, Func Offset: 0x8c
	// Line 180, Address: 0x2f33a4, Func Offset: 0x94
	// Line 181, Address: 0x2f33a8, Func Offset: 0x98
	// Line 184, Address: 0x2f33b0, Func Offset: 0xa0
	// Line 185, Address: 0x2f33d4, Func Offset: 0xc4
	// Line 186, Address: 0x2f33dc, Func Offset: 0xcc
	// Line 190, Address: 0x2f33fc, Func Offset: 0xec
	// Line 191, Address: 0x2f3404, Func Offset: 0xf4
	// Line 195, Address: 0x2f3420, Func Offset: 0x110
	// Line 196, Address: 0x2f3430, Func Offset: 0x120
	// Line 198, Address: 0x2f3438, Func Offset: 0x128
	// Line 211, Address: 0x2f344c, Func Offset: 0x13c
	// Line 212, Address: 0x2f3468, Func Offset: 0x158
	// Line 211, Address: 0x2f3470, Func Offset: 0x160
	// Line 212, Address: 0x2f3474, Func Offset: 0x164
	// Line 214, Address: 0x2f3480, Func Offset: 0x170
	// Func End, Address: 0x2f34a0, Func Offset: 0x190
}

// zCollGeom_EntSetup__FP4xEnt
// Start address: 0x2f34a0
uint32 zCollGeom_EntSetup(xEnt* ent)
{
	uint32 i;
	uint32 j;
	int32 auto_cam_coll;
	RpAtomic* imodel;
	xModelInstance* model;
	xModelInstance* model;
	// Line 82, Address: 0x2f34a0, Func Offset: 0
	// Line 85, Address: 0x2f34cc, Func Offset: 0x2c
	// Line 88, Address: 0x2f34d4, Func Offset: 0x34
	// Line 85, Address: 0x2f34d8, Func Offset: 0x38
	// Line 89, Address: 0x2f34dc, Func Offset: 0x3c
	// Line 91, Address: 0x2f34e0, Func Offset: 0x40
	// Line 93, Address: 0x2f34ec, Func Offset: 0x4c
	// Line 95, Address: 0x2f3510, Func Offset: 0x70
	// Line 96, Address: 0x2f352c, Func Offset: 0x8c
	// Line 95, Address: 0x2f3530, Func Offset: 0x90
	// Line 96, Address: 0x2f3534, Func Offset: 0x94
	// Line 102, Address: 0x2f3544, Func Offset: 0xa4
	// Line 103, Address: 0x2f3548, Func Offset: 0xa8
	// Line 106, Address: 0x2f3550, Func Offset: 0xb0
	// Line 111, Address: 0x2f356c, Func Offset: 0xcc
	// Line 107, Address: 0x2f3570, Func Offset: 0xd0
	// Line 108, Address: 0x2f3574, Func Offset: 0xd4
	// Line 111, Address: 0x2f3580, Func Offset: 0xe0
	// Line 112, Address: 0x2f3590, Func Offset: 0xf0
	// Line 114, Address: 0x2f35b4, Func Offset: 0x114
	// Line 115, Address: 0x2f35c4, Func Offset: 0x124
	// Line 116, Address: 0x2f35cc, Func Offset: 0x12c
	// Line 118, Address: 0x2f35d0, Func Offset: 0x130
	// Line 119, Address: 0x2f35d4, Func Offset: 0x134
	// Line 123, Address: 0x2f35dc, Func Offset: 0x13c
	// Line 132, Address: 0x2f35f8, Func Offset: 0x158
	// Line 124, Address: 0x2f35fc, Func Offset: 0x15c
	// Line 125, Address: 0x2f3600, Func Offset: 0x160
	// Line 132, Address: 0x2f360c, Func Offset: 0x16c
	// Line 133, Address: 0x2f3620, Func Offset: 0x180
	// Line 135, Address: 0x2f3644, Func Offset: 0x1a4
	// Line 136, Address: 0x2f3654, Func Offset: 0x1b4
	// Line 139, Address: 0x2f3660, Func Offset: 0x1c0
	// Line 142, Address: 0x2f3664, Func Offset: 0x1c4
	// Line 143, Address: 0x2f3680, Func Offset: 0x1e0
	// Line 142, Address: 0x2f3688, Func Offset: 0x1e8
	// Line 143, Address: 0x2f368c, Func Offset: 0x1ec
	// Line 147, Address: 0x2f3698, Func Offset: 0x1f8
	// Line 148, Address: 0x2f36ac, Func Offset: 0x20c
	// Line 149, Address: 0x2f36b4, Func Offset: 0x214
	// Line 151, Address: 0x2f36b8, Func Offset: 0x218
	// Line 152, Address: 0x2f36c4, Func Offset: 0x224
	// Line 156, Address: 0x2f36d0, Func Offset: 0x230
	// Line 157, Address: 0x2f36d4, Func Offset: 0x234
	// Line 156, Address: 0x2f36d8, Func Offset: 0x238
	// Line 157, Address: 0x2f36dc, Func Offset: 0x23c
	// Line 159, Address: 0x2f36e0, Func Offset: 0x240
	// Func End, Address: 0x2f3710, Func Offset: 0x270
}

