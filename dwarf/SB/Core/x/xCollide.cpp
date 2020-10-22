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
typedef struct IntersectionCallBack;
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
typedef struct _class_1;
typedef struct RxClusterDefinition;
typedef struct RpCollBSPTree;
typedef enum RpIntersectType;
typedef struct RwSphere;
typedef struct xVec2;
typedef struct xFFX;
typedef struct RwSplitBits;
typedef struct xAnimMultiFile;
typedef struct RwTexDictionary;
typedef struct xGrid;
typedef struct iEnv;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef struct xiMat4x3Union;
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
typedef struct RpIntersectData;
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
typedef float32 type_81[3][3];
typedef xVec3 type_82[4];
typedef xVec3 type_84[2];
typedef xVec3 type_85[2];
typedef uint8 type_86[4];
typedef float32 type_89[3];
typedef float32 type_90[3][3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RwV3d* vertices[3];
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

	xVec3 cross(xVec3& c);
	xVec3& normalize();
	xVec3& assign(float32 x, float32 y, float32 z);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	float32 coef[5];
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
	float32 interval[128];
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
	xVec3 vert[3];
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
	void(*InitCB)(xMemPool*, void*);
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

struct IntersectionCallBack
{
	union
	{
		RpWorldSector*(*sectorCB)(RpIntersection*, RpWorldSector*, void*);
		RpCollisionTriangle*(*worldCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
		RpAtomic*(*atomicCB)(RpIntersection*, RpWorldSector*, RpAtomic*, float32, void*);
	};
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
	void(*destroyNotify)(RwResEntry*);
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
	uint16 vertIndex[3];
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
	float32 matrix[16];
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
	uint8 NumAnims[2];
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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

struct RpCollBSPTree
{
	uint32 numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	uint8 pad[4];
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

struct RwSplitBits
{
	union
	{
		float32 nReal;
		int32 nInt;
		uint32 nUInt;
	};
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	uint8 pad[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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

struct xiMat4x3Union
{
	union
	{
		xMat4x3 xm;
		RwMatrixTag im;
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
	float32 radius[2];
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
	int8 name[32];
	int8 mask[32];
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

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	RxCluster clusters[1];
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
int32(*ConicDepenLeafNodeCB)(xClumpCollBSPTriangle*, void*);
xMat4x3 g_I3;
uint8 xClumpColl_FilterFlags;
void(*SweptSphereHitsEntCB)(xScene*, xRay3*, xQCData*, xEnt*, void*);
xGrid colls_oso_grid;
xGrid colls_grid;
xGrid npcs_grid;
RpMorphTarget anim_coll_old_mt;
int32(*SweptSphereModelCB)(int32, int32, void*);
int32 _rpCollisionGeometryDataOffset;
RpCollisionTriangle*(*SweptSphereHitsEnvCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
int32(*SweptSphereLeafNodeCB)(xClumpCollBSPTriangle*, void*);
xQCControl xqc_def_ctrl;
xVec3 g_O3;
void(*xCapsuleHitsEnt)(xScene*, xRay3*, xQCData*, xEnt*, void*);
RpCollisionTriangle*(*CapsuleEnvClosestToStartCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
int32(*LeafNodeCapsuleIntersect)(xClumpCollBSPTriangle*, void*);
RpCollisionTriangle*(*CapsuleEnvClosestToLineCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*CapsuleModelClosestToLineCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
int32(*xParabolaEnvCB)(xClumpCollBSPTriangle*, void*);
RpCollisionTriangle*(*sphereHitsModelCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);

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
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, float32 radius, RpV3dGradient* grad, int32(*callBack)(int32, int32, void*), void* data);
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
	// Line 4075, Address: 0x1c57f0, Func Offset: 0
	// Line 4076, Address: 0x1c57f8, Func Offset: 0x8
	// Line 4075, Address: 0x1c57fc, Func Offset: 0xc
	// Line 4076, Address: 0x1c5800, Func Offset: 0x10
	// Line 4082, Address: 0x1c5820, Func Offset: 0x30
	// Line 4079, Address: 0x1c5824, Func Offset: 0x34
	// Line 4082, Address: 0x1c5828, Func Offset: 0x38
	// Line 4079, Address: 0x1c582c, Func Offset: 0x3c
	// Line 4082, Address: 0x1c583c, Func Offset: 0x4c
	// Line 4084, Address: 0x1c5894, Func Offset: 0xa4
	// Line 4083, Address: 0x1c5898, Func Offset: 0xa8
	// Line 4082, Address: 0x1c58a4, Func Offset: 0xb4
	// Line 4085, Address: 0x1c58a8, Func Offset: 0xb8
	// Line 4082, Address: 0x1c58ac, Func Offset: 0xbc
	// Line 4083, Address: 0x1c58b8, Func Offset: 0xc8
	// Line 4085, Address: 0x1c58e8, Func Offset: 0xf8
	// Line 4083, Address: 0x1c58ec, Func Offset: 0xfc
	// Line 4085, Address: 0x1c58f0, Func Offset: 0x100
	// Line 4088, Address: 0x1c5910, Func Offset: 0x120
	// Func End, Address: 0x1c5918, Func Offset: 0x128
}

// xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff
// Start address: 0x1c5920
uint8 xSphereHitsVCylinder(xVec3& sc, float32 sr, xVec3& cc, float32 cr, float32 ch)
{
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
	// Line 4055, Address: 0x1c5920, Func Offset: 0
	// Line 4056, Address: 0x1c5928, Func Offset: 0x8
	// Line 4055, Address: 0x1c592c, Func Offset: 0xc
	// Line 4056, Address: 0x1c5930, Func Offset: 0x10
	// Line 4060, Address: 0x1c5958, Func Offset: 0x38
	// Line 4061, Address: 0x1c5988, Func Offset: 0x68
	// Line 4064, Address: 0x1c59a0, Func Offset: 0x80
	// Line 4065, Address: 0x1c5a00, Func Offset: 0xe0
	// Line 4066, Address: 0x1c5a04, Func Offset: 0xe4
	// Line 4065, Address: 0x1c5a08, Func Offset: 0xe8
	// Line 4067, Address: 0x1c5a10, Func Offset: 0xf0
	// Line 4064, Address: 0x1c5a14, Func Offset: 0xf4
	// Line 4065, Address: 0x1c5a20, Func Offset: 0x100
	// Line 4067, Address: 0x1c5a50, Func Offset: 0x130
	// Line 4065, Address: 0x1c5a54, Func Offset: 0x134
	// Line 4067, Address: 0x1c5a58, Func Offset: 0x138
	// Line 4070, Address: 0x1c5a78, Func Offset: 0x158
	// Func End, Address: 0x1c5a80, Func Offset: 0x160
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
	// Line 3935, Address: 0x1c5a80, Func Offset: 0
	// Line 3926, Address: 0x1c5a84, Func Offset: 0x4
	// Line 3935, Address: 0x1c5a88, Func Offset: 0x8
	// Line 3937, Address: 0x1c5a9c, Func Offset: 0x1c
	// Line 3935, Address: 0x1c5aa4, Func Offset: 0x24
	// Line 3937, Address: 0x1c5b04, Func Offset: 0x84
	// Line 3951, Address: 0x1c5b28, Func Offset: 0xa8
	// Line 3937, Address: 0x1c5b2c, Func Offset: 0xac
	// Line 3951, Address: 0x1c5b30, Func Offset: 0xb0
	// Line 3937, Address: 0x1c5b34, Func Offset: 0xb4
	// Line 3941, Address: 0x1c5b98, Func Offset: 0x118
	// Line 3942, Address: 0x1c5bc4, Func Offset: 0x144
	// Line 3943, Address: 0x1c5bf0, Func Offset: 0x170
	// Line 3944, Address: 0x1c5c1c, Func Offset: 0x19c
	// Line 3945, Address: 0x1c5c48, Func Offset: 0x1c8
	// Line 3946, Address: 0x1c5c74, Func Offset: 0x1f4
	// Line 3947, Address: 0x1c5ca0, Func Offset: 0x220
	// Line 3948, Address: 0x1c5ccc, Func Offset: 0x24c
	// Line 3949, Address: 0x1c5cf8, Func Offset: 0x278
	// Line 3951, Address: 0x1c5d24, Func Offset: 0x2a4
	// Line 3952, Address: 0x1c5d4c, Func Offset: 0x2cc
	// Line 3951, Address: 0x1c5d50, Func Offset: 0x2d0
	// Line 3952, Address: 0x1c5d54, Func Offset: 0x2d4
	// Line 3953, Address: 0x1c5d60, Func Offset: 0x2e0
	// Line 3951, Address: 0x1c5d70, Func Offset: 0x2f0
	// Line 3952, Address: 0x1c5da8, Func Offset: 0x328
	// Line 3953, Address: 0x1c5e0c, Func Offset: 0x38c
	// Line 3959, Address: 0x1c5e64, Func Offset: 0x3e4
	// Line 3958, Address: 0x1c5e6c, Func Offset: 0x3ec
	// Line 3953, Address: 0x1c5e70, Func Offset: 0x3f0
	// Line 3959, Address: 0x1c5e7c, Func Offset: 0x3fc
	// Line 3960, Address: 0x1c5e8c, Func Offset: 0x40c
	// Line 3958, Address: 0x1c5e90, Func Offset: 0x410
	// Line 3959, Address: 0x1c5e94, Func Offset: 0x414
	// Line 3960, Address: 0x1c5ea8, Func Offset: 0x428
	// Line 3964, Address: 0x1c5ec0, Func Offset: 0x440
	// Line 3963, Address: 0x1c5ed8, Func Offset: 0x458
	// Line 3964, Address: 0x1c5edc, Func Offset: 0x45c
	// Line 3965, Address: 0x1c5eec, Func Offset: 0x46c
	// Line 3964, Address: 0x1c5ef0, Func Offset: 0x470
	// Line 3963, Address: 0x1c5ef4, Func Offset: 0x474
	// Line 3965, Address: 0x1c5ef8, Func Offset: 0x478
	// Line 3969, Address: 0x1c5f10, Func Offset: 0x490
	// Line 3968, Address: 0x1c5f28, Func Offset: 0x4a8
	// Line 3969, Address: 0x1c5f2c, Func Offset: 0x4ac
	// Line 3970, Address: 0x1c5f3c, Func Offset: 0x4bc
	// Line 3969, Address: 0x1c5f40, Func Offset: 0x4c0
	// Line 3968, Address: 0x1c5f44, Func Offset: 0x4c4
	// Line 3970, Address: 0x1c5f48, Func Offset: 0x4c8
	// Line 3973, Address: 0x1c5f60, Func Offset: 0x4e0
	// Line 3974, Address: 0x1c5f68, Func Offset: 0x4e8
	// Line 3973, Address: 0x1c5f74, Func Offset: 0x4f4
	// Line 3974, Address: 0x1c5f80, Func Offset: 0x500
	// Line 3973, Address: 0x1c5f84, Func Offset: 0x504
	// Line 3974, Address: 0x1c5f88, Func Offset: 0x508
	// Line 3973, Address: 0x1c5f98, Func Offset: 0x518
	// Line 3974, Address: 0x1c5fa0, Func Offset: 0x520
	// Line 3975, Address: 0x1c5fa8, Func Offset: 0x528
	// Line 3974, Address: 0x1c5fac, Func Offset: 0x52c
	// Line 3973, Address: 0x1c5fb0, Func Offset: 0x530
	// Line 3975, Address: 0x1c5fbc, Func Offset: 0x53c
	// Line 3973, Address: 0x1c5fc0, Func Offset: 0x540
	// Line 3975, Address: 0x1c5fc4, Func Offset: 0x544
	// Line 3978, Address: 0x1c5fd8, Func Offset: 0x558
	// Line 3979, Address: 0x1c5fe0, Func Offset: 0x560
	// Line 3978, Address: 0x1c5fec, Func Offset: 0x56c
	// Line 3979, Address: 0x1c5ff8, Func Offset: 0x578
	// Line 3978, Address: 0x1c5ffc, Func Offset: 0x57c
	// Line 3979, Address: 0x1c6000, Func Offset: 0x580
	// Line 3978, Address: 0x1c6010, Func Offset: 0x590
	// Line 3979, Address: 0x1c6018, Func Offset: 0x598
	// Line 3980, Address: 0x1c6020, Func Offset: 0x5a0
	// Line 3979, Address: 0x1c6024, Func Offset: 0x5a4
	// Line 3978, Address: 0x1c6028, Func Offset: 0x5a8
	// Line 3980, Address: 0x1c6034, Func Offset: 0x5b4
	// Line 3978, Address: 0x1c6038, Func Offset: 0x5b8
	// Line 3980, Address: 0x1c603c, Func Offset: 0x5bc
	// Line 3983, Address: 0x1c6050, Func Offset: 0x5d0
	// Line 3984, Address: 0x1c6058, Func Offset: 0x5d8
	// Line 3983, Address: 0x1c6068, Func Offset: 0x5e8
	// Line 3984, Address: 0x1c6074, Func Offset: 0x5f4
	// Line 3983, Address: 0x1c6080, Func Offset: 0x600
	// Line 3984, Address: 0x1c6084, Func Offset: 0x604
	// Line 3983, Address: 0x1c6088, Func Offset: 0x608
	// Line 3984, Address: 0x1c6090, Func Offset: 0x610
	// Line 3985, Address: 0x1c6098, Func Offset: 0x618
	// Line 3984, Address: 0x1c609c, Func Offset: 0x61c
	// Line 3983, Address: 0x1c60a0, Func Offset: 0x620
	// Line 3985, Address: 0x1c60ac, Func Offset: 0x62c
	// Line 3983, Address: 0x1c60b0, Func Offset: 0x630
	// Line 3985, Address: 0x1c60b4, Func Offset: 0x634
	// Line 3990, Address: 0x1c60c8, Func Offset: 0x648
	// Line 3993, Address: 0x1c6148, Func Offset: 0x6c8
	// Line 3996, Address: 0x1c6150, Func Offset: 0x6d0
	// Line 3997, Address: 0x1c6158, Func Offset: 0x6d8
	// Line 3998, Address: 0x1c6168, Func Offset: 0x6e8
	// Line 3996, Address: 0x1c616c, Func Offset: 0x6ec
	// Line 3998, Address: 0x1c6170, Func Offset: 0x6f0
	// Line 3996, Address: 0x1c617c, Func Offset: 0x6fc
	// Line 3997, Address: 0x1c6184, Func Offset: 0x704
	// Line 3996, Address: 0x1c618c, Func Offset: 0x70c
	// Line 3998, Address: 0x1c6194, Func Offset: 0x714
	// Line 3997, Address: 0x1c619c, Func Offset: 0x71c
	// Line 3998, Address: 0x1c61a0, Func Offset: 0x720
	// Line 3999, Address: 0x1c61a4, Func Offset: 0x724
	// Line 3996, Address: 0x1c61a8, Func Offset: 0x728
	// Line 3999, Address: 0x1c61ac, Func Offset: 0x72c
	// Line 4002, Address: 0x1c61c0, Func Offset: 0x740
	// Line 4003, Address: 0x1c61c8, Func Offset: 0x748
	// Line 4004, Address: 0x1c61d8, Func Offset: 0x758
	// Line 4002, Address: 0x1c61dc, Func Offset: 0x75c
	// Line 4004, Address: 0x1c61e0, Func Offset: 0x760
	// Line 4002, Address: 0x1c61ec, Func Offset: 0x76c
	// Line 4003, Address: 0x1c61f4, Func Offset: 0x774
	// Line 4002, Address: 0x1c61fc, Func Offset: 0x77c
	// Line 4004, Address: 0x1c6204, Func Offset: 0x784
	// Line 4003, Address: 0x1c620c, Func Offset: 0x78c
	// Line 4004, Address: 0x1c6210, Func Offset: 0x790
	// Line 4005, Address: 0x1c6214, Func Offset: 0x794
	// Line 4002, Address: 0x1c6218, Func Offset: 0x798
	// Line 4005, Address: 0x1c621c, Func Offset: 0x79c
	// Line 4008, Address: 0x1c6230, Func Offset: 0x7b0
	// Line 4009, Address: 0x1c6238, Func Offset: 0x7b8
	// Line 4010, Address: 0x1c6248, Func Offset: 0x7c8
	// Line 4008, Address: 0x1c624c, Func Offset: 0x7cc
	// Line 4010, Address: 0x1c6250, Func Offset: 0x7d0
	// Line 4008, Address: 0x1c625c, Func Offset: 0x7dc
	// Line 4009, Address: 0x1c6264, Func Offset: 0x7e4
	// Line 4008, Address: 0x1c626c, Func Offset: 0x7ec
	// Line 4010, Address: 0x1c6274, Func Offset: 0x7f4
	// Line 4009, Address: 0x1c627c, Func Offset: 0x7fc
	// Line 4010, Address: 0x1c6280, Func Offset: 0x800
	// Line 4011, Address: 0x1c6284, Func Offset: 0x804
	// Line 4008, Address: 0x1c6288, Func Offset: 0x808
	// Line 4011, Address: 0x1c628c, Func Offset: 0x80c
	// Line 4014, Address: 0x1c62a0, Func Offset: 0x820
	// Line 4015, Address: 0x1c62a8, Func Offset: 0x828
	// Line 4016, Address: 0x1c62b8, Func Offset: 0x838
	// Line 4014, Address: 0x1c62bc, Func Offset: 0x83c
	// Line 4016, Address: 0x1c62c0, Func Offset: 0x840
	// Line 4014, Address: 0x1c62cc, Func Offset: 0x84c
	// Line 4015, Address: 0x1c62d4, Func Offset: 0x854
	// Line 4014, Address: 0x1c62dc, Func Offset: 0x85c
	// Line 4016, Address: 0x1c62e4, Func Offset: 0x864
	// Line 4015, Address: 0x1c62ec, Func Offset: 0x86c
	// Line 4016, Address: 0x1c62f0, Func Offset: 0x870
	// Line 4017, Address: 0x1c62f4, Func Offset: 0x874
	// Line 4014, Address: 0x1c62f8, Func Offset: 0x878
	// Line 4017, Address: 0x1c62fc, Func Offset: 0x87c
	// Line 4020, Address: 0x1c6310, Func Offset: 0x890
	// Line 4021, Address: 0x1c6318, Func Offset: 0x898
	// Line 4022, Address: 0x1c6328, Func Offset: 0x8a8
	// Line 4020, Address: 0x1c632c, Func Offset: 0x8ac
	// Line 4022, Address: 0x1c6330, Func Offset: 0x8b0
	// Line 4020, Address: 0x1c633c, Func Offset: 0x8bc
	// Line 4021, Address: 0x1c6344, Func Offset: 0x8c4
	// Line 4020, Address: 0x1c634c, Func Offset: 0x8cc
	// Line 4022, Address: 0x1c6354, Func Offset: 0x8d4
	// Line 4021, Address: 0x1c635c, Func Offset: 0x8dc
	// Line 4022, Address: 0x1c6360, Func Offset: 0x8e0
	// Line 4023, Address: 0x1c6364, Func Offset: 0x8e4
	// Line 4020, Address: 0x1c6368, Func Offset: 0x8e8
	// Line 4023, Address: 0x1c636c, Func Offset: 0x8ec
	// Line 4026, Address: 0x1c6380, Func Offset: 0x900
	// Line 4027, Address: 0x1c6388, Func Offset: 0x908
	// Line 4028, Address: 0x1c6398, Func Offset: 0x918
	// Line 4026, Address: 0x1c639c, Func Offset: 0x91c
	// Line 4028, Address: 0x1c63a0, Func Offset: 0x920
	// Line 4026, Address: 0x1c63ac, Func Offset: 0x92c
	// Line 4027, Address: 0x1c63b4, Func Offset: 0x934
	// Line 4026, Address: 0x1c63bc, Func Offset: 0x93c
	// Line 4028, Address: 0x1c63c4, Func Offset: 0x944
	// Line 4027, Address: 0x1c63cc, Func Offset: 0x94c
	// Line 4028, Address: 0x1c63d0, Func Offset: 0x950
	// Line 4029, Address: 0x1c63d4, Func Offset: 0x954
	// Line 4026, Address: 0x1c63d8, Func Offset: 0x958
	// Line 4029, Address: 0x1c63dc, Func Offset: 0x95c
	// Line 4032, Address: 0x1c63f0, Func Offset: 0x970
	// Line 4033, Address: 0x1c63f8, Func Offset: 0x978
	// Line 4034, Address: 0x1c6408, Func Offset: 0x988
	// Line 4032, Address: 0x1c640c, Func Offset: 0x98c
	// Line 4034, Address: 0x1c6410, Func Offset: 0x990
	// Line 4032, Address: 0x1c641c, Func Offset: 0x99c
	// Line 4033, Address: 0x1c6424, Func Offset: 0x9a4
	// Line 4032, Address: 0x1c642c, Func Offset: 0x9ac
	// Line 4034, Address: 0x1c6434, Func Offset: 0x9b4
	// Line 4033, Address: 0x1c643c, Func Offset: 0x9bc
	// Line 4034, Address: 0x1c6440, Func Offset: 0x9c0
	// Line 4035, Address: 0x1c6444, Func Offset: 0x9c4
	// Line 4032, Address: 0x1c6448, Func Offset: 0x9c8
	// Line 4035, Address: 0x1c644c, Func Offset: 0x9cc
	// Line 4038, Address: 0x1c6460, Func Offset: 0x9e0
	// Line 4039, Address: 0x1c6468, Func Offset: 0x9e8
	// Line 4040, Address: 0x1c6478, Func Offset: 0x9f8
	// Line 4038, Address: 0x1c647c, Func Offset: 0x9fc
	// Line 4040, Address: 0x1c6480, Func Offset: 0xa00
	// Line 4038, Address: 0x1c648c, Func Offset: 0xa0c
	// Line 4039, Address: 0x1c6494, Func Offset: 0xa14
	// Line 4038, Address: 0x1c649c, Func Offset: 0xa1c
	// Line 4040, Address: 0x1c64a4, Func Offset: 0xa24
	// Line 4039, Address: 0x1c64ac, Func Offset: 0xa2c
	// Line 4040, Address: 0x1c64b0, Func Offset: 0xa30
	// Line 4041, Address: 0x1c64b4, Func Offset: 0xa34
	// Line 4038, Address: 0x1c64b8, Func Offset: 0xa38
	// Line 4041, Address: 0x1c64bc, Func Offset: 0xa3c
	// Line 4044, Address: 0x1c64d0, Func Offset: 0xa50
	// Line 4045, Address: 0x1c64d8, Func Offset: 0xa58
	// Line 4046, Address: 0x1c64e8, Func Offset: 0xa68
	// Line 4044, Address: 0x1c64ec, Func Offset: 0xa6c
	// Line 4046, Address: 0x1c64f0, Func Offset: 0xa70
	// Line 4044, Address: 0x1c64fc, Func Offset: 0xa7c
	// Line 4045, Address: 0x1c6504, Func Offset: 0xa84
	// Line 4044, Address: 0x1c650c, Func Offset: 0xa8c
	// Line 4046, Address: 0x1c6514, Func Offset: 0xa94
	// Line 4045, Address: 0x1c651c, Func Offset: 0xa9c
	// Line 4046, Address: 0x1c6520, Func Offset: 0xaa0
	// Line 4047, Address: 0x1c6524, Func Offset: 0xaa4
	// Line 4044, Address: 0x1c6528, Func Offset: 0xaa8
	// Line 4047, Address: 0x1c652c, Func Offset: 0xaac
	// Line 4049, Address: 0x1c6540, Func Offset: 0xac0
	// Line 4050, Address: 0x1c6548, Func Offset: 0xac8
	// Func End, Address: 0x1c6550, Func Offset: 0xad0
}

// xSphereHitsBound__FRC7xSphereRC6xBound
// Start address: 0x1c6550
uint8 xSphereHitsBound(xSphere& o, xBound& b)
{
	// Line 3915, Address: 0x1c6550, Func Offset: 0
	// Line 3916, Address: 0x1c6554, Func Offset: 0x4
	// Line 3915, Address: 0x1c6558, Func Offset: 0x8
	// Line 3916, Address: 0x1c6564, Func Offset: 0x14
	// Line 3918, Address: 0x1c6590, Func Offset: 0x40
	// Line 3919, Address: 0x1c6634, Func Offset: 0xe4
	// Line 3920, Address: 0x1c6720, Func Offset: 0x1d0
	// Line 3922, Address: 0x1c6850, Func Offset: 0x300
	// Line 3923, Address: 0x1c6858, Func Offset: 0x308
	// Func End, Address: 0x1c686c, Func Offset: 0x31c
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
	// Line 3895, Address: 0x1c6870, Func Offset: 0
	// Line 3894, Address: 0x1c6874, Func Offset: 0x4
	// Line 3895, Address: 0x1c6878, Func Offset: 0x8
	// Line 3901, Address: 0x1c687c, Func Offset: 0xc
	// Line 3895, Address: 0x1c6880, Func Offset: 0x10
	// Line 3901, Address: 0x1c6888, Func Offset: 0x18
	// Line 3895, Address: 0x1c688c, Func Offset: 0x1c
	// Line 3896, Address: 0x1c6890, Func Offset: 0x20
	// Line 3903, Address: 0x1c6894, Func Offset: 0x24
	// Line 3897, Address: 0x1c689c, Func Offset: 0x2c
	// Line 3896, Address: 0x1c68a0, Func Offset: 0x30
	// Line 3895, Address: 0x1c68a4, Func Offset: 0x34
	// Line 3904, Address: 0x1c68c0, Func Offset: 0x50
	// Line 3895, Address: 0x1c68c4, Func Offset: 0x54
	// Line 3896, Address: 0x1c68f4, Func Offset: 0x84
	// Line 3897, Address: 0x1c694c, Func Offset: 0xdc
	// Line 3900, Address: 0x1c6950, Func Offset: 0xe0
	// Line 3901, Address: 0x1c6954, Func Offset: 0xe4
	// Line 3900, Address: 0x1c6958, Func Offset: 0xe8
	// Line 3897, Address: 0x1c695c, Func Offset: 0xec
	// Line 3900, Address: 0x1c6960, Func Offset: 0xf0
	// Line 3901, Address: 0x1c6970, Func Offset: 0x100
	// Line 3900, Address: 0x1c6978, Func Offset: 0x108
	// Line 3901, Address: 0x1c697c, Func Offset: 0x10c
	// Line 3903, Address: 0x1c6984, Func Offset: 0x114
	// Line 3901, Address: 0x1c699c, Func Offset: 0x12c
	// Line 3903, Address: 0x1c69a0, Func Offset: 0x130
	// Line 3904, Address: 0x1c69ac, Func Offset: 0x13c
	// Line 3908, Address: 0x1c69c0, Func Offset: 0x150
	// Line 3907, Address: 0x1c69c4, Func Offset: 0x154
	// Line 3911, Address: 0x1c69c8, Func Offset: 0x158
	// Line 3908, Address: 0x1c69cc, Func Offset: 0x15c
	// Line 3909, Address: 0x1c69dc, Func Offset: 0x16c
	// Line 3910, Address: 0x1c69e0, Func Offset: 0x170
	// Line 3909, Address: 0x1c69e4, Func Offset: 0x174
	// Line 3911, Address: 0x1c69e8, Func Offset: 0x178
	// Line 3912, Address: 0x1c6a58, Func Offset: 0x1e8
	// Func End, Address: 0x1c6a60, Func Offset: 0x1f0
}

// xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6a60
int32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	int32 envcollfound;
	xRay3 ray;
	float32 one_len;
	// Line 3748, Address: 0x1c6a60, Func Offset: 0
	// Line 3749, Address: 0x1c6a68, Func Offset: 0x8
	// Line 3748, Address: 0x1c6a6c, Func Offset: 0xc
	// Line 3749, Address: 0x1c6a7c, Func Offset: 0x1c
	// Line 3750, Address: 0x1c6a8c, Func Offset: 0x2c
	// Line 3751, Address: 0x1c6a94, Func Offset: 0x34
	// Line 3755, Address: 0x1c6a98, Func Offset: 0x38
	// Line 3756, Address: 0x1c6a9c, Func Offset: 0x3c
	// Line 3754, Address: 0x1c6aa0, Func Offset: 0x40
	// Line 3759, Address: 0x1c6aa4, Func Offset: 0x44
	// Line 3763, Address: 0x1c6aac, Func Offset: 0x4c
	// Line 3759, Address: 0x1c6ab0, Func Offset: 0x50
	// Line 3763, Address: 0x1c6ab4, Func Offset: 0x54
	// Line 3764, Address: 0x1c6b6c, Func Offset: 0x10c
	// Line 3765, Address: 0x1c6b7c, Func Offset: 0x11c
	// Line 3766, Address: 0x1c6b84, Func Offset: 0x124
	// Line 3768, Address: 0x1c6b88, Func Offset: 0x128
	// Line 3769, Address: 0x1c6b8c, Func Offset: 0x12c
	// Line 3768, Address: 0x1c6b94, Func Offset: 0x134
	// Line 3769, Address: 0x1c6b98, Func Offset: 0x138
	// Line 3770, Address: 0x1c6bb4, Func Offset: 0x154
	// Line 3774, Address: 0x1c6bd8, Func Offset: 0x178
	// Line 3775, Address: 0x1c6bf0, Func Offset: 0x190
	// Func End, Address: 0x1c6c08, Func Offset: 0x1a8
}

// xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6c10
int32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	xRay3 ray;
	float32 one_len;
	// Line 3723, Address: 0x1c6c10, Func Offset: 0
	// Line 3724, Address: 0x1c6c18, Func Offset: 0x8
	// Line 3725, Address: 0x1c6c2c, Func Offset: 0x1c
	// Line 3726, Address: 0x1c6c34, Func Offset: 0x24
	// Line 3729, Address: 0x1c6c38, Func Offset: 0x28
	// Line 3730, Address: 0x1c6c3c, Func Offset: 0x2c
	// Line 3734, Address: 0x1c6c40, Func Offset: 0x30
	// Line 3728, Address: 0x1c6c44, Func Offset: 0x34
	// Line 3734, Address: 0x1c6c48, Func Offset: 0x38
	// Line 3735, Address: 0x1c6d00, Func Offset: 0xf0
	// Line 3736, Address: 0x1c6d10, Func Offset: 0x100
	// Line 3737, Address: 0x1c6d14, Func Offset: 0x104
	// Line 3739, Address: 0x1c6d18, Func Offset: 0x108
	// Line 3742, Address: 0x1c6d34, Func Offset: 0x124
	// Line 3743, Address: 0x1c6d38, Func Offset: 0x128
	// Func End, Address: 0x1c6d44, Func Offset: 0x134
}

// xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6d50
int32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	xRay3 ray;
	float32 one_len;
	// Line 3698, Address: 0x1c6d50, Func Offset: 0
	// Line 3699, Address: 0x1c6d58, Func Offset: 0x8
	// Line 3698, Address: 0x1c6d5c, Func Offset: 0xc
	// Line 3699, Address: 0x1c6d68, Func Offset: 0x18
	// Line 3700, Address: 0x1c6d78, Func Offset: 0x28
	// Line 3704, Address: 0x1c6d80, Func Offset: 0x30
	// Line 3705, Address: 0x1c6d84, Func Offset: 0x34
	// Line 3709, Address: 0x1c6d88, Func Offset: 0x38
	// Line 3703, Address: 0x1c6d8c, Func Offset: 0x3c
	// Line 3709, Address: 0x1c6d90, Func Offset: 0x40
	// Line 3710, Address: 0x1c6e48, Func Offset: 0xf8
	// Line 3711, Address: 0x1c6e58, Func Offset: 0x108
	// Line 3712, Address: 0x1c6e5c, Func Offset: 0x10c
	// Line 3714, Address: 0x1c6e60, Func Offset: 0x110
	// Line 3715, Address: 0x1c6e84, Func Offset: 0x134
	// Line 3718, Address: 0x1c6ea8, Func Offset: 0x158
	// Line 3719, Address: 0x1c6eb0, Func Offset: 0x160
	// Func End, Address: 0x1c6ec4, Func Offset: 0x174
}

// xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6ed0
int32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, uint8 collType)
{
	int32 envcollfound;
	xRay3 ray;
	float32 one_len;
	// Line 3660, Address: 0x1c6ed0, Func Offset: 0
	// Line 3661, Address: 0x1c6ed8, Func Offset: 0x8
	// Line 3660, Address: 0x1c6edc, Func Offset: 0xc
	// Line 3661, Address: 0x1c6eec, Func Offset: 0x1c
	// Line 3662, Address: 0x1c6efc, Func Offset: 0x2c
	// Line 3663, Address: 0x1c6f04, Func Offset: 0x34
	// Line 3667, Address: 0x1c6f08, Func Offset: 0x38
	// Line 3668, Address: 0x1c6f0c, Func Offset: 0x3c
	// Line 3666, Address: 0x1c6f10, Func Offset: 0x40
	// Line 3671, Address: 0x1c6f14, Func Offset: 0x44
	// Line 3675, Address: 0x1c6f1c, Func Offset: 0x4c
	// Line 3671, Address: 0x1c6f20, Func Offset: 0x50
	// Line 3675, Address: 0x1c6f24, Func Offset: 0x54
	// Line 3676, Address: 0x1c6fdc, Func Offset: 0x10c
	// Line 3677, Address: 0x1c6fec, Func Offset: 0x11c
	// Line 3678, Address: 0x1c6ff4, Func Offset: 0x124
	// Line 3680, Address: 0x1c6ff8, Func Offset: 0x128
	// Line 3681, Address: 0x1c701c, Func Offset: 0x14c
	// Line 3682, Address: 0x1c7040, Func Offset: 0x170
	// Line 3685, Address: 0x1c7064, Func Offset: 0x194
	// Line 3686, Address: 0x1c7080, Func Offset: 0x1b0
	// Func End, Address: 0x1c7098, Func Offset: 0x1c8
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
	// Line 3503, Address: 0x1c70a0, Func Offset: 0
	// Line 3506, Address: 0x1c70a4, Func Offset: 0x4
	// Line 3503, Address: 0x1c70a8, Func Offset: 0x8
	// Line 3505, Address: 0x1c70bc, Func Offset: 0x1c
	// Line 3506, Address: 0x1c70c4, Func Offset: 0x24
	// Line 3509, Address: 0x1c70d8, Func Offset: 0x38
	// Line 3512, Address: 0x1c70e4, Func Offset: 0x44
	// Line 3516, Address: 0x1c70f8, Func Offset: 0x58
	// Line 3520, Address: 0x1c7108, Func Offset: 0x68
	// Line 3525, Address: 0x1c7130, Func Offset: 0x90
	// Line 3529, Address: 0x1c7138, Func Offset: 0x98
	// Line 3527, Address: 0x1c713c, Func Offset: 0x9c
	// Line 3528, Address: 0x1c7140, Func Offset: 0xa0
	// Line 3529, Address: 0x1c7148, Func Offset: 0xa8
	// Line 3538, Address: 0x1c71f8, Func Offset: 0x158
	// Line 3543, Address: 0x1c7200, Func Offset: 0x160
	// Line 3550, Address: 0x1c7210, Func Offset: 0x170
	// Line 3555, Address: 0x1c7248, Func Offset: 0x1a8
	// Line 3553, Address: 0x1c724c, Func Offset: 0x1ac
	// Line 3555, Address: 0x1c7250, Func Offset: 0x1b0
	// Line 3554, Address: 0x1c7254, Func Offset: 0x1b4
	// Line 3555, Address: 0x1c725c, Func Offset: 0x1bc
	// Line 3556, Address: 0x1c7264, Func Offset: 0x1c4
	// Line 3563, Address: 0x1c7268, Func Offset: 0x1c8
	// Line 3573, Address: 0x1c7270, Func Offset: 0x1d0
	// Line 3567, Address: 0x1c7274, Func Offset: 0x1d4
	// Line 3573, Address: 0x1c7278, Func Offset: 0x1d8
	// Line 3567, Address: 0x1c727c, Func Offset: 0x1dc
	// Line 3573, Address: 0x1c72d4, Func Offset: 0x234
	// Line 3580, Address: 0x1c72dc, Func Offset: 0x23c
	// Line 3581, Address: 0x1c72e4, Func Offset: 0x244
	// Line 3588, Address: 0x1c72e8, Func Offset: 0x248
	// Line 3591, Address: 0x1c72ec, Func Offset: 0x24c
	// Line 3588, Address: 0x1c72f0, Func Offset: 0x250
	// Line 3591, Address: 0x1c7318, Func Offset: 0x278
	// Line 3592, Address: 0x1c7320, Func Offset: 0x280
	// Line 3593, Address: 0x1c7360, Func Offset: 0x2c0
	// Line 3594, Address: 0x1c7370, Func Offset: 0x2d0
	// Line 3604, Address: 0x1c7374, Func Offset: 0x2d4
	// Line 3594, Address: 0x1c737c, Func Offset: 0x2dc
	// Line 3595, Address: 0x1c7384, Func Offset: 0x2e4
	// Line 3596, Address: 0x1c7390, Func Offset: 0x2f0
	// Line 3598, Address: 0x1c7398, Func Offset: 0x2f8
	// Line 3604, Address: 0x1c7410, Func Offset: 0x370
	// Line 3615, Address: 0x1c741c, Func Offset: 0x37c
	// Line 3616, Address: 0x1c7420, Func Offset: 0x380
	// Line 3621, Address: 0x1c742c, Func Offset: 0x38c
	// Line 3622, Address: 0x1c7440, Func Offset: 0x3a0
	// Line 3623, Address: 0x1c7490, Func Offset: 0x3f0
	// Line 3624, Address: 0x1c74a8, Func Offset: 0x408
	// Line 3626, Address: 0x1c74ac, Func Offset: 0x40c
	// Line 3625, Address: 0x1c74b0, Func Offset: 0x410
	// Line 3626, Address: 0x1c74b8, Func Offset: 0x418
	// Line 3627, Address: 0x1c74bc, Func Offset: 0x41c
	// Line 3628, Address: 0x1c74c0, Func Offset: 0x420
	// Line 3630, Address: 0x1c74e4, Func Offset: 0x444
	// Line 3633, Address: 0x1c74f0, Func Offset: 0x450
	// Line 3634, Address: 0x1c7524, Func Offset: 0x484
	// Line 3635, Address: 0x1c7528, Func Offset: 0x488
	// Line 3636, Address: 0x1c753c, Func Offset: 0x49c
	// Line 3637, Address: 0x1c7540, Func Offset: 0x4a0
	// Line 3639, Address: 0x1c7544, Func Offset: 0x4a4
	// Line 3640, Address: 0x1c754c, Func Offset: 0x4ac
	// Line 3641, Address: 0x1c7550, Func Offset: 0x4b0
	// Line 3642, Address: 0x1c7568, Func Offset: 0x4c8
	// Line 3643, Address: 0x1c756c, Func Offset: 0x4cc
	// Line 3645, Address: 0x1c7570, Func Offset: 0x4d0
	// Line 3647, Address: 0x1c7578, Func Offset: 0x4d8
	// Line 3648, Address: 0x1c7590, Func Offset: 0x4f0
	// Line 3649, Address: 0x1c7594, Func Offset: 0x4f4
	// Line 3656, Address: 0x1c759c, Func Offset: 0x4fc
	// Line 3657, Address: 0x1c75a0, Func Offset: 0x500
	// Func End, Address: 0x1c75bc, Func Offset: 0x51c
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
	// Line 3410, Address: 0x1c75c0, Func Offset: 0
	// Line 3411, Address: 0x1c75c8, Func Offset: 0x8
	// Line 3410, Address: 0x1c75cc, Func Offset: 0xc
	// Line 3411, Address: 0x1c75f4, Func Offset: 0x34
	// Line 3412, Address: 0x1c7604, Func Offset: 0x44
	// Line 3413, Address: 0x1c760c, Func Offset: 0x4c
	// Line 3418, Address: 0x1c7610, Func Offset: 0x50
	// Line 3419, Address: 0x1c7614, Func Offset: 0x54
	// Line 3423, Address: 0x1c7618, Func Offset: 0x58
	// Line 3424, Address: 0x1c7648, Func Offset: 0x88
	// Line 3429, Address: 0x1c7658, Func Offset: 0x98
	// Line 3430, Address: 0x1c7664, Func Offset: 0xa4
	// Line 3431, Address: 0x1c7670, Func Offset: 0xb0
	// Line 3440, Address: 0x1c7688, Func Offset: 0xc8
	// Line 3431, Address: 0x1c768c, Func Offset: 0xcc
	// Line 3440, Address: 0x1c7690, Func Offset: 0xd0
	// Line 3431, Address: 0x1c7694, Func Offset: 0xd4
	// Line 3440, Address: 0x1c7698, Func Offset: 0xd8
	// Line 3438, Address: 0x1c76b0, Func Offset: 0xf0
	// Line 3440, Address: 0x1c76c0, Func Offset: 0x100
	// Line 3438, Address: 0x1c76c8, Func Offset: 0x108
	// Line 3440, Address: 0x1c76cc, Func Offset: 0x10c
	// Line 3441, Address: 0x1c76f0, Func Offset: 0x130
	// Line 3440, Address: 0x1c76fc, Func Offset: 0x13c
	// Line 3441, Address: 0x1c7700, Func Offset: 0x140
	// Line 3444, Address: 0x1c7734, Func Offset: 0x174
	// Line 3460, Address: 0x1c7738, Func Offset: 0x178
	// Line 3445, Address: 0x1c773c, Func Offset: 0x17c
	// Line 3460, Address: 0x1c7740, Func Offset: 0x180
	// Line 3461, Address: 0x1c7754, Func Offset: 0x194
	// Line 3460, Address: 0x1c7758, Func Offset: 0x198
	// Line 3461, Address: 0x1c7760, Func Offset: 0x1a0
	// Line 3464, Address: 0x1c7804, Func Offset: 0x244
	// Line 3461, Address: 0x1c7818, Func Offset: 0x258
	// Line 3464, Address: 0x1c7824, Func Offset: 0x264
	// Line 3472, Address: 0x1c7840, Func Offset: 0x280
	// Line 3475, Address: 0x1c7848, Func Offset: 0x288
	// Line 3476, Address: 0x1c784c, Func Offset: 0x28c
	// Line 3477, Address: 0x1c7850, Func Offset: 0x290
	// Line 3478, Address: 0x1c7854, Func Offset: 0x294
	// Line 3477, Address: 0x1c7858, Func Offset: 0x298
	// Line 3478, Address: 0x1c785c, Func Offset: 0x29c
	// Line 3481, Address: 0x1c7868, Func Offset: 0x2a8
	// Line 3485, Address: 0x1c78b4, Func Offset: 0x2f4
	// Line 3487, Address: 0x1c78bc, Func Offset: 0x2fc
	// Line 3491, Address: 0x1c78d0, Func Offset: 0x310
	// Line 3494, Address: 0x1c7960, Func Offset: 0x3a0
	// Line 3495, Address: 0x1c7968, Func Offset: 0x3a8
	// Func End, Address: 0x1c7994, Func Offset: 0x3d4
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
	// Line 3351, Address: 0x1c79a0, Func Offset: 0
	// Line 3354, Address: 0x1c79c0, Func Offset: 0x20
	// Line 3357, Address: 0x1c79c4, Func Offset: 0x24
	// Line 3356, Address: 0x1c79c8, Func Offset: 0x28
	// Line 3357, Address: 0x1c79cc, Func Offset: 0x2c
	// Line 3356, Address: 0x1c79d4, Func Offset: 0x34
	// Line 3363, Address: 0x1c79d8, Func Offset: 0x38
	// Line 3366, Address: 0x1c79f4, Func Offset: 0x54
	// Line 3363, Address: 0x1c79f8, Func Offset: 0x58
	// Line 3366, Address: 0x1c79fc, Func Offset: 0x5c
	// Line 3377, Address: 0x1c7a08, Func Offset: 0x68
	// Line 3389, Address: 0x1c7a0c, Func Offset: 0x6c
	// Line 3380, Address: 0x1c7a10, Func Offset: 0x70
	// Line 3378, Address: 0x1c7a14, Func Offset: 0x74
	// Line 3380, Address: 0x1c7a18, Func Offset: 0x78
	// Line 3389, Address: 0x1c7a1c, Func Offset: 0x7c
	// Line 3393, Address: 0x1c7a64, Func Offset: 0xc4
	// Line 3403, Address: 0x1c7a6c, Func Offset: 0xcc
	// Line 3406, Address: 0x1c7a80, Func Offset: 0xe0
	// Line 3405, Address: 0x1c7a88, Func Offset: 0xe8
	// Line 3406, Address: 0x1c7a8c, Func Offset: 0xec
	// Func End, Address: 0x1c7aa4, Func Offset: 0x104
}

// xSweptSphereToEnv__FP12xSweptSphereP4xEnv
// Start address: 0x1c7ab0
int32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env)
{
	RwLine line;
	xClumpCollV3dGradient grad;
	RpIntersection isx;
	// Line 3297, Address: 0x1c7ab0, Func Offset: 0
	// Line 3298, Address: 0x1c7ab8, Func Offset: 0x8
	// Line 3299, Address: 0x1c7acc, Func Offset: 0x1c
	// Line 3300, Address: 0x1c7ad4, Func Offset: 0x24
	// Line 3304, Address: 0x1c7ad8, Func Offset: 0x28
	// Line 3306, Address: 0x1c7adc, Func Offset: 0x2c
	// Line 3312, Address: 0x1c7aec, Func Offset: 0x3c
	// Line 3313, Address: 0x1c7afc, Func Offset: 0x4c
	// Line 3312, Address: 0x1c7b04, Func Offset: 0x54
	// Line 3313, Address: 0x1c7b18, Func Offset: 0x68
	// Line 3314, Address: 0x1c7b30, Func Offset: 0x80
	// Line 3315, Address: 0x1c7b50, Func Offset: 0xa0
	// Line 3318, Address: 0x1c7bf4, Func Offset: 0x144
	// Line 3315, Address: 0x1c7c00, Func Offset: 0x150
	// Line 3318, Address: 0x1c7c0c, Func Offset: 0x15c
	// Line 3325, Address: 0x1c7c24, Func Offset: 0x174
	// Line 3330, Address: 0x1c7c30, Func Offset: 0x180
	// Line 3333, Address: 0x1c7c38, Func Offset: 0x188
	// Line 3331, Address: 0x1c7c3c, Func Offset: 0x18c
	// Line 3333, Address: 0x1c7c40, Func Offset: 0x190
	// Line 3331, Address: 0x1c7c48, Func Offset: 0x198
	// Line 3332, Address: 0x1c7c5c, Func Offset: 0x1ac
	// Line 3333, Address: 0x1c7c74, Func Offset: 0x1c4
	// Line 3337, Address: 0x1c7c84, Func Offset: 0x1d4
	// Line 3339, Address: 0x1c7c88, Func Offset: 0x1d8
	// Line 3340, Address: 0x1c7c90, Func Offset: 0x1e0
	// Func End, Address: 0x1c7c9c, Func Offset: 0x1ec
}

// SweptSphereLeafNodeCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1c7ca0
int32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data)
{
	xSweptSphere* sws;
	RwV3d* v1;
	RwV3d* v2;
	// Line 3261, Address: 0x1c7ca0, Func Offset: 0
	// Line 3262, Address: 0x1c7cb4, Func Offset: 0x14
	// Line 3268, Address: 0x1c7cbc, Func Offset: 0x1c
	// Line 3272, Address: 0x1c7ccc, Func Offset: 0x2c
	// Line 3273, Address: 0x1c7cd8, Func Offset: 0x38
	// Line 3275, Address: 0x1c7cdc, Func Offset: 0x3c
	// Line 3276, Address: 0x1c7ce8, Func Offset: 0x48
	// Line 3277, Address: 0x1c7cec, Func Offset: 0x4c
	// Line 3281, Address: 0x1c7cf0, Func Offset: 0x50
	// Line 3282, Address: 0x1c7d00, Func Offset: 0x60
	// Line 3285, Address: 0x1c7d04, Func Offset: 0x64
	// Line 3282, Address: 0x1c7d08, Func Offset: 0x68
	// Line 3283, Address: 0x1c7d0c, Func Offset: 0x6c
	// Line 3284, Address: 0x1c7d10, Func Offset: 0x70
	// Line 3285, Address: 0x1c7d14, Func Offset: 0x74
	// Line 3290, Address: 0x1c7d18, Func Offset: 0x78
	// Line 3291, Address: 0x1c7d1c, Func Offset: 0x7c
	// Line 3294, Address: 0x1c7d2c, Func Offset: 0x8c
	// Line 3293, Address: 0x1c7d30, Func Offset: 0x90
	// Line 3294, Address: 0x1c7d34, Func Offset: 0x94
	// Func End, Address: 0x1c7d44, Func Offset: 0xa4
}

// SweptSphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1c7d50
RpCollisionTriangle* SweptSphereHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, void* data)
{
	xSweptSphere* sws;
	// Line 3239, Address: 0x1c7d50, Func Offset: 0
	// Line 3243, Address: 0x1c7d6c, Func Offset: 0x1c
	// Line 3240, Address: 0x1c7d70, Func Offset: 0x20
	// Line 3243, Address: 0x1c7d74, Func Offset: 0x24
	// Line 3250, Address: 0x1c7d8c, Func Offset: 0x3c
	// Line 3254, Address: 0x1c7d90, Func Offset: 0x40
	// Line 3250, Address: 0x1c7d94, Func Offset: 0x44
	// Line 3252, Address: 0x1c7da8, Func Offset: 0x58
	// Line 3253, Address: 0x1c7dac, Func Offset: 0x5c
	// Line 3254, Address: 0x1c7db0, Func Offset: 0x60
	// Line 3255, Address: 0x1c7db4, Func Offset: 0x64
	// Line 3257, Address: 0x1c7db8, Func Offset: 0x68
	// Line 3258, Address: 0x1c7dbc, Func Offset: 0x6c
	// Func End, Address: 0x1c7dd4, Func Offset: 0x84
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
	xVec3 xform[5];
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
	// Line 2899, Address: 0x1c7de0, Func Offset: 0
	// Line 2900, Address: 0x1c7de8, Func Offset: 0x8
	// Line 2899, Address: 0x1c7dec, Func Offset: 0xc
	// Line 2900, Address: 0x1c7e08, Func Offset: 0x28
	// Line 2901, Address: 0x1c7e18, Func Offset: 0x38
	// Line 2909, Address: 0x1c7e20, Func Offset: 0x40
	// Line 2910, Address: 0x1c7e28, Func Offset: 0x48
	// Line 2911, Address: 0x1c7e30, Func Offset: 0x50
	// Line 2909, Address: 0x1c7e38, Func Offset: 0x58
	// Line 2910, Address: 0x1c7e3c, Func Offset: 0x5c
	// Line 2912, Address: 0x1c7e40, Func Offset: 0x60
	// Line 2913, Address: 0x1c7e48, Func Offset: 0x68
	// Line 2915, Address: 0x1c7e58, Func Offset: 0x78
	// Line 2916, Address: 0x1c7e60, Func Offset: 0x80
	// Line 2917, Address: 0x1c7e64, Func Offset: 0x84
	// Line 2918, Address: 0x1c7e68, Func Offset: 0x88
	// Line 2930, Address: 0x1c7e6c, Func Offset: 0x8c
	// Line 2918, Address: 0x1c7e74, Func Offset: 0x94
	// Line 2919, Address: 0x1c7e7c, Func Offset: 0x9c
	// Line 2920, Address: 0x1c7e88, Func Offset: 0xa8
	// Line 2921, Address: 0x1c7e94, Func Offset: 0xb4
	// Line 2930, Address: 0x1c7e98, Func Offset: 0xb8
	// Line 2921, Address: 0x1c7e9c, Func Offset: 0xbc
	// Line 2930, Address: 0x1c7ea0, Func Offset: 0xc0
	// Line 2921, Address: 0x1c7ea4, Func Offset: 0xc4
	// Line 2922, Address: 0x1c7ea8, Func Offset: 0xc8
	// Line 2923, Address: 0x1c7eb4, Func Offset: 0xd4
	// Line 2924, Address: 0x1c7ec0, Func Offset: 0xe0
	// Line 2925, Address: 0x1c7ecc, Func Offset: 0xec
	// Line 2926, Address: 0x1c7ed8, Func Offset: 0xf8
	// Line 2927, Address: 0x1c7ee4, Func Offset: 0x104
	// Line 2930, Address: 0x1c7f7c, Func Offset: 0x19c
	// Line 2936, Address: 0x1c7f84, Func Offset: 0x1a4
	// Line 2933, Address: 0x1c7f8c, Func Offset: 0x1ac
	// Line 2932, Address: 0x1c7f90, Func Offset: 0x1b0
	// Line 2931, Address: 0x1c7f98, Func Offset: 0x1b8
	// Line 2933, Address: 0x1c7fa0, Func Offset: 0x1c0
	// Line 2932, Address: 0x1c7fa8, Func Offset: 0x1c8
	// Line 2931, Address: 0x1c7fac, Func Offset: 0x1cc
	// Line 2932, Address: 0x1c7fb0, Func Offset: 0x1d0
	// Line 2934, Address: 0x1c7fb4, Func Offset: 0x1d4
	// Line 2935, Address: 0x1c7fbc, Func Offset: 0x1dc
	// Line 2931, Address: 0x1c7fc0, Func Offset: 0x1e0
	// Line 2935, Address: 0x1c7fc4, Func Offset: 0x1e4
	// Line 2938, Address: 0x1c7fc8, Func Offset: 0x1e8
	// Line 2944, Address: 0x1c7fe0, Func Offset: 0x200
	// Line 2941, Address: 0x1c7fe4, Func Offset: 0x204
	// Line 2940, Address: 0x1c7fe8, Func Offset: 0x208
	// Line 2939, Address: 0x1c7ff0, Func Offset: 0x210
	// Line 2941, Address: 0x1c7ff8, Func Offset: 0x218
	// Line 2940, Address: 0x1c8000, Func Offset: 0x220
	// Line 2939, Address: 0x1c8004, Func Offset: 0x224
	// Line 2940, Address: 0x1c8008, Func Offset: 0x228
	// Line 2942, Address: 0x1c800c, Func Offset: 0x22c
	// Line 2943, Address: 0x1c8014, Func Offset: 0x234
	// Line 2939, Address: 0x1c8018, Func Offset: 0x238
	// Line 2943, Address: 0x1c801c, Func Offset: 0x23c
	// Line 2946, Address: 0x1c8020, Func Offset: 0x240
	// Line 2952, Address: 0x1c8038, Func Offset: 0x258
	// Line 2949, Address: 0x1c803c, Func Offset: 0x25c
	// Line 2948, Address: 0x1c8040, Func Offset: 0x260
	// Line 2947, Address: 0x1c8048, Func Offset: 0x268
	// Line 2949, Address: 0x1c8050, Func Offset: 0x270
	// Line 2948, Address: 0x1c8058, Func Offset: 0x278
	// Line 2947, Address: 0x1c805c, Func Offset: 0x27c
	// Line 2948, Address: 0x1c8060, Func Offset: 0x280
	// Line 2950, Address: 0x1c8064, Func Offset: 0x284
	// Line 2951, Address: 0x1c806c, Func Offset: 0x28c
	// Line 2947, Address: 0x1c8070, Func Offset: 0x290
	// Line 2951, Address: 0x1c8074, Func Offset: 0x294
	// Line 2967, Address: 0x1c8078, Func Offset: 0x298
	// Line 2962, Address: 0x1c807c, Func Offset: 0x29c
	// Line 2967, Address: 0x1c8080, Func Offset: 0x2a0
	// Line 2962, Address: 0x1c8084, Func Offset: 0x2a4
	// Line 2960, Address: 0x1c8088, Func Offset: 0x2a8
	// Line 2962, Address: 0x1c808c, Func Offset: 0x2ac
	// Line 2963, Address: 0x1c8094, Func Offset: 0x2b4
	// Line 2956, Address: 0x1c809c, Func Offset: 0x2bc
	// Line 2962, Address: 0x1c80a0, Func Offset: 0x2c0
	// Line 2967, Address: 0x1c80b0, Func Offset: 0x2d0
	// Line 2964, Address: 0x1c80b4, Func Offset: 0x2d4
	// Line 2963, Address: 0x1c80b8, Func Offset: 0x2d8
	// Line 2967, Address: 0x1c80bc, Func Offset: 0x2dc
	// Line 2964, Address: 0x1c80c0, Func Offset: 0x2e0
	// Line 2962, Address: 0x1c80c8, Func Offset: 0x2e8
	// Line 2964, Address: 0x1c80cc, Func Offset: 0x2ec
	// Line 2963, Address: 0x1c80d0, Func Offset: 0x2f0
	// Line 2962, Address: 0x1c80d8, Func Offset: 0x2f8
	// Line 2963, Address: 0x1c80dc, Func Offset: 0x2fc
	// Line 2964, Address: 0x1c80e4, Func Offset: 0x304
	// Line 2957, Address: 0x1c80ec, Func Offset: 0x30c
	// Line 2967, Address: 0x1c80f0, Func Offset: 0x310
	// Line 2968, Address: 0x1c80f8, Func Offset: 0x318
	// Line 2969, Address: 0x1c8104, Func Offset: 0x324
	// Line 2970, Address: 0x1c8108, Func Offset: 0x328
	// Line 2969, Address: 0x1c810c, Func Offset: 0x32c
	// Line 2970, Address: 0x1c8110, Func Offset: 0x330
	// Line 2971, Address: 0x1c8114, Func Offset: 0x334
	// Line 2974, Address: 0x1c8134, Func Offset: 0x354
	// Line 2978, Address: 0x1c8140, Func Offset: 0x360
	// Line 2979, Address: 0x1c8154, Func Offset: 0x374
	// Line 2982, Address: 0x1c8158, Func Offset: 0x378
	// Line 2983, Address: 0x1c8160, Func Offset: 0x380
	// Line 2986, Address: 0x1c8164, Func Offset: 0x384
	// Line 2984, Address: 0x1c8168, Func Offset: 0x388
	// Line 2985, Address: 0x1c816c, Func Offset: 0x38c
	// Line 2986, Address: 0x1c8170, Func Offset: 0x390
	// Line 2983, Address: 0x1c8178, Func Offset: 0x398
	// Line 2987, Address: 0x1c817c, Func Offset: 0x39c
	// Line 2986, Address: 0x1c8180, Func Offset: 0x3a0
	// Line 2987, Address: 0x1c8184, Func Offset: 0x3a4
	// Line 2984, Address: 0x1c8188, Func Offset: 0x3a8
	// Line 2985, Address: 0x1c818c, Func Offset: 0x3ac
	// Line 2983, Address: 0x1c8190, Func Offset: 0x3b0
	// Line 2987, Address: 0x1c8194, Func Offset: 0x3b4
	// Line 2984, Address: 0x1c819c, Func Offset: 0x3bc
	// Line 2985, Address: 0x1c81a0, Func Offset: 0x3c0
	// Line 2986, Address: 0x1c81a4, Func Offset: 0x3c4
	// Line 2987, Address: 0x1c81ac, Func Offset: 0x3cc
	// Line 2988, Address: 0x1c81b0, Func Offset: 0x3d0
	// Line 2992, Address: 0x1c81b8, Func Offset: 0x3d8
	// Line 2993, Address: 0x1c81d8, Func Offset: 0x3f8
	// Line 2994, Address: 0x1c81e4, Func Offset: 0x404
	// Line 2995, Address: 0x1c81e8, Func Offset: 0x408
	// Line 2994, Address: 0x1c81ec, Func Offset: 0x40c
	// Line 2995, Address: 0x1c81f0, Func Offset: 0x410
	// Line 2994, Address: 0x1c81f4, Func Offset: 0x414
	// Line 2995, Address: 0x1c81f8, Func Offset: 0x418
	// Line 2996, Address: 0x1c81fc, Func Offset: 0x41c
	// Line 2999, Address: 0x1c821c, Func Offset: 0x43c
	// Line 3000, Address: 0x1c8228, Func Offset: 0x448
	// Line 3001, Address: 0x1c823c, Func Offset: 0x45c
	// Line 3004, Address: 0x1c8240, Func Offset: 0x460
	// Line 3005, Address: 0x1c8248, Func Offset: 0x468
	// Line 3008, Address: 0x1c824c, Func Offset: 0x46c
	// Line 3006, Address: 0x1c8250, Func Offset: 0x470
	// Line 3007, Address: 0x1c8254, Func Offset: 0x474
	// Line 3008, Address: 0x1c8258, Func Offset: 0x478
	// Line 3005, Address: 0x1c8260, Func Offset: 0x480
	// Line 3009, Address: 0x1c8264, Func Offset: 0x484
	// Line 3008, Address: 0x1c8268, Func Offset: 0x488
	// Line 3009, Address: 0x1c826c, Func Offset: 0x48c
	// Line 3006, Address: 0x1c8270, Func Offset: 0x490
	// Line 3007, Address: 0x1c8274, Func Offset: 0x494
	// Line 3005, Address: 0x1c8278, Func Offset: 0x498
	// Line 3009, Address: 0x1c827c, Func Offset: 0x49c
	// Line 3006, Address: 0x1c8284, Func Offset: 0x4a4
	// Line 3007, Address: 0x1c8288, Func Offset: 0x4a8
	// Line 3008, Address: 0x1c828c, Func Offset: 0x4ac
	// Line 3009, Address: 0x1c8294, Func Offset: 0x4b4
	// Line 3010, Address: 0x1c8298, Func Offset: 0x4b8
	// Line 3014, Address: 0x1c82a0, Func Offset: 0x4c0
	// Line 3015, Address: 0x1c82c0, Func Offset: 0x4e0
	// Line 3016, Address: 0x1c82cc, Func Offset: 0x4ec
	// Line 3017, Address: 0x1c82d0, Func Offset: 0x4f0
	// Line 3016, Address: 0x1c82d4, Func Offset: 0x4f4
	// Line 3017, Address: 0x1c82dc, Func Offset: 0x4fc
	// Line 3018, Address: 0x1c82e4, Func Offset: 0x504
	// Line 3021, Address: 0x1c8304, Func Offset: 0x524
	// Line 3022, Address: 0x1c8310, Func Offset: 0x530
	// Line 3023, Address: 0x1c8324, Func Offset: 0x544
	// Line 3026, Address: 0x1c8328, Func Offset: 0x548
	// Line 3027, Address: 0x1c8330, Func Offset: 0x550
	// Line 3030, Address: 0x1c8334, Func Offset: 0x554
	// Line 3028, Address: 0x1c8338, Func Offset: 0x558
	// Line 3029, Address: 0x1c833c, Func Offset: 0x55c
	// Line 3030, Address: 0x1c8340, Func Offset: 0x560
	// Line 3027, Address: 0x1c8348, Func Offset: 0x568
	// Line 3031, Address: 0x1c834c, Func Offset: 0x56c
	// Line 3030, Address: 0x1c8350, Func Offset: 0x570
	// Line 3031, Address: 0x1c8354, Func Offset: 0x574
	// Line 3028, Address: 0x1c8358, Func Offset: 0x578
	// Line 3029, Address: 0x1c835c, Func Offset: 0x57c
	// Line 3027, Address: 0x1c8360, Func Offset: 0x580
	// Line 3031, Address: 0x1c8364, Func Offset: 0x584
	// Line 3028, Address: 0x1c836c, Func Offset: 0x58c
	// Line 3029, Address: 0x1c8370, Func Offset: 0x590
	// Line 3030, Address: 0x1c8374, Func Offset: 0x594
	// Line 3031, Address: 0x1c837c, Func Offset: 0x59c
	// Line 3032, Address: 0x1c8380, Func Offset: 0x5a0
	// Line 3039, Address: 0x1c8388, Func Offset: 0x5a8
	// Line 3040, Address: 0x1c8390, Func Offset: 0x5b0
	// Line 3039, Address: 0x1c8394, Func Offset: 0x5b4
	// Line 3040, Address: 0x1c83a0, Func Offset: 0x5c0
	// Line 3041, Address: 0x1c83ac, Func Offset: 0x5cc
	// Line 3042, Address: 0x1c83b4, Func Offset: 0x5d4
	// Line 3043, Address: 0x1c83b8, Func Offset: 0x5d8
	// Line 3044, Address: 0x1c83c0, Func Offset: 0x5e0
	// Line 3043, Address: 0x1c83c4, Func Offset: 0x5e4
	// Line 3044, Address: 0x1c83c8, Func Offset: 0x5e8
	// Line 3045, Address: 0x1c83d4, Func Offset: 0x5f4
	// Line 3046, Address: 0x1c83dc, Func Offset: 0x5fc
	// Line 3047, Address: 0x1c83e0, Func Offset: 0x600
	// Line 3048, Address: 0x1c83f0, Func Offset: 0x610
	// Line 3055, Address: 0x1c83f8, Func Offset: 0x618
	// Line 3050, Address: 0x1c83fc, Func Offset: 0x61c
	// Line 3051, Address: 0x1c8400, Func Offset: 0x620
	// Line 3052, Address: 0x1c8418, Func Offset: 0x638
	// Line 3053, Address: 0x1c8424, Func Offset: 0x644
	// Line 3054, Address: 0x1c8430, Func Offset: 0x650
	// Line 3055, Address: 0x1c8438, Func Offset: 0x658
	// Line 3063, Address: 0x1c8440, Func Offset: 0x660
	// Line 3066, Address: 0x1c844c, Func Offset: 0x66c
	// Line 3067, Address: 0x1c8470, Func Offset: 0x690
	// Line 3068, Address: 0x1c847c, Func Offset: 0x69c
	// Line 3067, Address: 0x1c848c, Func Offset: 0x6ac
	// Line 3068, Address: 0x1c8490, Func Offset: 0x6b0
	// Line 3071, Address: 0x1c84b8, Func Offset: 0x6d8
	// Line 3068, Address: 0x1c84bc, Func Offset: 0x6dc
	// Line 3071, Address: 0x1c84c0, Func Offset: 0x6e0
	// Line 3072, Address: 0x1c84cc, Func Offset: 0x6ec
	// Line 3073, Address: 0x1c84d4, Func Offset: 0x6f4
	// Line 3075, Address: 0x1c84d8, Func Offset: 0x6f8
	// Line 3076, Address: 0x1c84e8, Func Offset: 0x708
	// Line 3082, Address: 0x1c84f0, Func Offset: 0x710
	// Line 3083, Address: 0x1c84f8, Func Offset: 0x718
	// Line 3082, Address: 0x1c8500, Func Offset: 0x720
	// Line 3083, Address: 0x1c8504, Func Offset: 0x724
	// Line 3082, Address: 0x1c8508, Func Offset: 0x728
	// Line 3083, Address: 0x1c8514, Func Offset: 0x734
	// Line 3082, Address: 0x1c851c, Func Offset: 0x73c
	// Line 3083, Address: 0x1c8520, Func Offset: 0x740
	// Line 3082, Address: 0x1c8524, Func Offset: 0x744
	// Line 3084, Address: 0x1c852c, Func Offset: 0x74c
	// Line 3083, Address: 0x1c8530, Func Offset: 0x750
	// Line 3084, Address: 0x1c8538, Func Offset: 0x758
	// Line 3090, Address: 0x1c8584, Func Offset: 0x7a4
	// Line 3095, Address: 0x1c8588, Func Offset: 0x7a8
	// Line 3091, Address: 0x1c858c, Func Offset: 0x7ac
	// Line 3092, Address: 0x1c8598, Func Offset: 0x7b8
	// Line 3093, Address: 0x1c85a4, Func Offset: 0x7c4
	// Line 3094, Address: 0x1c85b4, Func Offset: 0x7d4
	// Line 3095, Address: 0x1c85c8, Func Offset: 0x7e8
	// Line 3120, Address: 0x1c85d0, Func Offset: 0x7f0
	// Line 3102, Address: 0x1c85d4, Func Offset: 0x7f4
	// Line 3120, Address: 0x1c85d8, Func Offset: 0x7f8
	// Line 3105, Address: 0x1c85dc, Func Offset: 0x7fc
	// Line 3116, Address: 0x1c85e0, Func Offset: 0x800
	// Line 3101, Address: 0x1c85e4, Func Offset: 0x804
	// Line 3120, Address: 0x1c85e8, Func Offset: 0x808
	// Line 3104, Address: 0x1c85ec, Func Offset: 0x80c
	// Line 3117, Address: 0x1c85f0, Func Offset: 0x810
	// Line 3103, Address: 0x1c85f4, Func Offset: 0x814
	// Line 3120, Address: 0x1c85f8, Func Offset: 0x818
	// Line 3106, Address: 0x1c85fc, Func Offset: 0x81c
	// Line 3120, Address: 0x1c8600, Func Offset: 0x820
	// Line 3105, Address: 0x1c8608, Func Offset: 0x828
	// Line 3120, Address: 0x1c860c, Func Offset: 0x82c
	// Line 3104, Address: 0x1c8614, Func Offset: 0x834
	// Line 3103, Address: 0x1c8618, Func Offset: 0x838
	// Line 3119, Address: 0x1c861c, Func Offset: 0x83c
	// Line 3102, Address: 0x1c8620, Func Offset: 0x840
	// Line 3119, Address: 0x1c8624, Func Offset: 0x844
	// Line 3107, Address: 0x1c8628, Func Offset: 0x848
	// Line 3108, Address: 0x1c862c, Func Offset: 0x84c
	// Line 3109, Address: 0x1c8630, Func Offset: 0x850
	// Line 3119, Address: 0x1c8634, Func Offset: 0x854
	// Line 3106, Address: 0x1c8638, Func Offset: 0x858
	// Line 3110, Address: 0x1c863c, Func Offset: 0x85c
	// Line 3119, Address: 0x1c8640, Func Offset: 0x860
	// Line 3107, Address: 0x1c8644, Func Offset: 0x864
	// Line 3110, Address: 0x1c8648, Func Offset: 0x868
	// Line 3111, Address: 0x1c864c, Func Offset: 0x86c
	// Line 3107, Address: 0x1c8650, Func Offset: 0x870
	// Line 3108, Address: 0x1c8654, Func Offset: 0x874
	// Line 3101, Address: 0x1c8658, Func Offset: 0x878
	// Line 3111, Address: 0x1c865c, Func Offset: 0x87c
	// Line 3119, Address: 0x1c8660, Func Offset: 0x880
	// Line 3112, Address: 0x1c8664, Func Offset: 0x884
	// Line 3108, Address: 0x1c8668, Func Offset: 0x888
	// Line 3109, Address: 0x1c866c, Func Offset: 0x88c
	// Line 3112, Address: 0x1c8670, Func Offset: 0x890
	// Line 3120, Address: 0x1c8674, Func Offset: 0x894
	// Line 3104, Address: 0x1c8684, Func Offset: 0x8a4
	// Line 3105, Address: 0x1c8688, Func Offset: 0x8a8
	// Line 3119, Address: 0x1c868c, Func Offset: 0x8ac
	// Line 3106, Address: 0x1c8690, Func Offset: 0x8b0
	// Line 3120, Address: 0x1c8694, Func Offset: 0x8b4
	// Line 3123, Address: 0x1c86a0, Func Offset: 0x8c0
	// Line 3124, Address: 0x1c86c8, Func Offset: 0x8e8
	// Line 3125, Address: 0x1c86d8, Func Offset: 0x8f8
	// Line 3127, Address: 0x1c86e0, Func Offset: 0x900
	// Line 3125, Address: 0x1c86e4, Func Offset: 0x904
	// Line 3126, Address: 0x1c86ec, Func Offset: 0x90c
	// Line 3127, Address: 0x1c86f4, Func Offset: 0x914
	// Line 3126, Address: 0x1c86fc, Func Offset: 0x91c
	// Line 3127, Address: 0x1c8700, Func Offset: 0x920
	// Line 3130, Address: 0x1c8704, Func Offset: 0x924
	// Line 3137, Address: 0x1c8710, Func Offset: 0x930
	// Line 3138, Address: 0x1c8730, Func Offset: 0x950
	// Line 3145, Address: 0x1c873c, Func Offset: 0x95c
	// Line 3147, Address: 0x1c8744, Func Offset: 0x964
	// Line 3146, Address: 0x1c8748, Func Offset: 0x968
	// Line 3148, Address: 0x1c8750, Func Offset: 0x970
	// Line 3145, Address: 0x1c8754, Func Offset: 0x974
	// Line 3148, Address: 0x1c8760, Func Offset: 0x980
	// Line 3146, Address: 0x1c8768, Func Offset: 0x988
	// Line 3148, Address: 0x1c8770, Func Offset: 0x990
	// Line 3146, Address: 0x1c8774, Func Offset: 0x994
	// Line 3148, Address: 0x1c8778, Func Offset: 0x998
	// Line 3149, Address: 0x1c8798, Func Offset: 0x9b8
	// Line 3152, Address: 0x1c87a4, Func Offset: 0x9c4
	// Line 3153, Address: 0x1c87b0, Func Offset: 0x9d0
	// Line 3155, Address: 0x1c87b8, Func Offset: 0x9d8
	// Line 3154, Address: 0x1c87bc, Func Offset: 0x9dc
	// Line 3156, Address: 0x1c87c0, Func Offset: 0x9e0
	// Line 3154, Address: 0x1c87c4, Func Offset: 0x9e4
	// Line 3156, Address: 0x1c87c8, Func Offset: 0x9e8
	// Line 3163, Address: 0x1c87d0, Func Offset: 0x9f0
	// Line 3159, Address: 0x1c87d4, Func Offset: 0x9f4
	// Line 3163, Address: 0x1c87d8, Func Offset: 0x9f8
	// Line 3159, Address: 0x1c87dc, Func Offset: 0x9fc
	// Line 3163, Address: 0x1c87e0, Func Offset: 0xa00
	// Line 3164, Address: 0x1c87f8, Func Offset: 0xa18
	// Line 3163, Address: 0x1c87fc, Func Offset: 0xa1c
	// Line 3164, Address: 0x1c8818, Func Offset: 0xa38
	// Line 3167, Address: 0x1c8824, Func Offset: 0xa44
	// Line 3175, Address: 0x1c8830, Func Offset: 0xa50
	// Line 3174, Address: 0x1c8844, Func Offset: 0xa64
	// Line 3176, Address: 0x1c8848, Func Offset: 0xa68
	// Line 3185, Address: 0x1c8860, Func Offset: 0xa80
	// Line 3183, Address: 0x1c886c, Func Offset: 0xa8c
	// Line 3184, Address: 0x1c8870, Func Offset: 0xa90
	// Line 3186, Address: 0x1c8874, Func Offset: 0xa94
	// Line 3191, Address: 0x1c8878, Func Offset: 0xa98
	// Line 3192, Address: 0x1c889c, Func Offset: 0xabc
	// Line 3195, Address: 0x1c88a8, Func Offset: 0xac8
	// Line 3196, Address: 0x1c88b0, Func Offset: 0xad0
	// Line 3195, Address: 0x1c88b4, Func Offset: 0xad4
	// Line 3196, Address: 0x1c88b8, Func Offset: 0xad8
	// Line 3199, Address: 0x1c88c4, Func Offset: 0xae4
	// Line 3207, Address: 0x1c88d0, Func Offset: 0xaf0
	// Line 3205, Address: 0x1c88d4, Func Offset: 0xaf4
	// Line 3206, Address: 0x1c88d8, Func Offset: 0xaf8
	// Line 3208, Address: 0x1c88dc, Func Offset: 0xafc
	// Line 3211, Address: 0x1c88f4, Func Offset: 0xb14
	// Line 3216, Address: 0x1c88fc, Func Offset: 0xb1c
	// Line 3214, Address: 0x1c8900, Func Offset: 0xb20
	// Line 3215, Address: 0x1c8924, Func Offset: 0xb44
	// Line 3216, Address: 0x1c8938, Func Offset: 0xb58
	// Line 3218, Address: 0x1c8940, Func Offset: 0xb60
	// Line 3222, Address: 0x1c8948, Func Offset: 0xb68
	// Line 3221, Address: 0x1c894c, Func Offset: 0xb6c
	// Line 3222, Address: 0x1c8950, Func Offset: 0xb70
	// Line 3226, Address: 0x1c8958, Func Offset: 0xb78
	// Line 3221, Address: 0x1c895c, Func Offset: 0xb7c
	// Line 3222, Address: 0x1c8960, Func Offset: 0xb80
	// Line 3223, Address: 0x1c8978, Func Offset: 0xb98
	// Line 3224, Address: 0x1c898c, Func Offset: 0xbac
	// Line 3225, Address: 0x1c89a0, Func Offset: 0xbc0
	// Line 3226, Address: 0x1c89b4, Func Offset: 0xbd4
	// Line 3227, Address: 0x1c89bc, Func Offset: 0xbdc
	// Line 3229, Address: 0x1c89c0, Func Offset: 0xbe0
	// Line 3230, Address: 0x1c89c8, Func Offset: 0xbe8
	// Func End, Address: 0x1c89ec, Func Offset: 0xc0c
}

// xSweptSphereToSphere__FP12xSweptSphereP7xSphere
// Start address: 0x1c89f0
int32 xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph)
{
	float32 testdist;
	float32 distzsqr;
	float32 lerp;
	// Line 2837, Address: 0x1c89f0, Func Offset: 0
	// Line 2838, Address: 0x1c8a08, Func Offset: 0x18
	// Line 2843, Address: 0x1c8a14, Func Offset: 0x24
	// Line 2838, Address: 0x1c8a20, Func Offset: 0x30
	// Line 2843, Address: 0x1c8a24, Func Offset: 0x34
	// Line 2838, Address: 0x1c8a38, Func Offset: 0x48
	// Line 2843, Address: 0x1c8a3c, Func Offset: 0x4c
	// Line 2844, Address: 0x1c8a90, Func Offset: 0xa0
	// Line 2843, Address: 0x1c8a98, Func Offset: 0xa8
	// Line 2844, Address: 0x1c8a9c, Func Offset: 0xac
	// Line 2845, Address: 0x1c8aa4, Func Offset: 0xb4
	// Line 2846, Address: 0x1c8ab0, Func Offset: 0xc0
	// Line 2848, Address: 0x1c8ab8, Func Offset: 0xc8
	// Line 2849, Address: 0x1c8abc, Func Offset: 0xcc
	// Line 2848, Address: 0x1c8ac0, Func Offset: 0xd0
	// Line 2849, Address: 0x1c8ac8, Func Offset: 0xd8
	// Line 2850, Address: 0x1c8ad4, Func Offset: 0xe4
	// Line 2851, Address: 0x1c8adc, Func Offset: 0xec
	// Line 2852, Address: 0x1c8ae0, Func Offset: 0xf0
	// Line 2853, Address: 0x1c8af0, Func Offset: 0x100
	// Line 2862, Address: 0x1c8af8, Func Offset: 0x108
	// Line 2857, Address: 0x1c8afc, Func Offset: 0x10c
	// Line 2858, Address: 0x1c8b00, Func Offset: 0x110
	// Line 2857, Address: 0x1c8b04, Func Offset: 0x114
	// Line 2862, Address: 0x1c8b08, Func Offset: 0x118
	// Line 2866, Address: 0x1c8b0c, Func Offset: 0x11c
	// Line 2858, Address: 0x1c8b10, Func Offset: 0x120
	// Line 2860, Address: 0x1c8b18, Func Offset: 0x128
	// Line 2861, Address: 0x1c8b20, Func Offset: 0x130
	// Line 2862, Address: 0x1c8b24, Func Offset: 0x134
	// Line 2861, Address: 0x1c8b2c, Func Offset: 0x13c
	// Line 2862, Address: 0x1c8b30, Func Offset: 0x140
	// Line 2863, Address: 0x1c8b38, Func Offset: 0x148
	// Line 2864, Address: 0x1c8b3c, Func Offset: 0x14c
	// Line 2865, Address: 0x1c8b40, Func Offset: 0x150
	// Line 2866, Address: 0x1c8b44, Func Offset: 0x154
	// Line 2867, Address: 0x1c8b48, Func Offset: 0x158
	// Func End, Address: 0x1c8b50, Func Offset: 0x160
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
	xVec3 xform[4];
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
	// Line 2529, Address: 0x1c8b50, Func Offset: 0
	// Line 2530, Address: 0x1c8b68, Func Offset: 0x18
	// Line 2541, Address: 0x1c8b70, Func Offset: 0x20
	// Line 2543, Address: 0x1c8b78, Func Offset: 0x28
	// Line 2544, Address: 0x1c8b7c, Func Offset: 0x2c
	// Line 2545, Address: 0x1c8b80, Func Offset: 0x30
	// Line 2546, Address: 0x1c8b84, Func Offset: 0x34
	// Line 2547, Address: 0x1c8b88, Func Offset: 0x38
	// Line 2548, Address: 0x1c8b8c, Func Offset: 0x3c
	// Line 2549, Address: 0x1c8b90, Func Offset: 0x40
	// Line 2550, Address: 0x1c8b94, Func Offset: 0x44
	// Line 2551, Address: 0x1c8b98, Func Offset: 0x48
	// Line 2552, Address: 0x1c8b9c, Func Offset: 0x4c
	// Line 2553, Address: 0x1c8ba0, Func Offset: 0x50
	// Line 2554, Address: 0x1c8ba4, Func Offset: 0x54
	// Line 2555, Address: 0x1c8ba8, Func Offset: 0x58
	// Line 2556, Address: 0x1c8bac, Func Offset: 0x5c
	// Line 2557, Address: 0x1c8bb0, Func Offset: 0x60
	// Line 2558, Address: 0x1c8bb4, Func Offset: 0x64
	// Line 2559, Address: 0x1c8bb8, Func Offset: 0x68
	// Line 2560, Address: 0x1c8bbc, Func Offset: 0x6c
	// Line 2561, Address: 0x1c8bc0, Func Offset: 0x70
	// Line 2562, Address: 0x1c8bc4, Func Offset: 0x74
	// Line 2563, Address: 0x1c8bc8, Func Offset: 0x78
	// Line 2564, Address: 0x1c8bcc, Func Offset: 0x7c
	// Line 2565, Address: 0x1c8bd0, Func Offset: 0x80
	// Line 2566, Address: 0x1c8bd4, Func Offset: 0x84
	// Line 2567, Address: 0x1c8bd8, Func Offset: 0x88
	// Line 2568, Address: 0x1c8bdc, Func Offset: 0x8c
	// Line 2569, Address: 0x1c8be0, Func Offset: 0x90
	// Line 2570, Address: 0x1c8be4, Func Offset: 0x94
	// Line 2571, Address: 0x1c8be8, Func Offset: 0x98
	// Line 2572, Address: 0x1c8bec, Func Offset: 0x9c
	// Line 2573, Address: 0x1c8bf0, Func Offset: 0xa0
	// Line 2574, Address: 0x1c8bf4, Func Offset: 0xa4
	// Line 2575, Address: 0x1c8bf8, Func Offset: 0xa8
	// Line 2576, Address: 0x1c8bfc, Func Offset: 0xac
	// Line 2577, Address: 0x1c8c00, Func Offset: 0xb0
	// Line 2578, Address: 0x1c8c04, Func Offset: 0xb4
	// Line 2579, Address: 0x1c8c08, Func Offset: 0xb8
	// Line 2580, Address: 0x1c8c0c, Func Offset: 0xbc
	// Line 2581, Address: 0x1c8c10, Func Offset: 0xc0
	// Line 2582, Address: 0x1c8c14, Func Offset: 0xc4
	// Line 2583, Address: 0x1c8c18, Func Offset: 0xc8
	// Line 2584, Address: 0x1c8c1c, Func Offset: 0xcc
	// Line 2585, Address: 0x1c8c20, Func Offset: 0xd0
	// Line 2586, Address: 0x1c8c24, Func Offset: 0xd4
	// Line 2587, Address: 0x1c8c28, Func Offset: 0xd8
	// Line 2588, Address: 0x1c8c2c, Func Offset: 0xdc
	// Line 2589, Address: 0x1c8c30, Func Offset: 0xe0
	// Line 2590, Address: 0x1c8c34, Func Offset: 0xe4
	// Line 2591, Address: 0x1c8c38, Func Offset: 0xe8
	// Line 2592, Address: 0x1c8c3c, Func Offset: 0xec
	// Line 2593, Address: 0x1c8c40, Func Offset: 0xf0
	// Line 2594, Address: 0x1c8c44, Func Offset: 0xf4
	// Line 2604, Address: 0x1c8c48, Func Offset: 0xf8
	// Line 2605, Address: 0x1c8c4c, Func Offset: 0xfc
	// Line 2606, Address: 0x1c8c50, Func Offset: 0x100
	// Line 2612, Address: 0x1c8d88, Func Offset: 0x238
	// Line 2615, Address: 0x1c8d90, Func Offset: 0x240
	// Line 2628, Address: 0x1c8e84, Func Offset: 0x334
	// Line 2615, Address: 0x1c8e90, Func Offset: 0x340
	// Line 2628, Address: 0x1c8ea0, Func Offset: 0x350
	// Line 2615, Address: 0x1c8ea8, Func Offset: 0x358
	// Line 2628, Address: 0x1c8eb0, Func Offset: 0x360
	// Line 2629, Address: 0x1c8eb8, Func Offset: 0x368
	// Line 2628, Address: 0x1c8ebc, Func Offset: 0x36c
	// Line 2630, Address: 0x1c8ec8, Func Offset: 0x378
	// Line 2629, Address: 0x1c8ecc, Func Offset: 0x37c
	// Line 2630, Address: 0x1c8ed0, Func Offset: 0x380
	// Line 2632, Address: 0x1c8f08, Func Offset: 0x3b8
	// Line 2636, Address: 0x1c8f10, Func Offset: 0x3c0
	// Line 2637, Address: 0x1c8f30, Func Offset: 0x3e0
	// Line 2638, Address: 0x1c8f3c, Func Offset: 0x3ec
	// Line 2637, Address: 0x1c8f4c, Func Offset: 0x3fc
	// Line 2638, Address: 0x1c8f50, Func Offset: 0x400
	// Line 2642, Address: 0x1c8f78, Func Offset: 0x428
	// Line 2638, Address: 0x1c8f7c, Func Offset: 0x42c
	// Line 2642, Address: 0x1c8f80, Func Offset: 0x430
	// Line 2643, Address: 0x1c8f8c, Func Offset: 0x43c
	// Line 2644, Address: 0x1c8f94, Func Offset: 0x444
	// Line 2646, Address: 0x1c8f98, Func Offset: 0x448
	// Line 2647, Address: 0x1c8fa8, Func Offset: 0x458
	// Line 2653, Address: 0x1c8fb0, Func Offset: 0x460
	// Line 2655, Address: 0x1c8fc4, Func Offset: 0x474
	// Line 2656, Address: 0x1c8fc8, Func Offset: 0x478
	// Line 2654, Address: 0x1c8fcc, Func Offset: 0x47c
	// Line 2656, Address: 0x1c8fd0, Func Offset: 0x480
	// Line 2654, Address: 0x1c8fd4, Func Offset: 0x484
	// Line 2657, Address: 0x1c8fd8, Func Offset: 0x488
	// Line 2658, Address: 0x1c8fe0, Func Offset: 0x490
	// Line 2659, Address: 0x1c8fe8, Func Offset: 0x498
	// Line 2660, Address: 0x1c8ff0, Func Offset: 0x4a0
	// Line 2661, Address: 0x1c8ffc, Func Offset: 0x4ac
	// Line 2665, Address: 0x1c9000, Func Offset: 0x4b0
	// Line 2668, Address: 0x1c9038, Func Offset: 0x4e8
	// Line 2669, Address: 0x1c903c, Func Offset: 0x4ec
	// Line 2670, Address: 0x1c9040, Func Offset: 0x4f0
	// Line 2671, Address: 0x1c9044, Func Offset: 0x4f4
	// Line 2672, Address: 0x1c9048, Func Offset: 0x4f8
	// Line 2673, Address: 0x1c904c, Func Offset: 0x4fc
	// Line 2674, Address: 0x1c9050, Func Offset: 0x500
	// Line 2675, Address: 0x1c9054, Func Offset: 0x504
	// Line 2678, Address: 0x1c907c, Func Offset: 0x52c
	// Line 2679, Address: 0x1c9080, Func Offset: 0x530
	// Line 2680, Address: 0x1c9084, Func Offset: 0x534
	// Line 2681, Address: 0x1c9088, Func Offset: 0x538
	// Line 2682, Address: 0x1c908c, Func Offset: 0x53c
	// Line 2683, Address: 0x1c9090, Func Offset: 0x540
	// Line 2684, Address: 0x1c9094, Func Offset: 0x544
	// Line 2685, Address: 0x1c9098, Func Offset: 0x548
	// Line 2687, Address: 0x1c90a0, Func Offset: 0x550
	// Line 2688, Address: 0x1c90a4, Func Offset: 0x554
	// Line 2689, Address: 0x1c90a8, Func Offset: 0x558
	// Line 2690, Address: 0x1c90ac, Func Offset: 0x55c
	// Line 2691, Address: 0x1c90b0, Func Offset: 0x560
	// Line 2692, Address: 0x1c90b4, Func Offset: 0x564
	// Line 2693, Address: 0x1c90b8, Func Offset: 0x568
	// Line 2694, Address: 0x1c90bc, Func Offset: 0x56c
	// Line 2699, Address: 0x1c90c0, Func Offset: 0x570
	// Line 2696, Address: 0x1c90c4, Func Offset: 0x574
	// Line 2699, Address: 0x1c90c8, Func Offset: 0x578
	// Line 2696, Address: 0x1c90cc, Func Offset: 0x57c
	// Line 2698, Address: 0x1c90e0, Func Offset: 0x590
	// Line 2699, Address: 0x1c90e8, Func Offset: 0x598
	// Line 2697, Address: 0x1c90ec, Func Offset: 0x59c
	// Line 2698, Address: 0x1c90f0, Func Offset: 0x5a0
	// Line 2697, Address: 0x1c90f4, Func Offset: 0x5a4
	// Line 2698, Address: 0x1c9108, Func Offset: 0x5b8
	// Line 2699, Address: 0x1c9110, Func Offset: 0x5c0
	// Line 2711, Address: 0x1c9170, Func Offset: 0x620
	// Line 2708, Address: 0x1c9174, Func Offset: 0x624
	// Line 2709, Address: 0x1c9178, Func Offset: 0x628
	// Line 2710, Address: 0x1c9190, Func Offset: 0x640
	// Line 2711, Address: 0x1c91a4, Func Offset: 0x654
	// Line 2713, Address: 0x1c91ac, Func Offset: 0x65c
	// Line 2722, Address: 0x1c91b0, Func Offset: 0x660
	// Line 2721, Address: 0x1c91b4, Func Offset: 0x664
	// Line 2722, Address: 0x1c91b8, Func Offset: 0x668
	// Line 2721, Address: 0x1c91bc, Func Offset: 0x66c
	// Line 2722, Address: 0x1c91c0, Func Offset: 0x670
	// Line 2721, Address: 0x1c91c4, Func Offset: 0x674
	// Line 2717, Address: 0x1c91c8, Func Offset: 0x678
	// Line 2720, Address: 0x1c91cc, Func Offset: 0x67c
	// Line 2722, Address: 0x1c91d0, Func Offset: 0x680
	// Line 2718, Address: 0x1c91d8, Func Offset: 0x688
	// Line 2722, Address: 0x1c91dc, Func Offset: 0x68c
	// Line 2721, Address: 0x1c91e4, Func Offset: 0x694
	// Line 2722, Address: 0x1c91e8, Func Offset: 0x698
	// Line 2721, Address: 0x1c91f8, Func Offset: 0x6a8
	// Line 2722, Address: 0x1c91fc, Func Offset: 0x6ac
	// Line 2725, Address: 0x1c9208, Func Offset: 0x6b8
	// Line 2726, Address: 0x1c9230, Func Offset: 0x6e0
	// Line 2727, Address: 0x1c9240, Func Offset: 0x6f0
	// Line 2729, Address: 0x1c9248, Func Offset: 0x6f8
	// Line 2727, Address: 0x1c924c, Func Offset: 0x6fc
	// Line 2728, Address: 0x1c9254, Func Offset: 0x704
	// Line 2729, Address: 0x1c925c, Func Offset: 0x70c
	// Line 2728, Address: 0x1c9264, Func Offset: 0x714
	// Line 2729, Address: 0x1c9268, Func Offset: 0x718
	// Line 2732, Address: 0x1c926c, Func Offset: 0x71c
	// Line 2739, Address: 0x1c9278, Func Offset: 0x728
	// Line 2740, Address: 0x1c9298, Func Offset: 0x748
	// Line 2747, Address: 0x1c92a4, Func Offset: 0x754
	// Line 2749, Address: 0x1c92ac, Func Offset: 0x75c
	// Line 2748, Address: 0x1c92b0, Func Offset: 0x760
	// Line 2750, Address: 0x1c92b8, Func Offset: 0x768
	// Line 2747, Address: 0x1c92bc, Func Offset: 0x76c
	// Line 2750, Address: 0x1c92c8, Func Offset: 0x778
	// Line 2748, Address: 0x1c92d0, Func Offset: 0x780
	// Line 2750, Address: 0x1c92d8, Func Offset: 0x788
	// Line 2748, Address: 0x1c92dc, Func Offset: 0x78c
	// Line 2750, Address: 0x1c92e0, Func Offset: 0x790
	// Line 2751, Address: 0x1c9300, Func Offset: 0x7b0
	// Line 2754, Address: 0x1c930c, Func Offset: 0x7bc
	// Line 2755, Address: 0x1c9318, Func Offset: 0x7c8
	// Line 2757, Address: 0x1c9320, Func Offset: 0x7d0
	// Line 2756, Address: 0x1c9324, Func Offset: 0x7d4
	// Line 2758, Address: 0x1c9328, Func Offset: 0x7d8
	// Line 2756, Address: 0x1c932c, Func Offset: 0x7dc
	// Line 2758, Address: 0x1c9330, Func Offset: 0x7e0
	// Line 2765, Address: 0x1c9338, Func Offset: 0x7e8
	// Line 2761, Address: 0x1c933c, Func Offset: 0x7ec
	// Line 2765, Address: 0x1c9340, Func Offset: 0x7f0
	// Line 2761, Address: 0x1c9344, Func Offset: 0x7f4
	// Line 2765, Address: 0x1c9348, Func Offset: 0x7f8
	// Line 2766, Address: 0x1c9360, Func Offset: 0x810
	// Line 2765, Address: 0x1c9364, Func Offset: 0x814
	// Line 2766, Address: 0x1c9380, Func Offset: 0x830
	// Line 2769, Address: 0x1c938c, Func Offset: 0x83c
	// Line 2777, Address: 0x1c9398, Func Offset: 0x848
	// Line 2776, Address: 0x1c93ac, Func Offset: 0x85c
	// Line 2778, Address: 0x1c93b0, Func Offset: 0x860
	// Line 2787, Address: 0x1c93c8, Func Offset: 0x878
	// Line 2785, Address: 0x1c93d4, Func Offset: 0x884
	// Line 2786, Address: 0x1c93d8, Func Offset: 0x888
	// Line 2788, Address: 0x1c93dc, Func Offset: 0x88c
	// Line 2793, Address: 0x1c93e0, Func Offset: 0x890
	// Line 2794, Address: 0x1c9404, Func Offset: 0x8b4
	// Line 2797, Address: 0x1c9410, Func Offset: 0x8c0
	// Line 2798, Address: 0x1c9418, Func Offset: 0x8c8
	// Line 2797, Address: 0x1c941c, Func Offset: 0x8cc
	// Line 2798, Address: 0x1c9420, Func Offset: 0x8d0
	// Line 2801, Address: 0x1c942c, Func Offset: 0x8dc
	// Line 2809, Address: 0x1c9438, Func Offset: 0x8e8
	// Line 2807, Address: 0x1c943c, Func Offset: 0x8ec
	// Line 2808, Address: 0x1c9440, Func Offset: 0x8f0
	// Line 2810, Address: 0x1c9444, Func Offset: 0x8f4
	// Line 2813, Address: 0x1c945c, Func Offset: 0x90c
	// Line 2818, Address: 0x1c9464, Func Offset: 0x914
	// Line 2816, Address: 0x1c9468, Func Offset: 0x918
	// Line 2817, Address: 0x1c948c, Func Offset: 0x93c
	// Line 2818, Address: 0x1c94a0, Func Offset: 0x950
	// Line 2820, Address: 0x1c94a8, Func Offset: 0x958
	// Line 2824, Address: 0x1c94b0, Func Offset: 0x960
	// Line 2823, Address: 0x1c94b4, Func Offset: 0x964
	// Line 2824, Address: 0x1c94b8, Func Offset: 0x968
	// Line 2828, Address: 0x1c94c0, Func Offset: 0x970
	// Line 2823, Address: 0x1c94c4, Func Offset: 0x974
	// Line 2824, Address: 0x1c94c8, Func Offset: 0x978
	// Line 2825, Address: 0x1c94e0, Func Offset: 0x990
	// Line 2826, Address: 0x1c94f4, Func Offset: 0x9a4
	// Line 2827, Address: 0x1c9508, Func Offset: 0x9b8
	// Line 2828, Address: 0x1c951c, Func Offset: 0x9cc
	// Line 2829, Address: 0x1c9524, Func Offset: 0x9d4
	// Line 2832, Address: 0x1c9528, Func Offset: 0x9d8
	// Line 2833, Address: 0x1c9530, Func Offset: 0x9e0
	// Func End, Address: 0x1c9538, Func Offset: 0x9e8
}

// xSweptSphereGetResults__FP12xSweptSphere
// Start address: 0x1c9540
void xSweptSphereGetResults(xSweptSphere* sws)
{
	// Line 2477, Address: 0x1c9540, Func Offset: 0
	// Line 2479, Address: 0x1c9548, Func Offset: 0x8
	// Line 2477, Address: 0x1c954c, Func Offset: 0xc
	// Line 2478, Address: 0x1c9550, Func Offset: 0x10
	// Line 2479, Address: 0x1c9558, Func Offset: 0x18
	// Line 2482, Address: 0x1c9564, Func Offset: 0x24
	// Line 2485, Address: 0x1c9574, Func Offset: 0x34
	// Line 2502, Address: 0x1c9578, Func Offset: 0x38
	// Line 2485, Address: 0x1c957c, Func Offset: 0x3c
	// Line 2502, Address: 0x1c9580, Func Offset: 0x40
	// Line 2488, Address: 0x1c9584, Func Offset: 0x44
	// Line 2489, Address: 0x1c959c, Func Offset: 0x5c
	// Line 2490, Address: 0x1c95b4, Func Offset: 0x74
	// Line 2493, Address: 0x1c95d0, Func Offset: 0x90
	// Line 2490, Address: 0x1c95dc, Func Offset: 0x9c
	// Line 2493, Address: 0x1c95e0, Func Offset: 0xa0
	// Line 2490, Address: 0x1c95f4, Func Offset: 0xb4
	// Line 2493, Address: 0x1c95f8, Func Offset: 0xb8
	// Line 2496, Address: 0x1c966c, Func Offset: 0x12c
	// Line 2493, Address: 0x1c9678, Func Offset: 0x138
	// Line 2496, Address: 0x1c967c, Func Offset: 0x13c
	// Line 2493, Address: 0x1c9690, Func Offset: 0x150
	// Line 2496, Address: 0x1c9694, Func Offset: 0x154
	// Line 2499, Address: 0x1c96d4, Func Offset: 0x194
	// Line 2500, Address: 0x1c96e4, Func Offset: 0x1a4
	// Line 2501, Address: 0x1c96f4, Func Offset: 0x1b4
	// Line 2502, Address: 0x1c9700, Func Offset: 0x1c0
	// Line 2508, Address: 0x1c970c, Func Offset: 0x1cc
	// Line 2502, Address: 0x1c9710, Func Offset: 0x1d0
	// Line 2508, Address: 0x1c9714, Func Offset: 0x1d4
	// Line 2502, Address: 0x1c9718, Func Offset: 0x1d8
	// Line 2507, Address: 0x1c9720, Func Offset: 0x1e0
	// Line 2508, Address: 0x1c9728, Func Offset: 0x1e8
	// Line 2507, Address: 0x1c972c, Func Offset: 0x1ec
	// Line 2508, Address: 0x1c9744, Func Offset: 0x204
	// Line 2511, Address: 0x1c9768, Func Offset: 0x228
	// Line 2512, Address: 0x1c9784, Func Offset: 0x244
	// Line 2514, Address: 0x1c9788, Func Offset: 0x248
	// Line 2513, Address: 0x1c978c, Func Offset: 0x24c
	// Line 2514, Address: 0x1c9790, Func Offset: 0x250
	// Line 2513, Address: 0x1c9794, Func Offset: 0x254
	// Line 2514, Address: 0x1c97c0, Func Offset: 0x280
	// Line 2516, Address: 0x1c97cc, Func Offset: 0x28c
	// Line 2517, Address: 0x1c9800, Func Offset: 0x2c0
	// Line 2518, Address: 0x1c9804, Func Offset: 0x2c4
	// Line 2519, Address: 0x1c9810, Func Offset: 0x2d0
	// Line 2522, Address: 0x1c981c, Func Offset: 0x2dc
	// Line 2523, Address: 0x1c9820, Func Offset: 0x2e0
	// Func End, Address: 0x1c9830, Func Offset: 0x2f0
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
	// Line 2407, Address: 0x1c9830, Func Offset: 0
	// Line 2417, Address: 0x1c9834, Func Offset: 0x4
	// Line 2407, Address: 0x1c9838, Func Offset: 0x8
	// Line 2417, Address: 0x1c983c, Func Offset: 0xc
	// Line 2407, Address: 0x1c9840, Func Offset: 0x10
	// Line 2417, Address: 0x1c9844, Func Offset: 0x14
	// Line 2407, Address: 0x1c9848, Func Offset: 0x18
	// Line 2410, Address: 0x1c9860, Func Offset: 0x30
	// Line 2411, Address: 0x1c987c, Func Offset: 0x4c
	// Line 2412, Address: 0x1c9894, Func Offset: 0x64
	// Line 2414, Address: 0x1c9898, Func Offset: 0x68
	// Line 2413, Address: 0x1c98a0, Func Offset: 0x70
	// Line 2415, Address: 0x1c98a8, Func Offset: 0x78
	// Line 2414, Address: 0x1c98b0, Func Offset: 0x80
	// Line 2415, Address: 0x1c98b4, Func Offset: 0x84
	// Line 2413, Address: 0x1c98b8, Func Offset: 0x88
	// Line 2416, Address: 0x1c98bc, Func Offset: 0x8c
	// Line 2417, Address: 0x1c98d4, Func Offset: 0xa4
	// Line 2418, Address: 0x1c98e0, Func Offset: 0xb0
	// Line 2420, Address: 0x1c98e4, Func Offset: 0xb4
	// Line 2421, Address: 0x1c98ec, Func Offset: 0xbc
	// Line 2424, Address: 0x1c98f0, Func Offset: 0xc0
	// Line 2428, Address: 0x1c98f8, Func Offset: 0xc8
	// Line 2424, Address: 0x1c98fc, Func Offset: 0xcc
	// Line 2425, Address: 0x1c9900, Func Offset: 0xd0
	// Line 2426, Address: 0x1c9908, Func Offset: 0xd8
	// Line 2427, Address: 0x1c9910, Func Offset: 0xe0
	// Line 2428, Address: 0x1c9918, Func Offset: 0xe8
	// Line 2429, Address: 0x1c994c, Func Offset: 0x11c
	// Line 2431, Address: 0x1c9950, Func Offset: 0x120
	// Line 2430, Address: 0x1c9954, Func Offset: 0x124
	// Line 2432, Address: 0x1c9958, Func Offset: 0x128
	// Line 2433, Address: 0x1c9960, Func Offset: 0x130
	// Line 2434, Address: 0x1c9968, Func Offset: 0x138
	// Line 2435, Address: 0x1c996c, Func Offset: 0x13c
	// Line 2437, Address: 0x1c9970, Func Offset: 0x140
	// Line 2444, Address: 0x1c9978, Func Offset: 0x148
	// Line 2437, Address: 0x1c997c, Func Offset: 0x14c
	// Line 2444, Address: 0x1c9980, Func Offset: 0x150
	// Line 2437, Address: 0x1c9984, Func Offset: 0x154
	// Line 2438, Address: 0x1c99d8, Func Offset: 0x1a8
	// Line 2439, Address: 0x1c9a38, Func Offset: 0x208
	// Line 2440, Address: 0x1c9a40, Func Offset: 0x210
	// Line 2441, Address: 0x1c9a48, Func Offset: 0x218
	// Line 2444, Address: 0x1c9a4c, Func Offset: 0x21c
	// Line 2456, Address: 0x1c9a58, Func Offset: 0x228
	// Line 2444, Address: 0x1c9a5c, Func Offset: 0x22c
	// Line 2456, Address: 0x1c9a60, Func Offset: 0x230
	// Line 2444, Address: 0x1c9a64, Func Offset: 0x234
	// Line 2447, Address: 0x1c9aec, Func Offset: 0x2bc
	// Line 2448, Address: 0x1c9af4, Func Offset: 0x2c4
	// Line 2449, Address: 0x1c9af8, Func Offset: 0x2c8
	// Line 2453, Address: 0x1c9afc, Func Offset: 0x2cc
	// Line 2454, Address: 0x1c9b14, Func Offset: 0x2e4
	// Line 2456, Address: 0x1c9b2c, Func Offset: 0x2fc
	// Line 2457, Address: 0x1c9b34, Func Offset: 0x304
	// Line 2458, Address: 0x1c9b48, Func Offset: 0x318
	// Line 2460, Address: 0x1c9b84, Func Offset: 0x354
	// Line 2465, Address: 0x1c9bb4, Func Offset: 0x384
	// Func End, Address: 0x1c9bd4, Func Offset: 0x3a4
}

// _rpCollBSPTreeForAllCapsuleLeafNodeIntersections__FP13RpCollBSPTreeP6RwLinefP13RpV3dGradientPFiiPv_iPv
// Start address: 0x1c9be0
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, float32 radius, RpV3dGradient* grad, int32(*callBack)(int32, int32, void*), void* data)
{
	int32 nStack;
	nodeInfo nodeStack[33];
	RwLine lineStack[33];
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
	// Line 2173, Address: 0x1c9be0, Func Offset: 0
	// Line 2187, Address: 0x1c9be4, Func Offset: 0x4
	// Line 2173, Address: 0x1c9be8, Func Offset: 0x8
	// Line 2188, Address: 0x1c9bec, Func Offset: 0xc
	// Line 2173, Address: 0x1c9bf0, Func Offset: 0x10
	// Line 2189, Address: 0x1c9c08, Func Offset: 0x28
	// Line 2173, Address: 0x1c9c0c, Func Offset: 0x2c
	// Line 2185, Address: 0x1c9c18, Func Offset: 0x38
	// Line 2173, Address: 0x1c9c1c, Func Offset: 0x3c
	// Line 2188, Address: 0x1c9c20, Func Offset: 0x40
	// Line 2173, Address: 0x1c9c24, Func Offset: 0x44
	// Line 2189, Address: 0x1c9c28, Func Offset: 0x48
	// Line 2173, Address: 0x1c9c2c, Func Offset: 0x4c
	// Line 2189, Address: 0x1c9c30, Func Offset: 0x50
	// Line 2173, Address: 0x1c9c34, Func Offset: 0x54
	// Line 2189, Address: 0x1c9c38, Func Offset: 0x58
	// Line 2173, Address: 0x1c9c3c, Func Offset: 0x5c
	// Line 2189, Address: 0x1c9c40, Func Offset: 0x60
	// Line 2173, Address: 0x1c9c44, Func Offset: 0x64
	// Line 2185, Address: 0x1c9c74, Func Offset: 0x94
	// Line 2188, Address: 0x1c9c78, Func Offset: 0x98
	// Line 2185, Address: 0x1c9c84, Func Offset: 0xa4
	// Line 2188, Address: 0x1c9c8c, Func Offset: 0xac
	// Line 2193, Address: 0x1c9cb0, Func Offset: 0xd0
	// Line 2197, Address: 0x1c9cbc, Func Offset: 0xdc
	// Line 2198, Address: 0x1c9cc8, Func Offset: 0xe8
	// Line 2200, Address: 0x1c9ce0, Func Offset: 0x100
	// Line 2204, Address: 0x1c9cf8, Func Offset: 0x118
	// Line 2206, Address: 0x1c9d04, Func Offset: 0x124
	// Line 2204, Address: 0x1c9d0c, Func Offset: 0x12c
	// Line 2205, Address: 0x1c9d10, Func Offset: 0x130
	// Line 2204, Address: 0x1c9d1c, Func Offset: 0x13c
	// Line 2205, Address: 0x1c9d20, Func Offset: 0x140
	// Line 2207, Address: 0x1c9d44, Func Offset: 0x164
	// Line 2210, Address: 0x1c9d50, Func Offset: 0x170
	// Line 2212, Address: 0x1c9d60, Func Offset: 0x180
	// Line 2216, Address: 0x1c9d64, Func Offset: 0x184
	// Line 2213, Address: 0x1c9d68, Func Offset: 0x188
	// Line 2214, Address: 0x1c9d6c, Func Offset: 0x18c
	// Line 2215, Address: 0x1c9d70, Func Offset: 0x190
	// Line 2216, Address: 0x1c9d74, Func Offset: 0x194
	// Line 2238, Address: 0x1c9d7c, Func Offset: 0x19c
	// Line 2216, Address: 0x1c9d80, Func Offset: 0x1a0
	// Line 2238, Address: 0x1c9d88, Func Offset: 0x1a8
	// Line 2240, Address: 0x1c9d94, Func Offset: 0x1b4
	// Line 2242, Address: 0x1c9da8, Func Offset: 0x1c8
	// Line 2252, Address: 0x1c9db0, Func Offset: 0x1d0
	// Line 2244, Address: 0x1c9db4, Func Offset: 0x1d4
	// Line 2252, Address: 0x1c9db8, Func Offset: 0x1d8
	// Line 2257, Address: 0x1c9dcc, Func Offset: 0x1ec
	// Line 2258, Address: 0x1c9dd8, Func Offset: 0x1f8
	// Line 2261, Address: 0x1c9df0, Func Offset: 0x210
	// Line 2263, Address: 0x1c9df4, Func Offset: 0x214
	// Line 2264, Address: 0x1c9e00, Func Offset: 0x220
	// Line 2268, Address: 0x1c9e34, Func Offset: 0x254
	// Line 2272, Address: 0x1c9e48, Func Offset: 0x268
	// Line 2275, Address: 0x1c9ea0, Func Offset: 0x2c0
	// Line 2280, Address: 0x1c9ea8, Func Offset: 0x2c8
	// Line 2281, Address: 0x1c9ed8, Func Offset: 0x2f8
	// Line 2282, Address: 0x1c9edc, Func Offset: 0x2fc
	// Line 2280, Address: 0x1c9ee0, Func Offset: 0x300
	// Line 2284, Address: 0x1c9f08, Func Offset: 0x328
	// Line 2287, Address: 0x1c9f10, Func Offset: 0x330
	// Line 2296, Address: 0x1c9f44, Func Offset: 0x364
	// Line 2298, Address: 0x1c9ff8, Func Offset: 0x418
	// Line 2303, Address: 0x1ca004, Func Offset: 0x424
	// Line 2306, Address: 0x1ca060, Func Offset: 0x480
	// Line 2307, Address: 0x1ca068, Func Offset: 0x488
	// Line 2313, Address: 0x1ca070, Func Offset: 0x490
	// Line 2314, Address: 0x1ca0a0, Func Offset: 0x4c0
	// Line 2313, Address: 0x1ca0a4, Func Offset: 0x4c4
	// Line 2315, Address: 0x1ca0a8, Func Offset: 0x4c8
	// Line 2313, Address: 0x1ca0ac, Func Offset: 0x4cc
	// Line 2317, Address: 0x1ca0c4, Func Offset: 0x4e4
	// Line 2318, Address: 0x1ca0d0, Func Offset: 0x4f0
	// Line 2327, Address: 0x1ca104, Func Offset: 0x524
	// Line 2329, Address: 0x1ca1b8, Func Offset: 0x5d8
	// Line 2334, Address: 0x1ca1c4, Func Offset: 0x5e4
	// Line 2337, Address: 0x1ca210, Func Offset: 0x630
	// Line 2343, Address: 0x1ca218, Func Offset: 0x638
	// Line 2344, Address: 0x1ca248, Func Offset: 0x668
	// Line 2345, Address: 0x1ca24c, Func Offset: 0x66c
	// Line 2343, Address: 0x1ca250, Func Offset: 0x670
	// Line 2346, Address: 0x1ca27c, Func Offset: 0x69c
	// Line 2348, Address: 0x1ca284, Func Offset: 0x6a4
	// Line 2357, Address: 0x1ca28c, Func Offset: 0x6ac
	// Line 2361, Address: 0x1ca344, Func Offset: 0x764
	// Line 2363, Address: 0x1ca400, Func Offset: 0x820
	// Line 2368, Address: 0x1ca40c, Func Offset: 0x82c
	// Line 2371, Address: 0x1ca45c, Func Offset: 0x87c
	// Line 2372, Address: 0x1ca464, Func Offset: 0x884
	// Line 2379, Address: 0x1ca46c, Func Offset: 0x88c
	// Line 2380, Address: 0x1ca4a0, Func Offset: 0x8c0
	// Line 2379, Address: 0x1ca4a4, Func Offset: 0x8c4
	// Line 2381, Address: 0x1ca4a8, Func Offset: 0x8c8
	// Line 2379, Address: 0x1ca4ac, Func Offset: 0x8cc
	// Line 2382, Address: 0x1ca4c8, Func Offset: 0x8e8
	// Line 2387, Address: 0x1ca4d4, Func Offset: 0x8f4
	// Line 2391, Address: 0x1ca4e0, Func Offset: 0x900
	// Func End, Address: 0x1ca540, Func Offset: 0x960
}

