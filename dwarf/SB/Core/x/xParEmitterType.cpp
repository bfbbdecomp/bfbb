typedef struct xParEmitterAsset;
typedef struct xGridBound;
typedef struct xMat4x3;
typedef struct xParEmitter;
typedef struct RwObjectHasFrame;
typedef struct RwMatrixTag;
typedef struct xEnt;
typedef struct xParCmd;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xParSys;
typedef struct xPar;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xParGroup;
typedef struct xBase;
typedef struct xEntCollis;
typedef struct RxNodeDefinition;
typedef struct xLinkAsset;
typedef struct xVolumeAsset;
typedef struct RpAtomic;
typedef struct RwTexture;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimFile;
typedef struct xParEmitterPropsAsset;
typedef struct xParCmdTex;
typedef struct xScene;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct xPEVCyl;
typedef struct RxPipelineNodeParam;
typedef struct tri_data;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xEntShadow;
typedef struct xQuat;
typedef struct xVec2;
typedef struct xParInterp;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xSurface;
typedef struct RpInterpolator;
typedef struct rxHeapBlockHeader;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct RxPipelineRequiresCluster;
typedef struct xFFX;
typedef struct xPEEntBone;
typedef struct xAnimPlay;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xAnimMultiFile;
typedef struct RwSurfaceProperties;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct rxReq;
typedef struct xParCmdAsset;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpClump;
typedef struct xPECircle;
typedef struct xVolume;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct xEnv;
typedef enum RxNodeDefEditable;
typedef struct RpMorphTarget;
typedef struct xCollis;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xEntFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitSphere;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xMemPool;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xShadowSimplePoly;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpTriangle;
typedef struct xBound;
typedef struct xBaseAsset;
typedef struct _tagEmitRect;
typedef struct _xMat2x2;
typedef struct xMat3x3;
typedef struct RwSphere;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct RwTexDictionary;
typedef struct RwResEntry;
typedef struct RxOutputSpec;
typedef struct xShadowSimpleCache;
typedef struct xPEEntBound;
typedef struct xAnimTransitionList;
typedef struct RxClusterRef;
typedef struct xModelTag;
typedef struct RpLight;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct _tagEmitLine;
typedef struct RxIoSpec;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct xModelBucket;
typedef struct _tagEmitVolume;
typedef struct RxCluster;
typedef struct xParSysAsset;
typedef struct RxPacket;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct _tagEmitOffsetPoint;

typedef xBase*(*type_0)(uint32);
typedef void(*type_1)(xEnt*, xScene*, float32, xEntCollis*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef uint32(*type_3)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_4)(RxPipelineNode*);
typedef int8*(*type_5)(xBase*);
typedef void(*type_6)(xEnt*, xVec3*, xMat4x3*);
typedef int8*(*type_7)(uint32);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(void*, xParGroup*);
typedef uint32(*type_12)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_15)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_21)(RxNodeDefinition*);
typedef void(*type_22)(RxNodeDefinition*);
typedef uint32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_24)(RxPipelineNode*);
typedef void(*type_28)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_29)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef void(*type_46)(xEnt*, xScene*, float32);
typedef void(*type_49)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_51)(xEnt*);
typedef void(*type_55)(xMemPool*, void*);
typedef void(*type_58)(RwResEntry*);

typedef uint8 type_9[3];
typedef int8 type_10[16];
typedef float32 type_13[2];
typedef float32 type_14[2];
typedef uint8 type_16[3];
typedef int8 type_17[16];
typedef uint8 type_19[3];
typedef float32 type_20[4];
typedef float32 type_25[2];
typedef uint8 type_26[2];
typedef xAnimMultiFileEntry type_27[1];
typedef uint8 type_31[4];
typedef xParInterp type_33[1];
typedef uint8 type_35[2];
typedef uint8 type_36[2];
typedef float32 type_37[3];
typedef uint8 type_38[3];
typedef xVec3 type_39[3];
typedef uint16 type_40[3];
typedef uint32 type_41[4];
typedef xParInterp type_43[4];
typedef float32 type_44[4];
typedef xParInterp type_45[4];
typedef float32 type_47[4];
typedef float32 type_48[16];
typedef RwTexCoords* type_52[8];
typedef float32 type_53[4];
typedef xVec3 type_54[4];
typedef int8 type_56[32];
typedef int8 type_57[32];
typedef RxCluster type_59[1];
typedef xCollis type_60[18];

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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;

	xVec3 __ml(xVec3& v);
	xVec3 __pl(float32 f);
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

