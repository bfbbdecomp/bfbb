typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct zEntPickup;
typedef struct RpAtomic;
typedef struct xPlatformAsset;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xParGroup;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xSerial;
typedef struct xFFX;
typedef struct xCoef3;
typedef struct xEntMotionAsset;
typedef struct xPEEntBone;
typedef struct xMovePointAsset;
typedef struct xEntBoulder;
typedef struct xAnimTransition;
typedef struct zLODTable;
typedef struct rxHeapFreeBlock;
typedef struct xModelPool;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterial;
typedef struct xAnimMultiFile;
typedef struct RwV2d;
typedef struct xAnimState;
typedef struct xParEmitterAsset;
typedef struct xEntAsset;
typedef struct xModelBucket;
typedef struct RxNodeDefinition;
typedef struct xParSys;
typedef struct _tagKeyShake;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTree;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpClump;
typedef struct xParEmitterPropsAsset;
typedef struct RpWorld;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xEnt;
typedef struct RpGeometry;
typedef struct xBase;
typedef struct xEntSplineData;
typedef struct xCounterAsset;
typedef struct RxPipelineNodeParam;
typedef struct RpWorldSector;
typedef struct _zPortal;
typedef struct xVec3;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxHeap;
typedef struct xClumpCollBSPBranchNode;
typedef struct _zUI;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct zParEmitter;
typedef struct RewardList;
typedef struct xMat4x3;
typedef struct xQuat;
typedef struct xEntFrame;
typedef struct RpMorphTarget;
typedef struct xEntMotionPenData;
typedef struct xPECircle;
typedef struct xClumpCollBSPTriangle;
typedef struct xPortalAsset;
typedef struct RpPolygon;
typedef struct _xCounter;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RwFrame;
typedef struct rxHeapBlockHeader;
typedef struct _tagxPad;
typedef struct xAnimEffect;
typedef struct xMovePoint;
typedef struct xEnvAsset;
typedef struct RpVertexNormal;
typedef struct xParCmdAsset;
typedef struct xParCmdTex;
typedef struct xEntPickupAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntMPData;
typedef struct zLasso;
typedef struct xShadowSimplePoly;
typedef struct ShinySparkly;
typedef struct xEntDrive;
typedef struct _tagxRumble;
typedef struct zPlatform;
typedef struct xEnv;
typedef struct zGlobals;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct RpLight;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zPlatFMRunTime;
typedef enum _CurrentPlayer;
typedef struct zGlobalSettings;
typedef struct zAssetPickup;
typedef struct xGroup;
typedef struct xLinkAsset;
typedef struct xVec4;
typedef struct _tagEmitSphere;
typedef struct xSpline3;
typedef struct xUpdateCullEnt;
typedef struct xCollis;
typedef struct xScene;
typedef struct zEntPickup_cbData;
typedef struct zAssetPickupTable;
typedef struct RwSurfaceProperties;
typedef struct xEntMotionERData;
typedef struct RwMatrixTag;
typedef struct zPlayerLassoInfo;
typedef union _class_0;
typedef struct zCutsceneMgr;
typedef struct RpTriangle;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxReq;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef struct xParSysAsset;
typedef enum RxClusterValidityReq;
typedef struct xShadowSimpleCache;
typedef struct xPar;
typedef struct xEntCollis;
typedef enum _zPlayerWallJumpState;
typedef struct _tagEmitRect;
typedef struct xAnimFile;
typedef struct xBaseAsset;
typedef struct iEnv;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xAnimTransitionList;
typedef struct zEnt;
typedef struct xParCmd;
typedef struct zUIAsset;
typedef struct xJSPNodeInfo;
typedef enum _tagRumbleType;
typedef struct xModelTag;
typedef enum _zPlayerType;
typedef struct tri_data_0;
typedef struct xUpdateCullGroup;
typedef struct zPickupAuraInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xEntMotionOrbitData;
typedef struct RwTexture;
typedef struct analog_data;
typedef enum RwCameraProjection;
typedef enum RpWorldRenderOrder;
typedef enum RxClusterForcePresent;
typedef struct xPEEntBound;
typedef struct xCylinder;
typedef struct xBound;
typedef struct _tagEmitLine;
typedef struct xSurface;
typedef struct xBox;
typedef struct xParEmitterCustomSettings;
typedef struct RxClusterDefinition;
typedef struct xGrid;
typedef struct xJSPHeader;
typedef struct xVec2;
typedef struct RpSector;
typedef struct zCheckPoint;
typedef struct xEntShadow;
typedef struct zPlayerGlobals;
typedef struct xQCData;
typedef struct anim_coll_data;
typedef struct xBBox;
typedef struct xEntMechData;
typedef struct RwSphere;
typedef struct zPlayerCarryInfo;
typedef struct xEntMotionSplineData;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RwTexDictionary;
typedef struct zPlayerSettings;
typedef struct RxOutputSpec;
typedef struct RwCamera;
typedef struct _tagEmitVolume;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct basic_rect;
typedef struct RwObject;
typedef struct xEntMotionMPData;
typedef struct RwLLLink;
typedef struct xEntERData;
typedef struct xGridBound;
typedef struct RxIoSpec;
typedef struct iFogParams;
typedef struct RxNodeMethods;
typedef struct xParEmitter;
typedef struct _tagEmitOffsetPoint;
typedef struct xQCControl;
typedef struct xAnimMultiFileEntry;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct _class_1;
typedef struct xEntMotionMechData;
typedef struct zJumpParam;
typedef struct tri_data_1;
typedef struct RxCluster;
typedef struct xEntPenData;
typedef enum _tagPadState;
typedef struct zEntHangable;
typedef struct RxPacket;
typedef struct xPEVCyl;
typedef struct xCoef;
typedef struct RpInterpolator;
typedef struct xGlobals;
typedef struct xAnimMultiFileBase;
typedef enum RwFogType;
typedef struct xEntOrbitData;
typedef struct iColor_tag;
typedef struct xParInterp;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct _class_2;
typedef struct xEntMotion;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int32(*type_1)(RxPipelineNode*);
typedef uint32(*type_2)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_6)(RwCamera*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_11)(RxPipelineNode*);
typedef void(*type_20)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_21)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef uint32(*type_30)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_36)(void*, void*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_42)(RxNodeDefinition*);
typedef void(*type_44)(xAnimPlay*, xAnimState*);
typedef void(*type_46)(RxNodeDefinition*);
typedef void(*type_49)(void*, xParGroup*);
typedef void(*type_50)(void*);
typedef uint32(*type_51)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_54)(uint32);
typedef int8*(*type_55)(xBase*);
typedef void(*type_56)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_57)(uint32);
typedef void(*type_59)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_64)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_65)(xEnt*, xVec3*);
typedef void(*type_67)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_69)(xEnt*);
typedef int32(*type_71)(xEnt*, void*);
typedef uint32(*type_75)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_77)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_96)(RpWorldSector*);
typedef void(*type_112)(xMemPool*, void*);
typedef int32(*type_119)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_120)(RwResEntry*);
typedef void(*type_126)(zEntPickup*, xScene*, float32);

