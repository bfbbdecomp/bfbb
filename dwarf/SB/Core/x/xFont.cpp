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
typedef struct RwSky2DVertexAlignmentOverlay;
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
typedef tag_type type_43[128][2];
typedef jot type_47[512];
typedef jot_line type_48[128];
typedef RwSky2DVertex type_49[4];
typedef uint16 type_51[3];
typedef RxCluster type_52[1];
typedef uint8 type_54[1024];
typedef uint16 type_56[64];
typedef uint8 type_57[128];
typedef <unknown fundamental type (0xa510)> type_58[4];
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

	void irender(int8* text, uint32 text_size, float32 x, float32 y);
	void irender(int8* text, float32 x, float32 y);
	void start_render();
	basic_rect_1 bounds(int8* text, uint32 text_size, float32 max_width, uint32& size);
	basic_rect_1 bounds(int8* text);
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
	uint8 char_set[128];
	_class_5 char_pos[127];
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

	void render(layout& l, int32 begin_jot, int32 end_jot);
	layout& temp_layout(uint8 cache);
	void set_text(int8** texts, uint32* text_sizes, uint32 size);
	void set_text(int8** texts, uint32 size);
	void set_text(int8* text);
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
	RwMatrixTag mat[8];
	xModelInstance model[8];
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
	uint16 vertIndex[3];
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
	uint32 pad[4];
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
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
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
	void(*destroyNotify)(RwResEntry*);
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
	uint8 char_index[256];
	float32 iwidth;
	float32 iheight;
	basic_rect_1 tex_bounds[127];
	basic_rect_1 bounds[127];
	xVec2 dstfrac[127];
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

struct layout
{
	xtextbox tb;
	jot _jots[512];
	uint32 _jots_size;
	jot_line _lines[128];
	uint32 _lines_size;
	uint8 context_buffer[1024];
	uint32 context_buffer_size;
	uint16 dynamics[64];
	uint32 dynamics_size;

	uint8 changed(xtextbox& ctb);
	float32 yextent(float32 max, int32& size, int32 begin_jot, int32 end_jot);
	void render(xtextbox& ctb, int32 begin_jot, int32 end_jot);
	void calc(xtextbox& ctb, uint32 start_text);
	uint8 fit_line();
	void bound_line(jot_line& line);
	void merge_line(jot_line& line);
	void trim_line(jot_line& line);
	void clear();
	void refresh_end(xtextbox& tb);
	void refresh(xtextbox& tb, uint8 force);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint8 NumAnims[2];
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _class_0
{
	struct
	{
		uint8 invisible : 1;
		uint8 ethereal : 1;
		uint8 merge : 1;
		uint8 word_break : 1;
		uint8 word_end : 1;
		uint8 line_break : 1;
		uint8 stop : 1;
		uint8 tab : 1;
	};
	struct
	{
		uint8 insert : 1;
		uint8 dynamic : 1;
		uint8 page_break : 1;
		uint8 stateful : 1;
	};
	uint16 dummy : 4;
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RpClump*(*callback)(RpClump*, void*);
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
	RwTexCoords* texCoords[8];
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
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
int8 buffer[16];
int8 buffer[16];
int8* default_font_texture[3];
font_asset default_font_assets[4];
font_data active_fonts[4];
uint32 active_fonts_size;
RwSky2DVertex vert_buffer[120];
uint32 vert_buffer_used;
float32 rcz;
float32 nsz;
model_cache_entry model_cache[8];
uint8 model_cache_inited;
_class_2 oldrs;
substr text_delims;
tex_args def_tex_args;
model_args def_model_args;
tl_cache_entry tl_cache[3];
callback text_cb;
uint8 disable_text_stats;
tag_type format_tags_buffer[128][2];
tag_type* format_tags;
uint32 format_tags_size;
uint32 ourGlobals[4096];
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
uint8 changed(xtextbox& ctb);
float32 yextent(float32 max, int32& size, int32 begin_jot, int32 end_jot);
void render(xtextbox& ctb, int32 begin_jot, int32 end_jot);
void calc(xtextbox& ctb, uint32 start_text);
uint8 fit_line();
void bound_line(jot_line& line);
void merge_line(jot_line& line);
void trim_line(jot_line& line);
void clear();
void refresh_end(xtextbox& tb);
void refresh(xtextbox& tb, uint8 force);
void clear_layout_cache();
uint32 read_list(tag_entry& e, int32* v, uint32 vsize);
uint32 read_list(tag_entry& e, float32* v, uint32 vsize);
tag_entry* find_entry(tag_entry_list& el, substr& name);
tag_entry_list read_tag(substr& s);
float32 yextent(float32 max, int32& size, layout& l, int32 begin_jot, int32 end_jot);
void render(layout& l, int32 begin_jot, int32 end_jot);
layout& temp_layout(uint8 cache);
void set_text(int8** texts, uint32* text_sizes, uint32 size);
void set_text(int8** texts, uint32 size);
void set_text(int8* text);
void text_render(jot& j, xtextbox& tb, float32 x, float32 y);
void start_layout();
void load_model_args(model_args& ma, substr& s);
void load_tex_args(tex_args& ta, substr& s);
int8* parse_next_text_jot(jot& a, xtextbox& tb, int8* text);
int8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, int8* text, uint32 text_size);
uint32 parse_split_tag(split_tag& ti);
void irender(int8* text, uint32 text_size, float32 x, float32 y);
void irender(int8* text, float32 x, float32 y);
void stop_render();
void start_render();
basic_rect_1 bounds(int8* text, uint32 text_size, float32 max_width, uint32& size);
basic_rect_1 bounds(int8* text);
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
	RwSky2DVertex vert[4];
	basic_rect_1 r;
	// Line 2515, Address: 0x1daf50, Func Offset: 0
	// Line 2516, Address: 0x1daf54, Func Offset: 0x4
	// Line 2515, Address: 0x1daf58, Func Offset: 0x8
	// Line 2516, Address: 0x1daf5c, Func Offset: 0xc
	// Line 2515, Address: 0x1daf60, Func Offset: 0x10
	// Line 2516, Address: 0x1daf80, Func Offset: 0x30
	// Line 2518, Address: 0x1dafc0, Func Offset: 0x70
	// Line 2519, Address: 0x1dafdc, Func Offset: 0x8c
	// Line 2520, Address: 0x1dafe8, Func Offset: 0x98
	// Line 2522, Address: 0x1daff0, Func Offset: 0xa0
	// Line 2523, Address: 0x1daff4, Func Offset: 0xa4
	// Line 2522, Address: 0x1daff8, Func Offset: 0xa8
	// Line 2523, Address: 0x1db004, Func Offset: 0xb4
	// Line 2522, Address: 0x1db008, Func Offset: 0xb8
	// Line 2523, Address: 0x1db00c, Func Offset: 0xbc
	// Line 2524, Address: 0x1db014, Func Offset: 0xc4
	// Line 2523, Address: 0x1db01c, Func Offset: 0xcc
	// Line 2524, Address: 0x1db024, Func Offset: 0xd4
	// Line 2522, Address: 0x1db028, Func Offset: 0xd8
	// Line 2523, Address: 0x1db02c, Func Offset: 0xdc
	// Line 2522, Address: 0x1db030, Func Offset: 0xe0
	// Line 2523, Address: 0x1db03c, Func Offset: 0xec
	// Line 2524, Address: 0x1db06c, Func Offset: 0x11c
	// Line 2525, Address: 0x1db0e4, Func Offset: 0x194
	// Line 2526, Address: 0x1db0f4, Func Offset: 0x1a4
	// Line 2527, Address: 0x1db184, Func Offset: 0x234
	// Func End, Address: 0x1db1b0, Func Offset: 0x260
}

// set_rect_vert__19@unnamed@xFont_cpp@FR13RwSky2DVertexfff10iColor_tagf
// Start address: 0x1db1b0
void set_rect_vert(RwSky2DVertex& vert, float32 x, float32 y, float32 z, iColor_tag c, float32 rcz)
{
	// Line 2497, Address: 0x1db1b0, Func Offset: 0
	// Line 2498, Address: 0x1db1b8, Func Offset: 0x8
	// Line 2499, Address: 0x1db1bc, Func Offset: 0xc
	// Line 2500, Address: 0x1db1c0, Func Offset: 0x10
	// Line 2501, Address: 0x1db1c4, Func Offset: 0x14
	// Line 2502, Address: 0x1db1c8, Func Offset: 0x18
	// Line 2503, Address: 0x1db29c, Func Offset: 0xec
	// Func End, Address: 0x1db2a4, Func Offset: 0xf4
}

// find_format_tag__8xtextboxFRC6substrRi
// Start address: 0x1db2b0
tag_type* xtextbox::find_format_tag(substr& s, int32& index)
{
	int32 start;
	int32 end;
	tag_type& t;
	int32 c;
	// Line 2478, Address: 0x1db2b0, Func Offset: 0
	// Line 2479, Address: 0x1db2d4, Func Offset: 0x24
	// Line 2480, Address: 0x1db2d8, Func Offset: 0x28
	// Line 2482, Address: 0x1db2e0, Func Offset: 0x30
	// Line 2484, Address: 0x1db2f8, Func Offset: 0x48
	// Line 2483, Address: 0x1db2fc, Func Offset: 0x4c
	// Line 2484, Address: 0x1db314, Func Offset: 0x64
	// Line 2485, Address: 0x1db31c, Func Offset: 0x6c
	// Line 2486, Address: 0x1db330, Func Offset: 0x80
	// Line 2487, Address: 0x1db348, Func Offset: 0x98
	// Line 2488, Address: 0x1db350, Func Offset: 0xa0
	// Line 2489, Address: 0x1db358, Func Offset: 0xa8
	// Line 2490, Address: 0x1db360, Func Offset: 0xb0
	// Line 2491, Address: 0x1db368, Func Offset: 0xb8
	// Func End, Address: 0x1db388, Func Offset: 0xd8
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
	// Line 2454, Address: 0x1db390, Func Offset: 0
	// Line 2461, Address: 0x1db394, Func Offset: 0x4
	// Line 2454, Address: 0x1db398, Func Offset: 0x8
	// Line 2461, Address: 0x1db39c, Func Offset: 0xc
	// Line 2454, Address: 0x1db3a0, Func Offset: 0x10
	// Line 2461, Address: 0x1db3a4, Func Offset: 0x14
	// Line 2454, Address: 0x1db3a8, Func Offset: 0x18
	// Line 2461, Address: 0x1db3b0, Func Offset: 0x20
	// Line 2454, Address: 0x1db3b4, Func Offset: 0x24
	// Line 2461, Address: 0x1db3bc, Func Offset: 0x2c
	// Line 2462, Address: 0x1db3c4, Func Offset: 0x34
	// Line 2461, Address: 0x1db3c8, Func Offset: 0x38
	// Line 2462, Address: 0x1db3cc, Func Offset: 0x3c
	// Line 2461, Address: 0x1db3d0, Func Offset: 0x40
	// Line 2462, Address: 0x1db3dc, Func Offset: 0x4c
	// Line 2464, Address: 0x1db3ec, Func Offset: 0x5c
	// Line 2467, Address: 0x1db3f8, Func Offset: 0x68
	// Line 2468, Address: 0x1db404, Func Offset: 0x74
	// Line 2469, Address: 0x1db440, Func Offset: 0xb0
	// Line 2470, Address: 0x1db478, Func Offset: 0xe8
	// Line 2471, Address: 0x1db4a8, Func Offset: 0x118
	// Line 2472, Address: 0x1db4c8, Func Offset: 0x138
	// Line 2473, Address: 0x1db50c, Func Offset: 0x17c
	// Line 2474, Address: 0x1db550, Func Offset: 0x1c0
	// Line 2475, Address: 0x1db580, Func Offset: 0x1f0
	// Func End, Address: 0x1db5a0, Func Offset: 0x210
}

// parse_tag_timer__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db5a0
void parse_tag_timer(jot& j, split_tag& ti)
{
	uint32 id;
	xTimer* ta;
	int8 buffer[64];
	uint32 sec;
	uint32 mn;
	// Line 2344, Address: 0x1db5a0, Func Offset: 0
	// Line 2346, Address: 0x1db5a4, Func Offset: 0x4
	// Line 2344, Address: 0x1db5a8, Func Offset: 0x8
	// Line 2346, Address: 0x1db5ac, Func Offset: 0xc
	// Line 2344, Address: 0x1db5b0, Func Offset: 0x10
	// Line 2346, Address: 0x1db5b4, Func Offset: 0x14
	// Line 2345, Address: 0x1db5b8, Func Offset: 0x18
	// Line 2346, Address: 0x1db5bc, Func Offset: 0x1c
	// Line 2347, Address: 0x1db5ec, Func Offset: 0x4c
	// Line 2348, Address: 0x1db618, Func Offset: 0x78
	// Line 2349, Address: 0x1db620, Func Offset: 0x80
	// Line 2350, Address: 0x1db62c, Func Offset: 0x8c
	// Line 2351, Address: 0x1db634, Func Offset: 0x94
	// Line 2352, Address: 0x1db63c, Func Offset: 0x9c
	// Line 2354, Address: 0x1db644, Func Offset: 0xa4
	// Line 2360, Address: 0x1db648, Func Offset: 0xa8
	// Line 2354, Address: 0x1db650, Func Offset: 0xb0
	// Line 2360, Address: 0x1db684, Func Offset: 0xe4
	// Line 2361, Address: 0x1db6bc, Func Offset: 0x11c
	// Line 2360, Address: 0x1db6c0, Func Offset: 0x120
	// Line 2361, Address: 0x1db6c4, Func Offset: 0x124
	// Line 2362, Address: 0x1db6dc, Func Offset: 0x13c
	// Line 2363, Address: 0x1db6e4, Func Offset: 0x144
	// Line 2365, Address: 0x1db708, Func Offset: 0x168
	// Line 2368, Address: 0x1db720, Func Offset: 0x180
	// Line 2369, Address: 0x1db738, Func Offset: 0x198
	// Line 2370, Address: 0x1db740, Func Offset: 0x1a0
	// Func End, Address: 0x1db750, Func Offset: 0x1b0
}

// parse_tag_pop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db750
void parse_tag_pop(split_tag& ti)
{
	// Line 2322, Address: 0x1db750, Func Offset: 0
	// Line 2323, Address: 0x1db780, Func Offset: 0x30
	// Line 2341, Address: 0x1db788, Func Offset: 0x38
	// Func End, Address: 0x1db790, Func Offset: 0x40
}

// parse_tag_insert_hash__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db790
void parse_tag_insert_hash(jot& j, split_tag& ti)
{
	xTextAsset* ta;
	// Line 2305, Address: 0x1db790, Func Offset: 0
	// Line 2307, Address: 0x1db794, Func Offset: 0x4
	// Line 2305, Address: 0x1db798, Func Offset: 0x8
	// Line 2307, Address: 0x1db79c, Func Offset: 0xc
	// Line 2305, Address: 0x1db7a0, Func Offset: 0x10
	// Line 2307, Address: 0x1db7a4, Func Offset: 0x14
	// Line 2306, Address: 0x1db7a8, Func Offset: 0x18
	// Line 2307, Address: 0x1db7ac, Func Offset: 0x1c
	// Line 2308, Address: 0x1db7dc, Func Offset: 0x4c
	// Line 2309, Address: 0x1db808, Func Offset: 0x78
	// Line 2310, Address: 0x1db810, Func Offset: 0x80
	// Line 2311, Address: 0x1db820, Func Offset: 0x90
	// Line 2312, Address: 0x1db828, Func Offset: 0x98
	// Line 2313, Address: 0x1db830, Func Offset: 0xa0
	// Line 2317, Address: 0x1db838, Func Offset: 0xa8
	// Line 2315, Address: 0x1db83c, Func Offset: 0xac
	// Line 2316, Address: 0x1db840, Func Offset: 0xb0
	// Line 2317, Address: 0x1db844, Func Offset: 0xb4
	// Line 2316, Address: 0x1db848, Func Offset: 0xb8
	// Line 2317, Address: 0x1db84c, Func Offset: 0xbc
	// Line 2318, Address: 0x1db85c, Func Offset: 0xcc
	// Func End, Address: 0x1db870, Func Offset: 0xe0
}