struct xParSys : xBase
{
	xParSysAsset* tasset;
	uint32 cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	uint8 visible;
	RwTexture* txtr_particle;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	uint8 m_c[4];
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_texIdx[2];
	uint8 m_rotdeg[3];
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	float32 m_cvel[4];
	float32 m_cfl[4];
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_priority;
	uint8 m_flags;
	uint8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	void(*draw)(void*, xParGroup*);
	xParCmdTex* m_cmdTex;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct xVolumeAsset
{
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xParCmdTex : xParCmdAsset
{
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	uint8 birthMode;
	uint8 rows;
	uint8 cols;
	uint8 unit_count;
	float32 unit_width;
	float32 unit_height;
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

struct _class_0
{
	xVec3* verts;
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

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct xSurface
{
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xFFX
{
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

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct rxReq
{
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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

struct xEnv
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct _xMat2x2
{
	xVec2 right;
	xVec2 up;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct xParSysAsset : xBaseAsset
{
	uint32 type;
	uint32 parentParSysID;
	uint32 textureID;
	uint8 parFlags;
	uint8 priority;
	uint16 maxPar;
	uint8 renderFunc;
	uint8 renderSrcBlendMode;
	uint8 renderDstBlendMode;
	uint8 cmdCount;
	uint32 cmdSize;
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

struct anim_coll_data
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

int8 buffer[16];
int8 buffer[16];

void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent);
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, float32 dt, xMat4x3& mat);
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat);
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent);
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent);
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent);
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, float32 dt, xVolume* vol);
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, float32 dt, int32 subtype);
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt);
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, float32 dt);

// xParEmitterEmitEntBound__FP4xParP16xParEmitterAssetfPC4xEnt
// Start address: 0x2fe390
void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent)
{
	xPEEntBound& region;
	xMat4x3& mat;
	xVec3 offset;
	// Line 770, Address: 0x2fe390, Func Offset: 0
	// Line 771, Address: 0x2fe3b8, Func Offset: 0x28
	// Line 770, Address: 0x2fe3bc, Func Offset: 0x2c
	// Line 773, Address: 0x2fe3d0, Func Offset: 0x40
	// Line 776, Address: 0x2fe3d4, Func Offset: 0x44
	// Line 773, Address: 0x2fe3d8, Func Offset: 0x48
	// Line 776, Address: 0x2fe3dc, Func Offset: 0x4c
	// Line 777, Address: 0x2fe3ec, Func Offset: 0x5c
	// Line 776, Address: 0x2fe3f0, Func Offset: 0x60
	// Line 777, Address: 0x2fe3f4, Func Offset: 0x64
	// Line 776, Address: 0x2fe410, Func Offset: 0x80
	// Line 777, Address: 0x2fe414, Func Offset: 0x84
	// Line 778, Address: 0x2fe458, Func Offset: 0xc8
	// Line 781, Address: 0x2fe470, Func Offset: 0xe0
	// Line 782, Address: 0x2feacc, Func Offset: 0x73c
	// Line 785, Address: 0x2fead4, Func Offset: 0x744
	// Line 781, Address: 0x2fead8, Func Offset: 0x748
	// Line 782, Address: 0x2feaf0, Func Offset: 0x760
	// Line 785, Address: 0x2feb64, Func Offset: 0x7d4
	// Line 786, Address: 0x2feb70, Func Offset: 0x7e0
	// Line 789, Address: 0x2febf0, Func Offset: 0x860
	// Line 790, Address: 0x2febf4, Func Offset: 0x864
	// Line 789, Address: 0x2febfc, Func Offset: 0x86c
	// Line 790, Address: 0x2fec1c, Func Offset: 0x88c
	// Line 791, Address: 0x2fecf8, Func Offset: 0x968
	// Func End, Address: 0x2fed2c, Func Offset: 0x99c
}

// xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3
// Start address: 0x2fee80
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, float32 dt, xMat4x3& mat)
{
	xPEEntBone& region;
	xVec3 offset;
	// Line 751, Address: 0x2fee80, Func Offset: 0
	// Line 755, Address: 0x2feea8, Func Offset: 0x28
	// Line 751, Address: 0x2feeac, Func Offset: 0x2c
	// Line 758, Address: 0x2feebc, Func Offset: 0x3c
	// Line 762, Address: 0x2ff3b4, Func Offset: 0x534
	// Line 758, Address: 0x2ff3b8, Func Offset: 0x538
	// Line 759, Address: 0x2ff3d0, Func Offset: 0x550
	// Line 762, Address: 0x2ff404, Func Offset: 0x584
	// Line 763, Address: 0x2ff410, Func Offset: 0x590
	// Line 766, Address: 0x2ff4c8, Func Offset: 0x648
	// Line 767, Address: 0x2ff5b0, Func Offset: 0x730
	// Func End, Address: 0x2ff5e0, Func Offset: 0x760
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3
// Start address: 0x2ff5e0
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat)
{
	// Line 746, Address: 0x2ff5e0, Func Offset: 0
	// Line 747, Address: 0x2ff5fc, Func Offset: 0x1c
	// Line 748, Address: 0x2ff708, Func Offset: 0x128
	// Func End, Address: 0x2ff720, Func Offset: 0x140
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC4xEnt
// Start address: 0x2ff720
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent)
{
	xMat4x3& root_mat;
	xMat4x3* mat;
	xMat4x3 buffer_mat;
	// Line 723, Address: 0x2ff720, Func Offset: 0
	// Line 729, Address: 0x2ff748, Func Offset: 0x28
	// Line 723, Address: 0x2ff74c, Func Offset: 0x2c
	// Line 732, Address: 0x2ff750, Func Offset: 0x30
	// Line 736, Address: 0x2ff760, Func Offset: 0x40
	// Line 737, Address: 0x2ff778, Func Offset: 0x58
	// Line 740, Address: 0x2ff780, Func Offset: 0x60
	// Line 741, Address: 0x2ff888, Func Offset: 0x168
	// Line 742, Address: 0x2ff88c, Func Offset: 0x16c
	// Func End, Address: 0x2ff8ac, Func Offset: 0x18c
}

// xParEmitterEmitOCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x2ff8b0
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rr;
	// Line 520, Address: 0x2ff8b0, Func Offset: 0
	// Line 524, Address: 0x2ff8d4, Func Offset: 0x24
	// Line 525, Address: 0x2ff8dc, Func Offset: 0x2c
	// Line 526, Address: 0x2ff8e4, Func Offset: 0x34
	// Line 525, Address: 0x2ff8ec, Func Offset: 0x3c
	// Line 526, Address: 0x2ff8f0, Func Offset: 0x40
	// Line 525, Address: 0x2ff8f4, Func Offset: 0x44
	// Line 526, Address: 0x2ff8f8, Func Offset: 0x48
	// Line 527, Address: 0x2ff9ec, Func Offset: 0x13c
	// Func End, Address: 0x2ffa0c, Func Offset: 0x15c
}

// xParEmitterEmitOCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffa10
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	// Line 513, Address: 0x2ffa10, Func Offset: 0
	// Line 516, Address: 0x2ffa30, Func Offset: 0x20
	// Line 513, Address: 0x2ffa34, Func Offset: 0x24
	// Line 516, Address: 0x2ffa38, Func Offset: 0x28
	// Line 517, Address: 0x2ffb34, Func Offset: 0x124
	// Func End, Address: 0x2ffb54, Func Offset: 0x144
}

// xParEmitterEmitVCylEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffb60
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 ang;
	xVec2 dir;
	xVec2 offset;
	float32 deflect;
	// Line 455, Address: 0x2ffb60, Func Offset: 0
	// Line 456, Address: 0x2ffb84, Func Offset: 0x24
	// Line 458, Address: 0x2ffba8, Func Offset: 0x48
	// Line 459, Address: 0x2ffbb4, Func Offset: 0x54
	// Line 458, Address: 0x2ffbb8, Func Offset: 0x58
	// Line 459, Address: 0x2ffbc0, Func Offset: 0x60
	// Line 460, Address: 0x2ffbfc, Func Offset: 0x9c
	// Line 462, Address: 0x2ffc34, Func Offset: 0xd4
	// Line 463, Address: 0x2ffc40, Func Offset: 0xe0
	// Line 470, Address: 0x2ffc50, Func Offset: 0xf0
	// Line 463, Address: 0x2ffc58, Func Offset: 0xf8
	// Line 464, Address: 0x2ffc68, Func Offset: 0x108
	// Line 466, Address: 0x2ffc74, Func Offset: 0x114
	// Line 467, Address: 0x2ffc78, Func Offset: 0x118
	// Line 466, Address: 0x2ffc80, Func Offset: 0x120
	// Line 467, Address: 0x2ffc84, Func Offset: 0x124
	// Line 468, Address: 0x2ffc90, Func Offset: 0x130
	// Line 470, Address: 0x2ffca0, Func Offset: 0x140
	// Line 471, Address: 0x2ffd80, Func Offset: 0x220
	// Func End, Address: 0x2ffda0, Func Offset: 0x240
}

