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
typedef struct RxColorUnion;
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
typedef struct _class_2;
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	void(*destroyNotify)(RwResEntry*);
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	RpClump*(*callback)(RpClump*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint32 pad[4];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	int8 idtag[4];
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct tagiRenderArrays
{
	uint16 m_index[960];
	RxObjSpace3DVertex m_vertex[480];
	float32 m_vertexTZ[480];
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
	RwTexCoords* texCoords[8];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	int8 name[32];
	int8 mask[32];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct zLassoGuide
{
	xModelInstance* poly;
	xAnimState* lassoAnim;
	int32 vertMap[16];
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
	float32 param[4];
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
	uint16 vertIndex[3];
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
	xAnimMultiFileEntry Files[1];
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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
	float32 radius[2];
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
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct zLassoGuideList
{
	xEnt* target;
	uint32 numGuides;
	zLassoGuide guide[3];
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
	float32 wt[4];
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
	uint8 pad[3];
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

int8 buffer[16];
int8 buffer[16];
RwRaster* sLassoRaster;
zLassoGuideList sGuideList[64];
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
	xVec3 tran[64];
	xQuat quat[64];
	int32 i;
	int32 j;
	int32 numV;
	xVec3* v;
	// Line 1517, Address: 0x29ac50, Func Offset: 0
	// Line 1519, Address: 0x29ac64, Func Offset: 0x14
	// Line 1523, Address: 0x29ac7c, Func Offset: 0x2c
	// Line 1529, Address: 0x29ac80, Func Offset: 0x30
	// Line 1523, Address: 0x29ac88, Func Offset: 0x38
	// Line 1529, Address: 0x29ac8c, Func Offset: 0x3c
	// Line 1530, Address: 0x29ac9c, Func Offset: 0x4c
	// Line 1531, Address: 0x29aca8, Func Offset: 0x58
	// Line 1534, Address: 0x29acc0, Func Offset: 0x70
	// Line 1537, Address: 0x29ad00, Func Offset: 0xb0
	// Line 1538, Address: 0x29ad04, Func Offset: 0xb4
	// Line 1537, Address: 0x29ad08, Func Offset: 0xb8
	// Line 1539, Address: 0x29ad10, Func Offset: 0xc0
	// Line 1541, Address: 0x29ad20, Func Offset: 0xd0
	// Line 1539, Address: 0x29ad24, Func Offset: 0xd4
	// Line 1541, Address: 0x29ad28, Func Offset: 0xd8
	// Line 1540, Address: 0x29ad2c, Func Offset: 0xdc
	// Line 1539, Address: 0x29ad34, Func Offset: 0xe4
	// Line 1540, Address: 0x29ad38, Func Offset: 0xe8
	// Line 1539, Address: 0x29ad50, Func Offset: 0x100
	// Line 1540, Address: 0x29ad54, Func Offset: 0x104
	// Line 1541, Address: 0x29adc4, Func Offset: 0x174
	// Line 1542, Address: 0x29add0, Func Offset: 0x180
	// Line 1543, Address: 0x29ade8, Func Offset: 0x198
	// Func End, Address: 0x29ae00, Func Offset: 0x1b0
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
	// Line 1452, Address: 0x29ae00, Func Offset: 0
	// Line 1460, Address: 0x29ae04, Func Offset: 0x4
	// Line 1452, Address: 0x29ae08, Func Offset: 0x8
	// Line 1456, Address: 0x29ae10, Func Offset: 0x10
	// Line 1454, Address: 0x29ae14, Func Offset: 0x14
	// Line 1460, Address: 0x29ae18, Func Offset: 0x18
	// Line 1461, Address: 0x29ae20, Func Offset: 0x20
	// Line 1462, Address: 0x29ae24, Func Offset: 0x24
	// Line 1464, Address: 0x29ae6c, Func Offset: 0x6c
	// Line 1468, Address: 0x29ae84, Func Offset: 0x84
	// Line 1469, Address: 0x29ae90, Func Offset: 0x90
	// Line 1470, Address: 0x29ae94, Func Offset: 0x94
	// Line 1472, Address: 0x29ae98, Func Offset: 0x98
	// Line 1475, Address: 0x29ae9c, Func Offset: 0x9c
	// Line 1478, Address: 0x29aea0, Func Offset: 0xa0
	// Line 1479, Address: 0x29aea4, Func Offset: 0xa4
	// Line 1481, Address: 0x29aeac, Func Offset: 0xac
	// Line 1482, Address: 0x29aeb8, Func Offset: 0xb8
	// Line 1483, Address: 0x29aebc, Func Offset: 0xbc
	// Line 1484, Address: 0x29aed4, Func Offset: 0xd4
	// Line 1485, Address: 0x29aef8, Func Offset: 0xf8
	// Line 1487, Address: 0x29af58, Func Offset: 0x158
	// Line 1491, Address: 0x29af60, Func Offset: 0x160
	// Func End, Address: 0x29af68, Func Offset: 0x168
}

// zLasso_scenePrepare__Fv
// Start address: 0x29af70
void zLasso_scenePrepare()
{
	// Line 1440, Address: 0x29af70, Func Offset: 0
	// Line 1442, Address: 0x29af74, Func Offset: 0x4
	// Func End, Address: 0x29af7c, Func Offset: 0xc
}

// nonfizzicalHonda__FP6zLassofP5xVec3
// Start address: 0x29af80
void nonfizzicalHonda(zLasso* lasso, xVec3* newPoint)
{
	// Line 1404, Address: 0x29af80, Func Offset: 0
	// Line 1408, Address: 0x29af84, Func Offset: 0x4
	// Line 1404, Address: 0x29af88, Func Offset: 0x8
	// Line 1408, Address: 0x29af8c, Func Offset: 0xc
	// Line 1404, Address: 0x29af98, Func Offset: 0x18
	// Line 1406, Address: 0x29afd8, Func Offset: 0x58
	// Line 1407, Address: 0x29b030, Func Offset: 0xb0
	// Line 1408, Address: 0x29b040, Func Offset: 0xc0
	// Line 1409, Address: 0x29b04c, Func Offset: 0xcc
	// Line 1410, Address: 0x29b054, Func Offset: 0xd4
	// Line 1411, Address: 0x29b060, Func Offset: 0xe0
	// Line 1413, Address: 0x29b070, Func Offset: 0xf0
	// Line 1412, Address: 0x29b078, Func Offset: 0xf8
	// Line 1413, Address: 0x29b088, Func Offset: 0x108
	// Line 1415, Address: 0x29b0b0, Func Offset: 0x130
	// Line 1417, Address: 0x29b0dc, Func Offset: 0x15c
	// Line 1418, Address: 0x29b0e8, Func Offset: 0x168
	// Line 1419, Address: 0x29b118, Func Offset: 0x198
	// Line 1421, Address: 0x29b148, Func Offset: 0x1c8
	// Func End, Address: 0x29b150, Func Offset: 0x1d0
}

// fizzicalHonda__FP6zLassofP5xVec3
// Start address: 0x29b150
void fizzicalHonda(zLasso* lasso, xVec3* newPoint)
{
	// Line 1368, Address: 0x29b150, Func Offset: 0
	// Line 1371, Address: 0x29b154, Func Offset: 0x4
	// Line 1368, Address: 0x29b158, Func Offset: 0x8
	// Line 1371, Address: 0x29b15c, Func Offset: 0xc
	// Line 1368, Address: 0x29b160, Func Offset: 0x10
	// Line 1371, Address: 0x29b164, Func Offset: 0x14
	// Line 1372, Address: 0x29b168, Func Offset: 0x18
	// Line 1374, Address: 0x29b174, Func Offset: 0x24
	// Line 1372, Address: 0x29b180, Func Offset: 0x30
	// Line 1371, Address: 0x29b184, Func Offset: 0x34
	// Line 1376, Address: 0x29b188, Func Offset: 0x38
	// Line 1371, Address: 0x29b190, Func Offset: 0x40
	// Line 1376, Address: 0x29b198, Func Offset: 0x48
	// Line 1371, Address: 0x29b19c, Func Offset: 0x4c
	// Line 1372, Address: 0x29b1b0, Func Offset: 0x60
	// Line 1374, Address: 0x29b200, Func Offset: 0xb0
	// Line 1376, Address: 0x29b250, Func Offset: 0x100
	// Line 1380, Address: 0x29b2b8, Func Offset: 0x168
	// Line 1381, Address: 0x29b304, Func Offset: 0x1b4
	// Line 1382, Address: 0x29b310, Func Offset: 0x1c0
	// Line 1385, Address: 0x29b338, Func Offset: 0x1e8
	// Line 1386, Address: 0x29b35c, Func Offset: 0x20c
	// Line 1387, Address: 0x29b3a0, Func Offset: 0x250
	// Line 1388, Address: 0x29b3a4, Func Offset: 0x254
	// Line 1389, Address: 0x29b3a8, Func Offset: 0x258
	// Line 1391, Address: 0x29b3c8, Func Offset: 0x278
	// Line 1392, Address: 0x29b3f8, Func Offset: 0x2a8
	// Func End, Address: 0x29b408, Func Offset: 0x2b8
}

// zLasso_ResetTimer__FP6zLassof
// Start address: 0x29b410
void zLasso_ResetTimer(zLasso* lasso, float32 interpTime)
{
	// Line 1293, Address: 0x29b410, Func Offset: 0
	// Line 1294, Address: 0x29b414, Func Offset: 0x4
	// Line 1296, Address: 0x29b418, Func Offset: 0x8
	// Line 1297, Address: 0x29b424, Func Offset: 0x14
	// Line 1299, Address: 0x29b430, Func Offset: 0x20
	// Line 1300, Address: 0x29b448, Func Offset: 0x38
	// Line 1302, Address: 0x29b460, Func Offset: 0x50
	// Line 1303, Address: 0x29b48c, Func Offset: 0x7c
	// Func End, Address: 0x29b494, Func Offset: 0x84
}

// zLasso_InitTimer__FP6zLassof
// Start address: 0x29b4a0
void zLasso_InitTimer(zLasso* lasso, float32 interpTime)
{
	// Line 1248, Address: 0x29b4a0, Func Offset: 0
	// Line 1249, Address: 0x29b4ac, Func Offset: 0xc
	// Line 1250, Address: 0x29b4b4, Func Offset: 0x14
	// Line 1255, Address: 0x29b4b8, Func Offset: 0x18
	// Line 1252, Address: 0x29b4bc, Func Offset: 0x1c
	// Line 1253, Address: 0x29b4c8, Func Offset: 0x28
	// Line 1255, Address: 0x29b4d8, Func Offset: 0x38
	// Line 1257, Address: 0x29b4e8, Func Offset: 0x48
	// Line 1264, Address: 0x29b4ec, Func Offset: 0x4c
	// Line 1275, Address: 0x29b4f0, Func Offset: 0x50
	// Line 1276, Address: 0x29b4f4, Func Offset: 0x54
	// Line 1277, Address: 0x29b4f8, Func Offset: 0x58
	// Line 1278, Address: 0x29b4fc, Func Offset: 0x5c
	// Line 1257, Address: 0x29b500, Func Offset: 0x60
	// Line 1258, Address: 0x29b51c, Func Offset: 0x7c
	// Line 1260, Address: 0x29b54c, Func Offset: 0xac
	// Line 1262, Address: 0x29b564, Func Offset: 0xc4
	// Line 1264, Address: 0x29b56c, Func Offset: 0xcc
	// Line 1265, Address: 0x29b578, Func Offset: 0xd8
	// Line 1266, Address: 0x29b584, Func Offset: 0xe4
	// Line 1268, Address: 0x29b590, Func Offset: 0xf0
	// Line 1269, Address: 0x29b5a8, Func Offset: 0x108
	// Line 1270, Address: 0x29b5c0, Func Offset: 0x120
	// Line 1271, Address: 0x29b5d8, Func Offset: 0x138
	// Line 1272, Address: 0x29b5f0, Func Offset: 0x150
	// Line 1274, Address: 0x29b608, Func Offset: 0x168
	// Line 1275, Address: 0x29b60c, Func Offset: 0x16c
	// Line 1276, Address: 0x29b610, Func Offset: 0x170
	// Line 1277, Address: 0x29b614, Func Offset: 0x174
	// Line 1278, Address: 0x29b618, Func Offset: 0x178
	// Line 1279, Address: 0x29b61c, Func Offset: 0x17c
	// Func End, Address: 0x29b62c, Func Offset: 0x18c
}

// zLasso_Update__FP6zLassoP4xEntf
// Start address: 0x29b630
void zLasso_Update(zLasso* lasso, xEnt* ent, float32 dt)
{
	int32 i;
	xVec3 newPoint;
	float32 interp;
	// Line 1127, Address: 0x29b630, Func Offset: 0
	// Line 1132, Address: 0x29b638, Func Offset: 0x8
	// Line 1127, Address: 0x29b63c, Func Offset: 0xc
	// Line 1132, Address: 0x29b654, Func Offset: 0x24
	// Line 1135, Address: 0x29b670, Func Offset: 0x40
	// Line 1136, Address: 0x29b690, Func Offset: 0x60
	// Line 1138, Address: 0x29b6c4, Func Offset: 0x94
	// Line 1139, Address: 0x29b6d0, Func Offset: 0xa0
	// Line 1141, Address: 0x29b6d4, Func Offset: 0xa4
	// Line 1139, Address: 0x29b6dc, Func Offset: 0xac
	// Line 1141, Address: 0x29b6e0, Func Offset: 0xb0
	// Line 1142, Address: 0x29b6ec, Func Offset: 0xbc
	// Line 1143, Address: 0x29b6f0, Func Offset: 0xc0
	// Line 1144, Address: 0x29b6fc, Func Offset: 0xcc
	// Line 1147, Address: 0x29b700, Func Offset: 0xd0
	// Line 1149, Address: 0x29b720, Func Offset: 0xf0
	// Line 1154, Address: 0x29b72c, Func Offset: 0xfc
	// Line 1155, Address: 0x29b738, Func Offset: 0x108
	// Line 1156, Address: 0x29b770, Func Offset: 0x140
	// Line 1158, Address: 0x29b778, Func Offset: 0x148
	// Line 1163, Address: 0x29b790, Func Offset: 0x160
	// Line 1164, Address: 0x29b7a0, Func Offset: 0x170
	// Line 1165, Address: 0x29b83c, Func Offset: 0x20c
	// Line 1167, Address: 0x29b850, Func Offset: 0x220
	// Line 1168, Address: 0x29b878, Func Offset: 0x248
	// Line 1169, Address: 0x29b8b4, Func Offset: 0x284
	// Line 1170, Address: 0x29b8e4, Func Offset: 0x2b4
	// Line 1173, Address: 0x29b8e8, Func Offset: 0x2b8
	// Line 1174, Address: 0x29b8f8, Func Offset: 0x2c8
	// Line 1175, Address: 0x29b9c8, Func Offset: 0x398
	// Line 1177, Address: 0x29b9d8, Func Offset: 0x3a8
	// Line 1178, Address: 0x29ba00, Func Offset: 0x3d0
	// Line 1179, Address: 0x29ba3c, Func Offset: 0x40c
	// Line 1180, Address: 0x29ba40, Func Offset: 0x410
	// Line 1178, Address: 0x29ba44, Func Offset: 0x414
	// Line 1180, Address: 0x29ba50, Func Offset: 0x420
	// Line 1186, Address: 0x29ba90, Func Offset: 0x460
	// Line 1187, Address: 0x29baa0, Func Offset: 0x470
	// Line 1188, Address: 0x29baac, Func Offset: 0x47c
	// Line 1189, Address: 0x29bab8, Func Offset: 0x488
	// Line 1194, Address: 0x29bac8, Func Offset: 0x498
	// Line 1195, Address: 0x29bad8, Func Offset: 0x4a8
	// Line 1196, Address: 0x29bb40, Func Offset: 0x510
	// Line 1198, Address: 0x29bb48, Func Offset: 0x518
	// Line 1202, Address: 0x29bb64, Func Offset: 0x534
	// Line 1203, Address: 0x29bb70, Func Offset: 0x540
	// Line 1206, Address: 0x29bb7c, Func Offset: 0x54c
	// Line 1207, Address: 0x29bb84, Func Offset: 0x554
	// Line 1209, Address: 0x29bbc0, Func Offset: 0x590
	// Line 1210, Address: 0x29bbd0, Func Offset: 0x5a0
	// Line 1212, Address: 0x29bc70, Func Offset: 0x640
	// Line 1213, Address: 0x29bc80, Func Offset: 0x650
	// Line 1214, Address: 0x29bd54, Func Offset: 0x724
	// Line 1213, Address: 0x29bd58, Func Offset: 0x728
	// Line 1214, Address: 0x29bd60, Func Offset: 0x730
	// Line 1217, Address: 0x29bda0, Func Offset: 0x770
	// Line 1218, Address: 0x29bdb0, Func Offset: 0x780
	// Line 1219, Address: 0x29bdbc, Func Offset: 0x78c
	// Line 1220, Address: 0x29bdc8, Func Offset: 0x798
	// Line 1224, Address: 0x29bdd8, Func Offset: 0x7a8
	// Line 1225, Address: 0x29bde8, Func Offset: 0x7b8
	// Line 1226, Address: 0x29be54, Func Offset: 0x824
	// Line 1229, Address: 0x29be58, Func Offset: 0x828
	// Line 1232, Address: 0x29be60, Func Offset: 0x830
	// Line 1229, Address: 0x29be64, Func Offset: 0x834
	// Line 1230, Address: 0x29be88, Func Offset: 0x858
	// Line 1233, Address: 0x29be90, Func Offset: 0x860
	// Line 1232, Address: 0x29be94, Func Offset: 0x864
	// Line 1233, Address: 0x29be98, Func Offset: 0x868
	// Line 1234, Address: 0x29bea0, Func Offset: 0x870
	// Line 1235, Address: 0x29beb8, Func Offset: 0x888
	// Line 1236, Address: 0x29bec8, Func Offset: 0x898
	// Func End, Address: 0x29bee4, Func Offset: 0x8b4
}

// zLasso_Render__FP6zLasso
// Start address: 0x29bef0
void zLasso_Render(zLasso* lasso)
{
	int32 i;
	xVec3 loop[16];
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
	xVec3 crossSection[3];
	xVec3 sections[6];
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
	// Line 317, Address: 0x29bef0, Func Offset: 0
	// Line 327, Address: 0x29bef4, Func Offset: 0x4
	// Line 317, Address: 0x29bef8, Func Offset: 0x8
	// Line 327, Address: 0x29bf54, Func Offset: 0x64
	// Line 332, Address: 0x29bfa8, Func Offset: 0xb8
	// Line 362, Address: 0x29bfc0, Func Offset: 0xd0
	// Line 360, Address: 0x29bfc4, Func Offset: 0xd4
	// Line 332, Address: 0x29bfc8, Func Offset: 0xd8
	// Line 346, Address: 0x29bfcc, Func Offset: 0xdc
	// Line 349, Address: 0x29bfd0, Func Offset: 0xe0
	// Line 346, Address: 0x29bfd4, Func Offset: 0xe4
	// Line 349, Address: 0x29bfd8, Func Offset: 0xe8
	// Line 359, Address: 0x29bfdc, Func Offset: 0xec
	// Line 349, Address: 0x29bfe0, Func Offset: 0xf0
	// Line 352, Address: 0x29bfe4, Func Offset: 0xf4
	// Line 349, Address: 0x29bfe8, Func Offset: 0xf8
	// Line 362, Address: 0x29bfec, Func Offset: 0xfc
	// Line 350, Address: 0x29bff4, Func Offset: 0x104
	// Line 352, Address: 0x29c000, Func Offset: 0x110
	// Line 351, Address: 0x29c004, Func Offset: 0x114
	// Line 352, Address: 0x29c00c, Func Offset: 0x11c
	// Line 357, Address: 0x29c010, Func Offset: 0x120
	// Line 356, Address: 0x29c014, Func Offset: 0x124
	// Line 357, Address: 0x29c018, Func Offset: 0x128
	// Line 356, Address: 0x29c01c, Func Offset: 0x12c
	// Line 357, Address: 0x29c024, Func Offset: 0x134
	// Line 356, Address: 0x29c028, Func Offset: 0x138
	// Line 357, Address: 0x29c034, Func Offset: 0x144
	// Line 362, Address: 0x29c048, Func Offset: 0x158
	// Line 363, Address: 0x29c068, Func Offset: 0x178
	// Line 368, Address: 0x29c06c, Func Offset: 0x17c
	// Line 363, Address: 0x29c074, Func Offset: 0x184
	// Line 364, Address: 0x29c0a8, Func Offset: 0x1b8
	// Line 367, Address: 0x29c0b4, Func Offset: 0x1c4
	// Line 364, Address: 0x29c0b8, Func Offset: 0x1c8
	// Line 367, Address: 0x29c0fc, Func Offset: 0x20c
	// Line 368, Address: 0x29c1a0, Func Offset: 0x2b0
	// Line 371, Address: 0x29c1a8, Func Offset: 0x2b8
	// Line 377, Address: 0x29c1b0, Func Offset: 0x2c0
	// Line 371, Address: 0x29c1b4, Func Offset: 0x2c4
	// Line 377, Address: 0x29c1b8, Func Offset: 0x2c8
	// Line 371, Address: 0x29c1bc, Func Offset: 0x2cc
	// Line 372, Address: 0x29c1c4, Func Offset: 0x2d4
	// Line 371, Address: 0x29c1c8, Func Offset: 0x2d8
	// Line 372, Address: 0x29c1e4, Func Offset: 0x2f4
	// Line 371, Address: 0x29c1e8, Func Offset: 0x2f8
	// Line 372, Address: 0x29c1f0, Func Offset: 0x300
	// Line 375, Address: 0x29c1f4, Func Offset: 0x304
	// Line 371, Address: 0x29c1f8, Func Offset: 0x308
	// Line 372, Address: 0x29c1fc, Func Offset: 0x30c
	// Line 375, Address: 0x29c200, Func Offset: 0x310
	// Line 372, Address: 0x29c208, Func Offset: 0x318
	// Line 377, Address: 0x29c20c, Func Offset: 0x31c
	// Line 381, Address: 0x29c228, Func Offset: 0x338
	// Line 379, Address: 0x29c22c, Func Offset: 0x33c
	// Line 381, Address: 0x29c230, Func Offset: 0x340
	// Line 377, Address: 0x29c23c, Func Offset: 0x34c
	// Line 379, Address: 0x29c24c, Func Offset: 0x35c
	// Line 380, Address: 0x29c280, Func Offset: 0x390
	// Line 381, Address: 0x29c294, Func Offset: 0x3a4
	// Line 382, Address: 0x29c2a0, Func Offset: 0x3b0
	// Line 381, Address: 0x29c2a4, Func Offset: 0x3b4
	// Line 384, Address: 0x29c2a8, Func Offset: 0x3b8
	// Line 382, Address: 0x29c2ac, Func Offset: 0x3bc
	// Line 384, Address: 0x29c2bc, Func Offset: 0x3cc
	// Line 385, Address: 0x29c2c8, Func Offset: 0x3d8
	// Line 386, Address: 0x29c2d0, Func Offset: 0x3e0
	// Line 387, Address: 0x29c2e4, Func Offset: 0x3f4
	// Line 388, Address: 0x29c2ec, Func Offset: 0x3fc
	// Line 389, Address: 0x29c2f8, Func Offset: 0x408
	// Line 390, Address: 0x29c300, Func Offset: 0x410
	// Line 389, Address: 0x29c30c, Func Offset: 0x41c
	// Line 390, Address: 0x29c310, Func Offset: 0x420
	// Line 391, Address: 0x29c31c, Func Offset: 0x42c
	// Line 393, Address: 0x29c320, Func Offset: 0x430
	// Line 394, Address: 0x29c324, Func Offset: 0x434
	// Line 393, Address: 0x29c328, Func Offset: 0x438
	// Line 394, Address: 0x29c32c, Func Offset: 0x43c
	// Line 393, Address: 0x29c334, Func Offset: 0x444
	// Line 394, Address: 0x29c338, Func Offset: 0x448
	// Line 396, Address: 0x29c33c, Func Offset: 0x44c
	// Line 397, Address: 0x29c348, Func Offset: 0x458
	// Line 398, Address: 0x29c354, Func Offset: 0x464
	// Line 402, Address: 0x29c358, Func Offset: 0x468
	// Line 401, Address: 0x29c35c, Func Offset: 0x46c
	// Line 402, Address: 0x29c360, Func Offset: 0x470
	// Line 401, Address: 0x29c364, Func Offset: 0x474
	// Line 402, Address: 0x29c3a4, Func Offset: 0x4b4
	// Line 405, Address: 0x29c3b0, Func Offset: 0x4c0
	// Line 406, Address: 0x29c3d0, Func Offset: 0x4e0
	// Line 407, Address: 0x29c3d8, Func Offset: 0x4e8
	// Line 410, Address: 0x29c3f0, Func Offset: 0x500
	// Line 415, Address: 0x29c3fc, Func Offset: 0x50c
	// Line 432, Address: 0x29c408, Func Offset: 0x518
	// Line 433, Address: 0x29c40c, Func Offset: 0x51c
	// Line 432, Address: 0x29c410, Func Offset: 0x520
	// Line 433, Address: 0x29c41c, Func Offset: 0x52c
	// Line 427, Address: 0x29c420, Func Offset: 0x530
	// Line 424, Address: 0x29c424, Func Offset: 0x534
	// Line 425, Address: 0x29c428, Func Offset: 0x538
	// Line 426, Address: 0x29c42c, Func Offset: 0x53c
	// Line 432, Address: 0x29c430, Func Offset: 0x540
	// Line 433, Address: 0x29c468, Func Offset: 0x578
	// Line 434, Address: 0x29c470, Func Offset: 0x580
	// Line 440, Address: 0x29c474, Func Offset: 0x584
	// Line 433, Address: 0x29c478, Func Offset: 0x588
	// Line 438, Address: 0x29c47c, Func Offset: 0x58c
	// Line 440, Address: 0x29c480, Func Offset: 0x590
	// Line 434, Address: 0x29c484, Func Offset: 0x594
	// Line 435, Address: 0x29c488, Func Offset: 0x598
	// Line 437, Address: 0x29c494, Func Offset: 0x5a4
	// Line 438, Address: 0x29c4a0, Func Offset: 0x5b0
	// Line 439, Address: 0x29c4a8, Func Offset: 0x5b8
	// Line 440, Address: 0x29c4b0, Func Offset: 0x5c0
	// Line 442, Address: 0x29c4c8, Func Offset: 0x5d8
	// Line 440, Address: 0x29c4d8, Func Offset: 0x5e8
	// Line 455, Address: 0x29c4e0, Func Offset: 0x5f0
	// Line 440, Address: 0x29c4e4, Func Offset: 0x5f4
	// Line 442, Address: 0x29c4ec, Func Offset: 0x5fc
	// Line 455, Address: 0x29c518, Func Offset: 0x628
	// Line 456, Address: 0x29c54c, Func Offset: 0x65c
	// Line 481, Address: 0x29c580, Func Offset: 0x690
	// Line 458, Address: 0x29c58c, Func Offset: 0x69c
	// Line 487, Address: 0x29c594, Func Offset: 0x6a4
	// Line 458, Address: 0x29c59c, Func Offset: 0x6ac
	// Line 487, Address: 0x29c5a8, Func Offset: 0x6b8
	// Line 481, Address: 0x29c5ac, Func Offset: 0x6bc
	// Line 458, Address: 0x29c5b0, Func Offset: 0x6c0
	// Line 481, Address: 0x29c5b4, Func Offset: 0x6c4
	// Line 458, Address: 0x29c5b8, Func Offset: 0x6c8
	// Line 459, Address: 0x29c5cc, Func Offset: 0x6dc
	// Line 458, Address: 0x29c5d0, Func Offset: 0x6e0
	// Line 459, Address: 0x29c5d4, Func Offset: 0x6e4
	// Line 462, Address: 0x29c5dc, Func Offset: 0x6ec
	// Line 459, Address: 0x29c5e0, Func Offset: 0x6f0
	// Line 460, Address: 0x29c5f4, Func Offset: 0x704
	// Line 459, Address: 0x29c5f8, Func Offset: 0x708
	// Line 461, Address: 0x29c610, Func Offset: 0x720
	// Line 460, Address: 0x29c614, Func Offset: 0x724
	// Line 459, Address: 0x29c618, Func Offset: 0x728
	// Line 460, Address: 0x29c624, Func Offset: 0x734
	// Line 463, Address: 0x29c628, Func Offset: 0x738
	// Line 460, Address: 0x29c62c, Func Offset: 0x73c
	// Line 487, Address: 0x29c638, Func Offset: 0x748
	// Line 460, Address: 0x29c63c, Func Offset: 0x74c
	// Line 461, Address: 0x29c64c, Func Offset: 0x75c
	// Line 460, Address: 0x29c650, Func Offset: 0x760
	// Line 461, Address: 0x29c654, Func Offset: 0x764
	// Line 462, Address: 0x29c68c, Func Offset: 0x79c
	// Line 461, Address: 0x29c690, Func Offset: 0x7a0
	// Line 462, Address: 0x29c698, Func Offset: 0x7a8
	// Line 463, Address: 0x29c6b8, Func Offset: 0x7c8
	// Line 462, Address: 0x29c6bc, Func Offset: 0x7cc
	// Line 463, Address: 0x29c6c0, Func Offset: 0x7d0
	// Line 473, Address: 0x29c6f8, Func Offset: 0x808
	// Line 463, Address: 0x29c6fc, Func Offset: 0x80c
	// Line 469, Address: 0x29c704, Func Offset: 0x814
	// Line 473, Address: 0x29c70c, Func Offset: 0x81c
	// Line 469, Address: 0x29c710, Func Offset: 0x820
	// Line 473, Address: 0x29c724, Func Offset: 0x834
	// Line 469, Address: 0x29c730, Func Offset: 0x840
	// Line 473, Address: 0x29c738, Func Offset: 0x848
	// Line 470, Address: 0x29c74c, Func Offset: 0x85c
	// Line 473, Address: 0x29c758, Func Offset: 0x868
	// Line 487, Address: 0x29c7d8, Func Offset: 0x8e8
	// Line 493, Address: 0x29c7e8, Func Offset: 0x8f8
	// Line 494, Address: 0x29c7f0, Func Offset: 0x900
	// Line 493, Address: 0x29c7f4, Func Offset: 0x904
	// Line 495, Address: 0x29c7f8, Func Offset: 0x908
	// Line 493, Address: 0x29c800, Func Offset: 0x910
	// Line 501, Address: 0x29c808, Func Offset: 0x918
	// Line 500, Address: 0x29c80c, Func Offset: 0x91c
	// Line 493, Address: 0x29c814, Func Offset: 0x924
	// Line 508, Address: 0x29c828, Func Offset: 0x938
	// Line 512, Address: 0x29c830, Func Offset: 0x940
	// Line 514, Address: 0x29c850, Func Offset: 0x960
	// Line 518, Address: 0x29c854, Func Offset: 0x964
	// Line 521, Address: 0x29c860, Func Offset: 0x970
	// Line 524, Address: 0x29c890, Func Offset: 0x9a0
	// Line 525, Address: 0x29c8a4, Func Offset: 0x9b4
	// Line 524, Address: 0x29c8a8, Func Offset: 0x9b8
	// Line 525, Address: 0x29c8cc, Func Offset: 0x9dc
	// Line 526, Address: 0x29c8d8, Func Offset: 0x9e8
	// Line 528, Address: 0x29c8e8, Func Offset: 0x9f8
	// Line 525, Address: 0x29c8ec, Func Offset: 0x9fc
	// Line 528, Address: 0x29c8f0, Func Offset: 0xa00
	// Line 525, Address: 0x29c8f4, Func Offset: 0xa04
	// Line 528, Address: 0x29c8fc, Func Offset: 0xa0c
	// Line 526, Address: 0x29c900, Func Offset: 0xa10
	// Line 525, Address: 0x29c904, Func Offset: 0xa14
	// Line 528, Address: 0x29c908, Func Offset: 0xa18
	// Line 525, Address: 0x29c90c, Func Offset: 0xa1c
	// Line 528, Address: 0x29c910, Func Offset: 0xa20
	// Line 526, Address: 0x29c914, Func Offset: 0xa24
	// Line 525, Address: 0x29c918, Func Offset: 0xa28
	// Line 526, Address: 0x29c91c, Func Offset: 0xa2c
	// Line 528, Address: 0x29c92c, Func Offset: 0xa3c
	// Line 530, Address: 0x29c940, Func Offset: 0xa50
	// Line 531, Address: 0x29c948, Func Offset: 0xa58
	// Line 534, Address: 0x29c94c, Func Offset: 0xa5c
	// Line 531, Address: 0x29c954, Func Offset: 0xa64
	// Line 539, Address: 0x29c98c, Func Offset: 0xa9c
	// Line 534, Address: 0x29c990, Func Offset: 0xaa0
	// Line 539, Address: 0x29c994, Func Offset: 0xaa4
	// Line 619, Address: 0x29c9a8, Func Offset: 0xab8
	// Line 534, Address: 0x29c9b4, Func Offset: 0xac4
	// Line 539, Address: 0x29c9bc, Func Offset: 0xacc
	// Line 610, Address: 0x29c9f8, Func Offset: 0xb08
	// Line 608, Address: 0x29ca00, Func Offset: 0xb10
	// Line 622, Address: 0x29ca08, Func Offset: 0xb18
	// Line 539, Address: 0x29ca0c, Func Offset: 0xb1c
	// Line 607, Address: 0x29ca68, Func Offset: 0xb78
	// Line 608, Address: 0x29ca80, Func Offset: 0xb90
	// Line 609, Address: 0x29ca90, Func Offset: 0xba0
	// Line 610, Address: 0x29ca94, Func Offset: 0xba4
	// Line 613, Address: 0x29ca98, Func Offset: 0xba8
	// Line 614, Address: 0x29cab0, Func Offset: 0xbc0
	// Line 615, Address: 0x29cac0, Func Offset: 0xbd0
	// Line 616, Address: 0x29cac4, Func Offset: 0xbd4
	// Line 618, Address: 0x29cac8, Func Offset: 0xbd8
	// Line 623, Address: 0x29cacc, Func Offset: 0xbdc
	// Line 651, Address: 0x29cae8, Func Offset: 0xbf8
	// Line 623, Address: 0x29caec, Func Offset: 0xbfc
	// Line 641, Address: 0x29caf4, Func Offset: 0xc04
	// Line 652, Address: 0x29cb00, Func Offset: 0xc10
	// Line 641, Address: 0x29cb04, Func Offset: 0xc14
	// Line 623, Address: 0x29cb08, Func Offset: 0xc18
	// Line 638, Address: 0x29cb14, Func Offset: 0xc24
	// Line 623, Address: 0x29cb20, Func Offset: 0xc30
	// Line 638, Address: 0x29cb24, Func Offset: 0xc34
	// Line 641, Address: 0x29cb28, Func Offset: 0xc38
	// Line 638, Address: 0x29cb2c, Func Offset: 0xc3c
	// Line 652, Address: 0x29cb30, Func Offset: 0xc40
	// Line 638, Address: 0x29cb34, Func Offset: 0xc44
	// Line 639, Address: 0x29cb38, Func Offset: 0xc48
	// Line 640, Address: 0x29cb48, Func Offset: 0xc58
	// Line 641, Address: 0x29cb4c, Func Offset: 0xc5c
	// Line 644, Address: 0x29cb50, Func Offset: 0xc60
	// Line 645, Address: 0x29cb68, Func Offset: 0xc78
	// Line 646, Address: 0x29cb78, Func Offset: 0xc88
	// Line 647, Address: 0x29cb7c, Func Offset: 0xc8c
	// Line 652, Address: 0x29cb80, Func Offset: 0xc90
	// Line 656, Address: 0x29cb88, Func Offset: 0xc98
	// Line 657, Address: 0x29cb98, Func Offset: 0xca8
	// Line 658, Address: 0x29cba0, Func Offset: 0xcb0
	// Line 660, Address: 0x29cba4, Func Offset: 0xcb4
	// Line 661, Address: 0x29cba8, Func Offset: 0xcb8
	// Line 667, Address: 0x29cbd4, Func Offset: 0xce4
	// Line 661, Address: 0x29cbdc, Func Offset: 0xcec
	// Line 668, Address: 0x29cbe0, Func Offset: 0xcf0
	// Line 672, Address: 0x29cbe8, Func Offset: 0xcf8
	// Line 667, Address: 0x29cbec, Func Offset: 0xcfc
	// Line 674, Address: 0x29cbf0, Func Offset: 0xd00
	// Line 667, Address: 0x29cbf4, Func Offset: 0xd04
	// Line 668, Address: 0x29cc20, Func Offset: 0xd30
	// Line 669, Address: 0x29cc30, Func Offset: 0xd40
	// Line 670, Address: 0x29cc34, Func Offset: 0xd44
	// Line 677, Address: 0x29cc38, Func Offset: 0xd48
	// Line 682, Address: 0x29cc44, Func Offset: 0xd54
	// Line 687, Address: 0x29cc50, Func Offset: 0xd60
	// Line 682, Address: 0x29cc58, Func Offset: 0xd68
	// Line 683, Address: 0x29cc88, Func Offset: 0xd98
	// Line 682, Address: 0x29cc94, Func Offset: 0xda4
	// Line 683, Address: 0x29cc98, Func Offset: 0xda8
	// Line 687, Address: 0x29ccd4, Func Offset: 0xde4
	// Line 688, Address: 0x29cce0, Func Offset: 0xdf0
	// Line 687, Address: 0x29cce4, Func Offset: 0xdf4
	// Line 688, Address: 0x29cce8, Func Offset: 0xdf8
	// Line 687, Address: 0x29ccec, Func Offset: 0xdfc
	// Line 688, Address: 0x29ccf4, Func Offset: 0xe04
	// Line 691, Address: 0x29cd58, Func Offset: 0xe68
	// Line 688, Address: 0x29cd60, Func Offset: 0xe70
	// Line 691, Address: 0x29cd7c, Func Offset: 0xe8c
	// Line 693, Address: 0x29cd88, Func Offset: 0xe98
	// Line 694, Address: 0x29cd90, Func Offset: 0xea0
	// Line 691, Address: 0x29cd94, Func Offset: 0xea4
	// Line 694, Address: 0x29cd98, Func Offset: 0xea8
	// Line 693, Address: 0x29cd9c, Func Offset: 0xeac
	// Line 691, Address: 0x29cda0, Func Offset: 0xeb0
	// Line 693, Address: 0x29cda8, Func Offset: 0xeb8
	// Line 694, Address: 0x29ce40, Func Offset: 0xf50
	// Line 697, Address: 0x29ce48, Func Offset: 0xf58
	// Line 711, Address: 0x29ce6c, Func Offset: 0xf7c
	// Line 697, Address: 0x29ce70, Func Offset: 0xf80
	// Line 720, Address: 0x29ce74, Func Offset: 0xf84
	// Line 711, Address: 0x29ce78, Func Offset: 0xf88
	// Line 710, Address: 0x29ce80, Func Offset: 0xf90
	// Line 700, Address: 0x29ce84, Func Offset: 0xf94
	// Line 711, Address: 0x29ce88, Func Offset: 0xf98
	// Line 701, Address: 0x29ce8c, Func Offset: 0xf9c
	// Line 711, Address: 0x29ce90, Func Offset: 0xfa0
	// Line 720, Address: 0x29ce94, Func Offset: 0xfa4
	// Line 697, Address: 0x29ce9c, Func Offset: 0xfac
	// Line 711, Address: 0x29cea8, Func Offset: 0xfb8
	// Line 720, Address: 0x29ceac, Func Offset: 0xfbc
	// Line 711, Address: 0x29ceb0, Func Offset: 0xfc0
	// Line 704, Address: 0x29ceb4, Func Offset: 0xfc4
	// Line 720, Address: 0x29ceb8, Func Offset: 0xfc8
	// Line 697, Address: 0x29cec0, Func Offset: 0xfd0
	// Line 720, Address: 0x29cecc, Func Offset: 0xfdc
	// Line 697, Address: 0x29ced8, Func Offset: 0xfe8
	// Line 704, Address: 0x29cedc, Func Offset: 0xfec
	// Line 711, Address: 0x29cf8c, Func Offset: 0x109c
	// Line 704, Address: 0x29cf90, Func Offset: 0x10a0
	// Line 707, Address: 0x29cf94, Func Offset: 0x10a4
	// Line 708, Address: 0x29cf98, Func Offset: 0x10a8
	// Line 707, Address: 0x29cf9c, Func Offset: 0x10ac
	// Line 711, Address: 0x29cfa4, Func Offset: 0x10b4
	// Line 708, Address: 0x29cfb0, Func Offset: 0x10c0
	// Line 707, Address: 0x29cfb4, Func Offset: 0x10c4
	// Line 708, Address: 0x29cfbc, Func Offset: 0x10cc
	// Line 707, Address: 0x29cfc0, Func Offset: 0x10d0
	// Line 708, Address: 0x29cfc8, Func Offset: 0x10d8
	// Line 711, Address: 0x29cfd0, Func Offset: 0x10e0
	// Line 707, Address: 0x29cfd4, Func Offset: 0x10e4
	// Line 720, Address: 0x29cfd8, Func Offset: 0x10e8
	// Line 724, Address: 0x29cfe0, Func Offset: 0x10f0
	// Line 727, Address: 0x29cff0, Func Offset: 0x1100
	// Line 730, Address: 0x29d028, Func Offset: 0x1138
	// Line 727, Address: 0x29d02c, Func Offset: 0x113c
	// Line 730, Address: 0x29d084, Func Offset: 0x1194
	// Line 731, Address: 0x29d088, Func Offset: 0x1198
	// Line 738, Address: 0x29d090, Func Offset: 0x11a0
	// Line 731, Address: 0x29d094, Func Offset: 0x11a4
	// Line 738, Address: 0x29d098, Func Offset: 0x11a8
	// Line 731, Address: 0x29d09c, Func Offset: 0x11ac
	// Line 730, Address: 0x29d0ac, Func Offset: 0x11bc
	// Line 731, Address: 0x29d0b0, Func Offset: 0x11c0
	// Line 730, Address: 0x29d0b4, Func Offset: 0x11c4
	// Line 731, Address: 0x29d0bc, Func Offset: 0x11cc
	// Line 735, Address: 0x29d164, Func Offset: 0x1274
	// Line 736, Address: 0x29d184, Func Offset: 0x1294
	// Line 735, Address: 0x29d188, Func Offset: 0x1298
	// Line 736, Address: 0x29d18c, Func Offset: 0x129c
	// Line 738, Address: 0x29d1ac, Func Offset: 0x12bc
	// Line 803, Address: 0x29d1b4, Func Offset: 0x12c4
	// Line 804, Address: 0x29d1bc, Func Offset: 0x12cc
	// Line 813, Address: 0x29d1c4, Func Offset: 0x12d4
	// Line 804, Address: 0x29d1c8, Func Offset: 0x12d8
	// Line 807, Address: 0x29d1d8, Func Offset: 0x12e8
	// Line 808, Address: 0x29d1f0, Func Offset: 0x1300
	// Line 809, Address: 0x29d200, Func Offset: 0x1310
	// Line 810, Address: 0x29d204, Func Offset: 0x1314
	// Line 812, Address: 0x29d208, Func Offset: 0x1318
	// Line 817, Address: 0x29d20c, Func Offset: 0x131c
	// Line 813, Address: 0x29d210, Func Offset: 0x1320
	// Line 820, Address: 0x29d218, Func Offset: 0x1328
	// Line 813, Address: 0x29d21c, Func Offset: 0x132c
	// Line 829, Address: 0x29d220, Func Offset: 0x1330
	// Line 820, Address: 0x29d228, Func Offset: 0x1338
	// Line 813, Address: 0x29d23c, Func Offset: 0x134c
	// Line 817, Address: 0x29d240, Func Offset: 0x1350
	// Line 820, Address: 0x29d244, Func Offset: 0x1354
	// Line 817, Address: 0x29d248, Func Offset: 0x1358
	// Line 832, Address: 0x29d24c, Func Offset: 0x135c
	// Line 817, Address: 0x29d250, Func Offset: 0x1360
	// Line 818, Address: 0x29d264, Func Offset: 0x1374
	// Line 819, Address: 0x29d274, Func Offset: 0x1384
	// Line 820, Address: 0x29d278, Func Offset: 0x1388
	// Line 823, Address: 0x29d27c, Func Offset: 0x138c
	// Line 824, Address: 0x29d294, Func Offset: 0x13a4
	// Line 825, Address: 0x29d2a4, Func Offset: 0x13b4
	// Line 826, Address: 0x29d2a8, Func Offset: 0x13b8
	// Line 828, Address: 0x29d2ac, Func Offset: 0x13bc
	// Line 833, Address: 0x29d2b0, Func Offset: 0x13c0
	// Line 860, Address: 0x29d2c0, Func Offset: 0x13d0
	// Line 833, Address: 0x29d2c4, Func Offset: 0x13d4
	// Line 851, Address: 0x29d2cc, Func Offset: 0x13dc
	// Line 861, Address: 0x29d2d8, Func Offset: 0x13e8
	// Line 851, Address: 0x29d2dc, Func Offset: 0x13ec
	// Line 833, Address: 0x29d2e0, Func Offset: 0x13f0
	// Line 848, Address: 0x29d2ec, Func Offset: 0x13fc
	// Line 833, Address: 0x29d2f8, Func Offset: 0x1408
	// Line 848, Address: 0x29d2fc, Func Offset: 0x140c
	// Line 851, Address: 0x29d300, Func Offset: 0x1410
	// Line 848, Address: 0x29d304, Func Offset: 0x1414
	// Line 861, Address: 0x29d308, Func Offset: 0x1418
	// Line 848, Address: 0x29d30c, Func Offset: 0x141c
	// Line 849, Address: 0x29d310, Func Offset: 0x1420
	// Line 850, Address: 0x29d320, Func Offset: 0x1430
	// Line 851, Address: 0x29d324, Func Offset: 0x1434
	// Line 854, Address: 0x29d328, Func Offset: 0x1438
	// Line 855, Address: 0x29d340, Func Offset: 0x1450
	// Line 856, Address: 0x29d350, Func Offset: 0x1460
	// Line 857, Address: 0x29d354, Func Offset: 0x1464
	// Line 861, Address: 0x29d358, Func Offset: 0x1468
	// Line 865, Address: 0x29d360, Func Offset: 0x1470
	// Line 866, Address: 0x29d370, Func Offset: 0x1480
	// Line 869, Address: 0x29d378, Func Offset: 0x1488
	// Line 868, Address: 0x29d37c, Func Offset: 0x148c
	// Line 870, Address: 0x29d380, Func Offset: 0x1490
	// Line 871, Address: 0x29d3a4, Func Offset: 0x14b4
	// Line 874, Address: 0x29d3b0, Func Offset: 0x14c0
	// Line 876, Address: 0x29d3b8, Func Offset: 0x14c8
	// Line 875, Address: 0x29d3bc, Func Offset: 0x14cc
	// Line 876, Address: 0x29d3c0, Func Offset: 0x14d0
	// Line 875, Address: 0x29d3c4, Func Offset: 0x14d4
	// Line 874, Address: 0x29d3c8, Func Offset: 0x14d8
	// Line 875, Address: 0x29d3e0, Func Offset: 0x14f0
	// Line 876, Address: 0x29d410, Func Offset: 0x1520
	// Line 880, Address: 0x29d41c, Func Offset: 0x152c
	// Line 876, Address: 0x29d420, Func Offset: 0x1530
	// Line 880, Address: 0x29d424, Func Offset: 0x1534
	// Line 884, Address: 0x29d480, Func Offset: 0x1590
	// Line 880, Address: 0x29d488, Func Offset: 0x1598
	// Line 881, Address: 0x29d4ac, Func Offset: 0x15bc
	// Line 884, Address: 0x29d4c0, Func Offset: 0x15d0
	// Line 886, Address: 0x29d4d8, Func Offset: 0x15e8
	// Line 887, Address: 0x29d4e0, Func Offset: 0x15f0
	// Line 884, Address: 0x29d4e4, Func Offset: 0x15f4
	// Line 887, Address: 0x29d4e8, Func Offset: 0x15f8
	// Line 886, Address: 0x29d4ec, Func Offset: 0x15fc
	// Line 884, Address: 0x29d4f0, Func Offset: 0x1600
	// Line 886, Address: 0x29d4f8, Func Offset: 0x1608
	// Line 887, Address: 0x29d590, Func Offset: 0x16a0
	// Line 903, Address: 0x29d598, Func Offset: 0x16a8
	// Line 899, Address: 0x29d59c, Func Offset: 0x16ac
	// Line 903, Address: 0x29d5a0, Func Offset: 0x16b0
	// Line 900, Address: 0x29d5a4, Func Offset: 0x16b4
	// Line 903, Address: 0x29d5a8, Func Offset: 0x16b8
	// Line 900, Address: 0x29d5ac, Func Offset: 0x16bc
	// Line 906, Address: 0x29d5b0, Func Offset: 0x16c0
	// Line 916, Address: 0x29d5b4, Func Offset: 0x16c4
	// Line 903, Address: 0x29d5b8, Func Offset: 0x16c8
	// Line 916, Address: 0x29d5bc, Func Offset: 0x16cc
	// Line 903, Address: 0x29d5c0, Func Offset: 0x16d0
	// Line 916, Address: 0x29d66c, Func Offset: 0x177c
	// Line 921, Address: 0x29d678, Func Offset: 0x1788
	// Line 920, Address: 0x29d67c, Func Offset: 0x178c
	// Line 921, Address: 0x29d680, Func Offset: 0x1790
	// Line 922, Address: 0x29d684, Func Offset: 0x1794
	// Line 923, Address: 0x29d688, Func Offset: 0x1798
	// Line 920, Address: 0x29d690, Func Offset: 0x17a0
	// Line 923, Address: 0x29d694, Func Offset: 0x17a4
	// Line 921, Address: 0x29d698, Func Offset: 0x17a8
	// Line 922, Address: 0x29d6a8, Func Offset: 0x17b8
	// Line 923, Address: 0x29d6b8, Func Offset: 0x17c8
	// Line 927, Address: 0x29d6ec, Func Offset: 0x17fc
	// Line 923, Address: 0x29d6f0, Func Offset: 0x1800
	// Line 927, Address: 0x29d6f4, Func Offset: 0x1804
	// Line 926, Address: 0x29d6f8, Func Offset: 0x1808
	// Line 927, Address: 0x29d73c, Func Offset: 0x184c
	// Line 928, Address: 0x29d744, Func Offset: 0x1854
	// Line 931, Address: 0x29d7d8, Func Offset: 0x18e8
	// Line 928, Address: 0x29d7e8, Func Offset: 0x18f8
	// Line 931, Address: 0x29d804, Func Offset: 0x1914
	// Line 928, Address: 0x29d808, Func Offset: 0x1918
	// Line 929, Address: 0x29d81c, Func Offset: 0x192c
	// Line 931, Address: 0x29d828, Func Offset: 0x1938
	// Line 929, Address: 0x29d834, Func Offset: 0x1944
	// Line 931, Address: 0x29d83c, Func Offset: 0x194c
	// Line 932, Address: 0x29d840, Func Offset: 0x1950
	// Line 937, Address: 0x29d848, Func Offset: 0x1958
	// Line 932, Address: 0x29d84c, Func Offset: 0x195c
	// Line 937, Address: 0x29d850, Func Offset: 0x1960
	// Line 932, Address: 0x29d854, Func Offset: 0x1964
	// Line 931, Address: 0x29d864, Func Offset: 0x1974
	// Line 932, Address: 0x29d868, Func Offset: 0x1978
	// Line 931, Address: 0x29d86c, Func Offset: 0x197c
	// Line 932, Address: 0x29d874, Func Offset: 0x1984
	// Line 935, Address: 0x29d928, Func Offset: 0x1a38
	// Line 937, Address: 0x29d94c, Func Offset: 0x1a5c
	// Line 939, Address: 0x29d954, Func Offset: 0x1a64
	// Line 1004, Address: 0x29d99c, Func Offset: 0x1aac
	// Line 1005, Address: 0x29d9a4, Func Offset: 0x1ab4
	// Line 1009, Address: 0x29d9a8, Func Offset: 0x1ab8
	// Line 1005, Address: 0x29d9b0, Func Offset: 0x1ac0
	// Line 1014, Address: 0x29d9b8, Func Offset: 0x1ac8
	// Line 1011, Address: 0x29d9c0, Func Offset: 0x1ad0
	// Line 1005, Address: 0x29d9cc, Func Offset: 0x1adc
	// Line 1008, Address: 0x29d9d0, Func Offset: 0x1ae0
	// Line 1009, Address: 0x29d9e8, Func Offset: 0x1af8
	// Line 1010, Address: 0x29d9f8, Func Offset: 0x1b08
	// Line 1011, Address: 0x29d9fc, Func Offset: 0x1b0c
	// Line 1013, Address: 0x29da00, Func Offset: 0x1b10
	// Line 1018, Address: 0x29da04, Func Offset: 0x1b14
	// Line 1014, Address: 0x29da08, Func Offset: 0x1b18
	// Line 1030, Address: 0x29da10, Func Offset: 0x1b20
	// Line 1014, Address: 0x29da14, Func Offset: 0x1b24
	// Line 1019, Address: 0x29da1c, Func Offset: 0x1b2c
	// Line 1021, Address: 0x29da24, Func Offset: 0x1b34
	// Line 1014, Address: 0x29da28, Func Offset: 0x1b38
	// Line 1021, Address: 0x29da2c, Func Offset: 0x1b3c
	// Line 1018, Address: 0x29da30, Func Offset: 0x1b40
	// Line 1021, Address: 0x29da34, Func Offset: 0x1b44
	// Line 1018, Address: 0x29da38, Func Offset: 0x1b48
	// Line 1021, Address: 0x29da44, Func Offset: 0x1b54
	// Line 1033, Address: 0x29da58, Func Offset: 0x1b68
	// Line 1018, Address: 0x29da5c, Func Offset: 0x1b6c
	// Line 1019, Address: 0x29da68, Func Offset: 0x1b78
	// Line 1020, Address: 0x29da78, Func Offset: 0x1b88
	// Line 1021, Address: 0x29da7c, Func Offset: 0x1b8c
	// Line 1024, Address: 0x29da80, Func Offset: 0x1b90
	// Line 1025, Address: 0x29da98, Func Offset: 0x1ba8
	// Line 1026, Address: 0x29daa8, Func Offset: 0x1bb8
	// Line 1027, Address: 0x29daac, Func Offset: 0x1bbc
	// Line 1029, Address: 0x29dab0, Func Offset: 0x1bc0
	// Line 1034, Address: 0x29dab4, Func Offset: 0x1bc4
	// Line 1061, Address: 0x29dad0, Func Offset: 0x1be0
	// Line 1034, Address: 0x29dad4, Func Offset: 0x1be4
	// Line 1052, Address: 0x29dadc, Func Offset: 0x1bec
	// Line 1062, Address: 0x29dae8, Func Offset: 0x1bf8
	// Line 1052, Address: 0x29daec, Func Offset: 0x1bfc
	// Line 1034, Address: 0x29daf0, Func Offset: 0x1c00
	// Line 1049, Address: 0x29dafc, Func Offset: 0x1c0c
	// Line 1034, Address: 0x29db08, Func Offset: 0x1c18
	// Line 1049, Address: 0x29db0c, Func Offset: 0x1c1c
	// Line 1052, Address: 0x29db10, Func Offset: 0x1c20
	// Line 1049, Address: 0x29db14, Func Offset: 0x1c24
	// Line 1062, Address: 0x29db18, Func Offset: 0x1c28
	// Line 1049, Address: 0x29db1c, Func Offset: 0x1c2c
	// Line 1050, Address: 0x29db20, Func Offset: 0x1c30
	// Line 1051, Address: 0x29db30, Func Offset: 0x1c40
	// Line 1052, Address: 0x29db34, Func Offset: 0x1c44
	// Line 1055, Address: 0x29db38, Func Offset: 0x1c48
	// Line 1056, Address: 0x29db50, Func Offset: 0x1c60
	// Line 1057, Address: 0x29db60, Func Offset: 0x1c70
	// Line 1058, Address: 0x29db64, Func Offset: 0x1c74
	// Line 1062, Address: 0x29db68, Func Offset: 0x1c78
	// Line 1066, Address: 0x29db70, Func Offset: 0x1c80
	// Line 1067, Address: 0x29db80, Func Offset: 0x1c90
	// Line 1071, Address: 0x29db88, Func Offset: 0x1c98
	// Line 1069, Address: 0x29db8c, Func Offset: 0x1c9c
	// Line 1070, Address: 0x29db90, Func Offset: 0x1ca0
	// Line 1071, Address: 0x29db94, Func Offset: 0x1ca4
	// Line 1075, Address: 0x29dbc0, Func Offset: 0x1cd0
	// Line 1087, Address: 0x29dbc8, Func Offset: 0x1cd8
	// Line 1094, Address: 0x29dbe0, Func Offset: 0x1cf0
	// Line 1095, Address: 0x29dbe8, Func Offset: 0x1cf8
	// Line 1117, Address: 0x29dbf0, Func Offset: 0x1d00
	// Func End, Address: 0x29dc50, Func Offset: 0x1d60
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
	// Line 265, Address: 0x29dc50, Func Offset: 0
	// Line 266, Address: 0x29dc6c, Func Offset: 0x1c
	// Line 268, Address: 0x29dc74, Func Offset: 0x24
	// Line 275, Address: 0x29dc78, Func Offset: 0x28
	// Line 268, Address: 0x29dc7c, Func Offset: 0x2c
	// Line 270, Address: 0x29dc84, Func Offset: 0x34
	// Line 271, Address: 0x29dc88, Func Offset: 0x38
	// Line 270, Address: 0x29dc8c, Func Offset: 0x3c
	// Line 275, Address: 0x29dc90, Func Offset: 0x40
	// Line 273, Address: 0x29dc94, Func Offset: 0x44
	// Line 275, Address: 0x29dc9c, Func Offset: 0x4c
	// Line 276, Address: 0x29dcb8, Func Offset: 0x68
	// Line 275, Address: 0x29df34, Func Offset: 0x2e4
	// Line 276, Address: 0x29df38, Func Offset: 0x2e8
	// Line 277, Address: 0x29df3c, Func Offset: 0x2ec
	// Line 276, Address: 0x29df40, Func Offset: 0x2f0
	// Line 277, Address: 0x29df44, Func Offset: 0x2f4
	// Line 276, Address: 0x29df48, Func Offset: 0x2f8
	// Line 277, Address: 0x29df8c, Func Offset: 0x33c
	// Line 284, Address: 0x29dfa0, Func Offset: 0x350
	// Line 277, Address: 0x29dfa8, Func Offset: 0x358
	// Line 284, Address: 0x29dfac, Func Offset: 0x35c
	// Line 279, Address: 0x29dfb4, Func Offset: 0x364
	// Line 282, Address: 0x29dfdc, Func Offset: 0x38c
	// Line 283, Address: 0x29e020, Func Offset: 0x3d0
	// Line 284, Address: 0x29e054, Func Offset: 0x404
	// Line 287, Address: 0x29e068, Func Offset: 0x418
	// Line 286, Address: 0x29e06c, Func Offset: 0x41c
	// Line 287, Address: 0x29e070, Func Offset: 0x420
	// Line 286, Address: 0x29e074, Func Offset: 0x424
	// Line 287, Address: 0x29e0a8, Func Offset: 0x458
	// Line 289, Address: 0x29e0b0, Func Offset: 0x460
	// Line 290, Address: 0x29e0c8, Func Offset: 0x478
	// Line 292, Address: 0x29e0f0, Func Offset: 0x4a0
	// Line 296, Address: 0x29e198, Func Offset: 0x548
	// Func End, Address: 0x29e1b4, Func Offset: 0x564
}

// zLasso_SetGuide__FP4xEntP10xAnimState
// Start address: 0x29e1c0
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim)
{
	uint32 i;
	uint32 j;
	// Line 232, Address: 0x29e1c0, Func Offset: 0
	// Line 234, Address: 0x29e1d8, Func Offset: 0x18
	// Line 235, Address: 0x29e1f0, Func Offset: 0x30
	// Line 237, Address: 0x29e1fc, Func Offset: 0x3c
	// Line 239, Address: 0x29e210, Func Offset: 0x50
	// Line 240, Address: 0x29e21c, Func Offset: 0x5c
	// Line 241, Address: 0x29e250, Func Offset: 0x90
	// Line 243, Address: 0x29e25c, Func Offset: 0x9c
	// Line 245, Address: 0x29e270, Func Offset: 0xb0
	// Line 246, Address: 0x29e27c, Func Offset: 0xbc
	// Line 250, Address: 0x29e2a0, Func Offset: 0xe0
	// Line 251, Address: 0x29e2ac, Func Offset: 0xec
	// Line 252, Address: 0x29e2b4, Func Offset: 0xf4
	// Line 253, Address: 0x29e2b8, Func Offset: 0xf8
	// Func End, Address: 0x29e2c0, Func Offset: 0x100
}

// zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance
// Start address: 0x29e2c0
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel)
{
	uint32 i;
	int32 givenSlot;
	// Line 181, Address: 0x29e2c0, Func Offset: 0
	// Line 190, Address: 0x29e2d0, Func Offset: 0x10
	// Line 188, Address: 0x29e2d4, Func Offset: 0x14
	// Line 190, Address: 0x29e2d8, Func Offset: 0x18
	// Line 191, Address: 0x29e2f0, Func Offset: 0x30
	// Line 193, Address: 0x29e2fc, Func Offset: 0x3c
	// Line 195, Address: 0x29e304, Func Offset: 0x44
	// Line 198, Address: 0x29e318, Func Offset: 0x58
	// Line 199, Address: 0x29e324, Func Offset: 0x64
	// Line 201, Address: 0x29e328, Func Offset: 0x68
	// Line 199, Address: 0x29e32c, Func Offset: 0x6c
	// Line 201, Address: 0x29e338, Func Offset: 0x78
	// Line 202, Address: 0x29e33c, Func Offset: 0x7c
	// Line 201, Address: 0x29e348, Func Offset: 0x88
	// Line 202, Address: 0x29e34c, Func Offset: 0x8c
	// Line 199, Address: 0x29e350, Func Offset: 0x90
	// Line 201, Address: 0x29e358, Func Offset: 0x98
	// Line 202, Address: 0x29e35c, Func Offset: 0x9c
	// Line 208, Address: 0x29e364, Func Offset: 0xa4
	// Line 209, Address: 0x29e398, Func Offset: 0xd8
	// Line 210, Address: 0x29e3a4, Func Offset: 0xe4
	// Line 212, Address: 0x29e3b8, Func Offset: 0xf8
	// Line 213, Address: 0x29e3bc, Func Offset: 0xfc
	// Line 214, Address: 0x29e3c0, Func Offset: 0x100
	// Line 213, Address: 0x29e3c4, Func Offset: 0x104
	// Line 214, Address: 0x29e3c8, Func Offset: 0x108
	// Line 213, Address: 0x29e3cc, Func Offset: 0x10c
	// Line 214, Address: 0x29e3d0, Func Offset: 0x110
	// Line 215, Address: 0x29e3d4, Func Offset: 0x114
	// Line 212, Address: 0x29e3e4, Func Offset: 0x124
	// Line 213, Address: 0x29e3f4, Func Offset: 0x134
	// Line 214, Address: 0x29e3f8, Func Offset: 0x138
	// Line 213, Address: 0x29e3fc, Func Offset: 0x13c
	// Line 215, Address: 0x29e400, Func Offset: 0x140
	// Line 214, Address: 0x29e404, Func Offset: 0x144
	// Line 215, Address: 0x29e408, Func Offset: 0x148
	// Line 218, Address: 0x29e410, Func Offset: 0x150
	// Line 219, Address: 0x29e428, Func Offset: 0x168
	// Func End, Address: 0x29e434, Func Offset: 0x174
}

// zLasso_Init__FP6zLassoP14xModelInstancefff
// Start address: 0x29e440
void zLasso_Init(zLasso* lasso, xModelInstance* model, float32 x, float32 y, float32 z)
{
	RwTexture* tempTexture;
	// Line 147, Address: 0x29e440, Func Offset: 0
	// Line 148, Address: 0x29e464, Func Offset: 0x24
	// Line 149, Address: 0x29e478, Func Offset: 0x38
	// Line 151, Address: 0x29e490, Func Offset: 0x50
	// Line 152, Address: 0x29e498, Func Offset: 0x58
	// Line 154, Address: 0x29e4a8, Func Offset: 0x68
	// Line 155, Address: 0x29e4ac, Func Offset: 0x6c
	// Line 157, Address: 0x29e4b0, Func Offset: 0x70
	// Line 162, Address: 0x29e4c8, Func Offset: 0x88
	// Line 158, Address: 0x29e4cc, Func Offset: 0x8c
	// Line 162, Address: 0x29e4d0, Func Offset: 0x90
	// Line 166, Address: 0x29e4d8, Func Offset: 0x98
	// Func End, Address: 0x29e4f8, Func Offset: 0xb8
}

