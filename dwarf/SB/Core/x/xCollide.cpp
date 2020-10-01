typedef struct xSphere;
typedef struct xBox;
typedef struct RpLight;
typedef struct xAnimPlay;
typedef struct xEnt;
typedef struct RxHeap;
typedef struct xGridBound;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xCollis;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xSweptSphere;
typedef struct RwFrame;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct _class_0;
typedef struct RpCollisionTriangle;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xVec3;
typedef struct rxHeapBlockHeader;
typedef struct xParabola;
typedef struct xEnv;
typedef struct RpIntersection;
typedef struct xScene;
typedef struct xBaseAsset;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct ParabolaCBData;
typedef struct RxPipelineRequiresCluster;
typedef struct xCapsule;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xConic;
typedef struct xMat3x3;
typedef struct xBound;
typedef struct xAnimEffect;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct tri_data;
typedef struct xEntFrame;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct SweptSphereCollParam;
typedef struct RwMatrixTag;
typedef struct ConeDepen;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQCData;
typedef struct rxReq;
typedef struct RpV3dGradient;
typedef struct xClumpCollBSPTree;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTriangle;
typedef struct xShadowSimplePoly;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xRay3;
typedef struct xClumpCollBSPVertInfo;
typedef struct xMemPool;
typedef struct xClumpCollBSPBranchNode;
typedef union IntersectionCallBack;
typedef struct xBBox;
typedef struct RpCollBSPLeafNode;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct RpTriangle;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xIsect;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct xShadowSimpleCache;
typedef enum _xCollsIdx;
typedef enum rxEmbeddedPacketState;
typedef struct xEntCollis;
typedef struct xAnimTransitionList;
typedef enum RxClusterForcePresent;
typedef struct xSphereHitsModel_context;
typedef struct xCylinder;
typedef struct RpCollBSPBranchNode;
typedef struct xQCControl;
typedef struct CallBackParam;
typedef union _class_1;
typedef struct RxClusterDefinition;
typedef struct RpCollBSPTree;
typedef enum RpIntersectType;
typedef struct RwSphere;
typedef struct xVec2;
typedef struct xFFX;
typedef union RwSplitBits;
typedef struct xAnimMultiFile;
typedef struct RwTexDictionary;
typedef struct xGrid;
typedef struct iEnv;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef union xiMat4x3Union;
typedef struct xLinkAsset;
typedef struct xJSPNodeInfo;
typedef struct xEntShadow;
typedef struct RxClusterRef;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct RwObject;
typedef struct anim_coll_data;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RwLine;
typedef union RpIntersectData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xBase;
typedef struct xJSPHeader;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct nodeInfo;
typedef struct RxCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xClumpCollV3dGradient;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct _class_2;
typedef struct _class_3;
typedef struct RpInterpolator;

