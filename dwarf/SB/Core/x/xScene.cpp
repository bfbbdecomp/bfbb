typedef struct xScene;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xModelInstance;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xQuat;
typedef struct xEnt;
typedef struct xAnimTransition;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xShadowSimpleCache;
typedef struct _class_0;
typedef struct RpMaterialList;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct RpMaterial;
typedef struct RpCollisionTriangle;
typedef struct xRay3;
typedef struct RpAtomic;
typedef struct RpLight;
typedef struct xQCData;
typedef struct RxPipeline;
typedef struct xEntFrame;
typedef union _class_1;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct xCollis;
typedef struct RpClump;
typedef struct xBound;
typedef struct RpGeometry;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RpWorldSector;
typedef struct RwMatrixTag;
typedef struct xEnv;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RpIntersection;
typedef struct RwRaster;
typedef struct RpMorphTarget;
typedef struct xFFX;
typedef enum RxClusterValidityReq;
typedef struct xGrid;
typedef struct iEnv;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xJSPNodeInfo;
typedef struct xMemPool;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xEntShadow;
typedef enum RxClusterValid;
typedef struct xBox;
typedef struct xNearFloorPoly;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct rxHeapFreeBlock;
typedef struct anim_coll_data;
typedef struct xRot;
typedef struct cb_ray_hits_ent;
typedef struct xClumpCollBSPBranchNode;
typedef enum rxEmbeddedPacketState;
typedef struct xLinkAsset;
typedef struct xSphere;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef struct xBase;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xJSPHeader;
typedef struct xAnimTransitionList;
typedef struct RxClusterDefinition;
typedef struct xQCControl;
typedef struct xClumpCollBSPTree;
typedef struct RwSphere;
typedef struct xLine3;
typedef struct RwTexDictionary;
typedef enum RpIntersectType;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef enum RpWorldRenderOrder;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RxIoSpec;
typedef struct RpSector;
typedef struct RpWorld;
typedef struct RwLine;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xModelBucket;
typedef struct RxPipelineCluster;
typedef union RpIntersectData;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct xEntAsset;
typedef struct xAnimMultiFileEntry;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xBaseAsset;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct xGridIterator;
typedef struct tri_data;
typedef struct xShadowSimplePoly;
typedef struct _class_2;
typedef struct xClumpCollBSPVertInfo;
typedef struct xBBox;
typedef struct RpInterpolator;

