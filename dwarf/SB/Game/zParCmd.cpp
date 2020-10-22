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
typedef struct _class_2;
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
typedef int8 type_6[128][6];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
	void(*draw)(void*, xParGroup*);
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint16 vertIndex[3];
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	uint8 pad[3];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
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
	uint32 pad[4];
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
	RpClump*(*callback)(RpClump*, void*);
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
	RwTexCoords* texCoords[8];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	xAnimMultiFileEntry Files[1];
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
	uint8 pad[2];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	uint8 pad[2];
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	xVec3 vert[3];
	xVec3 norm;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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
	float32 matrix[16];
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpTriangle
{
	uint16 vertIndex[3];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	void(*InitCB)(xMemPool*, void*);
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
	xVec3 corner[4];
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
	float32 tmrs[12];
	float32 ttms[12];
	float32 atms[12];
	float32 dtms[12];
	float32 vms[12];
	float32 dss[12];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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
	uint8 pad[3];
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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
	int8 name[32];
	int8 mask[32];
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
	uint8 pad[2];
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
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

struct xCoef
{
	float32 a[4];
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
	xVec4 frustplane[12];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	float32 wt[4];
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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

int8 buffer[16];
int8 buffer[16];
zVolume* sClipVolume[32];
int32 sClipVolumeTotal;
zGlobals globals;
xQCControl xqc_def_ctrl;
void(*xParCmdKillDistance_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdApplyCamMat_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdDamagePlayer_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdAnimalMagentism_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdClipVolumes_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdCustom_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdPlayerCollision_Update)(xParCmd*, xParGroup*, float32);
void(*xParCmdJet_Update)(xParCmd*, xParGroup*, float32);

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
	// Line 556, Address: 0x18c150, Func Offset: 0
	// Line 570, Address: 0x18c154, Func Offset: 0x4
	// Line 556, Address: 0x18c158, Func Offset: 0x8
	// Line 570, Address: 0x18c15c, Func Offset: 0xc
	// Line 581, Address: 0x18c190, Func Offset: 0x40
	// Line 585, Address: 0x18c1a4, Func Offset: 0x54
	// Line 586, Address: 0x18c1a8, Func Offset: 0x58
	// Line 587, Address: 0x18c1ac, Func Offset: 0x5c
	// Line 590, Address: 0x18c1b0, Func Offset: 0x60
	// Line 605, Address: 0x18c1b8, Func Offset: 0x68
	// Line 608, Address: 0x18c1bc, Func Offset: 0x6c
	// Line 605, Address: 0x18c1c0, Func Offset: 0x70
	// Line 608, Address: 0x18c1c4, Func Offset: 0x74
	// Line 605, Address: 0x18c1c8, Func Offset: 0x78
	// Line 608, Address: 0x18c1cc, Func Offset: 0x7c
	// Line 612, Address: 0x18c1d0, Func Offset: 0x80
	// Line 602, Address: 0x18c1dc, Func Offset: 0x8c
	// Line 590, Address: 0x18c1e4, Func Offset: 0x94
	// Line 596, Address: 0x18c1e8, Func Offset: 0x98
	// Line 600, Address: 0x18c200, Func Offset: 0xb0
	// Line 602, Address: 0x18c210, Func Offset: 0xc0
	// Line 605, Address: 0x18c21c, Func Offset: 0xcc
	// Line 608, Address: 0x18c224, Func Offset: 0xd4
	// Line 605, Address: 0x18c228, Func Offset: 0xd8
	// Line 608, Address: 0x18c23c, Func Offset: 0xec
	// Line 609, Address: 0x18c254, Func Offset: 0x104
	// Line 612, Address: 0x18c270, Func Offset: 0x120
	// Line 613, Address: 0x18c284, Func Offset: 0x134
	// Line 615, Address: 0x18c288, Func Offset: 0x138
	// Line 616, Address: 0x18c28c, Func Offset: 0x13c
	// Line 618, Address: 0x18c294, Func Offset: 0x144
	// Line 625, Address: 0x18c29c, Func Offset: 0x14c
	// Line 627, Address: 0x18c2a0, Func Offset: 0x150
	// Line 628, Address: 0x18c2a4, Func Offset: 0x154
	// Line 629, Address: 0x18c2a8, Func Offset: 0x158
	// Line 630, Address: 0x18c2ac, Func Offset: 0x15c
	// Line 631, Address: 0x18c2b0, Func Offset: 0x160
	// Line 633, Address: 0x18c2b8, Func Offset: 0x168
	// Line 636, Address: 0x18c2c0, Func Offset: 0x170
	// Line 637, Address: 0x18c2c8, Func Offset: 0x178
	// Line 644, Address: 0x18c2d0, Func Offset: 0x180
	// Line 657, Address: 0x18c304, Func Offset: 0x1b4
	// Line 658, Address: 0x18c308, Func Offset: 0x1b8
	// Line 665, Address: 0x18c310, Func Offset: 0x1c0
	// Func End, Address: 0x18c31c, Func Offset: 0x1cc
}

// xParCmdApplyCamMat_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c320
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float32 dt)
{
	xPar* p;
	xParCmdApplyCamMat* cmd;
	xMat4x3* mat;
	float32 mul;
	// Line 492, Address: 0x18c320, Func Offset: 0
	// Line 504, Address: 0x18c324, Func Offset: 0x4
	// Line 499, Address: 0x18c328, Func Offset: 0x8
	// Line 504, Address: 0x18c330, Func Offset: 0x10
	// Line 507, Address: 0x18c33c, Func Offset: 0x1c
	// Line 508, Address: 0x18c340, Func Offset: 0x20
	// Line 510, Address: 0x18c348, Func Offset: 0x28
	// Line 511, Address: 0x18c35c, Func Offset: 0x3c
	// Line 512, Address: 0x18c370, Func Offset: 0x50
	// Line 514, Address: 0x18c384, Func Offset: 0x64
	// Line 515, Address: 0x18c388, Func Offset: 0x68
	// Line 519, Address: 0x18c394, Func Offset: 0x74
	// Line 522, Address: 0x18c3a8, Func Offset: 0x88
	// Line 523, Address: 0x18c3ac, Func Offset: 0x8c
	// Line 525, Address: 0x18c3b8, Func Offset: 0x98
	// Line 526, Address: 0x18c3cc, Func Offset: 0xac
	// Line 527, Address: 0x18c3e0, Func Offset: 0xc0
	// Line 529, Address: 0x18c3f4, Func Offset: 0xd4
	// Line 530, Address: 0x18c3f8, Func Offset: 0xd8
	// Line 534, Address: 0x18c404, Func Offset: 0xe4
	// Line 537, Address: 0x18c418, Func Offset: 0xf8
	// Line 538, Address: 0x18c41c, Func Offset: 0xfc
	// Line 540, Address: 0x18c428, Func Offset: 0x108
	// Line 541, Address: 0x18c43c, Func Offset: 0x11c
	// Line 542, Address: 0x18c450, Func Offset: 0x130
	// Line 544, Address: 0x18c464, Func Offset: 0x144
	// Line 545, Address: 0x18c468, Func Offset: 0x148
	// Line 547, Address: 0x18c470, Func Offset: 0x150
	// Func End, Address: 0x18c478, Func Offset: 0x158
}

// xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c480
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt)
{
	xPar* p;
	// Line 445, Address: 0x18c480, Func Offset: 0
	// Line 453, Address: 0x18c490, Func Offset: 0x10
	// Line 454, Address: 0x18c494, Func Offset: 0x14
	// Line 457, Address: 0x18c498, Func Offset: 0x18
	// Line 476, Address: 0x18c4c0, Func Offset: 0x40
	// Line 470, Address: 0x18c4c4, Func Offset: 0x44
	// Line 476, Address: 0x18c4c8, Func Offset: 0x48
	// Line 470, Address: 0x18c4cc, Func Offset: 0x4c
	// Line 467, Address: 0x18c4d4, Func Offset: 0x54
	// Line 457, Address: 0x18c4dc, Func Offset: 0x5c
	// Line 463, Address: 0x18c4e0, Func Offset: 0x60
	// Line 467, Address: 0x18c4f4, Func Offset: 0x74
	// Line 463, Address: 0x18c500, Func Offset: 0x80
	// Line 467, Address: 0x18c504, Func Offset: 0x84
	// Line 469, Address: 0x18c514, Func Offset: 0x94
	// Line 470, Address: 0x18c51c, Func Offset: 0x9c
	// Line 472, Address: 0x18c528, Func Offset: 0xa8
	// Line 475, Address: 0x18c530, Func Offset: 0xb0
	// Line 476, Address: 0x18c538, Func Offset: 0xb8
	// Line 477, Address: 0x18c544, Func Offset: 0xc4
	// Line 480, Address: 0x18c548, Func Offset: 0xc8
	// Line 481, Address: 0x18c54c, Func Offset: 0xcc
	// Line 482, Address: 0x18c558, Func Offset: 0xd8
	// Func End, Address: 0x18c560, Func Offset: 0xe0
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
	// Line 373, Address: 0x18c560, Func Offset: 0
	// Line 381, Address: 0x18c564, Func Offset: 0x4
	// Line 384, Address: 0x18c568, Func Offset: 0x8
	// Line 387, Address: 0x18c580, Func Offset: 0x20
	// Line 388, Address: 0x18c584, Func Offset: 0x24
	// Line 389, Address: 0x18c588, Func Offset: 0x28
	// Line 392, Address: 0x18c590, Func Offset: 0x30
	// Line 393, Address: 0x18c59c, Func Offset: 0x3c
	// Line 396, Address: 0x18c5a0, Func Offset: 0x40
	// Line 397, Address: 0x18c5a4, Func Offset: 0x44
	// Line 415, Address: 0x18c5ac, Func Offset: 0x4c
	// Line 403, Address: 0x18c5b8, Func Offset: 0x58
	// Line 409, Address: 0x18c5c4, Func Offset: 0x64
	// Line 403, Address: 0x18c5c8, Func Offset: 0x68
	// Line 407, Address: 0x18c5d4, Func Offset: 0x74
	// Line 409, Address: 0x18c5e4, Func Offset: 0x84
	// Line 412, Address: 0x18c5f0, Func Offset: 0x90
	// Line 415, Address: 0x18c5f4, Func Offset: 0x94
	// Line 412, Address: 0x18c5f8, Func Offset: 0x98
	// Line 415, Address: 0x18c614, Func Offset: 0xb4
	// Line 416, Address: 0x18c62c, Func Offset: 0xcc
	// Line 419, Address: 0x18c648, Func Offset: 0xe8
	// Line 420, Address: 0x18c660, Func Offset: 0x100
	// Line 421, Address: 0x18c674, Func Offset: 0x114
	// Line 422, Address: 0x18c68c, Func Offset: 0x12c
	// Line 424, Address: 0x18c690, Func Offset: 0x130
	// Line 425, Address: 0x18c694, Func Offset: 0x134
	// Line 426, Address: 0x18c6a0, Func Offset: 0x140
	// Func End, Address: 0x18c6a8, Func Offset: 0x148
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
	// Line 277, Address: 0x18c6b0, Func Offset: 0
	// Line 279, Address: 0x18c6c8, Func Offset: 0x18
	// Line 287, Address: 0x18c6cc, Func Offset: 0x1c
	// Line 296, Address: 0x18c6d0, Func Offset: 0x20
	// Line 297, Address: 0x18c6d8, Func Offset: 0x28
	// Line 296, Address: 0x18c6dc, Func Offset: 0x2c
	// Line 298, Address: 0x18c6e4, Func Offset: 0x34
	// Line 302, Address: 0x18c710, Func Offset: 0x60
	// Line 309, Address: 0x18c724, Func Offset: 0x74
	// Line 310, Address: 0x18c738, Func Offset: 0x88
	// Line 312, Address: 0x18c740, Func Offset: 0x90
	// Line 316, Address: 0x18c748, Func Offset: 0x98
	// Line 324, Address: 0x18c768, Func Offset: 0xb8
	// Line 319, Address: 0x18c76c, Func Offset: 0xbc
	// Line 324, Address: 0x18c770, Func Offset: 0xc0
	// Line 319, Address: 0x18c774, Func Offset: 0xc4
	// Line 324, Address: 0x18c778, Func Offset: 0xc8
	// Line 327, Address: 0x18c784, Func Offset: 0xd4
	// Line 325, Address: 0x18c788, Func Offset: 0xd8
	// Line 327, Address: 0x18c78c, Func Offset: 0xdc
	// Line 325, Address: 0x18c794, Func Offset: 0xe4
	// Line 327, Address: 0x18c79c, Func Offset: 0xec
	// Line 325, Address: 0x18c7a4, Func Offset: 0xf4
	// Line 326, Address: 0x18c7a8, Func Offset: 0xf8
	// Line 327, Address: 0x18c7c8, Func Offset: 0x118
	// Line 328, Address: 0x18c7d0, Func Offset: 0x120
	// Line 329, Address: 0x18c7e8, Func Offset: 0x138
	// Line 330, Address: 0x18c7f0, Func Offset: 0x140
	// Line 338, Address: 0x18c808, Func Offset: 0x158
	// Line 342, Address: 0x18c81c, Func Offset: 0x16c
	// Line 347, Address: 0x18c828, Func Offset: 0x178
	// Line 348, Address: 0x18c838, Func Offset: 0x188
	// Line 350, Address: 0x18c840, Func Offset: 0x190
	// Line 351, Address: 0x18c850, Func Offset: 0x1a0
	// Line 354, Address: 0x18c858, Func Offset: 0x1a8
	// Func End, Address: 0x18c870, Func Offset: 0x1c0
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
	// Line 222, Address: 0x18c870, Func Offset: 0
	// Line 232, Address: 0x18c874, Func Offset: 0x4
	// Line 222, Address: 0x18c878, Func Offset: 0x8
	// Line 231, Address: 0x18c87c, Func Offset: 0xc
	// Line 222, Address: 0x18c880, Func Offset: 0x10
	// Line 232, Address: 0x18c884, Func Offset: 0x14
	// Line 222, Address: 0x18c888, Func Offset: 0x18
	// Line 231, Address: 0x18c88c, Func Offset: 0x1c
	// Line 222, Address: 0x18c890, Func Offset: 0x20
	// Line 231, Address: 0x18c894, Func Offset: 0x24
	// Line 222, Address: 0x18c898, Func Offset: 0x28
	// Line 231, Address: 0x18c8a4, Func Offset: 0x34
	// Line 232, Address: 0x18c8c4, Func Offset: 0x54
	// Line 236, Address: 0x18c8d0, Func Offset: 0x60
	// Line 237, Address: 0x18c8d4, Func Offset: 0x64
	// Line 236, Address: 0x18c8d8, Func Offset: 0x68
	// Line 238, Address: 0x18c8e0, Func Offset: 0x70
	// Line 246, Address: 0x18c8f8, Func Offset: 0x88
	// Line 242, Address: 0x18c8fc, Func Offset: 0x8c
	// Line 246, Address: 0x18c900, Func Offset: 0x90
	// Line 242, Address: 0x18c904, Func Offset: 0x94
	// Line 243, Address: 0x18c910, Func Offset: 0xa0
	// Line 244, Address: 0x18c91c, Func Offset: 0xac
	// Line 246, Address: 0x18c924, Func Offset: 0xb4
	// Line 249, Address: 0x18c92c, Func Offset: 0xbc
	// Line 255, Address: 0x18c930, Func Offset: 0xc0
	// Line 249, Address: 0x18c938, Func Offset: 0xc8
	// Line 255, Address: 0x18c93c, Func Offset: 0xcc
	// Line 249, Address: 0x18c940, Func Offset: 0xd0
	// Line 250, Address: 0x18c94c, Func Offset: 0xdc
	// Line 251, Address: 0x18c960, Func Offset: 0xf0
	// Line 255, Address: 0x18c970, Func Offset: 0x100
	// Line 257, Address: 0x18c978, Func Offset: 0x108
	// Line 258, Address: 0x18c97c, Func Offset: 0x10c
	// Line 259, Address: 0x18c988, Func Offset: 0x118
	// Line 261, Address: 0x18c9a0, Func Offset: 0x130
	// Line 262, Address: 0x18c9a8, Func Offset: 0x138
	// Line 261, Address: 0x18c9ac, Func Offset: 0x13c
	// Line 262, Address: 0x18c9b0, Func Offset: 0x140
	// Line 263, Address: 0x18c9b8, Func Offset: 0x148
	// Line 264, Address: 0x18c9c4, Func Offset: 0x154
	// Line 267, Address: 0x18c9d0, Func Offset: 0x160
	// Line 268, Address: 0x18c9d4, Func Offset: 0x164
	// Line 269, Address: 0x18c9e0, Func Offset: 0x170
	// Func End, Address: 0x18ca04, Func Offset: 0x194
}

