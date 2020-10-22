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
typedef struct RxColorUnion;
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
typedef struct _class_2;
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
typedef int8 type_59[128][6];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	int8 name[32];
	int8 mask[32];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
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
	xVec4 frustplane[12];
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
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
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
	RpClump*(*callback)(RpClump*, void*);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
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
	uint8 NumAnims[2];
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
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	void(*draw)(void*, xParGroup*);
	xParCmdTex* m_cmdTex;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct zCutsceneMgr
{
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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
	uint8 pad[3];
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
	xVec3 vert[3];
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
	RpLight* light[2];
	RwFrame* light_frame[2];
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
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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
	xAnimMultiFileEntry Files[1];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	int8 idtag[4];
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
	float32 matrix[16];
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
	xVec3 corner[4];
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
	uint16 vertIndex[3];
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
	xVec3 lastRefs[5];
	uint8 reindex[5];
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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
	float32 param[4];
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
	RwTexCoords* texCoords[8];
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
	float32 radius[2];
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
	void(*destroyNotify)(RwResEntry*);
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
	uint8 PowerUp[2];
	uint8 InitialPowerUp[2];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct RpTriangle
{
	uint16 vertIndex[3];
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		RwV3d* p;
	};
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
	uint32 baseCount[72];
	xBase* baseList[72];
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
	RxCluster clusters[1];
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
	uint16 m_index[960];
	RxObjSpace3DVertex m_vertex[480];
	float32 m_vertexTZ[480];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

int8 buffer[16];
int8 buffer[16];
int32 gColorTableInit;
float32 gColorTable[256];
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
RwRGBA sParColors[8];
int32 sParAdded;
tagiRenderArrays gRenderArr;
tagiRenderInput gRenderBuffer;
float32 cosSinPolynomial[0];
zGlobals globals;
uint32 ourGlobals[4096];

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
	// Line 1643, Address: 0x1b0b60, Func Offset: 0
	// Line 1645, Address: 0x1b0b7c, Func Offset: 0x1c
	// Line 1647, Address: 0x1b0b80, Func Offset: 0x20
	// Line 1650, Address: 0x1b0b88, Func Offset: 0x28
	// Line 1652, Address: 0x1b0b8c, Func Offset: 0x2c
	// Line 1654, Address: 0x1b0b94, Func Offset: 0x34
	// Line 1655, Address: 0x1b0b98, Func Offset: 0x38
	// Line 1657, Address: 0x1b0ba0, Func Offset: 0x40
	// Line 1667, Address: 0x1b0ba8, Func Offset: 0x48
	// Line 1670, Address: 0x1b0bb0, Func Offset: 0x50
	// Line 1673, Address: 0x1b0bbc, Func Offset: 0x5c
	// Line 1674, Address: 0x1b0bc0, Func Offset: 0x60
	// Line 1676, Address: 0x1b0bd0, Func Offset: 0x70
	// Line 1677, Address: 0x1b0c40, Func Offset: 0xe0
	// Func End, Address: 0x1b0c58, Func Offset: 0xf8
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
	xVec3 vert[4];
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
	RxObjSpace3DVertex v3d[4];
	uint16 i3d[6];
	// Line 1425, Address: 0x1b0c60, Func Offset: 0
	// Line 1426, Address: 0x1b0c90, Func Offset: 0x30
	// Line 1428, Address: 0x1b0c98, Func Offset: 0x38
	// Line 1431, Address: 0x1b0ca0, Func Offset: 0x40
	// Line 1433, Address: 0x1b0ca4, Func Offset: 0x44
	// Line 1435, Address: 0x1b0cac, Func Offset: 0x4c
	// Line 1436, Address: 0x1b0cb0, Func Offset: 0x50
	// Line 1438, Address: 0x1b0cb8, Func Offset: 0x58
	// Line 1443, Address: 0x1b0cc0, Func Offset: 0x60
	// Line 1446, Address: 0x1b0cd8, Func Offset: 0x78
	// Line 1470, Address: 0x1b0ce0, Func Offset: 0x80
	// Line 1467, Address: 0x1b0ce8, Func Offset: 0x88
	// Line 1462, Address: 0x1b0cec, Func Offset: 0x8c
	// Line 1463, Address: 0x1b0cf0, Func Offset: 0x90
	// Line 1456, Address: 0x1b0cf4, Func Offset: 0x94
	// Line 1462, Address: 0x1b0cf8, Func Offset: 0x98
	// Line 1463, Address: 0x1b0cfc, Func Offset: 0x9c
	// Line 1470, Address: 0x1b0d00, Func Offset: 0xa0
	// Line 1476, Address: 0x1b0d28, Func Offset: 0xc8
	// Line 1479, Address: 0x1b0d98, Func Offset: 0x138
	// Line 1476, Address: 0x1b0d9c, Func Offset: 0x13c
	// Line 1479, Address: 0x1b0da0, Func Offset: 0x140
	// Line 1476, Address: 0x1b0da4, Func Offset: 0x144
	// Line 1479, Address: 0x1b0da8, Func Offset: 0x148
	// Line 1483, Address: 0x1b0db8, Func Offset: 0x158
	// Line 1487, Address: 0x1b0dcc, Func Offset: 0x16c
	// Line 1502, Address: 0x1b0df4, Func Offset: 0x194
	// Line 1501, Address: 0x1b0df8, Func Offset: 0x198
	// Line 1490, Address: 0x1b0dfc, Func Offset: 0x19c
	// Line 1491, Address: 0x1b0e00, Func Offset: 0x1a0
	// Line 1501, Address: 0x1b0e04, Func Offset: 0x1a4
	// Line 1492, Address: 0x1b0e08, Func Offset: 0x1a8
	// Line 1493, Address: 0x1b0e0c, Func Offset: 0x1ac
	// Line 1502, Address: 0x1b0e10, Func Offset: 0x1b0
	// Line 1504, Address: 0x1b0e18, Func Offset: 0x1b8
	// Line 1506, Address: 0x1b0e60, Func Offset: 0x200
	// Line 1508, Address: 0x1b0e6c, Func Offset: 0x20c
	// Line 1509, Address: 0x1b0eb4, Func Offset: 0x254
	// Line 1510, Address: 0x1b0eb8, Func Offset: 0x258
	// Line 1512, Address: 0x1b0ec4, Func Offset: 0x264
	// Line 1513, Address: 0x1b0f0c, Func Offset: 0x2ac
	// Line 1516, Address: 0x1b0f10, Func Offset: 0x2b0
	// Line 1517, Address: 0x1b0f40, Func Offset: 0x2e0
	// Line 1518, Address: 0x1b0f70, Func Offset: 0x310
	// Line 1520, Address: 0x1b0f9c, Func Offset: 0x33c
	// Line 1521, Address: 0x1b0ff0, Func Offset: 0x390
	// Line 1522, Address: 0x1b1010, Func Offset: 0x3b0
	// Line 1523, Address: 0x1b1070, Func Offset: 0x410
	// Line 1524, Address: 0x1b10b0, Func Offset: 0x450
	// Line 1530, Address: 0x1b10c4, Func Offset: 0x464
	// Line 1565, Address: 0x1b10c8, Func Offset: 0x468
	// Line 1531, Address: 0x1b10cc, Func Offset: 0x46c
	// Line 1566, Address: 0x1b10d0, Func Offset: 0x470
	// Line 1532, Address: 0x1b10d4, Func Offset: 0x474
	// Line 1567, Address: 0x1b10d8, Func Offset: 0x478
	// Line 1535, Address: 0x1b10dc, Func Offset: 0x47c
	// Line 1568, Address: 0x1b10e0, Func Offset: 0x480
	// Line 1536, Address: 0x1b10e4, Func Offset: 0x484
	// Line 1565, Address: 0x1b10e8, Func Offset: 0x488
	// Line 1537, Address: 0x1b10ec, Func Offset: 0x48c
	// Line 1566, Address: 0x1b10f0, Func Offset: 0x490
	// Line 1530, Address: 0x1b10f4, Func Offset: 0x494
	// Line 1567, Address: 0x1b10f8, Func Offset: 0x498
	// Line 1568, Address: 0x1b10fc, Func Offset: 0x49c
	// Line 1570, Address: 0x1b1100, Func Offset: 0x4a0
	// Line 1531, Address: 0x1b1104, Func Offset: 0x4a4
	// Line 1532, Address: 0x1b1108, Func Offset: 0x4a8
	// Line 1535, Address: 0x1b110c, Func Offset: 0x4ac
	// Line 1536, Address: 0x1b1110, Func Offset: 0x4b0
	// Line 1537, Address: 0x1b1114, Func Offset: 0x4b4
	// Line 1530, Address: 0x1b1118, Func Offset: 0x4b8
	// Line 1531, Address: 0x1b111c, Func Offset: 0x4bc
	// Line 1532, Address: 0x1b1120, Func Offset: 0x4c0
	// Line 1535, Address: 0x1b1124, Func Offset: 0x4c4
	// Line 1536, Address: 0x1b1128, Func Offset: 0x4c8
	// Line 1537, Address: 0x1b112c, Func Offset: 0x4cc
	// Line 1540, Address: 0x1b1130, Func Offset: 0x4d0
	// Line 1546, Address: 0x1b1134, Func Offset: 0x4d4
	// Line 1547, Address: 0x1b113c, Func Offset: 0x4dc
	// Line 1548, Address: 0x1b1144, Func Offset: 0x4e4
	// Line 1540, Address: 0x1b1148, Func Offset: 0x4e8
	// Line 1541, Address: 0x1b114c, Func Offset: 0x4ec
	// Line 1546, Address: 0x1b1150, Func Offset: 0x4f0
	// Line 1548, Address: 0x1b1154, Func Offset: 0x4f4
	// Line 1541, Address: 0x1b1158, Func Offset: 0x4f8
	// Line 1546, Address: 0x1b115c, Func Offset: 0x4fc
	// Line 1551, Address: 0x1b1160, Func Offset: 0x500
	// Line 1542, Address: 0x1b1164, Func Offset: 0x504
	// Line 1546, Address: 0x1b1168, Func Offset: 0x508
	// Line 1547, Address: 0x1b116c, Func Offset: 0x50c
	// Line 1546, Address: 0x1b1170, Func Offset: 0x510
	// Line 1561, Address: 0x1b1174, Func Offset: 0x514
	// Line 1547, Address: 0x1b1178, Func Offset: 0x518
	// Line 1561, Address: 0x1b117c, Func Offset: 0x51c
	// Line 1547, Address: 0x1b1180, Func Offset: 0x520
	// Line 1562, Address: 0x1b1188, Func Offset: 0x528
	// Line 1542, Address: 0x1b118c, Func Offset: 0x52c
	// Line 1548, Address: 0x1b1190, Func Offset: 0x530
	// Line 1562, Address: 0x1b1198, Func Offset: 0x538
	// Line 1548, Address: 0x1b119c, Func Offset: 0x53c
	// Line 1563, Address: 0x1b11a4, Func Offset: 0x544
	// Line 1551, Address: 0x1b11ac, Func Offset: 0x54c
	// Line 1556, Address: 0x1b11b0, Func Offset: 0x550
	// Line 1552, Address: 0x1b11b4, Func Offset: 0x554
	// Line 1551, Address: 0x1b11b8, Func Offset: 0x558
	// Line 1556, Address: 0x1b11bc, Func Offset: 0x55c
	// Line 1552, Address: 0x1b11c0, Func Offset: 0x560
	// Line 1557, Address: 0x1b11c4, Func Offset: 0x564
	// Line 1553, Address: 0x1b11c8, Func Offset: 0x568
	// Line 1552, Address: 0x1b11cc, Func Offset: 0x56c
	// Line 1557, Address: 0x1b11d0, Func Offset: 0x570
	// Line 1553, Address: 0x1b11d4, Func Offset: 0x574
	// Line 1558, Address: 0x1b11d8, Func Offset: 0x578
	// Line 1553, Address: 0x1b11dc, Func Offset: 0x57c
	// Line 1558, Address: 0x1b11e0, Func Offset: 0x580
	// Line 1565, Address: 0x1b11e4, Func Offset: 0x584
	// Line 1566, Address: 0x1b11f4, Func Offset: 0x594
	// Line 1567, Address: 0x1b1204, Func Offset: 0x5a4
	// Line 1568, Address: 0x1b1214, Func Offset: 0x5b4
	// Line 1570, Address: 0x1b1224, Func Offset: 0x5c4
	// Line 1571, Address: 0x1b1230, Func Offset: 0x5d0
	// Line 1570, Address: 0x1b123c, Func Offset: 0x5dc
	// Line 1571, Address: 0x1b124c, Func Offset: 0x5ec
	// Line 1570, Address: 0x1b1258, Func Offset: 0x5f8
	// Line 1572, Address: 0x1b125c, Func Offset: 0x5fc
	// Line 1570, Address: 0x1b1260, Func Offset: 0x600
	// Line 1571, Address: 0x1b126c, Func Offset: 0x60c
	// Line 1572, Address: 0x1b1278, Func Offset: 0x618
	// Line 1570, Address: 0x1b127c, Func Offset: 0x61c
	// Line 1572, Address: 0x1b1288, Func Offset: 0x628
	// Line 1571, Address: 0x1b128c, Func Offset: 0x62c
	// Line 1572, Address: 0x1b1294, Func Offset: 0x634
	// Line 1571, Address: 0x1b1298, Func Offset: 0x638
	// Line 1573, Address: 0x1b12a0, Func Offset: 0x640
	// Line 1571, Address: 0x1b12a4, Func Offset: 0x644
	// Line 1573, Address: 0x1b12ac, Func Offset: 0x64c
	// Line 1572, Address: 0x1b12b0, Func Offset: 0x650
	// Line 1573, Address: 0x1b12bc, Func Offset: 0x65c
	// Line 1572, Address: 0x1b12c0, Func Offset: 0x660
	// Line 1573, Address: 0x1b12c4, Func Offset: 0x664
	// Line 1572, Address: 0x1b12cc, Func Offset: 0x66c
	// Line 1573, Address: 0x1b12d8, Func Offset: 0x678
	// Line 1572, Address: 0x1b12dc, Func Offset: 0x67c
	// Line 1573, Address: 0x1b12e0, Func Offset: 0x680
	// Line 1572, Address: 0x1b12ec, Func Offset: 0x68c
	// Line 1573, Address: 0x1b12f8, Func Offset: 0x698
	// Line 1575, Address: 0x1b130c, Func Offset: 0x6ac
	// Line 1580, Address: 0x1b1314, Func Offset: 0x6b4
	// Line 1581, Address: 0x1b1348, Func Offset: 0x6e8
	// Line 1580, Address: 0x1b134c, Func Offset: 0x6ec
	// Line 1581, Address: 0x1b1354, Func Offset: 0x6f4
	// Line 1583, Address: 0x1b1388, Func Offset: 0x728
	// Line 1584, Address: 0x1b138c, Func Offset: 0x72c
	// Line 1581, Address: 0x1b1390, Func Offset: 0x730
	// Line 1583, Address: 0x1b1394, Func Offset: 0x734
	// Line 1586, Address: 0x1b1398, Func Offset: 0x738
	// Line 1583, Address: 0x1b139c, Func Offset: 0x73c
	// Line 1581, Address: 0x1b13a0, Func Offset: 0x740
	// Line 1583, Address: 0x1b13a4, Func Offset: 0x744
	// Line 1584, Address: 0x1b13a8, Func Offset: 0x748
	// Line 1586, Address: 0x1b13ac, Func Offset: 0x74c
	// Line 1589, Address: 0x1b13b0, Func Offset: 0x750
	// Line 1583, Address: 0x1b13b8, Func Offset: 0x758
	// Line 1586, Address: 0x1b13bc, Func Offset: 0x75c
	// Line 1581, Address: 0x1b13c0, Func Offset: 0x760
	// Line 1586, Address: 0x1b13c4, Func Offset: 0x764
	// Line 1588, Address: 0x1b13c8, Func Offset: 0x768
	// Line 1583, Address: 0x1b13d0, Func Offset: 0x770
	// Line 1587, Address: 0x1b13d4, Func Offset: 0x774
	// Line 1584, Address: 0x1b13d8, Func Offset: 0x778
	// Line 1583, Address: 0x1b13dc, Func Offset: 0x77c
	// Line 1584, Address: 0x1b13e0, Func Offset: 0x780
	// Line 1583, Address: 0x1b13e8, Func Offset: 0x788
	// Line 1587, Address: 0x1b13ec, Func Offset: 0x78c
	// Line 1588, Address: 0x1b13f0, Func Offset: 0x790
	// Line 1584, Address: 0x1b13f8, Func Offset: 0x798
	// Line 1587, Address: 0x1b13fc, Func Offset: 0x79c
	// Line 1589, Address: 0x1b1404, Func Offset: 0x7a4
	// Line 1591, Address: 0x1b1408, Func Offset: 0x7a8
	// Line 1594, Address: 0x1b1410, Func Offset: 0x7b0
	// Line 1595, Address: 0x1b1418, Func Offset: 0x7b8
	// Line 1594, Address: 0x1b141c, Func Offset: 0x7bc
	// Line 1595, Address: 0x1b1424, Func Offset: 0x7c4
	// Line 1596, Address: 0x1b1434, Func Offset: 0x7d4
	// Line 1597, Address: 0x1b143c, Func Offset: 0x7dc
	// Line 1596, Address: 0x1b1444, Func Offset: 0x7e4
	// Line 1597, Address: 0x1b144c, Func Offset: 0x7ec
	// Line 1598, Address: 0x1b1454, Func Offset: 0x7f4
	// Line 1606, Address: 0x1b1458, Func Offset: 0x7f8
	// Line 1608, Address: 0x1b1460, Func Offset: 0x800
	// Line 1606, Address: 0x1b1464, Func Offset: 0x804
	// Line 1608, Address: 0x1b1470, Func Offset: 0x810
	// Line 1611, Address: 0x1b1478, Func Offset: 0x818
	// Line 1612, Address: 0x1b1480, Func Offset: 0x820
	// Line 1611, Address: 0x1b1484, Func Offset: 0x824
	// Line 1612, Address: 0x1b1498, Func Offset: 0x838
	// Line 1615, Address: 0x1b14a4, Func Offset: 0x844
	// Line 1620, Address: 0x1b14cc, Func Offset: 0x86c
	// Line 1621, Address: 0x1b14d4, Func Offset: 0x874
	// Line 1620, Address: 0x1b14d8, Func Offset: 0x878
	// Line 1621, Address: 0x1b14dc, Func Offset: 0x87c
	// Line 1620, Address: 0x1b14e0, Func Offset: 0x880
	// Line 1621, Address: 0x1b14e4, Func Offset: 0x884
	// Line 1620, Address: 0x1b14e8, Func Offset: 0x888
	// Line 1621, Address: 0x1b14ec, Func Offset: 0x88c
	// Line 1623, Address: 0x1b14f4, Func Offset: 0x894
	// Line 1625, Address: 0x1b14f8, Func Offset: 0x898
	// Line 1626, Address: 0x1b14fc, Func Offset: 0x89c
	// Line 1631, Address: 0x1b1508, Func Offset: 0x8a8
	// Line 1632, Address: 0x1b1580, Func Offset: 0x920
	// Func End, Address: 0x1b15b0, Func Offset: 0x950
}

