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
typedef struct RwStreamUnion;
typedef struct zLedgeGrabParams;
typedef struct xAnimMultiFile;
typedef struct _class_1;
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
typedef struct RwStreamFile;
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
typedef int8 type_112[128][6];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	void(*destroyNotify)(RwResEntry*);
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
	uint32 pad[4];
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
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
	RwTexCoords* texCoords[8];
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RtAnimInterpolatorInfo
{
	int32 typeID;
	int32 interpKeyFrameSize;
	int32 animKeyFrameSize;
	void(*keyFrameApplyCB)(void*, void*);
	void(*keyFrameBlendCB)(void*, void*, void*, float32);
	void(*keyFrameInterpolateCB)(void*, void*, void*, float32, void*);
	void(*keyFrameAddCB)(void*, void*, void*);
	void(*keyFrameMulRecipCB)(void*, void*);
	RtAnimAnimation*(*keyFrameStreamReadCB)(RwStream*, RtAnimAnimation*);
	int32(*keyFrameStreamWriteCB)(RtAnimAnimation*, RwStream*);
	int32(*keyFrameStreamGetSizeCB)(RtAnimAnimation*);
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
	uint8 NumAnims[2];
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
	uint8 value[22];
	uint8 last_value[22];
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
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	xVec3 corner[4];
};

struct RtAnimInterpolator
{
	RtAnimAnimation* pCurrentAnim;
	float32 currentTime;
	void* pNextFrame;
	RtAnimInterpolator*(*pAnimCallBack)(RtAnimInterpolator*, void*);
	void* pAnimCallBackData;
	float32 animCallBackTime;
	RtAnimInterpolator*(*pAnimLoopCallBack)(RtAnimInterpolator*, void*);
	void* pAnimLoopCallBackData;
	int32 maxInterpKeyFrameSize;
	int32 currentInterpKeyFrameSize;
	int32 currentAnimKeyFrameSize;
	int32 numNodes;
	int32 isSubInterpolator;
	int32 offsetInParent;
	RtAnimInterpolator* parentAnimation;
	void(*keyFrameApplyCB)(void*, void*);
	void(*keyFrameBlendCB)(void*, void*, void*, float32);
	void(*keyFrameInterpolateCB)(void*, void*, void*, float32, void*);
	void(*keyFrameAddCB)(void*, void*, void*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	float32 radius[2];
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
	RpClump*(*callback)(RpClump*, void*);
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
	uint32(*cb)(void*, void*);
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
	uint32 baseCount[72];
	xBase* baseList[72];
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

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	xVec3 tranTable[60];
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
	xAnimMultiFileEntry Files[1];
};

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	uint8 pad[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint16 vertIndex[3];
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
	xModelTag BubbleWandTag[2];
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
	xModelTag HangPawTag[4];
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
	uint32 Inv_PatsSock[15];
	uint32 Inv_PatsSock_Max[15];
	uint32 Inv_PatsSock_CurrentLevel;
	uint32 Inv_LevelPickups[15];
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
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[111];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8 sb_model_indices[14];
	xModelInstance* sb_models[14];
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
	int8 idtag[4];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
};

struct RwMemory
{
	uint8* start;
	uint32 length;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
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
	uint8 talk_filter[4];
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
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
	xVec4 frustplane[12];
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
	void(*InitCB)(xMemPool*, void*);
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
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
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

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
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
	uint16 vertIndex[3];
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
	RxCluster clusters[1];
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
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

int8 buffer[16];
int8 buffer[16];
uint32 gLastAtomicCount;
RpAtomic* gLastAtomicList[256];
RpLight* sEmptyDirectionalLight[4];
RpLight* sEmptyAmbientLight;
RwRGBA sMaterialColor[16];
RwTexture* sMaterialTexture[16];
uint8 sMaterialAlpha[16];
uint32 sMaterialIdx;
uint32 sMaterialFlags;
RpAtomic* sLastMaterial;
RpMaterial*(*iModelMaterialMulCB)(RpMaterial*, void*);
RpMaterial*(*iModelSetMaterialTextureCB)(RpMaterial*, void*);
uint8* giAnimScratch;
uint32 ourGlobals[4096];
zGlobals globals;
int32 iModelHack_DisablePrelight;
RwFrame*(*GetChildFrameHierarchy)(RwFrame*, void*);
RpAtomic*(*NextAtomicCallback)(RpAtomic*, void*);
RpAtomic*(*FindAtomicCallback)(RpAtomic*, void*);

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
	float32 cols[3];
	// Line 2181, Address: 0x1accc0, Func Offset: 0
	// Line 2185, Address: 0x1accd0, Func Offset: 0x10
	// Line 2186, Address: 0x1accdc, Func Offset: 0x1c
	// Line 2190, Address: 0x1acce0, Func Offset: 0x20
	// Line 2197, Address: 0x1acce4, Func Offset: 0x24
	// Line 2190, Address: 0x1accf0, Func Offset: 0x30
	// Line 2193, Address: 0x1accf8, Func Offset: 0x38
	// Line 2196, Address: 0x1accfc, Func Offset: 0x3c
	// Line 2194, Address: 0x1acd00, Func Offset: 0x40
	// Line 2197, Address: 0x1acd04, Func Offset: 0x44
	// Line 2199, Address: 0x1acd0c, Func Offset: 0x4c
	// Line 2200, Address: 0x1acd10, Func Offset: 0x50
	// Line 2199, Address: 0x1acd14, Func Offset: 0x54
	// Line 2201, Address: 0x1acd1c, Func Offset: 0x5c
	// Func End, Address: 0x1acd2c, Func Offset: 0x6c
}

// iModelMaterialMulCB__FP10RpMaterialPv
// Start address: 0x1acd30
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data)
{
	RwRGBA* rw_col;
	RwRGBA col;
	float32 tmp;
	float32* mods;
	// Line 2163, Address: 0x1acd30, Func Offset: 0
	// Line 2161, Address: 0x1acd38, Func Offset: 0x8
	// Line 2163, Address: 0x1acd3c, Func Offset: 0xc
	// Line 2167, Address: 0x1acd94, Func Offset: 0x64
	// Line 2168, Address: 0x1acdc8, Func Offset: 0x98
	// Line 2167, Address: 0x1acdd0, Func Offset: 0xa0
	// Line 2168, Address: 0x1acdd4, Func Offset: 0xa4
	// Line 2169, Address: 0x1ace50, Func Offset: 0x120
	// Line 2170, Address: 0x1ace88, Func Offset: 0x158
	// Line 2169, Address: 0x1ace90, Func Offset: 0x160
	// Line 2170, Address: 0x1ace94, Func Offset: 0x164
	// Line 2171, Address: 0x1acf10, Func Offset: 0x1e0
	// Line 2172, Address: 0x1acf48, Func Offset: 0x218
	// Line 2171, Address: 0x1acf50, Func Offset: 0x220
	// Line 2172, Address: 0x1acf54, Func Offset: 0x224
	// Line 2176, Address: 0x1acfcc, Func Offset: 0x29c
	// Line 2174, Address: 0x1acfd0, Func Offset: 0x2a0
	// Line 2177, Address: 0x1acff0, Func Offset: 0x2c0
	// Func End, Address: 0x1acff8, Func Offset: 0x2c8
}

