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

typedef s32(*type_1)(s32, s32, void*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef u32(*type_10)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_15)(RxNodeDefinition*);
typedef RpCollisionTriangle*(*type_16)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef void(*type_18)(RxNodeDefinition*);
typedef s32(*type_20)(RxPipelineNode*);
typedef s32(*type_21)(s32, s32, void*);
typedef void(*type_23)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef s32(*type_25)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_26)(RpClump*, void*);
typedef u32(*type_27)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_28)(u32);
typedef s32(*type_29)(xClumpCollBSPTriangle*, void*);
typedef void(*type_30)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_32)(xBase*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef s8*(*type_35)(u32);
typedef RpWorldSector*(*type_36)(RpIntersection*, RpWorldSector*, void*);
typedef RpAtomic*(*type_37)(RpIntersection*, RpWorldSector*, RpAtomic*, f32, void*);
typedef void(*type_38)(xEnt*, xScene*, f32);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef void(*type_42)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_43)(xEnt*, xVec3*);
typedef void(*type_46)(xEnt*, xScene*, f32, xEntFrame*);
typedef RpAtomic*(*type_47)(RpAtomic*);
typedef void(*type_48)(xEnt*);
typedef u32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef u32(*type_50)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_51)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_55)(xClumpCollBSPTriangle*, void*);
typedef s32(*type_56)(xClumpCollBSPTriangle*, void*);
typedef RpCollisionTriangle*(*type_61)(RpIntersection*, RpCollisionTriangle*, f32, void*);
typedef void(*type_62)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef void(*type_63)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RpWorldSector*(*type_64)(RpWorldSector*);
typedef s32(*type_65)(xClumpCollBSPTriangle*, void*);
typedef void(*type_69)(xMemPool*, void*);
typedef void(*type_73)(RwResEntry*);
typedef RpCollisionTriangle*(*type_76)(RpIntersection*, RpCollisionTriangle*, f32, void*);
typedef s32(*type_83)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpCollisionTriangle*(*type_87)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, f32, void*);
typedef RwObjectHasFrame*(*type_88)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef RpLight* type_2[2];
typedef u8 type_3[2];
typedef RwFrame* type_4[2];
typedef xAnimMultiFileEntry type_5[1];
typedef xVec3 type_6[3];
typedef f32 type_8[128];
typedef f32 type_9[3];
typedef u16 type_11[3];
typedef nodeInfo type_13[33];
typedef f32 type_14[3];
typedef xVec3 type_17[2];
typedef RwLine type_19[33];
typedef f32 type_22[5];
typedef xVec3 type_31[3];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_39[3];
typedef f32 type_41[16];
typedef u16 type_44[3];
typedef xVec3 type_45[2];
typedef u32 type_52[4];
typedef xVec3 type_53[4];
typedef xVec3 type_54[4];
typedef RwTexCoords* type_57[8];
typedef xVec3 type_58[4];
typedef u8 type_59[3];
typedef xVec3 type_60[3];
typedef xCollis type_66[18];
typedef f32 type_67[4];
typedef s8 type_68[4];
typedef s8 type_70[32];
typedef xVec3 type_71[4];
typedef s8 type_72[32];
typedef xVec3 type_74[3];
typedef xVec3 type_75[5];
typedef u8 type_77[3];
typedef f32 type_78[6];
typedef f32 type_79[3];
typedef RxCluster type_80[1];
typedef type_79 type_81[3];
typedef xVec3 type_82[4];
typedef xVec3 type_84[2];
typedef xVec3 type_85[2];
typedef u8 type_86[4];
typedef f32 type_89[3];
typedef type_89 type_90[3];
typedef f32 type_91[2];
typedef f32 type_92[3];
typedef f32 type_93[2];
typedef xVec4 type_94[4];
typedef RwV3d* type_95[3];
typedef xVec3 type_96[8];

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_30 BeforeAnimMatrices;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_30 BeforeAnimMatrices;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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

