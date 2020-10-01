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
typedef union _class_2;
typedef struct xSndVoiceInfo;

typedef void(*type_0)(xEnt*);
typedef void*(*type_1)(void*, u32, void*, u32, u32*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void*(*type_5)(void*, u32, void*, void*, u32, u32*);
typedef void(*type_6)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_7)(void*, u32, void*, s32);
typedef u32(*type_8)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_9)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void*(*type_10)(void*, u32, void*, s32*, s32*);
typedef s32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_12)(void*, u32, void*);
typedef void(*type_13)(xEnt*, xVec3*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef s32(*type_15)(RxNodeDefinition*);
typedef void(*type_16)(void*, u32);
typedef void(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(void*, u32, void*, s8*);
typedef s32(*type_21)(RxPipelineNode*);
typedef void(*type_22)(RxPipelineNode*);
typedef s32(*type_24)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_25)(u32);
typedef void(*type_27)(xEnt*, xScene*, f32, xEntCollis*);
typedef u32(*type_28)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s8*(*type_29)(xBase*);
typedef void(*type_31)(xEnt*, xVec3*, xMat4x3*);
typedef s8*(*type_32)(u32);
typedef s32(*type_33)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_34)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_40)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_49)(RpClump*, void*);
typedef s32(*type_51)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_57)(RwResEntry*);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, f32);
typedef void(*type_65)(xEnt*, xScene*, f32, xEntFrame*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);

typedef RwTexCoords* type_2[8];
typedef xVec3 type_4[4];
typedef xSFX* type_18[1];
typedef xSFX* type_19[1];
typedef xCollis type_23[18];
typedef f32 type_26[1];
typedef s8 type_30[4];
typedef f32 type_35[2];
typedef f32 type_36[5];
typedef xSndVoiceInfo type_37[48];
typedef u8 type_38[3];
typedef xMat4x3 type_39[2];
typedef f32 type_41[4];
typedef f32 type_42[2];
typedef u32 type_43[4];
typedef u16 type_44[3];
typedef u8 type_45[2];
typedef xAnimMultiFileEntry type_46[1];
typedef RpLight* type_47[2];
typedef RwFrame* type_48[2];
typedef u8 type_50[3];
typedef RwTexCoords* type_52[8];
typedef s8 type_54[32];
typedef xVec3 type_55[3];
typedef s8 type_56[32];
typedef s8 type_58[16];
typedef u16 type_59[3];
typedef s8 type_62[16];
typedef f32 type_63[16];
typedef RxCluster type_64[1];