typedef void(*type_4)(xEnt*, xScene*, f32);
typedef u32(*type_6)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_9)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_10)(xEnt*, xVec3*);
typedef s32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_13)(xEnt*, xScene*, f32, xEntFrame*);
typedef s32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(xEnt*);
typedef void(*type_16)(xEnt*);
typedef void(*type_17)(RxNodeDefinition*);
typedef xEnt*(*type_18)(xEnt*, xScene*, void*);
typedef s32(*type_19)(RxPipelineNode*);
typedef void(*type_20)(RxPipelineNode*);
typedef u32(*type_21)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_22)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_25)(RpClump*, void*);
typedef u32(*type_26)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_27)(RpIntersection*, RpCollisionTriangle*, f32, void*);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_31)(xEnt*, void*);
typedef xBase*(*type_36)(u32);
typedef RpAtomic*(*type_37)(RpAtomic*);
typedef u32(*type_39)(xAnimTransition*, xAnimSingle*, void*);
typedef s8*(*type_41)(xBase*);
typedef void(*type_43)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef s8*(*type_45)(u32);
typedef s32(*type_48)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_50)(xMemPool*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef void(*type_56)(RwResEntry*);
typedef void(*type_57)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RpCollisionTriangle*(*type_58)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef void(*type_61)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RwObjectHasFrame*(*type_62)(RwObjectHasFrame*);

typedef f32 type_0[3];
typedef RwV3d* type_1[3];
typedef u8 type_2[2];
typedef f32 type_3[3];
typedef xAnimMultiFileEntry type_5[1];
typedef f32 type_8[16];
typedef u16 type_12[3];
typedef xVec3 type_28[4];
typedef RwTexCoords* type_30[8];
typedef u8 type_32[3];
typedef xVec3 type_33[3];
typedef u16 type_34[3];
typedef xCollis type_35[18];
typedef s8 type_38[4];
typedef xVec3 type_40[3];
typedef xVec3 type_42[4];
typedef u32 type_44[4];
typedef f32 type_46[4];
typedef RwTexCoords* type_47[8];
typedef f32 type_49[2];
typedef RpLight* type_52[2];
typedef s8 type_53[32];
typedef RwFrame* type_54[2];
typedef s8 type_55[32];
typedef RxCluster type_59[1];
typedef xVec3 type_60[3];
typedef f32 type_63[2];
typedef xVec3 type_64[3];
typedef u8 type_65[3];

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
	type_36 resolvID;
	type_41 base2Name;
	type_45 id2Name;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
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
	_class_2 anim_coll;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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
	type_24 BeforeEnter;
	type_7 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_5 Files;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
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
	type_29 BeforeAnimMatrices;
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
	type_8 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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
	type_4 update;
	type_4 endUpdate;
	type_10 bupdate;
	type_13 move;
	type_16 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_23 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_39 Conditional;
	type_39 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_63 BilinearLerp;
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

struct RpPolygon
{
	u16 matIndex;
	type_12 vertIndex;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_44 pad;
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
	type_28 corner;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	type_35 colls;
	type_9 post;
	type_21 depenq;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	s32 index;
	type_1 vertices;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_26 Callback;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_25 callback;
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_32 pad;
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
	type_47 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_30 texCoords;
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xFFX
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xGrid
{
	u8 ingrid_id;
	type_65 pad;
	u16 nx;
	u16 nz;
	f32 minx;
	f32 minz;
	f32 maxx;
	f32 maxz;
	f32 csizex;
	f32 csizez;
	f32 inv_csizex;
	f32 inv_csizez;
	f32 maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_52 light;
	type_54 light_frame;
	s32 memlvl;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_50 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_49 radius;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xNearFloorPoly
{
	xBox box;
	xVec3 center;
	xVec3 facingVec;
	f32 facingDot;
	f32 floorDot;
	type_33 vert;
	f32 neardist;
	xVec3 nearpt;
	s32 nearvert;
	s32 nearedge;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_56 destroyNotify;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct anim_coll_data
{
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct cb_ray_hits_ent
{
	xRay3& ray;
	xCollis& coll;
	u8 chkby;
	u8 collType;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_46 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xSphere
{
	xVec3 center;
	f32 r;
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
	type_2 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_34 vertIndex;
	s16 matIndex;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_48 eventFunc;
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
	f32 r;
	f32 h;
};

struct xJSPHeader
{
	type_38 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xQCControl
{
	f32 world_xmin;
	f32 world_ymin;
	f32 world_zmin;
	f32 world_xmax;
	f32 world_ymax;
	f32 world_zmax;
	f32 world_xsz;
	f32 world_ysz;
	f32 world_zsz;
	f32 scale_x;
	f32 scale_y;
	f32 scale_z;
	f32 center_x;
	f32 center_y;
	f32 center_z;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xLine3
{
	xVec3 p1;
	xVec3 p2;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_53 name;
	type_55 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct xSurface
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

struct RpSector
{
	s32 type;
};

struct RpWorld
{
	RwObject object;
	u32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	s32 numTexCoordSets;
	s32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	type_51 renderCallBack;
	RxPipeline* pipeline;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_14 nodeInit;
	type_17 nodeTerm;
	type_19 pipelineNodeInit;
	type_20 pipelineNodeTerm;
	type_22 pipelineNodeConfig;
	type_6 configMsgHandler;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_62 sync;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	u32 delfound;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct xShadowSimplePoly
{
	type_64 vert;
	xVec3 norm;
};

struct _class_2
{
	xVec3* verts;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

s8* g_xScene_FMT;
xScene* g_xSceneCur;
type_15 cb_seethru_func;
u8 cb_collType;
xMat4x3* sBoxTestMat;
u8 sUseJSP;
void* sTestOPtr;
xModelInstance* sTestMPtr;
xBound sNearestBound;
u8 sNearestChk;
u8 sNearestCollType;
RpIntersection sSphereIsx;
type_58 sectorNearestFloorCB;
type_31 gridNearestFloorCB;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
type_27 boxNearestFloorCB;
xGrid npcs_grid;
type_61 xRayHitsEnt;
type_57 xRayHitsTikiLandableEnt;
s32 gGridIterActive;
u32 gActiveHeap;

u32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, u8 collType, u8 chk);
s32 gridNearestFloorCB(xEnt* ent, void* cbdata);
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, f32 distance, void* data);
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, f32 distance, void* data);
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data);
u32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox);
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, u8 collType, u8 chk);
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, type_43 rentcb, xQCData* qcr, void* data);
void xSceneForAllNPCs(xScene* sc, type_18 func, void* data);
void xSceneForAllDynamics(xScene* sc, type_18 func, void* data);
void xSceneForAllStatics(xScene* sc, type_18 func, void* data);
void xSceneForAllEnts(xScene* sc, type_18 func, void* data);
s8* xSceneID2Name(xScene* sc, u32 id);
xBase* xSceneResolvID(xScene* sc, u32 id);
void xSceneAddEnt(xScene* sc, xEnt* ent);
void xSceneSetup(xScene* sc);
void xSceneLoad();
void xSceneSave();
void xSceneExit();
void xSceneInit(xScene* sc, u16 num_trigs, u16 num_stats, u16 num_dyns, u16 num_npcs);

// xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc
// Start address: 0x1fd4a0
u32 xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, u8 collType, u8 chk)
{
	RpIntersection isx;
}

// gridNearestFloorCB__FP4xEntPv
// Start address: 0x1fd810
s32 gridNearestFloorCB(xEnt* ent, void* cbdata)
{
	xNearFloorPoly* nfpoly;
	xCollis tempC;
}

// sectorNearestFloorCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1fd940
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, f32 distance, void* data)
{
}

// boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fd950
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, f32 distance, void* data)
{
	xNearFloorPoly* nfpoly;
	type_40 xformVert;
}

// nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fdc40
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data)
{
	xNearFloorPoly* nfpoly;
	f32 currnear;
	s32 currvert;
	s32 curredge;
	type_42 xformVert;
	xVec3 xformNorm;
	u32 potentialOID;
	s32 i;
	type_0 pdx;
	type_3 pdz;
	f32 numer;
	f32 denom;
	f32 t;
	f32 testdist2;
	f32 neardx;
	f32 neardz;
}