// xCollisTriHit__FRCQ27xCollis8tri_dataRC14xModelInstance
// Start address: 0x1ca540
xVec3 xCollisTriHit(tri_data& tri, xModelInstance& model)
{
	xMat4x3& m;
	xVec3 v[3];
	RpGeometry* geom;
	xVec3* verts;
	RpTriangle& t;
	int32 i;
	xVec3 r[2];
	xVec3 d;
	xVec3 A;
	// Line 1830, Address: 0x1ca540, Func Offset: 0
	// Line 1836, Address: 0x1ca568, Func Offset: 0x28
	// Line 1832, Address: 0x1ca56c, Func Offset: 0x2c
	// Line 1839, Address: 0x1ca570, Func Offset: 0x30
	// Line 1840, Address: 0x1ca574, Func Offset: 0x34
	// Line 1843, Address: 0x1ca57c, Func Offset: 0x3c
	// Line 1844, Address: 0x1ca584, Func Offset: 0x44
	// Line 1847, Address: 0x1ca588, Func Offset: 0x48
	// Line 1848, Address: 0x1ca590, Func Offset: 0x50
	// Line 1847, Address: 0x1ca5b4, Func Offset: 0x74
	// Line 1850, Address: 0x1ca5c0, Func Offset: 0x80
	// Line 1852, Address: 0x1ca5c4, Func Offset: 0x84
	// Line 1850, Address: 0x1ca5cc, Func Offset: 0x8c
	// Line 1851, Address: 0x1ca5d0, Func Offset: 0x90
	// Line 1850, Address: 0x1ca5d4, Func Offset: 0x94
	// Line 1851, Address: 0x1ca5fc, Func Offset: 0xbc
	// Line 1850, Address: 0x1ca600, Func Offset: 0xc0
	// Line 1851, Address: 0x1ca604, Func Offset: 0xc4
	// Line 1850, Address: 0x1ca620, Func Offset: 0xe0
	// Line 1851, Address: 0x1ca624, Func Offset: 0xe4
	// Line 1852, Address: 0x1ca694, Func Offset: 0x154
	// Line 1855, Address: 0x1ca69c, Func Offset: 0x15c
	// Line 1852, Address: 0x1ca6a4, Func Offset: 0x164
	// Line 1855, Address: 0x1ca6a8, Func Offset: 0x168
	// Line 1856, Address: 0x1ca6cc, Func Offset: 0x18c
	// Line 1857, Address: 0x1ca6dc, Func Offset: 0x19c
	// Line 1855, Address: 0x1ca6ec, Func Offset: 0x1ac
	// Line 1856, Address: 0x1ca6f0, Func Offset: 0x1b0
	// Line 1855, Address: 0x1ca6f4, Func Offset: 0x1b4
	// Line 1857, Address: 0x1ca6f8, Func Offset: 0x1b8
	// Line 1855, Address: 0x1ca6fc, Func Offset: 0x1bc
	// Line 1860, Address: 0x1ca700, Func Offset: 0x1c0
	// Line 1855, Address: 0x1ca704, Func Offset: 0x1c4
	// Line 1861, Address: 0x1ca708, Func Offset: 0x1c8
	// Line 1855, Address: 0x1ca70c, Func Offset: 0x1cc
	// Line 1862, Address: 0x1ca710, Func Offset: 0x1d0
	// Line 1855, Address: 0x1ca714, Func Offset: 0x1d4
	// Line 1863, Address: 0x1ca718, Func Offset: 0x1d8
	// Line 1855, Address: 0x1ca71c, Func Offset: 0x1dc
	// Line 1856, Address: 0x1ca800, Func Offset: 0x2c0
	// Line 1857, Address: 0x1ca8f0, Func Offset: 0x3b0
	// Line 1860, Address: 0x1caa00, Func Offset: 0x4c0
	// Line 1857, Address: 0x1caa04, Func Offset: 0x4c4
	// Line 1860, Address: 0x1caa18, Func Offset: 0x4d8
	// Line 1861, Address: 0x1caa78, Func Offset: 0x538
	// Line 1862, Address: 0x1caac4, Func Offset: 0x584
	// Line 1861, Address: 0x1caac8, Func Offset: 0x588
	// Line 1862, Address: 0x1caacc, Func Offset: 0x58c
	// Line 1863, Address: 0x1cab18, Func Offset: 0x5d8
	// Line 1864, Address: 0x1cab4c, Func Offset: 0x60c
	// Line 1863, Address: 0x1cab50, Func Offset: 0x610
	// Line 1864, Address: 0x1cab90, Func Offset: 0x650
	// Line 1866, Address: 0x1cabb4, Func Offset: 0x674
	// Line 1864, Address: 0x1cabb8, Func Offset: 0x678
	// Line 1866, Address: 0x1cabbc, Func Offset: 0x67c
	// Line 1864, Address: 0x1cabc0, Func Offset: 0x680
	// Line 1866, Address: 0x1cabd4, Func Offset: 0x694
	// Line 1864, Address: 0x1cabd8, Func Offset: 0x698
	// Line 1865, Address: 0x1cabf8, Func Offset: 0x6b8
	// Line 1864, Address: 0x1cabfc, Func Offset: 0x6bc
	// Line 1865, Address: 0x1cac04, Func Offset: 0x6c4
	// Line 1864, Address: 0x1cac08, Func Offset: 0x6c8
	// Line 1865, Address: 0x1cac10, Func Offset: 0x6d0
	// Line 1866, Address: 0x1cac1c, Func Offset: 0x6dc
	// Line 1870, Address: 0x1cad28, Func Offset: 0x7e8
	// Line 1871, Address: 0x1cad40, Func Offset: 0x800
	// Func End, Address: 0x1cad6c, Func Offset: 0x82c
}

