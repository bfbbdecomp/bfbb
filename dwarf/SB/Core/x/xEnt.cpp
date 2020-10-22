typedef struct xEnt;
typedef struct zFragAsset;
typedef struct xModelInstance;
typedef struct xScene;
typedef struct RwV3d;
typedef struct RxHeap;
typedef struct xCutsceneZbufferHack;
typedef struct xVec3;
typedef struct xEntFrame;
typedef struct xPortalAsset;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RpClump;
typedef struct xGridBound;
typedef struct zSurfaceProps;
typedef enum _tagRumbleType;
typedef struct xEntAsset;
typedef enum _zPlayerType;
typedef struct xQuat;
typedef struct RpGeometry;
typedef struct RwTexCoords;
typedef struct zShrapnelAsset;
typedef struct xUpdateCullGroup;
typedef struct RpWorldSector;
typedef struct xCollis;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct iEnv;
typedef struct zSurfUVFX;
typedef struct xBase;
typedef struct analog_data;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct xAnimPlay;
typedef struct RxPipelineRequiresCluster;
typedef struct tag_iFile;
typedef struct _tagEmitSphere;
typedef struct xAnimFile;
typedef struct RpPolygon;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct xAnimEffect;
typedef struct zEntDestructObjAsset;
typedef struct xLinkAsset;
typedef struct xJSPNodeInfo;
typedef struct xGroup;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct RxPipeline;
typedef struct zJumpParam;
typedef struct zPlayerGlobals;
typedef struct XCSNNosey;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zCheckPoint;
typedef struct xCutsceneMgr;
typedef struct xEntCollis;
typedef struct zSurfAssetBase;
typedef struct xVec4;
typedef struct zEntHangable;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct xEnv;
typedef struct RwMatrixTag;
typedef struct xCutsceneMgrAsset;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPBranchNode;
typedef struct zFrag;
typedef struct xCutscene;
typedef struct zPlayerCarryInfo;
typedef struct xVec2;
typedef struct rxReq;
typedef struct _tagEmitRect;
typedef struct xUpdateCullMgr;
typedef struct xShadowSimplePoly;
typedef struct zPlatform;
typedef struct RwRaster;
typedef struct zPlayerSettings;
typedef enum RxClusterValidityReq;
typedef struct zEntDestructObj;
typedef struct xJSPHeader;
typedef struct RwTexture;
typedef struct RpTriangle;
typedef struct xRay3;
typedef struct xCutsceneBreak;
typedef struct xSurface;
typedef struct xCamera;
typedef struct zCutsceneMgr;
typedef struct RpAtomic;
typedef struct xMat4x3;
typedef struct xSerial;
typedef struct zSurfMatFX;
typedef struct xUpdateCullEnt;
typedef struct RwCamera;
typedef enum RxNodeDefEditable;
typedef struct zAssetPickupTable;
typedef struct _zEnv;
typedef struct xModelPool;
typedef enum RxClusterValid;
typedef enum zFragType;
typedef struct anim_coll_data;
typedef struct xLightKitLight;
typedef struct xPEEntBound;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTree;
typedef struct xRot;
typedef struct zParEmitter;
typedef struct xEntBoulder;
typedef struct xShadowSimpleCache;
typedef struct _tagEmitLine;
typedef struct xFFX;
typedef struct xEnvAsset;
typedef struct xEntShadow;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagxRumble;
typedef struct xModelTag;
typedef enum RwCameraProjection;
typedef struct RpLight;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iFogParams;
typedef struct xEntDrive;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct xParEmitter;
typedef struct RpWorld;
typedef enum _tagPadState;
typedef struct tag_xFile;
typedef struct _tagEmitVolume;
typedef struct xQCData;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xParEmitterAsset;
typedef struct RpSector;
typedef struct xGlobals;
typedef struct xGrid;
typedef struct zLasso;
typedef struct xModelBucket;
typedef struct xParGroup;
typedef struct RwTexDictionary;
typedef struct xParEmitterPropsAsset;
typedef struct RxOutputSpec;
typedef struct _tagxPad;
typedef struct zScene;
typedef struct xSFXAsset;
typedef struct xMat3x3;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct xCutsceneTime;
typedef struct RwObject;
typedef struct _tagEmitOffsetPoint;
typedef struct RwLLLink;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct RxIoSpec;
typedef struct tri_data_0;
typedef struct _tagiPad;
typedef struct xCutsceneInfo;
typedef struct zSurfTextureAnim;
typedef struct xCutsceneData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xBaseAsset;
typedef struct xPEVCyl;
typedef struct RwPlane;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xParSys;
typedef struct xParInterp;
typedef struct RxCluster;
typedef struct zSurfacePropTexAnim;
typedef struct RxPipelineNodeParam;
typedef struct xGridIterator;
typedef struct _class_0;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct xClumpCollBSPVertInfo;
typedef struct zGlobals;
typedef enum RwFogType;
typedef struct xClumpCollBSPTriangle;
typedef struct xPEEntBone;
typedef struct RwRGBAReal;
typedef struct zGlobalSettings;
typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct xAnimMultiFileBase;
typedef struct RwLinkList;
typedef struct xCutsceneZbuffer;
typedef struct zPlayerLassoInfo;
typedef struct _zPortal;
typedef struct zLedgeGrabParams;
typedef struct zSurfacePropUVFX;
typedef struct zSurfColorFX;
typedef struct RwV2d;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xPECircle;
typedef enum _zPlayerWallJumpState;
typedef struct _class_2;
typedef struct xBBox;

typedef void(*type_1)(zFrag*, zFragAsset*);
typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_8)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_11)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
typedef RpClump*(*type_15)(RpClump*, void*);
typedef int32(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(RxNodeDefinition*);
typedef int32(*type_22)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef void(*type_26)(RxPipelineNode*);
typedef uint32(*type_27)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_28)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_32)(uint32);
typedef void(*type_33)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_37)(xBase*);
typedef int8*(*type_39)(uint32);
typedef RpAtomic*(*type_44)(RpAtomic*);
typedef void(*type_45)(xEnt*, xScene*, float32);
typedef void(*type_50)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, float32, xEntFrame*);
typedef xEnt*(*type_58)(xEnt*, xScene*, void*);
typedef uint32(*type_59)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_60)(void*);
typedef void(*type_61)(xEnt*);
typedef uint32(*type_67)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_68)(xEnt*, xScene*, float32, void*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(zEntDestructObj&, void*);
typedef int32(*type_82)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_83)(xEnt*, xScene*, float32);
typedef xEnt*(*type_86)(xEnt*, xScene*, void*);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_93)(xEnt*, xVec3*);
typedef RwCamera*(*type_100)(RwCamera*);
typedef void(*type_102)(xMemPool*, void*);
typedef void(*type_109)(RwResEntry*);
typedef void(*type_113)(xEnt*);
typedef void(*type_115)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_116)(void*, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);
typedef void(*type_125)(xAnimPlay*, xAnimState*);
typedef void(*type_133)(zEntDestructObj&, void*);

typedef xAnimMultiFileEntry type_0[1];
typedef float32 type_3[22];
typedef float32 type_4[22];
typedef xCutsceneZbuffer type_5[4];
typedef RwFrustumPlane type_6[6];
typedef xParInterp type_7[1];
typedef uint32 type_9[2];
typedef uint32 type_12[15];
typedef uint32 type_13[15];
typedef RwV3d type_14[8];
typedef uint32 type_16[2];
typedef uint32 type_18[15];
typedef int8 type_19[128];
typedef uint32 type_21[2];
typedef RwTexCoords* type_23[8];
typedef uint32 type_25[15];
typedef zSurfacePropTexAnim type_29[2];
typedef analog_data type_30[2];
typedef xParInterp type_31[4];
typedef zSurfacePropUVFX type_34[2];
typedef xParInterp type_35[4];
typedef xVec3 type_36[3];
typedef uint32 type_38[72];
typedef int8 type_40[4];
typedef int8 type_41[32];
typedef xBase* type_42[72];
typedef uint16 type_43[3];
typedef int8 type_46[80];
typedef uint8 type_47[2];
typedef float32 type_48[16];
typedef uint8 type_49[3];
typedef float32 type_51[4];
typedef uint32 type_53[2];
typedef uint8 type_54[2];
typedef float32 type_56[6];
typedef xVec4 type_57[12];
typedef float32 type_62[3];
typedef float32 type_63[3];
typedef int8 type_64[16];
typedef xModelTag type_65[2];
typedef float32 type_66[3];
typedef uint32 type_70[4];
typedef int8 type_71[16];
typedef RwTexCoords* type_72[8];
typedef xEnt* type_74[111];
typedef zSurfTextureAnim type_75[2];
typedef xVec3 type_76[4];
typedef int32 type_77[2];
typedef float32 type_78[4];
typedef uint32 type_79[2];
typedef int32 type_80[2][3];
typedef int32 type_81[2][3][4];
typedef zSurfUVFX type_84[2];
typedef RpLight* type_85[2];
typedef RwFrame* type_87[2];
typedef uint8 type_89[3];
typedef int8 type_90[128];
typedef int8 type_91[128][6];
typedef uint8 type_94[3];
typedef uint8 type_95[14];
typedef xModelTag type_96[4];
typedef uint8 type_97[3];
typedef int8 type_98[32];
typedef xModelInstance* type_99[14];
typedef xCollis type_101[18];
typedef int8 type_103[80];
typedef uint8 type_104[2];
typedef uint8 type_105[4];
typedef int8 type_106[32];
typedef int8 type_107[32];
typedef float32 type_108[15];
typedef float32 type_110[2];
typedef float32 type_111[15];
typedef uint8 type_112[3];
typedef uint32 type_114[15];
typedef uint8 type_117[22];
typedef uint8 type_118[22];
typedef float32 type_119[2];
typedef uint8 type_120[3];
typedef int8 type_121[16];
typedef RxCluster type_122[1];
typedef int8 type_123[16];
typedef float32 type_126[2];
typedef uint16 type_127[3];
typedef xVec3 type_128[5];
typedef xVec3 type_129[60];
typedef float32 type_130[2];
typedef uint8 type_131[5];
typedef uint8 type_132[2];

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

