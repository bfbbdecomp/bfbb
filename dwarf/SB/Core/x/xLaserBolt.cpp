typedef struct static_queue_0;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct zEntHangable;
typedef struct static_queue_1;
typedef enum _zPlayerWallJumpState;
typedef struct RpPolygon;
typedef struct xVec3;
typedef struct xLaserBoltEmitter;
typedef struct xEnv;
typedef struct bolt;
typedef struct xMovePointAsset;
typedef struct RwV3d;
typedef struct xEnt;
typedef struct effect_data;
typedef struct RpGeometry;
typedef struct xAnimTable;
typedef struct xAnimPlay;
typedef struct xModelInstance;
typedef struct RpVertexNormal;
typedef struct zPlatform;
typedef struct rxHeapFreeBlock;
typedef struct xMovePoint;
typedef struct RwRaster;
typedef struct iEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimEffect;
typedef struct RwV2d;
typedef struct RwTexCoords;
typedef struct xBase;
typedef struct xGridBound;
typedef struct iterator;
typedef enum _tagRumbleType;
typedef struct RxNodeDefinition;
typedef struct _class_0;
typedef struct tagiRenderInput;
typedef enum _zPlayerType;
typedef struct xLightKit;
typedef struct xUpdateCullGroup;
typedef struct zCutsceneMgr;
typedef struct zEnt;
typedef struct xAnimSingle;
typedef struct RwRGBA;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xJSPNodeInfo;
typedef struct RwTexture;
typedef struct _tagEmitSphere;
typedef struct xAnimState;
typedef struct xEntMechData;
typedef struct RwResEntry;
typedef struct RxPipeline;
typedef struct xMat4x3;
typedef struct RxPipelineCluster;
typedef struct RxObjSpace3DVertex;
typedef struct xEntMotionSplineData;
typedef struct RxPipelineNodeParam;
typedef struct zAssetPickupTable;
typedef struct analog_data;
typedef struct RpMeshHeader;
typedef struct xSpline3;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xMemPool;
typedef struct curve_node;
typedef struct xQuat;
typedef struct xGroup;
typedef struct RpTriangle;
typedef struct xEntBoulder;
typedef struct RpAtomic;
typedef struct xClumpCollBSPBranchNode;
typedef struct xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct xCollis;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xModelPool;
typedef struct RxPipelineRequiresCluster;
typedef struct _tagEmitRect;
typedef struct xEntMotionMPData;
typedef struct xJSPHeader;
typedef struct xEntAsset;
typedef struct xEntERData;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct xPortalAsset;
typedef enum fx_when_enum;
typedef struct zPlayerSettings;
typedef struct xScene;
typedef struct xCamera;
typedef struct xAnimFile;
typedef struct _zEnv;
typedef struct RpClump;
typedef struct xVec4;
typedef struct xSurface;
typedef struct xQCData;
typedef struct xCoef;
typedef struct RwSurfaceProperties;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct RwMatrixTag;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xUpdateCullEnt;
typedef struct rxReq;
typedef struct xPEEntBound;
typedef struct xEnvAsset;
typedef struct xLinkAsset;
typedef struct xModelTag;
typedef struct zLasso;
typedef struct xEntMotionMechData;
typedef struct _tagEmitLine;
typedef enum RxClusterValidityReq;
typedef enum RpWorldRenderOrder;
typedef struct xRay3;
typedef struct xEntPenData;
typedef struct _tagxRumble;
typedef struct iFogParams;
typedef struct xCoef3;
typedef struct xEntDrive;
typedef enum RxNodeDefEditable;
typedef struct xBound;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct xModelBucket;
typedef enum RxClusterValid;
typedef enum fx_type_enum;
typedef struct xEntCollis;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct xEntOrbitData;
typedef struct xVec2;
typedef struct RpWorld;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xParEmitterAsset;
typedef enum rxEmbeddedPacketState;
typedef struct zPlatFMRunTime;
typedef struct xSphere;
typedef struct _tagEmitVolume;
typedef struct _zPortal;
typedef struct RpLight;
typedef struct xEntMotion;
typedef struct unit_data;
typedef struct xParGroup;
typedef struct xEntFrame;
typedef struct xFFX;
typedef enum RwCameraProjection;
typedef struct xPlatformAsset;
typedef enum _tagPadState;
typedef enum RxClusterForcePresent;
typedef struct xParEmitterPropsAsset;
typedef struct xEntMotionAsset;
typedef struct xCylinder;
typedef enum fx_orient_enum;
typedef union RxColorUnion;
typedef struct xGlobals;
typedef struct RwFrame;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xShadowSimplePoly;
typedef struct _tagxPad;
typedef struct xEntSplineData;
typedef struct _tagEmitOffsetPoint;
typedef struct RwSphere;
typedef struct xParEmitter;
typedef struct RwLLLink;
typedef struct tri_data_0;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RwTexDictionary;
typedef struct xEntMotionPenData;
typedef struct RxOutputSpec;
typedef struct xDecalEmitter;
typedef struct _tagiPad;
typedef struct xLightKitLight;
typedef struct tri_data_1;
typedef struct xMat3x3;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct xShadowSimpleCache;
typedef struct RxClusterRef;
typedef struct xEntMPData;
typedef struct xParSys;
typedef struct RwObject;
typedef struct xPEVCyl;
typedef struct config_0;
typedef struct RxIoSpec;
typedef enum texture_mode;
typedef struct RpInterpolator;
typedef struct xParInterp;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxNodeMethods;
typedef struct xEntMotionERData;
typedef union _class_2;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimMultiFileBase;
typedef struct _class_3;
typedef struct RwFrustumPlane;
typedef struct xBaseAsset;
typedef struct xPEEntBone;
typedef struct RwPlane;
typedef struct config_1;
typedef struct zGlobals;
typedef struct _class_4;
typedef struct RxCluster;
typedef struct zGlobalSettings;
typedef struct RpMaterialList;
typedef struct RxPacket;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct _class_5;
typedef struct xBBox;
typedef struct anim_coll_data;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef union _class_6;
typedef struct zLedgeGrabParams;
typedef struct RwRGBAReal;
typedef struct xPECircle;
typedef struct zJumpParam;
typedef struct xEntMotionOrbitData;
typedef struct RwLinkList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RpClump*(*type_1)(RpClump*, void*);
typedef int32(*type_2)(RxPipelineNode*);
typedef RwCamera*(*type_4)(RwCamera*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_7)(xEnt*, xScene*, float32, xEntCollis*);
typedef xBase*(*type_8)(uint32);
typedef void(*type_9)(RxPipelineNode*);
typedef uint32(*type_13)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_14)(xBase*);
typedef int8*(*type_16)(uint32);
typedef void(*type_19)(xAnimPlay*, xAnimState*);
typedef int32(*type_20)(RxPipelineNode*, RxPipeline*);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_23)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_29)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_30)(RpAtomic*);
typedef int32(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_36)(RxNodeDefinition*);
typedef void(*type_40)(RxNodeDefinition*);
typedef uint32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_52)(void*);
typedef void(*type_60)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_63)(RpWorldSector*);
typedef int32(*type_79)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_80)(xEnt*, xScene*, float32);
typedef void(*type_84)(bolt&, void*);
typedef void(*type_86)(xEnt*, xVec3*);
typedef void(*type_89)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_94)(xMemPool*, void*);
typedef uint32(*type_95)(void*, void*);
typedef void(*type_103)(RwResEntry*);

