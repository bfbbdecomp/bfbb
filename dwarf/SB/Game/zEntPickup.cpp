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
typedef s32(*type_1)(RxPipelineNode*);
typedef u32(*type_2)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_6)(RwCamera*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_11)(RxPipelineNode*);
typedef void(*type_20)(xAnimState*, xAnimSingle*, void*);
typedef s32(*type_21)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef u32(*type_30)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_36)(void*, void*);
typedef s32(*type_40)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_42)(RxNodeDefinition*);
typedef void(*type_44)(xAnimPlay*, xAnimState*);
typedef void(*type_46)(RxNodeDefinition*);
typedef void(*type_49)(void*, xParGroup*);
typedef void(*type_50)(void*);
typedef u32(*type_51)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_54)(u32);
typedef s8*(*type_55)(xBase*);
typedef void(*type_56)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s8*(*type_57)(u32);
typedef void(*type_59)(xEnt*, xScene*, f32);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_64)(xEnt*, xScene*, f32, xEntCollis*);
typedef void(*type_65)(xEnt*, xVec3*);
typedef void(*type_67)(xEnt*, xScene*, f32, xEntFrame*);
typedef void(*type_69)(xEnt*);
typedef s32(*type_71)(xEnt*, void*);
typedef u32(*type_75)(xEnt*, xEnt*, xScene*, f32, xCollis*);
typedef void(*type_77)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_96)(RpWorldSector*);
typedef void(*type_112)(xMemPool*, void*);
typedef s32(*type_119)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_120)(RwResEntry*);
typedef void(*type_126)(zEntPickup*, xScene*, f32);

