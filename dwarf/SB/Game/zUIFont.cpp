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
typedef struct _class_0;
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
	RwTexCoords* texCoords[8];
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct tag_type
{
	substr name;
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void* context;
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
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
	void(*destroyNotify)(RwResEntry*);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint16 dim[2];
	uint32 textureID;
	float32 uva[2];
	float32 uvb[2];
	float32 uvc[2];
	float32 uvd[2];
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
	uint16 vertIndex[3];
	int16 matIndex;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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
	float32 radius[2];
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
	uint8 NumAnims[2];
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
	uint8 pad[3];
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
	int8 idtag[4];
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _class_1
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint8 bcolor[4];
	uint8 color[4];
	uint16 inset[4];
	uint16 space[2];
	uint16 cdim[2];
	uint32 max_height;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	float32 matrix[16];
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
	xVec3 corner[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	uint16 vertIndex[3];
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
	RxCluster clusters[1];
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
int8 buffer[16];
int8 buffer[16];
_tagTRCPadInfo gTrcPad[4];
int32(*zUIFontEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zUIFont_Update)(zUIFont*, xScene*, float32);
void(*zUIFont_Render)(xEnt*);

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
	// Line 447, Address: 0x1a1a00, Func Offset: 0
	// Line 454, Address: 0x1a1a20, Func Offset: 0x20
	// Line 467, Address: 0x1a1a3c, Func Offset: 0x3c
	// Line 464, Address: 0x1a1a40, Func Offset: 0x40
	// Line 465, Address: 0x1a1a44, Func Offset: 0x44
	// Line 471, Address: 0x1a1a48, Func Offset: 0x48
	// Line 466, Address: 0x1a1a4c, Func Offset: 0x4c
	// Line 471, Address: 0x1a1a50, Func Offset: 0x50
	// Line 473, Address: 0x1a1a58, Func Offset: 0x58
	// Line 476, Address: 0x1a1a68, Func Offset: 0x68
	// Line 479, Address: 0x1a1a78, Func Offset: 0x78
	// Line 486, Address: 0x1a1a88, Func Offset: 0x88
	// Line 482, Address: 0x1a1a8c, Func Offset: 0x8c
	// Line 486, Address: 0x1a1a90, Func Offset: 0x90
	// Line 488, Address: 0x1a1a94, Func Offset: 0x94
	// Line 491, Address: 0x1a1a98, Func Offset: 0x98
	// Line 494, Address: 0x1a1aa8, Func Offset: 0xa8
	// Line 501, Address: 0x1a1ab8, Func Offset: 0xb8
	// Line 497, Address: 0x1a1abc, Func Offset: 0xbc
	// Line 501, Address: 0x1a1ac0, Func Offset: 0xc0
	// Line 504, Address: 0x1a1ac4, Func Offset: 0xc4
	// Line 507, Address: 0x1a1ac8, Func Offset: 0xc8
	// Line 513, Address: 0x1a1ad8, Func Offset: 0xd8
	// Line 515, Address: 0x1a1adc, Func Offset: 0xdc
	// Line 517, Address: 0x1a1af0, Func Offset: 0xf0
	// Line 518, Address: 0x1a1b00, Func Offset: 0x100
	// Line 520, Address: 0x1a1b04, Func Offset: 0x104
	// Line 518, Address: 0x1a1b0c, Func Offset: 0x10c
	// Line 520, Address: 0x1a1b24, Func Offset: 0x124
	// Line 522, Address: 0x1a1bf4, Func Offset: 0x1f4
	// Line 520, Address: 0x1a1bf8, Func Offset: 0x1f8
	// Line 522, Address: 0x1a1bfc, Func Offset: 0x1fc
	// Line 520, Address: 0x1a1c00, Func Offset: 0x200
	// Line 522, Address: 0x1a1c0c, Func Offset: 0x20c
	// Line 523, Address: 0x1a1c14, Func Offset: 0x214
	// Line 524, Address: 0x1a1c1c, Func Offset: 0x21c
	// Line 533, Address: 0x1a1c20, Func Offset: 0x220
	// Line 534, Address: 0x1a1c28, Func Offset: 0x228
	// Line 535, Address: 0x1a1c74, Func Offset: 0x274
	// Line 536, Address: 0x1a1cbc, Func Offset: 0x2bc
	// Line 537, Address: 0x1a1d04, Func Offset: 0x304
	// Line 536, Address: 0x1a1d14, Func Offset: 0x314
	// Line 538, Address: 0x1a1d18, Func Offset: 0x318
	// Line 541, Address: 0x1a1da8, Func Offset: 0x3a8
	// Line 538, Address: 0x1a1dac, Func Offset: 0x3ac
	// Line 541, Address: 0x1a1db4, Func Offset: 0x3b4
	// Line 538, Address: 0x1a1dbc, Func Offset: 0x3bc
	// Line 541, Address: 0x1a1ddc, Func Offset: 0x3dc
	// Line 542, Address: 0x1a1dfc, Func Offset: 0x3fc
	// Line 548, Address: 0x1a1f40, Func Offset: 0x540
	// Line 551, Address: 0x1a1f48, Func Offset: 0x548
	// Line 552, Address: 0x1a1f54, Func Offset: 0x554
	// Line 553, Address: 0x1a1f68, Func Offset: 0x568
	// Line 554, Address: 0x1a1f74, Func Offset: 0x574
	// Line 566, Address: 0x1a1f80, Func Offset: 0x580
	// Line 568, Address: 0x1a1f8c, Func Offset: 0x58c
	// Line 571, Address: 0x1a1f9c, Func Offset: 0x59c
	// Line 572, Address: 0x1a2008, Func Offset: 0x608
	// Line 574, Address: 0x1a2018, Func Offset: 0x618
	// Line 575, Address: 0x1a2028, Func Offset: 0x628
	// Line 576, Address: 0x1a2048, Func Offset: 0x648
	// Line 577, Address: 0x1a2054, Func Offset: 0x654
	// Line 578, Address: 0x1a2068, Func Offset: 0x668
	// Line 580, Address: 0x1a206c, Func Offset: 0x66c
	// Line 582, Address: 0x1a2070, Func Offset: 0x670
	// Line 584, Address: 0x1a2080, Func Offset: 0x680
	// Line 586, Address: 0x1a20a0, Func Offset: 0x6a0
	// Line 587, Address: 0x1a20ac, Func Offset: 0x6ac
	// Line 589, Address: 0x1a20b0, Func Offset: 0x6b0
	// Line 590, Address: 0x1a20d0, Func Offset: 0x6d0
	// Func End, Address: 0x1a20f4, Func Offset: 0x6f4
}

// zUIFontEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x1a2100
int32 zUIFontEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	int32 rval;
	zUIFont* s;
	// Line 347, Address: 0x1a2100, Func Offset: 0
	// Line 357, Address: 0x1a2104, Func Offset: 0x4
	// Line 347, Address: 0x1a2108, Func Offset: 0x8
	// Line 348, Address: 0x1a211c, Func Offset: 0x1c
	// Line 357, Address: 0x1a2120, Func Offset: 0x20
	// Line 361, Address: 0x1a2180, Func Offset: 0x80
	// Line 362, Address: 0x1a2194, Func Offset: 0x94
	// Line 364, Address: 0x1a21b0, Func Offset: 0xb0
	// Line 368, Address: 0x1a21bc, Func Offset: 0xbc
	// Line 376, Address: 0x1a21e8, Func Offset: 0xe8
	// Line 377, Address: 0x1a21f8, Func Offset: 0xf8
	// Line 387, Address: 0x1a2200, Func Offset: 0x100
	// Line 390, Address: 0x1a220c, Func Offset: 0x10c
	// Line 398, Address: 0x1a2238, Func Offset: 0x138
	// Line 399, Address: 0x1a2248, Func Offset: 0x148
	// Line 408, Address: 0x1a2250, Func Offset: 0x150
	// Line 409, Address: 0x1a2278, Func Offset: 0x178
	// Line 412, Address: 0x1a2280, Func Offset: 0x180
	// Line 413, Address: 0x1a2288, Func Offset: 0x188
	// Line 416, Address: 0x1a2290, Func Offset: 0x190
	// Line 417, Address: 0x1a22a0, Func Offset: 0x1a0
	// Line 422, Address: 0x1a22a8, Func Offset: 0x1a8
	// Line 423, Address: 0x1a22cc, Func Offset: 0x1cc
	// Line 424, Address: 0x1a22d4, Func Offset: 0x1d4
	// Line 426, Address: 0x1a22d8, Func Offset: 0x1d8
	// Line 429, Address: 0x1a22e0, Func Offset: 0x1e0
	// Line 432, Address: 0x1a22ec, Func Offset: 0x1ec
	// Line 434, Address: 0x1a22f0, Func Offset: 0x1f0
	// Line 435, Address: 0x1a22f4, Func Offset: 0x1f4
	// Func End, Address: 0x1a230c, Func Offset: 0x20c
}

