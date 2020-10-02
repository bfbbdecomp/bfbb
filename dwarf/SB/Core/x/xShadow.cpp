typedef struct xGroup;
typedef struct RwCamera;
typedef struct xAnimTransition;
typedef struct RwRaster;
typedef struct tagiRenderInput;
typedef struct xEntMotionPenData;
typedef struct xShadowMgr;
typedef struct RpAtomic;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct xModelPool;
typedef struct xShadowCache;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct ShadowCacheContext;
typedef struct xEnt;
typedef struct zScene;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct zCheckPoint;
typedef struct xJSPHeader;
typedef struct xVec3;
typedef struct RxObjSpace3DVertex;
typedef struct xPlatformAsset;
typedef struct zPlayerGlobals;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpGeometry;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct zJumpParam;
typedef struct xEntMPData;
typedef struct tri_data_0;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct RwFrame;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xNPCBasic;
typedef struct xEntMotionAsset;
typedef struct zEntHangable;
typedef struct RpTriangle;
typedef struct xMovePoint;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct xCollis;
typedef struct RxPipeline;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct zEnt;
typedef struct RpV3dGradient;
typedef struct RpMaterialList;
typedef struct RpPolygon;
typedef struct RpCollisionTriangle;
typedef struct xJSPNodeInfo;
typedef struct xSurface;
typedef struct xSpline3;
typedef struct zPlatform;
typedef struct xAnimEffect;
typedef struct xEnvAsset;
typedef struct xUpdateCullEnt;
typedef struct RpIntersection;
typedef struct xEntMotionERData;
typedef struct xScene;
typedef struct xGridBound;
typedef struct xVec4;
typedef struct RwMatrixTag;
typedef struct xRay3;
typedef struct RpVertexNormal;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct xQCData;
typedef struct zCutsceneMgr;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zPlatFMRunTime;
typedef struct rxReq;
typedef struct RwV4dTag;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct zAssetPickupTable;
typedef struct RpMeshHeader;
typedef enum RxClusterValidityReq;
typedef struct xLinkAsset;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct ShadowCBParam;
typedef struct iFogParams;
typedef struct xCoef;
typedef struct _tagxRumble;
typedef struct xBound;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct xShadowSimplePoly;
typedef struct xEntBoulder;
typedef struct xFactoryInst;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xEntMotionOrbitData;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBaseAsset;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xCoef3;
typedef enum _tagPadState;
typedef struct xSphere;
typedef struct xAnimFile;
typedef struct _ProjectionParam;
typedef struct xShadowSimpleCache;
typedef enum RwCameraProjection;
typedef struct xMovePointAsset;
typedef struct xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct xGlobals;
typedef struct xCylinder;
typedef struct xAnimTransitionList;
typedef union RxColorUnion;
typedef struct xModelTag;
typedef struct _tagxPad;
typedef struct xBox;
typedef struct RwV2d;
typedef enum RpIntersectType;
typedef struct RxClusterDefinition;
typedef struct zLasso;
typedef struct xShadowPoly;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct RwSphere;
typedef struct xGroupAsset;
typedef struct _tagiPad;
typedef struct RwTexDictionary;
typedef struct xVec2;
typedef struct xFFX;
typedef struct RxOutputSpec;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xGrid;
typedef struct xBBox;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwObject;
typedef struct xEntShadow;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLLLink;
typedef union RpIntersectData;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct xClumpCollBSPTriangle;
typedef struct RwLine;
typedef struct RxNodeMethods;
typedef struct RyzMemData;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct xPortalAsset;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xEntMotionMechData;
typedef struct _zPortal;
typedef struct zGlobals;
typedef struct RwPlane;
typedef struct xEntPenData;
typedef struct zGlobalSettings;
typedef struct RxCluster;
typedef struct xQCControl;
typedef struct RxPipelineNodeParam;
typedef struct zPlayerLassoInfo;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef union _class_0;
typedef struct RxPacket;
typedef struct xEntOrbitData;
typedef struct zLedgeGrabParams;
typedef enum RwFogType;
typedef struct _class_1;
typedef struct tri_data_1;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEntDrive;
typedef enum _zPlayerWallJumpState;
typedef struct xEntMotion;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RpSkin;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef enum RwBlendFunction;
typedef struct xEntSplineData;
typedef struct analog_data;
typedef struct _class_2;