// parse_tag_insert__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db870
void parse_tag_insert(jot& j, split_tag& ti)
{
	uint32 id;
	xTextAsset* ta;
	// Line 2290, Address: 0x1db870, Func Offset: 0
	// Line 2292, Address: 0x1db874, Func Offset: 0x4
	// Line 2290, Address: 0x1db878, Func Offset: 0x8
	// Line 2292, Address: 0x1db87c, Func Offset: 0xc
	// Line 2290, Address: 0x1db880, Func Offset: 0x10
	// Line 2292, Address: 0x1db884, Func Offset: 0x14
	// Line 2291, Address: 0x1db888, Func Offset: 0x18
	// Line 2292, Address: 0x1db88c, Func Offset: 0x1c
	// Line 2293, Address: 0x1db8bc, Func Offset: 0x4c
	// Line 2294, Address: 0x1db8e8, Func Offset: 0x78
	// Line 2295, Address: 0x1db8f0, Func Offset: 0x80
	// Line 2296, Address: 0x1db8fc, Func Offset: 0x8c
	// Line 2297, Address: 0x1db904, Func Offset: 0x94
	// Line 2298, Address: 0x1db90c, Func Offset: 0x9c
	// Line 2302, Address: 0x1db914, Func Offset: 0xa4
	// Line 2300, Address: 0x1db918, Func Offset: 0xa8
	// Line 2301, Address: 0x1db91c, Func Offset: 0xac
	// Line 2302, Address: 0x1db920, Func Offset: 0xb0
	// Line 2301, Address: 0x1db924, Func Offset: 0xb4
	// Line 2302, Address: 0x1db928, Func Offset: 0xb8
	// Line 2303, Address: 0x1db938, Func Offset: 0xc8
	// Func End, Address: 0x1db948, Func Offset: 0xd8
}

// reset_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db950
void reset_tag_tex()
{
	// Line 2285, Address: 0x1db950, Func Offset: 0
	// Line 2286, Address: 0x1db9f0, Func Offset: 0xa0
	// Func End, Address: 0x1db9f8, Func Offset: 0xa8
}

// parse_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dba00
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti)
{
	tex_tag_context& ttc;
	callback cb;
	// Line 2227, Address: 0x1dba00, Func Offset: 0
	// Line 2230, Address: 0x1dba18, Func Offset: 0x18
	// Line 2231, Address: 0x1dba30, Func Offset: 0x30
	// Line 2233, Address: 0x1dba38, Func Offset: 0x38
	// Line 2235, Address: 0x1dba3c, Func Offset: 0x3c
	// Line 2234, Address: 0x1dba40, Func Offset: 0x40
	// Line 2235, Address: 0x1dba44, Func Offset: 0x44
	// Line 2236, Address: 0x1dba4c, Func Offset: 0x4c
	// Line 2237, Address: 0x1dba7c, Func Offset: 0x7c
	// Line 2239, Address: 0x1dbaac, Func Offset: 0xac
	// Line 2240, Address: 0x1dbac8, Func Offset: 0xc8
	// Line 2244, Address: 0x1dbad8, Func Offset: 0xd8
	// Line 2240, Address: 0x1dbadc, Func Offset: 0xdc
	// Line 2244, Address: 0x1dbae8, Func Offset: 0xe8
	// Line 2247, Address: 0x1dbb10, Func Offset: 0x110
	// Line 2248, Address: 0x1dbb18, Func Offset: 0x118
	// Line 2250, Address: 0x1dbb20, Func Offset: 0x120
	// Line 2251, Address: 0x1dbb8c, Func Offset: 0x18c
	// Line 2252, Address: 0x1dbb94, Func Offset: 0x194
	// Line 2253, Address: 0x1dbb98, Func Offset: 0x198
	// Line 2254, Address: 0x1dbc04, Func Offset: 0x204
	// Line 2253, Address: 0x1dbc08, Func Offset: 0x208
	// Line 2254, Address: 0x1dbc0c, Func Offset: 0x20c
	// Line 2256, Address: 0x1dbc18, Func Offset: 0x218
	// Line 2258, Address: 0x1dbc20, Func Offset: 0x220
	// Line 2259, Address: 0x1dbc8c, Func Offset: 0x28c
	// Line 2258, Address: 0x1dbc90, Func Offset: 0x290
	// Line 2259, Address: 0x1dbc94, Func Offset: 0x294
	// Line 2261, Address: 0x1dbca0, Func Offset: 0x2a0
	// Line 2263, Address: 0x1dbca8, Func Offset: 0x2a8
	// Line 2264, Address: 0x1dbcf0, Func Offset: 0x2f0
	// Line 2263, Address: 0x1dbcf4, Func Offset: 0x2f4
	// Line 2264, Address: 0x1dbd00, Func Offset: 0x300
	// Line 2263, Address: 0x1dbd04, Func Offset: 0x304
	// Line 2264, Address: 0x1dbd18, Func Offset: 0x318
	// Line 2263, Address: 0x1dbd1c, Func Offset: 0x31c
	// Line 2264, Address: 0x1dbd20, Func Offset: 0x320
	// Line 2266, Address: 0x1dbd2c, Func Offset: 0x32c
	// Line 2267, Address: 0x1dbd34, Func Offset: 0x334
	// Line 2268, Address: 0x1dbd38, Func Offset: 0x338
	// Line 2269, Address: 0x1dbd80, Func Offset: 0x380
	// Line 2268, Address: 0x1dbd84, Func Offset: 0x384
	// Line 2269, Address: 0x1dbd90, Func Offset: 0x390
	// Line 2268, Address: 0x1dbd94, Func Offset: 0x394
	// Line 2269, Address: 0x1dbda8, Func Offset: 0x3a8
	// Line 2268, Address: 0x1dbdac, Func Offset: 0x3ac
	// Line 2269, Address: 0x1dbdb0, Func Offset: 0x3b0
	// Line 2271, Address: 0x1dbdbc, Func Offset: 0x3bc
	// Line 2272, Address: 0x1dbdc4, Func Offset: 0x3c4
	// Line 2273, Address: 0x1dbdc8, Func Offset: 0x3c8
	// Line 2281, Address: 0x1dbdd0, Func Offset: 0x3d0
	// Line 2276, Address: 0x1dbdd4, Func Offset: 0x3d4
	// Line 2280, Address: 0x1dbdd8, Func Offset: 0x3d8
	// Line 2281, Address: 0x1dbddc, Func Offset: 0x3dc
	// Line 2276, Address: 0x1dbde0, Func Offset: 0x3e0
	// Line 2277, Address: 0x1dbe0c, Func Offset: 0x40c
	// Line 2279, Address: 0x1dbe3c, Func Offset: 0x43c
	// Line 2280, Address: 0x1dbe40, Func Offset: 0x440
	// Line 2281, Address: 0x1dbe44, Func Offset: 0x444
	// Line 2282, Address: 0x1dbe48, Func Offset: 0x448
	// Func End, Address: 0x1dbe5c, Func Offset: 0x45c
}

// render_tag_tex__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dbe60
void render_tag_tex(jot& j, xtextbox& tb, float32 x, float32 y)
{
	tex_tag_context& ttc;
	basic_rect_1 dst;
	// Line 2219, Address: 0x1dbe60, Func Offset: 0
	// Line 2222, Address: 0x1dbe78, Func Offset: 0x18
	// Line 2219, Address: 0x1dbe7c, Func Offset: 0x1c
	// Line 2221, Address: 0x1dbe84, Func Offset: 0x24
	// Line 2222, Address: 0x1dbe90, Func Offset: 0x30
	// Line 2223, Address: 0x1dbed8, Func Offset: 0x78
	// Line 2224, Address: 0x1dbee0, Func Offset: 0x80
	// Line 2223, Address: 0x1dbee4, Func Offset: 0x84
	// Line 2224, Address: 0x1dbf18, Func Offset: 0xb8
	// Line 2225, Address: 0x1dbf28, Func Offset: 0xc8
	// Func End, Address: 0x1dbf48, Func Offset: 0xe8
}

// reset_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbf50
void reset_tag_model()
{
	// Line 2197, Address: 0x1dbf50, Func Offset: 0
	// Line 2198, Address: 0x1dbfe0, Func Offset: 0x90
	// Func End, Address: 0x1dbfe8, Func Offset: 0x98
}

// parse_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbff0
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti)
{
	model_tag_context& mtc;
	callback cb;
	// Line 2160, Address: 0x1dbff0, Func Offset: 0
	// Line 2163, Address: 0x1dc00c, Func Offset: 0x1c
	// Line 2164, Address: 0x1dc028, Func Offset: 0x38
	// Line 2166, Address: 0x1dc030, Func Offset: 0x40
	// Line 2168, Address: 0x1dc034, Func Offset: 0x44
	// Line 2167, Address: 0x1dc044, Func Offset: 0x54
	// Line 2168, Address: 0x1dc048, Func Offset: 0x58
	// Line 2170, Address: 0x1dc068, Func Offset: 0x78
	// Line 2168, Address: 0x1dc06c, Func Offset: 0x7c
	// Line 2170, Address: 0x1dc090, Func Offset: 0xa0
	// Line 2171, Address: 0x1dc0bc, Func Offset: 0xcc
	// Line 2175, Address: 0x1dc0e4, Func Offset: 0xf4
	// Line 2178, Address: 0x1dc0e8, Func Offset: 0xf8
	// Line 2173, Address: 0x1dc0ec, Func Offset: 0xfc
	// Line 2175, Address: 0x1dc10c, Func Offset: 0x11c
	// Line 2176, Address: 0x1dc124, Func Offset: 0x134
	// Line 2178, Address: 0x1dc134, Func Offset: 0x144
	// Line 2176, Address: 0x1dc138, Func Offset: 0x148
	// Line 2178, Address: 0x1dc144, Func Offset: 0x154
	// Line 2182, Address: 0x1dc160, Func Offset: 0x170
	// Line 2183, Address: 0x1dc194, Func Offset: 0x1a4
	// Line 2184, Address: 0x1dc1c4, Func Offset: 0x1d4
	// Line 2185, Address: 0x1dc1cc, Func Offset: 0x1dc
	// Line 2186, Address: 0x1dc1d0, Func Offset: 0x1e0
	// Line 2187, Address: 0x1dc208, Func Offset: 0x218
	// Line 2193, Address: 0x1dc240, Func Offset: 0x250
	// Line 2191, Address: 0x1dc244, Func Offset: 0x254
	// Line 2192, Address: 0x1dc248, Func Offset: 0x258
	// Line 2193, Address: 0x1dc24c, Func Offset: 0x25c
	// Line 2192, Address: 0x1dc250, Func Offset: 0x260
	// Line 2193, Address: 0x1dc254, Func Offset: 0x264
	// Line 2194, Address: 0x1dc258, Func Offset: 0x268
	// Func End, Address: 0x1dc274, Func Offset: 0x284
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
	// Line 2121, Address: 0x1dc280, Func Offset: 0
	// Line 2129, Address: 0x1dc284, Func Offset: 0x4
	// Line 2121, Address: 0x1dc288, Func Offset: 0x8
	// Line 2130, Address: 0x1dc28c, Func Offset: 0xc
	// Line 2121, Address: 0x1dc290, Func Offset: 0x10
	// Line 2128, Address: 0x1dc294, Func Offset: 0x14
	// Line 2121, Address: 0x1dc298, Func Offset: 0x18
	// Line 2129, Address: 0x1dc29c, Func Offset: 0x1c
	// Line 2123, Address: 0x1dc2a0, Func Offset: 0x20
	// Line 2129, Address: 0x1dc2a8, Func Offset: 0x28
	// Line 2130, Address: 0x1dc2ac, Func Offset: 0x2c
	// Line 2128, Address: 0x1dc2b4, Func Offset: 0x34
	// Line 2133, Address: 0x1dc2b8, Func Offset: 0x38
	// Line 2128, Address: 0x1dc2bc, Func Offset: 0x3c
	// Line 2133, Address: 0x1dc2c0, Func Offset: 0x40
	// Line 2128, Address: 0x1dc2c4, Func Offset: 0x44
	// Line 2129, Address: 0x1dc2f4, Func Offset: 0x74
	// Line 2130, Address: 0x1dc304, Func Offset: 0x84
	// Line 2133, Address: 0x1dc310, Func Offset: 0x90
	// Line 2135, Address: 0x1dc31c, Func Offset: 0x9c
	// Line 2139, Address: 0x1dc350, Func Offset: 0xd0
	// Line 2135, Address: 0x1dc354, Func Offset: 0xd4
	// Line 2136, Address: 0x1dc35c, Func Offset: 0xdc
	// Line 2135, Address: 0x1dc360, Func Offset: 0xe0
	// Line 2136, Address: 0x1dc364, Func Offset: 0xe4
	// Line 2137, Address: 0x1dc3cc, Func Offset: 0x14c
	// Line 2138, Address: 0x1dc3e4, Func Offset: 0x164
	// Line 2139, Address: 0x1dc3e8, Func Offset: 0x168
	// Line 2140, Address: 0x1dc3f8, Func Offset: 0x178
	// Line 2142, Address: 0x1dc408, Func Offset: 0x188
	// Line 2147, Address: 0x1dc420, Func Offset: 0x1a0
	// Line 2148, Address: 0x1dc42c, Func Offset: 0x1ac
	// Line 2149, Address: 0x1dc438, Func Offset: 0x1b8
	// Line 2152, Address: 0x1dc444, Func Offset: 0x1c4
	// Line 2155, Address: 0x1dc458, Func Offset: 0x1d8
	// Line 2156, Address: 0x1dc464, Func Offset: 0x1e4
	// Line 2157, Address: 0x1dc470, Func Offset: 0x1f0
	// Line 2158, Address: 0x1dc47c, Func Offset: 0x1fc
	// Func End, Address: 0x1dc490, Func Offset: 0x210
}

// parse_tag_page_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc490
void parse_tag_page_break(jot& a)
{
	// Line 2111, Address: 0x1dc490, Func Offset: 0
	// Func End, Address: 0x1dc4ac, Func Offset: 0x1c
}

// parse_tag_word_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4b0
void parse_tag_word_break(jot& a)
{
	// Line 2109, Address: 0x1dc4b0, Func Offset: 0
	// Func End, Address: 0x1dc4cc, Func Offset: 0x1c
}

// parse_tag_tab__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4d0
void parse_tag_tab(jot& a)
{
	// Line 2107, Address: 0x1dc4d0, Func Offset: 0
	// Func End, Address: 0x1dc4ec, Func Offset: 0x1c
}

// parse_tag_newline__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4f0
void parse_tag_newline(jot& a, xtextbox& tb)
{
	// Line 2102, Address: 0x1dc4f0, Func Offset: 0
	// Line 2103, Address: 0x1dc4f8, Func Offset: 0x8
	// Line 2104, Address: 0x1dc4fc, Func Offset: 0xc
	// Line 2103, Address: 0x1dc500, Func Offset: 0x10
	// Line 2102, Address: 0x1dc504, Func Offset: 0x14
	// Line 2103, Address: 0x1dc508, Func Offset: 0x18
	// Line 2104, Address: 0x1dc50c, Func Offset: 0x1c
	// Line 2102, Address: 0x1dc518, Func Offset: 0x28
	// Line 2103, Address: 0x1dc524, Func Offset: 0x34
	// Line 2104, Address: 0x1dc534, Func Offset: 0x44
	// Line 2105, Address: 0x1dc5f8, Func Offset: 0x108
	// Func End, Address: 0x1dc600, Func Offset: 0x110
}

// parse_tag_open_curly__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc600
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti)
{
	int8 c;
	// Line 2091, Address: 0x1dc600, Func Offset: 0
	// Line 2095, Address: 0x1dc604, Func Offset: 0x4
	// Line 2092, Address: 0x1dc608, Func Offset: 0x8
	// Line 2095, Address: 0x1dc60c, Func Offset: 0xc
	// Line 2091, Address: 0x1dc614, Func Offset: 0x14
	// Line 2095, Address: 0x1dc618, Func Offset: 0x18
	// Line 2092, Address: 0x1dc61c, Func Offset: 0x1c
	// Line 2093, Address: 0x1dc620, Func Offset: 0x20
	// Line 2094, Address: 0x1dc628, Func Offset: 0x28
	// Line 2095, Address: 0x1dc62c, Func Offset: 0x2c
	// Line 2097, Address: 0x1dc6f0, Func Offset: 0xf0
	// Line 2098, Address: 0x1dc6f8, Func Offset: 0xf8
	// Line 2099, Address: 0x1dc6fc, Func Offset: 0xfc
	// Func End, Address: 0x1dc704, Func Offset: 0x104
}

// reset_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc710
void reset_tag_yjustify(jot& a)
{
	callback cb;
	// Line 2086, Address: 0x1dc710, Func Offset: 0
	// Line 2087, Address: 0x1dc718, Func Offset: 0x8
	// Func End, Address: 0x1dc720, Func Offset: 0x10
}

