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

typedef void(*type_2)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_4)(xEnt*);
typedef RtAnimInterpolator*(*type_5)(RtAnimInterpolator*, void*);
typedef s32(*type_6)(void*, u32);
typedef s32(*type_7)(RtAnimAnimation*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_11)(RxPipelineNode*, u32, u32, void*);
typedef u32(*type_12)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef s32(*type_15)(void*);
typedef void(*type_16)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_18)(xEnt*, xScene*, f32);
typedef s32(*type_19)(RxNodeDefinition*);
typedef RpAtomic*(*type_21)(RpAtomic*, void*);
typedef u32(*type_22)(void*, void*, u32);
typedef void(*type_23)(RxNodeDefinition*);
typedef s32(*type_24)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_25)(void*, void*, u32);
typedef u32(*type_26)(void*, void*);
typedef s32(*type_28)(RxPipelineNode*);
typedef void(*type_29)(void*, void*);
typedef u32(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef RpMaterial*(*type_33)(RpMaterial*, void*);
typedef void(*type_34)(RxPipelineNode*);
typedef void(*type_35)(void*);
typedef void(*type_36)(void*, void*, void*, f32);
typedef s32(*type_37)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_38)(RpAtomic*, void*);
typedef void(*type_39)(void*, void*, void*, f32, void*);
typedef void(*type_40)(void*, void*, void*);
typedef void(*type_41)(xEnt*, xVec3*);
typedef void(*type_42)(void*, void*);
typedef RtAnimAnimation*(*type_43)(RwStream*, RtAnimAnimation*);
typedef void(*type_44)(xAnimPlay*, xAnimState*);
typedef s32(*type_46)(RtAnimAnimation*, RwStream*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_50)(u32);
typedef void(*type_52)(xEnt*, xScene*, f32, xEntCollis*);
typedef s8*(*type_54)(xBase*);
typedef s8*(*type_58)(u32);
typedef RpMaterial*(*type_63)(RpMaterial*, void*);
typedef u32(*type_73)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
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
typedef u8 type_9[4];
typedef RwV3d type_17[8];
typedef u8 type_20[16];
typedef u8 type_27[22];
typedef xVec3 type_31[4];
typedef u8 type_32[22];
typedef xVec3 type_45[5];
typedef u8 type_48[5];
typedef xVec3 type_49[60];
typedef xCollis type_51[18];
typedef RwRGBA type_53[16];
typedef f32 type_55[22];
typedef f32 type_56[4];
typedef f32 type_57[22];
typedef u32 type_59[15];
typedef u32 type_60[15];
typedef s8 type_61[16];
typedef u16 type_62[3];
typedef u32 type_64[4];
typedef u32 type_65[15];
typedef s8 type_66[16];
typedef u32 type_67[72];
typedef analog_data type_68[2];
typedef s8 type_69[4];
typedef xBase* type_70[72];
typedef RpLight* type_71[4];
typedef u32 type_72[4096];
typedef f32 type_74[16];
typedef f32 type_75[2];
typedef s32 type_76[5];
typedef RpAtomic* type_79[256];
typedef RwTexCoords* type_80[8];
typedef f32 type_81[2];
typedef f32 type_84[3];
typedef u8 type_85[2];
typedef RpLight* type_86[4];
typedef u32 type_87[2];
typedef xVec4 type_89[12];
typedef u8 type_90[2];
typedef f32 type_91[6];
typedef f32 type_92[3];
typedef RwTexture* type_93[16];
typedef s8 type_94[32];
typedef f32 type_95[3];
typedef s8 type_96[32];
typedef xModelTag type_97[2];
typedef u8 type_98[2];
typedef u8 type_99[3];
typedef f32 type_101[3];
typedef xAnimMultiFileEntry type_102[1];
typedef u16 type_103[3];
typedef RpLight* type_105[2];
typedef xEnt* type_106[111];
typedef RwFrame* type_107[2];
typedef RxCluster type_108[1];
typedef xVec3 type_109[3];
typedef s8 type_111[128];
typedef type_111 type_112[6];
typedef f32 type_113[4];
typedef u8 type_114[14];
typedef xModelTag type_115[4];
typedef s8 type_116[32];

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_44 BeforeEnter;
	type_47 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct RpHAnimHierarchy
{
	s32 flags;
	s32 numNodes;
	RwMatrixTag* pMatrixArray;
	void* pMatrixArrayUnaligned;
	RpHAnimNodeInfo* pNodeInfo;
	RwFrame* parentFrame;
	RpHAnimHierarchy* parentHierarchy;
	s32 rootParentOffset;
	RtAnimInterpolator* currentAnim;
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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct RpSector
{
	s32 type;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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
	type_14 renderCallBack;
	RxPipeline* pipeline;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	_class_2 anim_coll;
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

struct RtAnimAnimation
{
	RtAnimInterpolatorInfo* interpInfo;
	s32 numFrames;
	s32 flags;
	f32 duration;
	void* pFrames;
	void* customData;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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
	type_50 resolvID;
	type_54 base2Name;
	type_58 id2Name;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_73 Callback;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_100 destroyNotify;
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
	type_51 colls;
	type_52 post;
	type_12 depenq;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpSkin
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
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
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct _class_0
{
	f32 t;
	f32 u;
	f32 v;
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
	type_3 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RtAnimInterpolatorInfo
{
	s32 typeID;
	s32 interpKeyFrameSize;
	s32 animKeyFrameSize;
	type_29 keyFrameApplyCB;
	type_36 keyFrameBlendCB;
	type_39 keyFrameInterpolateCB;
	type_40 keyFrameAddCB;
	type_42 keyFrameMulRecipCB;
	type_43 keyFrameStreamReadCB;
	type_46 keyFrameStreamWriteCB;
	type_7 keyFrameStreamGetSizeCB;
	s32 customDataSize;
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

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	type_98 NumAnims;
	void** RawData;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct RpHAnimNodeInfo
{
	s32 nodeID;
	s32 nodeIndex;
	s32 flags;
	RwFrame* pFrame;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct _tagxPad
{
	type_27 value;
	type_32 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_55 up_tmr;
	type_57 down_tmr;
	type_68 analog;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_56 wt;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	s8* name;
	RpUserDataFormat format;
	s32 numElements;
	void* data;
};

struct xEnvAsset : xBaseAsset
{
	u32 bspAssetID;
	u32 startCameraAssetID;
	u32 climateFlags;
	f32 climateStrengthMin;
	f32 climateStrengthMax;
	u32 bspLightKit;
	u32 objectLightKit;
	f32 padF1;
	u32 bspCollisionAssetID;
	u32 bspFXAssetID;
	u32 bspCameraAssetID;
	u32 bspMapperID;
	u32 bspMapperCollisionID;
	u32 bspMapperFXID;
	f32 loldHeight;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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
	type_31 corner;
};

struct RtAnimInterpolator
{
	RtAnimAnimation* pCurrentAnim;
	f32 currentTime;
	void* pNextFrame;
	type_5 pAnimCallBack;
	void* pAnimCallBackData;
	f32 animCallBackTime;
	type_5 pAnimLoopCallBack;
	void* pAnimLoopCallBackData;
	s32 maxInterpKeyFrameSize;
	s32 currentInterpKeyFrameSize;
	s32 currentAnimKeyFrameSize;
	s32 numNodes;
	s32 isSubInterpolator;
	s32 offsetInParent;
	RtAnimInterpolator* parentAnimation;
	type_29 keyFrameApplyCB;
	type_36 keyFrameBlendCB;
	type_39 keyFrameInterpolateCB;
	type_40 keyFrameAddCB;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct zGlobalSettings
{
	u16 AnalogMin;
	u16 AnalogMax;
	f32 SundaeTime;
	f32 SundaeMult;
	u32 InitialShinyCount;
	u32 InitialSpatulaCount;
	s32 ShinyValuePurple;
	s32 ShinyValueBlue;
	s32 ShinyValueGreen;
	s32 ShinyValueYellow;
	s32 ShinyValueRed;
	s32 ShinyValueCombo0;
	s32 ShinyValueCombo1;
	s32 ShinyValueCombo2;
	s32 ShinyValueCombo3;
	s32 ShinyValueCombo4;
	s32 ShinyValueCombo5;
	s32 ShinyValueCombo6;
	s32 ShinyValueCombo7;
	s32 ShinyValueCombo8;
	s32 ShinyValueCombo9;
	s32 ShinyValueCombo10;
	s32 ShinyValueCombo11;
	s32 ShinyValueCombo12;
	s32 ShinyValueCombo13;
	s32 ShinyValueCombo14;
	s32 ShinyValueCombo15;
	f32 ComboTimer;
	u32 Initial_Specials;
	u32 TakeDamage;
	f32 DamageTimeHit;
	f32 DamageTimeSurface;
	f32 DamageTimeEGen;
	f32 DamageSurfKnock;
	f32 DamageGiveHealthKnock;
	u32 CheatSpongeball;
	u32 CheatPlayerSwitch;
	u32 CheatAlwaysPortal;
	u32 CheatFlyToggle;
	u32 DisableForceConversation;
	f32 StartSlideAngle;
	f32 StopSlideAngle;
	f32 RotMatchMaxAngle;
	f32 RotMatchMatchTime;
	f32 RotMatchRelaxTime;
	f32 Gravity;
	f32 BBashTime;
	f32 BBashHeight;
	f32 BBashDelay;
	f32 BBashCVTime;
	f32 BBounceSpeed;
	f32 BSpinMinFrame;
	f32 BSpinMaxFrame;
	f32 BSpinRadius;
	f32 SandyMeleeMinFrame;
	f32 SandyMeleeMaxFrame;
	f32 SandyMeleeRadius;
	f32 BubbleBowlTimeDelay;
	f32 BubbleBowlLaunchPosLeft;
	f32 BubbleBowlLaunchPosUp;
	f32 BubbleBowlLaunchPosAt;
	f32 BubbleBowlLaunchVelLeft;
	f32 BubbleBowlLaunchVelUp;
	f32 BubbleBowlLaunchVelAt;
	f32 BubbleBowlPercentIncrease;
	f32 BubbleBowlMinSpeed;
	f32 BubbleBowlMinRecoverTime;
	f32 SlideAccelVelMin;
	f32 SlideAccelVelMax;
	f32 SlideAccelStart;
	f32 SlideAccelEnd;
	f32 SlideAccelPlayerFwd;
	f32 SlideAccelPlayerBack;
	f32 SlideAccelPlayerSide;
	f32 SlideVelMaxStart;
	f32 SlideVelMaxEnd;
	f32 SlideVelMaxIncTime;
	f32 SlideVelMaxIncAccel;
	f32 SlideAirHoldTime;
	f32 SlideAirSlowTime;
	f32 SlideAirDblHoldTime;
	f32 SlideAirDblSlowTime;
	f32 SlideVelDblBoost;
	u8 SlideApplyPhysics;
	type_85 PowerUp;
	type_90 InitialPowerUp;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_113 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
	u32 last_index;
	s32 flg_group;
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
	u16 index;
	s16 groupIndex;
	type_26 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct zCutsceneMgr
{
};

struct zPlayerLassoInfo
{
	xEnt* target;
	f32 dist;
	u8 destroy;
	u8 targetGuide;
	f32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	f32 copterTime;
	s32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct anim_coll_data
{
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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
		u32 num_ents;
		u32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	u32 num_update_base;
	xBase** update_base;
	type_67 baseCount;
	type_70 baseList;
	_zEnv* zen;
};

struct xSphere
{
	xVec3 center;
	f32 r;
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
	f32 animGrab;
	f32 zdist;
	type_49 tranTable;
	s32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	f32 y0det;
	f32 dydet;
	f32 r0det;
	f32 drdet;
	f32 thdet;
	f32 rtime;
	f32 ttime;
	f32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	s32 nrays;
	s32 rrand;
	f32 startrot;
	f32 endrot;
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
	u32 pad3;
};

struct xVec2
{
	f32 x;
	f32 y;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xSurface
{
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xModelTagWithNormal : xModelTag
{
	xVec3 normal;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	s32 memlvl;
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
	s32 ClipFlags;
	u32 PipeFlags;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
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
	s32 position;
	RwStreamUnion Type;
	s32 rwOwned;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	f32 mag;
	f32 ang;
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

struct RpPolygon
{
	u16 matIndex;
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
	s32 numMaterials;
	s32 space;
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
	u32 Visible;
	u32 Health;
	s32 Speed;
	f32 SpeedMult;
	s32 Sneak;
	s32 Teeter;
	f32 SlipFadeTimer;
	s32 Slide;
	f32 SlideTimer;
	s32 Stepping;
	s32 JumpState;
	s32 LastJumpState;
	f32 JumpTimer;
	f32 LookAroundTimer;
	u32 LookAroundRand;
	u32 LastProjectile;
	f32 DecelRun;
	f32 DecelRunSpeed;
	f32 HotsauceTimer;
	f32 LeanLerp;
	f32 ScareTimer;
	xBase* ScareSource;
	f32 CowerTimer;
	f32 DamageTimer;
	f32 SundaeTimer;
	f32 ControlOffTimer;
	f32 HelmetTimer;
	u32 WorldDisguise;
	u32 Bounced;
	f32 FallDeathTimer;
	f32 HeadbuttVel;
	f32 HeadbuttTimer;
	u32 SpecialReceived;
	xEnt* MountChimney;
	f32 MountChimOldY;
	u32 MaxHealth;
	u32 DoMeleeCheck;
	f32 VictoryTimer;
	f32 BadGuyNearTimer;
	f32 ForceSlipperyTimer;
	f32 ForceSlipperyFriction;
	f32 ShockRadius;
	f32 ShockRadiusOld;
	f32 Face_ScareTimer;
	u32 Face_ScareRandom;
	u32 Face_Event;
	f32 Face_EventTimer;
	f32 Face_PantTimer;
	u32 Face_AnimSpecific;
	u32 IdleRand;
	f32 IdleMinorTimer;
	f32 IdleMajorTimer;
	f32 IdleSitTimer;
	s32 Transparent;
	zEnt* FireTarget;
	u32 ControlOff;
	u32 ControlOnEvent;
	u32 AutoMoveSpeed;
	f32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	f32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_97 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	f32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	f32 HangLength;
	xVec3 HangStartPos;
	f32 HangStartLerp;
	type_115 HangPawTag;
	f32 HangPawOffset;
	f32 HangElapsed;
	f32 Jump_CurrGravity;
	f32 Jump_HoldTimer;
	f32 Jump_ChangeTimer;
	s32 Jump_CanDouble;
	s32 Jump_CanFloat;
	s32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	s32 CanJump;
	s32 CanBubbleSpin;
	s32 CanBubbleBounce;
	s32 CanBubbleBash;
	s32 IsJumping;
	s32 IsDJumping;
	s32 IsBubbleSpinning;
	s32 IsBubbleBouncing;
	s32 IsBubbleBashing;
	s32 IsBubbleBowling;
	s32 WasDJumping;
	s32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	s32 cheat_mode;
	u32 Inv_Shiny;
	u32 Inv_Spatula;
	type_59 Inv_PatsSock;
	type_60 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_65 Inv_LevelPickups;
	u32 Inv_LevelPickups_CurrentLevel;
	u32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	s32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_87 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_106 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_114 sb_model_indices;
	type_1 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct xJSPHeader
{
	type_69 idtag;
	u32 version;
	u32 jspNodeCount;
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
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	u32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	f32 minDist;
	f32 maxDist;
	f32 minHeight;
	f32 maxHeight;
	f32 maxCosAngle;
	f32 throwMinDist;
	f32 throwMaxDist;
	f32 throwMinHeight;
	f32 throwMaxHeight;
	f32 throwMaxStack;
	f32 throwMaxCosAngle;
	f32 throwTargetRotRate;
	f32 targetRot;
	u32 grabTarget;
	xVec3 grabOffset;
	f32 grabLerpMin;
	f32 grabLerpMax;
	f32 grabLerpLast;
	u32 grabYclear;
	f32 throwGravity;
	f32 throwHeight;
	f32 throwDistance;
	f32 fruitFloorDecayMin;
	f32 fruitFloorDecayMax;
	f32 fruitFloorBounce;
	f32 fruitFloorFriction;
	f32 fruitCeilingBounce;
	f32 fruitWallBounce;
	f32 fruitLifetime;
	xEnt* patLauncher;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xUpdateCullMgr
{
	u32 entCount;
	u32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	u32 mgrCount;
	u32 mgrCurr;
	xUpdateCullEnt* mgrList;
	u32 grpCount;
	xUpdateCullGroup* grpList;
	type_35 activateCB;
	type_35 deactivateCB;
};

struct RwMemory
{
	u8* start;
	u32 length;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_91 MoveSpeed;
	type_92 AnimSneak;
	type_95 AnimWalk;
	type_101 AnimRun;
	f32 JumpGravity;
	f32 GravSmooth;
	f32 FloatSpeed;
	f32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	f32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	f32 spin_damp_xz;
	f32 spin_damp_y;
	u8 talk_anims;
	u8 talk_filter_size;
	type_9 talk_filter;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_81 BilinearLerp;
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

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_74 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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
	f32 fov;
	u32 flags;
	f32 tmr;
	f32 tm_acc;
	f32 tm_dec;
	f32 ltmr;
	f32 ltm_acc;
	f32 ltm_dec;
	f32 dmin;
	f32 dmax;
	f32 dcur;
	f32 dgoal;
	f32 hmin;
	f32 hmax;
	f32 hcur;
	f32 hgoal;
	f32 pmin;
	f32 pmax;
	f32 pcur;
	f32 pgoal;
	f32 depv;
	f32 hepv;
	f32 pepv;
	f32 orn_epv;
	f32 yaw_epv;
	f32 pitch_epv;
	f32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	f32 yaw_cur;
	f32 yaw_goal;
	f32 pitch_cur;
	f32 pitch_goal;
	f32 roll_cur;
	f32 roll_goal;
	f32 dct;
	f32 dcd;
	f32 dccv;
	f32 dcsv;
	f32 hct;
	f32 hcd;
	f32 hccv;
	f32 hcsv;
	f32 pct;
	f32 pcd;
	f32 pccv;
	f32 pcsv;
	f32 orn_ct;
	f32 orn_cd;
	f32 orn_ccv;
	f32 orn_csv;
	f32 yaw_ct;
	f32 yaw_cd;
	f32 yaw_ccv;
	f32 yaw_csv;
	f32 pitch_ct;
	f32 pitch_cd;
	f32 pitch_ccv;
	f32 pitch_csv;
	f32 roll_ct;
	f32 roll_cd;
	f32 roll_ccv;
	f32 roll_csv;
	type_89 frustplane;
};

struct RwStreamMemory
{
	u32 position;
	u32 nSize;
	u8* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwMatrixWeights
{
	f32 w0;
	f32 w1;
	f32 w2;
	f32 w3;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct _class_2
{
	xVec3* verts;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_88 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_94 name;
	type_96 mask;
	u32 filterAddressing;
	s32 refCount;
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
	u32 creationAttributes;
};

struct xEntDrive
{
	u32 flags;
	f32 otm;
	f32 otmr;
	f32 os;
	f32 tm;
	f32 tmr;
	f32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	f32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
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

struct iFogParams
{
	RwFogType type;
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
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

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
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

struct RpTriangle
{
	type_103 vertIndex;
	s16 matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
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
	s32 profile;
	type_112 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_116 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	s32 fog_t0;
	s32 fog_t1;
	s32 option_vibration;
	u32 QuarterSpeed;
	f32 update_dt;
	s32 useHIPHOP;
	u8 NoMusic;
	s8 currentActivePad;
	u8 firstStartPressed;
	u32 minVSyncCnt;
	u8 dontShowPadMessageDuringLoadingOrCutScene;
	u8 autoSaveFeature;
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
	f32 yaw;
	xCollis* coll;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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
	s32 port;
};

type_61 buffer;
type_66 buffer;
u32 gLastAtomicCount;
type_79 gLastAtomicList;
type_86 sEmptyDirectionalLight;
RpLight* sEmptyAmbientLight;
type_53 sMaterialColor;
type_93 sMaterialTexture;
type_20 sMaterialAlpha;
u32 sMaterialIdx;
u32 sMaterialFlags;
RpAtomic* sLastMaterial;
type_63 iModelMaterialMulCB;
type_33 iModelSetMaterialTextureCB;
u8* giAnimScratch;
type_72 ourGlobals;
zGlobals globals;
s32 iModelHack_DisablePrelight;
type_83 GetChildFrameHierarchy;
type_38 NextAtomicCallback;
type_21 FindAtomicCallback;

void iModelMaterialMul(RpAtomic* model, f32 rm, f32 gm, f32 bm);
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data);
void iModelResetMaterial(RpAtomic* model);
void iModelSetMaterialAlpha(RpAtomic* model, u8 alpha);
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal);
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest);
u32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, f32 x, f32 y, f32 z);
u32 iModelTagSetup(xModelTag* tag, RpAtomic* model, f32 x, f32 y, f32 z);
u32 iModelTagInternal(xModelTag* tag, RpAtomic* model, f32 x, f32 y, f32 z, s32 closeV);
u32 iModelTagUserData(xModelTag* tag, RpAtomic* model, f32 x, f32 y, f32 z, s32 closeV);
u32 iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, u32 index, s32 size, xVec3* in);
u32 iModelVertEval(RpAtomic* model, u32 index, u32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest);
void iModel_SetLightKit(xLightKit* lightKit);
u32 iModelVertCount(RpAtomic* model);
s32 iModelCullPlusShadow(RpAtomic* model, RwMatrixTag* mat, xVec3* shadowVec, s32* shadowOutside);
s32 iModelSphereCull(xSphere* sphere);
s32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
void iModelRender(RpAtomic* model, RwMatrixTag* mat);
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat);
u32 iModelNumBones(RpAtomic* model);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data);
void iModelUnload(RpAtomic* userdata);
RpAtomic* iModelFileNew(void* buffer, u32 size);
RpAtomic* iModelStreamRead(RwStream* stream);
RpAtomic* FindAtomicCallback(RpAtomic* atomic);
void iModelInit();
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data);

// iModelMaterialMul__FP8RpAtomicfff
// Start address: 0x1accc0
void iModelMaterialMul(RpAtomic* model, f32 rm, f32 gm, f32 bm)
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
	f32 tmp;
	f32* mods;
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
	u32 i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA newColor;
	RwRGBA newColor;
	RwRGBA newColor;
}

// iModelSetMaterialAlpha__FP8RpAtomicUc
// Start address: 0x1ad2e0
void iModelSetMaterialAlpha(RpAtomic* model, u8 alpha)
{
	u32 i;
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
u32 iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, f32 x, f32 y, f32 z)
{
	u32 index;
	xVec3* normals;
}

// iModelTagSetup__FP9xModelTagP8RpAtomicfff
// Start address: 0x1ad9d0
u32 iModelTagSetup(xModelTag* tag, RpAtomic* model, f32 x, f32 y, f32 z)
{
}

// iModelTagInternal__FP9xModelTagP8RpAtomicfffi
// Start address: 0x1ad9e0
u32 iModelTagInternal(xModelTag* tag, RpAtomic* model, f32 x, f32 y, f32 z, s32 closeV)
{
	RpGeometry* geom;
	RwV3d* vert;
	s32 v;
	s32 numV;
	f32 distSqr;
	f32 closeDistSqr;
	RpSkin* skin;
	RwMatrixWeights* wt;
}

// iModelTagUserData__FP9xModelTagP8RpAtomicfffi
// Start address: 0x1adb90
u32 iModelTagUserData(xModelTag* tag, RpAtomic* model, f32 x, f32 y, f32 z, s32 closeV)
{
	s32 i;
	s32 count;
	RpUserDataArray* array;
	RpUserDataArray* testarray;
	f32 distSqr;
	f32 closeDistSqr;
	s32 numTags;
	s32 t;
	xModelTag* tagList;
}

// iModelNormalEval__FP5xVec3RC8RpAtomicPC11RwMatrixTagUiiPC5xVec3
// Start address: 0x1addd0
u32 iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, u32 index, s32 size, xVec3* in)
{
	RpGeometry* geom;
	s32 max_size;
	RpSkin* skin;
	RwMatrixTag* skin_mats;
	f32* bone_weights;
	u32* bone_indices;
	xMat4x3 nmat;
}

// iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ae160
u32 iModelVertEval(RpAtomic* model, u32 index, u32 count, RwMatrixTag* mat, xVec3* vert, xVec3* dest)
{
	RpGeometry* geom;
	u32 numV;
	RpSkin* skin;
}

// iModel_SetLightKit__FP9xLightKit
// Start address: 0x1ae4e0
void iModel_SetLightKit(xLightKit* lightKit)
{
	RpLight* amb;
	type_71 dir;
	type_76 lightTypes;
	u32 i;
}

// iModelVertCount__FP8RpAtomic
// Start address: 0x1ae670
u32 iModelVertCount(RpAtomic* model)
{
}

// iModelCullPlusShadow__FP8RpAtomicP11RwMatrixTagP5xVec3Pi
// Start address: 0x1ae680
s32 iModelCullPlusShadow(RpAtomic* model, RwMatrixTag* mat, xVec3* shadowVec, s32* shadowOutside)
{
	f32 xScale2;
	f32 yScale2;
	f32 zScale2;
	RwV3d* up;
	RwV3d* at;
	RwCamera* cam;
	RwSphere worldsph;
	RwFrustumPlane* frustumPlane;
	s32 numPlanes;
	f32 nDot;
	f32 nDot;
	f32 sDot;
}

// iModelSphereCull__FP7xSphere
// Start address: 0x1ae8f0
s32 iModelSphereCull(xSphere* sphere)
{
}

// iModelCull__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1ae920
s32 iModelCull(RpAtomic* model, RwMatrixTag* mat)
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
	s32 pCurrentFrameFlags;
	s32 i;
	s32 numFrames;
	RwMatrixTag* pMatrixArray;
}

// iModelNumBones__FP8RpAtomic
// Start address: 0x1aedf0
u32 iModelNumBones(RpAtomic* model)
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
RpAtomic* iModelFileNew(void* buffer, u32 size)
{
	RwMemory rwmem;
}

// iModelStreamRead__FP8RwStream
// Start address: 0x1aefa0
RpAtomic* iModelStreamRead(RwStream* stream)
{
	RpClump* clump;
	u32 i;
	u32 maxIndex;
	f32 maxRadius;
	f32 testRadius;
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
	s32 i;
}

// GetChildFrameHierarchy__FP7RwFramePv
// Start address: 0x1af3c0
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
	RpHAnimHierarchy* hierarchy;
}