typedef int32(*type_6)(xEnt*, void*);
typedef void(*type_9)(xModelInstance*);
typedef void(*type_11)(xEnt*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_21)(xEnt*);
typedef int32(*type_23)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef int32(*type_27)(RxPipelineNode*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef void(*type_29)(RxPipelineNode*);
typedef int32(*type_30)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_32)(RxPipelineNode*, RxPipeline*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_37)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef uint32(*type_39)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_45)(uint32);
typedef void(*type_47)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_49)(void*);
typedef int8*(*type_52)(xBase*);
typedef int8*(*type_54)(uint32);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, float32);
typedef int32(*type_65)(void*, void*);
typedef void(*type_66)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_69)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_72)(xEnt*);
typedef uint32(*type_73)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_74)(void*);
typedef uint32(*type_77)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_81)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_90)(void*);
typedef RpWorldSector*(*type_95)(RpWorldSector*);
typedef RwCamera*(*type_96)(RwCamera*);
typedef RwCamera*(*type_99)(RwCamera*);
typedef uint32(*type_100)(void*, void*);
typedef void(*type_104)(xMemPool*, void*);
typedef void(*type_110)(void*);
typedef void(*type_111)(RwResEntry*);
typedef int32(*type_116)(int32, int32, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef float32 type_1[2];
typedef uint16 type_2[3];
typedef uint32 type_3[15];
typedef float32 type_4[5];
typedef uint8 type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef uint8 type_8[2];
typedef uint32 type_10[72];
typedef int8 type_12[16];
typedef uint32 type_13[15];
typedef RwFrustumPlane type_14[6];
typedef int8 type_15[4];
typedef xBase* type_18[72];
typedef analog_data type_20[2];
typedef RwV3d type_22[8];
typedef xShadowCache type_24[6];
typedef RxObjSpace3DVertex type_26[36];
typedef float32 type_31[5];
typedef RwTexCoords* type_33[8];
typedef xEnt* type_38[16];
typedef xVec4 type_40[12];
typedef uint8 type_41[2];
typedef xVec3 type_42[6];
typedef xShadowPoly type_43[256];
typedef uint32 type_44[2];
typedef uint8 type_46[2];
typedef float32 type_48[6];
typedef float32 type_50[4];
typedef xVec3 type_51[3];
typedef float32 type_53[3];
typedef float32 type_55[3];
typedef uint16 type_56[3];
typedef xModelTag type_57[2];
typedef float32 type_58[3];
typedef RpLight* type_60[2];
typedef RwFrame* type_62[2];
typedef uint8 type_63[3];
typedef float32 type_64[16];
typedef xEnt* type_68[111];
typedef RwV3d type_70[3];
typedef RwV2d type_71[2];
typedef xEnt* type_75[16];
typedef uint8 type_76[2];
typedef int8 type_78[128];
typedef uint32 type_79[4];
typedef type_78 type_80[6];
typedef uint8 type_82[14];
typedef xModelTag type_83[4];
typedef int8 type_84[32];
typedef RwTexCoords* type_85[8];
typedef xVec3 type_86[4];
typedef xVec3 type_87[3];
typedef xModelInstance* type_88[14];
typedef float32 type_89[4];
typedef uint32 type_91[4096];
typedef uint32 type_92[4];
typedef type_92 type_93[6];
typedef uint8 type_94[4];
typedef uint32 type_97[11];
typedef xRay3 type_98[1];
typedef uint8 type_101[22];
typedef xCollis type_102[1];
typedef xEnt* type_103[5];
typedef uint8 type_105[22];
typedef xCollis type_106[18];
typedef xCollis type_107[1];
typedef int8 type_108[32];
typedef int8 type_109[32];
typedef float32 type_112[2];
typedef type_112 type_113[3];
typedef int8* type_114[11];
typedef xVec3 type_115[5];
typedef uint8 type_117[5];
typedef float32 type_118[12];
typedef xVec3 type_119[60];
typedef RxCluster type_120[1];
typedef float32 type_121[12];
typedef float32 type_122[2];
typedef float32 type_123[12];
typedef float32 type_125[22];
typedef float32 type_126[12];
typedef uint8 type_127[3];
typedef <unknown type (0xa510)> type_128[4];
typedef RwV3d* type_129[3];
typedef float32 type_130[22];
typedef RwSky2DVertex type_131[4];
typedef float32 type_132[12];
typedef xVec3 type_133[8];
typedef float32 type_134[12];
typedef int32 type_135[6];
typedef float32 type_136[4];
typedef uint8 type_137[3];
typedef int8 type_138[16];
typedef uint32 type_139[15];

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_96 beginUpdate;
	type_99 endUpdate;
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
	type_14 frustumPlanes;
	RwBBox frustumBoundBox;
	type_22 frustumCorners;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_73 Conditional;
	type_73 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_8 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct xShadowMgr
{
	xEnt* ent;
	xShadowCache* cache;
	int32 priority;
	int32 cacheReady;
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
	type_59 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_34 BeforeEnter;
	type_17 StateCallback;
	type_47 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xShadowCache
{
	xVec3 pos;
	float32 radius;
	uint32 entCount;
	uint32 polyCount;
	type_31 polyRayDepth;
	uint16 castOnEnt;
	uint16 castOnPoly;
	type_38 ent;
	type_43 poly;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_30 eventFunc;
};

struct ShadowCacheContext
{
	xShadowCache* cache;
	float32 minNormY;
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
	type_61 update;
	type_61 endUpdate;
	type_67 bupdate;
	type_69 move;
	type_72 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_81 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_10 baseCount;
	type_18 baseList;
	_zEnv* zen;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xJSPHeader
{
	type_15 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct xPlatformAsset
{
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
	type_139 Inv_PatsSock;
	type_3 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_13 Inv_LevelPickups;
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
	type_44 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_68 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_82 sb_model_indices;
	type_88 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
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
	type_85 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_79 pad;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_33 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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
	type_40 frustplane;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_11 f_setup;
	type_21 f_reset;
	union
	{
		int32 flg_basenpc;
		int32 inUpdate;
		int32 flg_upward;
	};
	int32 colFreq;
	int32 colFreqReset;
	union
	{
		uint32 flg_colCheck;
		uint32 flg_penCheck;
		uint32 flg_unused;
	};
	int32 myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
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

struct zEntHangable
{
};

struct RpTriangle
{
	type_56 vertIndex;
	int16 matIndex;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_76 pad;
	float32 delay;
	xSpline3* spl;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_48 MoveSpeed;
	type_53 AnimSneak;
	type_55 AnimWalk;
	type_58 AnimRun;
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
	type_94 talk_filter;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_47 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpV3dGradient
{
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpPolygon
{
	uint16 matIndex;
	type_2 vertIndex;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	type_129 vertices;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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
	type_63 pad;
	void* moprops;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_39 Callback;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_100 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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
	type_45 resolvID;
	type_52 base2Name;
	type_54 id2Name;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zCutsceneMgr
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_118 tmrs;
	type_121 ttms;
	type_123 atms;
	type_126 dtms;
	type_132 vms;
	type_134 dss;
};

struct rxReq
{
};

struct RwV4dTag
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct zAssetPickupTable
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_136 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_104 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_111 destroyNotify;
};

struct ShadowCBParam
{
	xShadowCache* cache;
	RpIntersection* isx;
	xVec3 capsuleStart;
	xVec3 capsuleEnd;
	float32 capsuleRadius;
	xEnt* ent;
	RwLine localLine;
	RwV3d localDelta;
	float32 localRadius;
	RwMatrixTag* modelMat;
	RpGeometry* geom;
	uint32 polyFound;
	type_103 rayCloser;
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

struct xCoef
{
	type_50 a;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_127 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_60 light;
	type_62 light_frame;
	int32 memlvl;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct xEntBoulder
{
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_95 renderCallBack;
	RxPipeline* pipeline;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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
	type_64 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xSphere
{
	xVec3 center;
	float32 r;
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
	type_5 NumAnims;
	void** RawData;
};

struct _ProjectionParam
{
	RwV3d at;
	RwMatrixTag invMatrix;
	uint8 shadowValue;
	int32 fade;
	uint32 numIm3DBatch;
	uint32 shadowWord;
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
	type_86 corner;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_106 colls;
	type_66 post;
	type_77 depenq;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_80 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_84 sceneStart;
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_89 wt;
};

struct _tagxPad
{
	type_101 value;
	type_105 last_value;
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
	type_125 up_tmr;
	type_130 down_tmr;
	type_20 analog;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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
	type_115 lastRefs;
	type_117 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xShadowPoly
{
	type_0 vert;
	xVec3 norm;
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

struct xEntMotionSplineData
{
	int32 unknown;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagiPad
{
	int32 port;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xFFX
{
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_108 name;
	type_109 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct xGrid
{
	uint8 ingrid_id;
	type_137 pad;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_1 radius;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct anim_coll_data
{
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RxNodeMethods
{
	type_19 nodeBody;
	type_23 nodeInit;
	type_25 nodeTerm;
	type_27 pipelineNodeInit;
	type_29 pipelineNodeTerm;
	type_32 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct RyzMemData
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
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
	type_41 PowerUp;
	type_46 InitialPowerUp;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_120 clusters;
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

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_119 tranTable;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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
	type_124 sync;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_128 qWords;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RpSkin
{
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

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntSplineData
{
	int32 unknown;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
};

type_138 buffer;
type_12 buffer;
RpLight* ShadowLight;
RwRGBAReal ShadowLightColor;
type_114 sCacheBlendLabels;
type_97 sCacheBlendValues;
uint32 sCacheNumBlendModes;
float32 SHADOW_BF_DOT;
float32 SHADOW_BOTH;
RxObjSpace3DVertex* Im3DBuffer;
uint32 Im3DBufferPos;
float32 ShadowThreshold;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
RwRaster* ShadowRenderRaster;
type_71 ShadowPreviewVerts;
float32 ShadowStrength;
uint32 gShadowFlags;
float32 gShadowObjectRadius;
uint32 shadow_ent_count;
type_75 shadow_ent_list;
int32 sShadowCollJSP;
RwMatrixTag sm_matrix;
float32 rscale;
RwV3d gCamPos;
uint32 skyOldTest;
type_93 shadvolquad_idx;
xEnt* sEntSelf;
xShadowMgr* sMgrList;
int32 sMgrCount;
int32 sMgrTotal;
type_24 sCacheList;
RxPipeline* adlSkinPipe;
RxPipeline* a4dSkinPipe;
RxPipeline* adlSkinPipeADC;
RxPipeline* a4dSkinPipeADC;
xVec3 g_NY3;
uint8 xClumpColl_FilterFlags;
type_9 xModelRender;
type_65 CmpShadowMgr;
zGlobals globals;
uint32 gActiveHeap;
tagiRenderInput gRenderBuffer;
type_6 shadowCacheEntityCB;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
type_36 shadowCacheEnvCB;
type_116 shadowCacheLeafCB;
int32 _rpCollisionGeometryDataOffset;
type_91 ourGlobals;
type_35 ShadowRenderTriangleCB;
int32 iModelHack_DisablePrelight;
type_110 modelRenderCB;
type_37 xRayHitsEnt;

void xShadow_PickEntForNPC(xShadowMgr* mgr);
void xShadow_PickByRayCast(xShadowMgr* mgr);
void xShadowManager_Render();
int32 CmpShadowMgr(void* a, void* b);
void xShadowManager_Remove(xEnt* ent);
void xShadowManager_Add(xEnt* ent);
void xShadowManager_Reset();
void xShadowManager_Init(int32 numEnts);
void xShadowVertical_DrawCache(xShadowCache* cache, float32 shadowFactor, float32 fadeDist, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float32 r, float32 depth, float32 minNormY);
int32 shadowCacheEntityCB(xEnt* ent, void* cbdata);
int32 shadowCacheLeafCB(int32 numTriangles, int32 triOffset, void* data);
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data);
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float32 depth);
void DrawAlphaBox(xVec3* volume, int32 frontface, uint8 alpha);
uint8 ShadowInsideBoxAdjust(xVec3* volume);
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float32 radius);
int32 ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, float32 shadowFactor, float32 fadeDist);
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data);
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, type_74 renderCB);
void ShadowCameraDestroy(RwCamera* shadowCamera);
int32 Im2DRenderQuad(float32 x1, float32 y1, float32 x2, float32 y2, float32 z, float32 recipCamZ, float32 uvOffset);
void xShadow_ListAdd(xEnt* ent);
void xShadowRender(xEnt* ent, float32 max_dist);
void xShadowReceiveShadow(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowReceiveShadowFastPS2(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
uint32 xShadowReceiveShadowSetup(xEnt* ent);
void modelRenderCB(void* model);
void xShadowRenderWorld(xVec3* center, float32 radius, float32 max_dist);
void xShadowCameraUpdate(void* model, type_90 renderCB, xVec3* center, float32 radius, int32 shadowMode);
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec);
void xShadowSetWorld(RpWorld* world);
int32 SetupShadow();
void xShadowInit();

// xShadow_PickEntForNPC__FP10xShadowMgr
// Start address: 0x2040a0
void xShadow_PickEntForNPC(xShadowMgr* mgr)
{
}

// xShadow_PickByRayCast__FP10xShadowMgr
// Start address: 0x204100
void xShadow_PickByRayCast(xShadowMgr* mgr)
{
	xEnt* ent_best;
	int32 idx_best;
	xCollis colrec;
	xRay3 ray;
	int32 num;
	int32 i;
	xEnt* ep;
}

// xShadowManager_Render__Fv
// Start address: 0x2042a0
void xShadowManager_Render()
{
	int32 i;
	type_135 cacheUsed;
	uint32 j;
	uint8 old_xClumpColl_FilterFlags;
	int32 bestIndex;
	int32 foundPriority;
	xVec3 center;
	float32 radius;
	xShadowMgr* mgr_best;
	float32 dst_depth;
	xEnt* ep;
	xEnt* ent;
	int32 shadowOutside;
	xVec3 shadVec;
	xVec3 center;
	float32 radius;
	RpAtomic* old_model;
	xModelInstance* old_mnext;
	xEnt* ep;
	xShadowMgr* mgr;
	xNPCBasic* npc_base;
	int32 num;
	int32 a;
	xEnt* ep;
	float32 rad;
	xVec3* lower;
	xVec3* upper;
}

// CmpShadowMgr__FPCvPCv
// Start address: 0x204cf0
int32 CmpShadowMgr(void* a, void* b)
{
	xEnt* entA;
	xEnt* entB;
	int32 isPlayerA;
	int32 isPlayerB;
	float32 distA;
	float32 distB;
	xVec3* campos;
	float32 dx__;
	float32 dy__;
	float32 dz__;
	float32 dx__;
	float32 dy__;
	float32 dz__;
}

// xShadowManager_Remove__FP4xEnt
// Start address: 0x204e20
void xShadowManager_Remove(xEnt* ent)
{
	int32 i;
}

// xShadowManager_Add__FP4xEnt
// Start address: 0x204ee0
void xShadowManager_Add(xEnt* ent)
{
	int32 i;
}

// xShadowManager_Reset__Fv
// Start address: 0x204f90
void xShadowManager_Reset()
{
}

// xShadowManager_Init__Fi
// Start address: 0x204fa0
void xShadowManager_Init(int32 numEnts)
{
}

// xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster
// Start address: 0x205020
void xShadowVertical_DrawCache(xShadowCache* cache, float32 shadowFactor, float32 fadeDist, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
	uint32 i;
	RpCollisionTriangle tri;
}

// xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff
// Start address: 0x205430
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float32 r, float32 depth, float32 minNormY)
{
	int32 i;
	int32 j;
	xEnv* env;
	RpIntersection isx;
	ShadowCacheContext context;
	type_4 sortRayDepth;
	float32 objMaxDepth;
	xQCData qcd;
	ShadowCBParam cbparam;
}

// shadowCacheEntityCB__FP4xEntPv
// Start address: 0x205720
int32 shadowCacheEntityCB(xEnt* ent, void* cbdata)
{
	ShadowCBParam* cbparam;
	xCollis coll;
	RwMatrixTag inverseLTM;
	RpV3dGradient grad;
}

// shadowCacheLeafCB__FiiPv
// Start address: 0x205b10
int32 shadowCacheLeafCB(int32 numTriangles, int32 triOffset, void* data)
{
	ShadowCBParam* cbparam;
	xShadowCache* cache;
	RpGeometry* geometry;
	RwV3d* vertices;
	RpTriangle* triangles;
	int32 triSlot;
	uint16* triIndex;
	int32 i;
	RpTriangle* tri;
	int32 vertIndex0;
	int32 vertIndex1;
	int32 vertIndex2;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	type_87 worldV;
	float32 posX;
	float32 posZ;
	float32 nx;
	float32 nz;
	float32 nmag2;
	float32 pdot;
	xVec3* vert0;
	xVec3* vert1;
	float32 dotA;
	float32 dotB;
	xVec3* vert0;
	xVec3* vert1;
	xVec3* vert2;
	xVec3 aa;
	xVec3 bb;
	xVec3 trinorm;
	float32 depthtest;
	float32 dydx;
	float32 dydz;
	float32 depth0;
	float32 n0x;
	float32 n0z;
	float32 n0d;
	float32 n1x;
	float32 n1z;
	float32 n1d;
	float32 n2x;
	float32 n2z;
	float32 n2d;
	float32 denom;
}

// shadowCacheEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x206370
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data)
{
	ShadowCacheContext* context;
	xShadowCache* cache;
	xShadowPoly* poly;
	float32 dydx;
	float32 dydz;
	float32 depth0;
	float32 n0x;
	float32 n0z;
	float32 n0d;
	float32 n1x;
	float32 n1z;
	float32 n1d;
	float32 n2x;
	float32 n2z;
	float32 n2d;
}

// xShadowSetVolume__FP8RwCameraP5xVec3f
// Start address: 0x206770
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float32 depth)
{
	int32 i;
	type_133 volume;
	float32 invNearFar;
	float32 lerp;
	RwMatrixTag* camMatrix;
	int32 cullstate;
	int32 ztest;
	int32 zwrite;
	int32 srcblend;
	int32 destblend;
}

// DrawAlphaBox__FP5xVec3iUc
// Start address: 0x206a50
void DrawAlphaBox(xVec3* volume, int32 frontface, uint8 alpha)
{
	uint32 i;
	uint32 numV;
	type_26 boxV;
	RxObjSpace3DVertex* v3d;
	RwMatrixTag* mainMatrix;
	xVec3 normal;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// ShadowInsideBoxAdjust__FP5xVec3
// Start address: 0x206d90
uint8 ShadowInsideBoxAdjust(xVec3* volume)
{
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	type_42 normal;
	uint32 i;
	RwCamera* mainCamera;
	RwMatrixTag* mainMatrix;
	float32 nearclip;
}

// ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df
// Start address: 0x207100
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float32 radius)
{
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	RwV3d* camPos;
	float32 objDepth;
	float32 nearZ;
	float32 farZ;
}

// ShadowRender__FP8RwCameraP8RwRasterP14RpIntersectionff
// Start address: 0x207240
int32 ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, float32 shadowFactor, float32 fadeDist)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
}

// ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x207560
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data)
{
	_ProjectionParam* param;
	type_70 vShad;
	RxObjSpace3DVertex* imv;
	xVec3 c;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	uint32* p0;
	uint32* p1;
	uint32* p2;
	uint32 sw;
}

// ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi
// Start address: 0x2079b0
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, type_74 renderCB)
{
	RwRGBA bgColor;
	RwCamera* camera;
	int32 fogstate;
}

// ShadowCameraDestroy__FP8RwCamera
// Start address: 0x207b20
void ShadowCameraDestroy(RwCamera* shadowCamera)
{
	RwRaster* raster;
	RwFrame* frame;
}

// Im2DRenderQuad__Ffffffff
// Start address: 0x207bb0
int32 Im2DRenderQuad(float32 x1, float32 y1, float32 x2, float32 y2, float32 z, float32 recipCamZ, float32 uvOffset)
{
	type_131 vx;
}

// xShadow_ListAdd__FP4xEnt
// Start address: 0x207c90
void xShadow_ListAdd(xEnt* ent)
{
}

// xShadowRender__FP4xEntf
// Start address: 0x207ca0
void xShadowRender(xEnt* ent, float32 max_dist)
{
	xVec3 center;
	float32 radius;
}

// xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207d40
void xShadowReceiveShadow(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwMatrixTag oldroot;
}

// xShadowReceiveShadowFastPS2__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207f90
void xShadowReceiveShadowFastPS2(xEnt* ent, float32 shadowFactor, int32 shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwCamera* shadowCamera;
	RwMatrixTag* shadowMatrix;
	RwMatrixTag invMatrix;
	RwV4dTag at;
	float32 radius;
	RwV3d scl;
	RwV3d tr;
	float32 fadeDist;
	uint32 i;
	uint32 num_verts;
	xVec3* xvert;
	RpTriangle* tri;
	RpGeometry* geom;
	RwMatrixTag* mat;
	RpSkin* skin;
	uint8 val;
	uint32 vertex_color;
	xModelInstance* model;
	uint32 max_verts;
	uint32 model_num;
	uint32 ent_id;
	xVec3* vert;
	RxObjSpace3DVertex* imv;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	float32 local_SHADOW_BIAS_AMT;
	float32 local_SHADOW_MINNORMY;
}

// xShadowReceiveShadowSetup__FP4xEnt
// Start address: 0x208670
uint32 xShadowReceiveShadowSetup(xEnt* ent)
{
}

// modelRenderCB__FPv
// Start address: 0x2086e0
void modelRenderCB(void* model)
{
}

// xShadowRenderWorld__FP5xVec3ff
// Start address: 0x2086f0
void xShadowRenderWorld(xVec3* center, float32 radius, float32 max_dist)
{
	RpIntersection shadowZone;
	float32 fadeDistance;
	xSphere zone;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	xVec3* at;
	xVec3* up;
	xVec3* rt;
	type_98 R;
	type_102 entcoll;
	type_107 envcoll;
	type_113 sf;
	uint32 hit_env;
	uint32 hit_ent;
	float32 ent_dist;
	float32 env_dist;
	xVec3 ent_pos;
	xVec3 env_pos;
	int32 i;
	xQCData q;
}

// xShadowCameraUpdate__FPvPFPv_vP5xVec3fi
// Start address: 0x208d10
void xShadowCameraUpdate(void* model, type_90 renderCB, xVec3* center, float32 radius, int32 shadowMode)
{
}

// xShadowSetLight__FP5xVec3P5xVec3f
// Start address: 0x208d90
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec)
{
	xVec3 zvec;
	xMat4x3 matrix;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
}

// xShadowSetWorld__FP7RpWorld
// Start address: 0x208e20
void xShadowSetWorld(RpWorld* world)
{
}

// SetupShadow__Fv
// Start address: 0x208e50
int32 SetupShadow()
{
	int32 res;
}

// xShadowInit__Fv
// Start address: 0x208f70
void xShadowInit()
{
	RwFrame* frame;
}