// parse_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc720
void parse_tag_yjustify(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
	// Line 2070, Address: 0x1dc720, Func Offset: 0
	// Line 2072, Address: 0x1dc738, Func Offset: 0x18
	// Line 2074, Address: 0x1dc760, Func Offset: 0x40
	// Line 2073, Address: 0x1dc764, Func Offset: 0x44
	// Line 2074, Address: 0x1dc768, Func Offset: 0x48
	// Line 2075, Address: 0x1dc7bc, Func Offset: 0x9c
	// Line 2076, Address: 0x1dc7c8, Func Offset: 0xa8
	// Line 2077, Address: 0x1dc820, Func Offset: 0x100
	// Line 2078, Address: 0x1dc828, Func Offset: 0x108
	// Line 2079, Address: 0x1dc880, Func Offset: 0x160
	// Line 2080, Address: 0x1dc888, Func Offset: 0x168
	// Line 2081, Address: 0x1dc890, Func Offset: 0x170
	// Line 2082, Address: 0x1dc89c, Func Offset: 0x17c
	// Func End, Address: 0x1dc8b8, Func Offset: 0x198
}

// update_tag_reset_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8c0
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb)
{
	// Line 2068, Address: 0x1dc8c0, Func Offset: 0
	// Func End, Address: 0x1dc8e0, Func Offset: 0x20
}

// update_tag_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8e0
void update_tag_yjustify(jot& j, xtextbox& tb)
{
	// Line 2066, Address: 0x1dc8e0, Func Offset: 0
	// Func End, Address: 0x1dc900, Func Offset: 0x20
}

// reset_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc900
void reset_tag_xjustify(jot& a)
{
	callback cb;
	// Line 2062, Address: 0x1dc900, Func Offset: 0
	// Line 2063, Address: 0x1dc908, Func Offset: 0x8
	// Func End, Address: 0x1dc910, Func Offset: 0x10
}

// parse_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc910
void parse_tag_xjustify(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
	// Line 2046, Address: 0x1dc910, Func Offset: 0
	// Line 2048, Address: 0x1dc928, Func Offset: 0x18
	// Line 2050, Address: 0x1dc950, Func Offset: 0x40
	// Line 2049, Address: 0x1dc954, Func Offset: 0x44
	// Line 2050, Address: 0x1dc958, Func Offset: 0x48
	// Line 2051, Address: 0x1dc9ac, Func Offset: 0x9c
	// Line 2052, Address: 0x1dc9b8, Func Offset: 0xa8
	// Line 2053, Address: 0x1dca10, Func Offset: 0x100
	// Line 2054, Address: 0x1dca18, Func Offset: 0x108
	// Line 2055, Address: 0x1dca70, Func Offset: 0x160
	// Line 2056, Address: 0x1dca78, Func Offset: 0x168
	// Line 2057, Address: 0x1dca80, Func Offset: 0x170
	// Line 2058, Address: 0x1dca8c, Func Offset: 0x17c
	// Func End, Address: 0x1dcaa8, Func Offset: 0x198
}

// update_tag_reset_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcab0
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb)
{
	// Line 2044, Address: 0x1dcab0, Func Offset: 0
	// Func End, Address: 0x1dcad0, Func Offset: 0x20
}

// update_tag_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcad0
void update_tag_xjustify(jot& j, xtextbox& tb)
{
	// Line 2042, Address: 0x1dcad0, Func Offset: 0
	// Func End, Address: 0x1dcaf0, Func Offset: 0x20
}

// reset_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcaf0
void reset_tag_wrap(jot& a)
{
	callback cb;
	// Line 2038, Address: 0x1dcaf0, Func Offset: 0
	// Line 2039, Address: 0x1dcaf8, Func Offset: 0x8
	// Func End, Address: 0x1dcb00, Func Offset: 0x10
}

// parse_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcb00
void parse_tag_wrap(jot& a, split_tag& ti)
{
	uint32& flags;
	callback cb;
	// Line 2024, Address: 0x1dcb00, Func Offset: 0
	// Line 2026, Address: 0x1dcb18, Func Offset: 0x18
	// Line 2027, Address: 0x1dcb48, Func Offset: 0x48
	// Line 2029, Address: 0x1dcb50, Func Offset: 0x50
	// Line 2028, Address: 0x1dcb58, Func Offset: 0x58
	// Line 2029, Address: 0x1dcb5c, Func Offset: 0x5c
	// Line 2030, Address: 0x1dcb78, Func Offset: 0x78
	// Line 2031, Address: 0x1dcba0, Func Offset: 0xa0
	// Line 2032, Address: 0x1dcbc8, Func Offset: 0xc8
	// Line 2033, Address: 0x1dcbd0, Func Offset: 0xd0
	// Line 2034, Address: 0x1dcbdc, Func Offset: 0xdc
	// Func End, Address: 0x1dcbf8, Func Offset: 0xf8
}

// update_tag_reset_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc00
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb)
{
	// Line 2022, Address: 0x1dcc00, Func Offset: 0
	// Func End, Address: 0x1dcc20, Func Offset: 0x20
}

// update_tag_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc20
void update_tag_wrap(jot& j, xtextbox& tb)
{
	// Line 2020, Address: 0x1dcc20, Func Offset: 0
	// Func End, Address: 0x1dcc40, Func Offset: 0x20
}

// reset_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc40
void reset_tag_font(jot& a)
{
	callback cb;
	// Line 2016, Address: 0x1dcc40, Func Offset: 0
	// Line 2017, Address: 0x1dcc48, Func Offset: 0x8
	// Func End, Address: 0x1dcc50, Func Offset: 0x10
}

// parse_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc50
void parse_tag_font(jot& a, split_tag& ti)
{
	uint32& id;
	callback cb;
	// Line 2004, Address: 0x1dcc50, Func Offset: 0
	// Line 2006, Address: 0x1dcc60, Func Offset: 0x10
	// Line 2007, Address: 0x1dcc90, Func Offset: 0x40
	// Line 2009, Address: 0x1dcc98, Func Offset: 0x48
	// Line 2010, Address: 0x1dcca8, Func Offset: 0x58
	// Line 2011, Address: 0x1dccbc, Func Offset: 0x6c
	// Line 2012, Address: 0x1dccc4, Func Offset: 0x74
	// Func End, Address: 0x1dccdc, Func Offset: 0x8c
}

// update_tag_reset_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcce0
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb)
{
	// Line 2002, Address: 0x1dcce0, Func Offset: 0
	// Func End, Address: 0x1dccec, Func Offset: 0xc
}

// update_tag_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dccf0
void update_tag_font(jot& j, xtextbox& tb)
{
	// Line 2000, Address: 0x1dccf0, Func Offset: 0
	// Func End, Address: 0x1dccfc, Func Offset: 0xc
}

// reset_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd00
void reset_tag_color(jot& a)
{
	callback cb;
	// Line 1996, Address: 0x1dcd00, Func Offset: 0
	// Line 1997, Address: 0x1dcd08, Func Offset: 0x8
	// Func End, Address: 0x1dcd10, Func Offset: 0x10
}

// parse_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd10
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti)
{
	iColor_tag& color;
	uint32 v;
	uint32 temp;
	callback cb;
	// Line 1954, Address: 0x1dcd10, Func Offset: 0
	// Line 1957, Address: 0x1dcd30, Func Offset: 0x20
	// Line 1959, Address: 0x1dcd58, Func Offset: 0x48
	// Line 1960, Address: 0x1dcd68, Func Offset: 0x58
	// Line 1961, Address: 0x1dcd90, Func Offset: 0x80
	// Line 1964, Address: 0x1dcdc0, Func Offset: 0xb0
	// Line 1965, Address: 0x1dcdc8, Func Offset: 0xb8
	// Line 1966, Address: 0x1dcdd0, Func Offset: 0xc0
	// Line 1968, Address: 0x1dcdd8, Func Offset: 0xc8
	// Line 1972, Address: 0x1dcde0, Func Offset: 0xd0
	// Line 1973, Address: 0x1dcdf0, Func Offset: 0xe0
	// Line 1974, Address: 0x1dce04, Func Offset: 0xf4
	// Line 1975, Address: 0x1dce14, Func Offset: 0x104
	// Line 1976, Address: 0x1dce28, Func Offset: 0x118
	// Line 1977, Address: 0x1dce38, Func Offset: 0x128
	// Line 1978, Address: 0x1dce4c, Func Offset: 0x13c
	// Line 1979, Address: 0x1dce58, Func Offset: 0x148
	// Line 1981, Address: 0x1dce68, Func Offset: 0x158
	// Line 1983, Address: 0x1dce70, Func Offset: 0x160
	// Line 1984, Address: 0x1dce84, Func Offset: 0x174
	// Line 1985, Address: 0x1dce88, Func Offset: 0x178
	// Line 1984, Address: 0x1dce8c, Func Offset: 0x17c
	// Line 1985, Address: 0x1dce90, Func Offset: 0x180
	// Line 1986, Address: 0x1dce94, Func Offset: 0x184
	// Line 1983, Address: 0x1dce98, Func Offset: 0x188
	// Line 1984, Address: 0x1dceb4, Func Offset: 0x1a4
	// Line 1985, Address: 0x1dced4, Func Offset: 0x1c4
	// Line 1986, Address: 0x1dcef4, Func Offset: 0x1e4
	// Line 1987, Address: 0x1dcf10, Func Offset: 0x200
	// Line 1988, Address: 0x1dcf18, Func Offset: 0x208
	// Line 1991, Address: 0x1dcf20, Func Offset: 0x210
	// Line 1992, Address: 0x1dcf2c, Func Offset: 0x21c
	// Func End, Address: 0x1dcf4c, Func Offset: 0x23c
}

// update_tag_reset_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf50
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb)
{
	// Line 1952, Address: 0x1dcf50, Func Offset: 0
	// Func End, Address: 0x1dcf74, Func Offset: 0x24
}

// update_tag_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf80
void update_tag_color(jot& j, xtextbox& tb)
{
	// Line 1950, Address: 0x1dcf80, Func Offset: 0
	// Func End, Address: 0x1dcfa4, Func Offset: 0x24
}

// reset_tag_all__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcfb0
void reset_tag_all(jot& j)
{
	callback cb;
	// Line 1946, Address: 0x1dcfb0, Func Offset: 0
	// Line 1947, Address: 0x1dcfb8, Func Offset: 0x8
	// Func End, Address: 0x1dcfc0, Func Offset: 0x10
}

// update_tag_reset_all__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcfc0
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb)
{
	// Line 1942, Address: 0x1dcfc0, Func Offset: 0
	// Func End, Address: 0x1dd094, Func Offset: 0xd4
}

// reset_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0a0
void reset_tag_yspace(jot& a)
{
	callback cb;
	// Line 1935, Address: 0x1dd0a0, Func Offset: 0
	// Func End, Address: 0x1dd0b0, Func Offset: 0x10
}

// parse_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0b0
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1935, Address: 0x1dd0b0, Func Offset: 0
	// Func End, Address: 0x1dd1e4, Func Offset: 0x134
}

// update_tag_reset_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd1f0
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb)
{
	// Line 1935, Address: 0x1dd1f0, Func Offset: 0
	// Func End, Address: 0x1dd1fc, Func Offset: 0xc
}

// update_tag_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd200
void update_tag_yspace(jot& j, xtextbox& tb)
{
	// Line 1935, Address: 0x1dd200, Func Offset: 0
	// Func End, Address: 0x1dd20c, Func Offset: 0xc
}

// reset_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd210
void reset_tag_xspace(jot& a)
{
	callback cb;
	// Line 1934, Address: 0x1dd210, Func Offset: 0
	// Func End, Address: 0x1dd220, Func Offset: 0x10
}

// parse_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd220
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1934, Address: 0x1dd220, Func Offset: 0
	// Func End, Address: 0x1dd354, Func Offset: 0x134
}

// update_tag_reset_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd360
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb)
{
	// Line 1934, Address: 0x1dd360, Func Offset: 0
	// Func End, Address: 0x1dd36c, Func Offset: 0xc
}

// update_tag_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd370
void update_tag_xspace(jot& j, xtextbox& tb)
{
	// Line 1934, Address: 0x1dd370, Func Offset: 0
	// Func End, Address: 0x1dd37c, Func Offset: 0xc
}

// reset_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd380
void reset_tag_tab_stop(jot& a)
{
	callback cb;
	// Line 1933, Address: 0x1dd380, Func Offset: 0
	// Func End, Address: 0x1dd390, Func Offset: 0x10
}

// parse_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd390
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1933, Address: 0x1dd390, Func Offset: 0
	// Func End, Address: 0x1dd4bc, Func Offset: 0x12c
}

// update_tag_reset_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4c0
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb)
{
	// Line 1933, Address: 0x1dd4c0, Func Offset: 0
	// Func End, Address: 0x1dd4cc, Func Offset: 0xc
}

// update_tag_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4d0
void update_tag_tab_stop(jot& j, xtextbox& tb)
{
	// Line 1933, Address: 0x1dd4d0, Func Offset: 0
	// Func End, Address: 0x1dd4dc, Func Offset: 0xc
}

// reset_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4e0
void reset_tag_right_indent(jot& a)
{
	callback cb;
	// Line 1932, Address: 0x1dd4e0, Func Offset: 0
	// Func End, Address: 0x1dd4f0, Func Offset: 0x10
}

// parse_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4f0
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1932, Address: 0x1dd4f0, Func Offset: 0
	// Func End, Address: 0x1dd624, Func Offset: 0x134
}

// update_tag_reset_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd630
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb)
{
	// Line 1932, Address: 0x1dd630, Func Offset: 0
	// Func End, Address: 0x1dd63c, Func Offset: 0xc
}

// update_tag_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd640
void update_tag_right_indent(jot& j, xtextbox& tb)
{
	// Line 1932, Address: 0x1dd640, Func Offset: 0
	// Func End, Address: 0x1dd64c, Func Offset: 0xc
}

// reset_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd650
void reset_tag_left_indent(jot& a)
{
	callback cb;
	// Line 1931, Address: 0x1dd650, Func Offset: 0
	// Func End, Address: 0x1dd660, Func Offset: 0x10
}

// parse_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd660
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1931, Address: 0x1dd660, Func Offset: 0
	// Func End, Address: 0x1dd794, Func Offset: 0x134
}

// update_tag_reset_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7a0
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb)
{
	// Line 1931, Address: 0x1dd7a0, Func Offset: 0
	// Func End, Address: 0x1dd7ac, Func Offset: 0xc
}

// update_tag_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7b0
void update_tag_left_indent(jot& j, xtextbox& tb)
{
	// Line 1931, Address: 0x1dd7b0, Func Offset: 0
	// Func End, Address: 0x1dd7bc, Func Offset: 0xc
}

// reset_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7c0
void reset_tag_height(jot& a)
{
	callback cb;
	// Line 1930, Address: 0x1dd7c0, Func Offset: 0
	// Func End, Address: 0x1dd7d0, Func Offset: 0x10
}

// parse_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7d0
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1930, Address: 0x1dd7d0, Func Offset: 0
	// Func End, Address: 0x1dd8fc, Func Offset: 0x12c
}

// update_tag_reset_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd900
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb)
{
	// Line 1930, Address: 0x1dd900, Func Offset: 0
	// Func End, Address: 0x1dd90c, Func Offset: 0xc
}

// update_tag_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd910
void update_tag_height(jot& j, xtextbox& tb)
{
	// Line 1930, Address: 0x1dd910, Func Offset: 0
	// Func End, Address: 0x1dd91c, Func Offset: 0xc
}

// reset_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd920
void reset_tag_width(jot& a)
{
	callback cb;
	// Line 1929, Address: 0x1dd920, Func Offset: 0
	// Func End, Address: 0x1dd930, Func Offset: 0x10
}

// parse_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd930
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1929, Address: 0x1dd930, Func Offset: 0
	// Func End, Address: 0x1dda5c, Func Offset: 0x12c
}

// update_tag_reset_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda60
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb)
{
	// Line 1929, Address: 0x1dda60, Func Offset: 0
	// Func End, Address: 0x1dda6c, Func Offset: 0xc
}

// update_tag_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda70
void update_tag_width(jot& j, xtextbox& tb)
{
	// Line 1929, Address: 0x1dda70, Func Offset: 0
	// Func End, Address: 0x1dda7c, Func Offset: 0xc
}

// reset_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda80
void reset_tag_blue(jot& a)
{
	callback cb;
	// Line 1928, Address: 0x1dda80, Func Offset: 0
	// Func End, Address: 0x1dda90, Func Offset: 0x10
}

// parse_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda90
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1928, Address: 0x1dda90, Func Offset: 0
	// Func End, Address: 0x1ddc2c, Func Offset: 0x19c
}

// update_tag_reset_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc30
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb)
{
	// Line 1928, Address: 0x1ddc30, Func Offset: 0
	// Func End, Address: 0x1ddc3c, Func Offset: 0xc
}

// update_tag_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc40
void update_tag_blue(jot& j, xtextbox& tb)
{
	// Line 1928, Address: 0x1ddc40, Func Offset: 0
	// Func End, Address: 0x1ddca8, Func Offset: 0x68
}