// xParEmitterEmitOffsetPoint__FP11xParEmitterP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2ffda0
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent)
{
	// Line 434, Address: 0x2ffda0, Func Offset: 0
	// Line 442, Address: 0x2ffdc0, Func Offset: 0x20
	// Line 445, Address: 0x2ffdd0, Func Offset: 0x30
	// Line 446, Address: 0x2ffde4, Func Offset: 0x44
	// Line 447, Address: 0x2ffdf4, Func Offset: 0x54
	// Line 448, Address: 0x2ffe00, Func Offset: 0x60
	// Line 450, Address: 0x2ffe30, Func Offset: 0x90
	// Line 452, Address: 0x2fff18, Func Offset: 0x178
	// Func End, Address: 0x2fff34, Func Offset: 0x194
}

// xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2fff40
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, float32 dt, xEnt* ent)
{
	uint32 size;
	xModelInstance* model;
	xVec3 loc;
	uint32 which;
	xModelInstance* model;
	uint32 size;
	// Line 389, Address: 0x2fff40, Func Offset: 0
	// Line 394, Address: 0x2fff68, Func Offset: 0x28
	// Line 395, Address: 0x2fff6c, Func Offset: 0x2c
	// Line 397, Address: 0x2fff78, Func Offset: 0x38
	// Line 402, Address: 0x2fff88, Func Offset: 0x48
	// Line 403, Address: 0x2fff98, Func Offset: 0x58
	// Line 408, Address: 0x2fffa8, Func Offset: 0x68
	// Line 409, Address: 0x2fffb4, Func Offset: 0x74
	// Line 408, Address: 0x2fffb8, Func Offset: 0x78
	// Line 409, Address: 0x2fffc8, Func Offset: 0x88
	// Line 411, Address: 0x2fffd0, Func Offset: 0x90
	// Line 413, Address: 0x2fffe4, Func Offset: 0xa4
	// Line 414, Address: 0x2fffec, Func Offset: 0xac
	// Line 416, Address: 0x2ffff8, Func Offset: 0xb8
	// Line 417, Address: 0x30000c, Func Offset: 0xcc
	// Line 418, Address: 0x300014, Func Offset: 0xd4
	// Line 419, Address: 0x300018, Func Offset: 0xd8
	// Line 420, Address: 0x30001c, Func Offset: 0xdc
	// Line 423, Address: 0x300030, Func Offset: 0xf0
	// Line 422, Address: 0x300034, Func Offset: 0xf4
	// Line 423, Address: 0x300038, Func Offset: 0xf8
	// Line 424, Address: 0x30003c, Func Offset: 0xfc
	// Line 422, Address: 0x300044, Func Offset: 0x104
	// Line 423, Address: 0x300058, Func Offset: 0x118
	// Line 424, Address: 0x3000bc, Func Offset: 0x17c
	// Line 425, Address: 0x300198, Func Offset: 0x258
	// Func End, Address: 0x3001b8, Func Offset: 0x278
}

// xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume
// Start address: 0x3001c0
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, float32 dt, xVolume* vol)
{
	xBound* b;
	// Line 342, Address: 0x3001c0, Func Offset: 0
	// Line 346, Address: 0x3001e8, Func Offset: 0x28
	// Line 347, Address: 0x300200, Func Offset: 0x40
	// Line 349, Address: 0x300220, Func Offset: 0x60
	// Line 359, Address: 0x300228, Func Offset: 0x68
	// Line 362, Address: 0x300230, Func Offset: 0x70
	// Line 365, Address: 0x300240, Func Offset: 0x80
	// Line 367, Address: 0x300260, Func Offset: 0xa0
	// Line 368, Address: 0x300268, Func Offset: 0xa8
	// Line 369, Address: 0x300270, Func Offset: 0xb0
	// Line 371, Address: 0x30027c, Func Offset: 0xbc
	// Line 381, Address: 0x3002a0, Func Offset: 0xe0
	// Line 382, Address: 0x300388, Func Offset: 0x1c8
	// Func End, Address: 0x3003ac, Func Offset: 0x1ec
}

// xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi
// Start address: 0x3003b0
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, float32 dt, int32 subtype)
{
	xVec3 dirvec;
	xVec3 offset;
	xMat3x3 mat_rot;
	// Line 292, Address: 0x3003b0, Func Offset: 0
	// Line 296, Address: 0x3003b4, Func Offset: 0x4
	// Line 292, Address: 0x3003b8, Func Offset: 0x8
	// Line 296, Address: 0x3003bc, Func Offset: 0xc
	// Line 292, Address: 0x3003c0, Func Offset: 0x10
	// Line 296, Address: 0x3003c4, Func Offset: 0x14
	// Line 292, Address: 0x3003c8, Func Offset: 0x18
	// Line 297, Address: 0x3003e0, Func Offset: 0x30
	// Line 296, Address: 0x3003e4, Func Offset: 0x34
	// Line 297, Address: 0x3003f0, Func Offset: 0x40
	// Line 298, Address: 0x300414, Func Offset: 0x64
	// Line 302, Address: 0x300438, Func Offset: 0x88
	// Line 305, Address: 0x30043c, Func Offset: 0x8c
	// Line 302, Address: 0x300440, Func Offset: 0x90
	// Line 303, Address: 0x300454, Func Offset: 0xa4
	// Line 305, Address: 0x300474, Func Offset: 0xc4
	// Line 308, Address: 0x300498, Func Offset: 0xe8
	// Line 309, Address: 0x3004e8, Func Offset: 0x138
	// Line 311, Address: 0x3004f0, Func Offset: 0x140
	// Line 312, Address: 0x300530, Func Offset: 0x180
	// Line 315, Address: 0x300538, Func Offset: 0x188
	// Line 320, Address: 0x300574, Func Offset: 0x1c4
	// Line 322, Address: 0x300578, Func Offset: 0x1c8
	// Line 333, Address: 0x300584, Func Offset: 0x1d4
	// Line 322, Address: 0x300588, Func Offset: 0x1d8
	// Line 326, Address: 0x3005a0, Func Offset: 0x1f0
	// Line 325, Address: 0x3005a4, Func Offset: 0x1f4
	// Line 326, Address: 0x3005b8, Func Offset: 0x208
	// Line 329, Address: 0x3005d8, Func Offset: 0x228
	// Line 330, Address: 0x3005f8, Func Offset: 0x248
	// Line 333, Address: 0x300628, Func Offset: 0x278
	// Line 336, Address: 0x300708, Func Offset: 0x358
	// Func End, Address: 0x300728, Func Offset: 0x378
}

// xParEmitterEmitSphere__FP4xParP16xParEmitterAssetf
// Start address: 0x300730
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 yaw;
	float32 pitch;
	xVec3 dir;
	// Line 272, Address: 0x300730, Func Offset: 0
	// Line 276, Address: 0x300738, Func Offset: 0x8
	// Line 272, Address: 0x30073c, Func Offset: 0xc
	// Line 276, Address: 0x300740, Func Offset: 0x10
	// Line 272, Address: 0x300744, Func Offset: 0x14
	// Line 276, Address: 0x300760, Func Offset: 0x30
	// Line 279, Address: 0x3007c0, Func Offset: 0x90
	// Line 280, Address: 0x3007e8, Func Offset: 0xb8
	// Line 281, Address: 0x300818, Func Offset: 0xe8
	// Line 282, Address: 0x300850, Func Offset: 0x120
	// Line 284, Address: 0x30086c, Func Offset: 0x13c
	// Line 282, Address: 0x300874, Func Offset: 0x144
	// Line 284, Address: 0x3008e8, Func Offset: 0x1b8
	// Line 285, Address: 0x3009c8, Func Offset: 0x298
	// Func End, Address: 0x3009ec, Func Offset: 0x2bc
}

