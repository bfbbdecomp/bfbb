typedef struct RxPipelineNodeParam;
typedef enum RwPrimitiveType;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct RxPS2AllPipeData;
typedef struct RwTexture;
typedef struct RwRGBA;
typedef struct rwPS2AllFieldRec;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxNodePS2AllMatPvtData;
typedef struct rxHeapBlockHeader;
typedef struct DBWATCHData;
typedef struct sceCdCLOCK;
typedef struct RpPDSSkyMatTemplate;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct RpPDSSkyVU1CodeTemplate;
typedef enum RxInstanceFlags;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef enum RwVideoModeFlag;
typedef struct rwPS2AllResEntryFormat;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct RpPDSSkyObjTemplate;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef enum RpPDSPipeType;
typedef struct RxClusterDefinition;
typedef struct RwTexDictionary;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef union RpPDSPipeDefinition;
typedef struct RxClusterRef;
typedef struct RwMeshCache;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMesh;
typedef struct RxIoSpec;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RpPDSRegister;
typedef enum RpPDSPipeID;
typedef struct rxNodePS2AllPvtData;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RpPDSSkyMatCluster;
typedef struct RpMeshHeader;
typedef struct RxPacket;
typedef struct RwEngineOpenParams;
typedef struct RwLinkList;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RpPDSSkyMatPrimitive;
typedef enum RpMeshHeaderFlags;

typedef s32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef s32(*type_1)(RxPS2AllPipeData*);
typedef u32(*type_2)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_5)(RxPS2AllPipeData*);
typedef s32(*type_6)(RxNodeDefinition*);
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, u32, type_31);
typedef void(*type_9)(RxNodeDefinition*);
typedef s32(*type_10)(RxPS2AllPipeData*, void**, u32);
typedef s32(*type_11)(RxPipelineNode*);
typedef s32(*type_12)(RxPS2AllPipeData*);
typedef RwTexture*(*type_14)(s8*, s8*);
typedef void(*type_15)(RxPipelineNode*);
typedef s32(*type_23)(RxPS2AllPipeData*, RwMatrixTag**);
typedef s32(*type_25)(RxPS2AllPipeData*);
typedef void(*type_31)(RwResEntry*);
typedef s32(*type_34)(s32);

