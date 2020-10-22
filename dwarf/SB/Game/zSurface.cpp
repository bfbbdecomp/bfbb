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
typedef struct _class_1;
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
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	float32 minmax_timer[2];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 pad[3];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	void(*InitCB)(xMemPool*, void*);
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
	float32 radius[2];
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
	void(*destroyNotify)(RwResEntry*);
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
	uint8 NumAnims[2];
	void** RawData;
};

struct RpTriangle
{
	uint16 vertIndex[3];
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	xAnimMultiFileEntry Files[1];
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
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
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
	int8 name[32];
	int8 mask[32];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	xVec3 vert[3];
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

int8 buffer[16];
int8 buffer[16];
zSurfaceProps* zsps;
int32 sMapperCount;
zMaterialMapAsset* sMapper[1];
xSurface sDef_surf;
zSurfaceProps sDef_surf_props;
zSurfAssetBase sDef_surf_asset;
uint32 gFrameCount;
int32(*zSurfaceEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
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
	// Line 984, Address: 0x19c9a0, Func Offset: 0
	// Line 985, Address: 0x19c9a4, Func Offset: 0x4
	// Func End, Address: 0x19c9ac, Func Offset: 0xc
}

// zSurfaceGetName__FiPc
// Start address: 0x19c9b0
void zSurfaceGetName(int32 type, int8* buffer)
{
	// Line 891, Address: 0x19c9b0, Func Offset: 0
	// Line 893, Address: 0x19c9b4, Func Offset: 0x4
	// Line 891, Address: 0x19c9b8, Func Offset: 0x8
	// Line 893, Address: 0x19c9bc, Func Offset: 0xc
	// Line 896, Address: 0x19c9e0, Func Offset: 0x30
	// Line 897, Address: 0x19c9f0, Func Offset: 0x40
	// Line 899, Address: 0x19c9f8, Func Offset: 0x48
	// Line 900, Address: 0x19ca08, Func Offset: 0x58
	// Line 902, Address: 0x19ca10, Func Offset: 0x60
	// Line 903, Address: 0x19ca20, Func Offset: 0x70
	// Line 905, Address: 0x19ca28, Func Offset: 0x78
	// Line 906, Address: 0x19ca38, Func Offset: 0x88
	// Line 908, Address: 0x19ca40, Func Offset: 0x90
	// Line 909, Address: 0x19ca50, Func Offset: 0xa0
	// Line 911, Address: 0x19ca58, Func Offset: 0xa8
	// Line 912, Address: 0x19ca68, Func Offset: 0xb8
	// Line 914, Address: 0x19ca70, Func Offset: 0xc0
	// Line 915, Address: 0x19ca80, Func Offset: 0xd0
	// Line 917, Address: 0x19ca88, Func Offset: 0xd8
	// Line 918, Address: 0x19ca98, Func Offset: 0xe8
	// Line 920, Address: 0x19caa0, Func Offset: 0xf0
	// Line 921, Address: 0x19cab0, Func Offset: 0x100
	// Line 923, Address: 0x19cab8, Func Offset: 0x108
	// Line 924, Address: 0x19cac8, Func Offset: 0x118
	// Line 926, Address: 0x19cad0, Func Offset: 0x120
	// Line 927, Address: 0x19cae0, Func Offset: 0x130
	// Line 929, Address: 0x19cae8, Func Offset: 0x138
	// Line 930, Address: 0x19caf8, Func Offset: 0x148
	// Line 932, Address: 0x19cb00, Func Offset: 0x150
	// Line 933, Address: 0x19cb10, Func Offset: 0x160
	// Line 935, Address: 0x19cb18, Func Offset: 0x168
	// Line 936, Address: 0x19cb28, Func Offset: 0x178
	// Line 938, Address: 0x19cb30, Func Offset: 0x180
	// Line 939, Address: 0x19cb40, Func Offset: 0x190
	// Line 941, Address: 0x19cb48, Func Offset: 0x198
	// Line 942, Address: 0x19cb58, Func Offset: 0x1a8
	// Line 944, Address: 0x19cb60, Func Offset: 0x1b0
	// Line 945, Address: 0x19cb70, Func Offset: 0x1c0
	// Line 947, Address: 0x19cb78, Func Offset: 0x1c8
	// Line 948, Address: 0x19cb88, Func Offset: 0x1d8
	// Line 950, Address: 0x19cb90, Func Offset: 0x1e0
	// Line 951, Address: 0x19cba0, Func Offset: 0x1f0
	// Line 953, Address: 0x19cba8, Func Offset: 0x1f8
	// Line 954, Address: 0x19cbb8, Func Offset: 0x208
	// Line 956, Address: 0x19cbc0, Func Offset: 0x210
	// Line 957, Address: 0x19cbd0, Func Offset: 0x220
	// Line 959, Address: 0x19cbd8, Func Offset: 0x228
	// Line 960, Address: 0x19cbe8, Func Offset: 0x238
	// Line 962, Address: 0x19cbf0, Func Offset: 0x240
	// Line 969, Address: 0x19cc00, Func Offset: 0x250
	// Func End, Address: 0x19cc0c, Func Offset: 0x25c
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
	// Line 714, Address: 0x19cc10, Func Offset: 0
	// Line 721, Address: 0x19cc14, Func Offset: 0x4
	// Line 714, Address: 0x19cc18, Func Offset: 0x8
	// Line 721, Address: 0x19cc20, Func Offset: 0x10
	// Line 726, Address: 0x19cca8, Func Offset: 0x98
	// Line 729, Address: 0x19ccb0, Func Offset: 0xa0
	// Line 730, Address: 0x19ccb4, Func Offset: 0xa4
	// Line 732, Address: 0x19ccbc, Func Offset: 0xac
	// Line 733, Address: 0x19ccc0, Func Offset: 0xb0
	// Line 735, Address: 0x19cccc, Func Offset: 0xbc
	// Line 738, Address: 0x19ccd8, Func Offset: 0xc8
	// Line 741, Address: 0x19cce0, Func Offset: 0xd0
	// Line 743, Address: 0x19ccf8, Func Offset: 0xe8
	// Line 746, Address: 0x19cd04, Func Offset: 0xf4
	// Line 750, Address: 0x19cd0c, Func Offset: 0xfc
	// Line 751, Address: 0x19cd24, Func Offset: 0x114
	// Line 753, Address: 0x19cd38, Func Offset: 0x128
	// Line 755, Address: 0x19cd40, Func Offset: 0x130
	// Line 759, Address: 0x19cd4c, Func Offset: 0x13c
	// Line 764, Address: 0x19cd54, Func Offset: 0x144
	// Line 767, Address: 0x19cd64, Func Offset: 0x154
	// Line 768, Address: 0x19cd7c, Func Offset: 0x16c
	// Line 770, Address: 0x19cd90, Func Offset: 0x180
	// Line 773, Address: 0x19cd9c, Func Offset: 0x18c
	// Line 775, Address: 0x19cda4, Func Offset: 0x194
	// Line 773, Address: 0x19cda8, Func Offset: 0x198
	// Line 776, Address: 0x19cdac, Func Offset: 0x19c
	// Line 780, Address: 0x19cdb4, Func Offset: 0x1a4
	// Line 782, Address: 0x19cdcc, Func Offset: 0x1bc
	// Line 783, Address: 0x19cddc, Func Offset: 0x1cc
	// Line 786, Address: 0x19cde8, Func Offset: 0x1d8
	// Line 789, Address: 0x19cdf8, Func Offset: 0x1e8
	// Line 792, Address: 0x19ce04, Func Offset: 0x1f4
	// Line 795, Address: 0x19ce0c, Func Offset: 0x1fc
	// Line 797, Address: 0x19ce2c, Func Offset: 0x21c
	// Line 799, Address: 0x19ce34, Func Offset: 0x224
	// Line 800, Address: 0x19ce40, Func Offset: 0x230
	// Line 803, Address: 0x19ce48, Func Offset: 0x238
	// Line 805, Address: 0x19ce4c, Func Offset: 0x23c
	// Line 808, Address: 0x19ce60, Func Offset: 0x250
	// Line 810, Address: 0x19ce68, Func Offset: 0x258
	// Line 811, Address: 0x19ce74, Func Offset: 0x264
	// Line 814, Address: 0x19ce80, Func Offset: 0x270
	// Line 818, Address: 0x19ce84, Func Offset: 0x274
	// Line 829, Address: 0x19ce8c, Func Offset: 0x27c
	// Line 818, Address: 0x19ce90, Func Offset: 0x280
	// Line 830, Address: 0x19ce94, Func Offset: 0x284
	// Line 833, Address: 0x19ce9c, Func Offset: 0x28c
	// Line 843, Address: 0x19cec0, Func Offset: 0x2b0
	// Line 833, Address: 0x19cecc, Func Offset: 0x2bc
	// Line 843, Address: 0x19ced4, Func Offset: 0x2c4
	// Line 852, Address: 0x19cedc, Func Offset: 0x2cc
	// Line 856, Address: 0x19cee8, Func Offset: 0x2d8
	// Line 858, Address: 0x19cf00, Func Offset: 0x2f0
	// Line 860, Address: 0x19cf04, Func Offset: 0x2f4
	// Line 863, Address: 0x19cf10, Func Offset: 0x300
	// Line 868, Address: 0x19cf14, Func Offset: 0x304
	// Line 869, Address: 0x19cf1c, Func Offset: 0x30c
	// Line 868, Address: 0x19cf20, Func Offset: 0x310
	// Line 870, Address: 0x19cf24, Func Offset: 0x314
	// Line 875, Address: 0x19cf2c, Func Offset: 0x31c
	// Line 876, Address: 0x19cf44, Func Offset: 0x334
	// Line 878, Address: 0x19cf50, Func Offset: 0x340
	// Line 886, Address: 0x19cf58, Func Offset: 0x348
	// Line 885, Address: 0x19cf60, Func Offset: 0x350
	// Line 886, Address: 0x19cf64, Func Offset: 0x354
	// Func End, Address: 0x19cf6c, Func Offset: 0x35c
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
	// Line 514, Address: 0x19cf70, Func Offset: 0
	// Line 527, Address: 0x19cf84, Func Offset: 0x14
	// Line 514, Address: 0x19cf88, Func Offset: 0x18
	// Line 521, Address: 0x19cf90, Func Offset: 0x20
	// Line 527, Address: 0x19cf9c, Func Offset: 0x2c
	// Line 529, Address: 0x19cfa0, Func Offset: 0x30
	// Line 534, Address: 0x19cfd8, Func Offset: 0x68
	// Line 539, Address: 0x19d000, Func Offset: 0x90
	// Line 538, Address: 0x19d004, Func Offset: 0x94
	// Line 539, Address: 0x19d00c, Func Offset: 0x9c
	// Line 538, Address: 0x19d010, Func Offset: 0xa0
	// Line 539, Address: 0x19d018, Func Offset: 0xa8
	// Line 540, Address: 0x19d028, Func Offset: 0xb8
	// Line 541, Address: 0x19d040, Func Offset: 0xd0
	// Line 542, Address: 0x19d054, Func Offset: 0xe4
	// Line 548, Address: 0x19d070, Func Offset: 0x100
	// Line 546, Address: 0x19d074, Func Offset: 0x104
	// Line 545, Address: 0x19d078, Func Offset: 0x108
	// Line 546, Address: 0x19d080, Func Offset: 0x110
	// Line 548, Address: 0x19d084, Func Offset: 0x114
	// Line 546, Address: 0x19d088, Func Offset: 0x118
	// Line 545, Address: 0x19d098, Func Offset: 0x128
	// Line 546, Address: 0x19d09c, Func Offset: 0x12c
	// Line 545, Address: 0x19d0a8, Func Offset: 0x138
	// Line 546, Address: 0x19d0ac, Func Offset: 0x13c
	// Line 548, Address: 0x19d0b8, Func Offset: 0x148
	// Line 549, Address: 0x19d0c8, Func Offset: 0x158
	// Line 550, Address: 0x19d0e0, Func Offset: 0x170
	// Line 551, Address: 0x19d0f4, Func Offset: 0x184
	// Line 554, Address: 0x19d110, Func Offset: 0x1a0
	// Line 551, Address: 0x19d114, Func Offset: 0x1a4
	// Line 554, Address: 0x19d118, Func Offset: 0x1a8
	// Line 555, Address: 0x19d130, Func Offset: 0x1c0
	// Line 556, Address: 0x19d148, Func Offset: 0x1d8
	// Line 557, Address: 0x19d15c, Func Offset: 0x1ec
	// Line 564, Address: 0x19d178, Func Offset: 0x208
	// Line 561, Address: 0x19d17c, Func Offset: 0x20c
	// Line 560, Address: 0x19d180, Func Offset: 0x210
	// Line 561, Address: 0x19d188, Func Offset: 0x218
	// Line 564, Address: 0x19d18c, Func Offset: 0x21c
	// Line 561, Address: 0x19d190, Func Offset: 0x220
	// Line 560, Address: 0x19d1a0, Func Offset: 0x230
	// Line 561, Address: 0x19d1a4, Func Offset: 0x234
	// Line 560, Address: 0x19d1b0, Func Offset: 0x240
	// Line 561, Address: 0x19d1b4, Func Offset: 0x244
	// Line 564, Address: 0x19d1c0, Func Offset: 0x250
	// Line 565, Address: 0x19d1d0, Func Offset: 0x260
	// Line 566, Address: 0x19d1e8, Func Offset: 0x278
	// Line 567, Address: 0x19d1fc, Func Offset: 0x28c
	// Line 569, Address: 0x19d218, Func Offset: 0x2a8
	// Line 567, Address: 0x19d21c, Func Offset: 0x2ac
	// Line 569, Address: 0x19d220, Func Offset: 0x2b0
	// Line 570, Address: 0x19d238, Func Offset: 0x2c8
	// Line 571, Address: 0x19d250, Func Offset: 0x2e0
	// Line 572, Address: 0x19d264, Func Offset: 0x2f4
	// Line 573, Address: 0x19d280, Func Offset: 0x310
	// Line 579, Address: 0x19d288, Func Offset: 0x318
	// Line 580, Address: 0x19d2d8, Func Offset: 0x368
	// Line 579, Address: 0x19d2e4, Func Offset: 0x374
	// Line 580, Address: 0x19d2e8, Func Offset: 0x378
	// Line 583, Address: 0x19d330, Func Offset: 0x3c0
	// Line 580, Address: 0x19d33c, Func Offset: 0x3cc
	// Line 583, Address: 0x19d340, Func Offset: 0x3d0
	// Line 584, Address: 0x19d388, Func Offset: 0x418
	// Line 583, Address: 0x19d394, Func Offset: 0x424
	// Line 584, Address: 0x19d398, Func Offset: 0x428
	// Line 586, Address: 0x19d3e0, Func Offset: 0x470
	// Line 596, Address: 0x19d3e8, Func Offset: 0x478
	// Line 597, Address: 0x19d400, Func Offset: 0x490
	// Line 601, Address: 0x19d418, Func Offset: 0x4a8
	// Line 602, Address: 0x19d424, Func Offset: 0x4b4
	// Line 603, Address: 0x19d430, Func Offset: 0x4c0
	// Line 604, Address: 0x19d448, Func Offset: 0x4d8
	// Line 607, Address: 0x19d454, Func Offset: 0x4e4
	// Line 604, Address: 0x19d45c, Func Offset: 0x4ec
	// Line 607, Address: 0x19d464, Func Offset: 0x4f4
	// Line 608, Address: 0x19d484, Func Offset: 0x514
	// Line 609, Address: 0x19d490, Func Offset: 0x520
	// Line 611, Address: 0x19d498, Func Offset: 0x528
	// Line 612, Address: 0x19d4b0, Func Offset: 0x540
	// Line 616, Address: 0x19d4c8, Func Offset: 0x558
	// Line 617, Address: 0x19d4d4, Func Offset: 0x564
	// Line 618, Address: 0x19d4e0, Func Offset: 0x570
	// Line 619, Address: 0x19d4f8, Func Offset: 0x588
	// Line 622, Address: 0x19d504, Func Offset: 0x594
	// Line 619, Address: 0x19d50c, Func Offset: 0x59c
	// Line 622, Address: 0x19d514, Func Offset: 0x5a4
	// Line 623, Address: 0x19d534, Func Offset: 0x5c4
	// Line 624, Address: 0x19d540, Func Offset: 0x5d0
	// Line 627, Address: 0x19d548, Func Offset: 0x5d8
	// Line 628, Address: 0x19d550, Func Offset: 0x5e0
	// Line 636, Address: 0x19d554, Func Offset: 0x5e4
	// Line 643, Address: 0x19d568, Func Offset: 0x5f8
	// Line 646, Address: 0x19d570, Func Offset: 0x600
	// Line 649, Address: 0x19d5a8, Func Offset: 0x638
	// Line 651, Address: 0x19d5ac, Func Offset: 0x63c
	// Line 653, Address: 0x19d5b4, Func Offset: 0x644
	// Line 655, Address: 0x19d5c0, Func Offset: 0x650
	// Line 658, Address: 0x19d5cc, Func Offset: 0x65c
	// Line 660, Address: 0x19d5d4, Func Offset: 0x664
	// Line 661, Address: 0x19d5d8, Func Offset: 0x668
	// Line 660, Address: 0x19d5dc, Func Offset: 0x66c
	// Line 661, Address: 0x19d5e0, Func Offset: 0x670
	// Line 660, Address: 0x19d5e4, Func Offset: 0x674
	// Line 661, Address: 0x19d5ec, Func Offset: 0x67c
	// Line 663, Address: 0x19d5f8, Func Offset: 0x688
	// Line 664, Address: 0x19d610, Func Offset: 0x6a0
	// Line 666, Address: 0x19d620, Func Offset: 0x6b0
	// Line 667, Address: 0x19d628, Func Offset: 0x6b8
	// Line 669, Address: 0x19d634, Func Offset: 0x6c4
	// Line 670, Address: 0x19d638, Func Offset: 0x6c8
	// Line 669, Address: 0x19d63c, Func Offset: 0x6cc
	// Line 670, Address: 0x19d640, Func Offset: 0x6d0
	// Line 669, Address: 0x19d644, Func Offset: 0x6d4
	// Line 670, Address: 0x19d64c, Func Offset: 0x6dc
	// Line 672, Address: 0x19d658, Func Offset: 0x6e8
	// Line 673, Address: 0x19d670, Func Offset: 0x700
	// Line 675, Address: 0x19d680, Func Offset: 0x710
	// Line 676, Address: 0x19d688, Func Offset: 0x718
	// Line 678, Address: 0x19d694, Func Offset: 0x724
	// Line 679, Address: 0x19d698, Func Offset: 0x728
	// Line 678, Address: 0x19d69c, Func Offset: 0x72c
	// Line 679, Address: 0x19d6a0, Func Offset: 0x730
	// Line 678, Address: 0x19d6a4, Func Offset: 0x734
	// Line 679, Address: 0x19d6ac, Func Offset: 0x73c
	// Line 681, Address: 0x19d6b8, Func Offset: 0x748
	// Line 682, Address: 0x19d6d4, Func Offset: 0x764
	// Line 688, Address: 0x19d6e4, Func Offset: 0x774
	// Line 689, Address: 0x19d6f0, Func Offset: 0x780
	// Line 691, Address: 0x19d710, Func Offset: 0x7a0
	// Line 692, Address: 0x19d718, Func Offset: 0x7a8
	// Line 697, Address: 0x19d730, Func Offset: 0x7c0
	// Line 700, Address: 0x19d740, Func Offset: 0x7d0
	// Func End, Address: 0x19d760, Func Offset: 0x7f0
}

// zSurfaceSetup__FP8xSurface
// Start address: 0x19d760
void zSurfaceSetup(xSurface* s)
{
	zSurfaceProps* pp;
	int32 i;
	// Line 477, Address: 0x19d760, Func Offset: 0
	// Line 480, Address: 0x19d770, Func Offset: 0x10
	// Line 482, Address: 0x19d774, Func Offset: 0x14
	// Line 484, Address: 0x19d77c, Func Offset: 0x1c
	// Line 487, Address: 0x19d780, Func Offset: 0x20
	// Line 489, Address: 0x19d788, Func Offset: 0x28
	// Line 491, Address: 0x19d790, Func Offset: 0x30
	// Line 500, Address: 0x19d79c, Func Offset: 0x3c
	// Line 503, Address: 0x19d7b0, Func Offset: 0x50
	// Func End, Address: 0x19d7c4, Func Offset: 0x64
}

// zSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x19d7d0
void zSurfaceLoad(xSurface* ent, xSerial* s)
{
	// Line 470, Address: 0x19d7d0, Func Offset: 0
	// Func End, Address: 0x19d7d8, Func Offset: 0x8
}

// zSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x19d7e0
void zSurfaceSave(xSurface* ent, xSerial* s)
{
	// Line 451, Address: 0x19d7e0, Func Offset: 0
	// Func End, Address: 0x19d7e8, Func Offset: 0x8
}

// zSurfaceGetDamping__FPC8xSurfacef
// Start address: 0x19d7f0
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel)
{
	// Line 416, Address: 0x19d7f0, Func Offset: 0
	// Func End, Address: 0x19d7f8, Func Offset: 0x8
}

