typedef struct xVec3;
typedef struct RwObjectHasFrame;
typedef struct zGust;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef struct RxPipelineNode;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xBase;
typedef struct zGustAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct zVolume;
typedef struct xClumpCollBSPTriangle;
typedef struct xScene;
typedef struct xAnimMultiFile;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipelineCluster;
typedef struct xSerial;
typedef struct RxPipelineNodeParam;
typedef struct _tagEmitVolume;
typedef struct RxHeap;
typedef struct _class_0;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct zParEmitter;
typedef struct xLinkAsset;
typedef struct xEnt;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct rxHeapBlockHeader;
typedef struct xParGroup;
typedef struct xModelPool;
typedef struct xAnimTransitionList;
typedef struct RpMaterial;
typedef struct zGustData;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xParEmitterAsset;
typedef struct _class_1;
typedef struct xAnimTransition;
typedef struct xEntAsset;
typedef struct _tagEmitOffsetPoint;
typedef struct RpClump;
typedef struct xParEmitter;
typedef struct xParEmitterPropsAsset;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct RpWorldSector;
typedef struct RwSurfaceProperties;
typedef struct xParSys;
typedef struct RwMatrixTag;
typedef struct RpMorphTarget;
typedef struct xBound;
typedef struct iEnv;
typedef struct rxReq;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xEntFrame;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xLightKit;
typedef struct RpVertexNormal;
typedef struct xJSPNodeInfo;
typedef struct xAnimFile;
typedef struct xPEVCyl;
typedef struct xAnimSingle;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RpMeshHeader;
typedef struct xParInterp;
typedef struct xShadowSimplePoly;
typedef struct xMat4x3;
typedef struct RwResEntry;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xAnimMultiFileBase;
typedef struct xModelTag;
typedef struct xAnimEffect;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xJSPHeader;
typedef struct xPEEntBone;
typedef struct xSphere;
typedef struct xLightKitLight;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xGridBound;
typedef struct xShadowSimpleCache;
typedef struct xAnimPlay;
typedef struct xEntCollis;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPTree;
typedef struct xEnv;
typedef struct RpLight;
typedef struct xPECircle;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef struct xBaseAsset;
typedef struct xFFX;
typedef struct xMat3x3;
typedef struct xSurface;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpSector;
typedef struct RwObject;
typedef struct xModelBucket;
typedef struct RwLLLink;
typedef struct _tagEmitSphere;
typedef struct xVolume;
typedef struct RxIoSpec;
typedef struct xEntShadow;
typedef struct xMemPool;
typedef struct anim_coll_data;
typedef struct xVolumeAsset;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct _tagEmitRect;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xPEEntBound;
typedef struct RwRGBAReal;
typedef struct _tagEmitLine;
typedef struct RwLinkList;
typedef struct tri_data;
typedef struct _class_2;
typedef struct xParEmitterCustomSettings;

