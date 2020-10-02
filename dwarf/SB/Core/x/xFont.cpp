typedef struct xfont;
typedef struct jot;
typedef struct font_asset;
typedef struct xtextbox;
typedef struct model_tag_context;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RwImage;
typedef struct RxPipelineNode;
typedef struct tag_entry;
typedef struct xQuat;
typedef struct model_pool;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct RwV3d;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct iColor_tag;
typedef struct RxPipeline;
typedef struct jot_line;
typedef struct xTextAsset;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct tag_type;
typedef struct substr;
typedef struct RxPipelineRequiresCluster;
typedef struct split_tag;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct xVec2;
typedef struct xAnimTransitionList;
typedef struct xModelBucket;
typedef struct font_data;
typedef struct xTimerAsset;
typedef struct RpMorphTarget;
typedef struct RwRaster;
typedef struct xAnimTable;
typedef struct basic_rect_0;
typedef struct xAnimTransition;
typedef struct layout;
typedef struct RpLight;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct xModelInstance;
typedef struct tag_entry_list;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct basic_rect_1;
typedef struct rxReq;
typedef struct xLightKit;
typedef enum RxClusterValidityReq;
typedef struct xAnimState;
typedef struct xLightKitLight;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xMat4x3;
typedef struct xAnimFile;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimSingle;
typedef struct rxHeapFreeBlock;
typedef struct _class_0;
typedef struct tex_tag_context;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct model_cache_entry;
typedef struct xAnimMultiFileBase;
typedef struct model_args;
typedef struct RpAtomic;
typedef enum RxClusterForcePresent;
typedef struct tex_args;
typedef struct _class_1;
typedef struct xAnimEffect;
typedef struct RpInterpolator;
typedef struct RxClusterDefinition;
typedef enum _enum_0;
typedef struct tl_cache_entry;
typedef struct xLinkAsset;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xAnimPlay;
typedef struct RwTexDictionary;
typedef struct xTimer;
typedef struct RxOutputSpec;
typedef struct _class_2;
typedef struct RpMaterialList;
typedef struct _class_3;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xModelPool;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpClump;
typedef struct RxIoSpec;
typedef struct RpGeometry;
typedef enum RwTextureFilterMode;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct RxNodeDefinition;
typedef struct callback;
typedef struct xBase;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct _class_4;
typedef enum _enum_1;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_5;
typedef struct xBaseAsset;

typedef void(*type_1)(xAnimPlay*, xAnimState*);
typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_5)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_6)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(RxNodeDefinition*);
typedef int32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef int32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_23)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_37)(RpClump*, void*);
typedef void(*type_38)(xMemPool*, void*);
typedef void(*type_39)(jot&, xtextbox&, float32, float32);
typedef void(*type_44)(jot&, xtextbox&, xtextbox&);
typedef void(*type_45)(RwResEntry*);
typedef int32(*type_46)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_50)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef RpAtomic*(*type_53)(RpAtomic*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);

typedef model_cache_entry type_0[8];
typedef _class_5 type_3[127];
typedef int8 type_4[16];
typedef RwMatrixTag type_7[8];
typedef RwTexCoords* type_8[8];
typedef xModelInstance type_10[8];
typedef tl_cache_entry type_11[3];
typedef uint8 type_16[256];
typedef basic_rect_1 type_18[127];
typedef basic_rect_1 type_19[127];
typedef xVec2 type_20[127];
typedef float32 type_21[16];
typedef substr type_22[32];
typedef int8* type_24[3];
typedef tag_entry type_25[16];
typedef float32 type_26[2];
typedef uint32 type_28[4];
typedef uint8 type_29[2];
typedef xAnimMultiFileEntry type_30[1];
typedef RwSky2DVertex type_31[120];
typedef uint8 type_32[256];
typedef uint32 type_33[4096];
typedef font_data type_34[4];
typedef float32 type_35[4];
typedef _class_3 type_36[16];
typedef int8 type_40[32];
typedef tag_type type_41[128];
typedef int8 type_42[32];
typedef type_41 type_43[2];
typedef jot type_47[512];
typedef jot_line type_48[128];
typedef RwSky2DVertex type_49[4];
typedef uint16 type_51[3];
typedef RxCluster type_52[1];
typedef uint8 type_54[1024];
typedef uint16 type_56[64];
typedef uint8 type_57[128];
typedef <unknown type (0xa510)> type_58[4];
typedef int8 type_59[16];
typedef int8 type_60[64];
typedef font_asset type_61[4];

