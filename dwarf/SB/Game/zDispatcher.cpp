typedef struct RpGeometry;
typedef struct RxNodeMethods;
typedef struct RwCamera;
typedef struct xBase;
typedef struct iFogParams;
typedef struct xMemPool;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct xBound;
typedef struct xAnimSingle;
typedef struct _tagxRumble;
typedef struct xAnimPlay;
typedef struct xUpdateCullGroup;
typedef struct RwRaster;
typedef struct xEnvAsset;
typedef struct RwV3d;
typedef struct xAnimState;
typedef struct st_ZDISPATCH_DATA;
typedef struct RwTexCoords;
typedef struct zEnt;
typedef struct xEntMotionOrbitData;
typedef struct RwTexDictionary;
typedef struct xScene;
typedef struct RwFrustumPlane;
typedef struct xMovePoint;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct st_ZDISPATCH_CONTEXT;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RwPlane;
typedef struct RpMeshHeader;
typedef struct xBaseAsset;
typedef struct RxPipelineNode;
typedef struct _zPortal;
typedef struct xSerial;
typedef struct xMovePointAsset;
typedef struct xQuat;
typedef struct xVec3;
typedef struct RxCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct RxPipelineNodeParam;
typedef struct xMat4x3;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef enum _tagPadState;
typedef struct _class_0;
typedef struct RpAtomic;
typedef struct xEntBoulder;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntMechData;
typedef enum RwFogType;
typedef struct xGlobals;
typedef struct iColor_tag;
typedef struct xModelPool;
typedef struct xEntMotionSplineData;
typedef struct zEntHangable;
typedef struct RwRGBAReal;
typedef struct xEntShadow;
typedef struct xSpline3;
typedef struct RwObjectHasFrame;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _tagxPad;
typedef struct xAnimFile;
typedef struct RwLinkList;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct rxHeapFreeBlock;
typedef struct st_ZDISPATCH_DEPOT;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xModelTag;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xPortalAsset;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct zJumpParam;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RpWorldRenderOrder;
typedef struct RpWorld;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xLinkAsset;
typedef struct xSurface;
typedef struct xVec2;
typedef struct zPlatform;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct rxHeapBlockHeader;
typedef struct xEntMotionMechData;
typedef struct zCutsceneMgr;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct RpWorldSector;
typedef struct xEntDrive;
typedef struct xEntPenData;
typedef struct RpMorphTarget;
typedef struct xCoef;
typedef struct zAssetPickupTable;
typedef struct _zEnv;
typedef struct RpLight;
typedef struct xClumpCollBSPTree;
typedef struct zGlobals;
typedef struct xEntOrbitData;
typedef struct basic_rect;
typedef struct xVec4;
typedef struct xEntFrame;
typedef struct zGlobalSettings;
typedef struct RwSurfaceProperties;
typedef struct xGroup;
typedef struct RwMatrixTag;
typedef struct xUpdateCullEnt;
typedef struct rxReq;
typedef struct xGridBound;
typedef struct zPlatFMRunTime;
typedef struct xCoef3;
typedef struct zPlayerLassoInfo;
typedef struct xEntMotion;
typedef enum RxClusterValidityReq;
typedef struct zScene;
typedef struct xPlatformAsset;
typedef struct xEntMotionAsset;
typedef struct zLedgeGrabParams;
typedef struct xShadowSimplePoly;
typedef struct xEnv;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RxNodeDefEditable;
typedef enum _zPlayerWallJumpState;
typedef enum RxClusterValid;
typedef struct tri_data_0;
typedef struct xRot;
typedef struct zLasso;
typedef struct xEntSplineData;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct xLightKitLight;
typedef enum _tagRumbleType;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum _zPlayerType;
typedef struct xCollis;
typedef struct xEntMotionPenData;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef struct xCylinder;
typedef struct analog_data;
typedef struct xAnimMultiFileBase;
typedef struct xBox;
typedef struct xEntMPData;
typedef struct RxClusterDefinition;
typedef struct _class_2;
typedef struct RpPolygon;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RwSphere;
typedef enum en_DISPATCH_COMMAND;
typedef struct RpMaterialList;
typedef struct xEntMotionERData;
typedef struct xFFX;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct xQCData;
typedef struct zPlayerSettings;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxIoSpec;
typedef struct anim_coll_data;

