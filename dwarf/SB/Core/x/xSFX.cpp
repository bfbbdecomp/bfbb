typedef struct xSurface;
typedef struct xEnt;
typedef struct RxPipeline;
typedef struct RwRGBA;
typedef struct xAnimMultiFile;
typedef struct RxHeap;
typedef struct RwTexture;
typedef struct RwV3d;
typedef struct RwBBox;
typedef struct xLightKitLight;
typedef struct RwTexCoords;
typedef struct RxPipelineNode;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xQCData;
typedef struct xQuat;
typedef struct RpMeshHeader;
typedef struct xBBox;
typedef struct xShadowSimpleCache;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwResEntry;
typedef struct rxHeapBlockHeader;
typedef struct xVec3;
typedef struct RpWorldSector;
typedef struct xEntShadow;
typedef struct iEnv;
typedef struct RpMorphTarget;
typedef struct xSFX;
typedef struct xModelInstance;
typedef struct RxPipelineRequiresCluster;
typedef struct xLightKit;
typedef struct anim_coll_data;
typedef struct RpLight;
typedef struct xJSPNodeInfo;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct xAnimTable;
typedef struct xSFXAsset;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct RwSurfaceProperties;
typedef struct xGridBound;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPBranchNode;
typedef struct rxReq;
typedef struct xAnimState;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xJSPHeader;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xMat4x3;
typedef struct xAnimActiveEffect;
typedef struct xLinkAsset;
typedef struct xEntCollis;
typedef enum RxNodeDefEditable;
typedef struct RpAtomic;
typedef enum RxClusterValid;
typedef struct xAnimFile;
typedef struct RpClump;
typedef struct _class_0;
typedef struct iSndVol;
typedef struct xAnimSingle;
typedef struct tri_data;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xClumpCollBSPTree;
typedef struct RpVertexNormal;
typedef struct xSndGlobals;
typedef struct xScene;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef enum RxClusterForcePresent;
typedef struct xSerial;
typedef struct xCylinder;
typedef struct xAnimEffect;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct _class_1;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct st_PACKER_ASSETTYPE;
typedef struct RwSphere;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum sound_category;
typedef struct xEntAsset;
typedef struct xMat3x3;
typedef struct RpGeometry;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xEntFrame;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEnv;
typedef struct RxNodeDefinition;
typedef struct xShadowSimplePoly;
typedef struct xCollis;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPTriangle;
typedef struct xBaseAsset;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct iSndInfo;
typedef enum sound_listener_game_mode;
typedef struct xBound;
typedef struct st_SERIAL_CLIENTINFO;
typedef enum RpWorldRenderOrder;
typedef struct _class_2;
typedef struct xSndVoiceInfo;

typedef void(*type_0)(xEnt*);
typedef void*(*type_1)(void*, uint32, void*, uint32, uint32*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void*(*type_5)(void*, uint32, void*, void*, uint32, uint32*);
typedef void(*type_6)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_7)(void*, uint32, void*, int32);
typedef uint32(*type_8)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_9)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void*(*type_10)(void*, uint32, void*, int32*, int32*);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_12)(void*, uint32, void*);
typedef void(*type_13)(xEnt*, xVec3*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef int32(*type_15)(RxNodeDefinition*);
typedef void(*type_16)(void*, uint32);
typedef void(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(void*, uint32, void*, int8*);
typedef int32(*type_21)(RxPipelineNode*);
typedef void(*type_22)(RxPipelineNode*);
typedef int32(*type_24)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_25)(uint32);
typedef void(*type_27)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_28)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_29)(xBase*);
typedef void(*type_31)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_32)(uint32);
typedef int32(*type_33)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_34)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_40)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_49)(RpClump*, void*);
typedef int32(*type_51)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_57)(RwResEntry*);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, float32);
typedef void(*type_65)(xEnt*, xScene*, float32, xEntFrame*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);