typedef int32(*type_1)(int32, int32, void*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_15)(RxNodeDefinition*);
typedef RpCollisionTriangle*(*type_16)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_18)(RxNodeDefinition*);
typedef int32(*type_20)(RxPipelineNode*);
typedef int32(*type_21)(int32, int32, void*);
typedef void(*type_23)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef int32(*type_25)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_26)(RpClump*, void*);
typedef uint32(*type_27)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_28)(uint32);
typedef int32(*type_29)(xClumpCollBSPTriangle*, void*);
typedef void(*type_30)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_32)(xBase*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef int8*(*type_35)(uint32);
typedef RpWorldSector*(*type_36)(RpIntersection*, RpWorldSector*, void*);
typedef RpAtomic*(*type_37)(RpIntersection*, RpWorldSector*, RpAtomic*, float32, void*);
typedef void(*type_38)(xEnt*, xScene*, float32);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_42)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_43)(xEnt*, xVec3*);
typedef void(*type_46)(xEnt*, xScene*, float32, xEntFrame*);
typedef RpAtomic*(*type_47)(RpAtomic*);
typedef void(*type_48)(xEnt*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_50)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_51)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_55)(xClumpCollBSPTriangle*, void*);
typedef int32(*type_56)(xClumpCollBSPTriangle*, void*);
typedef RpCollisionTriangle*(*type_61)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef void(*type_62)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef void(*type_63)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RpWorldSector*(*type_64)(RpWorldSector*);
typedef int32(*type_65)(xClumpCollBSPTriangle*, void*);
typedef void(*type_69)(xMemPool*, void*);
typedef void(*type_73)(RwResEntry*);
typedef RpCollisionTriangle*(*type_76)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef int32(*type_83)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpCollisionTriangle*(*type_87)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RwObjectHasFrame*(*type_88)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef RpLight* type_2[2];
typedef uint8 type_3[2];
typedef RwFrame* type_4[2];
typedef xAnimMultiFileEntry type_5[1];
typedef xVec3 type_6[3];
typedef float32 type_8[128];
typedef float32 type_9[3];
typedef uint16 type_11[3];
typedef nodeInfo type_13[33];
typedef float32 type_14[3];
typedef xVec3 type_17[2];
typedef RwLine type_19[33];
typedef float32 type_22[5];
typedef xVec3 type_31[3];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_39[3];
typedef float32 type_41[16];
typedef uint16 type_44[3];
typedef xVec3 type_45[2];
typedef uint32 type_52[4];
typedef xVec3 type_53[4];
typedef xVec3 type_54[4];
typedef RwTexCoords* type_57[8];
typedef xVec3 type_58[4];
typedef uint8 type_59[3];
typedef xVec3 type_60[3];
typedef xCollis type_66[18];
typedef float32 type_67[4];
typedef int8 type_68[4];
typedef int8 type_70[32];
typedef xVec3 type_71[4];
typedef int8 type_72[32];
typedef xVec3 type_74[3];
typedef xVec3 type_75[5];
typedef uint8 type_77[3];
typedef float32 type_78[6];
typedef float32 type_79[3];
typedef RxCluster type_80[1];
typedef type_79 type_81[3];
typedef xVec3 type_82[4];
typedef xVec3 type_84[2];
typedef xVec3 type_85[2];
typedef uint8 type_86[4];
typedef float32 type_89[3];
typedef type_89 type_90[3];
typedef float32 type_91[2];
typedef float32 type_92[3];
typedef float32 type_93[2];
typedef xVec4 type_94[4];
typedef RwV3d* type_95[3];
typedef xVec3 type_96[8];

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_30 BeforeAnimMatrices;
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
	type_38 update;
	type_38 endUpdate;
	type_43 bupdate;
	type_46 move;
	type_48 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_51 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_24 BeforeEnter;
	type_7 StateCallback;
	type_30 BeforeAnimMatrices;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
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