struct zFragAsset
{
	zFragType type;
	uint32 id;
	uint32 parentID[2];
	float32 lifetime;
	float32 delay;
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
	_class_0 anim_coll;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xCutsceneZbufferHack
{
	int8* name;
	xCutsceneZbuffer times[4];
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct zShrapnelAsset
{
	int32 fassetCount;
	uint32 shrapnelID;
	void(*initCB)(zShrapnelAsset*, xModelInstance*, xVec3*, void(*)(zFrag*, zFragAsset*));
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
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
	uint32 pad[4];
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

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	int32 offset;
	int32 length;
};

struct _tagEmitSphere
{
	float32 radius;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct zEntDestructObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint32 health;
	uint32 spawnItemID;
	uint32 dflags;
	uint8 collType;
	uint8 fxType;
	uint8 pad[2];
	float32 blast_radius;
	float32 blast_strength;
	uint32 shrapnelID_destroy;
	uint32 shrapnelID_hit;
	uint32 sfx_destroy;
	uint32 sfx_hit;
	uint32 hitModel;
	uint32 destroyModel;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	xCutsceneZbufferHack* zhack;
	float32 oldfov;
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

struct zSurfAssetBase : xBaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
	float32 oob_delay;
	float32 walljump_scale_xz;
	float32 walljump_scale_y;
	float32 damage_timer;
	float32 damage_bounce;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct zEntHangable
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xCutsceneMgrAsset : xBaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct zFrag
{
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
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
	XCSNNosey* cb_nosey;
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct rxReq
{
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct zPlatform
{
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zEntDestructObj : zEnt
{
	zEntDestructObjAsset* dasset;
	uint32 state;
	uint32 healthCnt;
	float32 fx_timer;
	zParEmitter* fx_emitter;
	float32 respawn_timer;
	uint32 throw_target;
	zShrapnelAsset* shrapnel_destroy;
	zShrapnelAsset* shrapnel_hit;
	xModelInstance* base_model;
	xModelInstance* hit_model;
	xModelInstance* destroy_model;
	void(*destroy_notify)(zEntDestructObj&, void*);
	void* notify_context;
	xSFXAsset* sfx_destroy;
	xSFXAsset* sfx_hit;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct zCutsceneMgr : xCutsceneMgr
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct anim_coll_data
{
	uint32 flags;
	uint32 bones;
	xMat4x3 old_mat;
	xMat4x3 new_mat;
	uint32 verts_size;
	xVec3* verts;
	xVec3* normals;
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

struct xPEEntBound
{
	uint8 flags;
	uint8 type;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
	float32 deflection;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct zParEmitter : xParEmitter
{
};

struct xEntBoulder
{
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
};

struct xFFX
{
	uint32 flags;
	void(*doEffect)(xEnt*, xScene*, float32, void*);
	void* fdata;
	xFFX* next;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct tag_xFile
{
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RpSector
{
	int32 type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct xParGroup
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xSFXAsset : xBaseAsset
{
	uint16 flagsSFX;
	uint16 freq;
	float32 freqm;
	uint32 soundAssetID;
	uint32 attachID;
	uint8 loopCount;
	uint8 priority;
	uint8 volume;
	uint8 pad;
	xVec3 pos;
	float32 innerRadius;
	float32 outerRadius;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct _tagiPad
{
	int32 port;
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
	int8 SoundLeft[16];
	int8 SoundRight[16];
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xParSys
{
};

struct xParInterp
{
	float32 val[2];
	uint32 interp;
	float32 freq;
	float32 oofreq;
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	uint32 delfound;
};

struct _class_0
{
	xVec3* verts;
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 nearPlane;
	float32 farPlane;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	float32 minmax_timer[2];
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

int8 buffer[16];
int8 buffer[16];
int8* g_xEnt_FMT;
float32 nsn_angle;
float32 sEntityTimePassed;
xBox all_ents_box;
int32 all_ents_box_init;
int32 setMaterialTextureRestore;
int32 sSetPipeline;
RxPipeline* oldPipe;
int32 xent_entent;
uint32 gActiveHeap;
zGlobals globals;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
int32 gGridIterActive;
xEnt*(*xEntCollCheckOneEntNoDepen)(xEnt*, xScene*, void*);
void(*stacked_owner_destroyed)(zEntDestructObj&, void*);
void(*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*);
xVec3 g_O3;
xScene* g_xSceneCur;
void(*xEntRender)(xEnt*);
void(*xEntUpdate)(xEnt*, xScene*, float32);
void(*xEntDefaultTranslate)(xEnt*, xVec3*, xMat4x3*);
void(*xEntDefaultBoundUpdate)(xEnt*, xVec3*);
xMat4x3 g_I3;

void xEntInitShadow(xEnt& ent, xEntShadow& shadow);
void xEntReposition(xEnt& ent, xMat4x3& mat);
uint8 xEntValidType(uint8 type);
void xEntAnimateCollision(xEnt& ent, uint8 on);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(float32 angle);
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt);
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*));
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*), xGrid* grid);
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginCollide(xEnt* ent);
void xEntCollide(xEnt* ent, xScene* sc, float32 dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt);
void xEntMove(xEnt* ent, xScene* sc, float32 dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntBeginUpdate(xEnt* ent, float32 dt);
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt);
void xEntRender(xEnt* ent);
void xEntRestorePipeline(RpAtomic* model);
void xEntRestorePipeline(xModelInstance* model);
void xEntSetupPipeline(xSurface* surf, RpAtomic* model);
void xEntSetupPipeline(xModelInstance* model);
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel);
void xEntReset(xEnt* ent);
void xEntLoad(xEnt* ent, xSerial* s);
void xEntSave(xEnt* ent, xSerial* s);
void xEntSetup(xEnt* ent);
void stacked_owner_destroyed(void* context);
uint8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float32 max_dist);
void xEntInitForType(xEnt* ent);
void xEntInit(xEnt* ent, xEntAsset* asset);
void xEntAddHittableFlag(xEnt* ent);
void xEntSceneExit();
void xEntSceneInit();
void xEntSetTimePassed(float32 sec);
void refresh(xEnt& ent);
void reset(xEnt& ent);

// xEntInitShadow__FR4xEntR10xEntShadow
// Start address: 0x1d0c30
void xEntInitShadow(xEnt& ent, xEntShadow& shadow)
{
	// Line 3992, Address: 0x1d0c30, Func Offset: 0
	// Line 3993, Address: 0x1d0c34, Func Offset: 0x4
	// Line 3996, Address: 0x1d0c44, Func Offset: 0x14
	// Line 3994, Address: 0x1d0c48, Func Offset: 0x18
	// Line 3995, Address: 0x1d0c64, Func Offset: 0x34
	// Line 3996, Address: 0x1d0c68, Func Offset: 0x38
	// Line 3998, Address: 0x1d0c6c, Func Offset: 0x3c
	// Line 3999, Address: 0x1d0c70, Func Offset: 0x40
	// Func End, Address: 0x1d0c78, Func Offset: 0x48
}

// xEntReposition__FR4xEntRC7xMat4x3
// Start address: 0x1d0c80
void xEntReposition(xEnt& ent, xMat4x3& mat)
{
	// Line 3948, Address: 0x1d0c80, Func Offset: 0
	// Line 3951, Address: 0x1d0c84, Func Offset: 0x4
	// Line 3948, Address: 0x1d0c88, Func Offset: 0x8
	// Line 3951, Address: 0x1d0c8c, Func Offset: 0xc
	// Line 3948, Address: 0x1d0c90, Func Offset: 0x10
	// Line 3951, Address: 0x1d0c94, Func Offset: 0x14
	// Line 3952, Address: 0x1d0d24, Func Offset: 0xa4
	// Line 3953, Address: 0x1d0d38, Func Offset: 0xb8
	// Line 3954, Address: 0x1d0dc4, Func Offset: 0x144
	// Line 3955, Address: 0x1d0e54, Func Offset: 0x1d4
	// Line 3956, Address: 0x1d0e5c, Func Offset: 0x1dc
	// Line 3958, Address: 0x1d0ee0, Func Offset: 0x260
	// Line 3957, Address: 0x1d0ee4, Func Offset: 0x264
	// Line 3958, Address: 0x1d0ef8, Func Offset: 0x278
	// Line 3959, Address: 0x1d0f00, Func Offset: 0x280
	// Line 3960, Address: 0x1d0f08, Func Offset: 0x288
	// Func End, Address: 0x1d0f18, Func Offset: 0x298
}

// xEntValidType__FUc
// Start address: 0x1d0f20
uint8 xEntValidType(uint8 type)
{
	// Line 3870, Address: 0x1d0f24, Func Offset: 0x4
	// Line 3895, Address: 0x1d0f68, Func Offset: 0x48
	// Func End, Address: 0x1d0f70, Func Offset: 0x50
}

// xEntAnimateCollision__FR4xEntb
// Start address: 0x1d0f70
void xEntAnimateCollision(xEnt& ent, uint8 on)
{
	// Line 3853, Address: 0x1d0f70, Func Offset: 0
	// Line 3854, Address: 0x1d0f7c, Func Offset: 0xc
	// Line 3856, Address: 0x1d0f94, Func Offset: 0x24
	// Line 3857, Address: 0x1d0f9c, Func Offset: 0x2c
	// Line 3859, Address: 0x1d0fa8, Func Offset: 0x38
	// Line 3860, Address: 0x1d0fbc, Func Offset: 0x4c
	// Line 3861, Address: 0x1d0fcc, Func Offset: 0x5c
	// Line 3862, Address: 0x1d0fd0, Func Offset: 0x60
	// Line 3863, Address: 0x1d0fd8, Func Offset: 0x68
	// Line 3864, Address: 0x1d0fe0, Func Offset: 0x70
	// Line 3865, Address: 0x1d0ff8, Func Offset: 0x88
	// Line 3866, Address: 0x1d1000, Func Offset: 0x90
	// Func End, Address: 0x1d1010, Func Offset: 0xa0
}

// xEntGetAllEntsBox__Fv
// Start address: 0x1d1010
xBox* xEntGetAllEntsBox()
{
	// Line 3227, Address: 0x1d1010, Func Offset: 0
	// Line 3228, Address: 0x1d1014, Func Offset: 0x4
	// Func End, Address: 0x1d101c, Func Offset: 0xc
}

// xEntSetNostepNormAngle__Ff
// Start address: 0x1d1020
void xEntSetNostepNormAngle(float32 angle)
{
	// Line 3218, Address: 0x1d1020, Func Offset: 0
	// Func End, Address: 0x1d1028, Func Offset: 0x8
}

// xEntCollideWalls__FP4xEntP6xScenef
// Start address: 0x1d1030
void xEntCollideWalls(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	xEnt* cent;
	uint8 sidx;
	uint8 idx;
	float32 sbr;
	// Line 3049, Address: 0x1d1030, Func Offset: 0
	// Line 3058, Address: 0x1d1034, Func Offset: 0x4
	// Line 3049, Address: 0x1d1038, Func Offset: 0x8
	// Line 3058, Address: 0x1d1064, Func Offset: 0x34
	// Line 3061, Address: 0x1d1088, Func Offset: 0x58
	// Line 3062, Address: 0x1d1098, Func Offset: 0x68
	// Line 3064, Address: 0x1d109c, Func Offset: 0x6c
	// Line 3065, Address: 0x1d10bc, Func Offset: 0x8c
	// Line 3066, Address: 0x1d10c0, Func Offset: 0x90
	// Line 3065, Address: 0x1d10c4, Func Offset: 0x94
	// Line 3068, Address: 0x1d10c8, Func Offset: 0x98
	// Line 3095, Address: 0x1d1124, Func Offset: 0xf4
	// Line 3097, Address: 0x1d1150, Func Offset: 0x120
	// Line 3099, Address: 0x1d1158, Func Offset: 0x128
	// Line 3102, Address: 0x1d118c, Func Offset: 0x15c
	// Line 3103, Address: 0x1d11a4, Func Offset: 0x174
	// Line 3102, Address: 0x1d11a8, Func Offset: 0x178
	// Line 3104, Address: 0x1d11ac, Func Offset: 0x17c
	// Line 3105, Address: 0x1d11bc, Func Offset: 0x18c
	// Line 3107, Address: 0x1d11c0, Func Offset: 0x190
	// Line 3108, Address: 0x1d11dc, Func Offset: 0x1ac
	// Line 3109, Address: 0x1d11e0, Func Offset: 0x1b0
	// Line 3108, Address: 0x1d11e4, Func Offset: 0x1b4
	// Line 3111, Address: 0x1d11e8, Func Offset: 0x1b8
	// Line 3133, Address: 0x1d1244, Func Offset: 0x214
	// Line 3135, Address: 0x1d1248, Func Offset: 0x218
	// Line 3138, Address: 0x1d127c, Func Offset: 0x24c
	// Line 3139, Address: 0x1d1294, Func Offset: 0x264
	// Line 3138, Address: 0x1d1298, Func Offset: 0x268
	// Line 3140, Address: 0x1d129c, Func Offset: 0x26c
	// Line 3141, Address: 0x1d12ac, Func Offset: 0x27c
	// Line 3143, Address: 0x1d12b0, Func Offset: 0x280
	// Line 3144, Address: 0x1d12cc, Func Offset: 0x29c
	// Line 3145, Address: 0x1d12d0, Func Offset: 0x2a0
	// Line 3144, Address: 0x1d12d4, Func Offset: 0x2a4
	// Line 3147, Address: 0x1d12d8, Func Offset: 0x2a8
	// Line 3169, Address: 0x1d1334, Func Offset: 0x304
	// Line 3171, Address: 0x1d1338, Func Offset: 0x308
	// Line 3174, Address: 0x1d136c, Func Offset: 0x33c
	// Line 3175, Address: 0x1d1384, Func Offset: 0x354
	// Line 3174, Address: 0x1d1388, Func Offset: 0x358
	// Line 3176, Address: 0x1d138c, Func Offset: 0x35c
	// Line 3177, Address: 0x1d139c, Func Offset: 0x36c
	// Line 3179, Address: 0x1d13a0, Func Offset: 0x370
	// Line 3180, Address: 0x1d13b8, Func Offset: 0x388
	// Line 3181, Address: 0x1d13c4, Func Offset: 0x394
	// Line 3196, Address: 0x1d13e4, Func Offset: 0x3b4
	// Line 3198, Address: 0x1d13e8, Func Offset: 0x3b8
	// Line 3201, Address: 0x1d141c, Func Offset: 0x3ec
	// Line 3202, Address: 0x1d1434, Func Offset: 0x404
	// Line 3203, Address: 0x1d1438, Func Offset: 0x408
	// Func End, Address: 0x1d1464, Func Offset: 0x434
}

// xEntCollideCeiling__FP4xEntP6xScenef
// Start address: 0x1d1470
void xEntCollideCeiling(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	uint8 idx;
	xCollis* ml;
	float32 sbr;
	xCollis* mf;
	xEnt* fent;
	float32 ceil_dist;
	// Line 2957, Address: 0x1d1470, Func Offset: 0
	// Line 2971, Address: 0x1d1474, Func Offset: 0x4
	// Line 2957, Address: 0x1d1478, Func Offset: 0x8
	// Line 2964, Address: 0x1d14a4, Func Offset: 0x34
	// Line 2971, Address: 0x1d14ac, Func Offset: 0x3c
	// Line 2964, Address: 0x1d14b0, Func Offset: 0x40
	// Line 2971, Address: 0x1d14b4, Func Offset: 0x44
	// Line 2979, Address: 0x1d14d8, Func Offset: 0x68
	// Line 2980, Address: 0x1d14e0, Func Offset: 0x70
	// Line 2982, Address: 0x1d14f8, Func Offset: 0x88
	// Line 2985, Address: 0x1d1504, Func Offset: 0x94
	// Line 2991, Address: 0x1d1570, Func Offset: 0x100
	// Line 3004, Address: 0x1d1578, Func Offset: 0x108
	// Line 3015, Address: 0x1d1588, Func Offset: 0x118
	// Line 3017, Address: 0x1d15c0, Func Offset: 0x150
	// Line 3021, Address: 0x1d15c4, Func Offset: 0x154
	// Line 3027, Address: 0x1d15e8, Func Offset: 0x178
	// Line 3028, Address: 0x1d15f0, Func Offset: 0x180
	// Line 3032, Address: 0x1d15f8, Func Offset: 0x188
	// Line 3028, Address: 0x1d15fc, Func Offset: 0x18c
	// Line 3032, Address: 0x1d1600, Func Offset: 0x190
	// Line 3028, Address: 0x1d1628, Func Offset: 0x1b8
	// Line 3032, Address: 0x1d162c, Func Offset: 0x1bc
	// Line 3037, Address: 0x1d1634, Func Offset: 0x1c4
	// Line 3032, Address: 0x1d1638, Func Offset: 0x1c8
	// Line 3033, Address: 0x1d16cc, Func Offset: 0x25c
	// Line 3037, Address: 0x1d16d4, Func Offset: 0x264
	// Line 3038, Address: 0x1d16dc, Func Offset: 0x26c
	// Line 3041, Address: 0x1d16f0, Func Offset: 0x280
	// Line 3045, Address: 0x1d16f8, Func Offset: 0x288
	// Func End, Address: 0x1d1724, Func Offset: 0x2b4
}

// xEntCollideFloor__FP4xEntP6xScenef
// Start address: 0x1d1730
void xEntCollideFloor(xEnt* p, xScene* sc, float32 dt)
{
	xCollis* coll;
	uint8 idx;
	xCollis* ml;
	xVec3 motion;
	float32 mlen;
	int32 stepping;
	float32 sbr;
	xCollis* mf;
	xEnt* fent;
	float32 flr_dist;
	xEnt* fent;
	// Line 2829, Address: 0x1d1730, Func Offset: 0
	// Line 2847, Address: 0x1d1734, Func Offset: 0x4
	// Line 2829, Address: 0x1d1738, Func Offset: 0x8
	// Line 2845, Address: 0x1d1744, Func Offset: 0x14
	// Line 2829, Address: 0x1d1748, Func Offset: 0x18
	// Line 2836, Address: 0x1d1770, Func Offset: 0x40
	// Line 2847, Address: 0x1d1778, Func Offset: 0x48
	// Line 2836, Address: 0x1d177c, Func Offset: 0x4c
	// Line 2847, Address: 0x1d1780, Func Offset: 0x50
	// Line 2850, Address: 0x1d17a0, Func Offset: 0x70
	// Line 2858, Address: 0x1d17a4, Func Offset: 0x74
	// Line 2850, Address: 0x1d17a8, Func Offset: 0x78
	// Line 2851, Address: 0x1d17b4, Func Offset: 0x84
	// Line 2850, Address: 0x1d17b8, Func Offset: 0x88
	// Line 2851, Address: 0x1d17c0, Func Offset: 0x90
	// Line 2850, Address: 0x1d17c4, Func Offset: 0x94
	// Line 2851, Address: 0x1d17c8, Func Offset: 0x98
	// Line 2854, Address: 0x1d17e0, Func Offset: 0xb0
	// Line 2851, Address: 0x1d17e4, Func Offset: 0xb4
	// Line 2854, Address: 0x1d17e8, Func Offset: 0xb8
	// Line 2851, Address: 0x1d17ec, Func Offset: 0xbc
	// Line 2853, Address: 0x1d17f8, Func Offset: 0xc8
	// Line 2854, Address: 0x1d17fc, Func Offset: 0xcc
	// Line 2851, Address: 0x1d1800, Func Offset: 0xd0
	// Line 2854, Address: 0x1d1804, Func Offset: 0xd4
	// Line 2858, Address: 0x1d1820, Func Offset: 0xf0
	// Line 2859, Address: 0x1d1828, Func Offset: 0xf8
	// Line 2861, Address: 0x1d1844, Func Offset: 0x114
	// Line 2864, Address: 0x1d1854, Func Offset: 0x124
	// Line 2866, Address: 0x1d1858, Func Offset: 0x128
	// Line 2867, Address: 0x1d1860, Func Offset: 0x130
	// Line 2878, Address: 0x1d18b0, Func Offset: 0x180
	// Line 2884, Address: 0x1d1920, Func Offset: 0x1f0
	// Line 2896, Address: 0x1d1928, Func Offset: 0x1f8
	// Line 2903, Address: 0x1d1938, Func Offset: 0x208
	// Line 2906, Address: 0x1d194c, Func Offset: 0x21c
	// Line 2910, Address: 0x1d19b8, Func Offset: 0x288
	// Line 2913, Address: 0x1d19bc, Func Offset: 0x28c
	// Line 2915, Address: 0x1d1a28, Func Offset: 0x2f8
	// Line 2914, Address: 0x1d1a2c, Func Offset: 0x2fc
	// Line 2918, Address: 0x1d1a30, Func Offset: 0x300
	// Line 2922, Address: 0x1d1a50, Func Offset: 0x320
	// Line 2923, Address: 0x1d1a58, Func Offset: 0x328
	// Line 2925, Address: 0x1d1a60, Func Offset: 0x330
	// Line 2923, Address: 0x1d1a64, Func Offset: 0x334
	// Line 2925, Address: 0x1d1a68, Func Offset: 0x338
	// Line 2923, Address: 0x1d1a90, Func Offset: 0x360
	// Line 2925, Address: 0x1d1a94, Func Offset: 0x364
	// Line 2929, Address: 0x1d1a9c, Func Offset: 0x36c
	// Line 2925, Address: 0x1d1aa0, Func Offset: 0x370
	// Line 2929, Address: 0x1d1b30, Func Offset: 0x400
	// Line 2930, Address: 0x1d1b38, Func Offset: 0x408
	// Line 2934, Address: 0x1d1b40, Func Offset: 0x410
	// Line 2935, Address: 0x1d1b48, Func Offset: 0x418
	// Line 2938, Address: 0x1d1b68, Func Offset: 0x438
	// Line 2939, Address: 0x1d1b7c, Func Offset: 0x44c
	// Line 2940, Address: 0x1d1b8c, Func Offset: 0x45c
	// Line 2942, Address: 0x1d1b98, Func Offset: 0x468
	// Line 2945, Address: 0x1d1bac, Func Offset: 0x47c
	// Line 2948, Address: 0x1d1bb0, Func Offset: 0x480
	// Line 2952, Address: 0x1d1bb8, Func Offset: 0x488
	// Func End, Address: 0x1d1bec, Func Offset: 0x4bc
}

// xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv
// Start address: 0x1d1bf0
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	uint32 modl_coll;
	xBound tmp;
	xBound* bptr;
	uint8 ncolls;
	xVec3* upper;
	xVec3* lower;
	uint8 idx;
	float32 rsum;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 hsqr;
	// Line 2655, Address: 0x1d1bf0, Func Offset: 0
	// Line 2659, Address: 0x1d1bf4, Func Offset: 0x4
	// Line 2655, Address: 0x1d1bf8, Func Offset: 0x8
	// Line 2663, Address: 0x1d1c04, Func Offset: 0x14
	// Line 2655, Address: 0x1d1c08, Func Offset: 0x18
	// Line 2659, Address: 0x1d1c18, Func Offset: 0x28
	// Line 2663, Address: 0x1d1c1c, Func Offset: 0x2c
	// Line 2665, Address: 0x1d1c24, Func Offset: 0x34
	// Line 2669, Address: 0x1d1c30, Func Offset: 0x40
	// Line 2670, Address: 0x1d1c34, Func Offset: 0x44
	// Line 2671, Address: 0x1d1c3c, Func Offset: 0x4c
	// Line 2670, Address: 0x1d1c40, Func Offset: 0x50
	// Line 2672, Address: 0x1d1c44, Func Offset: 0x54
	// Line 2676, Address: 0x1d1c54, Func Offset: 0x64
	// Line 2677, Address: 0x1d1c5c, Func Offset: 0x6c
	// Line 2679, Address: 0x1d1c60, Func Offset: 0x70
	// Line 2686, Address: 0x1d1c70, Func Offset: 0x80
	// Line 2688, Address: 0x1d1c88, Func Offset: 0x98
	// Line 2690, Address: 0x1d1c94, Func Offset: 0xa4
	// Line 2694, Address: 0x1d1c98, Func Offset: 0xa8
	// Line 2692, Address: 0x1d1c9c, Func Offset: 0xac
	// Line 2694, Address: 0x1d1cac, Func Offset: 0xbc
	// Line 2692, Address: 0x1d1cb0, Func Offset: 0xc0
	// Line 2694, Address: 0x1d1cb4, Func Offset: 0xc4
	// Line 2697, Address: 0x1d1cbc, Func Offset: 0xcc
	// Line 2698, Address: 0x1d1cc8, Func Offset: 0xd8
	// Line 2702, Address: 0x1d1ccc, Func Offset: 0xdc
	// Line 2704, Address: 0x1d1cd0, Func Offset: 0xe0
	// Line 2708, Address: 0x1d1cd8, Func Offset: 0xe8
	// Line 2709, Address: 0x1d1ce0, Func Offset: 0xf0
	// Line 2712, Address: 0x1d1ce8, Func Offset: 0xf8
	// Line 2714, Address: 0x1d1cf8, Func Offset: 0x108
	// Line 2717, Address: 0x1d1d08, Func Offset: 0x118
	// Line 2728, Address: 0x1d1d10, Func Offset: 0x120
	// Line 2721, Address: 0x1d1d14, Func Offset: 0x124
	// Line 2728, Address: 0x1d1d1c, Func Offset: 0x12c
	// Line 2730, Address: 0x1d1d28, Func Offset: 0x138
	// Line 2737, Address: 0x1d1d68, Func Offset: 0x178
	// Line 2741, Address: 0x1d1d7c, Func Offset: 0x18c
	// Line 2744, Address: 0x1d1d80, Func Offset: 0x190
	// Line 2742, Address: 0x1d1d84, Func Offset: 0x194
	// Line 2743, Address: 0x1d1d88, Func Offset: 0x198
	// Line 2742, Address: 0x1d1d8c, Func Offset: 0x19c
	// Line 2744, Address: 0x1d1d90, Func Offset: 0x1a0
	// Line 2741, Address: 0x1d1d94, Func Offset: 0x1a4
	// Line 2742, Address: 0x1d1d98, Func Offset: 0x1a8
	// Line 2743, Address: 0x1d1da0, Func Offset: 0x1b0
	// Line 2744, Address: 0x1d1da4, Func Offset: 0x1b4
	// Line 2742, Address: 0x1d1dac, Func Offset: 0x1bc
	// Line 2743, Address: 0x1d1dd4, Func Offset: 0x1e4
	// Line 2744, Address: 0x1d1df8, Func Offset: 0x208
	// Line 2747, Address: 0x1d1e30, Func Offset: 0x240
	// Line 2757, Address: 0x1d1e74, Func Offset: 0x284
	// Line 2763, Address: 0x1d1e7c, Func Offset: 0x28c
	// Line 2766, Address: 0x1d1e98, Func Offset: 0x2a8
	// Line 2767, Address: 0x1d1e9c, Func Offset: 0x2ac
	// Line 2769, Address: 0x1d1ea0, Func Offset: 0x2b0
	// Line 2767, Address: 0x1d1eac, Func Offset: 0x2bc
	// Line 2769, Address: 0x1d1eb0, Func Offset: 0x2c0
	// Line 2763, Address: 0x1d1f90, Func Offset: 0x3a0
	// Line 2769, Address: 0x1d1f94, Func Offset: 0x3a4
	// Line 2763, Address: 0x1d1fac, Func Offset: 0x3bc
	// Line 2769, Address: 0x1d1fb0, Func Offset: 0x3c0
	// Line 2770, Address: 0x1d1fb8, Func Offset: 0x3c8
	// Line 2769, Address: 0x1d1fc4, Func Offset: 0x3d4
	// Line 2770, Address: 0x1d1fd8, Func Offset: 0x3e8
	// Line 2775, Address: 0x1d1fe0, Func Offset: 0x3f0
	// Line 2776, Address: 0x1d1fec, Func Offset: 0x3fc
	// Line 2778, Address: 0x1d1ff0, Func Offset: 0x400
	// Line 2779, Address: 0x1d1ff8, Func Offset: 0x408
	// Line 2780, Address: 0x1d1ffc, Func Offset: 0x40c
	// Line 2782, Address: 0x1d2004, Func Offset: 0x414
	// Line 2794, Address: 0x1d2014, Func Offset: 0x424
	// Line 2801, Address: 0x1d2060, Func Offset: 0x470
	// Line 2805, Address: 0x1d2088, Func Offset: 0x498
	// Line 2801, Address: 0x1d208c, Func Offset: 0x49c
	// Line 2805, Address: 0x1d2090, Func Offset: 0x4a0
	// Line 2808, Address: 0x1d209c, Func Offset: 0x4ac
	// Line 2810, Address: 0x1d20b0, Func Offset: 0x4c0
	// Line 2813, Address: 0x1d20bc, Func Offset: 0x4cc
	// Line 2815, Address: 0x1d20c4, Func Offset: 0x4d4
	// Line 2810, Address: 0x1d20c8, Func Offset: 0x4d8
	// Line 2809, Address: 0x1d20cc, Func Offset: 0x4dc
	// Line 2810, Address: 0x1d20d0, Func Offset: 0x4e0
	// Line 2811, Address: 0x1d20d4, Func Offset: 0x4e4
	// Line 2813, Address: 0x1d20d8, Func Offset: 0x4e8
	// Line 2814, Address: 0x1d20ec, Func Offset: 0x4fc
	// Line 2815, Address: 0x1d20f0, Func Offset: 0x500
	// Line 2816, Address: 0x1d20f4, Func Offset: 0x504
	// Line 2824, Address: 0x1d20f8, Func Offset: 0x508
	// Line 2823, Address: 0x1d20fc, Func Offset: 0x50c
	// Line 2825, Address: 0x1d2100, Func Offset: 0x510
	// Func End, Address: 0x1d2120, Func Offset: 0x530
}

// xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2120
void xEntCollCheckNPCs(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 2642, Address: 0x1d2120, Func Offset: 0
	// Line 2647, Address: 0x1d2134, Func Offset: 0x14
	// Line 2648, Address: 0x1d2138, Func Offset: 0x18
	// Line 2649, Address: 0x1d2150, Func Offset: 0x30
	// Line 2650, Address: 0x1d2158, Func Offset: 0x38
	// Func End, Address: 0x1d2168, Func Offset: 0x48
}

// xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2170
void xEntCollCheckDyns(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 2630, Address: 0x1d2170, Func Offset: 0
	// Line 2635, Address: 0x1d2184, Func Offset: 0x14
	// Line 2636, Address: 0x1d2188, Func Offset: 0x18
	// Line 2637, Address: 0x1d21a0, Func Offset: 0x30
	// Line 2638, Address: 0x1d21a8, Func Offset: 0x38
	// Func End, Address: 0x1d21b8, Func Offset: 0x48
}

// xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d21c0
void xEntCollCheckStats(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 2619, Address: 0x1d21c0, Func Offset: 0
	// Line 2624, Address: 0x1d21d4, Func Offset: 0x14
	// Line 2625, Address: 0x1d21d8, Func Offset: 0x18
	// Line 2626, Address: 0x1d21f0, Func Offset: 0x30
	// Line 2627, Address: 0x1d21f8, Func Offset: 0x38
	// Func End, Address: 0x1d2208, Func Offset: 0x48
}

// xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2210
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 2609, Address: 0x1d2210, Func Offset: 0
	// Line 2613, Address: 0x1d2214, Func Offset: 0x4
	// Line 2609, Address: 0x1d2218, Func Offset: 0x8
	// Line 2613, Address: 0x1d221c, Func Offset: 0xc
	// Line 2609, Address: 0x1d2220, Func Offset: 0x10
	// Line 2612, Address: 0x1d222c, Func Offset: 0x1c
	// Line 2613, Address: 0x1d2230, Func Offset: 0x20
	// Line 2614, Address: 0x1d223c, Func Offset: 0x2c
	// Line 2615, Address: 0x1d2244, Func Offset: 0x34
	// Func End, Address: 0x1d2254, Func Offset: 0x44
}

// xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2260
void xEntCollCheckByGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*))
{
	// Line 2597, Address: 0x1d2260, Func Offset: 0
	// Line 2602, Address: 0x1d2264, Func Offset: 0x4
	// Line 2597, Address: 0x1d2268, Func Offset: 0x8
	// Line 2602, Address: 0x1d226c, Func Offset: 0xc
	// Line 2597, Address: 0x1d2270, Func Offset: 0x10
	// Line 2600, Address: 0x1d228c, Func Offset: 0x2c
	// Line 2601, Address: 0x1d2298, Func Offset: 0x38
	// Line 2602, Address: 0x1d229c, Func Offset: 0x3c
	// Line 2603, Address: 0x1d22a4, Func Offset: 0x44
	// Line 2604, Address: 0x1d22c0, Func Offset: 0x60
	// Line 2605, Address: 0x1d22cc, Func Offset: 0x6c
	// Line 2606, Address: 0x1d22d4, Func Offset: 0x74
	// Func End, Address: 0x1d22ec, Func Offset: 0x8c
}

// xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid
// Start address: 0x1d22f0
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, xEnt*(*hitIt)(xEnt*, xScene*, void*), xGrid* grid)
{
	xGridIterator it;
	int32 px;
	int32 pz;
	xGridBound* cell;
	float32 clcenterx;
	float32 clcenterz;
	int32 i;
	int32 _x;
	int32 _z;
	int32 offs[2][3][4];
	int32 k;
	// Line 2524, Address: 0x1d22f0, Func Offset: 0
	// Line 2529, Address: 0x1d2320, Func Offset: 0x30
	// Line 2524, Address: 0x1d2324, Func Offset: 0x34
	// Line 2529, Address: 0x1d2328, Func Offset: 0x38
	// Line 2524, Address: 0x1d232c, Func Offset: 0x3c
	// Line 2529, Address: 0x1d2330, Func Offset: 0x40
	// Line 2524, Address: 0x1d2334, Func Offset: 0x44
	// Line 2529, Address: 0x1d2338, Func Offset: 0x48
	// Line 2530, Address: 0x1d2354, Func Offset: 0x64
	// Line 2532, Address: 0x1d2360, Func Offset: 0x70
	// Line 2535, Address: 0x1d2374, Func Offset: 0x84
	// Line 2536, Address: 0x1d2384, Func Offset: 0x94
	// Line 2535, Address: 0x1d2388, Func Offset: 0x98
	// Line 2537, Address: 0x1d238c, Func Offset: 0x9c
	// Line 2538, Address: 0x1d2478, Func Offset: 0x188
	// Line 2550, Address: 0x1d2480, Func Offset: 0x190
	// Line 2548, Address: 0x1d2484, Func Offset: 0x194
	// Line 2538, Address: 0x1d248c, Func Offset: 0x19c
	// Line 2550, Address: 0x1d2490, Func Offset: 0x1a0
	// Line 2549, Address: 0x1d2494, Func Offset: 0x1a4
	// Line 2548, Address: 0x1d2498, Func Offset: 0x1a8
	// Line 2550, Address: 0x1d24a8, Func Offset: 0x1b8
	// Line 2549, Address: 0x1d24ac, Func Offset: 0x1bc
	// Line 2552, Address: 0x1d24b0, Func Offset: 0x1c0
	// Line 2551, Address: 0x1d24b4, Func Offset: 0x1c4
	// Line 2549, Address: 0x1d24b8, Func Offset: 0x1c8
	// Line 2548, Address: 0x1d24bc, Func Offset: 0x1cc
	// Line 2549, Address: 0x1d24c0, Func Offset: 0x1d0
	// Line 2552, Address: 0x1d24c4, Func Offset: 0x1d4
	// Line 2553, Address: 0x1d24d0, Func Offset: 0x1e0
	// Line 2555, Address: 0x1d24e0, Func Offset: 0x1f0
	// Line 2556, Address: 0x1d24e8, Func Offset: 0x1f8
	// Line 2558, Address: 0x1d24ec, Func Offset: 0x1fc
	// Line 2559, Address: 0x1d24f8, Func Offset: 0x208
	// Line 2561, Address: 0x1d2508, Func Offset: 0x218
	// Line 2562, Address: 0x1d2510, Func Offset: 0x220
	// Line 2567, Address: 0x1d2518, Func Offset: 0x228
	// Line 2568, Address: 0x1d2530, Func Offset: 0x240
	// Line 2567, Address: 0x1d2534, Func Offset: 0x244
	// Line 2569, Address: 0x1d2538, Func Offset: 0x248
	// Line 2567, Address: 0x1d2540, Func Offset: 0x250
	// Line 2568, Address: 0x1d2550, Func Offset: 0x260
	// Line 2569, Address: 0x1d2554, Func Offset: 0x264
	// Line 2568, Address: 0x1d2558, Func Offset: 0x268
	// Line 2570, Address: 0x1d255c, Func Offset: 0x26c
	// Line 2571, Address: 0x1d25e8, Func Offset: 0x2f8
	// Line 2573, Address: 0x1d25f0, Func Offset: 0x300
	// Line 2576, Address: 0x1d2604, Func Offset: 0x314
	// Line 2577, Address: 0x1d2614, Func Offset: 0x324
	// Line 2576, Address: 0x1d2618, Func Offset: 0x328
	// Line 2578, Address: 0x1d261c, Func Offset: 0x32c
	// Line 2579, Address: 0x1d2708, Func Offset: 0x418
	// Line 2580, Address: 0x1d2710, Func Offset: 0x420
	// Line 2582, Address: 0x1d2720, Func Offset: 0x430
	// Line 2583, Address: 0x1d2758, Func Offset: 0x468
	// Line 2585, Address: 0x1d2760, Func Offset: 0x470
	// Line 2588, Address: 0x1d2774, Func Offset: 0x484
	// Line 2589, Address: 0x1d2784, Func Offset: 0x494
	// Line 2588, Address: 0x1d2788, Func Offset: 0x498
	// Line 2590, Address: 0x1d278c, Func Offset: 0x49c
	// Line 2591, Address: 0x1d2878, Func Offset: 0x588
	// Line 2593, Address: 0x1d2880, Func Offset: 0x590
	// Func End, Address: 0x1d28b0, Func Offset: 0x5c0
}

// xEntCollCheckEnv__FP4xEntP6xScene
// Start address: 0x1d28b0
void xEntCollCheckEnv(xEnt* p, xScene* sc)
{
	xCollis* coll;
	uint8 ncolls;
	// Line 2499, Address: 0x1d28b0, Func Offset: 0
	// Line 2513, Address: 0x1d28b4, Func Offset: 0x4
	// Line 2499, Address: 0x1d28b8, Func Offset: 0x8
	// Line 2513, Address: 0x1d28bc, Func Offset: 0xc
	// Line 2499, Address: 0x1d28c0, Func Offset: 0x10
	// Line 2513, Address: 0x1d28c4, Func Offset: 0x14
	// Line 2499, Address: 0x1d28c8, Func Offset: 0x18
	// Line 2510, Address: 0x1d28cc, Func Offset: 0x1c
	// Line 2513, Address: 0x1d28d0, Func Offset: 0x20
	// Line 2508, Address: 0x1d28d8, Func Offset: 0x28
	// Line 2509, Address: 0x1d28e4, Func Offset: 0x34
	// Line 2510, Address: 0x1d28f8, Func Offset: 0x48
	// Line 2509, Address: 0x1d28fc, Func Offset: 0x4c
	// Line 2513, Address: 0x1d2900, Func Offset: 0x50
	// Line 2518, Address: 0x1d291c, Func Offset: 0x6c
	// Line 2513, Address: 0x1d2920, Func Offset: 0x70
	// Line 2518, Address: 0x1d2924, Func Offset: 0x74
	// Line 2519, Address: 0x1d2934, Func Offset: 0x84
	// Line 2520, Address: 0x1d293c, Func Offset: 0x8c
	// Func End, Address: 0x1d294c, Func Offset: 0x9c
}

// xEntEndCollide__FP4xEntP6xScenef
// Start address: 0x1d2950
void xEntEndCollide(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 2453, Address: 0x1d2950, Func Offset: 0
	// Line 2455, Address: 0x1d2960, Func Offset: 0x10
	// Line 2456, Address: 0x1d2968, Func Offset: 0x18
	// Line 2494, Address: 0x1d2970, Func Offset: 0x20
	// Func End, Address: 0x1d297c, Func Offset: 0x2c
}

// xEntBeginCollide__FP4xEntP6xScenef
// Start address: 0x1d2980
void xEntBeginCollide(xEnt* ent)
{
	uint8 idx;
	xCollis* coll;
	// Line 2422, Address: 0x1d2980, Func Offset: 0
	// Line 2425, Address: 0x1d2990, Func Offset: 0x10
	// Line 2426, Address: 0x1d2998, Func Offset: 0x18
	// Line 2427, Address: 0x1d29a4, Func Offset: 0x24
	// Line 2430, Address: 0x1d29a8, Func Offset: 0x28
	// Line 2435, Address: 0x1d29b0, Func Offset: 0x30
	// Line 2432, Address: 0x1d29b4, Func Offset: 0x34
	// Line 2435, Address: 0x1d29b8, Func Offset: 0x38
	// Line 2431, Address: 0x1d29c0, Func Offset: 0x40
	// Line 2435, Address: 0x1d29c4, Func Offset: 0x44
	// Line 2431, Address: 0x1d29d0, Func Offset: 0x50
	// Line 2432, Address: 0x1d29d4, Func Offset: 0x54
	// Line 2433, Address: 0x1d29d8, Func Offset: 0x58
	// Line 2434, Address: 0x1d29dc, Func Offset: 0x5c
	// Line 2435, Address: 0x1d29e0, Func Offset: 0x60
	// Line 2440, Address: 0x1d2a64, Func Offset: 0xe4
	// Line 2443, Address: 0x1d2a70, Func Offset: 0xf0
	// Line 2444, Address: 0x1d2a78, Func Offset: 0xf8
	// Line 2445, Address: 0x1d2a80, Func Offset: 0x100
	// Line 2446, Address: 0x1d2a88, Func Offset: 0x108
	// Line 2447, Address: 0x1d2a90, Func Offset: 0x110
	// Line 2448, Address: 0x1d2a98, Func Offset: 0x118
	// Line 2449, Address: 0x1d2aa0, Func Offset: 0x120
	// Line 2450, Address: 0x1d2aa8, Func Offset: 0x128
	// Line 2451, Address: 0x1d2ab0, Func Offset: 0x130
	// Func End, Address: 0x1d2ac0, Func Offset: 0x140
}

// xEntCollide__FP4xEntP6xScenef
// Start address: 0x1d2ac0
void xEntCollide(xEnt* ent, xScene* sc, float32 dt)
{
	xCollis* coll;
	float32 h_dot_n;
	float32 depen_len;
	// Line 2305, Address: 0x1d2ac0, Func Offset: 0
	// Line 2312, Address: 0x1d2adc, Func Offset: 0x1c
	// Line 2322, Address: 0x1d2ae8, Func Offset: 0x28
	// Line 2327, Address: 0x1d2afc, Func Offset: 0x3c
	// Line 2328, Address: 0x1d2b04, Func Offset: 0x44
	// Line 2327, Address: 0x1d2b08, Func Offset: 0x48
	// Line 2335, Address: 0x1d2b0c, Func Offset: 0x4c
	// Line 2336, Address: 0x1d2b1c, Func Offset: 0x5c
	// Line 2337, Address: 0x1d2b4c, Func Offset: 0x8c
	// Line 2336, Address: 0x1d2b50, Func Offset: 0x90
	// Line 2338, Address: 0x1d2b54, Func Offset: 0x94
	// Line 2339, Address: 0x1d2b64, Func Offset: 0xa4
	// Line 2360, Address: 0x1d2bcc, Func Offset: 0x10c
	// Line 2361, Address: 0x1d2bdc, Func Offset: 0x11c
	// Line 2362, Address: 0x1d2c54, Func Offset: 0x194
	// Line 2361, Address: 0x1d2c58, Func Offset: 0x198
	// Line 2364, Address: 0x1d2c5c, Func Offset: 0x19c
	// Line 2379, Address: 0x1d2c6c, Func Offset: 0x1ac
	// Line 2382, Address: 0x1d2c8c, Func Offset: 0x1cc
	// Line 2385, Address: 0x1d2c9c, Func Offset: 0x1dc
	// Line 2386, Address: 0x1d2cb0, Func Offset: 0x1f0
	// Line 2387, Address: 0x1d2cc4, Func Offset: 0x204
	// Line 2386, Address: 0x1d2cc8, Func Offset: 0x208
	// Line 2387, Address: 0x1d2cd8, Func Offset: 0x218
	// Line 2389, Address: 0x1d2ce4, Func Offset: 0x224
	// Line 2390, Address: 0x1d2cec, Func Offset: 0x22c
	// Line 2389, Address: 0x1d2cf0, Func Offset: 0x230
	// Line 2392, Address: 0x1d2d04, Func Offset: 0x244
	// Line 2393, Address: 0x1d2d08, Func Offset: 0x248
	// Line 2394, Address: 0x1d2d0c, Func Offset: 0x24c
	// Line 2393, Address: 0x1d2d14, Func Offset: 0x254
	// Line 2394, Address: 0x1d2d1c, Func Offset: 0x25c
	// Line 2396, Address: 0x1d2d34, Func Offset: 0x274
	// Line 2397, Address: 0x1d2d7c, Func Offset: 0x2bc
	// Line 2398, Address: 0x1d2d80, Func Offset: 0x2c0
	// Line 2400, Address: 0x1d2da4, Func Offset: 0x2e4
	// Line 2404, Address: 0x1d2da8, Func Offset: 0x2e8
	// Line 2405, Address: 0x1d2dc0, Func Offset: 0x300
	// Line 2406, Address: 0x1d2dcc, Func Offset: 0x30c
	// Line 2407, Address: 0x1d2dd8, Func Offset: 0x318
	// Line 2414, Address: 0x1d2de8, Func Offset: 0x328
	// Line 2416, Address: 0x1d2e00, Func Offset: 0x340
	// Line 2417, Address: 0x1d2e14, Func Offset: 0x354
	// Line 2420, Address: 0x1d2e18, Func Offset: 0x358
	// Func End, Address: 0x1d2e30, Func Offset: 0x370
}

// xEntApplyPhysics__FP4xEntP6xScenef
// Start address: 0x1d2e30
void xEntApplyPhysics(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3 dposvel;
	float32 tfric;
	float32 tdrag;
	float32 dposXZ;
	float32 scaleXZ;
	float32 scaleY;
	// Line 2190, Address: 0x1d2e30, Func Offset: 0
	// Line 2191, Address: 0x1d2e34, Func Offset: 0x4
	// Line 2205, Address: 0x1d2e58, Func Offset: 0x28
	// Line 2206, Address: 0x1d2e68, Func Offset: 0x38
	// Line 2207, Address: 0x1d2e78, Func Offset: 0x48
	// Line 2213, Address: 0x1d2e90, Func Offset: 0x60
	// Line 2214, Address: 0x1d2ea0, Func Offset: 0x70
	// Line 2215, Address: 0x1d2eb0, Func Offset: 0x80
	// Line 2216, Address: 0x1d2ebc, Func Offset: 0x8c
	// Line 2215, Address: 0x1d2ec0, Func Offset: 0x90
	// Line 2216, Address: 0x1d2ec4, Func Offset: 0x94
	// Line 2215, Address: 0x1d2ec8, Func Offset: 0x98
	// Line 2216, Address: 0x1d2ecc, Func Offset: 0x9c
	// Line 2218, Address: 0x1d2eec, Func Offset: 0xbc
	// Line 2222, Address: 0x1d2ef0, Func Offset: 0xc0
	// Line 2223, Address: 0x1d2f00, Func Offset: 0xd0
	// Line 2224, Address: 0x1d2f10, Func Offset: 0xe0
	// Line 2225, Address: 0x1d2f1c, Func Offset: 0xec
	// Line 2224, Address: 0x1d2f20, Func Offset: 0xf0
	// Line 2225, Address: 0x1d2f24, Func Offset: 0xf4
	// Line 2224, Address: 0x1d2f28, Func Offset: 0xf8
	// Line 2225, Address: 0x1d2f2c, Func Offset: 0xfc
	// Line 2227, Address: 0x1d2f4c, Func Offset: 0x11c
	// Line 2238, Address: 0x1d2f50, Func Offset: 0x120
	// Line 2237, Address: 0x1d2f58, Func Offset: 0x128
	// Line 2242, Address: 0x1d2f5c, Func Offset: 0x12c
	// Line 2238, Address: 0x1d2f64, Func Offset: 0x134
	// Line 2237, Address: 0x1d2f68, Func Offset: 0x138
	// Line 2238, Address: 0x1d2f80, Func Offset: 0x150
	// Line 2237, Address: 0x1d2f84, Func Offset: 0x154
	// Line 2238, Address: 0x1d2f8c, Func Offset: 0x15c
	// Line 2237, Address: 0x1d2f94, Func Offset: 0x164
	// Line 2238, Address: 0x1d2f9c, Func Offset: 0x16c
	// Line 2237, Address: 0x1d2fa0, Func Offset: 0x170
	// Line 2238, Address: 0x1d2fa4, Func Offset: 0x174
	// Line 2242, Address: 0x1d2fa8, Func Offset: 0x178
	// Line 2238, Address: 0x1d2fac, Func Offset: 0x17c
	// Line 2237, Address: 0x1d2fb0, Func Offset: 0x180
	// Line 2238, Address: 0x1d2fb4, Func Offset: 0x184
	// Line 2242, Address: 0x1d2fb8, Func Offset: 0x188
	// Line 2238, Address: 0x1d2fbc, Func Offset: 0x18c
	// Line 2242, Address: 0x1d2fc0, Func Offset: 0x190
	// Line 2244, Address: 0x1d2fc8, Func Offset: 0x198
	// Line 2245, Address: 0x1d2fcc, Func Offset: 0x19c
	// Line 2244, Address: 0x1d2fd0, Func Offset: 0x1a0
	// Line 2245, Address: 0x1d2fd4, Func Offset: 0x1a4
	// Line 2244, Address: 0x1d2fdc, Func Offset: 0x1ac
	// Line 2245, Address: 0x1d2ff0, Func Offset: 0x1c0
	// Line 2246, Address: 0x1d3030, Func Offset: 0x200
	// Line 2247, Address: 0x1d3050, Func Offset: 0x220
	// Line 2246, Address: 0x1d3054, Func Offset: 0x224
	// Line 2247, Address: 0x1d305c, Func Offset: 0x22c
	// Line 2248, Address: 0x1d3070, Func Offset: 0x240
	// Line 2249, Address: 0x1d3074, Func Offset: 0x244
	// Line 2248, Address: 0x1d3078, Func Offset: 0x248
	// Line 2249, Address: 0x1d307c, Func Offset: 0x24c
	// Line 2248, Address: 0x1d3080, Func Offset: 0x250
	// Line 2249, Address: 0x1d3084, Func Offset: 0x254
	// Line 2252, Address: 0x1d3088, Func Offset: 0x258
	// Line 2253, Address: 0x1d30a0, Func Offset: 0x270
	// Line 2257, Address: 0x1d30ac, Func Offset: 0x27c
	// Line 2261, Address: 0x1d30b0, Func Offset: 0x280
	// Line 2262, Address: 0x1d30e4, Func Offset: 0x2b4
	// Func End, Address: 0x1d30ec, Func Offset: 0x2bc
}

// xEntMove__FP4xEntP6xScenef
// Start address: 0x1d30f0
void xEntMove(xEnt* ent, xScene* sc, float32 dt)
{
	xEntFrame* dframe;
	xVec3 dpos;
	xMat4x3 invOldmat;
	xMat4x3 deltaMat;
	// Line 2145, Address: 0x1d30f0, Func Offset: 0
	// Line 2148, Address: 0x1d3110, Func Offset: 0x20
	// Line 2149, Address: 0x1d3120, Func Offset: 0x30
	// Line 2154, Address: 0x1d3140, Func Offset: 0x50
	// Line 2156, Address: 0x1d3158, Func Offset: 0x68
	// Line 2159, Address: 0x1d3168, Func Offset: 0x78
	// Line 2160, Address: 0x1d3170, Func Offset: 0x80
	// Line 2161, Address: 0x1d3174, Func Offset: 0x84
	// Line 2165, Address: 0x1d317c, Func Offset: 0x8c
	// Line 2166, Address: 0x1d3180, Func Offset: 0x90
	// Line 2165, Address: 0x1d3184, Func Offset: 0x94
	// Line 2166, Address: 0x1d3188, Func Offset: 0x98
	// Line 2165, Address: 0x1d318c, Func Offset: 0x9c
	// Line 2166, Address: 0x1d31b4, Func Offset: 0xc4
	// Line 2168, Address: 0x1d31c0, Func Offset: 0xd0
	// Line 2178, Address: 0x1d31d4, Func Offset: 0xe4
	// Line 2179, Address: 0x1d31dc, Func Offset: 0xec
	// Line 2180, Address: 0x1d31e8, Func Offset: 0xf8
	// Line 2181, Address: 0x1d31f8, Func Offset: 0x108
	// Line 2183, Address: 0x1d320c, Func Offset: 0x11c
	// Line 2185, Address: 0x1d3210, Func Offset: 0x120
	// Line 2186, Address: 0x1d3220, Func Offset: 0x130
	// Line 2187, Address: 0x1d3258, Func Offset: 0x168
	// Func End, Address: 0x1d3274, Func Offset: 0x184
}

// xEntMotionToMatrix__FP4xEntP9xEntFrame
// Start address: 0x1d3310
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame)
{
	// Line 2097, Address: 0x1d3310, Func Offset: 0
	// Line 2102, Address: 0x1d3328, Func Offset: 0x18
	// Line 2103, Address: 0x1d3334, Func Offset: 0x24
	// Line 2104, Address: 0x1d33c4, Func Offset: 0xb4
	// Line 2103, Address: 0x1d33c8, Func Offset: 0xb8
	// Line 2106, Address: 0x1d33cc, Func Offset: 0xbc
	// Line 2107, Address: 0x1d33d8, Func Offset: 0xc8
	// Line 2108, Address: 0x1d33e4, Func Offset: 0xd4
	// Line 2107, Address: 0x1d33e8, Func Offset: 0xd8
	// Line 2108, Address: 0x1d33ec, Func Offset: 0xdc
	// Line 2107, Address: 0x1d3408, Func Offset: 0xf8
	// Line 2108, Address: 0x1d340c, Func Offset: 0xfc
	// Line 2109, Address: 0x1d344c, Func Offset: 0x13c
	// Line 2110, Address: 0x1d3450, Func Offset: 0x140
	// Line 2115, Address: 0x1d3484, Func Offset: 0x174
	// Line 2110, Address: 0x1d3488, Func Offset: 0x178
	// Line 2117, Address: 0x1d348c, Func Offset: 0x17c
	// Line 2118, Address: 0x1d3498, Func Offset: 0x188
	// Line 2119, Address: 0x1d34a4, Func Offset: 0x194
	// Line 2118, Address: 0x1d34a8, Func Offset: 0x198
	// Line 2119, Address: 0x1d34ac, Func Offset: 0x19c
	// Line 2118, Address: 0x1d34c8, Func Offset: 0x1b8
	// Line 2119, Address: 0x1d34cc, Func Offset: 0x1bc
	// Line 2120, Address: 0x1d350c, Func Offset: 0x1fc
	// Line 2121, Address: 0x1d3510, Func Offset: 0x200
	// Line 2128, Address: 0x1d3544, Func Offset: 0x234
	// Line 2129, Address: 0x1d3550, Func Offset: 0x240
	// Line 2130, Address: 0x1d35dc, Func Offset: 0x2cc
	// Line 2133, Address: 0x1d35e0, Func Offset: 0x2d0
	// Func End, Address: 0x1d35f4, Func Offset: 0x2e4
}

// xEntDefaultTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x1d3600
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat)
{
	// Line 2041, Address: 0x1d3600, Func Offset: 0
	// Line 2043, Address: 0x1d3614, Func Offset: 0x14
	// Line 2044, Address: 0x1d3620, Func Offset: 0x20
	// Line 2045, Address: 0x1d362c, Func Offset: 0x2c
	// Line 2046, Address: 0x1d3634, Func Offset: 0x34
	// Line 2045, Address: 0x1d3638, Func Offset: 0x38
	// Line 2047, Address: 0x1d363c, Func Offset: 0x3c
	// Line 2048, Address: 0x1d3644, Func Offset: 0x44
	// Line 2049, Address: 0x1d364c, Func Offset: 0x4c
	// Line 2050, Address: 0x1d3650, Func Offset: 0x50
	// Line 2052, Address: 0x1d36e8, Func Offset: 0xe8
	// Line 2055, Address: 0x1d36f0, Func Offset: 0xf0
	// Line 2056, Address: 0x1d36fc, Func Offset: 0xfc
	// Line 2057, Address: 0x1d3734, Func Offset: 0x134
	// Line 2056, Address: 0x1d3738, Func Offset: 0x138
	// Line 2058, Address: 0x1d373c, Func Offset: 0x13c
	// Line 2059, Address: 0x1d3744, Func Offset: 0x144
	// Line 2060, Address: 0x1d3774, Func Offset: 0x174
	// Line 2061, Address: 0x1d3778, Func Offset: 0x178
	// Line 2063, Address: 0x1d37a8, Func Offset: 0x1a8
	// Func End, Address: 0x1d37bc, Func Offset: 0x1bc
}

// xEntDefaultBoundUpdate__FP4xEntP5xVec3
// Start address: 0x1d37c0
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos)
{
	xBound* bound;
	// Line 1998, Address: 0x1d37c0, Func Offset: 0
	// Line 2001, Address: 0x1d37c4, Func Offset: 0x4
	// Line 1998, Address: 0x1d37c8, Func Offset: 0x8
	// Line 2001, Address: 0x1d37d4, Func Offset: 0x14
	// Line 2002, Address: 0x1d37e0, Func Offset: 0x20
	// Line 2003, Address: 0x1d37e4, Func Offset: 0x24
	// Line 2002, Address: 0x1d37f4, Func Offset: 0x34
	// Line 2003, Address: 0x1d3808, Func Offset: 0x48
	// Line 2004, Address: 0x1d3814, Func Offset: 0x54
	// Line 2023, Address: 0x1d3818, Func Offset: 0x58
	// Line 2024, Address: 0x1d3820, Func Offset: 0x60
	// Line 2025, Address: 0x1d3828, Func Offset: 0x68
	// Func End, Address: 0x1d3838, Func Offset: 0x78
}

