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

typedef s8*(*type_0)(xBase*);
typedef s8*(*type_2)(u32);
typedef RpAtomic*(*type_3)(RpAtomic*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_11)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_18)(RxNodeDefinition*);
typedef void(*type_19)(xEnt*, xScene*, f32);
typedef RpAtomic*(*type_21)(RpAtomic*);
typedef void(*type_25)(RxNodeDefinition*);
typedef void(*type_26)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, f32, xEntCollis*);
typedef s32(*type_29)(RxPipelineNode*);
typedef void(*type_30)(xEnt*, xScene*, f32, xEntFrame*);
typedef u32(*type_31)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_32)(xEnt*);
typedef void(*type_33)(RxPipelineNode*);
typedef s32(*type_36)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef u32(*type_41)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s32(*type_42)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_43)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_44)(void*, void*);
typedef void(*type_46)(xAnimPlay*, xAnimState*);
typedef void(*type_49)(void*);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_56)(u32);
typedef void(*type_58)(jot&, xtextbox&, f32, f32);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_63)(jot&, xtextbox&, xtextbox&);
typedef void(*type_67)(tweak_info&);
typedef void(*type_73)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef u32(*type_77)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_80)(RwCamera*);
typedef RwCamera*(*type_87)(RwCamera*);
typedef void(*type_91)(xMemPool*, void*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef void(*type_97)(tweak_info&);
typedef void(*type_102)(RwResEntry*);
typedef RwObjectHasFrame*(*type_120)(RwObjectHasFrame*);
typedef void(*type_123)(tweak_info&, void*);

typedef xVec3 type_1[3];
typedef u8 type_4[3];
typedef f32 type_5[4];
typedef s8 type_6[128];
typedef u8 type_7[3];
typedef type_6 type_8[6];
typedef RwFrustumPlane type_9[6];
typedef RpAtomic* type_12[4];
typedef xFXRing type_14[1];
typedef u8 type_15[14];
typedef xModelTag type_16[4];
typedef RwV3d type_17[8];
typedef s8 type_20[32];
typedef entrail_type type_22[2];
typedef xModelInstance* type_23[14];
typedef RwTexCoords* type_24[8];
typedef f32 type_27[16];
typedef u8 type_34[4];
typedef f32 type_35[2];
typedef s8 type_37[6];
typedef f32 type_39[4];
typedef s8* type_40[16];
typedef u8 type_45[22];
typedef xFXRing type_47[2];
typedef u8 type_48[22];
typedef xVec3 type_51[4];
typedef f32 type_52[768];
typedef f32 type_53[4];
typedef xFXRing type_54[1];
typedef xVec3 type_55[5];
typedef u8 type_57[5];
typedef xVec3 type_59[60];
typedef xCollis type_61[18];
typedef xParInterp type_62[1];
typedef f32 type_64[22];
typedef u32 type_65[4];
typedef f32 type_66[22];
typedef u32 type_68[15];
typedef popper_data type_69[8];
typedef xVec3 type_70[3];
typedef u32 type_71[15];
typedef xVec3 type_72[3];
typedef u32 type_74[4096];
typedef u16 type_75[3];
typedef zFXGooInstance type_76[24];
typedef u32 type_78[15];
typedef xParInterp type_79[4];
typedef xParInterp type_81[4];
typedef u32 type_82[72];
typedef analog_data type_83[2];
typedef s8 type_84[4];
typedef f32 type_85[2];
typedef u8 type_86[16];
typedef xBase* type_88[72];
typedef u32 type_89[2];
typedef xFXRing type_90[3];
typedef xFXRing type_92[1];
typedef u32 type_94[2];
typedef s8 type_95[32];
typedef s8 type_96[16];
typedef s8 type_98[32];
typedef u32 type_99[2];
typedef f32 type_100[2];
typedef u8 type_101[2];
typedef RwTexCoords* type_103[8];
typedef xAnimMultiFileEntry type_104[1];
typedef xVec3 type_105[100];
typedef u8 type_106[2];
typedef s8 type_107[16];
typedef xVec3 type_108[100];
typedef u32 type_109[2];
typedef f32 type_110[4];
typedef xVec4 type_111[12];
typedef u8 type_112[2];
typedef f32 type_113[6];
typedef f32 type_114[3];
typedef f32 type_115[3];
typedef RxCluster type_116[1];
typedef xModelTag type_117[2];
typedef f32 type_118[3];
typedef u16 type_119[3];
typedef f32 type_121[4];
typedef f32 type_122[4];
typedef RpLight* type_124[2];
typedef xEnt* type_125[111];
typedef u8 type_126[3];
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
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct popper_data
{
	state_enum state;
	xEnt* ent;
	type_12 atomic;
	u32 atomic_size;
	f32 time;
	f32 end_time;
	union
	{
		xVec3 model_scale;
		u32 pipe_flags;
	};
	f32 rate;
	f32 vel;
	f32 rloc;
	f32 rvel;
	f32 emitted;
	s32 faces;
	f32 radius;
	f32 area;
	type_52 weight;
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
	type_46 BeforeEnter;
	type_50 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct _class_0
{
	u32 value_def;
	u32 value_min;
	u32 value_max;
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
	f32 x;
	f32 y;
	f32 z;
};

struct entrail_data
{
	u16 flags;
	u16 type;
	xEnt* ent;
	xVec3 loc;
	xVec3 vel;
	f32 emitted;
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
	_class_14 anim_coll;
};

struct _class_1
{
	union
	{
		u8 invisible;
		u8 ethereal;
		u8 merge;
		u8 word_break;
		u8 word_end;
		u8 line_break;
		u8 stop;
		u8 tab;
	};
	union
	{
		u8 insert;
		u8 dynamic;
		u8 page_break;
		u8 stateful;
	};
	u16 dummy;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_77 Callback;
};

struct zFXGooInstance
{
	RpAtomic* atomic;
	s32 freezeGroup;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
	f32 time;
	f32 timer;
	f32 w0;
	f32 w2;
	type_121 warbc;
	type_122 state_time;
	xVec3 center;
	zFXGooState state;
	f32 warb_time;
	f32 alpha;
	f32 min;
	f32 max;
	xVec3* ref_parentPos;
	xVec3 pos_parentOnFreeze;
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
	type_61 colls;
	type_28 post;
	type_41 depenq;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xFXRing
{
	u32 texture;
	f32 lifetime;
	xVec3 pos;
	f32 time;
	f32 ring_radius;
	f32 ring_radius_delta;
	f32 ring_tilt;
	f32 ring_tilt_delta;
	f32 ring_height;
	f32 ring_height_delta;
	iColor_tag ring_color;
	u16 ring_segs;
	u8 u_repeat;
	u8 v_repeat;
	xFXRing** parent;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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
	type_38 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_65 pad;
};

struct zCutsceneMgr
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
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
	u16 renderFrame;
	u16 pad;
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
	s16 refCount;
	s16 pad;
};

struct xUpdateCullMgr
{
	u32 entCount;
	u32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	u32 mgrCount;
	u32 mgrCurr;
	xUpdateCullEnt* mgrList;
	u32 grpCount;
	xUpdateCullGroup* grpList;
	type_49 activateCB;
	type_49 deactivateCB;
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
	type_24 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct _tagiPad
{
	s32 port;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_101 NumAnims;
	void** RawData;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_42 eventFunc;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct RpTriangle
{
	type_119 vertIndex;
	s16 matIndex;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct zAssetPickupTable
{
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_27 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_95 name;
	type_98 mask;
	u32 filterAddressing;
	s32 refCount;
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
		_class_4 tuv;
		tri_data_1 tri;
	};
};

struct _class_2
{
	u32 type;
	color_type color;
	u32 texture;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct RpSector
{
	s32 type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_31 Conditional;
	type_31 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	type_51 corner;
};

struct xEntBoulder
{
};

struct _class_3
{
	f32 value_def;
	f32 value_min;
	f32 value_max;
};

struct xParSys
{
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_102 destroyNotify;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct asset_type : xDynAsset
{
	u32 text;
	basic_rect bounds;
	u32 font;
	_class_8 size;
	_class_10 space;
	color_type color;
	_class_12 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	f32 max_height;
	_class_2 backdrop;
};

struct xParInterp
{
	type_35 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
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
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
};

struct rxReq
{
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct _tagxPad
{
	type_45 value;
	type_48 last_value;
	u32 on;
	u32 pressed;
	u32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	u32 flags;
	_tagxRumble rumble_head;
	s16 port;
	s16 slot;
	_tagiPad context;
	f32 al2d_timer;
	f32 ar2d_timer;
	f32 d_timer;
	type_64 up_tmr;
	type_66 down_tmr;
	type_83 analog;
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
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
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct ztextbox : xBase
{
	_class_15 flag;
	asset_type* asset;
	xtextbox tb;
	type_40 segments;
	u32 segments_size;
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
	u8 flags;
	u8 type;
	u8 bone;
	u8 pad1;
	xVec3 offset;
	f32 radius;
	f32 deflection;
};

struct _class_4
{
	f32 t;
	f32 u;
	f32 v;
};

struct _class_5
{
	u8 value_def;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	u32 bspAssetID;
	u32 startCameraAssetID;
	u32 climateFlags;
	f32 climateStrengthMin;
	f32 climateStrengthMax;
	u32 bspLightKit;
	u32 objectLightKit;
	f32 padF1;
	u32 bspCollisionAssetID;
	u32 bspFXAssetID;
	u32 bspCameraAssetID;
	u32 bspMapperID;
	u32 bspMapperCollisionID;
	u32 bspMapperFXID;
	f32 loldHeight;
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

struct jot
{
	substr s;
	_class_1 flag;
	u16 context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct xVec2
{
	f32 x;
	f32 y;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_5 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xParEmitterAsset : xBaseAsset
{
	u8 emit_flags;
	u8 emit_type;
	u16 pad;
	u32 propID;
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
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	u32 cull_mode;
	f32 cull_dist_sqr;
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
	u16 AnalogMin;
	u16 AnalogMax;
	f32 SundaeTime;
	f32 SundaeMult;
	u32 InitialShinyCount;
	u32 InitialSpatulaCount;
	s32 ShinyValuePurple;
	s32 ShinyValueBlue;
	s32 ShinyValueGreen;
	s32 ShinyValueYellow;
	s32 ShinyValueRed;
	s32 ShinyValueCombo0;
	s32 ShinyValueCombo1;
	s32 ShinyValueCombo2;
	s32 ShinyValueCombo3;
	s32 ShinyValueCombo4;
	s32 ShinyValueCombo5;
	s32 ShinyValueCombo6;
	s32 ShinyValueCombo7;
	s32 ShinyValueCombo8;
	s32 ShinyValueCombo9;
	s32 ShinyValueCombo10;
	s32 ShinyValueCombo11;
	s32 ShinyValueCombo12;
	s32 ShinyValueCombo13;
	s32 ShinyValueCombo14;
	s32 ShinyValueCombo15;
	f32 ComboTimer;
	u32 Initial_Specials;
	u32 TakeDamage;
	f32 DamageTimeHit;
	f32 DamageTimeSurface;
	f32 DamageTimeEGen;
	f32 DamageSurfKnock;
	f32 DamageGiveHealthKnock;
	u32 CheatSpongeball;
	u32 CheatPlayerSwitch;
	u32 CheatAlwaysPortal;
	u32 CheatFlyToggle;
	u32 DisableForceConversation;
	f32 StartSlideAngle;
	f32 StopSlideAngle;
	f32 RotMatchMaxAngle;
	f32 RotMatchMatchTime;
	f32 RotMatchRelaxTime;
	f32 Gravity;
	f32 BBashTime;
	f32 BBashHeight;
	f32 BBashDelay;
	f32 BBashCVTime;
	f32 BBounceSpeed;
	f32 BSpinMinFrame;
	f32 BSpinMaxFrame;
	f32 BSpinRadius;
	f32 SandyMeleeMinFrame;
	f32 SandyMeleeMaxFrame;
	f32 SandyMeleeRadius;
	f32 BubbleBowlTimeDelay;
	f32 BubbleBowlLaunchPosLeft;
	f32 BubbleBowlLaunchPosUp;
	f32 BubbleBowlLaunchPosAt;
	f32 BubbleBowlLaunchVelLeft;
	f32 BubbleBowlLaunchVelUp;
	f32 BubbleBowlLaunchVelAt;
	f32 BubbleBowlPercentIncrease;
	f32 BubbleBowlMinSpeed;
	f32 BubbleBowlMinRecoverTime;
	f32 SlideAccelVelMin;
	f32 SlideAccelVelMax;
	f32 SlideAccelStart;
	f32 SlideAccelEnd;
	f32 SlideAccelPlayerFwd;
	f32 SlideAccelPlayerBack;
	f32 SlideAccelPlayerSide;
	f32 SlideVelMaxStart;
	f32 SlideVelMaxEnd;
	f32 SlideVelMaxIncTime;
	f32 SlideVelMaxIncAccel;
	f32 SlideAirHoldTime;
	f32 SlideAirSlowTime;
	f32 SlideAirDblHoldTime;
	f32 SlideAirDblSlowTime;
	f32 SlideVelDblBoost;
	u8 SlideApplyPhysics;
	type_106 PowerUp;
	type_112 InitialPowerUp;
};

struct _tagRain
{
	s32 rain;
	f32 strength;
	zParEmitter* rain_emitter;
	zParEmitter* snow_emitter;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct zLasso
{
	u32 flags;
	f32 secsTotal;
	f32 secsLeft;
	f32 stRadius;
	f32 tgRadius;
	f32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	f32 stSlack;
	f32 stSlackDist;
	f32 tgSlack;
	f32 tgSlackDist;
	f32 crSlack;
	f32 currDist;
	f32 lastDist;
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
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct color_type
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_44 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	f32 dist;
	u8 destroy;
	u8 targetGuide;
	f32 lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	f32 copterTime;
	s32 canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
		u32 num_ents;
		u32 num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	u32 num_update_base;
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
	f32 r;
};

struct zParEmitter : xParEmitter
{
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_59 tranTable;
	s32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	f32 y0det;
	f32 dydet;
	f32 r0det;
	f32 drdet;
	f32 thdet;
	f32 rtime;
	f32 ttime;
	f32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	s32 nrays;
	s32 rrand;
	f32 startrot;
	f32 endrot;
};

struct _class_6
{
	u32 value_def;
	u32 labels_size;
	s8** labels;
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
	f32 radius;
	f32 deflection;
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
	f32 r;
	f32 h;
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
	f32 x;
	f32 y;
	f32 w;
	f32 h;
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

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	u32 flags;
	f32 line_space;
	f32 tab_stop;
	f32 left_indent;
	f32 right_indent;
	callback* cb;
	void* context;
	s8** texts;
	u32* text_sizes;
	u32 texts_size;
	substr text;
	u32 text_hash;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
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
	s8* text;
	u32 size;
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

struct _class_8
{
	f32 width;
	f32 height;
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
	s32 memlvl;
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
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct _tagWind
{
	f32 strength;
	f32 angle;
	xVec3 dir;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct tweak_info
{
	substr name;
	void* value;
	tweak_callback* cb;
	void* context;
	u8 type;
	u8 value_size;
	u16 flags;
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
	u32 Handle;
};

struct _tagEmitSphere
{
	f32 radius;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	u32 id;
	f32 width;
	f32 height;
	f32 space;
	iColor_tag color;
	basic_rect clip;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _class_9
{
	u32 value_def;
	u32 mask;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct RpPolygon
{
	u16 matIndex;
	type_75 vertIndex;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_85 BilinearLerp;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct _class_10
{
	f32 x;
	f32 y;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
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
	u32 Visible;
	u32 Health;
	s32 Speed;
	f32 SpeedMult;
	s32 Sneak;
	s32 Teeter;
	f32 SlipFadeTimer;
	s32 Slide;
	f32 SlideTimer;
	s32 Stepping;
	s32 JumpState;
	s32 LastJumpState;
	f32 JumpTimer;
	f32 LookAroundTimer;
	u32 LookAroundRand;
	u32 LastProjectile;
	f32 DecelRun;
	f32 DecelRunSpeed;
	f32 HotsauceTimer;
	f32 LeanLerp;
	f32 ScareTimer;
	xBase* ScareSource;
	f32 CowerTimer;
	f32 DamageTimer;
	f32 SundaeTimer;
	f32 ControlOffTimer;
	f32 HelmetTimer;
	u32 WorldDisguise;
	u32 Bounced;
	f32 FallDeathTimer;
	f32 HeadbuttVel;
	f32 HeadbuttTimer;
	u32 SpecialReceived;
	xEnt* MountChimney;
	f32 MountChimOldY;
	u32 MaxHealth;
	u32 DoMeleeCheck;
	f32 VictoryTimer;
	f32 BadGuyNearTimer;
	f32 ForceSlipperyTimer;
	f32 ForceSlipperyFriction;
	f32 ShockRadius;
	f32 ShockRadiusOld;
	f32 Face_ScareTimer;
	u32 Face_ScareRandom;
	u32 Face_Event;
	f32 Face_EventTimer;
	f32 Face_PantTimer;
	u32 Face_AnimSpecific;
	u32 IdleRand;
	f32 IdleMinorTimer;
	f32 IdleMajorTimer;
	f32 IdleSitTimer;
	s32 Transparent;
	zEnt* FireTarget;
	u32 ControlOff;
	u32 ControlOnEvent;
	u32 AutoMoveSpeed;
	f32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	f32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_117 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	f32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	f32 HangLength;
	xVec3 HangStartPos;
	f32 HangStartLerp;
	type_16 HangPawTag;
	f32 HangPawOffset;
	f32 HangElapsed;
	f32 Jump_CurrGravity;
	f32 Jump_HoldTimer;
	f32 Jump_ChangeTimer;
	s32 Jump_CanDouble;
	s32 Jump_CanFloat;
	s32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	s32 CanJump;
	s32 CanBubbleSpin;
	s32 CanBubbleBounce;
	s32 CanBubbleBash;
	s32 IsJumping;
	s32 IsDJumping;
	s32 IsBubbleSpinning;
	s32 IsBubbleBouncing;
	s32 IsBubbleBashing;
	s32 IsBubbleBowling;
	s32 WasDJumping;
	s32 IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	s32 cheat_mode;
	u32 Inv_Shiny;
	u32 Inv_Spatula;
	type_68 Inv_PatsSock;
	type_71 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_78 Inv_LevelPickups;
	u32 Inv_LevelPickups_CurrentLevel;
	u32 Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	s32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_109 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_125 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_15 sb_model_indices;
	type_23 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
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
	u32 Count;
};

struct xJSPHeader
{
	type_84 idtag;
	u32 version;
	u32 jspNodeCount;
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
	u32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	f32 minDist;
	f32 maxDist;
	f32 minHeight;
	f32 maxHeight;
	f32 maxCosAngle;
	f32 throwMinDist;
	f32 throwMaxDist;
	f32 throwMinHeight;
	f32 throwMaxHeight;
	f32 throwMaxStack;
	f32 throwMaxCosAngle;
	f32 throwTargetRotRate;
	f32 targetRot;
	u32 grabTarget;
	xVec3 grabOffset;
	f32 grabLerpMin;
	f32 grabLerpMax;
	f32 grabLerpLast;
	u32 grabYclear;
	f32 throwGravity;
	f32 throwHeight;
	f32 throwDistance;
	f32 fruitFloorDecayMin;
	f32 fruitFloorDecayMax;
	f32 fruitFloorBounce;
	f32 fruitFloorFriction;
	f32 fruitCeilingBounce;
	f32 fruitWallBounce;
	f32 fruitLifetime;
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
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_91 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	f32 JumpGravity;
	f32 GravSmooth;
	f32 FloatSpeed;
	f32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	f32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	f32 spin_damp_xz;
	f32 spin_damp_y;
	u8 talk_anims;
	u8 talk_filter_size;
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
	u32 creationAttributes;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	f32 fov;
	u32 flags;
	f32 tmr;
	f32 tm_acc;
	f32 tm_dec;
	f32 ltmr;
	f32 ltm_acc;
	f32 ltm_dec;
	f32 dmin;
	f32 dmax;
	f32 dcur;
	f32 dgoal;
	f32 hmin;
	f32 hmax;
	f32 hcur;
	f32 hgoal;
	f32 pmin;
	f32 pmax;
	f32 pcur;
	f32 pgoal;
	f32 depv;
	f32 hepv;
	f32 pepv;
	f32 orn_epv;
	f32 yaw_epv;
	f32 pitch_epv;
	f32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	f32 yaw_cur;
	f32 yaw_goal;
	f32 pitch_cur;
	f32 pitch_goal;
	f32 roll_cur;
	f32 roll_goal;
	f32 dct;
	f32 dcd;
	f32 dccv;
	f32 dcsv;
	f32 hct;
	f32 hcd;
	f32 hccv;
	f32 hcsv;
	f32 pct;
	f32 pcd;
	f32 pccv;
	f32 pcsv;
	f32 orn_ct;
	f32 orn_cd;
	f32 orn_ccv;
	f32 orn_csv;
	f32 yaw_ct;
	f32 yaw_cd;
	f32 yaw_ccv;
	f32 yaw_csv;
	f32 pitch_ct;
	f32 pitch_cd;
	f32 pitch_ccv;
	f32 pitch_csv;
	f32 roll_ct;
	f32 roll_cd;
	f32 roll_ccv;
	f32 roll_csv;
	type_111 frustplane;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	f32 left;
	f32 top;
	f32 right;
	f32 bottom;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct xPEEntBound
{
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
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

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_116 clusters;
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
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct xEntDrive
{
	u32 flags;
	f32 otm;
	f32 otmr;
	f32 os;
	f32 tm;
	f32 tmr;
	f32 s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	f32 yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
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
	type_120 sync;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_4 emit_pad;
	type_7 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _class_13
{
	s32 value_def;
	s32 value_min;
	s32 value_max;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
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
	s8* model_name;
	s32 bone;
	f32 rate;
	f32 cull_dist;
	xVec3 offset;
	xVec3 offset_rand;
	xVec3 vel;
	xVec3 vel_rand;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_8 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_20 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	s32 fog_t0;
	s32 fog_t1;
	s32 option_vibration;
	u32 QuarterSpeed;
	f32 update_dt;
	s32 useHIPHOP;
	u8 NoMusic;
	s8 currentActivePad;
	u8 firstStartPressed;
	u32 minVSyncCnt;
	u8 dontShowPadMessageDuringLoadingOrCutScene;
	u8 autoSaveFeature;
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
	u8 active;
	u8 dirty;
	u8 show_backdrop;
	u8 visible;
	u8 hack_invisible;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_96 buffer;
type_107 buffer;
u32 gFXSurfaceFlags;
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
f32 bubblehit_vel_scale;
xVec3 bubbletrail_pos_rnd;
xVec3 bubbletrail_vel_rnd;
f32 bubbletrail_vel_scale;
xVec3 bubblewall_scale;
xVec3 bubblewall_velscale;
type_69 poppers;
type_22 entrail_types;
entrail_data* entrails;
u32 entrails_size;
u32 gActiveHeap;
zGlobals globals;
xVec3 m_UnitAxisY;
u8* giAnimScratch;
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
void update_entrails(f32 dt);
void zFXPopOff(xEnt& ent, f32 rate, f32 time);
void zFXPopOn(xEnt& ent, f32 rate, f32 time);
void update_popper(popper_data& popper, f32 dt);
void emit_popper_bubbles(popper_data& popper, s32 emit, f32 scale, f32 vel_add);
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper);
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n);
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri);
u8 setup_popper_emitter(popper_data& popper);
void zFX_SpawnBubbleBlast(xVec3* pos, u32 num, f32 radius, f32 blast_vel, f32 rand_vel);
void zFX_SpawnBubbleSlam(xVec3* pos, u32 num, f32 rang, f32 bvel, f32 rvel);
void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleMenuTrail(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, u32 num, xVec3* pos_rnd, xVec3* vel_rnd, f32 scale);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, u32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrailNoNegRandVel(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, u32 num);
void zFX_SpawnBubbleHit(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd, f32 vel_scale);
void zFX_SpawnBubbleHit(xVec3* pos, u32 num);
void zFXGooEventMelt(xEnt* ent);
void zFXGooEventSetFreezeDuration(xEnt* ent, f32 duration);
void zFXGooEventSetWarb(xEnt* ent, f32* warb);
s32 zFXGooIs(xEnt* obj, f32& depth, u32 playerCheck);
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec);
void zFXUpdate(f32 dt);
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic);
void zFXGooUpdateInstance(zFXGooInstance* goo, f32 dt);
void zFXGooEnable(RpAtomic* atomic, s32 freezeGroup);
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
	u32 i;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	u32 model;
	u32 i;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	u32 model;
	u32 i;
}

// update_entrails__Ff
// Start address: 0x175af0
void update_entrails(f32 dt)
{
	entrail_data* it;
	entrail_data* end;
}

// zFXPopOff__FR4xEntff
// Start address: 0x175eb0
void zFXPopOff(xEnt& ent, f32 rate, f32 time)
{
	popper_data* popper;
	xSphere o;
}

// zFXPopOn__FR4xEntff
// Start address: 0x1762a0
void zFXPopOn(xEnt& ent, f32 rate, f32 time)
{
	popper_data* popper;
	xSphere o;
	xVec3 tiny;
}

// update_popper__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_dataf
// Start address: 0x1766b0
void update_popper(popper_data& popper, f32 dt)
{
	f32 area;
	f32 vel_add;
	f32 rate;
	f32 s;
	f32 ss;
	f32 scale;
	s32 emit;
}

// emit_popper_bubbles__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_dataiff
// Start address: 0x176980
void emit_popper_bubbles(popper_data& popper, s32 emit, f32 scale, f32 vel_add)
{
	s32 max_emit;
	xVec3* buffer;
	xVec3* loc;
	xVec3* end_loc;
	xVec3* vel;
	xModelInstance* model;
	xMat3x3 oldmat;
	xMat3x3& mat;
	f32 svel;
	f32 rloc;
	f32 rvel;
}

// random_surface_point__17@unnamed@zFX_cpp@FR5xVec3R5xVec3RCQ217@unnamed@zFX_cpp@11popper_data
// Start address: 0x176d70
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper)
{
	xMat4x3* mat;
	s32 which;
	RpGeometry* geom;
	RpAtomic** atomic;
	RpAtomic** end;
	s32 size;
	type_70 v;
	type_72 n;
}

// random_point_on_triangle__17@unnamed@zFX_cpp@FR5xVec3R5xVec3PC5xVec3PC5xVec3
// Start address: 0x176ea0
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n)
{
	f32 s;
	f32 t;
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
	f32* vert_bone_weight;
	u32* vert_bone_index;
}

// setup_popper_emitter__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_data
// Start address: 0x1779c0
u8 setup_popper_emitter(popper_data& popper)
{
	f32* weight;
	xModelInstance* model;
	RpGeometry* geom;
	xVec3* vert;
	RpTriangle* tri;
	f32* end;
	xVec3& a;
	xVec3& b;
	xVec3& c;
}

// zFX_SpawnBubbleBlast__FPC5xVec3Uifff
// Start address: 0x177c80
void zFX_SpawnBubbleBlast(xVec3* pos, u32 num, f32 radius, f32 blast_vel, f32 rand_vel)
{
	xVec3* buffer;
	xVec3* itl;
	xVec3* itv;
	xVec3* end;
	f32 ang;
	f32 uz;
	xVec3 rvel;
}

// zFX_SpawnBubbleSlam__FPC5xVec3Uifff
// Start address: 0x178020
void zFX_SpawnBubbleSlam(xVec3* pos, u32 num, f32 rang, f32 bvel, f32 rvel)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	u32 j;
	f32 ang;
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
	u32 i;
}

// zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178490
void zFX_SpawnBubbleMenuTrail(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	s32 j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x178660
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, u32 num, xVec3* pos_rnd, xVec3* vel_rnd, f32 scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3 vel_offset;
	xVec3* pp;
	xVec3* vp;
	s32 j;
	f32 t;
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178b10
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, u32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3* pp;
	xVec3* vp;
	s32 j;
}

// zFX_SpawnBubbleTrailNoNegRandVel__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178e30
void zFX_SpawnBubbleTrailNoNegRandVel(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	s32 j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178fe0
void zFX_SpawnBubbleTrail(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	s32 j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3Ui
// Start address: 0x1791c0
void zFX_SpawnBubbleTrail(xVec3* pos, u32 num)
{
}

// zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x1791e0
void zFX_SpawnBubbleHit(xVec3* pos, u32 num, xVec3* pos_rnd, xVec3* vel_rnd, f32 vel_scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	s32 j;
}

// zFX_SpawnBubbleHit__FPC5xVec3Ui
// Start address: 0x179460
void zFX_SpawnBubbleHit(xVec3* pos, u32 num)
{
}

// zFXGooEventMelt__FP4xEnt
// Start address: 0x179480
void zFXGooEventMelt(xEnt* ent)
{
	s32 i;
	zFXGooInstance* goo;
	s32 freezeGroup;
}

// zFXGooEventSetFreezeDuration__FP4xEntf
// Start address: 0x179510
void zFXGooEventSetFreezeDuration(xEnt* ent, f32 duration)
{
	s32 i;
	zFXGooInstance* goo;
	s32 freezeGroup;
}

// zFXGooEventSetWarb__FP4xEntPCf
// Start address: 0x1795a0
void zFXGooEventSetWarb(xEnt* ent, f32* warb)
{
	s32 i;
	zFXGooInstance* goo;
}

// zFXGooIs__FP4xEntRfUi
// Start address: 0x179630
s32 zFXGooIs(xEnt* obj, f32& depth, u32 playerCheck)
{
	s32 i;
	zFXGooInstance* goo;
	xVec3* pos;
}

// zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3
// Start address: 0x179740
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec)
{
	s32 i;
	zFXGooInstance* goo;
	s32 freezeGroup;
}

// zFXUpdate__Ff
// Start address: 0x179910
void zFXUpdate(f32 dt)
{
}

// zFXGooRenderAtomic__FP8RpAtomic
// Start address: 0x179a90
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic)
{
	s32 i;
	zFXGooInstance* goo;
}

// zFXGooUpdateInstance__FP14zFXGooInstancef
// Start address: 0x179b60
void zFXGooUpdateInstance(zFXGooInstance* goo, f32 dt)
{
	f32 tmp;
	zFXGooState old_state;
	f32 rate;
	xVec3 pos;
	f32 freeze_time;
	s32 s;
	type_37 counter_text;
}

// zFXGooEnable__FP8RpAtomici
// Start address: 0x179fd0
void zFXGooEnable(RpAtomic* atomic, s32 freezeGroup)
{
	s32 i;
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
	s8 @4297;
	tweak_callback cb_spawn_bubble_wall;
}

// on_spawn_bubble_wall__FRC10tweak_info
// Start address: 0x17a490
void on_spawn_bubble_wall()
{
}

