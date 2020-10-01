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
typedef s32(*type_1)(RxPipelineNode*);
typedef void(*type_3)(xEnt*, xVec3*);
typedef RpClump*(*type_4)(RpClump*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef xBase*(*type_11)(u32);
typedef void(*type_14)(xAnimPlay*, xAnimState*);
typedef s8*(*type_21)(xBase*);
typedef s32(*type_22)(RxPipelineNode*, RxPipeline*);
typedef s32(*type_23)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_25)(xEnt*, xScene*, f32, xEntCollis*);
typedef u32(*type_26)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_27)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef s8*(*type_28)(u32);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_30)(void*, void*);
typedef u32(*type_34)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef s32(*type_40)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_41)(void*);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef s32(*type_44)(RxNodeDefinition*);
typedef void(*type_46)(RxNodeDefinition*);
typedef s32(*type_49)(xBase*, xBase*, u32, f32*, xBase*);
typedef u32(*type_53)(xAnimTransition*, xAnimSingle*, void*);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_72)(RpWorldSector*);
typedef RpMaterial*(*type_75)(RpMaterial*, void*);
typedef RpAtomic*(*type_81)(RpAtomic*, void*);
typedef void(*type_93)(xEnt*, xScene*, f32);
typedef RpAtomic*(*type_94)(RpAtomic*, void*);
typedef void(*type_101)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_106)(xEnt*);
typedef void(*type_107)(xMemPool*, void*);
typedef void(*type_112)(RwResEntry*);

typedef u32 type_2[2];
typedef xModelTag type_6[4];
typedef s8 type_8[32];
typedef u32 type_9[2];
typedef RwTexCoords* type_12[8];
typedef zCutsceneHack type_13[58];
typedef f32 type_15[4];
typedef RpLight* type_16[2];
typedef u8 type_17[4];
typedef u8 type_18[3];
typedef s8 type_19[32];
typedef xCollis type_20[18];
typedef RwFrame* type_24[2];
typedef u8 type_31[3];
typedef u8 type_32[22];
typedef RwFrustumPlane type_33[6];
typedef f32 type_36[2];
typedef u16 type_37[3];
typedef u8 type_38[3];
typedef u8 type_39[22];
typedef RwV3d type_43[8];
typedef f32 type_45[12];
typedef f32 type_47[12];
typedef f32 type_48[12];
typedef s8 type_50[16];
typedef f32 type_51[12];
typedef f32 type_52[12];
typedef f32 type_54[12];
typedef s8 type_55[16];
typedef xVec3 type_56[60];
typedef s8 type_57[16];
typedef s8 type_58[16];
typedef f32 type_59[2];
typedef f32 type_60[22];
typedef u8 type_61[2];
typedef RwTexCoords* type_63[8];
typedef f32 type_64[22];
typedef u32 type_65[15];
typedef u32 type_66[15];
typedef f32 type_67[4];
typedef s8 type_68[64];
typedef xParInterp type_70[1];
typedef u32 type_71[15];
typedef xVec4 type_73[12];
typedef f32 type_74[15];
typedef f32 type_76[15];
typedef xVec3 type_77[5];
typedef zCutSceneNames type_78[14];
typedef u32 type_79[15];
typedef u8 type_80[5];
typedef analog_data type_82[2];
typedef u32 type_83[4];
typedef xParInterp type_84[4];
typedef u8 type_85[3];
typedef xParInterp type_86[4];
typedef xVec3 type_87[3];
typedef u32 type_88[2];
typedef u8 type_89[2];
typedef u8 type_90[2];
typedef f32 type_91[6];
typedef f32 type_92[4];
typedef f32 type_95[3];
typedef f32 type_96[16];
typedef f32 type_97[3];
typedef f32 type_98[2];
typedef u32 type_99[72];
typedef s8 type_100[4];
typedef xModelTag type_102[2];
typedef f32 type_103[3];
typedef u8 type_104[2];
typedef xBase* type_105[72];
typedef xEnt* type_108[111];
typedef s8 type_109[32];
typedef s8 type_110[32];
typedef u16 type_111[3];
typedef u8 type_113[2];
typedef xAnimMultiFileEntry type_114[1];
typedef s8 type_115[128];
typedef xVec3 type_116[4];
typedef xCutsceneZbuffer type_117[4];
typedef s8 type_118[128];
typedef u8 type_119[14];
typedef type_118 type_120[6];
typedef u32 type_121[2];
typedef RxCluster type_122[1];
typedef xModelInstance* type_123[14];

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
	type_31 emit_pad;
	type_38 rot;
	xModelTag tag;
	f32 oocull_distance_sqr;
	f32 distance_to_cull_sqr;
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
	u16 gx;
	u16 gz;
	u8 ingrid;
	u8 oversize;
	u8 deleted;
	u8 gpad;
	xGridBound** head;
	xGridBound* next;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

