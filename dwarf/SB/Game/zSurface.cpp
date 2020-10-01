typedef struct zSurfaceProps;
typedef struct xAnimPlay;
typedef struct RwFrame;
typedef struct RxHeap;
typedef struct xLightKit;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xLightKitLight;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct xSurface;
typedef struct xEnt;
typedef struct xQuat;
typedef struct _class_0;
typedef struct xScene;
typedef struct xLinkAsset;
typedef struct xShadowSimpleCache;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntCollis;
typedef struct rxHeapBlockHeader;
typedef struct zSurfacePropUVFX;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct RpLight;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xEntFrame;
typedef struct xBound;
typedef struct xAnimEffect;
typedef struct xGroupAsset;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xBaseAsset;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPTree;
typedef struct xBase;
typedef struct xQCData;
typedef struct xFFX;
typedef struct zMaterialMapAsset;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xClumpCollBSPVertInfo;
typedef struct zMaterialMapEntry;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMemPool;
typedef struct xClumpCollBSPTriangle;
typedef struct xEntShadow;
typedef struct RpMeshHeader;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct anim_coll_data;
typedef struct zSurfTextureAnim;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTransitionList;
typedef struct xGroup;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSerial;
typedef union _class_1;
typedef struct xBox;
typedef struct zSurfacePropTexAnim;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xAnimMultiFile;
typedef struct iEnv;
typedef struct RwTexDictionary;
typedef struct zSurfAssetBase;
typedef struct RxOutputSpec;
typedef struct xJSPNodeInfo;
typedef enum RpWorldRenderOrder;
typedef struct xEntAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwTexture;
typedef struct zSurfColorFX;
typedef struct RpSector;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct xJSPHeader;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct xEnv;
typedef struct zSurfUVFX;
typedef struct RxCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct tri_data;
typedef struct zSurfMatFX;
typedef struct _class_2;
typedef struct xShadowSimplePoly;
typedef struct RpInterpolator;

typedef void(*type_4)(xEnt*, xScene*, float32);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_7)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_8)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_10)(xEnt*, xVec3*);
typedef void(*type_12)(xEnt*, xScene*, float32, xEntFrame*);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_14)(xEnt*);
typedef int32(*type_15)(RxNodeDefinition*);
typedef void(*type_16)(RxNodeDefinition*);
typedef int32(*type_17)(RxPipelineNode*);
typedef uint32(*type_18)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_19)(RxPipelineNode*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_23)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_24)(RpClump*, void*);
typedef uint32(*type_25)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_27)(uint32);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_32)(xBase*);
typedef int8*(*type_34)(uint32);
typedef RpAtomic*(*type_37)(RpAtomic*);
typedef uint32(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_49)(RwResEntry*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);

typedef RwFrame* type_0[2];
typedef uint8 type_1[2];
typedef xAnimMultiFileEntry type_2[1];
typedef int8 type_3[16];
typedef float32 type_6[16];
typedef uint16 type_11[3];
typedef zSurfTextureAnim type_22[2];
typedef zSurfUVFX type_26[2];
typedef xVec3 type_28[4];
typedef uint8 type_30[3];
typedef RwTexCoords* type_31[8];
typedef uint8 type_33[3];
typedef uint16 type_35[3];
typedef xCollis type_36[18];
typedef uint32 type_39[4];
typedef RwTexCoords* type_41[8];
typedef float32 type_42[2];
typedef float32 type_43[2];
typedef int8 type_45[4];
typedef int8 type_47[32];
typedef int8 type_48[32];
typedef float32 type_50[4];
typedef uint8 type_51[3];
typedef zSurfacePropTexAnim type_52[2];
typedef RxCluster type_53[1];
typedef zSurfacePropUVFX type_54[2];
typedef float32 type_56[2];
typedef xVec3 type_57[3];
typedef int8 type_58[16];
typedef RpLight* type_59[2];
typedef zMaterialMapAsset* type_60[1];

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	type_52 texanim;
	uint32 uvfx_flags;
	type_54 uvfx;
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
	type_29 BeforeAnimMatrices;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_20 BeforeEnter;
	type_5 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_6 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_56 BilinearLerp;
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