struct xSweptSphere
{
	xVec3 start;
	xVec3 end;
	float32 radius;
	float32 dist;
	xiMat4x3Union basis;
	xiMat4x3Union invbasis;
	xBox box;
	xQCData qcd;
	float32 boxsize;
	float32 curdist;
	xVec3 contact;
	xVec3 polynorm;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
	int32 hitIt;
	xVec3 worldPos;
	xVec3 worldContact;
	xVec3 worldNormal;
	xVec3 worldTangent;
	xVec3 worldPolynorm;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_91 BilinearLerp;
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_95 vertices;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_52 pad;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float32 gravity;
	float32 minTime;
	float32 maxTime;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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
	type_28 resolvID;
	type_32 base2Name;
	type_35 id2Name;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_33 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_47 renderCallBack;
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

struct ParabolaCBData
{
	xParabola* p;
	xVec3 N;
	float32 d;
	xCollis* colls;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xCapsule
{
	xVec3 start;
	xVec3 end;
	float32 r;
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
	_class_3 anim_coll;
};

struct xConic
{
	xMat4x3 basis;
	xMat4x3 invbasis;
	type_22 coef;
	xVec3 coneBasisCenter;
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

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_59 pad;
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
	type_27 Callback;
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
	type_26 callback;
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
	type_57 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct SweptSphereCollParam
{
	RpGeometry* geometry;
	xSweptSphere* sws;
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

struct ConeDepen
{
	xMat4x3 cullfrust;
	xMat4x3 circleBasis;
	xMat4x3 circleInvbasis;
	xConic conic;
	xVec3 start;
	float32 coneCos;
	float32 coneDist;
	float32 coneDist2;
	float32 coneRadius;
	float32 coneHeight;
	xVec3 axis;
	xVec3 coneRight;
	xVec3 coneAt;
	uint32 numInterval;
	type_8 interval;
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

struct rxReq
{
};

struct RpV3dGradient
{
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xShadowSimplePoly
{
	type_31 vert;
	xVec3 norm;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_69 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

union IntersectionCallBack
{
	type_36 sectorCB;
	type_34 worldCB;
	type_37 atomicCB;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpCollBSPLeafNode
{
	uint16 numPolygons;
	uint16 firstPolygon;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	type_73 destroyNotify;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	type_44 vertIndex;
	int16 matIndex;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_41 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	type_3 NumAnims;
	void** RawData;
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
	type_53 corner;
};

enum _xCollsIdx
{
	k_XCOLLS_IDX_FLOOR,
	k_XCOLLS_IDX_CEIL,
	k_XCOLLS_IDX_FRONT,
	k_XCOLLS_IDX_LEFT,
	k_XCOLLS_IDX_REAR,
	k_XCOLLS_IDX_RIGHT,
	k_XCOLLS_IDX_COUNT
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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
	type_66 colls;
	type_42 post;
	type_50 depenq;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphereHitsModel_context
{
	xCollis* coll;
	RpIntersection localx;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RpCollBSPBranchNode
{
	uint16 type;
	uint8 leftType;
	uint8 rightType;
	uint16 leftNode;
	uint16 rightNode;
	float32 leftValue;
	float32 rightValue;
};

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct CallBackParam
{
	IntersectionCallBack u;
	void* data;
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

struct RpCollBSPTree
{
	uint32 numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	type_86 pad;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xFFX
{
};

union RwSplitBits
{
	float32 nReal;
	int32 nInt;
	uint32 nUInt;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_5 Files;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xGrid
{
	uint8 ingrid_id;
	type_77 pad;
	uint16 nx;
	uint16 nz;
	float32 minx;
	float32 minz;
	float32 maxx;
	float32 maxz;
	float32 csizex;
	float32 csizez;
	float32 inv_csizex;
	float32 inv_csizez;
	float32 maxr;
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
	type_2 light;
	type_4 light_frame;
	int32 memlvl;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

union xiMat4x3Union
{
	xMat4x3 xm;
	RwMatrixTag im;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_67 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_93 radius;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_70 name;
	type_72 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct anim_coll_data
{
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

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct RxNodeMethods
{
	type_12 nodeBody;
	type_15 nodeInit;
	type_18 nodeTerm;
	type_20 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_25 pipelineNodeConfig;
	type_10 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_83 eventFunc;
};

struct xJSPHeader
{
	type_68 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_64 renderCallBack;
	RxPipeline* pipeline;
};

struct nodeInfo
{
	uint32 type;
	uint32 index;
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
	type_80 clusters;
};

struct xClumpCollV3dGradient
{
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
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
	type_88 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_2
{
	xVec3 norm;
	float32 D;
};

struct _class_3
{
	xVec3* verts;
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

int8* g_xCollis_FMT;
xCapsule* cb_capsule;
float32 cb_dist;
int32 capsuleMethod;
xCapsule* cb_cap;
int32 xcollide_docam;
int32 sSweptSphereHitFound;
xMat4x3* sSwsModelMat;
int32 sSweptSphereEntFound;
uint8 sSweptSphereCollType;
xEnt* sSweptSphereMover;
uint32 sSweptSphereIgnoreMovers;
type_65 ConicDepenLeafNodeCB;
xMat4x3 g_I3;
uint8 xClumpColl_FilterFlags;
type_62 SweptSphereHitsEntCB;
xGrid colls_oso_grid;
xGrid colls_grid;
xGrid npcs_grid;
RpMorphTarget anim_coll_old_mt;
type_1 SweptSphereModelCB;
int32 _rpCollisionGeometryDataOffset;
type_16 SweptSphereHitsEnvCB;
type_56 SweptSphereLeafNodeCB;
xQCControl xqc_def_ctrl;
xVec3 g_O3;
type_63 xCapsuleHitsEnt;
type_87 CapsuleEnvClosestToStartCB;
type_55 LeafNodeCapsuleIntersect;
type_40 CapsuleEnvClosestToLineCB;
type_76 CapsuleModelClosestToLineCB;
type_29 xParabolaEnvCB;
type_61 sphereHitsModelCB;

uint8 xSphereHitsVCircle(xVec3& sc, float32 sr, xVec3& cc, float32 cr);
uint8 xSphereHitsVCylinder(xVec3& sc, float32 sr, xVec3& cc, float32 cr, float32 ch);
uint8 xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat);
uint8 xSphereHitsBound(xSphere& o, xBound& b);
uint8 xSphereHitsCapsule(xVec3& center, float32 radius, xVec3& v1, xVec3& v2, float32 width);
int32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType);
int32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType);
int32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType);
int32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType);
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
int32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat);
int32 SweptSphereModelCB(int32 numTriangles, int32 triOffset, void* data);
int32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env);
int32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data);
RpCollisionTriangle* SweptSphereHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, void* data);
int32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat);
int32 xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph);
int32 xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2);
void xSweptSphereGetResults(xSweptSphere* sws);
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, float32 radius);
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, float32 radius, RpV3dGradient* grad, type_21 callBack, void* data);
xVec3 xCollisTriHit(tri_data& tri, xModelInstance& model);
void xCollideCalcTri(tri_data& tri, xModelInstance& model, xVec3& center, xVec3& heading);
uint32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll);
uint32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB);
uint32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll);
int32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls);
int32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data);
void xParabolaRecenter(xParabola* p, float32 newZeroT);
uint32 xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll);
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data);
uint32 xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll);
uint32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll);
uint32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll);
void xCollideInit(xScene* sc);
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat);

