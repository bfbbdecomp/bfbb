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
typedef struct _class_7;
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
typedef struct _class_15;

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
typedef int8 type_8[128][6];
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
	xVec3 vert[3];
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
	RpAtomic* atomic[4];
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
	float32 weight[768];
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

	xVec3& __as(float32 f);
	xVec3& __amu(float32 f);
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	float32 warbc[4];
	float32 state_time[4];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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

struct _tagiPad
{
	int32 port;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpTriangle
{
	uint16 vertIndex[3];
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
	float32 matrix[16];
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
	int8 name[32];
	int8 mask[32];
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
	xVec3 corner[4];
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
	void(*destroyNotify)(RwResEntry*);
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
	float32 val[2];
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
	uint8 value[22];
	uint8 last_value[22];
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
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
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
	float32 wt[4];
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
	int8* segments[16];
	uint32 segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;

	void render_all();
	void update_all();
	void load(xBase& data, xDynAsset& asset);
	void init();
};

struct xParGroup
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	float32 param[4];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	float32 radius[2];
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	xVec3 tranTable[60];
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

struct _class_7
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	void(*render)(jot&, xtextbox&, float32, float32);
	void(*layout_update)(jot&, xtextbox&, xtextbox&);
	void(*render_update)(jot&, xtextbox&, xtextbox&);
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