typedef RwCamera*(*type_1)(RwCamera*);
typedef void(*type_7)(xAnimPlay*, xAnimState*);
typedef int32(*type_8)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_9)(void*);
typedef void(*type_11)(xMemPool*, void*);
typedef xBase*(*type_12)(uint32);
typedef void(*type_14)(xEnt*, xScene*, float32, xEntCollis*);
typedef RpClump*(*type_16)(RpClump*, void*);
typedef uint32(*type_17)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_19)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_24)(xBase*);
typedef void(*type_25)(RwResEntry*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_28)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_29)(uint32);
typedef int32(*type_31)(RxNodeDefinition*);
typedef RpAtomic*(*type_33)(RpAtomic*);
typedef void(*type_35)(RxNodeDefinition*);
typedef RwCamera*(*type_37)(RwCamera*);
typedef int32(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef uint32(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_47)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_55)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_58)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_62)(RpWorldSector*);
typedef uint32(*type_63)(void*, void*);
typedef int32(*type_79)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_82)(xEnt*, xScene*, float32);
typedef void(*type_87)(xEnt*, xVec3*);
typedef void(*type_89)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_92)(xEnt*);

typedef xVec4 type_0[12];
typedef uint8 type_2[2];
typedef uint32 type_3[2];
typedef uint8 type_4[2];
typedef RwTexCoords* type_5[8];
typedef float32 type_6[6];
typedef xCollis type_10[18];
typedef float32 type_13[3];
typedef int8 type_15[16];
typedef int8 type_18[32];
typedef float32 type_20[3];
typedef int8 type_21[32];
typedef xModelTag type_22[2];
typedef float32 type_23[3];
typedef uint16 type_30[3];
typedef uint8 type_32[2];
typedef xEnt* type_34[111];
typedef RxCluster type_36[1];
typedef int8 type_40[128];
typedef int8 type_41[128][6];
typedef uint8 type_44[14];
typedef xModelTag type_45[4];
typedef int8 type_46[32];
typedef float32 type_48[2];
typedef xModelInstance* type_49[14];
typedef uint8 type_50[3];
typedef int8 type_51[512];
typedef RwTexCoords* type_52[8];
typedef uint8 type_53[4];
typedef RwFrustumPlane type_54[6];
typedef uint32 type_56[72];
typedef float32 type_57[4];
typedef int8 type_59[4];
typedef xBase* type_60[72];
typedef RwV3d type_61[8];
typedef float32 type_64[4];
typedef uint8 type_65[22];
typedef uint8 type_66[22];
typedef float32 type_67[4];
typedef xVec3 type_68[5];
typedef float32 type_69[12];
typedef int8 type_70[256];
typedef int8 type_71[256][20];
typedef uint8 type_72[5];
typedef float32 type_73[12];
typedef xVec3 type_74[3];
typedef float32 type_75[12];
typedef float32 type_76[12];
typedef xVec3 type_77[60];
typedef float32 type_78[12];
typedef float32 type_80[12];
typedef float32 type_81[22];
typedef RpLight* type_83[2];
typedef float32 type_84[22];
typedef int8 type_85[512];
typedef float32 type_86[16];
typedef RwFrame* type_88[2];
typedef float32 type_90[2];
typedef uint8 type_91[2];
typedef uint32 type_93[15];
typedef uint8 type_94[3];
typedef uint32 type_95[15];
typedef uint32 type_96[4];
typedef uint32 type_97[15];
typedef uint16 type_98[3];
typedef analog_data type_99[2];
typedef uint8 type_100[2];
typedef xVec3 type_101[4];
typedef xAnimMultiFileEntry type_102[1];
typedef int8 type_103[16];

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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct st_ZDISPATCH_DATA : xBase
{
	xBaseAsset* rawass;
	int32 placeholder;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct st_ZDISPATCH_CONTEXT
{
	en_DISPATCH_COMMAND cmd;
	void* indata;
	void* inxtra;
	void* result;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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
	_class_1 anim_coll;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct xEntBoulder
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct zEntHangable
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct st_SERIAL_CLIENTINFO
{
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

struct RwLinkList
{
	RwLLLink link;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct st_ZDISPATCH_DEPOT
{
	st_ZDISPATCH_DATA* raw_pool;
	int32 raw_cnt;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
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

struct _tagiPad
{
	int32 port;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	uint8 pad[3];
	void* moprops;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float32 pauseMult;
	float32 pauseDelta;
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

struct RpSector
{
	int32 type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
};

struct zCutsceneMgr
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xCoef
{
	float32 a[4];
};

struct zAssetPickupTable
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct rxReq
{
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

struct zPlatFMRunTime
{
	uint32 flags;
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
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

struct xPlatformAsset
{
};

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct xEntSplineData
{
	int32 unknown;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_1
{
	xVec3* verts;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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
		tri_data_1 tri;
	};
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	uint8 pad[2];
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _class_2
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum en_DISPATCH_COMMAND
{
	ZDSP_CMD_INITDFLT = 0xffffffff,
	ZDSP_CMD_CTRL_CFGGET,
	ZDSP_CMD_CTRL_CFGSET,
	ZDSP_CMD_CTRL_VIBEGET,
	ZDSP_CMD_CTRL_VIBESET,
	ZDSP_CMD_SNDMOD_GET,
	ZDSP_CMD_SNDMOD_SET,
	ZDSP_CMD_SNDVOL_GET,
	ZDSP_CMD_SNDVOL_SET,
	ZDSP_CMD_SNDVOL_INCR,
	ZDSP_CMD_SNDVOL_DECR,
	ZDSP_CMD_MUSVOL_GET,
	ZDSP_CMD_MUSVOL_SET,
	ZDSP_CMD_MUSVOL_INCR,
	ZDSP_CMD_MUSVOL_DECR,
	ZDSP_CMD_SFXVOL_GET,
	ZDSP_CMD_SFXVOL_SET,
	ZDSP_CMD_SFXVOL_INCR,
	ZDSP_CMD_SFXVOL_DECR,
	ZDSP_CMD_GSTATE_GET,
	ZDSP_CMD_GSTATE_SET,
	ZDSP_CMD_GMODE_GET,
	ZDSP_CMD_GMODE_SET,
	ZDSP_CHECKPNT_SET,
	ZDSP_CMD_NOMORE
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
};

struct xFFX
{
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct anim_coll_data
{
};

int8 buffer[16];
int8 buffer[16];
basic_rect screen_bounds;
basic_rect default_adjust;
int32 g_zdsp_init;
int32 g_zdsp_dblog_init;
st_ZDISPATCH_DEPOT g_zdsp_depot;
int32 oldVibrationOption;
uint32 oldSoundMode;
uint32 oldMusicVolume;
uint32 oldSFXVolume;
zGlobals globals;
int8 zEventLogBuf[256][20];
uint8 menu_fmv_played;
int32(*ZDSP_elcb_event)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

int32 ZDSP_elcb_event(xBase* xb, uint32 toEvent, float32* toParam, xBase* toParamWidget);
int32 ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata);
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx);
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt);
void zDispatcher_sceneFinish();
void zDispatcher_scenePrepare();
void zDispatcher_Shutdown();
void zDispatcher_Startup();

// ZDSP_elcb_event__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x130980
int32 ZDSP_elcb_event(xBase* xb, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	st_ZDISPATCH_DATA* dspdata;
	iColor_tag black;
	iColor_tag clear;
	int8 events[512];
	uint32 c;
	uint32 len;
	uint32 i;
	int8 log[512];
	// Line 853, Address: 0x130980, Func Offset: 0
	// Line 860, Address: 0x130984, Func Offset: 0x4
	// Line 853, Address: 0x130988, Func Offset: 0x8
	// Line 860, Address: 0x1309a4, Func Offset: 0x24
	// Line 862, Address: 0x130c84, Func Offset: 0x304
	// Line 863, Address: 0x130c88, Func Offset: 0x308
	// Line 864, Address: 0x130d08, Func Offset: 0x388
	// Line 872, Address: 0x130d10, Func Offset: 0x390
	// Line 873, Address: 0x130d1c, Func Offset: 0x39c
	// Line 882, Address: 0x130d24, Func Offset: 0x3a4
	// Line 883, Address: 0x130d28, Func Offset: 0x3a8
	// Line 885, Address: 0x130d60, Func Offset: 0x3e0
	// Line 887, Address: 0x130d68, Func Offset: 0x3e8
	// Line 889, Address: 0x130da0, Func Offset: 0x420
	// Line 891, Address: 0x130da8, Func Offset: 0x428
	// Line 893, Address: 0x130de4, Func Offset: 0x464
	// Line 894, Address: 0x130dec, Func Offset: 0x46c
	// Line 895, Address: 0x130df0, Func Offset: 0x470
	// Line 897, Address: 0x130e2c, Func Offset: 0x4ac
	// Line 899, Address: 0x130e34, Func Offset: 0x4b4
	// Line 900, Address: 0x130e38, Func Offset: 0x4b8
	// Line 901, Address: 0x130e74, Func Offset: 0x4f4
	// Line 902, Address: 0x130e7c, Func Offset: 0x4fc
	// Line 903, Address: 0x130e80, Func Offset: 0x500
	// Line 904, Address: 0x130eb8, Func Offset: 0x538
	// Line 907, Address: 0x130ec0, Func Offset: 0x540
	// Line 909, Address: 0x130ef8, Func Offset: 0x578
	// Line 911, Address: 0x130f00, Func Offset: 0x580
	// Line 913, Address: 0x130f3c, Func Offset: 0x5bc
	// Line 915, Address: 0x130f44, Func Offset: 0x5c4
	// Line 916, Address: 0x130f48, Func Offset: 0x5c8
	// Line 917, Address: 0x130f78, Func Offset: 0x5f8
	// Line 919, Address: 0x130f80, Func Offset: 0x600
	// Line 920, Address: 0x130fb0, Func Offset: 0x630
	// Line 923, Address: 0x130fb8, Func Offset: 0x638
	// Line 924, Address: 0x130fe8, Func Offset: 0x668
	// Line 926, Address: 0x130ff0, Func Offset: 0x670
	// Line 927, Address: 0x131020, Func Offset: 0x6a0
	// Line 930, Address: 0x131028, Func Offset: 0x6a8
	// Line 931, Address: 0x131058, Func Offset: 0x6d8
	// Line 933, Address: 0x131060, Func Offset: 0x6e0
	// Line 935, Address: 0x131090, Func Offset: 0x710
	// Line 1008, Address: 0x131098, Func Offset: 0x718
	// Line 1009, Address: 0x1310a0, Func Offset: 0x720
	// Line 1013, Address: 0x1310a8, Func Offset: 0x728
	// Line 1014, Address: 0x1310ac, Func Offset: 0x72c
	// Line 1015, Address: 0x1310b8, Func Offset: 0x738
	// Line 1023, Address: 0x1310c0, Func Offset: 0x740
	// Line 1025, Address: 0x1310cc, Func Offset: 0x74c
	// Line 1027, Address: 0x1310d4, Func Offset: 0x754
	// Line 1030, Address: 0x1310d8, Func Offset: 0x758
	// Line 1034, Address: 0x1310e8, Func Offset: 0x768
	// Line 1037, Address: 0x131128, Func Offset: 0x7a8
	// Line 1044, Address: 0x131130, Func Offset: 0x7b0
	// Line 1046, Address: 0x131138, Func Offset: 0x7b8
	// Line 1051, Address: 0x131140, Func Offset: 0x7c0
	// Line 1053, Address: 0x131148, Func Offset: 0x7c8
	// Line 1057, Address: 0x131150, Func Offset: 0x7d0
	// Line 1058, Address: 0x131158, Func Offset: 0x7d8
	// Line 1059, Address: 0x131180, Func Offset: 0x800
	// Line 1061, Address: 0x131198, Func Offset: 0x818
	// Line 1067, Address: 0x1311a0, Func Offset: 0x820
	// Line 1068, Address: 0x1311a8, Func Offset: 0x828
	// Line 1071, Address: 0x131218, Func Offset: 0x898
	// Line 1078, Address: 0x131220, Func Offset: 0x8a0
	// Line 1079, Address: 0x131228, Func Offset: 0x8a8
	// Line 1080, Address: 0x131230, Func Offset: 0x8b0
	// Line 1082, Address: 0x131238, Func Offset: 0x8b8
	// Line 1083, Address: 0x131240, Func Offset: 0x8c0
	// Line 1089, Address: 0x131248, Func Offset: 0x8c8
	// Line 1090, Address: 0x131268, Func Offset: 0x8e8
	// Line 1093, Address: 0x131270, Func Offset: 0x8f0
	// Line 1094, Address: 0x131290, Func Offset: 0x910
	// Line 1113, Address: 0x131298, Func Offset: 0x918
	// Line 1114, Address: 0x1312a4, Func Offset: 0x924
	// Line 1116, Address: 0x1312ac, Func Offset: 0x92c
	// Line 1117, Address: 0x1312b0, Func Offset: 0x930
	// Line 1118, Address: 0x1312b8, Func Offset: 0x938
	// Line 1130, Address: 0x1312c0, Func Offset: 0x940
	// Line 1132, Address: 0x1312e4, Func Offset: 0x964
	// Line 1131, Address: 0x1312e8, Func Offset: 0x968
	// Line 1132, Address: 0x1312ec, Func Offset: 0x96c
	// Line 1135, Address: 0x1312f4, Func Offset: 0x974
	// Line 1132, Address: 0x1312f8, Func Offset: 0x978
	// Line 1140, Address: 0x1312fc, Func Offset: 0x97c
	// Line 1141, Address: 0x13130c, Func Offset: 0x98c
	// Line 1145, Address: 0x131318, Func Offset: 0x998
	// Line 1146, Address: 0x131330, Func Offset: 0x9b0
	// Line 1147, Address: 0x131350, Func Offset: 0x9d0
	// Line 1150, Address: 0x131370, Func Offset: 0x9f0
	// Line 1153, Address: 0x131380, Func Offset: 0xa00
	// Line 1156, Address: 0x131388, Func Offset: 0xa08
	// Line 1157, Address: 0x1313b4, Func Offset: 0xa34
	// Line 1159, Address: 0x1313bc, Func Offset: 0xa3c
	// Line 1160, Address: 0x1313c0, Func Offset: 0xa40
	// Line 1168, Address: 0x1314f0, Func Offset: 0xb70
	// Line 1167, Address: 0x131500, Func Offset: 0xb80
	// Line 1168, Address: 0x131504, Func Offset: 0xb84
	// Func End, Address: 0x131510, Func Offset: 0xb90
}

// ZDSP_doCommand__FP17st_ZDISPATCH_DATAP20st_ZDISPATCH_CONTEXT
// Start address: 0x131510
int32 ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt)
{
	int32 iv;
	en_DISPATCH_COMMAND cmd;
	void* indata;
	void* result;
	int32 warned;
	// Line 539, Address: 0x131510, Func Offset: 0
	// Line 549, Address: 0x131524, Func Offset: 0x14
	// Line 544, Address: 0x131528, Func Offset: 0x18
	// Line 546, Address: 0x13152c, Func Offset: 0x1c
	// Line 549, Address: 0x131530, Func Offset: 0x20
	// Line 554, Address: 0x131538, Func Offset: 0x28
	// Line 557, Address: 0x131540, Func Offset: 0x30
	// Line 563, Address: 0x131564, Func Offset: 0x54
	// Line 570, Address: 0x131568, Func Offset: 0x58
	// Line 578, Address: 0x131570, Func Offset: 0x60
	// Line 579, Address: 0x131578, Func Offset: 0x68
	// Line 589, Address: 0x131580, Func Offset: 0x70
	// Line 590, Address: 0x131588, Func Offset: 0x78
	// Line 600, Address: 0x131590, Func Offset: 0x80
	// Line 597, Address: 0x131594, Func Offset: 0x84
	// Line 600, Address: 0x131598, Func Offset: 0x88
	// Line 602, Address: 0x1315a4, Func Offset: 0x94
	// Line 603, Address: 0x1315a8, Func Offset: 0x98
	// Line 604, Address: 0x1315b4, Func Offset: 0xa4
	// Line 606, Address: 0x1315c4, Func Offset: 0xb4
	// Line 616, Address: 0x1315cc, Func Offset: 0xbc
	// Line 621, Address: 0x1315d0, Func Offset: 0xc0
	// Line 622, Address: 0x1315d8, Func Offset: 0xc8
	// Line 629, Address: 0x1315e0, Func Offset: 0xd0
	// Line 630, Address: 0x1315e4, Func Offset: 0xd4
	// Line 631, Address: 0x131600, Func Offset: 0xf0
	// Line 634, Address: 0x131614, Func Offset: 0x104
	// Line 636, Address: 0x131618, Func Offset: 0x108
	// Line 637, Address: 0x131628, Func Offset: 0x118
	// Line 647, Address: 0x131630, Func Offset: 0x120
	// Line 648, Address: 0x131638, Func Offset: 0x128
	// Line 655, Address: 0x131640, Func Offset: 0x130
	// Line 656, Address: 0x1316bc, Func Offset: 0x1ac
	// Line 657, Address: 0x1316cc, Func Offset: 0x1bc
	// Line 660, Address: 0x1316d4, Func Offset: 0x1c4
	// Line 664, Address: 0x1316d8, Func Offset: 0x1c8
	// Line 665, Address: 0x1316e0, Func Offset: 0x1d0
	// Line 666, Address: 0x1316f8, Func Offset: 0x1e8
	// Line 668, Address: 0x131700, Func Offset: 0x1f0
	// Line 670, Address: 0x131780, Func Offset: 0x270
	// Line 671, Address: 0x131790, Func Offset: 0x280
	// Line 678, Address: 0x131798, Func Offset: 0x288
	// Line 679, Address: 0x1317a0, Func Offset: 0x290
	// Line 680, Address: 0x1317b8, Func Offset: 0x2a8
	// Line 682, Address: 0x1317c0, Func Offset: 0x2b0
	// Line 684, Address: 0x131840, Func Offset: 0x330
	// Line 685, Address: 0x131850, Func Offset: 0x340
	// Line 695, Address: 0x131858, Func Offset: 0x348
	// Line 696, Address: 0x131860, Func Offset: 0x350
	// Line 703, Address: 0x131868, Func Offset: 0x358
	// Line 704, Address: 0x1318f8, Func Offset: 0x3e8
	// Line 705, Address: 0x131908, Func Offset: 0x3f8
	// Line 712, Address: 0x131910, Func Offset: 0x400
	// Line 713, Address: 0x131918, Func Offset: 0x408
	// Line 714, Address: 0x131930, Func Offset: 0x420
	// Line 716, Address: 0x131938, Func Offset: 0x428
	// Line 718, Address: 0x1319cc, Func Offset: 0x4bc
	// Line 719, Address: 0x1319dc, Func Offset: 0x4cc
	// Line 722, Address: 0x1319e4, Func Offset: 0x4d4
	// Line 726, Address: 0x1319e8, Func Offset: 0x4d8
	// Line 727, Address: 0x1319f0, Func Offset: 0x4e0
	// Line 728, Address: 0x131a08, Func Offset: 0x4f8
	// Line 730, Address: 0x131a10, Func Offset: 0x500
	// Line 732, Address: 0x131aa4, Func Offset: 0x594
	// Line 733, Address: 0x131ab4, Func Offset: 0x5a4
	// Line 743, Address: 0x131abc, Func Offset: 0x5ac
	// Line 748, Address: 0x131ac0, Func Offset: 0x5b0
	// Line 749, Address: 0x131ac8, Func Offset: 0x5b8
	// Line 757, Address: 0x131ad0, Func Offset: 0x5c0
	// Line 758, Address: 0x131ad8, Func Offset: 0x5c8
	// Line 759, Address: 0x131ae8, Func Offset: 0x5d8
	// Line 770, Address: 0x131af0, Func Offset: 0x5e0
	// Line 771, Address: 0x131af8, Func Offset: 0x5e8
	// Line 782, Address: 0x131b00, Func Offset: 0x5f0
	// Line 783, Address: 0x131b08, Func Offset: 0x5f8
	// Line 802, Address: 0x131b1c, Func Offset: 0x60c
	// Line 805, Address: 0x131b20, Func Offset: 0x610
	// Line 804, Address: 0x131b30, Func Offset: 0x620
	// Line 805, Address: 0x131b34, Func Offset: 0x624
	// Func End, Address: 0x131b3c, Func Offset: 0x62c
}

// zDispatcher_Load__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x131b40
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
	// Line 256, Address: 0x131b40, Func Offset: 0
	// Func End, Address: 0x131b48, Func Offset: 0x8
}

// zDispatcher_Save__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x131b50
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
	// Line 238, Address: 0x131b50, Func Offset: 0
	// Func End, Address: 0x131b58, Func Offset: 0x8
}

// zDispatcher_InitDep__FP17st_ZDISPATCH_DATAP6zScene
// Start address: 0x131b60
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata)
{
	// Line 217, Address: 0x131b60, Func Offset: 0
	// Func End, Address: 0x131b70, Func Offset: 0x10
}

// zDispatcher_Init__FP17st_ZDISPATCH_DATAP10xBaseAsset
// Start address: 0x131b70
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
{
	// Line 210, Address: 0x131b70, Func Offset: 0
	// Line 211, Address: 0x131b84, Func Offset: 0x14
	// Line 213, Address: 0x131bd0, Func Offset: 0x60
	// Func End, Address: 0x131be4, Func Offset: 0x74
}

// zDispatcher_getInst__FP17st_ZDISPATCH_DATAi
// Start address: 0x131bf0
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx)
{
	// Line 198, Address: 0x131bf0, Func Offset: 0
	// Line 199, Address: 0x131bfc, Func Offset: 0xc
	// Func End, Address: 0x131c04, Func Offset: 0x14
}

// zDispatcher_memPool__Fi
// Start address: 0x131c10
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt)
{
	st_ZDISPATCH_DATA* pool;
	st_ZDISPATCH_DEPOT* depot;
	// Line 171, Address: 0x131c10, Func Offset: 0
	// Line 176, Address: 0x131c28, Func Offset: 0x18
	// Line 178, Address: 0x131c38, Func Offset: 0x28
	// Line 180, Address: 0x131c54, Func Offset: 0x44
	// Line 183, Address: 0x131c6c, Func Offset: 0x5c
	// Line 186, Address: 0x131c70, Func Offset: 0x60
	// Line 184, Address: 0x131c74, Func Offset: 0x64
	// Line 187, Address: 0x131c78, Func Offset: 0x68
	// Func End, Address: 0x131c90, Func Offset: 0x80
}

// zDispatcher_sceneFinish__Fv
// Start address: 0x131c90
void zDispatcher_sceneFinish()
{
	st_ZDISPATCH_DEPOT* depot;
	// Line 157, Address: 0x131c90, Func Offset: 0
	// Line 158, Address: 0x131c94, Func Offset: 0x4
	// Line 157, Address: 0x131c98, Func Offset: 0x8
	// Line 160, Address: 0x131c9c, Func Offset: 0xc
	// Line 163, Address: 0x131cac, Func Offset: 0x1c
	// Line 166, Address: 0x131cb8, Func Offset: 0x28
	// Func End, Address: 0x131cc4, Func Offset: 0x34
}

// zDispatcher_scenePrepare__Fv
// Start address: 0x131cd0
void zDispatcher_scenePrepare()
{
	st_ZDISPATCH_DEPOT* depot;
	// Line 143, Address: 0x131cd0, Func Offset: 0
	// Line 144, Address: 0x131cd4, Func Offset: 0x4
	// Line 143, Address: 0x131cd8, Func Offset: 0x8
	// Line 146, Address: 0x131cdc, Func Offset: 0xc
	// Line 151, Address: 0x131cec, Func Offset: 0x1c
	// Line 154, Address: 0x131cf8, Func Offset: 0x28
	// Func End, Address: 0x131d04, Func Offset: 0x34
}

// zDispatcher_Shutdown__Fv
// Start address: 0x131d10
void zDispatcher_Shutdown()
{
	// Line 137, Address: 0x131d10, Func Offset: 0
	// Func End, Address: 0x131d18, Func Offset: 0x8
}

// zDispatcher_Startup__Fv
// Start address: 0x131d20
void zDispatcher_Startup()
{
	// Line 132, Address: 0x131d20, Func Offset: 0
	// Func End, Address: 0x131d28, Func Offset: 0x8
}

