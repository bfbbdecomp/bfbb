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

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_2)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef s32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_10)(RxNodeDefinition*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_13)(RxPipelineNode*);
typedef void(*type_14)(RxPipelineNode*);
typedef s32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef void(*type_20)(void*);
typedef xBase*(*type_22)(u32);
typedef u32(*type_23)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s8*(*type_25)(xBase*);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef s8*(*type_27)(u32);
typedef void(*type_29)(xEnt*, xScene*, f32);
typedef void(*type_33)(xEnt*, xVec3*);
typedef u32(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_36)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_37)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_39)(xEnt*);
typedef u32(*type_46)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_49)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_54)(xMemPool*, void*);
typedef RpWorldSector*(*type_56)(RpWorldSector*);
typedef u32(*type_61)(void*, void*);
typedef void(*type_63)(RwResEntry*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef RwV3d type_5[8];
typedef u16 type_8[3];
typedef f32 type_9[2];
typedef analog_data type_12[2];
typedef RwSky2DVertex type_16[4];
typedef s8 type_18[4];
typedef RwTexCoords* type_19[8];
typedef xVec3 type_21[3];
typedef u16 type_24[3];
typedef sceGsDispEnv type_28[2];
typedef f32 type_30[2];
typedef u32 type_31[4];
typedef xVec4 type_32[12];
typedef f32 type_34[16];
typedef s8 type_38[128];
typedef type_38 type_40[6];
typedef u8 type_41[2];
typedef u32 type_42[4096];
typedef xAnimMultiFileEntry type_43[1];
typedef RpLight* type_44[2];
typedef u16 type_45[6];
typedef s8 type_47[32];
typedef RwFrame* type_48[2];
typedef RwTexCoords* type_51[8];
typedef xVec3 type_53[4];
typedef u8 type_55[3];
typedef s8 type_57[32];
typedef u8 type_58[22];
typedef f32 type_59[4];
typedef s8 type_60[32];
typedef u8 type_62[22];
typedef xCollis type_64[18];
typedef RxCluster type_65[1];
typedef <unknown type (0xa510)> type_67[4];
typedef f32 type_68[22];
typedef f32 type_69[22];

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

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
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

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_1 frustumPlanes;
	RwBBox frustumBoundBox;
	type_5 frustumCorners;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_31 pad;
};

