typedef struct RxPipelineNode;
typedef struct xParEmitter;
typedef struct _tagEmitOffsetPoint;
typedef struct xGridBound;
typedef struct xVec3;
typedef struct xSpline3;
typedef struct RpPolygon;
typedef struct RpWorld;
typedef struct RwObjectHasFrame;
typedef struct anim_coll_data;
typedef struct xAnimPlay;
typedef struct RwV3d;
typedef struct xBase;
typedef struct xParEmitterAsset;
typedef struct RpGeometry;
typedef struct tri_data_0;
typedef struct rxHeapFreeBlock;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef struct zEnt;
typedef struct RpVertexNormal;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xParGroup;
typedef struct XCSNNosey;
typedef struct xEntMotionMechData;
typedef struct xCutsceneMgr;
typedef struct RxNodeDefinition;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct xParEmitterPropsAsset;
typedef struct xJSPHeader;
typedef struct xAnimTable;
typedef struct xSerial;
typedef struct xAnimState;
typedef struct xCollis;
typedef struct xEntPenData;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef struct RwRGBA;
typedef struct xCutsceneMgrAsset;
typedef struct RxPipeline;
typedef struct RpMeshHeader;
typedef struct RxPipelineCluster;
typedef struct RwResEntry;
typedef struct xCutscene;
typedef struct RxPipelineNodeParam;
typedef struct RwFrame;
typedef struct xEntCollis;
typedef struct xPEVCyl;
typedef struct xMemPool;
typedef struct _tagxPad;
typedef struct RxHeap;
typedef struct xQuat;
typedef struct RwBBox;
typedef struct zPlatform;
typedef struct xModelInstance;
typedef struct xCutsceneZbufferHack;
typedef struct xPortalAsset;
typedef struct xCutsceneInfo;
typedef struct zGlobals;
typedef struct xSurface;
typedef struct xEnt;
typedef struct xEntOrbitData;
typedef struct RpTriangle;
typedef struct xScene;
typedef struct xParInterp;
typedef struct RpAtomic;
typedef struct rxHeapBlockHeader;
typedef struct xMat4x3;
typedef struct _tagxRumble;
typedef struct xFFX;
typedef struct zAssetPickupTable;
typedef struct zPlatFMRunTime;
typedef struct xModelPool;
typedef struct RxPipelineRequiresCluster;
typedef struct zCutsceneMgr;
typedef struct xEntMotion;
typedef struct zGlobalSettings;
typedef struct zScene;
typedef struct xPlatformAsset;
typedef struct xGroup;
typedef struct xEntMotionAsset;
typedef struct xUpdateCullEnt;
typedef struct xPEEntBone;
typedef struct xMovePointAsset;
typedef struct xEntShadow;
typedef struct xGroupAsset;
typedef struct xAnimFile;
typedef struct zPlayerLassoInfo;
typedef struct xParSys;
typedef struct xVec4;
typedef struct xCoef3;
typedef struct zJumpParam;
typedef struct RpClump;
typedef struct zLedgeGrabParams;
typedef struct xAnimTransition;
typedef struct RwSurfaceProperties;
typedef struct xAnimTransitionList;
typedef struct xClumpCollBSPTree;
typedef struct RwMatrixTag;
typedef struct xModelTag;
typedef struct rxReq;
typedef struct xEntSplineData;
typedef struct zEntHangable;
typedef struct xLinkAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xClumpCollBSPVertInfo;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zParEmitter;
typedef enum RpWorldRenderOrder;
typedef struct xEntMotionPenData;
typedef struct xPECircle;
typedef struct xClumpCollBSPTriangle;
typedef struct _zPortal;
typedef struct RpMaterial;
typedef enum _tagRumbleType;
typedef struct RwCamera;
typedef enum RxNodeDefEditable;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xEnvAsset;
typedef struct xModelBucket;
typedef enum RxClusterValid;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xEntMPData;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct zCutSceneNames;
typedef struct xEntBoulder;
typedef struct analog_data;
typedef struct xBaseAsset;
typedef struct RpWorldSector;
typedef struct xCutsceneData;
typedef struct RpMorphTarget;
typedef struct xMovePoint;
typedef struct xEntAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitSphere;
typedef struct xLightKit;
typedef struct xCutsceneTime;
typedef enum RwCameraProjection;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xEntMotionERData;
typedef struct xCylinder;
typedef union _class_0;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct iFogParams;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xUpdateCullMgr;
typedef struct xEntFrame;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct xEnv;
typedef struct _tagEmitRect;
typedef struct RwSphere;
typedef struct zLasso;
typedef struct xCutsceneBreak;
typedef struct iEnv;
typedef struct RwLLLink;
typedef struct RwTexDictionary;
typedef struct xShadowSimplePoly;
typedef struct xJSPNodeInfo;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct tri_data_1;
typedef struct xVec2;
typedef struct _class_1;
typedef struct RxClusterRef;
typedef struct xEntMotionOrbitData;
typedef struct RwObject;
typedef struct xCoef;
typedef struct xPEEntBound;
typedef struct xBBox;
typedef struct xLightKitLight;
typedef struct RxIoSpec;
typedef struct _tagEmitLine;
typedef struct xShadowSimpleCache;
typedef struct RpInterpolator;
typedef struct zCutsceneHack;
typedef struct RxNodeMethods;
typedef struct xCutsceneZbuffer;
typedef struct xAnimMultiFileBase;
typedef struct xEntDrive;
typedef struct xEntMechData;
typedef struct RwFrustumPlane;
typedef struct xEntMotionSplineData;
typedef struct _class_2;
typedef enum _tagPadState;
typedef struct _zEnv;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct xGlobals;
typedef struct RpMaterialList;
typedef struct xQCData;
typedef struct _tagEmitVolume;
typedef struct RxPacket;
typedef struct tag_iFile;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct _tagPadAnalog;
typedef struct tag_xFile;
typedef struct RwLinkList;
typedef struct _tagiPad;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int32(*type_1)(RxPipelineNode*);
typedef void(*type_3)(xEnt*, xVec3*);
typedef RpClump*(*type_4)(RpClump*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef xBase*(*type_11)(uint32);
typedef void(*type_14)(xAnimPlay*, xAnimState*);
typedef int8*(*type_21)(xBase*);
typedef int32(*type_22)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_23)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_25)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_26)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_27)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_28)(uint32);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_30)(void*, void*);
typedef uint32(*type_34)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_40)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_41)(void*);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef int32(*type_44)(RxNodeDefinition*);
typedef void(*type_46)(RxNodeDefinition*);
typedef int32(*type_49)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_53)(xAnimTransition*, xAnimSingle*, void*);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_72)(RpWorldSector*);
typedef RpMaterial*(*type_75)(RpMaterial*, void*);
typedef RpAtomic*(*type_81)(RpAtomic*, void*);
typedef void(*type_93)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_94)(RpAtomic*, void*);
typedef void(*type_101)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_106)(xEnt*);
typedef void(*type_107)(xMemPool*, void*);
typedef void(*type_112)(RwResEntry*);