	tag_type* find_format_tag(substr& s, int32& index);
	void clear_layout_cache();
	tag_entry_list read_tag(substr& s);
	void text_render(jot& j, xtextbox& tb, float32 x, float32 y);
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
	void(*parse_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
	void(*reset_tag)(jot&, xtextbox&, xtextbox&, split_tag&);
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

	xfont create();
	void restore_render_state();
	void set_render_state(RwRaster* raster);
	void init();
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
	uint16 vertIndex[3];
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
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
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
	xModelTag BubbleWandTag[2];
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
	xModelTag HangPawTag[4];
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
	uint32 Inv_PatsSock[15];
	uint32 Inv_PatsSock_Max[15];
	uint32 Inv_PatsSock_CurrentLevel;
	uint32 Inv_LevelPickups[15];
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
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[111];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8 sb_model_indices[14];
	xModelInstance* sb_models[14];
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
	int8 idtag[4];
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
	uint8 pad[16];
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
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
	uint8 talk_filter[4];
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
	xVec4 frustplane[12];
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
	void(*on_change)(tweak_info&);
	void(*on_select)(tweak_info&);
	void(*on_unselect)(tweak_info&);
	void(*on_start_edit)(tweak_info&);
	void(*on_stop_edit)(tweak_info&);
	void(*on_expand)(tweak_info&);
	void(*on_collapse)(tweak_info&);
	void(*on_update)(tweak_info&);
	void(*convert_mem_to_tweak)(tweak_info&, void*);
	void(*convert_tweak_to_mem)(tweak_info&, void*);
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
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

struct _class_15
{
	struct
	{
		uint8 active : 1;
		uint8 dirty : 1;
		uint8 show_backdrop : 1;
		uint8 visible : 1;
		uint8 hack_invisible : 1;
	};
};

basic_rect screen_bounds;
basic_rect default_adjust;
int8 buffer[16];
int8 buffer[16];
uint32 gFXSurfaceFlags;
xFXRing sPatrickStunRing[3];
xFXRing sThunderRing[1];
xFXRing sHammerRing[1];
xFXRing sPorterRing[2];
xFXRing sMuscleArmRing[1];
float32 defaultGooTimes[4];
float32 defaultGooWarbc[4];
zFXGooInstance zFXGooInstances[24];
ztextbox* goo_timer_textbox;
xVec3 bubblehit_pos_rnd;
xVec3 bubblehit_vel_rnd;
float32 bubblehit_vel_scale;
xVec3 bubbletrail_pos_rnd;
xVec3 bubbletrail_vel_rnd;
float32 bubbletrail_vel_scale;
xVec3 bubblewall_scale;
xVec3 bubblewall_velscale;
popper_data poppers[8];
entrail_type entrail_types[2];
entrail_data* entrails;
uint32 entrails_size;
uint32 gActiveHeap;
zGlobals globals;
xVec3 m_UnitAxisY;
uint8* giAnimScratch;
uint32 ourGlobals[4096];
xVec3 g_O3;
RpAtomic*(*gAtomicRenderCallBack)(RpAtomic*);
RxPipeline* xFXgooPipeline;
_zEnv* gCurEnv;
_tagClimate gClimate;
RpAtomic*(*AtomicDefaultRenderCallBack)(RpAtomic*);
RpAtomic*(*zFXGooRenderAtomic)(RpAtomic*);
void(*on_spawn_bubble_wall)(tweak_info&);

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
	uint32 hash[2];
	uint32 hash_dff[2];
	uint32 hash_minf[2];
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
	// Line 2502, Address: 0x175870, Func Offset: 0
	// Line 2505, Address: 0x175888, Func Offset: 0x18
	// Line 2502, Address: 0x17588c, Func Offset: 0x1c
	// Line 2505, Address: 0x175890, Func Offset: 0x20
	// Line 2502, Address: 0x175894, Func Offset: 0x24
	// Line 2505, Address: 0x17589c, Func Offset: 0x2c
	// Line 2502, Address: 0x1758a0, Func Offset: 0x30
	// Line 2505, Address: 0x1758a4, Func Offset: 0x34
	// Line 2502, Address: 0x1758a8, Func Offset: 0x38
	// Line 2505, Address: 0x1758ac, Func Offset: 0x3c
	// Line 2502, Address: 0x1758b0, Func Offset: 0x40
	// Line 2505, Address: 0x1758b4, Func Offset: 0x44
	// Line 2507, Address: 0x1758c8, Func Offset: 0x58
	// Line 2508, Address: 0x1758d4, Func Offset: 0x64
	// Line 2509, Address: 0x1758e8, Func Offset: 0x78
	// Line 2510, Address: 0x1758f8, Func Offset: 0x88
	// Line 2509, Address: 0x1758fc, Func Offset: 0x8c
	// Line 2510, Address: 0x175900, Func Offset: 0x90
	// Line 2509, Address: 0x175904, Func Offset: 0x94
	// Line 2510, Address: 0x175910, Func Offset: 0xa0
	// Line 2516, Address: 0x175918, Func Offset: 0xa8
	// Line 2517, Address: 0x17591c, Func Offset: 0xac
	// Line 2519, Address: 0x175938, Func Offset: 0xc8
	// Line 2520, Address: 0x17593c, Func Offset: 0xcc
	// Line 2521, Address: 0x17594c, Func Offset: 0xdc
	// Line 2522, Address: 0x175950, Func Offset: 0xe0
	// Line 2521, Address: 0x17595c, Func Offset: 0xec
	// Line 2522, Address: 0x175964, Func Offset: 0xf4
	// Line 2524, Address: 0x175968, Func Offset: 0xf8
	// Line 2526, Address: 0x175990, Func Offset: 0x120
	// Line 2527, Address: 0x175998, Func Offset: 0x128
	// Line 2529, Address: 0x1759a0, Func Offset: 0x130
	// Line 2527, Address: 0x1759a8, Func Offset: 0x138
	// Line 2529, Address: 0x1759b0, Func Offset: 0x140
	// Line 2530, Address: 0x1759b8, Func Offset: 0x148
	// Line 2532, Address: 0x1759cc, Func Offset: 0x15c
	// Line 2536, Address: 0x1759d4, Func Offset: 0x164
	// Line 2537, Address: 0x1759f0, Func Offset: 0x180
	// Line 2539, Address: 0x175a08, Func Offset: 0x198
	// Line 2540, Address: 0x175a0c, Func Offset: 0x19c
	// Line 2541, Address: 0x175a1c, Func Offset: 0x1ac
	// Line 2542, Address: 0x175a20, Func Offset: 0x1b0
	// Line 2541, Address: 0x175a30, Func Offset: 0x1c0
	// Line 2542, Address: 0x175a34, Func Offset: 0x1c4
	// Line 2544, Address: 0x175a38, Func Offset: 0x1c8
	// Line 2546, Address: 0x175a60, Func Offset: 0x1f0
	// Line 2547, Address: 0x175a70, Func Offset: 0x200
	// Line 2548, Address: 0x175a7c, Func Offset: 0x20c
	// Line 2550, Address: 0x175a88, Func Offset: 0x218
	// Line 2552, Address: 0x175a90, Func Offset: 0x220
	// Line 2550, Address: 0x175a98, Func Offset: 0x228
	// Line 2552, Address: 0x175aa0, Func Offset: 0x230
	// Line 2553, Address: 0x175aa8, Func Offset: 0x238
	// Line 2554, Address: 0x175ab8, Func Offset: 0x248
	// Func End, Address: 0x175ae8, Func Offset: 0x278
}

// update_entrails__Ff
// Start address: 0x175af0
void update_entrails(float32 dt)
{
	entrail_data* it;
	entrail_data* end;
	// Line 2496, Address: 0x175af0, Func Offset: 0
	// Line 2497, Address: 0x175b18, Func Offset: 0x28
	// Line 2496, Address: 0x175b1c, Func Offset: 0x2c
	// Line 2497, Address: 0x175b20, Func Offset: 0x30
	// Line 2498, Address: 0x175b40, Func Offset: 0x50
	// Line 2499, Address: 0x175d50, Func Offset: 0x260
	// Func End, Address: 0x175d7c, Func Offset: 0x28c
}

// zFXPopOff__FR4xEntff
// Start address: 0x175eb0
void zFXPopOff(xEnt& ent, float32 rate, float32 time)
{
	popper_data* popper;
	xSphere o;
	// Line 2293, Address: 0x175eb0, Func Offset: 0
	// Line 2294, Address: 0x175ecc, Func Offset: 0x1c
	// Line 2295, Address: 0x175fe8, Func Offset: 0x138
	// Line 2296, Address: 0x176108, Func Offset: 0x258
	// Line 2298, Address: 0x176110, Func Offset: 0x260
	// Line 2299, Address: 0x176128, Func Offset: 0x278
	// Line 2300, Address: 0x176148, Func Offset: 0x298
	// Line 2302, Address: 0x176158, Func Offset: 0x2a8
	// Line 2305, Address: 0x17616c, Func Offset: 0x2bc
	// Line 2304, Address: 0x176170, Func Offset: 0x2c0
	// Line 2305, Address: 0x176174, Func Offset: 0x2c4
	// Line 2306, Address: 0x1761d8, Func Offset: 0x328
	// Line 2307, Address: 0x1761dc, Func Offset: 0x32c
	// Line 2308, Address: 0x1761e4, Func Offset: 0x334
	// Line 2309, Address: 0x1761ec, Func Offset: 0x33c
	// Line 2312, Address: 0x1761f0, Func Offset: 0x340
	// Line 2313, Address: 0x1761fc, Func Offset: 0x34c
	// Line 2315, Address: 0x176200, Func Offset: 0x350
	// Line 2321, Address: 0x176204, Func Offset: 0x354
	// Line 2325, Address: 0x176208, Func Offset: 0x358
	// Line 2313, Address: 0x17620c, Func Offset: 0x35c
	// Line 2315, Address: 0x176210, Func Offset: 0x360
	// Line 2316, Address: 0x176214, Func Offset: 0x364
	// Line 2317, Address: 0x176218, Func Offset: 0x368
	// Line 2318, Address: 0x17621c, Func Offset: 0x36c
	// Line 2319, Address: 0x176220, Func Offset: 0x370
	// Line 2320, Address: 0x176224, Func Offset: 0x374
	// Line 2321, Address: 0x176228, Func Offset: 0x378
	// Line 2322, Address: 0x17622c, Func Offset: 0x37c
	// Line 2324, Address: 0x176230, Func Offset: 0x380
	// Line 2325, Address: 0x176240, Func Offset: 0x390
	// Line 2326, Address: 0x176278, Func Offset: 0x3c8
	// Func End, Address: 0x176294, Func Offset: 0x3e4
}

// zFXPopOn__FR4xEntff
// Start address: 0x1762a0
void zFXPopOn(xEnt& ent, float32 rate, float32 time)
{
	popper_data* popper;
	xSphere o;
	xVec3 tiny;
	// Line 2256, Address: 0x1762a0, Func Offset: 0
	// Line 2257, Address: 0x1762bc, Func Offset: 0x1c
	// Line 2258, Address: 0x1763d8, Func Offset: 0x138
	// Line 2259, Address: 0x1764f8, Func Offset: 0x258
	// Line 2261, Address: 0x176500, Func Offset: 0x260
	// Line 2262, Address: 0x176518, Func Offset: 0x278
	// Line 2263, Address: 0x176538, Func Offset: 0x298
	// Line 2265, Address: 0x176548, Func Offset: 0x2a8
	// Line 2268, Address: 0x17655c, Func Offset: 0x2bc
	// Line 2267, Address: 0x176560, Func Offset: 0x2c0
	// Line 2268, Address: 0x176564, Func Offset: 0x2c4
	// Line 2269, Address: 0x1765c8, Func Offset: 0x328
	// Line 2270, Address: 0x1765cc, Func Offset: 0x32c
	// Line 2271, Address: 0x1765d4, Func Offset: 0x334
	// Line 2272, Address: 0x1765dc, Func Offset: 0x33c
	// Line 2275, Address: 0x1765e0, Func Offset: 0x340
	// Line 2276, Address: 0x1765ec, Func Offset: 0x34c
	// Line 2288, Address: 0x1765f0, Func Offset: 0x350
	// Line 2278, Address: 0x1765f4, Func Offset: 0x354
	// Line 2283, Address: 0x1765f8, Func Offset: 0x358
	// Line 2284, Address: 0x1765fc, Func Offset: 0x35c
	// Line 2288, Address: 0x176600, Func Offset: 0x360
	// Line 2276, Address: 0x176608, Func Offset: 0x368
	// Line 2278, Address: 0x17660c, Func Offset: 0x36c
	// Line 2279, Address: 0x176610, Func Offset: 0x370
	// Line 2280, Address: 0x176614, Func Offset: 0x374
	// Line 2281, Address: 0x176618, Func Offset: 0x378
	// Line 2282, Address: 0x17661c, Func Offset: 0x37c
	// Line 2283, Address: 0x176620, Func Offset: 0x380
	// Line 2284, Address: 0x176624, Func Offset: 0x384
	// Line 2285, Address: 0x176628, Func Offset: 0x388
	// Line 2286, Address: 0x17662c, Func Offset: 0x38c
	// Line 2288, Address: 0x176648, Func Offset: 0x3a8
	// Line 2289, Address: 0x176658, Func Offset: 0x3b8
	// Line 2290, Address: 0x176690, Func Offset: 0x3f0
	// Func End, Address: 0x1766ac, Func Offset: 0x40c
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
	// Line 2090, Address: 0x1766b0, Func Offset: 0
	// Line 2092, Address: 0x1766b8, Func Offset: 0x8
	// Line 2093, Address: 0x1766c8, Func Offset: 0x18
	// Line 2095, Address: 0x1766d4, Func Offset: 0x24
	// Line 2096, Address: 0x1766d8, Func Offset: 0x28
	// Line 2097, Address: 0x1766dc, Func Offset: 0x2c
	// Line 2103, Address: 0x1766e0, Func Offset: 0x30
	// Line 2101, Address: 0x1766e4, Func Offset: 0x34
	// Line 2103, Address: 0x1766e8, Func Offset: 0x38
	// Line 2101, Address: 0x1766ec, Func Offset: 0x3c
	// Line 2099, Address: 0x1766f0, Func Offset: 0x40
	// Line 2100, Address: 0x1766f4, Func Offset: 0x44
	// Line 2099, Address: 0x1766f8, Func Offset: 0x48
	// Line 2101, Address: 0x1766fc, Func Offset: 0x4c
	// Line 2103, Address: 0x176708, Func Offset: 0x58
	// Line 2105, Address: 0x176724, Func Offset: 0x74
	// Line 2110, Address: 0x176728, Func Offset: 0x78
	// Line 2111, Address: 0x176788, Func Offset: 0xd8
	// Line 2114, Address: 0x17678c, Func Offset: 0xdc
	// Line 2111, Address: 0x176790, Func Offset: 0xe0
	// Line 2114, Address: 0x176794, Func Offset: 0xe4
	// Line 2115, Address: 0x1767b8, Func Offset: 0x108
	// Line 2116, Address: 0x176818, Func Offset: 0x168
	// Line 2118, Address: 0x176840, Func Offset: 0x190
	// Line 2121, Address: 0x176848, Func Offset: 0x198
	// Line 2123, Address: 0x1768e4, Func Offset: 0x234
	// Line 2127, Address: 0x1768e8, Func Offset: 0x238
	// Line 2130, Address: 0x176900, Func Offset: 0x250
	// Line 2131, Address: 0x176908, Func Offset: 0x258
	// Line 2135, Address: 0x176910, Func Offset: 0x260
	// Line 2134, Address: 0x176914, Func Offset: 0x264
	// Line 2135, Address: 0x176918, Func Offset: 0x268
	// Line 2140, Address: 0x176928, Func Offset: 0x278
	// Line 2139, Address: 0x17692c, Func Offset: 0x27c
	// Line 2140, Address: 0x176938, Func Offset: 0x288
	// Line 2142, Address: 0x17694c, Func Offset: 0x29c
	// Line 2144, Address: 0x176954, Func Offset: 0x2a4
	// Line 2143, Address: 0x176958, Func Offset: 0x2a8
	// Line 2144, Address: 0x176960, Func Offset: 0x2b0
	// Line 2148, Address: 0x176968, Func Offset: 0x2b8
	// Func End, Address: 0x176974, Func Offset: 0x2c4
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
	// Line 1997, Address: 0x176980, Func Offset: 0
	// Line 2000, Address: 0x1769c4, Func Offset: 0x44
	// Line 2002, Address: 0x1769d8, Func Offset: 0x58
	// Line 2003, Address: 0x1769e0, Func Offset: 0x60
	// Line 2004, Address: 0x1769e8, Func Offset: 0x68
	// Line 2006, Address: 0x1769f8, Func Offset: 0x78
	// Line 2007, Address: 0x176a0c, Func Offset: 0x8c
	// Line 2008, Address: 0x176a18, Func Offset: 0x98
	// Line 2011, Address: 0x176a20, Func Offset: 0xa0
	// Line 2008, Address: 0x176a28, Func Offset: 0xa8
	// Line 2013, Address: 0x176a2c, Func Offset: 0xac
	// Line 2011, Address: 0x176a30, Func Offset: 0xb0
	// Line 2013, Address: 0x176a38, Func Offset: 0xb8
	// Line 2015, Address: 0x176a44, Func Offset: 0xc4
	// Line 2016, Address: 0x176a48, Func Offset: 0xc8
	// Line 2017, Address: 0x176ab4, Func Offset: 0x134
	// Line 2018, Address: 0x176ad8, Func Offset: 0x158
	// Line 2019, Address: 0x176b00, Func Offset: 0x180
	// Line 2022, Address: 0x176b28, Func Offset: 0x1a8
	// Line 2023, Address: 0x176b2c, Func Offset: 0x1ac
	// Line 2024, Address: 0x176b30, Func Offset: 0x1b0
	// Line 2022, Address: 0x176b34, Func Offset: 0x1b4
	// Line 2023, Address: 0x176b3c, Func Offset: 0x1bc
	// Line 2027, Address: 0x176b40, Func Offset: 0x1c0
	// Line 2029, Address: 0x176b48, Func Offset: 0x1c8
	// Line 2030, Address: 0x176b58, Func Offset: 0x1d8
	// Line 2032, Address: 0x176b5c, Func Offset: 0x1dc
	// Line 2030, Address: 0x176b64, Func Offset: 0x1e4
	// Line 2032, Address: 0x176b84, Func Offset: 0x204
	// Line 2034, Address: 0x176b94, Func Offset: 0x214
	// Line 2035, Address: 0x176bb4, Func Offset: 0x234
	// Line 2036, Address: 0x176bd4, Func Offset: 0x254
	// Line 2038, Address: 0x176bf8, Func Offset: 0x278
	// Line 2040, Address: 0x176c10, Func Offset: 0x290
	// Line 2041, Address: 0x176c30, Func Offset: 0x2b0
	// Line 2042, Address: 0x176c50, Func Offset: 0x2d0
	// Line 2044, Address: 0x176c74, Func Offset: 0x2f4
	// Line 2047, Address: 0x176c88, Func Offset: 0x308
	// Line 2048, Address: 0x176ca0, Func Offset: 0x320
	// Line 2050, Address: 0x176d10, Func Offset: 0x390
	// Line 2051, Address: 0x176d24, Func Offset: 0x3a4
	// Line 2061, Address: 0x176d2c, Func Offset: 0x3ac
	// Func End, Address: 0x176d68, Func Offset: 0x3e8
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
	xVec3 v[3];
	xVec3 n[3];
	// Line 1914, Address: 0x176d70, Func Offset: 0
	// Line 1917, Address: 0x176d94, Func Offset: 0x24
	// Line 1920, Address: 0x176da0, Func Offset: 0x30
	// Line 1928, Address: 0x176e04, Func Offset: 0x94
	// Line 1930, Address: 0x176e14, Func Offset: 0xa4
	// Line 1932, Address: 0x176e20, Func Offset: 0xb0
	// Line 1933, Address: 0x176e28, Func Offset: 0xb8
	// Line 1934, Address: 0x176e2c, Func Offset: 0xbc
	// Line 1936, Address: 0x176e38, Func Offset: 0xc8
	// Line 1941, Address: 0x176e48, Func Offset: 0xd8
	// Line 1942, Address: 0x176e68, Func Offset: 0xf8
	// Line 1948, Address: 0x176e7c, Func Offset: 0x10c
	// Func End, Address: 0x176e9c, Func Offset: 0x12c
}

// random_point_on_triangle__17@unnamed@zFX_cpp@FR5xVec3R5xVec3PC5xVec3PC5xVec3
// Start address: 0x176ea0
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n)
{
	float32 s;
	float32 t;
	// Line 1893, Address: 0x176ea0, Func Offset: 0
	// Line 1895, Address: 0x176ec8, Func Offset: 0x28
	// Line 1898, Address: 0x176ed8, Func Offset: 0x38
	// Line 1909, Address: 0x176f00, Func Offset: 0x60
	// Line 1898, Address: 0x176f04, Func Offset: 0x64
	// Line 1909, Address: 0x176f08, Func Offset: 0x68
	// Line 1901, Address: 0x176f0c, Func Offset: 0x6c
	// Line 1909, Address: 0x176f14, Func Offset: 0x74
	// Line 1901, Address: 0x176f18, Func Offset: 0x78
	// Line 1902, Address: 0x176f34, Func Offset: 0x94
	// Line 1903, Address: 0x176f58, Func Offset: 0xb8
	// Line 1906, Address: 0x176f7c, Func Offset: 0xdc
	// Line 1907, Address: 0x176fa0, Func Offset: 0x100
	// Line 1908, Address: 0x176fc4, Func Offset: 0x124
	// Line 1909, Address: 0x176ff0, Func Offset: 0x150
	// Line 1910, Address: 0x177068, Func Offset: 0x1c8
	// Func End, Address: 0x177088, Func Offset: 0x1e8
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
	// Line 1858, Address: 0x177090, Func Offset: 0
	// Line 1859, Address: 0x1770d0, Func Offset: 0x40
	// Line 1860, Address: 0x1770d8, Func Offset: 0x48
	// Line 1861, Address: 0x1770dc, Func Offset: 0x4c
	// Line 1859, Address: 0x1770e0, Func Offset: 0x50
	// Line 1861, Address: 0x1770e4, Func Offset: 0x54
	// Line 1862, Address: 0x1770e8, Func Offset: 0x58
	// Line 1864, Address: 0x1770ec, Func Offset: 0x5c
	// Line 1866, Address: 0x1770f4, Func Offset: 0x64
	// Line 1867, Address: 0x177100, Func Offset: 0x70
	// Line 1868, Address: 0x177108, Func Offset: 0x78
	// Line 1869, Address: 0x177118, Func Offset: 0x88
	// Line 1871, Address: 0x177390, Func Offset: 0x300
	// Line 1876, Address: 0x177398, Func Offset: 0x308
	// Line 1883, Address: 0x1773f8, Func Offset: 0x368
	// Line 1876, Address: 0x1773fc, Func Offset: 0x36c
	// Line 1883, Address: 0x177400, Func Offset: 0x370
	// Line 1876, Address: 0x177404, Func Offset: 0x374
	// Line 1883, Address: 0x177408, Func Offset: 0x378
	// Line 1876, Address: 0x17740c, Func Offset: 0x37c
	// Line 1877, Address: 0x177478, Func Offset: 0x3e8
	// Line 1878, Address: 0x177530, Func Offset: 0x4a0
	// Line 1882, Address: 0x1775e8, Func Offset: 0x558
	// Line 1883, Address: 0x17767c, Func Offset: 0x5ec
	// Line 1884, Address: 0x1776f8, Func Offset: 0x668
	// Line 1885, Address: 0x177724, Func Offset: 0x694
	// Line 1884, Address: 0x177730, Func Offset: 0x6a0
	// Line 1885, Address: 0x177798, Func Offset: 0x708
	// Line 1886, Address: 0x177818, Func Offset: 0x788
	// Line 1887, Address: 0x177840, Func Offset: 0x7b0
	// Line 1886, Address: 0x177848, Func Offset: 0x7b8
	// Line 1887, Address: 0x17786c, Func Offset: 0x7dc
	// Line 1886, Address: 0x177870, Func Offset: 0x7e0
	// Line 1887, Address: 0x1778b8, Func Offset: 0x828
	// Line 1888, Address: 0x177934, Func Offset: 0x8a4
	// Line 1889, Address: 0x177938, Func Offset: 0x8a8
	// Func End, Address: 0x177968, Func Offset: 0x8d8
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
	// Line 1737, Address: 0x1779c0, Func Offset: 0
	// Line 1738, Address: 0x1779cc, Func Offset: 0xc
	// Line 1740, Address: 0x177a00, Func Offset: 0x40
	// Line 1744, Address: 0x177a10, Func Offset: 0x50
	// Line 1747, Address: 0x177a28, Func Offset: 0x68
	// Line 1749, Address: 0x177a2c, Func Offset: 0x6c
	// Line 1750, Address: 0x177a30, Func Offset: 0x70
	// Line 1769, Address: 0x177a58, Func Offset: 0x98
	// Line 1750, Address: 0x177a60, Func Offset: 0xa0
	// Line 1753, Address: 0x177a64, Func Offset: 0xa4
	// Line 1754, Address: 0x177a70, Func Offset: 0xb0
	// Line 1757, Address: 0x177a80, Func Offset: 0xc0
	// Line 1760, Address: 0x177a88, Func Offset: 0xc8
	// Line 1761, Address: 0x177a8c, Func Offset: 0xcc
	// Line 1760, Address: 0x177a90, Func Offset: 0xd0
	// Line 1764, Address: 0x177a94, Func Offset: 0xd4
	// Line 1766, Address: 0x177aa8, Func Offset: 0xe8
	// Line 1767, Address: 0x177aac, Func Offset: 0xec
	// Line 1769, Address: 0x177ab0, Func Offset: 0xf0
	// Line 1768, Address: 0x177ab4, Func Offset: 0xf4
	// Line 1769, Address: 0x177ab8, Func Offset: 0xf8
	// Line 1766, Address: 0x177abc, Func Offset: 0xfc
	// Line 1767, Address: 0x177ac4, Func Offset: 0x104
	// Line 1766, Address: 0x177acc, Func Offset: 0x10c
	// Line 1767, Address: 0x177ad0, Func Offset: 0x110
	// Line 1766, Address: 0x177ad8, Func Offset: 0x118
	// Line 1768, Address: 0x177adc, Func Offset: 0x11c
	// Line 1769, Address: 0x177ae8, Func Offset: 0x128
	// Line 1770, Address: 0x177c34, Func Offset: 0x274
	// Line 1771, Address: 0x177c38, Func Offset: 0x278
	// Line 1773, Address: 0x177c48, Func Offset: 0x288
	// Line 1774, Address: 0x177c54, Func Offset: 0x294
	// Line 1776, Address: 0x177c60, Func Offset: 0x2a0
	// Line 1783, Address: 0x177c68, Func Offset: 0x2a8
	// Func End, Address: 0x177c78, Func Offset: 0x2b8
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
	// Line 1600, Address: 0x177c80, Func Offset: 0
	// Line 1601, Address: 0x177c84, Func Offset: 0x4
	// Line 1600, Address: 0x177c88, Func Offset: 0x8
	// Line 1601, Address: 0x177c8c, Func Offset: 0xc
	// Line 1600, Address: 0x177c90, Func Offset: 0x10
	// Line 1601, Address: 0x177cb4, Func Offset: 0x34
	// Line 1600, Address: 0x177cb8, Func Offset: 0x38
	// Line 1601, Address: 0x177ce0, Func Offset: 0x60
	// Line 1602, Address: 0x177cec, Func Offset: 0x6c
	// Line 1604, Address: 0x177cf8, Func Offset: 0x78
	// Line 1605, Address: 0x177d08, Func Offset: 0x88
	// Line 1608, Address: 0x177d20, Func Offset: 0xa0
	// Line 1609, Address: 0x177d34, Func Offset: 0xb4
	// Line 1610, Address: 0x177d58, Func Offset: 0xd8
	// Line 1611, Address: 0x177d64, Func Offset: 0xe4
	// Line 1610, Address: 0x177d68, Func Offset: 0xe8
	// Line 1611, Address: 0x177d70, Func Offset: 0xf0
	// Line 1612, Address: 0x177d88, Func Offset: 0x108
	// Line 1614, Address: 0x177d98, Func Offset: 0x118
	// Line 1611, Address: 0x177da0, Func Offset: 0x120
	// Line 1612, Address: 0x177db0, Func Offset: 0x130
	// Line 1613, Address: 0x177e84, Func Offset: 0x204
	// Line 1614, Address: 0x177ea4, Func Offset: 0x224
	// Line 1615, Address: 0x177f04, Func Offset: 0x284
	// Line 1614, Address: 0x177f08, Func Offset: 0x288
	// Line 1615, Address: 0x177f0c, Func Offset: 0x28c
	// Line 1616, Address: 0x177f14, Func Offset: 0x294
	// Line 1614, Address: 0x177f18, Func Offset: 0x298
	// Line 1615, Address: 0x177f24, Func Offset: 0x2a4
	// Line 1616, Address: 0x177fa8, Func Offset: 0x328
	// Line 1618, Address: 0x177fb0, Func Offset: 0x330
	// Line 1619, Address: 0x177fc8, Func Offset: 0x348
	// Line 1620, Address: 0x177fd0, Func Offset: 0x350
	// Func End, Address: 0x178018, Func Offset: 0x398
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
	// Line 1574, Address: 0x178020, Func Offset: 0
	// Line 1575, Address: 0x178024, Func Offset: 0x4
	// Line 1574, Address: 0x178028, Func Offset: 0x8
	// Line 1575, Address: 0x17802c, Func Offset: 0xc
	// Line 1574, Address: 0x178030, Func Offset: 0x10
	// Line 1575, Address: 0x178048, Func Offset: 0x28
	// Line 1574, Address: 0x17804c, Func Offset: 0x2c
	// Line 1575, Address: 0x178074, Func Offset: 0x54
	// Line 1576, Address: 0x17807c, Func Offset: 0x5c
	// Line 1575, Address: 0x178080, Func Offset: 0x60
	// Line 1576, Address: 0x178084, Func Offset: 0x64
	// Line 1577, Address: 0x17808c, Func Offset: 0x6c
	// Line 1580, Address: 0x178094, Func Offset: 0x74
	// Line 1578, Address: 0x178098, Func Offset: 0x78
	// Line 1579, Address: 0x17809c, Func Offset: 0x7c
	// Line 1580, Address: 0x1780a0, Func Offset: 0x80
	// Line 1582, Address: 0x1780b8, Func Offset: 0x98
	// Line 1581, Address: 0x1780bc, Func Offset: 0x9c
	// Line 1582, Address: 0x1780c0, Func Offset: 0xa0
	// Line 1584, Address: 0x1780c4, Func Offset: 0xa4
	// Line 1582, Address: 0x1780cc, Func Offset: 0xac
	// Line 1584, Address: 0x1780d0, Func Offset: 0xb0
	// Line 1581, Address: 0x1780d4, Func Offset: 0xb4
	// Line 1582, Address: 0x1780e8, Func Offset: 0xc8
	// Line 1584, Address: 0x1780f0, Func Offset: 0xd0
	// Line 1585, Address: 0x178164, Func Offset: 0x144
	// Line 1586, Address: 0x178184, Func Offset: 0x164
	// Line 1588, Address: 0x178194, Func Offset: 0x174
	// Line 1590, Address: 0x1781a4, Func Offset: 0x184
	// Line 1591, Address: 0x1781c4, Func Offset: 0x1a4
	// Line 1592, Address: 0x1781e4, Func Offset: 0x1c4
	// Line 1593, Address: 0x1781f0, Func Offset: 0x1d0
	// Line 1592, Address: 0x1781f4, Func Offset: 0x1d4
	// Line 1593, Address: 0x1781f8, Func Offset: 0x1d8
	// Line 1592, Address: 0x1781fc, Func Offset: 0x1dc
	// Line 1593, Address: 0x178204, Func Offset: 0x1e4
	// Line 1592, Address: 0x178208, Func Offset: 0x1e8
	// Line 1593, Address: 0x178214, Func Offset: 0x1f4
	// Line 1594, Address: 0x178220, Func Offset: 0x200
	// Line 1595, Address: 0x178238, Func Offset: 0x218
	// Line 1597, Address: 0x178240, Func Offset: 0x220
	// Func End, Address: 0x17827c, Func Offset: 0x25c
}