// xCollideCalcTri__FRQ27xCollis8tri_dataRC14xModelInstanceRC5xVec3RC5xVec3
// Start address: 0x1cad70
void xCollideCalcTri(tri_data& tri, xModelInstance& model, xVec3& center, xVec3& heading)
{
	xVec3 v[3];
	RpGeometry* geom;
	xVec3* verts;
	RpMorphTarget* mt;
	RpTriangle& t;
	int32 i;
	xVec3 e[3];
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
	// Line 1753, Address: 0x1cad70, Func Offset: 0
	// Line 1756, Address: 0x1cad74, Func Offset: 0x4
	// Line 1753, Address: 0x1cad78, Func Offset: 0x8
	// Line 1757, Address: 0x1cad7c, Func Offset: 0xc
	// Line 1759, Address: 0x1cad84, Func Offset: 0x14
	// Line 1760, Address: 0x1cad88, Func Offset: 0x18
	// Line 1761, Address: 0x1cad8c, Func Offset: 0x1c
	// Line 1763, Address: 0x1cad90, Func Offset: 0x20
	// Line 1764, Address: 0x1cad94, Func Offset: 0x24
	// Line 1763, Address: 0x1cad98, Func Offset: 0x28
	// Line 1764, Address: 0x1cada0, Func Offset: 0x30
	// Line 1765, Address: 0x1cada8, Func Offset: 0x38
	// Line 1770, Address: 0x1cadfc, Func Offset: 0x8c
	// Line 1771, Address: 0x1cae0c, Func Offset: 0x9c
	// Line 1770, Address: 0x1cae10, Func Offset: 0xa0
	// Line 1771, Address: 0x1cae14, Func Offset: 0xa4
	// Line 1772, Address: 0x1cae1c, Func Offset: 0xac
	// Line 1776, Address: 0x1cae28, Func Offset: 0xb8
	// Line 1770, Address: 0x1cae2c, Func Offset: 0xbc
	// Line 1776, Address: 0x1cae30, Func Offset: 0xc0
	// Line 1770, Address: 0x1cae34, Func Offset: 0xc4
	// Line 1771, Address: 0x1cae94, Func Offset: 0x124
	// Line 1772, Address: 0x1caf04, Func Offset: 0x194
	// Line 1776, Address: 0x1caf68, Func Offset: 0x1f8
	// Line 1784, Address: 0x1caf8c, Func Offset: 0x21c
	// Line 1776, Address: 0x1caf90, Func Offset: 0x220
	// Line 1784, Address: 0x1caf94, Func Offset: 0x224
	// Line 1776, Address: 0x1caf98, Func Offset: 0x228
	// Line 1784, Address: 0x1cafb0, Func Offset: 0x240
	// Line 1776, Address: 0x1cafb4, Func Offset: 0x244
	// Line 1777, Address: 0x1caff4, Func Offset: 0x284
	// Line 1776, Address: 0x1cb000, Func Offset: 0x290
	// Line 1777, Address: 0x1cb008, Func Offset: 0x298
	// Line 1776, Address: 0x1cb00c, Func Offset: 0x29c
	// Line 1777, Address: 0x1cb010, Func Offset: 0x2a0
	// Line 1782, Address: 0x1cb030, Func Offset: 0x2c0
	// Line 1783, Address: 0x1cb038, Func Offset: 0x2c8
	// Line 1782, Address: 0x1cb040, Func Offset: 0x2d0
	// Line 1783, Address: 0x1cb054, Func Offset: 0x2e4
	// Line 1782, Address: 0x1cb060, Func Offset: 0x2f0
	// Line 1783, Address: 0x1cb064, Func Offset: 0x2f4
	// Line 1784, Address: 0x1cb06c, Func Offset: 0x2fc
	// Line 1785, Address: 0x1cb0a8, Func Offset: 0x338
	// Line 1792, Address: 0x1cb180, Func Offset: 0x410
	// Line 1793, Address: 0x1cb194, Func Offset: 0x424
	// Line 1794, Address: 0x1cb1a0, Func Offset: 0x430
	// Line 1795, Address: 0x1cb1ac, Func Offset: 0x43c
	// Line 1792, Address: 0x1cb1b0, Func Offset: 0x440
	// Line 1795, Address: 0x1cb1b4, Func Offset: 0x444
	// Line 1792, Address: 0x1cb1b8, Func Offset: 0x448
	// Line 1793, Address: 0x1cb214, Func Offset: 0x4a4
	// Line 1794, Address: 0x1cb284, Func Offset: 0x514
	// Line 1795, Address: 0x1cb2f0, Func Offset: 0x580
	// Line 1796, Address: 0x1cb324, Func Offset: 0x5b4
	// Line 1795, Address: 0x1cb328, Func Offset: 0x5b8
	// Line 1796, Address: 0x1cb32c, Func Offset: 0x5bc
	// Line 1795, Address: 0x1cb330, Func Offset: 0x5c0
	// Line 1796, Address: 0x1cb380, Func Offset: 0x610
	// Line 1798, Address: 0x1cb3a4, Func Offset: 0x634
	// Line 1796, Address: 0x1cb3a8, Func Offset: 0x638
	// Line 1798, Address: 0x1cb3ac, Func Offset: 0x63c
	// Line 1796, Address: 0x1cb3b0, Func Offset: 0x640
	// Line 1798, Address: 0x1cb3c8, Func Offset: 0x658
	// Line 1796, Address: 0x1cb3cc, Func Offset: 0x65c
	// Line 1797, Address: 0x1cb400, Func Offset: 0x690
	// Line 1796, Address: 0x1cb40c, Func Offset: 0x69c
	// Line 1797, Address: 0x1cb418, Func Offset: 0x6a8
	// Line 1798, Address: 0x1cb428, Func Offset: 0x6b8
	// Line 1796, Address: 0x1cb42c, Func Offset: 0x6bc
	// Line 1798, Address: 0x1cb434, Func Offset: 0x6c4
	// Line 1799, Address: 0x1cb478, Func Offset: 0x708
	// Line 1804, Address: 0x1cb568, Func Offset: 0x7f8
	// Line 1805, Address: 0x1cb584, Func Offset: 0x814
	// Line 1804, Address: 0x1cb588, Func Offset: 0x818
	// Line 1805, Address: 0x1cb5e4, Func Offset: 0x874
	// Line 1806, Address: 0x1cb648, Func Offset: 0x8d8
	// Line 1807, Address: 0x1cb66c, Func Offset: 0x8fc
	// Line 1808, Address: 0x1cb6e0, Func Offset: 0x970
	// Line 1809, Address: 0x1cb6f4, Func Offset: 0x984
	// Line 1811, Address: 0x1cb768, Func Offset: 0x9f8
	// Line 1816, Address: 0x1cb7e0, Func Offset: 0xa70
	// Line 1817, Address: 0x1cb804, Func Offset: 0xa94
	// Line 1816, Address: 0x1cb81c, Func Offset: 0xaac
	// Line 1817, Address: 0x1cb884, Func Offset: 0xb14
	// Line 1818, Address: 0x1cb8d8, Func Offset: 0xb68
	// Line 1819, Address: 0x1cb8fc, Func Offset: 0xb8c
	// Line 1820, Address: 0x1cb970, Func Offset: 0xc00
	// Line 1821, Address: 0x1cb984, Func Offset: 0xc14
	// Line 1823, Address: 0x1cb9f8, Func Offset: 0xc88
	// Line 1826, Address: 0x1cba6c, Func Offset: 0xcfc
	// Line 1827, Address: 0x1cba70, Func Offset: 0xd00
	// Func End, Address: 0x1cba78, Func Offset: 0xd08
}

// xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cba80
uint32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll)
{
	// Line 1615, Address: 0x1cba80, Func Offset: 0
	// Line 1626, Address: 0x1cba8c, Func Offset: 0xc
	// Line 1615, Address: 0x1cba90, Func Offset: 0x10
	// Line 1626, Address: 0x1cba94, Func Offset: 0x14
	// Line 1649, Address: 0x1cbab0, Func Offset: 0x30
	// Line 1650, Address: 0x1cbab4, Func Offset: 0x34
	// Line 1649, Address: 0x1cbab8, Func Offset: 0x38
	// Line 1650, Address: 0x1cbabc, Func Offset: 0x3c
	// Line 1652, Address: 0x1cbac4, Func Offset: 0x44
	// Line 1658, Address: 0x1cbac8, Func Offset: 0x48
	// Line 1659, Address: 0x1cbad0, Func Offset: 0x50
	// Line 1658, Address: 0x1cbad4, Func Offset: 0x54
	// Line 1659, Address: 0x1cbadc, Func Offset: 0x5c
	// Line 1661, Address: 0x1cbae0, Func Offset: 0x60
	// Func End, Address: 0x1cbaf0, Func Offset: 0x70
}

// Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3
// Start address: 0x1cbaf0
uint32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB)
{
	xVec3 akA[3];
	xVec3 akB[3];
	float32 afEA[3];
	float32 afEB[3];
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	xVec3 centA;
	xVec3 centB;
	xVec3 kD;
	float32 aafC[3][3];
	float32 aafAbsC[3][3];
	float32 afAD[3];
	float32 fR0;
	float32 fR1;
	float32 fR;
	float32 fR01;
	// Line 1425, Address: 0x1cbaf0, Func Offset: 0
	// Line 1432, Address: 0x1cbaf4, Func Offset: 0x4
	// Line 1425, Address: 0x1cbaf8, Func Offset: 0x8
	// Line 1432, Address: 0x1cbb28, Func Offset: 0x38
	// Line 1438, Address: 0x1cbb34, Func Offset: 0x44
	// Line 1432, Address: 0x1cbb40, Func Offset: 0x50
	// Line 1433, Address: 0x1cbb4c, Func Offset: 0x5c
	// Line 1434, Address: 0x1cbb60, Func Offset: 0x70
	// Line 1435, Address: 0x1cbb74, Func Offset: 0x84
	// Line 1438, Address: 0x1cbb7c, Func Offset: 0x8c
	// Line 1435, Address: 0x1cbb80, Func Offset: 0x90
	// Line 1438, Address: 0x1cbb84, Func Offset: 0x94
	// Line 1435, Address: 0x1cbb88, Func Offset: 0x98
	// Line 1438, Address: 0x1cbb90, Func Offset: 0xa0
	// Line 1435, Address: 0x1cbb94, Func Offset: 0xa4
	// Line 1438, Address: 0x1cbb98, Func Offset: 0xa8
	// Line 1436, Address: 0x1cbb9c, Func Offset: 0xac
	// Line 1438, Address: 0x1cbba0, Func Offset: 0xb0
	// Line 1436, Address: 0x1cbba8, Func Offset: 0xb8
	// Line 1438, Address: 0x1cbbac, Func Offset: 0xbc
	// Line 1436, Address: 0x1cbbb0, Func Offset: 0xc0
	// Line 1438, Address: 0x1cbbb4, Func Offset: 0xc4
	// Line 1436, Address: 0x1cbbb8, Func Offset: 0xc8
	// Line 1437, Address: 0x1cbbc4, Func Offset: 0xd4
	// Line 1438, Address: 0x1cbbdc, Func Offset: 0xec
	// Line 1439, Address: 0x1cbc58, Func Offset: 0x168
	// Line 1440, Address: 0x1cbd10, Func Offset: 0x220
	// Line 1442, Address: 0x1cbdc8, Func Offset: 0x2d8
	// Line 1443, Address: 0x1cbdd8, Func Offset: 0x2e8
	// Line 1442, Address: 0x1cbde0, Func Offset: 0x2f0
	// Line 1444, Address: 0x1cbde4, Func Offset: 0x2f4
	// Line 1442, Address: 0x1cbde8, Func Offset: 0x2f8
	// Line 1443, Address: 0x1cbdf0, Func Offset: 0x300
	// Line 1444, Address: 0x1cbdf8, Func Offset: 0x308
	// Line 1448, Address: 0x1cbdfc, Func Offset: 0x30c
	// Line 1443, Address: 0x1cbe04, Func Offset: 0x314
	// Line 1448, Address: 0x1cbe08, Func Offset: 0x318
	// Line 1443, Address: 0x1cbe10, Func Offset: 0x320
	// Line 1444, Address: 0x1cbe18, Func Offset: 0x328
	// Line 1448, Address: 0x1cbe20, Func Offset: 0x330
	// Line 1444, Address: 0x1cbe24, Func Offset: 0x334
	// Line 1445, Address: 0x1cbe30, Func Offset: 0x340
	// Line 1448, Address: 0x1cbe3c, Func Offset: 0x34c
	// Line 1445, Address: 0x1cbe44, Func Offset: 0x354
	// Line 1448, Address: 0x1cbe4c, Func Offset: 0x35c
	// Line 1445, Address: 0x1cbe50, Func Offset: 0x360
	// Line 1448, Address: 0x1cbe54, Func Offset: 0x364
	// Line 1446, Address: 0x1cbe5c, Func Offset: 0x36c
	// Line 1448, Address: 0x1cbe60, Func Offset: 0x370
	// Line 1446, Address: 0x1cbe70, Func Offset: 0x380
	// Line 1448, Address: 0x1cbe78, Func Offset: 0x388
	// Line 1446, Address: 0x1cbe7c, Func Offset: 0x38c
	// Line 1448, Address: 0x1cbe80, Func Offset: 0x390
	// Line 1446, Address: 0x1cbe84, Func Offset: 0x394
	// Line 1448, Address: 0x1cbe88, Func Offset: 0x398
	// Line 1446, Address: 0x1cbe90, Func Offset: 0x3a0
	// Line 1447, Address: 0x1cbe94, Func Offset: 0x3a4
	// Line 1448, Address: 0x1cbe98, Func Offset: 0x3a8
	// Line 1447, Address: 0x1cbe9c, Func Offset: 0x3ac
	// Line 1448, Address: 0x1cbeac, Func Offset: 0x3bc
	// Line 1449, Address: 0x1cbf18, Func Offset: 0x428
	// Line 1450, Address: 0x1cbfd0, Func Offset: 0x4e0
	// Line 1453, Address: 0x1cc088, Func Offset: 0x598
	// Line 1475, Address: 0x1cc098, Func Offset: 0x5a8
	// Line 1454, Address: 0x1cc0a0, Func Offset: 0x5b0
	// Line 1483, Address: 0x1cc0a8, Func Offset: 0x5b8
	// Line 1453, Address: 0x1cc0ac, Func Offset: 0x5bc
	// Line 1455, Address: 0x1cc0b0, Func Offset: 0x5c0
	// Line 1453, Address: 0x1cc0b4, Func Offset: 0x5c4
	// Line 1475, Address: 0x1cc0bc, Func Offset: 0x5cc
	// Line 1454, Address: 0x1cc0c8, Func Offset: 0x5d8
	// Line 1455, Address: 0x1cc0d0, Func Offset: 0x5e0
	// Line 1475, Address: 0x1cc0d4, Func Offset: 0x5e4
	// Line 1456, Address: 0x1cc0dc, Func Offset: 0x5ec
	// Line 1475, Address: 0x1cc0e0, Func Offset: 0x5f0
	// Line 1454, Address: 0x1cc0e4, Func Offset: 0x5f4
	// Line 1475, Address: 0x1cc0f0, Func Offset: 0x600
	// Line 1455, Address: 0x1cc0f8, Func Offset: 0x608
	// Line 1476, Address: 0x1cc100, Func Offset: 0x610
	// Line 1475, Address: 0x1cc108, Func Offset: 0x618
	// Line 1483, Address: 0x1cc10c, Func Offset: 0x61c
	// Line 1455, Address: 0x1cc114, Func Offset: 0x624
	// Line 1483, Address: 0x1cc120, Func Offset: 0x630
	// Line 1484, Address: 0x1cc124, Func Offset: 0x634
	// Line 1456, Address: 0x1cc128, Func Offset: 0x638
	// Line 1476, Address: 0x1cc12c, Func Offset: 0x63c
	// Line 1457, Address: 0x1cc130, Func Offset: 0x640
	// Line 1484, Address: 0x1cc134, Func Offset: 0x644
	// Line 1457, Address: 0x1cc138, Func Offset: 0x648
	// Line 1456, Address: 0x1cc13c, Func Offset: 0x64c
	// Line 1458, Address: 0x1cc144, Func Offset: 0x654
	// Line 1476, Address: 0x1cc148, Func Offset: 0x658
	// Line 1477, Address: 0x1cc150, Func Offset: 0x660
	// Line 1476, Address: 0x1cc158, Func Offset: 0x668
	// Line 1456, Address: 0x1cc15c, Func Offset: 0x66c
	// Line 1476, Address: 0x1cc168, Func Offset: 0x678
	// Line 1477, Address: 0x1cc170, Func Offset: 0x680
	// Line 1476, Address: 0x1cc174, Func Offset: 0x684
	// Line 1457, Address: 0x1cc17c, Func Offset: 0x68c
	// Line 1477, Address: 0x1cc184, Func Offset: 0x694
	// Line 1458, Address: 0x1cc194, Func Offset: 0x6a4
	// Line 1457, Address: 0x1cc198, Func Offset: 0x6a8
	// Line 1458, Address: 0x1cc1a4, Func Offset: 0x6b4
	// Line 1477, Address: 0x1cc1ac, Func Offset: 0x6bc
	// Line 1458, Address: 0x1cc1b0, Func Offset: 0x6c0
	// Line 1477, Address: 0x1cc1b4, Func Offset: 0x6c4
	// Line 1458, Address: 0x1cc1b8, Func Offset: 0x6c8
	// Line 1477, Address: 0x1cc1c0, Func Offset: 0x6d0
	// Line 1476, Address: 0x1cc1c4, Func Offset: 0x6d4
	// Line 1477, Address: 0x1cc1c8, Func Offset: 0x6d8
	// Line 1459, Address: 0x1cc1cc, Func Offset: 0x6dc
	// Line 1460, Address: 0x1cc26c, Func Offset: 0x77c
	// Line 1459, Address: 0x1cc278, Func Offset: 0x788
	// Line 1460, Address: 0x1cc284, Func Offset: 0x794
	// Line 1459, Address: 0x1cc298, Func Offset: 0x7a8
	// Line 1460, Address: 0x1cc2a4, Func Offset: 0x7b4
	// Line 1464, Address: 0x1cc2a8, Func Offset: 0x7b8
	// Line 1465, Address: 0x1cc2ac, Func Offset: 0x7bc
	// Line 1478, Address: 0x1cc2b0, Func Offset: 0x7c0
	// Line 1459, Address: 0x1cc2b8, Func Offset: 0x7c8
	// Line 1460, Address: 0x1cc2c0, Func Offset: 0x7d0
	// Line 1466, Address: 0x1cc33c, Func Offset: 0x84c
	// Line 1478, Address: 0x1cc340, Func Offset: 0x850
	// Line 1483, Address: 0x1cc344, Func Offset: 0x854
	// Line 1460, Address: 0x1cc348, Func Offset: 0x858
	// Line 1464, Address: 0x1cc354, Func Offset: 0x864
	// Line 1460, Address: 0x1cc358, Func Offset: 0x868
	// Line 1464, Address: 0x1cc364, Func Offset: 0x874
	// Line 1465, Address: 0x1cc368, Func Offset: 0x878
	// Line 1477, Address: 0x1cc36c, Func Offset: 0x87c
	// Line 1460, Address: 0x1cc370, Func Offset: 0x880
	// Line 1465, Address: 0x1cc374, Func Offset: 0x884
	// Line 1478, Address: 0x1cc37c, Func Offset: 0x88c
	// Line 1481, Address: 0x1cc380, Func Offset: 0x890
	// Line 1464, Address: 0x1cc384, Func Offset: 0x894
	// Line 1476, Address: 0x1cc388, Func Offset: 0x898
	// Line 1478, Address: 0x1cc38c, Func Offset: 0x89c
	// Line 1480, Address: 0x1cc390, Func Offset: 0x8a0
	// Line 1475, Address: 0x1cc394, Func Offset: 0x8a4
	// Line 1460, Address: 0x1cc398, Func Offset: 0x8a8
	// Line 1466, Address: 0x1cc39c, Func Offset: 0x8ac
	// Line 1479, Address: 0x1cc3a0, Func Offset: 0x8b0
	// Line 1481, Address: 0x1cc3a4, Func Offset: 0x8b4
	// Line 1480, Address: 0x1cc3a8, Func Offset: 0x8b8
	// Line 1478, Address: 0x1cc3ac, Func Offset: 0x8bc
	// Line 1466, Address: 0x1cc3b0, Func Offset: 0x8c0
	// Line 1478, Address: 0x1cc3b4, Func Offset: 0x8c4
	// Line 1479, Address: 0x1cc3b8, Func Offset: 0x8c8
	// Line 1466, Address: 0x1cc3bc, Func Offset: 0x8cc
	// Line 1479, Address: 0x1cc3c0, Func Offset: 0x8d0
	// Line 1478, Address: 0x1cc3c4, Func Offset: 0x8d4
	// Line 1483, Address: 0x1cc3c8, Func Offset: 0x8d8
	// Line 1480, Address: 0x1cc3cc, Func Offset: 0x8dc
	// Line 1478, Address: 0x1cc3d0, Func Offset: 0x8e0
	// Line 1483, Address: 0x1cc3d8, Func Offset: 0x8e8
	// Line 1478, Address: 0x1cc3dc, Func Offset: 0x8ec
	// Line 1481, Address: 0x1cc3e0, Func Offset: 0x8f0
	// Line 1478, Address: 0x1cc3e4, Func Offset: 0x8f4
	// Line 1482, Address: 0x1cc3e8, Func Offset: 0x8f8
	// Line 1483, Address: 0x1cc3ec, Func Offset: 0x8fc
	// Line 1482, Address: 0x1cc3f8, Func Offset: 0x908
	// Line 1483, Address: 0x1cc3fc, Func Offset: 0x90c
	// Line 1484, Address: 0x1cc410, Func Offset: 0x920
	// Line 1485, Address: 0x1cc418, Func Offset: 0x928
	// Line 1486, Address: 0x1cc424, Func Offset: 0x934
	// Line 1489, Address: 0x1cc430, Func Offset: 0x940
	// Line 1490, Address: 0x1cc440, Func Offset: 0x950
	// Line 1489, Address: 0x1cc44c, Func Offset: 0x95c
	// Line 1490, Address: 0x1cc450, Func Offset: 0x960
	// Line 1489, Address: 0x1cc454, Func Offset: 0x964
	// Line 1490, Address: 0x1cc45c, Func Offset: 0x96c
	// Line 1489, Address: 0x1cc460, Func Offset: 0x970
	// Line 1490, Address: 0x1cc464, Func Offset: 0x974
	// Line 1489, Address: 0x1cc468, Func Offset: 0x978
	// Line 1491, Address: 0x1cc474, Func Offset: 0x984
	// Line 1490, Address: 0x1cc484, Func Offset: 0x994
	// Line 1489, Address: 0x1cc48c, Func Offset: 0x99c
	// Line 1493, Address: 0x1cc490, Func Offset: 0x9a0
	// Line 1491, Address: 0x1cc494, Func Offset: 0x9a4
	// Line 1492, Address: 0x1cc49c, Func Offset: 0x9ac
	// Line 1493, Address: 0x1cc4ac, Func Offset: 0x9bc
	// Line 1490, Address: 0x1cc4b0, Func Offset: 0x9c0
	// Line 1491, Address: 0x1cc4bc, Func Offset: 0x9cc
	// Line 1490, Address: 0x1cc4c4, Func Offset: 0x9d4
	// Line 1494, Address: 0x1cc4c8, Func Offset: 0x9d8
	// Line 1492, Address: 0x1cc4cc, Func Offset: 0x9dc
	// Line 1491, Address: 0x1cc4d4, Func Offset: 0x9e4
	// Line 1494, Address: 0x1cc4e0, Func Offset: 0x9f0
	// Line 1492, Address: 0x1cc4e4, Func Offset: 0x9f4
	// Line 1491, Address: 0x1cc4ec, Func Offset: 0x9fc
	// Line 1495, Address: 0x1cc4f0, Func Offset: 0xa00
	// Line 1492, Address: 0x1cc4f4, Func Offset: 0xa04
	// Line 1493, Address: 0x1cc500, Func Offset: 0xa10
	// Line 1494, Address: 0x1cc504, Func Offset: 0xa14
	// Line 1495, Address: 0x1cc508, Func Offset: 0xa18
	// Line 1492, Address: 0x1cc510, Func Offset: 0xa20
	// Line 1496, Address: 0x1cc514, Func Offset: 0xa24
	// Line 1497, Address: 0x1cc518, Func Offset: 0xa28
	// Line 1498, Address: 0x1cc530, Func Offset: 0xa40
	// Line 1497, Address: 0x1cc534, Func Offset: 0xa44
	// Line 1498, Address: 0x1cc548, Func Offset: 0xa58
	// Line 1496, Address: 0x1cc54c, Func Offset: 0xa5c
	// Line 1499, Address: 0x1cc550, Func Offset: 0xa60
	// Line 1500, Address: 0x1cc55c, Func Offset: 0xa6c
	// Line 1503, Address: 0x1cc568, Func Offset: 0xa78
	// Line 1504, Address: 0x1cc578, Func Offset: 0xa88
	// Line 1503, Address: 0x1cc584, Func Offset: 0xa94
	// Line 1504, Address: 0x1cc588, Func Offset: 0xa98
	// Line 1503, Address: 0x1cc58c, Func Offset: 0xa9c
	// Line 1504, Address: 0x1cc594, Func Offset: 0xaa4
	// Line 1503, Address: 0x1cc598, Func Offset: 0xaa8
	// Line 1504, Address: 0x1cc59c, Func Offset: 0xaac
	// Line 1503, Address: 0x1cc5a0, Func Offset: 0xab0
	// Line 1505, Address: 0x1cc5ac, Func Offset: 0xabc
	// Line 1504, Address: 0x1cc5bc, Func Offset: 0xacc
	// Line 1503, Address: 0x1cc5c4, Func Offset: 0xad4
	// Line 1507, Address: 0x1cc5c8, Func Offset: 0xad8
	// Line 1505, Address: 0x1cc5cc, Func Offset: 0xadc
	// Line 1506, Address: 0x1cc5d4, Func Offset: 0xae4
	// Line 1507, Address: 0x1cc5e4, Func Offset: 0xaf4
	// Line 1504, Address: 0x1cc5e8, Func Offset: 0xaf8
	// Line 1505, Address: 0x1cc5f4, Func Offset: 0xb04
	// Line 1504, Address: 0x1cc5fc, Func Offset: 0xb0c
	// Line 1508, Address: 0x1cc600, Func Offset: 0xb10
	// Line 1506, Address: 0x1cc604, Func Offset: 0xb14
	// Line 1505, Address: 0x1cc60c, Func Offset: 0xb1c
	// Line 1508, Address: 0x1cc618, Func Offset: 0xb28
	// Line 1506, Address: 0x1cc61c, Func Offset: 0xb2c
	// Line 1505, Address: 0x1cc624, Func Offset: 0xb34
	// Line 1509, Address: 0x1cc628, Func Offset: 0xb38
	// Line 1506, Address: 0x1cc62c, Func Offset: 0xb3c
	// Line 1507, Address: 0x1cc638, Func Offset: 0xb48
	// Line 1508, Address: 0x1cc63c, Func Offset: 0xb4c
	// Line 1509, Address: 0x1cc640, Func Offset: 0xb50
	// Line 1506, Address: 0x1cc648, Func Offset: 0xb58
	// Line 1510, Address: 0x1cc64c, Func Offset: 0xb5c
	// Line 1511, Address: 0x1cc650, Func Offset: 0xb60
	// Line 1512, Address: 0x1cc668, Func Offset: 0xb78
	// Line 1511, Address: 0x1cc66c, Func Offset: 0xb7c
	// Line 1512, Address: 0x1cc680, Func Offset: 0xb90
	// Line 1510, Address: 0x1cc684, Func Offset: 0xb94
	// Line 1513, Address: 0x1cc688, Func Offset: 0xb98
	// Line 1514, Address: 0x1cc694, Func Offset: 0xba4
	// Line 1517, Address: 0x1cc6a0, Func Offset: 0xbb0
	// Line 1518, Address: 0x1cc6a8, Func Offset: 0xbb8
	// Line 1517, Address: 0x1cc6b8, Func Offset: 0xbc8
	// Line 1518, Address: 0x1cc6c4, Func Offset: 0xbd4
	// Line 1517, Address: 0x1cc6d0, Func Offset: 0xbe0
	// Line 1518, Address: 0x1cc6d4, Func Offset: 0xbe4
	// Line 1517, Address: 0x1cc6d8, Func Offset: 0xbe8
	// Line 1518, Address: 0x1cc6e0, Func Offset: 0xbf0
	// Line 1519, Address: 0x1cc6e8, Func Offset: 0xbf8
	// Line 1518, Address: 0x1cc6ec, Func Offset: 0xbfc
	// Line 1517, Address: 0x1cc6f0, Func Offset: 0xc00
	// Line 1519, Address: 0x1cc6fc, Func Offset: 0xc0c
	// Line 1517, Address: 0x1cc700, Func Offset: 0xc10
	// Line 1520, Address: 0x1cc704, Func Offset: 0xc14
	// Line 1521, Address: 0x1cc710, Func Offset: 0xc20
	// Line 1524, Address: 0x1cc718, Func Offset: 0xc28
	// Line 1525, Address: 0x1cc720, Func Offset: 0xc30
	// Line 1524, Address: 0x1cc730, Func Offset: 0xc40
	// Line 1525, Address: 0x1cc73c, Func Offset: 0xc4c
	// Line 1524, Address: 0x1cc748, Func Offset: 0xc58
	// Line 1525, Address: 0x1cc74c, Func Offset: 0xc5c
	// Line 1524, Address: 0x1cc750, Func Offset: 0xc60
	// Line 1525, Address: 0x1cc758, Func Offset: 0xc68
	// Line 1526, Address: 0x1cc760, Func Offset: 0xc70
	// Line 1525, Address: 0x1cc764, Func Offset: 0xc74
	// Line 1524, Address: 0x1cc768, Func Offset: 0xc78
	// Line 1526, Address: 0x1cc774, Func Offset: 0xc84
	// Line 1524, Address: 0x1cc778, Func Offset: 0xc88
	// Line 1527, Address: 0x1cc77c, Func Offset: 0xc8c
	// Line 1528, Address: 0x1cc788, Func Offset: 0xc98
	// Line 1531, Address: 0x1cc790, Func Offset: 0xca0
	// Line 1532, Address: 0x1cc798, Func Offset: 0xca8
	// Line 1531, Address: 0x1cc7a8, Func Offset: 0xcb8
	// Line 1532, Address: 0x1cc7b4, Func Offset: 0xcc4
	// Line 1531, Address: 0x1cc7c0, Func Offset: 0xcd0
	// Line 1532, Address: 0x1cc7c4, Func Offset: 0xcd4
	// Line 1531, Address: 0x1cc7c8, Func Offset: 0xcd8
	// Line 1532, Address: 0x1cc7d0, Func Offset: 0xce0
	// Line 1533, Address: 0x1cc7d8, Func Offset: 0xce8
	// Line 1532, Address: 0x1cc7dc, Func Offset: 0xcec
	// Line 1531, Address: 0x1cc7e0, Func Offset: 0xcf0
	// Line 1533, Address: 0x1cc7ec, Func Offset: 0xcfc
	// Line 1531, Address: 0x1cc7f0, Func Offset: 0xd00
	// Line 1534, Address: 0x1cc7f4, Func Offset: 0xd04
	// Line 1535, Address: 0x1cc800, Func Offset: 0xd10
	// Line 1538, Address: 0x1cc808, Func Offset: 0xd18
	// Line 1539, Address: 0x1cc810, Func Offset: 0xd20
	// Line 1540, Address: 0x1cc81c, Func Offset: 0xd2c
	// Line 1538, Address: 0x1cc824, Func Offset: 0xd34
	// Line 1539, Address: 0x1cc828, Func Offset: 0xd38
	// Line 1540, Address: 0x1cc82c, Func Offset: 0xd3c
	// Line 1538, Address: 0x1cc834, Func Offset: 0xd44
	// Line 1539, Address: 0x1cc83c, Func Offset: 0xd4c
	// Line 1538, Address: 0x1cc844, Func Offset: 0xd54
	// Line 1540, Address: 0x1cc84c, Func Offset: 0xd5c
	// Line 1539, Address: 0x1cc854, Func Offset: 0xd64
	// Line 1540, Address: 0x1cc858, Func Offset: 0xd68
	// Line 1541, Address: 0x1cc85c, Func Offset: 0xd6c
	// Line 1538, Address: 0x1cc860, Func Offset: 0xd70
	// Line 1542, Address: 0x1cc864, Func Offset: 0xd74
	// Line 1543, Address: 0x1cc870, Func Offset: 0xd80
	// Line 1546, Address: 0x1cc878, Func Offset: 0xd88
	// Line 1547, Address: 0x1cc880, Func Offset: 0xd90
	// Line 1548, Address: 0x1cc88c, Func Offset: 0xd9c
	// Line 1546, Address: 0x1cc894, Func Offset: 0xda4
	// Line 1547, Address: 0x1cc898, Func Offset: 0xda8
	// Line 1548, Address: 0x1cc89c, Func Offset: 0xdac
	// Line 1546, Address: 0x1cc8a4, Func Offset: 0xdb4
	// Line 1547, Address: 0x1cc8ac, Func Offset: 0xdbc
	// Line 1546, Address: 0x1cc8b4, Func Offset: 0xdc4
	// Line 1548, Address: 0x1cc8bc, Func Offset: 0xdcc
	// Line 1547, Address: 0x1cc8c4, Func Offset: 0xdd4
	// Line 1548, Address: 0x1cc8c8, Func Offset: 0xdd8
	// Line 1549, Address: 0x1cc8cc, Func Offset: 0xddc
	// Line 1546, Address: 0x1cc8d0, Func Offset: 0xde0
	// Line 1550, Address: 0x1cc8d4, Func Offset: 0xde4
	// Line 1551, Address: 0x1cc8e0, Func Offset: 0xdf0
	// Line 1554, Address: 0x1cc8e8, Func Offset: 0xdf8
	// Line 1555, Address: 0x1cc8f0, Func Offset: 0xe00
	// Line 1556, Address: 0x1cc8fc, Func Offset: 0xe0c
	// Line 1554, Address: 0x1cc904, Func Offset: 0xe14
	// Line 1555, Address: 0x1cc908, Func Offset: 0xe18
	// Line 1556, Address: 0x1cc90c, Func Offset: 0xe1c
	// Line 1554, Address: 0x1cc914, Func Offset: 0xe24
	// Line 1555, Address: 0x1cc91c, Func Offset: 0xe2c
	// Line 1554, Address: 0x1cc924, Func Offset: 0xe34
	// Line 1556, Address: 0x1cc92c, Func Offset: 0xe3c
	// Line 1555, Address: 0x1cc934, Func Offset: 0xe44
	// Line 1556, Address: 0x1cc938, Func Offset: 0xe48
	// Line 1557, Address: 0x1cc93c, Func Offset: 0xe4c
	// Line 1554, Address: 0x1cc940, Func Offset: 0xe50
	// Line 1558, Address: 0x1cc944, Func Offset: 0xe54
	// Line 1559, Address: 0x1cc950, Func Offset: 0xe60
	// Line 1562, Address: 0x1cc958, Func Offset: 0xe68
	// Line 1563, Address: 0x1cc960, Func Offset: 0xe70
	// Line 1564, Address: 0x1cc96c, Func Offset: 0xe7c
	// Line 1562, Address: 0x1cc974, Func Offset: 0xe84
	// Line 1563, Address: 0x1cc978, Func Offset: 0xe88
	// Line 1564, Address: 0x1cc97c, Func Offset: 0xe8c
	// Line 1562, Address: 0x1cc984, Func Offset: 0xe94
	// Line 1563, Address: 0x1cc98c, Func Offset: 0xe9c
	// Line 1562, Address: 0x1cc994, Func Offset: 0xea4
	// Line 1564, Address: 0x1cc99c, Func Offset: 0xeac
	// Line 1563, Address: 0x1cc9a4, Func Offset: 0xeb4
	// Line 1564, Address: 0x1cc9a8, Func Offset: 0xeb8
	// Line 1565, Address: 0x1cc9ac, Func Offset: 0xebc
	// Line 1562, Address: 0x1cc9b0, Func Offset: 0xec0
	// Line 1566, Address: 0x1cc9b4, Func Offset: 0xec4
	// Line 1567, Address: 0x1cc9c0, Func Offset: 0xed0
	// Line 1570, Address: 0x1cc9c8, Func Offset: 0xed8
	// Line 1571, Address: 0x1cc9d0, Func Offset: 0xee0
	// Line 1572, Address: 0x1cc9dc, Func Offset: 0xeec
	// Line 1570, Address: 0x1cc9e4, Func Offset: 0xef4
	// Line 1571, Address: 0x1cc9e8, Func Offset: 0xef8
	// Line 1572, Address: 0x1cc9ec, Func Offset: 0xefc
	// Line 1570, Address: 0x1cc9f4, Func Offset: 0xf04
	// Line 1571, Address: 0x1cc9fc, Func Offset: 0xf0c
	// Line 1570, Address: 0x1cca04, Func Offset: 0xf14
	// Line 1572, Address: 0x1cca0c, Func Offset: 0xf1c
	// Line 1571, Address: 0x1cca14, Func Offset: 0xf24
	// Line 1572, Address: 0x1cca18, Func Offset: 0xf28
	// Line 1573, Address: 0x1cca1c, Func Offset: 0xf2c
	// Line 1570, Address: 0x1cca20, Func Offset: 0xf30
	// Line 1574, Address: 0x1cca24, Func Offset: 0xf34
	// Line 1575, Address: 0x1cca30, Func Offset: 0xf40
	// Line 1578, Address: 0x1cca38, Func Offset: 0xf48
	// Line 1579, Address: 0x1cca40, Func Offset: 0xf50
	// Line 1580, Address: 0x1cca4c, Func Offset: 0xf5c
	// Line 1578, Address: 0x1cca54, Func Offset: 0xf64
	// Line 1579, Address: 0x1cca58, Func Offset: 0xf68
	// Line 1580, Address: 0x1cca5c, Func Offset: 0xf6c
	// Line 1578, Address: 0x1cca64, Func Offset: 0xf74
	// Line 1579, Address: 0x1cca6c, Func Offset: 0xf7c
	// Line 1578, Address: 0x1cca74, Func Offset: 0xf84
	// Line 1580, Address: 0x1cca7c, Func Offset: 0xf8c
	// Line 1579, Address: 0x1cca84, Func Offset: 0xf94
	// Line 1580, Address: 0x1cca88, Func Offset: 0xf98
	// Line 1581, Address: 0x1cca8c, Func Offset: 0xf9c
	// Line 1578, Address: 0x1cca90, Func Offset: 0xfa0
	// Line 1582, Address: 0x1cca94, Func Offset: 0xfa4
	// Line 1583, Address: 0x1ccaa0, Func Offset: 0xfb0
	// Line 1586, Address: 0x1ccaa8, Func Offset: 0xfb8
	// Line 1587, Address: 0x1ccab0, Func Offset: 0xfc0
	// Line 1588, Address: 0x1ccabc, Func Offset: 0xfcc
	// Line 1586, Address: 0x1ccac4, Func Offset: 0xfd4
	// Line 1587, Address: 0x1ccac8, Func Offset: 0xfd8
	// Line 1588, Address: 0x1ccacc, Func Offset: 0xfdc
	// Line 1586, Address: 0x1ccad4, Func Offset: 0xfe4
	// Line 1587, Address: 0x1ccadc, Func Offset: 0xfec
	// Line 1586, Address: 0x1ccae4, Func Offset: 0xff4
	// Line 1588, Address: 0x1ccaec, Func Offset: 0xffc
	// Line 1587, Address: 0x1ccaf4, Func Offset: 0x1004
	// Line 1588, Address: 0x1ccaf8, Func Offset: 0x1008
	// Line 1589, Address: 0x1ccafc, Func Offset: 0x100c
	// Line 1586, Address: 0x1ccb00, Func Offset: 0x1010
	// Line 1590, Address: 0x1ccb04, Func Offset: 0x1014
	// Line 1591, Address: 0x1ccb10, Func Offset: 0x1020
	// Line 1594, Address: 0x1ccb18, Func Offset: 0x1028
	// Line 1595, Address: 0x1ccb20, Func Offset: 0x1030
	// Line 1596, Address: 0x1ccb2c, Func Offset: 0x103c
	// Line 1594, Address: 0x1ccb34, Func Offset: 0x1044
	// Line 1595, Address: 0x1ccb38, Func Offset: 0x1048
	// Line 1596, Address: 0x1ccb3c, Func Offset: 0x104c
	// Line 1594, Address: 0x1ccb44, Func Offset: 0x1054
	// Line 1595, Address: 0x1ccb4c, Func Offset: 0x105c
	// Line 1594, Address: 0x1ccb54, Func Offset: 0x1064
	// Line 1596, Address: 0x1ccb5c, Func Offset: 0x106c
	// Line 1595, Address: 0x1ccb64, Func Offset: 0x1074
	// Line 1596, Address: 0x1ccb68, Func Offset: 0x1078
	// Line 1597, Address: 0x1ccb6c, Func Offset: 0x107c
	// Line 1594, Address: 0x1ccb70, Func Offset: 0x1080
	// Line 1598, Address: 0x1ccb74, Func Offset: 0x1084
	// Line 1599, Address: 0x1ccb80, Func Offset: 0x1090
	// Line 1602, Address: 0x1ccb88, Func Offset: 0x1098
	// Line 1603, Address: 0x1ccb90, Func Offset: 0x10a0
	// Line 1604, Address: 0x1ccb9c, Func Offset: 0x10ac
	// Line 1602, Address: 0x1ccba4, Func Offset: 0x10b4
	// Line 1603, Address: 0x1ccba8, Func Offset: 0x10b8
	// Line 1604, Address: 0x1ccbac, Func Offset: 0x10bc
	// Line 1602, Address: 0x1ccbb4, Func Offset: 0x10c4
	// Line 1603, Address: 0x1ccbbc, Func Offset: 0x10cc
	// Line 1602, Address: 0x1ccbc4, Func Offset: 0x10d4
	// Line 1604, Address: 0x1ccbcc, Func Offset: 0x10dc
	// Line 1603, Address: 0x1ccbd4, Func Offset: 0x10e4
	// Line 1604, Address: 0x1ccbd8, Func Offset: 0x10e8
	// Line 1605, Address: 0x1ccbdc, Func Offset: 0x10ec
	// Line 1602, Address: 0x1ccbe0, Func Offset: 0x10f0
	// Line 1606, Address: 0x1ccbe4, Func Offset: 0x10f4
	// Line 1607, Address: 0x1ccbf0, Func Offset: 0x1100
	// Line 1609, Address: 0x1ccbf8, Func Offset: 0x1108
	// Line 1610, Address: 0x1ccc00, Func Offset: 0x1110
	// Func End, Address: 0x1ccc38, Func Offset: 0x1148
}

// xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis
// Start address: 0x1ccc40
uint32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	// Line 1372, Address: 0x1ccc40, Func Offset: 0
	// Line 1378, Address: 0x1ccc50, Func Offset: 0x10
	// Line 1380, Address: 0x1ccc5c, Func Offset: 0x1c
	// Line 1381, Address: 0x1ccc74, Func Offset: 0x34
	// Line 1382, Address: 0x1ccc7c, Func Offset: 0x3c
	// Line 1381, Address: 0x1ccc80, Func Offset: 0x40
	// Line 1382, Address: 0x1ccc84, Func Offset: 0x44
	// Line 1383, Address: 0x1ccc8c, Func Offset: 0x4c
	// Line 1385, Address: 0x1ccc90, Func Offset: 0x50
	// Line 1386, Address: 0x1ccca0, Func Offset: 0x60
	// Line 1387, Address: 0x1cccac, Func Offset: 0x6c
	// Line 1386, Address: 0x1cccb0, Func Offset: 0x70
	// Line 1390, Address: 0x1cccb4, Func Offset: 0x74
	// Line 1392, Address: 0x1cccbc, Func Offset: 0x7c
	// Line 1393, Address: 0x1ccccc, Func Offset: 0x8c
	// Line 1394, Address: 0x1ccce4, Func Offset: 0xa4
	// Line 1395, Address: 0x1ccce8, Func Offset: 0xa8
	// Line 1396, Address: 0x1cccfc, Func Offset: 0xbc
	// Line 1397, Address: 0x1ccd10, Func Offset: 0xd0
	// Line 1398, Address: 0x1ccd2c, Func Offset: 0xec
	// Line 1400, Address: 0x1ccd38, Func Offset: 0xf8
	// Line 1401, Address: 0x1ccd3c, Func Offset: 0xfc
	// Line 1400, Address: 0x1ccd40, Func Offset: 0x100
	// Line 1401, Address: 0x1ccd44, Func Offset: 0x104
	// Line 1403, Address: 0x1ccd64, Func Offset: 0x124
	// Line 1404, Address: 0x1ccd68, Func Offset: 0x128
	// Line 1405, Address: 0x1ccd78, Func Offset: 0x138
	// Line 1407, Address: 0x1ccd80, Func Offset: 0x140
	// Line 1408, Address: 0x1ccd90, Func Offset: 0x150
	// Line 1409, Address: 0x1ccdb4, Func Offset: 0x174
	// Line 1411, Address: 0x1ccdb8, Func Offset: 0x178
	// Line 1412, Address: 0x1ccdbc, Func Offset: 0x17c
	// Line 1411, Address: 0x1ccdc0, Func Offset: 0x180
	// Line 1413, Address: 0x1ccdc8, Func Offset: 0x188
	// Func End, Address: 0x1ccdd8, Func Offset: 0x198
}

// xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
// Start address: 0x1ccde0
int32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls)
{
	RwBBox xb;
	float32 extremumT;
	float32 extremum;
	ParabolaCBData data;
	// Line 659, Address: 0x1ccde0, Func Offset: 0
	// Line 660, Address: 0x1ccdec, Func Offset: 0xc
	// Line 663, Address: 0x1cce08, Func Offset: 0x28
	// Line 662, Address: 0x1cce0c, Func Offset: 0x2c
	// Line 663, Address: 0x1cce10, Func Offset: 0x30
	// Line 669, Address: 0x1cce1c, Func Offset: 0x3c
	// Line 670, Address: 0x1cce34, Func Offset: 0x54
	// Line 671, Address: 0x1cce50, Func Offset: 0x70
	// Line 673, Address: 0x1cce5c, Func Offset: 0x7c
	// Line 674, Address: 0x1cce60, Func Offset: 0x80
	// Line 675, Address: 0x1cce64, Func Offset: 0x84
	// Line 674, Address: 0x1cce68, Func Offset: 0x88
	// Line 677, Address: 0x1cce6c, Func Offset: 0x8c
	// Line 678, Address: 0x1cce88, Func Offset: 0xa8
	// Line 679, Address: 0x1ccea4, Func Offset: 0xc4
	// Line 681, Address: 0x1cceb0, Func Offset: 0xd0
	// Line 682, Address: 0x1cceb4, Func Offset: 0xd4
	// Line 685, Address: 0x1cceb8, Func Offset: 0xd8
	// Line 684, Address: 0x1ccebc, Func Offset: 0xdc
	// Line 682, Address: 0x1ccec0, Func Offset: 0xe0
	// Line 684, Address: 0x1ccec4, Func Offset: 0xe4
	// Line 685, Address: 0x1ccec8, Func Offset: 0xe8
	// Line 684, Address: 0x1ccecc, Func Offset: 0xec
	// Line 685, Address: 0x1cced0, Func Offset: 0xf0
	// Line 684, Address: 0x1cced8, Func Offset: 0xf8
	// Line 685, Address: 0x1ccee4, Func Offset: 0x104
	// Line 684, Address: 0x1ccee8, Func Offset: 0x108
	// Line 685, Address: 0x1cceec, Func Offset: 0x10c
	// Line 686, Address: 0x1ccf04, Func Offset: 0x124
	// Line 687, Address: 0x1ccf1c, Func Offset: 0x13c
	// Line 686, Address: 0x1ccf20, Func Offset: 0x140
	// Line 687, Address: 0x1ccf24, Func Offset: 0x144
	// Line 688, Address: 0x1ccf40, Func Offset: 0x160
	// Line 690, Address: 0x1ccf4c, Func Offset: 0x16c
	// Line 691, Address: 0x1ccf50, Func Offset: 0x170
	// Line 692, Address: 0x1ccf54, Func Offset: 0x174
	// Line 694, Address: 0x1ccf58, Func Offset: 0x178
	// Line 691, Address: 0x1ccf5c, Func Offset: 0x17c
	// Line 694, Address: 0x1ccf60, Func Offset: 0x180
	// Line 696, Address: 0x1ccf94, Func Offset: 0x1b4
	// Line 695, Address: 0x1ccf98, Func Offset: 0x1b8
	// Line 696, Address: 0x1ccfa4, Func Offset: 0x1c4
	// Line 697, Address: 0x1ccfc0, Func Offset: 0x1e0
	// Line 699, Address: 0x1ccfd8, Func Offset: 0x1f8
	// Line 697, Address: 0x1ccfdc, Func Offset: 0x1fc
	// Line 699, Address: 0x1ccfe0, Func Offset: 0x200
	// Line 701, Address: 0x1ccfec, Func Offset: 0x20c
	// Line 702, Address: 0x1cd008, Func Offset: 0x228
	// Line 705, Address: 0x1cd00c, Func Offset: 0x22c
	// Line 708, Address: 0x1cd010, Func Offset: 0x230
	// Line 711, Address: 0x1cd014, Func Offset: 0x234
	// Line 714, Address: 0x1cd018, Func Offset: 0x238
	// Line 708, Address: 0x1cd020, Func Offset: 0x240
	// Line 712, Address: 0x1cd024, Func Offset: 0x244
	// Line 714, Address: 0x1cd028, Func Offset: 0x248
	// Line 712, Address: 0x1cd02c, Func Offset: 0x24c
	// Line 711, Address: 0x1cd030, Func Offset: 0x250
	// Line 712, Address: 0x1cd038, Func Offset: 0x258
	// Line 713, Address: 0x1cd03c, Func Offset: 0x25c
	// Line 714, Address: 0x1cd048, Func Offset: 0x268
	// Line 718, Address: 0x1cd088, Func Offset: 0x2a8
	// Line 719, Address: 0x1cd08c, Func Offset: 0x2ac
	// Line 722, Address: 0x1cd090, Func Offset: 0x2b0
	// Line 724, Address: 0x1cd0ac, Func Offset: 0x2cc
	// Line 722, Address: 0x1cd0b0, Func Offset: 0x2d0
	// Line 724, Address: 0x1cd0c0, Func Offset: 0x2e0
	// Line 726, Address: 0x1cd0c8, Func Offset: 0x2e8
	// Line 727, Address: 0x1cd0d0, Func Offset: 0x2f0
	// Line 734, Address: 0x1cd0e8, Func Offset: 0x308
	// Line 735, Address: 0x1cd0f8, Func Offset: 0x318
	// Line 738, Address: 0x1cd100, Func Offset: 0x320
	// Line 739, Address: 0x1cd108, Func Offset: 0x328
	// Func End, Address: 0x1cd118, Func Offset: 0x338
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
	// Line 518, Address: 0x1cd120, Func Offset: 0
	// Line 524, Address: 0x1cd130, Func Offset: 0x10
	// Line 518, Address: 0x1cd134, Func Offset: 0x14
	// Line 524, Address: 0x1cd138, Func Offset: 0x18
	// Line 518, Address: 0x1cd13c, Func Offset: 0x1c
	// Line 522, Address: 0x1cd148, Func Offset: 0x28
	// Line 518, Address: 0x1cd14c, Func Offset: 0x2c
	// Line 523, Address: 0x1cd174, Func Offset: 0x54
	// Line 524, Address: 0x1cd178, Func Offset: 0x58
	// Line 526, Address: 0x1cd17c, Func Offset: 0x5c
	// Line 524, Address: 0x1cd180, Func Offset: 0x60
	// Line 530, Address: 0x1cd184, Func Offset: 0x64
	// Line 533, Address: 0x1cd194, Func Offset: 0x74
	// Line 534, Address: 0x1cd1a0, Func Offset: 0x80
	// Line 536, Address: 0x1cd1a4, Func Offset: 0x84
	// Line 537, Address: 0x1cd1b0, Func Offset: 0x90
	// Line 538, Address: 0x1cd1b4, Func Offset: 0x94
	// Line 544, Address: 0x1cd1b8, Func Offset: 0x98
	// Line 545, Address: 0x1cd1d4, Func Offset: 0xb4
	// Line 546, Address: 0x1cd208, Func Offset: 0xe8
	// Line 547, Address: 0x1cd21c, Func Offset: 0xfc
	// Line 548, Address: 0x1cd250, Func Offset: 0x130
	// Line 549, Address: 0x1cd264, Func Offset: 0x144
	// Line 550, Address: 0x1cd298, Func Offset: 0x178
	// Line 554, Address: 0x1cd2a4, Func Offset: 0x184
	// Line 563, Address: 0x1cd2bc, Func Offset: 0x19c
	// Line 572, Address: 0x1cd2c0, Func Offset: 0x1a0
	// Line 570, Address: 0x1cd2c8, Func Offset: 0x1a8
	// Line 563, Address: 0x1cd2d0, Func Offset: 0x1b0
	// Line 569, Address: 0x1cd2d4, Func Offset: 0x1b4
	// Line 571, Address: 0x1cd2d8, Func Offset: 0x1b8
	// Line 570, Address: 0x1cd2e0, Func Offset: 0x1c0
	// Line 569, Address: 0x1cd2e4, Func Offset: 0x1c4
	// Line 571, Address: 0x1cd2e8, Func Offset: 0x1c8
	// Line 572, Address: 0x1cd304, Func Offset: 0x1e4
	// Line 575, Address: 0x1cd320, Func Offset: 0x200
	// Line 576, Address: 0x1cd328, Func Offset: 0x208
	// Line 572, Address: 0x1cd32c, Func Offset: 0x20c
	// Line 575, Address: 0x1cd330, Func Offset: 0x210
	// Line 579, Address: 0x1cd334, Func Offset: 0x214
	// Line 585, Address: 0x1cd338, Func Offset: 0x218
	// Line 576, Address: 0x1cd340, Func Offset: 0x220
	// Line 579, Address: 0x1cd348, Func Offset: 0x228
	// Line 576, Address: 0x1cd34c, Func Offset: 0x22c
	// Line 572, Address: 0x1cd350, Func Offset: 0x230
	// Line 575, Address: 0x1cd354, Func Offset: 0x234
	// Line 579, Address: 0x1cd358, Func Offset: 0x238
	// Line 576, Address: 0x1cd35c, Func Offset: 0x23c
	// Line 575, Address: 0x1cd360, Func Offset: 0x240
	// Line 576, Address: 0x1cd364, Func Offset: 0x244
	// Line 575, Address: 0x1cd368, Func Offset: 0x248
	// Line 579, Address: 0x1cd36c, Func Offset: 0x24c
	// Line 575, Address: 0x1cd370, Func Offset: 0x250
	// Line 576, Address: 0x1cd374, Func Offset: 0x254
	// Line 585, Address: 0x1cd378, Func Offset: 0x258
	// Line 579, Address: 0x1cd37c, Func Offset: 0x25c
	// Line 576, Address: 0x1cd384, Func Offset: 0x264
	// Line 579, Address: 0x1cd38c, Func Offset: 0x26c
	// Line 576, Address: 0x1cd398, Func Offset: 0x278
	// Line 579, Address: 0x1cd39c, Func Offset: 0x27c
	// Line 585, Address: 0x1cd3a0, Func Offset: 0x280
	// Line 579, Address: 0x1cd3a4, Func Offset: 0x284
	// Line 585, Address: 0x1cd3b8, Func Offset: 0x298
	// Line 587, Address: 0x1cd3dc, Func Offset: 0x2bc
	// Line 588, Address: 0x1cd3f8, Func Offset: 0x2d8
	// Line 590, Address: 0x1cd408, Func Offset: 0x2e8
	// Line 591, Address: 0x1cd410, Func Offset: 0x2f0
	// Line 592, Address: 0x1cd428, Func Offset: 0x308
	// Line 593, Address: 0x1cd43c, Func Offset: 0x31c
	// Line 594, Address: 0x1cd460, Func Offset: 0x340
	// Line 593, Address: 0x1cd464, Func Offset: 0x344
	// Line 594, Address: 0x1cd470, Func Offset: 0x350
	// Line 595, Address: 0x1cd47c, Func Offset: 0x35c
	// Line 596, Address: 0x1cd494, Func Offset: 0x374
	// Line 604, Address: 0x1cd4a0, Func Offset: 0x380
	// Line 599, Address: 0x1cd4a4, Func Offset: 0x384
	// Line 604, Address: 0x1cd4a8, Func Offset: 0x388
	// Line 599, Address: 0x1cd4ac, Func Offset: 0x38c
	// Line 600, Address: 0x1cd4b4, Func Offset: 0x394
	// Line 599, Address: 0x1cd4bc, Func Offset: 0x39c
	// Line 600, Address: 0x1cd4c0, Func Offset: 0x3a0
	// Line 601, Address: 0x1cd4c4, Func Offset: 0x3a4
	// Line 600, Address: 0x1cd4cc, Func Offset: 0x3ac
	// Line 601, Address: 0x1cd4d0, Func Offset: 0x3b0
	// Line 604, Address: 0x1cd4d4, Func Offset: 0x3b4
	// Line 608, Address: 0x1cd500, Func Offset: 0x3e0
	// Line 609, Address: 0x1cd504, Func Offset: 0x3e4
	// Line 607, Address: 0x1cd50c, Func Offset: 0x3ec
	// Line 609, Address: 0x1cd510, Func Offset: 0x3f0
	// Line 618, Address: 0x1cd514, Func Offset: 0x3f4
	// Line 608, Address: 0x1cd518, Func Offset: 0x3f8
	// Line 611, Address: 0x1cd524, Func Offset: 0x404
	// Line 607, Address: 0x1cd528, Func Offset: 0x408
	// Line 608, Address: 0x1cd52c, Func Offset: 0x40c
	// Line 607, Address: 0x1cd538, Func Offset: 0x418
	// Line 608, Address: 0x1cd53c, Func Offset: 0x41c
	// Line 609, Address: 0x1cd544, Func Offset: 0x424
	// Line 611, Address: 0x1cd548, Func Offset: 0x428
	// Line 609, Address: 0x1cd54c, Func Offset: 0x42c
	// Line 611, Address: 0x1cd554, Func Offset: 0x434
	// Line 612, Address: 0x1cd558, Func Offset: 0x438
	// Line 613, Address: 0x1cd564, Func Offset: 0x444
	// Line 612, Address: 0x1cd56c, Func Offset: 0x44c
	// Line 613, Address: 0x1cd570, Func Offset: 0x450
	// Line 616, Address: 0x1cd580, Func Offset: 0x460
	// Line 617, Address: 0x1cd588, Func Offset: 0x468
	// Line 616, Address: 0x1cd58c, Func Offset: 0x46c
	// Line 617, Address: 0x1cd590, Func Offset: 0x470
	// Line 618, Address: 0x1cd598, Func Offset: 0x478
	// Line 620, Address: 0x1cd5a8, Func Offset: 0x488
	// Line 621, Address: 0x1cd5d4, Func Offset: 0x4b4
	// Line 622, Address: 0x1cd5e0, Func Offset: 0x4c0
	// Line 623, Address: 0x1cd5e8, Func Offset: 0x4c8
	// Line 625, Address: 0x1cd604, Func Offset: 0x4e4
	// Line 626, Address: 0x1cd608, Func Offset: 0x4e8
	// Line 630, Address: 0x1cd63c, Func Offset: 0x51c
	// Line 631, Address: 0x1cd640, Func Offset: 0x520
	// Line 640, Address: 0x1cd64c, Func Offset: 0x52c
	// Line 629, Address: 0x1cd650, Func Offset: 0x530
	// Line 633, Address: 0x1cd654, Func Offset: 0x534
	// Line 630, Address: 0x1cd658, Func Offset: 0x538
	// Line 633, Address: 0x1cd664, Func Offset: 0x544
	// Line 629, Address: 0x1cd668, Func Offset: 0x548
	// Line 630, Address: 0x1cd66c, Func Offset: 0x54c
	// Line 629, Address: 0x1cd678, Func Offset: 0x558
	// Line 630, Address: 0x1cd67c, Func Offset: 0x55c
	// Line 633, Address: 0x1cd684, Func Offset: 0x564
	// Line 631, Address: 0x1cd688, Func Offset: 0x568
	// Line 633, Address: 0x1cd68c, Func Offset: 0x56c
	// Line 631, Address: 0x1cd690, Func Offset: 0x570
	// Line 633, Address: 0x1cd698, Func Offset: 0x578
	// Line 631, Address: 0x1cd69c, Func Offset: 0x57c
	// Line 634, Address: 0x1cd6a0, Func Offset: 0x580
	// Line 633, Address: 0x1cd6a4, Func Offset: 0x584
	// Line 634, Address: 0x1cd6a8, Func Offset: 0x588
	// Line 635, Address: 0x1cd6b0, Func Offset: 0x590
	// Line 634, Address: 0x1cd6b8, Func Offset: 0x598
	// Line 635, Address: 0x1cd6bc, Func Offset: 0x59c
	// Line 638, Address: 0x1cd6cc, Func Offset: 0x5ac
	// Line 639, Address: 0x1cd6d4, Func Offset: 0x5b4
	// Line 638, Address: 0x1cd6dc, Func Offset: 0x5bc
	// Line 640, Address: 0x1cd6e0, Func Offset: 0x5c0
	// Line 642, Address: 0x1cd6e4, Func Offset: 0x5c4
	// Line 639, Address: 0x1cd6e8, Func Offset: 0x5c8
	// Line 640, Address: 0x1cd6ec, Func Offset: 0x5cc
	// Line 642, Address: 0x1cd6f0, Func Offset: 0x5d0
	// Line 643, Address: 0x1cd714, Func Offset: 0x5f4
	// Line 644, Address: 0x1cd720, Func Offset: 0x600
	// Line 645, Address: 0x1cd728, Func Offset: 0x608
	// Line 650, Address: 0x1cd744, Func Offset: 0x624
	// Line 653, Address: 0x1cd748, Func Offset: 0x628
	// Line 654, Address: 0x1cd74c, Func Offset: 0x62c
	// Line 657, Address: 0x1cd75c, Func Offset: 0x63c
	// Line 656, Address: 0x1cd79c, Func Offset: 0x67c
	// Line 657, Address: 0x1cd7a0, Func Offset: 0x680
	// Func End, Address: 0x1cd7a8, Func Offset: 0x688
}