// xEntEndUpdate__FP4xEntP6xScenef
// Start address: 0x1d3840
void xEntEndUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	xVec3* mpos;
	xVec3* upos;
	// Line 1900, Address: 0x1d3840, Func Offset: 0
	// Line 1901, Address: 0x1d385c, Func Offset: 0x1c
	// Line 1903, Address: 0x1d386c, Func Offset: 0x2c
	// Line 1905, Address: 0x1d3878, Func Offset: 0x38
	// Line 1907, Address: 0x1d3880, Func Offset: 0x40
	// Line 1908, Address: 0x1d3894, Func Offset: 0x54
	// Line 1910, Address: 0x1d38a4, Func Offset: 0x64
	// Line 1911, Address: 0x1d38b8, Func Offset: 0x78
	// Line 1928, Address: 0x1d38bc, Func Offset: 0x7c
	// Line 1911, Address: 0x1d38c0, Func Offset: 0x80
	// Line 1928, Address: 0x1d38c4, Func Offset: 0x84
	// Line 1955, Address: 0x1d38dc, Func Offset: 0x9c
	// Line 1956, Address: 0x1d38e4, Func Offset: 0xa4
	// Line 1985, Address: 0x1d38f8, Func Offset: 0xb8
	// Line 1987, Address: 0x1d3900, Func Offset: 0xc0
	// Line 1988, Address: 0x1d3910, Func Offset: 0xd0
	// Line 1993, Address: 0x1d391c, Func Offset: 0xdc
	// Line 1994, Address: 0x1d3924, Func Offset: 0xe4
	// Line 1995, Address: 0x1d3930, Func Offset: 0xf0
	// Func End, Address: 0x1d3948, Func Offset: 0x108
}