typedef RpWorldSector*(*type_0)(RpWorldSector*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef xBase*(*type_3)(uint32);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef int8*(*type_9)(xBase*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_12)(uint32);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_17)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef int32(*type_21)(RxPipelineNode*);
typedef RpClump*(*type_23)(RpClump*, void*);
typedef uint32(*type_25)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_32)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_34)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef uint32(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_38)(xEnt*, xVec3*);
typedef void(*type_40)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_41)(xEnt*);
typedef uint32(*type_46)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_47)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);
typedef int32(*type_61)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_5[3];
typedef int8 type_8[16];
typedef float32 type_11[2];
typedef uint16 type_13[3];
typedef int8 type_15[16];
typedef zGust* type_18[4];
typedef float32 type_20[4];
typedef float32 type_22[4];
typedef RwTexCoords* type_24[8];
typedef float32 type_26[2];
typedef xVec3 type_27[3];
typedef uint8 type_28[3];
typedef float32 type_29[2];
typedef uint8 type_30[3];
typedef uint16 type_31[3];
typedef int8 type_33[4];
typedef float32 type_39[16];
typedef uint8 type_42[2];
typedef xAnimMultiFileEntry type_43[1];
typedef float32 type_44[4];
typedef uint32 type_45[4];
typedef xVec3 type_48[4];
typedef xParInterp type_49[1];
typedef RwTexCoords* type_50[8];
typedef uint8 type_51[3];
typedef RpLight* type_52[2];
typedef RwFrame* type_54[2];
typedef int8 type_55[32];
typedef xCollis type_56[18];
typedef xParInterp type_57[4];
typedef int8 type_58[32];
typedef xParInterp type_59[4];
typedef RxCluster type_62[1];

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct zGust : xBase
{
	uint32 flags;
	zGustAsset* asset;
	zVolume* volume;
	zVolume* fx_volume;
	float32 debris_timer;
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
		_class_0 tuv;
		tri_data tri;
	};
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct zGustAsset : xBaseAsset
{
	uint32 flags;
	uint32 volumeID;
	uint32 effectID;
	xVec3 vel;
	float32 fade;
	float32 partMod;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xSerial
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
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

struct zParEmitter : xParEmitter
{
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xParGroup
{
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct zGustData
{
	uint32 gust_on;
	zGust* g[4];
	float32 lerp[4];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xParEmitterAsset : xBaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint16 pad;
	uint32 propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint32 cull_mode;
	float32 cull_dist_sqr;
};

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	uint8 rate_mode;
	float32 rate;
	float32 rate_time;
	float32 rate_fraction;
	float32 rate_fraction_cull;
	uint8 emit_flags;
	uint8 emit_pad[3];
	uint8 rot[3];
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		xParInterp value[1];
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	xParInterp color_birth[4];
	xParInterp color_death[4];
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xParSys
{
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct rxReq
{
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xPEEntBone
{
	uint8 flags;
	uint8 type;
	uint8 bone;
	uint8 pad1;
	xVec3 offset;
	float32 radius;
	float32 deflection;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xFFX
{
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

struct xSurface
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RpSector
{
	int32 type;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct anim_coll_data
{
};

struct xVolumeAsset : xBaseAsset
{
	uint32 flags;
	xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	uint8 rot[3];
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

int8 buffer[16];
int8 buffer[16];
zGust* gusts;
uint16 ngusts;
zParEmitter* sGustDustEmitter;
zParEmitter* sGustDebrisEmitter;
int32(*zGustEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

void zGustUpdateFX(float32 seconds);
void UpdateGustFX(zGust* g, float32 seconds);
int32 zGustEventCB(xBase* to, uint32 toEvent);
void zGustLoad(zGust* ent, xSerial* s);
void zGustSave(zGust* ent, xSerial* s);
void zGustUpdateEnt(xEnt* ent, float32 dt, void* gdata);
zGust* zGustGetGust(uint16 n);
void zGustSetup();
void zGustInit();

// zGustUpdateFX__Ff
// Start address: 0x17f090
void zGustUpdateFX(float32 seconds)
{
	int32 i;
	// Line 509, Address: 0x17f090, Func Offset: 0
	// Line 510, Address: 0x17f0a0, Func Offset: 0x10
	// Line 509, Address: 0x17f0a4, Func Offset: 0x14
	// Line 510, Address: 0x17f0a8, Func Offset: 0x18
	// Line 512, Address: 0x17f0c8, Func Offset: 0x38
	// Line 514, Address: 0x17f0d8, Func Offset: 0x48
	// Line 516, Address: 0x17f0e0, Func Offset: 0x50
	// Line 517, Address: 0x17f0f8, Func Offset: 0x68
	// Func End, Address: 0x17f110, Func Offset: 0x80
}

// UpdateGustFX__FP5zGustf
// Start address: 0x17f110
void UpdateGustFX(zGust* g, float32 seconds)
{
	xBBox* box;
	xParEmitterCustomSettings info;
	zParEmitter* e;
	int32 total_debris;
	int32 vol_area;
	int32 i;
	// Line 410, Address: 0x17f110, Func Offset: 0
	// Line 417, Address: 0x17f118, Func Offset: 0x8
	// Line 410, Address: 0x17f11c, Func Offset: 0xc
	// Line 417, Address: 0x17f144, Func Offset: 0x34
	// Line 421, Address: 0x17f158, Func Offset: 0x48
	// Line 422, Address: 0x17f160, Func Offset: 0x50
	// Line 433, Address: 0x17f16c, Func Offset: 0x5c
	// Line 434, Address: 0x17f18c, Func Offset: 0x7c
	// Line 438, Address: 0x17f1b4, Func Offset: 0xa4
	// Line 439, Address: 0x17f1c0, Func Offset: 0xb0
	// Line 440, Address: 0x17f1c8, Func Offset: 0xb8
	// Line 443, Address: 0x17f1d0, Func Offset: 0xc0
	// Line 444, Address: 0x17f1d4, Func Offset: 0xc4
	// Line 445, Address: 0x17f1e0, Func Offset: 0xd0
	// Line 446, Address: 0x17f1e8, Func Offset: 0xd8
	// Line 447, Address: 0x17f1f0, Func Offset: 0xe0
	// Line 449, Address: 0x17f1f8, Func Offset: 0xe8
	// Line 454, Address: 0x17f21c, Func Offset: 0x10c
	// Line 455, Address: 0x17f23c, Func Offset: 0x12c
	// Line 460, Address: 0x17f244, Func Offset: 0x134
	// Line 462, Address: 0x17f268, Func Offset: 0x158
	// Line 465, Address: 0x17f278, Func Offset: 0x168
	// Line 466, Address: 0x17f280, Func Offset: 0x170
	// Line 465, Address: 0x17f288, Func Offset: 0x178
	// Line 466, Address: 0x17f28c, Func Offset: 0x17c
	// Line 469, Address: 0x17f2a0, Func Offset: 0x190
	// Line 470, Address: 0x17f2c0, Func Offset: 0x1b0
	// Line 480, Address: 0x17f2d4, Func Offset: 0x1c4
	// Line 474, Address: 0x17f2d8, Func Offset: 0x1c8
	// Line 470, Address: 0x17f2dc, Func Offset: 0x1cc
	// Line 480, Address: 0x17f2e0, Func Offset: 0x1d0
	// Line 473, Address: 0x17f2e4, Func Offset: 0x1d4
	// Line 470, Address: 0x17f2e8, Func Offset: 0x1d8
	// Line 473, Address: 0x17f2f0, Func Offset: 0x1e0
	// Line 474, Address: 0x17f2f4, Func Offset: 0x1e4
	// Line 475, Address: 0x17f2f8, Func Offset: 0x1e8
	// Line 479, Address: 0x17f300, Func Offset: 0x1f0
	// Line 480, Address: 0x17f318, Func Offset: 0x208
	// Line 481, Address: 0x17f320, Func Offset: 0x210
	// Line 488, Address: 0x17f328, Func Offset: 0x218
	// Line 489, Address: 0x17f334, Func Offset: 0x224
	// Line 490, Address: 0x17f350, Func Offset: 0x240
	// Line 491, Address: 0x17f370, Func Offset: 0x260
	// Line 494, Address: 0x17f37c, Func Offset: 0x26c
	// Line 497, Address: 0x17f384, Func Offset: 0x274
	// Line 491, Address: 0x17f38c, Func Offset: 0x27c
	// Line 494, Address: 0x17f39c, Func Offset: 0x28c
	// Line 495, Address: 0x17f3b0, Func Offset: 0x2a0
	// Line 496, Address: 0x17f3c0, Func Offset: 0x2b0
	// Line 497, Address: 0x17f3d4, Func Offset: 0x2c4
	// Line 498, Address: 0x17f3e4, Func Offset: 0x2d4
	// Line 499, Address: 0x17f3e8, Func Offset: 0x2d8
	// Line 500, Address: 0x17f3ec, Func Offset: 0x2dc
	// Line 499, Address: 0x17f3fc, Func Offset: 0x2ec
	// Line 500, Address: 0x17f400, Func Offset: 0x2f0
	// Line 499, Address: 0x17f404, Func Offset: 0x2f4
	// Line 500, Address: 0x17f40c, Func Offset: 0x2fc
	// Line 501, Address: 0x17f414, Func Offset: 0x304
	// Line 503, Address: 0x17f424, Func Offset: 0x314
	// Line 504, Address: 0x17f428, Func Offset: 0x318
	// Func End, Address: 0x17f45c, Func Offset: 0x34c
}

// zGustEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x17f460
int32 zGustEventCB(xBase* to, uint32 toEvent)
{
	zGust* g;
	// Line 378, Address: 0x17f460, Func Offset: 0
	// Line 386, Address: 0x17f464, Func Offset: 0x4
	// Line 378, Address: 0x17f468, Func Offset: 0x8
	// Line 386, Address: 0x17f470, Func Offset: 0x10
	// Line 389, Address: 0x17f4a0, Func Offset: 0x40
	// Line 390, Address: 0x17f4b4, Func Offset: 0x54
	// Line 392, Address: 0x17f4bc, Func Offset: 0x5c
	// Line 393, Address: 0x17f4c0, Func Offset: 0x60
	// Line 394, Address: 0x17f4cc, Func Offset: 0x6c
	// Line 396, Address: 0x17f4d4, Func Offset: 0x74
	// Line 397, Address: 0x17f4d8, Func Offset: 0x78
	// Line 398, Address: 0x17f4ec, Func Offset: 0x8c
	// Line 400, Address: 0x17f4f4, Func Offset: 0x94
	// Line 401, Address: 0x17f4f8, Func Offset: 0x98
	// Line 405, Address: 0x17f510, Func Offset: 0xb0
	// Line 404, Address: 0x17f518, Func Offset: 0xb8
	// Line 405, Address: 0x17f51c, Func Offset: 0xbc
	// Func End, Address: 0x17f524, Func Offset: 0xc4
}

// zGustLoad__FP5zGustP7xSerial
// Start address: 0x17f530
void zGustLoad(zGust* ent, xSerial* s)
{
	// Line 347, Address: 0x17f530, Func Offset: 0
	// Func End, Address: 0x17f538, Func Offset: 0x8
}

// zGustSave__FP5zGustP7xSerial
// Start address: 0x17f540
void zGustSave(zGust* ent, xSerial* s)
{
	// Line 328, Address: 0x17f540, Func Offset: 0
	// Func End, Address: 0x17f548, Func Offset: 0x8
}

// zGustUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x17f550
void zGustUpdateEnt(xEnt* ent, float32 dt, void* gdata)
{
	uint32 i;
	uint32 j;
	uint32 minidx;
	float32 minlerp;
	zGustData* data;
	xCollis coll;
	float32 lerpinc;
	xVec3* gvel;
	xVec3 dpos;
	// Line 183, Address: 0x17f550, Func Offset: 0
	// Line 189, Address: 0x17f570, Func Offset: 0x20
	// Line 197, Address: 0x17f57c, Func Offset: 0x2c
	// Line 201, Address: 0x17f580, Func Offset: 0x30
	// Line 205, Address: 0x17f584, Func Offset: 0x34
	// Line 208, Address: 0x17f590, Func Offset: 0x40
	// Line 214, Address: 0x17f5b4, Func Offset: 0x64
	// Line 218, Address: 0x17f5cc, Func Offset: 0x7c
	// Line 219, Address: 0x17f5dc, Func Offset: 0x8c
	// Line 221, Address: 0x17f600, Func Offset: 0xb0
	// Line 223, Address: 0x17f618, Func Offset: 0xc8
	// Line 224, Address: 0x17f61c, Func Offset: 0xcc
	// Line 225, Address: 0x17f620, Func Offset: 0xd0
	// Line 231, Address: 0x17f634, Func Offset: 0xe4
	// Line 232, Address: 0x17f648, Func Offset: 0xf8
	// Line 233, Address: 0x17f654, Func Offset: 0x104
	// Line 234, Address: 0x17f66c, Func Offset: 0x11c
	// Line 233, Address: 0x17f674, Func Offset: 0x124
	// Line 236, Address: 0x17f67c, Func Offset: 0x12c
	// Line 237, Address: 0x17f688, Func Offset: 0x138
	// Line 239, Address: 0x17f6b0, Func Offset: 0x160
	// Line 240, Address: 0x17f6d4, Func Offset: 0x184
	// Line 241, Address: 0x17f6d8, Func Offset: 0x188
	// Line 249, Address: 0x17f6e0, Func Offset: 0x190
	// Line 251, Address: 0x17f6f4, Func Offset: 0x1a4
	// Line 254, Address: 0x17f710, Func Offset: 0x1c0
	// Line 257, Address: 0x17f720, Func Offset: 0x1d0
	// Line 261, Address: 0x17f734, Func Offset: 0x1e4
	// Line 266, Address: 0x17f744, Func Offset: 0x1f4
	// Line 267, Address: 0x17f758, Func Offset: 0x208
	// Line 271, Address: 0x17f768, Func Offset: 0x218
	// Line 276, Address: 0x17f770, Func Offset: 0x220
	// Line 277, Address: 0x17f774, Func Offset: 0x224
	// Line 276, Address: 0x17f778, Func Offset: 0x228
	// Line 277, Address: 0x17f780, Func Offset: 0x230
	// Line 280, Address: 0x17f78c, Func Offset: 0x23c
	// Line 281, Address: 0x17f794, Func Offset: 0x244
	// Line 284, Address: 0x17f7a4, Func Offset: 0x254
	// Line 287, Address: 0x17f7b0, Func Offset: 0x260
	// Line 288, Address: 0x17f7b8, Func Offset: 0x268
	// Line 294, Address: 0x17f7c8, Func Offset: 0x278
	// Line 295, Address: 0x17f7d4, Func Offset: 0x284
	// Line 296, Address: 0x17f7d8, Func Offset: 0x288
	// Line 299, Address: 0x17f7ec, Func Offset: 0x29c
	// Line 300, Address: 0x17f7f0, Func Offset: 0x2a0
	// Line 303, Address: 0x17f800, Func Offset: 0x2b0
	// Line 307, Address: 0x17f814, Func Offset: 0x2c4
	// Line 310, Address: 0x17f818, Func Offset: 0x2c8
	// Line 312, Address: 0x17f81c, Func Offset: 0x2cc
	// Line 310, Address: 0x17f820, Func Offset: 0x2d0
	// Line 312, Address: 0x17f828, Func Offset: 0x2d8
	// Line 313, Address: 0x17f840, Func Offset: 0x2f0
	// Line 312, Address: 0x17f844, Func Offset: 0x2f4
	// Line 313, Address: 0x17f858, Func Offset: 0x308
	// Line 314, Address: 0x17f88c, Func Offset: 0x33c
	// Line 315, Address: 0x17f8a4, Func Offset: 0x354
	// Func End, Address: 0x17f8c8, Func Offset: 0x378
}

// zGustGetGust__FUs
// Start address: 0x17f8d0
zGust* zGustGetGust(uint16 n)
{
	// Line 161, Address: 0x17f8d0, Func Offset: 0
	// Line 165, Address: 0x17f8d4, Func Offset: 0x4
	// Line 170, Address: 0x17f8f0, Func Offset: 0x20
	// Func End, Address: 0x17f8f8, Func Offset: 0x28
}

// zGustSetup__Fv
// Start address: 0x17f900
void zGustSetup()
{
	uint16 i;
	// Line 104, Address: 0x17f900, Func Offset: 0
	// Line 106, Address: 0x17f914, Func Offset: 0x14
	// Line 111, Address: 0x17f920, Func Offset: 0x20
	// Line 112, Address: 0x17f938, Func Offset: 0x38
	// Line 113, Address: 0x17f960, Func Offset: 0x60
	// Line 115, Address: 0x17f978, Func Offset: 0x78
	// Line 116, Address: 0x17f98c, Func Offset: 0x8c
	// Line 115, Address: 0x17f990, Func Offset: 0x90
	// Line 116, Address: 0x17f994, Func Offset: 0x94
	// Line 117, Address: 0x17f9a8, Func Offset: 0xa8
	// Func End, Address: 0x17f9c0, Func Offset: 0xc0
}

// zGustInit__Fv
// Start address: 0x17f9c0
void zGustInit()
{
	uint16 i;
	uint32 size;
	zGustAsset* asset;
	// Line 82, Address: 0x17f9c0, Func Offset: 0
	// Line 83, Address: 0x17f9c4, Func Offset: 0x4
	// Line 82, Address: 0x17f9c8, Func Offset: 0x8
	// Line 83, Address: 0x17f9cc, Func Offset: 0xc
	// Line 82, Address: 0x17f9d0, Func Offset: 0x10
	// Line 83, Address: 0x17f9dc, Func Offset: 0x1c
	// Line 86, Address: 0x17f9ec, Func Offset: 0x2c
	// Line 87, Address: 0x17f9f4, Func Offset: 0x34
	// Line 90, Address: 0x17fa10, Func Offset: 0x50
	// Line 92, Address: 0x17fa28, Func Offset: 0x68
	// Line 95, Address: 0x17fa40, Func Offset: 0x80
	// Line 96, Address: 0x17fa9c, Func Offset: 0xdc
	// Line 97, Address: 0x17fab4, Func Offset: 0xf4
	// Line 98, Address: 0x17fac0, Func Offset: 0x100
	// Line 99, Address: 0x17fac4, Func Offset: 0x104
	// Line 100, Address: 0x17fac8, Func Offset: 0x108
	// Func End, Address: 0x17fae4, Func Offset: 0x124
}

