typedef struct xCollis;
typedef struct RpInterpolator;
typedef struct RxHeap;
typedef struct xLightKit;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RwSky2DVertex;
typedef struct RxPipelineNode;
typedef struct analog_data;
typedef struct xQuat;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct RwCamera;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct sceGifTag;
typedef struct xAnimMultiFile;
typedef struct xGroup;
typedef struct RpPolygon;
typedef struct RxPipelineRequiresCluster;
typedef union sceGsScissor;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct RwMatrixTag;
typedef struct xBaseAsset;
typedef struct xJSPNodeInfo;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct sceGsDispEnv;
typedef struct tGS_SMODE2;
typedef struct xUpdateCullMgr;
typedef struct xClumpCollBSPBranchNode;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef union sceGsPrim;
typedef union sceGsFrame;
typedef struct _class_0;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTransitionList;
typedef union sceGsZbuf;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct xEntCollis;
typedef struct RpWorldSector;
typedef struct xEntAsset;
typedef struct xAnimTable;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransition;
typedef struct xUpdateCullEnt;
typedef struct xFFX;
typedef struct tGS_DISPFB2;
typedef struct RpMorphTarget;
typedef struct xEnt;
typedef struct xJSPHeader;
typedef struct xBound;
typedef struct iFogParams;
typedef struct RpWorld;
typedef struct xMat4x3;
typedef struct RpVertexNormal;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimState;
typedef struct _tagxRumble;
typedef struct xEntFrame;
typedef struct sceGsDrawEnv1;
typedef struct rxHeapFreeBlock;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xRot;
typedef struct xUpdateCullGroup;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xQCData;
typedef struct xAnimFile;
typedef enum rxEmbeddedPacketState;
typedef struct xBBox;
typedef struct xSphere;
typedef struct xCamera;
typedef struct xAnimSingle;
typedef struct xShadowSimplePoly;
typedef struct xEnv;
typedef struct xModelPool;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct iEnv;
typedef struct xCylinder;
typedef struct RpTriangle;
typedef enum _tagPadState;
typedef struct RwFrame;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xAnimMultiFileBase;
typedef struct xGlobals;
typedef struct sceGsDBuffDc;
typedef struct xLightKitLight;
typedef struct _tagxPad;
typedef struct xGridBound;
typedef struct xScene;
typedef struct RwSphere;
typedef struct xAnimEffect;
typedef struct xShadowSimpleCache;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef union sceGsDthe;
typedef struct _tagPadAnalog;
typedef struct RpLight;
typedef struct xGroupAsset;
typedef struct xAnimPlay;
typedef struct xMat3x3;
typedef union sceGsTest;
typedef struct RxClusterRef;
typedef struct xLinkAsset;
typedef struct _tagiPad;
typedef enum RpWorldRenderOrder;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct tGS_DISPLAY2;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct sceGsDrawEnv2;
typedef struct RpSector;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct RxPipelineCluster;
typedef union sceGsPrmodecont;
typedef struct RwSky2DVertexFields;
typedef union sceGsColclamp;
typedef struct RwFrustumPlane;
typedef struct xEntShadow;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct anim_coll_data;
typedef union sceGsXyoffset;
typedef struct RxCluster;
typedef struct tri_data;
typedef struct RxPipelineNodeParam;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPacket;
typedef struct sceGsRgbaq;
typedef struct tGS_PMODE;
typedef enum RwFogType;
typedef struct xClumpCollBSPTriangle;
typedef struct xBase;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xSurface;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_1;
typedef struct xModelBucket;
typedef union sceGsXyz;
typedef struct RwV2d;
typedef union _class_2;
typedef struct sceGsClear;
typedef struct tGS_BGCOLOR;
typedef struct xVec2;
typedef enum _tagRumbleType;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_2)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_10)(RxNodeDefinition*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_13)(RxPipelineNode*);
typedef void(*type_14)(RxPipelineNode*);
typedef int32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef void(*type_20)(void*);
typedef xBase*(*type_22)(uint32);
typedef uint32(*type_23)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int8*(*type_25)(xBase*);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef int8*(*type_27)(uint32);
typedef void(*type_29)(xEnt*, xScene*, float32);
typedef void(*type_33)(xEnt*, xVec3*);
typedef uint32(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_36)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_37)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_39)(xEnt*);
typedef uint32(*type_46)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_49)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_54)(xMemPool*, void*);
typedef RpWorldSector*(*type_56)(RpWorldSector*);
typedef uint32(*type_61)(void*, void*);
typedef void(*type_63)(RwResEntry*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef RwV3d type_5[8];
typedef uint16 type_8[3];
typedef float32 type_9[2];
typedef analog_data type_12[2];
typedef RwSky2DVertex type_16[4];
typedef int8 type_18[4];
typedef RwTexCoords* type_19[8];
typedef xVec3 type_21[3];
typedef uint16 type_24[3];
typedef sceGsDispEnv type_28[2];
typedef float32 type_30[2];
typedef uint32 type_31[4];
typedef xVec4 type_32[12];
typedef float32 type_34[16];
typedef int8 type_38[128];
typedef type_38 type_40[6];
typedef uint8 type_41[2];
typedef uint32 type_42[4096];
typedef xAnimMultiFileEntry type_43[1];
typedef RpLight* type_44[2];
typedef uint16 type_45[6];
typedef int8 type_47[32];
typedef RwFrame* type_48[2];
typedef RwTexCoords* type_51[8];
typedef xVec3 type_53[4];
typedef uint8 type_55[3];
typedef int8 type_57[32];
typedef uint8 type_58[22];
typedef float32 type_59[4];
typedef int8 type_60[32];
typedef uint8 type_62[22];
typedef xCollis type_64[18];
typedef RxCluster type_65[1];
typedef <unknown type (0xa510)> type_67[4];
typedef float32 type_68[22];
typedef float32 type_69[22];

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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_50 beginUpdate;
	type_52 endUpdate;
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
	type_1 frustumPlanes;
	RwBBox frustumBoundBox;
	type_5 frustumCorners;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_31 pad;
};