// xParEmitterEmitLine__FP4xParP16xParEmitterAssetf
// Start address: 0x3009f0
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, float32 dt)
{
	xVec3 vec;
	float32 len;
	float32 rand_len;
	float32 yaw;
	float32 pitch;
	xVec3 dir;
	float32 rr;
	// Line 231, Address: 0x3009f0, Func Offset: 0
	// Line 243, Address: 0x300a00, Func Offset: 0x10
	// Line 231, Address: 0x300a04, Func Offset: 0x14
	// Line 243, Address: 0x300a08, Func Offset: 0x18
	// Line 231, Address: 0x300a0c, Func Offset: 0x1c
	// Line 235, Address: 0x300a24, Func Offset: 0x34
	// Line 236, Address: 0x300a3c, Func Offset: 0x4c
	// Line 243, Address: 0x300a60, Func Offset: 0x70
	// Line 244, Address: 0x300a64, Func Offset: 0x74
	// Line 243, Address: 0x300a68, Func Offset: 0x78
	// Line 244, Address: 0x300a90, Func Offset: 0xa0
	// Line 246, Address: 0x300a9c, Func Offset: 0xac
	// Line 247, Address: 0x300aa4, Func Offset: 0xb4
	// Line 246, Address: 0x300aa8, Func Offset: 0xb8
	// Line 247, Address: 0x300aac, Func Offset: 0xbc
	// Line 248, Address: 0x300abc, Func Offset: 0xcc
	// Line 251, Address: 0x300ac4, Func Offset: 0xd4
	// Line 248, Address: 0x300acc, Func Offset: 0xdc
	// Line 249, Address: 0x300ad8, Func Offset: 0xe8
	// Line 251, Address: 0x300aec, Func Offset: 0xfc
	// Line 253, Address: 0x300afc, Func Offset: 0x10c
	// Line 254, Address: 0x300b24, Func Offset: 0x134
	// Line 255, Address: 0x300b54, Func Offset: 0x164
	// Line 257, Address: 0x300b8c, Func Offset: 0x19c
	// Line 258, Address: 0x300b94, Func Offset: 0x1a4
	// Line 259, Address: 0x300b98, Func Offset: 0x1a8
	// Line 258, Address: 0x300ba0, Func Offset: 0x1b0
	// Line 259, Address: 0x300ba4, Func Offset: 0x1b4
	// Line 258, Address: 0x300ba8, Func Offset: 0x1b8
	// Line 259, Address: 0x300bac, Func Offset: 0x1bc
	// Line 258, Address: 0x300bb4, Func Offset: 0x1c4
	// Line 259, Address: 0x300bc0, Func Offset: 0x1d0
	// Line 260, Address: 0x300c34, Func Offset: 0x244
	// Line 262, Address: 0x300c38, Func Offset: 0x248
	// Line 265, Address: 0x300d20, Func Offset: 0x330
	// Func End, Address: 0x300d48, Func Offset: 0x358
}

// xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x300d50
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rand;
	// Line 199, Address: 0x300d50, Func Offset: 0
	// Line 203, Address: 0x300d70, Func Offset: 0x20
	// Line 204, Address: 0x300d88, Func Offset: 0x38
	// Line 206, Address: 0x300da8, Func Offset: 0x58
	// Line 210, Address: 0x300db4, Func Offset: 0x64
	// Line 211, Address: 0x300dd4, Func Offset: 0x84
	// Line 213, Address: 0x300de8, Func Offset: 0x98
	// Line 216, Address: 0x300df8, Func Offset: 0xa8
	// Line 218, Address: 0x300e04, Func Offset: 0xb4
	// Line 219, Address: 0x300e24, Func Offset: 0xd4
	// Line 221, Address: 0x300e38, Func Offset: 0xe8
	// Line 223, Address: 0x300e48, Func Offset: 0xf8
	// Line 225, Address: 0x300f30, Func Offset: 0x1e0
	// Func End, Address: 0x300f4c, Func Offset: 0x1fc
}

