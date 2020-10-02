typedef struct RpAtomic;
typedef struct RwObjectHasFrame;
typedef struct xAnimActiveEffect;
typedef struct xBBox;
typedef struct xParCmdKillDistance;
typedef struct xParCmd;
typedef struct xAnimFile;
typedef struct xBase;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimSingle;
typedef struct RwRaster;
typedef struct xEntMotionOrbitData;
typedef struct xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xParGroup;
typedef struct _zEnv;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct xVec3;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct xPar;
typedef struct xEnv;
typedef struct zEnt;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xUpdateCullMgr;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xParCmdTex;
typedef struct iEnv;
typedef struct _class_0;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineNodeParam;
typedef struct xAnimMultiFileBase;
typedef struct xSurface;
typedef struct zJumpParam;
typedef struct RpMaterial;
typedef struct _tagEmitSphere;
typedef struct RxHeap;
typedef struct xEntAsset;
typedef struct xModelInstance;
typedef struct xAnimEffect;
typedef struct RwRGBA;
typedef struct xAnimTransition;
typedef struct RwBBox;
typedef struct xLightKit;
typedef struct xGroupAsset;
typedef struct _zPortal;
typedef struct xModelBucket;
typedef struct xQuat;
typedef struct xParCmdJet;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagiPad;
typedef struct RpWorld;
typedef struct xGridBound;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xEnt;
typedef struct xEntMechData;
typedef struct rxHeapBlockHeader;
typedef struct xLinkAsset;
typedef struct xPortalAsset;
typedef struct RpClump;
typedef struct xEntMotionSplineData;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct xVolume;
typedef struct RpWorldSector;
typedef struct RxPipelineRequiresCluster;
typedef struct xQCControl;
typedef struct xAnimMultiFile;
typedef struct xJSPHeader;
typedef struct RpMorphTarget;
typedef struct _tagEmitRect;
typedef struct xParCmdAsset;
typedef struct xParCmdApplyCamMat;
typedef struct zPlatform;
typedef struct xVec4;
typedef struct xScene;
typedef struct xCoef3;
typedef struct RpVertexNormal;
typedef struct xEntMotionMPData;
typedef struct zEntHangable;
typedef struct zGlobals;
typedef struct xEntERData;
typedef struct _tagxRumble;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xMat4x3;
typedef struct xMovePoint;
typedef struct rxReq;
typedef struct zGlobalSettings;
typedef struct zCutsceneMgr;
typedef struct xParEmitterAsset;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct zAssetPickupTable;
typedef struct xShadowSimplePoly;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct xMovePointAsset;
typedef struct xLightKitLight;
typedef struct zPlayerLassoInfo;
typedef struct xPEEntBound;
typedef struct zScene;
typedef struct _tagEmitLine;
typedef struct xEnvAsset;
typedef struct _class_1;
typedef struct xVolumeAsset;
typedef struct zLedgeGrabParams;
typedef struct xGroup;
typedef struct xEntBoulder;
typedef struct xUpdateCullEnt;
typedef struct RpTriangle;
typedef enum RxNodeDefEditable;
typedef struct xEntMotionMechData;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef struct xEntCollis;
typedef struct xRot;
typedef struct RpLight;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xMemPool;
typedef struct xSpline3;
typedef struct xShadowSimpleCache;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntDrive;
typedef enum _tagRumbleType;
typedef enum RwCameraProjection;
typedef enum _zPlayerType;
typedef enum RxClusterForcePresent;
typedef struct xEntOrbitData;
typedef struct xCylinder;
typedef struct xCollis;
typedef struct _tagEmitVolume;
typedef struct xParCmdDamagePlayer;
typedef struct xBox;
typedef struct analog_data;
typedef struct zPlatFMRunTime;
typedef struct RxClusterDefinition;
typedef struct xFFX;
typedef struct xEntMotion;
typedef struct xUpdateCullGroup;
typedef struct zLasso;
typedef struct xPlatformAsset;
typedef struct xModelPool;
typedef struct xBound;
typedef struct xEntMotionAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwFrame;
typedef struct RwSphere;
typedef struct xAnimTransitionList;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RwTexture;
typedef struct _tagEmitOffsetPoint;
typedef struct RpSector;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct xMat3x3;
typedef struct zPlayerSettings;
typedef struct xBaseAsset;
typedef struct RxClusterRef;
typedef struct xEntMotionPenData;
typedef struct RwCamera;
typedef struct xCoef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct tri_data_0;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPVertInfo;
typedef struct xPEVCyl;
typedef struct xVec2;
typedef struct xCamera;
typedef struct xEntMPData;
typedef struct RxNodeMethods;
typedef struct zVolume;
typedef struct xClumpCollBSPTriangle;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xModelTag;
typedef struct xEntMotionERData;
typedef struct RxCluster;
typedef struct xPEEntBone;
typedef struct _tagxPad;
typedef struct RxPacket;
typedef struct iFogParams;
typedef union _class_2;
typedef enum RwFogType;
typedef enum _tagPadState;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct xGlobals;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;
typedef struct xPECircle;
typedef struct RpInterpolator;
typedef struct xQCData;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_7)(void*, xParGroup*);
typedef uint32(*type_8)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(xParCmd*, xParGroup*, float32);
typedef uint32(*type_19)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_24)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef int32(*type_30)(RxPipelineNode*);
typedef void(*type_34)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_39)(void*, void*);
typedef xBase*(*type_40)(uint32);
typedef int8*(*type_43)(xBase*);
typedef void(*type_46)(void*);
typedef int8*(*type_47)(uint32);
typedef void(*type_50)(xEnt*, xScene*, float32);
typedef void(*type_51)(xAnimPlay*, xAnimState*);
typedef void(*type_52)(xParCmd*, xParGroup*, float32);
typedef void(*type_54)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_57)(xEnt*, xScene*, float32, xEntFrame*);
typedef RpAtomic*(*type_58)(RpAtomic*);
typedef void(*type_60)(xEnt*);
typedef void(*type_62)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_63)(xParCmd*, xParGroup*, float32);
typedef int32(*type_67)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_68)(xParCmd*, xParGroup*, float32);
typedef uint32(*type_70)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_71)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(xParCmd*, xParGroup*, float32);
typedef void(*type_83)(xParCmd*, xParGroup*, float32);
typedef void(*type_90)(xParCmd*, xParGroup*, float32);
typedef RpWorldSector*(*type_91)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_96)(xParCmd*, xParGroup*, float32);
typedef void(*type_100)(xMemPool*, void*);
typedef void(*type_107)(RwResEntry*);