// zSurfaceGetSlickness__FPC8xSurface
// Start address: 0x19d800
int32 zSurfaceGetSlickness(xSurface* surf)
{
	// Line 409, Address: 0x19d800, Func Offset: 0
	// Line 410, Address: 0x19d820, Func Offset: 0x20
	// Func End, Address: 0x19d828, Func Offset: 0x28
}

// zSurfaceGetOutOfBoundsDelay__FRC8xSurface
// Start address: 0x19d830
float32 zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
	// Line 395, Address: 0x19d830, Func Offset: 0
	// Line 400, Address: 0x19d834, Func Offset: 0x4
	// Line 403, Address: 0x19d850, Func Offset: 0x20
	// Func End, Address: 0x19d858, Func Offset: 0x28
}

// zSurfaceGetFriction__FPC8xSurface
// Start address: 0x19d860
float32 zSurfaceGetFriction(xSurface* surf)
{
	// Line 392, Address: 0x19d860, Func Offset: 0
	// Func End, Address: 0x19d868, Func Offset: 0x8
}

// zSurfaceGetStandOn__FPC8xSurface
// Start address: 0x19d870
uint32 zSurfaceGetStandOn(xSurface* surf)
{
	// Line 375, Address: 0x19d870, Func Offset: 0
	// Line 381, Address: 0x19d874, Func Offset: 0x4
	// Line 385, Address: 0x19d89c, Func Offset: 0x2c
	// Func End, Address: 0x19d8a4, Func Offset: 0x34
}