// iModelSetMaterialTexture__FP8RpAtomicPv
// Start address: 0x1ad000
void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
	RpGeometry* geom;
	// Line 2131, Address: 0x1ad000, Func Offset: 0
	// Line 2136, Address: 0x1ad00c, Func Offset: 0xc
	// Line 2137, Address: 0x1ad01c, Func Offset: 0x1c
	// Line 2139, Address: 0x1ad020, Func Offset: 0x20
	// Line 2143, Address: 0x1ad024, Func Offset: 0x24
	// Line 2145, Address: 0x1ad034, Func Offset: 0x34
	// Line 2146, Address: 0x1ad038, Func Offset: 0x38
	// Line 2145, Address: 0x1ad03c, Func Offset: 0x3c
	// Line 2147, Address: 0x1ad044, Func Offset: 0x44
	// Func End, Address: 0x1ad054, Func Offset: 0x54
}

// iModelSetMaterialTextureCB__FP10RpMaterialPv
// Start address: 0x1ad060
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data)
{
	// Line 2119, Address: 0x1ad060, Func Offset: 0
	// Line 2122, Address: 0x1ad064, Func Offset: 0x4
	// Line 2119, Address: 0x1ad068, Func Offset: 0x8
	// Line 2122, Address: 0x1ad06c, Func Offset: 0xc
	// Line 2119, Address: 0x1ad070, Func Offset: 0x10
	// Line 2122, Address: 0x1ad074, Func Offset: 0x14
	// Line 2124, Address: 0x1ad094, Func Offset: 0x34
	// Line 2126, Address: 0x1ad09c, Func Offset: 0x3c
	// Line 2127, Address: 0x1ad0a0, Func Offset: 0x40
	// Func End, Address: 0x1ad0b0, Func Offset: 0x50
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
	// Line 2077, Address: 0x1ad0b0, Func Offset: 0
	// Line 2081, Address: 0x1ad0dc, Func Offset: 0x2c
	// Line 2082, Address: 0x1ad0e8, Func Offset: 0x38
	// Line 2085, Address: 0x1ad0f0, Func Offset: 0x40
	// Line 2088, Address: 0x1ad0f4, Func Offset: 0x44
	// Line 2090, Address: 0x1ad130, Func Offset: 0x80
	// Line 2092, Address: 0x1ad138, Func Offset: 0x88
	// Line 2090, Address: 0x1ad13c, Func Offset: 0x8c
	// Line 2092, Address: 0x1ad140, Func Offset: 0x90
	// Line 2093, Address: 0x1ad14c, Func Offset: 0x9c
	// Line 2094, Address: 0x1ad170, Func Offset: 0xc0
	// Line 2095, Address: 0x1ad178, Func Offset: 0xc8
	// Line 2096, Address: 0x1ad19c, Func Offset: 0xec
	// Line 2097, Address: 0x1ad1a8, Func Offset: 0xf8
	// Line 2098, Address: 0x1ad1b4, Func Offset: 0x104
	// Line 2099, Address: 0x1ad1d8, Func Offset: 0x128
	// Line 2100, Address: 0x1ad1e0, Func Offset: 0x130
	// Line 2102, Address: 0x1ad208, Func Offset: 0x158
	// Line 2103, Address: 0x1ad218, Func Offset: 0x168
	// Line 2104, Address: 0x1ad23c, Func Offset: 0x18c
	// Line 2105, Address: 0x1ad244, Func Offset: 0x194
	// Line 2107, Address: 0x1ad26c, Func Offset: 0x1bc
	// Line 2108, Address: 0x1ad270, Func Offset: 0x1c0
	// Line 2109, Address: 0x1ad280, Func Offset: 0x1d0
	// Line 2111, Address: 0x1ad288, Func Offset: 0x1d8
	// Line 2109, Address: 0x1ad290, Func Offset: 0x1e0
	// Line 2111, Address: 0x1ad29c, Func Offset: 0x1ec
	// Line 2113, Address: 0x1ad2a8, Func Offset: 0x1f8
	// Line 2114, Address: 0x1ad2ac, Func Offset: 0x1fc
	// Func End, Address: 0x1ad2dc, Func Offset: 0x22c
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
	// Line 2051, Address: 0x1ad2e0, Func Offset: 0
	// Line 2047, Address: 0x1ad2e4, Func Offset: 0x4
	// Line 2051, Address: 0x1ad2e8, Func Offset: 0x8
	// Line 2052, Address: 0x1ad2f0, Func Offset: 0x10
	// Line 2056, Address: 0x1ad2f8, Func Offset: 0x18
	// Line 2059, Address: 0x1ad304, Func Offset: 0x24
	// Line 2061, Address: 0x1ad30c, Func Offset: 0x2c
	// Line 2066, Address: 0x1ad334, Func Offset: 0x54
	// Line 2063, Address: 0x1ad338, Func Offset: 0x58
	// Line 2069, Address: 0x1ad33c, Func Offset: 0x5c
	// Line 2063, Address: 0x1ad340, Func Offset: 0x60
	// Line 2068, Address: 0x1ad348, Func Offset: 0x68
	// Line 2065, Address: 0x1ad34c, Func Offset: 0x6c
	// Line 2066, Address: 0x1ad354, Func Offset: 0x74
	// Line 2067, Address: 0x1ad374, Func Offset: 0x94
	// Line 2068, Address: 0x1ad378, Func Offset: 0x98
	// Line 2069, Address: 0x1ad398, Func Offset: 0xb8
	// Line 2071, Address: 0x1ad3a8, Func Offset: 0xc8
	// Line 2072, Address: 0x1ad3ac, Func Offset: 0xcc
	// Line 2071, Address: 0x1ad3b0, Func Offset: 0xd0
	// Line 2073, Address: 0x1ad3b8, Func Offset: 0xd8
	// Func End, Address: 0x1ad3c0, Func Offset: 0xe0
}

// iModelTagEval__FP8RpAtomicPC19xModelTagWithNormalP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ad3c0
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal)
{
	RpSkin* skin;
	RwMatrixTag* skinmat;
	// Line 1850, Address: 0x1ad3c0, Func Offset: 0
	// Line 1851, Address: 0x1ad3f8, Func Offset: 0x38
	// Line 1853, Address: 0x1ad400, Func Offset: 0x40
	// Line 1855, Address: 0x1ad418, Func Offset: 0x58
	// Line 1856, Address: 0x1ad420, Func Offset: 0x60
	// Line 1857, Address: 0x1ad428, Func Offset: 0x68
	// Line 1856, Address: 0x1ad43c, Func Offset: 0x7c
	// Line 1857, Address: 0x1ad440, Func Offset: 0x80
	// Line 1858, Address: 0x1ad62c, Func Offset: 0x26c
	// Line 1862, Address: 0x1ad638, Func Offset: 0x278
	// Line 1863, Address: 0x1ad64c, Func Offset: 0x28c
	// Line 1864, Address: 0x1ad650, Func Offset: 0x290
	// Func End, Address: 0x1ad680, Func Offset: 0x2c0
}