struct xSweptSphere
{
	xVec3 start;
	xVec3 end;
	f32 radius;
	f32 dist;
	xiMat4x3Union basis;
	xiMat4x3Union invbasis;
	xBox box;
	xQCData qcd;
	f32 boxsize;
	f32 curdist;
	xVec3 contact;
	xVec3 polynorm;
	u32 oid;
	void* optr;
	xModelInstance* mptr;
	s32 hitIt;
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
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_91 BilinearLerp;
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
	type_11 vertIndex;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	s32 index;
	type_95 vertices;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_52 pad;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	f32 gravity;
	f32 minTime;
	f32 maxTime;
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
	type_28 resolvID;
	type_32 base2Name;
	type_35 id2Name;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct ParabolaCBData
{
	xParabola* p;
	xVec3 N;
	f32 d;
	xCollis* colls;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xCapsule
{
	xVec3 start;
	xVec3 end;
	f32 r;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_27 Callback;
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
	type_57 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
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

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct SweptSphereCollParam
{
	RpGeometry* geometry;
	xSweptSphere* sws;
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

struct ConeDepen
{
	xMat4x3 cullfrust;
	xMat4x3 circleBasis;
	xMat4x3 circleInvbasis;
	xConic conic;
	xVec3 start;
	f32 coneCos;
	f32 coneDist;
	f32 coneDist2;
	f32 coneRadius;
	f32 coneHeight;
	xVec3 axis;
	xVec3 coneRight;
	xVec3 coneAt;
	u32 numInterval;
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
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct rxReq
{
};

struct RpV3dGradient
{
	f32 dydx;
	f32 dzdx;
	f32 dxdy;
	f32 dzdy;
	f32 dxdz;
	f32 dydz;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xShadowSimplePoly
{
	type_31 vert;
	xVec3 norm;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_69 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	u16 numPolygons;
	u16 firstPolygon;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	s32 size;
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
	s16 matIndex;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xIsect
{
	u32 flags;
	f32 penned;
	f32 contained;
	f32 lapped;
	xVec3 point;
	xVec3 norm;
	f32 dist;
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
	type_41 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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
	type_3 NumAnims;
	void** RawData;
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
	f32 r;
	f32 h;
};

struct RpCollBSPBranchNode
{
	u16 type;
	u8 leftType;
	u8 rightType;
	u16 leftNode;
	u16 rightNode;
	f32 leftValue;
	f32 rightValue;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct RpCollBSPTree
{
	u32 numLeafNodes;
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
	f32 radius;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xFFX
{
};

union RwSplitBits
{
	f32 nReal;
	s32 nInt;
	u32 nUInt;
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
	u8 ingrid_id;
	type_77 pad;
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
	type_2 light;
	type_4 light_frame;
	s32 memlvl;
};

struct RxOutputSpec
{
	s8* name;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_67 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_93 radius;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
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
	u32 filterAddressing;
	s32 refCount;
};

struct RpSector
{
	s32 type;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	u32 creationAttributes;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_83 eventFunc;
};

struct xJSPHeader
{
	type_68 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_64 renderCallBack;
	RxPipeline* pipeline;
};

struct nodeInfo
{
	u32 type;
	u32 index;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_80 clusters;
};

struct xClumpCollV3dGradient
{
	f32 dydx;
	f32 dzdx;
	f32 dxdy;
	f32 dzdy;
	f32 dxdz;
	f32 dydz;
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
	type_88 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct _class_2
{
	xVec3 norm;
	f32 D;
};

struct _class_3
{
	xVec3* verts;
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

s8* g_xCollis_FMT;
xCapsule* cb_capsule;
f32 cb_dist;
s32 capsuleMethod;
xCapsule* cb_cap;
s32 xcollide_docam;
s32 sSweptSphereHitFound;
xMat4x3* sSwsModelMat;
s32 sSweptSphereEntFound;
u8 sSweptSphereCollType;
xEnt* sSweptSphereMover;
u32 sSweptSphereIgnoreMovers;
type_65 ConicDepenLeafNodeCB;
xMat4x3 g_I3;
u8 xClumpColl_FilterFlags;
type_62 SweptSphereHitsEntCB;
xGrid colls_oso_grid;
xGrid colls_grid;
xGrid npcs_grid;
RpMorphTarget anim_coll_old_mt;
type_1 SweptSphereModelCB;
s32 _rpCollisionGeometryDataOffset;
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

u8 xSphereHitsVCircle(xVec3& sc, f32 sr, xVec3& cc, f32 cr);
u8 xSphereHitsVCylinder(xVec3& sc, f32 sr, xVec3& cc, f32 cr, f32 ch);
u8 xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat);
u8 xSphereHitsBound(xSphere& o, xBound& b);
u8 xSphereHitsCapsule(xVec3& center, f32 radius, xVec3& v1, xVec3& v2, f32 width);
s32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType);
s32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType);
s32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType);
s32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType);
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
s32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat);
s32 SweptSphereModelCB(s32 numTriangles, s32 triOffset, void* data);
s32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env);
s32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data);
RpCollisionTriangle* SweptSphereHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, void* data);
s32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat);
s32 xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph);
s32 xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2);
void xSweptSphereGetResults(xSweptSphere* sws);
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, f32 radius);
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, f32 radius, RpV3dGradient* grad, type_21 callBack, void* data);
xVec3 xCollisTriHit(tri_data& tri, xModelInstance& model);
void xCollideCalcTri(tri_data& tri, xModelInstance& model, xVec3& center, xVec3& heading);
u32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll);
u32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB);
u32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll);
s32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls);
s32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data);
void xParabolaRecenter(xParabola* p, f32 newZeroT);
u32 xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll);
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, f32 dist, void* data);
u32 xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll);
u32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll);
u32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll);
void xCollideInit(xScene* sc);
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat);

