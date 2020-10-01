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
typedef s32(*type_2)(RxPipelineNode*);
typedef RwCamera*(*type_4)(RwCamera*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_7)(xEnt*, xScene*, f32, xEntCollis*);
typedef xBase*(*type_8)(u32);
typedef void(*type_9)(RxPipelineNode*);
typedef u32(*type_13)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s8*(*type_14)(xBase*);
typedef s8*(*type_16)(u32);
typedef void(*type_19)(xAnimPlay*, xAnimState*);
typedef s32(*type_20)(RxPipelineNode*, RxPipeline*);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef u32(*type_23)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_29)(RxPipelineNode*, u32, u32, void*);
typedef RpAtomic*(*type_30)(RpAtomic*);
typedef s32(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_36)(RxNodeDefinition*);
typedef void(*type_40)(RxNodeDefinition*);
typedef u32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_52)(void*);
typedef void(*type_60)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_63)(RpWorldSector*);
typedef s32(*type_79)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_80)(xEnt*, xScene*, f32);
typedef void(*type_84)(bolt&, void*);
typedef void(*type_86)(xEnt*, xVec3*);
typedef void(*type_89)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_94)(xMemPool*, void*);
typedef u32(*type_95)(void*, void*);
typedef void(*type_103)(RwResEntry*);

typedef xVec3 type_3[60];
typedef xCollis type_6[18];
typedef s8 type_10[16];
typedef RwTexCoords* type_11[8];
typedef f32 type_12[22];
typedef xParInterp type_15[1];
typedef f32 type_17[22];
typedef u8 type_18[2];
typedef s8 type_22[16];
typedef u32 type_24[15];
typedef u32 type_25[15];
typedef RwFrustumPlane type_27[6];
typedef u16 type_28[3];
typedef u32 type_31[15];
typedef xParInterp type_33[4];
typedef RwV3d type_34[8];
typedef u32 type_35[72];
typedef s8 type_37[4];
typedef analog_data type_38[2];
typedef xParInterp type_39[4];
typedef xBase* type_41[72];
typedef u8 type_42[3];
typedef f32 type_43[4];
typedef f32 type_44[2];
typedef u8 type_46[2];
typedef xVec4 type_47[12];
typedef u32 type_48[2];
typedef RwTexCoords* type_49[8];
typedef u8 type_50[2];
typedef f32 type_51[6];
typedef u8 type_53[3];
typedef f32 type_54[3];
typedef f32 type_55[3];
typedef effect_data* type_56[7];
typedef xModelTag type_57[2];
typedef u32 type_58[7];
typedef f32 type_59[4];
typedef f32 type_61[4];
typedef f32 type_62[3];
typedef f32 type_64[12];
typedef RpLight* type_65[2];
typedef f32 type_66[12];
typedef RwFrame* type_67[2];
typedef f32 type_68[12];
typedef xEnt* type_69[111];
typedef f32 type_70[12];
typedef f32 type_71[12];
typedef xVec3 type_72[3];
typedef u32 type_73[4];
typedef f32 type_74[12];
typedef u8 type_75[3];
typedef u8 type_76[3];
typedef s8 type_77[128];
typedef type_77 type_78[6];
typedef u8 type_81[2];
typedef u8 type_82[14];
typedef xModelTag type_83[4];
typedef s8 type_85[32];
typedef xModelInstance* type_87[14];
typedef f32 type_88[16];
typedef u8 type_91[4];
typedef f32 type_92[2];
typedef f32 type_93[2];
typedef u8 type_96[22];
typedef s8 type_97[32];
typedef u8 type_98[22];
typedef s8 type_99[32];
typedef xVec3 type_100[4];
typedef u16 type_101[3];
typedef xVec2 type_102[2];
typedef u8 type_104[2];
typedef xVec2 type_105[2];
typedef xAnimMultiFileEntry type_106[1];
typedef xVec3 type_107[5];
typedef RxCluster type_108[1];
typedef u8 type_109[5];