// xEntBeginUpdate__FP4xEntP6xScenef
// Start address: 0x1d3950
void xEntBeginUpdate(xEnt* ent, float32 dt)
{
	// Line 1883, Address: 0x1d3950, Func Offset: 0
	// Line 1884, Address: 0x1d3964, Func Offset: 0x14
	// Line 1886, Address: 0x1d396c, Func Offset: 0x1c
	// Line 1889, Address: 0x1d3978, Func Offset: 0x28
	// Line 1891, Address: 0x1d3980, Func Offset: 0x30
	// Line 1892, Address: 0x1d399c, Func Offset: 0x4c
	// Line 1893, Address: 0x1d3a20, Func Offset: 0xd0
	// Line 1894, Address: 0x1d3a40, Func Offset: 0xf0
	// Line 1896, Address: 0x1d3a54, Func Offset: 0x104
	// Line 1897, Address: 0x1d3a5c, Func Offset: 0x10c
	// Func End, Address: 0x1d3a70, Func Offset: 0x120
}

// xEntUpdate__FP4xEntP6xScenef
// Start address: 0x1d3a70
void xEntUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	// Line 1804, Address: 0x1d3a70, Func Offset: 0
	// Line 1828, Address: 0x1d3a8c, Func Offset: 0x1c
	// Line 1836, Address: 0x1d3a94, Func Offset: 0x24
	// Line 1837, Address: 0x1d3aa4, Func Offset: 0x34
	// Line 1842, Address: 0x1d3ab0, Func Offset: 0x40
	// Line 1843, Address: 0x1d3ac0, Func Offset: 0x50
	// Line 1844, Address: 0x1d3acc, Func Offset: 0x5c
	// Line 1848, Address: 0x1d3ad0, Func Offset: 0x60
	// Line 1859, Address: 0x1d3ae0, Func Offset: 0x70
	// Line 1861, Address: 0x1d3aec, Func Offset: 0x7c
	// Line 1868, Address: 0x1d3af8, Func Offset: 0x88
	// Line 1869, Address: 0x1d3b18, Func Offset: 0xa8
	// Line 1871, Address: 0x1d3be8, Func Offset: 0x178
	// Line 1880, Address: 0x1d3bf8, Func Offset: 0x188
	// Func End, Address: 0x1d3c10, Func Offset: 0x1a0
}

