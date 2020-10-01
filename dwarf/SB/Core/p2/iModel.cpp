typedef struct RwV3d;
typedef struct RpMaterial;
typedef struct RpAtomic;
typedef struct xAnimState;
typedef struct RpHAnimHierarchy;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct RwMatrixTag;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpWorld;
typedef struct xEnt;
typedef struct RxPipeline;
typedef struct xCollis;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct RtAnimAnimation;
typedef struct xQuat;
typedef struct RwCamera;
typedef struct xScene;
typedef struct xAnimEffect;
typedef struct RpMeshHeader;
typedef struct xEntFrame;
typedef struct xVec3;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xEntCollis;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpSkin;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct RpWorldSector;
typedef struct _class_0;
typedef struct RpMorphTarget;
typedef struct RpGeometry;
typedef struct RtAnimInterpolatorInfo;
typedef struct RpLight;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpHAnimNodeInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagxPad;
typedef struct xModelTag;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelPool;
typedef struct xFFX;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xQCData;
typedef struct zLasso;
typedef struct zPlatform;
typedef struct RpUserDataArray;
typedef struct xEnvAsset;
typedef struct _tagxRumble;
typedef struct xAnimPlay;
typedef struct zGlobals;
typedef struct RwFrame;
typedef struct xVec4;
typedef struct xShadowSimpleCache;
typedef struct RtAnimInterpolator;
typedef struct RwSurfaceProperties;
typedef struct zGlobalSettings;
typedef struct xLinkAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntShadow;
typedef struct _zPortal;
typedef struct xGroup;
typedef struct RpClump;
typedef struct zAssetPickupTable;
typedef struct rxReq;
typedef struct xUpdateCullEnt;
typedef struct RwRaster;
typedef struct zCutsceneMgr;
typedef struct zPlayerLassoInfo;
typedef struct anim_coll_data;
typedef struct xGroupAsset;
typedef enum RxClusterValidityReq;
typedef struct zScene;
typedef struct xSphere;
typedef struct RwLLLink;
typedef union RwStreamUnion;
typedef struct zLedgeGrabParams;
typedef struct xAnimMultiFile;
typedef union _class_1;
typedef struct xMat4x3;
typedef struct xVec2;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum _zPlayerWallJumpState;
typedef enum RwStreamType;
typedef struct xBaseAsset;
typedef struct RpVertexNormal;
typedef struct xSurface;
typedef struct xAnimTable;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xModelTagWithNormal;
typedef struct xBound;
typedef struct iEnv;
typedef enum rxEmbeddedPacketState;
typedef struct xModelBucket;
typedef enum _tagRumbleType;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xLightKit;
typedef enum RwCameraProjection;
typedef struct zEnt;
typedef enum RxClusterForcePresent;
typedef struct RwStream;
typedef struct xCylinder;
typedef struct xJSPNodeInfo;
typedef struct xBBox;
typedef struct analog_data;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpPolygon;
typedef enum RwStreamAccessType;
typedef struct RpMaterialList;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xJSPHeader;
typedef struct RwTexDictionary;
typedef enum RpUserDataFormat;
typedef struct xPortalAsset;
typedef struct xGridBound;
typedef struct zPlayerCarryInfo;
typedef struct RxOutputSpec;
typedef struct xUpdateCullMgr;
typedef struct RwMemory;
typedef struct zPlayerSettings;
typedef struct xAnimSingle;
typedef struct xLightKitLight;
typedef struct xMat3x3;
typedef struct xCamera;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct _zEnv;
typedef struct RwObject;
typedef struct RwMatrixWeights;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct _class_2;
typedef struct xMemPool;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntDrive;
typedef struct xEntAsset;
typedef struct iFogParams;
typedef struct RxNodeDefinition;
typedef union RwStreamFile;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct RxPacket;
typedef struct xEntBoulder;
typedef enum _tagPadState;
typedef struct zEntHangable;
typedef enum RwFogType;
typedef struct xGlobals;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEnv;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;
typedef struct tri_data_0;
typedef struct tri_data_1;
typedef struct RwV2d;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct _tagiPad;