// xSphereHitsVCircle__FRC5xVec3fRC5xVec3f
// Start address: 0x1c57f0
u8 xSphereHitsVCircle(xVec3& sc, f32 sr, xVec3& cc, f32 cr)
{
	f32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	f32 max_xzdist;
}

// xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff
// Start address: 0x1c5920
u8 xSphereHitsVCylinder(xVec3& sc, f32 sr, xVec3& cc, f32 cr, f32 ch)
{
	f32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	f32 max_xzdist;
}

// xOBBHitsOBB__FRC4xBoxRC7xMat4x3RC4xBoxRC7xMat4x3
// Start address: 0x1c5a80
u8 xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat)
{
	xVec3& asize;
	xVec3& bsize;
	xVec3 offset;
	xVec3 aoffset;
	xMat3x3 xmat;
	xMat3x3 axmat;
	f32 ar;
	f32 br;
	f32 r;
}

// xSphereHitsBound__FRC7xSphereRC6xBound
// Start address: 0x1c6550
u8 xSphereHitsBound(xSphere& o, xBound& b)
{
}

// xSphereHitsCapsule__FRC5xVec3fRC5xVec3RC5xVec3f
// Start address: 0x1c6870
u8 xSphereHitsCapsule(xVec3& center, f32 radius, xVec3& v1, xVec3& v2, f32 width)
{
	xVec3 d1;
	xVec3 d2;
	f32 r;
	f32 b;
	f32 q;
	f32 d;
	f32 r1;
	f32 r2;
}

// xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6a60
s32 xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType)
{
	s32 envcollfound;
	xRay3 ray;
	f32 one_len;
}

// xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6c10
s32 xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType)
{
	xRay3 ray;
	f32 one_len;
}

// xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6d50
s32 xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType)
{
	xRay3 ray;
	f32 one_len;
}

// xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6ed0
s32 xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, u8 collType)
{
	s32 envcollfound;
	xRay3 ray;
	f32 one_len;
}

// SweptSphereHitsEntCB__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1c70a0
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	xMat4x3* m1;
	xMat4x3* m2;
	u32 result;
	f32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
}

// xSweptSphereToModel__FP12xSweptSphereP8RpAtomicP11RwMatrixTag
// Start address: 0x1c75c0
s32 xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat)
{
	xMat4x3 oldinvbasis;
	RpGeometry* geom;
	RwLine line;
	SweptSphereCollParam isData;
	RpV3dGradient grad;
	s32 i;
	s32 numT;
	RpTriangle* tri;
	RwV3d* vert;
}

// SweptSphereModelCB__FiiPv
// Start address: 0x1c79a0
s32 SweptSphereModelCB(s32 numTriangles, s32 triOffset, void* data)
{
	SweptSphereCollParam* isData;
	RpGeometry* geometry;
	xSweptSphere* sws;
	RwV3d* vertices;
	RpTriangle* triangles;
	s32 triSlot;
	u16* triIndex;
	RpTriangle* tri;
}

// xSweptSphereToEnv__FP12xSweptSphereP4xEnv
// Start address: 0x1c7ab0
s32 xSweptSphereToEnv(xSweptSphere* sws, xEnv* env)
{
	RwLine line;
	xClumpCollV3dGradient grad;
	RpIntersection isx;
}

// SweptSphereLeafNodeCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1c7ca0
s32 SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data)
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
s32 xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat)
{
	s32 i;
	xMat4x3 tmpmat;
	xMat4x3* boxinvbasis;
	f32 dx;
	f32 dy;
	f32 dz;
	f32 rad;
	f32 radsqr;
	f32 testdist;
	f32 invZ;
	xVec3 boxPos;
	xVec3 boxaX;
	xVec3 boxaY;
	xVec3 boxaZ;
	xVec3 boxNorm;
	xVec3 boxA1;
	xVec3 boxA2;
	s32 quadfound;
	f32 boxPlaneDepth;
	f32 daX;
	f32 daY;
	f32 daZ;
	f32 d1;
	f32 d2;
	f32 distzsqr;
	type_75 xform;
	s32 edge_contact_found;
	s32 vert_contact_found;
	f32 edge_contact_lerp;
	xVec3 pt;
	xVec3 cyl;
	xVec3 uu;
	f32 magNsqr;
	f32 dsqr;
	f32 ulen;
	f32 edgedot;
	f32 magCsqr;
	f32 distzsqr;
	f32 lerp;
	f32 invlerp;
}

// xSweptSphereToSphere__FP12xSweptSphereP7xSphere
// Start address: 0x1c89f0
s32 xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph)
{
	f32 testdist;
	f32 distzsqr;
	f32 lerp;
}

// xSweptSphereToTriangle__FP12xSweptSphereP5xVec3P5xVec3P5xVec3
// Start address: 0x1c8b50
s32 xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2)
{
	s32 i;
	f32 rad;
	f32 raddist;
	f32 radsqr;
	f32 startdot;
	f32 enddot;
	f32 testdist;
	f32 invZ;
	type_54 xform;
	xVec3 xnorm;
	xVec3 contact;
	RwV3d vTmp;
	RwV3d vTmp2;
	f32 recipLength;
	f32 lengthSq;
	f32 _result;
	f32 contx;
	f32 conty;
	f32 p0x;
	f32 p0y;
	f32 p1x;
	f32 p1y;
	f32 p2x;
	f32 p2y;
	f32 dot0;
	f32 dot1;
	f32 dot2;
	s32 edge_contact_found;
	s32 vert_contact_found;
	f32 edge_contact_lerp;
	xVec3 pt;
	xVec3 cyl;
	xVec3 uu;
	f32 magNsqr;
	f32 dsqr;
	f32 ulen;
	f32 edgedot;
	f32 magCsqr;
	f32 distzsqr;
	f32 lerp;
	f32 invlerp;
}