// iModelTagEval__FP8RpAtomicPC9xModelTagP11RwMatrixTagP5xVec3
// Start address: 0x1ad680
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest)
{
	RpGeometry* geom;
	RpSkin* skin;
	RwMatrixTag* skinmat;
	// Line 1832, Address: 0x1ad680, Func Offset: 0
	// Line 1834, Address: 0x1ad688, Func Offset: 0x8
	// Line 1832, Address: 0x1ad68c, Func Offset: 0xc
	// Line 1834, Address: 0x1ad6b8, Func Offset: 0x38
	// Line 1837, Address: 0x1ad6c8, Func Offset: 0x48
	// Line 1838, Address: 0x1ad6d0, Func Offset: 0x50
	// Line 1839, Address: 0x1ad6d8, Func Offset: 0x58
	// Line 1838, Address: 0x1ad6dc, Func Offset: 0x5c
	// Line 1839, Address: 0x1ad6e0, Func Offset: 0x60
	// Line 1840, Address: 0x1ad918, Func Offset: 0x298
	// Line 1845, Address: 0x1ad920, Func Offset: 0x2a0
	// Line 1847, Address: 0x1ad930, Func Offset: 0x2b0
	// Func End, Address: 0x1ad960, Func Offset: 0x2e0
}

// iModelTagSetup__FP19xModelTagWithNormalP8RpAtomicfff
// Start address: 0x1ad960
uint32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
	uint32 index;
	xVec3* normals;
	// Line 1817, Address: 0x1ad960, Func Offset: 0
	// Line 1818, Address: 0x1ad964, Func Offset: 0x4
	// Line 1817, Address: 0x1ad968, Func Offset: 0x8
	// Line 1818, Address: 0x1ad978, Func Offset: 0x18
	// Line 1821, Address: 0x1ad980, Func Offset: 0x20
	// Line 1823, Address: 0x1ad998, Func Offset: 0x38
	// Line 1825, Address: 0x1ad9b4, Func Offset: 0x54
	// Func End, Address: 0x1ad9c8, Func Offset: 0x68
}

// iModelTagSetup__FP9xModelTagP8RpAtomicfff
// Start address: 0x1ad9d0
uint32 iModelTagSetup(xModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
	// Line 1813, Address: 0x1ad9d0, Func Offset: 0
	// Func End, Address: 0x1ad9d8, Func Offset: 0x8
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
	// Line 1729, Address: 0x1ad9e0, Func Offset: 0
	// Line 1730, Address: 0x1ad9f8, Func Offset: 0x18
	// Line 1731, Address: 0x1ad9fc, Func Offset: 0x1c
	// Line 1734, Address: 0x1ada04, Func Offset: 0x24
	// Line 1735, Address: 0x1ada0c, Func Offset: 0x2c
	// Line 1736, Address: 0x1ada1c, Func Offset: 0x3c
	// Line 1739, Address: 0x1ada20, Func Offset: 0x40
	// Line 1741, Address: 0x1ada2c, Func Offset: 0x4c
	// Line 1743, Address: 0x1ada40, Func Offset: 0x60
	// Line 1742, Address: 0x1ada44, Func Offset: 0x64
	// Line 1743, Address: 0x1ada48, Func Offset: 0x68
	// Line 1744, Address: 0x1ada64, Func Offset: 0x84
	// Line 1748, Address: 0x1ada78, Func Offset: 0x98
	// Line 1750, Address: 0x1ada84, Func Offset: 0xa4
	// Line 1749, Address: 0x1ada88, Func Offset: 0xa8
	// Line 1752, Address: 0x1ada8c, Func Offset: 0xac
	// Line 1754, Address: 0x1adaa0, Func Offset: 0xc0
	// Line 1755, Address: 0x1adaa8, Func Offset: 0xc8
	// Line 1756, Address: 0x1adaac, Func Offset: 0xcc
	// Line 1759, Address: 0x1adab0, Func Offset: 0xd0
	// Line 1760, Address: 0x1adab8, Func Offset: 0xd8
	// Line 1761, Address: 0x1adac8, Func Offset: 0xe8
	// Line 1762, Address: 0x1adad4, Func Offset: 0xf4
	// Line 1763, Address: 0x1adadc, Func Offset: 0xfc
	// Line 1765, Address: 0x1adae4, Func Offset: 0x104
	// Line 1767, Address: 0x1adae8, Func Offset: 0x108
	// Line 1771, Address: 0x1adaf0, Func Offset: 0x110
	// Line 1772, Address: 0x1adafc, Func Offset: 0x11c
	// Line 1773, Address: 0x1adb04, Func Offset: 0x124
	// Line 1774, Address: 0x1adb0c, Func Offset: 0x12c
	// Line 1773, Address: 0x1adb10, Func Offset: 0x130
	// Line 1774, Address: 0x1adb14, Func Offset: 0x134
	// Line 1775, Address: 0x1adb2c, Func Offset: 0x14c
	// Line 1776, Address: 0x1adb34, Func Offset: 0x154
	// Line 1777, Address: 0x1adb3c, Func Offset: 0x15c
	// Line 1778, Address: 0x1adb44, Func Offset: 0x164
	// Line 1779, Address: 0x1adb48, Func Offset: 0x168
	// Line 1783, Address: 0x1adb50, Func Offset: 0x170
	// Line 1784, Address: 0x1adb54, Func Offset: 0x174
	// Line 1785, Address: 0x1adb58, Func Offset: 0x178
	// Line 1786, Address: 0x1adb5c, Func Offset: 0x17c
	// Line 1787, Address: 0x1adb60, Func Offset: 0x180
	// Line 1789, Address: 0x1adb64, Func Offset: 0x184
	// Line 1791, Address: 0x1adb68, Func Offset: 0x188
	// Line 1792, Address: 0x1adb70, Func Offset: 0x190
	// Func End, Address: 0x1adb88, Func Offset: 0x1a8
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
	// Line 1678, Address: 0x1adb90, Func Offset: 0
	// Line 1680, Address: 0x1adbcc, Func Offset: 0x3c
	// Line 1681, Address: 0x1adbe4, Func Offset: 0x54
	// Line 1682, Address: 0x1adbe8, Func Offset: 0x58
	// Line 1683, Address: 0x1adbf8, Func Offset: 0x68
	// Line 1684, Address: 0x1adc04, Func Offset: 0x74
	// Line 1683, Address: 0x1adc0c, Func Offset: 0x7c
	// Line 1684, Address: 0x1adc10, Func Offset: 0x80
	// Line 1686, Address: 0x1adc20, Func Offset: 0x90
	// Line 1688, Address: 0x1adc28, Func Offset: 0x98
	// Line 1689, Address: 0x1adc38, Func Offset: 0xa8
	// Line 1690, Address: 0x1adc40, Func Offset: 0xb0
	// Line 1691, Address: 0x1adc4c, Func Offset: 0xbc
	// Line 1692, Address: 0x1adc54, Func Offset: 0xc4
	// Line 1695, Address: 0x1adc58, Func Offset: 0xc8
	// Line 1698, Address: 0x1adc68, Func Offset: 0xd8
	// Line 1703, Address: 0x1adc6c, Func Offset: 0xdc
	// Line 1705, Address: 0x1adc80, Func Offset: 0xf0
	// Line 1704, Address: 0x1adc84, Func Offset: 0xf4
	// Line 1705, Address: 0x1adc88, Func Offset: 0xf8
	// Line 1706, Address: 0x1adcac, Func Offset: 0x11c
	// Line 1710, Address: 0x1adcc0, Func Offset: 0x130
	// Line 1712, Address: 0x1adccc, Func Offset: 0x13c
	// Line 1711, Address: 0x1adcd0, Func Offset: 0x140
	// Line 1714, Address: 0x1adcd4, Func Offset: 0x144
	// Line 1716, Address: 0x1adce8, Func Offset: 0x158
	// Line 1717, Address: 0x1adcf0, Func Offset: 0x160
	// Line 1719, Address: 0x1add30, Func Offset: 0x1a0
	// Line 1720, Address: 0x1add38, Func Offset: 0x1a8
	// Line 1721, Address: 0x1add40, Func Offset: 0x1b0
	// Line 1723, Address: 0x1add84, Func Offset: 0x1f4
	// Line 1725, Address: 0x1add88, Func Offset: 0x1f8
	// Line 1726, Address: 0x1add90, Func Offset: 0x200
	// Func End, Address: 0x1addc4, Func Offset: 0x234
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
	// Line 1636, Address: 0x1addd0, Func Offset: 0
	// Line 1637, Address: 0x1ade0c, Func Offset: 0x3c
	// Line 1643, Address: 0x1ade10, Func Offset: 0x40
	// Line 1645, Address: 0x1ade18, Func Offset: 0x48
	// Line 1646, Address: 0x1ade20, Func Offset: 0x50
	// Line 1647, Address: 0x1ade40, Func Offset: 0x70
	// Line 1650, Address: 0x1ade48, Func Offset: 0x78
	// Line 1652, Address: 0x1ade60, Func Offset: 0x90
	// Line 1655, Address: 0x1ade6c, Func Offset: 0x9c
	// Line 1656, Address: 0x1ade78, Func Offset: 0xa8
	// Line 1659, Address: 0x1ade80, Func Offset: 0xb0
	// Line 1660, Address: 0x1ade8c, Func Offset: 0xbc
	// Line 1661, Address: 0x1ade9c, Func Offset: 0xcc
	// Line 1662, Address: 0x1adeac, Func Offset: 0xdc
	// Line 1663, Address: 0x1ae0e8, Func Offset: 0x318
	// Line 1669, Address: 0x1ae0f0, Func Offset: 0x320
	// Line 1671, Address: 0x1ae0fc, Func Offset: 0x32c
	// Line 1670, Address: 0x1ae10c, Func Offset: 0x33c
	// Line 1671, Address: 0x1ae114, Func Offset: 0x344
	// Line 1672, Address: 0x1ae11c, Func Offset: 0x34c
	// Line 1674, Address: 0x1ae120, Func Offset: 0x350
	// Line 1675, Address: 0x1ae128, Func Offset: 0x358
	// Func End, Address: 0x1ae158, Func Offset: 0x388
}

// iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ae160
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest)
{
	RpGeometry* geom;
	uint32 numV;
	RpSkin* skin;
	// Line 1593, Address: 0x1ae160, Func Offset: 0
	// Line 1594, Address: 0x1ae19c, Func Offset: 0x3c
	// Line 1600, Address: 0x1ae1a0, Func Offset: 0x40
	// Line 1602, Address: 0x1ae1a8, Func Offset: 0x48
	// Line 1605, Address: 0x1ae1ac, Func Offset: 0x4c
	// Line 1606, Address: 0x1ae1c8, Func Offset: 0x68
	// Line 1609, Address: 0x1ae1e8, Func Offset: 0x88
	// Line 1610, Address: 0x1ae1ec, Func Offset: 0x8c
	// Line 1609, Address: 0x1ae1f8, Func Offset: 0x98
	// Line 1610, Address: 0x1ae1fc, Func Offset: 0x9c
	// Line 1614, Address: 0x1ae200, Func Offset: 0xa0
	// Line 1615, Address: 0x1ae20c, Func Offset: 0xac
	// Line 1618, Address: 0x1ae214, Func Offset: 0xb4
	// Line 1622, Address: 0x1ae484, Func Offset: 0x324
	// Line 1627, Address: 0x1ae490, Func Offset: 0x330
	// Line 1628, Address: 0x1ae4a4, Func Offset: 0x344
	// Line 1630, Address: 0x1ae4a8, Func Offset: 0x348
	// Line 1631, Address: 0x1ae4b0, Func Offset: 0x350
	// Func End, Address: 0x1ae4e0, Func Offset: 0x380
}

// iModel_SetLightKit__FP9xLightKit
// Start address: 0x1ae4e0
void iModel_SetLightKit(xLightKit* lightKit)
{
	RpLight* amb;
	RpLight* dir[4];
	int32 lightTypes[5];
	uint32 i;
	// Line 1249, Address: 0x1ae4e0, Func Offset: 0
	// Line 1253, Address: 0x1ae4e4, Func Offset: 0x4
	// Line 1258, Address: 0x1ae4ec, Func Offset: 0xc
	// Line 1260, Address: 0x1ae510, Func Offset: 0x30
	// Line 1261, Address: 0x1ae528, Func Offset: 0x48
	// Line 1262, Address: 0x1ae52c, Func Offset: 0x4c
	// Line 1261, Address: 0x1ae530, Func Offset: 0x50
	// Line 1262, Address: 0x1ae54c, Func Offset: 0x6c
	// Line 1263, Address: 0x1ae560, Func Offset: 0x80
	// Line 1269, Address: 0x1ae598, Func Offset: 0xb8
	// Line 1275, Address: 0x1ae5a0, Func Offset: 0xc0
	// Line 1274, Address: 0x1ae5a8, Func Offset: 0xc8
	// Line 1276, Address: 0x1ae5ac, Func Offset: 0xcc
	// Line 1275, Address: 0x1ae5b0, Func Offset: 0xd0
	// Line 1276, Address: 0x1ae5b4, Func Offset: 0xd4
	// Line 1277, Address: 0x1ae5b8, Func Offset: 0xd8
	// Line 1276, Address: 0x1ae5bc, Func Offset: 0xdc
	// Line 1277, Address: 0x1ae5c0, Func Offset: 0xe0
	// Line 1278, Address: 0x1ae5c4, Func Offset: 0xe4
	// Line 1277, Address: 0x1ae5c8, Func Offset: 0xe8
	// Line 1278, Address: 0x1ae5cc, Func Offset: 0xec
	// Line 1281, Address: 0x1ae5d4, Func Offset: 0xf4
	// Line 1284, Address: 0x1ae5ec, Func Offset: 0x10c
	// Line 1282, Address: 0x1ae5f0, Func Offset: 0x110
	// Line 1281, Address: 0x1ae5f4, Func Offset: 0x114
	// Line 1282, Address: 0x1ae604, Func Offset: 0x124
	// Line 1284, Address: 0x1ae60c, Func Offset: 0x12c
	// Line 1285, Address: 0x1ae620, Func Offset: 0x140
	// Line 1287, Address: 0x1ae62c, Func Offset: 0x14c
	// Line 1290, Address: 0x1ae648, Func Offset: 0x168
	// Line 1291, Address: 0x1ae654, Func Offset: 0x174
	// Func End, Address: 0x1ae664, Func Offset: 0x184
}