// xParabolaRecenter__FP9xParabolaf
// Start address: 0x1cd7b0
void xParabolaRecenter(xParabola* p, float32 newZeroT)
{
	// Line 503, Address: 0x1cd7b0, Func Offset: 0
	// Line 504, Address: 0x1cd7e0, Func Offset: 0x30
	// Line 503, Address: 0x1cd7e4, Func Offset: 0x34
	// Line 504, Address: 0x1cd7f0, Func Offset: 0x40
	// Line 503, Address: 0x1cd7f4, Func Offset: 0x44
	// Line 505, Address: 0x1cd800, Func Offset: 0x50
	// Line 503, Address: 0x1cd804, Func Offset: 0x54
	// Line 505, Address: 0x1cd808, Func Offset: 0x58
	// Line 506, Address: 0x1cd810, Func Offset: 0x60
	// Line 507, Address: 0x1cd81c, Func Offset: 0x6c
	// Line 508, Address: 0x1cd828, Func Offset: 0x78
	// Line 509, Address: 0x1cd830, Func Offset: 0x80
	// Func End, Address: 0x1cd838, Func Offset: 0x88
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
	// Line 406, Address: 0x1cd840, Func Offset: 0
	// Line 409, Address: 0x1cd864, Func Offset: 0x24
	// Line 415, Address: 0x1cd868, Func Offset: 0x28
	// Line 417, Address: 0x1cd8b0, Func Offset: 0x70
	// Line 424, Address: 0x1cd8b8, Func Offset: 0x78
	// Line 418, Address: 0x1cd8bc, Func Offset: 0x7c
	// Line 422, Address: 0x1cd8e0, Func Offset: 0xa0
	// Line 421, Address: 0x1cd8e4, Func Offset: 0xa4
	// Line 422, Address: 0x1cd8e8, Func Offset: 0xa8
	// Line 424, Address: 0x1cd8ec, Func Offset: 0xac
	// Line 426, Address: 0x1cd8f4, Func Offset: 0xb4
	// Line 431, Address: 0x1cd8f8, Func Offset: 0xb8
	// Line 426, Address: 0x1cd8fc, Func Offset: 0xbc
	// Line 431, Address: 0x1cd900, Func Offset: 0xc0
	// Line 426, Address: 0x1cd904, Func Offset: 0xc4
	// Line 431, Address: 0x1cd908, Func Offset: 0xc8
	// Line 426, Address: 0x1cd914, Func Offset: 0xd4
	// Line 431, Address: 0x1cd924, Func Offset: 0xe4
	// Line 426, Address: 0x1cd92c, Func Offset: 0xec
	// Line 431, Address: 0x1cd930, Func Offset: 0xf0
	// Line 432, Address: 0x1cd954, Func Offset: 0x114
	// Line 435, Address: 0x1cd958, Func Offset: 0x118
	// Line 434, Address: 0x1cd95c, Func Offset: 0x11c
	// Line 435, Address: 0x1cd960, Func Offset: 0x120
	// Line 432, Address: 0x1cd964, Func Offset: 0x124
	// Line 434, Address: 0x1cd96c, Func Offset: 0x12c
	// Line 435, Address: 0x1cd978, Func Offset: 0x138
	// Line 437, Address: 0x1cd97c, Func Offset: 0x13c
	// Line 438, Address: 0x1cd98c, Func Offset: 0x14c
	// Line 440, Address: 0x1cd990, Func Offset: 0x150
	// Line 442, Address: 0x1cd9a8, Func Offset: 0x168
	// Line 443, Address: 0x1cd9c0, Func Offset: 0x180
	// Line 448, Address: 0x1cd9d0, Func Offset: 0x190
	// Line 449, Address: 0x1cd9e0, Func Offset: 0x1a0
	// Line 450, Address: 0x1cda50, Func Offset: 0x210
	// Line 451, Address: 0x1cda60, Func Offset: 0x220
	// Line 452, Address: 0x1cdad0, Func Offset: 0x290
	// Line 453, Address: 0x1cdae0, Func Offset: 0x2a0
	// Line 454, Address: 0x1cdb50, Func Offset: 0x310
	// Line 456, Address: 0x1cdb60, Func Offset: 0x320
	// Line 459, Address: 0x1cdb64, Func Offset: 0x324
	// Line 456, Address: 0x1cdb68, Func Offset: 0x328
	// Line 458, Address: 0x1cdbd0, Func Offset: 0x390
	// Line 459, Address: 0x1cdbdc, Func Offset: 0x39c
	// Line 458, Address: 0x1cdbe0, Func Offset: 0x3a0
	// Line 459, Address: 0x1cdbf0, Func Offset: 0x3b0
	// Line 462, Address: 0x1cdc48, Func Offset: 0x408
	// Line 464, Address: 0x1cdc54, Func Offset: 0x414
	// Line 466, Address: 0x1cdc80, Func Offset: 0x440
	// Line 467, Address: 0x1cdc84, Func Offset: 0x444
	// Line 466, Address: 0x1cdc9c, Func Offset: 0x45c
	// Line 467, Address: 0x1cdca0, Func Offset: 0x460
	// Func End, Address: 0x1cdca8, Func Offset: 0x468
}

// sphereHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1cdcb0
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	xSphereHitsModel_context* context;
	// Line 401, Address: 0x1cdcb0, Func Offset: 0
	// Line 402, Address: 0x1cdcb8, Func Offset: 0x8
	// Func End, Address: 0x1cdccc, Func Offset: 0x1c
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
	// Line 274, Address: 0x1cdcd0, Func Offset: 0
	// Line 291, Address: 0x1cdcd4, Func Offset: 0x4
	// Line 274, Address: 0x1cdcd8, Func Offset: 0x8
	// Line 291, Address: 0x1cdcdc, Func Offset: 0xc
	// Line 274, Address: 0x1cdce0, Func Offset: 0x10
	// Line 291, Address: 0x1cdcec, Func Offset: 0x1c
	// Line 292, Address: 0x1cddc0, Func Offset: 0xf0
	// Line 293, Address: 0x1cdea8, Func Offset: 0x1d8
	// Line 295, Address: 0x1cdf90, Func Offset: 0x2c0
	// Line 294, Address: 0x1cdf94, Func Offset: 0x2c4
	// Line 299, Address: 0x1cdf98, Func Offset: 0x2c8
	// Line 294, Address: 0x1cdf9c, Func Offset: 0x2cc
	// Line 299, Address: 0x1cdfb0, Func Offset: 0x2e0
	// Line 295, Address: 0x1cdfb4, Func Offset: 0x2e4
	// Line 299, Address: 0x1cdfe0, Func Offset: 0x310
	// Line 295, Address: 0x1cdfe4, Func Offset: 0x314
	// Line 296, Address: 0x1cdfe8, Func Offset: 0x318
	// Line 297, Address: 0x1cdfec, Func Offset: 0x31c
	// Line 296, Address: 0x1cdff0, Func Offset: 0x320
	// Line 297, Address: 0x1cdff8, Func Offset: 0x328
	// Line 296, Address: 0x1cdffc, Func Offset: 0x32c
	// Line 297, Address: 0x1ce004, Func Offset: 0x334
	// Line 296, Address: 0x1ce008, Func Offset: 0x338
	// Line 297, Address: 0x1ce00c, Func Offset: 0x33c
	// Line 296, Address: 0x1ce014, Func Offset: 0x344
	// Line 297, Address: 0x1ce01c, Func Offset: 0x34c
	// Line 296, Address: 0x1ce024, Func Offset: 0x354
	// Line 299, Address: 0x1ce02c, Func Offset: 0x35c
	// Line 296, Address: 0x1ce030, Func Offset: 0x360
	// Line 297, Address: 0x1ce034, Func Offset: 0x364
	// Line 296, Address: 0x1ce038, Func Offset: 0x368
	// Line 297, Address: 0x1ce03c, Func Offset: 0x36c
	// Line 299, Address: 0x1ce040, Func Offset: 0x370
	// Line 300, Address: 0x1ce070, Func Offset: 0x3a0
	// Line 301, Address: 0x1ce074, Func Offset: 0x3a4
	// Line 311, Address: 0x1ce088, Func Offset: 0x3b8
	// Line 312, Address: 0x1ce098, Func Offset: 0x3c8
	// Line 321, Address: 0x1ce0a0, Func Offset: 0x3d0
	// Line 322, Address: 0x1ce0ac, Func Offset: 0x3dc
	// Line 324, Address: 0x1ce118, Func Offset: 0x448
	// Line 325, Address: 0x1ce128, Func Offset: 0x458
	// Line 326, Address: 0x1ce194, Func Offset: 0x4c4
	// Line 327, Address: 0x1ce198, Func Offset: 0x4c8
	// Line 328, Address: 0x1ce1a8, Func Offset: 0x4d8
	// Line 329, Address: 0x1ce214, Func Offset: 0x544
	// Line 330, Address: 0x1ce218, Func Offset: 0x548
	// Line 331, Address: 0x1ce228, Func Offset: 0x558
	// Line 332, Address: 0x1ce294, Func Offset: 0x5c4
	// Line 334, Address: 0x1ce298, Func Offset: 0x5c8
	// Line 335, Address: 0x1ce2a0, Func Offset: 0x5d0
	// Func End, Address: 0x1ce2b4, Func Offset: 0x5e4
}

// xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis
// Start address: 0x1ce2c0
uint32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	// Line 183, Address: 0x1ce2c0, Func Offset: 0
	// Line 189, Address: 0x1ce2cc, Func Offset: 0xc
	// Line 183, Address: 0x1ce2d0, Func Offset: 0x10
	// Line 189, Address: 0x1ce2d4, Func Offset: 0x14
	// Line 191, Address: 0x1ce2e8, Func Offset: 0x28
	// Line 192, Address: 0x1ce300, Func Offset: 0x40
	// Line 193, Address: 0x1ce308, Func Offset: 0x48
	// Line 192, Address: 0x1ce30c, Func Offset: 0x4c
	// Line 193, Address: 0x1ce310, Func Offset: 0x50
	// Line 196, Address: 0x1ce318, Func Offset: 0x58
	// Line 197, Address: 0x1ce328, Func Offset: 0x68
	// Line 198, Address: 0x1ce334, Func Offset: 0x74
	// Line 197, Address: 0x1ce338, Func Offset: 0x78
	// Line 201, Address: 0x1ce33c, Func Offset: 0x7c
	// Line 203, Address: 0x1ce344, Func Offset: 0x84
	// Line 204, Address: 0x1ce354, Func Offset: 0x94
	// Line 205, Address: 0x1ce36c, Func Offset: 0xac
	// Line 206, Address: 0x1ce370, Func Offset: 0xb0
	// Line 207, Address: 0x1ce384, Func Offset: 0xc4
	// Line 208, Address: 0x1ce398, Func Offset: 0xd8
	// Line 209, Address: 0x1ce3b4, Func Offset: 0xf4
	// Line 211, Address: 0x1ce3c0, Func Offset: 0x100
	// Line 212, Address: 0x1ce3c4, Func Offset: 0x104
	// Line 211, Address: 0x1ce3c8, Func Offset: 0x108
	// Line 212, Address: 0x1ce3cc, Func Offset: 0x10c
	// Line 214, Address: 0x1ce3ec, Func Offset: 0x12c
	// Line 215, Address: 0x1ce3f0, Func Offset: 0x130
	// Line 216, Address: 0x1ce400, Func Offset: 0x140
	// Line 218, Address: 0x1ce408, Func Offset: 0x148
	// Line 219, Address: 0x1ce418, Func Offset: 0x158
	// Line 220, Address: 0x1ce43c, Func Offset: 0x17c
	// Line 222, Address: 0x1ce440, Func Offset: 0x180
	// Line 223, Address: 0x1ce444, Func Offset: 0x184
	// Line 222, Address: 0x1ce448, Func Offset: 0x188
	// Line 224, Address: 0x1ce450, Func Offset: 0x190
	// Func End, Address: 0x1ce460, Func Offset: 0x1a0
}

// xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis
// Start address: 0x1ce460
uint32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	float32 scale;
	// Line 136, Address: 0x1ce460, Func Offset: 0
	// Line 142, Address: 0x1ce478, Func Offset: 0x18
	// Line 143, Address: 0x1ce48c, Func Offset: 0x2c
	// Line 144, Address: 0x1ce4a4, Func Offset: 0x44
	// Line 145, Address: 0x1ce4ac, Func Offset: 0x4c
	// Line 144, Address: 0x1ce4b0, Func Offset: 0x50
	// Line 145, Address: 0x1ce4b4, Func Offset: 0x54
	// Line 146, Address: 0x1ce4bc, Func Offset: 0x5c
	// Line 148, Address: 0x1ce4c0, Func Offset: 0x60
	// Line 149, Address: 0x1ce4d0, Func Offset: 0x70
	// Line 150, Address: 0x1ce4dc, Func Offset: 0x7c
	// Line 153, Address: 0x1ce4e0, Func Offset: 0x80
	// Line 155, Address: 0x1ce4f0, Func Offset: 0x90
	// Line 156, Address: 0x1ce504, Func Offset: 0xa4
	// Line 157, Address: 0x1ce518, Func Offset: 0xb8
	// Line 158, Address: 0x1ce534, Func Offset: 0xd4
	// Line 159, Address: 0x1ce540, Func Offset: 0xe0
	// Line 160, Address: 0x1ce544, Func Offset: 0xe4
	// Line 159, Address: 0x1ce548, Func Offset: 0xe8
	// Line 160, Address: 0x1ce550, Func Offset: 0xf0
	// Line 163, Address: 0x1ce570, Func Offset: 0x110
	// Line 164, Address: 0x1ce584, Func Offset: 0x124
	// Line 165, Address: 0x1ce598, Func Offset: 0x138
	// Line 166, Address: 0x1ce5b4, Func Offset: 0x154
	// Line 168, Address: 0x1ce5c0, Func Offset: 0x160
	// Line 169, Address: 0x1ce5c4, Func Offset: 0x164
	// Line 168, Address: 0x1ce5c8, Func Offset: 0x168
	// Line 169, Address: 0x1ce5d0, Func Offset: 0x170
	// Line 172, Address: 0x1ce5f0, Func Offset: 0x190
	// Line 173, Address: 0x1ce600, Func Offset: 0x1a0
	// Line 175, Address: 0x1ce608, Func Offset: 0x1a8
	// Line 176, Address: 0x1ce618, Func Offset: 0x1b8
	// Line 177, Address: 0x1ce63c, Func Offset: 0x1dc
	// Line 179, Address: 0x1ce640, Func Offset: 0x1e0
	// Line 180, Address: 0x1ce644, Func Offset: 0x1e4
	// Line 179, Address: 0x1ce648, Func Offset: 0x1e8
	// Line 181, Address: 0x1ce650, Func Offset: 0x1f0
	// Func End, Address: 0x1ce664, Func Offset: 0x204
}

// xCollideInit__FP6xScene
// Start address: 0x1ce670
void xCollideInit(xScene* sc)
{
	// Line 127, Address: 0x1ce670, Func Offset: 0
	// Func End, Address: 0x1ce678, Func Offset: 0x8
}

// xCollideGetCollsIdx__FPC7xCollisPC5xVec3PC7xMat3x3
// Start address: 0x1ce680
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat)
{
	float32 local_x;
	float32 local_z;
	// Line 57, Address: 0x1ce680, Func Offset: 0
	// Line 77, Address: 0x1ce6a0, Func Offset: 0x20
	// Line 78, Address: 0x1ce6b8, Func Offset: 0x38
	// Line 81, Address: 0x1ce6cc, Func Offset: 0x4c
	// Line 83, Address: 0x1ce720, Func Offset: 0xa0
	// Line 87, Address: 0x1ce728, Func Offset: 0xa8
	// Line 92, Address: 0x1ce734, Func Offset: 0xb4
	// Line 87, Address: 0x1ce738, Func Offset: 0xb8
	// Line 92, Address: 0x1ce73c, Func Offset: 0xbc
	// Line 93, Address: 0x1ce740, Func Offset: 0xc0
	// Line 95, Address: 0x1ce748, Func Offset: 0xc8
	// Line 92, Address: 0x1ce74c, Func Offset: 0xcc
	// Line 93, Address: 0x1ce754, Func Offset: 0xd4
	// Line 95, Address: 0x1ce758, Func Offset: 0xd8
	// Line 96, Address: 0x1ce764, Func Offset: 0xe4
	// Line 98, Address: 0x1ce770, Func Offset: 0xf0
	// Line 104, Address: 0x1ce788, Func Offset: 0x108
	// Line 109, Address: 0x1ce7a4, Func Offset: 0x124
	// Line 110, Address: 0x1ce7a8, Func Offset: 0x128
	// Line 112, Address: 0x1ce7b4, Func Offset: 0x134
	// Line 118, Address: 0x1ce7d0, Func Offset: 0x150
	// Line 124, Address: 0x1ce7e8, Func Offset: 0x168
	// Func End, Address: 0x1ce7fc, Func Offset: 0x17c
}