// xSphereHitsVCircle__FRC5xVec3fRC5xVec3f
// Start address: 0x1c57f0
uint8 xSphereHitsVCircle(xVec3& sc, float32 sr, xVec3& cc, float32 cr)
{
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
}

// xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff
// Start address: 0x1c5920
uint8 xSphereHitsVCylinder(xVec3& sc, float32 sr, xVec3& cc, float32 cr, float32 ch)
{
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
}

// xOBBHitsOBB__FRC4xBoxRC7xMat4x3RC4xBoxRC7xMat4x3
// Start address: 0x1c5a80
uint8 xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat)
{
	xVec3& asize;
	xVec3& bsize;
	xVec3 offset;
	xVec3 aoffset;
	xMat3x3 xmat;
	xMat3x3 axmat;
	float32 ar;
	float32 br;
	float32 r;
}

// xSphereHitsBound__FRC7xSphereRC6xBound
// Start address: 0x1c6550
uint8 xSphereHitsBound(xSphere& o, xBound& b)
{
}

// xSphereHitsCapsule__FRC5xVec3fRC5xVec3RC5xVec3f
// Start address: 0x1c6870
uint8 xSphereHitsCapsule(xVec3& center, float32 radius, xVec3& v1, xVec3& v2, float32 width)
{
	xVec3 d1;
	xVec3 d2;
	float32 r;
	float32 b;
	float32 q;
	float32 d;
	float32 r1;
	float32 r2;
}

// xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6a60
int32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	int32 envcollfound;
	xRay3 ray;
	float32 one_len;
}

// xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6c10
int32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	xRay3 ray;
	float32 one_len;
}

// xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6d50
int32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	xRay3 ray;
	float32 one_len;
}

// xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6ed0
int32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	int32 envcollfound;
	xRay3 ray;
	float32 one_len;
}

// SweptSphereHitsEntCB__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1c70a0
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	xMat4x3* m1;
	xMat4x3* m2;
	uint32 result;
	float32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
}

// xSweptSphereToModel__FP12xSweptSphereP8RpAtomicP11RwMatrixTag
// Start address: 0x1c75c0
int32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat)
{
	xMat4x3 oldinvbasis;
	RpGeometry* geom;
	RwLine line;
	SweptSphereCollParam isData;
	RpV3dGradient grad;
	int32 i;
	int32 numT;
	RpTriangle* tri;
	RwV3d* vert;
}