struct sceGifTag
{
	union
	{
		ulong32 NLOOP;
		ulong32 EOP;
		ulong32 pad16;
		ulong32 id;
		ulong32 PRE;
		ulong32 PRIM;
		ulong32 FLG;
		ulong32 NREG;
	};
	union
	{
		ulong32 REGS0;
		ulong32 REGS1;
		ulong32 REGS2;
		ulong32 REGS3;
		ulong32 REGS4;
		ulong32 REGS5;
		ulong32 REGS6;
		ulong32 REGS7;
		ulong32 REGS8;
		ulong32 REGS9;
		ulong32 REGS10;
		ulong32 REGS11;
		ulong32 REGS12;
		ulong32 REGS13;
		ulong32 REGS14;
		ulong32 REGS15;
	};
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_43 Files;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RpPolygon
{
	uint16 matIndex;
	type_8 vertIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

union sceGsScissor
{
	ulong32 SCAX0;
	ulong32 pad11;
	ulong32 SCAX1;
	ulong32 pad27;
	ulong32 SCAY0;
	ulong32 pad43;
	ulong32 SCAY1;
	ulong32 pad59;
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
	type_26 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct tGS_SMODE2
{
	union
	{
		uint32 INT;
		uint32 FFMD;
		uint32 DPMS;
		uint32 p0;
	};
	uint32 p1;
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
	type_20 activateCB;
	type_20 deactivateCB;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

union sceGsPrim
{
	ulong32 PRIM;
	ulong32 IIP;
	ulong32 TME;
	ulong32 FGE;
	ulong32 ABE;
	ulong32 AA1;
	ulong32 FST;
	ulong32 CTXT;
	ulong32 FIX;
	ulong32 pad11;
};

union sceGsFrame
{
	ulong32 FBP;
	ulong32 pad09;
	ulong32 FBW;
	ulong32 pad22;
	ulong32 PSM;
	ulong32 pad30;
	ulong32 FBMSK;
};

struct _class_0
{
	xVec3* verts;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

union sceGsZbuf
{
	ulong32 ZBP;
	ulong32 pad09;
	ulong32 PSM;
	ulong32 pad28;
	ulong32 ZMSK;
	ulong32 pad33;
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
	type_51 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_64 colls;
	type_36 post;
	type_46 depenq;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_19 texCoords;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_35 Conditional;
	type_35 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_61 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xFFX
{
};

struct tGS_DISPFB2
{
	union
	{
		uint32 FBP;
		uint32 FBW;
		uint32 PSM;
		uint32 p0;
	};
	union
	{
		uint32 DBX;
		uint32 DBY;
		uint32 p1;
	};
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_29 update;
	type_29 endUpdate;
	type_33 bupdate;
	type_37 move;
	type_39 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_49 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xJSPHeader
{
	type_18 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_55 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_56 renderCallBack;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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
	type_4 BeforeEnter;
	type_7 StateCallback;
	type_11 BeforeAnimMatrices;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	ulong32 frame1addr;
	sceGsZbuf zbuf1;
	long32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	long32 xyoffset1addr;
	sceGsScissor scissor1;
	long32 scissor1addr;
	sceGsPrmodecont prmodecont;
	long32 prmodecontaddr;
	sceGsColclamp colclamp;
	long32 colclampaddr;
	sceGsDthe dthe;
	long32 dtheaddr;
	sceGsTest test1;
	long32 test1addr;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	type_63 destroyNotify;
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

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_41 NumAnims;
	void** RawData;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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
	type_32 frustplane;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_30 BilinearLerp;
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

struct xShadowSimplePoly
{
	type_21 vert;
	xVec3 norm;
};

struct xEnv
{
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_44 light;
	type_48 light_frame;
	int32 memlvl;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RpTriangle
{
	type_24 vertIndex;
	int16 matIndex;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_40 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_47 sceneStart;
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

struct sceGsDBuffDc
{
	type_28 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_34 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct _tagxPad
{
	type_58 value;
	type_62 last_value;
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
	type_68 up_tmr;
	type_69 down_tmr;
	type_12 analog;
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
	type_22 resolvID;
	type_25 base2Name;
	type_27 id2Name;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_23 Callback;
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

union sceGsDthe
{
	ulong32 DTHE;
	ulong32 pad01;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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
	type_11 BeforeAnimMatrices;
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

union sceGsTest
{
	ulong32 ATE;
	ulong32 ATST;
	ulong32 AREF;
	ulong32 AFAIL;
	ulong32 DATE;
	ulong32 DATM;
	ulong32 ZTE;
	ulong32 ZTST;
	ulong32 pad19;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_59 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _tagiPad
{
	int32 port;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct tGS_DISPLAY2
{
	union
	{
		uint32 DX;
		uint32 DY;
		uint32 MAGH;
		uint32 MAGV;
		uint32 p0;
	};
	union
	{
		uint32 DW;
		uint32 DH;
		uint32 p1;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_57 name;
	type_60 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct sceGsDrawEnv2
{
	sceGsFrame frame2;
	ulong32 frame2addr;
	sceGsZbuf zbuf2;
	long32 zbuf2addr;
	sceGsXyoffset xyoffset2;
	long32 xyoffset2addr;
	sceGsScissor scissor2;
	long32 scissor2addr;
	sceGsPrmodecont prmodecont;
	long32 prmodecontaddr;
	sceGsColclamp colclamp;
	long32 colclampaddr;
	sceGsDthe dthe;
	long32 dtheaddr;
	sceGsTest test2;
	long32 test2addr;
};

struct RpSector
{
	int32 type;
};

struct RxNodeMethods
{
	type_3 nodeBody;
	type_6 nodeInit;
	type_10 nodeTerm;
	type_13 pipelineNodeInit;
	type_14 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_54 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

union sceGsPrmodecont
{
	ulong32 AC;
	ulong32 pad01;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

union sceGsColclamp
{
	ulong32 CLAMP;
	ulong32 pad01;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_9 radius;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct anim_coll_data
{
};

union sceGsXyoffset
{
	ulong32 OFX;
	ulong32 pad16;
	ulong32 OFY;
	ulong32 pad48;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_65 clusters;
};

struct sceGsRgbaq
{
	union
	{
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 A;
	};
	float32 Q;
};

struct tGS_PMODE
{
	union
	{
		uint32 EN1;
		uint32 EN2;
		uint32 CRTMD;
		uint32 MMOD;
		uint32 AMOD;
		uint32 SLBG;
		uint32 ALP;
		uint32 p0;
	};
	uint32 p1;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
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
	type_66 sync;
};

struct xSurface
{
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_67 qWords;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

union sceGsXyz
{
	ulong32 X;
	ulong32 Y;
	ulong32 Z;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct sceGsClear
{
	sceGsTest testa;
	long32 testaaddr;
	sceGsPrim prim;
	long32 primaddr;
	sceGsRgbaq rgbaq;
	long32 rgbaqaddr;
	sceGsXyz xyz2a;
	long32 xyz2aaddr;
	sceGsXyz xyz2b;
	long32 xyz2baddr;
	sceGsTest testb;
	long32 testbaddr;
};

struct tGS_BGCOLOR
{
	union
	{
		uint32 R;
		uint32 G;
		uint32 B;
		uint32 p0;
	};
	uint32 p1;
};

struct xVec2
{
	float32 x;
	float32 y;
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

float32 sCameraNearClip;
float32 sCameraFarClip;
RwCamera* globalCamera;
RwCamera* sMainGameCamera;
float32 xCameraLastFov;
type_16 Vertex;
type_45 Index;
RwRaster* sBBraster;
RwCamera* sBBcamera;
uint32 setup;
float32 xfactor;
float32 yfactor;
xGlobals* xglobals;
type_42 ourGlobals;
int32 skyCameraExt;
<unknown type (0xa510)>* _rwDMAPktPtr;
sceGsDBuffDc _rwDMAFlipData;
int32 skyFrameBit;

void iCameraSetFogRenderStates();
void iCameraUpdateFog(long32 t);
void iCameraSetFogParams(iFogParams* fp, float32 time);
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane);
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix);
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom);
void iCameraSetFOV(RwCamera* cam, float32 fov);
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos);
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane);
void iCameraShowRaster(RwCamera* cam);
void iCameraEnd(RwCamera* cam);
void iCameraBegin(RwCamera* cam, int32 clear);
void iCameraDestroy(RwCamera* camera);
RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera);

// iCameraSetFogRenderStates__Fv
// Start address: 0x35c2f0
void iCameraSetFogRenderStates()
{
	RwCamera* pCamera;
	iFogParams* pFogParams;
	uint32 bite_me;
}

// iCameraUpdateFog__FP8RwCameral
// Start address: 0x35c3d0
void iCameraUpdateFog(long32 t)
{
	iFogParams* fa;
	iFogParams* fb;
	float32 a;
}

// iCameraSetFogParams__FP10iFogParamsf
// Start address: 0x35ca60
void iCameraSetFogParams(iFogParams* fp, float32 time)
{
}

// iCameraSetNearFarClip__Fff
// Start address: 0x35ccd0
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane)
{
}

// iCamGetViewMatrix__FP8RwCameraP7xMat4x3
// Start address: 0x35cd10
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix)
{
	RwMatrixTag* rw_view;
}

// iCameraAssignEnv__FP8RwCameraP4iEnv
// Start address: 0x35cdb0
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom)
{
}

// iCameraSetFOV__FP8RwCameraf
// Start address: 0x35cdf0
void iCameraSetFOV(RwCamera* cam, float32 fov)
{
	RwV2d vw;
}

// iCameraUpdatePos__FP8RwCameraP7xMat4x3
// Start address: 0x35ce70
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
}

// iCameraFrustumPlanes__FP8RwCameraP5xVec4
// Start address: 0x35ced0
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane)
{
	RwFrustumPlane* rwPlane;
}

// iCameraShowRaster__FP8RwCamera
// Start address: 0x35d060
void iCameraShowRaster(RwCamera* cam)
{
}

// iCameraEnd__FP8RwCamera
// Start address: 0x35d070
void iCameraEnd(RwCamera* cam)
{
}

// iCameraBegin__FP8RwCamerai
// Start address: 0x35d0a0
void iCameraBegin(RwCamera* cam, int32 clear)
{
}

// iCameraDestroy__FP8RwCamera
// Start address: 0x35d120
void iCameraDestroy(RwCamera* camera)
{
	RpWorld* pWorld;
	RwRaster* raster;
	RwFrame* frame;
}

// iCameraCreate__Fiii
// Start address: 0x35d1f0
RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera)
{
	RwV2d vw;
	RwCamera* camera;
}