// iModelVertCount__FP8RpAtomic
// Start address: 0x1ae670
uint32 iModelVertCount(RpAtomic* model)
{
	// Line 1241, Address: 0x1ae670, Func Offset: 0
	// Line 1242, Address: 0x1ae674, Func Offset: 0x4
	// Func End, Address: 0x1ae67c, Func Offset: 0xc
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
	// Line 1150, Address: 0x1ae680, Func Offset: 0
	// Line 1154, Address: 0x1ae684, Func Offset: 0x4
	// Line 1150, Address: 0x1ae688, Func Offset: 0x8
	// Line 1154, Address: 0x1ae6ac, Func Offset: 0x2c
	// Line 1158, Address: 0x1ae6b4, Func Offset: 0x34
	// Line 1162, Address: 0x1ae6c8, Func Offset: 0x48
	// Line 1163, Address: 0x1ae6d0, Func Offset: 0x50
	// Line 1162, Address: 0x1ae6d8, Func Offset: 0x58
	// Line 1164, Address: 0x1ae6dc, Func Offset: 0x5c
	// Line 1163, Address: 0x1ae6e0, Func Offset: 0x60
	// Line 1164, Address: 0x1ae6ec, Func Offset: 0x6c
	// Line 1163, Address: 0x1ae6f8, Func Offset: 0x78
	// Line 1164, Address: 0x1ae6fc, Func Offset: 0x7c
	// Line 1163, Address: 0x1ae700, Func Offset: 0x80
	// Line 1164, Address: 0x1ae704, Func Offset: 0x84
	// Line 1165, Address: 0x1ae708, Func Offset: 0x88
	// Line 1164, Address: 0x1ae710, Func Offset: 0x90
	// Line 1165, Address: 0x1ae714, Func Offset: 0x94
	// Line 1167, Address: 0x1ae71c, Func Offset: 0x9c
	// Line 1180, Address: 0x1ae760, Func Offset: 0xe0
	// Line 1167, Address: 0x1ae764, Func Offset: 0xe4
	// Line 1181, Address: 0x1ae768, Func Offset: 0xe8
	// Line 1167, Address: 0x1ae76c, Func Offset: 0xec
	// Line 1171, Address: 0x1ae770, Func Offset: 0xf0
	// Line 1179, Address: 0x1ae774, Func Offset: 0xf4
	// Line 1181, Address: 0x1ae778, Func Offset: 0xf8
	// Line 1169, Address: 0x1ae77c, Func Offset: 0xfc
	// Line 1171, Address: 0x1ae788, Func Offset: 0x108
	// Line 1181, Address: 0x1ae7a4, Func Offset: 0x124
	// Line 1183, Address: 0x1ae7cc, Func Offset: 0x14c
	// Line 1184, Address: 0x1ae7d4, Func Offset: 0x154
	// Line 1183, Address: 0x1ae7d8, Func Offset: 0x158
	// Line 1184, Address: 0x1ae7e8, Func Offset: 0x168
	// Line 1186, Address: 0x1ae7ec, Func Offset: 0x16c
	// Line 1193, Address: 0x1ae7f8, Func Offset: 0x178
	// Line 1194, Address: 0x1ae7fc, Func Offset: 0x17c
	// Line 1197, Address: 0x1ae808, Func Offset: 0x188
	// Line 1198, Address: 0x1ae80c, Func Offset: 0x18c
	// Line 1203, Address: 0x1ae814, Func Offset: 0x194
	// Line 1198, Address: 0x1ae818, Func Offset: 0x198
	// Line 1206, Address: 0x1ae824, Func Offset: 0x1a4
	// Line 1207, Address: 0x1ae834, Func Offset: 0x1b4
	// Line 1208, Address: 0x1ae838, Func Offset: 0x1b8
	// Line 1212, Address: 0x1ae844, Func Offset: 0x1c4
	// Line 1214, Address: 0x1ae84c, Func Offset: 0x1cc
	// Line 1217, Address: 0x1ae850, Func Offset: 0x1d0
	// Line 1216, Address: 0x1ae854, Func Offset: 0x1d4
	// Line 1217, Address: 0x1ae858, Func Offset: 0x1d8
	// Line 1219, Address: 0x1ae86c, Func Offset: 0x1ec
	// Line 1220, Address: 0x1ae880, Func Offset: 0x200
	// Line 1221, Address: 0x1ae884, Func Offset: 0x204
	// Line 1223, Address: 0x1ae894, Func Offset: 0x214
	// Line 1226, Address: 0x1ae8ac, Func Offset: 0x22c
	// Line 1227, Address: 0x1ae8b4, Func Offset: 0x234
	// Line 1229, Address: 0x1ae8b8, Func Offset: 0x238
	// Line 1228, Address: 0x1ae8bc, Func Offset: 0x23c
	// Line 1229, Address: 0x1ae8c0, Func Offset: 0x240
	// Line 1232, Address: 0x1ae8c8, Func Offset: 0x248
	// Line 1233, Address: 0x1ae8cc, Func Offset: 0x24c
	// Line 1234, Address: 0x1ae8d0, Func Offset: 0x250
	// Func End, Address: 0x1ae8f0, Func Offset: 0x270
}

// iModelSphereCull__FP7xSphere
// Start address: 0x1ae8f0
int32 iModelSphereCull(xSphere* sphere)
{
	// Line 1133, Address: 0x1ae8f0, Func Offset: 0
	// Line 1139, Address: 0x1ae8fc, Func Offset: 0xc
	// Line 1141, Address: 0x1ae908, Func Offset: 0x18
	// Line 1139, Address: 0x1ae90c, Func Offset: 0x1c
	// Line 1141, Address: 0x1ae914, Func Offset: 0x24
	// Func End, Address: 0x1ae91c, Func Offset: 0x2c
}