// zSurfaceGetSticky__FPC8xSurface
// Start address: 0x19d8b0
uint32 zSurfaceGetSticky(xSurface* surf)
{
	// Line 362, Address: 0x19d8b0, Func Offset: 0
	// Line 368, Address: 0x19d8b4, Func Offset: 0x4
	// Line 372, Address: 0x19d8cc, Func Offset: 0x1c
	// Func End, Address: 0x19d8d4, Func Offset: 0x24
}

// zSurfaceGetDamagePassthrough__FPC8xSurface
// Start address: 0x19d8e0
uint32 zSurfaceGetDamagePassthrough(xSurface* surf)
{
	// Line 349, Address: 0x19d8e0, Func Offset: 0
	// Line 355, Address: 0x19d8e4, Func Offset: 0x4
	// Line 359, Address: 0x19d900, Func Offset: 0x20
	// Func End, Address: 0x19d908, Func Offset: 0x28
}

// zSurfaceGetDamageType__FPC8xSurface
// Start address: 0x19d910
int32 zSurfaceGetDamageType(xSurface* surf)
{
	// Line 336, Address: 0x19d910, Func Offset: 0
	// Line 342, Address: 0x19d914, Func Offset: 0x4
	// Line 346, Address: 0x19d92c, Func Offset: 0x1c
	// Func End, Address: 0x19d934, Func Offset: 0x24
}