struct RpPolygon
{
	u16 matIndex;
	type_111 vertIndex;
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
	u16 NumSingle;
	u16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_29 BeforeAnimMatrices;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_49 eventFunc;
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
	type_63 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	f32 yaw;
	xCollis* coll;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_26 Callback;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	f32 x;
	f32 y;
};

struct xParGroup
{
};

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	u32 stop;
	xCutsceneZbufferHack* zhack;
	f32 oldfov;
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

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_98 BilinearLerp;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
};

struct xJSPHeader
{
	type_100 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_14 BeforeEnter;
	type_69 StateCallback;
	type_29 BeforeAnimMatrices;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
};

struct xEntPenData
{
	xVec3 top;
	f32 w;
	xMat4x3 omat;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	u32 cutsceneAssetID;
	u32 flags;
	f32 interpSpeed;
	type_74 startTime;
	type_76 endTime;
	type_79 emitID;
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

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_112 destroyNotify;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	u32* TimeChunkOffs;
	u32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	u32 Waiting;
	u32 BadReadPause;
	f32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	f32 Time;
	f32 CamTime;
	u32 PlayIndex;
	u32 Ready;
	s32 DataLoading;
	u32 GotData;
	u32 ShutDownWait;
	f32 PlaybackSpeed;
	u32 Opened;
	tag_xFile File;
	s32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	u32 SndStarted;
	u32 SndNumChannel;
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
	type_20 colls;
	type_25 post;
	type_27 depenq;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_107 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct _tagxPad
{
	type_32 value;
	type_39 last_value;
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
	type_60 up_tmr;
	type_64 down_tmr;
	type_82 analog;
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

struct xQuat
{
	xVec3 v;
	f32 s;
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

struct xCutsceneZbufferHack
{
	s8* name;
	type_117 times;
};

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct xCutsceneInfo
{
	u32 Magic;
	u32 AssetID;
	u32 NumData;
	u32 NumTime;
	u32 MaxModel;
	u32 MaxBufEven;
	u32 MaxBufOdd;
	u32 HeaderSize;
	u32 VisCount;
	u32 VisSize;
	u32 BreakCount;
	u32 pad;
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
	type_85 pad;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RpTriangle
{
	type_37 vertIndex;
	s16 matIndex;
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
	type_11 resolvID;
	type_21 base2Name;
	type_28 id2Name;
};

struct xParInterp
{
	type_36 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_83 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
};

struct xFFX
{
};

struct zAssetPickupTable
{
};

struct zPlatFMRunTime
{
	u32 flags;
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
	u32 NumMatrices;
	xModelInstance* List;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct zCutsceneMgr : xCutsceneMgr
{
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
	type_89 PowerUp;
	type_90 InitialPowerUp;
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
	u32 last_index;
	s32 flg_group;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_30 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
	type_59 radius;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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
	type_113 NumAnims;
	void** RawData;
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

struct xParSys
{
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
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
	f32 animGrab;
	f32 zdist;
	type_56 tranTable;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_53 Conditional;
	type_53 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xModelTag
{
	xVec3 v;
	u32 matidx;
	type_67 wt;
};

struct rxReq
{
};

struct xEntSplineData
{
	s32 unknown;
};

struct zEntHangable
{
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_15 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	u16 atomIndex;
	u16 meshVertIndex;
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
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
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
	u8 flags;
	u8 plane;
	type_61 pad;
	f32 len;
	f32 range;
	f32 period;
	f32 phase;
};

struct xPECircle
{
	f32 radius;
	f32 deflection;
	xVec3 dir;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	u8 flags;
	u8 platData;
	u16 matIndex;
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
	s16 refCount;
	s16 pad;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
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
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_109 name;
	type_110 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RpSector
{
	s32 type;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_114 Files;
};

struct xRot
{
	xVec3 axis;
	f32 angle;
};

struct zCutSceneNames
{
	type_68 name;
	s32 played;
	s32 skipOK;
};

struct xEntBoulder
{
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct xCutsceneData
{
	u32 DataType;
	u32 AssetID;
	u32 ChunkSize;
	union
	{
		u32 FileOffset;
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
	u32 node_wt_sum;
	u8 on;
	type_104 pad;
	f32 delay;
	xSpline3* spl;
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

struct _tagEmitSphere
{
	f32 radius;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
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
	u8 type;
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
	f32 ext_tm;
	f32 ext_wait_tm;
	f32 ret_tm;
	f32 ret_wait_tm;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_102 BubbleWandTag;
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
	type_6 HangPawTag;
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
	type_65 Inv_PatsSock;
	type_66 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_71 Inv_LevelPickups;
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
	type_88 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_108 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_119 sb_model_indices;
	type_123 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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
	u32 mode;
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
	type_73 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_91 MoveSpeed;
	type_95 AnimSneak;
	type_97 AnimWalk;
	type_103 AnimRun;
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
	f32 x_len;
	f32 z_len;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	type_77 lastRefs;
	type_80 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
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
	s32 memlvl;
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
	s32 originalMatIndex;
	s32 nodeFlags;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct _class_1
{
	xVec3* verts;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xCoef
{
	type_92 a;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_96 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	f32 radius;
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
	type_116 corner;
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

struct zCutsceneHack
{
	s8* cinname;
	s8* modelname;
	f32 radius;
	u32 tworoot;
	u32 noshadow;
	u32 alphaBits;
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
	f32 start;
	f32 end;
	f32 nearPlane;
	f32 farPlane;
};

struct xAnimMultiFileBase
{
	u32 Count;
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

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct xEntMotionSplineData
{
	s32 unknown;
};

struct _class_2
{
	f32 t;
	f32 u;
	f32 v;
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
	f32 distance;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_120 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_8 sceneStart;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct _tagEmitVolume
{
	u32 emit_volumeID;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
};

struct tag_iFile
{
	u32 flags;
	type_115 path;
	s32 fd;
	s32 offset;
	s32 length;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
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
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct _tagPadAnalog
{
	s8 x;
	s8 y;
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
	s32 port;
};

type_50 buffer;
type_55 buffer;
type_13 cutsceneHackTable;
type_78 zCutSceneNamesTable;
s32 gCutsceneSkipOK;
s32 donpcfx;
u8 ents_hidden;
s32 s_atomicNumber;
zGlobals globals;
f32 gSkipTimeCutscene;
type_62 AtomicDefaultRenderCallBack;
type_94 HackAlphaCB;
type_81 HackBoundCB;
type_75 HackAlphaSetMaterialAlphaCB;
type_23 zCutsceneMgrEventCB;

void check_hide_entities();
void zCutsceneMgrUpdate(xBase* to, xScene* sc, f32 dt);
void zCutsceneMgrUpdateFX(zCutsceneMgr* t);
void zCutsceneMgrFinishExit(xBase* to);
void zCutsceneMgrFinishLoad(xBase* to);
s32 zCutsceneMgrEventCB(xBase* to, u32 toEvent);
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
void zCutsceneMgrUpdate(xBase* to, xScene* sc, f32 dt)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrUpdateFX__FP12zCutsceneMgrf
// Start address: 0x130000
void zCutsceneMgrUpdateFX(zCutsceneMgr* t)
{
	xCutsceneMgrAsset* a;
	xCutscene* csn;
	s32 i;
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
s32 zCutsceneMgrEventCB(xBase* to, u32 toEvent)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrPlayStart__FP12zCutsceneMgr
// Start address: 0x130410
void zCutsceneMgrPlayStart(zCutsceneMgr* t)
{
	u32 i;
	u32 j;
	u32 cinid;
	u32 hackid;
}

// zCutSceneNamesTable_clearAll__Fv
// Start address: 0x1306b0
void zCutSceneNamesTable_clearAll()
{
	s32 i;
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
	s32 i;
}

// zCutsceneMgrSave__FP12zCutsceneMgrP7xSerial
// Start address: 0x130890
void zCutsceneMgrSave(xSerial* s)
{
	s32 i;
}

// zCutsceneMgrInit__FPvPv
// Start address: 0x130910
void zCutsceneMgrInit(void* b, void* tasset)
{
}