// iModelCull__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1ae920
int32 iModelCull(RpAtomic* model, RwMatrixTag* mat)
{
	// Line 1018, Address: 0x1ae920, Func Offset: 0
	// Line 1019, Address: 0x1ae930, Func Offset: 0x10
	// Line 1020, Address: 0x1ae934, Func Offset: 0x14
	// Line 1021, Address: 0x1ae938, Func Offset: 0x18
	// Line 1022, Address: 0x1ae93c, Func Offset: 0x1c
	// Line 1023, Address: 0x1ae940, Func Offset: 0x20
	// Line 1024, Address: 0x1ae944, Func Offset: 0x24
	// Line 1025, Address: 0x1ae948, Func Offset: 0x28
	// Line 1026, Address: 0x1ae94c, Func Offset: 0x2c
	// Line 1027, Address: 0x1ae950, Func Offset: 0x30
	// Line 1028, Address: 0x1ae954, Func Offset: 0x34
	// Line 1029, Address: 0x1ae958, Func Offset: 0x38
	// Line 1030, Address: 0x1ae95c, Func Offset: 0x3c
	// Line 1031, Address: 0x1ae960, Func Offset: 0x40
	// Line 1032, Address: 0x1ae964, Func Offset: 0x44
	// Line 1033, Address: 0x1ae968, Func Offset: 0x48
	// Line 1034, Address: 0x1ae96c, Func Offset: 0x4c
	// Line 1035, Address: 0x1ae970, Func Offset: 0x50
	// Line 1036, Address: 0x1ae974, Func Offset: 0x54
	// Line 1037, Address: 0x1ae978, Func Offset: 0x58
	// Line 1038, Address: 0x1ae97c, Func Offset: 0x5c
	// Line 1039, Address: 0x1ae980, Func Offset: 0x60
	// Line 1040, Address: 0x1ae984, Func Offset: 0x64
	// Line 1041, Address: 0x1ae988, Func Offset: 0x68
	// Line 1042, Address: 0x1ae98c, Func Offset: 0x6c
	// Line 1043, Address: 0x1ae990, Func Offset: 0x70
	// Line 1044, Address: 0x1ae994, Func Offset: 0x74
	// Line 1045, Address: 0x1ae998, Func Offset: 0x78
	// Line 1046, Address: 0x1ae99c, Func Offset: 0x7c
	// Line 1047, Address: 0x1ae9a0, Func Offset: 0x80
	// Line 1048, Address: 0x1ae9a4, Func Offset: 0x84
	// Line 1049, Address: 0x1ae9a8, Func Offset: 0x88
	// Line 1050, Address: 0x1ae9ac, Func Offset: 0x8c
	// Line 1051, Address: 0x1ae9b0, Func Offset: 0x90
	// Line 1052, Address: 0x1ae9b4, Func Offset: 0x94
	// Line 1053, Address: 0x1ae9b8, Func Offset: 0x98
	// Line 1054, Address: 0x1ae9bc, Func Offset: 0x9c
	// Line 1055, Address: 0x1ae9c0, Func Offset: 0xa0
	// Line 1056, Address: 0x1ae9c4, Func Offset: 0xa4
	// Line 1057, Address: 0x1ae9c8, Func Offset: 0xa8
	// Line 1058, Address: 0x1ae9cc, Func Offset: 0xac
	// Line 1059, Address: 0x1ae9d0, Func Offset: 0xb0
	// Line 1060, Address: 0x1ae9d4, Func Offset: 0xb4
	// Line 1061, Address: 0x1ae9d8, Func Offset: 0xb8
	// Line 1062, Address: 0x1ae9dc, Func Offset: 0xbc
	// Line 1063, Address: 0x1ae9e0, Func Offset: 0xc0
	// Line 1064, Address: 0x1ae9e4, Func Offset: 0xc4
	// Line 1065, Address: 0x1ae9e8, Func Offset: 0xc8
	// Line 1066, Address: 0x1ae9ec, Func Offset: 0xcc
	// Line 1067, Address: 0x1ae9f0, Func Offset: 0xd0
	// Line 1068, Address: 0x1ae9f4, Func Offset: 0xd4
	// Line 1069, Address: 0x1ae9f8, Func Offset: 0xd8
	// Line 1070, Address: 0x1ae9fc, Func Offset: 0xdc
	// Line 1071, Address: 0x1aea00, Func Offset: 0xe0
	// Line 1072, Address: 0x1aea04, Func Offset: 0xe4
	// Line 1074, Address: 0x1aea0c, Func Offset: 0xec
	// Line 1075, Address: 0x1aea10, Func Offset: 0xf0
	// Line 1076, Address: 0x1aea14, Func Offset: 0xf4
	// Line 1077, Address: 0x1aea18, Func Offset: 0xf8
	// Line 1078, Address: 0x1aea1c, Func Offset: 0xfc
	// Line 1079, Address: 0x1aea20, Func Offset: 0x100
	// Line 1084, Address: 0x1aea28, Func Offset: 0x108
	// Line 1086, Address: 0x1aea30, Func Offset: 0x110
	// Line 1087, Address: 0x1aea38, Func Offset: 0x118
	// Func End, Address: 0x1aea40, Func Offset: 0x120
}

// iModelRender__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1aea40
void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
	RwMatrixTag* pAnimOldMatrix;
	RwFrame* frame;
	// Line 762, Address: 0x1aea40, Func Offset: 0
	// Line 763, Address: 0x1aea68, Func Offset: 0x28
	// Line 767, Address: 0x1aeaa4, Func Offset: 0x64
	// Line 768, Address: 0x1aeaac, Func Offset: 0x6c
	// Line 769, Address: 0x1aeab0, Func Offset: 0x70
	// Line 773, Address: 0x1aeab8, Func Offset: 0x78
	// Line 781, Address: 0x1aeabc, Func Offset: 0x7c
	// Line 782, Address: 0x1aeb3c, Func Offset: 0xfc
	// Line 797, Address: 0x1aeb44, Func Offset: 0x104
	// Line 798, Address: 0x1aeb50, Func Offset: 0x110
	// Line 799, Address: 0x1aeb64, Func Offset: 0x124
	// Line 920, Address: 0x1aeb68, Func Offset: 0x128
	// Line 929, Address: 0x1aeb74, Func Offset: 0x134
	// Line 930, Address: 0x1aeb90, Func Offset: 0x150
	// Line 931, Address: 0x1aeb9c, Func Offset: 0x15c
	// Line 938, Address: 0x1aeba0, Func Offset: 0x160
	// Line 939, Address: 0x1aeba8, Func Offset: 0x168
	// Line 940, Address: 0x1aebac, Func Offset: 0x16c
	// Line 941, Address: 0x1aebb0, Func Offset: 0x170
	// Func End, Address: 0x1aebd0, Func Offset: 0x190
}