// SweptSphereModelCB__FiiPv
// Start address: 0x1c79a0
int32 SweptSphereModelCB(int32 numTriangles, int32 triOffset, void* data)
{
	SweptSphereCollParam* isData;
	RpGeometry* geometry;
	xSweptSphere* sws;
	RwV3d* vertices;
	RpTriangle* triangles;
	int32 triSlot;
	uint16* triIndex;
	RpTriangle* tri;
}

// xSweptSphereToEnv__FP12xSweptSphereP4xEnv
// Start address: 0x1c7ab0
int32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env)
{
	RwLine line;
	xClumpCollV3dGradient grad;
	RpIntersection isx;
}

// SweptSphereLeafNodeCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1c7ca0
int32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data)
{
	xSweptSphere* sws;
	RwV3d* v1;
	RwV3d* v2;
}

// SweptSphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1c7d50
RpCollisionTriangle* SweptSphereHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, void* data)
{
	xSweptSphere* sws;
}

// xSweptSphereToBox__FP12xSweptSphereP4xBoxP7xMat4x3
// Start address: 0x1c7de0
int32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat)
{
	int32 i;
	xMat4x3 tmpmat;
	xMat4x3* boxinvbasis;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 rad;
	float32 radsqr;
	float32 testdist;
	float32 invZ;
	xVec3 boxPos;
	xVec3 boxaX;
	xVec3 boxaY;
	xVec3 boxaZ;
	xVec3 boxNorm;
	xVec3 boxA1;
	xVec3 boxA2;
	int32 quadfound;
	float32 boxPlaneDepth;
	float32 daX;
	float32 daY;
	float32 daZ;
	float32 d1;
	float32 d2;
	float32 distzsqr;
	type_75 xform;
	int32 edge_contact_found;
	int32 vert_contact_found;
	float32 edge_contact_lerp;
	xVec3 pt;
	xVec3 cyl;
	xVec3 uu;
	float32 magNsqr;
	float32 dsqr;
	float32 ulen;
	float32 edgedot;
	float32 magCsqr;
	float32 distzsqr;
	float32 lerp;
	float32 invlerp;
}

// xSweptSphereToSphere__FP12xSweptSphereP7xSphere
// Start address: 0x1c89f0
int32 xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph)
{
	float32 testdist;
	float32 distzsqr;
	float32 lerp;
}

// xSweptSphereToTriangle__FP12xSweptSphereP5xVec3P5xVec3P5xVec3
// Start address: 0x1c8b50
int32 xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2)
{
	int32 i;
	float32 rad;
	float32 raddist;
	float32 radsqr;
	float32 startdot;
	float32 enddot;
	float32 testdist;
	float32 invZ;
	type_54 xform;
	xVec3 xnorm;
	xVec3 contact;
	RwV3d vTmp;
	RwV3d vTmp2;
	float32 recipLength;
	float32 lengthSq;
	float32 _result;
	float32 contx;
	float32 conty;
	float32 p0x;
	float32 p0y;
	float32 p1x;
	float32 p1y;
	float32 p2x;
	float32 p2y;
	float32 dot0;
	float32 dot1;
	float32 dot2;
	int32 edge_contact_found;
	int32 vert_contact_found;
	float32 edge_contact_lerp;
	xVec3 pt;
	xVec3 cyl;
	xVec3 uu;
	float32 magNsqr;
	float32 dsqr;
	float32 ulen;
	float32 edgedot;
	float32 magCsqr;
	float32 distzsqr;
	float32 lerp;
	float32 invlerp;
}

// xSweptSphereGetResults__FP12xSweptSphere
// Start address: 0x1c9540
void xSweptSphereGetResults(xSweptSphere* sws)
{
}

// xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
// Start address: 0x1c9830
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, float32 radius)
{
	float32 dx;
	float32 dy;
	float32 dz;
	float32 invmag;
	xCapsule tmpC;
}