// reset_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcb0
void reset_tag_green(jot& a)
{
	callback cb;
	// Line 1927, Address: 0x1ddcb0, Func Offset: 0
	// Func End, Address: 0x1ddcc0, Func Offset: 0x10
}

// parse_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcc0
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1927, Address: 0x1ddcc0, Func Offset: 0
	// Func End, Address: 0x1dde5c, Func Offset: 0x19c
}

// update_tag_reset_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde60
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb)
{
	// Line 1927, Address: 0x1dde60, Func Offset: 0
	// Func End, Address: 0x1dde6c, Func Offset: 0xc
}

// update_tag_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde70
void update_tag_green(jot& j, xtextbox& tb)
{
	// Line 1927, Address: 0x1dde70, Func Offset: 0
	// Func End, Address: 0x1dded8, Func Offset: 0x68
}

// reset_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddee0
void reset_tag_red(jot& a)
{
	callback cb;
	// Line 1926, Address: 0x1ddee0, Func Offset: 0
	// Func End, Address: 0x1ddef0, Func Offset: 0x10
}

// parse_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddef0
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1926, Address: 0x1ddef0, Func Offset: 0
	// Func End, Address: 0x1de08c, Func Offset: 0x19c
}

// update_tag_reset_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de090
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb)
{
	// Line 1926, Address: 0x1de090, Func Offset: 0
	// Func End, Address: 0x1de09c, Func Offset: 0xc
}

// update_tag_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de0a0
void update_tag_red(jot& j, xtextbox& tb)
{
	// Line 1926, Address: 0x1de0a0, Func Offset: 0
	// Func End, Address: 0x1de108, Func Offset: 0x68
}

// reset_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de110
void reset_tag_alpha(jot& a)
{
	callback cb;
	// Line 1925, Address: 0x1de110, Func Offset: 0
	// Func End, Address: 0x1de120, Func Offset: 0x10
}

// parse_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de120
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti)
{
	float32& v;
	callback cb;
	// Line 1925, Address: 0x1de120, Func Offset: 0
	// Func End, Address: 0x1de2bc, Func Offset: 0x19c
}

// update_tag_reset_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2c0
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb)
{
	// Line 1925, Address: 0x1de2c0, Func Offset: 0
	// Func End, Address: 0x1de2cc, Func Offset: 0xc
}

// update_tag_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2d0
void update_tag_alpha(jot& j, xtextbox& tb)
{
	// Line 1925, Address: 0x1de2d0, Func Offset: 0
	// Func End, Address: 0x1de338, Func Offset: 0x68
}

// changed__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1de340
uint8 layout::changed(xtextbox& ctb)
{
	uint32 flags1;
	uint32 flags2;
	int32 i;
	jot& j;
	uint32 oldval;
	uint32 val;
	// Line 1850, Address: 0x1de340, Func Offset: 0
	// Line 1851, Address: 0x1de370, Func Offset: 0x30
	// Line 1853, Address: 0x1de374, Func Offset: 0x34
	// Line 1852, Address: 0x1de37c, Func Offset: 0x3c
	// Line 1851, Address: 0x1de380, Func Offset: 0x40
	// Line 1853, Address: 0x1de384, Func Offset: 0x44
	// Line 1861, Address: 0x1de408, Func Offset: 0xc8
	// Line 1864, Address: 0x1de410, Func Offset: 0xd0
	// Line 1867, Address: 0x1de42c, Func Offset: 0xec
	// Line 1866, Address: 0x1de430, Func Offset: 0xf0
	// Line 1867, Address: 0x1de434, Func Offset: 0xf4
	// Line 1868, Address: 0x1de44c, Func Offset: 0x10c
	// Line 1869, Address: 0x1de45c, Func Offset: 0x11c
	// Line 1868, Address: 0x1de460, Func Offset: 0x120
	// Line 1869, Address: 0x1de464, Func Offset: 0x124
	// Line 1870, Address: 0x1de4f4, Func Offset: 0x1b4
	// Line 1871, Address: 0x1de500, Func Offset: 0x1c0
	// Line 1872, Address: 0x1de510, Func Offset: 0x1d0
	// Line 1873, Address: 0x1de518, Func Offset: 0x1d8
	// Line 1874, Address: 0x1de520, Func Offset: 0x1e0
	// Func End, Address: 0x1de54c, Func Offset: 0x20c
}

// yextent__Q28xtextbox6layoutCFfRiii
// Start address: 0x1de550
float32 layout::yextent(float32 max, int32& size, int32 begin_jot, int32 end_jot)
{
	int32 begin_line;
	float32 top;
	int32 i;
	jot_line& line;
	jot_line& line;
	// Line 1816, Address: 0x1de550, Func Offset: 0
	// Line 1817, Address: 0x1de560, Func Offset: 0x10
	// Line 1818, Address: 0x1de570, Func Offset: 0x20
	// Line 1821, Address: 0x1de588, Func Offset: 0x38
	// Line 1822, Address: 0x1de59c, Func Offset: 0x4c
	// Line 1824, Address: 0x1de5a0, Func Offset: 0x50
	// Line 1825, Address: 0x1de5b8, Func Offset: 0x68
	// Line 1827, Address: 0x1de5cc, Func Offset: 0x7c
	// Line 1830, Address: 0x1de5dc, Func Offset: 0x8c
	// Line 1832, Address: 0x1de5e0, Func Offset: 0x90
	// Line 1830, Address: 0x1de5e4, Func Offset: 0x94
	// Line 1831, Address: 0x1de5e8, Func Offset: 0x98
	// Line 1833, Address: 0x1de5ec, Func Offset: 0x9c
	// Line 1835, Address: 0x1de5f0, Func Offset: 0xa0
	// Line 1837, Address: 0x1de5f8, Func Offset: 0xa8
	// Line 1838, Address: 0x1de618, Func Offset: 0xc8
	// Line 1839, Address: 0x1de628, Func Offset: 0xd8
	// Line 1841, Address: 0x1de638, Func Offset: 0xe8
	// Line 1843, Address: 0x1de640, Func Offset: 0xf0
	// Line 1844, Address: 0x1de658, Func Offset: 0x108
	// Line 1845, Address: 0x1de668, Func Offset: 0x118
	// Line 1846, Address: 0x1de678, Func Offset: 0x128
	// Line 1847, Address: 0x1de688, Func Offset: 0x138
	// Func End, Address: 0x1de690, Func Offset: 0x140
}

// render__Q28xtextbox6layoutFRC8xtextboxii
// Start address: 0x1de690
void layout::render(xtextbox& ctb, int32 begin_jot, int32 end_jot)
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
	// Line 1752, Address: 0x1de690, Func Offset: 0
	// Line 1753, Address: 0x1de6d0, Func Offset: 0x40
	// Line 1754, Address: 0x1de6e0, Func Offset: 0x50
	// Line 1755, Address: 0x1de6f0, Func Offset: 0x60
	// Line 1756, Address: 0x1de6fc, Func Offset: 0x6c
	// Line 1757, Address: 0x1de700, Func Offset: 0x70
	// Line 1756, Address: 0x1de704, Func Offset: 0x74
	// Line 1757, Address: 0x1de708, Func Offset: 0x78
	// Line 1756, Address: 0x1de70c, Func Offset: 0x7c
	// Line 1757, Address: 0x1de714, Func Offset: 0x84
	// Line 1756, Address: 0x1de718, Func Offset: 0x88
	// Line 1757, Address: 0x1de7d8, Func Offset: 0x148
	// Line 1761, Address: 0x1de818, Func Offset: 0x188
	// Line 1762, Address: 0x1de82c, Func Offset: 0x19c
	// Line 1764, Address: 0x1de830, Func Offset: 0x1a0
	// Line 1765, Address: 0x1de840, Func Offset: 0x1b0
	// Line 1766, Address: 0x1de8e8, Func Offset: 0x258
	// Line 1768, Address: 0x1de8f0, Func Offset: 0x260
	// Line 1770, Address: 0x1de904, Func Offset: 0x274
	// Line 1773, Address: 0x1de910, Func Offset: 0x280
	// Line 1775, Address: 0x1de920, Func Offset: 0x290
	// Line 1776, Address: 0x1de924, Func Offset: 0x294
	// Line 1777, Address: 0x1de938, Func Offset: 0x2a8
	// Line 1778, Address: 0x1de940, Func Offset: 0x2b0
	// Line 1781, Address: 0x1de950, Func Offset: 0x2c0
	// Line 1785, Address: 0x1de958, Func Offset: 0x2c8
	// Line 1781, Address: 0x1de95c, Func Offset: 0x2cc
	// Line 1782, Address: 0x1de960, Func Offset: 0x2d0
	// Line 1785, Address: 0x1de964, Func Offset: 0x2d4
	// Line 1787, Address: 0x1de988, Func Offset: 0x2f8
	// Line 1795, Address: 0x1de998, Func Offset: 0x308
	// Line 1794, Address: 0x1de99c, Func Offset: 0x30c
	// Line 1792, Address: 0x1de9a0, Func Offset: 0x310
	// Line 1794, Address: 0x1de9a4, Func Offset: 0x314
	// Line 1796, Address: 0x1de9a8, Func Offset: 0x318
	// Line 1794, Address: 0x1de9ac, Func Offset: 0x31c
	// Line 1791, Address: 0x1de9b0, Func Offset: 0x320
	// Line 1793, Address: 0x1de9b4, Func Offset: 0x324
	// Line 1795, Address: 0x1de9bc, Func Offset: 0x32c
	// Line 1794, Address: 0x1de9c0, Func Offset: 0x330
	// Line 1793, Address: 0x1de9c8, Func Offset: 0x338
	// Line 1796, Address: 0x1de9cc, Func Offset: 0x33c
	// Line 1797, Address: 0x1de9d4, Func Offset: 0x344
	// Line 1798, Address: 0x1de9f8, Func Offset: 0x368
	// Line 1799, Address: 0x1dea04, Func Offset: 0x374
	// Line 1800, Address: 0x1dea18, Func Offset: 0x388
	// Line 1802, Address: 0x1dea30, Func Offset: 0x3a0
	// Line 1803, Address: 0x1dea34, Func Offset: 0x3a4
	// Line 1804, Address: 0x1dea40, Func Offset: 0x3b0
	// Line 1805, Address: 0x1dea48, Func Offset: 0x3b8
	// Line 1806, Address: 0x1dea58, Func Offset: 0x3c8
	// Line 1807, Address: 0x1dea84, Func Offset: 0x3f4
	// Line 1808, Address: 0x1dea9c, Func Offset: 0x40c
	// Line 1810, Address: 0x1deab4, Func Offset: 0x424
	// Line 1811, Address: 0x1deb60, Func Offset: 0x4d0
	// Func End, Address: 0x1deb98, Func Offset: 0x508
}

// calc__Q28xtextbox6layoutFRC8xtextboxUi
// Start address: 0x1deba0
void layout::calc(xtextbox& ctb, uint32 start_text)
{
	jot_line& first_line;
	_class_3 text_stack[16];
	uint32 text_stack_size;
	uint32 text_index;
	int8* s;
	int8* end;
	jot& a;
	jot_line& line;
	jot_line& last_line;
	uint32 i;
	// Line 1623, Address: 0x1deba0, Func Offset: 0
	// Line 1624, Address: 0x1debd4, Func Offset: 0x34
	// Line 1625, Address: 0x1debdc, Func Offset: 0x3c
	// Line 1626, Address: 0x1dec08, Func Offset: 0x68
	// Line 1628, Address: 0x1dec14, Func Offset: 0x74
	// Line 1630, Address: 0x1dec1c, Func Offset: 0x7c
	// Line 1631, Address: 0x1dec30, Func Offset: 0x90
	// Line 1632, Address: 0x1dec34, Func Offset: 0x94
	// Line 1633, Address: 0x1dec38, Func Offset: 0x98
	// Line 1634, Address: 0x1dec3c, Func Offset: 0x9c
	// Line 1635, Address: 0x1dec40, Func Offset: 0xa0
	// Line 1640, Address: 0x1dec44, Func Offset: 0xa4
	// Line 1641, Address: 0x1dec48, Func Offset: 0xa8
	// Line 1642, Address: 0x1dec64, Func Offset: 0xc4
	// Line 1644, Address: 0x1dec6c, Func Offset: 0xcc
	// Line 1642, Address: 0x1dec74, Func Offset: 0xd4
	// Line 1643, Address: 0x1dec7c, Func Offset: 0xdc
	// Line 1650, Address: 0x1dec80, Func Offset: 0xe0
	// Line 1649, Address: 0x1dec88, Func Offset: 0xe8
	// Line 1650, Address: 0x1dec8c, Func Offset: 0xec
	// Line 1649, Address: 0x1dec90, Func Offset: 0xf0
	// Line 1651, Address: 0x1dec94, Func Offset: 0xf4
	// Line 1649, Address: 0x1dec98, Func Offset: 0xf8
	// Line 1651, Address: 0x1dec9c, Func Offset: 0xfc
	// Line 1649, Address: 0x1deca0, Func Offset: 0x100
	// Line 1651, Address: 0x1deca4, Func Offset: 0x104
	// Line 1649, Address: 0x1deca8, Func Offset: 0x108
	// Line 1650, Address: 0x1decac, Func Offset: 0x10c
	// Line 1649, Address: 0x1decb0, Func Offset: 0x110
	// Line 1650, Address: 0x1decb4, Func Offset: 0x114
	// Line 1651, Address: 0x1decbc, Func Offset: 0x11c
	// Line 1652, Address: 0x1deccc, Func Offset: 0x12c
	// Line 1653, Address: 0x1decd0, Func Offset: 0x130
	// Line 1654, Address: 0x1decd4, Func Offset: 0x134
	// Line 1658, Address: 0x1decd8, Func Offset: 0x138
	// Line 1660, Address: 0x1decf0, Func Offset: 0x150
	// Line 1662, Address: 0x1decf8, Func Offset: 0x158
	// Line 1664, Address: 0x1ded08, Func Offset: 0x168
	// Line 1665, Address: 0x1ded0c, Func Offset: 0x16c
	// Line 1666, Address: 0x1ded18, Func Offset: 0x178
	// Line 1668, Address: 0x1ded2c, Func Offset: 0x18c
	// Line 1669, Address: 0x1ded44, Func Offset: 0x1a4
	// Line 1671, Address: 0x1ded48, Func Offset: 0x1a8
	// Line 1669, Address: 0x1ded4c, Func Offset: 0x1ac
	// Line 1670, Address: 0x1ded54, Func Offset: 0x1b4
	// Line 1673, Address: 0x1ded5c, Func Offset: 0x1bc
	// Line 1676, Address: 0x1ded60, Func Offset: 0x1c0
	// Line 1677, Address: 0x1ded70, Func Offset: 0x1d0
	// Line 1676, Address: 0x1ded78, Func Offset: 0x1d8
	// Line 1677, Address: 0x1ded9c, Func Offset: 0x1fc
	// Line 1678, Address: 0x1dedec, Func Offset: 0x24c
	// Line 1679, Address: 0x1dedf4, Func Offset: 0x254
	// Line 1680, Address: 0x1dedfc, Func Offset: 0x25c
	// Line 1683, Address: 0x1dee00, Func Offset: 0x260
	// Line 1684, Address: 0x1dee7c, Func Offset: 0x2dc
	// Line 1683, Address: 0x1dee80, Func Offset: 0x2e0
	// Line 1684, Address: 0x1dee84, Func Offset: 0x2e4
	// Line 1683, Address: 0x1dee88, Func Offset: 0x2e8
	// Line 1684, Address: 0x1dee94, Func Offset: 0x2f4
	// Line 1685, Address: 0x1deeb0, Func Offset: 0x310
	// Line 1688, Address: 0x1deed0, Func Offset: 0x330
	// Line 1690, Address: 0x1deee0, Func Offset: 0x340
	// Line 1691, Address: 0x1deef4, Func Offset: 0x354
	// Line 1693, Address: 0x1def00, Func Offset: 0x360
	// Line 1696, Address: 0x1def14, Func Offset: 0x374
	// Line 1698, Address: 0x1def20, Func Offset: 0x380
	// Line 1699, Address: 0x1def30, Func Offset: 0x390
	// Line 1700, Address: 0x1def40, Func Offset: 0x3a0
	// Line 1702, Address: 0x1def50, Func Offset: 0x3b0
	// Line 1703, Address: 0x1def54, Func Offset: 0x3b4
	// Line 1704, Address: 0x1def68, Func Offset: 0x3c8
	// Line 1706, Address: 0x1defcc, Func Offset: 0x42c
	// Line 1709, Address: 0x1defd0, Func Offset: 0x430
	// Line 1711, Address: 0x1deff8, Func Offset: 0x458
	// Line 1712, Address: 0x1deffc, Func Offset: 0x45c
	// Line 1713, Address: 0x1df010, Func Offset: 0x470
	// Line 1714, Address: 0x1df074, Func Offset: 0x4d4
	// Line 1719, Address: 0x1df078, Func Offset: 0x4d8
	// Line 1726, Address: 0x1df090, Func Offset: 0x4f0
	// Line 1719, Address: 0x1df094, Func Offset: 0x4f4
	// Line 1722, Address: 0x1df098, Func Offset: 0x4f8
	// Line 1723, Address: 0x1df0a0, Func Offset: 0x500
	// Line 1724, Address: 0x1df0a4, Func Offset: 0x504
	// Line 1725, Address: 0x1df0a8, Func Offset: 0x508
	// Line 1728, Address: 0x1df0ac, Func Offset: 0x50c
	// Line 1731, Address: 0x1df0b8, Func Offset: 0x518
	// Line 1732, Address: 0x1df0d4, Func Offset: 0x534
	// Line 1734, Address: 0x1df0e4, Func Offset: 0x544
	// Line 1735, Address: 0x1df0e8, Func Offset: 0x548
	// Line 1739, Address: 0x1df110, Func Offset: 0x570
	// Line 1741, Address: 0x1df128, Func Offset: 0x588
	// Line 1744, Address: 0x1df13c, Func Offset: 0x59c
	// Line 1746, Address: 0x1df168, Func Offset: 0x5c8
	// Line 1749, Address: 0x1df180, Func Offset: 0x5e0
	// Func End, Address: 0x1df1b0, Func Offset: 0x610
}

