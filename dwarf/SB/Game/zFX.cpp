typedef struct zEnt;
typedef struct xShadowSimplePoly;
typedef struct RwRGBA;
typedef struct popper_data;
typedef struct xAnimState;
typedef struct _class_0;
typedef struct RxHeap;
typedef struct RpSkin;
typedef struct RwBBox;
typedef struct xVec3;
typedef struct entrail_data;
typedef struct zPlatform;
typedef struct xModelInstance;
typedef struct _class_1;
typedef struct _tagEmitOffsetPoint;
typedef struct RxPipelineNode;
typedef struct xAnimEffect;
typedef struct zFXGooInstance;
typedef struct xEntCollis;
typedef struct xQuat;
typedef struct xFXRing;
typedef struct xMat4x3;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEnt;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorld;
typedef struct rxHeapBlockHeader;
typedef struct zCutsceneMgr;
typedef struct tri_data_0;
typedef enum RpWorldRenderOrder;
typedef struct RpAtomic;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct xUpdateCullMgr;
typedef struct RpGeometry;
typedef struct _tagiPad;
typedef struct xBound;
typedef struct xAnimFile;
typedef struct xBase;
typedef struct RxPipelineRequiresCluster;
typedef struct RpTriangle;
typedef struct xLightKit;
typedef struct zAssetPickupTable;
typedef struct xLightKitLight;
typedef struct RxPipeline;
typedef struct RwTexture;
typedef struct xCollis;
typedef struct _class_2;
typedef struct tri_data_1;
typedef struct RpSector;
typedef struct xAnimTransition;
typedef struct xScene;
typedef struct xEnv;
typedef struct xAnimTransitionList;
typedef struct xShadowSimpleCache;
typedef struct xEntBoulder;
typedef struct _class_3;
typedef struct xParSys;
typedef struct xPEVCyl;
typedef struct RpMeshHeader;
typedef struct xQCData;
typedef struct RwResEntry;
typedef struct xClumpCollBSPTree;
typedef struct xModelPool;
typedef struct asset_type;
typedef struct xParInterp;
typedef struct RpWorldSector;
typedef struct xVec4;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xEntFrame;
typedef struct RpLight;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPVertInfo;
typedef struct rxReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct xModelTag;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTriangle;
typedef struct ztextbox;
typedef struct xParGroup;
typedef struct xAnimMultiFile;
typedef struct xPEEntBone;
typedef struct _class_4;
typedef struct _class_5;
typedef struct _tagxRumble;
typedef struct zGlobals;
typedef struct xEnvAsset;
typedef struct xMat3x3;
typedef struct jot;
typedef struct xVec2;
typedef enum RxNodeDefEditable;
typedef struct xLinkAsset;
typedef struct xParEmitterAsset;
typedef enum RxClusterValid;
typedef struct zGlobalSettings;
typedef struct _tagRain;
typedef struct xGroup;
typedef struct zLasso;
typedef struct _zPortal;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct color_type;
typedef struct xUpdateCullEnt;
typedef struct xParEmitterPropsAsset;
typedef struct zPlayerLassoInfo;
typedef struct xEntShadow;
typedef struct RwLLLink;
typedef struct zScene;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zParEmitter;
typedef struct zLedgeGrabParams;
typedef struct _class_6;
typedef struct anim_coll_data;
typedef union _class_7;
typedef struct xPECircle;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct split_tag;
typedef struct callback;
typedef struct basic_rect;
typedef struct xAnimTable;
typedef struct xtextbox;
typedef struct xBaseAsset;
typedef struct tag_type;
typedef struct RpVertexNormal;
typedef enum _zPlayerWallJumpState;
typedef struct substr;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct _class_8;
typedef struct iEnv;
typedef struct RpInterpolator;
typedef struct xAnimPlay;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwSphere;
typedef struct _tagWind;
typedef struct xAnimMultiFileEntry;
typedef struct tweak_info;
typedef struct xAnimActiveEffect;
typedef struct _tagEmitSphere;
typedef struct xJSPNodeInfo;
typedef struct _zEnv;
typedef struct RwTexDictionary;
typedef struct xfont;
typedef struct RxOutputSpec;
typedef struct _class_9;
typedef struct analog_data;
typedef struct RpPolygon;
typedef struct xAnimSingle;
typedef struct RpMaterialList;
typedef struct RxClusterRef;
typedef struct _class_10;
typedef struct RwCamera;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct RwObject;
typedef struct zCheckPoint;
typedef struct RxIoSpec;
typedef struct _tagEmitRect;
typedef enum zFXGooState;
typedef struct xAnimMultiFileBase;
typedef struct xJSPHeader;
typedef struct xSurface;
typedef struct _tagClimate;
typedef struct zPlayerCarryInfo;
typedef struct _class_11;
typedef struct RpClump;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct zPlayerSettings;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct xPortalAsset;
typedef struct xCamera;
typedef struct xModelBucket;
typedef struct tweak_callback;
typedef struct _class_12;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct xPEEntBound;
typedef struct xGridBound;
typedef struct RxCluster;
typedef struct xDynAsset;
typedef struct _tagEmitLine;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xEntAsset;
typedef enum RwFogType;
typedef struct iFogParams;
typedef enum _enum_0;
typedef struct xEntDrive;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xParEmitter;
typedef struct _class_13;
typedef struct RwLinkList;
typedef struct _tagEmitVolume;
typedef enum _enum_1;
typedef enum _tagPadState;
typedef struct entrail_type;
typedef struct RwV2d;
typedef struct zJumpParam;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct _class_14;
typedef enum state_enum;
typedef union _class_15;

