typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xJSPNodeInfo;
typedef struct xEntShadow;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct RpAtomic;
typedef struct xSerial;
typedef struct RxNodeDefinition;
typedef struct xVolumeAsset;
typedef struct xAnimSingle;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xAnimState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RpWorld;
typedef struct RxPipelineCluster;
typedef struct xAnimTable;
typedef struct xVolume;
typedef struct RxPipelineNodeParam;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct xMemPool;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct xVec3;
typedef struct _xFColor;
typedef struct xModelInstance;
typedef struct xJSPHeader;
typedef struct RpVertexNormal;
typedef struct RwTexCoords;
typedef struct _zLight;
typedef struct rxHeapBlockHeader;
typedef struct xSurface;
typedef struct xBase;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RwResEntry;
typedef struct zLightAsset;
typedef struct xModelBucket;
typedef struct xCollis;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwLLLink;
typedef struct xEntAsset;
typedef struct RpTriangle;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xLinkAsset;
typedef struct rxReq;
typedef struct xQCData;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct iEnv;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct _tagPartLink;
typedef enum RxClusterValid;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef struct xBaseAsset;
typedef struct xBBox;
typedef enum RpWorldRenderOrder;
typedef enum rxEmbeddedPacketState;
typedef struct RpLight;
typedef struct xSphere;
typedef struct RpMaterial;
typedef struct tri_data;
typedef struct _class_0;
typedef struct RwFrame;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct RpSector;
typedef struct zVolume;
typedef struct xBox;
typedef struct xScene;
typedef struct RxClusterDefinition;
typedef struct xShadowSimpleCache;
typedef struct _tagPartSpace;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xMat3x3;
typedef struct xAnimActiveEffect;
typedef struct RxClusterRef;
typedef struct _tagPartition;
typedef struct xFFX;
typedef struct RwObject;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPTriangle;
typedef struct RxNodeMethods;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xAnimMultiFileBase;
typedef struct anim_coll_data;
typedef struct iLight;
typedef struct RxCluster;
typedef struct RpInterpolator;
typedef struct _class_2;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(RxPipelineNode*);
typedef xBase*(*type_3)(uint32);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int8*(*type_5)(xBase*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_7)(uint32);
typedef uint32(*type_8)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_12)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_15)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_16)(RxNodeDefinition*);
typedef void(*type_17)(_zLight*, float32);
typedef void(*type_18)(RxNodeDefinition*);
typedef int32(*type_20)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_21)(RxPipelineNode*);
typedef void(*type_22)(_zLight*);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef uint32(*type_26)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xEnt*, xScene*, float32);
typedef void(*type_36)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_37)(xEnt*, xVec3*);
typedef void(*type_38)(xEnt*, xScene*, float32, xEntFrame*);
typedef RpWorldSector*(*type_40)(RpWorldSector*);
typedef void(*type_41)(xEnt*);
typedef uint32(*type_42)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_44)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_48)(xMemPool*, void*);
typedef int32(*type_50)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_54)(RwResEntry*);

