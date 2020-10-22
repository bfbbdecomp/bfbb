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
typedef struct _class_1;
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint8 pad[3];
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
	int8 idtag[4];
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
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RpTriangle
{
	uint16 vertIndex[3];
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
	xAnimMultiFileEntry Files[1];
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
	xVec3 corner[4];
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
	float32 radius[2];
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 NumAnims[2];
	void** RawData;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xTriggerAsset
{
	xVec3 p[4];
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
	float32 param[4];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	uint16 vertIndex[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwTexCoords* texCoords[8];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	RxCluster clusters[1];
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

int8 buffer[16];
int8 buffer[16];
int32(*zEntTriggerEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntTriggerUpdate)(zEntTrigger*, xScene*, float32);

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
	// Line 291, Address: 0x174970, Func Offset: 0
	// Line 292, Address: 0x174980, Func Offset: 0x10
	// Line 294, Address: 0x174998, Func Offset: 0x28
	// Line 296, Address: 0x1749a0, Func Offset: 0x30
	// Line 298, Address: 0x1749e8, Func Offset: 0x78
	// Line 300, Address: 0x1749f0, Func Offset: 0x80
	// Line 303, Address: 0x174a28, Func Offset: 0xb8
	// Line 305, Address: 0x174b58, Func Offset: 0x1e8
	// Line 306, Address: 0x174bfc, Func Offset: 0x28c
	// Line 307, Address: 0x174c00, Func Offset: 0x290
	// Line 310, Address: 0x174c20, Func Offset: 0x2b0
	// Line 311, Address: 0x174c3c, Func Offset: 0x2cc
	// Line 313, Address: 0x174c40, Func Offset: 0x2d0
	// Line 314, Address: 0x174c48, Func Offset: 0x2d8
	// Func End, Address: 0x174c5c, Func Offset: 0x2ec
}

// zEntTriggerLoad__FP11zEntTriggerP7xSerial
// Start address: 0x174c60
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s)
{
	// Line 275, Address: 0x174c60, Func Offset: 0
	// Func End, Address: 0x174c68, Func Offset: 0x8
}

// zEntTriggerSave__FP11zEntTriggerP7xSerial
// Start address: 0x174c70
void zEntTriggerSave(zEntTrigger* ent, xSerial* s)
{
	// Line 256, Address: 0x174c70, Func Offset: 0
	// Func End, Address: 0x174c78, Func Offset: 0x8
}

// zEntTriggerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x174c80
int32 zEntTriggerEventCB(xBase* to, uint32 toEvent)
{
	zEntTrigger* trig;
	// Line 229, Address: 0x174c80, Func Offset: 0
	// Line 235, Address: 0x174c84, Func Offset: 0x4
	// Line 238, Address: 0x174c98, Func Offset: 0x18
	// Line 240, Address: 0x174ca4, Func Offset: 0x24
	// Line 243, Address: 0x174ca8, Func Offset: 0x28
	// Line 242, Address: 0x174cac, Func Offset: 0x2c
	// Line 243, Address: 0x174cb0, Func Offset: 0x30
	// Func End, Address: 0x174cb8, Func Offset: 0x38
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
	// Line 85, Address: 0x174cc0, Func Offset: 0
	// Line 86, Address: 0x174cec, Func Offset: 0x2c
	// Line 95, Address: 0x174cfc, Func Offset: 0x3c
	// Line 91, Address: 0x174d04, Func Offset: 0x44
	// Line 90, Address: 0x174d08, Func Offset: 0x48
	// Line 95, Address: 0x174d0c, Func Offset: 0x4c
	// Line 96, Address: 0x174d2c, Func Offset: 0x6c
	// Line 104, Address: 0x174d4c, Func Offset: 0x8c
	// Line 106, Address: 0x174d54, Func Offset: 0x94
	// Line 108, Address: 0x174d5c, Func Offset: 0x9c
	// Line 114, Address: 0x174d64, Func Offset: 0xa4
	// Line 117, Address: 0x174d88, Func Offset: 0xc8
	// Line 129, Address: 0x174db0, Func Offset: 0xf0
	// Line 130, Address: 0x174df0, Func Offset: 0x130
	// Line 132, Address: 0x174e00, Func Offset: 0x140
	// Line 134, Address: 0x174e1c, Func Offset: 0x15c
	// Line 136, Address: 0x174e24, Func Offset: 0x164
	// Line 140, Address: 0x174e28, Func Offset: 0x168
	// Line 143, Address: 0x174e30, Func Offset: 0x170
	// Line 140, Address: 0x174e38, Func Offset: 0x178
	// Line 141, Address: 0x174e4c, Func Offset: 0x18c
	// Line 143, Address: 0x174e54, Func Offset: 0x194
	// Line 144, Address: 0x174e5c, Func Offset: 0x19c
	// Line 146, Address: 0x174e7c, Func Offset: 0x1bc
	// Line 148, Address: 0x174e84, Func Offset: 0x1c4
	// Line 152, Address: 0x174e88, Func Offset: 0x1c8
	// Line 156, Address: 0x174e90, Func Offset: 0x1d0
	// Line 152, Address: 0x174e98, Func Offset: 0x1d8
	// Line 153, Address: 0x174eb0, Func Offset: 0x1f0
	// Line 154, Address: 0x174ebc, Func Offset: 0x1fc
	// Line 156, Address: 0x174ec4, Func Offset: 0x204
	// Line 157, Address: 0x174ecc, Func Offset: 0x20c
	// Line 159, Address: 0x174eec, Func Offset: 0x22c
	// Line 161, Address: 0x174ef4, Func Offset: 0x234
	// Line 165, Address: 0x174ef8, Func Offset: 0x238
	// Line 169, Address: 0x174f00, Func Offset: 0x240
	// Line 165, Address: 0x174f08, Func Offset: 0x248
	// Line 166, Address: 0x174f20, Func Offset: 0x260
	// Line 169, Address: 0x174f28, Func Offset: 0x268
	// Line 170, Address: 0x174f30, Func Offset: 0x270
	// Line 184, Address: 0x174f54, Func Offset: 0x294
	// Line 191, Address: 0x174f58, Func Offset: 0x298
	// Line 192, Address: 0x174f60, Func Offset: 0x2a0
	// Line 193, Address: 0x174f70, Func Offset: 0x2b0
	// Line 194, Address: 0x174f78, Func Offset: 0x2b8
	// Line 197, Address: 0x174fac, Func Offset: 0x2ec
	// Line 198, Address: 0x174fb0, Func Offset: 0x2f0
	// Line 201, Address: 0x174fc0, Func Offset: 0x300
	// Line 202, Address: 0x174fc8, Func Offset: 0x308
	// Line 203, Address: 0x174fd8, Func Offset: 0x318
	// Line 204, Address: 0x174fe0, Func Offset: 0x320
	// Line 207, Address: 0x175014, Func Offset: 0x354
	// Line 208, Address: 0x175018, Func Offset: 0x358
	// Line 209, Address: 0x175028, Func Offset: 0x368
	// Line 212, Address: 0x17502c, Func Offset: 0x36c
	// Line 214, Address: 0x175030, Func Offset: 0x370
	// Line 215, Address: 0x175048, Func Offset: 0x388
	// Func End, Address: 0x175078, Func Offset: 0x3b8
}

// zEntTriggerInit__FP11zEntTriggerP9xEntAsset
// Start address: 0x175080
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset)
{
	xTriggerAsset* tasset;
	// Line 33, Address: 0x175080, Func Offset: 0
	// Line 35, Address: 0x175084, Func Offset: 0x4
	// Line 33, Address: 0x175088, Func Offset: 0x8
	// Line 35, Address: 0x17508c, Func Offset: 0xc
	// Line 33, Address: 0x175090, Func Offset: 0x10
	// Line 35, Address: 0x17509c, Func Offset: 0x1c
	// Line 39, Address: 0x1750a4, Func Offset: 0x24
	// Line 42, Address: 0x1750b0, Func Offset: 0x30
	// Line 48, Address: 0x1750b8, Func Offset: 0x38
	// Line 55, Address: 0x1750bc, Func Offset: 0x3c
	// Line 50, Address: 0x1750c0, Func Offset: 0x40
	// Line 49, Address: 0x1750c4, Func Offset: 0x44
	// Line 55, Address: 0x1750c8, Func Offset: 0x48
	// Line 48, Address: 0x1750cc, Func Offset: 0x4c
	// Line 49, Address: 0x1750d0, Func Offset: 0x50
	// Line 61, Address: 0x1750d4, Func Offset: 0x54
	// Line 50, Address: 0x1750d8, Func Offset: 0x58
	// Line 51, Address: 0x1750e0, Func Offset: 0x60
	// Line 48, Address: 0x1750e4, Func Offset: 0x64
	// Line 49, Address: 0x1750e8, Func Offset: 0x68
	// Line 50, Address: 0x1750f0, Func Offset: 0x70
	// Line 51, Address: 0x1750f4, Func Offset: 0x74
	// Line 50, Address: 0x1750f8, Func Offset: 0x78
	// Line 51, Address: 0x1750fc, Func Offset: 0x7c
	// Line 55, Address: 0x175100, Func Offset: 0x80
	// Line 56, Address: 0x175110, Func Offset: 0x90
	// Line 55, Address: 0x175114, Func Offset: 0x94
	// Line 56, Address: 0x175118, Func Offset: 0x98
	// Line 57, Address: 0x175120, Func Offset: 0xa0
	// Line 56, Address: 0x175124, Func Offset: 0xa4
	// Line 57, Address: 0x175128, Func Offset: 0xa8
	// Line 61, Address: 0x17512c, Func Offset: 0xac
	// Line 56, Address: 0x175130, Func Offset: 0xb0
	// Line 61, Address: 0x175134, Func Offset: 0xb4
	// Line 55, Address: 0x175138, Func Offset: 0xb8
	// Line 56, Address: 0x175140, Func Offset: 0xc0
	// Line 55, Address: 0x175144, Func Offset: 0xc4
	// Line 57, Address: 0x175148, Func Offset: 0xc8
	// Line 56, Address: 0x17514c, Func Offset: 0xcc
	// Line 55, Address: 0x175158, Func Offset: 0xd8
	// Line 56, Address: 0x17515c, Func Offset: 0xdc
	// Line 57, Address: 0x17516c, Func Offset: 0xec
	// Line 56, Address: 0x175174, Func Offset: 0xf4
	// Line 57, Address: 0x175178, Func Offset: 0xf8
	// Line 62, Address: 0x17518c, Func Offset: 0x10c
	// Line 63, Address: 0x175190, Func Offset: 0x110
	// Line 57, Address: 0x175194, Func Offset: 0x114
	// Line 61, Address: 0x1751a8, Func Offset: 0x128
	// Line 62, Address: 0x1751ac, Func Offset: 0x12c
	// Line 63, Address: 0x1751b0, Func Offset: 0x130
	// Line 64, Address: 0x1751b4, Func Offset: 0x134
	// Line 65, Address: 0x1751c0, Func Offset: 0x140
	// Line 66, Address: 0x1751cc, Func Offset: 0x14c
	// Line 71, Address: 0x1751d8, Func Offset: 0x158
	// Line 72, Address: 0x1751dc, Func Offset: 0x15c
	// Line 70, Address: 0x1751e0, Func Offset: 0x160
	// Line 71, Address: 0x1751e4, Func Offset: 0x164
	// Line 72, Address: 0x1751e8, Func Offset: 0x168
	// Line 71, Address: 0x1751ec, Func Offset: 0x16c
	// Line 72, Address: 0x1751f0, Func Offset: 0x170
	// Line 74, Address: 0x1751f4, Func Offset: 0x174
	// Line 75, Address: 0x175200, Func Offset: 0x180
	// Line 77, Address: 0x175210, Func Offset: 0x190
	// Line 80, Address: 0x175218, Func Offset: 0x198
	// Line 81, Address: 0x17521c, Func Offset: 0x19c
	// Func End, Address: 0x175230, Func Offset: 0x1b0
}

// zEntTriggerInit__FPvPv
// Start address: 0x175230
void zEntTriggerInit(void* ent, void* asset)
{
	// Line 29, Address: 0x175230, Func Offset: 0
	// Func End, Address: 0x175238, Func Offset: 0x8
}