// fit_line__Q28xtextbox6layoutFv
// Start address: 0x1df1b0
uint8 layout::fit_line()
{
	jot_line& line;
	int32 i;
	// Line 1570, Address: 0x1df1b0, Func Offset: 0
	// Line 1572, Address: 0x1df1b4, Func Offset: 0x4
	// Line 1570, Address: 0x1df1b8, Func Offset: 0x8
	// Line 1572, Address: 0x1df1bc, Func Offset: 0xc
	// Line 1570, Address: 0x1df1c0, Func Offset: 0x10
	// Line 1572, Address: 0x1df1cc, Func Offset: 0x1c
	// Line 1574, Address: 0x1df1d0, Func Offset: 0x20
	// Line 1572, Address: 0x1df1d4, Func Offset: 0x24
	// Line 1574, Address: 0x1df1dc, Func Offset: 0x2c
	// Line 1577, Address: 0x1df1ec, Func Offset: 0x3c
	// Line 1580, Address: 0x1df210, Func Offset: 0x60
	// Line 1581, Address: 0x1df228, Func Offset: 0x78
	// Line 1583, Address: 0x1df230, Func Offset: 0x80
	// Line 1587, Address: 0x1df238, Func Offset: 0x88
	// Line 1588, Address: 0x1df244, Func Offset: 0x94
	// Line 1590, Address: 0x1df260, Func Offset: 0xb0
	// Line 1591, Address: 0x1df27c, Func Offset: 0xcc
	// Line 1592, Address: 0x1df288, Func Offset: 0xd8
	// Line 1593, Address: 0x1df2a4, Func Offset: 0xf4
	// Line 1594, Address: 0x1df2ac, Func Offset: 0xfc
	// Line 1593, Address: 0x1df2b8, Func Offset: 0x108
	// Line 1594, Address: 0x1df2bc, Func Offset: 0x10c
	// Line 1596, Address: 0x1df2cc, Func Offset: 0x11c
	// Line 1597, Address: 0x1df2e0, Func Offset: 0x130
	// Line 1601, Address: 0x1df2ec, Func Offset: 0x13c
	// Line 1603, Address: 0x1df2f0, Func Offset: 0x140
	// Line 1604, Address: 0x1df2fc, Func Offset: 0x14c
	// Line 1605, Address: 0x1df308, Func Offset: 0x158
	// Line 1606, Address: 0x1df310, Func Offset: 0x160
	// Func End, Address: 0x1df324, Func Offset: 0x174
}

// bound_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df330
void layout::bound_line(jot_line& line)
{
	uint32 i;
	jot& a;
	uint32 i;
	jot& a;
	float32 total_height;
	// Line 1545, Address: 0x1df330, Func Offset: 0
	// Line 1548, Address: 0x1df33c, Func Offset: 0xc
	// Line 1552, Address: 0x1df358, Func Offset: 0x28
	// Line 1553, Address: 0x1df370, Func Offset: 0x40
	// Line 1554, Address: 0x1df388, Func Offset: 0x58
	// Line 1556, Address: 0x1df398, Func Offset: 0x68
	// Line 1559, Address: 0x1df3b0, Func Offset: 0x80
	// Line 1560, Address: 0x1df3c4, Func Offset: 0x94
	// Line 1561, Address: 0x1df3cc, Func Offset: 0x9c
	// Line 1562, Address: 0x1df3dc, Func Offset: 0xac
	// Line 1563, Address: 0x1df3e8, Func Offset: 0xb8
	// Line 1562, Address: 0x1df3ec, Func Offset: 0xbc
	// Line 1563, Address: 0x1df3f4, Func Offset: 0xc4
	// Line 1564, Address: 0x1df404, Func Offset: 0xd4
	// Line 1566, Address: 0x1df418, Func Offset: 0xe8
	// Line 1567, Address: 0x1df44c, Func Offset: 0x11c
	// Func End, Address: 0x1df454, Func Offset: 0x124
}

// merge_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df460
void layout::merge_line(jot_line& line)
{
	uint32 d;
	uint32 i;
	jot& a1;
	jot& a2;
	// Line 1516, Address: 0x1df460, Func Offset: 0
	// Line 1519, Address: 0x1df464, Func Offset: 0x4
	// Line 1523, Address: 0x1df490, Func Offset: 0x30
	// Line 1521, Address: 0x1df494, Func Offset: 0x34
	// Line 1523, Address: 0x1df498, Func Offset: 0x38
	// Line 1528, Address: 0x1df4e8, Func Offset: 0x88
	// Line 1529, Address: 0x1df504, Func Offset: 0xa4
	// Line 1530, Address: 0x1df588, Func Offset: 0x128
	// Line 1531, Address: 0x1df594, Func Offset: 0x134
	// Line 1534, Address: 0x1df5a0, Func Offset: 0x140
	// Line 1535, Address: 0x1df5a4, Func Offset: 0x144
	// Line 1537, Address: 0x1df624, Func Offset: 0x1c4
	// Line 1539, Address: 0x1df638, Func Offset: 0x1d8
	// Line 1540, Address: 0x1df720, Func Offset: 0x2c0
	// Line 1541, Address: 0x1df724, Func Offset: 0x2c4
	// Func End, Address: 0x1df72c, Func Offset: 0x2cc
}

// trim_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df730
void layout::trim_line(jot_line& line)
{
	int32 i;
	jot& a;
	uint32 i;
	jot& a;
	// Line 1474, Address: 0x1df730, Func Offset: 0
	// Line 1477, Address: 0x1df758, Func Offset: 0x28
	// Line 1479, Address: 0x1df76c, Func Offset: 0x3c
	// Line 1481, Address: 0x1df774, Func Offset: 0x44
	// Line 1482, Address: 0x1df850, Func Offset: 0x120
	// Line 1484, Address: 0x1df858, Func Offset: 0x128
	// Line 1486, Address: 0x1df860, Func Offset: 0x130
	// Line 1489, Address: 0x1df870, Func Offset: 0x140
	// Line 1492, Address: 0x1df898, Func Offset: 0x168
	// Line 1494, Address: 0x1df8ac, Func Offset: 0x17c
	// Line 1495, Address: 0x1df8b4, Func Offset: 0x184
	// Line 1496, Address: 0x1df990, Func Offset: 0x260
	// Line 1498, Address: 0x1df998, Func Offset: 0x268
	// Line 1499, Address: 0x1df9a8, Func Offset: 0x278
	// Func End, Address: 0x1df9b0, Func Offset: 0x280
}

// clear__Q28xtextbox6layoutFv
// Start address: 0x1df9b0
void layout::clear()
{
	// Line 1466, Address: 0x1df9b0, Func Offset: 0
	// Line 1467, Address: 0x1df9b4, Func Offset: 0x4
	// Line 1466, Address: 0x1df9b8, Func Offset: 0x8
	// Line 1467, Address: 0x1df9bc, Func Offset: 0xc
	// Line 1466, Address: 0x1df9c0, Func Offset: 0x10
	// Line 1467, Address: 0x1df9c4, Func Offset: 0x14
	// Line 1468, Address: 0x1df9e8, Func Offset: 0x38
	// Line 1469, Address: 0x1dfaf4, Func Offset: 0x144
	// Func End, Address: 0x1dfb04, Func Offset: 0x154
}

// refresh_end__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1dfcd0
void layout::refresh_end(xtextbox& tb)
{
	// Line 1458, Address: 0x1dfcd0, Func Offset: 0
	// Line 1459, Address: 0x1dfcdc, Func Offset: 0xc
	// Line 1461, Address: 0x1dfcec, Func Offset: 0x1c
	// Line 1462, Address: 0x1dfdb8, Func Offset: 0xe8
	// Line 1463, Address: 0x1dfdc0, Func Offset: 0xf0
	// Func End, Address: 0x1dfdcc, Func Offset: 0xfc
}

// refresh__Q28xtextbox6layoutFRC8xtextboxb
// Start address: 0x1dfdd0
void layout::refresh(xtextbox& tb, uint8 force)
{
	// Line 1451, Address: 0x1dfdd0, Func Offset: 0
	// Line 1452, Address: 0x1dfde4, Func Offset: 0x14
	// Line 1454, Address: 0x1dfe00, Func Offset: 0x30
	// Line 1453, Address: 0x1dfe04, Func Offset: 0x34
	// Line 1454, Address: 0x1dfe08, Func Offset: 0x38
	// Line 1453, Address: 0x1dfe0c, Func Offset: 0x3c
	// Line 1454, Address: 0x1dfe10, Func Offset: 0x40
	// Line 1453, Address: 0x1dfe14, Func Offset: 0x44
	// Line 1454, Address: 0x1dfed8, Func Offset: 0x108
	// Line 1455, Address: 0x1dfee0, Func Offset: 0x110
	// Func End, Address: 0x1dfef4, Func Offset: 0x124
}