// xEntRender__FP4xEnt
// Start address: 0x1d3c10
void xEntRender(xEnt* ent)
{
	int32 shadowOutside;
	xVec3 shadVec;
	// Line 1607, Address: 0x1d3c10, Func Offset: 0
	// Line 1611, Address: 0x1d3c24, Func Offset: 0x14
	// Line 1612, Address: 0x1d3c58, Func Offset: 0x48
	// Line 1614, Address: 0x1d3c60, Func Offset: 0x50
	// Line 1617, Address: 0x1d3c68, Func Offset: 0x58
	// Line 1625, Address: 0x1d3c90, Func Offset: 0x80
	// Line 1626, Address: 0x1d3c94, Func Offset: 0x84
	// Line 1628, Address: 0x1d3c98, Func Offset: 0x88
	// Line 1626, Address: 0x1d3c9c, Func Offset: 0x8c
	// Line 1625, Address: 0x1d3ca0, Func Offset: 0x90
	// Line 1626, Address: 0x1d3cac, Func Offset: 0x9c
	// Line 1627, Address: 0x1d3cc0, Func Offset: 0xb0
	// Line 1628, Address: 0x1d3cd4, Func Offset: 0xc4
	// Line 1631, Address: 0x1d3cec, Func Offset: 0xdc
	// Line 1634, Address: 0x1d3cf8, Func Offset: 0xe8
	// Line 1640, Address: 0x1d3d04, Func Offset: 0xf4
	// Line 1642, Address: 0x1d3d18, Func Offset: 0x108
	// Line 1661, Address: 0x1d3d20, Func Offset: 0x110
	// Line 1787, Address: 0x1d3d2c, Func Offset: 0x11c
	// Line 1792, Address: 0x1d3d58, Func Offset: 0x148
	// Line 1795, Address: 0x1d3d60, Func Offset: 0x150
	// Line 1797, Address: 0x1d3d68, Func Offset: 0x158
	// Func End, Address: 0x1d3d78, Func Offset: 0x168
}

// xEntRestorePipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x1d3d80
void xEntRestorePipeline(RpAtomic* model)
{
	// Line 1576, Address: 0x1d3d80, Func Offset: 0
	// Line 1578, Address: 0x1d3d8c, Func Offset: 0xc
	// Line 1580, Address: 0x1d3d98, Func Offset: 0x18
	// Line 1581, Address: 0x1d3da0, Func Offset: 0x20
	// Line 1582, Address: 0x1d3da4, Func Offset: 0x24
	// Line 1584, Address: 0x1d3da8, Func Offset: 0x28
	// Line 1588, Address: 0x1d3db4, Func Offset: 0x34
	// Line 1592, Address: 0x1d3dbc, Func Offset: 0x3c
	// Line 1594, Address: 0x1d3dc0, Func Offset: 0x40
	// Func End, Address: 0x1d3dd0, Func Offset: 0x50
}

// xEntRestorePipeline__FP14xModelInstance
// Start address: 0x1d3dd0
void xEntRestorePipeline(xModelInstance* model)
{
	// Line 1571, Address: 0x1d3dd0, Func Offset: 0
	// Line 1572, Address: 0x1d3ddc, Func Offset: 0xc
	// Line 1573, Address: 0x1d3e10, Func Offset: 0x40
	// Func End, Address: 0x1d3e20, Func Offset: 0x50
}

// xEntSetupPipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x1d3e20
void xEntSetupPipeline(xSurface* surf, RpAtomic* model)
{
	zSurfaceProps* pp;
	xGroup* g;
	uint32 texid;
	RwTexture* texptr;
	xGroup* g;
	uint32 texid;
	RwTexture* texptr;
	RwTexture* texptr;
	// Line 1447, Address: 0x1d3e20, Func Offset: 0
	// Line 1449, Address: 0x1d3e34, Func Offset: 0x14
	// Line 1454, Address: 0x1d3e38, Func Offset: 0x18
	// Line 1461, Address: 0x1d3e4c, Func Offset: 0x2c
	// Line 1465, Address: 0x1d3e5c, Func Offset: 0x3c
	// Line 1466, Address: 0x1d3e64, Func Offset: 0x44
	// Line 1470, Address: 0x1d3e6c, Func Offset: 0x4c
	// Line 1473, Address: 0x1d3e78, Func Offset: 0x58
	// Line 1474, Address: 0x1d3e84, Func Offset: 0x64
	// Line 1477, Address: 0x1d3e8c, Func Offset: 0x6c
	// Line 1478, Address: 0x1d3e94, Func Offset: 0x74
	// Line 1481, Address: 0x1d3e9c, Func Offset: 0x7c
	// Line 1486, Address: 0x1d3ea0, Func Offset: 0x80
	// Line 1490, Address: 0x1d3eb0, Func Offset: 0x90
	// Line 1491, Address: 0x1d3ebc, Func Offset: 0x9c
	// Line 1495, Address: 0x1d3ec4, Func Offset: 0xa4
	// Line 1498, Address: 0x1d3ecc, Func Offset: 0xac
	// Line 1499, Address: 0x1d3edc, Func Offset: 0xbc
	// Line 1502, Address: 0x1d3ee4, Func Offset: 0xc4
	// Line 1503, Address: 0x1d3eec, Func Offset: 0xcc
	// Line 1506, Address: 0x1d3ef0, Func Offset: 0xd0
	// Line 1508, Address: 0x1d3ef8, Func Offset: 0xd8
	// Line 1512, Address: 0x1d3f08, Func Offset: 0xe8
	// Line 1513, Address: 0x1d3f1c, Func Offset: 0xfc
	// Line 1516, Address: 0x1d3f24, Func Offset: 0x104
	// Line 1517, Address: 0x1d3f2c, Func Offset: 0x10c
	// Line 1520, Address: 0x1d3f30, Func Offset: 0x110
	// Line 1522, Address: 0x1d3f38, Func Offset: 0x118
	// Line 1525, Address: 0x1d3f40, Func Offset: 0x120
	// Line 1527, Address: 0x1d3f50, Func Offset: 0x130
	// Line 1530, Address: 0x1d3f54, Func Offset: 0x134
	// Line 1531, Address: 0x1d3f60, Func Offset: 0x140
	// Line 1533, Address: 0x1d3f68, Func Offset: 0x148
	// Line 1534, Address: 0x1d3f70, Func Offset: 0x150
	// Line 1536, Address: 0x1d3f78, Func Offset: 0x158
	// Line 1537, Address: 0x1d3f90, Func Offset: 0x170
	// Line 1549, Address: 0x1d3fa8, Func Offset: 0x188
	// Line 1552, Address: 0x1d3fb4, Func Offset: 0x194
	// Line 1559, Address: 0x1d3fbc, Func Offset: 0x19c
	// Line 1562, Address: 0x1d3ff0, Func Offset: 0x1d0
	// Line 1565, Address: 0x1d3ff8, Func Offset: 0x1d8
	// Line 1568, Address: 0x1d4000, Func Offset: 0x1e0
	// Func End, Address: 0x1d4014, Func Offset: 0x1f4
}

// xEntSetupPipeline__FP14xModelInstance
// Start address: 0x1d4020
void xEntSetupPipeline(xModelInstance* model)
{
	// Line 1444, Address: 0x1d4020, Func Offset: 0
	// Func End, Address: 0x1d402c, Func Offset: 0xc
}

// xEntLoadModel__FP4xEntP8RpAtomic
// Start address: 0x1d4030
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel)
{
	xModelInstance* model;
	// Line 1369, Address: 0x1d4030, Func Offset: 0
	// Line 1375, Address: 0x1d4034, Func Offset: 0x4
	// Line 1369, Address: 0x1d4038, Func Offset: 0x8
	// Line 1375, Address: 0x1d403c, Func Offset: 0xc
	// Line 1369, Address: 0x1d4040, Func Offset: 0x10
	// Line 1375, Address: 0x1d4044, Func Offset: 0x14
	// Line 1369, Address: 0x1d4048, Func Offset: 0x18
	// Line 1375, Address: 0x1d4058, Func Offset: 0x28
	// Line 1378, Address: 0x1d4064, Func Offset: 0x34
	// Line 1379, Address: 0x1d4078, Func Offset: 0x48
	// Line 1381, Address: 0x1d409c, Func Offset: 0x6c
	// Line 1383, Address: 0x1d40b0, Func Offset: 0x80
	// Line 1384, Address: 0x1d40b8, Func Offset: 0x88
	// Line 1387, Address: 0x1d40c0, Func Offset: 0x90
	// Line 1388, Address: 0x1d40c4, Func Offset: 0x94
	// Func End, Address: 0x1d40dc, Func Offset: 0xac
}