typedef xBase* type_2[72];
typedef float32 type_4[2];
typedef int8 type_5[128];
typedef type_5 type_6[6];
typedef uint8 type_9[14];
typedef xModelTag type_11[4];
typedef float32 type_12[2];
typedef uint16 type_13[3];
typedef int8 type_14[32];
typedef uint8 type_15[4];
typedef xModelInstance* type_16[14];
typedef RwFrustumPlane type_18[6];
typedef uint8 type_21[4];
typedef RwV3d type_23[8];
typedef uint8 type_26[2];
typedef uint8 type_27[2];
typedef xAnimMultiFileEntry type_29[1];
typedef int8 type_31[4];
typedef uint8 type_32[3];
typedef uint8 type_33[22];
typedef int8 type_35[16];
typedef uint8 type_36[22];
typedef RwTexCoords* type_37[8];
typedef float32 type_38[4];
typedef float32 type_41[4];
typedef int8 type_42[16];
typedef xVec3 type_44[3];
typedef float32 type_45[4];
typedef float32 type_48[16];
typedef uint8 type_49[3];
typedef uint8 type_53[2];
typedef uint16 type_55[3];
typedef xVec3 type_59[60];
typedef uint8 type_61[2];
typedef xVec3 type_64[5];
typedef float32 type_65[22];
typedef uint8 type_66[5];
typedef float32 type_69[22];
typedef uint32 type_72[15];
typedef RpLight* type_74[2];
typedef uint32 type_75[15];
typedef float32 type_76[12];
typedef RwFrame* type_77[2];
typedef uint32 type_78[4];
typedef float32 type_79[12];
typedef uint32 type_80[15];
typedef float32 type_81[12];
typedef uint8 type_82[3];
typedef xVec3 type_84[4];
typedef float32 type_85[12];
typedef RwTexCoords* type_86[8];
typedef float32 type_87[12];
typedef analog_data type_88[2];
typedef float32 type_89[12];
typedef float32 type_93[4];
typedef uint8 type_94[2];
typedef xCollis type_95[18];
typedef int8 type_97[64];
typedef uint8 type_98[2];
typedef uint32 type_99[2];
typedef uint8 type_101[2];
typedef float32 type_102[6];
typedef zVolume* type_103[32];
typedef int8 type_104[32];
typedef float32 type_105[3];
typedef int8 type_106[32];
typedef float32 type_108[3];
typedef xModelTag type_109[2];
typedef xVec4 type_110[12];
typedef float32 type_111[3];
typedef xEnt* type_112[111];
typedef RxCluster type_113[1];
typedef float32 type_114[4];
typedef uint32 type_115[72];

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_58 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xParCmdKillDistance : xParCmdAsset
{
	float32 dSqr;
	uint32 kill_greater_than;
};

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
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
	type_27 NumAnims;
	void** RawData;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_67 eventFunc;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_12 BilinearLerp;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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
	type_7 draw;
	xParCmdTex* m_cmdTex;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_51 BeforeEnter;
	type_34 StateCallback;
	type_62 BeforeAnimMatrices;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RpPolygon
{
	uint16 matIndex;
	type_13 vertIndex;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_15 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_26 m_texIdx;
	type_32 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_41 m_cvel;
	type_45 m_cfl;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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
	type_46 activateCB;
	type_46 deactivateCB;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_74 light;
	type_77 light_frame;
	int32 memlvl;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimMultiFileBase
{
	uint32 Count;
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
	type_82 pad;
	void* moprops;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_8 Callback;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_20 Conditional;
	type_20 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xParCmdJet : xParCmdAsset
{
	xVec3 center;
	xVec3 acc;
	float32 gravity;
	float32 epsilon;
	float32 radiusSqr;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct _tagiPad
{
	int32 port;
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
	type_91 renderCallBack;
	RxPipeline* pipeline;
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
	type_50 update;
	type_50 endUpdate;
	type_54 bupdate;
	type_57 move;
	type_60 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_71 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_78 pad;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_38 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xEntMotionSplineData
{
	int32 unknown;
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
	type_86 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_62 BeforeAnimMatrices;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_37 texCoords;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_29 Files;
};

struct xJSPHeader
{
	type_31 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	type_61 pad;
};

struct xParCmdApplyCamMat : xParCmdAsset
{
	xVec3 apply;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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
	type_40 resolvID;
	type_43 base2Name;
	type_47 id2Name;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xEntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct zEntHangable
{
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	type_53 pad;
	float32 delay;
	xSpline3* spl;
};

struct rxReq
{
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
	type_98 PowerUp;
	type_101 InitialPowerUp;
};

struct zCutsceneMgr
{
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zAssetPickupTable
{
};

struct xShadowSimplePoly
{
	type_44 vert;
	xVec3 norm;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_107 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_48 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
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
	type_115 baseCount;
	type_2 baseList;
	_zEnv* zen;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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

struct _class_1
{
	xVec3* verts;
};

struct xVolumeAsset : xBaseAsset
{
	uint32 flags;
	xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_59 tranTable;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xEntBoulder
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	type_39 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpTriangle
{
	type_55 vertIndex;
	int16 matIndex;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_95 colls;
	type_56 post;
	type_70 depenq;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xEntPenData
{
	xVec3 top;
	float32 w;
	xMat4x3 omat;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_100 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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
	type_84 corner;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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
		_class_0 tuv;
		tri_data_1 tri;
	};
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct xParCmdDamagePlayer : xParCmdAsset
{
	int32 damage;
	int32 granular;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct zPlatFMRunTime
{
	uint32 flags;
	type_76 tmrs;
	type_79 ttms;
	type_81 atms;
	type_85 dtms;
	type_87 vms;
	type_89 dss;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xFFX
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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
	type_64 lastRefs;
	type_66 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xPlatformAsset
{
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_49 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_109 BubbleWandTag;
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
	type_11 HangPawTag;
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
	type_72 Inv_PatsSock;
	type_75 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_80 Inv_LevelPickups;
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
	type_99 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_112 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_9 sb_model_indices;
	type_16 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_4 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_104 name;
	type_106 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RpSector
{
	int32 type;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct anim_coll_data
{
};

struct xEntSplineData
{
	int32 unknown;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_102 MoveSpeed;
	type_105 AnimSneak;
	type_108 AnimWalk;
	type_111 AnimRun;
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
	type_21 talk_filter;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xEntMotionPenData
{
	uint8 flags;
	uint8 plane;
	type_94 pad;
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_0 endUpdate;
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
	type_18 frustumPlanes;
	RwBBox frustumBoundBox;
	type_23 frustumCorners;
};

struct xCoef
{
	type_93 a;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct xVec2
{
	float32 x;
	float32 y;
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
	type_110 frustplane;
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

struct RxNodeMethods
{
	type_22 nodeBody;
	type_24 nodeInit;
	type_25 nodeTerm;
	type_30 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_19 configMsgHandler;
};

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_114 wt;
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

struct _tagxPad
{
	type_33 value;
	type_36 last_value;
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
	type_65 up_tmr;
	type_69 down_tmr;
	type_88 analog;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_113 clusters;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_6 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_14 sceneStart;
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

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
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

type_35 buffer;
type_42 buffer;
type_103 sClipVolume;
int32 sClipVolumeTotal;
zGlobals globals;
xQCControl xqc_def_ctrl;
type_63 xParCmdKillDistance_Update;
type_17 xParCmdApplyCamMat_Update;
type_96 xParCmdDamagePlayer_Update;
type_90 xParCmdAnimalMagentism_Update;
type_83 xParCmdClipVolumes_Update;
type_73 xParCmdCustom_Update;
type_68 xParCmdPlayerCollision_Update;
type_52 xParCmdJet_Update;

void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt);
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps);
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float32 dt);
void xParCmdPlayerCollision_Update();
void xParCmdClipVolumes_Update(xParGroup* ps);
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps);
void zParCmdFindClipVolumes();
void zParCmdInit();

// xParCmdCustom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c150
void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	float32 mdt;
	float32 rSqr;
	float32 oorSqr;
}

// xParCmdApplyCamMat_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c320
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdApplyCamMat* cmd;
	xMat4x3* mat;
	float32 mul;
}

// xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c480
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt)
{
	xPar* p;
}

// xParCmdJet_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c560
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdJet* cmd;
	float32 mdt;
	float32 rSqr;
	float32 oorSqr;
}

// xParCmdDamagePlayer_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c6b0
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdDamagePlayer* cmd;
	xBound* pbound;
	int32 last_idx;
	int32 i;
	xCollis collis;
	xBound bnd_fake;
}

// xParCmdAnimalMagentism_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c870
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xVec3 pos;
	float32 mul;
	xVec3 vec;
	float32 dist;
}

// xParCmdPlayerCollision_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca10
void xParCmdPlayerCollision_Update()
{
}

// xParCmdClipVolumes_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca20
void xParCmdClipVolumes_Update(xParGroup* ps)
{
	xPar* p;
	int32 i;
	xCollis collis;
}

// xParCmdKillDistance_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18cad0
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdKillDistance* cmd;
	xVec3* camera_pos;
}

// zParCmdFindClipVolumes__Fv
// Start address: 0x18cbb0
void zParCmdFindClipVolumes()
{
	type_97 findname;
	zVolume* vol;
}

// zParCmdInit__Fv
// Start address: 0x18cc50
void zParCmdInit()
{
}