// clear_layout_cache__8xtextboxFv
// Start address: 0x1dff00
void xtextbox::clear_layout_cache()
{
	uint32 index;
	// Line 1445, Address: 0x1dff00, Func Offset: 0
	// Line 1446, Address: 0x1dff10, Func Offset: 0x10
	// Line 1447, Address: 0x1dff20, Func Offset: 0x20
	// Line 1448, Address: 0x1dff40, Func Offset: 0x40
	// Func End, Address: 0x1dff54, Func Offset: 0x54
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUi
// Start address: 0x1dff60
uint32 read_list(tag_entry& e, int32* v, uint32 vsize)
{
	uint32 total;
	uint32 i;
	// Line 1437, Address: 0x1dff60, Func Offset: 0
	// Line 1438, Address: 0x1dff84, Func Offset: 0x24
	// Line 1439, Address: 0x1dff90, Func Offset: 0x30
	// Line 1440, Address: 0x1dffa8, Func Offset: 0x48
	// Line 1441, Address: 0x1dffd0, Func Offset: 0x70
	// Line 1442, Address: 0x1dffd4, Func Offset: 0x74
	// Func End, Address: 0x1dfff4, Func Offset: 0x94
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUi
// Start address: 0x1e0000
uint32 read_list(tag_entry& e, float32* v, uint32 vsize)
{
	uint32 total;
	uint32 i;
	// Line 1429, Address: 0x1e0000, Func Offset: 0
	// Line 1430, Address: 0x1e0024, Func Offset: 0x24
	// Line 1431, Address: 0x1e0030, Func Offset: 0x30
	// Line 1432, Address: 0x1e0048, Func Offset: 0x48
	// Line 1433, Address: 0x1e0070, Func Offset: 0x70
	// Line 1434, Address: 0x1e0074, Func Offset: 0x74
	// Func End, Address: 0x1e0094, Func Offset: 0x94
}

// find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
// Start address: 0x1e00a0
tag_entry* find_entry(tag_entry_list& el, substr& name)
{
	uint32 i;
	tag_entry& e;
	// Line 1419, Address: 0x1e00a0, Func Offset: 0
	// Line 1420, Address: 0x1e00c4, Func Offset: 0x24
	// Line 1422, Address: 0x1e00d8, Func Offset: 0x38
	// Line 1423, Address: 0x1e00dc, Func Offset: 0x3c
	// Line 1422, Address: 0x1e00e0, Func Offset: 0x40
	// Line 1423, Address: 0x1e00e4, Func Offset: 0x44
	// Line 1424, Address: 0x1e0100, Func Offset: 0x60
	// Line 1425, Address: 0x1e0118, Func Offset: 0x78
	// Line 1426, Address: 0x1e0120, Func Offset: 0x80
	// Func End, Address: 0x1e0140, Func Offset: 0xa0
}

// read_tag__8xtextboxFRC6substr
// Start address: 0x1e0140
tag_entry_list xtextbox::read_tag(substr& s)
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
	substr arg_buffer[32];
	tag_entry entry_buffer[16];
	// Line 1354, Address: 0x1e0140, Func Offset: 0
	// Line 1361, Address: 0x1e0148, Func Offset: 0x8
	// Line 1354, Address: 0x1e014c, Func Offset: 0xc
	// Line 1361, Address: 0x1e0168, Func Offset: 0x28
	// Line 1362, Address: 0x1e017c, Func Offset: 0x3c
	// Line 1363, Address: 0x1e01d8, Func Offset: 0x98
	// Line 1365, Address: 0x1e01f8, Func Offset: 0xb8
	// Line 1366, Address: 0x1e0200, Func Offset: 0xc0
	// Line 1365, Address: 0x1e0208, Func Offset: 0xc8
	// Line 1366, Address: 0x1e020c, Func Offset: 0xcc
	// Line 1367, Address: 0x1e0214, Func Offset: 0xd4
	// Line 1372, Address: 0x1e0230, Func Offset: 0xf0
	// Line 1373, Address: 0x1e0234, Func Offset: 0xf4
	// Line 1375, Address: 0x1e0238, Func Offset: 0xf8
	// Line 1374, Address: 0x1e023c, Func Offset: 0xfc
	// Line 1375, Address: 0x1e0240, Func Offset: 0x100
	// Line 1371, Address: 0x1e0244, Func Offset: 0x104
	// Line 1375, Address: 0x1e0248, Func Offset: 0x108
	// Line 1376, Address: 0x1e0250, Func Offset: 0x110
	// Line 1377, Address: 0x1e026c, Func Offset: 0x12c
	// Line 1378, Address: 0x1e0360, Func Offset: 0x220
	// Line 1379, Address: 0x1e0378, Func Offset: 0x238
	// Line 1380, Address: 0x1e0390, Func Offset: 0x250
	// Line 1382, Address: 0x1e039c, Func Offset: 0x25c
	// Line 1380, Address: 0x1e03a0, Func Offset: 0x260
	// Line 1381, Address: 0x1e03ac, Func Offset: 0x26c
	// Line 1382, Address: 0x1e03b4, Func Offset: 0x274
	// Line 1383, Address: 0x1e03bc, Func Offset: 0x27c
	// Line 1386, Address: 0x1e03c0, Func Offset: 0x280
	// Line 1387, Address: 0x1e03c4, Func Offset: 0x284
	// Line 1391, Address: 0x1e03d0, Func Offset: 0x290
	// Line 1392, Address: 0x1e03d4, Func Offset: 0x294
	// Line 1393, Address: 0x1e03e4, Func Offset: 0x2a4
	// Line 1395, Address: 0x1e03ec, Func Offset: 0x2ac
	// Line 1397, Address: 0x1e03f4, Func Offset: 0x2b4
	// Line 1400, Address: 0x1e0400, Func Offset: 0x2c0
	// Line 1401, Address: 0x1e040c, Func Offset: 0x2cc
	// Line 1402, Address: 0x1e0420, Func Offset: 0x2e0
	// Line 1403, Address: 0x1e0434, Func Offset: 0x2f4
	// Line 1404, Address: 0x1e0438, Func Offset: 0x2f8
	// Line 1405, Address: 0x1e0530, Func Offset: 0x3f0
	// Line 1408, Address: 0x1e053c, Func Offset: 0x3fc
	// Line 1405, Address: 0x1e0540, Func Offset: 0x400
	// Line 1408, Address: 0x1e0544, Func Offset: 0x404
	// Line 1409, Address: 0x1e054c, Func Offset: 0x40c
	// Line 1410, Address: 0x1e0550, Func Offset: 0x410
	// Line 1411, Address: 0x1e0570, Func Offset: 0x430
	// Line 1412, Address: 0x1e057c, Func Offset: 0x43c
	// Line 1413, Address: 0x1e0588, Func Offset: 0x448
	// Line 1414, Address: 0x1e0598, Func Offset: 0x458
	// Line 1415, Address: 0x1e05a8, Func Offset: 0x468
	// Line 1416, Address: 0x1e05b8, Func Offset: 0x478
	// Func End, Address: 0x1e05dc, Func Offset: 0x49c
}

// yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
// Start address: 0x1e05e0
float32 yextent(float32 max, int32& size, layout& l, int32 begin_jot, int32 end_jot)
{
	// Line 1350, Address: 0x1e05e0, Func Offset: 0
	// Func End, Address: 0x1e05f0, Func Offset: 0x10
}

// render__8xtextboxCFRQ28xtextbox6layoutii
// Start address: 0x1e05f0
void xtextbox::render(layout& l, int32 begin_jot, int32 end_jot)
{
	// Line 1345, Address: 0x1e05f4, Func Offset: 0x4
	// Func End, Address: 0x1e0600, Func Offset: 0x10
}

// temp_layout__8xtextboxCFb
// Start address: 0x1e0600
layout& xtextbox::temp_layout(uint8 cache)
{
	long32 cur_time;
	uint8 refresh;
	uint32 index;
	int32 min_used;
	uint32 i;
	int32 used;
	tl_cache_entry& e;
	// Line 1292, Address: 0x1e0600, Func Offset: 0
	// Line 1294, Address: 0x1e0624, Func Offset: 0x24
	// Line 1297, Address: 0x1e0630, Func Offset: 0x30
	// Line 1299, Address: 0x1e0634, Func Offset: 0x34
	// Line 1301, Address: 0x1e0644, Func Offset: 0x44
	// Line 1302, Address: 0x1e0648, Func Offset: 0x48
	// Line 1303, Address: 0x1e0674, Func Offset: 0x74
	// Line 1304, Address: 0x1e0680, Func Offset: 0x80
	// Line 1306, Address: 0x1e0684, Func Offset: 0x84
	// Line 1308, Address: 0x1e0688, Func Offset: 0x88
	// Line 1313, Address: 0x1e0694, Func Offset: 0x94
	// Line 1310, Address: 0x1e0698, Func Offset: 0x98
	// Line 1311, Address: 0x1e069c, Func Offset: 0x9c
	// Line 1313, Address: 0x1e06a0, Func Offset: 0xa0
	// Line 1312, Address: 0x1e06a4, Func Offset: 0xa4
	// Line 1313, Address: 0x1e06a8, Func Offset: 0xa8
	// Line 1317, Address: 0x1e06b0, Func Offset: 0xb0
	// Line 1319, Address: 0x1e06d8, Func Offset: 0xd8
	// Line 1320, Address: 0x1e06f0, Func Offset: 0xf0
	// Line 1321, Address: 0x1e0708, Func Offset: 0x108
	// Line 1322, Address: 0x1e071c, Func Offset: 0x11c
	// Line 1321, Address: 0x1e0720, Func Offset: 0x120
	// Line 1322, Address: 0x1e0728, Func Offset: 0x128
	// Line 1325, Address: 0x1e0738, Func Offset: 0x138
	// Line 1327, Address: 0x1e0754, Func Offset: 0x154
	// Line 1329, Address: 0x1e075c, Func Offset: 0x15c
	// Line 1330, Address: 0x1e0760, Func Offset: 0x160
	// Line 1331, Address: 0x1e0840, Func Offset: 0x240
	// Line 1332, Address: 0x1e0848, Func Offset: 0x248
	// Line 1334, Address: 0x1e0918, Func Offset: 0x318
	// Line 1336, Address: 0x1e0920, Func Offset: 0x320
	// Line 1337, Address: 0x1e092c, Func Offset: 0x32c
	// Line 1340, Address: 0x1e0930, Func Offset: 0x330
	// Line 1341, Address: 0x1e0934, Func Offset: 0x334
	// Func End, Address: 0x1e0958, Func Offset: 0x358
}

// set_text__8xtextboxFPPCcPCUiUi
// Start address: 0x1e0960
void xtextbox::set_text(int8** texts, uint32* text_sizes, uint32 size)
{
	uint32 i;
	uint32 i;
	// Line 1234, Address: 0x1e0960, Func Offset: 0
	// Line 1235, Address: 0x1e0984, Func Offset: 0x24
	// Line 1237, Address: 0x1e0988, Func Offset: 0x28
	// Line 1239, Address: 0x1e0990, Func Offset: 0x30
	// Line 1241, Address: 0x1e0994, Func Offset: 0x34
	// Line 1242, Address: 0x1e099c, Func Offset: 0x3c
	// Line 1245, Address: 0x1e09b0, Func Offset: 0x50
	// Line 1246, Address: 0x1e09bc, Func Offset: 0x5c
	// Line 1245, Address: 0x1e09c4, Func Offset: 0x64
	// Line 1246, Address: 0x1e09dc, Func Offset: 0x7c
	// Line 1248, Address: 0x1e09f0, Func Offset: 0x90
	// Line 1249, Address: 0x1e0a08, Func Offset: 0xa8
	// Line 1250, Address: 0x1e0a48, Func Offset: 0xe8
	// Func End, Address: 0x1e0a68, Func Offset: 0x108
}

// set_text__8xtextboxFPPCcUi
// Start address: 0x1e0a70
void xtextbox::set_text(int8** texts, uint32 size)
{
	// Line 1230, Address: 0x1e0a74, Func Offset: 0x4
	// Func End, Address: 0x1e0a7c, Func Offset: 0xc
}

// set_text__8xtextboxFPCc
// Start address: 0x1e0a80
void xtextbox::set_text(int8* text)
{
	// Line 1216, Address: 0x1e0a80, Func Offset: 0
	// Line 1217, Address: 0x1e0a84, Func Offset: 0x4
	// Line 1218, Address: 0x1e0ab8, Func Offset: 0x38
	// Func End, Address: 0x1e0ac4, Func Offset: 0x44
}

// text_render__8xtextboxFRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1e0ad0
void xtextbox::text_render(jot& j, xtextbox& tb, float32 x, float32 y)
{
	// Line 1211, Address: 0x1e0ad4, Func Offset: 0x4
	// Func End, Address: 0x1e0ae4, Func Offset: 0x14
}

// start_layout__19@unnamed@xFont_cpp@FRC8xtextbox
// Start address: 0x1e0af0
void start_layout()
{
	// Line 1173, Address: 0x1e0af0, Func Offset: 0
	// Line 1174, Address: 0x1e0b2c, Func Offset: 0x3c
	// Line 1173, Address: 0x1e0b3c, Func Offset: 0x4c
	// Line 1174, Address: 0x1e0b5c, Func Offset: 0x6c
	// Line 1173, Address: 0x1e0b64, Func Offset: 0x74
	// Line 1174, Address: 0x1e0b94, Func Offset: 0xa4
	// Line 1173, Address: 0x1e0bcc, Func Offset: 0xdc
	// Line 1174, Address: 0x1e0be4, Func Offset: 0xf4
	// Line 1175, Address: 0x1e0c00, Func Offset: 0x110
	// Func End, Address: 0x1e0c08, Func Offset: 0x118
}

// load_model_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10model_argsRC6substr
// Start address: 0x1e0c10
void load_model_args(model_args& ma, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	uint32 id;
	// Line 1122, Address: 0x1e0c10, Func Offset: 0
	// Line 1123, Address: 0x1e0c3c, Func Offset: 0x2c
	// Line 1127, Address: 0x1e0c60, Func Offset: 0x50
	// Line 1130, Address: 0x1e0c70, Func Offset: 0x60
	// Line 1132, Address: 0x1e0ca0, Func Offset: 0x90
	// Line 1133, Address: 0x1e0ca4, Func Offset: 0x94
	// Line 1134, Address: 0x1e0cb0, Func Offset: 0xa0
	// Line 1143, Address: 0x1e0cbc, Func Offset: 0xac
	// Line 1145, Address: 0x1e0cc0, Func Offset: 0xb0
	// Line 1148, Address: 0x1e0cc4, Func Offset: 0xb4
	// Line 1145, Address: 0x1e0ccc, Func Offset: 0xbc
	// Line 1148, Address: 0x1e0cdc, Func Offset: 0xcc
	// Line 1149, Address: 0x1e0d80, Func Offset: 0x170
	// Line 1150, Address: 0x1e0da8, Func Offset: 0x198
	// Line 1152, Address: 0x1e0df0, Func Offset: 0x1e0
	// Line 1153, Address: 0x1e0e98, Func Offset: 0x288
	// Line 1154, Address: 0x1e0ec0, Func Offset: 0x2b0
	// Line 1156, Address: 0x1e0f08, Func Offset: 0x2f8
	// Line 1157, Address: 0x1e0fb0, Func Offset: 0x3a0
	// Line 1158, Address: 0x1e0fd8, Func Offset: 0x3c8
	// Line 1160, Address: 0x1e1020, Func Offset: 0x410
	// Line 1161, Address: 0x1e10b8, Func Offset: 0x4a8
	// Line 1163, Address: 0x1e10e0, Func Offset: 0x4d0
	// Line 1164, Address: 0x1e1134, Func Offset: 0x524
	// Line 1166, Address: 0x1e1140, Func Offset: 0x530
	// Line 1167, Address: 0x1e1144, Func Offset: 0x534
	// Line 1168, Address: 0x1e1148, Func Offset: 0x538
	// Func End, Address: 0x1e1174, Func Offset: 0x564
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
	// Line 1025, Address: 0x1e1180, Func Offset: 0
	// Line 1026, Address: 0x1e11ac, Func Offset: 0x2c
	// Line 1030, Address: 0x1e11d0, Func Offset: 0x50
	// Line 1033, Address: 0x1e11e0, Func Offset: 0x60
	// Line 1035, Address: 0x1e1210, Func Offset: 0x90
	// Line 1039, Address: 0x1e1214, Func Offset: 0x94
	// Line 1041, Address: 0x1e1240, Func Offset: 0xc0
	// Line 1043, Address: 0x1e1298, Func Offset: 0x118
	// Line 1045, Address: 0x1e12a8, Func Offset: 0x128
	// Line 1046, Address: 0x1e12b4, Func Offset: 0x134
	// Line 1050, Address: 0x1e12f4, Func Offset: 0x174
	// Line 1051, Address: 0x1e1308, Func Offset: 0x188
	// Line 1063, Address: 0x1e1310, Func Offset: 0x190
	// Line 1066, Address: 0x1e1314, Func Offset: 0x194
	// Line 1063, Address: 0x1e131c, Func Offset: 0x19c
	// Line 1066, Address: 0x1e132c, Func Offset: 0x1ac
	// Line 1067, Address: 0x1e13d0, Func Offset: 0x250
	// Line 1068, Address: 0x1e13f8, Func Offset: 0x278
	// Line 1070, Address: 0x1e1440, Func Offset: 0x2c0
	// Line 1071, Address: 0x1e14e8, Func Offset: 0x368
	// Line 1072, Address: 0x1e1510, Func Offset: 0x390
	// Line 1074, Address: 0x1e1558, Func Offset: 0x3d8
	// Line 1075, Address: 0x1e1600, Func Offset: 0x480
	// Line 1076, Address: 0x1e1628, Func Offset: 0x4a8
	// Line 1078, Address: 0x1e1670, Func Offset: 0x4f0
	// Line 1079, Address: 0x1e1718, Func Offset: 0x598
	// Line 1080, Address: 0x1e1740, Func Offset: 0x5c0
	// Line 1082, Address: 0x1e1788, Func Offset: 0x608
	// Line 1083, Address: 0x1e1820, Func Offset: 0x6a0
	// Line 1085, Address: 0x1e1848, Func Offset: 0x6c8
	// Line 1086, Address: 0x1e189c, Func Offset: 0x71c
	// Line 1087, Address: 0x1e18a8, Func Offset: 0x728
	// Line 1088, Address: 0x1e1900, Func Offset: 0x780
	// Line 1089, Address: 0x1e1908, Func Offset: 0x788
	// Line 1090, Address: 0x1e1960, Func Offset: 0x7e0
	// Line 1091, Address: 0x1e1968, Func Offset: 0x7e8
	// Line 1092, Address: 0x1e19c0, Func Offset: 0x840
	// Line 1093, Address: 0x1e19c8, Func Offset: 0x848
	// Line 1094, Address: 0x1e1a20, Func Offset: 0x8a0
	// Line 1095, Address: 0x1e1a28, Func Offset: 0x8a8
	// Line 1096, Address: 0x1e1a80, Func Offset: 0x900
	// Line 1097, Address: 0x1e1a88, Func Offset: 0x908
	// Line 1098, Address: 0x1e1ae0, Func Offset: 0x960
	// Line 1100, Address: 0x1e1ae8, Func Offset: 0x968
	// Line 1101, Address: 0x1e1aec, Func Offset: 0x96c
	// Line 1102, Address: 0x1e1af0, Func Offset: 0x970
	// Func End, Address: 0x1e1b1c, Func Offset: 0x99c
}

// parse_next_text_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1b20
int8* parse_next_text_jot(jot& a, xtextbox& tb, int8* text)
{
	int8 c;
	// Line 969, Address: 0x1e1b20, Func Offset: 0
	// Line 971, Address: 0x1e1b24, Func Offset: 0x4
	// Line 972, Address: 0x1e1b28, Func Offset: 0x8
	// Line 973, Address: 0x1e1b30, Func Offset: 0x10
	// Line 968, Address: 0x1e1b34, Func Offset: 0x14
	// Line 972, Address: 0x1e1b38, Func Offset: 0x18
	// Line 970, Address: 0x1e1b3c, Func Offset: 0x1c
	// Line 971, Address: 0x1e1b40, Func Offset: 0x20
	// Line 972, Address: 0x1e1b44, Func Offset: 0x24
	// Line 973, Address: 0x1e1b50, Func Offset: 0x30
	// Line 974, Address: 0x1e1b78, Func Offset: 0x58
	// Line 975, Address: 0x1e1ba0, Func Offset: 0x80
	// Line 976, Address: 0x1e1bc8, Func Offset: 0xa8
	// Line 977, Address: 0x1e1c38, Func Offset: 0x118
	// Line 979, Address: 0x1e1cf0, Func Offset: 0x1d0
	// Line 977, Address: 0x1e1cf4, Func Offset: 0x1d4
	// Line 979, Address: 0x1e1cf8, Func Offset: 0x1d8
	// Line 977, Address: 0x1e1cfc, Func Offset: 0x1dc
	// Line 979, Address: 0x1e1d18, Func Offset: 0x1f8
	// Line 980, Address: 0x1e1d1c, Func Offset: 0x1fc
	// Line 981, Address: 0x1e1d20, Func Offset: 0x200
	// Line 982, Address: 0x1e1d24, Func Offset: 0x204
	// Line 983, Address: 0x1e1d30, Func Offset: 0x210
	// Func End, Address: 0x1e1d38, Func Offset: 0x218
}

// parse_next_tag_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1d40
int8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, int8* text, uint32 text_size)
{
	split_tag ti;
	uint32 size;
	// Line 941, Address: 0x1e1d40, Func Offset: 0
	// Line 942, Address: 0x1e1d44, Func Offset: 0x4
	// Line 941, Address: 0x1e1d48, Func Offset: 0x8
	// Line 942, Address: 0x1e1d4c, Func Offset: 0xc
	// Line 941, Address: 0x1e1d50, Func Offset: 0x10
	// Line 942, Address: 0x1e1d74, Func Offset: 0x34
	// Line 943, Address: 0x1e1d98, Func Offset: 0x58
	// Line 944, Address: 0x1e1da8, Func Offset: 0x68
	// Line 945, Address: 0x1e1db8, Func Offset: 0x78
	// Line 946, Address: 0x1e1dbc, Func Offset: 0x7c
	// Line 948, Address: 0x1e1dc0, Func Offset: 0x80
	// Line 949, Address: 0x1e1dd0, Func Offset: 0x90
	// Line 948, Address: 0x1e1dd8, Func Offset: 0x98
	// Line 949, Address: 0x1e1dfc, Func Offset: 0xbc
	// Line 952, Address: 0x1e1ea8, Func Offset: 0x168
	// Line 953, Address: 0x1e1ebc, Func Offset: 0x17c
	// Line 954, Address: 0x1e1ed0, Func Offset: 0x190
	// Line 955, Address: 0x1e1ee0, Func Offset: 0x1a0
	// Line 958, Address: 0x1e1ee8, Func Offset: 0x1a8
	// Line 959, Address: 0x1e1efc, Func Offset: 0x1bc
	// Line 960, Address: 0x1e1f10, Func Offset: 0x1d0
	// Line 963, Address: 0x1e1f20, Func Offset: 0x1e0
	// Line 964, Address: 0x1e1f28, Func Offset: 0x1e8
	// Func End, Address: 0x1e1f4c, Func Offset: 0x20c
}