// iParMgrRenderParSys_Static__FPvP9xParGroup
// Start address: 0x1b15b0
void iParMgrRenderParSys_Static()
{
	// Line 1414, Address: 0x1b15b0, Func Offset: 0
	// Func End, Address: 0x1b15b8, Func Offset: 0x8
}

// iParMgrRenderParSys_QuadStreak__FPvP9xParGroup
// Start address: 0x1b15c0
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
	// Line 1365, Address: 0x1b15c0, Func Offset: 0
	// Line 1367, Address: 0x1b15dc, Func Offset: 0x1c
	// Line 1369, Address: 0x1b15e0, Func Offset: 0x20
	// Line 1372, Address: 0x1b15e8, Func Offset: 0x28
	// Line 1374, Address: 0x1b15ec, Func Offset: 0x2c
	// Line 1376, Address: 0x1b15f4, Func Offset: 0x34
	// Line 1377, Address: 0x1b15f8, Func Offset: 0x38
	// Line 1379, Address: 0x1b1600, Func Offset: 0x40
	// Line 1381, Address: 0x1b1608, Func Offset: 0x48
	// Line 1384, Address: 0x1b1610, Func Offset: 0x50
	// Line 1385, Address: 0x1b161c, Func Offset: 0x5c
	// Line 1393, Address: 0x1b1620, Func Offset: 0x60
	// Line 1395, Address: 0x1b1628, Func Offset: 0x68
	// Line 1398, Address: 0x1b1634, Func Offset: 0x74
	// Line 1399, Address: 0x1b1638, Func Offset: 0x78
	// Line 1401, Address: 0x1b1648, Func Offset: 0x88
	// Line 1402, Address: 0x1b16b8, Func Offset: 0xf8
	// Func End, Address: 0x1b16d0, Func Offset: 0x110
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
	// Line 1208, Address: 0x1b16d0, Func Offset: 0
	// Line 1211, Address: 0x1b16e8, Func Offset: 0x18
	// Line 1213, Address: 0x1b16ec, Func Offset: 0x1c
	// Line 1216, Address: 0x1b16f4, Func Offset: 0x24
	// Line 1218, Address: 0x1b16f8, Func Offset: 0x28
	// Line 1220, Address: 0x1b1700, Func Offset: 0x30
	// Line 1221, Address: 0x1b1704, Func Offset: 0x34
	// Line 1223, Address: 0x1b170c, Func Offset: 0x3c
	// Line 1225, Address: 0x1b1714, Func Offset: 0x44
	// Line 1228, Address: 0x1b1720, Func Offset: 0x50
	// Line 1229, Address: 0x1b172c, Func Offset: 0x5c
	// Line 1236, Address: 0x1b1730, Func Offset: 0x60
	// Line 1239, Address: 0x1b1748, Func Offset: 0x78
	// Line 1240, Address: 0x1b1750, Func Offset: 0x80
	// Line 1246, Address: 0x1b1754, Func Offset: 0x84
	// Line 1249, Address: 0x1b1758, Func Offset: 0x88
	// Line 1274, Address: 0x1b1760, Func Offset: 0x90
	// Line 1258, Address: 0x1b1768, Func Offset: 0x98
	// Line 1275, Address: 0x1b176c, Func Offset: 0x9c
	// Line 1276, Address: 0x1b1770, Func Offset: 0xa0
	// Line 1277, Address: 0x1b1774, Func Offset: 0xa4
	// Line 1278, Address: 0x1b177c, Func Offset: 0xac
	// Line 1279, Address: 0x1b1780, Func Offset: 0xb0
	// Line 1280, Address: 0x1b1784, Func Offset: 0xb4
	// Line 1281, Address: 0x1b1788, Func Offset: 0xb8
	// Line 1282, Address: 0x1b178c, Func Offset: 0xbc
	// Line 1283, Address: 0x1b1790, Func Offset: 0xc0
	// Line 1284, Address: 0x1b1794, Func Offset: 0xc4
	// Line 1285, Address: 0x1b1798, Func Offset: 0xc8
	// Line 1286, Address: 0x1b179c, Func Offset: 0xcc
	// Line 1287, Address: 0x1b17a0, Func Offset: 0xd0
	// Line 1288, Address: 0x1b17a4, Func Offset: 0xd4
	// Line 1289, Address: 0x1b17a8, Func Offset: 0xd8
	// Line 1290, Address: 0x1b17ac, Func Offset: 0xdc
	// Line 1291, Address: 0x1b17b0, Func Offset: 0xe0
	// Line 1292, Address: 0x1b17b4, Func Offset: 0xe4
	// Line 1293, Address: 0x1b17b8, Func Offset: 0xe8
	// Line 1294, Address: 0x1b17bc, Func Offset: 0xec
	// Line 1295, Address: 0x1b17c0, Func Offset: 0xf0
	// Line 1296, Address: 0x1b17c4, Func Offset: 0xf4
	// Line 1298, Address: 0x1b17cc, Func Offset: 0xfc
	// Line 1299, Address: 0x1b17d0, Func Offset: 0x100
	// Line 1300, Address: 0x1b17d4, Func Offset: 0x104
	// Line 1301, Address: 0x1b17d8, Func Offset: 0x108
	// Line 1302, Address: 0x1b17dc, Func Offset: 0x10c
	// Line 1303, Address: 0x1b17e0, Func Offset: 0x110
	// Line 1304, Address: 0x1b17e4, Func Offset: 0x114
	// Line 1305, Address: 0x1b17e8, Func Offset: 0x118
	// Line 1306, Address: 0x1b17ec, Func Offset: 0x11c
	// Line 1307, Address: 0x1b17f0, Func Offset: 0x120
	// Line 1308, Address: 0x1b17f4, Func Offset: 0x124
	// Line 1309, Address: 0x1b17f8, Func Offset: 0x128
	// Line 1310, Address: 0x1b17fc, Func Offset: 0x12c
	// Line 1311, Address: 0x1b1800, Func Offset: 0x130
	// Line 1312, Address: 0x1b1804, Func Offset: 0x134
	// Line 1313, Address: 0x1b1808, Func Offset: 0x138
	// Line 1314, Address: 0x1b180c, Func Offset: 0x13c
	// Line 1315, Address: 0x1b1810, Func Offset: 0x140
	// Line 1316, Address: 0x1b1814, Func Offset: 0x144
	// Line 1317, Address: 0x1b1818, Func Offset: 0x148
	// Line 1318, Address: 0x1b181c, Func Offset: 0x14c
	// Line 1322, Address: 0x1b1820, Func Offset: 0x150
	// Line 1327, Address: 0x1b182c, Func Offset: 0x15c
	// Line 1322, Address: 0x1b1830, Func Offset: 0x160
	// Line 1323, Address: 0x1b1834, Func Offset: 0x164
	// Line 1324, Address: 0x1b183c, Func Offset: 0x16c
	// Line 1327, Address: 0x1b1844, Func Offset: 0x174
	// Line 1331, Address: 0x1b1854, Func Offset: 0x184
	// Line 1334, Address: 0x1b186c, Func Offset: 0x19c
	// Line 1338, Address: 0x1b18d0, Func Offset: 0x200
	// Line 1334, Address: 0x1b18d4, Func Offset: 0x204
	// Line 1338, Address: 0x1b18d8, Func Offset: 0x208
	// Line 1334, Address: 0x1b18dc, Func Offset: 0x20c
	// Line 1335, Address: 0x1b18e0, Func Offset: 0x210
	// Line 1338, Address: 0x1b18e8, Func Offset: 0x218
	// Line 1341, Address: 0x1b18f8, Func Offset: 0x228
	// Line 1342, Address: 0x1b1900, Func Offset: 0x230
	// Line 1347, Address: 0x1b1904, Func Offset: 0x234
	// Line 1349, Address: 0x1b1908, Func Offset: 0x238
	// Line 1350, Address: 0x1b190c, Func Offset: 0x23c
	// Line 1352, Address: 0x1b1918, Func Offset: 0x248
	// Line 1354, Address: 0x1b1990, Func Offset: 0x2c0
	// Func End, Address: 0x1b19a8, Func Offset: 0x2d8
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
	// Line 995, Address: 0x1b19b0, Func Offset: 0
	// Line 997, Address: 0x1b19c8, Func Offset: 0x18
	// Line 999, Address: 0x1b19cc, Func Offset: 0x1c
	// Line 1002, Address: 0x1b19d4, Func Offset: 0x24
	// Line 1004, Address: 0x1b19d8, Func Offset: 0x28
	// Line 1006, Address: 0x1b19e0, Func Offset: 0x30
	// Line 1007, Address: 0x1b19e4, Func Offset: 0x34
	// Line 1009, Address: 0x1b19ec, Func Offset: 0x3c
	// Line 1011, Address: 0x1b19f4, Func Offset: 0x44
	// Line 1014, Address: 0x1b1a00, Func Offset: 0x50
	// Line 1015, Address: 0x1b1a0c, Func Offset: 0x5c
	// Line 1023, Address: 0x1b1a10, Func Offset: 0x60
	// Line 1026, Address: 0x1b1a28, Func Offset: 0x78
	// Line 1027, Address: 0x1b1a30, Func Offset: 0x80
	// Line 1033, Address: 0x1b1a34, Func Offset: 0x84
	// Line 1036, Address: 0x1b1a38, Func Offset: 0x88
	// Line 1062, Address: 0x1b1a40, Func Offset: 0x90
	// Line 1045, Address: 0x1b1a48, Func Offset: 0x98
	// Line 1063, Address: 0x1b1a4c, Func Offset: 0x9c
	// Line 1064, Address: 0x1b1a50, Func Offset: 0xa0
	// Line 1065, Address: 0x1b1a54, Func Offset: 0xa4
	// Line 1066, Address: 0x1b1a5c, Func Offset: 0xac
	// Line 1067, Address: 0x1b1a60, Func Offset: 0xb0
	// Line 1068, Address: 0x1b1a64, Func Offset: 0xb4
	// Line 1069, Address: 0x1b1a68, Func Offset: 0xb8
	// Line 1070, Address: 0x1b1a6c, Func Offset: 0xbc
	// Line 1071, Address: 0x1b1a70, Func Offset: 0xc0
	// Line 1072, Address: 0x1b1a74, Func Offset: 0xc4
	// Line 1073, Address: 0x1b1a78, Func Offset: 0xc8
	// Line 1074, Address: 0x1b1a7c, Func Offset: 0xcc
	// Line 1075, Address: 0x1b1a80, Func Offset: 0xd0
	// Line 1076, Address: 0x1b1a84, Func Offset: 0xd4
	// Line 1077, Address: 0x1b1a88, Func Offset: 0xd8
	// Line 1078, Address: 0x1b1a8c, Func Offset: 0xdc
	// Line 1079, Address: 0x1b1a90, Func Offset: 0xe0
	// Line 1080, Address: 0x1b1a94, Func Offset: 0xe4
	// Line 1081, Address: 0x1b1a98, Func Offset: 0xe8
	// Line 1082, Address: 0x1b1a9c, Func Offset: 0xec
	// Line 1083, Address: 0x1b1aa0, Func Offset: 0xf0
	// Line 1084, Address: 0x1b1aa4, Func Offset: 0xf4
	// Line 1086, Address: 0x1b1aac, Func Offset: 0xfc
	// Line 1087, Address: 0x1b1ab0, Func Offset: 0x100
	// Line 1088, Address: 0x1b1ab4, Func Offset: 0x104
	// Line 1089, Address: 0x1b1ab8, Func Offset: 0x108
	// Line 1090, Address: 0x1b1abc, Func Offset: 0x10c
	// Line 1091, Address: 0x1b1ac0, Func Offset: 0x110
	// Line 1092, Address: 0x1b1ac4, Func Offset: 0x114
	// Line 1093, Address: 0x1b1ac8, Func Offset: 0x118
	// Line 1094, Address: 0x1b1acc, Func Offset: 0x11c
	// Line 1095, Address: 0x1b1ad0, Func Offset: 0x120
	// Line 1096, Address: 0x1b1ad4, Func Offset: 0x124
	// Line 1097, Address: 0x1b1ad8, Func Offset: 0x128
	// Line 1098, Address: 0x1b1adc, Func Offset: 0x12c
	// Line 1099, Address: 0x1b1ae0, Func Offset: 0x130
	// Line 1100, Address: 0x1b1ae4, Func Offset: 0x134
	// Line 1101, Address: 0x1b1ae8, Func Offset: 0x138
	// Line 1102, Address: 0x1b1aec, Func Offset: 0x13c
	// Line 1103, Address: 0x1b1af0, Func Offset: 0x140
	// Line 1104, Address: 0x1b1af4, Func Offset: 0x144
	// Line 1105, Address: 0x1b1af8, Func Offset: 0x148
	// Line 1106, Address: 0x1b1afc, Func Offset: 0x14c
	// Line 1161, Address: 0x1b1b00, Func Offset: 0x150
	// Line 1166, Address: 0x1b1b0c, Func Offset: 0x15c
	// Line 1161, Address: 0x1b1b10, Func Offset: 0x160
	// Line 1162, Address: 0x1b1b14, Func Offset: 0x164
	// Line 1163, Address: 0x1b1b1c, Func Offset: 0x16c
	// Line 1166, Address: 0x1b1b24, Func Offset: 0x174
	// Line 1170, Address: 0x1b1b34, Func Offset: 0x184
	// Line 1173, Address: 0x1b1b4c, Func Offset: 0x19c
	// Line 1178, Address: 0x1b1bb0, Func Offset: 0x200
	// Line 1173, Address: 0x1b1bb4, Func Offset: 0x204
	// Line 1178, Address: 0x1b1bb8, Func Offset: 0x208
	// Line 1173, Address: 0x1b1bbc, Func Offset: 0x20c
	// Line 1174, Address: 0x1b1bc0, Func Offset: 0x210
	// Line 1178, Address: 0x1b1bc8, Func Offset: 0x218
	// Line 1181, Address: 0x1b1bd8, Func Offset: 0x228
	// Line 1182, Address: 0x1b1be0, Func Offset: 0x230
	// Line 1188, Address: 0x1b1be4, Func Offset: 0x234
	// Line 1190, Address: 0x1b1be8, Func Offset: 0x238
	// Line 1191, Address: 0x1b1bec, Func Offset: 0x23c
	// Line 1193, Address: 0x1b1bf8, Func Offset: 0x248
	// Line 1194, Address: 0x1b1c70, Func Offset: 0x2c0
	// Func End, Address: 0x1b1c88, Func Offset: 0x2d8
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
	RxObjSpace3DVertex v3d[4];
	uint16 i3d[6];
	// Line 818, Address: 0x1b1c90, Func Offset: 0
	// Line 822, Address: 0x1b1c94, Func Offset: 0x4
	// Line 818, Address: 0x1b1c98, Func Offset: 0x8
	// Line 821, Address: 0x1b1ca4, Func Offset: 0x14
	// Line 818, Address: 0x1b1ca8, Func Offset: 0x18
	// Line 821, Address: 0x1b1cac, Func Offset: 0x1c
	// Line 818, Address: 0x1b1cb0, Func Offset: 0x20
	// Line 822, Address: 0x1b1cc4, Func Offset: 0x34
	// Line 818, Address: 0x1b1cc8, Func Offset: 0x38
	// Line 822, Address: 0x1b1cd4, Func Offset: 0x44
	// Line 828, Address: 0x1b1cd8, Func Offset: 0x48
	// Line 829, Address: 0x1b1cf0, Func Offset: 0x60
	// Line 831, Address: 0x1b1d60, Func Offset: 0xd0
	// Line 832, Address: 0x1b1d70, Func Offset: 0xe0
	// Line 841, Address: 0x1b1de0, Func Offset: 0x150
	// Line 836, Address: 0x1b1de8, Func Offset: 0x158
	// Line 841, Address: 0x1b1dec, Func Offset: 0x15c
	// Line 837, Address: 0x1b1df0, Func Offset: 0x160
	// Line 838, Address: 0x1b1df4, Func Offset: 0x164
	// Line 845, Address: 0x1b1df8, Func Offset: 0x168
	// Line 839, Address: 0x1b1e00, Func Offset: 0x170
	// Line 846, Address: 0x1b1e04, Func Offset: 0x174
	// Line 848, Address: 0x1b1e0c, Func Offset: 0x17c
	// Line 850, Address: 0x1b1e58, Func Offset: 0x1c8
	// Line 853, Address: 0x1b1e68, Func Offset: 0x1d8
	// Line 888, Address: 0x1b1e6c, Func Offset: 0x1dc
	// Line 855, Address: 0x1b1e70, Func Offset: 0x1e0
	// Line 889, Address: 0x1b1e74, Func Offset: 0x1e4
	// Line 858, Address: 0x1b1e78, Func Offset: 0x1e8
	// Line 890, Address: 0x1b1e7c, Func Offset: 0x1ec
	// Line 860, Address: 0x1b1e80, Func Offset: 0x1f0
	// Line 891, Address: 0x1b1e84, Func Offset: 0x1f4
	// Line 863, Address: 0x1b1e88, Func Offset: 0x1f8
	// Line 888, Address: 0x1b1e8c, Func Offset: 0x1fc
	// Line 864, Address: 0x1b1e90, Func Offset: 0x200
	// Line 889, Address: 0x1b1e94, Func Offset: 0x204
	// Line 853, Address: 0x1b1e98, Func Offset: 0x208
	// Line 890, Address: 0x1b1e9c, Func Offset: 0x20c
	// Line 891, Address: 0x1b1ea0, Func Offset: 0x210
	// Line 893, Address: 0x1b1ea4, Func Offset: 0x214
	// Line 865, Address: 0x1b1ea8, Func Offset: 0x218
	// Line 855, Address: 0x1b1eac, Func Offset: 0x21c
	// Line 858, Address: 0x1b1eb0, Func Offset: 0x220
	// Line 888, Address: 0x1b1eb4, Func Offset: 0x224
	// Line 889, Address: 0x1b1ec4, Func Offset: 0x234
	// Line 890, Address: 0x1b1ed8, Func Offset: 0x248
	// Line 860, Address: 0x1b1ee0, Func Offset: 0x250
	// Line 890, Address: 0x1b1ee4, Func Offset: 0x254
	// Line 891, Address: 0x1b1eec, Func Offset: 0x25c
	// Line 893, Address: 0x1b1f04, Func Offset: 0x274
	// Line 894, Address: 0x1b1f0c, Func Offset: 0x27c
	// Line 895, Address: 0x1b1f14, Func Offset: 0x284
	// Line 896, Address: 0x1b1f1c, Func Offset: 0x28c
	// Line 893, Address: 0x1b1f24, Func Offset: 0x294
	// Line 896, Address: 0x1b1f30, Func Offset: 0x2a0
	// Line 893, Address: 0x1b1f3c, Func Offset: 0x2ac
	// Line 896, Address: 0x1b1f48, Func Offset: 0x2b8
	// Line 894, Address: 0x1b1f54, Func Offset: 0x2c4
	// Line 895, Address: 0x1b1f60, Func Offset: 0x2d0
	// Line 894, Address: 0x1b1f6c, Func Offset: 0x2dc
	// Line 895, Address: 0x1b1f78, Func Offset: 0x2e8
	// Line 898, Address: 0x1b1f80, Func Offset: 0x2f0
	// Line 903, Address: 0x1b1f90, Func Offset: 0x300
	// Line 904, Address: 0x1b1fd0, Func Offset: 0x340
	// Line 909, Address: 0x1b2004, Func Offset: 0x374
	// Line 906, Address: 0x1b2008, Func Offset: 0x378
	// Line 907, Address: 0x1b2010, Func Offset: 0x380
	// Line 909, Address: 0x1b2018, Func Offset: 0x388
	// Line 912, Address: 0x1b201c, Func Offset: 0x38c
	// Line 906, Address: 0x1b2024, Func Offset: 0x394
	// Line 909, Address: 0x1b2028, Func Offset: 0x398
	// Line 904, Address: 0x1b202c, Func Offset: 0x39c
	// Line 909, Address: 0x1b2030, Func Offset: 0x3a0
	// Line 910, Address: 0x1b2034, Func Offset: 0x3a4
	// Line 906, Address: 0x1b203c, Func Offset: 0x3ac
	// Line 910, Address: 0x1b2040, Func Offset: 0x3b0
	// Line 907, Address: 0x1b2044, Func Offset: 0x3b4
	// Line 906, Address: 0x1b204c, Func Offset: 0x3bc
	// Line 907, Address: 0x1b2050, Func Offset: 0x3c0
	// Line 906, Address: 0x1b2058, Func Offset: 0x3c8
	// Line 910, Address: 0x1b205c, Func Offset: 0x3cc
	// Line 911, Address: 0x1b2060, Func Offset: 0x3d0
	// Line 907, Address: 0x1b2068, Func Offset: 0x3d8
	// Line 911, Address: 0x1b206c, Func Offset: 0x3dc
	// Line 912, Address: 0x1b2074, Func Offset: 0x3e4
	// Line 914, Address: 0x1b2078, Func Offset: 0x3e8
	// Line 917, Address: 0x1b2080, Func Offset: 0x3f0
	// Line 918, Address: 0x1b2088, Func Offset: 0x3f8
	// Line 917, Address: 0x1b208c, Func Offset: 0x3fc
	// Line 918, Address: 0x1b2094, Func Offset: 0x404
	// Line 919, Address: 0x1b20a4, Func Offset: 0x414
	// Line 920, Address: 0x1b20b4, Func Offset: 0x424
	// Line 921, Address: 0x1b20c4, Func Offset: 0x434
	// Line 929, Address: 0x1b20c8, Func Offset: 0x438
	// Line 938, Address: 0x1b20d0, Func Offset: 0x440
	// Line 934, Address: 0x1b20d4, Func Offset: 0x444
	// Line 929, Address: 0x1b20d8, Func Offset: 0x448
	// Line 934, Address: 0x1b20e4, Func Offset: 0x454
	// Line 929, Address: 0x1b20e8, Func Offset: 0x458
	// Line 934, Address: 0x1b20ec, Func Offset: 0x45c
	// Line 938, Address: 0x1b2164, Func Offset: 0x4d4
	// Line 943, Address: 0x1b2184, Func Offset: 0x4f4
	// Line 944, Address: 0x1b218c, Func Offset: 0x4fc
	// Line 943, Address: 0x1b2190, Func Offset: 0x500
	// Line 944, Address: 0x1b2194, Func Offset: 0x504
	// Line 943, Address: 0x1b2198, Func Offset: 0x508
	// Line 944, Address: 0x1b219c, Func Offset: 0x50c
	// Line 943, Address: 0x1b21a0, Func Offset: 0x510
	// Line 944, Address: 0x1b21a4, Func Offset: 0x514
	// Line 945, Address: 0x1b21ac, Func Offset: 0x51c
	// Func End, Address: 0x1b21dc, Func Offset: 0x54c
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
	RxObjSpace3DVertex v3d[4];
	uint16 i3d[6];
	// Line 682, Address: 0x1b21e0, Func Offset: 0
	// Line 686, Address: 0x1b21e4, Func Offset: 0x4
	// Line 682, Address: 0x1b21e8, Func Offset: 0x8
	// Line 685, Address: 0x1b220c, Func Offset: 0x2c
	// Line 686, Address: 0x1b2210, Func Offset: 0x30
	// Line 685, Address: 0x1b2218, Func Offset: 0x38
	// Line 693, Address: 0x1b221c, Func Offset: 0x3c
	// Line 694, Address: 0x1b2234, Func Offset: 0x54
	// Line 696, Address: 0x1b22a0, Func Offset: 0xc0
	// Line 697, Address: 0x1b22b0, Func Offset: 0xd0
	// Line 708, Address: 0x1b2320, Func Offset: 0x140
	// Line 726, Address: 0x1b2328, Func Offset: 0x148
	// Line 707, Address: 0x1b232c, Func Offset: 0x14c
	// Line 757, Address: 0x1b2330, Func Offset: 0x150
	// Line 726, Address: 0x1b2334, Func Offset: 0x154
	// Line 758, Address: 0x1b2338, Func Offset: 0x158
	// Line 710, Address: 0x1b233c, Func Offset: 0x15c
	// Line 759, Address: 0x1b2340, Func Offset: 0x160
	// Line 715, Address: 0x1b2344, Func Offset: 0x164
	// Line 760, Address: 0x1b2348, Func Offset: 0x168
	// Line 716, Address: 0x1b234c, Func Offset: 0x16c
	// Line 701, Address: 0x1b2350, Func Offset: 0x170
	// Line 709, Address: 0x1b2354, Func Offset: 0x174
	// Line 702, Address: 0x1b2358, Func Offset: 0x178
	// Line 709, Address: 0x1b235c, Func Offset: 0x17c
	// Line 703, Address: 0x1b2360, Func Offset: 0x180
	// Line 708, Address: 0x1b2364, Func Offset: 0x184
	// Line 704, Address: 0x1b2368, Func Offset: 0x188
	// Line 757, Address: 0x1b236c, Func Offset: 0x18c
	// Line 758, Address: 0x1b2370, Func Offset: 0x190
	// Line 759, Address: 0x1b2374, Func Offset: 0x194
	// Line 760, Address: 0x1b2378, Func Offset: 0x198
	// Line 710, Address: 0x1b237c, Func Offset: 0x19c
	// Line 726, Address: 0x1b2384, Func Offset: 0x1a4
	// Line 727, Address: 0x1b2388, Func Offset: 0x1a8
	// Line 728, Address: 0x1b238c, Func Offset: 0x1ac
	// Line 709, Address: 0x1b2390, Func Offset: 0x1b0
	// Line 762, Address: 0x1b2394, Func Offset: 0x1b4
	// Line 757, Address: 0x1b2398, Func Offset: 0x1b8
	// Line 726, Address: 0x1b239c, Func Offset: 0x1bc
	// Line 757, Address: 0x1b23a0, Func Offset: 0x1c0
	// Line 758, Address: 0x1b23ac, Func Offset: 0x1cc
	// Line 726, Address: 0x1b23b4, Func Offset: 0x1d4
	// Line 758, Address: 0x1b23b8, Func Offset: 0x1d8
	// Line 759, Address: 0x1b23c0, Func Offset: 0x1e0
	// Line 720, Address: 0x1b23c4, Func Offset: 0x1e4
	// Line 759, Address: 0x1b23c8, Func Offset: 0x1e8
	// Line 721, Address: 0x1b23d0, Func Offset: 0x1f0
	// Line 759, Address: 0x1b23d4, Func Offset: 0x1f4
	// Line 710, Address: 0x1b23d8, Func Offset: 0x1f8
	// Line 760, Address: 0x1b23dc, Func Offset: 0x1fc
	// Line 731, Address: 0x1b23ec, Func Offset: 0x20c
	// Line 727, Address: 0x1b23f0, Func Offset: 0x210
	// Line 732, Address: 0x1b23f8, Func Offset: 0x218
	// Line 728, Address: 0x1b23fc, Func Offset: 0x21c
	// Line 722, Address: 0x1b2404, Func Offset: 0x224
	// Line 733, Address: 0x1b2408, Func Offset: 0x228
	// Line 737, Address: 0x1b240c, Func Offset: 0x22c
	// Line 762, Address: 0x1b2410, Func Offset: 0x230
	// Line 738, Address: 0x1b2414, Func Offset: 0x234
	// Line 762, Address: 0x1b2418, Func Offset: 0x238
	// Line 739, Address: 0x1b2420, Func Offset: 0x240
	// Line 762, Address: 0x1b2424, Func Offset: 0x244
	// Line 742, Address: 0x1b242c, Func Offset: 0x24c
	// Line 763, Address: 0x1b2430, Func Offset: 0x250
	// Line 743, Address: 0x1b2438, Func Offset: 0x258
	// Line 763, Address: 0x1b243c, Func Offset: 0x25c
	// Line 744, Address: 0x1b2444, Func Offset: 0x264
	// Line 763, Address: 0x1b2448, Func Offset: 0x268
	// Line 747, Address: 0x1b2450, Func Offset: 0x270
	// Line 764, Address: 0x1b2454, Func Offset: 0x274
	// Line 752, Address: 0x1b245c, Func Offset: 0x27c
	// Line 765, Address: 0x1b2460, Func Offset: 0x280
	// Line 748, Address: 0x1b2468, Func Offset: 0x288
	// Line 764, Address: 0x1b246c, Func Offset: 0x28c
	// Line 753, Address: 0x1b2474, Func Offset: 0x294
	// Line 765, Address: 0x1b2478, Func Offset: 0x298
	// Line 749, Address: 0x1b2480, Func Offset: 0x2a0
	// Line 764, Address: 0x1b2484, Func Offset: 0x2a4
	// Line 754, Address: 0x1b248c, Func Offset: 0x2ac
	// Line 765, Address: 0x1b2490, Func Offset: 0x2b0
	// Line 767, Address: 0x1b2494, Func Offset: 0x2b4
	// Line 772, Address: 0x1b24a4, Func Offset: 0x2c4
	// Line 773, Address: 0x1b24e4, Func Offset: 0x304
	// Line 778, Address: 0x1b2518, Func Offset: 0x338
	// Line 775, Address: 0x1b251c, Func Offset: 0x33c
	// Line 776, Address: 0x1b2524, Func Offset: 0x344
	// Line 778, Address: 0x1b252c, Func Offset: 0x34c
	// Line 779, Address: 0x1b2530, Func Offset: 0x350
	// Line 775, Address: 0x1b2538, Func Offset: 0x358
	// Line 779, Address: 0x1b253c, Func Offset: 0x35c
	// Line 773, Address: 0x1b2540, Func Offset: 0x360
	// Line 779, Address: 0x1b2544, Func Offset: 0x364
	// Line 780, Address: 0x1b2548, Func Offset: 0x368
	// Line 775, Address: 0x1b2550, Func Offset: 0x370
	// Line 780, Address: 0x1b2554, Func Offset: 0x374
	// Line 776, Address: 0x1b2558, Func Offset: 0x378
	// Line 775, Address: 0x1b2560, Func Offset: 0x380
	// Line 776, Address: 0x1b2564, Func Offset: 0x384
	// Line 775, Address: 0x1b256c, Func Offset: 0x38c
	// Line 780, Address: 0x1b2570, Func Offset: 0x390
	// Line 781, Address: 0x1b2574, Func Offset: 0x394
	// Line 776, Address: 0x1b257c, Func Offset: 0x39c
	// Line 778, Address: 0x1b2580, Func Offset: 0x3a0
	// Line 781, Address: 0x1b2588, Func Offset: 0x3a8
	// Line 783, Address: 0x1b258c, Func Offset: 0x3ac
	// Line 786, Address: 0x1b2598, Func Offset: 0x3b8
	// Line 787, Address: 0x1b25a4, Func Offset: 0x3c4
	// Line 786, Address: 0x1b25ac, Func Offset: 0x3cc
	// Line 787, Address: 0x1b25b4, Func Offset: 0x3d4
	// Line 788, Address: 0x1b25bc, Func Offset: 0x3dc
	// Line 789, Address: 0x1b25c4, Func Offset: 0x3e4
	// Line 790, Address: 0x1b25d4, Func Offset: 0x3f4
	// Line 797, Address: 0x1b25d8, Func Offset: 0x3f8
	// Line 806, Address: 0x1b25e0, Func Offset: 0x400
	// Line 802, Address: 0x1b25e4, Func Offset: 0x404
	// Line 797, Address: 0x1b25e8, Func Offset: 0x408
	// Line 802, Address: 0x1b25f4, Func Offset: 0x414
	// Line 797, Address: 0x1b25f8, Func Offset: 0x418
	// Line 802, Address: 0x1b25fc, Func Offset: 0x41c
	// Line 806, Address: 0x1b2674, Func Offset: 0x494
	// Line 811, Address: 0x1b2694, Func Offset: 0x4b4
	// Line 812, Address: 0x1b269c, Func Offset: 0x4bc
	// Line 811, Address: 0x1b26a0, Func Offset: 0x4c0
	// Line 812, Address: 0x1b26a4, Func Offset: 0x4c4
	// Line 811, Address: 0x1b26a8, Func Offset: 0x4c8
	// Line 812, Address: 0x1b26ac, Func Offset: 0x4cc
	// Line 811, Address: 0x1b26b0, Func Offset: 0x4d0
	// Line 812, Address: 0x1b26b4, Func Offset: 0x4d4
	// Line 813, Address: 0x1b26bc, Func Offset: 0x4dc
	// Func End, Address: 0x1b26e0, Func Offset: 0x500
}