typedef void(*type_2)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_4)(xEnt*);
typedef RtAnimInterpolator*(*type_5)(RtAnimInterpolator*, void*);
typedef int32(*type_6)(void*, uint32);
typedef int32(*type_7)(RtAnimAnimation*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_11)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_12)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef int32(*type_15)(void*);
typedef void(*type_16)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_18)(xEnt*, xScene*, float32);
typedef int32(*type_19)(RxNodeDefinition*);
typedef RpAtomic*(*type_21)(RpAtomic*, void*);
typedef uint32(*type_22)(void*, void*, uint32);
typedef void(*type_23)(RxNodeDefinition*);
typedef int32(*type_24)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_25)(void*, void*, uint32);
typedef uint32(*type_26)(void*, void*);
typedef int32(*type_28)(RxPipelineNode*);
typedef void(*type_29)(void*, void*);
typedef uint32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef RpMaterial*(*type_33)(RpMaterial*, void*);
typedef void(*type_34)(RxPipelineNode*);
typedef void(*type_35)(void*);
typedef void(*type_36)(void*, void*, void*, float32);
typedef int32(*type_37)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_38)(RpAtomic*, void*);
typedef void(*type_39)(void*, void*, void*, float32, void*);
typedef void(*type_40)(void*, void*, void*);
typedef void(*type_41)(xEnt*, xVec3*);
typedef void(*type_42)(void*, void*);
typedef RtAnimAnimation*(*type_43)(RwStream*, RtAnimAnimation*);
typedef void(*type_44)(xAnimPlay*, xAnimState*);
typedef int32(*type_46)(RtAnimAnimation*, RwStream*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_50)(uint32);
typedef void(*type_52)(xEnt*, xScene*, float32, xEntCollis*);
typedef int8*(*type_54)(xBase*);
typedef int8*(*type_58)(uint32);
typedef RpMaterial*(*type_63)(RpMaterial*, void*);
typedef uint32(*type_73)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_77)(RpClump*, void*);
typedef RwCamera*(*type_78)(RwCamera*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef RwFrame*(*type_83)(RwFrame*, void*);
typedef void(*type_88)(xMemPool*, void*);
typedef void(*type_100)(RwResEntry*);
typedef RpAtomic*(*type_104)(RpAtomic*);
typedef RwObjectHasFrame*(*type_110)(RwObjectHasFrame*);

typedef RwMatrixTag type_0[32];
typedef xModelInstance* type_1[14];
typedef RwTexCoords* type_3[8];
typedef RwFrustumPlane type_8[6];
typedef uint8 type_9[4];
typedef RwV3d type_17[8];
typedef uint8 type_20[16];
typedef uint8 type_27[22];
typedef xVec3 type_31[4];
typedef uint8 type_32[22];
typedef xVec3 type_45[5];
typedef uint8 type_48[5];
typedef xVec3 type_49[60];
typedef xCollis type_51[18];
typedef RwRGBA type_53[16];
typedef float32 type_55[22];
typedef float32 type_56[4];
typedef float32 type_57[22];
typedef uint32 type_59[15];
typedef uint32 type_60[15];
typedef int8 type_61[16];
typedef uint16 type_62[3];
typedef uint32 type_64[4];
typedef uint32 type_65[15];
typedef int8 type_66[16];
typedef uint32 type_67[72];
typedef analog_data type_68[2];
typedef int8 type_69[4];
typedef xBase* type_70[72];
typedef RpLight* type_71[4];
typedef uint32 type_72[4096];
typedef float32 type_74[16];
typedef float32 type_75[2];
typedef int32 type_76[5];
typedef RpAtomic* type_79[256];
typedef RwTexCoords* type_80[8];
typedef float32 type_81[2];
typedef float32 type_84[3];
typedef uint8 type_85[2];
typedef RpLight* type_86[4];
typedef uint32 type_87[2];
typedef xVec4 type_89[12];
typedef uint8 type_90[2];
typedef float32 type_91[6];
typedef float32 type_92[3];
typedef RwTexture* type_93[16];
typedef int8 type_94[32];
typedef float32 type_95[3];
typedef int8 type_96[32];
typedef xModelTag type_97[2];
typedef uint8 type_98[2];
typedef uint8 type_99[3];
typedef float32 type_101[3];
typedef xAnimMultiFileEntry type_102[1];
typedef uint16 type_103[3];
typedef RpLight* type_105[2];
typedef xEnt* type_106[111];
typedef RwFrame* type_107[2];
typedef RxCluster type_108[1];
typedef xVec3 type_109[3];
typedef int8 type_111[128];
typedef type_111 type_112[6];
typedef float32 type_113[4];
typedef uint8 type_114[14];
typedef xModelTag type_115[4];
typedef int8 type_116[32];

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_104 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_44 BeforeEnter;
	type_47 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct RpHAnimHierarchy
{
	int32 flags;
	int32 numNodes;
	RwMatrixTag* pMatrixArray;
	void* pMatrixArrayUnaligned;
	RpHAnimNodeInfo* pNodeInfo;
	RwFrame* parentFrame;
	RpHAnimHierarchy* parentHierarchy;
	int32 rootParentOffset;
	RtAnimInterpolator* currentAnim;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
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
	type_14 renderCallBack;
	RxPipeline* pipeline;
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
	type_18 update;
	type_18 endUpdate;
	type_41 bupdate;
	type_2 move;
	type_4 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_16 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
		tri_data_1 tri;
	};
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

struct RtAnimAnimation
{
	RtAnimInterpolatorInfo* interpInfo;
	int32 numFrames;
	int32 flags;
	float32 duration;
	void* pFrames;
	void* customData;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_78 beginUpdate;
	type_82 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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
	type_50 resolvID;
	type_54 base2Name;
	type_58 id2Name;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_73 Callback;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_100 destroyNotify;
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
	type_51 colls;
	type_52 post;
	type_12 depenq;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpSkin
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_64 pad;
};

struct RwStreamCustom
{
	type_15 sfnclose;
	type_22 sfnread;
	type_25 sfnwrite;
	type_6 sfnskip;
	void* data;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_80 texCoords;
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_3 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RtAnimInterpolatorInfo
{
	int32 typeID;
	int32 interpKeyFrameSize;
	int32 animKeyFrameSize;
	type_29 keyFrameApplyCB;
	type_36 keyFrameBlendCB;
	type_39 keyFrameInterpolateCB;
	type_40 keyFrameAddCB;
	type_42 keyFrameMulRecipCB;
	type_43 keyFrameStreamReadCB;
	type_46 keyFrameStreamWriteCB;
	type_7 keyFrameStreamGetSizeCB;
	int32 customDataSize;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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
	type_98 NumAnims;
	void** RawData;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpHAnimNodeInfo
{
	int32 nodeID;
	int32 nodeIndex;
	int32 flags;
	RwFrame* pFrame;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct _tagxPad
{
	type_27 value;
	type_32 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_55 up_tmr;
	type_57 down_tmr;
	type_68 analog;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_56 wt;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xFFX
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
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
	type_45 lastRefs;
	type_48 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlatform
{
};

struct RpUserDataArray
{
	int8* name;
	RpUserDataFormat format;
	int32 numElements;
	void* data;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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
	type_10 BeforeAnimMatrices;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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
	type_31 corner;
};

struct RtAnimInterpolator
{
	RtAnimAnimation* pCurrentAnim;
	float32 currentTime;
	void* pNextFrame;
	type_5 pAnimCallBack;
	void* pAnimCallBackData;
	float32 animCallBackTime;
	type_5 pAnimLoopCallBack;
	void* pAnimLoopCallBackData;
	int32 maxInterpKeyFrameSize;
	int32 currentInterpKeyFrameSize;
	int32 currentAnimKeyFrameSize;
	int32 numNodes;
	int32 isSubInterpolator;
	int32 offsetInParent;
	RtAnimInterpolator* parentAnimation;
	type_29 keyFrameApplyCB;
	type_36 keyFrameBlendCB;
	type_39 keyFrameInterpolateCB;
	type_40 keyFrameAddCB;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	type_85 PowerUp;
	type_90 InitialPowerUp;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_113 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_75 radius;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_77 callback;
};

struct zAssetPickupTable
{
};

struct rxReq
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_26 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct zCutsceneMgr
{
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct anim_coll_data
{
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	type_67 baseCount;
	type_70 baseList;
	_zEnv* zen;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_49 tranTable;
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_102 Files;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xVec2
{
	float32 x;
	float32 y;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xSurface
{
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xModelTagWithNormal : xModelTag
{
	xVec3 normal;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_99 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_105 light;
	type_107 light_frame;
	int32 memlvl;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct RpPolygon
{
	uint16 matIndex;
	type_62 vertIndex;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_97 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	type_115 HangPawTag;
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	type_59 Inv_PatsSock;
	type_60 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_65 Inv_LevelPickups;
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_87 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_106 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_114 sb_model_indices;
	type_1 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xJSPHeader
{
	type_69 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpUserDataFormat
{
	rpNAUSERDATAFORMAT,
	rpINTUSERDATA,
	rpREALUSERDATA,
	rpSTRINGUSERDATA,
	rpUSERDATAFORCEENUMSIZEINT = 0x7fffffff
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	type_35 activateCB;
	type_35 deactivateCB;
};

struct RwMemory
{
	uint8* start;
	uint32 length;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_91 MoveSpeed;
	type_92 AnimSneak;
	type_95 AnimWalk;
	type_101 AnimRun;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	type_9 talk_filter;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_81 BilinearLerp;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_74 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	type_89 frustplane;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwMatrixWeights
{
	float32 w0;
	float32 w1;
	float32 w2;
	float32 w3;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_2
{
	xVec3* verts;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_88 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_94 name;
	type_96 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_19 nodeInit;
	type_23 nodeTerm;
	type_28 pipelineNodeInit;
	type_34 pipelineNodeTerm;
	type_37 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
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

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
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

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RpTriangle
{
	type_103 vertIndex;
	int16 matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_108 clusters;
};

struct xEntBoulder
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct zEntHangable
{
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_112 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_116 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	uint32 QuarterSpeed;
	float32 update_dt;
	int32 useHIPHOP;
	uint8 NoMusic;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
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
	type_110 sync;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xShadowSimplePoly
{
	type_109 vert;
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagiPad
{
	int32 port;
};

type_61 buffer;
type_66 buffer;
uint32 gLastAtomicCount;
type_79 gLastAtomicList;
type_86 sEmptyDirectionalLight;
RpLight* sEmptyAmbientLight;
type_53 sMaterialColor;
type_93 sMaterialTexture;
type_20 sMaterialAlpha;
uint32 sMaterialIdx;
uint32 sMaterialFlags;
RpAtomic* sLastMaterial;
type_63 iModelMaterialMulCB;
type_33 iModelSetMaterialTextureCB;
uint8* giAnimScratch;
type_72 ourGlobals;
zGlobals globals;
int32 iModelHack_DisablePrelight;
type_83 GetChildFrameHierarchy;
type_38 NextAtomicCallback;
type_21 FindAtomicCallback;

void iModelMaterialMul(RpAtomic* model, float32 rm, float32 gm, float32 bm);
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data);
void iModelResetMaterial(RpAtomic* model);
void iModelSetMaterialAlpha(RpAtomic* model, uint8 alpha);
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal);
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest);
uint32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float32 x, float32 y, float32 z);
uint32 iModelTagSetup(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z);
uint32 iModelTagInternal(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV);
uint32 iModelTagUserData(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV);
uint32 iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, uint32 index, int32 size, xVec3* in);
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest);
void iModel_SetLightKit(xLightKit* lightKit);
uint32 iModelVertCount(RpAtomic* model);
int32 iModelCullPlusShadow(RpAtomic* model, RwMatrixTag* mat, xVec3* shadowVec, int32* shadowOutside);
int32 iModelSphereCull(xSphere* sphere);
int32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
void iModelRender(RpAtomic* model, RwMatrixTag* mat);
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat);
uint32 iModelNumBones(RpAtomic* model);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data);
void iModelUnload(RpAtomic* userdata);
RpAtomic* iModelFileNew(void* buffer, uint32 size);
RpAtomic* iModelStreamRead(RwStream* stream);
RpAtomic* FindAtomicCallback(RpAtomic* atomic);
void iModelInit();
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data);

// iModelMaterialMul__FP8RpAtomicfff
// Start address: 0x1accc0
void iModelMaterialMul(RpAtomic* model, float32 rm, float32 gm, float32 bm)
{
	RpGeometry* geom;
	type_84 cols;
}

// iModelMaterialMulCB__FP10RpMaterialPv
// Start address: 0x1acd30
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data)
{
	RwRGBA* rw_col;
	RwRGBA col;
	float32 tmp;
	float32* mods;
}

// iModelSetMaterialTexture__FP8RpAtomicPv
// Start address: 0x1ad000
void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
	RpGeometry* geom;
}

// iModelSetMaterialTextureCB__FP10RpMaterialPv
// Start address: 0x1ad060
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data)
{
}

// iModelResetMaterial__FP8RpAtomic
// Start address: 0x1ad0b0
void iModelResetMaterial(RpAtomic* model)
{
	uint32 i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA newColor;
	RwRGBA newColor;
	RwRGBA newColor;
}

// iModelSetMaterialAlpha__FP8RpAtomicUc
// Start address: 0x1ad2e0
void iModelSetMaterialAlpha(RpAtomic* model, uint8 alpha)
{
	uint32 i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA* col;
	RwRGBA new_col;
}

// iModelTagEval__FP8RpAtomicPC19xModelTagWithNormalP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ad3c0
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal)
{
	RpSkin* skin;
	RwMatrixTag* skinmat;
}

// iModelTagEval__FP8RpAtomicPC9xModelTagP11RwMatrixTagP5xVec3
// Start address: 0x1ad680
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest)
{
	RpGeometry* geom;
	RpSkin* skin;
	RwMatrixTag* skinmat;
}

// iModelTagSetup__FP19xModelTagWithNormalP8RpAtomicfff
// Start address: 0x1ad960
uint32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
	uint32 index;
	xVec3* normals;
}

// iModelTagSetup__FP9xModelTagP8RpAtomicfff
// Start address: 0x1ad9d0
uint32 iModelTagSetup(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
}

// iModelTagInternal__FP9xModelTagP8RpAtomicfffi
// Start address: 0x1ad9e0
uint32 iModelTagInternal(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV)
{
	RpGeometry* geom;
	RwV3d* vert;
	int32 v;
	int32 numV;
	float32 distSqr;
	float32 closeDistSqr;
	RpSkin* skin;
	RwMatrixWeights* wt;
}

// iModelTagUserData__FP9xModelTagP8RpAtomicfffi
// Start address: 0x1adb90
uint32 iModelTagUserData(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV)
{
	int32 i;
	int32 count;
	RpUserDataArray* array;
	RpUserDataArray* testarray;
	float32 distSqr;
	float32 closeDistSqr;
	int32 numTags;
	int32 t;
	xModelTag* tagList;
}

// iModelNormalEval__FP5xVec3RC8RpAtomicPC11RwMatrixTagUiiPC5xVec3
// Start address: 0x1addd0
uint32 iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, uint32 index, int32 size, xVec3* in)
{
	RpGeometry* geom;
	int32 max_size;
	RpSkin* skin;
	RwMatrixTag* skin_mats;
	float32* bone_weights;
	uint32* bone_indices;
	xMat4x3 nmat;
}

// iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ae160
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest)
{
	RpGeometry* geom;
	uint32 numV;
	RpSkin* skin;
}

