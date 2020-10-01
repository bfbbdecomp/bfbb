typedef struct RwObjectHasFrame;
typedef struct RxPipeline;
typedef struct RpMeshHeader;
typedef struct xBBox;
typedef struct xModelBucket;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RwResEntry;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorldSector;
typedef struct zLasso;
typedef struct RpClump;
typedef struct RpMorphTarget;
typedef struct RxNodeDefinition;
typedef struct xModelInstance;
typedef struct xClumpCollBSPTree;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineCluster;
typedef struct RpWorld;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct xAnimTable;
typedef struct xEntFrame;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xQuat;
typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct xGridBound;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct RpSector;
typedef struct xAnimState;
typedef struct xMat4x3;
typedef struct xVec3;
typedef struct RxPipelineRequiresCluster;
typedef struct iEnv;
typedef struct xShadowSimplePoly;
typedef struct RwMatrixTag;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxObjSpace3DVertex;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct tri_data;
typedef struct _class_0;
typedef struct RwSurfaceProperties;
typedef struct xJSPHeader;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct xLightKitLight;
typedef struct tagiRenderArrays;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct xScene;
typedef struct RwRaster;
typedef struct xShadowSimpleCache;
typedef struct RwFrame;
typedef struct xEnv;
typedef struct xEntCollis;
typedef enum RxClusterValidityReq;
typedef struct RwTexture;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct zLassoGuide;
typedef struct xBase;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLinkAsset;
typedef struct xRot;
typedef struct xCollis;
typedef struct _class_1;
typedef struct RpPolygon;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xFFX;
typedef struct xAnimMultiFile;
typedef struct xModelPool;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntShadow;
typedef struct xClumpCollBSPBranchNode;
typedef struct xSurface;
typedef struct xClumpCollBSPTriangle;
typedef struct anim_coll_data;
typedef struct xQCData;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RpTriangle;
typedef struct xMemPool;
typedef struct RwObject;
typedef union _class_2;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct zLassoGuideList;
typedef struct RxCluster;
typedef struct xModelTag;
typedef struct RxPacket;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwRGBAReal;
typedef struct xBound;
typedef struct RwLinkList;

typedef void(*type_0)(xAnimPlay*, xAnimState*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_5)(RxPipelineNode*);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_7)(RpWorldSector*);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_13)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef int32(*type_17)(RxPipelineNode*);
typedef void(*type_19)(xEnt*, xScene*, float32);
typedef uint32(*type_24)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_25)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_27)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float32, xEntFrame*);
typedef xBase*(*type_29)(uint32);
typedef void(*type_32)(xEnt*);
typedef int8*(*type_33)(xBase*);
typedef int8*(*type_35)(uint32);
typedef uint32(*type_36)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef uint32(*type_37)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef RpClump*(*type_46)(RpClump*, void*);
typedef int32(*type_52)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef void(*type_56)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);

typedef int8 type_1[4];
typedef float32 type_3[4];
typedef xVec3 type_9[16];
typedef xVec3 type_12[64];
typedef xVec3 type_14[3];
typedef xQuat type_16[64];
typedef RpLight* type_18[2];
typedef uint16 type_20[960];
typedef zLassoGuideList type_21[64];
typedef RwFrame* type_22[2];
typedef float32 type_23[16];
typedef RxObjSpace3DVertex type_26[480];
typedef float32 type_30[2];
typedef float32 type_31[480];
typedef uint8 type_34[3];
typedef uint16 type_39[3];
typedef uint8 type_40[2];
typedef xVec3 type_41[4];
typedef xAnimMultiFileEntry type_42[1];
typedef int8 type_43[16];
typedef float32 type_44[4];
typedef uint32 type_45[4];
typedef int8 type_47[16];
typedef RwTexCoords* type_48[8];
typedef xCollis type_49[18];
typedef int32 type_50[16];
typedef xVec3 type_51[5];
typedef uint8 type_53[5];
typedef uint16 type_54[3];
typedef int8 type_57[32];
typedef zLassoGuide type_58[3];
typedef int8 type_59[32];
typedef float32 type_61[2];
typedef xVec3 type_62[3];
typedef RxCluster type_63[1];
typedef xVec3 type_64[6];
typedef RwTexCoords* type_65[8];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_60 destroyNotify;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_48 texCoords;
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

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	type_51 lastRefs;
	type_53 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_46 callback;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_7 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_37 Conditional;
	type_37 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_19 update;
	type_19 endUpdate;
	type_27 bupdate;
	type_28 move;
	type_32 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_38 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_45 pad;
};

struct RpSector
{
	int32 type;
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
	type_0 BeforeEnter;
	type_4 StateCallback;
	type_6 BeforeAnimMatrices;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_18 light;
	type_22 light_frame;
	int32 memlvl;
};