// zSurfaceGetMatchOrient__FPC8xSurface
// Start address: 0x19d940
uint32 zSurfaceGetMatchOrient(xSurface* surf)
{
	// Line 323, Address: 0x19d940, Func Offset: 0
	// Line 329, Address: 0x19d944, Func Offset: 0x4
	// Line 333, Address: 0x19d960, Func Offset: 0x20
	// Func End, Address: 0x19d968, Func Offset: 0x28
}

// zSurfaceGetSlideStopAngle__FPC8xSurface
// Start address: 0x19d970
float32 zSurfaceGetSlideStopAngle(xSurface* surf)
{
	// Line 310, Address: 0x19d970, Func Offset: 0
	// Line 316, Address: 0x19d974, Func Offset: 0x4
	// Line 320, Address: 0x19d9ec, Func Offset: 0x7c
	// Func End, Address: 0x19d9f4, Func Offset: 0x84
}

// zSurfaceGetSlideStartAngle__FPC8xSurface
// Start address: 0x19da00
float32 zSurfaceGetSlideStartAngle(xSurface* surf)
{
	// Line 297, Address: 0x19da00, Func Offset: 0
	// Line 303, Address: 0x19da04, Func Offset: 0x4
	// Line 307, Address: 0x19da7c, Func Offset: 0x7c
	// Func End, Address: 0x19da84, Func Offset: 0x84
}

