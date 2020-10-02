typedef struct RxPipelineNode;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xEnt;
typedef struct xEntFrame;
typedef struct RwObjectHasFrame;
typedef struct xAnimState;
typedef struct iEnv;
typedef struct RpClump;
typedef struct xScene;
typedef struct xEntCollis;
typedef struct rxHeapFreeBlock;
typedef struct xCollis;
typedef struct zEntTrigger;
typedef struct RpWorld;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct xBound;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RpWorldRenderOrder;
typedef struct xFFX;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpMaterial;
typedef struct RxPipelineNodeParam;
typedef struct xEntAsset;
typedef struct xJSPHeader;
typedef struct xLightKitLight;
typedef struct RpTriangle;
typedef struct RpLight;
typedef struct RxHeap;
typedef struct xSurface;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xQuat;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xShadowSimpleCache;
typedef struct xModelInstance;
typedef struct xQCData;
typedef struct RwFrame;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct RwV3d;
typedef struct RpMeshHeader;
typedef struct xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct RwResEntry;
typedef struct xVec3;
typedef struct xSerial;
typedef struct RpWorldSector;
typedef struct anim_coll_data;
typedef struct RpMorphTarget;
typedef struct RxPipelineRequiresCluster;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct RwSurfaceProperties;
typedef struct xGridBound;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xClumpCollBSPTree;
typedef enum RxClusterValidityReq;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLLLink;
typedef struct xClumpCollBSPBranchNode;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xClumpCollBSPTriangle;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct xRot;
typedef struct xTriggerAsset;
typedef struct xIsect;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct xLinkAsset;
typedef struct tri_data;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpInterpolator;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileBase;
typedef struct xCylinder;
typedef struct xAnimEffect;
typedef struct xBox;
typedef union _class_1;
typedef struct RxClusterDefinition;
typedef struct RpPolygon;
typedef struct _class_2;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct RwSphere;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xJSPNodeInfo;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEnv;
typedef struct xShadowSimplePoly;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xBaseAsset;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef void(*type_1)(xEnt*, xScene*, float32, xEntFrame*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef uint32(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_4)(RxPipelineNode*);
typedef uint32(*type_5)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef RpAtomic*(*type_6)(RpAtomic*);
typedef void(*type_7)(xEnt*, xScene*, float32);
typedef void(*type_8)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_9)(zEntTrigger*, xScene*, float32);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(xEnt*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_18)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_19)(xEnt*, xVec3*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_21)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_22)(RxNodeDefinition*);
typedef RpWorldSector*(*type_23)(RpWorldSector*);
typedef void(*type_25)(RxNodeDefinition*);
typedef void(*type_28)(xEnt*, xScene*, float32, xEntCollis*);
typedef xBase*(*type_29)(uint32);
typedef int32(*type_30)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int8*(*type_31)(xBase*);
typedef int8*(*type_32)(uint32);
typedef uint32(*type_33)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_42)(RpClump*, void*);
typedef int32(*type_43)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_51)(RwResEntry*);

typedef xVec3 type_12[4];
typedef RpLight* type_13[2];
typedef RwTexCoords* type_14[8];
typedef RwFrame* type_15[2];
typedef int8 type_24[16];
typedef xCollis type_26[18];
typedef int8 type_27[16];
typedef float32 type_34[2];
typedef uint8 type_35[3];
typedef float32 type_36[2];
typedef float32 type_37[4];
typedef uint32 type_38[4];
typedef uint16 type_39[3];
typedef uint8 type_40[2];
typedef xAnimMultiFileEntry type_41[1];
typedef xVec3 type_44[4];
typedef RwTexCoords* type_45[8];
typedef int8 type_47[4];
typedef xVec3 type_48[3];
typedef int8 type_49[32];
typedef int8 type_50[32];
typedef uint16 type_52[3];
typedef float32 type_53[16];
typedef RxCluster type_54[1];

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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
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
	type_7 update;
	type_7 endUpdate;
	type_19 bupdate;
	type_1 move;
	type_11 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_8 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
	type_16 BeforeEnter;
	type_17 StateCallback;
	type_20 BeforeAnimMatrices;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_13 light;
	type_15 light_frame;
	int32 memlvl;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_42 callback;
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
	type_31 base2Name;
	type_32 id2Name;
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
	type_26 colls;
	type_28 post;
	type_5 depenq;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
		_class_2 tuv;
		tri_data tri;
	};
};

struct zEntTrigger : zEnt
{
	xMat4x3 triggerMatrix;
	xBox triggerBox;
	uint32 entered;
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
	type_23 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_35 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xJSPHeader
{
	type_47 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_53 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RpTriangle
{
	type_52 vertIndex;
	int16 matIndex;
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

struct xSurface
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_41 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_49 name;
	type_50 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpSector
{
	int32 type;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	type_12 corner;
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
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_36 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_38 pad;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_51 destroyNotify;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_45 texCoords;
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

struct anim_coll_data
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_43 eventFunc;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_6 renderCallBack;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xTriggerAsset
{
	type_44 p;
	xVec3 direction;
	uint32 flags;
};

struct xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	xVec3 point;
	xVec3 norm;
	float32 dist;
};

struct _class_0
{
	xVec3* verts;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_34 BilinearLerp;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_37 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_33 Callback;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpPolygon
{
	uint16 matIndex;
	type_39 vertIndex;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
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
	type_20 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_14 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct st_SERIAL_CLIENTINFO
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
	type_21 nodeBody;
	type_22 nodeInit;
	type_25 nodeTerm;
	type_0 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_18 configMsgHandler;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_54 clusters;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

type_24 buffer;
type_27 buffer;
type_30 zEntTriggerEventCB;
type_9 zEntTriggerUpdate;

uint8 zEntTriggerHitsSphere(zEntTrigger& trig, xSphere& o, xVec3& dir);
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s);
void zEntTriggerSave(zEntTrigger* ent, xSerial* s);
int32 zEntTriggerEventCB(xBase* to, uint32 toEvent);
void zEntTriggerUpdate(zEntTrigger* trig);
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset);
void zEntTriggerInit(void* ent, void* asset);

// zEntTriggerHitsSphere__FRC11zEntTriggerRC7xSphereRC5xVec3
// Start address: 0x174970
uint8 zEntTriggerHitsSphere(zEntTrigger& trig, xSphere& o, xVec3& dir)
{
}

// zEntTriggerLoad__FP11zEntTriggerP7xSerial
// Start address: 0x174c60
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s)
{
}

// zEntTriggerSave__FP11zEntTriggerP7xSerial
// Start address: 0x174c70
void zEntTriggerSave(zEntTrigger* ent, xSerial* s)
{
}

// zEntTriggerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x174c80
int32 zEntTriggerEventCB(xBase* to, uint32 toEvent)
{
	zEntTrigger* trig;
}

// zEntTriggerUpdate__FP11zEntTriggerP6xScenef
// Start address: 0x174cc0
void zEntTriggerUpdate(zEntTrigger* trig)
{
	uint32 i;
	xLinkAsset* link;
	xTriggerAsset* tasset;
	xIsect isect;
	int32 collide;
	xEnt* chkEnt;
	xVec3* chkPos;
	xVec3 xformVec;
	xSphere sphere;
	xIsect isect;
	xCylinder cylinder;
	xIsect isect;
	xSphere sphere;
	xIsect isect;
}

// zEntTriggerInit__FP11zEntTriggerP9xEntAsset
// Start address: 0x175080
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset)
{
	xTriggerAsset* tasset;
}

// zEntTriggerInit__FPvPv
// Start address: 0x175230
void zEntTriggerInit(void* ent, void* asset)
{
}