// zFX_SpawnBubbleWall__Fv
// Start address: 0x178280
void zFX_SpawnBubbleWall()
{
	RwCamera* camera;
	RwMatrixTag* mat;
	xVec3 pos[100];
	xVec3 vel[100];
	xVec3* pp;
	xVec3* vp;
	uint32 i;
	// Line 1518, Address: 0x178280, Func Offset: 0
	// Line 1519, Address: 0x178284, Func Offset: 0x4
	// Line 1518, Address: 0x178288, Func Offset: 0x8
	// Line 1519, Address: 0x1782a8, Func Offset: 0x28
	// Line 1520, Address: 0x1782ac, Func Offset: 0x2c
	// Line 1524, Address: 0x1782b4, Func Offset: 0x34
	// Line 1531, Address: 0x1782b8, Func Offset: 0x38
	// Line 1532, Address: 0x1782bc, Func Offset: 0x3c
	// Line 1551, Address: 0x1782c0, Func Offset: 0x40
	// Line 1524, Address: 0x1782c4, Func Offset: 0x44
	// Line 1552, Address: 0x1782d0, Func Offset: 0x50
	// Line 1553, Address: 0x17830c, Func Offset: 0x8c
	// Line 1554, Address: 0x178348, Func Offset: 0xc8
	// Line 1556, Address: 0x17837c, Func Offset: 0xfc
	// Line 1554, Address: 0x178388, Func Offset: 0x108
	// Line 1557, Address: 0x178394, Func Offset: 0x114
	// Line 1556, Address: 0x178398, Func Offset: 0x118
	// Line 1557, Address: 0x1783a0, Func Offset: 0x120
	// Line 1556, Address: 0x1783b4, Func Offset: 0x134
	// Line 1557, Address: 0x1783b8, Func Offset: 0x138
	// Line 1556, Address: 0x1783c4, Func Offset: 0x144
	// Line 1557, Address: 0x1783c8, Func Offset: 0x148
	// Line 1559, Address: 0x1783cc, Func Offset: 0x14c
	// Line 1560, Address: 0x1783ec, Func Offset: 0x16c
	// Line 1561, Address: 0x17840c, Func Offset: 0x18c
	// Line 1562, Address: 0x178420, Func Offset: 0x1a0
	// Line 1561, Address: 0x178424, Func Offset: 0x1a4
	// Line 1562, Address: 0x178428, Func Offset: 0x1a8
	// Line 1561, Address: 0x17842c, Func Offset: 0x1ac
	// Line 1562, Address: 0x178430, Func Offset: 0x1b0
	// Line 1561, Address: 0x178434, Func Offset: 0x1b4
	// Line 1562, Address: 0x17843c, Func Offset: 0x1bc
	// Line 1563, Address: 0x178444, Func Offset: 0x1c4
	// Line 1564, Address: 0x17845c, Func Offset: 0x1dc
	// Func End, Address: 0x178488, Func Offset: 0x208
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
	// Line 1483, Address: 0x178490, Func Offset: 0
	// Line 1485, Address: 0x1784c8, Func Offset: 0x38
	// Line 1486, Address: 0x1784d0, Func Offset: 0x40
	// Line 1487, Address: 0x1784d8, Func Offset: 0x48
	// Line 1488, Address: 0x1784e0, Func Offset: 0x50
	// Line 1490, Address: 0x1784e8, Func Offset: 0x58
	// Line 1491, Address: 0x1784f8, Func Offset: 0x68
	// Line 1490, Address: 0x1784fc, Func Offset: 0x6c
	// Line 1491, Address: 0x178500, Func Offset: 0x70
	// Line 1492, Address: 0x178508, Func Offset: 0x78
	// Line 1495, Address: 0x178510, Func Offset: 0x80
	// Line 1493, Address: 0x178514, Func Offset: 0x84
	// Line 1494, Address: 0x178518, Func Offset: 0x88
	// Line 1495, Address: 0x17851c, Func Offset: 0x8c
	// Line 1496, Address: 0x178528, Func Offset: 0x98
	// Line 1497, Address: 0x17853c, Func Offset: 0xac
	// Line 1498, Address: 0x178560, Func Offset: 0xd0
	// Line 1499, Address: 0x178584, Func Offset: 0xf4
	// Line 1501, Address: 0x1785a8, Func Offset: 0x118
	// Line 1502, Address: 0x1785c4, Func Offset: 0x134
	// Line 1503, Address: 0x1785e0, Func Offset: 0x150
	// Line 1504, Address: 0x1785ec, Func Offset: 0x15c
	// Line 1503, Address: 0x1785f0, Func Offset: 0x160
	// Line 1504, Address: 0x1785f4, Func Offset: 0x164
	// Line 1503, Address: 0x1785f8, Func Offset: 0x168
	// Line 1504, Address: 0x178600, Func Offset: 0x170
	// Line 1503, Address: 0x178604, Func Offset: 0x174
	// Line 1504, Address: 0x17860c, Func Offset: 0x17c
	// Line 1505, Address: 0x178618, Func Offset: 0x188
	// Line 1506, Address: 0x178628, Func Offset: 0x198
	// Line 1508, Address: 0x178630, Func Offset: 0x1a0
	// Func End, Address: 0x178660, Func Offset: 0x1d0
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
	// Line 1451, Address: 0x178660, Func Offset: 0
	// Line 1452, Address: 0x1786ac, Func Offset: 0x4c
	// Line 1453, Address: 0x1786b4, Func Offset: 0x54
	// Line 1454, Address: 0x1786c0, Func Offset: 0x60
	// Line 1455, Address: 0x1786c8, Func Offset: 0x68
	// Line 1457, Address: 0x1786d0, Func Offset: 0x70
	// Line 1458, Address: 0x1786e0, Func Offset: 0x80
	// Line 1457, Address: 0x1786e4, Func Offset: 0x84
	// Line 1458, Address: 0x1786e8, Func Offset: 0x88
	// Line 1459, Address: 0x1786f4, Func Offset: 0x94
	// Line 1461, Address: 0x1786fc, Func Offset: 0x9c
	// Line 1462, Address: 0x178710, Func Offset: 0xb0
	// Line 1465, Address: 0x178718, Func Offset: 0xb8
	// Line 1463, Address: 0x17871c, Func Offset: 0xbc
	// Line 1465, Address: 0x178720, Func Offset: 0xc0
	// Line 1464, Address: 0x178724, Func Offset: 0xc4
	// Line 1461, Address: 0x178728, Func Offset: 0xc8
	// Line 1462, Address: 0x178774, Func Offset: 0x114
	// Line 1465, Address: 0x1787cc, Func Offset: 0x16c
	// Line 1466, Address: 0x1787d8, Func Offset: 0x178
	// Line 1467, Address: 0x1787e0, Func Offset: 0x180
	// Line 1468, Address: 0x1787fc, Func Offset: 0x19c
	// Line 1467, Address: 0x17880c, Func Offset: 0x1ac
	// Line 1468, Address: 0x178810, Func Offset: 0x1b0
	// Line 1467, Address: 0x178814, Func Offset: 0x1b4
	// Line 1468, Address: 0x1788e4, Func Offset: 0x284
	// Line 1469, Address: 0x1789bc, Func Offset: 0x35c
	// Line 1470, Address: 0x1789e0, Func Offset: 0x380
	// Line 1471, Address: 0x178a04, Func Offset: 0x3a4
	// Line 1473, Address: 0x178a28, Func Offset: 0x3c8
	// Line 1474, Address: 0x178a4c, Func Offset: 0x3ec
	// Line 1475, Address: 0x178a70, Func Offset: 0x410
	// Line 1476, Address: 0x178a7c, Func Offset: 0x41c
	// Line 1475, Address: 0x178a80, Func Offset: 0x420
	// Line 1476, Address: 0x178a84, Func Offset: 0x424
	// Line 1475, Address: 0x178a88, Func Offset: 0x428
	// Line 1476, Address: 0x178a90, Func Offset: 0x430
	// Line 1475, Address: 0x178a94, Func Offset: 0x434
	// Line 1476, Address: 0x178aa4, Func Offset: 0x444
	// Line 1477, Address: 0x178ab0, Func Offset: 0x450
	// Line 1478, Address: 0x178ac4, Func Offset: 0x464
	// Line 1479, Address: 0x178acc, Func Offset: 0x46c
	// Func End, Address: 0x178b04, Func Offset: 0x4a4
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
	// Line 1421, Address: 0x178b10, Func Offset: 0
	// Line 1422, Address: 0x178b4c, Func Offset: 0x3c
	// Line 1423, Address: 0x178b54, Func Offset: 0x44
	// Line 1424, Address: 0x178b60, Func Offset: 0x50
	// Line 1425, Address: 0x178b68, Func Offset: 0x58
	// Line 1427, Address: 0x178b70, Func Offset: 0x60
	// Line 1428, Address: 0x178b80, Func Offset: 0x70
	// Line 1427, Address: 0x178b84, Func Offset: 0x74
	// Line 1428, Address: 0x178b88, Func Offset: 0x78
	// Line 1429, Address: 0x178b90, Func Offset: 0x80
	// Line 1430, Address: 0x178b98, Func Offset: 0x88
	// Line 1433, Address: 0x178bac, Func Offset: 0x9c
	// Line 1431, Address: 0x178bb0, Func Offset: 0xa0
	// Line 1433, Address: 0x178bb4, Func Offset: 0xa4
	// Line 1430, Address: 0x178bb8, Func Offset: 0xa8
	// Line 1432, Address: 0x178bbc, Func Offset: 0xac
	// Line 1430, Address: 0x178bc0, Func Offset: 0xb0
	// Line 1433, Address: 0x178c04, Func Offset: 0xf4
	// Line 1434, Address: 0x178c10, Func Offset: 0x100
	// Line 1435, Address: 0x178d04, Func Offset: 0x1f4
	// Line 1436, Address: 0x178d28, Func Offset: 0x218
	// Line 1437, Address: 0x178d4c, Func Offset: 0x23c
	// Line 1439, Address: 0x178d70, Func Offset: 0x260
	// Line 1440, Address: 0x178d8c, Func Offset: 0x27c
	// Line 1441, Address: 0x178da8, Func Offset: 0x298
	// Line 1442, Address: 0x178db4, Func Offset: 0x2a4
	// Line 1441, Address: 0x178db8, Func Offset: 0x2a8
	// Line 1442, Address: 0x178dbc, Func Offset: 0x2ac
	// Line 1441, Address: 0x178dc0, Func Offset: 0x2b0
	// Line 1442, Address: 0x178dc8, Func Offset: 0x2b8
	// Line 1441, Address: 0x178dcc, Func Offset: 0x2bc
	// Line 1442, Address: 0x178dd4, Func Offset: 0x2c4
	// Line 1443, Address: 0x178de0, Func Offset: 0x2d0
	// Line 1444, Address: 0x178df8, Func Offset: 0x2e8
	// Line 1446, Address: 0x178e00, Func Offset: 0x2f0
	// Func End, Address: 0x178e30, Func Offset: 0x320
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
	// Line 1392, Address: 0x178e30, Func Offset: 0
	// Line 1394, Address: 0x178e68, Func Offset: 0x38
	// Line 1395, Address: 0x178e70, Func Offset: 0x40
	// Line 1396, Address: 0x178e78, Func Offset: 0x48
	// Line 1397, Address: 0x178e80, Func Offset: 0x50
	// Line 1399, Address: 0x178e88, Func Offset: 0x58
	// Line 1400, Address: 0x178e98, Func Offset: 0x68
	// Line 1399, Address: 0x178e9c, Func Offset: 0x6c
	// Line 1400, Address: 0x178ea0, Func Offset: 0x70
	// Line 1401, Address: 0x178ea8, Func Offset: 0x78
	// Line 1404, Address: 0x178eb0, Func Offset: 0x80
	// Line 1402, Address: 0x178eb4, Func Offset: 0x84
	// Line 1403, Address: 0x178eb8, Func Offset: 0x88
	// Line 1404, Address: 0x178ebc, Func Offset: 0x8c
	// Line 1405, Address: 0x178ec8, Func Offset: 0x98
	// Line 1406, Address: 0x178edc, Func Offset: 0xac
	// Line 1407, Address: 0x178f00, Func Offset: 0xd0
	// Line 1408, Address: 0x178f24, Func Offset: 0xf4
	// Line 1410, Address: 0x178f48, Func Offset: 0x118
	// Line 1411, Address: 0x178f58, Func Offset: 0x128
	// Line 1412, Address: 0x178f68, Func Offset: 0x138
	// Line 1413, Address: 0x178f74, Func Offset: 0x144
	// Line 1412, Address: 0x178f80, Func Offset: 0x150
	// Line 1413, Address: 0x178f88, Func Offset: 0x158
	// Line 1414, Address: 0x178f90, Func Offset: 0x160
	// Line 1415, Address: 0x178fa8, Func Offset: 0x178
	// Line 1417, Address: 0x178fb0, Func Offset: 0x180
	// Func End, Address: 0x178fe0, Func Offset: 0x1b0
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
	// Line 1359, Address: 0x178fe0, Func Offset: 0
	// Line 1361, Address: 0x179018, Func Offset: 0x38
	// Line 1364, Address: 0x179020, Func Offset: 0x40
	// Line 1365, Address: 0x179028, Func Offset: 0x48
	// Line 1366, Address: 0x179030, Func Offset: 0x50
	// Line 1367, Address: 0x179038, Func Offset: 0x58
	// Line 1369, Address: 0x179040, Func Offset: 0x60
	// Line 1370, Address: 0x179050, Func Offset: 0x70
	// Line 1369, Address: 0x179054, Func Offset: 0x74
	// Line 1370, Address: 0x179058, Func Offset: 0x78
	// Line 1371, Address: 0x179060, Func Offset: 0x80
	// Line 1374, Address: 0x179068, Func Offset: 0x88
	// Line 1372, Address: 0x17906c, Func Offset: 0x8c
	// Line 1373, Address: 0x179070, Func Offset: 0x90
	// Line 1374, Address: 0x179074, Func Offset: 0x94
	// Line 1375, Address: 0x179080, Func Offset: 0xa0
	// Line 1376, Address: 0x179094, Func Offset: 0xb4
	// Line 1377, Address: 0x1790b8, Func Offset: 0xd8
	// Line 1378, Address: 0x1790dc, Func Offset: 0xfc
	// Line 1380, Address: 0x179100, Func Offset: 0x120
	// Line 1381, Address: 0x17911c, Func Offset: 0x13c
	// Line 1382, Address: 0x179138, Func Offset: 0x158
	// Line 1383, Address: 0x179144, Func Offset: 0x164
	// Line 1382, Address: 0x179148, Func Offset: 0x168
	// Line 1383, Address: 0x17914c, Func Offset: 0x16c
	// Line 1382, Address: 0x179150, Func Offset: 0x170
	// Line 1383, Address: 0x179158, Func Offset: 0x178
	// Line 1382, Address: 0x17915c, Func Offset: 0x17c
	// Line 1383, Address: 0x179164, Func Offset: 0x184
	// Line 1384, Address: 0x179170, Func Offset: 0x190
	// Line 1385, Address: 0x179188, Func Offset: 0x1a8
	// Line 1387, Address: 0x179190, Func Offset: 0x1b0
	// Func End, Address: 0x1791c0, Func Offset: 0x1e0
}