// parse_split_tag__19@unnamed@xFont_cpp@FRQ28xtextbox9split_tag
// Start address: 0x1e1f50
uint32 parse_split_tag(split_tag& ti)
{
	substr s;
	// Line 904, Address: 0x1e1f50, Func Offset: 0
	// Line 912, Address: 0x1e1f54, Func Offset: 0x4
	// Line 904, Address: 0x1e1f58, Func Offset: 0x8
	// Line 908, Address: 0x1e1f5c, Func Offset: 0xc
	// Line 904, Address: 0x1e1f60, Func Offset: 0x10
	// Line 912, Address: 0x1e1f64, Func Offset: 0x14
	// Line 904, Address: 0x1e1f68, Func Offset: 0x18
	// Line 906, Address: 0x1e1f70, Func Offset: 0x20
	// Line 909, Address: 0x1e1f74, Func Offset: 0x24
	// Line 906, Address: 0x1e1f78, Func Offset: 0x28
	// Line 912, Address: 0x1e1f7c, Func Offset: 0x2c
	// Line 906, Address: 0x1e1f80, Func Offset: 0x30
	// Line 908, Address: 0x1e1f84, Func Offset: 0x34
	// Line 912, Address: 0x1e1f90, Func Offset: 0x40
	// Line 908, Address: 0x1e1f94, Func Offset: 0x44
	// Line 909, Address: 0x1e1f98, Func Offset: 0x48
	// Line 912, Address: 0x1e1fac, Func Offset: 0x5c
	// Line 913, Address: 0x1e202c, Func Offset: 0xdc
	// Line 914, Address: 0x1e2048, Func Offset: 0xf8
	// Line 915, Address: 0x1e2058, Func Offset: 0x108
	// Line 919, Address: 0x1e205c, Func Offset: 0x10c
	// Line 915, Address: 0x1e206c, Func Offset: 0x11c
	// Line 916, Address: 0x1e2074, Func Offset: 0x124
	// Line 919, Address: 0x1e2080, Func Offset: 0x130
	// Line 920, Address: 0x1e2100, Func Offset: 0x1b0
	// Line 922, Address: 0x1e2120, Func Offset: 0x1d0
	// Line 923, Address: 0x1e2138, Func Offset: 0x1e8
	// Line 924, Address: 0x1e2144, Func Offset: 0x1f4
	// Line 923, Address: 0x1e2148, Func Offset: 0x1f8
	// Line 924, Address: 0x1e214c, Func Offset: 0x1fc
	// Line 925, Address: 0x1e2168, Func Offset: 0x218
	// Line 928, Address: 0x1e216c, Func Offset: 0x21c
	// Line 925, Address: 0x1e2170, Func Offset: 0x220
	// Line 928, Address: 0x1e2174, Func Offset: 0x224
	// Line 929, Address: 0x1e21fc, Func Offset: 0x2ac
	// Line 930, Address: 0x1e225c, Func Offset: 0x30c
	// Line 931, Address: 0x1e2278, Func Offset: 0x328
	// Line 932, Address: 0x1e2288, Func Offset: 0x338
	// Line 933, Address: 0x1e228c, Func Offset: 0x33c
	// Line 932, Address: 0x1e2298, Func Offset: 0x348
	// Line 933, Address: 0x1e229c, Func Offset: 0x34c
	// Line 934, Address: 0x1e2300, Func Offset: 0x3b0
	// Line 936, Address: 0x1e2318, Func Offset: 0x3c8
	// Line 937, Address: 0x1e2328, Func Offset: 0x3d8
	// Func End, Address: 0x1e233c, Func Offset: 0x3ec
}

// irender__5xfontCFPCcUiff
// Start address: 0x1e2340
void xfont::irender(int8* text, uint32 text_size, float32 x, float32 y)
{
	font_data& fd;
	basic_rect_1 bounds;
	uint32 i;
	uint32 charIndex;
	// Line 849, Address: 0x1e2340, Func Offset: 0
	// Line 853, Address: 0x1e2384, Func Offset: 0x44
	// Line 855, Address: 0x1e238c, Func Offset: 0x4c
	// Line 856, Address: 0x1e2398, Func Offset: 0x58
	// Line 855, Address: 0x1e239c, Func Offset: 0x5c
	// Line 856, Address: 0x1e23a8, Func Offset: 0x68
	// Line 857, Address: 0x1e23f0, Func Offset: 0xb0
	// Line 858, Address: 0x1e2420, Func Offset: 0xe0
	// Line 857, Address: 0x1e2424, Func Offset: 0xe4
	// Line 858, Address: 0x1e242c, Func Offset: 0xec
	// Line 857, Address: 0x1e2438, Func Offset: 0xf8
	// Line 858, Address: 0x1e2444, Func Offset: 0x104
	// Line 861, Address: 0x1e2450, Func Offset: 0x110
	// Line 862, Address: 0x1e2570, Func Offset: 0x230
	// Line 863, Address: 0x1e2578, Func Offset: 0x238
	// Line 864, Address: 0x1e2584, Func Offset: 0x244
	// Line 865, Address: 0x1e25a8, Func Offset: 0x268
	// Line 866, Address: 0x1e25c8, Func Offset: 0x288
	// Func End, Address: 0x1e2600, Func Offset: 0x2c0
}

// irender__5xfontCFPCcff
// Start address: 0x1e2600
void xfont::irender(int8* text, float32 x, float32 y)
{
	// Line 845, Address: 0x1e2600, Func Offset: 0
	// Func End, Address: 0x1e2608, Func Offset: 0x8
}

// stop_render__5xfontCFv
// Start address: 0x1e2610
void stop_render()
{
	// Line 823, Address: 0x1e2610, Func Offset: 0
	// Line 828, Address: 0x1e261c, Func Offset: 0xc
	// Line 829, Address: 0x1e26c8, Func Offset: 0xb8
	// Func End, Address: 0x1e26d4, Func Offset: 0xc4
}

// start_render__5xfontCFv
// Start address: 0x1e26e0
void xfont::start_render()
{
	// Line 814, Address: 0x1e26e0, Func Offset: 0
	// Line 819, Address: 0x1e26e4, Func Offset: 0x4
	// Line 814, Address: 0x1e26e8, Func Offset: 0x8
	// Line 819, Address: 0x1e26ec, Func Offset: 0xc
	// Line 814, Address: 0x1e26f0, Func Offset: 0x10
	// Line 819, Address: 0x1e26f4, Func Offset: 0x14
	// Line 820, Address: 0x1e2738, Func Offset: 0x58
	// Func End, Address: 0x1e2748, Func Offset: 0x68
}

// bounds__5xfontCFPCcUifRUi
// Start address: 0x1e2750
basic_rect_1 xfont::bounds(int8* text, uint32 text_size, float32 max_width, uint32& size)
{
	font_data& fd;
	basic_rect_1 r;
	int8* s;
	uint32 i;
	uint32 charIndex;
	float32 dx;
	// Line 783, Address: 0x1e2750, Func Offset: 0
	// Line 781, Address: 0x1e2754, Func Offset: 0x4
	// Line 783, Address: 0x1e2758, Func Offset: 0x8
	// Line 786, Address: 0x1e2764, Func Offset: 0x14
	// Line 783, Address: 0x1e2768, Func Offset: 0x18
	// Line 785, Address: 0x1e276c, Func Offset: 0x1c
	// Line 786, Address: 0x1e2770, Func Offset: 0x20
	// Line 783, Address: 0x1e2774, Func Offset: 0x24
	// Line 786, Address: 0x1e2778, Func Offset: 0x28
	// Line 787, Address: 0x1e2784, Func Offset: 0x34
	// Line 788, Address: 0x1e2788, Func Offset: 0x38
	// Line 789, Address: 0x1e2794, Func Offset: 0x44
	// Line 792, Address: 0x1e27d8, Func Offset: 0x88
	// Line 793, Address: 0x1e27dc, Func Offset: 0x8c
	// Line 796, Address: 0x1e27e8, Func Offset: 0x98
	// Line 797, Address: 0x1e27f4, Func Offset: 0xa4
	// Line 798, Address: 0x1e27fc, Func Offset: 0xac
	// Line 799, Address: 0x1e280c, Func Offset: 0xbc
	// Line 798, Address: 0x1e2810, Func Offset: 0xc0
	// Line 799, Address: 0x1e2814, Func Offset: 0xc4
	// Line 800, Address: 0x1e2824, Func Offset: 0xd4
	// Line 801, Address: 0x1e2834, Func Offset: 0xe4
	// Line 802, Address: 0x1e2858, Func Offset: 0x108
	// Line 804, Address: 0x1e2880, Func Offset: 0x130
	// Line 805, Address: 0x1e2888, Func Offset: 0x138
	// Line 806, Address: 0x1e28b0, Func Offset: 0x160
	// Func End, Address: 0x1e28b8, Func Offset: 0x168
}

// bounds__5xfontCFPCc
// Start address: 0x1e28c0
basic_rect_1 xfont::bounds(int8* text)
{
	uint32 size;
	// Line 766, Address: 0x1e28c0, Func Offset: 0
	// Line 764, Address: 0x1e28c4, Func Offset: 0x4
	// Line 766, Address: 0x1e28c8, Func Offset: 0x8
	// Line 764, Address: 0x1e28cc, Func Offset: 0xc
	// Line 766, Address: 0x1e28d0, Func Offset: 0x10
	// Line 767, Address: 0x1e28e0, Func Offset: 0x20
	// Func End, Address: 0x1e28ec, Func Offset: 0x2c
}

// restore_render_state__5xfontFv
// Start address: 0x1e28f0
void xfont::restore_render_state()
{
	// Line 740, Address: 0x1e28f0, Func Offset: 0
	// Line 741, Address: 0x1e28f4, Func Offset: 0x4
	// Line 740, Address: 0x1e28f8, Func Offset: 0x8
	// Line 741, Address: 0x1e28fc, Func Offset: 0xc
	// Line 742, Address: 0x1e2908, Func Offset: 0x18
	// Line 743, Address: 0x1e2918, Func Offset: 0x28
	// Line 744, Address: 0x1e2928, Func Offset: 0x38
	// Line 745, Address: 0x1e2938, Func Offset: 0x48
	// Line 746, Address: 0x1e2948, Func Offset: 0x58
	// Line 747, Address: 0x1e2958, Func Offset: 0x68
	// Line 748, Address: 0x1e2968, Func Offset: 0x78
	// Line 749, Address: 0x1e2978, Func Offset: 0x88
	// Line 750, Address: 0x1e2988, Func Offset: 0x98
	// Func End, Address: 0x1e2994, Func Offset: 0xa4
}

// set_render_state__5xfontFP8RwRaster
// Start address: 0x1e29a0
void xfont::set_render_state(RwRaster* raster)
{
	// Line 717, Address: 0x1e29a0, Func Offset: 0
	// Line 719, Address: 0x1e29a4, Func Offset: 0x4
	// Line 717, Address: 0x1e29a8, Func Offset: 0x8
	// Line 719, Address: 0x1e29ac, Func Offset: 0xc
	// Line 717, Address: 0x1e29b0, Func Offset: 0x10
	// Line 719, Address: 0x1e29b8, Func Offset: 0x18
	// Line 720, Address: 0x1e29c0, Func Offset: 0x20
	// Line 721, Address: 0x1e29d0, Func Offset: 0x30
	// Line 722, Address: 0x1e29e0, Func Offset: 0x40
	// Line 723, Address: 0x1e29f0, Func Offset: 0x50
	// Line 724, Address: 0x1e2a00, Func Offset: 0x60
	// Line 725, Address: 0x1e2a10, Func Offset: 0x70
	// Line 726, Address: 0x1e2a20, Func Offset: 0x80
	// Line 727, Address: 0x1e2a30, Func Offset: 0x90
	// Line 729, Address: 0x1e2a40, Func Offset: 0xa0
	// Line 730, Address: 0x1e2a4c, Func Offset: 0xac
	// Line 731, Address: 0x1e2a58, Func Offset: 0xb8
	// Line 732, Address: 0x1e2a64, Func Offset: 0xc4
	// Line 733, Address: 0x1e2a70, Func Offset: 0xd0
	// Line 734, Address: 0x1e2a7c, Func Offset: 0xdc
	// Line 735, Address: 0x1e2a88, Func Offset: 0xe8
	// Line 736, Address: 0x1e2a94, Func Offset: 0xf4
	// Line 737, Address: 0x1e2aa0, Func Offset: 0x100
	// Line 738, Address: 0x1e2aac, Func Offset: 0x10c
	// Func End, Address: 0x1e2abc, Func Offset: 0x11c
}

// init__5xfontFv
// Start address: 0x1e2ac0
void xfont::init()
{
	uint32 i;
	font_data& fd;
	// Line 672, Address: 0x1e2ac0, Func Offset: 0
	// Line 674, Address: 0x1e2ad0, Func Offset: 0x10
	// Line 673, Address: 0x1e2ad8, Func Offset: 0x18
	// Line 674, Address: 0x1e2adc, Func Offset: 0x1c
	// Line 680, Address: 0x1e2ae4, Func Offset: 0x24
	// Line 681, Address: 0x1e2af0, Func Offset: 0x30
	// Line 684, Address: 0x1e2b08, Func Offset: 0x48
	// Line 692, Address: 0x1e2b14, Func Offset: 0x54
	// Line 694, Address: 0x1e2b24, Func Offset: 0x64
	// Line 696, Address: 0x1e2b3c, Func Offset: 0x7c
	// Line 697, Address: 0x1e2b4c, Func Offset: 0x8c
	// Line 699, Address: 0x1e2b58, Func Offset: 0x98
	// Line 701, Address: 0x1e2b68, Func Offset: 0xa8
	// Line 704, Address: 0x1e2b70, Func Offset: 0xb0
	// Func End, Address: 0x1e2b84, Func Offset: 0xc4
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
	// Line 614, Address: 0x1e2b90, Func Offset: 0
	// Line 619, Address: 0x1e2b94, Func Offset: 0x4
	// Line 614, Address: 0x1e2b98, Func Offset: 0x8
	// Line 619, Address: 0x1e2b9c, Func Offset: 0xc
	// Line 614, Address: 0x1e2ba0, Func Offset: 0x10
	// Line 619, Address: 0x1e2ba4, Func Offset: 0x14
	// Line 614, Address: 0x1e2ba8, Func Offset: 0x18
	// Line 618, Address: 0x1e2bb4, Func Offset: 0x24
	// Line 617, Address: 0x1e2bb8, Func Offset: 0x28
	// Line 627, Address: 0x1e2bc4, Func Offset: 0x34
	// Line 622, Address: 0x1e2bc8, Func Offset: 0x38
	// Line 624, Address: 0x1e2bd4, Func Offset: 0x44
	// Line 625, Address: 0x1e2bdc, Func Offset: 0x4c
	// Line 626, Address: 0x1e2be4, Func Offset: 0x54
	// Line 627, Address: 0x1e2be8, Func Offset: 0x58
	// Line 628, Address: 0x1e2c10, Func Offset: 0x80
	// Line 630, Address: 0x1e2c20, Func Offset: 0x90
	// Line 631, Address: 0x1e2c30, Func Offset: 0xa0
	// Line 633, Address: 0x1e2c40, Func Offset: 0xb0
	// Line 639, Address: 0x1e2c48, Func Offset: 0xb8
	// Line 633, Address: 0x1e2c4c, Func Offset: 0xbc
	// Line 639, Address: 0x1e2c58, Func Offset: 0xc8
	// Line 633, Address: 0x1e2c5c, Func Offset: 0xcc
	// Line 634, Address: 0x1e2c60, Func Offset: 0xd0
	// Line 635, Address: 0x1e2c64, Func Offset: 0xd4
	// Line 636, Address: 0x1e2c6c, Func Offset: 0xdc
	// Line 639, Address: 0x1e2c70, Func Offset: 0xe0
	// Line 640, Address: 0x1e2c7c, Func Offset: 0xec
	// Line 642, Address: 0x1e2c80, Func Offset: 0xf0
	// Line 643, Address: 0x1e2c90, Func Offset: 0x100
	// Line 646, Address: 0x1e2cb0, Func Offset: 0x120
	// Line 668, Address: 0x1e2cb8, Func Offset: 0x128
	// Func End, Address: 0x1e2cd0, Func Offset: 0x140
}