// iModel_SetLightKit__FP9xLightKit
// Start address: 0x1ae4e0
void iModel_SetLightKit(xLightKit* lightKit)
{
	RpLight* amb;
	type_71 dir;
	type_76 lightTypes;
	uint32 i;
}

// iModelVertCount__FP8RpAtomic
// Start address: 0x1ae670
uint32 iModelVertCount(RpAtomic* model)
{
}

// iModelCullPlusShadow__FP8RpAtomicP11RwMatrixTagP5xVec3Pi
// Start address: 0x1ae680
int32 iModelCullPlusShadow(RpAtomic* model, RwMatrixTag* mat, xVec3* shadowVec, int32* shadowOutside)
{
	float32 xScale2;
	float32 yScale2;
	float32 zScale2;
	RwV3d* up;
	RwV3d* at;
	RwCamera* cam;
	RwSphere worldsph;
	RwFrustumPlane* frustumPlane;
	int32 numPlanes;
	float32 nDot;
	float32 nDot;
	float32 sDot;
}

// iModelSphereCull__FP7xSphere
// Start address: 0x1ae8f0
int32 iModelSphereCull(xSphere* sphere)
{
}

// iModelCull__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1ae920
int32 iModelCull(RpAtomic* model, RwMatrixTag* mat)
{
}