// zFX_SpawnBubbleTrail__FPC5xVec3Ui
// Start address: 0x1791c0
void zFX_SpawnBubbleTrail(xVec3* pos, uint32 num)
{
	// Line 1355, Address: 0x1791c0, Func Offset: 0
	// Func End, Address: 0x1791d4, Func Offset: 0x14
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
	// Line 1301, Address: 0x1791e0, Func Offset: 0
	// Line 1306, Address: 0x179220, Func Offset: 0x40
	// Line 1310, Address: 0x179228, Func Offset: 0x48
	// Line 1311, Address: 0x179230, Func Offset: 0x50
	// Line 1312, Address: 0x179238, Func Offset: 0x58
	// Line 1313, Address: 0x179240, Func Offset: 0x60
	// Line 1315, Address: 0x179248, Func Offset: 0x68
	// Line 1316, Address: 0x179258, Func Offset: 0x78
	// Line 1315, Address: 0x17925c, Func Offset: 0x7c
	// Line 1316, Address: 0x179260, Func Offset: 0x80
	// Line 1317, Address: 0x179268, Func Offset: 0x88
	// Line 1320, Address: 0x179270, Func Offset: 0x90
	// Line 1318, Address: 0x179274, Func Offset: 0x94
	// Line 1319, Address: 0x179278, Func Offset: 0x98
	// Line 1320, Address: 0x17927c, Func Offset: 0x9c
	// Line 1321, Address: 0x179288, Func Offset: 0xa8
	// Line 1322, Address: 0x17929c, Func Offset: 0xbc
	// Line 1323, Address: 0x1792c0, Func Offset: 0xe0
	// Line 1324, Address: 0x1792e4, Func Offset: 0x104
	// Line 1332, Address: 0x179308, Func Offset: 0x128
	// Line 1333, Address: 0x179320, Func Offset: 0x140
	// Line 1334, Address: 0x179338, Func Offset: 0x158
	// Line 1335, Address: 0x179344, Func Offset: 0x164
	// Line 1334, Address: 0x179348, Func Offset: 0x168
	// Line 1335, Address: 0x17934c, Func Offset: 0x16c
	// Line 1334, Address: 0x179350, Func Offset: 0x170
	// Line 1335, Address: 0x179354, Func Offset: 0x174
	// Line 1336, Address: 0x17935c, Func Offset: 0x17c
	// Line 1339, Address: 0x17937c, Func Offset: 0x19c
	// Line 1340, Address: 0x1793a0, Func Offset: 0x1c0
	// Line 1341, Address: 0x1793c4, Func Offset: 0x1e4
	// Line 1342, Address: 0x1793d0, Func Offset: 0x1f0
	// Line 1341, Address: 0x1793d4, Func Offset: 0x1f4
	// Line 1342, Address: 0x1793d8, Func Offset: 0x1f8
	// Line 1341, Address: 0x1793dc, Func Offset: 0x1fc
	// Line 1342, Address: 0x1793e4, Func Offset: 0x204
	// Line 1341, Address: 0x1793e8, Func Offset: 0x208
	// Line 1342, Address: 0x1793f8, Func Offset: 0x218
	// Line 1343, Address: 0x179400, Func Offset: 0x220
	// Line 1344, Address: 0x179418, Func Offset: 0x238
	// Line 1346, Address: 0x179420, Func Offset: 0x240
	// Func End, Address: 0x179454, Func Offset: 0x274
}