// zSurfaceOutOfBounds__FRC8xSurface
// Start address: 0x19da90
uint8 zSurfaceOutOfBounds(xSurface& s)
{
	// Line 286, Address: 0x19da90, Func Offset: 0
	// Line 291, Address: 0x19da94, Func Offset: 0x4
	// Line 294, Address: 0x19dab4, Func Offset: 0x24
	// Func End, Address: 0x19dabc, Func Offset: 0x2c
}

// zSurfaceGetStep__FPC8xSurface
// Start address: 0x19dac0
uint32 zSurfaceGetStep(xSurface* surf)
{
	// Line 273, Address: 0x19dac0, Func Offset: 0
	// Line 279, Address: 0x19dac4, Func Offset: 0x4
	// Line 283, Address: 0x19dae0, Func Offset: 0x20
	// Func End, Address: 0x19dae8, Func Offset: 0x28
}

// zSurfaceGetSlide__FPC8xSurface
// Start address: 0x19daf0
uint32 zSurfaceGetSlide(xSurface* surf)
{
	// Line 260, Address: 0x19daf0, Func Offset: 0
	// Line 266, Address: 0x19daf4, Func Offset: 0x4
	// Line 270, Address: 0x19db10, Func Offset: 0x20
	// Func End, Address: 0x19db18, Func Offset: 0x28
}