typedef uint32 type_2[2];
typedef xModelTag type_6[4];
typedef int8 type_8[32];
typedef uint32 type_9[2];
typedef RwTexCoords* type_12[8];
typedef zCutsceneHack type_13[58];
typedef float32 type_15[4];
typedef RpLight* type_16[2];
typedef uint8 type_17[4];
typedef uint8 type_18[3];
typedef int8 type_19[32];
typedef xCollis type_20[18];
typedef RwFrame* type_24[2];
typedef uint8 type_31[3];
typedef uint8 type_32[22];
typedef RwFrustumPlane type_33[6];
typedef float32 type_36[2];
typedef uint16 type_37[3];
typedef uint8 type_38[3];
typedef uint8 type_39[22];
typedef RwV3d type_43[8];
typedef float32 type_45[12];
typedef float32 type_47[12];
typedef float32 type_48[12];
typedef int8 type_50[16];
typedef float32 type_51[12];
typedef float32 type_52[12];
typedef float32 type_54[12];
typedef int8 type_55[16];
typedef xVec3 type_56[60];
typedef int8 type_57[16];
typedef int8 type_58[16];
typedef float32 type_59[2];
typedef float32 type_60[22];
typedef uint8 type_61[2];
typedef RwTexCoords* type_63[8];
typedef float32 type_64[22];
typedef uint32 type_65[15];
typedef uint32 type_66[15];
typedef float32 type_67[4];
typedef int8 type_68[64];
typedef xParInterp type_70[1];
typedef uint32 type_71[15];
typedef xVec4 type_73[12];
typedef float32 type_74[15];
typedef float32 type_76[15];
typedef xVec3 type_77[5];
typedef zCutSceneNames type_78[14];
typedef uint32 type_79[15];
typedef uint8 type_80[5];
typedef analog_data type_82[2];
typedef uint32 type_83[4];
typedef xParInterp type_84[4];
typedef uint8 type_85[3];
typedef xParInterp type_86[4];
typedef xVec3 type_87[3];
typedef uint32 type_88[2];
typedef uint8 type_89[2];
typedef uint8 type_90[2];
typedef float32 type_91[6];
typedef float32 type_92[4];
typedef float32 type_95[3];
typedef float32 type_96[16];
typedef float32 type_97[3];
typedef float32 type_98[2];
typedef uint32 type_99[72];
typedef int8 type_100[4];
typedef xModelTag type_102[2];
typedef float32 type_103[3];
typedef uint8 type_104[2];
typedef xBase* type_105[72];
typedef xEnt* type_108[111];
typedef int8 type_109[32];
typedef int8 type_110[32];
typedef uint16 type_111[3];
typedef uint8 type_113[2];
typedef xAnimMultiFileEntry type_114[1];
typedef int8 type_115[128];
typedef xVec3 type_116[4];
typedef xCutsceneZbuffer type_117[4];
typedef int8 type_118[128];
typedef uint8 type_119[14];
typedef type_118 type_120[6];
typedef uint32 type_121[2];
typedef RxCluster type_122[1];
typedef xModelInstance* type_123[14];

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
	type_31 emit_pad;
	type_38 rot;
	xModelTag tag;
	float32 oocull_distance_sqr;
	float32 distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpPolygon
{
	uint16 matIndex;
	type_111 vertIndex;
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
	type_72 renderCallBack;
	RxPipeline* pipeline;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
};