// zFX_SpawnBubbleHit__FPC5xVec3Ui
// Start address: 0x179460
void zFX_SpawnBubbleHit(xVec3* pos, uint32 num)
{
	// Line 1293, Address: 0x179460, Func Offset: 0
	// Func End, Address: 0x179478, Func Offset: 0x18
}

// zFXGooEventMelt__FP4xEnt
// Start address: 0x179480
void zFXGooEventMelt(xEnt* ent)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
	// Line 1235, Address: 0x179480, Func Offset: 0
	// Line 1236, Address: 0x179484, Func Offset: 0x4
	// Line 1235, Address: 0x179488, Func Offset: 0x8
	// Line 1241, Address: 0x17948c, Func Offset: 0xc
	// Line 1242, Address: 0x179490, Func Offset: 0x10
	// Line 1241, Address: 0x179494, Func Offset: 0x14
	// Line 1242, Address: 0x179498, Func Offset: 0x18
	// Line 1244, Address: 0x1794b8, Func Offset: 0x38
	// Line 1246, Address: 0x1794c0, Func Offset: 0x40
	// Line 1247, Address: 0x1794d0, Func Offset: 0x50
	// Line 1251, Address: 0x1794dc, Func Offset: 0x5c
	// Line 1250, Address: 0x1794e0, Func Offset: 0x60
	// Line 1251, Address: 0x1794e4, Func Offset: 0x64
	// Line 1252, Address: 0x1794e8, Func Offset: 0x68
	// Line 1254, Address: 0x1794f4, Func Offset: 0x74
	// Line 1256, Address: 0x1794f8, Func Offset: 0x78
	// Line 1257, Address: 0x179508, Func Offset: 0x88
	// Func End, Address: 0x179510, Func Offset: 0x90
}

