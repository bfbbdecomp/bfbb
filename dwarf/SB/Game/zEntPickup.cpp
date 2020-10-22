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
typedef struct _class_0;
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
typedef int8 type_5[128][6];
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
typedef zEntPickup* type_24[10][5];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	void(*draw)(void*, xParGroup*);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct zLODTable
{
	xModelBucket** baseBucket;
	float32 noRenderDist;
	xModelBucket** lodBucket[3];
	float32 lodDist[3];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xAnimMultiFileEntry Files[1];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	RpClump*(*callback)(RpClump*, void*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	uint32 pickups[20];
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
	uint8 pad[2];
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
	uint16 vertIndex[3];
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
	uint32 pad[4];
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 pad[2];
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
	uint8 pad[2];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
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
	void(*destroyNotify)(RwResEntry*);
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

struct zPlatFMRunTime
{
	uint32 flags;
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	float32 param[4];
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
	uint32(*cb)(void*, void*);
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct zCutsceneMgr
{
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
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
	uint32 baseCount[72];
	xBase* baseList[72];
	_zEnv* zen;
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
	xVec3 corner[4];
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
	uint8 NumAnims[2];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint16 dim[2];
	uint32 textureID;
	float32 uva[2];
	float32 uvb[2];
	float32 uvc[2];
	float32 uvd[2];
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
	float32 wt[4];
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
	int8 name[32];
	int8 mask[32];
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
	uint8 pad[3];
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
	uint8 pad[3];
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
	uint8 rot[3];
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
	uint8 pad[3];
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
	int8 idtag[4];
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
	float32 radius[2];
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
	xVec4 frustplane[12];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	RxCluster clusters[1];
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xCoef
{
	float32 a[4];
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
	float32 val[2];
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

int8 buffer[16];
int8 buffer[16];
basic_rect screen_bounds;
basic_rect default_adjust;
zParEmitter* gEmitShinySparkles;
float32 SPARKLE_MAX_RATE;
ShinySparkly ShinySparklyTable[7];
uint32 gEnableRewardsQueue;
float32 sSpatulaGrabbedSpinMult;
float32 sSpatulaGrabbedLife;
float32 sUnderwearFade;
RwMatrixTag sPickupOrientation;
zEntPickup* rewardPickups[10][5];
RewardList sRewards[20];
zLODTable sRewardLOD[5];
_tagKeyShake sKeyShake[4];
RpLight* sPickupDirectionalLight;
RpLight* sPickupAmbientLight;
xLightKit sPickupLightKit;
xLightKitLight sPickupLightKitLight[2];
xEntFrame gPickupFrame;
xEntCollis gPickupCollis;
_xCounter* keyCounter;
zEntPickup* sSpatulaAlreadyGiven;
zEntPickup* sSpatulaBungeeDeferred;
zPickupAuraInfo zPickupAuraTable[15];
zGlobals globals;
uint32 gPTankDisable;
int32 gSpongeBall;
uint8* giAnimScratch;
xQCControl xqc_def_ctrl;
_CurrentPlayer gCurrentPlayer;
int32(*CheckPickupAgainstPlayer)(xEnt*, void*);
xGrid colls_grid;
int32(*zEntPickupEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntPickup_Update)(zEntPickup*, xScene*, float32);
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
	// Line 2930, Address: 0x138230, Func Offset: 0
	// Line 2931, Address: 0x138240, Func Offset: 0x10
	// Line 2930, Address: 0x138244, Func Offset: 0x14
	// Line 2931, Address: 0x13824c, Func Offset: 0x1c
	// Line 2930, Address: 0x138254, Func Offset: 0x24
	// Line 2931, Address: 0x138258, Func Offset: 0x28
	// Line 2932, Address: 0x138260, Func Offset: 0x30
	// Line 2933, Address: 0x13826c, Func Offset: 0x3c
	// Line 2936, Address: 0x138274, Func Offset: 0x44
	// Line 2937, Address: 0x13827c, Func Offset: 0x4c
	// Line 2938, Address: 0x138284, Func Offset: 0x54
	// Line 2939, Address: 0x138288, Func Offset: 0x58
	// Line 2938, Address: 0x138290, Func Offset: 0x60
	// Line 2939, Address: 0x1382cc, Func Offset: 0x9c
	// Line 2940, Address: 0x1382d0, Func Offset: 0xa0
	// Line 2943, Address: 0x1382dc, Func Offset: 0xac
	// Line 2944, Address: 0x138304, Func Offset: 0xd4
	// Func End, Address: 0x138324, Func Offset: 0xf4
}

// zEntPickup_SpawnNRewards__FPUiUi5xVec3
// Start address: 0x138330
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num)
{
	xVec3 pos;
	// Line 2924, Address: 0x138330, Func Offset: 0
	// Line 2925, Address: 0x138350, Func Offset: 0x20
	// Line 2926, Address: 0x138358, Func Offset: 0x28
	// Line 2927, Address: 0x138360, Func Offset: 0x30
	// Func End, Address: 0x13836c, Func Offset: 0x3c
}

// zEntPickup_SpawnNRewards__FPUiUiP5xVec3
// Start address: 0x138370
void zEntPickup_SpawnNRewards(uint32* pickups, uint32 num, xVec3* ppos)
{
	xVec3 pos;
	// Line 2915, Address: 0x138370, Func Offset: 0
	// Line 2916, Address: 0x138374, Func Offset: 0x4
	// Line 2917, Address: 0x13837c, Func Offset: 0xc
	// Line 2918, Address: 0x138394, Func Offset: 0x24
	// Line 2919, Address: 0x13839c, Func Offset: 0x2c
	// Func End, Address: 0x1383ac, Func Offset: 0x3c
}

// spawnNRewards__FPUiUiP5xVec35xVec3
// Start address: 0x1383b0
void spawnNRewards(uint32* pickups, uint32 num, xVec3* ppos)
{
	xVec3 pos;
	int32 i;
	uint32 j;
	// Line 2807, Address: 0x1383b0, Func Offset: 0
	// Line 2811, Address: 0x1383cc, Func Offset: 0x1c
	// Line 2814, Address: 0x1383d4, Func Offset: 0x24
	// Line 2868, Address: 0x1383e0, Func Offset: 0x30
	// Line 2871, Address: 0x1383e8, Func Offset: 0x38
	// Line 2875, Address: 0x138404, Func Offset: 0x54
	// Line 2874, Address: 0x13840c, Func Offset: 0x5c
	// Line 2871, Address: 0x138410, Func Offset: 0x60
	// Line 2875, Address: 0x138414, Func Offset: 0x64
	// Line 2874, Address: 0x138418, Func Offset: 0x68
	// Line 2876, Address: 0x13841c, Func Offset: 0x6c
	// Line 2875, Address: 0x138420, Func Offset: 0x70
	// Line 2876, Address: 0x138424, Func Offset: 0x74
	// Line 2878, Address: 0x13842c, Func Offset: 0x7c
	// Line 2876, Address: 0x138430, Func Offset: 0x80
	// Line 2878, Address: 0x138434, Func Offset: 0x84
	// Line 2876, Address: 0x138438, Func Offset: 0x88
	// Line 2878, Address: 0x13843c, Func Offset: 0x8c
	// Line 2881, Address: 0x138458, Func Offset: 0xa8
	// Line 2878, Address: 0x1384c4, Func Offset: 0x114
	// Line 2881, Address: 0x1384c8, Func Offset: 0x118
	// Line 2882, Address: 0x1384cc, Func Offset: 0x11c
	// Line 2881, Address: 0x1384d4, Func Offset: 0x124
	// Line 2882, Address: 0x1384dc, Func Offset: 0x12c
	// Line 2884, Address: 0x1384e8, Func Offset: 0x138
	// Line 2886, Address: 0x1384f0, Func Offset: 0x140
	// Line 2887, Address: 0x1384f8, Func Offset: 0x148
	// Line 2890, Address: 0x138500, Func Offset: 0x150
	// Line 2891, Address: 0x138524, Func Offset: 0x174
	// Line 2890, Address: 0x138528, Func Offset: 0x178
	// Line 2891, Address: 0x13852c, Func Offset: 0x17c
	// Line 2890, Address: 0x138530, Func Offset: 0x180
	// Line 2891, Address: 0x138534, Func Offset: 0x184
	// Line 2890, Address: 0x138538, Func Offset: 0x188
	// Line 2894, Address: 0x138548, Func Offset: 0x198
	// Line 2896, Address: 0x138550, Func Offset: 0x1a0
	// Line 2898, Address: 0x138560, Func Offset: 0x1b0
	// Func End, Address: 0x138568, Func Offset: 0x1b8
}

// zEntPickup_SceneUpdate__Ff
// Start address: 0x138570
void zEntPickup_SceneUpdate(float32 dt)
{
	int32 i;
	uint32 ret;
	int32 i;
	// Line 2668, Address: 0x138570, Func Offset: 0
	// Line 2669, Address: 0x138588, Func Offset: 0x18
	// Line 2672, Address: 0x138598, Func Offset: 0x28
	// Line 2677, Address: 0x1385b8, Func Offset: 0x48
	// Line 2674, Address: 0x1385bc, Func Offset: 0x4c
	// Line 2677, Address: 0x1385c0, Func Offset: 0x50
	// Line 2674, Address: 0x1385c4, Func Offset: 0x54
	// Line 2677, Address: 0x1385cc, Func Offset: 0x5c
	// Line 2679, Address: 0x1385e0, Func Offset: 0x70
	// Line 2681, Address: 0x138600, Func Offset: 0x90
	// Line 2682, Address: 0x138610, Func Offset: 0xa0
	// Line 2686, Address: 0x13861c, Func Offset: 0xac
	// Line 2689, Address: 0x138628, Func Offset: 0xb8
	// Line 2691, Address: 0x138644, Func Offset: 0xd4
	// Line 2692, Address: 0x138654, Func Offset: 0xe4
	// Line 2693, Address: 0x138660, Func Offset: 0xf0
	// Line 2696, Address: 0x138664, Func Offset: 0xf4
	// Line 2702, Address: 0x138668, Func Offset: 0xf8
	// Line 2704, Address: 0x138678, Func Offset: 0x108
	// Line 2708, Address: 0x138688, Func Offset: 0x118
	// Line 2711, Address: 0x1386ac, Func Offset: 0x13c
	// Line 2714, Address: 0x1386c0, Func Offset: 0x150
	// Line 2715, Address: 0x1386d0, Func Offset: 0x160
	// Line 2721, Address: 0x1386d8, Func Offset: 0x168
	// Line 2723, Address: 0x138714, Func Offset: 0x1a4
	// Line 2724, Address: 0x138718, Func Offset: 0x1a8
	// Line 2725, Address: 0x138730, Func Offset: 0x1c0
	// Line 2727, Address: 0x138738, Func Offset: 0x1c8
	// Line 2728, Address: 0x138750, Func Offset: 0x1e0
	// Line 2730, Address: 0x138758, Func Offset: 0x1e8
	// Line 2731, Address: 0x138770, Func Offset: 0x200
	// Line 2733, Address: 0x138778, Func Offset: 0x208
	// Line 2734, Address: 0x138790, Func Offset: 0x220
	// Line 2736, Address: 0x138798, Func Offset: 0x228
	// Line 2743, Address: 0x1387b4, Func Offset: 0x244
	// Line 2745, Address: 0x1387b8, Func Offset: 0x248
	// Line 2749, Address: 0x1387d4, Func Offset: 0x264
	// Line 2753, Address: 0x1387e0, Func Offset: 0x270
	// Line 2755, Address: 0x1387f0, Func Offset: 0x280
	// Line 2756, Address: 0x13880c, Func Offset: 0x29c
	// Line 2759, Address: 0x138818, Func Offset: 0x2a8
	// Line 2762, Address: 0x138824, Func Offset: 0x2b4
	// Line 2761, Address: 0x138828, Func Offset: 0x2b8
	// Line 2762, Address: 0x138830, Func Offset: 0x2c0
	// Line 2763, Address: 0x13883c, Func Offset: 0x2cc
	// Line 2764, Address: 0x138840, Func Offset: 0x2d0
	// Line 2766, Address: 0x138850, Func Offset: 0x2e0
	// Line 2768, Address: 0x13886c, Func Offset: 0x2fc
	// Line 2769, Address: 0x138870, Func Offset: 0x300
	// Line 2770, Address: 0x138874, Func Offset: 0x304
	// Line 2772, Address: 0x13887c, Func Offset: 0x30c
	// Line 2768, Address: 0x138884, Func Offset: 0x314
	// Line 2769, Address: 0x138888, Func Offset: 0x318
	// Line 2768, Address: 0x13888c, Func Offset: 0x31c
	// Line 2769, Address: 0x138890, Func Offset: 0x320
	// Line 2770, Address: 0x1388a8, Func Offset: 0x338
	// Line 2771, Address: 0x1388b4, Func Offset: 0x344
	// Line 2772, Address: 0x1388c8, Func Offset: 0x358
	// Line 2773, Address: 0x138990, Func Offset: 0x420
	// Line 2774, Address: 0x138998, Func Offset: 0x428
	// Line 2775, Address: 0x13899c, Func Offset: 0x42c
	// Line 2777, Address: 0x1389a0, Func Offset: 0x430
	// Func End, Address: 0x1389bc, Func Offset: 0x44c
}

// zEntPickup_SceneReset__Fv
// Start address: 0x1389c0
void zEntPickup_SceneReset()
{
	// Line 2661, Address: 0x1389c0, Func Offset: 0
	// Line 2663, Address: 0x1389c4, Func Offset: 0x4
	// Line 2664, Address: 0x1389c8, Func Offset: 0x8
	// Line 2665, Address: 0x1389cc, Func Offset: 0xc
	// Func End, Address: 0x1389d4, Func Offset: 0x14
}

// zEntPickup_SceneEnter__Fv
// Start address: 0x1389e0
void zEntPickup_SceneEnter()
{
	// Line 2655, Address: 0x1389e0, Func Offset: 0
	// Line 2656, Address: 0x1389ec, Func Offset: 0xc
	// Func End, Address: 0x1389f4, Func Offset: 0x14
}

// rewardRequest__FUiP5xVec35xVec3
// Start address: 0x138a00
uint32 rewardRequest(uint32 shinyType, xVec3* ppos)
{
	xVec3 pos;
	int32 i;
	zEntPickup* p;
	// Line 2617, Address: 0x138a00, Func Offset: 0
	// Line 2621, Address: 0x138a14, Func Offset: 0x14
	// Line 2617, Address: 0x138a18, Func Offset: 0x18
	// Line 2621, Address: 0x138a20, Func Offset: 0x20
	// Line 2617, Address: 0x138a30, Func Offset: 0x30
	// Line 2621, Address: 0x138a3c, Func Offset: 0x3c
	// Line 2623, Address: 0x138a40, Func Offset: 0x40
	// Line 2624, Address: 0x138a44, Func Offset: 0x44
	// Line 2626, Address: 0x138a50, Func Offset: 0x50
	// Line 2628, Address: 0x138a5c, Func Offset: 0x5c
	// Line 2629, Address: 0x138a68, Func Offset: 0x68
	// Line 2632, Address: 0x138a74, Func Offset: 0x74
	// Line 2633, Address: 0x138a80, Func Offset: 0x80
	// Line 2635, Address: 0x138a88, Func Offset: 0x88
	// Line 2636, Address: 0x138a90, Func Offset: 0x90
	// Line 2637, Address: 0x138ab0, Func Offset: 0xb0
	// Line 2638, Address: 0x138ac4, Func Offset: 0xc4
	// Line 2639, Address: 0x138ad0, Func Offset: 0xd0
	// Line 2640, Address: 0x138af0, Func Offset: 0xf0
	// Line 2645, Address: 0x138b08, Func Offset: 0x108
	// Line 2648, Address: 0x138b10, Func Offset: 0x110
	// Line 2650, Address: 0x138b20, Func Offset: 0x120
	// Line 2651, Address: 0x138b28, Func Offset: 0x128
	// Func End, Address: 0x138b30, Func Offset: 0x130
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
	xVec3 plist[64];
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	int32 num_verts;
	int32 j;
	int32 n;
	xVec3* ent_pos;
	float32 ydist;
	// Line 2370, Address: 0x138b30, Func Offset: 0
	// Line 2372, Address: 0x138b74, Func Offset: 0x44
	// Line 2374, Address: 0x138b90, Func Offset: 0x60
	// Line 2379, Address: 0x138bb4, Func Offset: 0x84
	// Line 2380, Address: 0x138bc4, Func Offset: 0x94
	// Line 2381, Address: 0x138bd0, Func Offset: 0xa0
	// Line 2380, Address: 0x138bd4, Func Offset: 0xa4
	// Line 2381, Address: 0x138be4, Func Offset: 0xb4
	// Line 2382, Address: 0x138bf4, Func Offset: 0xc4
	// Line 2384, Address: 0x138bfc, Func Offset: 0xcc
	// Line 2382, Address: 0x138c00, Func Offset: 0xd0
	// Line 2383, Address: 0x138c14, Func Offset: 0xe4
	// Line 2382, Address: 0x138c18, Func Offset: 0xe8
	// Line 2383, Address: 0x138c20, Func Offset: 0xf0
	// Line 2384, Address: 0x138c30, Func Offset: 0x100
	// Line 2386, Address: 0x138c3c, Func Offset: 0x10c
	// Line 2388, Address: 0x138c40, Func Offset: 0x110
	// Line 2391, Address: 0x138c50, Func Offset: 0x120
	// Line 2390, Address: 0x138c54, Func Offset: 0x124
	// Line 2391, Address: 0x138c5c, Func Offset: 0x12c
	// Line 2392, Address: 0x138c68, Func Offset: 0x138
	// Line 2393, Address: 0x138c84, Func Offset: 0x154
	// Line 2395, Address: 0x138c88, Func Offset: 0x158
	// Line 2396, Address: 0x138c8c, Func Offset: 0x15c
	// Line 2402, Address: 0x138c90, Func Offset: 0x160
	// Line 2395, Address: 0x138c94, Func Offset: 0x164
	// Line 2396, Address: 0x138cb0, Func Offset: 0x180
	// Line 2401, Address: 0x138cb8, Func Offset: 0x188
	// Line 2402, Address: 0x138cc8, Func Offset: 0x198
	// Line 2403, Address: 0x138cf4, Func Offset: 0x1c4
	// Line 2404, Address: 0x138d7c, Func Offset: 0x24c
	// Line 2405, Address: 0x138e00, Func Offset: 0x2d0
	// Line 2406, Address: 0x138e90, Func Offset: 0x360
	// Line 2407, Address: 0x138f18, Func Offset: 0x3e8
	// Line 2408, Address: 0x138fa0, Func Offset: 0x470
	// Line 2409, Address: 0x139028, Func Offset: 0x4f8
	// Line 2410, Address: 0x1390b0, Func Offset: 0x580
	// Line 2411, Address: 0x139120, Func Offset: 0x5f0
	// Line 2410, Address: 0x139124, Func Offset: 0x5f4
	// Line 2411, Address: 0x139134, Func Offset: 0x604
	// Line 2410, Address: 0x13913c, Func Offset: 0x60c
	// Line 2411, Address: 0x139144, Func Offset: 0x614
	// Line 2412, Address: 0x139150, Func Offset: 0x620
	// Line 2413, Address: 0x139158, Func Offset: 0x628
	// Line 2415, Address: 0x139168, Func Offset: 0x638
	// Line 2421, Address: 0x139170, Func Offset: 0x640
	// Line 2420, Address: 0x139174, Func Offset: 0x644
	// Line 2421, Address: 0x139178, Func Offset: 0x648
	// Line 2420, Address: 0x13917c, Func Offset: 0x64c
	// Line 2421, Address: 0x139180, Func Offset: 0x650
	// Line 2422, Address: 0x139188, Func Offset: 0x658
	// Line 2424, Address: 0x1391a4, Func Offset: 0x674
	// Line 2425, Address: 0x1391b8, Func Offset: 0x688
	// Line 2426, Address: 0x1391c4, Func Offset: 0x694
	// Line 2434, Address: 0x1391c8, Func Offset: 0x698
	// Line 2426, Address: 0x1391d0, Func Offset: 0x6a0
	// Line 2434, Address: 0x1391d4, Func Offset: 0x6a4
	// Line 2432, Address: 0x1391d8, Func Offset: 0x6a8
	// Line 2426, Address: 0x1391dc, Func Offset: 0x6ac
	// Line 2432, Address: 0x1391f8, Func Offset: 0x6c8
	// Line 2428, Address: 0x1391fc, Func Offset: 0x6cc
	// Line 2432, Address: 0x139200, Func Offset: 0x6d0
	// Line 2434, Address: 0x139218, Func Offset: 0x6e8
	// Line 2435, Address: 0x139220, Func Offset: 0x6f0
	// Line 2437, Address: 0x13925c, Func Offset: 0x72c
	// Line 2439, Address: 0x139260, Func Offset: 0x730
	// Line 2443, Address: 0x139264, Func Offset: 0x734
	// Line 2439, Address: 0x139268, Func Offset: 0x738
	// Line 2440, Address: 0x139270, Func Offset: 0x740
	// Line 2441, Address: 0x139274, Func Offset: 0x744
	// Line 2440, Address: 0x139278, Func Offset: 0x748
	// Line 2443, Address: 0x13927c, Func Offset: 0x74c
	// Line 2446, Address: 0x139288, Func Offset: 0x758
	// Line 2448, Address: 0x139294, Func Offset: 0x764
	// Line 2446, Address: 0x13929c, Func Offset: 0x76c
	// Line 2447, Address: 0x1392c0, Func Offset: 0x790
	// Line 2448, Address: 0x1392d8, Func Offset: 0x7a8
	// Line 2458, Address: 0x1392e8, Func Offset: 0x7b8
	// Line 2460, Address: 0x1392f8, Func Offset: 0x7c8
	// Line 2466, Address: 0x139304, Func Offset: 0x7d4
	// Line 2468, Address: 0x139308, Func Offset: 0x7d8
	// Line 2475, Address: 0x139328, Func Offset: 0x7f8
	// Line 2477, Address: 0x139338, Func Offset: 0x808
	// Line 2479, Address: 0x139350, Func Offset: 0x820
	// Line 2480, Address: 0x139354, Func Offset: 0x824
	// Line 2481, Address: 0x139360, Func Offset: 0x830
	// Line 2483, Address: 0x13936c, Func Offset: 0x83c
	// Line 2494, Address: 0x139374, Func Offset: 0x844
	// Line 2485, Address: 0x139380, Func Offset: 0x850
	// Line 2494, Address: 0x139384, Func Offset: 0x854
	// Line 2485, Address: 0x139390, Func Offset: 0x860
	// Line 2494, Address: 0x139394, Func Offset: 0x864
	// Line 2497, Address: 0x139398, Func Offset: 0x868
	// Line 2498, Address: 0x1393ac, Func Offset: 0x87c
	// Line 2501, Address: 0x1393b0, Func Offset: 0x880
	// Line 2502, Address: 0x1393bc, Func Offset: 0x88c
	// Line 2505, Address: 0x1393c8, Func Offset: 0x898
	// Line 2506, Address: 0x1393d8, Func Offset: 0x8a8
	// Func End, Address: 0x139414, Func Offset: 0x8e4
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
	// Line 2267, Address: 0x139420, Func Offset: 0
	// Line 2274, Address: 0x139454, Func Offset: 0x34
	// Line 2277, Address: 0x139460, Func Offset: 0x40
	// Line 2278, Address: 0x139498, Func Offset: 0x78
	// Line 2281, Address: 0x1394c8, Func Offset: 0xa8
	// Line 2285, Address: 0x139500, Func Offset: 0xe0
	// Line 2291, Address: 0x139508, Func Offset: 0xe8
	// Line 2294, Address: 0x139510, Func Offset: 0xf0
	// Line 2290, Address: 0x139518, Func Offset: 0xf8
	// Line 2294, Address: 0x13951c, Func Offset: 0xfc
	// Line 2290, Address: 0x139524, Func Offset: 0x104
	// Line 2291, Address: 0x139528, Func Offset: 0x108
	// Line 2292, Address: 0x139540, Func Offset: 0x120
	// Line 2294, Address: 0x139550, Func Offset: 0x130
	// Line 2296, Address: 0x139560, Func Offset: 0x140
	// Line 2299, Address: 0x139590, Func Offset: 0x170
	// Line 2300, Address: 0x1395fc, Func Offset: 0x1dc
	// Line 2308, Address: 0x139600, Func Offset: 0x1e0
	// Line 2301, Address: 0x139604, Func Offset: 0x1e4
	// Line 2308, Address: 0x139610, Func Offset: 0x1f0
	// Line 2301, Address: 0x139614, Func Offset: 0x1f4
	// Line 2308, Address: 0x13968c, Func Offset: 0x26c
	// Line 2311, Address: 0x139698, Func Offset: 0x278
	// Line 2312, Address: 0x13969c, Func Offset: 0x27c
	// Line 2314, Address: 0x1396a4, Func Offset: 0x284
	// Line 2312, Address: 0x1396ac, Func Offset: 0x28c
	// Line 2313, Address: 0x1396b0, Func Offset: 0x290
	// Line 2314, Address: 0x1396b8, Func Offset: 0x298
	// Line 2325, Address: 0x1396c0, Func Offset: 0x2a0
	// Line 2326, Address: 0x1396cc, Func Offset: 0x2ac
	// Line 2328, Address: 0x1396d0, Func Offset: 0x2b0
	// Line 2335, Address: 0x13971c, Func Offset: 0x2fc
	// Line 2336, Address: 0x139720, Func Offset: 0x300
	// Line 2335, Address: 0x139724, Func Offset: 0x304
	// Line 2336, Address: 0x139728, Func Offset: 0x308
	// Line 2328, Address: 0x13972c, Func Offset: 0x30c
	// Line 2335, Address: 0x139730, Func Offset: 0x310
	// Line 2336, Address: 0x139768, Func Offset: 0x348
	// Line 2338, Address: 0x139774, Func Offset: 0x354
	// Line 2339, Address: 0x13978c, Func Offset: 0x36c
	// Line 2340, Address: 0x139798, Func Offset: 0x378
	// Line 2341, Address: 0x1397d0, Func Offset: 0x3b0
	// Line 2342, Address: 0x1397dc, Func Offset: 0x3bc
	// Line 2343, Address: 0x1397e0, Func Offset: 0x3c0
	// Line 2345, Address: 0x1397e8, Func Offset: 0x3c8
	// Line 2346, Address: 0x1397f0, Func Offset: 0x3d0
	// Line 2347, Address: 0x1397f4, Func Offset: 0x3d4
	// Line 2349, Address: 0x1397f8, Func Offset: 0x3d8
	// Line 2350, Address: 0x1397fc, Func Offset: 0x3dc
	// Line 2349, Address: 0x139810, Func Offset: 0x3f0
	// Line 2350, Address: 0x139814, Func Offset: 0x3f4
	// Line 2356, Address: 0x139820, Func Offset: 0x400
	// Line 2361, Address: 0x139830, Func Offset: 0x410
	// Func End, Address: 0x139860, Func Offset: 0x440
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
	// Line 2215, Address: 0x139860, Func Offset: 0
	// Line 2217, Address: 0x139864, Func Offset: 0x4
	// Line 2215, Address: 0x139868, Func Offset: 0x8
	// Line 2217, Address: 0x139878, Func Offset: 0x18
	// Line 2222, Address: 0x139884, Func Offset: 0x24
	// Line 2224, Address: 0x1398b0, Func Offset: 0x50
	// Line 2230, Address: 0x1398b4, Func Offset: 0x54
	// Line 2224, Address: 0x1398b8, Func Offset: 0x58
	// Line 2230, Address: 0x1398bc, Func Offset: 0x5c
	// Line 2233, Address: 0x1398c0, Func Offset: 0x60
	// Line 2229, Address: 0x1398c8, Func Offset: 0x68
	// Line 2233, Address: 0x1398cc, Func Offset: 0x6c
	// Line 2229, Address: 0x1398d4, Func Offset: 0x74
	// Line 2230, Address: 0x1398d8, Func Offset: 0x78
	// Line 2231, Address: 0x1398ec, Func Offset: 0x8c
	// Line 2233, Address: 0x1398f8, Func Offset: 0x98
	// Line 2235, Address: 0x139908, Func Offset: 0xa8
	// Line 2238, Address: 0x139938, Func Offset: 0xd8
	// Line 2239, Address: 0x1399bc, Func Offset: 0x15c
	// Line 2243, Address: 0x1399c0, Func Offset: 0x160
	// Line 2240, Address: 0x1399c4, Func Offset: 0x164
	// Line 2243, Address: 0x1399d0, Func Offset: 0x170
	// Line 2240, Address: 0x1399d4, Func Offset: 0x174
	// Line 2243, Address: 0x139a4c, Func Offset: 0x1ec
	// Line 2246, Address: 0x139a58, Func Offset: 0x1f8
	// Line 2249, Address: 0x139a5c, Func Offset: 0x1fc
	// Line 2247, Address: 0x139a60, Func Offset: 0x200
	// Line 2249, Address: 0x139a64, Func Offset: 0x204
	// Line 2247, Address: 0x139a68, Func Offset: 0x208
	// Line 2248, Address: 0x139a6c, Func Offset: 0x20c
	// Line 2249, Address: 0x139a70, Func Offset: 0x210
	// Line 2260, Address: 0x139a78, Func Offset: 0x218
	// Line 2262, Address: 0x139a84, Func Offset: 0x224
	// Line 2263, Address: 0x139a88, Func Offset: 0x228
	// Func End, Address: 0x139aa0, Func Offset: 0x240
}

// zEntPickup_Render__FP10zEntPickupUi
// Start address: 0x139aa0
void zEntPickup_Render(zEntPickup* plist, uint32 pcount)
{
	uint32 i;
	RwMatrixTag* imat;
	// Line 2172, Address: 0x139aa0, Func Offset: 0
	// Line 2174, Address: 0x139aa4, Func Offset: 0x4
	// Line 2172, Address: 0x139aa8, Func Offset: 0x8
	// Line 2174, Address: 0x139ac8, Func Offset: 0x28
	// Line 2172, Address: 0x139acc, Func Offset: 0x2c
	// Line 2174, Address: 0x139adc, Func Offset: 0x3c
	// Line 2179, Address: 0x139ae8, Func Offset: 0x48
	// Line 2181, Address: 0x139b20, Func Offset: 0x80
	// Line 2185, Address: 0x139b4c, Func Offset: 0xac
	// Line 2187, Address: 0x139b50, Func Offset: 0xb0
	// Line 2191, Address: 0x139b6c, Func Offset: 0xcc
	// Line 2193, Address: 0x139b84, Func Offset: 0xe4
	// Line 2194, Address: 0x139ba4, Func Offset: 0x104
	// Line 2195, Address: 0x139bb0, Func Offset: 0x110
	// Line 2196, Address: 0x139bb8, Func Offset: 0x118
	// Line 2203, Address: 0x139c20, Func Offset: 0x180
	// Line 2206, Address: 0x139c30, Func Offset: 0x190
	// Line 2208, Address: 0x139c40, Func Offset: 0x1a0
	// Func End, Address: 0x139c70, Func Offset: 0x1d0
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
	xVec3 plist[64];
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	int32 num_verts;
	int32 j;
	int32 n;
	// Line 1969, Address: 0x139c70, Func Offset: 0
	// Line 1976, Address: 0x139c74, Func Offset: 0x4
	// Line 1969, Address: 0x139c78, Func Offset: 0x8
	// Line 1976, Address: 0x139c9c, Func Offset: 0x2c
	// Line 1978, Address: 0x139ce4, Func Offset: 0x74
	// Line 1981, Address: 0x139cf4, Func Offset: 0x84
	// Line 1984, Address: 0x139cf8, Func Offset: 0x88
	// Line 1981, Address: 0x139cfc, Func Offset: 0x8c
	// Line 1984, Address: 0x139d00, Func Offset: 0x90
	// Line 1983, Address: 0x139d04, Func Offset: 0x94
	// Line 1984, Address: 0x139d08, Func Offset: 0x98
	// Line 1983, Address: 0x139d0c, Func Offset: 0x9c
	// Line 1984, Address: 0x139d2c, Func Offset: 0xbc
	// Line 1987, Address: 0x139d38, Func Offset: 0xc8
	// Line 1992, Address: 0x139d40, Func Offset: 0xd0
	// Line 1998, Address: 0x139d50, Func Offset: 0xe0
	// Line 2000, Address: 0x139d74, Func Offset: 0x104
	// Line 2003, Address: 0x139d7c, Func Offset: 0x10c
	// Line 2004, Address: 0x139d9c, Func Offset: 0x12c
	// Line 2005, Address: 0x139da0, Func Offset: 0x130
	// Line 2009, Address: 0x139da8, Func Offset: 0x138
	// Line 2010, Address: 0x139dac, Func Offset: 0x13c
	// Line 2014, Address: 0x139dc4, Func Offset: 0x154
	// Line 2015, Address: 0x139dd4, Func Offset: 0x164
	// Line 2016, Address: 0x139df0, Func Offset: 0x180
	// Line 2017, Address: 0x139e00, Func Offset: 0x190
	// Line 2019, Address: 0x139e08, Func Offset: 0x198
	// Line 2017, Address: 0x139e0c, Func Offset: 0x19c
	// Line 2018, Address: 0x139e28, Func Offset: 0x1b8
	// Line 2019, Address: 0x139e38, Func Offset: 0x1c8
	// Line 2021, Address: 0x139e44, Func Offset: 0x1d4
	// Line 2019, Address: 0x139e48, Func Offset: 0x1d8
	// Line 2026, Address: 0x139e4c, Func Offset: 0x1dc
	// Line 2019, Address: 0x139e50, Func Offset: 0x1e0
	// Line 2026, Address: 0x139e54, Func Offset: 0x1e4
	// Line 2019, Address: 0x139e5c, Func Offset: 0x1ec
	// Line 2026, Address: 0x139e64, Func Offset: 0x1f4
	// Line 2030, Address: 0x139ea8, Func Offset: 0x238
	// Line 2035, Address: 0x139eb8, Func Offset: 0x248
	// Line 2046, Address: 0x139ec0, Func Offset: 0x250
	// Line 2036, Address: 0x139ec4, Func Offset: 0x254
	// Line 2045, Address: 0x139ec8, Func Offset: 0x258
	// Line 2036, Address: 0x139ed0, Func Offset: 0x260
	// Line 2046, Address: 0x139eec, Func Offset: 0x27c
	// Line 2047, Address: 0x139ef8, Func Offset: 0x288
	// Line 2049, Address: 0x139f14, Func Offset: 0x2a4
	// Line 2054, Address: 0x139f1c, Func Offset: 0x2ac
	// Line 2056, Address: 0x139f20, Func Offset: 0x2b0
	// Line 2054, Address: 0x139f30, Func Offset: 0x2c0
	// Line 2056, Address: 0x139f34, Func Offset: 0x2c4
	// Line 2060, Address: 0x139f68, Func Offset: 0x2f8
	// Line 2061, Address: 0x139f80, Func Offset: 0x310
	// Line 2062, Address: 0x139f9c, Func Offset: 0x32c
	// Line 2063, Address: 0x13a010, Func Offset: 0x3a0
	// Line 2064, Address: 0x13a080, Func Offset: 0x410
	// Line 2065, Address: 0x13a0fc, Func Offset: 0x48c
	// Line 2066, Address: 0x13a170, Func Offset: 0x500
	// Line 2067, Address: 0x13a1e4, Func Offset: 0x574
	// Line 2068, Address: 0x13a258, Func Offset: 0x5e8
	// Line 2069, Address: 0x13a2cc, Func Offset: 0x65c
	// Line 2070, Address: 0x13a32c, Func Offset: 0x6bc
	// Line 2069, Address: 0x13a330, Func Offset: 0x6c0
	// Line 2070, Address: 0x13a33c, Func Offset: 0x6cc
	// Line 2069, Address: 0x13a344, Func Offset: 0x6d4
	// Line 2070, Address: 0x13a348, Func Offset: 0x6d8
	// Line 2071, Address: 0x13a350, Func Offset: 0x6e0
	// Line 2072, Address: 0x13a358, Func Offset: 0x6e8
	// Line 2074, Address: 0x13a368, Func Offset: 0x6f8
	// Line 2080, Address: 0x13a370, Func Offset: 0x700
	// Line 2079, Address: 0x13a374, Func Offset: 0x704
	// Line 2080, Address: 0x13a378, Func Offset: 0x708
	// Line 2079, Address: 0x13a37c, Func Offset: 0x70c
	// Line 2080, Address: 0x13a380, Func Offset: 0x710
	// Line 2081, Address: 0x13a388, Func Offset: 0x718
	// Line 2083, Address: 0x13a3a4, Func Offset: 0x734
	// Line 2084, Address: 0x13a3b8, Func Offset: 0x748
	// Line 2085, Address: 0x13a3c4, Func Offset: 0x754
	// Line 2087, Address: 0x13a3e0, Func Offset: 0x770
	// Line 2091, Address: 0x13a424, Func Offset: 0x7b4
	// Line 2092, Address: 0x13a43c, Func Offset: 0x7cc
	// Line 2093, Address: 0x13a440, Func Offset: 0x7d0
	// Line 2092, Address: 0x13a448, Func Offset: 0x7d8
	// Line 2093, Address: 0x13a44c, Func Offset: 0x7dc
	// Line 2092, Address: 0x13a450, Func Offset: 0x7e0
	// Line 2093, Address: 0x13a468, Func Offset: 0x7f8
	// Line 2094, Address: 0x13a470, Func Offset: 0x800
	// Line 2096, Address: 0x13a4ac, Func Offset: 0x83c
	// Line 2098, Address: 0x13a4b0, Func Offset: 0x840
	// Line 2102, Address: 0x13a4b4, Func Offset: 0x844
	// Line 2098, Address: 0x13a4b8, Func Offset: 0x848
	// Line 2099, Address: 0x13a4c0, Func Offset: 0x850
	// Line 2100, Address: 0x13a4c4, Func Offset: 0x854
	// Line 2099, Address: 0x13a4c8, Func Offset: 0x858
	// Line 2102, Address: 0x13a4cc, Func Offset: 0x85c
	// Line 2105, Address: 0x13a4d8, Func Offset: 0x868
	// Line 2107, Address: 0x13a4e4, Func Offset: 0x874
	// Line 2105, Address: 0x13a4ec, Func Offset: 0x87c
	// Line 2106, Address: 0x13a510, Func Offset: 0x8a0
	// Line 2107, Address: 0x13a528, Func Offset: 0x8b8
	// Line 2117, Address: 0x13a538, Func Offset: 0x8c8
	// Line 2119, Address: 0x13a548, Func Offset: 0x8d8
	// Line 2125, Address: 0x13a554, Func Offset: 0x8e4
	// Line 2126, Address: 0x13a558, Func Offset: 0x8e8
	// Func End, Address: 0x13a580, Func Offset: 0x910
}

// zEntPickup_Drop__FP10zEntPickup
// Start address: 0x13a580
void zEntPickup_Drop(zEntPickup* ent)
{
	float32 c;
	float32 sol[2];
	uint32 solcnt;
	// Line 1876, Address: 0x13a580, Func Offset: 0
	// Line 1878, Address: 0x13a584, Func Offset: 0x4
	// Line 1876, Address: 0x13a588, Func Offset: 0x8
	// Line 1878, Address: 0x13a594, Func Offset: 0x14
	// Line 1879, Address: 0x13a598, Func Offset: 0x18
	// Line 1884, Address: 0x13a5a4, Func Offset: 0x24
	// Line 1888, Address: 0x13a5c0, Func Offset: 0x40
	// Line 1889, Address: 0x13a5e0, Func Offset: 0x60
	// Line 1891, Address: 0x13a60c, Func Offset: 0x8c
	// Line 1895, Address: 0x13a610, Func Offset: 0x90
	// Line 1896, Address: 0x13a618, Func Offset: 0x98
	// Line 1895, Address: 0x13a61c, Func Offset: 0x9c
	// Line 1896, Address: 0x13a620, Func Offset: 0xa0
	// Line 1900, Address: 0x13a62c, Func Offset: 0xac
	// Line 1901, Address: 0x13a630, Func Offset: 0xb0
	// Line 1902, Address: 0x13a634, Func Offset: 0xb4
	// Line 1906, Address: 0x13a638, Func Offset: 0xb8
	// Line 1907, Address: 0x13a648, Func Offset: 0xc8
	// Line 1906, Address: 0x13a64c, Func Offset: 0xcc
	// Line 1907, Address: 0x13a650, Func Offset: 0xd0
	// Line 1908, Address: 0x13a660, Func Offset: 0xe0
	// Line 1909, Address: 0x13a668, Func Offset: 0xe8
	// Line 1910, Address: 0x13a684, Func Offset: 0x104
	// Line 1912, Address: 0x13a688, Func Offset: 0x108
	// Line 1910, Address: 0x13a68c, Func Offset: 0x10c
	// Line 1912, Address: 0x13a690, Func Offset: 0x110
	// Line 1913, Address: 0x13a6a8, Func Offset: 0x128
	// Line 1915, Address: 0x13a6b8, Func Offset: 0x138
	// Line 1916, Address: 0x13a6d8, Func Offset: 0x158
	// Line 1922, Address: 0x13a6f8, Func Offset: 0x178
	// Line 1923, Address: 0x13a704, Func Offset: 0x184
	// Func End, Address: 0x13a718, Func Offset: 0x198
}

// zEntPickup_FlushGrabbed__Fv
// Start address: 0x13a720
void zEntPickup_FlushGrabbed()
{
	zScene* s;
	zEntPickup* it;
	zEntPickup* end;
	// Line 1839, Address: 0x13a720, Func Offset: 0
	// Line 1840, Address: 0x13a724, Func Offset: 0x4
	// Line 1839, Address: 0x13a728, Func Offset: 0x8
	// Line 1841, Address: 0x13a72c, Func Offset: 0xc
	// Line 1839, Address: 0x13a730, Func Offset: 0x10
	// Line 1840, Address: 0x13a740, Func Offset: 0x20
	// Line 1841, Address: 0x13a744, Func Offset: 0x24
	// Line 1843, Address: 0x13a754, Func Offset: 0x34
	// Line 1845, Address: 0x13a760, Func Offset: 0x40
	// Line 1847, Address: 0x13a770, Func Offset: 0x50
	// Line 1848, Address: 0x13a7c0, Func Offset: 0xa0
	// Line 1849, Address: 0x13a7c4, Func Offset: 0xa4
	// Line 1848, Address: 0x13a7c8, Func Offset: 0xa8
	// Line 1849, Address: 0x13a7cc, Func Offset: 0xac
	// Line 1850, Address: 0x13a7d4, Func Offset: 0xb4
	// Line 1852, Address: 0x13a7dc, Func Offset: 0xbc
	// Line 1850, Address: 0x13a7e0, Func Offset: 0xc0
	// Line 1852, Address: 0x13a7ec, Func Offset: 0xcc
	// Line 1853, Address: 0x13a7f0, Func Offset: 0xd0
	// Line 1857, Address: 0x13a82c, Func Offset: 0x10c
	// Line 1858, Address: 0x13a840, Func Offset: 0x120
	// Func End, Address: 0x13a85c, Func Offset: 0x13c
}

// zEntPickup_Load__FP10zEntPickupP7xSerial
// Start address: 0x13a860
void zEntPickup_Load(zEntPickup* ent, xSerial* s)
{
	int32 is_a_dropper;
	uint32 state;
	int32 coll;
	// Line 1752, Address: 0x13a860, Func Offset: 0
	// Line 1755, Address: 0x13a888, Func Offset: 0x28
	// Line 1767, Address: 0x13a890, Func Offset: 0x30
	// Line 1774, Address: 0x13a8a8, Func Offset: 0x48
	// Line 1772, Address: 0x13a8b0, Func Offset: 0x50
	// Line 1774, Address: 0x13a8b4, Func Offset: 0x54
	// Line 1775, Address: 0x13a8bc, Func Offset: 0x5c
	// Line 1779, Address: 0x13a8c8, Func Offset: 0x68
	// Line 1781, Address: 0x13a8d8, Func Offset: 0x78
	// Line 1782, Address: 0x13a8ec, Func Offset: 0x8c
	// Line 1785, Address: 0x13a8f8, Func Offset: 0x98
	// Line 1789, Address: 0x13a900, Func Offset: 0xa0
	// Line 1790, Address: 0x13a90c, Func Offset: 0xac
	// Line 1792, Address: 0x13a920, Func Offset: 0xc0
	// Line 1797, Address: 0x13a930, Func Offset: 0xd0
	// Line 1798, Address: 0x13a940, Func Offset: 0xe0
	// Line 1808, Address: 0x13a948, Func Offset: 0xe8
	// Line 1812, Address: 0x13a964, Func Offset: 0x104
	// Line 1818, Address: 0x13a9a4, Func Offset: 0x144
	// Line 1826, Address: 0x13aa0c, Func Offset: 0x1ac
	// Line 1827, Address: 0x13aa14, Func Offset: 0x1b4
	// Line 1829, Address: 0x13aa1c, Func Offset: 0x1bc
	// Line 1831, Address: 0x13aa28, Func Offset: 0x1c8
	// Line 1836, Address: 0x13aa48, Func Offset: 0x1e8
	// Func End, Address: 0x13aa6c, Func Offset: 0x20c
}

// zEntPickup_Save__FP10zEntPickupP7xSerial
// Start address: 0x13aa70
void zEntPickup_Save(zEntPickup* ent, xSerial* s)
{
	// Line 1726, Address: 0x13aa70, Func Offset: 0
	// Line 1727, Address: 0x13aa84, Func Offset: 0x14
	// Line 1732, Address: 0x13aa8c, Func Offset: 0x1c
	// Line 1734, Address: 0x13aa98, Func Offset: 0x28
	// Line 1735, Address: 0x13aaa8, Func Offset: 0x38
	// Line 1737, Address: 0x13aab8, Func Offset: 0x48
	// Line 1739, Address: 0x13aac8, Func Offset: 0x58
	// Func End, Address: 0x13aadc, Func Offset: 0x6c
}

// zEntPickup_Reset__FP10zEntPickup
// Start address: 0x13aae0
void zEntPickup_Reset(zEntPickup* ent)
{
	// Line 1683, Address: 0x13aae0, Func Offset: 0
	// Line 1686, Address: 0x13aaf4, Func Offset: 0x14
	// Line 1689, Address: 0x13aafc, Func Offset: 0x1c
	// Line 1693, Address: 0x13ab00, Func Offset: 0x20
	// Line 1689, Address: 0x13ab04, Func Offset: 0x24
	// Line 1702, Address: 0x13ab08, Func Offset: 0x28
	// Line 1690, Address: 0x13ab0c, Func Offset: 0x2c
	// Line 1699, Address: 0x13ab10, Func Offset: 0x30
	// Line 1691, Address: 0x13ab14, Func Offset: 0x34
	// Line 1692, Address: 0x13ab18, Func Offset: 0x38
	// Line 1693, Address: 0x13ab24, Func Offset: 0x44
	// Line 1694, Address: 0x13ab28, Func Offset: 0x48
	// Line 1696, Address: 0x13ab2c, Func Offset: 0x4c
	// Line 1697, Address: 0x13ab30, Func Offset: 0x50
	// Line 1698, Address: 0x13ab34, Func Offset: 0x54
	// Line 1699, Address: 0x13ab38, Func Offset: 0x58
	// Line 1700, Address: 0x13ab3c, Func Offset: 0x5c
	// Line 1702, Address: 0x13ab40, Func Offset: 0x60
	// Line 1705, Address: 0x13ab90, Func Offset: 0xb0
	// Line 1704, Address: 0x13ab94, Func Offset: 0xb4
	// Line 1705, Address: 0x13ab98, Func Offset: 0xb8
	// Line 1706, Address: 0x13ab9c, Func Offset: 0xbc
	// Line 1713, Address: 0x13aba0, Func Offset: 0xc0
	// Line 1714, Address: 0x13abb0, Func Offset: 0xd0
	// Func End, Address: 0x13abc8, Func Offset: 0xe8
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
	// Line 1372, Address: 0x13abd0, Func Offset: 0
	// Line 1374, Address: 0x13abd8, Func Offset: 0x8
	// Line 1372, Address: 0x13abdc, Func Offset: 0xc
	// Line 1374, Address: 0x13ac04, Func Offset: 0x34
	// Line 1375, Address: 0x13ac14, Func Offset: 0x44
	// Line 1376, Address: 0x13ac18, Func Offset: 0x48
	// Line 1377, Address: 0x13ac24, Func Offset: 0x54
	// Line 1380, Address: 0x13ac28, Func Offset: 0x58
	// Line 1382, Address: 0x13ac38, Func Offset: 0x68
	// Line 1385, Address: 0x13ac48, Func Offset: 0x78
	// Line 1388, Address: 0x13ac60, Func Offset: 0x90
	// Line 1387, Address: 0x13ac64, Func Offset: 0x94
	// Line 1388, Address: 0x13ac6c, Func Offset: 0x9c
	// Line 1389, Address: 0x13ac7c, Func Offset: 0xac
	// Line 1390, Address: 0x13ac88, Func Offset: 0xb8
	// Line 1392, Address: 0x13ac90, Func Offset: 0xc0
	// Line 1395, Address: 0x13ac98, Func Offset: 0xc8
	// Line 1400, Address: 0x13aca0, Func Offset: 0xd0
	// Line 1403, Address: 0x13acb8, Func Offset: 0xe8
	// Line 1405, Address: 0x13accc, Func Offset: 0xfc
	// Line 1403, Address: 0x13acdc, Func Offset: 0x10c
	// Line 1405, Address: 0x13ad60, Func Offset: 0x190
	// Line 1406, Address: 0x13ad68, Func Offset: 0x198
	// Line 1407, Address: 0x13ad6c, Func Offset: 0x19c
	// Line 1413, Address: 0x13ad74, Func Offset: 0x1a4
	// Line 1407, Address: 0x13ad78, Func Offset: 0x1a8
	// Line 1413, Address: 0x13ad90, Func Offset: 0x1c0
	// Line 1407, Address: 0x13ad94, Func Offset: 0x1c4
	// Line 1413, Address: 0x13ad98, Func Offset: 0x1c8
	// Line 1407, Address: 0x13ada0, Func Offset: 0x1d0
	// Line 1410, Address: 0x13ae14, Func Offset: 0x244
	// Line 1413, Address: 0x13ae4c, Func Offset: 0x27c
	// Line 1414, Address: 0x13ae54, Func Offset: 0x284
	// Line 1415, Address: 0x13ae5c, Func Offset: 0x28c
	// Line 1419, Address: 0x13ae60, Func Offset: 0x290
	// Line 1431, Address: 0x13ae90, Func Offset: 0x2c0
	// Line 1435, Address: 0x13ae98, Func Offset: 0x2c8
	// Line 1436, Address: 0x13aea4, Func Offset: 0x2d4
	// Line 1437, Address: 0x13aeac, Func Offset: 0x2dc
	// Line 1438, Address: 0x13aeb4, Func Offset: 0x2e4
	// Line 1439, Address: 0x13aec0, Func Offset: 0x2f0
	// Line 1441, Address: 0x13aec8, Func Offset: 0x2f8
	// Line 1443, Address: 0x13aecc, Func Offset: 0x2fc
	// Line 1442, Address: 0x13aed8, Func Offset: 0x308
	// Line 1443, Address: 0x13aedc, Func Offset: 0x30c
	// Line 1444, Address: 0x13aee8, Func Offset: 0x318
	// Line 1445, Address: 0x13af04, Func Offset: 0x334
	// Line 1447, Address: 0x13af08, Func Offset: 0x338
	// Line 1450, Address: 0x13af20, Func Offset: 0x350
	// Line 1453, Address: 0x13af2c, Func Offset: 0x35c
	// Line 1455, Address: 0x13af4c, Func Offset: 0x37c
	// Line 1459, Address: 0x13af58, Func Offset: 0x388
	// Line 1461, Address: 0x13af8c, Func Offset: 0x3bc
	// Line 1464, Address: 0x13af90, Func Offset: 0x3c0
	// Line 1468, Address: 0x13afc8, Func Offset: 0x3f8
	// Line 1470, Address: 0x13afd4, Func Offset: 0x404
	// Line 1472, Address: 0x13afe0, Func Offset: 0x410
	// Line 1476, Address: 0x13afe8, Func Offset: 0x418
	// Line 1477, Address: 0x13b008, Func Offset: 0x438
	// Line 1481, Address: 0x13b040, Func Offset: 0x470
	// Line 1482, Address: 0x13b070, Func Offset: 0x4a0
	// Line 1484, Address: 0x13b078, Func Offset: 0x4a8
	// Line 1486, Address: 0x13b07c, Func Offset: 0x4ac
	// Line 1484, Address: 0x13b080, Func Offset: 0x4b0
	// Line 1486, Address: 0x13b084, Func Offset: 0x4b4
	// Line 1487, Address: 0x13b090, Func Offset: 0x4c0
	// Line 1490, Address: 0x13b098, Func Offset: 0x4c8
	// Line 1491, Address: 0x13b0a8, Func Offset: 0x4d8
	// Line 1495, Address: 0x13b0b0, Func Offset: 0x4e0
	// Line 1497, Address: 0x13b0c0, Func Offset: 0x4f0
	// Line 1498, Address: 0x13b0cc, Func Offset: 0x4fc
	// Line 1500, Address: 0x13b0d0, Func Offset: 0x500
	// Line 1502, Address: 0x13b0e8, Func Offset: 0x518
	// Line 1504, Address: 0x13b0fc, Func Offset: 0x52c
	// Line 1506, Address: 0x13b100, Func Offset: 0x530
	// Line 1507, Address: 0x13b110, Func Offset: 0x540
	// Line 1512, Address: 0x13b118, Func Offset: 0x548
	// Line 1516, Address: 0x13b138, Func Offset: 0x568
	// Line 1519, Address: 0x13b148, Func Offset: 0x578
	// Line 1520, Address: 0x13b150, Func Offset: 0x580
	// Line 1521, Address: 0x13b158, Func Offset: 0x588
	// Line 1523, Address: 0x13b168, Func Offset: 0x598
	// Line 1524, Address: 0x13b170, Func Offset: 0x5a0
	// Line 1527, Address: 0x13b178, Func Offset: 0x5a8
	// Line 1529, Address: 0x13b190, Func Offset: 0x5c0
	// Line 1530, Address: 0x13b194, Func Offset: 0x5c4
	// Line 1532, Address: 0x13b1a0, Func Offset: 0x5d0
	// Line 1535, Address: 0x13b1a4, Func Offset: 0x5d4
	// Line 1533, Address: 0x13b1a8, Func Offset: 0x5d8
	// Line 1535, Address: 0x13b1ac, Func Offset: 0x5dc
	// Line 1537, Address: 0x13b1b4, Func Offset: 0x5e4
	// Line 1540, Address: 0x13b1b8, Func Offset: 0x5e8
	// Line 1541, Address: 0x13b1c0, Func Offset: 0x5f0
	// Line 1540, Address: 0x13b1c4, Func Offset: 0x5f4
	// Line 1541, Address: 0x13b1c8, Func Offset: 0x5f8
	// Line 1540, Address: 0x13b1cc, Func Offset: 0x5fc
	// Line 1541, Address: 0x13b1d0, Func Offset: 0x600
	// Line 1540, Address: 0x13b1d4, Func Offset: 0x604
	// Line 1541, Address: 0x13b1d8, Func Offset: 0x608
	// Line 1540, Address: 0x13b1dc, Func Offset: 0x60c
	// Line 1541, Address: 0x13b1e0, Func Offset: 0x610
	// Line 1540, Address: 0x13b1e8, Func Offset: 0x618
	// Line 1541, Address: 0x13b1ec, Func Offset: 0x61c
	// Line 1546, Address: 0x13b224, Func Offset: 0x654
	// Line 1545, Address: 0x13b230, Func Offset: 0x660
	// Line 1546, Address: 0x13b238, Func Offset: 0x668
	// Line 1545, Address: 0x13b23c, Func Offset: 0x66c
	// Line 1546, Address: 0x13b240, Func Offset: 0x670
	// Line 1550, Address: 0x13b258, Func Offset: 0x688
	// Line 1552, Address: 0x13b260, Func Offset: 0x690
	// Line 1557, Address: 0x13b284, Func Offset: 0x6b4
	// Line 1558, Address: 0x13b288, Func Offset: 0x6b8
	// Line 1557, Address: 0x13b28c, Func Offset: 0x6bc
	// Line 1558, Address: 0x13b290, Func Offset: 0x6c0
	// Line 1559, Address: 0x13b298, Func Offset: 0x6c8
	// Line 1560, Address: 0x13b2a0, Func Offset: 0x6d0
	// Line 1559, Address: 0x13b2a4, Func Offset: 0x6d4
	// Line 1562, Address: 0x13b2b0, Func Offset: 0x6e0
	// Line 1571, Address: 0x13b2b8, Func Offset: 0x6e8
	// Line 1569, Address: 0x13b2bc, Func Offset: 0x6ec
	// Line 1573, Address: 0x13b2c4, Func Offset: 0x6f4
	// Line 1571, Address: 0x13b2c8, Func Offset: 0x6f8
	// Line 1575, Address: 0x13b2d8, Func Offset: 0x708
	// Line 1571, Address: 0x13b2dc, Func Offset: 0x70c
	// Line 1575, Address: 0x13b304, Func Offset: 0x734
	// Line 1579, Address: 0x13b310, Func Offset: 0x740
	// Line 1581, Address: 0x13b318, Func Offset: 0x748
	// Line 1587, Address: 0x13b320, Func Offset: 0x750
	// Line 1590, Address: 0x13b324, Func Offset: 0x754
	// Line 1592, Address: 0x13b328, Func Offset: 0x758
	// Line 1590, Address: 0x13b32c, Func Offset: 0x75c
	// Line 1586, Address: 0x13b330, Func Offset: 0x760
	// Line 1590, Address: 0x13b334, Func Offset: 0x764
	// Line 1592, Address: 0x13b338, Func Offset: 0x768
	// Line 1587, Address: 0x13b33c, Func Offset: 0x76c
	// Line 1589, Address: 0x13b340, Func Offset: 0x770
	// Line 1587, Address: 0x13b344, Func Offset: 0x774
	// Line 1589, Address: 0x13b348, Func Offset: 0x778
	// Line 1590, Address: 0x13b350, Func Offset: 0x780
	// Line 1591, Address: 0x13b364, Func Offset: 0x794
	// Line 1592, Address: 0x13b370, Func Offset: 0x7a0
	// Line 1594, Address: 0x13b378, Func Offset: 0x7a8
	// Line 1596, Address: 0x13b37c, Func Offset: 0x7ac
	// Line 1597, Address: 0x13b384, Func Offset: 0x7b4
	// Line 1594, Address: 0x13b388, Func Offset: 0x7b8
	// Line 1597, Address: 0x13b398, Func Offset: 0x7c8
	// Line 1600, Address: 0x13b3f8, Func Offset: 0x828
	// Line 1599, Address: 0x13b3fc, Func Offset: 0x82c
	// Line 1600, Address: 0x13b404, Func Offset: 0x834
	// Line 1599, Address: 0x13b40c, Func Offset: 0x83c
	// Line 1600, Address: 0x13b410, Func Offset: 0x840
	// Line 1601, Address: 0x13b41c, Func Offset: 0x84c
	// Line 1604, Address: 0x13b420, Func Offset: 0x850
	// Line 1605, Address: 0x13b428, Func Offset: 0x858
	// Line 1606, Address: 0x13b42c, Func Offset: 0x85c
	// Line 1604, Address: 0x13b430, Func Offset: 0x860
	// Line 1606, Address: 0x13b434, Func Offset: 0x864
	// Line 1610, Address: 0x13b438, Func Offset: 0x868
	// Line 1605, Address: 0x13b43c, Func Offset: 0x86c
	// Line 1606, Address: 0x13b440, Func Offset: 0x870
	// Line 1605, Address: 0x13b44c, Func Offset: 0x87c
	// Line 1606, Address: 0x13b450, Func Offset: 0x880
	// Line 1610, Address: 0x13b454, Func Offset: 0x884
	// Line 1611, Address: 0x13b468, Func Offset: 0x898
	// Line 1613, Address: 0x13b470, Func Offset: 0x8a0
	// Line 1615, Address: 0x13b478, Func Offset: 0x8a8
	// Line 1613, Address: 0x13b480, Func Offset: 0x8b0
	// Line 1615, Address: 0x13b484, Func Offset: 0x8b4
	// Line 1616, Address: 0x13b490, Func Offset: 0x8c0
	// Line 1617, Address: 0x13b498, Func Offset: 0x8c8
	// Line 1618, Address: 0x13b4b0, Func Offset: 0x8e0
	// Line 1620, Address: 0x13b4b8, Func Offset: 0x8e8
	// Line 1621, Address: 0x13b4c0, Func Offset: 0x8f0
	// Line 1629, Address: 0x13b4c4, Func Offset: 0x8f4
	// Line 1622, Address: 0x13b4c8, Func Offset: 0x8f8
	// Line 1629, Address: 0x13b4cc, Func Offset: 0x8fc
	// Line 1630, Address: 0x13b4d8, Func Offset: 0x908
	// Line 1629, Address: 0x13b4dc, Func Offset: 0x90c
	// Line 1630, Address: 0x13b4e4, Func Offset: 0x914
	// Line 1631, Address: 0x13b4f0, Func Offset: 0x920
	// Line 1643, Address: 0x13b508, Func Offset: 0x938
	// Line 1637, Address: 0x13b50c, Func Offset: 0x93c
	// Line 1643, Address: 0x13b510, Func Offset: 0x940
	// Line 1637, Address: 0x13b518, Func Offset: 0x948
	// Line 1638, Address: 0x13b524, Func Offset: 0x954
	// Line 1640, Address: 0x13b528, Func Offset: 0x958
	// Line 1638, Address: 0x13b52c, Func Offset: 0x95c
	// Line 1640, Address: 0x13b530, Func Offset: 0x960
	// Line 1638, Address: 0x13b534, Func Offset: 0x964
	// Line 1639, Address: 0x13b53c, Func Offset: 0x96c
	// Line 1640, Address: 0x13b540, Func Offset: 0x970
	// Line 1639, Address: 0x13b544, Func Offset: 0x974
	// Line 1640, Address: 0x13b54c, Func Offset: 0x97c
	// Line 1643, Address: 0x13b55c, Func Offset: 0x98c
	// Line 1645, Address: 0x13b568, Func Offset: 0x998
	// Line 1649, Address: 0x13b570, Func Offset: 0x9a0
	// Line 1650, Address: 0x13b588, Func Offset: 0x9b8
	// Line 1651, Address: 0x13b5a0, Func Offset: 0x9d0
	// Line 1653, Address: 0x13b5b4, Func Offset: 0x9e4
	// Line 1661, Address: 0x13b5c0, Func Offset: 0x9f0
	// Line 1657, Address: 0x13b5c4, Func Offset: 0x9f4
	// Line 1661, Address: 0x13b5c8, Func Offset: 0x9f8
	// Line 1657, Address: 0x13b5cc, Func Offset: 0x9fc
	// Line 1661, Address: 0x13b5e0, Func Offset: 0xa10
	// Line 1657, Address: 0x13b5e4, Func Offset: 0xa14
	// Line 1661, Address: 0x13b600, Func Offset: 0xa30
	// Line 1662, Address: 0x13b60c, Func Offset: 0xa3c
	// Line 1666, Address: 0x13b610, Func Offset: 0xa40
	// Line 1668, Address: 0x13b614, Func Offset: 0xa44
	// Line 1666, Address: 0x13b618, Func Offset: 0xa48
	// Line 1668, Address: 0x13b61c, Func Offset: 0xa4c
	// Line 1666, Address: 0x13b620, Func Offset: 0xa50
	// Line 1668, Address: 0x13b624, Func Offset: 0xa54
	// Line 1676, Address: 0x13b67c, Func Offset: 0xaac
	// Line 1678, Address: 0x13b680, Func Offset: 0xab0
	// Func End, Address: 0x13b6ac, Func Offset: 0xadc
}

// zEntPickup_GiveAllRewardsNow__Fv
// Start address: 0x13b6b0
void zEntPickup_GiveAllRewardsNow()
{
	uint32 i;
	uint32 j;
	uint32 total;
	// Line 1305, Address: 0x13b6b0, Func Offset: 0
	// Line 1307, Address: 0x13b6c0, Func Offset: 0x10
	// Line 1305, Address: 0x13b6c4, Func Offset: 0x14
	// Line 1307, Address: 0x13b6cc, Func Offset: 0x1c
	// Line 1305, Address: 0x13b6d0, Func Offset: 0x20
	// Line 1307, Address: 0x13b6d4, Func Offset: 0x24
	// Line 1308, Address: 0x13b6d8, Func Offset: 0x28
	// Line 1309, Address: 0x13b6e4, Func Offset: 0x34
	// Line 1313, Address: 0x13b6ec, Func Offset: 0x3c
	// Line 1315, Address: 0x13b6f8, Func Offset: 0x48
	// Line 1316, Address: 0x13b708, Func Offset: 0x58
	// Line 1318, Address: 0x13b710, Func Offset: 0x60
	// Line 1320, Address: 0x13b718, Func Offset: 0x68
	// Line 1318, Address: 0x13b71c, Func Offset: 0x6c
	// Line 1320, Address: 0x13b728, Func Offset: 0x78
	// Line 1321, Address: 0x13b72c, Func Offset: 0x7c
	// Line 1324, Address: 0x13b768, Func Offset: 0xb8
	// Line 1329, Address: 0x13b788, Func Offset: 0xd8
	// Line 1328, Address: 0x13b794, Func Offset: 0xe4
	// Line 1329, Address: 0x13b798, Func Offset: 0xe8
	// Line 1335, Address: 0x13b7c0, Func Offset: 0x110
	// Line 1331, Address: 0x13b7d0, Func Offset: 0x120
	// Line 1333, Address: 0x13b7dc, Func Offset: 0x12c
	// Line 1335, Address: 0x13b7f0, Func Offset: 0x140
	// Line 1337, Address: 0x13b824, Func Offset: 0x174
	// Line 1339, Address: 0x13b828, Func Offset: 0x178
	// Line 1342, Address: 0x13b830, Func Offset: 0x180
	// Line 1345, Address: 0x13b838, Func Offset: 0x188
	// Line 1348, Address: 0x13b840, Func Offset: 0x190
	// Line 1350, Address: 0x13b848, Func Offset: 0x198
	// Line 1357, Address: 0x13b84c, Func Offset: 0x19c
	// Line 1359, Address: 0x13b860, Func Offset: 0x1b0
	// Line 1360, Address: 0x13b870, Func Offset: 0x1c0
	// Line 1361, Address: 0x13b884, Func Offset: 0x1d4
	// Line 1362, Address: 0x13b8a0, Func Offset: 0x1f0
	// Line 1365, Address: 0x13b8b0, Func Offset: 0x200
	// Line 1367, Address: 0x13b8c4, Func Offset: 0x214
	// Func End, Address: 0x13b8e4, Func Offset: 0x234
}

// collectPickup__FP10zEntPickup
// Start address: 0x13b8f0
void collectPickup(zEntPickup* ent)
{
	// Line 1216, Address: 0x13b8f0, Func Offset: 0
	// Line 1218, Address: 0x13b908, Func Offset: 0x18
	// Line 1219, Address: 0x13b910, Func Offset: 0x20
	// Line 1220, Address: 0x13b918, Func Offset: 0x28
	// Line 1222, Address: 0x13b920, Func Offset: 0x30
	// Line 1220, Address: 0x13b924, Func Offset: 0x34
	// Line 1222, Address: 0x13b930, Func Offset: 0x40
	// Line 1223, Address: 0x13b980, Func Offset: 0x90
	// Line 1225, Address: 0x13b990, Func Offset: 0xa0
	// Line 1232, Address: 0x13b998, Func Offset: 0xa8
	// Line 1226, Address: 0x13b99c, Func Offset: 0xac
	// Line 1232, Address: 0x13b9d8, Func Offset: 0xe8
	// Line 1234, Address: 0x13ba2c, Func Offset: 0x13c
	// Line 1236, Address: 0x13ba38, Func Offset: 0x148
	// Line 1238, Address: 0x13ba74, Func Offset: 0x184
	// Line 1239, Address: 0x13ba78, Func Offset: 0x188
	// Line 1240, Address: 0x13ba80, Func Offset: 0x190
	// Line 1247, Address: 0x13ba88, Func Offset: 0x198
	// Line 1249, Address: 0x13baa0, Func Offset: 0x1b0
	// Line 1253, Address: 0x13bac0, Func Offset: 0x1d0
	// Line 1257, Address: 0x13bae0, Func Offset: 0x1f0
	// Line 1262, Address: 0x13bb00, Func Offset: 0x210
	// Line 1274, Address: 0x13bb08, Func Offset: 0x218
	// Line 1277, Address: 0x13bb48, Func Offset: 0x258
	// Line 1278, Address: 0x13bb54, Func Offset: 0x264
	// Line 1282, Address: 0x13bb6c, Func Offset: 0x27c
	// Line 1284, Address: 0x13bb74, Func Offset: 0x284
	// Line 1285, Address: 0x13bb78, Func Offset: 0x288
	// Line 1286, Address: 0x13bb90, Func Offset: 0x2a0
	// Line 1287, Address: 0x13bb9c, Func Offset: 0x2ac
	// Line 1291, Address: 0x13bba4, Func Offset: 0x2b4
	// Line 1292, Address: 0x13bba8, Func Offset: 0x2b8
	// Line 1302, Address: 0x13bbb8, Func Offset: 0x2c8
	// Func End, Address: 0x13bbd0, Func Offset: 0x2e0
}

// zEntPickup_GivePickup__FP10zEntPickup
// Start address: 0x13bbd0
void zEntPickup_GivePickup(zEntPickup* ent)
{
	// Line 1082, Address: 0x13bbd0, Func Offset: 0
	// Line 1084, Address: 0x13bbe4, Func Offset: 0x14
	// Line 1090, Address: 0x13bbec, Func Offset: 0x1c
	// Line 1092, Address: 0x13bc28, Func Offset: 0x58
	// Line 1093, Address: 0x13bc40, Func Offset: 0x70
	// Line 1095, Address: 0x13bc48, Func Offset: 0x78
	// Line 1096, Address: 0x13bc60, Func Offset: 0x90
	// Line 1098, Address: 0x13bc68, Func Offset: 0x98
	// Line 1099, Address: 0x13bc80, Func Offset: 0xb0
	// Line 1101, Address: 0x13bc88, Func Offset: 0xb8
	// Line 1102, Address: 0x13bca0, Func Offset: 0xd0
	// Line 1104, Address: 0x13bca8, Func Offset: 0xd8
	// Line 1110, Address: 0x13bcc4, Func Offset: 0xf4
	// Line 1112, Address: 0x13bcc8, Func Offset: 0xf8
	// Line 1113, Address: 0x13bce4, Func Offset: 0x114
	// Line 1132, Address: 0x13bcec, Func Offset: 0x11c
	// Line 1133, Address: 0x13bcf8, Func Offset: 0x128
	// Line 1136, Address: 0x13bd04, Func Offset: 0x134
	// Line 1140, Address: 0x13bd30, Func Offset: 0x160
	// Line 1141, Address: 0x13bd3c, Func Offset: 0x16c
	// Line 1143, Address: 0x13bd48, Func Offset: 0x178
	// Line 1147, Address: 0x13bd50, Func Offset: 0x180
	// Line 1149, Address: 0x13bd60, Func Offset: 0x190
	// Line 1150, Address: 0x13bd70, Func Offset: 0x1a0
	// Line 1151, Address: 0x13bd84, Func Offset: 0x1b4
	// Line 1154, Address: 0x13bd88, Func Offset: 0x1b8
	// Line 1158, Address: 0x13bd90, Func Offset: 0x1c0
	// Line 1159, Address: 0x13bda4, Func Offset: 0x1d4
	// Line 1160, Address: 0x13bdb8, Func Offset: 0x1e8
	// Line 1161, Address: 0x13bdc0, Func Offset: 0x1f0
	// Line 1163, Address: 0x13bdc8, Func Offset: 0x1f8
	// Line 1161, Address: 0x13bdcc, Func Offset: 0x1fc
	// Line 1163, Address: 0x13bdd0, Func Offset: 0x200
	// Line 1164, Address: 0x13bdd8, Func Offset: 0x208
	// Line 1165, Address: 0x13bde8, Func Offset: 0x218
	// Line 1166, Address: 0x13bdf4, Func Offset: 0x224
	// Line 1167, Address: 0x13be08, Func Offset: 0x238
	// Line 1168, Address: 0x13be14, Func Offset: 0x244
	// Line 1170, Address: 0x13be1c, Func Offset: 0x24c
	// Line 1175, Address: 0x13be24, Func Offset: 0x254
	// Line 1176, Address: 0x13be28, Func Offset: 0x258
	// Line 1178, Address: 0x13be30, Func Offset: 0x260
	// Line 1176, Address: 0x13be38, Func Offset: 0x268
	// Line 1178, Address: 0x13be40, Func Offset: 0x270
	// Line 1180, Address: 0x13be44, Func Offset: 0x274
	// Line 1182, Address: 0x13be4c, Func Offset: 0x27c
	// Line 1183, Address: 0x13be50, Func Offset: 0x280
	// Line 1184, Address: 0x13be58, Func Offset: 0x288
	// Line 1187, Address: 0x13be60, Func Offset: 0x290
	// Line 1188, Address: 0x13be68, Func Offset: 0x298
	// Line 1199, Address: 0x13be70, Func Offset: 0x2a0
	// Line 1200, Address: 0x13be90, Func Offset: 0x2c0
	// Line 1208, Address: 0x13beb4, Func Offset: 0x2e4
	// Line 1211, Address: 0x13beb8, Func Offset: 0x2e8
	// Line 1213, Address: 0x13bec4, Func Offset: 0x2f4
	// Func End, Address: 0x13bed4, Func Offset: 0x304
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
	// Line 855, Address: 0x13bee0, Func Offset: 0
	// Line 856, Address: 0x13bee4, Func Offset: 0x4
	// Line 855, Address: 0x13bee8, Func Offset: 0x8
	// Line 856, Address: 0x13bef8, Func Offset: 0x18
	// Line 857, Address: 0x13bf04, Func Offset: 0x24
	// Line 858, Address: 0x13bf0c, Func Offset: 0x2c
	// Line 860, Address: 0x13bf10, Func Offset: 0x30
	// Line 866, Address: 0x13bf14, Func Offset: 0x34
	// Line 876, Address: 0x13bf60, Func Offset: 0x80
	// Line 877, Address: 0x13bf64, Func Offset: 0x84
	// Line 878, Address: 0x13bf74, Func Offset: 0x94
	// Line 881, Address: 0x13bf80, Func Offset: 0xa0
	// Line 886, Address: 0x13bf88, Func Offset: 0xa8
	// Line 881, Address: 0x13bf8c, Func Offset: 0xac
	// Line 886, Address: 0x13bf90, Func Offset: 0xb0
	// Line 883, Address: 0x13bf98, Func Offset: 0xb8
	// Line 881, Address: 0x13bf9c, Func Offset: 0xbc
	// Line 883, Address: 0x13bfa0, Func Offset: 0xc0
	// Line 886, Address: 0x13bfa8, Func Offset: 0xc8
	// Line 883, Address: 0x13bfac, Func Offset: 0xcc
	// Line 887, Address: 0x13bfb8, Func Offset: 0xd8
	// Line 883, Address: 0x13bfbc, Func Offset: 0xdc
	// Line 887, Address: 0x13bfd8, Func Offset: 0xf8
	// Line 890, Address: 0x13bff4, Func Offset: 0x114
	// Line 891, Address: 0x13c004, Func Offset: 0x124
	// Line 893, Address: 0x13c0dc, Func Offset: 0x1fc
	// Line 895, Address: 0x13c0ec, Func Offset: 0x20c
	// Line 900, Address: 0x13c118, Func Offset: 0x238
	// Line 901, Address: 0x13c134, Func Offset: 0x254
	// Line 903, Address: 0x13c200, Func Offset: 0x320
	// Line 908, Address: 0x13c208, Func Offset: 0x328
	// Line 910, Address: 0x13c210, Func Offset: 0x330
	// Line 913, Address: 0x13c258, Func Offset: 0x378
	// Line 915, Address: 0x13c268, Func Offset: 0x388
	// Line 916, Address: 0x13c338, Func Offset: 0x458
	// Line 923, Address: 0x13c340, Func Offset: 0x460
	// Line 925, Address: 0x13c350, Func Offset: 0x470
	// Line 928, Address: 0x13c35c, Func Offset: 0x47c
	// Line 930, Address: 0x13c368, Func Offset: 0x488
	// Line 938, Address: 0x13c378, Func Offset: 0x498
	// Line 939, Address: 0x13c384, Func Offset: 0x4a4
	// Line 930, Address: 0x13c388, Func Offset: 0x4a8
	// Line 935, Address: 0x13c394, Func Offset: 0x4b4
	// Line 939, Address: 0x13c398, Func Offset: 0x4b8
	// Line 936, Address: 0x13c3a4, Func Offset: 0x4c4
	// Line 939, Address: 0x13c3a8, Func Offset: 0x4c8
	// Line 937, Address: 0x13c3b0, Func Offset: 0x4d0
	// Line 939, Address: 0x13c3b4, Func Offset: 0x4d4
	// Line 938, Address: 0x13c3c4, Func Offset: 0x4e4
	// Line 940, Address: 0x13c3c8, Func Offset: 0x4e8
	// Line 939, Address: 0x13c3d0, Func Offset: 0x4f0
	// Line 940, Address: 0x13c3d4, Func Offset: 0x4f4
	// Line 939, Address: 0x13c3dc, Func Offset: 0x4fc
	// Line 948, Address: 0x13c3e0, Func Offset: 0x500
	// Line 953, Address: 0x13c3f8, Func Offset: 0x518
	// Line 957, Address: 0x13c408, Func Offset: 0x528
	// Line 958, Address: 0x13c418, Func Offset: 0x538
	// Line 961, Address: 0x13c420, Func Offset: 0x540
	// Line 963, Address: 0x13c428, Func Offset: 0x548
	// Line 966, Address: 0x13c468, Func Offset: 0x588
	// Line 968, Address: 0x13c478, Func Offset: 0x598
	// Line 969, Address: 0x13c484, Func Offset: 0x5a4
	// Line 974, Address: 0x13c554, Func Offset: 0x674
	// Line 976, Address: 0x13c55c, Func Offset: 0x67c
	// Line 978, Address: 0x13c560, Func Offset: 0x680
	// Line 981, Address: 0x13c574, Func Offset: 0x694
	// Line 985, Address: 0x13c584, Func Offset: 0x6a4
	// Line 986, Address: 0x13c590, Func Offset: 0x6b0
	// Line 992, Address: 0x13c65c, Func Offset: 0x77c
	// Line 997, Address: 0x13c664, Func Offset: 0x784
	// Line 998, Address: 0x13c668, Func Offset: 0x788
	// Line 999, Address: 0x13c734, Func Offset: 0x854
	// Line 1003, Address: 0x13c73c, Func Offset: 0x85c
	// Line 1005, Address: 0x13c740, Func Offset: 0x860
	// Line 1007, Address: 0x13c80c, Func Offset: 0x92c
	// Line 1012, Address: 0x13c814, Func Offset: 0x934
	// Line 1013, Address: 0x13c818, Func Offset: 0x938
	// Line 1024, Address: 0x13c8e4, Func Offset: 0xa04
	// Line 1025, Address: 0x13c8e8, Func Offset: 0xa08
	// Line 1026, Address: 0x13c8f0, Func Offset: 0xa10
	// Func End, Address: 0x13c908, Func Offset: 0xa28
}

// zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef
// Start address: 0x13c910
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, float32 dt)
{
	zEntPickup_cbData cbdata;
	// Line 841, Address: 0x13c910, Func Offset: 0
	// Line 847, Address: 0x13c914, Func Offset: 0x4
	// Line 841, Address: 0x13c918, Func Offset: 0x8
	// Line 847, Address: 0x13c91c, Func Offset: 0xc
	// Line 845, Address: 0x13c928, Func Offset: 0x18
	// Line 846, Address: 0x13c92c, Func Offset: 0x1c
	// Line 847, Address: 0x13c930, Func Offset: 0x20
	// Line 853, Address: 0x13c950, Func Offset: 0x40
	// Func End, Address: 0x13c95c, Func Offset: 0x4c
}

// zEntPickupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x13c960
int32 zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zEntPickup* p;
	xEntFrame frame;
	// Line 634, Address: 0x13c960, Func Offset: 0
	// Line 643, Address: 0x13c964, Func Offset: 0x4
	// Line 634, Address: 0x13c968, Func Offset: 0x8
	// Line 643, Address: 0x13c970, Func Offset: 0x10
	// Line 645, Address: 0x13c9dc, Func Offset: 0x7c
	// Line 647, Address: 0x13c9e0, Func Offset: 0x80
	// Line 649, Address: 0x13c9f0, Func Offset: 0x90
	// Line 650, Address: 0x13c9f8, Func Offset: 0x98
	// Line 651, Address: 0x13ca28, Func Offset: 0xc8
	// Line 653, Address: 0x13ca38, Func Offset: 0xd8
	// Line 656, Address: 0x13ca40, Func Offset: 0xe0
	// Line 657, Address: 0x13ca48, Func Offset: 0xe8
	// Line 658, Address: 0x13ca78, Func Offset: 0x118
	// Line 659, Address: 0x13ca88, Func Offset: 0x128
	// Line 662, Address: 0x13ca90, Func Offset: 0x130
	// Line 664, Address: 0x13caa0, Func Offset: 0x140
	// Line 665, Address: 0x13caac, Func Offset: 0x14c
	// Line 666, Address: 0x13cab4, Func Offset: 0x154
	// Line 668, Address: 0x13cabc, Func Offset: 0x15c
	// Line 669, Address: 0x13caec, Func Offset: 0x18c
	// Line 672, Address: 0x13cafc, Func Offset: 0x19c
	// Line 674, Address: 0x13cb04, Func Offset: 0x1a4
	// Line 675, Address: 0x13cb08, Func Offset: 0x1a8
	// Line 676, Address: 0x13cb14, Func Offset: 0x1b4
	// Line 677, Address: 0x13cb1c, Func Offset: 0x1bc
	// Line 678, Address: 0x13cb4c, Func Offset: 0x1ec
	// Line 679, Address: 0x13cb5c, Func Offset: 0x1fc
	// Line 681, Address: 0x13cb64, Func Offset: 0x204
	// Line 682, Address: 0x13cb68, Func Offset: 0x208
	// Line 683, Address: 0x13cb70, Func Offset: 0x210
	// Line 688, Address: 0x13cb78, Func Offset: 0x218
	// Line 689, Address: 0x13cb88, Func Offset: 0x228
	// Line 691, Address: 0x13cc58, Func Offset: 0x2f8
	// Line 693, Address: 0x13cc60, Func Offset: 0x300
	// Line 694, Address: 0x13cc70, Func Offset: 0x310
	// Line 695, Address: 0x13cc78, Func Offset: 0x318
	// Line 698, Address: 0x13cc80, Func Offset: 0x320
	// Line 699, Address: 0x13cc84, Func Offset: 0x324
	// Line 700, Address: 0x13cc8c, Func Offset: 0x32c
	// Line 701, Address: 0x13cc94, Func Offset: 0x334
	// Line 702, Address: 0x13cc98, Func Offset: 0x338
	// Line 706, Address: 0x13cca0, Func Offset: 0x340
	// Line 708, Address: 0x13cca4, Func Offset: 0x344
	// Line 706, Address: 0x13ccb0, Func Offset: 0x350
	// Line 708, Address: 0x13ccb4, Func Offset: 0x354
	// Line 706, Address: 0x13ccb8, Func Offset: 0x358
	// Line 708, Address: 0x13ccc4, Func Offset: 0x364
	// Line 706, Address: 0x13cccc, Func Offset: 0x36c
	// Line 708, Address: 0x13cd50, Func Offset: 0x3f0
	// Line 710, Address: 0x13cd58, Func Offset: 0x3f8
	// Line 714, Address: 0x13cd60, Func Offset: 0x400
	// Line 716, Address: 0x13cd64, Func Offset: 0x404
	// Line 714, Address: 0x13cd68, Func Offset: 0x408
	// Line 716, Address: 0x13cd6c, Func Offset: 0x40c
	// Line 714, Address: 0x13cd70, Func Offset: 0x410
	// Line 716, Address: 0x13cd74, Func Offset: 0x414
	// Line 714, Address: 0x13cd78, Func Offset: 0x418
	// Line 716, Address: 0x13cd80, Func Offset: 0x420
	// Line 714, Address: 0x13cd84, Func Offset: 0x424
	// Line 716, Address: 0x13ce08, Func Offset: 0x4a8
	// Line 717, Address: 0x13ce10, Func Offset: 0x4b0
	// Line 719, Address: 0x13ce14, Func Offset: 0x4b4
	// Line 722, Address: 0x13ce18, Func Offset: 0x4b8
	// Line 721, Address: 0x13ce20, Func Offset: 0x4c0
	// Line 722, Address: 0x13ce24, Func Offset: 0x4c4
	// Func End, Address: 0x13ce2c, Func Offset: 0x4cc
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
	// Line 574, Address: 0x13ce30, Func Offset: 0
	// Line 580, Address: 0x13ce34, Func Offset: 0x4
	// Line 574, Address: 0x13ce38, Func Offset: 0x8
	// Line 576, Address: 0x13ce3c, Func Offset: 0xc
	// Line 574, Address: 0x13ce40, Func Offset: 0x10
	// Line 580, Address: 0x13ce44, Func Offset: 0x14
	// Line 574, Address: 0x13ce48, Func Offset: 0x18
	// Line 580, Address: 0x13ce4c, Func Offset: 0x1c
	// Line 574, Address: 0x13ce50, Func Offset: 0x20
	// Line 576, Address: 0x13ce64, Func Offset: 0x34
	// Line 580, Address: 0x13ce68, Func Offset: 0x38
	// Line 582, Address: 0x13ce70, Func Offset: 0x40
	// Line 584, Address: 0x13ce78, Func Offset: 0x48
	// Line 585, Address: 0x13ce9c, Func Offset: 0x6c
	// Line 587, Address: 0x13cea4, Func Offset: 0x74
	// Line 588, Address: 0x13cec4, Func Offset: 0x94
	// Line 587, Address: 0x13cec8, Func Offset: 0x98
	// Line 588, Address: 0x13cecc, Func Offset: 0x9c
	// Line 589, Address: 0x13ced8, Func Offset: 0xa8
	// Line 590, Address: 0x13cee0, Func Offset: 0xb0
	// Line 592, Address: 0x13cf08, Func Offset: 0xd8
	// Line 596, Address: 0x13cf0c, Func Offset: 0xdc
	// Line 598, Address: 0x13cf58, Func Offset: 0x128
	// Line 599, Address: 0x13cf64, Func Offset: 0x134
	// Line 600, Address: 0x13cf70, Func Offset: 0x140
	// Line 605, Address: 0x13cf74, Func Offset: 0x144
	// Line 606, Address: 0x13cf78, Func Offset: 0x148
	// Line 610, Address: 0x13cf80, Func Offset: 0x150
	// Line 612, Address: 0x13cfd8, Func Offset: 0x1a8
	// Line 613, Address: 0x13cfec, Func Offset: 0x1bc
	// Line 619, Address: 0x13d008, Func Offset: 0x1d8
	// Func End, Address: 0x13d030, Func Offset: 0x200
}

// zEntPickup_Setup__FP10zEntPickup
// Start address: 0x13d030
void zEntPickup_Setup(zEntPickup* p)
{
	// Line 524, Address: 0x13d030, Func Offset: 0
	// Func End, Address: 0x13d038, Func Offset: 0x8
}

// zEntPickup_ShinySparklyInit__FP8RpAtomic
// Start address: 0x13d040
void zEntPickup_ShinySparklyInit(RpAtomic* data)
{
	// Line 512, Address: 0x13d040, Func Offset: 0
	// Line 513, Address: 0x13d044, Func Offset: 0x4
	// Line 512, Address: 0x13d048, Func Offset: 0x8
	// Line 513, Address: 0x13d050, Func Offset: 0x10
	// Line 517, Address: 0x13d064, Func Offset: 0x24
	// Line 519, Address: 0x13d06c, Func Offset: 0x2c
	// Func End, Address: 0x13d07c, Func Offset: 0x3c
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
	int8 name[512];
	int32 j;
	// Line 320, Address: 0x13d080, Func Offset: 0
	// Line 322, Address: 0x13d084, Func Offset: 0x4
	// Line 320, Address: 0x13d088, Func Offset: 0x8
	// Line 322, Address: 0x13d08c, Func Offset: 0xc
	// Line 320, Address: 0x13d090, Func Offset: 0x10
	// Line 322, Address: 0x13d0b0, Func Offset: 0x30
	// Line 324, Address: 0x13d0b8, Func Offset: 0x38
	// Line 325, Address: 0x13d0c4, Func Offset: 0x44
	// Line 327, Address: 0x13d0d8, Func Offset: 0x58
	// Line 340, Address: 0x13d0e0, Func Offset: 0x60
	// Line 330, Address: 0x13d0e4, Func Offset: 0x64
	// Line 340, Address: 0x13d0e8, Func Offset: 0x68
	// Line 341, Address: 0x13d0f8, Func Offset: 0x78
	// Line 340, Address: 0x13d0fc, Func Offset: 0x7c
	// Line 341, Address: 0x13d108, Func Offset: 0x88
	// Line 342, Address: 0x13d114, Func Offset: 0x94
	// Line 344, Address: 0x13d11c, Func Offset: 0x9c
	// Line 347, Address: 0x13d138, Func Offset: 0xb8
	// Line 348, Address: 0x13d13c, Func Offset: 0xbc
	// Line 350, Address: 0x13d140, Func Offset: 0xc0
	// Line 349, Address: 0x13d148, Func Offset: 0xc8
	// Line 350, Address: 0x13d14c, Func Offset: 0xcc
	// Line 353, Address: 0x13d150, Func Offset: 0xd0
	// Line 351, Address: 0x13d154, Func Offset: 0xd4
	// Line 353, Address: 0x13d158, Func Offset: 0xd8
	// Line 352, Address: 0x13d15c, Func Offset: 0xdc
	// Line 360, Address: 0x13d160, Func Offset: 0xe0
	// Line 353, Address: 0x13d164, Func Offset: 0xe4
	// Line 368, Address: 0x13d168, Func Offset: 0xe8
	// Line 354, Address: 0x13d16c, Func Offset: 0xec
	// Line 355, Address: 0x13d170, Func Offset: 0xf0
	// Line 356, Address: 0x13d174, Func Offset: 0xf4
	// Line 357, Address: 0x13d178, Func Offset: 0xf8
	// Line 358, Address: 0x13d17c, Func Offset: 0xfc
	// Line 359, Address: 0x13d180, Func Offset: 0x100
	// Line 360, Address: 0x13d184, Func Offset: 0x104
	// Line 368, Address: 0x13d18c, Func Offset: 0x10c
	// Line 369, Address: 0x13d1a8, Func Offset: 0x128
	// Line 370, Address: 0x13d1b4, Func Offset: 0x134
	// Line 371, Address: 0x13d1bc, Func Offset: 0x13c
	// Line 372, Address: 0x13d1c4, Func Offset: 0x144
	// Line 389, Address: 0x13d1e0, Func Offset: 0x160
	// Line 391, Address: 0x13d1f0, Func Offset: 0x170
	// Line 392, Address: 0x13d1f8, Func Offset: 0x178
	// Line 393, Address: 0x13d1fc, Func Offset: 0x17c
	// Line 392, Address: 0x13d200, Func Offset: 0x180
	// Line 393, Address: 0x13d204, Func Offset: 0x184
	// Line 394, Address: 0x13d214, Func Offset: 0x194
	// Line 393, Address: 0x13d218, Func Offset: 0x198
	// Line 396, Address: 0x13d21c, Func Offset: 0x19c
	// Line 397, Address: 0x13d224, Func Offset: 0x1a4
	// Line 402, Address: 0x13d230, Func Offset: 0x1b0
	// Line 410, Address: 0x13d24c, Func Offset: 0x1cc
	// Line 415, Address: 0x13d250, Func Offset: 0x1d0
	// Line 424, Address: 0x13d26c, Func Offset: 0x1ec
	// Line 416, Address: 0x13d270, Func Offset: 0x1f0
	// Line 422, Address: 0x13d274, Func Offset: 0x1f4
	// Line 416, Address: 0x13d278, Func Offset: 0x1f8
	// Line 419, Address: 0x13d284, Func Offset: 0x204
	// Line 422, Address: 0x13d290, Func Offset: 0x210
	// Line 424, Address: 0x13d294, Func Offset: 0x214
	// Line 426, Address: 0x13d2a0, Func Offset: 0x220
	// Line 429, Address: 0x13d2a4, Func Offset: 0x224
	// Line 426, Address: 0x13d2a8, Func Offset: 0x228
	// Line 429, Address: 0x13d2b4, Func Offset: 0x234
	// Line 430, Address: 0x13d2b8, Func Offset: 0x238
	// Line 434, Address: 0x13d2bc, Func Offset: 0x23c
	// Line 435, Address: 0x13d2c0, Func Offset: 0x240
	// Line 436, Address: 0x13d2d0, Func Offset: 0x250
	// Line 437, Address: 0x13d2e0, Func Offset: 0x260
	// Line 438, Address: 0x13d2f0, Func Offset: 0x270
	// Line 440, Address: 0x13d300, Func Offset: 0x280
	// Line 441, Address: 0x13d304, Func Offset: 0x284
	// Line 446, Address: 0x13d308, Func Offset: 0x288
	// Line 442, Address: 0x13d30c, Func Offset: 0x28c
	// Line 450, Address: 0x13d310, Func Offset: 0x290
	// Line 443, Address: 0x13d314, Func Offset: 0x294
	// Line 444, Address: 0x13d318, Func Offset: 0x298
	// Line 445, Address: 0x13d31c, Func Offset: 0x29c
	// Line 446, Address: 0x13d320, Func Offset: 0x2a0
	// Line 450, Address: 0x13d324, Func Offset: 0x2a4
	// Line 451, Address: 0x13d32c, Func Offset: 0x2ac
	// Line 452, Address: 0x13d330, Func Offset: 0x2b0
	// Line 451, Address: 0x13d334, Func Offset: 0x2b4
	// Line 457, Address: 0x13d338, Func Offset: 0x2b8
	// Line 452, Address: 0x13d33c, Func Offset: 0x2bc
	// Line 457, Address: 0x13d340, Func Offset: 0x2c0
	// Line 452, Address: 0x13d344, Func Offset: 0x2c4
	// Line 453, Address: 0x13d348, Func Offset: 0x2c8
	// Line 457, Address: 0x13d37c, Func Offset: 0x2fc
	// Line 463, Address: 0x13d384, Func Offset: 0x304
	// Line 464, Address: 0x13d394, Func Offset: 0x314
	// Line 469, Address: 0x13d3a0, Func Offset: 0x320
	// Line 464, Address: 0x13d3a4, Func Offset: 0x324
	// Line 469, Address: 0x13d3a8, Func Offset: 0x328
	// Line 470, Address: 0x13d3ac, Func Offset: 0x32c
	// Line 471, Address: 0x13d3b4, Func Offset: 0x334
	// Line 472, Address: 0x13d3d4, Func Offset: 0x354
	// Line 476, Address: 0x13d3e8, Func Offset: 0x368
	// Line 477, Address: 0x13d3f0, Func Offset: 0x370
	// Line 478, Address: 0x13d3f8, Func Offset: 0x378
	// Line 480, Address: 0x13d3fc, Func Offset: 0x37c
	// Line 483, Address: 0x13d40c, Func Offset: 0x38c
	// Line 487, Address: 0x13d420, Func Offset: 0x3a0
	// Line 486, Address: 0x13d424, Func Offset: 0x3a4
	// Line 487, Address: 0x13d428, Func Offset: 0x3a8
	// Line 491, Address: 0x13d438, Func Offset: 0x3b8
	// Line 493, Address: 0x13d440, Func Offset: 0x3c0
	// Line 494, Address: 0x13d460, Func Offset: 0x3e0
	// Line 497, Address: 0x13d474, Func Offset: 0x3f4
	// Line 496, Address: 0x13d478, Func Offset: 0x3f8
	// Line 499, Address: 0x13d47c, Func Offset: 0x3fc
	// Line 496, Address: 0x13d480, Func Offset: 0x400
	// Line 497, Address: 0x13d484, Func Offset: 0x404
	// Line 498, Address: 0x13d488, Func Offset: 0x408
	// Line 500, Address: 0x13d490, Func Offset: 0x410
	// Line 502, Address: 0x13d498, Func Offset: 0x418
	// Line 503, Address: 0x13d4a8, Func Offset: 0x428
	// Line 505, Address: 0x13d4b0, Func Offset: 0x430
	// Line 507, Address: 0x13d4c0, Func Offset: 0x440
	// Func End, Address: 0x13d4e8, Func Offset: 0x468
}

// zEntPickupInit__FPvPv
// Start address: 0x13d4f0
void zEntPickupInit(void* ent, void* asset)
{
	// Line 316, Address: 0x13d4f0, Func Offset: 0
	// Func End, Address: 0x13d4f8, Func Offset: 0x8
}

// zEntPickup_Startup__Fv
// Start address: 0x13d500
void zEntPickup_Startup()
{
	RwFrame* frame;
	RwRGBAReal black;
	RwRGBAReal white;
	// Line 282, Address: 0x13d500, Func Offset: 0
	// Line 284, Address: 0x13d508, Func Offset: 0x8
	// Line 287, Address: 0x13d514, Func Offset: 0x14
	// Line 288, Address: 0x13d520, Func Offset: 0x20
	// Line 289, Address: 0x13d530, Func Offset: 0x30
	// Line 290, Address: 0x13d538, Func Offset: 0x38
	// Line 291, Address: 0x13d544, Func Offset: 0x44
	// Line 292, Address: 0x13d550, Func Offset: 0x50
	// Line 300, Address: 0x13d560, Func Offset: 0x60
	// Line 298, Address: 0x13d564, Func Offset: 0x64
	// Line 300, Address: 0x13d568, Func Offset: 0x68
	// Line 309, Address: 0x13d56c, Func Offset: 0x6c
	// Line 298, Address: 0x13d570, Func Offset: 0x70
	// Line 301, Address: 0x13d57c, Func Offset: 0x7c
	// Line 302, Address: 0x13d580, Func Offset: 0x80
	// Line 303, Address: 0x13d58c, Func Offset: 0x8c
	// Line 302, Address: 0x13d590, Func Offset: 0x90
	// Line 309, Address: 0x13d594, Func Offset: 0x94
	// Line 301, Address: 0x13d598, Func Offset: 0x98
	// Line 309, Address: 0x13d59c, Func Offset: 0x9c
	// Line 301, Address: 0x13d5a0, Func Offset: 0xa0
	// Line 303, Address: 0x13d5a4, Func Offset: 0xa4
	// Line 304, Address: 0x13d5b0, Func Offset: 0xb0
	// Line 305, Address: 0x13d5e8, Func Offset: 0xe8
	// Line 306, Address: 0x13d5f4, Func Offset: 0xf4
	// Line 305, Address: 0x13d5f8, Func Offset: 0xf8
	// Line 306, Address: 0x13d5fc, Func Offset: 0xfc
	// Line 307, Address: 0x13d604, Func Offset: 0x104
	// Line 308, Address: 0x13d63c, Func Offset: 0x13c
	// Line 309, Address: 0x13d648, Func Offset: 0x148
	// Line 308, Address: 0x13d64c, Func Offset: 0x14c
	// Line 309, Address: 0x13d650, Func Offset: 0x150
	// Line 310, Address: 0x13d65c, Func Offset: 0x15c
	// Line 312, Address: 0x13d660, Func Offset: 0x160
	// Func End, Address: 0x13d66c, Func Offset: 0x16c
}

// PickupFallPhysics__FP10zEntPickupP6xScenef
// Start address: 0x13d670
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float32 dt)
{
	// Line 222, Address: 0x13d670, Func Offset: 0
	// Line 225, Address: 0x13d674, Func Offset: 0x4
	// Line 222, Address: 0x13d678, Func Offset: 0x8
	// Line 225, Address: 0x13d67c, Func Offset: 0xc
	// Line 222, Address: 0x13d680, Func Offset: 0x10
	// Line 224, Address: 0x13d684, Func Offset: 0x14
	// Line 225, Address: 0x13d68c, Func Offset: 0x1c
	// Line 224, Address: 0x13d690, Func Offset: 0x20
	// Line 233, Address: 0x13d698, Func Offset: 0x28
	// Line 224, Address: 0x13d69c, Func Offset: 0x2c
	// Line 226, Address: 0x13d6a0, Func Offset: 0x30
	// Line 224, Address: 0x13d6b0, Func Offset: 0x40
	// Line 233, Address: 0x13d6bc, Func Offset: 0x4c
	// Line 224, Address: 0x13d6c0, Func Offset: 0x50
	// Line 226, Address: 0x13d6cc, Func Offset: 0x5c
	// Line 228, Address: 0x13d6dc, Func Offset: 0x6c
	// Line 224, Address: 0x13d6e4, Func Offset: 0x74
	// Line 232, Address: 0x13d6e8, Func Offset: 0x78
	// Line 224, Address: 0x13d6ec, Func Offset: 0x7c
	// Line 232, Address: 0x13d6f4, Func Offset: 0x84
	// Line 224, Address: 0x13d700, Func Offset: 0x90
	// Line 225, Address: 0x13d760, Func Offset: 0xf0
	// Line 224, Address: 0x13d764, Func Offset: 0xf4
	// Line 225, Address: 0x13d778, Func Offset: 0x108
	// Line 224, Address: 0x13d77c, Func Offset: 0x10c
	// Line 225, Address: 0x13d788, Func Offset: 0x118
	// Line 226, Address: 0x13d794, Func Offset: 0x124
	// Line 228, Address: 0x13d810, Func Offset: 0x1a0
	// Line 226, Address: 0x13d814, Func Offset: 0x1a4
	// Line 228, Address: 0x13d828, Func Offset: 0x1b8
	// Line 229, Address: 0x13d82c, Func Offset: 0x1bc
	// Line 226, Address: 0x13d834, Func Offset: 0x1c4
	// Line 232, Address: 0x13d844, Func Offset: 0x1d4
	// Line 233, Address: 0x13d84c, Func Offset: 0x1dc
	// Line 234, Address: 0x13d858, Func Offset: 0x1e8
	// Line 236, Address: 0x13d860, Func Offset: 0x1f0
	// Line 237, Address: 0x13d86c, Func Offset: 0x1fc
	// Line 236, Address: 0x13d874, Func Offset: 0x204
	// Line 238, Address: 0x13d878, Func Offset: 0x208
	// Line 236, Address: 0x13d880, Func Offset: 0x210
	// Line 237, Address: 0x13d88c, Func Offset: 0x21c
	// Line 238, Address: 0x13d8a0, Func Offset: 0x230
	// Line 241, Address: 0x13d8b4, Func Offset: 0x244
	// Line 244, Address: 0x13d8e0, Func Offset: 0x270
	// Line 246, Address: 0x13d8e8, Func Offset: 0x278
	// Line 244, Address: 0x13d8ec, Func Offset: 0x27c
	// Line 245, Address: 0x13d8f0, Func Offset: 0x280
	// Line 246, Address: 0x13d8f8, Func Offset: 0x288
	// Line 247, Address: 0x13d900, Func Offset: 0x290
	// Line 248, Address: 0x13d904, Func Offset: 0x294
	// Line 252, Address: 0x13d908, Func Offset: 0x298
	// Line 253, Address: 0x13d918, Func Offset: 0x2a8
	// Line 252, Address: 0x13d91c, Func Offset: 0x2ac
	// Line 253, Address: 0x13d920, Func Offset: 0x2b0
	// Line 252, Address: 0x13d93c, Func Offset: 0x2cc
	// Line 253, Address: 0x13d948, Func Offset: 0x2d8
	// Line 256, Address: 0x13d9e0, Func Offset: 0x370
	// Line 258, Address: 0x13da0c, Func Offset: 0x39c
	// Line 261, Address: 0x13da10, Func Offset: 0x3a0
	// Line 259, Address: 0x13da14, Func Offset: 0x3a4
	// Line 260, Address: 0x13da18, Func Offset: 0x3a8
	// Line 261, Address: 0x13da1c, Func Offset: 0x3ac
	// Line 262, Address: 0x13da28, Func Offset: 0x3b8
	// Line 263, Address: 0x13da34, Func Offset: 0x3c4
	// Line 264, Address: 0x13da38, Func Offset: 0x3c8
	// Func End, Address: 0x13da48, Func Offset: 0x3d8
}