struct RpPolygon
{
	uint16 matIndex;
	type_11 vertIndex;
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
	type_33 pad;
	void* moprops;
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
	type_4 update;
	type_4 endUpdate;
	type_10 bupdate;
	type_12 move;
	type_14 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_21 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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
	type_27 resolvID;
	type_32 base2Name;
	type_34 id2Name;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_50 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_28 corner;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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
	type_36 colls;
	type_8 post;
	type_18 depenq;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_39 pad;
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	type_42 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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
	type_37 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	_class_2 anim_coll;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_51 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_25 Callback;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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
	type_24 callback;
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
	type_41 texCoords;
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
	type_31 texCoords;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
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

struct xFFX
{
};

struct zMaterialMapAsset
{
	uint32 id;
	uint32 count;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct zMaterialMapEntry
{
	uint32 surfaceAssetID;
	uint32 materialIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_46 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_43 radius;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_49 destroyNotify;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
{
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_1 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_35 vertIndex;
	int16 matIndex;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xSerial
{
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_2 Files;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_59 light;
	type_0 light_frame;
	int32 memlvl;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zSurfAssetBase : xBaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	type_22 texture_anim;
	uint32 uvfx_flags;
	type_26 uvfx;
	uint8 on;
	type_30 surf_pad;
	float32 oob_delay;
	float32 walljump_scale_xz;
	float32 walljump_scale_y;
	float32 damage_timer;
	float32 damage_bounce;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_47 name;
	type_48 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct RpSector
{
	int32 type;
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
	type_13 nodeBody;
	type_15 nodeInit;
	type_16 nodeTerm;
	type_17 pipelineNodeInit;
	type_19 pipelineNodeTerm;
	type_23 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct xJSPHeader
{
	type_45 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_44 renderCallBack;
	RxPipeline* pipeline;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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
	type_53 clusters;
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
	type_55 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct _class_2
{
	xVec3* verts;
};

struct xShadowSimplePoly
{
	type_57 vert;
	xVec3 norm;
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

type_58 buffer;
type_3 buffer;
zSurfaceProps* zsps;
int32 sMapperCount;
type_60 sMapper;
xSurface sDef_surf;
zSurfaceProps sDef_surf_props;
zSurfAssetBase sDef_surf_asset;
uint32 gFrameCount;
type_40 zSurfaceEventCB;
uint32 gActiveHeap;

xSurface& zSurfaceGetDefault();
void zSurfaceGetName(int32 type, int8* buffer);
int32 zSurfaceEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zSurfaceUpdate(xBase* to, float32 dt);
void zSurfaceSetup(xSurface* s);
void zSurfaceLoad(xSurface* ent, xSerial* s);
void zSurfaceSave(xSurface* ent, xSerial* s);
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel);
int32 zSurfaceGetSlickness(xSurface* surf);
float32 zSurfaceGetOutOfBoundsDelay(xSurface& s);
float32 zSurfaceGetFriction(xSurface* surf);
uint32 zSurfaceGetStandOn(xSurface* surf);
uint32 zSurfaceGetSticky(xSurface* surf);
uint32 zSurfaceGetDamagePassthrough(xSurface* surf);
int32 zSurfaceGetDamageType(xSurface* surf);
uint32 zSurfaceGetMatchOrient(xSurface* surf);
float32 zSurfaceGetSlideStopAngle(xSurface* surf);
float32 zSurfaceGetSlideStartAngle(xSurface* surf);
uint8 zSurfaceOutOfBounds(xSurface& s);
uint32 zSurfaceGetStep(xSurface* surf);
uint32 zSurfaceGetSlide(xSurface* surf);
xSurface* zSurfaceGetSurface(xCollis* coll);
xSurface* zSurfaceGetSurface(uint32 mat_id);
void zSurfaceExit();
void zSurfaceRegisterMapper(uint32 assetId);
void zSurfaceInit();

// zSurfaceGetDefault__Fv
// Start address: 0x19c9a0
xSurface& zSurfaceGetDefault()
{
}

// zSurfaceGetName__FiPc
// Start address: 0x19c9b0
void zSurfaceGetName(int32 type, int8* buffer)
{
}

// zSurfaceEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19cc10
int32 zSurfaceEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	xSurface* t;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
}

// zSurfaceUpdate__FP5xBaseP6xScenef
// Start address: 0x19cf70
void zSurfaceUpdate(xBase* to, float32 dt)
{
	int32 j;
	zSurfaceProps* moprops;
	zSurfacePropUVFX& sfx;
	float32 uTime;
	int32 uTimeInt;
	float32 vTime;
	int32 vTimeInt;
	xGroup* g;
	int32 max;
}

// zSurfaceSetup__FP8xSurface
// Start address: 0x19d760
void zSurfaceSetup(xSurface* s)
{
	zSurfaceProps* pp;
	int32 i;
}

// zSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x19d7d0
void zSurfaceLoad(xSurface* ent, xSerial* s)
{
}

// zSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x19d7e0
void zSurfaceSave(xSurface* ent, xSerial* s)
{
}

// zSurfaceGetDamping__FPC8xSurfacef
// Start address: 0x19d7f0
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel)
{
}

// zSurfaceGetSlickness__FPC8xSurface
// Start address: 0x19d800
int32 zSurfaceGetSlickness(xSurface* surf)
{
}

// zSurfaceGetOutOfBoundsDelay__FRC8xSurface
// Start address: 0x19d830
float32 zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
}

// zSurfaceGetFriction__FPC8xSurface
// Start address: 0x19d860
float32 zSurfaceGetFriction(xSurface* surf)
{
}

// zSurfaceGetStandOn__FPC8xSurface
// Start address: 0x19d870
uint32 zSurfaceGetStandOn(xSurface* surf)
{
}

// zSurfaceGetSticky__FPC8xSurface
// Start address: 0x19d8b0
uint32 zSurfaceGetSticky(xSurface* surf)
{
}

// zSurfaceGetDamagePassthrough__FPC8xSurface
// Start address: 0x19d8e0
uint32 zSurfaceGetDamagePassthrough(xSurface* surf)
{
}

// zSurfaceGetDamageType__FPC8xSurface
// Start address: 0x19d910
int32 zSurfaceGetDamageType(xSurface* surf)
{
}

// zSurfaceGetMatchOrient__FPC8xSurface
// Start address: 0x19d940
uint32 zSurfaceGetMatchOrient(xSurface* surf)
{
}

// zSurfaceGetSlideStopAngle__FPC8xSurface
// Start address: 0x19d970
float32 zSurfaceGetSlideStopAngle(xSurface* surf)
{
}

// zSurfaceGetSlideStartAngle__FPC8xSurface
// Start address: 0x19da00
float32 zSurfaceGetSlideStartAngle(xSurface* surf)
{
}

// zSurfaceOutOfBounds__FRC8xSurface
// Start address: 0x19da90
uint8 zSurfaceOutOfBounds(xSurface& s)
{
}

// zSurfaceGetStep__FPC8xSurface
// Start address: 0x19dac0
uint32 zSurfaceGetStep(xSurface* surf)
{
}

// zSurfaceGetSlide__FPC8xSurface
// Start address: 0x19daf0
uint32 zSurfaceGetSlide(xSurface* surf)
{
}

// zSurfaceGetSurface__FPC7xCollis
// Start address: 0x19db20
xSurface* zSurfaceGetSurface(xCollis* coll)
{
	xSurface* surf;
}

// zSurfaceGetSurface__FUi
// Start address: 0x19db80
xSurface* zSurfaceGetSurface(uint32 mat_id)
{
	int32 map;
	zMaterialMapAsset* mapper;
	uint16 i;
	zMaterialMapEntry* entry;
	uint16 nsurfs;
	uint16 j;
	xSurface* surf;
}

// zSurfaceExit__Fv
// Start address: 0x19dcb0
void zSurfaceExit()
{
}

// zSurfaceRegisterMapper__FUi
// Start address: 0x19dcd0
void zSurfaceRegisterMapper(uint32 assetId)
{
}

// zSurfaceInit__Fv
// Start address: 0x19dd30
void zSurfaceInit()
{
	uint32 size;
	uint16 nsurfs;
	uint16 i;
	zSurfAssetBase* asset;
	xSurface* surf;
	zSurfaceProps* moprops;
	int32 j;
}