// iModelAnimMatrices__FP8RpAtomicP5xQuatP5xVec3P11RwMatrixTag
// Start address: 0x1aebd0
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
	RpHAnimHierarchy* pHierarchy;
	RwMatrixTag matrixStack[32];
	RwMatrixTag* pMatrixStackTop;
	RpHAnimNodeInfo* pCurrentFrame;
	int32 pCurrentFrameFlags;
	int32 i;
	int32 numFrames;
	RwMatrixTag* pMatrixArray;
	// Line 564, Address: 0x1aebd0, Func Offset: 0
	// Line 565, Address: 0x1aebf0, Func Offset: 0x20
	// Line 567, Address: 0x1aec34, Func Offset: 0x64
	// Line 581, Address: 0x1aec3c, Func Offset: 0x6c
	// Line 582, Address: 0x1aec40, Func Offset: 0x70
	// Line 583, Address: 0x1aec44, Func Offset: 0x74
	// Line 584, Address: 0x1aec48, Func Offset: 0x78
	// Line 585, Address: 0x1aec4c, Func Offset: 0x7c
	// Line 586, Address: 0x1aec50, Func Offset: 0x80
	// Line 587, Address: 0x1aec54, Func Offset: 0x84
	// Line 588, Address: 0x1aec58, Func Offset: 0x88
	// Line 589, Address: 0x1aec5c, Func Offset: 0x8c
	// Line 590, Address: 0x1aec60, Func Offset: 0x90
	// Line 591, Address: 0x1aec64, Func Offset: 0x94
	// Line 606, Address: 0x1aec68, Func Offset: 0x98
	// Line 604, Address: 0x1aec6c, Func Offset: 0x9c
	// Line 607, Address: 0x1aec70, Func Offset: 0xa0
	// Line 612, Address: 0x1aec74, Func Offset: 0xa4
	// Line 615, Address: 0x1aec80, Func Offset: 0xb0
	// Line 616, Address: 0x1aec84, Func Offset: 0xb4
	// Line 620, Address: 0x1aec90, Func Offset: 0xc0
	// Line 621, Address: 0x1aec94, Func Offset: 0xc4
	// Line 622, Address: 0x1aec98, Func Offset: 0xc8
	// Line 623, Address: 0x1aec9c, Func Offset: 0xcc
	// Line 627, Address: 0x1aeca0, Func Offset: 0xd0
	// Line 630, Address: 0x1aeca4, Func Offset: 0xd4
	// Line 631, Address: 0x1aed28, Func Offset: 0x158
	// Line 632, Address: 0x1aed70, Func Offset: 0x1a0
	// Line 634, Address: 0x1aed7c, Func Offset: 0x1ac
	// Line 637, Address: 0x1aed80, Func Offset: 0x1b0
	// Line 638, Address: 0x1aed84, Func Offset: 0x1b4
	// Line 639, Address: 0x1aed88, Func Offset: 0x1b8
	// Line 640, Address: 0x1aed8c, Func Offset: 0x1bc
	// Line 644, Address: 0x1aed90, Func Offset: 0x1c0
	// Line 647, Address: 0x1aed98, Func Offset: 0x1c8
	// Line 648, Address: 0x1aed9c, Func Offset: 0x1cc
	// Line 649, Address: 0x1aeda0, Func Offset: 0x1d0
	// Line 650, Address: 0x1aeda4, Func Offset: 0x1d4
	// Line 680, Address: 0x1aeda8, Func Offset: 0x1d8
	// Line 681, Address: 0x1aedac, Func Offset: 0x1dc
	// Line 682, Address: 0x1aedb0, Func Offset: 0x1e0
	// Line 684, Address: 0x1aedb4, Func Offset: 0x1e4
	// Line 685, Address: 0x1aedb8, Func Offset: 0x1e8
	// Line 686, Address: 0x1aedcc, Func Offset: 0x1fc
	// Func End, Address: 0x1aedec, Func Offset: 0x21c
}

// iModelNumBones__FP8RpAtomic
// Start address: 0x1aedf0
uint32 iModelNumBones(RpAtomic* model)
{
	// Line 359, Address: 0x1aedf0, Func Offset: 0
	// Line 360, Address: 0x1aedfc, Func Offset: 0xc
	// Line 362, Address: 0x1aee3c, Func Offset: 0x4c
	// Line 363, Address: 0x1aee44, Func Offset: 0x54
	// Line 367, Address: 0x1aee50, Func Offset: 0x60
	// Line 368, Address: 0x1aee58, Func Offset: 0x68
	// Func End, Address: 0x1aee68, Func Offset: 0x78
}

// iModelFile_RWMultiAtomic__FP8RpAtomic
// Start address: 0x1aee70
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
	RpClump* clump;
	RpAtomic* nextModel;
	// Line 349, Address: 0x1aee70, Func Offset: 0
	// Line 350, Address: 0x1aee74, Func Offset: 0x4
	// Line 352, Address: 0x1aee88, Func Offset: 0x18
	// Line 354, Address: 0x1aee8c, Func Offset: 0x1c
	// Line 353, Address: 0x1aee98, Func Offset: 0x28
	// Line 354, Address: 0x1aee9c, Func Offset: 0x2c
	// Line 355, Address: 0x1aeea4, Func Offset: 0x34
	// Line 356, Address: 0x1aeea8, Func Offset: 0x38
	// Func End, Address: 0x1aeeb4, Func Offset: 0x44
}

// NextAtomicCallback__FP8RpAtomicPv
// Start address: 0x1aeec0
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
	RpAtomic** nextModel;
	// Line 335, Address: 0x1aeec0, Func Offset: 0
	// Line 337, Address: 0x1aeec4, Func Offset: 0x4
	// Line 338, Address: 0x1aeecc, Func Offset: 0xc
	// Line 339, Address: 0x1aeed8, Func Offset: 0x18
	// Line 340, Address: 0x1aeee0, Func Offset: 0x20
	// Line 343, Address: 0x1aeee8, Func Offset: 0x28
	// Func End, Address: 0x1aeef0, Func Offset: 0x30
}

// iModelUnload__FP8RpAtomic
// Start address: 0x1aeef0
void iModelUnload(RpAtomic* userdata)
{
	RpClump* clump;
	RwFrame* frame;
	RwFrame* root;
	// Line 300, Address: 0x1aeef0, Func Offset: 0
	// Line 306, Address: 0x1aef00, Func Offset: 0x10
	// Line 311, Address: 0x1aef04, Func Offset: 0x14
	// Line 312, Address: 0x1aef08, Func Offset: 0x18
	// Line 314, Address: 0x1aef10, Func Offset: 0x20
	// Line 315, Address: 0x1aef18, Func Offset: 0x28
	// Line 316, Address: 0x1aef28, Func Offset: 0x38
	// Line 317, Address: 0x1aef30, Func Offset: 0x40
	// Line 318, Address: 0x1aef34, Func Offset: 0x44
	// Line 321, Address: 0x1aef38, Func Offset: 0x48
	// Line 323, Address: 0x1aef48, Func Offset: 0x58
	// Func End, Address: 0x1aef5c, Func Offset: 0x6c
}

