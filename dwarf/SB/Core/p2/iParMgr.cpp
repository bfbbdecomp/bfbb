typedef struct xAnimState;
typedef struct _tagEmitLine;
typedef struct xEntDrive;
typedef struct RpWorldSector;
typedef struct xBaseAsset;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct xQCData;
typedef struct tagiRenderInput;
typedef struct xSurface;
typedef struct RwBBox;
typedef struct xPar;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xGridBound;
typedef struct RwTexture;
typedef struct RxPipelineNode;
typedef struct zJumpParam;
typedef struct xAnimEffect;
typedef struct xEntAsset;
typedef struct xUpdateCullMgr;
typedef struct xQuat;
typedef struct zPlayerCarryInfo;
typedef struct RpLight;
typedef struct xModelBucket;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEntCollis;
typedef struct RxObjSpace3DVertex;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct zEntHangable;
typedef struct RpWorld;
typedef struct zPlayerSettings;
typedef struct RwRaster;
typedef struct xEnt;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct RwCamera;
typedef struct RxPipelineRequiresCluster;
typedef struct zEnt;
typedef struct xModelInstance;
typedef struct xJSPNodeInfo;
typedef struct xParCmdTex;
typedef struct zPlatform;
typedef struct xEnvAsset;
typedef struct xUpdateCullEnt;
typedef struct xAnimTransition;
typedef struct _zPortal;
typedef struct xAnimTransitionList;
typedef struct xFFX;
typedef struct xEntFrame;
typedef struct xLightKit;
typedef struct RxPipeline;
typedef struct xParGroup;
typedef struct xParCmdAsset;
typedef struct zCutsceneMgr;
typedef struct xModelTag;
typedef struct RpSector;
typedef struct _tagEmitVolume;
typedef struct xMat4x3;
typedef struct xPortalAsset;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct zAssetPickupTable;
typedef struct RwMatrixTag;
typedef struct iFogParams;
typedef struct RwLLLink;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct xShadowSimplePoly;
typedef struct rxReq;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct xEntBoulder;
typedef struct xScene;
typedef enum RxClusterValidityReq;
typedef struct tri_data_0;
typedef struct xAnimMultiFile;
typedef struct RpVertexNormal;
typedef struct _tagEmitOffsetPoint;
typedef struct RpAtomic;
typedef struct xCollis;
typedef enum RxNodeDefEditable;
typedef struct xParEmitterAsset;
typedef struct xJSPHeader;
typedef enum RxClusterValid;
typedef struct xLightKitLight;
typedef struct tri_data_1;
typedef enum _tagPadState;
typedef struct RpInterpolator;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xShadowSimpleCache;
typedef struct _class_0;
typedef struct RpMaterial;
typedef struct xGlobals;
typedef struct zParSys;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagxPad;
typedef struct xAnimTable;
typedef enum RwCameraProjection;
typedef struct xPEVCyl;
typedef struct RpPolygon;
typedef enum RxClusterForcePresent;
typedef struct zLasso;
typedef struct xCylinder;
typedef struct RpMaterialList;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct _class_1;
typedef struct xParSysAsset;
typedef struct _tagiPad;
typedef struct xEnv;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xLinkAsset;
typedef struct RpGeometry;
typedef struct xAnimActiveEffect;
typedef struct xPEEntBone;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntShadow;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMat3x3;
typedef struct anim_coll_data;
typedef struct RxClusterRef;
typedef struct xClumpCollBSPTriangle;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct xPECircle;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct RwFrustumPlane;
typedef struct xAnimPlay;
typedef struct RpTriangle;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct zPlayerLassoInfo;
typedef struct xParCmd;
typedef union _class_2;
typedef struct xParSys;
typedef struct zScene;
typedef struct xVec2;
typedef struct RxCluster;
typedef struct _tagEmitSphere;
typedef struct zLedgeGrabParams;
typedef struct xBBox;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef enum _zPlayerWallJumpState;
typedef enum RwFogType;
typedef struct tagiRenderArrays;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef enum _tagRumbleType;
typedef struct _tagEmitRect;
typedef struct RwLinkList;
typedef enum _zPlayerType;
typedef enum RpWorldRenderOrder;
typedef struct analog_data;
typedef struct RwV2d;
typedef struct xPEEntBound;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;