typedef int8*(*type_0)(xBase*);
typedef int8*(*type_2)(uint32);
typedef RpAtomic*(*type_3)(RpAtomic*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_11)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_18)(RxNodeDefinition*);
typedef void(*type_19)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_21)(RpAtomic*);
typedef void(*type_25)(RxNodeDefinition*);
typedef void(*type_26)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float32, xEntCollis*);
typedef int32(*type_29)(RxPipelineNode*);
typedef void(*type_30)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_31)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_32)(xEnt*);
typedef void(*type_33)(RxPipelineNode*);
typedef int32(*type_36)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef uint32(*type_41)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int32(*type_42)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_43)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_44)(void*, void*);
typedef void(*type_46)(xAnimPlay*, xAnimState*);
typedef void(*type_49)(void*);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_56)(uint32);
typedef void(*type_58)(jot&, xtextbox&, float32, float32);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_63)(jot&, xtextbox&, xtextbox&);
typedef void(*type_67)(tweak_info&);
typedef void(*type_73)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef uint32(*type_77)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_80)(RwCamera*);
typedef RwCamera*(*type_87)(RwCamera*);
typedef void(*type_91)(xMemPool*, void*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef void(*type_97)(tweak_info&);
typedef void(*type_102)(RwResEntry*);
typedef RwObjectHasFrame*(*type_120)(RwObjectHasFrame*);
typedef void(*type_123)(tweak_info&, void*);

typedef xVec3 type_1[3];
typedef uint8 type_4[3];
typedef float32 type_5[4];
typedef int8 type_6[128];
typedef uint8 type_7[3];
typedef type_6 type_8[6];
typedef RwFrustumPlane type_9[6];
typedef RpAtomic* type_12[4];
typedef xFXRing type_14[1];
typedef uint8 type_15[14];
typedef xModelTag type_16[4];
typedef RwV3d type_17[8];
typedef int8 type_20[32];
typedef entrail_type type_22[2];
typedef xModelInstance* type_23[14];
typedef RwTexCoords* type_24[8];
typedef float32 type_27[16];
typedef uint8 type_34[4];
typedef float32 type_35[2];
typedef int8 type_37[6];
typedef float32 type_39[4];
typedef int8* type_40[16];
typedef uint8 type_45[22];
typedef xFXRing type_47[2];
typedef uint8 type_48[22];
typedef xVec3 type_51[4];
typedef float32 type_52[768];
typedef float32 type_53[4];
typedef xFXRing type_54[1];
typedef xVec3 type_55[5];
typedef uint8 type_57[5];
typedef xVec3 type_59[60];
typedef xCollis type_61[18];
typedef xParInterp type_62[1];
typedef float32 type_64[22];
typedef uint32 type_65[4];
typedef float32 type_66[22];
typedef uint32 type_68[15];
typedef popper_data type_69[8];
typedef xVec3 type_70[3];
typedef uint32 type_71[15];
typedef xVec3 type_72[3];
typedef uint32 type_74[4096];
typedef uint16 type_75[3];
typedef zFXGooInstance type_76[24];
typedef uint32 type_78[15];
typedef xParInterp type_79[4];
typedef xParInterp type_81[4];
typedef uint32 type_82[72];
typedef analog_data type_83[2];
typedef int8 type_84[4];
typedef float32 type_85[2];
typedef uint8 type_86[16];
typedef xBase* type_88[72];
typedef uint32 type_89[2];
typedef xFXRing type_90[3];
typedef xFXRing type_92[1];
typedef uint32 type_94[2];
typedef int8 type_95[32];
typedef int8 type_96[16];
typedef int8 type_98[32];
typedef uint32 type_99[2];
typedef float32 type_100[2];
typedef uint8 type_101[2];
typedef RwTexCoords* type_103[8];
typedef xAnimMultiFileEntry type_104[1];
typedef xVec3 type_105[100];
typedef uint8 type_106[2];
typedef int8 type_107[16];
typedef xVec3 type_108[100];
typedef uint32 type_109[2];
typedef float32 type_110[4];
typedef xVec4 type_111[12];
typedef uint8 type_112[2];
typedef float32 type_113[6];
typedef float32 type_114[3];
typedef float32 type_115[3];
typedef RxCluster type_116[1];
typedef xModelTag type_117[2];
typedef float32 type_118[3];
typedef uint16 type_119[3];
typedef float32 type_121[4];
typedef float32 type_122[4];
typedef RpLight* type_124[2];
typedef xEnt* type_125[111];
typedef uint8 type_126[3];
typedef RwFrame* type_127[2];

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xShadowSimplePoly
{
	type_1 vert;
	xVec3 norm;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct popper_data
{
	state_enum state;
	xEnt* ent;
	type_12 atomic;
	uint32 atomic_size;
	float32 time;
	float32 end_time;
	union
	{
		xVec3 model_scale;
		uint32 pipe_flags;
	};
	float32 rate;
	float32 vel;
	float32 rloc;
	float32 rvel;
	float32 emitted;
	int32 faces;
	float32 radius;
	float32 area;
	type_52 weight;
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
	type_46 BeforeEnter;
	type_50 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct _class_0
{
	uint32 value_def;
	uint32 value_min;
	uint32 value_max;
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

struct RpSkin
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct entrail_data
{
	uint16 flags;
	uint16 type;
	xEnt* ent;
	xVec3 loc;
	xVec3 vel;
	float32 emitted;
};

struct zPlatform
{
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
	_class_14 anim_coll;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_77 Callback;
};

struct zFXGooInstance
{
	RpAtomic* atomic;
	int32 freezeGroup;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
	float32 time;
	float32 timer;
	float32 w0;
	float32 w2;
	type_121 warbc;
	type_122 state_time;
	xVec3 center;
	zFXGooState state;
	float32 warb_time;
	float32 alpha;
	float32 min;
	float32 max;
	xVec3* ref_parentPos;
	xVec3 pos_parentOnFreeze;
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
	type_61 colls;
	type_28 post;
	type_41 depenq;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xFXRing
{
	uint32 texture;
	float32 lifetime;
	xVec3 pos;
	float32 time;
	float32 ring_radius;
	float32 ring_radius_delta;
	float32 ring_tilt;
	float32 ring_tilt_delta;
	float32 ring_height;
	float32 ring_height_delta;
	iColor_tag ring_color;
	uint16 ring_segs;
	uint8 u_repeat;
	uint8 v_repeat;
	xFXRing** parent;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_19 update;
	type_19 endUpdate;
	type_26 bupdate;
	type_30 move;
	type_32 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_43 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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
	type_38 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_65 pad;
};

struct zCutsceneMgr
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_3 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xFFX
{
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

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	type_49 activateCB;
	type_49 deactivateCB;
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
	type_24 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct _tagiPad
{
	int32 port;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_126 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_101 NumAnims;
	void** RawData;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_42 eventFunc;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpTriangle
{
	type_119 vertIndex;
	int16 matIndex;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zAssetPickupTable
{
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_27 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_95 name;
	type_98 mask;
	uint32 filterAddressing;
	int32 refCount;
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
		_class_4 tuv;
		tri_data_1 tri;
	};
};

struct _class_2
{
	uint32 type;
	color_type color;
	uint32 texture;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RpSector
{
	int32 type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_31 Conditional;
	type_31 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_56 resolvID;
	type_0 base2Name;
	type_2 id2Name;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_51 corner;
};

struct xEntBoulder
{
};

struct _class_3
{
	float32 value_def;
	float32 value_min;
	float32 value_max;
};

struct xParSys
{
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_102 destroyNotify;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct asset_type : xDynAsset
{
	uint32 text;
	basic_rect bounds;
	uint32 font;
	_class_8 size;
	_class_10 space;
	color_type color;
	_class_12 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float32 max_height;
	_class_2 backdrop;
};

struct xParInterp
{
	type_35 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_103 texCoords;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct rxReq
{
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct _tagxPad
{
	type_45 value;
	type_48 last_value;
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	type_64 up_tmr;
	type_66 down_tmr;
	type_83 analog;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_53 wt;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_7 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct ztextbox : xBase
{
	_class_15 flag;
	asset_type* asset;
	xtextbox tb;
	type_40 segments;
	uint32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct xParGroup
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_104 Files;
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

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
};

struct _class_5
{
	uint8 value_def;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	float32 padF1;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
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

struct xVec2
{
	float32 x;
	float32 y;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_5 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 DisableForceConversation;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 SandyMeleeMinFrame;
	float32 SandyMeleeMaxFrame;
	float32 SandyMeleeRadius;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	type_106 PowerUp;
	type_112 InitialPowerUp;
};

struct _tagRain
{
	int32 rain;
	float32 strength;
	zParEmitter* rain_emitter;
	zParEmitter* snow_emitter;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	type_55 lastRefs;
	type_57 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct color_type
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_44 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_62 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_79 color_birth;
	type_81 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float32 dist;
	uint8 destroy;
	uint8 targetGuide;
	float32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float32 copterTime;
	int32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_100 radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	uint32 num_update_base;
	xBase** update_base;
	type_82 baseCount;
	type_88 baseList;
	_zEnv* zen;
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

struct zParEmitter : xParEmitter
{
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_59 tranTable;
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

struct _class_6
{
	uint32 value_def;
	uint32 labels_size;
	int8** labels;
	void* values;
};

struct anim_coll_data
{
};

union _class_7
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	type_58 render;
	type_63 layout_update;
	type_63 render_update;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct tag_type
{
	substr name;
	type_73 parse_tag;
	type_73 reset_tag;
	void* context;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct substr
{
	int8* text;
	uint32 size;
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

struct _class_8
{
	float32 width;
	float32 height;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_124 light;
	type_127 light_frame;
	int32 memlvl;
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
	type_10 BeforeAnimMatrices;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _tagWind
{
	float32 strength;
	float32 angle;
	xVec3 dir;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct tweak_info
{
	substr name;
	void* value;
	tweak_callback* cb;
	void* context;
	uint8 type;
	uint8 value_size;
	uint16 flags;
	union
	{
		_class_13 int_context;
		_class_0 uint_context;
		_class_3 float_context;
		_class_5 bool_context;
		_class_6 select_context;
		_class_9 flag_context;
		_class_11 all_context;
	};
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _class_9
{
	uint32 value_def;
	uint32 mask;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RpPolygon
{
	uint16 matIndex;
	type_75 vertIndex;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_85 BilinearLerp;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _class_10
{
	float32 x;
	float32 y;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_80 beginUpdate;
	type_87 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	xEnt* MountChimney;
	float32 MountChimOldY;
	uint32 MaxHealth;
	uint32 DoMeleeCheck;
	float32 VictoryTimer;
	float32 BadGuyNearTimer;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	zEnt* FireTarget;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_117 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	type_16 HangPawTag;
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	int32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	uint32 Inv_Shiny;
	uint32 Inv_Spatula;
	type_68 Inv_PatsSock;
	type_71 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_78 Inv_LevelPickups;
	uint32 Inv_LevelPickups_CurrentLevel;
	uint32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_109 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_125 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_15 sb_model_indices;
	type_23 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

enum zFXGooState
{
	zFXGooStateNormal,
	zFXGooStateFreezing,
	zFXGooStateFrozen,
	zFXGooStateMelting,
	zFXGooStateInactive = 0xdeadbeef,
	zFXGooStateForce32Bit = 0xffffffff
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xJSPHeader
{
	type_84 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xSurface
{
};

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
};

struct _class_11
{
	type_86 pad;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_93 callback;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_91 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_18 nodeInit;
	type_25 nodeTerm;
	type_29 pipelineNodeInit;
	type_33 pipelineNodeTerm;
	type_36 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_113 MoveSpeed;
	type_114 AnimSneak;
	type_115 AnimWalk;
	type_118 AnimRun;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	type_34 talk_filter;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	type_111 frustplane;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct tweak_callback
{
	type_97 on_change;
	type_97 on_select;
	type_97 on_unselect;
	type_97 on_start_edit;
	type_97 on_stop_edit;
	type_97 on_expand;
	type_97 on_collapse;
	type_97 on_update;
	type_123 convert_mem_to_tweak;
	type_123 convert_tweak_to_mem;
};

struct _class_12
{
	float32 left;
	float32 top;
	float32 right;
	float32 bottom;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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
	type_116 clusters;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_120 sync;
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
	type_4 emit_pad;
	type_7 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _class_13
{
	int32 value_def;
	int32 value_min;
	int32 value_max;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct entrail_type
{
	int8* model_name;
	int32 bone;
	float32 rate;
	float32 cull_dist;
	xVec3 offset;
	xVec3 offset_rand;
	xVec3 vel;
	xVec3 vel_rand;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_8 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_20 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	uint32 QuarterSpeed;
	float32 update_dt;
	int32 useHIPHOP;
	uint8 NoMusic;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
};

struct zEntHangable
{
};

struct _class_14
{
	xVec3* verts;
};

enum state_enum
{
	STATE_NONE,
	STATE_OFF,
	STATE_ON
};

union _class_15
{
	uint8 active;
	uint8 dirty;
	uint8 show_backdrop;
	uint8 visible;
	uint8 hack_invisible;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_96 buffer;
type_107 buffer;
uint32 gFXSurfaceFlags;
type_90 sPatrickStunRing;
type_92 sThunderRing;
type_54 sHammerRing;
type_47 sPorterRing;
type_14 sMuscleArmRing;
type_110 defaultGooTimes;
type_39 defaultGooWarbc;
type_76 zFXGooInstances;
ztextbox* goo_timer_textbox;
xVec3 bubblehit_pos_rnd;
xVec3 bubblehit_vel_rnd;
float32 bubblehit_vel_scale;
xVec3 bubbletrail_pos_rnd;
xVec3 bubbletrail_vel_rnd;
float32 bubbletrail_vel_scale;
xVec3 bubblewall_scale;
xVec3 bubblewall_velscale;
type_69 poppers;
type_22 entrail_types;
entrail_data* entrails;
uint32 entrails_size;
uint32 gActiveHeap;
zGlobals globals;
xVec3 m_UnitAxisY;
uint8* giAnimScratch;
type_74 ourGlobals;
xVec3 g_O3;
type_3 gAtomicRenderCallBack;
RxPipeline* xFXgooPipeline;
_zEnv* gCurEnv;
_tagClimate gClimate;
type_21 AtomicDefaultRenderCallBack;
type_60 zFXGooRenderAtomic;
type_67 on_spawn_bubble_wall;

void setup_entrails(zScene& s);
void update_entrails(float32 dt);
void zFXPopOff(xEnt& ent, float32 rate, float32 time);
void zFXPopOn(xEnt& ent, float32 rate, float32 time);
void update_popper(popper_data& popper, float32 dt);
void emit_popper_bubbles(popper_data& popper, int32 emit, float32 scale, float32 vel_add);
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper);
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n);
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri);
uint8 setup_popper_emitter(popper_data& popper);
void zFX_SpawnBubbleBlast(xVec3* pos, uint32 num, float32 radius, float32 blast_vel, float32 rand_vel);
void zFX_SpawnBubbleSlam(xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel);
void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleMenuTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 scale);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrailNoNegRandVel(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num);
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 vel_scale);
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num);
void zFXGooEventMelt(xEnt* ent);
void zFXGooEventSetFreezeDuration(xEnt* ent, float32 duration);
void zFXGooEventSetWarb(xEnt* ent, float32* warb);
int32 zFXGooIs(xEnt* obj, float32& depth, uint32 playerCheck);
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec);
void zFXUpdate(float32 dt);
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic);
void zFXGooUpdateInstance(zFXGooInstance* goo, float32 dt);
void zFXGooEnable(RpAtomic* atomic, int32 freezeGroup);
xFXRing* zFXMuscleArmWave(xVec3* pos);
void zFXPorterWave(xVec3* pos);
void zFXHammer(xVec3* pos);
void zFXPatrickStun(xVec3* pos);
void zFX_SceneReset();
void zFX_SceneExit(RpWorld* world);
void zFX_SceneEnter(RpWorld* world);
void on_spawn_bubble_wall();

// setup_entrails__FR6zScene
// Start address: 0x175870
void setup_entrails(zScene& s)
{
	type_89 hash;
	type_94 hash_dff;
	type_99 hash_minf;
	uint32 i;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	uint32 model;
	uint32 i;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	uint32 model;
	uint32 i;
}

// update_entrails__Ff
// Start address: 0x175af0
void update_entrails(float32 dt)
{
	entrail_data* it;
	entrail_data* end;
}

// zFXPopOff__FR4xEntff
// Start address: 0x175eb0
void zFXPopOff(xEnt& ent, float32 rate, float32 time)
{
	popper_data* popper;
	xSphere o;
}

// zFXPopOn__FR4xEntff
// Start address: 0x1762a0
void zFXPopOn(xEnt& ent, float32 rate, float32 time)
{
	popper_data* popper;
	xSphere o;
	xVec3 tiny;
}

// update_popper__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_dataf
// Start address: 0x1766b0
void update_popper(popper_data& popper, float32 dt)
{
	float32 area;
	float32 vel_add;
	float32 rate;
	float32 s;
	float32 ss;
	float32 scale;
	int32 emit;
}

// emit_popper_bubbles__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_dataiff
// Start address: 0x176980
void emit_popper_bubbles(popper_data& popper, int32 emit, float32 scale, float32 vel_add)
{
	int32 max_emit;
	xVec3* buffer;
	xVec3* loc;
	xVec3* end_loc;
	xVec3* vel;
	xModelInstance* model;
	xMat3x3 oldmat;
	xMat3x3& mat;
	float32 svel;
	float32 rloc;
	float32 rvel;
}

// random_surface_point__17@unnamed@zFX_cpp@FR5xVec3R5xVec3RCQ217@unnamed@zFX_cpp@11popper_data
// Start address: 0x176d70
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper)
{
	xMat4x3* mat;
	int32 which;
	RpGeometry* geom;
	RpAtomic** atomic;
	RpAtomic** end;
	int32 size;
	type_70 v;
	type_72 n;
}

// random_point_on_triangle__17@unnamed@zFX_cpp@FR5xVec3R5xVec3PC5xVec3PC5xVec3
// Start address: 0x176ea0
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n)
{
	float32 s;
	float32 t;
}

// eval_tri__17@unnamed@zFX_cpp@FP5xVec3P5xVec3PC7xMat4x3PC10RpGeometryPC10RpTriangle
// Start address: 0x177090
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri)
{
	RpSkin* skin;
	RpMorphTarget* mt;
	xVec3* in_vert;
	xVec3* in_norm;
	xMat4x3* skinmat;
	float32* vert_bone_weight;
	uint32* vert_bone_index;
}

// setup_popper_emitter__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_data
// Start address: 0x1779c0
uint8 setup_popper_emitter(popper_data& popper)
{
	float32* weight;
	xModelInstance* model;
	RpGeometry* geom;
	xVec3* vert;
	RpTriangle* tri;
	float32* end;
	xVec3& a;
	xVec3& b;
	xVec3& c;
}

// zFX_SpawnBubbleBlast__FPC5xVec3Uifff
// Start address: 0x177c80
void zFX_SpawnBubbleBlast(xVec3* pos, uint32 num, float32 radius, float32 blast_vel, float32 rand_vel)
{
	xVec3* buffer;
	xVec3* itl;
	xVec3* itv;
	xVec3* end;
	float32 ang;
	float32 uz;
	xVec3 rvel;
}

// zFX_SpawnBubbleSlam__FPC5xVec3Uifff
// Start address: 0x178020
void zFX_SpawnBubbleSlam(xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	uint32 j;
	float32 ang;
}

// zFX_SpawnBubbleWall__Fv
// Start address: 0x178280
void zFX_SpawnBubbleWall()
{
	RwCamera* camera;
	RwMatrixTag* mat;
	type_105 pos;
	type_108 vel;
	xVec3* pp;
	xVec3* vp;
	uint32 i;
}

// zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178490
void zFX_SpawnBubbleMenuTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x178660
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3 vel_offset;
	xVec3* pp;
	xVec3* vp;
	int32 j;
	float32 t;
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178b10
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3* pp;
	xVec3* vp;
	int32 j;
}

// zFX_SpawnBubbleTrailNoNegRandVel__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178e30
void zFX_SpawnBubbleTrailNoNegRandVel(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178fe0
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3Ui
// Start address: 0x1791c0
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num)
{
}

// zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x1791e0
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num, xVec3* pos_rnd, xVec3* vel_rnd, float32 vel_scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int32 j;
}

// zFX_SpawnBubbleHit__FPC5xVec3Ui
// Start address: 0x179460
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num)
{
}

// zFXGooEventMelt__FP4xEnt
// Start address: 0x179480
void zFXGooEventMelt(xEnt* ent)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
}

// zFXGooEventSetFreezeDuration__FP4xEntf
// Start address: 0x179510
void zFXGooEventSetFreezeDuration(xEnt* ent, float32 duration)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
}

// zFXGooEventSetWarb__FP4xEntPCf
// Start address: 0x1795a0
void zFXGooEventSetWarb(xEnt* ent, float32* warb)
{
	int32 i;
	zFXGooInstance* goo;
}

// zFXGooIs__FP4xEntRfUi
// Start address: 0x179630
int32 zFXGooIs(xEnt* obj, float32& depth, uint32 playerCheck)
{
	int32 i;
	zFXGooInstance* goo;
	xVec3* pos;
}

// zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3
// Start address: 0x179740
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
}

// zFXUpdate__Ff
// Start address: 0x179910
void zFXUpdate(float32 dt)
{
}

// zFXGooRenderAtomic__FP8RpAtomic
// Start address: 0x179a90
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic)
{
	int32 i;
	zFXGooInstance* goo;
}

// zFXGooUpdateInstance__FP14zFXGooInstancef
// Start address: 0x179b60
void zFXGooUpdateInstance(zFXGooInstance* goo, float32 dt)
{
	float32 tmp;
	zFXGooState old_state;
	float32 rate;
	xVec3 pos;
	float32 freeze_time;
	int32 s;
	type_37 counter_text;
}

// zFXGooEnable__FP8RpAtomici
// Start address: 0x179fd0
void zFXGooEnable(RpAtomic* atomic, int32 freezeGroup)
{
	int32 i;
	zFXGooInstance* goo;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
}

// zFXMuscleArmWave__FPC5xVec3
// Start address: 0x17a150
xFXRing* zFXMuscleArmWave(xVec3* pos)
{
}

// zFXPorterWave__FPC5xVec3
// Start address: 0x17a160
void zFXPorterWave(xVec3* pos)
{
}

// zFXHammer__FPC5xVec3
// Start address: 0x17a1a0
void zFXHammer(xVec3* pos)
{
}

// zFXPatrickStun__FPC5xVec3
// Start address: 0x17a200
void zFXPatrickStun(xVec3* pos)
{
}

// zFX_SceneReset__Fv
// Start address: 0x17a250
void zFX_SceneReset()
{
}

// zFX_SceneExit__FP7RpWorld
// Start address: 0x17a300
void zFX_SceneExit(RpWorld* world)
{
}

// zFX_SceneEnter__FP7RpWorld
// Start address: 0x17a360
void zFX_SceneEnter(RpWorld* world)
{
	int8 @4297;
	tweak_callback cb_spawn_bubble_wall;
}

// on_spawn_bubble_wall__FRC10tweak_info
// Start address: 0x17a490
void on_spawn_bubble_wall()
{
}