// zFXGooEventSetFreezeDuration__FP4xEntf
// Start address: 0x179510
void zFXGooEventSetFreezeDuration(xEnt* ent, float32 duration)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
	// Line 1208, Address: 0x179510, Func Offset: 0
	// Line 1209, Address: 0x179514, Func Offset: 0x4
	// Line 1208, Address: 0x179518, Func Offset: 0x8
	// Line 1214, Address: 0x17951c, Func Offset: 0xc
	// Line 1215, Address: 0x179520, Func Offset: 0x10
	// Line 1217, Address: 0x179548, Func Offset: 0x38
	// Line 1219, Address: 0x179550, Func Offset: 0x40
	// Line 1220, Address: 0x179560, Func Offset: 0x50
	// Line 1225, Address: 0x17956c, Func Offset: 0x5c
	// Line 1224, Address: 0x179570, Func Offset: 0x60
	// Line 1225, Address: 0x179574, Func Offset: 0x64
	// Line 1226, Address: 0x179578, Func Offset: 0x68
	// Line 1227, Address: 0x179584, Func Offset: 0x74
	// Line 1229, Address: 0x179588, Func Offset: 0x78
	// Line 1230, Address: 0x179598, Func Offset: 0x88
	// Func End, Address: 0x1795a0, Func Offset: 0x90
}

// zFXGooEventSetWarb__FP4xEntPCf
// Start address: 0x1795a0
void zFXGooEventSetWarb(xEnt* ent, float32* warb)
{
	int32 i;
	zFXGooInstance* goo;
	// Line 1184, Address: 0x1795a0, Func Offset: 0
	// Line 1191, Address: 0x1795a4, Func Offset: 0x4
	// Line 1184, Address: 0x1795a8, Func Offset: 0x8
	// Line 1186, Address: 0x1795b0, Func Offset: 0x10
	// Line 1192, Address: 0x1795b8, Func Offset: 0x18
	// Line 1194, Address: 0x1795e0, Func Offset: 0x40
	// Line 1195, Address: 0x1795f0, Func Offset: 0x50
	// Line 1198, Address: 0x1795fc, Func Offset: 0x5c
	// Line 1200, Address: 0x179604, Func Offset: 0x64
	// Line 1201, Address: 0x17960c, Func Offset: 0x6c
	// Line 1203, Address: 0x179614, Func Offset: 0x74
	// Func End, Address: 0x179628, Func Offset: 0x88
}