struct xSurface : xBase
{
	u32 idx;
	u32 type;
	union
	{
		u32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	f32 friction;
	u8 state;
	type_50 pad;
	void* moprops;
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
	type_61 update;
	type_61 endUpdate;
	type_13 bupdate;
	type_65 move;
	type_0 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_31 transl;
	xFFX* ffx;
	xEnt* driver;
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_46 Files;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_54 name;
	type_56 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_63 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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

struct RpSector
{
	s32 type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_4 corner;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_57 destroyNotify;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_43 pad;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RpWorldSector
{
	s32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_52 texCoords;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_42 radius;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_47 light;
	type_48 light_frame;
	s32 memlvl;
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
	u32 sndID;
	f32 cachedOuterDistSquared;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
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

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	type_14 renderCallBack;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct xSFXAsset : xBaseAsset
{
	u16 flagsSFX;
	u16 freq;
	f32 freqm;
	u32 soundAssetID;
	u32 attachID;
	u8 loopCount;
	u8 priority;
	u8 volume;
	u8 pad;
	xVec3 pos;
	f32 innerRadius;
	f32 outerRadius;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_40 Conditional;
	type_40 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_51 eventFunc;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct rxReq
{
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
	type_3 BeforeEnter;
	type_6 StateCallback;
	type_9 BeforeAnimMatrices;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPHeader
{
	type_30 idtag;
	u32 version;
	u32 jspNodeCount;
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
	u32 ID;
	xAnimFile* File;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_41 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	type_23 colls;
	type_27 post;
	type_28 depenq;
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
	type_60 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
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
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_45 NumAnims;
	void** RawData;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_49 callback;
};

struct _class_0
{
	xVec3* verts;
};

struct iSndVol
{
	s16 volL;
	s16 volR;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_35 BilinearLerp;
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

struct tri_data
{
	u32 index;
	f32 r;
	f32 d;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xSndGlobals
{
	u32 stereo;
	u32 SndCount;
	type_36 categoryVolFader;
	type_37 voice;
	type_39 listenerMat;
	sound_listener_game_mode listenerMode;
	u32 suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
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
	type_25 resolvID;
	type_29 base2Name;
	type_32 id2Name;
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
	f32 r;
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

struct xAnimMultiFileBase
{
	u32 Count;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_34 Callback;
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

struct st_PKR_ASSET_TOCINFO
{
	u32 aid;
	st_PACKER_ASSETTYPE* typeref;
	u32 sector;
	u32 plus_offset;
	u32 size;
	void* mempos;
};

struct _class_1
{
	f32 t;
	f32 u;
	f32 v;
};

struct RpPolygon
{
	u16 matIndex;
	type_44 vertIndex;
};

struct xFFX
{
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
	type_9 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct st_PACKER_ASSETTYPE
{
	u32 typetag;
	u32 tflags;
	s32 typalign;
	type_1 readXForm;
	type_5 writeXForm;
	type_7 assetLoaded;
	type_10 makeData;
	type_12 cleanup;
	type_16 assetUnloaded;
	type_20 writePeek;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
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
	s8* name;
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

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
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
	type_2 texCoords;
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
	u32 reserved;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	u32 mode;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_53 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_15 nodeInit;
	type_17 nodeTerm;
	type_21 pipelineNodeInit;
	type_22 pipelineNodeTerm;
	type_24 pipelineNodeConfig;
	type_8 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xShadowSimplePoly
{
	type_55 vert;
	xVec3 norm;
};

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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpTriangle
{
	type_59 vertIndex;
	s16 matIndex;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_64 clusters;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct RwLinkList
{
	RwLLLink link;
};

struct iSndInfo
{
	u32 flags;
	iSndVol vol;
	u32 pitch;
	s32 lastStreamBuffer;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xBound
{
	xQCData qcd;
	u8 type;
	type_38 pad;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xSndVoiceInfo
{
	u32 assetID;
	u32 sndID;
	u32 parentID;
	xVec3* parentPos;
	s32 internalID;
	u32 flags;
	u16 pad;
	u16 priority;
	f32 vol;
	f32 pitch;
	u32 sample_rate;
	u32 deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	f32 innerRadius2;
	f32 outerRadius2;
	u32 lock_owner;
	iSndInfo ps;
};

type_58 buffer;
type_62 buffer;
type_18 s_managedEnvSFX;
type_33 xSFXEventCB;
xSndGlobals gSnd;

void xSFXPlay(xSFX* t);
s32 xSFXEventCB(xBase* to, u32 toEvent, f32* toParam);
void xSFXLoad(xSFX* ent, xSerial* s);
void xSFXSave(xSFX* ent, xSerial* s);
void xSFXInit(void* t, void* asset);
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, u32 numSounds);
void xSFXEnvironmentalStreamSceneExit();

// xSFXPlay__FP4xSFX
// Start address: 0x29efc0
void xSFXPlay(xSFX* t)
{
	st_PKR_ASSET_TOCINFO ainfo;
	xEnt* ent;
}

// xSFXEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29f470
s32 xSFXEventCB(xBase* to, u32 toEvent, f32* toParam)
{
	xSFX* t;
}

// xSFXLoad__FP4xSFXP7xSerial
// Start address: 0x29f610
void xSFXLoad(xSFX* ent, xSerial* s)
{
}

// xSFXSave__FP4xSFXP7xSerial
// Start address: 0x29f620
void xSFXSave(xSFX* ent, xSerial* s)
{
}

// xSFXInit__FPvPv
// Start address: 0x29f630
void xSFXInit(void* t, void* asset)
{
}

// xSFXUpdateEnvironmentalStreamSounds__FP4xSFXUi
// Start address: 0x29f730
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, u32 numSounds)
{
	u32 i;
	xVec3 playPos;
	xVec3 delta;
	u32 j;
	u32 j;
	u32 j;
	u8 found;
	u32 j;
	u32 j;
	type_19 bestSFX;
	type_26 bestDist2;
}

// xSFXEnvironmentalStreamSceneExit__Fv
// Start address: 0x29fae0
void xSFXEnvironmentalStreamSceneExit()
{
}