typedef s8 type_3[512];
typedef RpPDSSkyMatCluster type_8[10];
typedef u8 type_13[1];
typedef s8 type_16[16];
typedef s8 type_17[256];
typedef s8 type_18[16];
typedef rwPS2AllClusterInstanceInfo type_19[12];
typedef u32 type_20[12];
typedef u8 type_21[2];
typedef s8* type_22[3];
typedef rwPS2AllFieldRec type_24[12];
typedef u32 type_26[4];
typedef s8* type_27[3];
typedef RwResEntry* type_28[1];
typedef s8 type_29[32];
typedef s8 type_30[32];
typedef s8 type_32[256];
typedef RxCluster type_33[1];

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum RwPrimitiveType
{
	rwPRIMTYPENAPRIMTYPE,
	rwPRIMTYPELINELIST,
	rwPRIMTYPEPOLYLINE,
	rwPRIMTYPETRILIST,
	rwPRIMTYPETRISTRIP,
	rwPRIMTYPETRIFAN,
	rwPRIMTYPEPOINTLIST,
	rwPRIMITIVETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	u32 objIdentifier;
	f32 spExtra;
	s32 numMorphTargets;
	u32 fastMorphing;
	u8 transType;
	u8 primType;
	u8 matModulate;
	u8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	u32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_29 name;
	type_30 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct rwPS2AllFieldRec
{
	s32 numVerts;
	s32 morphNumVerts;
	s32 dataoffset;
	s32 morphDataoffset;
	s16 skip;
	s16 morphSkip;
	s16 reverse;
	u8 vuoffset;
	type_13 pad;
};

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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct rxNodePS2AllMatPvtData
{
	type_5 meshInstanceTestCB;
	type_7 resEntryAllocCB;
	type_10 instanceCB;
	type_12 bridgeCB;
	type_1 postMeshCB;
	s32 vifOffset;
	void** vu1CodeArray;
	u32 codeArrayLength;
	type_19 clinfo;
	type_20 cliIndex;
	RpMeshHeaderFlags pipeType;
	u8 totallyOpaque;
	u8 numStripes;
	u8 sizeOnVU;
	u8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	u32 magicValue;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_26 pad;
};

struct DBWATCHData
{
	type_3 putWatchOnMe;
};

struct sceCdCLOCK
{
	u8 stat;
	u8 second;
	u8 minute;
	u8 hour;
	u8 pad;
	u8 day;
	u8 month;
	u8 year;
};

struct RpPDSSkyMatTemplate
{
	u32 pluginId;
	u32 pluginData;
	type_8 clusters;
	RpPDSSkyMatPrimitive primitive;
	RpPDSSkyVU1CodeTemplate* vu1code;
	type_5 meshInstanceTestCallBack;
	type_7 resEntryAllocCallBack;
	type_10 instanceCallBack;
	type_12 bridgeCallBack;
	type_1 postMeshCallBack;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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

struct RpPDSSkyVU1CodeTemplate
{
	void** array;
	u32 slots;
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct rwPS2AllResEntryFormat
{
	u8 batchRound;
	u8 stripReverse;
	type_21 pad;
	u32 maxInputSize;
	s32 batchSize;
	s32 batchesPerTag;
	s32 morphBatchSize;
	s32 morphBatchesPerTag;
	type_24 fieldRec;
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
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct RpPDSSkyObjTemplate
{
	u32 pluginId;
	u32 pluginData;
	type_23 objectSetupCallBack;
	type_25 objectFinalizeCallBack;
	RxPipeline* matGroup;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RpPDSPipeType
{
	rpNAPDSPIPETYPE,
	rpPDSMATPIPE,
	rpPDSOBJPIPE,
	rpPDSPIPETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwVideoMode
{
	s32 width;
	s32 height;
	s32 depth;
	RwVideoModeFlag flags;
	s32 refRate;
	s32 format;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

union RpPDSPipeDefinition
{
	void* ptr;
	RpPDSSkyMatTemplate* mat;
	RpPDSSkyObjTemplate* obj;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct RwMeshCache
{
	u32 lengthOfMeshesArray;
	type_28 meshes;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpMesh
{
	u16* indices;
	u32 numIndices;
	RpMaterial* material;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_31 destroyNotify;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RpPDSRegister
{
	RpPDSPipeDefinition def;
	RpPDSPipeID attachId;
	RpPDSPipeID id;
	RpPDSPipeType type;
	RxPipeline* pipe;
};

enum RpPDSPipeID
{
	rpNAPDSPIPEID,
	rwPDS_G3_Generic_MatPipeID,
	rwPDS_G3_Generic_AtmPipeID,
	rwPDS_G3_Generic_SctPipeID,
	rwPDS_G3_Im3D_TriPipeID,
	rwPDS_G3_Im3D_SegPipeID,
	rwPDS_G3_Im3D_TriObjPipeID,
	rwPDS_G3_Im3D_SegObjPipeID,
	rwPDS_G3_Generic_GrpMatPipeID = 0x1001,
	rwPDS_G3_Generic_GrpAtmPipeID,
	rwPDS_G3_Generic_GrpSctPipeID,
	rwPDS_G3_Skin_MatPipeID = 0x10001,
	rwPDS_G3_Skin_AtmPipeID,
	rwPDS_G3_Emb_MatPipeID,
	rwPDS_G3_Gem_MatPipeID,
	rwPDS_G3_Bem_MatPipeID,
	rwPDS_G3_Dup_MatPipeID,
	rwPDS_G3_Toon_MatPipeID,
	rwPDS_G3_SkinEmb_MatPipeID,
	rwPDS_G3_SkinGem_MatPipeID,
	rwPDS_G3_SkinBem_MatPipeID,
	rwPDS_G3_SkinDup_MatPipeID,
	rwPDS_G3_SkinToon_MatPipeID,
	rwPDS_G2_BPatch_AtmPipeID,
	rwPDS_G2_BPatch_MatPipeID,
	rwPDS_G2_SkinBPatch_AtmPipeID,
	rwPDS_G2_SkinBPatch_MatPipeID,
	rwPDS_G2_EmbBPatch_MatPipeID,
	rwPDS_G2_GemBPatch_MatPipeID,
	rwPDS_G2_BemBPatch_MatPipeID,
	rwPDS_G2_DupBPatch_MatPipeID,
	rwPDS_G2_SkinEmbBPatch_MatPipeID,
	rwPDS_G2_SkinGemBPatch_MatPipeID,
	rwPDS_G2_SkinBemBPatch_MatPipeID,
	rwPDS_G2_SkinDupBPatch_MatPipeID,
	rwPDS_G3_2DStroke_MatPipeID,
	rwPDS_G3_2DStroke_ObjPipeID,
	rwPDS_G3_2DFont_MatPipeID,
	rwPDS_G3_2DFont_ObjPipeID,
	rwPDS_G3_2DFill_MatPipeID,
	rwPDS_G3_2DFill_ObjPipeID,
	rwPDS_G3_SkSpt_AtmPipeID,
	rwPDS_G3_SkSpt_MatPipeID,
	rwPDS_G3_SkSptEmb_MatPipeID,
	rwPDS_G3_SkSptGem_MatPipeID,
	rwPDS_G3_SkSptBem_MatPipeID,
	rwPDS_G3_SkSptDup_MatPipeID,
	rwPDS_G3_SkSptToon_MatPipeID,
	rwPDS_G3_Uva_MatPipeID,
	rwPDS_G3_DupUva_MatPipeID,
	rwPDS_G3_SkinUva_MatPipeID,
	rwPDS_G3_SkinDupUva_MatPipeID,
	rwPDS_G3_SkSptUva_MatPipeID,
	rwPDS_G3_SkSptDupUva_MatPipeID,
	rwPDS_G3_Skin_GrpMatPipeID = 0x11001,
	rwPDS_G3_Skin_GrpAtmPipeID,
	rwPDS_G2_DarkMaps_GrpMatPipeID,
	rwPDS_G2_DarkMaps_GrpAtmPipeID,
	rwPDS_G2_DarkMaps_GrpSctPipeID,
	rwPDS_G3_Toon_GrpMatPipeID,
	rwPDS_G3_Toon_GrpAtmPipeID,
	rwPDS_G3_Toon_GrpSctPipeID,
	rwPDS_G3_SkinToon_GrpMatPipeID,
	rwPDS_G3_SkinToon_GrpAtmPipeID,
	rwPDS_G3_MatfxUV1_GrpMatPipeID,
	rwPDS_G3_MatfxUV2_GrpMatPipeID,
	rwPDS_G3_MatfxUV1_GrpAtmPipeID,
	rwPDS_G3_MatfxUV2_GrpAtmPipeID,
	rwPDS_G3_MatfxUV1_GrpSctPipeID,
	rwPDS_G3_MatfxUV2_GrpSctPipeID,
	rwPDS_G3_SkinfxUV1_GrpMatPipeID,
	rwPDS_G3_SkinfxUV2_GrpMatPipeID,
	rwPDS_G3_SkinfxUV1_GrpAtmPipeID,
	rwPDS_G3_SkinfxUV2_GrpAtmPipeID,
	rwPDS_G2_BPatch_GrpAtmPipeID,
	rwPDS_G2_BPatch_GrpMatPipeID,
	rwPDS_G2_SkinBPatch_GrpAtmPipeID,
	rwPDS_G2_SkinBPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV1BPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV2BPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV1BPatch_GrpAtmPipeID,
	rwPDS_G2_MatfxUV2BPatch_GrpAtmPipeID,
	rwPDS_G2_SkinfxUV1BPatch_GrpMatPipeID,
	rwPDS_G2_SkinfxUV2BPatch_GrpMatPipeID,
	rwPDS_G2_SkinfxUV1BPatch_GrpAtmPipeID,
	rwPDS_G2_SkinfxUV2BPatch_GrpAtmPipeID,
	rwPDS_VCL_Uva_MatPipeID = 0x12000,
	rwPDS_VCL_DupUva_MatPipeID,
	rwPDS_VCL_SkinUva_MatPipeID,
	rwPDS_VCL_SkinDupUva_MatPipeID,
	rwPDS_G3x_Generic_AtmPipeID = 0x50001,
	rwPDS_G3x_APL_MatPipeID,
	rwPDS_G3x_ADL_MatPipeID,
	rwPDS_G3x_A4D_MatPipeID,
	rwPDS_G3x_APLDup_MatPipeID,
	rwPDS_G3x_ADLDup_MatPipeID,
	rwPDS_G3x_A4DDup_MatPipeID,
	rwPDS_G3x_APLGem_MatPipeID,
	rwPDS_G3x_ADLGem_MatPipeID,
	rwPDS_G3x_A4DGem_MatPipeID,
	rwPDS_G3x_Skin_AtmPipeID,
	rwPDS_G3x_APLSkin_MatPipeID,
	rwPDS_G3x_ADLSkin_MatPipeID,
	rwPDS_G3x_A4DSkin_MatPipeID,
	rwPDS_G3x_APLSkinDup_MatPipeID,
	rwPDS_G3x_ADLSkinDup_MatPipeID,
	rwPDS_G3x_A4DSkinDup_MatPipeID,
	rwPDS_G3x_APLSkinGem_MatPipeID,
	rwPDS_G3x_ADLSkinGem_MatPipeID,
	rwPDS_G3x_A4DSkinGem_MatPipeID,
	rwPDS_G3x_ADLClone_MatPipeID,
	rwPDS_G3x_ADLClone_AtmPipeID,
	rwPDS_G3x_OPLClone_MatPipeID,
	rwPDS_G3x_OPLClone_AtmPipeID,
	rwPDS_G3x_Team_MatPipeID,
	rwPDS_G3x_DupTeam_MatPipeID,
	rwPDS_G3x_GemTeam_MatPipeID,
	rwPDS_G3x_SkinTeam_MatPipeID,
	rwPDS_G3x_SkinDupTeam_MatPipeID,
	rwPDS_G3x_SkinGemTeam_MatPipeID,
	rwPDS_G3x_Team_AtmPipeID,
	rwPDS_G3x_SkinTeam_AtmPipeID,
	rwPDS_G3x_APLUva_MatPipeID,
	rwPDS_G3x_ADLUva_MatPipeID,
	rwPDS_G3x_A4DUva_MatPipeID,
	rwPDS_G3x_APLDupUva_MatPipeID,
	rwPDS_G3x_ADLDupUva_MatPipeID,
	rwPDS_G3x_A4DDupUva_MatPipeID,
	rwPDS_G3x_APLSkinUva_MatPipeID,
	rwPDS_G3x_ADLSkinUva_MatPipeID,
	rwPDS_G3x_A4DSkinUva_MatPipeID,
	rwPDS_G3x_APLSkDupUva_MatPipeID,
	rwPDS_G3x_ADLSkDupUva_MatPipeID,
	rwPDS_G3x_A4DSkDupUva_MatPipeID,
	rwPDS_G3xd_APL_MatPipeID,
	rwPDS_G3xd_ADL_MatPipeID,
	rwPDS_G3xd_A4D_MatPipeID,
	rwPDS_G3xd_APLDup_MatPipeID,
	rwPDS_G3xd_ADLDup_MatPipeID,
	rwPDS_G3xd_A4DDup_MatPipeID,
	rwPDS_G3xd_APLGem_MatPipeID,
	rwPDS_G3xd_ADLGem_MatPipeID,
	rwPDS_G3xd_A4DGem_MatPipeID,
	rwPDS_G3xd_APLUva_MatPipeID,
	rwPDS_G3xd_ADLUva_MatPipeID,
	rwPDS_G3xd_A4DUva_MatPipeID,
	rwPDS_G3xd_APLDupUva_MatPipeID,
	rwPDS_G3xd_ADLDupUva_MatPipeID,
	rwPDS_G3xd_A4DDupUva_MatPipeID,
	rwPDS_G3xd_APLSkin_MatPipeID,
	rwPDS_G3xd_ADLSkin_MatPipeID,
	rwPDS_G3xd_A4DSkin_MatPipeID,
	rwPDS_G3xd_APLSkinDup_MatPipeID,
	rwPDS_G3xd_ADLSkinDup_MatPipeID,
	rwPDS_G3xd_A4DSkinDup_MatPipeID,
	rwPDS_G3xd_APLSkinGem_MatPipeID,
	rwPDS_G3xd_ADLSkinGem_MatPipeID,
	rwPDS_G3xd_A4DSkinGem_MatPipeID,
	rwPDS_G3xd_APLSkinUva_MatPipeID,
	rwPDS_G3xd_ADLSkinUva_MatPipeID,
	rwPDS_G3xd_A4DSkinUva_MatPipeID,
	rwPDS_G3xd_APLSkDupUva_MatPipeID,
	rwPDS_G3xd_ADLSkDupUva_MatPipeID,
	rwPDS_G3xd_A4DSkDupUva_MatPipeID,
	rwPDS_VCL_Generic_AtmPipeID = 0x51000,
	rwPDS_VCL_ADLDot3_MatPipeID,
	rwPDS_VCL_APLDot3_MatPipeID,
	rwPDS_VCL_ADLSpec_MatPipeID,
	rwPDS_VCL_APLSpec_MatPipeID,
	rwPDS_VCL_Skin_AtmPipeID,
	rwPDS_VCL_ADLSkinDot3_MatPipeID,
	rwPDS_VCL_APLSkinDot3_MatPipeID,
	rwPDS_VCL_ADLSkinSpec_MatPipeID,
	rwPDS_VCL_APLSkinSpec_MatPipeID,
	rpPDSMAXPIPEID,
	rpPDSPIPEIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxNodePS2AllPvtData
{
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

struct RpPDSSkyMatCluster
{
	RxClusterDefinition* definition;
	u32 type;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_33 clusters;
};

struct RwEngineOpenParams
{
	void* displayID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct rwPS2AllClusterInstanceInfo
{
	u32 attrib;
	u32 stride;
};

struct RpPDSSkyMatPrimitive
{
	RwPrimitiveType type;
	s32 clusterStride;
	s32 vertexCount;
	s32 primCount;
	s32 vifOffset;
};

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

type_16 buffer;
type_18 buffer;
void* hackResourceArenaPointer;
s32 DVD;
s32 g_dumpEachAllocOp;
RwVideoMode sVideoMode;
s32 gFB_Flags;
DBWATCHData* g_watchthisblock;
u32 gVsyncCount;
u32 gTransitionSceneID;
type_34 vsyncCounterHandler;
type_14 TextureRead;
RpPDSSkyObjTemplate rwPDS_G3_SkinfxUV2_AtmPipe;
RpPDSSkyObjTemplate rwPDS_G3_SkinfxUV1_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_SkinfxUV2_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3_SkinfxUV1_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_Skin_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_Skin_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV2_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV1_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV2_AtmPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV1_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_MatfxUV2_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3_MatfxUV1_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_Im3D_SegObjPipe;
RpPDSSkyObjTemplate rwPDS_G3_Im3D_TriObjPipe;
RpPDSSkyMatTemplate rwPDS_G3_Im3D_SegPipe;
RpPDSSkyMatTemplate rwPDS_G3_Im3D_TriPipe;
RpPDSSkyObjTemplate rwPDS_G3_Generic_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_Generic_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_Generic_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_OPLClone_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3x_OPLClone_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DSkinGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLSkinGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4D_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADL_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_A4DSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_ADLSkin_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_Skin_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3x_A4D_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_ADL_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_Generic_AtmPipe;

void iSystem_GapTrackReport();
void iLoadModule(s8* moduleName, s8* arguments);
u32 iGetCurrFormattedTime(s8* str);
u32 iGetCurrFormattedDate(s8* str);
u8 iGetMonth();
u8 iGetDay();
u8 iGetHour();
u8 iGetMinute();
void iVSync();
RwTexture* TextureRead(s8* name, s8* maskName);
u32 iRenderWareInit();
s32 vsyncCounterHandler();
u32 RWAttachPlugins();
void iSystemExit();
void iSystemInit(u32 options);
u32 psSelectDevice();

// iSystem_GapTrackReport__Fv
// Start address: 0x1b9c50
void iSystem_GapTrackReport()
{
}

// iLoadModule__FPCcPCc
// Start address: 0x1b9c60
void iLoadModule(s8* moduleName, s8* arguments)
{
	type_32 workingName;
	s32 j;
	s32 errorCode;
	type_22 PATHS_CDROM;
	type_27 PATHS_HOST;
}

// iGetCurrFormattedTime__FPc
// Start address: 0x1b9db0
u32 iGetCurrFormattedTime(s8* str)
{
	sceCdCLOCK clock;
}

// iGetCurrFormattedDate__FPc
// Start address: 0x1b9f10
u32 iGetCurrFormattedDate(s8* str)
{
	sceCdCLOCK clock;
}

// iGetMonth__Fv
// Start address: 0x1ba010
u8 iGetMonth()
{
	sceCdCLOCK clock;
}

// iGetDay__Fv
// Start address: 0x1ba040
u8 iGetDay()
{
	sceCdCLOCK clock;
}

// iGetHour__Fv
// Start address: 0x1ba070
u8 iGetHour()
{
	sceCdCLOCK clock;
}

// iGetMinute__Fv
// Start address: 0x1ba0a0
u8 iGetMinute()
{
	sceCdCLOCK clock;
}

// iVSync__Fv
// Start address: 0x1ba0d0
void iVSync()
{
}

// TextureRead__FPCcPCc
// Start address: 0x1ba0e0
RwTexture* TextureRead(s8* name, s8* maskName)
{
	type_17 tmpname;
	RwTexture* result;
	u32 assetid;
	u32 tmpsize;
}

// iRenderWareInit__Fv
// Start address: 0x1ba1e0
u32 iRenderWareInit()
{
	RwEngineOpenParams openParams;
}

// vsyncCounterHandler__Fi
// Start address: 0x1ba2e0
s32 vsyncCounterHandler()
{
}

// RWAttachPlugins__Fv
// Start address: 0x1ba300
u32 RWAttachPlugins()
{
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
}

// iSystemExit__Fv
// Start address: 0x1bab10
void iSystemExit()
{
}

// iSystemInit__FUi
// Start address: 0x1bab70
void iSystemInit(u32 options)
{
	s8* CDROM_IMAGE_FILE;
	s8* HOSTIO_IMAGE_FILE;
	s8* iopImageFile;
	s32 disk_type;
}

// psSelectDevice__Fv
// Start address: 0x1bad40
u32 psSelectDevice()
{
	RwVideoMode videoMode;
	s32 i;
	s32 num;
}