struct xfont
{
	uint32 id;
	float32 width;
	float32 height;
	float32 space;
	iColor_tag color;
	basic_rect_1 clip;
};

struct jot
{
	substr s;
	_class_0 flag;
	uint16 context_size;
	void* context;
	basic_rect_1 bounds;
	basic_rect_1 render_bounds;
	callback* cb;
	tag_type* tag;
};

struct font_asset
{
	uint32 tex_id;
	uint16 u;
	uint16 v;
	uint8 du;
	uint8 dv;
	uint8 line_size;
	uint8 baseline;
	_class_4 space;
	uint32 flags;
	type_57 char_set;
	type_3 char_pos;
};

struct xtextbox
{
	xfont font;
	basic_rect_1 bounds;
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

struct model_tag_context
{
	xModelInstance* model;
	xVec3 rot;
	basic_rect_1 dst;
	xSphere o;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwImage
{
	int32 flags;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	uint8* cpPixels;
	RwRGBA* palette;
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

struct tag_entry
{
	substr name;
	int8 op;
	substr* args;
	uint32 args_size;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct model_pool
{
	type_7 mat;
	type_10 model;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpTriangle
{
	type_51 vertIndex;
	int16 matIndex;
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
	type_28 pad;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct jot_line
{
	basic_rect_1 bounds;
	float32 baseline;
	uint32 first;
	uint32 last;
	uint8 page_break;
};

struct xTextAsset
{
	uint32 len;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_40 name;
	type_42 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct tag_type
{
	substr name;
	type_50 parse_tag;
	type_50 reset_tag;
	void* context;
};

struct substr
{
	int8* text;
	uint32 size;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_45 destroyNotify;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct font_data
{
	font_asset* asset;
	uint32 index_max;
	type_16 char_index;
	float32 iwidth;
	float32 iheight;
	type_18 tex_bounds;
	type_19 bounds;
	type_20 dstfrac;
	RwTexture* texture;
	RwRaster* raster;
};

struct xTimerAsset : xBaseAsset
{
	float32 seconds;
	float32 randomRange;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct basic_rect_0
{
	int32 x;
	int32 y;
	int32 w;
	int32 h;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_27 Conditional;
	type_27 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct layout
{
	xtextbox tb;
	type_47 _jots;
	uint32 _jots_size;
	type_48 _lines;
	uint32 _lines_size;
	type_54 context_buffer;
	uint32 context_buffer_size;
	type_56 dynamics;
	uint32 dynamics_size;
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

struct tag_entry_list
{
	tag_entry* entries;
	uint32 size;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct basic_rect_1
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct rxReq
{
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_1 BeforeEnter;
	type_2 StateCallback;
	type_5 BeforeAnimMatrices;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_21 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_29 NumAnims;
	void** RawData;
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

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_26 BilinearLerp;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _class_0
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

struct tex_tag_context
{
	RwRaster* raster;
	float32 rot;
	basic_rect_1 src;
	basic_rect_1 dst;
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

struct model_cache_entry
{
	uint32 id;
	uint32 order;
	xModelInstance* model;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct model_args
{
	xModelInstance* model;
	xVec3 rot;
	basic_rect_1 dst;
	xVec2 off;
	_enum_0 scale;
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
	type_53 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tex_args
{
	RwRaster* raster;
	float32 rot;
	basic_rect_1 src;
	basic_rect_1 dst;
	xVec2 off;
	_enum_1 scale;
};

struct _class_1
{
	xVec3* verts;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_23 Callback;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum _enum_0
{
	SCALE_FONT,
	SCALE_SCREEN,
	SCALE_SIZE
};

struct tl_cache_entry
{
	uint32 used;
	long32 last_used;
	layout tl;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_35 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_30 Files;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	type_5 BeforeAnimMatrices;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xTimer : xBase
{
	xTimerAsset* tasset;
	uint8 state;
	uint8 runsInPause;
	uint16 flags;
	float32 secondsLeft;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _class_2
{
	int32 fogenable;
	int32 vertexalphaenable;
	int32 zwriteenable;
	int32 ztestenable;
	uint32 srcblend;
	uint32 destblend;
	uint32 shademode;
	RwRaster* textureraster;
	RwTextureFilterMode filter;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _class_3
{
	int8* s;
	int8* end;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_37 callback;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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
	type_8 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

enum RwTextureFilterMode
{
	rwFILTERNAFILTERMODE,
	rwFILTERNEAREST,
	rwFILTERLINEAR,
	rwFILTERMIPNEAREST,
	rwFILTERMIPLINEAR,
	rwFILTERLINEARMIPNEAREST,
	rwFILTERLINEARMIPLINEAR,
	rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_38 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RxNodeMethods
{
	type_9 nodeBody;
	type_12 nodeInit;
	type_13 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_6 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct callback
{
	type_39 render;
	type_44 layout_update;
	type_44 render_update;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_46 eventFunc;
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
	type_52 clusters;
};

struct _class_4
{
	int16 x;
	int16 y;
};

enum _enum_1
{
	SCALE_FONT,
	SCALE_SCREEN,
	SCALE_SIZE,
	SCALE_FONT_WIDTH,
	SCALE_FONT_HEIGHT,
	SCALE_SCREEN_WIDTH,
	SCALE_SCREEN_HEIGHT
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
	type_55 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_58 qWords;
};

struct _class_5
{
	uint8 offset;
	uint8 size;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

basic_rect_1 screen_bounds;
basic_rect_1 default_adjust;
type_59 buffer;
type_4 buffer;
type_24 default_font_texture;
type_61 default_font_assets;
type_34 active_fonts;
uint32 active_fonts_size;
type_31 vert_buffer;
uint32 vert_buffer_used;
float32 rcz;
float32 nsz;
type_0 model_cache;
uint8 model_cache_inited;
_class_2 oldrs;
substr text_delims;
tex_args def_tex_args;
model_args def_model_args;
type_11 tl_cache;
callback text_cb;
uint8 disable_text_stats;
type_43 format_tags_buffer;
tag_type* format_tags;
uint32 format_tags_size;
type_33 ourGlobals;
basic_rect_1 m_Unit;
xVec3 m_Null;
basic_rect_1 m_Null;
iColor_tag g_WHITE;
xMat4x3 g_I3;
uint32 gActiveHeap;

void render_fill_rect(basic_rect_1& bounds, iColor_tag color);
void set_rect_vert(RwSky2DVertex& vert, float32 x, float32 y, float32 z, iColor_tag c, float32 rcz);
tag_type* find_format_tag(substr& s, int32& index);
void register_tags(tag_type* t, uint32 size);
void parse_tag_timer(jot& j, split_tag& ti);
void parse_tag_pop(split_tag& ti);
void parse_tag_insert_hash(jot& j, split_tag& ti);
void parse_tag_insert(jot& j, split_tag& ti);
void reset_tag_tex();
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_tex(jot& j, xtextbox& tb, float32 x, float32 y);
void reset_tag_model();
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_model(jot& j, xtextbox& tb, float32 x, float32 y);
void parse_tag_page_break(jot& a);
void parse_tag_word_break(jot& a);
void parse_tag_tab(jot& a);
void parse_tag_newline(jot& a, xtextbox& tb);
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti);
void reset_tag_yjustify(jot& a);
void parse_tag_yjustify(jot& a, split_tag& ti);
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_yjustify(jot& j, xtextbox& tb);
void reset_tag_xjustify(jot& a);
void parse_tag_xjustify(jot& a, split_tag& ti);
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_xjustify(jot& j, xtextbox& tb);
void reset_tag_wrap(jot& a);
void parse_tag_wrap(jot& a, split_tag& ti);
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb);
void update_tag_wrap(jot& j, xtextbox& tb);
void reset_tag_font(jot& a);
void parse_tag_font(jot& a, split_tag& ti);
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb);
void update_tag_font(jot& j, xtextbox& tb);
void reset_tag_color(jot& a);
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb);
void update_tag_color(jot& j, xtextbox& tb);
void reset_tag_all(jot& j);
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb);
void reset_tag_yspace(jot& a);
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb);
void update_tag_yspace(jot& j, xtextbox& tb);
void reset_tag_xspace(jot& a);
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb);
void update_tag_xspace(jot& j, xtextbox& tb);
void reset_tag_tab_stop(jot& a);
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb);
void update_tag_tab_stop(jot& j, xtextbox& tb);
void reset_tag_right_indent(jot& a);
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_right_indent(jot& j, xtextbox& tb);
void reset_tag_left_indent(jot& a);
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_left_indent(jot& j, xtextbox& tb);
void reset_tag_height(jot& a);
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb);
void update_tag_height(jot& j, xtextbox& tb);
void reset_tag_width(jot& a);
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb);
void update_tag_width(jot& j, xtextbox& tb);
void reset_tag_blue(jot& a);
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb);
void update_tag_blue(jot& j, xtextbox& tb);
void reset_tag_green(jot& a);
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb);
void update_tag_green(jot& j, xtextbox& tb);
void reset_tag_red(jot& a);
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb);
void update_tag_red(jot& j, xtextbox& tb);
void reset_tag_alpha(jot& a);
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb);
void update_tag_alpha(jot& j, xtextbox& tb);
uint8 changed(layout* this, xtextbox& ctb);
float32 yextent(layout* this, float32 max, int32& size, int32 begin_jot, int32 end_jot);
void render(layout* this, xtextbox& ctb, int32 begin_jot, int32 end_jot);
void calc(layout* this, xtextbox& ctb, uint32 start_text);
uint8 fit_line(layout* this);
void bound_line(layout* this, jot_line& line);
void merge_line(layout* this, jot_line& line);
void trim_line(layout* this, jot_line& line);
void clear(layout* this);
void refresh_end(layout* this, xtextbox& tb);
void refresh(layout* this, xtextbox& tb, uint8 force);
void clear_layout_cache();
uint32 read_list(tag_entry& e, int32* v, uint32 vsize);
uint32 read_list(tag_entry& e, float32* v, uint32 vsize);
tag_entry* find_entry(tag_entry_list& el, substr& name);
tag_entry_list read_tag(substr& s);
float32 yextent(float32 max, int32& size, layout& l, int32 begin_jot, int32 end_jot);
void render(xtextbox* this, layout& l, int32 begin_jot, int32 end_jot);
layout& temp_layout(xtextbox* this, uint8 cache);
void set_text(xtextbox* this, int8** texts, uint32* text_sizes, uint32 size);
void set_text(xtextbox* this, int8** texts, uint32 size);
void set_text(xtextbox* this, int8* text);
void text_render(jot& j, xtextbox& tb, float32 x, float32 y);
void start_layout();
void load_model_args(model_args& ma, substr& s);
void load_tex_args(tex_args& ta, substr& s);
int8* parse_next_text_jot(jot& a, xtextbox& tb, int8* text);
int8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, int8* text, uint32 text_size);
uint32 parse_split_tag(split_tag& ti);
void irender(xfont* this, int8* text, uint32 text_size, float32 x, float32 y);
void irender(xfont* this, int8* text, float32 x, float32 y);
void stop_render();
void start_render(xfont* this);
basic_rect_1 bounds(xfont* this, int8* text, uint32 text_size, float32 max_width, uint32& size);
basic_rect_1 bounds(xfont* this, int8* text);
void restore_render_state();
void set_render_state(RwRaster* raster);
void init();
xModelInstance* load_model(uint32 id);
void init_model_cache();
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color);
uint8 init_font_data(font_data& fd);
uint8 reset_font_spacing(font_asset& a);
basic_rect_0 find_bounds(iColor_tag* bits, basic_rect_0& r, int32 pitch);

// render_fill_rect__FRC13basic_rect<f>10iColor_tag
// Start address: 0x1daf50
void render_fill_rect(basic_rect_1& bounds, iColor_tag color)
{
	float32 rcz;
	float32 nsz;
	type_49 vert;
	basic_rect_1 r;
}

// set_rect_vert__19@unnamed@xFont_cpp@FR13RwSky2DVertexfff10iColor_tagf
// Start address: 0x1db1b0
void set_rect_vert(RwSky2DVertex& vert, float32 x, float32 y, float32 z, iColor_tag c, float32 rcz)
{
}

// find_format_tag__8xtextboxFRC6substrRi
// Start address: 0x1db2b0
tag_type* find_format_tag(substr& s, int32& index)
{
	int32 start;
	int32 end;
	tag_type& t;
	int32 c;
}

// register_tags__8xtextboxFPCQ28xtextbox8tag_typeUi
// Start address: 0x1db390
void register_tags(tag_type* t, uint32 size)
{
	tag_type* s1;
	tag_type* s2;
	tag_type* end1;
	tag_type* end2;
	tag_type* d;
	int32 c;
}

// parse_tag_timer__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db5a0
void parse_tag_timer(jot& j, split_tag& ti)
{
	uint32 id;
	xTimer* ta;
	type_60 buffer;
	uint32 sec;
	uint32 mn;
}

// parse_tag_pop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db750
void parse_tag_pop(split_tag& ti)
{
}

// parse_tag_insert_hash__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db790
void parse_tag_insert_hash(jot& j, split_tag& ti)
{
	xTextAsset* ta;
}

// parse_tag_insert__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db870
void parse_tag_insert(jot& j, split_tag& ti)
{
	uint32 id;
	xTextAsset* ta;
}

// reset_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db950
void reset_tag_tex()
{
}

// parse_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dba00
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti)
{
	tex_tag_context& ttc;
	callback cb;
}

// render_tag_tex__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dbe60
void render_tag_tex(jot& j, xtextbox& tb, float32 x, float32 y)
{
	tex_tag_context& ttc;
	basic_rect_1 dst;
}

// reset_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbf50
void reset_tag_model()
{
}

// parse_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbff0
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti)
{
	model_tag_context& mtc;
	callback cb;
}

// render_tag_model__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dc280
void render_tag_model(jot& j, xtextbox& tb, float32 x, float32 y)
{
	model_tag_context& mtc;
	basic_rect_1 dst;
	xVec3 from;
	xVec3 to;
	xMat4x3 frame;
	float32 scale;
}

// parse_tag_page_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc490
void parse_tag_page_break(jot& a)
{
}

// parse_tag_word_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4b0
void parse_tag_word_break(jot& a)
{
}

// parse_tag_tab__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4d0
void parse_tag_tab(jot& a)
{
}

// parse_tag_newline__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4f0
void parse_tag_newline(jot& a, xtextbox& tb)
{
}

// parse_tag_open_curly__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc600
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti)
{
	int8 c;
}

// reset_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc710
void reset_tag_yjustify(jot& a)
{
	callback cb;
}

// parse_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc720
void parse_tag_yjustify(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
}

// update_tag_reset_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8c0
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8e0
void update_tag_yjustify(jot& j, xtextbox& tb)
{
}

// reset_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc900
void reset_tag_xjustify(jot& a)
{
	callback cb;
}

// parse_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc910
void parse_tag_xjustify(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
}

// update_tag_reset_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcab0
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcad0
void update_tag_xjustify(jot& j, xtextbox& tb)
{
}

// reset_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcaf0
void reset_tag_wrap(jot& a)
{
	callback cb;
}

// parse_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcb00
void parse_tag_wrap(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
}

// update_tag_reset_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc00
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc20
void update_tag_wrap(jot& j, xtextbox& tb)
{
}

// reset_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc40
void reset_tag_font(jot& a)
{
	callback cb;
}

// parse_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc50
void parse_tag_font(jot& a, split_tag& ti)
{
	uint32& id;
	callback cb;
}

// update_tag_reset_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcce0
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dccf0
void update_tag_font(jot& j, xtextbox& tb)
{
}

// reset_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd00
void reset_tag_color(jot& a)
{
	callback cb;
}

// parse_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd10
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti)
{
	iColor_tag& color;
	uint32 v;
	uint32 temp;
	callback cb;
}

// update_tag_reset_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf50
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf80
void update_tag_color(jot& j, xtextbox& tb)
{
}

// reset_tag_all__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcfb0
void reset_tag_all(jot& j)
{
	callback cb;
}

// update_tag_reset_all__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcfc0
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb)
{
}

// reset_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0a0
void reset_tag_yspace(jot& a)
{
	callback cb;
}

// parse_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0b0
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd1f0
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd200
void update_tag_yspace(jot& j, xtextbox& tb)
{
}

// reset_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd210
void reset_tag_xspace(jot& a)
{
	callback cb;
}

// parse_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd220
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd360
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd370
void update_tag_xspace(jot& j, xtextbox& tb)
{
}

// reset_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd380
void reset_tag_tab_stop(jot& a)
{
	callback cb;
}

// parse_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd390
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4c0
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4d0
void update_tag_tab_stop(jot& j, xtextbox& tb)
{
}

// reset_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4e0
void reset_tag_right_indent(jot& a)
{
	callback cb;
}

// parse_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4f0
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd630
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd640
void update_tag_right_indent(jot& j, xtextbox& tb)
{
}

// reset_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd650
void reset_tag_left_indent(jot& a)
{
	callback cb;
}

// parse_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd660
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7a0
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7b0
void update_tag_left_indent(jot& j, xtextbox& tb)
{
}

// reset_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7c0
void reset_tag_height(jot& a)
{
	callback cb;
}

// parse_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7d0
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd900
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd910
void update_tag_height(jot& j, xtextbox& tb)
{
}

// reset_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd920
void reset_tag_width(jot& a)
{
	callback cb;
}

// parse_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd930
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda60
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda70
void update_tag_width(jot& j, xtextbox& tb)
{
}

// reset_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda80
void reset_tag_blue(jot& a)
{
	callback cb;
}

// parse_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda90
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc30
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc40
void update_tag_blue(jot& j, xtextbox& tb)
{
}

// reset_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcb0
void reset_tag_green(jot& a)
{
	callback cb;
}

// parse_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcc0
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde60
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde70
void update_tag_green(jot& j, xtextbox& tb)
{
}

// reset_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddee0
void reset_tag_red(jot& a)
{
	callback cb;
}

// parse_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddef0
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de090
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de0a0
void update_tag_red(jot& j, xtextbox& tb)
{
}

// reset_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de110
void reset_tag_alpha(jot& a)
{
	callback cb;
}

// parse_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de120
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
}

// update_tag_reset_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2c0
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2d0
void update_tag_alpha(jot& j, xtextbox& tb)
{
}

// changed__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1de340
uint8 changed(layout* this, xtextbox& ctb)
{
	uint32 flags1;
	uint32 flags2;
	int32 i;
	jot& j;
	uint32 oldval;
	uint32 val;
}

// yextent__Q28xtextbox6layoutCFfRiii
// Start address: 0x1de550
float32 yextent(layout* this, float32 max, int32& size, int32 begin_jot, int32 end_jot)
{
	int32 begin_line;
	float32 top;
	int32 i;
	jot_line& line;
	jot_line& line;
}

// render__Q28xtextbox6layoutFRC8xtextboxii
// Start address: 0x1de690
void render(layout* this, xtextbox& ctb, int32 begin_jot, int32 end_jot)
{
	int32 begin_line;
	int32 i;
	jot& j;
	float32 top;
	uint32 li;
	int32 line_last;
	float32 x;
	float32 y;
	int32 i;
	jot_line& line;
	uint32 xj;
	jot& j;
}

// calc__Q28xtextbox6layoutFRC8xtextboxUi
// Start address: 0x1deba0
void calc(layout* this, xtextbox& ctb, uint32 start_text)
{
	jot_line& first_line;
	type_36 text_stack;
	uint32 text_stack_size;
	uint32 text_index;
	int8* s;
	int8* end;
	jot& a;
	jot_line& line;
	jot_line& last_line;
	uint32 i;
}

// fit_line__Q28xtextbox6layoutFv
// Start address: 0x1df1b0
uint8 fit_line(layout* this)
{
	jot_line& line;
	int32 i;
}

// bound_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df330
void bound_line(layout* this, jot_line& line)
{
	uint32 i;
	jot& a;
	uint32 i;
	jot& a;
	float32 total_height;
}

// merge_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df460
void merge_line(layout* this, jot_line& line)
{
	uint32 d;
	uint32 i;
	jot& a1;
	jot& a2;
}

// trim_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df730
void trim_line(layout* this, jot_line& line)
{
	int32 i;
	jot& a;
	uint32 i;
	jot& a;
}

// clear__Q28xtextbox6layoutFv
// Start address: 0x1df9b0
void clear(layout* this)
{
}

// refresh_end__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1dfcd0
void refresh_end(layout* this, xtextbox& tb)
{
}

// refresh__Q28xtextbox6layoutFRC8xtextboxb
// Start address: 0x1dfdd0
void refresh(layout* this, xtextbox& tb, uint8 force)
{
}

// clear_layout_cache__8xtextboxFv
// Start address: 0x1dff00
void clear_layout_cache()
{
	uint32 index;
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUi
// Start address: 0x1dff60
uint32 read_list(tag_entry& e, int32* v, uint32 vsize)
{
	uint32 total;
	uint32 i;
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUi
// Start address: 0x1e0000
uint32 read_list(tag_entry& e, float32* v, uint32 vsize)
{
	uint32 total;
	uint32 i;
}

// find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
// Start address: 0x1e00a0
tag_entry* find_entry(tag_entry_list& el, substr& name)
{
	uint32 i;
	tag_entry& e;
}

// read_tag__8xtextboxFRC6substr
// Start address: 0x1e0140
tag_entry_list read_tag(substr& s)
{
	uint32 entries_used;
	substr it;
	substr delims;
	substr sub_delims;
	tag_entry& entry;
	int8* d;
	substr& arg;
	int8* d;
	tag_entry_list ret;
	type_22 arg_buffer;
	type_25 entry_buffer;
}

// yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
// Start address: 0x1e05e0
float32 yextent(float32 max, int32& size, layout& l, int32 begin_jot, int32 end_jot)
{
}

// render__8xtextboxCFRQ28xtextbox6layoutii
// Start address: 0x1e05f0
void render(xtextbox* this, layout& l, int32 begin_jot, int32 end_jot)
{
}

// temp_layout__8xtextboxCFb
// Start address: 0x1e0600
layout& temp_layout(xtextbox* this, uint8 cache)
{
	long32 cur_time;
	uint8 refresh;
	uint32 index;
	int32 min_used;
	uint32 i;
	int32 used;
	tl_cache_entry& e;
}

// set_text__8xtextboxFPPCcPCUiUi
// Start address: 0x1e0960
void set_text(xtextbox* this, int8** texts, uint32* text_sizes, uint32 size)
{
	uint32 i;
	uint32 i;
}

// set_text__8xtextboxFPPCcUi
// Start address: 0x1e0a70
void set_text(xtextbox* this, int8** texts, uint32 size)
{
}

// set_text__8xtextboxFPCc
// Start address: 0x1e0a80
void set_text(xtextbox* this, int8* text)
{
}

// text_render__8xtextboxFRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1e0ad0
void text_render(jot& j, xtextbox& tb, float32 x, float32 y)
{
}

// start_layout__19@unnamed@xFont_cpp@FRC8xtextbox
// Start address: 0x1e0af0
void start_layout()
{
}

// load_model_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10model_argsRC6substr
// Start address: 0x1e0c10
void load_model_args(model_args& ma, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	uint32 id;
}

// load_tex_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@8tex_argsRC6substr
// Start address: 0x1e1180
void load_tex_args(tex_args& ta, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	uint32 id;
	RwTexture* texture;
}

// parse_next_text_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1b20
int8* parse_next_text_jot(jot& a, xtextbox& tb, int8* text)
{
	int8 c;
}

// parse_next_tag_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1d40
int8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, int8* text, uint32 text_size)
{
	split_tag ti;
	uint32 size;
}

// parse_split_tag__19@unnamed@xFont_cpp@FRQ28xtextbox9split_tag
// Start address: 0x1e1f50
uint32 parse_split_tag(split_tag& ti)
{
	substr s;
}

// irender__5xfontCFPCcUiff
// Start address: 0x1e2340
void irender(xfont* this, int8* text, uint32 text_size, float32 x, float32 y)
{
	font_data& fd;
	basic_rect_1 bounds;
	uint32 i;
	uint32 charIndex;
}

// irender__5xfontCFPCcff
// Start address: 0x1e2600
void irender(xfont* this, int8* text, float32 x, float32 y)
{
}

// stop_render__5xfontCFv
// Start address: 0x1e2610
void stop_render()
{
}

// start_render__5xfontCFv
// Start address: 0x1e26e0
void start_render(xfont* this)
{
}

// bounds__5xfontCFPCcUifRUi
// Start address: 0x1e2750
basic_rect_1 bounds(xfont* this, int8* text, uint32 text_size, float32 max_width, uint32& size)
{
	font_data& fd;
	basic_rect_1 r;
	int8* s;
	uint32 i;
	uint32 charIndex;
	float32 dx;
}

// bounds__5xfontCFPCc
// Start address: 0x1e28c0
basic_rect_1 bounds(xfont* this, int8* text)
{
	uint32 size;
}

// restore_render_state__5xfontFv
// Start address: 0x1e28f0
void restore_render_state()
{
}

// set_render_state__5xfontFP8RwRaster
// Start address: 0x1e29a0
void set_render_state(RwRaster* raster)
{
}

// init__5xfontFv
// Start address: 0x1e2ac0
void init()
{
	uint32 i;
	font_data& fd;
}

// load_model__19@unnamed@xFont_cpp@FUi
// Start address: 0x1e2b90
xModelInstance* load_model(uint32 id)
{
	uint32 oldest;
	uint32 i;
	RpAtomic* mf;
	model_cache_entry& e;
	xModelInstance& model;
	uint32 next_order;
}

// init_model_cache__19@unnamed@xFont_cpp@Fv
// Start address: 0x1e2cd0
void init_model_cache()
{
	void* data;
	model_pool& pool;
	xModelInstance& model;
	model_cache_entry& e;
}

// tex_render__19@unnamed@xFont_cpp@FRC13basic_rect<f>RC13basic_rect<f>RC13basic_rect<f>10iColor_tag
// Start address: 0x1e2e90
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color)
{
	basic_rect_1 r;
	basic_rect_1 rt;
	RwSky2DVertex* vert;
}

// init_font_data__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@9font_data
// Start address: 0x1e35a0
uint8 init_font_data(font_data& fd)
{
	font_asset& a;
	int32 height;
	uint8 i;
	uint8 c;
	uint32 tail_index;
}

// reset_font_spacing__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10font_asset
// Start address: 0x1e3ce0
uint8 reset_font_spacing(font_asset& a)
{
	RwTexture* tex;
	basic_rect_0 char_bounds;
	type_32 baseline_count;
	int32 width;
	RwImage* image;
	iColor_tag* bits;
	int32 i;
	basic_rect_0 r;
	int32 baseline;
}

// find_bounds__19@unnamed@xFont_cpp@FPC10iColor_tagRC13basic_rect<i>i
// Start address: 0x1e3fb0
basic_rect_0 find_bounds(iColor_tag* bits, basic_rect_0& r, int32 pitch)
{
	int32 diff;
	iColor_tag* endp;
	iColor_tag* p;
	int32 pmode;
	int32 minx;
	int32 maxx;
	int32 miny;
	int32 maxy;
	int32 y;
	iColor_tag* endline;
	int32 x;
	basic_rect_0 b;
}