// zUIFont_Update__FP7zUIFontP6xScenef
// Start address: 0x1a2310
void zUIFont_Update(zUIFont* ent)
{
	_zUI* ui;
	xBase* sendTo;
	// Line 209, Address: 0x1a2310, Func Offset: 0
	// Line 211, Address: 0x1a2320, Func Offset: 0x10
	// Line 216, Address: 0x1a2324, Func Offset: 0x14
	// Line 218, Address: 0x1a2340, Func Offset: 0x30
	// Line 219, Address: 0x1a2348, Func Offset: 0x38
	// Line 222, Address: 0x1a2350, Func Offset: 0x40
	// Line 225, Address: 0x1a2368, Func Offset: 0x58
	// Line 227, Address: 0x1a2398, Func Offset: 0x88
	// Line 228, Address: 0x1a23a4, Func Offset: 0x94
	// Line 231, Address: 0x1a23b8, Func Offset: 0xa8
	// Line 235, Address: 0x1a23c4, Func Offset: 0xb4
	// Line 236, Address: 0x1a23d0, Func Offset: 0xc0
	// Line 237, Address: 0x1a23dc, Func Offset: 0xcc
	// Line 240, Address: 0x1a23e4, Func Offset: 0xd4
	// Line 243, Address: 0x1a23fc, Func Offset: 0xec
	// Line 246, Address: 0x1a242c, Func Offset: 0x11c
	// Line 247, Address: 0x1a2438, Func Offset: 0x128
	// Line 249, Address: 0x1a244c, Func Offset: 0x13c
	// Line 253, Address: 0x1a2458, Func Offset: 0x148
	// Line 254, Address: 0x1a2460, Func Offset: 0x150
	// Line 255, Address: 0x1a246c, Func Offset: 0x15c
	// Line 256, Address: 0x1a2474, Func Offset: 0x164
	// Line 257, Address: 0x1a2480, Func Offset: 0x170
	// Line 258, Address: 0x1a248c, Func Offset: 0x17c
	// Line 259, Address: 0x1a2494, Func Offset: 0x184
	// Line 261, Address: 0x1a24a0, Func Offset: 0x190
	// Line 262, Address: 0x1a24ac, Func Offset: 0x19c
	// Line 267, Address: 0x1a24b4, Func Offset: 0x1a4
	// Line 268, Address: 0x1a24c0, Func Offset: 0x1b0
	// Line 273, Address: 0x1a24cc, Func Offset: 0x1bc
	// Line 276, Address: 0x1a24d4, Func Offset: 0x1c4
	// Line 278, Address: 0x1a24e0, Func Offset: 0x1d0
	// Line 279, Address: 0x1a24ec, Func Offset: 0x1dc
	// Line 280, Address: 0x1a24f4, Func Offset: 0x1e4
	// Line 281, Address: 0x1a24f8, Func Offset: 0x1e8
	// Line 282, Address: 0x1a2500, Func Offset: 0x1f0
	// Line 283, Address: 0x1a250c, Func Offset: 0x1fc
	// Line 284, Address: 0x1a2514, Func Offset: 0x204
	// Line 285, Address: 0x1a2518, Func Offset: 0x208
	// Line 286, Address: 0x1a2520, Func Offset: 0x210
	// Line 287, Address: 0x1a252c, Func Offset: 0x21c
	// Line 288, Address: 0x1a2534, Func Offset: 0x224
	// Line 289, Address: 0x1a2540, Func Offset: 0x230
	// Line 290, Address: 0x1a254c, Func Offset: 0x23c
	// Line 291, Address: 0x1a2554, Func Offset: 0x244
	// Line 293, Address: 0x1a2560, Func Offset: 0x250
	// Line 294, Address: 0x1a2570, Func Offset: 0x260
	// Line 295, Address: 0x1a2578, Func Offset: 0x268
	// Line 319, Address: 0x1a2580, Func Offset: 0x270
	// Line 320, Address: 0x1a2590, Func Offset: 0x280
	// Line 321, Address: 0x1a2598, Func Offset: 0x288
	// Line 322, Address: 0x1a25a0, Func Offset: 0x290
	// Line 323, Address: 0x1a25b0, Func Offset: 0x2a0
	// Line 324, Address: 0x1a25b8, Func Offset: 0x2a8
	// Line 325, Address: 0x1a25c0, Func Offset: 0x2b0
	// Line 326, Address: 0x1a25d0, Func Offset: 0x2c0
	// Line 330, Address: 0x1a25d8, Func Offset: 0x2c8
	// Line 333, Address: 0x1a25e8, Func Offset: 0x2d8
	// Func End, Address: 0x1a25fc, Func Offset: 0x2ec
}