// iModelFileNew__FPvUi
// Start address: 0x1aef60
RpAtomic* iModelFileNew(void* buffer, uint32 size)
{
	RwMemory rwmem;
	// Line 284, Address: 0x1aef60, Func Offset: 0
	// Line 288, Address: 0x1aef68, Func Offset: 0x8
	// Line 286, Address: 0x1aef6c, Func Offset: 0xc
	// Line 287, Address: 0x1aef70, Func Offset: 0x10
	// Line 288, Address: 0x1aef74, Func Offset: 0x14
	// Line 289, Address: 0x1aef88, Func Offset: 0x28
	// Func End, Address: 0x1aef94, Func Offset: 0x34
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
	// Line 201, Address: 0x1aefa0, Func Offset: 0
	// Line 205, Address: 0x1aefb0, Func Offset: 0x10
	// Line 206, Address: 0x1aefb8, Func Offset: 0x18
	// Line 209, Address: 0x1aefc0, Func Offset: 0x20
	// Line 212, Address: 0x1aefd8, Func Offset: 0x38
	// Line 213, Address: 0x1aefe0, Func Offset: 0x40
	// Line 217, Address: 0x1aefe8, Func Offset: 0x48
	// Line 218, Address: 0x1aeff4, Func Offset: 0x54
	// Line 219, Address: 0x1af000, Func Offset: 0x60
	// Line 220, Address: 0x1af008, Func Offset: 0x68
	// Line 224, Address: 0x1af010, Func Offset: 0x70
	// Line 233, Address: 0x1af02c, Func Offset: 0x8c
	// Line 238, Address: 0x1af038, Func Offset: 0x98
	// Line 237, Address: 0x1af03c, Func Offset: 0x9c
	// Line 236, Address: 0x1af040, Func Offset: 0xa0
	// Line 238, Address: 0x1af044, Func Offset: 0xa4
	// Line 239, Address: 0x1af060, Func Offset: 0xc0
	// Line 240, Address: 0x1af06c, Func Offset: 0xcc
	// Line 241, Address: 0x1af070, Func Offset: 0xd0
	// Line 243, Address: 0x1af074, Func Offset: 0xd4
	// Line 246, Address: 0x1af088, Func Offset: 0xe8
	// Line 247, Address: 0x1af0a8, Func Offset: 0x108
	// Line 249, Address: 0x1af0b0, Func Offset: 0x110
	// Line 253, Address: 0x1af0fc, Func Offset: 0x15c
	// Line 254, Address: 0x1af108, Func Offset: 0x168
	// Line 257, Address: 0x1af10c, Func Offset: 0x16c
	// Line 260, Address: 0x1af120, Func Offset: 0x180
	// Line 263, Address: 0x1af128, Func Offset: 0x188
	// Line 260, Address: 0x1af12c, Func Offset: 0x18c
	// Line 263, Address: 0x1af130, Func Offset: 0x190
	// Line 272, Address: 0x1af14c, Func Offset: 0x1ac
	// Line 264, Address: 0x1af150, Func Offset: 0x1b0
	// Line 265, Address: 0x1af158, Func Offset: 0x1b8
	// Line 267, Address: 0x1af178, Func Offset: 0x1d8
	// Line 273, Address: 0x1af17c, Func Offset: 0x1dc
	// Line 267, Address: 0x1af180, Func Offset: 0x1e0
	// Line 272, Address: 0x1af184, Func Offset: 0x1e4
	// Line 273, Address: 0x1af194, Func Offset: 0x1f4
	// Line 274, Address: 0x1af1a4, Func Offset: 0x204
	// Line 277, Address: 0x1af1a8, Func Offset: 0x208
	// Line 278, Address: 0x1af1b0, Func Offset: 0x210
	// Func End, Address: 0x1af1c4, Func Offset: 0x224
}

// FindAtomicCallback__FP8RpAtomicPv
// Start address: 0x1af1d0
RpAtomic* FindAtomicCallback(RpAtomic* atomic)
{
	RpHAnimHierarchy* pHier;
	RpSkin* pSkin;
	// Line 142, Address: 0x1af1d0, Func Offset: 0
	// Line 144, Address: 0x1af1ec, Func Offset: 0x1c
	// Line 149, Address: 0x1af22c, Func Offset: 0x5c
	// Line 152, Address: 0x1af238, Func Offset: 0x68
	// Line 153, Address: 0x1af248, Func Offset: 0x78
	// Line 166, Address: 0x1af268, Func Offset: 0x98
	// Line 153, Address: 0x1af26c, Func Offset: 0x9c
	// Line 166, Address: 0x1af270, Func Offset: 0xa0
	// Line 168, Address: 0x1af278, Func Offset: 0xa8
	// Line 171, Address: 0x1af288, Func Offset: 0xb8
	// Line 175, Address: 0x1af290, Func Offset: 0xc0
	// Line 176, Address: 0x1af298, Func Offset: 0xc8
	// Line 177, Address: 0x1af29c, Func Offset: 0xcc
	// Line 176, Address: 0x1af2a0, Func Offset: 0xd0
	// Line 179, Address: 0x1af2a4, Func Offset: 0xd4
	// Line 180, Address: 0x1af2b0, Func Offset: 0xe0
	// Line 184, Address: 0x1af2d0, Func Offset: 0x100
	// Line 190, Address: 0x1af2d8, Func Offset: 0x108
	// Line 191, Address: 0x1af2dc, Func Offset: 0x10c
	// Func End, Address: 0x1af2f8, Func Offset: 0x128
}

// iModelInit__Fv
// Start address: 0x1af300
void iModelInit()
{
	RwFrame* frame;
	RwRGBAReal black;
	int32 i;
	// Line 122, Address: 0x1af300, Func Offset: 0
	// Line 123, Address: 0x1af30c, Func Offset: 0xc
	// Line 126, Address: 0x1af314, Func Offset: 0x14
	// Line 127, Address: 0x1af338, Func Offset: 0x38
	// Line 129, Address: 0x1af348, Func Offset: 0x48
	// Line 130, Address: 0x1af350, Func Offset: 0x50
	// Line 131, Address: 0x1af35c, Func Offset: 0x5c
	// Line 132, Address: 0x1af368, Func Offset: 0x68
	// Line 133, Address: 0x1af370, Func Offset: 0x70
	// Line 134, Address: 0x1af37c, Func Offset: 0x7c
	// Line 135, Address: 0x1af38c, Func Offset: 0x8c
	// Line 136, Address: 0x1af398, Func Offset: 0x98
	// Line 137, Address: 0x1af3a4, Func Offset: 0xa4
	// Line 138, Address: 0x1af3a8, Func Offset: 0xa8
	// Func End, Address: 0x1af3bc, Func Offset: 0xbc
}

// GetChildFrameHierarchy__FP7RwFramePv
// Start address: 0x1af3c0
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
	RpHAnimHierarchy* hierarchy;
	// Line 92, Address: 0x1af3c0, Func Offset: 0
	// Line 94, Address: 0x1af3d4, Func Offset: 0x14
	// Line 95, Address: 0x1af3dc, Func Offset: 0x1c
	// Line 96, Address: 0x1af3e4, Func Offset: 0x24
	// Line 97, Address: 0x1af3f4, Func Offset: 0x34
	// Line 98, Address: 0x1af3fc, Func Offset: 0x3c
	// Line 99, Address: 0x1af400, Func Offset: 0x40
	// Line 100, Address: 0x1af404, Func Offset: 0x44
	// Line 101, Address: 0x1af408, Func Offset: 0x48
	// Func End, Address: 0x1af41c, Func Offset: 0x5c
}