// xEntReset__FP4xEnt
// Start address: 0x1d40e0
void xEntReset(xEnt* ent)
{
	xMat4x3 frame;
	xModelInstance* minst;
	uint32 receive_models[15];
	int8 @4889;
	// Line 1157, Address: 0x1d40e0, Func Offset: 0
	// Line 1164, Address: 0x1d40ec, Func Offset: 0xc
	// Line 1167, Address: 0x1d40f8, Func Offset: 0x18
	// Line 1175, Address: 0x1d40fc, Func Offset: 0x1c
	// Line 1167, Address: 0x1d4100, Func Offset: 0x20
	// Line 1170, Address: 0x1d4108, Func Offset: 0x28
	// Line 1171, Address: 0x1d4114, Func Offset: 0x34
	// Line 1172, Address: 0x1d4118, Func Offset: 0x38
	// Line 1175, Address: 0x1d4120, Func Offset: 0x40
	// Line 1176, Address: 0x1d4128, Func Offset: 0x48
	// Line 1190, Address: 0x1d434c, Func Offset: 0x26c
	// Line 1200, Address: 0x1d4360, Func Offset: 0x280
	// Line 1201, Address: 0x1d4370, Func Offset: 0x290
	// Line 1200, Address: 0x1d437c, Func Offset: 0x29c
	// Line 1202, Address: 0x1d4380, Func Offset: 0x2a0
	// Line 1200, Address: 0x1d438c, Func Offset: 0x2ac
	// Line 1201, Address: 0x1d43a4, Func Offset: 0x2c4
	// Line 1202, Address: 0x1d43c4, Func Offset: 0x2e4
	// Line 1208, Address: 0x1d43e4, Func Offset: 0x304
	// Line 1210, Address: 0x1d4400, Func Offset: 0x320
	// Line 1213, Address: 0x1d4408, Func Offset: 0x328
	// Line 1214, Address: 0x1d4410, Func Offset: 0x330
	// Line 1216, Address: 0x1d4424, Func Offset: 0x344
	// Line 1217, Address: 0x1d442c, Func Offset: 0x34c
	// Line 1235, Address: 0x1d4440, Func Offset: 0x360
	// Line 1236, Address: 0x1d4450, Func Offset: 0x370
	// Line 1238, Address: 0x1d4458, Func Offset: 0x378
	// Line 1239, Address: 0x1d445c, Func Offset: 0x37c
	// Line 1245, Address: 0x1d4464, Func Offset: 0x384
	// Line 1242, Address: 0x1d4468, Func Offset: 0x388
	// Line 1243, Address: 0x1d4474, Func Offset: 0x394
	// Line 1244, Address: 0x1d4480, Func Offset: 0x3a0
	// Line 1245, Address: 0x1d448c, Func Offset: 0x3ac
	// Line 1248, Address: 0x1d44dc, Func Offset: 0x3fc
	// Line 1249, Address: 0x1d44e0, Func Offset: 0x400
	// Line 1250, Address: 0x1d44e4, Func Offset: 0x404
	// Line 1251, Address: 0x1d44e8, Func Offset: 0x408
	// Line 1252, Address: 0x1d44ec, Func Offset: 0x40c
	// Line 1253, Address: 0x1d44f4, Func Offset: 0x414
	// Line 1252, Address: 0x1d44f8, Func Offset: 0x418
	// Line 1256, Address: 0x1d44fc, Func Offset: 0x41c
	// Line 1258, Address: 0x1d4504, Func Offset: 0x424
	// Line 1262, Address: 0x1d4510, Func Offset: 0x430
	// Line 1259, Address: 0x1d4514, Func Offset: 0x434
	// Line 1262, Address: 0x1d4594, Func Offset: 0x4b4
	// Line 1263, Address: 0x1d45b8, Func Offset: 0x4d8
	// Line 1264, Address: 0x1d45e0, Func Offset: 0x500
	// Line 1265, Address: 0x1d4608, Func Offset: 0x528
	// Line 1268, Address: 0x1d4630, Func Offset: 0x550
	// Line 1269, Address: 0x1d4650, Func Offset: 0x570
	// Line 1270, Address: 0x1d465c, Func Offset: 0x57c
	// Line 1271, Address: 0x1d467c, Func Offset: 0x59c
	// Line 1270, Address: 0x1d4680, Func Offset: 0x5a0
	// Line 1292, Address: 0x1d4684, Func Offset: 0x5a4
	// Line 1293, Address: 0x1d4698, Func Offset: 0x5b8
	// Line 1305, Address: 0x1d46a8, Func Offset: 0x5c8
	// Line 1319, Address: 0x1d46b8, Func Offset: 0x5d8
	// Line 1320, Address: 0x1d46d0, Func Offset: 0x5f0
	// Func End, Address: 0x1d46e0, Func Offset: 0x600
}

// xEntLoad__FP4xEntP7xSerial
// Start address: 0x1d46e0
void xEntLoad(xEnt* ent, xSerial* s)
{
	int32 b;
	// Line 1140, Address: 0x1d46e0, Func Offset: 0
	// Line 1141, Address: 0x1d46f4, Func Offset: 0x14
	// Line 1148, Address: 0x1d46fc, Func Offset: 0x1c
	// Line 1149, Address: 0x1d470c, Func Offset: 0x2c
	// Line 1150, Address: 0x1d4718, Func Offset: 0x38
	// Line 1152, Address: 0x1d4728, Func Offset: 0x48
	// Line 1154, Address: 0x1d4738, Func Offset: 0x58
	// Func End, Address: 0x1d474c, Func Offset: 0x6c
}

// xEntSave__FP4xEntP7xSerial
// Start address: 0x1d4750
void xEntSave(xEnt* ent, xSerial* s)
{
	// Line 1121, Address: 0x1d4750, Func Offset: 0
	// Line 1122, Address: 0x1d4764, Func Offset: 0x14
	// Line 1127, Address: 0x1d476c, Func Offset: 0x1c
	// Line 1128, Address: 0x1d4784, Func Offset: 0x34
	// Line 1130, Address: 0x1d4798, Func Offset: 0x48
	// Line 1132, Address: 0x1d47a8, Func Offset: 0x58
	// Func End, Address: 0x1d47bc, Func Offset: 0x6c
}

// xEntSetup__FP4xEnt
// Start address: 0x1d47c0
void xEntSetup(xEnt* ent)
{
	xSurface* surf;
	xModelInstance* minst;
	int32 i;
	xLinkAsset* la;
	xEnt* dent;
	// Line 998, Address: 0x1d47c0, Func Offset: 0
	// Line 1004, Address: 0x1d47d8, Func Offset: 0x18
	// Line 1007, Address: 0x1d47e0, Func Offset: 0x20
	// Line 1010, Address: 0x1d47f4, Func Offset: 0x34
	// Line 1011, Address: 0x1d47fc, Func Offset: 0x3c
	// Line 1012, Address: 0x1d4804, Func Offset: 0x44
	// Line 1014, Address: 0x1d480c, Func Offset: 0x4c
	// Line 1015, Address: 0x1d4810, Func Offset: 0x50
	// Line 1018, Address: 0x1d4814, Func Offset: 0x54
	// Line 1019, Address: 0x1d4818, Func Offset: 0x58
	// Line 1020, Address: 0x1d4820, Func Offset: 0x60
	// Line 1021, Address: 0x1d4824, Func Offset: 0x64
	// Line 1022, Address: 0x1d4828, Func Offset: 0x68
	// Line 1026, Address: 0x1d4838, Func Offset: 0x78
	// Line 1027, Address: 0x1d4850, Func Offset: 0x90
	// Line 1028, Address: 0x1d4854, Func Offset: 0x94
	// Line 1027, Address: 0x1d4858, Func Offset: 0x98
	// Line 1028, Address: 0x1d485c, Func Offset: 0x9c
	// Line 1029, Address: 0x1d4868, Func Offset: 0xa8
	// Line 1031, Address: 0x1d4874, Func Offset: 0xb4
	// Line 1034, Address: 0x1d487c, Func Offset: 0xbc
	// Line 1035, Address: 0x1d4880, Func Offset: 0xc0
	// Line 1036, Address: 0x1d4894, Func Offset: 0xd4
	// Line 1039, Address: 0x1d48a0, Func Offset: 0xe0
	// Line 1042, Address: 0x1d48b8, Func Offset: 0xf8
	// Line 1048, Address: 0x1d48c0, Func Offset: 0x100
	// Line 1042, Address: 0x1d48c4, Func Offset: 0x104
	// Line 1043, Address: 0x1d48cc, Func Offset: 0x10c
	// Line 1044, Address: 0x1d48dc, Func Offset: 0x11c
	// Line 1045, Address: 0x1d48ec, Func Offset: 0x12c
	// Line 1048, Address: 0x1d48f8, Func Offset: 0x138
	// Line 1049, Address: 0x1d4900, Func Offset: 0x140
	// Line 1052, Address: 0x1d4b20, Func Offset: 0x360
	// Line 1096, Address: 0x1d4b2c, Func Offset: 0x36c
	// Line 1098, Address: 0x1d4b38, Func Offset: 0x378
	// Line 1099, Address: 0x1d4b48, Func Offset: 0x388
	// Line 1100, Address: 0x1d4b68, Func Offset: 0x3a8
	// Line 1101, Address: 0x1d4b80, Func Offset: 0x3c0
	// Line 1106, Address: 0x1d4ba0, Func Offset: 0x3e0
	// Line 1107, Address: 0x1d4bb0, Func Offset: 0x3f0
	// Line 1109, Address: 0x1d4bb8, Func Offset: 0x3f8
	// Line 1110, Address: 0x1d4bd0, Func Offset: 0x410
	// Func End, Address: 0x1d4bec, Func Offset: 0x42c
}

// stacked_owner_destroyed__18@unnamed@xEnt_cpp@FR15zEntDestructObjPv
// Start address: 0x1d4bf0
void stacked_owner_destroyed(void* context)
{
	// Line 910, Address: 0x1d4bf0, Func Offset: 0
	// Line 911, Address: 0x1d4c28, Func Offset: 0x38
	// Func End, Address: 0x1d4c30, Func Offset: 0x40
}

// collide_downward__18@unnamed@xEnt_cpp@FR5xVec3RP4xEntR6xSceneR4xEntf
// Start address: 0x1d4c30
uint8 collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float32 max_dist)
{
	xRay3 ray;
	uint8 old_bound_type;
	float32 old_bound_radius;
	xCollis coll;
	// Line 865, Address: 0x1d4c30, Func Offset: 0
	// Line 866, Address: 0x1d4c34, Func Offset: 0x4
	// Line 865, Address: 0x1d4c38, Func Offset: 0x8
	// Line 866, Address: 0x1d4c6c, Func Offset: 0x3c
	// Line 885, Address: 0x1d4d28, Func Offset: 0xf8
	// Line 869, Address: 0x1d4d2c, Func Offset: 0xfc
	// Line 880, Address: 0x1d4d30, Func Offset: 0x100
	// Line 869, Address: 0x1d4d38, Func Offset: 0x108
	// Line 872, Address: 0x1d4d3c, Func Offset: 0x10c
	// Line 870, Address: 0x1d4d40, Func Offset: 0x110
	// Line 873, Address: 0x1d4d44, Func Offset: 0x114
	// Line 878, Address: 0x1d4d48, Func Offset: 0x118
	// Line 884, Address: 0x1d4d4c, Func Offset: 0x11c
	// Line 885, Address: 0x1d4d50, Func Offset: 0x120
	// Line 869, Address: 0x1d4d5c, Func Offset: 0x12c
	// Line 885, Address: 0x1d4d60, Func Offset: 0x130
	// Line 869, Address: 0x1d4d64, Func Offset: 0x134
	// Line 867, Address: 0x1d4d68, Func Offset: 0x138
	// Line 869, Address: 0x1d4d6c, Func Offset: 0x13c
	// Line 870, Address: 0x1d4d78, Func Offset: 0x148
	// Line 872, Address: 0x1d4d7c, Func Offset: 0x14c
	// Line 873, Address: 0x1d4d80, Func Offset: 0x150
	// Line 870, Address: 0x1d4d84, Func Offset: 0x154
	// Line 871, Address: 0x1d4d8c, Func Offset: 0x15c
	// Line 876, Address: 0x1d4d90, Func Offset: 0x160
	// Line 877, Address: 0x1d4d94, Func Offset: 0x164
	// Line 878, Address: 0x1d4d98, Func Offset: 0x168
	// Line 879, Address: 0x1d4d9c, Func Offset: 0x16c
	// Line 880, Address: 0x1d4da0, Func Offset: 0x170
	// Line 885, Address: 0x1d4da4, Func Offset: 0x174
	// Line 889, Address: 0x1d4dac, Func Offset: 0x17c
	// Line 890, Address: 0x1d4db0, Func Offset: 0x180
	// Line 891, Address: 0x1d4db4, Func Offset: 0x184
	// Line 893, Address: 0x1d4dbc, Func Offset: 0x18c
	// Line 896, Address: 0x1d4dd8, Func Offset: 0x1a8
	// Line 899, Address: 0x1d4ddc, Func Offset: 0x1ac
	// Line 896, Address: 0x1d4de0, Func Offset: 0x1b0
	// Line 897, Address: 0x1d4dfc, Func Offset: 0x1cc
	// Line 898, Address: 0x1d4e10, Func Offset: 0x1e0
	// Line 900, Address: 0x1d4e18, Func Offset: 0x1e8
	// Func End, Address: 0x1d4e44, Func Offset: 0x214
}