// xSweptSphereGetResults__FP12xSweptSphere
// Start address: 0x1c9540
void xSweptSphereGetResults(xSweptSphere* sws)
{
}

// xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
// Start address: 0x1c9830
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, f32 radius)
{
	f32 dx;
	f32 dy;
	f32 dz;
	f32 invmag;
	xCapsule tmpC;
}

// _rpCollBSPTreeForAllCapsuleLeafNodeIntersections__FP13RpCollBSPTreeP6RwLinefP13RpV3dGradientPFiiPv_iPv
// Start address: 0x1c9be0
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, f32 radius, RpV3dGradient* grad, type_21 callBack, void* data)
{
	s32 nStack;
	type_13 nodeStack;
	type_19 lineStack;
	RwLine currLine;
	RpCollBSPLeafNode* leaf;
	RpCollBSPBranchNode* branch;
	u32 branch_type;
	u32 branch_leftType;
	u32 branch_rightType;
	u32 branch_leftNode;
	u32 branch_rightNode;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	f32 delta;
	f32 delta;
	f32 delta;
	f32 delta;
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
	s32 i;
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
	s32 i;
	type_60 e;
	_class_2 plane;
	xVec3 p;
	f32 num;
	f32 denom;
	xVec3 b;
	xVec3 A;
	xVec3 B;
	xVec3 C;
	xVec3 AxB;
	xVec3 CxB;
	f32 len2;
	xVec3 d;
	xVec3 ad;
	xVec3 d;
	xVec3 ad;
}

// xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cba80
u32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll)
{
}

// Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3
// Start address: 0x1cbaf0
u32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB)
{
	type_0 akA;
	type_6 akB;
	type_9 afEA;
	type_14 afEB;
	f32 _mag;
	f32 _mag;
	f32 _mag;
	f32 _mag;
	f32 _mag;
	f32 _mag;
	xVec3 centA;
	xVec3 centB;
	xVec3 kD;
	type_81 aafC;
	type_90 aafAbsC;
	type_92 afAD;
	f32 fR0;
	f32 fR1;
	f32 fR;
	f32 fR01;
}

// xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis
// Start address: 0x1ccc40
u32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	f32 scale;
}

// xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
// Start address: 0x1ccde0
s32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls)
{
	RwBBox xb;
	f32 extremumT;
	f32 extremum;
	ParabolaCBData data;
}

// xParabolaEnvCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1cd120
s32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data)
{
	ParabolaCBData* pd;
	xParabola* p;
	xCollis* colls;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	u8 tester;
	f32 a;
	f32 b;
	f32 c;
	f32 det;
	xVec3 N;
	f32 t1;
	f32 t2;
	f32 c1;
	f32 c2;
	f32 c0;
}

// xParabolaRecenter__FP9xParabolaf
// Start address: 0x1cd7b0
void xParabolaRecenter(xParabola* p, f32 newZeroT)
{
}

// xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
// Start address: 0x1cd840
u32 xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	xSphereHitsModel_context context;
	xMat4x3* mat;
	RwFrame* frame;
	f32 mscale;
	f32 mag2;
}

// sphereHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1cdcb0
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, f32 dist, void* data)
{
	xSphereHitsModel_context* context;
}

// xSphereHitsOBB_nu__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cdcd0
u32 xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll)
{
	xSphere xfs;
	xVec3 scale;
	xMat4x3 mnormal;
	f32 len2;
	f32 len_inv;
	f32 len2;
	f32 len_inv;
	f32 len2;
	f32 len_inv;
	xBox sbox;
}

// xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis
// Start address: 0x1ce2c0
u32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll)
{
	xIsect isx;
	f32 scale;
}

// xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis
// Start address: 0x1ce460
u32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	f32 scale;
	f32 scale;
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
	f32 local_x;
	f32 local_z;
}