typedef int8*(*type_5)(xBase*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef int8*(*type_10)(uint32);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef int32(*type_17)(RxPipelineNode*);
typedef uint32(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_19)(RxPipelineNode*);
typedef int32(*type_23)(RxPipelineNode*, RxPipeline*);
typedef void(*type_28)(void*);
typedef void(*type_33)(xAnimPlay*, xAnimState*);
typedef void(*type_37)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_38)(xEnt*, xScene*, float32);
typedef void(*type_41)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_45)(void*, xParGroup*);
typedef void(*type_46)(xEnt*, xVec3*);
typedef void(*type_48)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_49)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_52)(xEnt*);
typedef uint32(*type_57)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_60)(xEnt*, xVec3*, xMat4x3*);
typedef xBase*(*type_68)(uint32);
typedef RpClump*(*type_69)(RpClump*, void*);
typedef uint32(*type_72)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_75)(RwCamera*);
typedef uint32(*type_77)(void*, void*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef void(*type_84)(xMemPool*, void*);
typedef RpAtomic*(*type_89)(RpAtomic*);
typedef void(*type_91)(RwResEntry*);
typedef int32(*type_96)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_102)(RwObjectHasFrame*);

typedef uint32 type_0[72];
typedef uint32 type_1[15];
typedef int8 type_2[4];
typedef uint16 type_3[6];
typedef xBase* type_4[72];
typedef analog_data type_7[2];
typedef RwFrustumPlane type_8[6];
typedef uint8 type_12[4];
typedef RwV3d type_13[8];
typedef uint8 type_16[3];
typedef xVec4 type_20[12];
typedef RwRGBA type_21[8];
typedef uint8 type_22[2];
typedef uint32 type_24[2];
typedef uint8 type_25[2];
typedef uint8 type_26[2];
typedef float32 type_27[6];
typedef xVec3 type_29[3];
typedef uint8 type_30[3];
typedef float32 type_31[3];
typedef float32 type_32[3];
typedef xModelTag type_34[2];
typedef float32 type_35[3];
typedef float32 type_36[4];
typedef RpLight* type_39[2];
typedef float32 type_40[4];
typedef RxObjSpace3DVertex type_42[4];
typedef float32 type_43[4];
typedef RwFrame* type_44[2];
typedef float32 type_47[16];
typedef uint8 type_50[2];
typedef xEnt* type_51[111];
typedef uint16 type_53[6];
typedef float32 type_54[256];
typedef int8 type_55[16];
typedef uint16 type_56[3];
typedef int8 type_58[128];
typedef type_58 type_59[6];
typedef uint32 type_61[4];
typedef int8 type_62[16];
typedef uint8 type_63[14];
typedef xModelTag type_64[4];
typedef int8 type_65[32];
typedef xVec3 type_66[4];
typedef xModelInstance* type_67[14];
typedef uint8 type_70[4];
typedef uint32 type_71[4096];
typedef RwTexCoords* type_73[8];
typedef float32 type_74[2];
typedef RxObjSpace3DVertex type_76[4];
typedef uint8 type_78[22];
typedef float32 type_79[4];
typedef xCollis type_80[18];
typedef uint8 type_81[22];
typedef uint16 type_83[6];
typedef uint16 type_85[3];
typedef int8 type_86[32];
typedef xVec3 type_87[5];
typedef int8 type_88[32];
typedef uint8 type_90[2];
typedef xAnimMultiFileEntry type_92[1];
typedef float32 type_93[0];
typedef uint8 type_94[5];
typedef xVec3 type_95[60];
typedef float32 type_97[22];
typedef uint16 type_98[960];
typedef RxCluster type_99[1];
typedef float32 type_100[22];
typedef RxObjSpace3DVertex type_101[480];
typedef float32 type_103[480];
typedef uint32 type_104[15];
typedef float32 type_105[2];
typedef xVec3 type_106[4];
typedef RwTexCoords* type_107[8];
typedef RxObjSpace3DVertex type_108[4];
typedef uint32 type_109[15];

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
	type_33 BeforeEnter;
	type_37 StateCallback;
	type_41 BeforeAnimMatrices;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float32 radius;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_73 texCoords;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xSurface
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	type_12 m_c;
	xVec3 m_pos;
	float32 m_size;
	xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	type_26 m_texIdx;
	type_30 m_rotdeg;
	uint8 pad8;
	float32 totalLifespan;
	xParEmitterAsset* m_asset;
	type_40 m_cvel;
	type_43 m_cfl;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_96 eventFunc;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_72 Callback;
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
	type_28 activateCB;
	type_28 deactivateCB;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
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
	type_20 frustplane;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	type_80 colls;
	type_48 post;
	type_57 depenq;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_69 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_61 pad;
};