typedef int8 type_3[128];
typedef float32 type_4[12];
typedef type_3 type_5[6];
typedef uint16 type_8[3];
typedef float32 type_9[4];
typedef float32 type_10[12];
typedef uint8 type_12[3];
typedef uint32 type_13[20];
typedef uint8 type_14[14];
typedef xModelTag type_15[4];
typedef uint8 type_16[2];
typedef int8 type_17[32];
typedef xAnimMultiFileEntry type_18[1];
typedef xModelInstance* type_19[14];
typedef xModelBucket** type_22[3];
typedef zEntPickup* type_23[10];
typedef type_23 type_24[5];
typedef float32 type_25[3];
typedef uint8 type_26[4];
typedef uint16 type_27[2];
typedef RwFrustumPlane type_29[6];
typedef float32 type_31[2];
typedef float32 type_32[2];
typedef uint8 type_33[2];
typedef float32 type_35[2];
typedef RwV3d type_37[8];
typedef RwTexCoords* type_38[8];
typedef _tagKeyShake type_39[4];
typedef uint8 type_41[22];
typedef float32 type_43[2];
typedef uint8 type_45[22];
typedef float32 type_47[2];
typedef xVec3 type_48[3];
typedef xParInterp type_52[1];
typedef RewardList type_53[20];
typedef xVec3 type_58[5];
typedef uint16 type_60[3];
typedef uint8 type_61[5];
typedef float32 type_63[16];
typedef int8 type_66[16];
typedef xVec3 type_68[60];
typedef xParInterp type_70[4];
typedef xParInterp type_72[4];
typedef int8 type_73[16];
typedef float32 type_74[22];
typedef float32 type_76[22];
typedef uint32 type_78[15];
typedef xVec3 type_79[4];
typedef uint8 type_80[4];
typedef uint32 type_81[15];
typedef uint8 type_82[3];
typedef RwTexCoords* type_83[8];
typedef int8 type_84[512];
typedef uint32 type_85[72];
typedef int8 type_86[4];
typedef uint32 type_87[15];
typedef float32 type_88[4];
typedef xVec3 type_89[64];
typedef xBase* type_90[72];
typedef uint32 type_91[4];
typedef uint8 type_92[2];
typedef analog_data type_93[2];
typedef zPickupAuraInfo type_94[15];
typedef uint8 type_95[3];
typedef uint8 type_97[2];
typedef zLODTable type_98[5];
typedef ShinySparkly type_99[7];
typedef uint8 type_100[3];
typedef xCollis type_101[18];
typedef float32 type_102[4];
typedef xVec4 type_103[12];
typedef float32 type_104[4];
typedef uint8 type_105[2];
typedef uint32 type_106[2];
typedef xVec3 type_107[64];
typedef uint8 type_108[2];
typedef float32 type_109[6];
typedef float32 type_110[3];
typedef int8 type_111[512];
typedef float32 type_113[3];
typedef int8 type_114[32];
typedef xModelTag type_115[2];
typedef float32 type_116[3];
typedef int8 type_117[32];
typedef RpLight* type_118[2];
typedef RwFrame* type_121[2];
typedef float32 type_122[2];
typedef xEnt* type_123[111];
typedef float32 type_124[12];
typedef float32 type_125[4];
typedef float32 type_127[12];
typedef uint8 type_128[3];
typedef uint8 type_129[3];
typedef float32 type_130[2];
typedef xLightKitLight type_131[2];
typedef uint8 type_132[2];
typedef float32 type_133[2];
typedef float32 type_134[12];
typedef uint8 type_135[3];
typedef RxCluster type_136[1];
typedef float32 type_137[12];

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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct zEntPickup : zEnt
{
	xShadowSimpleCache simpShadow_embedded;
	uint32 state;
	zAssetPickup* p;
	void* anim;
	float32 animTime;
	float32 timer;
	float32 shake_timer;
	xVec3 shake_pos;
	int32 snackGateInfoDisplayed;
	float32 fx_timer;
	xPar* fx_par;
	zParEmitter* fx_emit;
	float32 fx_scale;
	xVec3 grab_pos;
	uint32 flyflags;
	int32 flg_opts;
	xVec3 vel;
	xVec3 droppos;
	xBase* followTarget;
	xVec3 followOffset;
	xBase* dropParent;
	xEnt* useThisEntPos;
	xEntDrive drv;
	uint16 pickupFlags;
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
	type_62 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xPlatformAsset
{
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
	type_49 draw;
	xParCmdTex* m_cmdTex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
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
	type_56 BeforeAnimMatrices;
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

struct xFFX
{
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct xEntBoulder
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_2 Conditional;
	type_2 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float32 noRenderDist;
	type_22 lodBucket;
	type_25 lodDist;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	type_50 activateCB;
	type_50 deactivateCB;
};

struct _tagiPad
{
	int32 port;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_18 Files;
};

struct RwV2d
{
	float32 x;
	float32 y;
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
	type_44 BeforeEnter;
	type_20 StateCallback;
	type_56 BeforeAnimMatrices;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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

struct _tagKeyShake
{
	xVec3 orig_pos;
	float32 shake_timer;
	float32 shake_it;
	_zUI* ui;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_122 BilinearLerp;
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

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	uint32 parSysID;
	union
	{
		xParInterp rate;
		type_52 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_70 color_birth;
	type_72 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	uint32 emit_limit;
	float32 emit_limit_reset_time;
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
	type_96 renderCallBack;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_59 update;
	type_59 endUpdate;
	type_65 bupdate;
	type_67 move;
	type_69 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_77 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_83 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
};

struct xEntSplineData
{
	int32 unknown;
};

struct xCounterAsset : xBaseAsset
{
	int16 count;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_38 texCoords;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
	uint16 preUpdateIndex;
	uint16 updateIndex;
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

struct zParEmitter : xParEmitter
{
};

struct RewardList
{
	uint8 active;
	float32 timer;
	xVec3* ppos;
	xVec3 pos;
	uint32 num;
	uint32 currRequest;
	type_13 pickups;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_33 pad;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RpPolygon
{
	uint16 matIndex;
	type_8 vertIndex;
};

struct _xCounter : xBase
{
	xCounterAsset* asset;
	int16 count;
	uint8 state;
	uint8 counterFlags;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_91 pad;
};

struct _tagxPad
{
	type_41 value;
	type_45 last_value;
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
	type_74 up_tmr;
	type_76 down_tmr;
	type_93 analog;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_51 Callback;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_92 pad;
	float32 delay;
	xSpline3* spl;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	type_132 pad;
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

struct xEntPickupAsset
{
	uint32 pickupHash;
	uint16 pickupFlags;
	uint16 pickupValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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
	type_58 lastRefs;
	type_61 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
};

struct ShinySparkly
{
	uint16 pickupType;
	uint16 pickupIndex;
	float32 radius;
	float32 std_rate;
	float32 fly_rate;
	uint8 br;
	uint8 bg;
	uint8 bb;
	uint8 ba;
	uint8 dr;
	uint8 dg;
	uint8 db;
	uint8 da;
	uint32 envmapID;
	float32 shininess;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_120 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_124 tmrs;
	type_127 ttms;
	type_134 atms;
	type_137 dtms;
	type_4 vms;
	type_10 dss;
};

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
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
	type_105 PowerUp;
	type_108 InitialPowerUp;
};

struct zAssetPickup
{
	uint32 pickupHash;
	uint8 pickupType;
	uint8 pickupIndex;
	uint16 pickupFlags;
	uint32 quantity;
	uint32 modelID;
	uint32 animID;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_9 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct _tagEmitSphere
{
	float32 radius;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_36 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_54 resolvID;
	type_55 base2Name;
	type_57 id2Name;
};

struct zEntPickup_cbData
{
	xScene* sc;
	float32 dt;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zCutsceneMgr
{
};

struct RpTriangle
{
	type_60 vertIndex;
	int16 matIndex;
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
	type_63 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct rxReq
{
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
	type_85 baseCount;
	type_90 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_68 tranTable;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_79 corner;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_80 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_97 m_texIdx;
	type_100 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_102 m_cvel;
	type_104 m_cfl;
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
	type_101 colls;
	type_64 post;
	type_75 depenq;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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
	type_16 NumAnims;
	void** RawData;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_118 light;
	type_121 light_frame;
	int32 memlvl;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
};

struct zUIAsset : xEntAsset
{
	uint32 uiFlags;
	type_27 dim;
	uint32 textureID;
	type_32 uva;
	type_35 uvb;
	type_43 uvc;
	type_47 uvd;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_88 wt;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct zPickupAuraInfo
{
	float32 size;
	float32 yoffset;
	iColor_tag color;
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

struct st_SERIAL_CLIENTINFO
{
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_114 name;
	type_117 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_129 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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
	type_12 pad;
	void* moprops;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	uint32 custom_flags;
	uint32 attachToID;
	xVec3 pos;
	xVec3 vel;
	float32 vel_angle_variation;
	type_95 rot;
	uint8 padding;
	float32 radius;
	float32 emit_interval_current;
	void* emit_volume;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xGrid
{
	uint8 ingrid_id;
	type_82 pad;
	uint16 nx;
	uint16 nz;
	float32 minx;
	float32 minz;
	float32 maxx;
	float32 maxz;
	float32 csizex;
	float32 csizez;
	float32 inv_csizex;
	float32 inv_csizez;
	float32 maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct xJSPHeader
{
	type_86 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RpSector
{
	int32 type;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_133 radius;
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
	type_115 BubbleWandTag;
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
	type_15 HangPawTag;
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
	type_78 Inv_PatsSock;
	type_81 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_87 Inv_LevelPickups;
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
	type_106 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_123 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_14 sb_model_indices;
	type_19 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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

struct anim_coll_data
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xEntMotionSplineData
{
	int32 unknown;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_103 frustplane;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_109 MoveSpeed;
	type_110 AnimSneak;
	type_113 AnimWalk;
	type_116 AnimRun;
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
	type_26 talk_filter;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_6 endUpdate;
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
	type_29 frustumPlanes;
	RwBBox frustumBoundBox;
	type_37 frustumCorners;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RxNodeMethods
{
	type_34 nodeBody;
	type_42 nodeInit;
	type_46 nodeTerm;
	type_1 pipelineNodeInit;
	type_11 pipelineNodeTerm;
	type_21 pipelineNodeConfig;
	type_30 configMsgHandler;
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
	type_128 emit_pad;
	type_135 rot;
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

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _class_1
{
	xVec3* verts;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct zEntHangable
{
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_136 clusters;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xCoef
{
	type_125 a;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_5 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_17 sceneStart;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xParInterp
{
	type_130 val;
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
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

type_66 buffer;
type_73 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
zParEmitter* gEmitShinySparkles;
float32 SPARKLE_MAX_RATE;
type_99 ShinySparklyTable;
uint32 gEnableRewardsQueue;
float32 sSpatulaGrabbedSpinMult;
float32 sSpatulaGrabbedLife;
float32 sUnderwearFade;
RwMatrixTag sPickupOrientation;
type_24 rewardPickups;
type_53 sRewards;
type_98 sRewardLOD;
type_39 sKeyShake;
RpLight* sPickupDirectionalLight;
RpLight* sPickupAmbientLight;
xLightKit sPickupLightKit;
type_131 sPickupLightKitLight;
xEntFrame gPickupFrame;
xEntCollis gPickupCollis;
_xCounter* keyCounter;
zEntPickup* sSpatulaAlreadyGiven;
zEntPickup* sSpatulaBungeeDeferred;
type_94 zPickupAuraTable;
zGlobals globals;
uint32 gPTankDisable;
int32 gSpongeBall;
uint8* giAnimScratch;
xQCControl xqc_def_ctrl;
_CurrentPlayer gCurrentPlayer;
type_71 CheckPickupAgainstPlayer;
xGrid colls_grid;
type_119 zEntPickupEventCB;
type_126 zEntPickup_Update;
xMat4x3 g_I3;

void zEntPickup_RewardPostSetup();
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num);
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num, xVec3* ppos);
void spawnNRewards(uint32* pickups, uint32 num, xVec3* ppos);
void zEntPickup_SceneUpdate(float32 dt);
void zEntPickup_SceneReset();
void zEntPickup_SceneEnter();
uint32 rewardRequest(uint32 shinyType, xVec3* ppos);
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, uint32 pcount, float32 dt);
void zEntPickup_RenderList(zEntPickup* plist, uint32 pcount);
void zEntPickup_RenderOne(xEnt* ent);
void zEntPickup_Render(zEntPickup* plist, uint32 pcount);
void zEntPickup_UpdateFX(zEntPickup* ent, float32 dt);
void zEntPickup_Drop(zEntPickup* ent);
void zEntPickup_FlushGrabbed();
void zEntPickup_Load(zEntPickup* ent, xSerial* s);
void zEntPickup_Save(zEntPickup* ent, xSerial* s);
void zEntPickup_Reset(zEntPickup* ent);
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float32 dt);
void zEntPickup_GiveAllRewardsNow();
void collectPickup(zEntPickup* ent);
void zEntPickup_GivePickup(zEntPickup* ent);
int32 CheckPickupAgainstPlayer(xEnt* cbent);
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, float32 dt);
int32 zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntPickup_Setup();
void zEntPickup_Setup(zEntPickup* p);
void zEntPickup_ShinySparklyInit(RpAtomic* data);
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset);
void zEntPickupInit(void* ent, void* asset);
void zEntPickup_Startup();
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float32 dt);

// zEntPickup_RewardPostSetup__Fv
// Start address: 0x138230
void zEntPickup_RewardPostSetup()
{
	int32 i;
	int32 j;
	zLODTable* lod;
}

// zEntPickup_SpawnNRewards__FPUiUi5xVec3
// Start address: 0x138330
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num)
{
	xVec3 pos;
}

// zEntPickup_SpawnNRewards__FPUiUiP5xVec3
// Start address: 0x138370
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num, xVec3* ppos)
{
	xVec3 pos;
}

// spawnNRewards__FPUiUiP5xVec35xVec3
// Start address: 0x1383b0
void spawnNRewards(uint32* pickups, uint32 num, xVec3* ppos)
{
	xVec3 pos;
	int32 i;
	uint32 j;
}

// zEntPickup_SceneUpdate__Ff
// Start address: 0x138570
void zEntPickup_SceneUpdate(float32 dt)
{
	int32 i;
	uint32 ret;
	int32 i;
}

// zEntPickup_SceneReset__Fv
// Start address: 0x1389c0
void zEntPickup_SceneReset()
{
}

// zEntPickup_SceneEnter__Fv
// Start address: 0x1389e0
void zEntPickup_SceneEnter()
{
}

// rewardRequest__FUiP5xVec35xVec3
// Start address: 0x138a00
uint32 rewardRequest(uint32 shinyType, xVec3* ppos)
{
	xVec3 pos;
	int32 i;
	zEntPickup* p;
}

// zEntPickup_UpdateFlyToInterface__FP10zEntPickupUif
// Start address: 0x138b30
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, uint32 pcount, float32 dt)
{
	uint32 i;
	zPickupAuraInfo* ai;
	xVec3 pos;
	ShinySparkly* sp;
	int32 j;
	xParEmitterCustomSettings info;
	int32 i;
	ShinySparkly* sp;
	xVec3 pos;
	int32 count;
	type_107 plist;
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	int32 num_verts;
	int32 j;
	int32 n;
	xVec3* ent_pos;
	float32 ydist;
}

// zEntPickup_RenderList__FP10zEntPickupUi
// Start address: 0x139420
void zEntPickup_RenderList(zEntPickup* plist, uint32 pcount)
{
	uint32 i;
	RpAtomic* imodel;
	int32 shadowResult;
	xVec3 shadVec;
	RwFrame* frame;
	RwV3d vec_scale;
	int32 alpha;
	float32 dist2;
	float32 dx__;
	float32 dy__;
	float32 dz__;
}

// zEntPickup_RenderOne__FP4xEnt
// Start address: 0x139860
void zEntPickup_RenderOne(xEnt* ent)
{
	zEntPickup* pickup;
	RpAtomic* imodel;
	int32 shadowResult;
	xVec3 shadVec;
	RwFrame* frame;
	RwV3d vec_scale;
}

// zEntPickup_Render__FP10zEntPickupUi
// Start address: 0x139aa0
void zEntPickup_Render(zEntPickup* plist, uint32 pcount)
{
	uint32 i;
	RwMatrixTag* imat;
}

// zEntPickup_UpdateFX__FP10zEntPickupP6xScenef
// Start address: 0x139c70
void zEntPickup_UpdateFX(zEntPickup* ent, float32 dt)
{
	zPickupAuraInfo* ai;
	xVec3 pos;
	xParEmitterCustomSettings info;
	ShinySparkly* sp;
	int32 i;
	int32 i;
	ShinySparkly* sp;
	xVec3 pos;
	int32 count;
	type_89 plist;
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	int32 num_verts;
	int32 j;
	int32 n;
}

// zEntPickup_Drop__FP10zEntPickup
// Start address: 0x13a580
void zEntPickup_Drop(zEntPickup* ent)
{
	float32 c;
	type_31 sol;
	uint32 solcnt;
}

// zEntPickup_FlushGrabbed__Fv
// Start address: 0x13a720
void zEntPickup_FlushGrabbed()
{
	zScene* s;
	zEntPickup* it;
	zEntPickup* end;
}

// zEntPickup_Load__FP10zEntPickupP7xSerial
// Start address: 0x13a860
void zEntPickup_Load(zEntPickup* ent, xSerial* s)
{
	int32 is_a_dropper;
	uint32 state;
	int32 coll;
}

// zEntPickup_Save__FP10zEntPickupP7xSerial
// Start address: 0x13aa70
void zEntPickup_Save(zEntPickup* ent, xSerial* s)
{
}

// zEntPickup_Reset__FP10zEntPickup
// Start address: 0x13aae0
void zEntPickup_Reset(zEntPickup* ent)
{
}

// zEntPickup_Update__FP10zEntPickupP6xScenef
// Start address: 0x13abd0
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float32 dt)
{
	xEntFrame frame;
	float32 duration;
	xQuat* q0;
	xVec3* t0;
	xVec3* p;
	xVec3* player;
	xVec3* player;
	zEnt* plent;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 chkdist;
	xVec3* dest;
	xVec3* src;
	xVec3 vec;
	float32 mult;
	float32 distMult;
	float32 yvel;
	float32 ydiff;
	xVec3 dp;
	float32 vel2;
	float32 dx__;
	float32 dy__;
	float32 dz__;
}

// zEntPickup_GiveAllRewardsNow__Fv
// Start address: 0x13b6b0
void zEntPickup_GiveAllRewardsNow()
{
	uint32 i;
	uint32 j;
	uint32 total;
}

// collectPickup__FP10zEntPickup
// Start address: 0x13b8f0
void collectPickup(zEntPickup* ent)
{
}

// zEntPickup_GivePickup__FP10zEntPickup
// Start address: 0x13bbd0
void zEntPickup_GivePickup(zEntPickup* ent)
{
}

// CheckPickupAgainstPlayer__FP4xEntPv
// Start address: 0x13bee0
int32 CheckPickupAgainstPlayer(xEnt* cbent)
{
	zEntPickup* ent;
	float32 distance;
	zEnt* plent;
	float32 distsqr;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 chkdist;
	int32 i;
	float32 dist2_1;
	float32 dist2_2;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	int32 i;
}

// zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef
// Start address: 0x13c910
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, float32 dt)
{
	zEntPickup_cbData cbdata;
}

// zEntPickupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x13c960
int32 zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zEntPickup* p;
	xEntFrame frame;
}

// zEntPickup_Setup__Fv
// Start address: 0x13ce30
void zEntPickup_Setup()
{
	zScene* zsc;
	uint32 i;
	uint32 j;
	xBase* base;
	zEntPickup* p;
	xVec3* srcPos;
}

// zEntPickup_Setup__FP10zEntPickup
// Start address: 0x13d030
void zEntPickup_Setup(zEntPickup* p)
{
}

// zEntPickup_ShinySparklyInit__FP8RpAtomic
// Start address: 0x13d040
void zEntPickup_ShinySparklyInit(RpAtomic* data)
{
}

// zEntPickupInit__FP10zEntPickupP9xEntAsset
// Start address: 0x13d080
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset)
{
	xEntPickupAsset* pickupAsset;
	uint32 i;
	uint32 tmpsize;
	zAssetPickup* ptbl;
	RpAtomic* modelData;
	void* animData;
	RxPipeline* fastAtmPipe;
	RxPipeline* fastMatPipe;
	ShinySparkly* sp;
	int32 i;
	RpAtomic* atom;
	int32 found;
	int32 i;
	type_84 name;
	int32 j;
}

// zEntPickupInit__FPvPv
// Start address: 0x13d4f0
void zEntPickupInit(void* ent, void* asset)
{
}

// zEntPickup_Startup__Fv
// Start address: 0x13d500
void zEntPickup_Startup()
{
	RwFrame* frame;
	RwRGBAReal black;
	RwRGBAReal white;
}

// PickupFallPhysics__FP10zEntPickupP6xScenef
// Start address: 0x13d670
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float32 dt)
{
}