// zFXGooIs__FP4xEntRfUi
// Start address: 0x179630
int32 zFXGooIs(xEnt* obj, float32& depth, uint32 playerCheck)
{
	int32 i;
	zFXGooInstance* goo;
	xVec3* pos;
	// Line 1138, Address: 0x179630, Func Offset: 0
	// Line 1145, Address: 0x179634, Func Offset: 0x4
	// Line 1138, Address: 0x179638, Func Offset: 0x8
	// Line 1146, Address: 0x17963c, Func Offset: 0xc
	// Line 1145, Address: 0x179644, Func Offset: 0x14
	// Line 1146, Address: 0x179648, Func Offset: 0x18
	// Line 1148, Address: 0x179668, Func Offset: 0x38
	// Line 1149, Address: 0x179678, Func Offset: 0x48
	// Line 1150, Address: 0x179684, Func Offset: 0x54
	// Line 1152, Address: 0x179690, Func Offset: 0x60
	// Line 1154, Address: 0x17969c, Func Offset: 0x6c
	// Line 1155, Address: 0x1796a4, Func Offset: 0x74
	// Line 1156, Address: 0x1796a8, Func Offset: 0x78
	// Line 1158, Address: 0x1796b0, Func Offset: 0x80
	// Line 1160, Address: 0x1796bc, Func Offset: 0x8c
	// Line 1156, Address: 0x1796c0, Func Offset: 0x90
	// Line 1158, Address: 0x1796c4, Func Offset: 0x94
	// Line 1160, Address: 0x1796dc, Func Offset: 0xac
	// Line 1162, Address: 0x1796f8, Func Offset: 0xc8
	// Line 1171, Address: 0x179700, Func Offset: 0xd0
	// Line 1173, Address: 0x179708, Func Offset: 0xd8
	// Line 1174, Address: 0x17970c, Func Offset: 0xdc
	// Line 1173, Address: 0x179710, Func Offset: 0xe0
	// Line 1174, Address: 0x17971c, Func Offset: 0xec
	// Line 1178, Address: 0x179728, Func Offset: 0xf8
	// Line 1181, Address: 0x179730, Func Offset: 0x100
	// Func End, Address: 0x179738, Func Offset: 0x108
}

// zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3
// Start address: 0x179740
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec)
{
	int32 i;
	zFXGooInstance* goo;
	int32 freezeGroup;
	// Line 1087, Address: 0x179740, Func Offset: 0
	// Line 1092, Address: 0x17975c, Func Offset: 0x1c
	// Line 1090, Address: 0x179760, Func Offset: 0x20
	// Line 1092, Address: 0x179764, Func Offset: 0x24
	// Line 1093, Address: 0x179768, Func Offset: 0x28
	// Line 1094, Address: 0x179770, Func Offset: 0x30
	// Line 1096, Address: 0x179788, Func Offset: 0x48
	// Line 1098, Address: 0x179790, Func Offset: 0x50
	// Line 1100, Address: 0x1797a0, Func Offset: 0x60
	// Line 1104, Address: 0x1797ac, Func Offset: 0x6c
	// Line 1105, Address: 0x1797e0, Func Offset: 0xa0
	// Line 1108, Address: 0x179814, Func Offset: 0xd4
	// Line 1111, Address: 0x179824, Func Offset: 0xe4
	// Line 1112, Address: 0x179828, Func Offset: 0xe8
	// Line 1111, Address: 0x17982c, Func Offset: 0xec
	// Line 1114, Address: 0x179830, Func Offset: 0xf0
	// Line 1118, Address: 0x179834, Func Offset: 0xf4
	// Line 1119, Address: 0x179838, Func Offset: 0xf8
	// Line 1112, Address: 0x17983c, Func Offset: 0xfc
	// Line 1113, Address: 0x179840, Func Offset: 0x100
	// Line 1114, Address: 0x17984c, Func Offset: 0x10c
	// Line 1115, Address: 0x179850, Func Offset: 0x110
	// Line 1116, Address: 0x179854, Func Offset: 0x114
	// Line 1117, Address: 0x179870, Func Offset: 0x130
	// Line 1118, Address: 0x179888, Func Offset: 0x148
	// Line 1119, Address: 0x17988c, Func Offset: 0x14c
	// Line 1122, Address: 0x179890, Func Offset: 0x150
	// Line 1123, Address: 0x1798b8, Func Offset: 0x178
	// Line 1125, Address: 0x1798dc, Func Offset: 0x19c
	// Line 1126, Address: 0x1798f0, Func Offset: 0x1b0
	// Func End, Address: 0x179908, Func Offset: 0x1c8
}

// zFXUpdate__Ff
// Start address: 0x179910
void zFXUpdate(float32 dt)
{
	// Line 1078, Address: 0x179910, Func Offset: 0
	// Line 1079, Address: 0x179920, Func Offset: 0x10
	// Line 1078, Address: 0x179924, Func Offset: 0x14
	// Line 1079, Address: 0x179928, Func Offset: 0x18
	// Line 1080, Address: 0x179968, Func Offset: 0x58
	// Line 1081, Address: 0x179a68, Func Offset: 0x158
	// Line 1082, Address: 0x179a70, Func Offset: 0x160
	// Line 1083, Address: 0x179a78, Func Offset: 0x168
	// Func End, Address: 0x179a90, Func Offset: 0x180
}

// zFXGooRenderAtomic__FP8RpAtomic
// Start address: 0x179a90
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic)
{
	int32 i;
	zFXGooInstance* goo;
	// Line 790, Address: 0x179a90, Func Offset: 0
	// Line 798, Address: 0x179a94, Func Offset: 0x4
	// Line 790, Address: 0x179a98, Func Offset: 0x8
	// Line 798, Address: 0x179a9c, Func Offset: 0xc
	// Line 790, Address: 0x179aa0, Func Offset: 0x10
	// Line 799, Address: 0x179aa4, Func Offset: 0x14
	// Line 795, Address: 0x179aa8, Func Offset: 0x18
	// Line 800, Address: 0x179ab4, Func Offset: 0x24
	// Line 799, Address: 0x179abc, Func Offset: 0x2c
	// Line 800, Address: 0x179ac0, Func Offset: 0x30
	// Line 802, Address: 0x179ad8, Func Offset: 0x48
	// Line 805, Address: 0x179ae8, Func Offset: 0x58
	// Line 806, Address: 0x179af4, Func Offset: 0x64
	// Line 808, Address: 0x179b18, Func Offset: 0x88
	// Line 810, Address: 0x179b20, Func Offset: 0x90
	// Line 815, Address: 0x179b40, Func Offset: 0xb0
	// Line 1073, Address: 0x179b4c, Func Offset: 0xbc
	// Line 1074, Address: 0x179b50, Func Offset: 0xc0
	// Func End, Address: 0x179b60, Func Offset: 0xd0
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
	int8 counter_text[6];
	// Line 598, Address: 0x179b60, Func Offset: 0
	// Line 605, Address: 0x179b74, Func Offset: 0x14
	// Line 610, Address: 0x179b78, Func Offset: 0x18
	// Line 611, Address: 0x179b80, Func Offset: 0x20
	// Line 614, Address: 0x179b8c, Func Offset: 0x2c
	// Line 615, Address: 0x179b9c, Func Offset: 0x3c
	// Line 616, Address: 0x179bac, Func Offset: 0x4c
	// Line 618, Address: 0x179bd4, Func Offset: 0x74
	// Line 621, Address: 0x179bd8, Func Offset: 0x78
	// Line 622, Address: 0x179c48, Func Offset: 0xe8
	// Line 624, Address: 0x179c60, Func Offset: 0x100
	// Line 625, Address: 0x179c8c, Func Offset: 0x12c
	// Line 627, Address: 0x179cf8, Func Offset: 0x198
	// Line 625, Address: 0x179cfc, Func Offset: 0x19c
	// Line 627, Address: 0x179d00, Func Offset: 0x1a0
	// Line 629, Address: 0x179d30, Func Offset: 0x1d0
	// Line 630, Address: 0x179d38, Func Offset: 0x1d8
	// Line 633, Address: 0x179d40, Func Offset: 0x1e0
	// Line 635, Address: 0x179d48, Func Offset: 0x1e8
	// Line 636, Address: 0x179d64, Func Offset: 0x204
	// Line 637, Address: 0x179d70, Func Offset: 0x210
	// Line 638, Address: 0x179d78, Func Offset: 0x218
	// Line 640, Address: 0x179d80, Func Offset: 0x220
	// Line 641, Address: 0x179d88, Func Offset: 0x228
	// Line 643, Address: 0x179dac, Func Offset: 0x24c
	// Line 644, Address: 0x179db0, Func Offset: 0x250
	// Line 645, Address: 0x179db8, Func Offset: 0x258
	// Line 646, Address: 0x179dd0, Func Offset: 0x270
	// Line 649, Address: 0x179e04, Func Offset: 0x2a4
	// Line 655, Address: 0x179e0c, Func Offset: 0x2ac
	// Line 658, Address: 0x179e10, Func Offset: 0x2b0
	// Line 657, Address: 0x179e18, Func Offset: 0x2b8
	// Line 658, Address: 0x179e1c, Func Offset: 0x2bc
	// Line 657, Address: 0x179e20, Func Offset: 0x2c0
	// Line 658, Address: 0x179e24, Func Offset: 0x2c4
	// Line 657, Address: 0x179e28, Func Offset: 0x2c8
	// Line 658, Address: 0x179e2c, Func Offset: 0x2cc
	// Line 657, Address: 0x179e38, Func Offset: 0x2d8
	// Line 658, Address: 0x179e3c, Func Offset: 0x2dc
	// Line 659, Address: 0x179e44, Func Offset: 0x2e4
	// Line 660, Address: 0x179e50, Func Offset: 0x2f0
	// Line 662, Address: 0x179e5c, Func Offset: 0x2fc
	// Line 666, Address: 0x179e60, Func Offset: 0x300
	// Line 671, Address: 0x179e70, Func Offset: 0x310
	// Line 666, Address: 0x179e78, Func Offset: 0x318
	// Line 667, Address: 0x179e84, Func Offset: 0x324
	// Line 671, Address: 0x179e98, Func Offset: 0x338
	// Line 672, Address: 0x179ea4, Func Offset: 0x344
	// Line 740, Address: 0x179eb4, Func Offset: 0x354
	// Line 741, Address: 0x179ec0, Func Offset: 0x360
	// Line 742, Address: 0x179f48, Func Offset: 0x3e8
	// Line 745, Address: 0x179f5c, Func Offset: 0x3fc
	// Line 746, Address: 0x179f64, Func Offset: 0x404
	// Line 748, Address: 0x179f78, Func Offset: 0x418
	// Line 749, Address: 0x179f88, Func Offset: 0x428
	// Line 750, Address: 0x179f94, Func Offset: 0x434
	// Line 751, Address: 0x179f9c, Func Offset: 0x43c
	// Line 754, Address: 0x179fa8, Func Offset: 0x448
	// Line 756, Address: 0x179fb0, Func Offset: 0x450
	// Func End, Address: 0x179fc4, Func Offset: 0x464
}