struct sceGifTag
{
	union
	{
		u32 NLOOP;
		u32 EOP;
		u32 pad16;
		u32 id;
		u32 PRE;
		u32 PRIM;
		u32 FLG;
		u32 NREG;
	};
	union
	{
		u32 REGS0;
		u32 REGS1;
		u32 REGS2;
		u32 REGS3;
		u32 REGS4;
		u32 REGS5;
		u32 REGS6;
		u32 REGS7;
		u32 REGS8;
		u32 REGS9;
		u32 REGS10;
		u32 REGS11;
		u32 REGS12;
		u32 REGS13;
		u32 REGS14;
		u32 REGS15;
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
	u32 last_index;
	s32 flg_group;
};

struct RpPolygon
{
	u16 matIndex;
	type_8 vertIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

union sceGsScissor
{
	u32 SCAX0;
	u32 pad11;
	u32 SCAX1;
	u32 pad27;
	u32 SCAY0;
	u32 pad43;
	u32 SCAY1;
	u32 pad59;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
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
		u32 INT;
		u32 FFMD;
		u32 DPMS;
		u32 p0;
	};
	u32 p1;
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
	type_20 activateCB;
	type_20 deactivateCB;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

union sceGsPrim
{
	u32 PRIM;
	u32 IIP;
	u32 TME;
	u32 FGE;
	u32 ABE;
	u32 AA1;
	u32 FST;
	u32 CTXT;
	u32 FIX;
	u32 pad11;
};

union sceGsFrame
{
	u32 FBP;
	u32 pad09;
	u32 FBW;
	u32 pad22;
	u32 PSM;
	u32 pad30;
	u32 FBMSK;
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
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

union sceGsZbuf
{
	u32 ZBP;
	u32 pad09;
	u32 PSM;
	u32 pad28;
	u32 ZMSK;
	u32 pad33;
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
	type_51 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_64 colls;
	type_36 post;
	type_46 depenq;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
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
		u32 FBP;
		u32 FBW;
		u32 PSM;
		u32 p0;
	};
	union
	{
		u32 DBX;
		u32 DBY;
		u32 p1;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xJSPHeader
{
	type_18 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
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
	type_56 renderCallBack;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	type_4 BeforeEnter;
	type_7 StateCallback;
	type_11 BeforeAnimMatrices;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	u32 frame1addr;
	sceGsZbuf zbuf1;
	s32 zbuf1addr;
	sceGsXyoffset xyoffset1;
	s32 xyoffset1addr;
	sceGsScissor scissor1;
	s32 scissor1addr;
	sceGsPrmodecont prmodecont;
	s32 prmodecontaddr;
	sceGsColclamp colclamp;
	s32 colclampaddr;
	sceGsDthe dthe;
	s32 dtheaddr;
	sceGsTest test1;
	s32 test1addr;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
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

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	type_63 destroyNotify;
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

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
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
	f32 r;
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
	type_32 frustplane;
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
	u32 NumMatrices;
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
	s32 memlvl;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct RpTriangle
{
	type_24 vertIndex;
	s16 matIndex;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_40 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_47 sceneStart;
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
	u32 type;
	RwRGBAReal color;
	type_34 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct _tagxPad
{
	type_58 value;
	type_62 last_value;
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
	type_68 up_tmr;
	type_69 down_tmr;
	type_12 analog;
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
	type_22 resolvID;
	type_25 base2Name;
	type_27 id2Name;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_23 Callback;
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

union sceGsDthe
{
	u32 DTHE;
	u32 pad01;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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
	type_11 BeforeAnimMatrices;
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

union sceGsTest
{
	u32 ATE;
	u32 ATST;
	u32 AREF;
	u32 AFAIL;
	u32 DATE;
	u32 DATM;
	u32 ZTE;
	u32 ZTST;
	u32 pad19;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_59 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct _tagiPad
{
	s32 port;
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
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
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
		u32 DX;
		u32 DY;
		u32 MAGH;
		u32 MAGV;
		u32 p0;
	};
	union
	{
		u32 DW;
		u32 DH;
		u32 p1;
	};
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_57 name;
	type_60 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct sceGsDrawEnv2
{
	sceGsFrame frame2;
	u32 frame2addr;
	sceGsZbuf zbuf2;
	s32 zbuf2addr;
	sceGsXyoffset xyoffset2;
	s32 xyoffset2addr;
	sceGsScissor scissor2;
	s32 scissor2addr;
	sceGsPrmodecont prmodecont;
	s32 prmodecontaddr;
	sceGsColclamp colclamp;
	s32 colclampaddr;
	sceGsDthe dthe;
	s32 dtheaddr;
	sceGsTest test2;
	s32 test2addr;
};

struct RpSector
{
	s32 type;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_54 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

union sceGsPrmodecont
{
	u32 AC;
	u32 pad01;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
};

union sceGsColclamp
{
	u32 CLAMP;
	u32 pad01;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_9 radius;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct anim_coll_data
{
};

union sceGsXyoffset
{
	u32 OFX;
	u32 pad16;
	u32 OFY;
	u32 pad48;
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

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_65 clusters;
};

struct sceGsRgbaq
{
	union
	{
		u32 R;
		u32 G;
		u32 B;
		u32 A;
	};
	f32 Q;
};

struct tGS_PMODE
{
	union
	{
		u32 EN1;
		u32 EN2;
		u32 CRTMD;
		u32 MMOD;
		u32 AMOD;
		u32 SLBG;
		u32 ALP;
		u32 p0;
	};
	u32 p1;
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
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
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
	f32 t;
	f32 u;
	f32 v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

union sceGsXyz
{
	u32 X;
	u32 Y;
	u32 Z;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct sceGsClear
{
	sceGsTest testa;
	s32 testaaddr;
	sceGsPrim prim;
	s32 primaddr;
	sceGsRgbaq rgbaq;
	s32 rgbaqaddr;
	sceGsXyz xyz2a;
	s32 xyz2aaddr;
	sceGsXyz xyz2b;
	s32 xyz2baddr;
	sceGsTest testb;
	s32 testbaddr;
};

struct tGS_BGCOLOR
{
	union
	{
		u32 R;
		u32 G;
		u32 B;
		u32 p0;
	};
	u32 p1;
};

struct xVec2
{
	f32 x;
	f32 y;
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

f32 sCameraNearClip;
f32 sCameraFarClip;
RwCamera* globalCamera;
RwCamera* sMainGameCamera;
f32 xCameraLastFov;
type_16 Vertex;
type_45 Index;
RwRaster* sBBraster;
RwCamera* sBBcamera;
u32 setup;
f32 xfactor;
f32 yfactor;
xGlobals* xglobals;
type_42 ourGlobals;
s32 skyCameraExt;
<unknown type (0xa510)>* _rwDMAPktPtr;
sceGsDBuffDc _rwDMAFlipData;
s32 skyFrameBit;

void iCameraSetFogRenderStates();
void iCameraUpdateFog(s32 t);
void iCameraSetFogParams(iFogParams* fp, f32 time);
void iCameraSetNearFarClip(f32 nearPlane, f32 farPlane);
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix);
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom);
void iCameraSetFOV(RwCamera* cam, f32 fov);
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos);
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane);
void iCameraShowRaster(RwCamera* cam);
void iCameraEnd(RwCamera* cam);
void iCameraBegin(RwCamera* cam, s32 clear);
void iCameraDestroy(RwCamera* camera);
RwCamera* iCameraCreate(s32 width, s32 height, s32 mainGameCamera);

// iCameraSetFogRenderStates__Fv
// Start address: 0x35c2f0
void iCameraSetFogRenderStates()
{
	RwCamera* pCamera;
	iFogParams* pFogParams;
	u32 bite_me;
}

// iCameraUpdateFog__FP8RwCameral
// Start address: 0x35c3d0
void iCameraUpdateFog(s32 t)
{
	iFogParams* fa;
	iFogParams* fb;
	f32 a;
}

// iCameraSetFogParams__FP10iFogParamsf
// Start address: 0x35ca60
void iCameraSetFogParams(iFogParams* fp, f32 time)
{
}

// iCameraSetNearFarClip__Fff
// Start address: 0x35ccd0
void iCameraSetNearFarClip(f32 nearPlane, f32 farPlane)
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
void iCameraSetFOV(RwCamera* cam, f32 fov)
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
void iCameraBegin(RwCamera* cam, s32 clear)
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
RwCamera* iCameraCreate(s32 width, s32 height, s32 mainGameCamera)
{
	RwV2d vw;
	RwCamera* camera;
}