struct anim_coll_data
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
	type_29 BeforeAnimMatrices;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_49 eventFunc;
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
	type_63 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_26 Callback;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xParGroup
{
};

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_98 BilinearLerp;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_70 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_84 color_birth;
	type_86 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
};

struct xJSPHeader
{
	type_100 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_14 BeforeEnter;
	type_69 StateCallback;
	type_29 BeforeAnimMatrices;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	type_74 startTime;
	type_76 endTime;
	type_79 emitID;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_112 destroyNotify;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	uint32 BadReadPause;
	float32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	int32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	type_121 SndChannelReq;
	type_2 SndAssetID;
	type_9 SndHandle;
	XCSNNosey* cb_nosey;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_20 colls;
	type_25 post;
	type_27 depenq;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_107 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct _tagxPad
{
	type_32 value;
	type_39 last_value;
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
	type_60 up_tmr;
	type_64 down_tmr;
	type_82 analog;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xCutsceneZbufferHack
{
	int8* name;
	type_117 times;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	type_57 SoundLeft;
	type_58 SoundRight;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_85 pad;
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
	type_93 update;
	type_93 endUpdate;
	type_3 bupdate;
	type_101 move;
	type_106 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_35 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RpTriangle
{
	type_37 vertIndex;
	int16 matIndex;
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
	type_11 resolvID;
	type_21 base2Name;
	type_28 id2Name;
};

struct xParInterp
{
	type_36 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
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
	type_42 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_83 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xFFX
{
};

struct zAssetPickupTable
{
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_45 tmrs;
	type_47 ttms;
	type_48 atms;
	type_51 dtms;
	type_52 vms;
	type_54 dss;
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

struct zCutsceneMgr : xCutsceneMgr
{
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
	type_89 PowerUp;
	type_90 InitialPowerUp;
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
	type_99 baseCount;
	type_105 baseList;
	_zEnv* zen;
};

struct xPlatformAsset
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_30 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_59 radius;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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
	type_113 NumAnims;
	void** RawData;
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

struct xParSys
{
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_4 callback;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_56 tranTable;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_53 Conditional;
	type_53 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_67 wt;
};

struct rxReq
{
};

struct xEntSplineData
{
	int32 unknown;
};

struct zEntHangable
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_15 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zParEmitter : xParEmitter
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_61 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_5 endUpdate;
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
	type_33 frustumPlanes;
	RwBBox frustumBoundBox;
	type_43 frustumCorners;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_109 name;
	type_110 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RpSector
{
	int32 type;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_114 Files;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct zCutSceneNames
{
	type_68 name;
	int32 played;
	int32 skipOK;
};

struct xEntBoulder
{
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_12 texCoords;
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

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_104 pad;
	float32 delay;
	xSpline3* spl;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_18 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_102 BubbleWandTag;
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
	type_6 HangPawTag;
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
	type_65 Inv_PatsSock;
	type_66 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_71 Inv_LevelPickups;
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
	type_88 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_108 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_119 sb_model_indices;
	type_123 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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
	type_41 activateCB;
	type_41 deactivateCB;
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
	type_73 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_91 MoveSpeed;
	type_95 AnimSneak;
	type_97 AnimWalk;
	type_103 AnimRun;
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
	type_17 talk_filter;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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
	type_77 lastRefs;
	type_80 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_16 light;
	type_24 light_frame;
	int32 memlvl;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xShadowSimplePoly
{
	type_87 vert;
	xVec3 norm;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct _class_1
{
	xVec3* verts;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xCoef
{
	type_92 a;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_96 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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
	type_116 corner;
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

struct zCutsceneHack
{
	int8* cinname;
	int8* modelname;
	float32 radius;
	uint32 tworoot;
	uint32 noshadow;
	uint32 alphaBits;
	type_42 renderCB;
};

struct RxNodeMethods
{
	type_40 nodeBody;
	type_44 nodeInit;
	type_46 nodeTerm;
	type_1 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_22 pipelineNodeConfig;
	type_34 configMsgHandler;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xEntMotionSplineData
{
	int32 unknown;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_120 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_8 sceneStart;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
};

struct tag_iFile
{
	uint32 flags;
	type_115 path;
	int32 fd;
	int32 offset;
	int32 length;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct tag_xFile
{
	type_19 relname;
	tag_iFile ps;
	void* user_data;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagiPad
{
	int32 port;
};

type_50 buffer;
type_55 buffer;
type_13 cutsceneHackTable;
type_78 zCutSceneNamesTable;
int32 gCutsceneSkipOK;
int32 donpcfx;
uint8 ents_hidden;
int32 s_atomicNumber;
zGlobals globals;
float32 gSkipTimeCutscene;
type_62 AtomicDefaultRenderCallBack;
type_94 HackAlphaCB;
type_81 HackBoundCB;
type_75 HackAlphaSetMaterialAlphaCB;
type_23 zCutsceneMgrEventCB;

void check_hide_entities();
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt);
void zCutsceneMgrUpdateFX(zCutsceneMgr* t);
void zCutsceneMgrFinishExit(xBase* to);
void zCutsceneMgrFinishLoad(xBase* to);
int32 zCutsceneMgrEventCB(xBase* to, uint32 toEvent);
void zCutsceneMgrPlayStart(zCutsceneMgr* t);
void zCutSceneNamesTable_clearAll();
RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data);
RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data);
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data);
void zCutsceneMgrLoad(xSerial* s);
void zCutsceneMgrSave(xSerial* s);
void zCutsceneMgrInit(void* b, void* tasset);

// check_hide_entities__Fv
// Start address: 0x12fbb0
void check_hide_entities()
{
	zScene& scene;
	zEnt** it;
	zEnt** end;
	zEnt* ent;
	zEnt* ent;
}

// zCutsceneMgrUpdate__FP5xBaseP6xScenef
// Start address: 0x12fc90
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float32 dt)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrUpdateFX__FP12zCutsceneMgrf
// Start address: 0x130000
void zCutsceneMgrUpdateFX(zCutsceneMgr* t)
{
	xCutsceneMgrAsset* a;
	xCutscene* csn;
	int32 i;
	zParEmitter* e;
}

// zCutsceneMgrFinishExit__FP5xBase
// Start address: 0x1300c0
void zCutsceneMgrFinishExit(xBase* to)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrFinishLoad__FP5xBase
// Start address: 0x130220
void zCutsceneMgrFinishLoad(xBase* to)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x1302f0
int32 zCutsceneMgrEventCB(xBase* to, uint32 toEvent)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrPlayStart__FP12zCutsceneMgr
// Start address: 0x130410
void zCutsceneMgrPlayStart(zCutsceneMgr* t)
{
	uint32 i;
	uint32 j;
	uint32 cinid;
	uint32 hackid;
}

// zCutSceneNamesTable_clearAll__Fv
// Start address: 0x1306b0
void zCutSceneNamesTable_clearAll()
{
	int32 i;
}

// HackAlphaCB__FP8RpAtomicPv
// Start address: 0x130730
RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data)
{
	RpGeometry* pGeom;
}

// HackAlphaSetMaterialAlphaCB__FP10RpMaterialPv
// Start address: 0x130790
RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data)
{
	RwRGBA new_col;
}

// HackBoundCB__FP8RpAtomicPv
// Start address: 0x1307f0
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data)
{
}

// zCutsceneMgrLoad__FP12zCutsceneMgrP7xSerial
// Start address: 0x130830
void zCutsceneMgrLoad(xSerial* s)
{
	int32 i;
}

// zCutsceneMgrSave__FP12zCutsceneMgrP7xSerial
// Start address: 0x130890
void zCutsceneMgrSave(xSerial* s)
{
	int32 i;
}

// zCutsceneMgrInit__FPvPv
// Start address: 0x130910
void zCutsceneMgrInit(void* b, void* tasset)
{
}