typedef RwTexCoords* type_2[8];
typedef xVec3 type_4[4];
typedef xSFX* type_18[1];
typedef xSFX* type_19[1];
typedef xCollis type_23[18];
typedef float32 type_26[1];
typedef int8 type_30[4];
typedef float32 type_35[2];
typedef float32 type_36[5];
typedef xSndVoiceInfo type_37[48];
typedef uint8 type_38[3];
typedef xMat4x3 type_39[2];
typedef float32 type_41[4];
typedef float32 type_42[2];
typedef uint32 type_43[4];
typedef uint16 type_44[3];
typedef uint8 type_45[2];
typedef xAnimMultiFileEntry type_46[1];
typedef RpLight* type_47[2];
typedef RwFrame* type_48[2];
typedef uint8 type_50[3];
typedef RwTexCoords* type_52[8];
typedef int8 type_54[32];
typedef xVec3 type_55[3];
typedef int8 type_56[32];
typedef int8 type_58[16];
typedef uint16 type_59[3];
typedef int8 type_62[16];
typedef float32 type_63[16];
typedef RxCluster type_64[1];

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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xSFX : xBase
{
	xSFXAsset* asset;
	uint32 sndID;
	float32 cachedOuterDistSquared;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xSFXAsset : xBaseAsset
{
	uint16 flagsSFX;
	uint16 freq;
	float32 freqm;
	uint32 soundAssetID;
	uint32 attachID;
	uint8 loopCount;
	uint8 priority;
	uint8 volume;
	uint8 pad;
	xVec3 pos;
	float32 innerRadius;
	float32 outerRadius;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct rxReq
{
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

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct _class_0
{
	xVec3* verts;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	float32 categoryVolFader[5];
	xSndVoiceInfo voice[48];
	xMat4x3 listenerMat[2];
	sound_listener_game_mode listenerMode;
	uint32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	st_PACKER_ASSETTYPE* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct _class_1
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

struct xFFX
{
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
	int32 lastStreamBuffer;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
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

struct st_SERIAL_CLIENTINFO
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	xVec3* parentPos;
	int32 internalID;
	uint32 flags;
	uint16 pad;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float32 innerRadius2;
	float32 outerRadius2;
	uint32 lock_owner;
	iSndInfo ps;
};

int8 buffer[16];
int8 buffer[16];
xSFX* s_managedEnvSFX[1];
int32(*xSFXEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
xSndGlobals gSnd;

void xSFXPlay(xSFX* t);
int32 xSFXEventCB(xBase* to, uint32 toEvent, float32* toParam);
void xSFXLoad(xSFX* ent, xSerial* s);
void xSFXSave(xSFX* ent, xSerial* s);
void xSFXInit(void* t, void* asset);
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, uint32 numSounds);
void xSFXEnvironmentalStreamSceneExit();

// xSFXPlay__FP4xSFX
// Start address: 0x29efc0
void xSFXPlay(xSFX* t)
{
	st_PKR_ASSET_TOCINFO ainfo;
	xEnt* ent;
	// Line 462, Address: 0x29efc0, Func Offset: 0
	// Line 465, Address: 0x29efd4, Func Offset: 0x14
	// Line 467, Address: 0x29eff4, Func Offset: 0x34
	// Line 468, Address: 0x29f000, Func Offset: 0x40
	// Line 471, Address: 0x29f008, Func Offset: 0x48
	// Line 476, Address: 0x29f01c, Func Offset: 0x5c
	// Line 479, Address: 0x29f038, Func Offset: 0x78
	// Line 488, Address: 0x29f0ec, Func Offset: 0x12c
	// Line 489, Address: 0x29f0f4, Func Offset: 0x134
	// Line 490, Address: 0x29f0f8, Func Offset: 0x138
	// Line 492, Address: 0x29f104, Func Offset: 0x144
	// Line 493, Address: 0x29f10c, Func Offset: 0x14c
	// Line 496, Address: 0x29f120, Func Offset: 0x160
	// Line 498, Address: 0x29f128, Func Offset: 0x168
	// Line 499, Address: 0x29f138, Func Offset: 0x178
	// Line 508, Address: 0x29f1ec, Func Offset: 0x22c
	// Line 510, Address: 0x29f1fc, Func Offset: 0x23c
	// Line 520, Address: 0x29f2b0, Func Offset: 0x2f0
	// Line 522, Address: 0x29f2b8, Func Offset: 0x2f8
	// Line 533, Address: 0x29f36c, Func Offset: 0x3ac
	// Line 535, Address: 0x29f378, Func Offset: 0x3b8
	// Line 543, Address: 0x29f428, Func Offset: 0x468
	// Line 546, Address: 0x29f440, Func Offset: 0x480
	// Line 547, Address: 0x29f448, Func Offset: 0x488
	// Line 556, Address: 0x29f450, Func Offset: 0x490
	// Func End, Address: 0x29f464, Func Offset: 0x4a4
}

// xSFXEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29f470
int32 xSFXEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	xSFX* t;
	// Line 369, Address: 0x29f470, Func Offset: 0
	// Line 375, Address: 0x29f474, Func Offset: 0x4
	// Line 369, Address: 0x29f478, Func Offset: 0x8
	// Line 375, Address: 0x29f488, Func Offset: 0x18
	// Line 379, Address: 0x29f4c0, Func Offset: 0x50
	// Line 380, Address: 0x29f4cc, Func Offset: 0x5c
	// Line 387, Address: 0x29f4d4, Func Offset: 0x64
	// Line 390, Address: 0x29f4d8, Func Offset: 0x68
	// Line 393, Address: 0x29f4e8, Func Offset: 0x78
	// Line 395, Address: 0x29f4fc, Func Offset: 0x8c
	// Line 397, Address: 0x29f504, Func Offset: 0x94
	// Line 400, Address: 0x29f50c, Func Offset: 0x9c
	// Line 401, Address: 0x29f510, Func Offset: 0xa0
	// Line 404, Address: 0x29f568, Func Offset: 0xf8
	// Line 407, Address: 0x29f578, Func Offset: 0x108
	// Line 409, Address: 0x29f58c, Func Offset: 0x11c
	// Line 412, Address: 0x29f594, Func Offset: 0x124
	// Line 415, Address: 0x29f59c, Func Offset: 0x12c
	// Line 419, Address: 0x29f5a0, Func Offset: 0x130
	// Line 422, Address: 0x29f5ac, Func Offset: 0x13c
	// Line 425, Address: 0x29f5bc, Func Offset: 0x14c
	// Line 427, Address: 0x29f5d0, Func Offset: 0x160
	// Line 434, Address: 0x29f5d8, Func Offset: 0x168
	// Line 445, Address: 0x29f5e0, Func Offset: 0x170
	// Line 458, Address: 0x29f5f8, Func Offset: 0x188
	// Line 457, Address: 0x29f600, Func Offset: 0x190
	// Line 458, Address: 0x29f604, Func Offset: 0x194
	// Func End, Address: 0x29f610, Func Offset: 0x1a0
}

// xSFXLoad__FP4xSFXP7xSerial
// Start address: 0x29f610
void xSFXLoad(xSFX* ent, xSerial* s)
{
	// Line 296, Address: 0x29f610, Func Offset: 0
	// Func End, Address: 0x29f618, Func Offset: 0x8
}

// xSFXSave__FP4xSFXP7xSerial
// Start address: 0x29f620
void xSFXSave(xSFX* ent, xSerial* s)
{
	// Line 277, Address: 0x29f620, Func Offset: 0
	// Func End, Address: 0x29f628, Func Offset: 0x8
}

// xSFXInit__FPvPv
// Start address: 0x29f630
void xSFXInit(void* t, void* asset)
{
	// Line 230, Address: 0x29f630, Func Offset: 0
	// Line 231, Address: 0x29f644, Func Offset: 0x14
	// Line 232, Address: 0x29f71c, Func Offset: 0xec
	// Func End, Address: 0x29f730, Func Offset: 0x100
}

// xSFXUpdateEnvironmentalStreamSounds__FP4xSFXUi
// Start address: 0x29f730
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, uint32 numSounds)
{
	uint32 i;
	xVec3 playPos;
	xVec3 delta;
	uint32 j;
	uint32 j;
	uint32 j;
	uint8 found;
	uint32 j;
	uint32 j;
	xSFX* bestSFX[1];
	float32 bestDist2[1];
	// Line 50, Address: 0x29f730, Func Offset: 0
	// Line 53, Address: 0x29f760, Func Offset: 0x30
	// Line 50, Address: 0x29f764, Func Offset: 0x34
	// Line 53, Address: 0x29f768, Func Offset: 0x38
	// Line 55, Address: 0x29f778, Func Offset: 0x48
	// Line 56, Address: 0x29f7cc, Func Offset: 0x9c
	// Line 64, Address: 0x29f7e0, Func Offset: 0xb0
	// Line 65, Address: 0x29f7f0, Func Offset: 0xc0
	// Line 70, Address: 0x29f820, Func Offset: 0xf0
	// Line 74, Address: 0x29f82c, Func Offset: 0xfc
	// Line 79, Address: 0x29f834, Func Offset: 0x104
	// Line 80, Address: 0x29f83c, Func Offset: 0x10c
	// Line 82, Address: 0x29f8b0, Func Offset: 0x180
	// Line 81, Address: 0x29f8b4, Func Offset: 0x184
	// Line 82, Address: 0x29f8c4, Func Offset: 0x194
	// Line 86, Address: 0x29f8d0, Func Offset: 0x1a0
	// Line 89, Address: 0x29f8d8, Func Offset: 0x1a8
	// Line 91, Address: 0x29f8e8, Func Offset: 0x1b8
	// Line 92, Address: 0x29f8f0, Func Offset: 0x1c0
	// Line 91, Address: 0x29f8f4, Func Offset: 0x1c4
	// Line 92, Address: 0x29f8f8, Func Offset: 0x1c8
	// Line 93, Address: 0x29f8fc, Func Offset: 0x1cc
	// Line 95, Address: 0x29f904, Func Offset: 0x1d4
	// Line 98, Address: 0x29f914, Func Offset: 0x1e4
	// Line 101, Address: 0x29f928, Func Offset: 0x1f8
	// Line 103, Address: 0x29f944, Func Offset: 0x214
	// Line 104, Address: 0x29f94c, Func Offset: 0x21c
	// Line 103, Address: 0x29f950, Func Offset: 0x220
	// Line 104, Address: 0x29f954, Func Offset: 0x224
	// Line 105, Address: 0x29f958, Func Offset: 0x228
	// Line 107, Address: 0x29f960, Func Offset: 0x230
	// Line 111, Address: 0x29f96c, Func Offset: 0x23c
	// Line 114, Address: 0x29f978, Func Offset: 0x248
	// Line 117, Address: 0x29f9a0, Func Offset: 0x270
	// Line 118, Address: 0x29f9a8, Func Offset: 0x278
	// Line 117, Address: 0x29f9ac, Func Offset: 0x27c
	// Line 118, Address: 0x29f9b0, Func Offset: 0x280
	// Line 119, Address: 0x29f9b4, Func Offset: 0x284
	// Line 121, Address: 0x29f9bc, Func Offset: 0x28c
	// Line 119, Address: 0x29f9c4, Func Offset: 0x294
	// Line 121, Address: 0x29f9c8, Func Offset: 0x298
	// Line 124, Address: 0x29f9d0, Func Offset: 0x2a0
	// Line 130, Address: 0x29f9e4, Func Offset: 0x2b4
	// Line 129, Address: 0x29f9e8, Func Offset: 0x2b8
	// Line 130, Address: 0x29f9ec, Func Offset: 0x2bc
	// Line 132, Address: 0x29f9f8, Func Offset: 0x2c8
	// Line 134, Address: 0x29fa04, Func Offset: 0x2d4
	// Line 135, Address: 0x29fa10, Func Offset: 0x2e0
	// Line 136, Address: 0x29fa14, Func Offset: 0x2e4
	// Line 138, Address: 0x29fa1c, Func Offset: 0x2ec
	// Line 141, Address: 0x29fa30, Func Offset: 0x300
	// Line 146, Address: 0x29fa44, Func Offset: 0x314
	// Line 148, Address: 0x29fa50, Func Offset: 0x320
	// Line 150, Address: 0x29fa54, Func Offset: 0x324
	// Line 148, Address: 0x29fa58, Func Offset: 0x328
	// Line 157, Address: 0x29fa60, Func Offset: 0x330
	// Line 160, Address: 0x29fa68, Func Offset: 0x338
	// Line 162, Address: 0x29fa70, Func Offset: 0x340
	// Line 164, Address: 0x29fa7c, Func Offset: 0x34c
	// Line 165, Address: 0x29fa88, Func Offset: 0x358
	// Line 167, Address: 0x29fa90, Func Offset: 0x360
	// Line 170, Address: 0x29fa9c, Func Offset: 0x36c
	// Line 172, Address: 0x29faa0, Func Offset: 0x370
	// Line 203, Address: 0x29faa8, Func Offset: 0x378
	// Func End, Address: 0x29fad8, Func Offset: 0x3a8
}

// xSFXEnvironmentalStreamSceneExit__Fv
// Start address: 0x29fae0
void xSFXEnvironmentalStreamSceneExit()
{
	// Line 46, Address: 0x29fae0, Func Offset: 0
	// Func End, Address: 0x29faf0, Func Offset: 0x10
}

