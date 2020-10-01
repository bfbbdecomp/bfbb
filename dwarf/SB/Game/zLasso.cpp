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
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef RpWorldSector*(*type_7)(RpWorldSector*);
typedef s32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_10)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_13)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef s32(*type_17)(RxPipelineNode*);
typedef void(*type_19)(xEnt*, xScene*, f32);
typedef u32(*type_24)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_25)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_27)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, f32, xEntFrame*);
typedef xBase*(*type_29)(u32);
typedef void(*type_32)(xEnt*);
typedef s8*(*type_33)(xBase*);
typedef s8*(*type_35)(u32);
typedef u32(*type_36)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef u32(*type_37)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef RpClump*(*type_46)(RpClump*, void*);
typedef s32(*type_52)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef void(*type_56)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);

typedef s8 type_1[4];
typedef f32 type_3[4];
typedef xVec3 type_9[16];
typedef xVec3 type_12[64];
typedef xVec3 type_14[3];
typedef xQuat type_16[64];
typedef RpLight* type_18[2];
typedef u16 type_20[960];
typedef zLassoGuideList type_21[64];
typedef RwFrame* type_22[2];
typedef f32 type_23[16];
typedef RxObjSpace3DVertex type_26[480];
typedef f32 type_30[2];
typedef f32 type_31[480];
typedef u8 type_34[3];
typedef u16 type_39[3];
typedef u8 type_40[2];
typedef xVec3 type_41[4];
typedef xAnimMultiFileEntry type_42[1];
typedef s8 type_43[16];
typedef f32 type_44[4];
typedef u32 type_45[4];
typedef s8 type_47[16];
typedef RwTexCoords* type_48[8];
typedef xCollis type_49[18];
typedef s32 type_50[16];
typedef xVec3 type_51[5];
typedef u8 type_53[5];
typedef u16 type_54[3];
typedef s8 type_57[32];
typedef zLassoGuide type_58[3];
typedef s8 type_59[32];
typedef f32 type_61[2];
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	s32 ClipFlags;
	u32 PipeFlags;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_60 destroyNotify;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct zLasso
{
	u32 flags;
	f32 secsTotal;
	f32 secsLeft;
	f32 stRadius;
	f32 tgRadius;
	f32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	f32 stSlack;
	f32 stSlackDist;
	f32 tgSlack;
	f32 tgSlackDist;
	f32 crSlack;
	f32 currDist;
	f32 lastDist;
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
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
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
	_class_0 anim_coll;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_37 Conditional;
	type_37 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_45 pad;
};

struct RpSector
{
	s32 type;
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
	type_0 BeforeEnter;
	type_4 StateCallback;
	type_6 BeforeAnimMatrices;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	s32 memlvl;
};

struct xShadowSimplePoly
{
	type_14 vert;
	xVec3 norm;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_40 NumAnims;
	void** RawData;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct _class_0
{
	xVec3* verts;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xJSPHeader
{
	type_1 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_30 BilinearLerp;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_23 matrix;
	f32 radius;
	f32 angle;
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
	type_65 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

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
	type_29 resolvID;
	type_33 base2Name;
	type_35 id2Name;
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
	u32 filterAddressing;
	s32 refCount;
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

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_44 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
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
		_class_1 tuv;
		tri_data tri;
	};
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpPolygon
{
	u16 matIndex;
	type_39 vertIndex;
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
	type_6 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	f32 r;
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
	u32 NumMatrices;
	xModelInstance* List;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_61 radius;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xSurface
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct anim_coll_data
{
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RpTriangle
{
	type_54 vertIndex;
	s16 matIndex;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_56 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	u32 numGuides;
	type_58 guide;
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_3 wt;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_63 clusters;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
u32 sNumGuideLists;
zLassoGuide* sCurrentGuide;
RxObjSpace3DVertex* lnverts;
s32 negativeHondaX;
xVec3 g_O3;
xMat4x3 g_I3;
tagiRenderArrays gRenderArr;

void bakeMorphAnim(RpGeometry* geom, void* anim);
void initVertMap(zLassoGuide* guide);
void zLasso_scenePrepare();
void nonfizzicalHonda(zLasso* lasso, xVec3* newPoint);
void fizzicalHonda(zLasso* lasso, xVec3* newPoint);
void zLasso_ResetTimer(zLasso* lasso, f32 interpTime);
void zLasso_InitTimer(zLasso* lasso, f32 interpTime);
void zLasso_Update(zLasso* lasso, xEnt* ent, f32 dt);
void zLasso_Render(zLasso* lasso);
void zLasso_InterpToGuide(zLasso* lasso);
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim);
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel);
void zLasso_Init(zLasso* lasso, xModelInstance* model, f32 x, f32 y, f32 z);

// bakeMorphAnim__FP10RpGeometryPv
// Start address: 0x29ac50
void bakeMorphAnim(RpGeometry* geom, void* anim)
{
	xMat4x3 mat;
	type_12 tran;
	type_16 quat;
	s32 i;
	s32 j;
	s32 numV;
	xVec3* v;
}

// initVertMap__FP11zLassoGuide
// Start address: 0x29ae00
void initVertMap(zLassoGuide* guide)
{
	s32 center;
	s32 init;
	s32 curr;
	s32 currTri;
	s32 i;
	RpGeometry* geom;
	s32 numTri;
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
void zLasso_ResetTimer(zLasso* lasso, f32 interpTime)
{
}

// zLasso_InitTimer__FP6zLassof
// Start address: 0x29b4a0
void zLasso_InitTimer(zLasso* lasso, f32 interpTime)
{
}

// zLasso_Update__FP6zLassoP4xEntf
// Start address: 0x29b630
void zLasso_Update(zLasso* lasso, xEnt* ent, f32 dt)
{
	s32 i;
	xVec3 newPoint;
	f32 interp;
}

// zLasso_Render__FP6zLasso
// Start address: 0x29bef0
void zLasso_Render(zLasso* lasso)
{
	s32 i;
	type_9 loop;
	s32 numVerts;
	f32 arc_length;
	u8 shouldUseGuide;
	RpGeometry* geom;
	s32 numMorphs;
	s32 mIndx1;
	f32 interp;
	RwV3d* m1V;
	RwV3d* m2V;
	xVec3 dif;
	f32 closestDistSqr;
	f32 len;
	RxObjSpace3DVertex* tmp_pt;
	xVec3 b1;
	xVec3 b2;
	xVec3 b3;
	type_62 crossSection;
	type_64 sections;
	s32 currSection;
	s32 lastSection;
	s32 numSections;
	f32 distSoFar;
	f32 distTotal;
	f32 spokeDistIncr;
	u32 numVertsSoFar;
	f32 u;
	f32 v;
	f32 ustep;
	f32 xDisp;
	f32 yDisp;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	s32 shouldRepeat;
	xMat4x3 rotMatrix;
	xVec3 temp;
	s32 k;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	xMat4x3 rotMatrix;
	xVec3 norm;
	s32 k;
	s32 k1;
	s32 k2;
	s32 k3;
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
	s32 numVerts;
	s32 i;
	xVec3 rad1;
}

// zLasso_SetGuide__FP4xEntP10xAnimState
// Start address: 0x29e1c0
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim)
{
	u32 i;
	u32 j;
}

// zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance
// Start address: 0x29e2c0
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel)
{
	u32 i;
	s32 givenSlot;
}

// zLasso_Init__FP6zLassoP14xModelInstancefff
// Start address: 0x29e440
void zLasso_Init(zLasso* lasso, xModelInstance* model, f32 x, f32 y, f32 z)
{
	RwTexture* tempTexture;
}