struct static_queue_0
{
	u32 _first;
	u32 _size;
	u32 _max_size;
	u32 _max_size_mask;
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

struct zEntHangable
{
};

struct static_queue_1
{
	u32 _first;
	u32 _size;
	u32 _max_size;
	u32 _max_size_mask;
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
	u16 matIndex;
	type_101 vertIndex;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xLaserBoltEmitter
{
	config_0 cfg;
	static_queue_0 bolts;
	f32 ialpha;
	RwRaster* bolt_raster;
	s32 start_collide;
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
	f32 dist;
	f32 hit_dist;
	f32 prev_dist;
	f32 prev_check_dist;
	xEnt* hit_ent;
	f32 emitted;
	void* context;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	u16 wt;
	u8 on;
	u8 bezIndex;
	u8 flg_props;
	u8 pad;
	u16 numPoints;
	f32 delay;
	f32 zoneRadius;
	f32 arenaRadius;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct effect_data
{
	fx_type_enum type;
	fx_orient_enum orient;
	f32 rate;
	_class_2 data;
	f32 irate;
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
	type_49 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_26 BeforeAnimMatrices;
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
	_class_1 anim_coll;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	u16 state;
	u16 plat_flags;
	f32 tmr;
	s32 ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	s32 moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	f32 pauseMult;
	f32 pauseDelta;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_18 pad;
	f32 delay;
	xSpline3* spl;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_67 light_frame;
	s32 memlvl;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_23 Callback;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_79 eventFunc;
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

struct iterator
{
	u32 _it;
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
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct _class_0
{
	RwTexture* asset;
	u32 units;
	xVec2 size;
	xVec2 isize;
	s32 prev;
};

struct tagiRenderInput
{
	u16* m_index;
	RxObjSpace3DVertex* m_vertex;
	f32* m_vertexTZ;
	u32 m_mode;
	s32 m_vertexType;
	s32 m_vertexTypeSize;
	s32 m_indexCount;
	s32 m_vertexCount;
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
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
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
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_93 BilinearLerp;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_97 name;
	type_99 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct _tagEmitSphere
{
	f32 radius;
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
	type_19 BeforeEnter;
	type_60 StateCallback;
	type_26 BeforeAnimMatrices;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	f32 arot;
	f32 brot;
	f32 ss;
	f32 sr;
	s32 state;
	f32 tsfd;
	f32 trfd;
	f32 tsbd;
	f32 trbd;
	f32* rotptr;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_103 destroyNotify;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	f32 u;
	f32 v;
};

struct xEntMotionSplineData
{
	s32 unknown;
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
	f32 mag;
	f32 ang;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xSpline3
{
	u16 type;
	u16 flags;
	u32 N;
	u32 allocN;
	xVec3* points;
	f32* time;
	xVec3* p12;
	xVec3* bctrl;
	f32* knot;
	xCoef3* coef;
	u32 arcSample;
	f32* arcLength;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_94 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct curve_node
{
	f32 time;
	iColor_tag color;
	f32 scale;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct RpTriangle
{
	type_28 vertIndex;
	s16 matIndex;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_44 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_73 pad;
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
		_class_3 tuv;
		tri_data_1 tri;
	};
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
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
	type_57 BubbleWandTag;
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
	type_83 HangPawTag;
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
	type_24 Inv_PatsSock;
	type_25 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_31 Inv_LevelPickups;
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
	type_48 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_69 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_82 sb_model_indices;
	type_87 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct _tagEmitRect
{
	f32 x_len;
	f32 z_len;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
};

struct xJSPHeader
{
	type_37 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	f32 et;
	f32 wet;
	f32 rt;
	f32 wrt;
	f32 p;
	f32 brt;
	f32 ert;
	s32 state;
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
	type_52 activateCB;
	type_52 deactivateCB;
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

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
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
	type_91 talk_filter;
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
	type_47 frustplane;
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
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

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
	type_53 pad;
	void* moprops;
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

struct xCoef
{
	type_43 a;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_27 frustumPlanes;
	RwBBox frustumBoundBox;
	type_34 frustumCorners;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_45 Conditional;
	type_45 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_95 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct rxReq
{
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_61 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_59 wt;
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
	type_107 lastRefs;
	type_109 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xEntMotionMechData
{
	u8 type;
	u8 flags;
	u8 sld_axis;
	u8 rot_axis;
	f32 sld_dist;
	f32 sld_tm;
	f32 sld_acc_tm;
	f32 sld_dec_tm;
	f32 rot_dist;
	f32 rot_tm;
	f32 rot_acc_tm;
	f32 rot_dec_tm;
	f32 ret_delay;
	f32 post_ret_delay;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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
	f32 min_t;
	f32 max_t;
	s32 flags;
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	s16 refCount;
	s16 pad;
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
	f32 angle;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	f32 a;
	f32 b;
	f32 p;
	f32 w;
};

struct xVec2
{
	f32 x;
	f32 y;
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
	type_63 renderCallBack;
	RxPipeline* pipeline;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
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
	u32 flags;
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
	f32 r;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xEntMotion
{
	xEntMotionAsset* asset;
	u8 type;
	u8 pad;
	u16 flags;
	f32 t;
	f32 tmr;
	f32 d;
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
	u8 flags;
	u8 curve_index;
	u8 u;
	u8 v;
	f32 frac;
	f32 age;
	f32 cull_size;
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
	u32 mode;
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
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct xEntMotionAsset
{
	u8 type;
	u8 use_banking;
	u16 flags;
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
	f32 r;
	f32 h;
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
	s32 profile;
	type_78 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_85 sceneStart;
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
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
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
	type_12 up_tmr;
	type_17 down_tmr;
	type_38 analog;
};

struct xEntSplineData
{
	s32 unknown;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	type_75 emit_pad;
	type_76 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
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
	f32 yaw;
	xCollis* coll;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_81 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xDecalEmitter
{
	config_1 cfg;
	_class_0 texture;
	static_queue_1 units;
	curve_node* curve;
	u32 curve_size;
	u32 curve_index;
	f32 ilife;
};

struct _tagiPad
{
	s32 port;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_88 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
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

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct _class_1
{
	xVec3* verts;
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
	type_100 corner;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xEntMPData
{
	f32 curdist;
	f32 speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	f32 dist;
	u32 padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xParSys
{
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct config_0
{
	f32 radius;
	f32 length;
	f32 vel;
	f32 fade_dist;
	f32 kill_dist;
	f32 safe_dist;
	f32 hit_radius;
	f32 rand_ang;
	f32 scar_life;
	type_102 bolt_uv;
	s32 hit_interval;
	f32 damage;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct xParInterp
{
	type_92 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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
	f32 ext_tm;
	f32 ext_wait_tm;
	f32 ret_tm;
	f32 ret_wait_tm;
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
	u8 flags;
	u8 platData;
	u16 matIndex;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct _class_3
{
	f32 t;
	f32 u;
	f32 v;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct config_1
{
	u32 flags;
	f32 life_time;
	u32 blend_src;
	u32 blend_dst;
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
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
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
	type_46 PowerUp;
	type_50 InitialPowerUp;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_108 clusters;
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
	type_35 baseCount;
	type_41 baseList;
	_zEnv* zen;
};

struct _class_5
{
	type_105 uv;
	u8 rows;
	u8 cols;
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
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

union _class_6
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_3 tranTable;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
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
u32 gActiveHeap;

void emit_decal_dist(effect_data& effect, bolt& b, f32 from_dist, f32 to_dist);
void emit_decal(effect_data& effect, bolt& b, f32 to_dist);
void emit_particle(effect_data& effect, bolt& b, f32 from_dist, f32 to_dist, f32 dt);
void update_fx(xLaserBoltEmitter* this, bolt& b, f32 prev_dist, f32 dt);
RxObjSpace3DVertex* render(xLaserBoltEmitter* this, bolt& b, RxObjSpace3DVertex* vert);
void collide_update(xLaserBoltEmitter* this, bolt& b);
void attach_effects(xLaserBoltEmitter* this, fx_when_enum when, effect_data* fx, u32 fxsize);
void render(xLaserBoltEmitter* this);
void update(xLaserBoltEmitter* this, f32 dt);
void emit(xLaserBoltEmitter* this, xVec3& loc, xVec3& dir);
void refresh_config(xLaserBoltEmitter* this);
void reset(xLaserBoltEmitter* this);
void set_texture(xLaserBoltEmitter* this, s8* name);
void init(xLaserBoltEmitter* this, u32 max_bolts);

// emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b08d0
void emit_decal_dist(effect_data& effect, bolt& b, f32 from_dist, f32 to_dist)
{
	f32 start_dist;
	s32 total;
	xMat4x3 mat;
	xVec3 dloc;
	s32 i;
}

// emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b0e40
void emit_decal(effect_data& effect, bolt& b, f32 to_dist)
{
	xMat4x3 mat;
}

// emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b1280
void emit_particle(effect_data& effect, bolt& b, f32 from_dist, f32 to_dist, f32 dt)
{
	xParEmitter& pe;
	xParEmitterAsset& pea;
	f32 velmag;
	xVec3 oldloc;
}

// update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff
// Start address: 0x3b1730
void update_fx(xLaserBoltEmitter* this, bolt& b, f32 prev_dist, f32 dt)
{
	f32 tail_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
	f32 from_dist;
	f32 to_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
}

// render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex
// Start address: 0x3b1ba0
RxObjSpace3DVertex* render(xLaserBoltEmitter* this, bolt& b, RxObjSpace3DVertex* vert)
{
	f32 dist0;
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
void attach_effects(xLaserBoltEmitter* this, fx_when_enum when, effect_data* fx, u32 fxsize)
{
}

// render__17xLaserBoltEmitterFv
// Start address: 0x3b2410
void render(xLaserBoltEmitter* this)
{
	RxObjSpace3DVertex* verts;
	RxObjSpace3DVertex* v;
	iterator it;
	s32 used;
}

// update__17xLaserBoltEmitterFf
// Start address: 0x3b25f0
void update(xLaserBoltEmitter* this, f32 dt)
{
	s32 ci;
	iterator it;
	bolt& b;
	u8 collided;
	f32 prev_dist;
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
	s32 i;
}

// set_texture__17xLaserBoltEmitterFPCc
// Start address: 0x3b32a0
void set_texture(xLaserBoltEmitter* this, s8* name)
{
}

// init__17xLaserBoltEmitterFUiPCc
// Start address: 0x3b32f0
void init(xLaserBoltEmitter* this, u32 max_bolts)
{
}