// xParCmdPlayerCollision_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca10
void xParCmdPlayerCollision_Update()
{
	// Line 214, Address: 0x18ca10, Func Offset: 0
	// Func End, Address: 0x18ca18, Func Offset: 0x8
}

// xParCmdClipVolumes_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca20
void xParCmdClipVolumes_Update(xParGroup* ps)
{
	xPar* p;
	int32 i;
	xCollis collis;
	// Line 133, Address: 0x18ca20, Func Offset: 0
	// Line 141, Address: 0x18ca34, Func Offset: 0x14
	// Line 142, Address: 0x18ca38, Func Offset: 0x18
	// Line 146, Address: 0x18ca40, Func Offset: 0x20
	// Line 152, Address: 0x18ca58, Func Offset: 0x38
	// Line 153, Address: 0x18ca70, Func Offset: 0x50
	// Line 156, Address: 0x18ca80, Func Offset: 0x60
	// Line 158, Address: 0x18ca84, Func Offset: 0x64
	// Line 161, Address: 0x18caa0, Func Offset: 0x80
	// Line 162, Address: 0x18caa4, Func Offset: 0x84
	// Line 163, Address: 0x18cab0, Func Offset: 0x90
	// Func End, Address: 0x18cac8, Func Offset: 0xa8
}