struct xShadowSimplePoly
{
	type_14 vert;
	xVec3 norm;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
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
	type_55 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_40 NumAnims;
	void** RawData;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xJSPHeader
{
	type_1 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_30 BilinearLerp;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_23 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct tagiRenderArrays
{
	type_20 m_index;
	type_26 m_vertex;
	type_31 m_vertexTZ;
};

struct rxReq
{
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
	type_29 resolvID;
	type_33 base2Name;
	type_35 id2Name;
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
	type_41 corner;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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
	type_49 colls;
	type_25 post;
	type_36 depenq;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_57 name;
	type_59 mask;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_24 Callback;
};

struct zLassoGuide
{
	xModelInstance* poly;
	xAnimState* lassoAnim;
	type_50 vertMap;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_52 eventFunc;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_44 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpPolygon
{
	uint16 matIndex;
	type_39 vertIndex;
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
	type_6 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xFFX
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_42 Files;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_61 radius;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xSurface
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct anim_coll_data
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

struct RpTriangle
{
	type_54 vertIndex;
	int16 matIndex;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_56 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_11 nodeBody;
	type_13 nodeInit;
	type_15 nodeTerm;
	type_17 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_10 configMsgHandler;
};

struct zLassoGuideList
{
	xEnt* target;
	uint32 numGuides;
	type_58 guide;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_3 wt;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_63 clusters;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_34 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwLinkList
{
	RwLLLink link;
};

type_43 buffer;
type_47 buffer;
RwRaster* sLassoRaster;
type_21 sGuideList;
uint32 sNumGuideLists;
zLassoGuide* sCurrentGuide;
RxObjSpace3DVertex* lnverts;
int32 negativeHondaX;
xVec3 g_O3;
xMat4x3 g_I3;
tagiRenderArrays gRenderArr;

void bakeMorphAnim(RpGeometry* geom, void* anim);
void initVertMap(zLassoGuide* guide);
void zLasso_scenePrepare();
void nonfizzicalHonda(zLasso* lasso, xVec3* newPoint);
void fizzicalHonda(zLasso* lasso, xVec3* newPoint);
void zLasso_ResetTimer(zLasso* lasso, float32 interpTime);
void zLasso_InitTimer(zLasso* lasso, float32 interpTime);
void zLasso_Update(zLasso* lasso, xEnt* ent, float32 dt);
void zLasso_Render(zLasso* lasso);
void zLasso_InterpToGuide(zLasso* lasso);
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim);
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel);
void zLasso_Init(zLasso* lasso, xModelInstance* model, float32 x, float32 y, float32 z);

// bakeMorphAnim__FP10RpGeometryPv
// Start address: 0x29ac50
void bakeMorphAnim(RpGeometry* geom, void* anim)
{
	xMat4x3 mat;
	type_12 tran;
	type_16 quat;
	int32 i;
	int32 j;
	int32 numV;
	xVec3* v;
}

// initVertMap__FP11zLassoGuide
// Start address: 0x29ae00
void initVertMap(zLassoGuide* guide)
{
	int32 center;
	int32 init;
	int32 curr;
	int32 currTri;
	int32 i;
	RpGeometry* geom;
	int32 numTri;
	RpTriangle* tris;
}

// zLasso_scenePrepare__Fv
// Start address: 0x29af70
void zLasso_scenePrepare()
{
}

// nonfizzicalHonda__FP6zLassofP5xVec3
// Start address: 0x29af80
void nonfizzicalHonda(zLasso* lasso, xVec3* newPoint)
{
}

// fizzicalHonda__FP6zLassofP5xVec3
// Start address: 0x29b150
void fizzicalHonda(zLasso* lasso, xVec3* newPoint)
{
}

// zLasso_ResetTimer__FP6zLassof
// Start address: 0x29b410
void zLasso_ResetTimer(zLasso* lasso, float32 interpTime)
{
}

// zLasso_InitTimer__FP6zLassof
// Start address: 0x29b4a0
void zLasso_InitTimer(zLasso* lasso, float32 interpTime)
{
}

// zLasso_Update__FP6zLassoP4xEntf
// Start address: 0x29b630
void zLasso_Update(zLasso* lasso, xEnt* ent, float32 dt)
{
	int32 i;
	xVec3 newPoint;
	float32 interp;
}

// zLasso_Render__FP6zLasso
// Start address: 0x29bef0
void zLasso_Render(zLasso* lasso)
{
	int32 i;
	type_9 loop;
	int32 numVerts;
	float32 arc_length;
	uint8 shouldUseGuide;
	RpGeometry* geom;
	int32 numMorphs;
	int32 mIndx1;
	float32 interp;
	RwV3d* m1V;
	RwV3d* m2V;
	xVec3 dif;
	float32 closestDistSqr;
	float32 len;
	RxObjSpace3DVertex* tmp_pt;
	xVec3 b1;
	xVec3 b2;
	xVec3 b3;
	type_62 crossSection;
	type_64 sections;
	int32 currSection;
	int32 lastSection;
	int32 numSections;
	float32 distSoFar;
	float32 distTotal;
	float32 spokeDistIncr;
	uint32 numVertsSoFar;
	float32 u;
	float32 v;
	float32 ustep;
	float32 xDisp;
	float32 yDisp;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	int32 shouldRepeat;
	xMat4x3 rotMatrix;
	xVec3 temp;
	int32 k;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	xMat4x3 rotMatrix;
	xVec3 norm;
	int32 k;
	int32 k1;
	int32 k2;
	int32 k3;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// zLasso_InterpToGuide__FP6zLasso
// Start address: 0x29dc50
void zLasso_InterpToGuide(zLasso* lasso)
{
	RpGeometry* geom;
	RwV3d* v;
	int32 numVerts;
	int32 i;
	xVec3 rad1;
}

// zLasso_SetGuide__FP4xEntP10xAnimState
// Start address: 0x29e1c0
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim)
{
	uint32 i;
	uint32 j;
}

// zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance
// Start address: 0x29e2c0
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel)
{
	uint32 i;
	int32 givenSlot;
}

// zLasso_Init__FP6zLassoP14xModelInstancefff
// Start address: 0x29e440
void zLasso_Init(zLasso* lasso, xModelInstance* model, float32 x, float32 y, float32 z)
{
	RwTexture* tempTexture;
}