// zSurfaceGetSurface__FPC7xCollis
// Start address: 0x19db20
xSurface* zSurfaceGetSurface(xCollis* coll)
{
	xSurface* surf;
	// Line 230, Address: 0x19db20, Func Offset: 0
	// Line 234, Address: 0x19db28, Func Offset: 0x8
	// Line 235, Address: 0x19db38, Func Offset: 0x18
	// Line 245, Address: 0x19db44, Func Offset: 0x24
	// Line 247, Address: 0x19db48, Func Offset: 0x28
	// Line 248, Address: 0x19db50, Func Offset: 0x30
	// Line 252, Address: 0x19db58, Func Offset: 0x38
	// Line 257, Address: 0x19db70, Func Offset: 0x50
	// Func End, Address: 0x19db7c, Func Offset: 0x5c
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
	// Line 194, Address: 0x19db80, Func Offset: 0
	// Line 196, Address: 0x19dba8, Func Offset: 0x28
	// Line 198, Address: 0x19dbc0, Func Offset: 0x40
	// Line 200, Address: 0x19dbc4, Func Offset: 0x44
	// Line 204, Address: 0x19dbcc, Func Offset: 0x4c
	// Line 206, Address: 0x19dbe0, Func Offset: 0x60
	// Line 207, Address: 0x19dbec, Func Offset: 0x6c
	// Line 213, Address: 0x19dbf8, Func Offset: 0x78
	// Line 214, Address: 0x19dc08, Func Offset: 0x88
	// Line 215, Address: 0x19dc10, Func Offset: 0x90
	// Line 216, Address: 0x19dc20, Func Offset: 0xa0
	// Line 218, Address: 0x19dc28, Func Offset: 0xa8
	// Line 221, Address: 0x19dc3c, Func Offset: 0xbc
	// Line 223, Address: 0x19dc58, Func Offset: 0xd8
	// Line 226, Address: 0x19dc70, Func Offset: 0xf0
	// Line 227, Address: 0x19dc78, Func Offset: 0xf8
	// Func End, Address: 0x19dca4, Func Offset: 0x124
}