// xParCmdKillDistance_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18cad0
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdKillDistance* cmd;
	xVec3* camera_pos;
	// Line 90, Address: 0x18cad0, Func Offset: 0
	// Line 102, Address: 0x18cad4, Func Offset: 0x4
	// Line 104, Address: 0x18cad8, Func Offset: 0x8
	// Line 97, Address: 0x18cadc, Func Offset: 0xc
	// Line 104, Address: 0x18cae0, Func Offset: 0x10
	// Line 106, Address: 0x18cae8, Func Offset: 0x18
	// Line 108, Address: 0x18caf0, Func Offset: 0x20
	// Line 110, Address: 0x18cb08, Func Offset: 0x38
	// Line 108, Address: 0x18cb0c, Func Offset: 0x3c
	// Line 110, Address: 0x18cb18, Func Offset: 0x48
	// Line 111, Address: 0x18cb34, Func Offset: 0x64
	// Line 113, Address: 0x18cb38, Func Offset: 0x68
	// Line 114, Address: 0x18cb3c, Func Offset: 0x6c
	// Line 115, Address: 0x18cb44, Func Offset: 0x74
	// Line 118, Address: 0x18cb4c, Func Offset: 0x7c
	// Line 120, Address: 0x18cb50, Func Offset: 0x80
	// Line 122, Address: 0x18cb68, Func Offset: 0x98
	// Line 120, Address: 0x18cb6c, Func Offset: 0x9c
	// Line 122, Address: 0x18cb78, Func Offset: 0xa8
	// Line 123, Address: 0x18cb94, Func Offset: 0xc4
	// Line 125, Address: 0x18cb98, Func Offset: 0xc8
	// Line 126, Address: 0x18cb9c, Func Offset: 0xcc
	// Line 128, Address: 0x18cba8, Func Offset: 0xd8
	// Func End, Address: 0x18cbb0, Func Offset: 0xe0
}