// iModelRender__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1aea40
void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
	RwMatrixTag* pAnimOldMatrix;
	RwFrame* frame;
}

// iModelAnimMatrices__FP8RpAtomicP5xQuatP5xVec3P11RwMatrixTag
// Start address: 0x1aebd0
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
	RpHAnimHierarchy* pHierarchy;
	type_0 matrixStack;
	RwMatrixTag* pMatrixStackTop;
	RpHAnimNodeInfo* pCurrentFrame;
	int32 pCurrentFrameFlags;
	int32 i;
	int32 numFrames;
	RwMatrixTag* pMatrixArray;
}

// iModelNumBones__FP8RpAtomic
// Start address: 0x1aedf0
uint32 iModelNumBones(RpAtomic* model)
{
}

// iModelFile_RWMultiAtomic__FP8RpAtomic
// Start address: 0x1aee70
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
	RpClump* clump;
	RpAtomic* nextModel;
}

// NextAtomicCallback__FP8RpAtomicPv
// Start address: 0x1aeec0
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
	RpAtomic** nextModel;
}

// iModelUnload__FP8RpAtomic
// Start address: 0x1aeef0
void iModelUnload(RpAtomic* userdata)
{
	RpClump* clump;
	RwFrame* frame;
	RwFrame* root;
}

// iModelFileNew__FPvUi
// Start address: 0x1aef60
RpAtomic* iModelFileNew(void* buffer, uint32 size)
{
	RwMemory rwmem;
}

// iModelStreamRead__FP8RwStream
// Start address: 0x1aefa0
RpAtomic* iModelStreamRead(RwStream* stream)
{
	RpClump* clump;
	uint32 i;
	uint32 maxIndex;
	float32 maxRadius;
	float32 testRadius;
}

// FindAtomicCallback__FP8RpAtomicPv
// Start address: 0x1af1d0
RpAtomic* FindAtomicCallback(RpAtomic* atomic)
{
	RpHAnimHierarchy* pHier;
	RpSkin* pSkin;
}

// iModelInit__Fv
// Start address: 0x1af300
void iModelInit()
{
	RwFrame* frame;
	RwRGBAReal black;
	int32 i;
}

// GetChildFrameHierarchy__FP7RwFramePv
// Start address: 0x1af3c0
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
	RpHAnimHierarchy* hierarchy;
}