// init_model_cache__19@unnamed@xFont_cpp@Fv
// Start address: 0x1e2cd0
void init_model_cache()
{
	void* data;
	model_pool& pool;
	xModelInstance& model;
	model_cache_entry& e;
	// Line 583, Address: 0x1e2cd0, Func Offset: 0
	// Line 585, Address: 0x1e2cd4, Func Offset: 0x4
	// Line 583, Address: 0x1e2cd8, Func Offset: 0x8
	// Line 593, Address: 0x1e2cdc, Func Offset: 0xc
	// Line 583, Address: 0x1e2ce0, Func Offset: 0x10
	// Line 593, Address: 0x1e2ce4, Func Offset: 0x14
	// Line 595, Address: 0x1e2cf4, Func Offset: 0x24
	// Line 596, Address: 0x1e2cf8, Func Offset: 0x28
	// Line 603, Address: 0x1e2d08, Func Offset: 0x38
	// Line 609, Address: 0x1e2d0c, Func Offset: 0x3c
	// Line 603, Address: 0x1e2d10, Func Offset: 0x40
	// Line 609, Address: 0x1e2d14, Func Offset: 0x44
	// Line 601, Address: 0x1e2d18, Func Offset: 0x48
	// Line 604, Address: 0x1e2d1c, Func Offset: 0x4c
	// Line 609, Address: 0x1e2d24, Func Offset: 0x54
	// Line 603, Address: 0x1e2d28, Func Offset: 0x58
	// Line 609, Address: 0x1e2d2c, Func Offset: 0x5c
	// Line 603, Address: 0x1e2d30, Func Offset: 0x60
	// Line 609, Address: 0x1e2d34, Func Offset: 0x64
	// Line 607, Address: 0x1e2d38, Func Offset: 0x68
	// Line 606, Address: 0x1e2d3c, Func Offset: 0x6c
	// Line 607, Address: 0x1e2d40, Func Offset: 0x70
	// Line 609, Address: 0x1e2d44, Func Offset: 0x74
	// Line 608, Address: 0x1e2d48, Func Offset: 0x78
	// Line 609, Address: 0x1e2d4c, Func Offset: 0x7c
	// Line 601, Address: 0x1e2d5c, Func Offset: 0x8c
	// Line 609, Address: 0x1e2d60, Func Offset: 0x90
	// Line 606, Address: 0x1e2d64, Func Offset: 0x94
	// Line 609, Address: 0x1e2d68, Func Offset: 0x98
	// Line 601, Address: 0x1e2d74, Func Offset: 0xa4
	// Line 609, Address: 0x1e2d78, Func Offset: 0xa8
	// Line 606, Address: 0x1e2d7c, Func Offset: 0xac
	// Line 609, Address: 0x1e2d80, Func Offset: 0xb0
	// Line 601, Address: 0x1e2d8c, Func Offset: 0xbc
	// Line 609, Address: 0x1e2d90, Func Offset: 0xc0
	// Line 606, Address: 0x1e2d94, Func Offset: 0xc4
	// Line 609, Address: 0x1e2d98, Func Offset: 0xc8
	// Line 601, Address: 0x1e2da4, Func Offset: 0xd4
	// Line 609, Address: 0x1e2da8, Func Offset: 0xd8
	// Line 606, Address: 0x1e2db4, Func Offset: 0xe4
	// Line 609, Address: 0x1e2db8, Func Offset: 0xe8
	// Line 601, Address: 0x1e2dc4, Func Offset: 0xf4
	// Line 609, Address: 0x1e2dc8, Func Offset: 0xf8
	// Line 606, Address: 0x1e2dcc, Func Offset: 0xfc
	// Line 609, Address: 0x1e2dd0, Func Offset: 0x100
	// Line 601, Address: 0x1e2ddc, Func Offset: 0x10c
	// Line 609, Address: 0x1e2de0, Func Offset: 0x110
	// Line 606, Address: 0x1e2dec, Func Offset: 0x11c
	// Line 609, Address: 0x1e2df0, Func Offset: 0x120
	// Line 601, Address: 0x1e2dfc, Func Offset: 0x12c
	// Line 609, Address: 0x1e2e00, Func Offset: 0x130
	// Line 606, Address: 0x1e2e04, Func Offset: 0x134
	// Line 609, Address: 0x1e2e08, Func Offset: 0x138
	// Line 611, Address: 0x1e2e74, Func Offset: 0x1a4
	// Func End, Address: 0x1e2e84, Func Offset: 0x1b4
}

// tex_render__19@unnamed@xFont_cpp@FRC13basic_rect<f>RC13basic_rect<f>RC13basic_rect<f>10iColor_tag
// Start address: 0x1e2e90
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color)
{
	basic_rect_1 r;
	basic_rect_1 rt;
	RwSky2DVertex* vert;
	// Line 529, Address: 0x1e2e90, Func Offset: 0
	// Line 531, Address: 0x1e2e98, Func Offset: 0x8
	// Line 529, Address: 0x1e2e9c, Func Offset: 0xc
	// Line 531, Address: 0x1e2ea8, Func Offset: 0x18
	// Line 529, Address: 0x1e2eac, Func Offset: 0x1c
	// Line 532, Address: 0x1e2eb0, Func Offset: 0x20
	// Line 529, Address: 0x1e2eb4, Func Offset: 0x24
	// Line 532, Address: 0x1e2eb8, Func Offset: 0x28
	// Line 529, Address: 0x1e2ebc, Func Offset: 0x2c
	// Line 531, Address: 0x1e2ec0, Func Offset: 0x30
	// Line 532, Address: 0x1e2f08, Func Offset: 0x78
	// Line 533, Address: 0x1e3030, Func Offset: 0x1a0
	// Line 536, Address: 0x1e3078, Func Offset: 0x1e8
	// Line 538, Address: 0x1e3088, Func Offset: 0x1f8
	// Line 539, Address: 0x1e3094, Func Offset: 0x204
	// Line 545, Address: 0x1e3098, Func Offset: 0x208
	// Line 544, Address: 0x1e30a0, Func Offset: 0x210
	// Line 545, Address: 0x1e30a4, Func Offset: 0x214
	// Line 544, Address: 0x1e30a8, Func Offset: 0x218
	// Line 546, Address: 0x1e30ac, Func Offset: 0x21c
	// Line 545, Address: 0x1e30b4, Func Offset: 0x224
	// Line 544, Address: 0x1e30b8, Func Offset: 0x228
	// Line 545, Address: 0x1e30bc, Func Offset: 0x22c
	// Line 544, Address: 0x1e30c8, Func Offset: 0x238
	// Line 545, Address: 0x1e30d0, Func Offset: 0x240
	// Line 546, Address: 0x1e30f8, Func Offset: 0x268
	// Line 547, Address: 0x1e3200, Func Offset: 0x370
	// Line 548, Address: 0x1e3318, Func Offset: 0x488
	// Line 551, Address: 0x1e3430, Func Offset: 0x5a0
	// Line 549, Address: 0x1e3434, Func Offset: 0x5a4
	// Line 551, Address: 0x1e3438, Func Offset: 0x5a8
	// Line 549, Address: 0x1e343c, Func Offset: 0x5ac
	// Line 550, Address: 0x1e3458, Func Offset: 0x5c8
	// Line 551, Address: 0x1e3478, Func Offset: 0x5e8
	// Line 552, Address: 0x1e3570, Func Offset: 0x6e0
	// Line 553, Address: 0x1e357c, Func Offset: 0x6ec
	// Func End, Address: 0x1e35a0, Func Offset: 0x710
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
	// Line 424, Address: 0x1e35a0, Func Offset: 0
	// Line 426, Address: 0x1e35d0, Func Offset: 0x30
	// Line 428, Address: 0x1e35d4, Func Offset: 0x34
	// Line 429, Address: 0x1e35e8, Func Offset: 0x48
	// Line 430, Address: 0x1e35f8, Func Offset: 0x58
	// Line 436, Address: 0x1e35fc, Func Offset: 0x5c
	// Line 430, Address: 0x1e3600, Func Offset: 0x60
	// Line 436, Address: 0x1e3604, Func Offset: 0x64
	// Line 439, Address: 0x1e3608, Func Offset: 0x68
	// Line 430, Address: 0x1e3614, Func Offset: 0x74
	// Line 431, Address: 0x1e3620, Func Offset: 0x80
	// Line 436, Address: 0x1e3630, Func Offset: 0x90
	// Line 435, Address: 0x1e3634, Func Offset: 0x94
	// Line 436, Address: 0x1e3638, Func Offset: 0x98
	// Line 437, Address: 0x1e363c, Func Offset: 0x9c
	// Line 436, Address: 0x1e3640, Func Offset: 0xa0
	// Line 437, Address: 0x1e3644, Func Offset: 0xa4
	// Line 436, Address: 0x1e364c, Func Offset: 0xac
	// Line 439, Address: 0x1e3650, Func Offset: 0xb0
	// Line 440, Address: 0x1e3658, Func Offset: 0xb8
	// Line 441, Address: 0x1e3660, Func Offset: 0xc0
	// Line 455, Address: 0x1e369c, Func Offset: 0xfc
	// Line 456, Address: 0x1e36ac, Func Offset: 0x10c
	// Line 443, Address: 0x1e36b8, Func Offset: 0x118
	// Line 445, Address: 0x1e36bc, Func Offset: 0x11c
	// Line 448, Address: 0x1e36c4, Func Offset: 0x124
	// Line 449, Address: 0x1e36d0, Func Offset: 0x130
	// Line 450, Address: 0x1e36ec, Func Offset: 0x14c
	// Line 451, Address: 0x1e36f8, Func Offset: 0x158
	// Line 452, Address: 0x1e371c, Func Offset: 0x17c
	// Line 455, Address: 0x1e3720, Func Offset: 0x180
	// Line 456, Address: 0x1e39d0, Func Offset: 0x430
	// Line 458, Address: 0x1e3a9c, Func Offset: 0x4fc
	// Line 459, Address: 0x1e3aec, Func Offset: 0x54c
	// Line 460, Address: 0x1e3b38, Func Offset: 0x598
	// Line 464, Address: 0x1e3b58, Func Offset: 0x5b8
	// Line 467, Address: 0x1e3b68, Func Offset: 0x5c8
	// Line 468, Address: 0x1e3b6c, Func Offset: 0x5cc
	// Line 469, Address: 0x1e3b80, Func Offset: 0x5e0
	// Line 471, Address: 0x1e3bfc, Func Offset: 0x65c
	// Line 469, Address: 0x1e3c00, Func Offset: 0x660
	// Line 472, Address: 0x1e3c0c, Func Offset: 0x66c
	// Line 473, Address: 0x1e3c10, Func Offset: 0x670
	// Line 476, Address: 0x1e3c20, Func Offset: 0x680
	// Line 477, Address: 0x1e3c28, Func Offset: 0x688
	// Line 478, Address: 0x1e3c3c, Func Offset: 0x69c
	// Line 482, Address: 0x1e3ca0, Func Offset: 0x700
	// Line 483, Address: 0x1e3ca8, Func Offset: 0x708
	// Func End, Address: 0x1e3cd8, Func Offset: 0x738
}

// reset_font_spacing__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10font_asset
// Start address: 0x1e3ce0
uint8 reset_font_spacing(font_asset& a)
{
	RwTexture* tex;
	basic_rect_0 char_bounds;
	uint8 baseline_count[256];
	int32 width;
	RwImage* image;
	iColor_tag* bits;
	int32 i;
	basic_rect_0 r;
	int32 baseline;
	// Line 322, Address: 0x1e3ce0, Func Offset: 0
	// Line 323, Address: 0x1e3d10, Func Offset: 0x30
	// Line 324, Address: 0x1e3d20, Func Offset: 0x40
	// Line 327, Address: 0x1e3d30, Func Offset: 0x50
	// Line 324, Address: 0x1e3d34, Func Offset: 0x54
	// Line 327, Address: 0x1e3d38, Func Offset: 0x58
	// Line 330, Address: 0x1e3d3c, Func Offset: 0x5c
	// Line 327, Address: 0x1e3d48, Func Offset: 0x68
	// Line 328, Address: 0x1e3d4c, Func Offset: 0x6c
	// Line 330, Address: 0x1e3d50, Func Offset: 0x70
	// Line 331, Address: 0x1e3d58, Func Offset: 0x78
	// Line 335, Address: 0x1e3d5c, Func Offset: 0x7c
	// Line 331, Address: 0x1e3d60, Func Offset: 0x80
	// Line 333, Address: 0x1e3d64, Func Offset: 0x84
	// Line 335, Address: 0x1e3d68, Func Offset: 0x88
	// Line 336, Address: 0x1e3d78, Func Offset: 0x98
	// Line 337, Address: 0x1e3d88, Func Offset: 0xa8
	// Line 338, Address: 0x1e3d90, Func Offset: 0xb0
	// Line 341, Address: 0x1e3d9c, Func Offset: 0xbc
	// Line 339, Address: 0x1e3da0, Func Offset: 0xc0
	// Line 341, Address: 0x1e3da4, Func Offset: 0xc4
	// Line 344, Address: 0x1e3db8, Func Offset: 0xd8
	// Line 346, Address: 0x1e3dc8, Func Offset: 0xe8
	// Line 347, Address: 0x1e3df0, Func Offset: 0x110
	// Line 348, Address: 0x1e3e14, Func Offset: 0x134
	// Line 351, Address: 0x1e3e20, Func Offset: 0x140
	// Line 352, Address: 0x1e3e48, Func Offset: 0x168
	// Line 361, Address: 0x1e3e70, Func Offset: 0x190
	// Line 367, Address: 0x1e3ec4, Func Offset: 0x1e4
	// Line 369, Address: 0x1e3ed4, Func Offset: 0x1f4
	// Line 370, Address: 0x1e3ed8, Func Offset: 0x1f8
	// Line 372, Address: 0x1e3edc, Func Offset: 0x1fc
	// Line 375, Address: 0x1e3ee8, Func Offset: 0x208
	// Line 376, Address: 0x1e3ef8, Func Offset: 0x218
	// Line 377, Address: 0x1e3f04, Func Offset: 0x224
	// Line 380, Address: 0x1e3f08, Func Offset: 0x228
	// Line 381, Address: 0x1e3f28, Func Offset: 0x248
	// Line 382, Address: 0x1e3f54, Func Offset: 0x274
	// Line 383, Address: 0x1e3f58, Func Offset: 0x278
	// Line 385, Address: 0x1e3f70, Func Offset: 0x290
	// Line 386, Address: 0x1e3f78, Func Offset: 0x298
	// Line 387, Address: 0x1e3f80, Func Offset: 0x2a0
	// Func End, Address: 0x1e3fb0, Func Offset: 0x2d0
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
	// Line 279, Address: 0x1e3fb0, Func Offset: 0
	// Line 277, Address: 0x1e3fb4, Func Offset: 0x4
	// Line 290, Address: 0x1e3fbc, Func Offset: 0xc
	// Line 280, Address: 0x1e3fcc, Func Offset: 0x1c
	// Line 279, Address: 0x1e3fd0, Func Offset: 0x20
	// Line 280, Address: 0x1e3fd4, Func Offset: 0x24
	// Line 290, Address: 0x1e3fd8, Func Offset: 0x28
	// Line 294, Address: 0x1e400c, Func Offset: 0x5c
	// Line 290, Address: 0x1e4010, Func Offset: 0x60
	// Line 293, Address: 0x1e4014, Func Offset: 0x64
	// Line 294, Address: 0x1e4018, Func Offset: 0x68
	// Line 295, Address: 0x1e401c, Func Offset: 0x6c
	// Line 298, Address: 0x1e4020, Func Offset: 0x70
	// Line 300, Address: 0x1e4038, Func Offset: 0x88
	// Line 301, Address: 0x1e403c, Func Offset: 0x8c
	// Line 304, Address: 0x1e4048, Func Offset: 0x98
	// Line 306, Address: 0x1e4074, Func Offset: 0xc4
	// Line 307, Address: 0x1e4088, Func Offset: 0xd8
	// Line 308, Address: 0x1e4098, Func Offset: 0xe8
	// Line 309, Address: 0x1e40a8, Func Offset: 0xf8
	// Line 311, Address: 0x1e40bc, Func Offset: 0x10c
	// Line 312, Address: 0x1e40d0, Func Offset: 0x120
	// Line 316, Address: 0x1e40e0, Func Offset: 0x130
	// Line 314, Address: 0x1e40e8, Func Offset: 0x138
	// Line 316, Address: 0x1e40ec, Func Offset: 0x13c
	// Line 317, Address: 0x1e40f0, Func Offset: 0x140
	// Line 315, Address: 0x1e40f4, Func Offset: 0x144
	// Line 317, Address: 0x1e40f8, Func Offset: 0x148
	// Line 318, Address: 0x1e4100, Func Offset: 0x150
	// Line 319, Address: 0x1e4124, Func Offset: 0x174
	// Func End, Address: 0x1e412c, Func Offset: 0x17c
}

