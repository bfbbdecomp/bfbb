typedef struct RpGeometry;
typedef struct RwObjectHasFrame;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct tag_type;
typedef struct xAnimSingle;
typedef struct xAnimPlay;
typedef struct xQCData;
typedef struct zUIFont;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct xScene;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct callback;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RpMeshHeader;
typedef struct _zUI;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct substr;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQuat;
typedef struct xBase;
typedef struct xVec3;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeParam;
typedef struct zUIAsset;
typedef struct _tagTRCPadInfo;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RpTriangle;
typedef union _class_0;
typedef struct RpAtomic;
typedef struct rxHeapBlockHeader;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct xLinkAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimFile;
typedef struct xSerial;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpMaterial;
typedef struct xClumpCollBSPBranchNode;
typedef struct xBound;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xJSPHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xBBox;
typedef struct xRot;
typedef struct xEntAsset;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct _class_1;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpLight;
typedef struct xClumpCollBSPTree;
typedef struct RpWorld;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct basic_rect;
typedef struct xEntFrame;
typedef struct xBox;
typedef struct xGridBound;
typedef struct RxClusterDefinition;
typedef struct zUIFontAsset;
typedef struct xShadowSimplePoly;
typedef struct _tagiTRCPadInfo;
typedef struct RwSphere;
typedef struct RwLLLink;
typedef enum _tagPadInit;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct tri_data;
typedef struct _class_2;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct jot;
typedef struct xShadowSimpleCache;
typedef struct RwObject;
typedef struct xEntCollis;
typedef struct RxIoSpec;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwFrame;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct zEnt;
typedef struct RxNodeMethods;
typedef enum _tagTRCState;
typedef struct split_tag;
typedef struct xCollis;
typedef struct _class_3;
typedef struct RpPolygon;
typedef struct xtextbox;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xfont;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct xClumpCollBSPVertInfo;
typedef struct anim_coll_data;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void(*type_5)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef void(*type_6)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_7)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef uint32(*type_9)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_12)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_13)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_15)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef int32(*type_17)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_18)(uint32);
typedef int32(*type_19)(RxNodeDefinition*);
typedef void(*type_20)(zUIFont*, xScene*, float32);
typedef void(*type_21)(RxNodeDefinition*);
typedef int8*(*type_22)(xBase*);
typedef int32(*type_23)(RxPipelineNode*);
typedef uint32(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_25)(uint32);
typedef void(*type_26)(xEnt*);
typedef void(*type_31)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_34)(RpWorldSector*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_43)(xEnt*, xScene*, float32);
typedef void(*type_48)(xEnt*, xVec3*);
typedef void(*type_51)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_54)(xEnt*);
typedef void(*type_57)(xMemPool*, void*);
typedef void(*type_58)(jot&, xtextbox&, float32, float32);
typedef void(*type_62)(RwResEntry*);
typedef void(*type_64)(jot&, xtextbox&, xtextbox&);