// zUIFont_PreUpdate__FP7zUIFontP6xScenef
// Start address: 0x1a2600
void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, float32 dt)
{
	// Line 205, Address: 0x1a2600, Func Offset: 0
	// Func End, Address: 0x1a2608, Func Offset: 0x8
}

// zUIFont_Load__FP7zUIFontP7xSerial
// Start address: 0x1a2610
void zUIFont_Load(zUIFont* ent, xSerial* s)
{
	// Line 177, Address: 0x1a2610, Func Offset: 0
	// Func End, Address: 0x1a2618, Func Offset: 0x8
}

// zUIFont_Save__FP7zUIFontP7xSerial
// Start address: 0x1a2620
void zUIFont_Save(zUIFont* ent, xSerial* s)
{
	// Line 156, Address: 0x1a2620, Func Offset: 0
	// Func End, Address: 0x1a2628, Func Offset: 0x8
}

// zUIFont_Init__FP7zUIFontP9xEntAsset
// Start address: 0x1a2630
void zUIFont_Init(zUIFont* ent, xEntAsset* asset)
{
	// Line 74, Address: 0x1a2630, Func Offset: 0
	// Line 79, Address: 0x1a2648, Func Offset: 0x18
	// Line 81, Address: 0x1a2650, Func Offset: 0x20
	// Line 82, Address: 0x1a265c, Func Offset: 0x2c
	// Line 83, Address: 0x1a2664, Func Offset: 0x34
	// Line 84, Address: 0x1a267c, Func Offset: 0x4c
	// Line 85, Address: 0x1a2688, Func Offset: 0x58
	// Line 87, Address: 0x1a2694, Func Offset: 0x64
	// Line 88, Address: 0x1a26a0, Func Offset: 0x70
	// Line 91, Address: 0x1a26b0, Func Offset: 0x80
	// Line 94, Address: 0x1a26b4, Func Offset: 0x84
	// Line 91, Address: 0x1a26bc, Func Offset: 0x8c
	// Line 94, Address: 0x1a26c4, Func Offset: 0x94
	// Line 97, Address: 0x1a2704, Func Offset: 0xd4
	// Line 98, Address: 0x1a2708, Func Offset: 0xd8
	// Line 104, Address: 0x1a2720, Func Offset: 0xf0
	// Line 118, Address: 0x1a2728, Func Offset: 0xf8
	// Line 122, Address: 0x1a2750, Func Offset: 0x120
	// Line 123, Address: 0x1a2758, Func Offset: 0x128
	// Line 128, Address: 0x1a2764, Func Offset: 0x134
	// Line 130, Address: 0x1a2768, Func Offset: 0x138
	// Line 131, Address: 0x1a2770, Func Offset: 0x140
	// Line 132, Address: 0x1a2774, Func Offset: 0x144
	// Line 130, Address: 0x1a2778, Func Offset: 0x148
	// Line 131, Address: 0x1a277c, Func Offset: 0x14c
	// Line 132, Address: 0x1a2784, Func Offset: 0x154
	// Line 133, Address: 0x1a278c, Func Offset: 0x15c
	// Line 134, Address: 0x1a2794, Func Offset: 0x164
	// Line 139, Address: 0x1a279c, Func Offset: 0x16c
	// Line 141, Address: 0x1a27a0, Func Offset: 0x170
	// Line 142, Address: 0x1a27c0, Func Offset: 0x190
	// Func End, Address: 0x1a27d8, Func Offset: 0x1a8
}

// zUIFont_Init__FPvPv
// Start address: 0x1a27e0
void zUIFont_Init(void* ent, void* asset)
{
	// Line 70, Address: 0x1a27e0, Func Offset: 0
	// Func End, Address: 0x1a27e8, Func Offset: 0x8
}

// zUIFontInit__Fv
// Start address: 0x1a27f0
void zUIFontInit()
{
	// Line 66, Address: 0x1a27f0, Func Offset: 0
	// Func End, Address: 0x1a27f8, Func Offset: 0x8
}