// Mgc_TriBoxTest__FP5xVec3P4xBox
// Start address: 0x1fe420
u32 Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox)
{
	f32 fMin0;
	f32 fMax0;
	f32 fMin1;
	f32 fMax1;
	xVec3 kD;
	type_60 akE;
	xVec3 baxis;
	u32 andflag;
	u32 curflag;
	s32 i;
	s32 i0;
	s32 i1;
}

// xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
// Start address: 0x1fe910
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, u8 collType, u8 chk)
{
	cb_ray_hits_ent cb;
	xBound bound;
	xCollis temp_coll;
}

// xRayHitsScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fecf0
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
}

// xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fee30
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
}

// xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1fef70
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
}

// xRayHitsTikiLandableEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1ff020
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
}

// xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
// Start address: 0x1ff120
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, type_43 rentcb, xQCData* qcr, void* data)
{
	xLine3 ln;
	xGridIterator it;
	xVec3 delta;
	f32 len;
	s32 sclgx;
	s32 sclgz;
	s32 eclgx;
	s32 eclgz;
	f32 sclcx;
	f32 sclcz;
	f32 eclcx;
	f32 eclcz;
	f32 halfclx;
	f32 halfclz;
	f32 quatrclx;
	f32 quatrclz;
	s32 sz;
	s32 ez;
	s32 x;
	s32 z;
	f32 dxdz;
	f32 cz;
	f32 lz;
	f32 rz;
	f32 lx;
	f32 rx;
	f32 ly;
	f32 ry;
	s32 aclgx;
	s32 aclgz;
	s32 bclgx;
	s32 bclgz;
	f32 aclcx;
	f32 aclcz;
	f32 bclcx;
	f32 bclcz;
	s32 ax;
	s32 bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	f32 cz;
	f32 lz;
	f32 rz;
	f32 lx;
	f32 rx;
	f32 ly;
	f32 ry;
	s32 aclgx;
	s32 aclgz;
	s32 bclgx;
	s32 bclgz;
	f32 aclcx;
	f32 aclcz;
	f32 bclcx;
	f32 bclcz;
	s32 ax;
	s32 bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
}

// xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2000d0
void xSceneForAllNPCs(xScene* sc, type_18 func, void* data)
{
	u16 i;
}

// xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200170
void xSceneForAllDynamics(xScene* sc, type_18 func, void* data)
{
	u16 i;
}

// xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200210
void xSceneForAllStatics(xScene* sc, type_18 func, void* data)
{
	u16 i;
}

// xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2002b0
void xSceneForAllEnts(xScene* sc, type_18 func, void* data)
{
	u16 i;
}

// xSceneID2Name__FP6xSceneUi
// Start address: 0x200350
s8* xSceneID2Name(xScene* sc, u32 id)
{
}

// xSceneResolvID__FP6xSceneUi
// Start address: 0x200390
xBase* xSceneResolvID(xScene* sc, u32 id)
{
}

// xSceneAddEnt__FP6xSceneP4xEnt
// Start address: 0x2003d0
void xSceneAddEnt(xScene* sc, xEnt* ent)
{
}

// xSceneSetup__FP6xScene
// Start address: 0x2004b0
void xSceneSetup(xScene* sc)
{
}

// xSceneLoad__FP6xSceneP7xSerial
// Start address: 0x2004c0
void xSceneLoad()
{
}

// xSceneSave__FP6xSceneP7xSerial
// Start address: 0x2004d0
void xSceneSave()
{
}

// xSceneExit__FP6xScene
// Start address: 0x2004e0
void xSceneExit()
{
}

// xSceneInit__FP6xSceneUsUsUsUs
// Start address: 0x2004f0
void xSceneInit(xScene* sc, u16 num_trigs, u16 num_stats, u16 num_dyns, u16 num_npcs)
{
}