// xParEmitterEmitRect__FP4xParP16xParEmitterAssetf
// Start address: 0x300f50
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, float32 dt)
{
	// Line 182, Address: 0x300f50, Func Offset: 0
	// Line 185, Address: 0x300f6c, Func Offset: 0x1c
	// Line 186, Address: 0x300f84, Func Offset: 0x34
	// Line 189, Address: 0x300fac, Func Offset: 0x5c
	// Line 190, Address: 0x300fd4, Func Offset: 0x84
	// Line 192, Address: 0x300ffc, Func Offset: 0xac
	// Line 193, Address: 0x3010e0, Func Offset: 0x190
	// Func End, Address: 0x3010fc, Func Offset: 0x1ac
}

// xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x301100
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	float32 rr;
	float32 dt_radius;
	// Line 136, Address: 0x301100, Func Offset: 0
	// Line 140, Address: 0x301130, Func Offset: 0x30
	// Line 141, Address: 0x30114c, Func Offset: 0x4c
	// Line 145, Address: 0x30116c, Func Offset: 0x6c
	// Line 148, Address: 0x301188, Func Offset: 0x88
	// Line 149, Address: 0x301190, Func Offset: 0x90
	// Line 150, Address: 0x30119c, Func Offset: 0x9c
	// Line 156, Address: 0x3011a8, Func Offset: 0xa8
	// Line 150, Address: 0x3011ac, Func Offset: 0xac
	// Line 152, Address: 0x3011b0, Func Offset: 0xb0
	// Line 150, Address: 0x3011b4, Func Offset: 0xb4
	// Line 156, Address: 0x3011b8, Func Offset: 0xb8
	// Line 152, Address: 0x3011bc, Func Offset: 0xbc
	// Line 151, Address: 0x3011c0, Func Offset: 0xc0
	// Line 152, Address: 0x3011c4, Func Offset: 0xc4
	// Line 151, Address: 0x3011c8, Func Offset: 0xc8
	// Line 157, Address: 0x3011cc, Func Offset: 0xcc
	// Line 158, Address: 0x3011d4, Func Offset: 0xd4
	// Line 159, Address: 0x3011e0, Func Offset: 0xe0
	// Line 158, Address: 0x3011e4, Func Offset: 0xe4
	// Line 161, Address: 0x3011e8, Func Offset: 0xe8
	// Line 159, Address: 0x3011f0, Func Offset: 0xf0
	// Line 161, Address: 0x3011f4, Func Offset: 0xf4
	// Line 159, Address: 0x3011fc, Func Offset: 0xfc
	// Line 162, Address: 0x301200, Func Offset: 0x100
	// Line 166, Address: 0x301208, Func Offset: 0x108
	// Line 161, Address: 0x301210, Func Offset: 0x110
	// Line 163, Address: 0x301214, Func Offset: 0x114
	// Line 162, Address: 0x301218, Func Offset: 0x118
	// Line 163, Address: 0x301220, Func Offset: 0x120
	// Line 164, Address: 0x301228, Func Offset: 0x128
	// Line 166, Address: 0x301234, Func Offset: 0x134
	// Line 170, Address: 0x301314, Func Offset: 0x214
	// Line 172, Address: 0x301328, Func Offset: 0x228
	// Line 173, Address: 0x30132c, Func Offset: 0x22c
	// Line 172, Address: 0x301330, Func Offset: 0x230
	// Line 173, Address: 0x301338, Func Offset: 0x238
	// Line 174, Address: 0x301344, Func Offset: 0x244
	// Line 175, Address: 0x301354, Func Offset: 0x254
	// Line 176, Address: 0x301358, Func Offset: 0x258
	// Func End, Address: 0x301384, Func Offset: 0x284
}

// xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x301390
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, float32 dt)
{
	float32 rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	float32 dt_radius;
	// Line 88, Address: 0x301390, Func Offset: 0
	// Line 92, Address: 0x3013c0, Func Offset: 0x30
	// Line 93, Address: 0x3013dc, Func Offset: 0x4c
	// Line 97, Address: 0x3013fc, Func Offset: 0x6c
	// Line 100, Address: 0x301418, Func Offset: 0x88
	// Line 101, Address: 0x301420, Func Offset: 0x90
	// Line 102, Address: 0x30142c, Func Offset: 0x9c
	// Line 108, Address: 0x301438, Func Offset: 0xa8
	// Line 102, Address: 0x30143c, Func Offset: 0xac
	// Line 104, Address: 0x301440, Func Offset: 0xb0
	// Line 118, Address: 0x301444, Func Offset: 0xb4
	// Line 102, Address: 0x301448, Func Offset: 0xb8
	// Line 108, Address: 0x30144c, Func Offset: 0xbc
	// Line 103, Address: 0x301450, Func Offset: 0xc0
	// Line 104, Address: 0x301454, Func Offset: 0xc4
	// Line 103, Address: 0x301458, Func Offset: 0xc8
	// Line 104, Address: 0x30145c, Func Offset: 0xcc
	// Line 108, Address: 0x301460, Func Offset: 0xd0
	// Line 110, Address: 0x301464, Func Offset: 0xd4
	// Line 108, Address: 0x30146c, Func Offset: 0xdc
	// Line 110, Address: 0x301470, Func Offset: 0xe0
	// Line 114, Address: 0x301478, Func Offset: 0xe8
	// Line 112, Address: 0x30147c, Func Offset: 0xec
	// Line 110, Address: 0x301480, Func Offset: 0xf0
	// Line 112, Address: 0x301484, Func Offset: 0xf4
	// Line 110, Address: 0x301488, Func Offset: 0xf8
	// Line 111, Address: 0x30148c, Func Offset: 0xfc
	// Line 114, Address: 0x301490, Func Offset: 0x100
	// Line 112, Address: 0x301494, Func Offset: 0x104
	// Line 114, Address: 0x301498, Func Offset: 0x108
	// Line 112, Address: 0x30149c, Func Offset: 0x10c
	// Line 115, Address: 0x3014a0, Func Offset: 0x110
	// Line 113, Address: 0x3014a4, Func Offset: 0x114
	// Line 115, Address: 0x3014a8, Func Offset: 0x118
	// Line 118, Address: 0x3014b0, Func Offset: 0x120
	// Line 122, Address: 0x301594, Func Offset: 0x204
	// Line 124, Address: 0x3015a8, Func Offset: 0x218
	// Line 125, Address: 0x3015ac, Func Offset: 0x21c
	// Line 124, Address: 0x3015b0, Func Offset: 0x220
	// Line 125, Address: 0x3015b8, Func Offset: 0x228
	// Line 126, Address: 0x3015c4, Func Offset: 0x234
	// Line 127, Address: 0x3015d4, Func Offset: 0x244
	// Line 128, Address: 0x3015d8, Func Offset: 0x248
	// Func End, Address: 0x301604, Func Offset: 0x274
}

// xParEmitterAngleVariation__FP4xParP16xParEmitterAsset
// Start address: 0x301610
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a)
{
	xMat3x3 mat_rot;
	float32 ang_debrisCone;
	float32 ang[3];
	// Line 59, Address: 0x301610, Func Offset: 0
	// Line 60, Address: 0x301618, Func Offset: 0x8
	// Line 59, Address: 0x30161c, Func Offset: 0xc
	// Line 60, Address: 0x30162c, Func Offset: 0x1c
	// Line 62, Address: 0x30163c, Func Offset: 0x2c
	// Line 64, Address: 0x301660, Func Offset: 0x50
	// Line 65, Address: 0x301664, Func Offset: 0x54
	// Line 71, Address: 0x301688, Func Offset: 0x78
	// Line 72, Address: 0x3016a8, Func Offset: 0x98
	// Line 73, Address: 0x3016c8, Func Offset: 0xb8
	// Line 75, Address: 0x3016e8, Func Offset: 0xd8
	// Line 77, Address: 0x3016fc, Func Offset: 0xec
	// Line 78, Address: 0x30170c, Func Offset: 0xfc
	// Line 79, Address: 0x301710, Func Offset: 0x100
	// Func End, Address: 0x30172c, Func Offset: 0x11c
}

// xParEmitterEmitPoint__FP4xParP16xParEmitterAssetf
// Start address: 0x301730
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, float32 dt)
{
	// Line 45, Address: 0x301730, Func Offset: 0
	// Line 51, Address: 0x301738, Func Offset: 0x8
	// Line 45, Address: 0x30173c, Func Offset: 0xc
	// Line 48, Address: 0x30174c, Func Offset: 0x1c
	// Line 49, Address: 0x301764, Func Offset: 0x34
	// Line 51, Address: 0x301788, Func Offset: 0x58
	// Line 52, Address: 0x301868, Func Offset: 0x138
	// Func End, Address: 0x301884, Func Offset: 0x154
}