typedef RwTexCoords* type_1[8];
typedef xCollis type_4[18];
typedef uint16 type_14[3];
typedef float32 type_27[2];
typedef _tagTRCPadInfo type_28[4];
typedef int8 type_29[16];
typedef RwTexCoords* type_30[8];
typedef int8 type_32[4];
typedef int8 type_33[16];
typedef uint16 type_35[2];
typedef float32 type_36[2];
typedef float32 type_37[2];
typedef float32 type_38[2];
typedef float32 type_39[2];
typedef uint32 type_41[4];
typedef xVec3 type_42[3];
typedef uint8 type_44[4];
typedef uint8 type_45[4];
typedef RpLight* type_46[2];
typedef float32 type_47[16];
typedef uint16 type_49[4];
typedef RwFrame* type_50[2];
typedef float32 type_52[2];
typedef uint16 type_53[2];
typedef uint16 type_55[2];
typedef uint8 type_56[3];
typedef int8 type_59[32];
typedef uint16 type_60[3];
typedef int8 type_61[32];
typedef uint8 type_63[2];
typedef xVec3 type_65[4];
typedef xAnimMultiFileEntry type_66[1];
typedef float32 type_67[4];
typedef RxCluster type_68[1];

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
	type_30 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_7 Callback;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tag_type
{
	substr name;
	type_5 parse_tag;
	type_5 reset_tag;
	void* context;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_52 BilinearLerp;
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

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	uint16 uiFontFlags;
	uint16 uiFontHackFlags;
	uint32 text_id;
	float32 yscroll;
	uint32 text_index;
	int8* text;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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
	type_3 BeforeEnter;
	type_31 StateCallback;
	type_11 BeforeAnimMatrices;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	type_18 resolvID;
	type_22 base2Name;
	type_25 id2Name;
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

struct callback
{
	type_58 render;
	type_64 layout_update;
	type_64 render_update;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
	uint16 preUpdateIndex;
	uint16 updateIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_62 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_57 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct substr
{
	int8* text;
	uint32 size;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_13 eventFunc;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_43 update;
	type_43 endUpdate;
	type_48 bupdate;
	type_51 move;
	type_54 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_12 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zUIAsset : xEntAsset
{
	uint32 uiFlags;
	type_35 dim;
	uint32 textureID;
	type_36 uva;
	type_37 uvb;
	type_38 uvc;
	type_39 uvd;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct RpTriangle
{
	type_14 vertIndex;
	int16 matIndex;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_16 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_41 pad;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_27 radius;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	type_63 NumAnims;
	void** RawData;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_46 light;
	type_50 light_frame;
	int32 memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_24 Conditional;
	type_24 Callback;
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
	type_8 callback;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct rxReq
{
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_56 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_66 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_59 name;
	type_61 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpSector
{
	int32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xJSPHeader
{
	type_32 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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
	type_1 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _class_1
{
	union
	{
		uint8 invisible;
		uint8 ethereal;
		uint8 merge;
		uint8 word_break;
		uint8 word_end;
		uint8 line_break;
		uint8 stop;
		uint8 tab;
	};
	union
	{
		uint8 insert;
		uint8 dynamic;
		uint8 page_break;
		uint8 stateful;
	};
	uint16 dummy;
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
	type_34 renderCallBack;
	RxPipeline* pipeline;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zUIFontAsset : zUIAsset
{
	uint16 uiFontFlags;
	uint8 mode;
	uint8 fontID;
	uint32 textAssetID;
	type_44 bcolor;
	type_45 color;
	type_49 inset;
	type_53 space;
	type_55 cdim;
	uint32 max_height;
};

struct xShadowSimplePoly
{
	type_42 vert;
	xVec3 norm;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_2
{
	xVec3* verts;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_47 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct jot
{
	substr s;
	_class_1 flag;
	uint16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
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
	type_65 corner;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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
	type_4 colls;
	type_6 post;
	type_9 depenq;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct st_SERIAL_CLIENTINFO
{
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RxNodeMethods
{
	type_17 nodeBody;
	type_19 nodeInit;
	type_21 nodeTerm;
	type_23 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_15 configMsgHandler;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
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
		_class_3 tuv;
		tri_data tri;
	};
};

struct _class_3
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpPolygon
{
	uint16 matIndex;
	type_60 vertIndex;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	uint32 flags;
	float32 line_space;
	float32 tab_stop;
	float32 left_indent;
	float32 right_indent;
	callback* cb;
	void* context;
	int8** texts;
	uint32* text_sizes;
	uint32 texts_size;
	substr text;
	uint32 text_hash;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xFFX
{
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_68 clusters;
};

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect clip;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_29 buffer;
type_33 buffer;
type_28 gTrcPad;
type_40 zUIFontEventCB;
type_20 zUIFont_Update;
type_26 zUIFont_Render;

void zUIFont_Render(xEnt* e);
int32 zUIFontEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zUIFont_Update(zUIFont* ent);
void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, float32 dt);
void zUIFont_Load(zUIFont* ent, xSerial* s);
void zUIFont_Save(zUIFont* ent, xSerial* s);
void zUIFont_Init(zUIFont* ent, xEntAsset* asset);
void zUIFont_Init(void* ent, void* asset);
void zUIFontInit();

// zUIFont_Render__FP4xEnt
// Start address: 0x1a1a00
void zUIFont_Render(xEnt* e)
{
	zUIFont* ent;
	zUIFontAsset& a;
	basic_rect r;
	xtextbox tb;
	int32 size;
}

// zUIFontEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x1a2100
int32 zUIFontEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	int32 rval;
	zUIFont* s;
}

// zUIFont_Update__FP7zUIFontP6xScenef
// Start address: 0x1a2310
void zUIFont_Update(zUIFont* ent)
{
	_zUI* ui;
	xBase* sendTo;
}

// zUIFont_PreUpdate__FP7zUIFontP6xScenef
// Start address: 0x1a2600
void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, float32 dt)
{
}

// zUIFont_Load__FP7zUIFontP7xSerial
// Start address: 0x1a2610
void zUIFont_Load(zUIFont* ent, xSerial* s)
{
}

// zUIFont_Save__FP7zUIFontP7xSerial
// Start address: 0x1a2620
void zUIFont_Save(zUIFont* ent, xSerial* s)
{
}

// zUIFont_Init__FP7zUIFontP9xEntAsset
// Start address: 0x1a2630
void zUIFont_Init(zUIFont* ent, xEntAsset* asset)
{
}

// zUIFont_Init__FPvPv
// Start address: 0x1a27e0
void zUIFont_Init(void* ent, void* asset)
{
}

// zUIFontInit__Fv
// Start address: 0x1a27f0
void zUIFontInit()
{
}