typedef s8 type_3[128];
typedef f32 type_4[12];
typedef type_3 type_5[6];
typedef u16 type_8[3];
typedef f32 type_9[4];
typedef f32 type_10[12];
typedef u8 type_12[3];
typedef u32 type_13[20];
typedef u8 type_14[14];
typedef xModelTag type_15[4];
typedef u8 type_16[2];
typedef s8 type_17[32];
typedef xAnimMultiFileEntry type_18[1];
typedef xModelInstance* type_19[14];
typedef xModelBucket** type_22[3];
typedef zEntPickup* type_23[10];
typedef type_23 type_24[5];
typedef f32 type_25[3];
typedef u8 type_26[4];
typedef u16 type_27[2];
typedef RwFrustumPlane type_29[6];
typedef f32 type_31[2];
typedef f32 type_32[2];
typedef u8 type_33[2];
typedef f32 type_35[2];
typedef RwV3d type_37[8];
typedef RwTexCoords* type_38[8];
typedef _tagKeyShake type_39[4];
typedef u8 type_41[22];
typedef f32 type_43[2];
typedef u8 type_45[22];
typedef f32 type_47[2];
typedef xVec3 type_48[3];
typedef xParInterp type_52[1];
typedef RewardList type_53[20];
typedef xVec3 type_58[5];
typedef u16 type_60[3];
typedef u8 type_61[5];
typedef f32 type_63[16];
typedef s8 type_66[16];
typedef xVec3 type_68[60];
typedef xParInterp type_70[4];
typedef xParInterp type_72[4];
typedef s8 type_73[16];
typedef f32 type_74[22];
typedef f32 type_76[22];
typedef u32 type_78[15];
typedef xVec3 type_79[4];
typedef u8 type_80[4];
typedef u32 type_81[15];
typedef u8 type_82[3];
typedef RwTexCoords* type_83[8];
typedef s8 type_84[512];
typedef u32 type_85[72];
typedef s8 type_86[4];
typedef u32 type_87[15];
typedef f32 type_88[4];
typedef xVec3 type_89[64];
typedef xBase* type_90[72];
typedef u32 type_91[4];
typedef u8 type_92[2];
typedef analog_data type_93[2];
typedef zPickupAuraInfo type_94[15];
typedef u8 type_95[3];
typedef u8 type_97[2];
typedef zLODTable type_98[5];
typedef ShinySparkly type_99[7];
typedef u8 type_100[3];
typedef xCollis type_101[18];
typedef f32 type_102[4];
typedef xVec4 type_103[12];
typedef f32 type_104[4];
typedef u8 type_105[2];
typedef u32 type_106[2];
typedef xVec3 type_107[64];
typedef u8 type_108[2];
typedef f32 type_109[6];
typedef f32 type_110[3];
typedef s8 type_111[512];
typedef f32 type_113[3];
typedef s8 type_114[32];
typedef xModelTag type_115[2];
typedef f32 type_116[3];
typedef s8 type_117[32];
typedef RpLight* type_118[2];
typedef RwFrame* type_121[2];
typedef f32 type_122[2];
typedef xEnt* type_123[111];
typedef f32 type_124[12];
typedef f32 type_125[4];
typedef f32 type_127[12];
typedef u8 type_128[3];
typedef u8 type_129[3];
typedef f32 type_130[2];
typedef xLightKitLight type_131[2];
typedef u8 type_132[2];
typedef f32 type_133[2];
typedef f32 type_134[12];
typedef u8 type_135[3];
typedef RxCluster type_136[1];
typedef f32 type_137[12];

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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct zEntPickup : zEnt
{
	xShadowSimpleCache simpShadow_embedded;
	u32 state;
	zAssetPickup* p;
	void* anim;
	f32 animTime;
	f32 timer;
	f32 shake_timer;
	xVec3 shake_pos;
	s32 snackGateInfoDisplayed;
	f32 fx_timer;
	xPar* fx_par;
	zParEmitter* fx_emit;
	f32 fx_scale;
	xVec3 grab_pos;
	u32 flyflags;
	s32 flg_opts;
	xVec3 vel;
	xVec3 droppos;
	xBase* followTarget;
	xVec3 followOffset;
	xBase* dropParent;
	xEnt* useThisEntPos;
	xEntDrive drv;
	u16 pickupFlags;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xPlatformAsset
{
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

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	s32 m_num_of_particles;
	u8 m_alive;
	u8 m_killWhenDead;
	u8 m_active;
	u8 m_visible;
	u8 m_culled;
	u8 m_priority;
	u8 m_flags;
	u8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_49 draw;
	xParCmdTex* m_cmdTex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	u16 NumSingle;
	u16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_56 BeforeAnimMatrices;
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

struct xEntBoulder
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_2 Conditional;
	type_2 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	f32 noRenderDist;
	type_22 lodBucket;
	type_25 lodDist;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	type_50 activateCB;
	type_50 deactivateCB;
};

struct _tagiPad
{
	s32 port;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_18 Files;
};

struct RwV2d
{
	f32 x;
	f32 y;
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
	type_44 BeforeEnter;
	type_20 StateCallback;
	type_56 BeforeAnimMatrices;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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

struct xParSys : xBase
{
	xParSysAsset* tasset;
	u32 cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	u8 visible;
	RwTexture* txtr_particle;
};

struct _tagKeyShake
{
	xVec3 orig_pos;
	f32 shake_timer;
	f32 shake_it;
	_zUI* ui;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_122 BilinearLerp;
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

struct xClumpCollBSPTree
{
	u32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	u32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
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
	u32 parSysID;
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
	u32 emit_limit;
	f32 emit_limit_reset_time;
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
	type_96 renderCallBack;
	RxPipeline* pipeline;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
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
	s32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_83 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
};

struct xEntSplineData
{
	s32 unknown;
};

struct xCounterAsset : xBaseAsset
{
	s16 count;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpWorldSector
{
	s32 type;
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
	u16 matListWindowBase;
	u16 numVertices;
	u16 numPolygons;
	u16 pad;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xClumpCollBSPVertInfo
{
	u16 atomIndex;
	u16 meshVertIndex;
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

struct xClumpCollBSPBranchNode
{
	u32 leftInfo;
	u32 rightInfo;
	f32 leftValue;
	f32 rightValue;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	u32 uiFlags;
	u32 uiButton;
	u16 preUpdateIndex;
	u16 updateIndex;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct zParEmitter : xParEmitter
{
};

struct RewardList
{
	u8 active;
	f32 timer;
	xVec3* ppos;
	xVec3 pos;
	u32 num;
	u32 currRequest;
	type_13 pickups;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
};

struct xQuat
{
	xVec3 v;
	f32 s;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xEntMotionPenData
{
	u8 flags;
	u8 plane;
	type_33 pad;
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

struct xPortalAsset : xBaseAsset
{
	u32 assetCameraID;
	u32 assetMarkerID;
	f32 ang;
	u32 sceneID;
};

struct RpPolygon
{
	u16 matIndex;
	type_8 vertIndex;
};

struct _xCounter : xBase
{
	xCounterAsset* asset;
	s16 count;
	u8 state;
	u8 counterFlags;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
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
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_91 pad;
};

struct _tagxPad
{
	type_41 value;
	type_45 last_value;
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
	type_74 up_tmr;
	type_76 down_tmr;
	type_93 analog;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_51 Callback;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	u32 node_wt_sum;
	u8 on;
	type_92 pad;
	f32 delay;
	xSpline3* spl;
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

struct RpVertexNormal
{
	s8 x;
	s8 y;
	s8 z;
	u8 pad;
};

struct xParCmdAsset
{
	u32 type;
	u8 enabled;
	u8 mode;
	type_132 pad;
};

struct xParCmdTex : xParCmdAsset
{
	f32 x1;
	f32 y1;
	f32 x2;
	f32 y2;
	u8 birthMode;
	u8 rows;
	u8 cols;
	u8 unit_count;
	f32 unit_width;
	f32 unit_height;
};

struct xEntPickupAsset
{
	u32 pickupHash;
	u16 pickupFlags;
	u16 pickupValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	u16 pickupType;
	u16 pickupIndex;
	f32 radius;
	f32 std_rate;
	f32 fly_rate;
	u8 br;
	u8 bg;
	u8 bb;
	u8 ba;
	u8 dr;
	u8 dg;
	u8 db;
	u8 da;
	u32 envmapID;
	f32 shininess;
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

struct _tagxRumble
{
	_tagRumbleType type;
	f32 seconds;
	_tagxRumble* next;
	s16 active;
	u16 fxflags;
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
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_120 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct zPlatFMRunTime
{
	u32 flags;
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
	type_105 PowerUp;
	type_108 InitialPowerUp;
};

struct zAssetPickup
{
	u32 pickupHash;
	u8 pickupType;
	u8 pickupIndex;
	u16 pickupFlags;
	u32 quantity;
	u32 modelID;
	u32 animID;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_9 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xVec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

struct _tagEmitSphere
{
	f32 radius;
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

struct xUpdateCullEnt
{
	u16 index;
	s16 groupIndex;
	type_36 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_54 resolvID;
	type_55 base2Name;
	type_57 id2Name;
};

struct zEntPickup_cbData
{
	xScene* sc;
	f32 dt;
};

struct zAssetPickupTable
{
	u32 Magic;
	u32 Count;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	s16 matIndex;
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_63 matrix;
	f32 radius;
	f32 angle;
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
	type_85 baseCount;
	type_90 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	f32 animGrab;
	f32 zdist;
	type_68 tranTable;
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

struct xParSysAsset : xBaseAsset
{
	u32 type;
	u32 parentParSysID;
	u32 textureID;
	u8 parFlags;
	u8 priority;
	u16 maxPar;
	u8 renderFunc;
	u8 renderSrcBlendMode;
	u8 renderDstBlendMode;
	u8 cmdCount;
	u32 cmdSize;
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
	type_79 corner;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	f32 m_lifetime;
	type_80 m_c;
	xVec3 m_pos;
	f32 m_size;
	xVec3 m_vel;
	f32 m_sizeVel;
	u8 m_flag;
	u8 m_mode;
	type_97 m_texIdx;
	type_100 m_rotdeg;
	u8 pad8;
	f32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_102 m_cvel;
	type_104 m_cfl;
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
	f32 x_len;
	f32 z_len;
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
	type_16 NumAnims;
	void** RawData;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	s32 memlvl;
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
	f32 angle;
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
	u32 flag;
	xParCmdAsset* tasset;
};

struct zUIAsset : xEntAsset
{
	u32 uiFlags;
	type_27 dim;
	u32 textureID;
	type_32 uva;
	type_35 uvb;
	type_43 uvc;
	type_47 uvd;
};

struct xJSPNodeInfo
{
	s32 originalMatIndex;
	s32 nodeFlags;
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
	u32 matidx;
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
	f32 yaw;
	xCollis* coll;
};

struct xUpdateCullGroup
{
	u32 active;
	u16 startIndex;
	u16 endIndex;
	xGroup* groupObject;
};

struct zPickupAuraInfo
{
	f32 size;
	f32 yoffset;
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
	f32 r;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xEntMotionOrbitData
{
	xVec3 center;
	f32 w;
	f32 h;
	f32 period;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_114 name;
	type_117 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	f32 mag;
	f32 ang;
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
	u8 flags;
	u8 type;
	u8 pad1;
	u8 pad2;
	f32 expand;
	f32 deflection;
};

struct xCylinder
{
	xVec3 center;
	f32 r;
	f32 h;
};

struct xBound
{
	xQCData qcd;
	u8 type;
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
	f32 radius;
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
	u32 custom_flags;
	u32 attachToID;
	xVec3 pos;
	xVec3 vel;
	f32 vel_angle_variation;
	type_95 rot;
	u8 padding;
	f32 radius;
	f32 emit_interval_current;
	void* emit_volume;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xGrid
{
	u8 ingrid_id;
	type_82 pad;
	u16 nx;
	u16 nz;
	f32 minx;
	f32 minz;
	f32 maxx;
	f32 maxz;
	f32 csizex;
	f32 csizez;
	f32 inv_csizex;
	f32 inv_csizez;
	f32 maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct xJSPHeader
{
	type_86 idtag;
	u32 version;
	u32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct RpSector
{
	s32 type;
};

struct zCheckPoint
{
	xVec3 pos;
	f32 rot;
	u32 initCamID;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	f32 dst_cast;
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
	type_115 BubbleWandTag;
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
	type_15 HangPawTag;
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
	type_78 Inv_PatsSock;
	type_81 Inv_PatsSock_Max;
	u32 Inv_PatsSock_CurrentLevel;
	type_87 Inv_LevelPickups;
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
	type_106 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	u32 SlideTrackSliding;
	u32 SlideTrackCount;
	type_123 SlideTrackEnt;
	u32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	f32 SlideTrackDecay;
	f32 SlideTrackLean;
	f32 SlideTrackLand;
	type_14 sb_model_indices;
	type_19 sb_models;
	u32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	f32 PredictAngV;
	xVec3 PredictCurrDir;
	f32 PredictCurrVel;
	f32 KnockBackTimer;
	f32 KnockIntoAirTimer;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
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

struct xEntMotionSplineData
{
	s32 unknown;
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
	type_26 talk_filter;
};

struct RxOutputSpec
{
	s8* name;
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
	f32 nearPlane;
	f32 farPlane;
	f32 fogPlane;
	f32 zScale;
	f32 zShift;
	type_29 frustumPlanes;
	RwBBox frustumBoundBox;
	type_37 frustumCorners;
};

struct _tagEmitVolume
{
	u32 emit_volumeID;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct basic_rect
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct xEntMotionMPData
{
	u32 flags;
	u32 mp_id;
	f32 speed;
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
	f32 et;
	f32 wet;
	f32 rt;
	f32 wrt;
	f32 p;
	f32 brt;
	f32 ert;
	s32 state;
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

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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
	u8 rate_mode;
	f32 rate;
	f32 rate_time;
	f32 rate_fraction;
	f32 rate_fraction_cull;
	u8 emit_flags;
	type_128 emit_pad;
	type_135 rot;
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

struct xQCControl
{
	f32 world_xmin;
	f32 world_ymin;
	f32 world_zmin;
	f32 world_xmax;
	f32 world_ymax;
	f32 world_zmax;
	f32 world_xsz;
	f32 world_ysz;
	f32 world_zsz;
	f32 scale_x;
	f32 scale_y;
	f32 scale_z;
	f32 center_x;
	f32 center_y;
	f32 center_z;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct RwFrustumPlane
{
	RwPlane plane;
	u8 closestX;
	u8 closestY;
	u8 closestZ;
	u8 pad;
};

struct RwPlane
{
	RwV3d normal;
	f32 distance;
};

struct _class_1
{
	xVec3* verts;
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

struct zJumpParam
{
	f32 PeakHeight;
	f32 TimeGravChange;
	f32 TimeHold;
	f32 ImpulseVel;
};

struct tri_data_1
{
	u32 index;
	f32 r;
	f32 d;
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

struct xEntPenData
{
	xVec3 top;
	f32 w;
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
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_136 clusters;
};

struct xPEVCyl
{
	f32 height;
	f32 radius;
	f32 deflection;
};

struct xCoef
{
	type_125 a;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	s32 profile;
	type_5 profFunc;
	xUpdateCullMgr* updateMgr;
	s32 sceneFirst;
	type_17 sceneStart;
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

struct xAnimMultiFileBase
{
	u32 Count;
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
	f32 a;
	f32 b;
	f32 p;
	f32 w;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct xParInterp
{
	type_130 val;
	u32 interp;
	f32 freq;
	f32 oofreq;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_2
{
	f32 t;
	f32 u;
	f32 v;
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

type_66 buffer;
type_73 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
zParEmitter* gEmitShinySparkles;
f32 SPARKLE_MAX_RATE;
type_99 ShinySparklyTable;
u32 gEnableRewardsQueue;
f32 sSpatulaGrabbedSpinMult;
f32 sSpatulaGrabbedLife;
f32 sUnderwearFade;
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
u32 gPTankDisable;
s32 gSpongeBall;
u8* giAnimScratch;
xQCControl xqc_def_ctrl;
_CurrentPlayer gCurrentPlayer;
type_71 CheckPickupAgainstPlayer;
xGrid colls_grid;
type_119 zEntPickupEventCB;
type_126 zEntPickup_Update;
xMat4x3 g_I3;

void zEntPickup_RewardPostSetup();
void zEntPickup_SpawnNRewards(u32* pickups, u32 num);
void zEntPickup_SpawnNRewards(u32* pickups, u32 num, xVec3* ppos);
void spawnNRewards(u32* pickups, u32 num, xVec3* ppos);
void zEntPickup_SceneUpdate(f32 dt);
void zEntPickup_SceneReset();
void zEntPickup_SceneEnter();
u32 rewardRequest(u32 shinyType, xVec3* ppos);
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, u32 pcount, f32 dt);
void zEntPickup_RenderList(zEntPickup* plist, u32 pcount);
void zEntPickup_RenderOne(xEnt* ent);
void zEntPickup_Render(zEntPickup* plist, u32 pcount);
void zEntPickup_UpdateFX(zEntPickup* ent, f32 dt);
void zEntPickup_Drop(zEntPickup* ent);
void zEntPickup_FlushGrabbed();
void zEntPickup_Load(zEntPickup* ent, xSerial* s);
void zEntPickup_Save(zEntPickup* ent, xSerial* s);
void zEntPickup_Reset(zEntPickup* ent);
void zEntPickup_Update(zEntPickup* ent, xScene* sc, f32 dt);
void zEntPickup_GiveAllRewardsNow();
void collectPickup(zEntPickup* ent);
void zEntPickup_GivePickup(zEntPickup* ent);
s32 CheckPickupAgainstPlayer(xEnt* cbent);
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, f32 dt);
s32 zEntPickupEventCB(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget);
void zEntPickup_Setup();
void zEntPickup_Setup(zEntPickup* p);
void zEntPickup_ShinySparklyInit(RpAtomic* data);
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset);
void zEntPickupInit(void* ent, void* asset);
void zEntPickup_Startup();
void PickupFallPhysics(zEntPickup* ent, xScene* sc, f32 dt);

// zEntPickup_RewardPostSetup__Fv
// Start address: 0x138230
void zEntPickup_RewardPostSetup()
{
	s32 i;
	s32 j;
	zLODTable* lod;
}

// zEntPickup_SpawnNRewards__FPUiUi5xVec3
// Start address: 0x138330
void zEntPickup_SpawnNRewards(u32* pickups, u32 num)
{
	xVec3 pos;
}

// zEntPickup_SpawnNRewards__FPUiUiP5xVec3
// Start address: 0x138370
void zEntPickup_SpawnNRewards(u32* pickups, u32 num, xVec3* ppos)
{
	xVec3 pos;
}

// spawnNRewards__FPUiUiP5xVec35xVec3
// Start address: 0x1383b0
void spawnNRewards(u32* pickups, u32 num, xVec3* ppos)
{
	xVec3 pos;
	s32 i;
	u32 j;
}

// zEntPickup_SceneUpdate__Ff
// Start address: 0x138570
void zEntPickup_SceneUpdate(f32 dt)
{
	s32 i;
	u32 ret;
	s32 i;
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
u32 rewardRequest(u32 shinyType, xVec3* ppos)
{
	xVec3 pos;
	s32 i;
	zEntPickup* p;
}

// zEntPickup_UpdateFlyToInterface__FP10zEntPickupUif
// Start address: 0x138b30
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, u32 pcount, f32 dt)
{
	u32 i;
	zPickupAuraInfo* ai;
	xVec3 pos;
	ShinySparkly* sp;
	s32 j;
	xParEmitterCustomSettings info;
	s32 i;
	ShinySparkly* sp;
	xVec3 pos;
	s32 count;
	type_107 plist;
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	s32 num_verts;
	s32 j;
	s32 n;
	xVec3* ent_pos;
	f32 ydist;
}

// zEntPickup_RenderList__FP10zEntPickupUi
// Start address: 0x139420
void zEntPickup_RenderList(zEntPickup* plist, u32 pcount)
{
	u32 i;
	RpAtomic* imodel;
	s32 shadowResult;
	xVec3 shadVec;
	RwFrame* frame;
	RwV3d vec_scale;
	s32 alpha;
	f32 dist2;
	f32 dx__;
	f32 dy__;
	f32 dz__;
}

// zEntPickup_RenderOne__FP4xEnt
// Start address: 0x139860
void zEntPickup_RenderOne(xEnt* ent)
{
	zEntPickup* pickup;
	RpAtomic* imodel;
	s32 shadowResult;
	xVec3 shadVec;
	RwFrame* frame;
	RwV3d vec_scale;
}

// zEntPickup_Render__FP10zEntPickupUi
// Start address: 0x139aa0
void zEntPickup_Render(zEntPickup* plist, u32 pcount)
{
	u32 i;
	RwMatrixTag* imat;
}

// zEntPickup_UpdateFX__FP10zEntPickupP6xScenef
// Start address: 0x139c70
void zEntPickup_UpdateFX(zEntPickup* ent, f32 dt)
{
	zPickupAuraInfo* ai;
	xVec3 pos;
	xParEmitterCustomSettings info;
	ShinySparkly* sp;
	s32 i;
	s32 i;
	ShinySparkly* sp;
	xVec3 pos;
	s32 count;
	type_89 plist;
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	s32 num_verts;
	s32 j;
	s32 n;
}

// zEntPickup_Drop__FP10zEntPickup
// Start address: 0x13a580
void zEntPickup_Drop(zEntPickup* ent)
{
	f32 c;
	type_31 sol;
	u32 solcnt;
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
	s32 is_a_dropper;
	u32 state;
	s32 coll;
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
void zEntPickup_Update(zEntPickup* ent, xScene* sc, f32 dt)
{
	xEntFrame frame;
	f32 duration;
	xQuat* q0;
	xVec3* t0;
	xVec3* p;
	xVec3* player;
	xVec3* player;
	zEnt* plent;
	f32 distsqr;
	f32 dx__;
	f32 dy__;
	f32 dz__;
	f32 chkdist;
	xVec3* dest;
	xVec3* src;
	xVec3 vec;
	f32 mult;
	f32 distMult;
	f32 yvel;
	f32 ydiff;
	xVec3 dp;
	f32 vel2;
	f32 dx__;
	f32 dy__;
	f32 dz__;
}

// zEntPickup_GiveAllRewardsNow__Fv
// Start address: 0x13b6b0
void zEntPickup_GiveAllRewardsNow()
{
	u32 i;
	u32 j;
	u32 total;
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
s32 CheckPickupAgainstPlayer(xEnt* cbent)
{
	zEntPickup* ent;
	f32 distance;
	zEnt* plent;
	f32 distsqr;
	f32 dx__;
	f32 dy__;
	f32 dz__;
	f32 chkdist;
	s32 i;
	f32 dist2_1;
	f32 dist2_2;
	f32 dx__;
	f32 dy__;
	f32 dz__;
	f32 dx__;
	f32 dy__;
	f32 dz__;
	s32 i;
}

// zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef
// Start address: 0x13c910
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, f32 dt)
{
	zEntPickup_cbData cbdata;
}

// zEntPickupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x13c960
s32 zEntPickupEventCB(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget)
{
	zEntPickup* p;
	xEntFrame frame;
}

// zEntPickup_Setup__Fv
// Start address: 0x13ce30
void zEntPickup_Setup()
{
	zScene* zsc;
	u32 i;
	u32 j;
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
	u32 i;
	u32 tmpsize;
	zAssetPickup* ptbl;
	RpAtomic* modelData;
	void* animData;
	RxPipeline* fastAtmPipe;
	RxPipeline* fastMatPipe;
	ShinySparkly* sp;
	s32 i;
	RpAtomic* atom;
	s32 found;
	s32 i;
	type_84 name;
	s32 j;
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
void PickupFallPhysics(zEntPickup* ent, xScene* sc, f32 dt)
{
}