typedef xVec3 type_3[60];
typedef xCollis type_6[18];
typedef int8 type_10[16];
typedef RwTexCoords* type_11[8];
typedef float32 type_12[22];
typedef xParInterp type_15[1];
typedef float32 type_17[22];
typedef uint8 type_18[2];
typedef int8 type_22[16];
typedef uint32 type_24[15];
typedef uint32 type_25[15];
typedef RwFrustumPlane type_27[6];
typedef uint16 type_28[3];
typedef uint32 type_31[15];
typedef xParInterp type_33[4];
typedef RwV3d type_34[8];
typedef uint32 type_35[72];
typedef int8 type_37[4];
typedef analog_data type_38[2];
typedef xParInterp type_39[4];
typedef xBase* type_41[72];
typedef uint8 type_42[3];
typedef float32 type_43[4];
typedef float32 type_44[2];
typedef uint8 type_46[2];
typedef xVec4 type_47[12];
typedef uint32 type_48[2];
typedef RwTexCoords* type_49[8];
typedef uint8 type_50[2];
typedef float32 type_51[6];
typedef uint8 type_53[3];
typedef float32 type_54[3];
typedef float32 type_55[3];
typedef effect_data* type_56[7];
typedef xModelTag type_57[2];
typedef uint32 type_58[7];
typedef float32 type_59[4];
typedef float32 type_61[4];
typedef float32 type_62[3];
typedef float32 type_64[12];
typedef RpLight* type_65[2];
typedef float32 type_66[12];
typedef RwFrame* type_67[2];
typedef float32 type_68[12];
typedef xEnt* type_69[111];
typedef float32 type_70[12];
typedef float32 type_71[12];
typedef xVec3 type_72[3];
typedef uint32 type_73[4];
typedef float32 type_74[12];
typedef uint8 type_75[3];
typedef uint8 type_76[3];
typedef int8 type_77[128];
typedef type_77 type_78[6];
typedef uint8 type_81[2];
typedef uint8 type_82[14];
typedef xModelTag type_83[4];
typedef int8 type_85[32];
typedef xModelInstance* type_87[14];
typedef float32 type_88[16];
typedef uint8 type_91[4];
typedef float32 type_92[2];
typedef float32 type_93[2];
typedef uint8 type_96[22];
typedef int8 type_97[32];
typedef uint8 type_98[22];
typedef int8 type_99[32];
typedef xVec3 type_100[4];
typedef uint16 type_101[3];
typedef xVec2 type_102[2];
typedef uint8 type_104[2];
typedef xVec2 type_105[2];
typedef xAnimMultiFileEntry type_106[1];
typedef xVec3 type_107[5];
typedef RxCluster type_108[1];
typedef uint8 type_109[5];