// xEntInitForType__FP4xEnt
// Start address: 0x1d4e50
void xEntInitForType(xEnt* ent)
{
	// Line 678, Address: 0x1d4e50, Func Offset: 0
	// Line 680, Address: 0x1d4e54, Func Offset: 0x4
	// Line 678, Address: 0x1d4e58, Func Offset: 0x8
	// Line 681, Address: 0x1d4e5c, Func Offset: 0xc
	// Line 678, Address: 0x1d4e60, Func Offset: 0x10
	// Line 680, Address: 0x1d4e64, Func Offset: 0x14
	// Line 681, Address: 0x1d4e6c, Func Offset: 0x1c
	// Line 684, Address: 0x1d4e7c, Func Offset: 0x2c
	// Line 686, Address: 0x1d4e88, Func Offset: 0x38
	// Line 693, Address: 0x1d4e8c, Func Offset: 0x3c
	// Line 686, Address: 0x1d4e90, Func Offset: 0x40
	// Line 693, Address: 0x1d4e98, Func Offset: 0x48
	// Line 697, Address: 0x1d4e9c, Func Offset: 0x4c
	// Line 699, Address: 0x1d4eb4, Func Offset: 0x64
	// Line 701, Address: 0x1d4eb8, Func Offset: 0x68
	// Line 699, Address: 0x1d4ebc, Func Offset: 0x6c
	// Line 701, Address: 0x1d4ec4, Func Offset: 0x74
	// Line 705, Address: 0x1d4ec8, Func Offset: 0x78
	// Line 707, Address: 0x1d4edc, Func Offset: 0x8c
	// Line 710, Address: 0x1d4ee0, Func Offset: 0x90
	// Line 707, Address: 0x1d4ee4, Func Offset: 0x94
	// Line 709, Address: 0x1d4eec, Func Offset: 0x9c
	// Line 710, Address: 0x1d4ef0, Func Offset: 0xa0
	// Line 711, Address: 0x1d4f00, Func Offset: 0xb0
	// Line 713, Address: 0x1d4f10, Func Offset: 0xc0
	// Line 715, Address: 0x1d4f14, Func Offset: 0xc4
	// Line 713, Address: 0x1d4f18, Func Offset: 0xc8
	// Line 715, Address: 0x1d4f20, Func Offset: 0xd0
	// Line 719, Address: 0x1d4f24, Func Offset: 0xd4
	// Line 725, Address: 0x1d4f3c, Func Offset: 0xec
	// Line 737, Address: 0x1d4f40, Func Offset: 0xf0
	// Line 725, Address: 0x1d4f44, Func Offset: 0xf4
	// Line 727, Address: 0x1d4f4c, Func Offset: 0xfc
	// Line 735, Address: 0x1d4f50, Func Offset: 0x100
	// Line 737, Address: 0x1d4f5c, Func Offset: 0x10c
	// Line 755, Address: 0x1d4f60, Func Offset: 0x110
	// Line 757, Address: 0x1d4f74, Func Offset: 0x124
	// Line 760, Address: 0x1d4f78, Func Offset: 0x128
	// Line 757, Address: 0x1d4f7c, Func Offset: 0x12c
	// Line 759, Address: 0x1d4f84, Func Offset: 0x134
	// Line 760, Address: 0x1d4f88, Func Offset: 0x138
	// Line 761, Address: 0x1d4f98, Func Offset: 0x148
	// Line 763, Address: 0x1d4fa8, Func Offset: 0x158
	// Line 768, Address: 0x1d4fac, Func Offset: 0x15c
	// Line 763, Address: 0x1d4fb0, Func Offset: 0x160
	// Line 765, Address: 0x1d4fb8, Func Offset: 0x168
	// Line 766, Address: 0x1d4fbc, Func Offset: 0x16c
	// Line 768, Address: 0x1d4fc0, Func Offset: 0x170
	// Line 770, Address: 0x1d4fd0, Func Offset: 0x180
	// Line 773, Address: 0x1d4fd8, Func Offset: 0x188
	// Line 770, Address: 0x1d4fdc, Func Offset: 0x18c
	// Line 773, Address: 0x1d4fe0, Func Offset: 0x190
	// Line 775, Address: 0x1d4fe8, Func Offset: 0x198
	// Line 777, Address: 0x1d4ff0, Func Offset: 0x1a0
	// Line 784, Address: 0x1d4ff8, Func Offset: 0x1a8
	// Line 787, Address: 0x1d5024, Func Offset: 0x1d4
	// Line 788, Address: 0x1d5038, Func Offset: 0x1e8
	// Line 805, Address: 0x1d5048, Func Offset: 0x1f8
	// Line 806, Address: 0x1d5054, Func Offset: 0x204
	// Func End, Address: 0x1d5064, Func Offset: 0x214
}

// xEntInit__FP4xEntP9xEntAsset
// Start address: 0x1d5070
void xEntInit(xEnt* ent, xEntAsset* asset)
{
	// Line 611, Address: 0x1d5070, Func Offset: 0
	// Line 627, Address: 0x1d5084, Func Offset: 0x14
	// Line 632, Address: 0x1d508c, Func Offset: 0x1c
	// Line 629, Address: 0x1d5090, Func Offset: 0x20
	// Line 632, Address: 0x1d5094, Func Offset: 0x24
	// Line 661, Address: 0x1d5098, Func Offset: 0x28
	// Line 632, Address: 0x1d509c, Func Offset: 0x2c
	// Line 661, Address: 0x1d50a0, Func Offset: 0x30
	// Line 633, Address: 0x1d50a4, Func Offset: 0x34
	// Line 634, Address: 0x1d50b0, Func Offset: 0x40
	// Line 636, Address: 0x1d50bc, Func Offset: 0x4c
	// Line 635, Address: 0x1d50c0, Func Offset: 0x50
	// Line 636, Address: 0x1d50c4, Func Offset: 0x54
	// Line 639, Address: 0x1d50cc, Func Offset: 0x5c
	// Line 640, Address: 0x1d50d4, Func Offset: 0x64
	// Line 641, Address: 0x1d50d8, Func Offset: 0x68
	// Line 642, Address: 0x1d50e0, Func Offset: 0x70
	// Line 643, Address: 0x1d50e8, Func Offset: 0x78
	// Line 644, Address: 0x1d50f0, Func Offset: 0x80
	// Line 645, Address: 0x1d50f4, Func Offset: 0x84
	// Line 646, Address: 0x1d50f8, Func Offset: 0x88
	// Line 648, Address: 0x1d50fc, Func Offset: 0x8c
	// Line 649, Address: 0x1d5100, Func Offset: 0x90
	// Line 650, Address: 0x1d5104, Func Offset: 0x94
	// Line 651, Address: 0x1d5108, Func Offset: 0x98
	// Line 652, Address: 0x1d510c, Func Offset: 0x9c
	// Line 653, Address: 0x1d5110, Func Offset: 0xa0
	// Line 654, Address: 0x1d5114, Func Offset: 0xa4
	// Line 655, Address: 0x1d5118, Func Offset: 0xa8
	// Line 658, Address: 0x1d511c, Func Offset: 0xac
	// Line 661, Address: 0x1d5124, Func Offset: 0xb4
	// Line 664, Address: 0x1d512c, Func Offset: 0xbc
	// Line 668, Address: 0x1d5130, Func Offset: 0xc0
	// Line 669, Address: 0x1d513c, Func Offset: 0xcc
	// Line 671, Address: 0x1d5148, Func Offset: 0xd8
	// Line 672, Address: 0x1d5150, Func Offset: 0xe0
	// Line 673, Address: 0x1d5164, Func Offset: 0xf4
	// Line 675, Address: 0x1d5168, Func Offset: 0xf8
	// Func End, Address: 0x1d517c, Func Offset: 0x10c
}

// xEntAddHittableFlag__FP4xEnt
// Start address: 0x1d5180
void xEntAddHittableFlag(xEnt* ent)
{
	uint32 i;
	// Line 511, Address: 0x1d5180, Func Offset: 0
	// Line 513, Address: 0x1d5184, Func Offset: 0x4
	// Line 519, Address: 0x1d51c8, Func Offset: 0x48
	// Line 520, Address: 0x1d51d0, Func Offset: 0x50
	// Line 525, Address: 0x1d51d8, Func Offset: 0x58
	// Line 526, Address: 0x1d51f4, Func Offset: 0x74
	// Line 537, Address: 0x1d5230, Func Offset: 0xb0
	// Line 538, Address: 0x1d5238, Func Offset: 0xb8
	// Line 540, Address: 0x1d5240, Func Offset: 0xc0
	// Line 538, Address: 0x1d5248, Func Offset: 0xc8
	// Line 540, Address: 0x1d524c, Func Offset: 0xcc
	// Line 542, Address: 0x1d5258, Func Offset: 0xd8
	// Func End, Address: 0x1d5260, Func Offset: 0xe0
}

// xEntSceneExit__Fv
// Start address: 0x1d5260
void xEntSceneExit()
{
	// Line 461, Address: 0x1d5260, Func Offset: 0
	// Func End, Address: 0x1d5268, Func Offset: 0x8
}

// xEntSceneInit__Fv
// Start address: 0x1d5270
void xEntSceneInit()
{
	// Line 453, Address: 0x1d5270, Func Offset: 0
	// Line 454, Address: 0x1d5274, Func Offset: 0x4
	// Func End, Address: 0x1d527c, Func Offset: 0xc
}

// xEntSetTimePassed__Ff
// Start address: 0x1d5280
void xEntSetTimePassed(float32 sec)
{
	// Line 445, Address: 0x1d5280, Func Offset: 0
	// Func End, Address: 0x1d5288, Func Offset: 0x8
}

// refresh__Q218@unnamed@xEnt_cpp@9anim_collFR4xEnt
// Start address: 0x1d5290
void refresh(xEnt& ent)
{
	anim_coll_data& ac;
	xMat4x3& bone_mat;
	// Line 304, Address: 0x1d5290, Func Offset: 0
	// Line 305, Address: 0x1d52a0, Func Offset: 0x10
	// Line 308, Address: 0x1d52a8, Func Offset: 0x18
	// Line 305, Address: 0x1d52ac, Func Offset: 0x1c
	// Line 307, Address: 0x1d52b0, Func Offset: 0x20
	// Line 308, Address: 0x1d52b4, Func Offset: 0x24
	// Line 309, Address: 0x1d52bc, Func Offset: 0x2c
	// Line 310, Address: 0x1d52c0, Func Offset: 0x30
	// Line 309, Address: 0x1d52c4, Func Offset: 0x34
	// Line 310, Address: 0x1d52c8, Func Offset: 0x38
	// Line 309, Address: 0x1d52cc, Func Offset: 0x3c
	// Line 310, Address: 0x1d52d0, Func Offset: 0x40
	// Line 309, Address: 0x1d52ec, Func Offset: 0x5c
	// Line 310, Address: 0x1d5360, Func Offset: 0xd0
	// Line 311, Address: 0x1d53ec, Func Offset: 0x15c
	// Func End, Address: 0x1d5400, Func Offset: 0x170
}

// reset__Q218@unnamed@xEnt_cpp@9anim_collFR4xEnt
// Start address: 0x1d5400
void reset(xEnt& ent)
{
	xModelInstance& model;
	xMat4x3& mat;
	anim_coll_data& ac;
	xBox& box;
	xVec3 size;
	float32 max_size;
	// Line 235, Address: 0x1d5400, Func Offset: 0
	// Line 236, Address: 0x1d5410, Func Offset: 0x10
	// Line 238, Address: 0x1d541c, Func Offset: 0x1c
	// Line 239, Address: 0x1d5430, Func Offset: 0x30
	// Line 240, Address: 0x1d5438, Func Offset: 0x38
	// Line 242, Address: 0x1d5440, Func Offset: 0x40
	// Line 244, Address: 0x1d5448, Func Offset: 0x48
	// Line 246, Address: 0x1d5458, Func Offset: 0x58
	// Line 253, Address: 0x1d5478, Func Offset: 0x78
	// Line 255, Address: 0x1d5480, Func Offset: 0x80
	// Line 254, Address: 0x1d5484, Func Offset: 0x84
	// Line 255, Address: 0x1d5488, Func Offset: 0x88
	// Line 254, Address: 0x1d548c, Func Offset: 0x8c
	// Line 255, Address: 0x1d5490, Func Offset: 0x90
	// Line 254, Address: 0x1d5494, Func Offset: 0x94
	// Line 255, Address: 0x1d5498, Func Offset: 0x98
	// Line 254, Address: 0x1d54b0, Func Offset: 0xb0
	// Line 255, Address: 0x1d5524, Func Offset: 0x124
	// Line 256, Address: 0x1d55ac, Func Offset: 0x1ac
	// Line 257, Address: 0x1d55b4, Func Offset: 0x1b4
	// Line 258, Address: 0x1d55b8, Func Offset: 0x1b8
	// Line 260, Address: 0x1d55c0, Func Offset: 0x1c0
	// Line 259, Address: 0x1d55c4, Func Offset: 0x1c4
	// Line 260, Address: 0x1d55c8, Func Offset: 0x1c8
	// Line 259, Address: 0x1d55cc, Func Offset: 0x1cc
	// Line 260, Address: 0x1d55d0, Func Offset: 0x1d0
	// Line 259, Address: 0x1d55d4, Func Offset: 0x1d4
	// Line 260, Address: 0x1d55d8, Func Offset: 0x1d8
	// Line 277, Address: 0x1d55f0, Func Offset: 0x1f0
	// Line 259, Address: 0x1d55f4, Func Offset: 0x1f4
	// Line 260, Address: 0x1d5668, Func Offset: 0x268
	// Line 277, Address: 0x1d56f0, Func Offset: 0x2f0
	// Line 286, Address: 0x1d56f8, Func Offset: 0x2f8
	// Line 287, Address: 0x1d5758, Func Offset: 0x358
	// Line 288, Address: 0x1d5760, Func Offset: 0x360
	// Line 289, Address: 0x1d5774, Func Offset: 0x374
	// Line 290, Address: 0x1d5788, Func Offset: 0x388
	// Line 291, Address: 0x1d5790, Func Offset: 0x390
	// Line 290, Address: 0x1d5794, Func Offset: 0x394
	// Line 293, Address: 0x1d5798, Func Offset: 0x398
	// Line 291, Address: 0x1d57a4, Func Offset: 0x3a4
	// Line 292, Address: 0x1d57c4, Func Offset: 0x3c4
	// Line 293, Address: 0x1d57e8, Func Offset: 0x3e8
	// Line 301, Address: 0x1d57f8, Func Offset: 0x3f8
	// Func End, Address: 0x1d580c, Func Offset: 0x40c
}

