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
typedef struct sceGsScissor;
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
typedef struct sceGsPrim;
typedef struct sceGsFrame;
typedef struct _class_0;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTransitionList;
typedef struct sceGsZbuf;
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
typedef struct sceGsDthe;
typedef struct _tagPadAnalog;
typedef struct RpLight;
typedef struct xGroupAsset;
typedef struct xAnimPlay;
typedef struct xMat3x3;
typedef struct sceGsTest;
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
typedef struct sceGsPrmodecont;
typedef struct RwSky2DVertexFields;
typedef struct sceGsColclamp;
typedef struct RwFrustumPlane;
typedef struct xEntShadow;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct anim_coll_data;
typedef struct sceGsXyoffset;
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
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct _class_1;
typedef struct xModelBucket;
typedef struct sceGsXyz;
typedef struct RwV2d;
typedef struct _class_2;
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
typedef int8 type_40[128][6];
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
typedef <unknown fundamental type (0xa510)> type_67[4];
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
	uint32 pad[4];
};

struct sceGifTag
{
	struct
	{
		ulong32 NLOOP : 15;
		ulong32 EOP : 1;
		ulong32 pad16 : 16;
		ulong32 id : 14;
		ulong32 PRE : 1;
		ulong32 PRIM : 11;
		ulong32 FLG : 2;
		ulong32 NREG : 4;
	};
	struct
	{
		ulong32 REGS0 : 4;
		ulong32 REGS1 : 4;
		ulong32 REGS2 : 4;
		ulong32 REGS3 : 4;
		ulong32 REGS4 : 4;
		ulong32 REGS5 : 4;
		ulong32 REGS6 : 4;
		ulong32 REGS7 : 4;
		ulong32 REGS8 : 4;
		ulong32 REGS9 : 4;
		ulong32 REGS10 : 4;
		ulong32 REGS11 : 4;
		ulong32 REGS12 : 4;
		ulong32 REGS13 : 4;
		ulong32 REGS14 : 4;
		ulong32 REGS15 : 4;
	};
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	uint16 vertIndex[3];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct sceGsScissor
{
	struct
	{
		ulong32 SCAX0 : 11;
		ulong32 pad11 : 5;
		ulong32 SCAX1 : 11;
		ulong32 pad27 : 5;
		ulong32 SCAY0 : 11;
		ulong32 pad43 : 5;
		ulong32 SCAY1 : 11;
		ulong32 pad59 : 5;
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
	struct
	{
		uint32 INT : 1;
		uint32 FFMD : 1;
		uint32 DPMS : 2;
		uint32 p0 : 28;
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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

struct sceGsPrim
{
	struct
	{
		ulong32 PRIM : 3;
		ulong32 IIP : 1;
		ulong32 TME : 1;
		ulong32 FGE : 1;
		ulong32 ABE : 1;
		ulong32 AA1 : 1;
		ulong32 FST : 1;
		ulong32 CTXT : 1;
		ulong32 FIX : 1;
		ulong32 pad11 : 53;
	};
};

struct sceGsFrame
{
	struct
	{
		ulong32 FBP : 9;
		ulong32 pad09 : 7;
		ulong32 FBW : 6;
		ulong32 pad22 : 2;
		ulong32 PSM : 6;
		ulong32 pad30 : 2;
		ulong32 FBMSK : 32;
	};
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
	RpClump*(*callback)(RpClump*, void*);
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

struct sceGsZbuf
{
	struct
	{
		ulong32 ZBP : 9;
		ulong32 pad09 : 15;
		ulong32 PSM : 4;
		ulong32 pad28 : 4;
		ulong32 ZMSK : 1;
		ulong32 pad33 : 31;
	};
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xFFX
{
};

struct tGS_DISPFB2
{
	struct
	{
		uint32 FBP : 9;
		uint32 FBW : 6;
		uint32 PSM : 5;
		uint32 p0 : 12;
	};
	struct
	{
		uint32 DBX : 11;
		uint32 DBY : 11;
		uint32 p1 : 10;
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

struct xJSPHeader
{
	int8 idtag[4];
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
	uint8 pad[3];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	void(*destroyNotify)(RwResEntry*);
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
	uint8 NumAnims[2];
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
	xVec4 frustplane[12];
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint16 vertIndex[3];
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

struct sceGsDBuffDc
{
	sceGsDispEnv disp[2];
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
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct sceGsDthe
{
	struct
	{
		ulong32 DTHE : 1;
		ulong32 pad01 : 63;
	};
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct sceGsTest
{
	struct
	{
		ulong32 ATE : 1;
		ulong32 ATST : 3;
		ulong32 AREF : 8;
		ulong32 AFAIL : 2;
		ulong32 DATE : 1;
		ulong32 DATM : 1;
		ulong32 ZTE : 1;
		ulong32 ZTST : 2;
		ulong32 pad19 : 45;
	};
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
	float32 param[4];
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
	struct
	{
		uint32 DX : 12;
		uint32 DY : 11;
		uint32 MAGH : 4;
		uint32 MAGV : 2;
		uint32 p0 : 3;
	};
	struct
	{
		uint32 DW : 12;
		uint32 DH : 11;
		uint32 p1 : 9;
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
	int8 name[32];
	int8 mask[32];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct sceGsPrmodecont
{
	struct
	{
		ulong32 AC : 1;
		ulong32 pad01 : 63;
	};
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

struct sceGsColclamp
{
	struct
	{
		ulong32 CLAMP : 1;
		ulong32 pad01 : 63;
	};
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
	float32 radius[2];
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

struct sceGsXyoffset
{
	struct
	{
		ulong32 OFX : 16;
		ulong32 pad16 : 16;
		ulong32 OFY : 16;
		ulong32 pad48 : 16;
	};
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
	RxCluster clusters[1];
};

struct sceGsRgbaq
{
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 A : 8;
	};
	float32 Q;
};

struct tGS_PMODE
{
	struct
	{
		uint32 EN1 : 1;
		uint32 EN2 : 1;
		uint32 CRTMD : 3;
		uint32 MMOD : 1;
		uint32 AMOD : 1;
		uint32 SLBG : 1;
		uint32 ALP : 8;
		uint32 p0 : 16;
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xSurface
{
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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

struct sceGsXyz
{
	struct
	{
		ulong32 X : 16;
		ulong32 Y : 16;
		ulong32 Z : 32;
	};
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	struct
	{
		uint32 R : 8;
		uint32 G : 8;
		uint32 B : 8;
		uint32 p0 : 8;
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
RwSky2DVertex Vertex[4];
uint16 Index[6];
RwRaster* sBBraster;
RwCamera* sBBcamera;
uint32 setup;
float32 xfactor;
float32 yfactor;
xGlobals* xglobals;
uint32 ourGlobals[4096];
int32 skyCameraExt;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
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
	// Line 1068, Address: 0x35c2f0, Func Offset: 0
	// Line 1070, Address: 0x35c2f4, Func Offset: 0x4
	// Line 1068, Address: 0x35c2f8, Func Offset: 0x8
	// Line 1071, Address: 0x35c308, Func Offset: 0x18
	// Line 1073, Address: 0x35c310, Func Offset: 0x20
	// Line 1075, Address: 0x35c31c, Func Offset: 0x2c
	// Line 1076, Address: 0x35c328, Func Offset: 0x38
	// Line 1077, Address: 0x35c334, Func Offset: 0x44
	// Line 1078, Address: 0x35c33c, Func Offset: 0x4c
	// Line 1081, Address: 0x35c340, Func Offset: 0x50
	// Line 1086, Address: 0x35c348, Func Offset: 0x58
	// Line 1081, Address: 0x35c34c, Func Offset: 0x5c
	// Line 1086, Address: 0x35c350, Func Offset: 0x60
	// Line 1081, Address: 0x35c354, Func Offset: 0x64
	// Line 1086, Address: 0x35c36c, Func Offset: 0x7c
	// Line 1087, Address: 0x35c374, Func Offset: 0x84
	// Line 1088, Address: 0x35c380, Func Offset: 0x90
	// Line 1089, Address: 0x35c38c, Func Offset: 0x9c
	// Line 1093, Address: 0x35c398, Func Offset: 0xa8
	// Line 1094, Address: 0x35c3a0, Func Offset: 0xb0
	// Line 1095, Address: 0x35c3ac, Func Offset: 0xbc
	// Func End, Address: 0x35c3c8, Func Offset: 0xd8
}

// iCameraUpdateFog__FP8RwCameral
// Start address: 0x35c3d0
void iCameraUpdateFog(long32 t)
{
	iFogParams* fa;
	iFogParams* fb;
	float32 a;
	// Line 1008, Address: 0x35c3d0, Func Offset: 0
	// Line 1015, Address: 0x35c3f0, Func Offset: 0x20
	// Line 1012, Address: 0x35c3f8, Func Offset: 0x28
	// Line 1015, Address: 0x35c3fc, Func Offset: 0x2c
	// Line 1018, Address: 0x35c404, Func Offset: 0x34
	// Line 1024, Address: 0x35c410, Func Offset: 0x40
	// Line 1025, Address: 0x35c420, Func Offset: 0x50
	// Line 1026, Address: 0x35c44c, Func Offset: 0x7c
	// Line 1031, Address: 0x35c4a4, Func Offset: 0xd4
	// Line 1032, Address: 0x35c4b0, Func Offset: 0xe0
	// Line 1038, Address: 0x35c4c0, Func Offset: 0xf0
	// Line 1039, Address: 0x35c4d8, Func Offset: 0x108
	// Line 1040, Address: 0x35c4f0, Func Offset: 0x120
	// Line 1042, Address: 0x35c504, Func Offset: 0x134
	// Line 1045, Address: 0x35c508, Func Offset: 0x138
	// Line 1042, Address: 0x35c50c, Func Offset: 0x13c
	// Line 1045, Address: 0x35c518, Func Offset: 0x148
	// Line 1046, Address: 0x35c59c, Func Offset: 0x1cc
	// Line 1045, Address: 0x35c5a4, Func Offset: 0x1d4
	// Line 1046, Address: 0x35c5a8, Func Offset: 0x1d8
	// Line 1047, Address: 0x35c62c, Func Offset: 0x25c
	// Line 1046, Address: 0x35c630, Func Offset: 0x260
	// Line 1047, Address: 0x35c634, Func Offset: 0x264
	// Line 1048, Address: 0x35c6c0, Func Offset: 0x2f0
	// Line 1049, Address: 0x35c75c, Func Offset: 0x38c
	// Line 1052, Address: 0x35c760, Func Offset: 0x390
	// Line 1049, Address: 0x35c764, Func Offset: 0x394
	// Line 1052, Address: 0x35c770, Func Offset: 0x3a0
	// Line 1053, Address: 0x35c7f4, Func Offset: 0x424
	// Line 1052, Address: 0x35c7fc, Func Offset: 0x42c
	// Line 1053, Address: 0x35c800, Func Offset: 0x430
	// Line 1054, Address: 0x35c884, Func Offset: 0x4b4
	// Line 1053, Address: 0x35c888, Func Offset: 0x4b8
	// Line 1054, Address: 0x35c88c, Func Offset: 0x4bc
	// Line 1055, Address: 0x35c918, Func Offset: 0x548
	// Line 1058, Address: 0x35c9a4, Func Offset: 0x5d4
	// Line 1055, Address: 0x35c9a8, Func Offset: 0x5d8
	// Line 1058, Address: 0x35c9ac, Func Offset: 0x5dc
	// Line 1055, Address: 0x35c9b0, Func Offset: 0x5e0
	// Line 1058, Address: 0x35c9b8, Func Offset: 0x5e8
	// Line 1059, Address: 0x35c9c8, Func Offset: 0x5f8
	// Line 1060, Address: 0x35c9cc, Func Offset: 0x5fc
	// Line 1062, Address: 0x35ca34, Func Offset: 0x664
	// Line 1063, Address: 0x35ca38, Func Offset: 0x668
	// Func End, Address: 0x35ca58, Func Offset: 0x688
}

// iCameraSetFogParams__FP10iFogParamsf
// Start address: 0x35ca60
void iCameraSetFogParams(iFogParams* fp, float32 time)
{
	// Line 973, Address: 0x35ca60, Func Offset: 0
	// Line 976, Address: 0x35ca74, Func Offset: 0x14
	// Line 977, Address: 0x35ca88, Func Offset: 0x28
	// Line 978, Address: 0x35ca90, Func Offset: 0x30
	// Line 979, Address: 0x35ca94, Func Offset: 0x34
	// Line 980, Address: 0x35caa0, Func Offset: 0x40
	// Line 982, Address: 0x35cac8, Func Offset: 0x68
	// Line 983, Address: 0x35cb34, Func Offset: 0xd4
	// Line 984, Address: 0x35cba0, Func Offset: 0x140
	// Line 985, Address: 0x35cba4, Func Offset: 0x144
	// Line 987, Address: 0x35cbb0, Func Offset: 0x150
	// Line 988, Address: 0x35cc18, Func Offset: 0x1b8
	// Line 989, Address: 0x35cc88, Func Offset: 0x228
	// Line 990, Address: 0x35cc94, Func Offset: 0x234
	// Line 1000, Address: 0x35ccb4, Func Offset: 0x254
	// Line 1001, Address: 0x35ccb8, Func Offset: 0x258
	// Func End, Address: 0x35ccd0, Func Offset: 0x270
}

// iCameraSetNearFarClip__Fff
// Start address: 0x35ccd0
void iCameraSetNearFarClip(float32 nearPlane, float32 farPlane)
{
	// Line 958, Address: 0x35ccd0, Func Offset: 0
	// Line 959, Address: 0x35ccec, Func Offset: 0x1c
	// Line 960, Address: 0x35cd08, Func Offset: 0x38
	// Func End, Address: 0x35cd10, Func Offset: 0x40
}

// iCamGetViewMatrix__FP8RwCameraP7xMat4x3
// Start address: 0x35cd10
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix)
{
	RwMatrixTag* rw_view;
	// Line 935, Address: 0x35cd10, Func Offset: 0
	// Line 938, Address: 0x35cd14, Func Offset: 0x4
	// Line 935, Address: 0x35cd18, Func Offset: 0x8
	// Line 936, Address: 0x35cd28, Func Offset: 0x18
	// Line 938, Address: 0x35cd2c, Func Offset: 0x1c
	// Line 939, Address: 0x35cd38, Func Offset: 0x28
	// Line 940, Address: 0x35cd40, Func Offset: 0x30
	// Line 941, Address: 0x35cd48, Func Offset: 0x38
	// Line 942, Address: 0x35cd50, Func Offset: 0x40
	// Line 943, Address: 0x35cd58, Func Offset: 0x48
	// Line 944, Address: 0x35cd60, Func Offset: 0x50
	// Line 945, Address: 0x35cd68, Func Offset: 0x58
	// Line 946, Address: 0x35cd70, Func Offset: 0x60
	// Line 947, Address: 0x35cd78, Func Offset: 0x68
	// Line 948, Address: 0x35cd80, Func Offset: 0x70
	// Line 949, Address: 0x35cd88, Func Offset: 0x78
	// Line 950, Address: 0x35cd90, Func Offset: 0x80
	// Line 951, Address: 0x35cd98, Func Offset: 0x88
	// Func End, Address: 0x35cdac, Func Offset: 0x9c
}

// iCameraAssignEnv__FP8RwCameraP4iEnv
// Start address: 0x35cdb0
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom)
{
	// Line 891, Address: 0x35cdb0, Func Offset: 0
	// Line 896, Address: 0x35cdc0, Func Offset: 0x10
	// Line 897, Address: 0x35cdc8, Func Offset: 0x18
	// Line 898, Address: 0x35cdd4, Func Offset: 0x24
	// Line 916, Address: 0x35cddc, Func Offset: 0x2c
	// Func End, Address: 0x35cdec, Func Offset: 0x3c
}

// iCameraSetFOV__FP8RwCameraf
// Start address: 0x35cdf0
void iCameraSetFOV(RwCamera* cam, float32 fov)
{
	RwV2d vw;
	// Line 864, Address: 0x35cdf0, Func Offset: 0
	// Line 863, Address: 0x35cdf4, Func Offset: 0x4
	// Line 864, Address: 0x35cdf8, Func Offset: 0x8
	// Line 863, Address: 0x35cdfc, Func Offset: 0xc
	// Line 864, Address: 0x35ce04, Func Offset: 0x14
	// Line 872, Address: 0x35ce3c, Func Offset: 0x4c
	// Line 874, Address: 0x35ce40, Func Offset: 0x50
	// Line 872, Address: 0x35ce44, Func Offset: 0x54
	// Line 874, Address: 0x35ce48, Func Offset: 0x58
	// Line 871, Address: 0x35ce4c, Func Offset: 0x5c
	// Line 872, Address: 0x35ce50, Func Offset: 0x60
	// Line 874, Address: 0x35ce54, Func Offset: 0x64
	// Line 875, Address: 0x35ce5c, Func Offset: 0x6c
	// Func End, Address: 0x35ce6c, Func Offset: 0x7c
}

// iCameraUpdatePos__FP8RwCameraP7xMat4x3
// Start address: 0x35ce70
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
	// Line 769, Address: 0x35ce70, Func Offset: 0
	// Line 781, Address: 0x35ce74, Func Offset: 0x4
	// Line 769, Address: 0x35ce78, Func Offset: 0x8
	// Line 776, Address: 0x35ce88, Func Offset: 0x18
	// Line 781, Address: 0x35ce8c, Func Offset: 0x1c
	// Line 783, Address: 0x35ce94, Func Offset: 0x24
	// Line 786, Address: 0x35ce9c, Func Offset: 0x2c
	// Line 790, Address: 0x35ceac, Func Offset: 0x3c
	// Line 796, Address: 0x35ceb4, Func Offset: 0x44
	// Line 797, Address: 0x35cebc, Func Offset: 0x4c
	// Func End, Address: 0x35ced0, Func Offset: 0x60
}

// iCameraFrustumPlanes__FP8RwCameraP5xVec4
// Start address: 0x35ced0
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane)
{
	RwFrustumPlane* rwPlane;
	// Line 704, Address: 0x35ced0, Func Offset: 0
	// Line 708, Address: 0x35cef0, Func Offset: 0x20
	// Line 712, Address: 0x35cf10, Func Offset: 0x40
	// Line 716, Address: 0x35cf30, Func Offset: 0x60
	// Line 720, Address: 0x35cf50, Func Offset: 0x80
	// Line 724, Address: 0x35cf70, Func Offset: 0xa0
	// Line 728, Address: 0x35cf90, Func Offset: 0xc0
	// Line 732, Address: 0x35cfb0, Func Offset: 0xe0
	// Line 740, Address: 0x35cfd0, Func Offset: 0x100
	// Line 742, Address: 0x35cfd8, Func Offset: 0x108
	// Line 746, Address: 0x35cff8, Func Offset: 0x128
	// Line 750, Address: 0x35d018, Func Offset: 0x148
	// Line 754, Address: 0x35d038, Func Offset: 0x168
	// Line 763, Address: 0x35d054, Func Offset: 0x184
	// Func End, Address: 0x35d05c, Func Offset: 0x18c
}

// iCameraShowRaster__FP8RwCamera
// Start address: 0x35d060
void iCameraShowRaster(RwCamera* cam)
{
	// Line 677, Address: 0x35d060, Func Offset: 0
	// Func End, Address: 0x35d06c, Func Offset: 0xc
}

// iCameraEnd__FP8RwCamera
// Start address: 0x35d070
void iCameraEnd(RwCamera* cam)
{
	// Line 625, Address: 0x35d070, Func Offset: 0
	// Line 636, Address: 0x35d07c, Func Offset: 0xc
	// Line 639, Address: 0x35d084, Func Offset: 0x14
	// Line 647, Address: 0x35d08c, Func Offset: 0x1c
	// Func End, Address: 0x35d09c, Func Offset: 0x2c
}

// iCameraBegin__FP8RwCamerai
// Start address: 0x35d0a0
void iCameraBegin(RwCamera* cam, int32 clear)
{
	// Line 561, Address: 0x35d0a0, Func Offset: 0
	// Line 571, Address: 0x35d0ac, Func Offset: 0xc
	// Line 573, Address: 0x35d0b8, Func Offset: 0x18
	// Line 576, Address: 0x35d0c4, Func Offset: 0x24
	// Line 577, Address: 0x35d0cc, Func Offset: 0x2c
	// Line 587, Address: 0x35d0d8, Func Offset: 0x38
	// Line 591, Address: 0x35d0e4, Func Offset: 0x44
	// Line 610, Address: 0x35d0e8, Func Offset: 0x48
	// Line 614, Address: 0x35d0f4, Func Offset: 0x54
	// Line 619, Address: 0x35d0fc, Func Offset: 0x5c
	// Line 621, Address: 0x35d104, Func Offset: 0x64
	// Func End, Address: 0x35d114, Func Offset: 0x74
}

// iCameraDestroy__FP8RwCamera
// Start address: 0x35d120
void iCameraDestroy(RwCamera* camera)
{
	RpWorld* pWorld;
	RwRaster* raster;
	RwFrame* frame;
	// Line 154, Address: 0x35d120, Func Offset: 0
	// Line 159, Address: 0x35d130, Func Offset: 0x10
	// Line 163, Address: 0x35d138, Func Offset: 0x18
	// Line 164, Address: 0x35d144, Func Offset: 0x24
	// Line 166, Address: 0x35d14c, Func Offset: 0x2c
	// Line 167, Address: 0x35d154, Func Offset: 0x34
	// Line 170, Address: 0x35d158, Func Offset: 0x38
	// Line 171, Address: 0x35d164, Func Offset: 0x44
	// Line 172, Address: 0x35d16c, Func Offset: 0x4c
	// Line 175, Address: 0x35d170, Func Offset: 0x50
	// Line 180, Address: 0x35d178, Func Offset: 0x58
	// Line 181, Address: 0x35d17c, Func Offset: 0x5c
	// Line 183, Address: 0x35d184, Func Offset: 0x64
	// Line 185, Address: 0x35d18c, Func Offset: 0x6c
	// Line 186, Address: 0x35d194, Func Offset: 0x74
	// Line 188, Address: 0x35d198, Func Offset: 0x78
	// Line 189, Address: 0x35d19c, Func Offset: 0x7c
	// Line 191, Address: 0x35d1a4, Func Offset: 0x84
	// Line 193, Address: 0x35d1ac, Func Offset: 0x8c
	// Line 196, Address: 0x35d1b0, Func Offset: 0x90
	// Line 197, Address: 0x35d1b4, Func Offset: 0x94
	// Line 199, Address: 0x35d1bc, Func Offset: 0x9c
	// Line 201, Address: 0x35d1c4, Func Offset: 0xa4
	// Line 204, Address: 0x35d1c8, Func Offset: 0xa8
	// Line 206, Address: 0x35d1d0, Func Offset: 0xb0
	// Func End, Address: 0x35d1e4, Func Offset: 0xc4
}

// iCameraCreate__Fiii
// Start address: 0x35d1f0
RwCamera* iCameraCreate(int32 width, int32 height, int32 mainGameCamera)
{
	RwV2d vw;
	RwCamera* camera;
	// Line 102, Address: 0x35d1f0, Func Offset: 0
	// Line 107, Address: 0x35d210, Func Offset: 0x20
	// Line 111, Address: 0x35d218, Func Offset: 0x28
	// Line 112, Address: 0x35d22c, Func Offset: 0x3c
	// Line 115, Address: 0x35d240, Func Offset: 0x50
	// Line 112, Address: 0x35d248, Func Offset: 0x58
	// Line 115, Address: 0x35d24c, Func Offset: 0x5c
	// Line 125, Address: 0x35d25c, Func Offset: 0x6c
	// Line 126, Address: 0x35d268, Func Offset: 0x78
	// Line 129, Address: 0x35d274, Func Offset: 0x84
	// Line 131, Address: 0x35d278, Func Offset: 0x88
	// Line 129, Address: 0x35d27c, Func Offset: 0x8c
	// Line 131, Address: 0x35d280, Func Offset: 0x90
	// Line 138, Address: 0x35d28c, Func Offset: 0x9c
	// Line 140, Address: 0x35d294, Func Offset: 0xa4
	// Line 141, Address: 0x35d29c, Func Offset: 0xac
	// Line 144, Address: 0x35d2a0, Func Offset: 0xb0
	// Line 145, Address: 0x35d2a4, Func Offset: 0xb4
	// Func End, Address: 0x35d2c0, Func Offset: 0xd0
}