// zParCmdFindClipVolumes__Fv
// Start address: 0x18cbb0
void zParCmdFindClipVolumes()
{
	int8 findname[64];
	zVolume* vol;
	// Line 66, Address: 0x18cbb0, Func Offset: 0
	// Line 69, Address: 0x18cbb4, Func Offset: 0x4
	// Line 66, Address: 0x18cbb8, Func Offset: 0x8
	// Line 69, Address: 0x18cbbc, Func Offset: 0xc
	// Line 71, Address: 0x18cbcc, Func Offset: 0x1c
	// Line 73, Address: 0x18cbd0, Func Offset: 0x20
	// Line 75, Address: 0x18cbe8, Func Offset: 0x38
	// Line 76, Address: 0x18cbf8, Func Offset: 0x48
	// Line 79, Address: 0x18cc00, Func Offset: 0x50
	// Line 80, Address: 0x18cc18, Func Offset: 0x68
	// Line 81, Address: 0x18cc38, Func Offset: 0x88
	// Func End, Address: 0x18cc44, Func Offset: 0x94
}

// zParCmdInit__Fv
// Start address: 0x18cc50
void zParCmdInit()
{
	// Line 49, Address: 0x18cc50, Func Offset: 0
	// Line 51, Address: 0x18cc58, Func Offset: 0x8
	// Line 54, Address: 0x18cc60, Func Offset: 0x10
	// Line 55, Address: 0x18cc74, Func Offset: 0x24
	// Line 56, Address: 0x18cc88, Func Offset: 0x38
	// Line 57, Address: 0x18cc9c, Func Offset: 0x4c
	// Line 58, Address: 0x18ccb0, Func Offset: 0x60
	// Line 59, Address: 0x18ccc4, Func Offset: 0x74
	// Line 60, Address: 0x18ccd8, Func Offset: 0x88
	// Line 61, Address: 0x18ccec, Func Offset: 0x9c
	// Line 62, Address: 0x18cd00, Func Offset: 0xb0
	// Func End, Address: 0x18cd0c, Func Offset: 0xbc
}