// zFXGooEnable__FP8RpAtomici
// Start address: 0x179fd0
void zFXGooEnable(RpAtomic* atomic, int32 freezeGroup)
{
	int32 i;
	zFXGooInstance* goo;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
	// Line 343, Address: 0x179fd0, Func Offset: 0
	// Line 352, Address: 0x179fd4, Func Offset: 0x4
	// Line 343, Address: 0x179fd8, Func Offset: 0x8
	// Line 345, Address: 0x179fec, Func Offset: 0x1c
	// Line 353, Address: 0x179ff4, Func Offset: 0x24
	// Line 352, Address: 0x179ffc, Func Offset: 0x2c
	// Line 353, Address: 0x17a000, Func Offset: 0x30
	// Line 355, Address: 0x17a00c, Func Offset: 0x3c
	// Line 357, Address: 0x17a018, Func Offset: 0x48
	// Line 358, Address: 0x17a028, Func Offset: 0x58
	// Line 364, Address: 0x17a034, Func Offset: 0x64
	// Line 433, Address: 0x17a038, Func Offset: 0x68
	// Line 364, Address: 0x17a03c, Func Offset: 0x6c
	// Line 433, Address: 0x17a040, Func Offset: 0x70
	// Line 364, Address: 0x17a044, Func Offset: 0x74
	// Line 433, Address: 0x17a048, Func Offset: 0x78
	// Line 434, Address: 0x17a058, Func Offset: 0x88
	// Line 433, Address: 0x17a060, Func Offset: 0x90
	// Line 434, Address: 0x17a064, Func Offset: 0x94
	// Line 445, Address: 0x17a06c, Func Offset: 0x9c
	// Line 447, Address: 0x17a090, Func Offset: 0xc0
	// Line 448, Address: 0x17a094, Func Offset: 0xc4
	// Line 456, Address: 0x17a098, Func Offset: 0xc8
	// Line 449, Address: 0x17a0a0, Func Offset: 0xd0
	// Line 456, Address: 0x17a0a4, Func Offset: 0xd4
	// Line 459, Address: 0x17a0b0, Func Offset: 0xe0
	// Line 462, Address: 0x17a0b4, Func Offset: 0xe4
	// Line 459, Address: 0x17a0c4, Func Offset: 0xf4
	// Line 460, Address: 0x17a0c8, Func Offset: 0xf8
	// Line 462, Address: 0x17a0cc, Func Offset: 0xfc
	// Line 465, Address: 0x17a0d4, Func Offset: 0x104
	// Line 473, Address: 0x17a0d8, Func Offset: 0x108
	// Line 466, Address: 0x17a0dc, Func Offset: 0x10c
	// Line 473, Address: 0x17a0e4, Func Offset: 0x114
	// Line 474, Address: 0x17a0e8, Func Offset: 0x118
	// Line 476, Address: 0x17a0f0, Func Offset: 0x120
	// Line 479, Address: 0x17a0f8, Func Offset: 0x128
	// Line 482, Address: 0x17a100, Func Offset: 0x130
	// Line 489, Address: 0x17a104, Func Offset: 0x134
	// Line 482, Address: 0x17a108, Func Offset: 0x138
	// Line 484, Address: 0x17a110, Func Offset: 0x140
	// Line 485, Address: 0x17a11c, Func Offset: 0x14c
	// Line 489, Address: 0x17a128, Func Offset: 0x158
	// Line 490, Address: 0x17a138, Func Offset: 0x168
	// Func End, Address: 0x17a150, Func Offset: 0x180
}

// zFXMuscleArmWave__FPC5xVec3
// Start address: 0x17a150
xFXRing* zFXMuscleArmWave(xVec3* pos)
{
	// Line 285, Address: 0x17a150, Func Offset: 0
	// Func End, Address: 0x17a15c, Func Offset: 0xc
}

// zFXPorterWave__FPC5xVec3
// Start address: 0x17a160
void zFXPorterWave(xVec3* pos)
{
	// Line 257, Address: 0x17a160, Func Offset: 0
	// Line 258, Address: 0x17a164, Func Offset: 0x4
	// Line 257, Address: 0x17a168, Func Offset: 0x8
	// Line 258, Address: 0x17a16c, Func Offset: 0xc
	// Line 257, Address: 0x17a170, Func Offset: 0x10
	// Line 258, Address: 0x17a174, Func Offset: 0x14
	// Line 259, Address: 0x17a17c, Func Offset: 0x1c
	// Line 261, Address: 0x17a18c, Func Offset: 0x2c
	// Func End, Address: 0x17a19c, Func Offset: 0x3c
}

// zFXHammer__FPC5xVec3
// Start address: 0x17a1a0
void zFXHammer(xVec3* pos)
{
	// Line 203, Address: 0x17a1a0, Func Offset: 0
	// Line 207, Address: 0x17a1a4, Func Offset: 0x4
	// Line 203, Address: 0x17a1a8, Func Offset: 0x8
	// Line 207, Address: 0x17a1ac, Func Offset: 0xc
	// Line 203, Address: 0x17a1b0, Func Offset: 0x10
	// Line 207, Address: 0x17a1b4, Func Offset: 0x14
	// Line 210, Address: 0x17a1bc, Func Offset: 0x1c
	// Line 214, Address: 0x17a1f0, Func Offset: 0x50
	// Func End, Address: 0x17a200, Func Offset: 0x60
}

// zFXPatrickStun__FPC5xVec3
// Start address: 0x17a200
void zFXPatrickStun(xVec3* pos)
{
	// Line 145, Address: 0x17a200, Func Offset: 0
	// Line 148, Address: 0x17a204, Func Offset: 0x4
	// Line 145, Address: 0x17a208, Func Offset: 0x8
	// Line 148, Address: 0x17a20c, Func Offset: 0xc
	// Line 145, Address: 0x17a210, Func Offset: 0x10
	// Line 148, Address: 0x17a214, Func Offset: 0x14
	// Line 149, Address: 0x17a21c, Func Offset: 0x1c
	// Line 150, Address: 0x17a22c, Func Offset: 0x2c
	// Line 154, Address: 0x17a23c, Func Offset: 0x3c
	// Func End, Address: 0x17a24c, Func Offset: 0x4c
}

// zFX_SceneReset__Fv
// Start address: 0x17a250
void zFX_SceneReset()
{
	// Line 80, Address: 0x17a250, Func Offset: 0
	// Line 81, Address: 0x17a288, Func Offset: 0x38
	// Line 82, Address: 0x17a2b8, Func Offset: 0x68
	// Line 81, Address: 0x17a2bc, Func Offset: 0x6c
	// Line 82, Address: 0x17a2c0, Func Offset: 0x70
	// Line 83, Address: 0x17a2f0, Func Offset: 0xa0
	// Func End, Address: 0x17a2f8, Func Offset: 0xa8
}

// zFX_SceneExit__FP7RpWorld
// Start address: 0x17a300
void zFX_SceneExit(RpWorld* world)
{
	// Line 71, Address: 0x17a300, Func Offset: 0
	// Line 72, Address: 0x17a30c, Func Offset: 0xc
	// Line 73, Address: 0x17a314, Func Offset: 0x14
	// Line 74, Address: 0x17a34c, Func Offset: 0x4c
	// Func End, Address: 0x17a360, Func Offset: 0x60
}

// zFX_SceneEnter__FP7RpWorld
// Start address: 0x17a360
void zFX_SceneEnter(RpWorld* world)
{
	int8 @4297;
	tweak_callback cb_spawn_bubble_wall;
	// Line 53, Address: 0x17a360, Func Offset: 0
	// Line 55, Address: 0x17a374, Func Offset: 0x14
	// Line 57, Address: 0x17a37c, Func Offset: 0x1c
	// Line 58, Address: 0x17a384, Func Offset: 0x24
	// Line 60, Address: 0x17a3d4, Func Offset: 0x74
	// Line 61, Address: 0x17a408, Func Offset: 0xa8
	// Line 63, Address: 0x17a414, Func Offset: 0xb4
	// Line 66, Address: 0x17a478, Func Offset: 0x118
	// Func End, Address: 0x17a48c, Func Offset: 0x12c
}

// on_spawn_bubble_wall__FRC10tweak_info
// Start address: 0x17a490
void on_spawn_bubble_wall()
{
	// Line 48, Address: 0x17a490, Func Offset: 0
	// Func End, Address: 0x17a498, Func Offset: 0x8
}