// _rpCollBSPTreeForAllCapsuleLeafNodeIntersections__FP13RpCollBSPTreeP6RwLinefP13RpV3dGradientPFiiPv_iPv
// Start address: 0x1c9be0
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, float32 radius, RpV3dGradient* grad, type_21 callBack, void* data)
{
	int32 nStack;
	type_13 nodeStack;
	type_19 lineStack;
	RwLine currLine;
	RpCollBSPLeafNode* leaf;
	RpCollBSPBranchNode* branch;
	uint32 branch_type;
	uint32 branch_leftType;
	uint32 branch_rightType;
	uint32 branch_leftNode;
	uint32 branch_rightNode;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	float32 delta;
	float32 delta;
	float32 delta;
	float32 delta;
}

// xCollisTriHit__FRCQ27xCollis8tri_dataRC14xModelInstance
// Start address: 0x1ca540
xVec3 xCollisTriHit(tri_data& tri, xModelInstance& model)
{
	xMat4x3& m;
	type_74 v;
	RpGeometry* geom;
	xVec3* verts;
	RpTriangle& t;
	int32 i;
	type_17 r;
	xVec3 d;
	xVec3 A;
}

// xCollideCalcTri__FRQ27xCollis8tri_dataRC14xModelInstanceRC5xVec3RC5xVec3
// Start address: 0x1cad70
void xCollideCalcTri(tri_data& tri, xModelInstance& model, xVec3& center, xVec3& heading)
{
	type_39 v;
	RpGeometry* geom;
	xVec3* verts;
	RpMorphTarget* mt;
	RpTriangle& t;
	int32 i;
	type_60 e;
	_class_2 plane;
	xVec3 p;
	float32 num;
	float32 denom;
	xVec3 b;
	xVec3 A;
	xVec3 B;
	xVec3 C;
	xVec3 AxB;
	xVec3 CxB;
	float32 len2;
	xVec3 d;
	xVec3 ad;
	xVec3 d;
	xVec3 ad;
}

// xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cba80
uint32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll)
{
}

// Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3
// Start address: 0x1cbaf0
uint32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB)
{
	type_0 akA;
	type_6 akB;
	type_9 afEA;
	type_14 afEB;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	xVec3 centA;
	xVec3 centB;
	xVec3 kD;
	type_81 aafC;
	type_90 aafAbsC;
	type_92 afAD;
	float32 fR0;
	float32 fR1;
	float32 fR;
	float32 fR01;
}

// xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis
// Start address: 0x1ccc40
uint32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
}

// xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
// Start address: 0x1ccde0
int32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls)
{
	RwBBox xb;
	float32 extremumT;
	float32 extremum;
	ParabolaCBData data;
}

// xParabolaEnvCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1cd120
int32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data)
{
	ParabolaCBData* pd;
	xParabola* p;
	xCollis* colls;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	uint8 tester;
	float32 a;
	float32 b;
	float32 c;
	float32 det;
	xVec3 N;
	float32 t1;
	float32 t2;
	float32 c1;
	float32 c2;
	float32 c0;
}

// xParabolaRecenter__FP9xParabolaf
// Start address: 0x1cd7b0
void xParabolaRecenter(xParabola* p, float32 newZeroT)
{
}

// xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
// Start address: 0x1cd840
uint32 xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	xSphereHitsModel_context context;
	xMat4x3* mat;
	RwFrame* frame;
	float32 mscale;
	float32 mag2;
}

// sphereHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1cdcb0
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	xSphereHitsModel_context* context;
}

// xSphereHitsOBB_nu__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cdcd0
uint32 xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll)
{
	xSphere xfs;
	xVec3 scale;
	xMat4x3 mnormal;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	xBox sbox;
}

// xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis
// Start address: 0x1ce2c0
uint32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
}

// xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis
// Start address: 0x1ce460
uint32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	float32 scale;
}

// xCollideInit__FP6xScene
// Start address: 0x1ce670
void xCollideInit(xScene* sc)
{
}

// xCollideGetCollsIdx__FPC7xCollisPC5xVec3PC7xMat3x3
// Start address: 0x1ce680
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat)
{
	float32 local_x;
	float32 local_z;
}