struct static_queue_0
{
	uint32 _first;
	uint32 _size;
	uint32 _max_size;
	uint32 _max_size_mask;
	bolt* _buffer;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
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

struct zEntHangable
{
};

struct static_queue_1
{
	uint32 _first;
	uint32 _size;
	uint32 _max_size;
	uint32 _max_size_mask;
	unit_data* _buffer;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RpPolygon
{
	uint16 matIndex;
	type_101 vertIndex;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xLaserBoltEmitter
{
	config_0 cfg;
	static_queue_0 bolts;
	float32 ialpha;
	RwRaster* bolt_raster;
	int32 start_collide;
	type_56 fx;
	type_58 fxsize;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct bolt
{
	xVec3 origin;
	xVec3 dir;
	xVec3 loc;
	xVec3 hit_norm;
	float32 dist;
	float32 hit_dist;
	float32 prev_dist;
	float32 prev_check_dist;
	xEnt* hit_ent;
	float32 emitted;
	void* context;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
	float32 zoneRadius;
	float32 arenaRadius;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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
	type_80 update;
	type_80 endUpdate;
	type_86 bupdate;
	type_89 move;
	type_90 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_21 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct effect_data
{
	fx_type_enum type;
	fx_orient_enum orient;
	float32 rate;
	_class_2 data;
	float32 irate;
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
	type_49 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_26 BeforeAnimMatrices;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float32 pauseMult;
	float32 pauseDelta;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_18 pad;
	float32 delay;
	xSpline3* spl;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_67 light_frame;
	int32 memlvl;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_23 Callback;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_79 eventFunc;
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

struct iterator
{
	uint32 _it;
	static_queue_0* _owner;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _class_0
{
	RwTexture* asset;
	uint32 units;
	xVec2 size;
	xVec2 isize;
	int32 prev;
};

struct tagiRenderInput
{
	uint16* m_index;
	RxObjSpace3DVertex* m_vertex;
	float32* m_vertexTZ;
	uint32 m_mode;
	int32 m_vertexType;
	int32 m_vertexTypeSize;
	int32 m_indexCount;
	int32 m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct zCutsceneMgr
{
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_93 BilinearLerp;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_97 name;
	type_99 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct _tagEmitSphere
{
	float32 radius;
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
	type_19 BeforeEnter;
	type_60 StateCallback;
	type_26 BeforeAnimMatrices;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_103 destroyNotify;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zAssetPickupTable
{
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
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

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_94 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct curve_node
{
	float32 time;
	iColor_tag color;
	float32 scale;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RpTriangle
{
	type_28 vertIndex;
	int16 matIndex;
};

struct xEntBoulder
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
	type_30 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_44 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_73 pad;
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
		tri_data_1 tri;
	};
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
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
	type_57 BubbleWandTag;
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
	type_83 HangPawTag;
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
	type_24 Inv_PatsSock;
	type_25 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_31 Inv_LevelPickups;
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
	type_48 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_69 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_82 sb_model_indices;
	type_87 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct xJSPHeader
{
	type_37 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
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
	type_52 activateCB;
	type_52 deactivateCB;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

enum fx_when_enum
{
	FX_WHEN_LAUNCH,
	FX_WHEN_IMPACT,
	FX_WHEN_BIRTH,
	FX_WHEN_DEATH,
	FX_WHEN_HEAD,
	FX_WHEN_TAIL,
	FX_WHEN_KILL,
	MAX_FX_WHEN
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_51 MoveSpeed;
	type_54 AnimSneak;
	type_55 AnimWalk;
	type_62 AnimRun;
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
	type_91 talk_filter;
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
	type_8 resolvID;
	type_14 base2Name;
	type_16 id2Name;
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
	type_47 frustplane;
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
	type_104 NumAnims;
	void** RawData;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_1 callback;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

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
	type_53 pad;
	void* moprops;
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

struct xCoef
{
	type_43 a;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_4 endUpdate;
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
	type_27 frustumPlanes;
	RwBBox frustumBoundBox;
	type_34 frustumCorners;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_45 Conditional;
	type_45 Callback;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_95 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct rxReq
{
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_61 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_59 wt;
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
	type_107 lastRefs;
	type_109 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xEntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_42 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum fx_type_enum
{
	FX_TYPE_PARTICLE,
	FX_TYPE_DECAL,
	FX_TYPE_DECAL_DIST,
	FX_TYPE_CALLBACK
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
	type_6 colls;
	type_7 post;
	type_13 depenq;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_106 Files;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct xVec2
{
	float32 x;
	float32 y;
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
	type_63 renderCallBack;
	RxPipeline* pipeline;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_11 texCoords;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_64 tmrs;
	type_66 ttms;
	type_68 atms;
	type_70 dtms;
	type_71 vms;
	type_74 dss;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xEntMotion
{
	xEntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

struct unit_data
{
	uint8 flags;
	uint8 curve_index;
	uint8 u;
	uint8 v;
	float32 frac;
	float32 age;
	float32 cull_size;
	xMat4x3 mat;
};

struct xParGroup
{
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

struct xFFX
{
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xPlatformAsset
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_15 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_33 color_birth;
	type_39 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct xEntMotionAsset
{
	uint8 type;
	uint8 use_banking;
	uint16 flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

enum fx_orient_enum
{
	FX_ORIENT_DEFAULT,
	FX_ORIENT_PATH,
	FX_ORIENT_IPATH,
	FX_ORIENT_HIT_NORM,
	FX_ORIENT_HIT_REFLECT,
	MAX_FX_ORIENT,
	FORCE_INT_FX_ORIENT = 0xffffffff
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_78 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_85 sceneStart;
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

struct xShadowSimplePoly
{
	type_72 vert;
	xVec3 norm;
};

struct _tagxPad
{
	type_96 value;
	type_98 last_value;
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
	type_12 up_tmr;
	type_17 down_tmr;
	type_38 analog;
};

struct xEntSplineData
{
	int32 unknown;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	type_75 emit_pad;
	type_76 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_81 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xDecalEmitter
{
	config_1 cfg;
	_class_0 texture;
	static_queue_1 units;
	curve_node* curve;
	uint32 curve_size;
	uint32 curve_index;
	float32 ilife;
};

struct _tagiPad
{
	int32 port;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_88 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct _class_1
{
	xVec3* verts;
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
	type_100 corner;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xEntMPData
{
	float32 curdist;
	float32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xParSys
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

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct config_0
{
	float32 radius;
	float32 length;
	float32 vel;
	float32 fade_dist;
	float32 kill_dist;
	float32 safe_dist;
	float32 hit_radius;
	float32 rand_ang;
	float32 scar_life;
	type_102 bolt_uv;
	int32 hit_interval;
	float32 damage;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

enum texture_mode
{
	TM_DEFAULT,
	TM_RANDOM,
	TM_CYCLE,
	MAX_TM,
	FORCE_INT_TM = 0xffffffff
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

struct xParInterp
{
	type_92 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RxNodeMethods
{
	type_32 nodeBody;
	type_36 nodeInit;
	type_40 nodeTerm;
	type_2 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_20 pipelineNodeConfig;
	type_29 configMsgHandler;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
};

union _class_2
{
	xParEmitter* par;
	xDecalEmitter* decal;
	_class_4 callback;
};

struct xClumpCollBSPTriangle
{
	_class_6 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_3
{
	float32 t;
	float32 u;
	float32 v;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct config_1
{
	uint32 flags;
	float32 life_time;
	uint32 blend_src;
	uint32 blend_dst;
	_class_5 texture;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct _class_4
{
	type_84 fp;
	void* context;
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
	type_46 PowerUp;
	type_50 InitialPowerUp;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_108 clusters;
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
	type_35 baseCount;
	type_41 baseList;
	_zEnv* zen;
};

struct _class_5
{
	type_105 uv;
	uint8 rows;
	uint8 cols;
	texture_mode mode;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct anim_coll_data
{
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

union _class_6
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_3 tranTable;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RwLinkList
{
	RwLLLink link;
};

type_10 buffer;
type_22 buffer;
xMat4x3 g_I3;
tagiRenderInput gRenderBuffer;
zGlobals globals;
uint32 gActiveHeap;

void emit_decal_dist(effect_data& effect, bolt& b, float32 from_dist, float32 to_dist);
void emit_decal(effect_data& effect, bolt& b, float32 to_dist);
void emit_particle(effect_data& effect, bolt& b, float32 from_dist, float32 to_dist, float32 dt);
void update_fx(xLaserBoltEmitter* this, bolt& b, float32 prev_dist, float32 dt);
RxObjSpace3DVertex* render(xLaserBoltEmitter* this, bolt& b, RxObjSpace3DVertex* vert);
void collide_update(xLaserBoltEmitter* this, bolt& b);
void attach_effects(xLaserBoltEmitter* this, fx_when_enum when, effect_data* fx, uint32 fxsize);
void render(xLaserBoltEmitter* this);
void update(xLaserBoltEmitter* this, float32 dt);
void emit(xLaserBoltEmitter* this, xVec3& loc, xVec3& dir);
void refresh_config(xLaserBoltEmitter* this);
void reset(xLaserBoltEmitter* this);
void set_texture(xLaserBoltEmitter* this, int8* name);
void init(xLaserBoltEmitter* this, uint32 max_bolts);

// emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b08d0
void emit_decal_dist(effect_data& effect, bolt& b, float32 from_dist, float32 to_dist)
{
	float32 start_dist;
	int32 total;
	xMat4x3 mat;
	xVec3 dloc;
	int32 i;
}

// emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b0e40
void emit_decal(effect_data& effect, bolt& b, float32 to_dist)
{
	xMat4x3 mat;
}

// emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b1280
void emit_particle(effect_data& effect, bolt& b, float32 from_dist, float32 to_dist, float32 dt)
{
	xParEmitter& pe;
	xParEmitterAsset& pea;
	float32 velmag;
	xVec3 oldloc;
}

// update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff
// Start address: 0x3b1730
void update_fx(xLaserBoltEmitter* this, bolt& b, float32 prev_dist, float32 dt)
{
	float32 tail_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
	float32 from_dist;
	float32 to_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
}

// render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex
// Start address: 0x3b1ba0
RxObjSpace3DVertex* render(xLaserBoltEmitter* this, bolt& b, RxObjSpace3DVertex* vert)
{
	float32 dist0;
	xVec3 loc0;
	xVec3 loc1;
	xMat4x3& cam_mat;
	xVec3 dir;
	xVec3 right;
	xVec3 half_right;
}

// collide_update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt
// Start address: 0x3b2200
void collide_update(xLaserBoltEmitter* this, bolt& b)
{
	xScene& scene;
	xRay3 ray;
	xCollis player_coll;
	xCollis scene_coll;
}

// attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUi
// Start address: 0x3b2390
void attach_effects(xLaserBoltEmitter* this, fx_when_enum when, effect_data* fx, uint32 fxsize)
{
}

// render__17xLaserBoltEmitterFv
// Start address: 0x3b2410
void render(xLaserBoltEmitter* this)
{
	RxObjSpace3DVertex* verts;
	RxObjSpace3DVertex* v;
	iterator it;
	int32 used;
}

// update__17xLaserBoltEmitterFf
// Start address: 0x3b25f0
void update(xLaserBoltEmitter* this, float32 dt)
{
	int32 ci;
	iterator it;
	bolt& b;
	uint8 collided;
	float32 prev_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
}

// emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3
// Start address: 0x3b2c10
void emit(xLaserBoltEmitter* this, xVec3& loc, xVec3& dir)
{
	bolt& b;
	effect_data* itfx;
	effect_data* endfx;
}

// refresh_config__17xLaserBoltEmitterFv
// Start address: 0x3b2fb0
void refresh_config(xLaserBoltEmitter* this)
{
}

// reset__17xLaserBoltEmitterFv
// Start address: 0x3b2ff0
void reset(xLaserBoltEmitter* this)
{
	iterator it;
	bolt& b;
	effect_data* itfx;
	effect_data* endfx;
	int32 i;
}

// set_texture__17xLaserBoltEmitterFPCc
// Start address: 0x3b32a0
void set_texture(xLaserBoltEmitter* this, int8* name)
{
}

// init__17xLaserBoltEmitterFUiPCc
// Start address: 0x3b32f0
void init(xLaserBoltEmitter* this, uint32 max_bolts)
{
}