// iRenderSetCameraViewMatrix__FP7xMat4x3
// Start address: 0x1b26e0
void iRenderSetCameraViewMatrix(xMat4x3* m)
{
	RwMatrixTag* mat;
	// Line 660, Address: 0x1b26e0, Func Offset: 0
	// Line 664, Address: 0x1b26f4, Func Offset: 0x14
	// Line 665, Address: 0x1b26f8, Func Offset: 0x18
	// Line 664, Address: 0x1b26fc, Func Offset: 0x1c
	// Line 665, Address: 0x1b2700, Func Offset: 0x20
	// Line 664, Address: 0x1b271c, Func Offset: 0x3c
	// Line 665, Address: 0x1b2720, Func Offset: 0x40
	// Line 667, Address: 0x1b27ac, Func Offset: 0xcc
	// Line 668, Address: 0x1b27b8, Func Offset: 0xd8
	// Line 672, Address: 0x1b2868, Func Offset: 0x188
	// Line 673, Address: 0x1b2888, Func Offset: 0x1a8
	// Line 672, Address: 0x1b2890, Func Offset: 0x1b0
	// Line 673, Address: 0x1b2894, Func Offset: 0x1b4
	// Line 672, Address: 0x1b28ac, Func Offset: 0x1cc
	// Line 673, Address: 0x1b28c4, Func Offset: 0x1e4
	// Line 674, Address: 0x1b28dc, Func Offset: 0x1fc
	// Func End, Address: 0x1b28e4, Func Offset: 0x204
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
	// Line 379, Address: 0x1b28f0, Func Offset: 0
	// Line 380, Address: 0x1b2918, Func Offset: 0x28
	// Line 382, Address: 0x1b2920, Func Offset: 0x30
	// Line 386, Address: 0x1b2928, Func Offset: 0x38
	// Line 388, Address: 0x1b292c, Func Offset: 0x3c
	// Line 390, Address: 0x1b2934, Func Offset: 0x44
	// Line 391, Address: 0x1b2938, Func Offset: 0x48
	// Line 393, Address: 0x1b2940, Func Offset: 0x50
	// Line 402, Address: 0x1b2948, Func Offset: 0x58
	// Line 408, Address: 0x1b2950, Func Offset: 0x60
	// Line 407, Address: 0x1b2954, Func Offset: 0x64
	// Line 400, Address: 0x1b2958, Func Offset: 0x68
	// Line 404, Address: 0x1b295c, Func Offset: 0x6c
	// Line 401, Address: 0x1b2960, Func Offset: 0x70
	// Line 403, Address: 0x1b2964, Func Offset: 0x74
	// Line 407, Address: 0x1b296c, Func Offset: 0x7c
	// Line 408, Address: 0x1b2970, Func Offset: 0x80
	// Line 409, Address: 0x1b2990, Func Offset: 0xa0
	// Line 410, Address: 0x1b2a38, Func Offset: 0x148
	// Line 411, Address: 0x1b2ad8, Func Offset: 0x1e8
	// Line 412, Address: 0x1b2b80, Func Offset: 0x290
	// Line 416, Address: 0x1b2c20, Func Offset: 0x330
	// Line 419, Address: 0x1b2c38, Func Offset: 0x348
	// Line 420, Address: 0x1b2c48, Func Offset: 0x358
	// Line 421, Address: 0x1b2c4c, Func Offset: 0x35c
	// Line 422, Address: 0x1b2c50, Func Offset: 0x360
	// Line 423, Address: 0x1b2c54, Func Offset: 0x364
	// Line 424, Address: 0x1b2c58, Func Offset: 0x368
	// Line 430, Address: 0x1b2c5c, Func Offset: 0x36c
	// Line 433, Address: 0x1b2c68, Func Offset: 0x378
	// Line 436, Address: 0x1b2c6c, Func Offset: 0x37c
	// Line 438, Address: 0x1b2c78, Func Offset: 0x388
	// Line 439, Address: 0x1b2ce4, Func Offset: 0x3f4
	// Line 440, Address: 0x1b2d14, Func Offset: 0x424
	// Line 461, Address: 0x1b2d18, Func Offset: 0x428
	// Line 462, Address: 0x1b2d1c, Func Offset: 0x42c
	// Line 463, Address: 0x1b2d20, Func Offset: 0x430
	// Line 464, Address: 0x1b2d24, Func Offset: 0x434
	// Line 465, Address: 0x1b2d28, Func Offset: 0x438
	// Line 466, Address: 0x1b2d2c, Func Offset: 0x43c
	// Line 467, Address: 0x1b2d30, Func Offset: 0x440
	// Line 469, Address: 0x1b2d38, Func Offset: 0x448
	// Line 470, Address: 0x1b2d3c, Func Offset: 0x44c
	// Line 471, Address: 0x1b2d40, Func Offset: 0x450
	// Line 472, Address: 0x1b2d44, Func Offset: 0x454
	// Line 473, Address: 0x1b2d48, Func Offset: 0x458
	// Line 474, Address: 0x1b2d4c, Func Offset: 0x45c
	// Line 476, Address: 0x1b2d54, Func Offset: 0x464
	// Line 477, Address: 0x1b2d58, Func Offset: 0x468
	// Line 478, Address: 0x1b2d5c, Func Offset: 0x46c
	// Line 479, Address: 0x1b2d60, Func Offset: 0x470
	// Line 480, Address: 0x1b2d64, Func Offset: 0x474
	// Line 481, Address: 0x1b2d68, Func Offset: 0x478
	// Line 482, Address: 0x1b2d6c, Func Offset: 0x47c
	// Line 483, Address: 0x1b2d70, Func Offset: 0x480
	// Line 484, Address: 0x1b2d74, Func Offset: 0x484
	// Line 485, Address: 0x1b2d78, Func Offset: 0x488
	// Line 486, Address: 0x1b2d7c, Func Offset: 0x48c
	// Line 487, Address: 0x1b2d80, Func Offset: 0x490
	// Line 488, Address: 0x1b2d84, Func Offset: 0x494
	// Line 489, Address: 0x1b2d88, Func Offset: 0x498
	// Line 490, Address: 0x1b2d8c, Func Offset: 0x49c
	// Line 491, Address: 0x1b2d90, Func Offset: 0x4a0
	// Line 492, Address: 0x1b2d94, Func Offset: 0x4a4
	// Line 493, Address: 0x1b2d98, Func Offset: 0x4a8
	// Line 494, Address: 0x1b2d9c, Func Offset: 0x4ac
	// Line 495, Address: 0x1b2da0, Func Offset: 0x4b0
	// Line 496, Address: 0x1b2da4, Func Offset: 0x4b4
	// Line 497, Address: 0x1b2da8, Func Offset: 0x4b8
	// Line 498, Address: 0x1b2dac, Func Offset: 0x4bc
	// Line 499, Address: 0x1b2db0, Func Offset: 0x4c0
	// Line 500, Address: 0x1b2db4, Func Offset: 0x4c4
	// Line 501, Address: 0x1b2db8, Func Offset: 0x4c8
	// Line 502, Address: 0x1b2dbc, Func Offset: 0x4cc
	// Line 554, Address: 0x1b2dc0, Func Offset: 0x4d0
	// Line 559, Address: 0x1b2dc8, Func Offset: 0x4d8
	// Line 560, Address: 0x1b2dfc, Func Offset: 0x50c
	// Line 559, Address: 0x1b2e00, Func Offset: 0x510
	// Line 560, Address: 0x1b2e08, Func Offset: 0x518
	// Line 562, Address: 0x1b2e3c, Func Offset: 0x54c
	// Line 563, Address: 0x1b2e40, Func Offset: 0x550
	// Line 560, Address: 0x1b2e44, Func Offset: 0x554
	// Line 562, Address: 0x1b2e48, Func Offset: 0x558
	// Line 560, Address: 0x1b2e50, Func Offset: 0x560
	// Line 562, Address: 0x1b2e54, Func Offset: 0x564
	// Line 563, Address: 0x1b2e58, Func Offset: 0x568
	// Line 560, Address: 0x1b2e5c, Func Offset: 0x56c
	// Line 562, Address: 0x1b2e60, Func Offset: 0x570
	// Line 563, Address: 0x1b2e64, Func Offset: 0x574
	// Line 562, Address: 0x1b2e68, Func Offset: 0x578
	// Line 563, Address: 0x1b2e6c, Func Offset: 0x57c
	// Line 562, Address: 0x1b2e70, Func Offset: 0x580
	// Line 563, Address: 0x1b2e74, Func Offset: 0x584
	// Line 565, Address: 0x1b2e78, Func Offset: 0x588
	// Line 562, Address: 0x1b2e7c, Func Offset: 0x58c
	// Line 565, Address: 0x1b2e80, Func Offset: 0x590
	// Line 563, Address: 0x1b2e84, Func Offset: 0x594
	// Line 566, Address: 0x1b2e88, Func Offset: 0x598
	// Line 567, Address: 0x1b2e90, Func Offset: 0x5a0
	// Line 568, Address: 0x1b2e98, Func Offset: 0x5a8
	// Line 570, Address: 0x1b2e9c, Func Offset: 0x5ac
	// Line 573, Address: 0x1b2ea8, Func Offset: 0x5b8
	// Line 574, Address: 0x1b2eb0, Func Offset: 0x5c0
	// Line 575, Address: 0x1b2ebc, Func Offset: 0x5cc
	// Line 576, Address: 0x1b2ec4, Func Offset: 0x5d4
	// Line 577, Address: 0x1b2ecc, Func Offset: 0x5dc
	// Line 583, Address: 0x1b2ed0, Func Offset: 0x5e0
	// Line 593, Address: 0x1b2ee8, Func Offset: 0x5f8
	// Line 583, Address: 0x1b2eec, Func Offset: 0x5fc
	// Line 598, Address: 0x1b2ef0, Func Offset: 0x600
	// Line 583, Address: 0x1b2ef4, Func Offset: 0x604
	// Line 594, Address: 0x1b2ef8, Func Offset: 0x608
	// Line 583, Address: 0x1b2efc, Func Offset: 0x60c
	// Line 595, Address: 0x1b2f00, Func Offset: 0x610
	// Line 598, Address: 0x1b2f04, Func Offset: 0x614
	// Line 602, Address: 0x1b2f18, Func Offset: 0x628
	// Line 603, Address: 0x1b2f20, Func Offset: 0x630
	// Line 604, Address: 0x1b2f28, Func Offset: 0x638
	// Line 605, Address: 0x1b2f30, Func Offset: 0x640
	// Line 609, Address: 0x1b2f38, Func Offset: 0x648
	// Line 615, Address: 0x1b2f98, Func Offset: 0x6a8
	// Line 609, Address: 0x1b2f9c, Func Offset: 0x6ac
	// Line 610, Address: 0x1b2fa0, Func Offset: 0x6b0
	// Line 609, Address: 0x1b2fa4, Func Offset: 0x6b4
	// Line 611, Address: 0x1b2fa8, Func Offset: 0x6b8
	// Line 615, Address: 0x1b2fac, Func Offset: 0x6bc
	// Line 616, Address: 0x1b2fc0, Func Offset: 0x6d0
	// Line 617, Address: 0x1b2fd0, Func Offset: 0x6e0
	// Line 618, Address: 0x1b2fd4, Func Offset: 0x6e4
	// Line 619, Address: 0x1b2fd8, Func Offset: 0x6e8
	// Line 620, Address: 0x1b2fdc, Func Offset: 0x6ec
	// Line 621, Address: 0x1b2fe0, Func Offset: 0x6f0
	// Line 627, Address: 0x1b2fe4, Func Offset: 0x6f4
	// Line 628, Address: 0x1b2fe8, Func Offset: 0x6f8
	// Line 630, Address: 0x1b2ff4, Func Offset: 0x704
	// Line 632, Address: 0x1b3024, Func Offset: 0x734
	// Line 635, Address: 0x1b3030, Func Offset: 0x740
	// Line 636, Address: 0x1b3034, Func Offset: 0x744
	// Line 640, Address: 0x1b303c, Func Offset: 0x74c
	// Line 641, Address: 0x1b30b8, Func Offset: 0x7c8
	// Func End, Address: 0x1b30e0, Func Offset: 0x7f0
}

// iParMgrRender__Fv
// Start address: 0x1b30e0
void iParMgrRender()
{
	// Line 216, Address: 0x1b30e0, Func Offset: 0
	// Func End, Address: 0x1b30e8, Func Offset: 0x8
}

// iParMgrUpdate__Ff
// Start address: 0x1b30f0
void iParMgrUpdate()
{
	// Line 178, Address: 0x1b30f0, Func Offset: 0
	// Func End, Address: 0x1b30f8, Func Offset: 0x8
}

// iParMgrInit__Fv
// Start address: 0x1b3100
void iParMgrInit()
{
	int32 i;
	// Line 134, Address: 0x1b3100, Func Offset: 0
	// Line 138, Address: 0x1b314c, Func Offset: 0x4c
	// Line 134, Address: 0x1b3150, Func Offset: 0x50
	// Line 138, Address: 0x1b3154, Func Offset: 0x54
	// Line 141, Address: 0x1b315c, Func Offset: 0x5c
	// Line 142, Address: 0x1b3168, Func Offset: 0x68
	// Line 144, Address: 0x1b3220, Func Offset: 0x120
	// Line 148, Address: 0x1b3228, Func Offset: 0x128
	// Func End, Address: 0x1b3230, Func Offset: 0x130
}