typedef float32 type_2[4];
typedef RwTexCoords* type_11[8];
typedef float32 type_13[2];
typedef int8 type_14[4];
typedef int8 type_19[16];
typedef _zLight* type_23[32];
typedef uint16 type_24[3];
typedef int8 type_27[16];
typedef _zLight* type_28[32];
typedef xVec3 type_29[3];
typedef RpLight* type_31[2];
typedef RwFrame* type_32[2];
typedef RwTexCoords* type_33[8];
typedef float32 type_35[16];
typedef uint32 type_39[4];
typedef void(*type_43)(_zLight*)[18];
typedef void(*type_45)(_zLight*, float32)[18];
typedef xVec3 type_46[4];
typedef float32 type_47[2];
typedef uint8 type_49[3];
typedef int8 type_51[32];
typedef int8 type_52[32];
typedef uint8 type_53[2];
typedef xCollis type_55[18];
typedef float32 type_56[4];
typedef uint8 type_57[2];
typedef xAnimMultiFileEntry type_58[1];
typedef RxCluster type_59[1];
typedef uint16 type_60[3];

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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xVolumeAsset
{
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
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

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _zLight : xBase
{
	uint32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int32 true_idx;
	float32* reg;
	int32 effect_idx;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xSurface
{
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct zLightAsset : xBaseAsset
{
	uint8 lightType;
	uint8 lightEffect;
	uint8 lightPad[2];
	uint32 lightFlags;
	float32 lightColor[4];
	xVec3 lightDir;
	float32 lightConeAngle;
	xSphere lightSphere;
	uint32 attachID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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
		_class_1 tuv;
		tri_data tri;
	};
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct rxReq
{
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct _class_0
{
	xVec3* verts;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RpSector
{
	int32 type;
};

struct zVolume : xVolume
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _tagPartSpace
{
	int32 total;
	_tagPartLink head;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _tagPartition
{
	xVec3 min;
	xVec3 max;
	xVec3 space_dim;
	int32 total_x;
	int32 total_y;
	int32 total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct xFFX
{
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct st_SERIAL_CLIENTINFO
{
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct anim_coll_data
{
};

struct iLight
{
	uint32 type;
	RpLight* hw;
	xSphere sph;
	float32 radius_sq;
	_xFColor color;
	xVec3 dir;
	float32 coneangle;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwLinkList
{
	RwLLLink link;
};

int8 buffer[16];
int8 buffer[16];
_zLight* sLight[32];
int32 sLightTotal;
_tagPartition sLightPart;
zVolume* sPartitionVolume;
int32 gNumTemporaryLights;
_zLight* gTemporaryLights[32];
void(*sEffectFuncs)(_zLight*, float32)[18];
void(*sEffectInitFuncs)(_zLight*)[18];
xVec3 sDefaultShadowVec;
RpWorld* gLightWorld;
uint32 gActiveHeap;
int32(*zLightEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

void zLightOn(_zLight* zl, int32 on);
void zLightSetVolume(zVolume* vol);
void zLightRemoveLocalEnv();
void zLightAddLocal(xEnt* ent);
void zLightAddLocalEnv();
void zLightUpdate(xBase* to, float32 dt);
int32 zLightEventCB(xBase* to, uint32 toEvent);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightSave(_zLight* ent, xSerial* s);
void zLightDestroyAll();
void zLightResolveLinks();
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightInit(void* b, void* tasset);
void zLightResetAll(xEnv* env);

// zLightOn__FP7_zLighti
// Start address: 0x180590
void zLightOn(_zLight* zl, int32 on)
{
	// Line 864, Address: 0x180590, Func Offset: 0
	// Line 866, Address: 0x180598, Func Offset: 0x8
	// Line 867, Address: 0x1805a0, Func Offset: 0x10
	// Line 870, Address: 0x1805a8, Func Offset: 0x18
	// Line 872, Address: 0x1805b8, Func Offset: 0x28
	// Func End, Address: 0x1805c0, Func Offset: 0x30
}

// zLightSetVolume__FP7zVolume
// Start address: 0x1805c0
void zLightSetVolume(zVolume* vol)
{
	uint32 lp_id;
	// Line 826, Address: 0x1805c0, Func Offset: 0
	// Line 827, Address: 0x1805d0, Func Offset: 0x10
	// Line 831, Address: 0x1805d8, Func Offset: 0x18
	// Line 835, Address: 0x1805e0, Func Offset: 0x20
	// Line 836, Address: 0x1805ec, Func Offset: 0x2c
	// Line 840, Address: 0x1805f8, Func Offset: 0x38
	// Line 842, Address: 0x1805fc, Func Offset: 0x3c
	// Line 843, Address: 0x180600, Func Offset: 0x40
	// Func End, Address: 0x180610, Func Offset: 0x50
}

// zLightRemoveLocalEnv__Fv
// Start address: 0x180610
void zLightRemoveLocalEnv()
{
	int32 i;
	RwLLLink* link;
	// Line 801, Address: 0x180610, Func Offset: 0
	// Line 803, Address: 0x180620, Func Offset: 0x10
	// Line 805, Address: 0x180624, Func Offset: 0x14
	// Line 803, Address: 0x180628, Func Offset: 0x18
	// Line 804, Address: 0x18062c, Func Offset: 0x1c
	// Line 805, Address: 0x180644, Func Offset: 0x34
	// Line 807, Address: 0x180658, Func Offset: 0x48
	// Func End, Address: 0x180660, Func Offset: 0x50
}

// zLightAddLocal__FP4xEnt
// Start address: 0x180660
void zLightAddLocal(xEnt* ent)
{
	xVec3 default_light_pos;
	// Line 555, Address: 0x180660, Func Offset: 0
	// Line 561, Address: 0x180664, Func Offset: 0x4
	// Line 555, Address: 0x180668, Func Offset: 0x8
	// Line 561, Address: 0x18066c, Func Offset: 0xc
	// Line 555, Address: 0x180670, Func Offset: 0x10
	// Line 560, Address: 0x180674, Func Offset: 0x14
	// Line 561, Address: 0x180698, Func Offset: 0x38
	// Line 567, Address: 0x1806a4, Func Offset: 0x44
	// Line 569, Address: 0x1806b0, Func Offset: 0x50
	// Line 571, Address: 0x1806c4, Func Offset: 0x64
	// Line 574, Address: 0x1806d0, Func Offset: 0x70
	// Line 575, Address: 0x1806d8, Func Offset: 0x78
	// Line 574, Address: 0x1806dc, Func Offset: 0x7c
	// Line 575, Address: 0x1806f0, Func Offset: 0x90
	// Line 576, Address: 0x180714, Func Offset: 0xb4
	// Line 575, Address: 0x180718, Func Offset: 0xb8
	// Line 785, Address: 0x18071c, Func Offset: 0xbc
	// Line 796, Address: 0x18072c, Func Offset: 0xcc
	// Func End, Address: 0x18073c, Func Offset: 0xdc
}

// zLightAddLocalEnv__Fv
// Start address: 0x180740
void zLightAddLocalEnv()
{
	int32 i;
	_zLight* zlight;
	iLight* light;
	// Line 517, Address: 0x180740, Func Offset: 0
	// Line 519, Address: 0x180758, Func Offset: 0x18
	// Line 521, Address: 0x180770, Func Offset: 0x30
	// Line 524, Address: 0x180774, Func Offset: 0x34
	// Line 527, Address: 0x180784, Func Offset: 0x44
	// Line 531, Address: 0x180798, Func Offset: 0x58
	// Line 534, Address: 0x1807a4, Func Offset: 0x64
	// Line 535, Address: 0x1807a8, Func Offset: 0x68
	// Line 534, Address: 0x1807ac, Func Offset: 0x6c
	// Line 535, Address: 0x1807b0, Func Offset: 0x70
	// Line 534, Address: 0x1807b4, Func Offset: 0x74
	// Line 535, Address: 0x1807f0, Func Offset: 0xb0
	// Line 536, Address: 0x180800, Func Offset: 0xc0
	// Line 539, Address: 0x18080c, Func Offset: 0xcc
	// Line 540, Address: 0x180828, Func Offset: 0xe8
	// Func End, Address: 0x180844, Func Offset: 0x104
}

// zLightUpdate__FP5xBaseP6xScenef
// Start address: 0x180850
void zLightUpdate(xBase* to, float32 dt)
{
	_zLight* t;
	xVec3 pos;
	// Line 478, Address: 0x180850, Func Offset: 0
	// Line 482, Address: 0x180860, Func Offset: 0x10
	// Line 487, Address: 0x180864, Func Offset: 0x14
	// Line 490, Address: 0x180878, Func Offset: 0x28
	// Line 494, Address: 0x180880, Func Offset: 0x30
	// Line 495, Address: 0x180884, Func Offset: 0x34
	// Line 494, Address: 0x18088c, Func Offset: 0x3c
	// Line 496, Address: 0x180890, Func Offset: 0x40
	// Line 494, Address: 0x180894, Func Offset: 0x44
	// Line 495, Address: 0x1808b0, Func Offset: 0x60
	// Line 496, Address: 0x1808b8, Func Offset: 0x68
	// Line 499, Address: 0x1808c0, Func Offset: 0x70
	// Line 502, Address: 0x1808c4, Func Offset: 0x74
	// Line 499, Address: 0x1808d0, Func Offset: 0x80
	// Line 502, Address: 0x1808e4, Func Offset: 0x94
	// Line 504, Address: 0x1808f4, Func Offset: 0xa4
	// Line 502, Address: 0x1808f8, Func Offset: 0xa8
	// Line 508, Address: 0x180910, Func Offset: 0xc0
	// Line 510, Address: 0x180918, Func Offset: 0xc8
	// Line 512, Address: 0x180920, Func Offset: 0xd0
	// Func End, Address: 0x180934, Func Offset: 0xe4
}

// zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x180940
int32 zLightEventCB(xBase* to, uint32 toEvent)
{
	_zLight* t;
	// Line 441, Address: 0x180940, Func Offset: 0
	// Line 448, Address: 0x180944, Func Offset: 0x4
	// Line 441, Address: 0x180948, Func Offset: 0x8
	// Line 448, Address: 0x180950, Func Offset: 0x10
	// Line 450, Address: 0x180974, Func Offset: 0x34
	// Line 451, Address: 0x180978, Func Offset: 0x38
	// Line 452, Address: 0x180980, Func Offset: 0x40
	// Line 455, Address: 0x180988, Func Offset: 0x48
	// Line 456, Address: 0x180994, Func Offset: 0x54
	// Line 458, Address: 0x18099c, Func Offset: 0x5c
	// Line 459, Address: 0x1809a0, Func Offset: 0x60
	// Line 461, Address: 0x180a0c, Func Offset: 0xcc
	// Line 464, Address: 0x180a10, Func Offset: 0xd0
	// Line 463, Address: 0x180a18, Func Offset: 0xd8
	// Line 464, Address: 0x180a1c, Func Offset: 0xdc
	// Func End, Address: 0x180a24, Func Offset: 0xe4
}

// zLightLoad__FP7_zLightP7xSerial
// Start address: 0x180a30
void zLightLoad(_zLight* ent, xSerial* s)
{
	// Line 422, Address: 0x180a30, Func Offset: 0
	// Func End, Address: 0x180a38, Func Offset: 0x8
}

// zLightSave__FP7_zLightP7xSerial
// Start address: 0x180a40
void zLightSave(_zLight* ent, xSerial* s)
{
	// Line 403, Address: 0x180a40, Func Offset: 0
	// Func End, Address: 0x180a48, Func Offset: 0x8
}

// zLightDestroyAll__Fv
// Start address: 0x180a50
void zLightDestroyAll()
{
	int32 total;
	int32 i;
	// Line 354, Address: 0x180a50, Func Offset: 0
	// Line 356, Address: 0x180a68, Func Offset: 0x18
	// Line 358, Address: 0x180a80, Func Offset: 0x30
	// Line 359, Address: 0x180a8c, Func Offset: 0x3c
	// Line 360, Address: 0x180a90, Func Offset: 0x40
	// Line 359, Address: 0x180a98, Func Offset: 0x48
	// Line 360, Address: 0x180aa0, Func Offset: 0x50
	// Line 361, Address: 0x180aa8, Func Offset: 0x58
	// Line 362, Address: 0x180aac, Func Offset: 0x5c
	// Func End, Address: 0x180ac4, Func Offset: 0x74
}

// zLightResolveLinks__Fv
// Start address: 0x180ad0
void zLightResolveLinks()
{
	int32 i;
	_zLight* zl;
	// Line 338, Address: 0x180ad0, Func Offset: 0
	// Line 339, Address: 0x180ae4, Func Offset: 0x14
	// Line 341, Address: 0x180b00, Func Offset: 0x30
	// Line 345, Address: 0x180b0c, Func Offset: 0x3c
	// Line 346, Address: 0x180b14, Func Offset: 0x44
	// Line 348, Address: 0x180b28, Func Offset: 0x58
	// Line 349, Address: 0x180b30, Func Offset: 0x60
	// Line 350, Address: 0x180b48, Func Offset: 0x78
	// Func End, Address: 0x180b60, Func Offset: 0x90
}

// zLightInit__FP5xBaseP11zLightAsset
// Start address: 0x180b60
void zLightInit(xBase* b, zLightAsset* tasset)
{
	_zLight* t;
	uint32 itype;
	// Line 195, Address: 0x180b60, Func Offset: 0
	// Line 199, Address: 0x180b74, Func Offset: 0x14
	// Line 209, Address: 0x180b7c, Func Offset: 0x1c
	// Line 210, Address: 0x180b88, Func Offset: 0x28
	// Line 212, Address: 0x180b8c, Func Offset: 0x2c
	// Line 213, Address: 0x180b98, Func Offset: 0x38
	// Line 215, Address: 0x180ba8, Func Offset: 0x48
	// Line 219, Address: 0x180bb0, Func Offset: 0x50
	// Line 221, Address: 0x180be4, Func Offset: 0x84
	// Line 225, Address: 0x180be8, Func Offset: 0x88
	// Line 228, Address: 0x180bf0, Func Offset: 0x90
	// Line 232, Address: 0x180bf8, Func Offset: 0x98
	// Line 241, Address: 0x180c00, Func Offset: 0xa0
	// Line 244, Address: 0x180c10, Func Offset: 0xb0
	// Line 262, Address: 0x180c1c, Func Offset: 0xbc
	// Line 244, Address: 0x180c24, Func Offset: 0xc4
	// Line 247, Address: 0x180c3c, Func Offset: 0xdc
	// Line 248, Address: 0x180c44, Func Offset: 0xe4
	// Line 249, Address: 0x180c4c, Func Offset: 0xec
	// Line 250, Address: 0x180c54, Func Offset: 0xf4
	// Line 253, Address: 0x180c5c, Func Offset: 0xfc
	// Line 254, Address: 0x180c64, Func Offset: 0x104
	// Line 255, Address: 0x180c6c, Func Offset: 0x10c
	// Line 256, Address: 0x180c74, Func Offset: 0x114
	// Line 257, Address: 0x180c7c, Func Offset: 0x11c
	// Line 260, Address: 0x180c88, Func Offset: 0x128
	// Line 262, Address: 0x180c8c, Func Offset: 0x12c
	// Line 266, Address: 0x180c94, Func Offset: 0x134
	// Line 267, Address: 0x180c98, Func Offset: 0x138
	// Line 268, Address: 0x180cac, Func Offset: 0x14c
	// Line 271, Address: 0x180cb8, Func Offset: 0x158
	// Line 273, Address: 0x180cc8, Func Offset: 0x168
	// Line 274, Address: 0x180cdc, Func Offset: 0x17c
	// Line 275, Address: 0x180d18, Func Offset: 0x1b8
	// Line 278, Address: 0x180d20, Func Offset: 0x1c0
	// Line 279, Address: 0x180d24, Func Offset: 0x1c4
	// Line 283, Address: 0x180d28, Func Offset: 0x1c8
	// Line 333, Address: 0x180d40, Func Offset: 0x1e0
	// Func End, Address: 0x180d54, Func Offset: 0x1f4
}

// zLightInit__FPvPv
// Start address: 0x180d60
void zLightInit(void* b, void* tasset)
{
	// Line 192, Address: 0x180d60, Func Offset: 0
	// Func End, Address: 0x180d68, Func Offset: 0x8
}

// zLightResetAll__FP4xEnv
// Start address: 0x180d70
void zLightResetAll(xEnv* env)
{
	// Line 155, Address: 0x180d70, Func Offset: 0
	// Line 159, Address: 0x180d74, Func Offset: 0x4
	// Line 155, Address: 0x180d78, Func Offset: 0x8
	// Line 159, Address: 0x180d7c, Func Offset: 0xc
	// Line 155, Address: 0x180d80, Func Offset: 0x10
	// Line 159, Address: 0x180d88, Func Offset: 0x18
	// Line 160, Address: 0x180d94, Func Offset: 0x24
	// Line 163, Address: 0x180d98, Func Offset: 0x28
	// Line 164, Address: 0x180da0, Func Offset: 0x30
	// Line 166, Address: 0x180dc0, Func Offset: 0x50
	// Line 168, Address: 0x180de0, Func Offset: 0x70
	// Line 178, Address: 0x180df4, Func Offset: 0x84
	// Func End, Address: 0x180e04, Func Offset: 0x94
}