struct zEntHangable
{
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
	type_6 renderCallBack;
	RxPipeline* pipeline;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_27 MoveSpeed;
	type_31 AnimSneak;
	type_32 AnimWalk;
	type_35 AnimRun;
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
	type_70 talk_filter;
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
	type_38 update;
	type_38 endUpdate;
	type_46 bupdate;
	type_49 move;
	type_52 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_60 transl;
	xFFX* ffx;
	xEnt* driver;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTree
{
	uint32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	uint32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_90 NumAnims;
	void** RawData;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_75 beginUpdate;
	type_82 endUpdate;
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
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_13 frustumCorners;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	int32 nodeFlags;
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

struct zPlatform
{
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
	type_77 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_18 Conditional;
	type_18 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xFFX
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
	uint32 mode;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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
	type_45 draw;
	xParCmdTex* m_cmdTex;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	type_50 pad;
};

struct zCutsceneMgr
{
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	type_36 wt;
};

struct RpSector
{
	int32 type;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zAssetPickupTable
{
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	type_16 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct xShadowSimplePoly
{
	type_29 vert;
	xVec3 norm;
};

struct rxReq
{
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
	type_39 light;
	type_44 light_frame;
	int32 memlvl;
};

struct xEntBoulder
{
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
	type_68 resolvID;
	type_5 base2Name;
	type_10 id2Name;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_92 Files;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_89 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xJSPHeader
{
	type_2 idtag;
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_47 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_66 corner;
};

struct _class_0
{
	xVec3* verts;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int32 profile;
	type_59 profFunc;
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	type_65 sceneStart;
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

struct zParSys : xParSys
{
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

struct _tagxPad
{
	type_78 value;
	type_81 last_value;
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
	type_97 up_tmr;
	type_100 down_tmr;
	type_7 analog;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xPEVCyl
{
	float32 height;
	float32 radius;
	float32 deflection;
};

struct RpPolygon
{
	uint16 matIndex;
	type_56 vertIndex;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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
	type_87 lastRefs;
	type_94 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

struct _tagiPad
{
	int32 port;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_79 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_107 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	type_105 radius;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_74 BilinearLerp;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct anim_coll_data
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 platData;
	uint16 matIndex;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xPECircle
{
	float32 radius;
	float32 deflection;
	xVec3 dir;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_91 destroyNotify;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_14 nodeInit;
	type_15 nodeTerm;
	type_17 pipelineNodeInit;
	type_19 pipelineNodeTerm;
	type_23 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_84 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	type_22 PowerUp;
	type_25 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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
	type_41 BeforeAnimMatrices;
};

struct RpTriangle
{
	type_85 vertIndex;
	int16 matIndex;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xParCmd
{
	uint32 flag;
	xParCmdAsset* tasset;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_0 baseCount;
	type_4 baseList;
	_zEnv* zen;
};

struct xVec2
{
	float32 x;
	float32 y;
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

struct _tagEmitSphere
{
	float32 radius;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	type_95 tranTable;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_99 clusters;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiRenderArrays
{
	type_98 m_index;
	type_101 m_vertex;
	type_103 m_vertexTZ;
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
	type_102 sync;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RwLinkList
{
	RwLLLink link;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct RwV2d
{
	float32 x;
	float32 y;
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
	type_34 BubbleWandTag;
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
	type_64 HangPawTag;
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
	type_104 Inv_PatsSock;
	type_109 Inv_PatsSock_Max;
	uint32 Inv_PatsSock_CurrentLevel;
	type_1 Inv_LevelPickups;
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
	type_24 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	type_51 SlideTrackEnt;
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	type_63 sb_model_indices;
	type_67 sb_models;
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

type_55 buffer;
type_62 buffer;
int32 gColorTableInit;
type_54 gColorTable;
RpAtomic* sParAtomic;
RpClump* sParClump;
RpMaterial* sParMaterial;
RwFrame* sParClumpFrame;
RwFrame* sParAtomicFrame;
RwTexture* sParTexture;
float32 sParEmitterWidth;
float32 sParEmitterLength;
float32 sParEmitterAngle;
float32 sParSize;
float32 sParGrowth;
float32 sParAspectRatio;
float32 sParFlightTime;
float32 sParMinSpeed;
float32 sParMaxSpeed;
float32 sParDamping;
RwV3d sParForce;
int32 sParStartColor;
int32 sParStartAlpha;
int32 sParEndColor;
int32 sParEndAlpha;
type_21 sParColors;
int32 sParAdded;
tagiRenderArrays gRenderArr;
tagiRenderInput gRenderBuffer;
type_93 cosSinPolynomial;
zGlobals globals;
type_71 ourGlobals;

void iParMgrRenderParSys_Flat(void* data, xParGroup* ps);
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps);
void iParMgrRenderParSys_Static();
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps);
void iRenderPushFlat(xPar* p, xParCmdTex* tex);
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex);
void iRenderSetCameraViewMatrix(xMat4x3* m);
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps);
void iParMgrRender();
void iParMgrUpdate();
void iParMgrInit();

// iParMgrRenderParSys_Flat__FPvP9xParGroup
// Start address: 0x1b0b60
void iParMgrRenderParSys_Flat(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
}

// iParMgrRenderParSys_Ground__FPvP9xParGroup
// Start address: 0x1b0c60
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	xParCmdTex* tex;
	xPar* p;
	void* vertices;
	uint16* indices;
	int32 vertexCount;
	int32 indexCount;
	float32 size;
	type_106 vert;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	xMat3x3 groundmat;
	float32 angx;
	float32 angy;
	float32 angz;
	xVec3 zdir;
	xVec3 xdir;
	xVec3 centre;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	uint16* src;
	uint16* dst;
	int32 i;
	type_76 v3d;
	type_83 i3d;
}

// iParMgrRenderParSys_Static__FPvP9xParGroup
// Start address: 0x1b15b0
void iParMgrRenderParSys_Static()
{
}

// iParMgrRenderParSys_QuadStreak__FPvP9xParGroup
// Start address: 0x1b15c0
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
}

// iParMgrRenderParSys_InvStreak__FPvP9xParGroup
// Start address: 0x1b16d0
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps)
{
	uint32 transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	xPar* p;
	void* vertices;
	int32 vertexCount;
}

// iParMgrRenderParSys_Streak__FPvP9xParGroup
// Start address: 0x1b19b0
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps)
{
	uint32 transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	xPar* p;
	void* vertices;
	int32 vertexCount;
}

// iRenderPushFlat__FP4xParP10xParCmdTex
// Start address: 0x1b1c90
void iRenderPushFlat(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	uint16* indices;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	float32 size;
	xMat3x3 groundmat;
	float32 yaw;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	uint16* dst;
	type_42 v3d;
	type_53 i3d;
}

// iRenderPushQuadStreak__FP4xParP10xParCmdTex
// Start address: 0x1b21e0
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	uint16* indices;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	float32 size;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
	uint16* dst;
	type_108 v3d;
	type_3 i3d;
}

// iRenderSetCameraViewMatrix__FP7xMat4x3
// Start address: 0x1b26e0
void iRenderSetCameraViewMatrix(xMat4x3* m)
{
	RwMatrixTag* mat;
}

// iParMgrRenderParSys_Sprite__FPvP9xParGroup
// Start address: 0x1b28f0
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	int32 indexCount;
	int32 vertexCount;
	uint16* i3d;
	RxObjSpace3DVertex* v3d;
	xParCmdTex* tex;
	uint32 pivot;
	xVec3 offset;
	xVec3 temp_offset;
	xPar* p;
	float32 u1;
	float32 u2;
	float32 v1;
	float32 v2;
}

// iParMgrRender__Fv
// Start address: 0x1b30e0
void iParMgrRender()
{
}

// iParMgrUpdate__Ff
// Start address: 0x1b30f0
void iParMgrUpdate()
{
}

// iParMgrInit__Fv
// Start address: 0x1b3100
void iParMgrInit()
{
	int32 i;
}