// zSurfaceExit__Fv
// Start address: 0x19dcb0
void zSurfaceExit()
{
	// Line 178, Address: 0x19dcb0, Func Offset: 0
	// Line 179, Address: 0x19dcb8, Func Offset: 0x8
	// Line 181, Address: 0x19dcc0, Func Offset: 0x10
	// Line 182, Address: 0x19dcc4, Func Offset: 0x14
	// Func End, Address: 0x19dcd0, Func Offset: 0x20
}

// zSurfaceRegisterMapper__FUi
// Start address: 0x19dcd0
void zSurfaceRegisterMapper(uint32 assetId)
{
	// Line 150, Address: 0x19dcd0, Func Offset: 0
	// Line 154, Address: 0x19dce0, Func Offset: 0x10
	// Line 156, Address: 0x19dcfc, Func Offset: 0x2c
	// Line 159, Address: 0x19dd08, Func Offset: 0x38
	// Line 172, Address: 0x19dd14, Func Offset: 0x44
	// Line 175, Address: 0x19dd20, Func Offset: 0x50
	// Func End, Address: 0x19dd30, Func Offset: 0x60
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
	// Line 50, Address: 0x19dd30, Func Offset: 0
	// Line 52, Address: 0x19dd34, Func Offset: 0x4
	// Line 50, Address: 0x19dd38, Func Offset: 0x8
	// Line 52, Address: 0x19dd3c, Func Offset: 0xc
	// Line 50, Address: 0x19dd40, Func Offset: 0x10
	// Line 52, Address: 0x19dd54, Func Offset: 0x24
	// Line 54, Address: 0x19dd60, Func Offset: 0x30
	// Line 56, Address: 0x19dd68, Func Offset: 0x38
	// Line 57, Address: 0x19dd70, Func Offset: 0x40
	// Line 60, Address: 0x19dd98, Func Offset: 0x68
	// Line 62, Address: 0x19dda8, Func Offset: 0x78
	// Line 64, Address: 0x19ddb0, Func Offset: 0x80
	// Line 67, Address: 0x19ddb4, Func Offset: 0x84
	// Line 62, Address: 0x19ddb8, Func Offset: 0x88
	// Line 67, Address: 0x19ddbc, Func Offset: 0x8c
	// Line 64, Address: 0x19ddc8, Func Offset: 0x98
	// Line 67, Address: 0x19ddcc, Func Offset: 0x9c
	// Line 72, Address: 0x19ddd8, Func Offset: 0xa8
	// Line 73, Address: 0x19dde8, Func Offset: 0xb8
	// Line 74, Address: 0x19ddf4, Func Offset: 0xc4
	// Line 76, Address: 0x19de00, Func Offset: 0xd0
	// Line 78, Address: 0x19de08, Func Offset: 0xd8
	// Line 81, Address: 0x19de10, Func Offset: 0xe0
	// Line 78, Address: 0x19de14, Func Offset: 0xe4
	// Line 85, Address: 0x19de18, Func Offset: 0xe8
	// Line 80, Address: 0x19de1c, Func Offset: 0xec
	// Line 81, Address: 0x19de20, Func Offset: 0xf0
	// Line 80, Address: 0x19de2c, Func Offset: 0xfc
	// Line 81, Address: 0x19de30, Func Offset: 0x100
	// Line 83, Address: 0x19de3c, Func Offset: 0x10c
	// Line 84, Address: 0x19de44, Func Offset: 0x114
	// Line 95, Address: 0x19de4c, Func Offset: 0x11c
	// Line 98, Address: 0x19de50, Func Offset: 0x120
	// Line 95, Address: 0x19de54, Func Offset: 0x124
	// Line 87, Address: 0x19de58, Func Offset: 0x128
	// Line 88, Address: 0x19de60, Func Offset: 0x130
	// Line 89, Address: 0x19de68, Func Offset: 0x138
	// Line 90, Address: 0x19de70, Func Offset: 0x140
	// Line 92, Address: 0x19de74, Func Offset: 0x144
	// Line 95, Address: 0x19de7c, Func Offset: 0x14c
	// Line 96, Address: 0x19de8c, Func Offset: 0x15c
	// Line 98, Address: 0x19de90, Func Offset: 0x160
	// Line 99, Address: 0x19dea0, Func Offset: 0x170
	// Line 100, Address: 0x19dea4, Func Offset: 0x174
	// Line 112, Address: 0x19dea8, Func Offset: 0x178
	// Line 101, Address: 0x19deac, Func Offset: 0x17c
	// Line 112, Address: 0x19deb0, Func Offset: 0x180
	// Line 111, Address: 0x19deb4, Func Offset: 0x184
	// Line 101, Address: 0x19debc, Func Offset: 0x18c
	// Line 102, Address: 0x19dec0, Func Offset: 0x190
	// Line 103, Address: 0x19dec8, Func Offset: 0x198
	// Line 104, Address: 0x19dee0, Func Offset: 0x1b0
	// Line 105, Address: 0x19def8, Func Offset: 0x1c8
	// Line 106, Address: 0x19df10, Func Offset: 0x1e0
	// Line 107, Address: 0x19df28, Func Offset: 0x1f8
	// Line 108, Address: 0x19df40, Func Offset: 0x210
	// Line 109, Address: 0x19df58, Func Offset: 0x228
	// Line 111, Address: 0x19df70, Func Offset: 0x240
	// Line 110, Address: 0x19df74, Func Offset: 0x244
	// Line 111, Address: 0x19df78, Func Offset: 0x248
	// Line 112, Address: 0x19df7c, Func Offset: 0x24c
	// Line 113, Address: 0x19df84, Func Offset: 0x254
	// Line 114, Address: 0x19df98, Func Offset: 0x268
	// Line 115, Address: 0x19dfa0, Func Offset: 0x270
	// Line 116, Address: 0x19dfa4, Func Offset: 0x274
	// Line 119, Address: 0x19dfa8, Func Offset: 0x278
	// Line 121, Address: 0x19e028, Func Offset: 0x2f8
	// Func End, Address: 0x19e04c, Func Offset: 0x31c
}

