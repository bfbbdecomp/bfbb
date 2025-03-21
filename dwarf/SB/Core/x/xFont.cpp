/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x4F8790
static class basic_rect default_adjust; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static char * default_font_texture[3]; // size: 0xC, address: 0x4170D0
static class font_asset default_font_assets[4]; // size: 0x650, address: 0x4170E0
static class font_data active_fonts[4]; // size: 0x53C0, address: 0x540FA0
static unsigned int active_fonts_size; // size: 0x4, address: 0x50F9A4
static class RwSky2DVertex vert_buffer[120]; // size: 0x1E00, address: 0x546360
static unsigned int vert_buffer_used; // size: 0x4, address: 0x50F9A8
static float rcz; // size: 0x4, address: 0x50F9AC
static float nsz; // size: 0x4, address: 0x50F9B0
static class model_cache_entry model_cache[8]; // size: 0x60, address: 0x548160
static unsigned char model_cache_inited; // size: 0x1, address: 0x50F9B4
static class /* @class */ {
    // total size: 0x24
public:
    signed int fogenable; // offset 0x0, size 0x4
    signed int vertexalphaenable; // offset 0x4, size 0x4
    signed int zwriteenable; // offset 0x8, size 0x4
    signed int ztestenable; // offset 0xC, size 0x4
    unsigned int srcblend; // offset 0x10, size 0x4
    unsigned int destblend; // offset 0x14, size 0x4
    unsigned int shademode; // offset 0x18, size 0x4
    class RwRaster * textureraster; // offset 0x1C, size 0x4
    enum RwTextureFilterMode filter; // offset 0x20, size 0x4
} oldrs; // size: 0x24, address: 0x5481C0
static class substr text_delims; // size: 0x8, address: 0x4F87A0
static class tex_args def_tex_args; // size: 0x34, address: 0x5481F0
static class model_args def_model_args; // size: 0x2C, address: 0x548230
static class tl_cache_entry tl_cache[3]; // size: 0x18F18, address: 0x548260
class callback text_cb; // size: 0xC, address: 0x4F87A8
unsigned char disable_text_stats; // size: 0x1, address: 0x0
static class tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x417750
static class tag_type * format_tags; // size: 0x4, address: 0x50E850
static unsigned int format_tags_size; // size: 0x4, address: 0x50E854
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BB928
class basic_rect m_Unit; // size: 0x10, address: 0x4F8D60
class xVec3 m_Null; // size: 0xC, address: 0x4F9960
class basic_rect m_Null; // size: 0x10, address: 0x4F8D50
class iColor_tag g_WHITE; // size: 0x4, address: 0x4F80A0
class xMat4x3 g_I3; // size: 0x40, address: 0x5688C0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
class xfont {
    // total size: 0x24
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class iColor_tag color; // offset 0x10, size 0x4
    class basic_rect clip; // offset 0x14, size 0x10
};
class jot {
    // total size: 0x38
public:
    class substr s; // offset 0x0, size 0x8
    class /* @class */ {
        // total size: 0x2
    public:
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned short dummy : 4; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
class font_asset {
    // total size: 0x194
public:
    unsigned int tex_id; // offset 0x0, size 0x4
    unsigned short u; // offset 0x4, size 0x2
    unsigned short v; // offset 0x6, size 0x2
    unsigned char du; // offset 0x8, size 0x1
    unsigned char dv; // offset 0x9, size 0x1
    unsigned char line_size; // offset 0xA, size 0x1
    unsigned char baseline; // offset 0xB, size 0x1
    class /* @class */ {
        // total size: 0x4
    public:
        signed short x; // offset 0x0, size 0x2
        signed short y; // offset 0x2, size 0x2
    } space; // offset 0xC, size 0x4
    unsigned int flags; // offset 0x10, size 0x4
    unsigned char char_set[128]; // offset 0x14, size 0x80
    class /* @class */ {
        // total size: 0x2
    public:
        unsigned char offset; // offset 0x0, size 0x1
        unsigned char size; // offset 0x1, size 0x1
    } char_pos[127]; // offset 0x94, size 0xFE
};
class xtextbox {
    // total size: 0x68
public:
    class xfont font; // offset 0x0, size 0x24
    class basic_rect bounds; // offset 0x24, size 0x10
    unsigned int flags; // offset 0x34, size 0x4
    float line_space; // offset 0x38, size 0x4
    float tab_stop; // offset 0x3C, size 0x4
    float left_indent; // offset 0x40, size 0x4
    float right_indent; // offset 0x44, size 0x4
    class callback * cb; // offset 0x48, size 0x4
    void * context; // offset 0x4C, size 0x4
    char * * texts; // offset 0x50, size 0x4
    unsigned int * text_sizes; // offset 0x54, size 0x4
    unsigned int texts_size; // offset 0x58, size 0x4
    class substr text; // offset 0x5C, size 0x8
    unsigned int text_hash; // offset 0x64, size 0x4
};
class model_tag_context {
    // total size: 0x30
public:
    class xModelInstance * model; // offset 0x0, size 0x4
    class xVec3 rot; // offset 0x4, size 0xC
    class basic_rect dst; // offset 0x10, size 0x10
    class xSphere o; // offset 0x20, size 0x10
};
class RxHeap {
    // total size: 0x1C
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
class RwSky2DVertex {
    // total size: 0x40
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
class RwImage {
    // total size: 0x1C
public:
    signed int flags; // offset 0x0, size 0x4
    signed int width; // offset 0x4, size 0x4
    signed int height; // offset 0x8, size 0x4
    signed int depth; // offset 0xC, size 0x4
    signed int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    class RwRGBA * palette; // offset 0x18, size 0x4
};
class RxPipelineNode {
    // total size: 0x28
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
class tag_entry {
    // total size: 0x14
public:
    class substr name; // offset 0x0, size 0x8
    char op; // offset 0x8, size 0x1
    class substr * args; // offset 0xC, size 0x4
    unsigned int args_size; // offset 0x10, size 0x4
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class model_pool {
    // total size: 0x560
public:
    class RwMatrixTag mat[8]; // offset 0x0, size 0x200
    class xModelInstance model[8]; // offset 0x200, size 0x360
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class RpMaterial {
    // total size: 0x1C
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class RxPipelineNodeTopSortData {
    // total size: 0xC
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
class RxPipeline {
    // total size: 0x34
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
class jot_line {
    // total size: 0x20
public:
    class basic_rect bounds; // offset 0x0, size 0x10
    float baseline; // offset 0x10, size 0x4
    unsigned int first; // offset 0x14, size 0x4
    unsigned int last; // offset 0x18, size 0x4
    unsigned char page_break; // offset 0x1C, size 0x1
};
class xTextAsset {
    // total size: 0x4
public:
    unsigned int len; // offset 0x0, size 0x4
};
class xSurface {
    // total size: 0x0
};
class RwTexture {
    // total size: 0x58
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
class tag_type {
    // total size: 0x14
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
class substr {
    // total size: 0x8
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
class split_tag {
    // total size: 0x20
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
class RpMeshHeader {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class font_data {
    // total size: 0x14F0
public:
    class font_asset * asset; // offset 0x0, size 0x4
    unsigned int index_max; // offset 0x4, size 0x4
    unsigned char char_index[256]; // offset 0x8, size 0x100
    float iwidth; // offset 0x108, size 0x4
    float iheight; // offset 0x10C, size 0x4
    class basic_rect tex_bounds[127]; // offset 0x110, size 0x7F0
    class basic_rect bounds[127]; // offset 0x900, size 0x7F0
    class xVec2 dstfrac[127]; // offset 0x10F0, size 0x3F8
    class RwTexture * texture; // offset 0x14E8, size 0x4
    class RwRaster * raster; // offset 0x14EC, size 0x4
};
class xTimerAsset : public xBaseAsset {
    // total size: 0x10
public:
    float seconds; // offset 0x8, size 0x4
    float randomRange; // offset 0xC, size 0x4
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class RwRaster {
    // total size: 0x34
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
class xAnimTable {
    // total size: 0x1C
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
};
class basic_rect {
    // total size: 0x10
public:
    signed int x; // offset 0x0, size 0x4
    signed int y; // offset 0x4, size 0x4
    signed int w; // offset 0x8, size 0x4
    signed int h; // offset 0xC, size 0x4
};
class xAnimTransition {
    // total size: 0x2C
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
class layout {
    // total size: 0x84F8
public:
    class xtextbox tb; // offset 0x0, size 0x68
    class jot _jots[512]; // offset 0x68, size 0x7000
    unsigned int _jots_size; // offset 0x7068, size 0x4
    class jot_line _lines[128]; // offset 0x706C, size 0x1000
    unsigned int _lines_size; // offset 0x806C, size 0x4
    unsigned char context_buffer[1024]; // offset 0x8070, size 0x400
    unsigned int context_buffer_size; // offset 0x8470, size 0x4
    unsigned short dynamics[64]; // offset 0x8474, size 0x80
    unsigned int dynamics_size; // offset 0x84F4, size 0x4
};
class RpLight {
    // total size: 0x40
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class xModelInstance {
    // total size: 0x6C
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    unsigned int PipeFlags; // offset 0x14, size 0x4
    float RedMultiplier; // offset 0x18, size 0x4
    float GreenMultiplier; // offset 0x1C, size 0x4
    float BlueMultiplier; // offset 0x20, size 0x4
    float Alpha; // offset 0x24, size 0x4
    float FadeStart; // offset 0x28, size 0x4
    float FadeEnd; // offset 0x2C, size 0x4
    class xSurface * Surf; // offset 0x30, size 0x4
    class xModelBucket * * Bucket; // offset 0x34, size 0x4
    class xModelInstance * BucketNext; // offset 0x38, size 0x4
    class xLightKit * LightKit; // offset 0x3C, size 0x4
    void * Object; // offset 0x40, size 0x4
    unsigned short Flags; // offset 0x44, size 0x2
    unsigned char BoneCount; // offset 0x46, size 0x1
    unsigned char BoneIndex; // offset 0x47, size 0x1
    unsigned char * BoneRemap; // offset 0x48, size 0x4
    class RwMatrixTag * Mat; // offset 0x4C, size 0x4
    class xVec3 Scale; // offset 0x50, size 0xC
    unsigned int modelID; // offset 0x5C, size 0x4
    unsigned int shadowID; // offset 0x60, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x64, size 0x4
    class /* @class */ {
        // total size: 0x4
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0x68, size 0x4
};
class tag_entry_list {
    // total size: 0x8
public:
    class tag_entry * entries; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
class RwMatrixTag {
    // total size: 0x40
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class basic_rect {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
class rxReq {
    // total size: 0x0
};
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class xAnimState {
    // total size: 0x4C
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
class xLightKitLight {
    // total size: 0x60
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class xAnimFile {
    // total size: 0x20
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class xAnimSingle {
    // total size: 0x40
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class /* @class */ {
    // total size: 0x2
public:
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned short dummy : 4; // offset 0x0, size 0x2
};
class tex_tag_context {
    // total size: 0x28
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    class basic_rect src; // offset 0x8, size 0x10
    class basic_rect dst; // offset 0x18, size 0x10
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class model_cache_entry {
    // total size: 0xC
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int order; // offset 0x4, size 0x4
    class xModelInstance * model; // offset 0x8, size 0x4
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class model_args {
    // total size: 0x2C
public:
    class xModelInstance * model; // offset 0x0, size 0x4
    class xVec3 rot; // offset 0x4, size 0xC
    class basic_rect dst; // offset 0x10, size 0x10
    class xVec2 off; // offset 0x20, size 0x8
    enum /* @enum */ {
        SCALE_FONT = 0,
        SCALE_SCREEN = 1,
        SCALE_SIZE = 2,
    } scale; // offset 0x28, size 0x4
};
class RpAtomic {
    // total size: 0x70
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
class tex_args {
    // total size: 0x34
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    class basic_rect src; // offset 0x8, size 0x10
    class basic_rect dst; // offset 0x18, size 0x10
    class xVec2 off; // offset 0x28, size 0x8
    enum /* @enum */ {
        SCALE_FONT = 0,
        SCALE_SCREEN = 1,
        SCALE_SIZE = 2,
        SCALE_FONT_WIDTH = 3,
        SCALE_FONT_HEIGHT = 4,
        SCALE_SCREEN_WIDTH = 5,
        SCALE_SCREEN_HEIGHT = 6,
    } scale; // offset 0x30, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
class xAnimEffect {
    // total size: 0x14
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
class RpInterpolator {
    // total size: 0x14
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
enum /* @enum */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
};
class tl_cache_entry {
    // total size: 0x8508
public:
    unsigned int used; // offset 0x0, size 0x4
    signed long last_used; // offset 0x8, size 0x4
    class layout tl; // offset 0x10, size 0x84F8
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class xAnimPlay {
    // total size: 0x20
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class xTimer : public xBase {
    // total size: 0x1C
public:
    class xTimerAsset * tasset; // offset 0x10, size 0x4
    unsigned char state; // offset 0x14, size 0x1
    unsigned char runsInPause; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    float secondsLeft; // offset 0x18, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x24
public:
    signed int fogenable; // offset 0x0, size 0x4
    signed int vertexalphaenable; // offset 0x4, size 0x4
    signed int zwriteenable; // offset 0x8, size 0x4
    signed int ztestenable; // offset 0xC, size 0x4
    unsigned int srcblend; // offset 0x10, size 0x4
    unsigned int destblend; // offset 0x14, size 0x4
    unsigned int shademode; // offset 0x18, size 0x4
    class RwRaster * textureraster; // offset 0x1C, size 0x4
    enum RwTextureFilterMode filter; // offset 0x20, size 0x4
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    char * s; // offset 0x0, size 0x4
    char * end; // offset 0x4, size 0x4
};
class xMat3x3 {
    // total size: 0x30
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class RpClump {
    // total size: 0x2C
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
};
class RxIoSpec {
    // total size: 0x14
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
class RpGeometry {
    // total size: 0x60
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
class xMemPool {
    // total size: 0x1C
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
class RxNodeMethods {
    // total size: 0x1C
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class RwSky2DVertexFields {
    // total size: 0x40
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
class RxNodeDefinition {
    // total size: 0x40
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
class callback {
    // total size: 0xC
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class RxCluster {
    // total size: 0x1C
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class RxPacket {
    // total size: 0x30
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
class /* @class */ {
    // total size: 0x4
public:
    signed short x; // offset 0x0, size 0x2
    signed short y; // offset 0x2, size 0x2
};
enum /* @enum */ {
    SCALE_FONT = 0,
    SCALE_SCREEN = 1,
    SCALE_SIZE = 2,
    SCALE_FONT_WIDTH = 3,
    SCALE_FONT_HEIGHT = 4,
    SCALE_SCREEN_WIDTH = 5,
    SCALE_SCREEN_HEIGHT = 6,
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class RwSky2DVertexAlignmentOverlay {
    // total size: 0x40
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
class /* @class */ {
    // total size: 0x2
public:
    unsigned char offset; // offset 0x0, size 0x1
    unsigned char size; // offset 0x1, size 0x1
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DAF50 -> 0x001DB1B0
*/
// Range: 0x1DAF50 -> 0x1DB1B0
void render_fill_rect(class basic_rect & bounds /* r16 */, class iColor_tag color /* r29+0x4C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DAF50 -> 0x1DB1B0
        float rcz; // r21
        float nsz; // r20
        class RwSky2DVertex vert[4]; // r29+0x60
        class basic_rect r; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB1B0 -> 0x001DB2A4
*/
// Range: 0x1DB1B0 -> 0x1DB2A4
static void set_rect_vert(class RwSky2DVertex & vert /* r2 */, float x /* r29+0x10 */, float y /* r29+0x10 */, float z /* r29+0x10 */, class iColor_tag c /* r29+0xC */, float rcz /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB1B0 -> 0x1DB2A4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB2B0 -> 0x001DB388
*/
// Range: 0x1DB2B0 -> 0x1DB388
class tag_type * find_format_tag(class substr & s /* r19 */, signed int & index /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB2B0 -> 0x1DB388
        signed int start; // r17
        signed int end; // r16
        class tag_type & t; // r20
        signed int c; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB390 -> 0x001DB5A0
*/
// Range: 0x1DB390 -> 0x1DB5A0
void register_tags(class tag_type * t /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB390 -> 0x1DB5A0
        class tag_type * s1; // r20
        class tag_type * s2; // r19
        class tag_type * end1; // r18
        class tag_type * end2; // r17
        class tag_type * d; // r16
        signed int c; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB5A0 -> 0x001DB750
*/
// Range: 0x1DB5A0 -> 0x1DB750
static void parse_tag_timer(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB5A0 -> 0x1DB750
        unsigned int id; // r2
        class xTimer * ta; // r2
        char buffer[64]; // r29+0x20
        unsigned int sec; // r4
        unsigned int mn; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB750 -> 0x001DB790
*/
// Range: 0x1DB750 -> 0x1DB790
static void parse_tag_pop(class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB750 -> 0x1DB790
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB790 -> 0x001DB870
*/
// Range: 0x1DB790 -> 0x1DB870
static void parse_tag_insert_hash(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB790 -> 0x1DB870
        class xTextAsset * ta; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB870 -> 0x001DB948
*/
// Range: 0x1DB870 -> 0x1DB948
static void parse_tag_insert(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB870 -> 0x1DB948
        unsigned int id; // r2
        class xTextAsset * ta; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DB950 -> 0x001DB9F8
*/
// Range: 0x1DB950 -> 0x1DB9F8
static void reset_tag_tex() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DB950 -> 0x1DB9F8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBA00 -> 0x001DBE5C
*/
// Range: 0x1DBA00 -> 0x1DBE5C
static void parse_tag_tex(class jot & a /* r17 */, class xtextbox & tb /* r16 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DBA00 -> 0x1DBE5C
        class tex_tag_context & ttc; // r3
        class callback cb; // @ 0x004F89D8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBE60 -> 0x001DBF48
*/
// Range: 0x1DBE60 -> 0x1DBF48
static void render_tag_tex(class jot & j /* r2 */, class xtextbox & tb /* r18 */, float x /* r21 */, float y /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DBE60 -> 0x1DBF48
        class tex_tag_context & ttc; // r17
        class basic_rect dst; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBF50 -> 0x001DBFE8
*/
// Range: 0x1DBF50 -> 0x1DBFE8
static void reset_tag_model() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DBF50 -> 0x1DBFE8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DBFF0 -> 0x001DC274
*/
// Range: 0x1DBFF0 -> 0x1DC274
static void parse_tag_model(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DBFF0 -> 0x1DC274
        class model_tag_context & mtc; // r16
        class callback cb; // @ 0x004F89C8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC280 -> 0x001DC490
*/
// Range: 0x1DC280 -> 0x1DC490
static void render_tag_model(class jot & j /* r2 */, class xtextbox & tb /* r17 */, float x /* r29+0xA0 */, float y /* r29+0xA0 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC280 -> 0x1DC490
        class model_tag_context & mtc; // r16
        class basic_rect dst; // r29+0x70
        class xVec3 from; // r29+0x90
        class xVec3 to; // r29+0x80
        class xMat4x3 frame; // r29+0x30
        float scale; // r9
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC490 -> 0x001DC4AC
*/
// Range: 0x1DC490 -> 0x1DC4AC
static void parse_tag_page_break(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC490 -> 0x1DC4AC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4B0 -> 0x001DC4CC
*/
// Range: 0x1DC4B0 -> 0x1DC4CC
static void parse_tag_word_break(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC4B0 -> 0x1DC4CC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4D0 -> 0x001DC4EC
*/
// Range: 0x1DC4D0 -> 0x1DC4EC
static void parse_tag_tab(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC4D0 -> 0x1DC4EC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC4F0 -> 0x001DC600
*/
// Range: 0x1DC4F0 -> 0x1DC600
static void parse_tag_newline(class jot & a /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC4F0 -> 0x1DC600
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC600 -> 0x001DC704
*/
// Range: 0x1DC600 -> 0x1DC704
static void parse_tag_open_curly(class jot & a /* r2 */, class xtextbox & tb /* r2 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC600 -> 0x1DC704
        char c; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC710 -> 0x001DC720
*/
// Range: 0x1DC710 -> 0x1DC720
static void reset_tag_yjustify(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC710 -> 0x1DC720
        class callback cb; // @ 0x004F89B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC720 -> 0x001DC8B8
*/
// Range: 0x1DC720 -> 0x1DC8B8
static void parse_tag_yjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC720 -> 0x1DC8B8
        unsigned int & flags; // r16
        class callback cb; // @ 0x004F89A8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC8C0 -> 0x001DC8E0
*/
// Range: 0x1DC8C0 -> 0x1DC8E0
static void update_tag_reset_yjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC8C0 -> 0x1DC8E0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC8E0 -> 0x001DC900
*/
// Range: 0x1DC8E0 -> 0x1DC900
static void update_tag_yjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC8E0 -> 0x1DC900
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC900 -> 0x001DC910
*/
// Range: 0x1DC900 -> 0x1DC910
static void reset_tag_xjustify(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC900 -> 0x1DC910
        class callback cb; // @ 0x004F8998
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DC910 -> 0x001DCAA8
*/
// Range: 0x1DC910 -> 0x1DCAA8
static void parse_tag_xjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DC910 -> 0x1DCAA8
        unsigned int & flags; // r16
        class callback cb; // @ 0x004F8988
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCAB0 -> 0x001DCAD0
*/
// Range: 0x1DCAB0 -> 0x1DCAD0
static void update_tag_reset_xjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCAB0 -> 0x1DCAD0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCAD0 -> 0x001DCAF0
*/
// Range: 0x1DCAD0 -> 0x1DCAF0
static void update_tag_xjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCAD0 -> 0x1DCAF0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCAF0 -> 0x001DCB00
*/
// Range: 0x1DCAF0 -> 0x1DCB00
static void reset_tag_wrap(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCAF0 -> 0x1DCB00
        class callback cb; // @ 0x004F8978
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCB00 -> 0x001DCBF8
*/
// Range: 0x1DCB00 -> 0x1DCBF8
static void parse_tag_wrap(class jot & a /* r17 */, class split_tag & ti /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCB00 -> 0x1DCBF8
        unsigned int & flags; // r18
        class callback cb; // @ 0x004F8968
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC00 -> 0x001DCC20
*/
// Range: 0x1DCC00 -> 0x1DCC20
static void update_tag_reset_wrap(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCC00 -> 0x1DCC20
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC20 -> 0x001DCC40
*/
// Range: 0x1DCC20 -> 0x1DCC40
static void update_tag_wrap(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCC20 -> 0x1DCC40
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC40 -> 0x001DCC50
*/
// Range: 0x1DCC40 -> 0x1DCC50
static void reset_tag_font(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCC40 -> 0x1DCC50
        class callback cb; // @ 0x004F8958
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCC50 -> 0x001DCCDC
*/
// Range: 0x1DCC50 -> 0x1DCCDC
static void parse_tag_font(class jot & a /* r16 */, class split_tag & ti /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCC50 -> 0x1DCCDC
        unsigned int & id; // r17
        class callback cb; // @ 0x004F8948
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCE0 -> 0x001DCCEC
*/
// Range: 0x1DCCE0 -> 0x1DCCEC
static void update_tag_reset_font(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCCE0 -> 0x1DCCEC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCCF0 -> 0x001DCCFC
*/
// Range: 0x1DCCF0 -> 0x1DCCFC
static void update_tag_font(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCCF0 -> 0x1DCCFC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCD00 -> 0x001DCD10
*/
// Range: 0x1DCD00 -> 0x1DCD10
static void reset_tag_color(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCD00 -> 0x1DCD10
        class callback cb; // @ 0x004F8938
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCD10 -> 0x001DCF4C
*/
// Range: 0x1DCD10 -> 0x1DCF4C
static void parse_tag_color(class jot & a /* r19 */, class xtextbox & tb /* r18 */, class split_tag & ti /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCD10 -> 0x1DCF4C
        class iColor_tag & color; // r16
        unsigned int v; // r3
        unsigned int temp; // r4
        class callback cb; // @ 0x004F8928
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCF50 -> 0x001DCF74
*/
// Range: 0x1DCF50 -> 0x1DCF74
static void update_tag_reset_color(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCF50 -> 0x1DCF74
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCF80 -> 0x001DCFA4
*/
// Range: 0x1DCF80 -> 0x1DCFA4
static void update_tag_color(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCF80 -> 0x1DCFA4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCFB0 -> 0x001DCFC0
*/
// Range: 0x1DCFB0 -> 0x1DCFC0
static void reset_tag_all(class jot & j /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCFB0 -> 0x1DCFC0
        class callback cb; // @ 0x004F8918
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DCFC0 -> 0x001DD094
*/
// Range: 0x1DCFC0 -> 0x1DD094
static void update_tag_reset_all(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DCFC0 -> 0x1DD094
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD0A0 -> 0x001DD0B0
*/
// Range: 0x1DD0A0 -> 0x1DD0B0
static void reset_tag_yspace(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD0A0 -> 0x1DD0B0
        class callback cb; // @ 0x004F8908
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD0B0 -> 0x001DD1E4
*/
// Range: 0x1DD0B0 -> 0x1DD1E4
static void parse_tag_yspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD0B0 -> 0x1DD1E4
        float & v; // r16
        class callback cb; // @ 0x004F88F8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD1F0 -> 0x001DD1FC
*/
// Range: 0x1DD1F0 -> 0x1DD1FC
static void update_tag_reset_yspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD1F0 -> 0x1DD1FC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD200 -> 0x001DD20C
*/
// Range: 0x1DD200 -> 0x1DD20C
static void update_tag_yspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD200 -> 0x1DD20C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD210 -> 0x001DD220
*/
// Range: 0x1DD210 -> 0x1DD220
static void reset_tag_xspace(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD210 -> 0x1DD220
        class callback cb; // @ 0x004F88E8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD220 -> 0x001DD354
*/
// Range: 0x1DD220 -> 0x1DD354
static void parse_tag_xspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD220 -> 0x1DD354
        float & v; // r16
        class callback cb; // @ 0x004F88D8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD360 -> 0x001DD36C
*/
// Range: 0x1DD360 -> 0x1DD36C
static void update_tag_reset_xspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD360 -> 0x1DD36C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD370 -> 0x001DD37C
*/
// Range: 0x1DD370 -> 0x1DD37C
static void update_tag_xspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD370 -> 0x1DD37C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD380 -> 0x001DD390
*/
// Range: 0x1DD380 -> 0x1DD390
static void reset_tag_tab_stop(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD380 -> 0x1DD390
        class callback cb; // @ 0x004F88C8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD390 -> 0x001DD4BC
*/
// Range: 0x1DD390 -> 0x1DD4BC
static void parse_tag_tab_stop(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD390 -> 0x1DD4BC
        float & v; // r16
        class callback cb; // @ 0x004F88B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD4C0 -> 0x001DD4CC
*/
// Range: 0x1DD4C0 -> 0x1DD4CC
static void update_tag_reset_tab_stop(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD4C0 -> 0x1DD4CC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD4D0 -> 0x001DD4DC
*/
// Range: 0x1DD4D0 -> 0x1DD4DC
static void update_tag_tab_stop(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD4D0 -> 0x1DD4DC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD4E0 -> 0x001DD4F0
*/
// Range: 0x1DD4E0 -> 0x1DD4F0
static void reset_tag_right_indent(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD4E0 -> 0x1DD4F0
        class callback cb; // @ 0x004F88A8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD4F0 -> 0x001DD624
*/
// Range: 0x1DD4F0 -> 0x1DD624
static void parse_tag_right_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD4F0 -> 0x1DD624
        float & v; // r16
        class callback cb; // @ 0x004F8898
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD630 -> 0x001DD63C
*/
// Range: 0x1DD630 -> 0x1DD63C
static void update_tag_reset_right_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD630 -> 0x1DD63C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD640 -> 0x001DD64C
*/
// Range: 0x1DD640 -> 0x1DD64C
static void update_tag_right_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD640 -> 0x1DD64C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD650 -> 0x001DD660
*/
// Range: 0x1DD650 -> 0x1DD660
static void reset_tag_left_indent(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD650 -> 0x1DD660
        class callback cb; // @ 0x004F8888
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD660 -> 0x001DD794
*/
// Range: 0x1DD660 -> 0x1DD794
static void parse_tag_left_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD660 -> 0x1DD794
        float & v; // r16
        class callback cb; // @ 0x004F8878
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD7A0 -> 0x001DD7AC
*/
// Range: 0x1DD7A0 -> 0x1DD7AC
static void update_tag_reset_left_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD7A0 -> 0x1DD7AC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD7B0 -> 0x001DD7BC
*/
// Range: 0x1DD7B0 -> 0x1DD7BC
static void update_tag_left_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD7B0 -> 0x1DD7BC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD7C0 -> 0x001DD7D0
*/
// Range: 0x1DD7C0 -> 0x1DD7D0
static void reset_tag_height(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD7C0 -> 0x1DD7D0
        class callback cb; // @ 0x004F8868
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD7D0 -> 0x001DD8FC
*/
// Range: 0x1DD7D0 -> 0x1DD8FC
static void parse_tag_height(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD7D0 -> 0x1DD8FC
        float & v; // r16
        class callback cb; // @ 0x004F8858
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD900 -> 0x001DD90C
*/
// Range: 0x1DD900 -> 0x1DD90C
static void update_tag_reset_height(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD900 -> 0x1DD90C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD910 -> 0x001DD91C
*/
// Range: 0x1DD910 -> 0x1DD91C
static void update_tag_height(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD910 -> 0x1DD91C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD920 -> 0x001DD930
*/
// Range: 0x1DD920 -> 0x1DD930
static void reset_tag_width(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD920 -> 0x1DD930
        class callback cb; // @ 0x004F8848
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DD930 -> 0x001DDA5C
*/
// Range: 0x1DD930 -> 0x1DDA5C
static void parse_tag_width(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DD930 -> 0x1DDA5C
        float & v; // r16
        class callback cb; // @ 0x004F8838
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDA60 -> 0x001DDA6C
*/
// Range: 0x1DDA60 -> 0x1DDA6C
static void update_tag_reset_width(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDA60 -> 0x1DDA6C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDA70 -> 0x001DDA7C
*/
// Range: 0x1DDA70 -> 0x1DDA7C
static void update_tag_width(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDA70 -> 0x1DDA7C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDA80 -> 0x001DDA90
*/
// Range: 0x1DDA80 -> 0x1DDA90
static void reset_tag_blue(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDA80 -> 0x1DDA90
        class callback cb; // @ 0x004F8828
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDA90 -> 0x001DDC2C
*/
// Range: 0x1DDA90 -> 0x1DDC2C
static void parse_tag_blue(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDA90 -> 0x1DDC2C
        float & v; // r16
        class callback cb; // @ 0x004F8818
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDC30 -> 0x001DDC3C
*/
// Range: 0x1DDC30 -> 0x1DDC3C
static void update_tag_reset_blue(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDC30 -> 0x1DDC3C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDC40 -> 0x001DDCA8
*/
// Range: 0x1DDC40 -> 0x1DDCA8
static void update_tag_blue(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDC40 -> 0x1DDCA8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDCB0 -> 0x001DDCC0
*/
// Range: 0x1DDCB0 -> 0x1DDCC0
static void reset_tag_green(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDCB0 -> 0x1DDCC0
        class callback cb; // @ 0x004F8808
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDCC0 -> 0x001DDE5C
*/
// Range: 0x1DDCC0 -> 0x1DDE5C
static void parse_tag_green(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDCC0 -> 0x1DDE5C
        float & v; // r16
        class callback cb; // @ 0x004F87F8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDE60 -> 0x001DDE6C
*/
// Range: 0x1DDE60 -> 0x1DDE6C
static void update_tag_reset_green(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDE60 -> 0x1DDE6C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDE70 -> 0x001DDED8
*/
// Range: 0x1DDE70 -> 0x1DDED8
static void update_tag_green(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDE70 -> 0x1DDED8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDEE0 -> 0x001DDEF0
*/
// Range: 0x1DDEE0 -> 0x1DDEF0
static void reset_tag_red(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDEE0 -> 0x1DDEF0
        class callback cb; // @ 0x004F87E8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DDEF0 -> 0x001DE08C
*/
// Range: 0x1DDEF0 -> 0x1DE08C
static void parse_tag_red(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DDEF0 -> 0x1DE08C
        float & v; // r16
        class callback cb; // @ 0x004F87D8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE090 -> 0x001DE09C
*/
// Range: 0x1DE090 -> 0x1DE09C
static void update_tag_reset_red(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE090 -> 0x1DE09C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE0A0 -> 0x001DE108
*/
// Range: 0x1DE0A0 -> 0x1DE108
static void update_tag_red(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE0A0 -> 0x1DE108
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE110 -> 0x001DE120
*/
// Range: 0x1DE110 -> 0x1DE120
static void reset_tag_alpha(class jot & a /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE110 -> 0x1DE120
        class callback cb; // @ 0x004F87C8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE120 -> 0x001DE2BC
*/
// Range: 0x1DE120 -> 0x1DE2BC
static void parse_tag_alpha(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE120 -> 0x1DE2BC
        float & v; // r16
        class callback cb; // @ 0x004F87B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE2C0 -> 0x001DE2CC
*/
// Range: 0x1DE2C0 -> 0x1DE2CC
static void update_tag_reset_alpha(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE2C0 -> 0x1DE2CC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE2D0 -> 0x001DE338
*/
// Range: 0x1DE2D0 -> 0x1DE338
static void update_tag_alpha(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE2D0 -> 0x1DE338
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE340 -> 0x001DE54C
*/
// Range: 0x1DE340 -> 0x1DE54C
unsigned char changed(class layout * this /* r22 */, class xtextbox & ctb /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE340 -> 0x1DE54C
        unsigned int flags1; // r5
        unsigned int flags2; // r4
        signed int i; // r20
        class jot & j; // r19
        unsigned int oldval; // r18
        unsigned int val; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE550 -> 0x001DE690
*/
// Range: 0x1DE550 -> 0x1DE690
float yextent(class layout * this /* r2 */, float max /* r29 */, signed int & size /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE550 -> 0x1DE690
        signed int begin_line; // r11
        float top; // r2
        signed int i; // r10
        class jot_line & line; // r9
        class jot_line & line; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DE690 -> 0x001DEB98
*/
// Range: 0x1DE690 -> 0x1DEB98
void render(class layout * this /* r21 */, class xtextbox & ctb /* r20 */, signed int begin_jot /* r19 */, signed int end_jot /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DE690 -> 0x1DEB98
        signed int begin_line; // r17
        signed int i; // r16
        class jot & j; // r2
        float top; // r22
        unsigned int li; // r3
        signed int line_last; // r23
        float x; // r21
        float y; // r20
        signed int i; // r2
        class jot_line & line; // r4
        unsigned int xj; // r3
        class jot & j; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DEBA0 -> 0x001DF1B0
*/
// Range: 0x1DEBA0 -> 0x1DF1B0
void calc(class layout * this /* r21 */, class xtextbox & ctb /* r30 */, unsigned int start_text /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DEBA0 -> 0x1DF1B0
        class jot_line & first_line; // r2
        class /* @class */ {
            // total size: 0x8
        public:
            char * s; // offset 0x0, size 0x4
            char * end; // offset 0x4, size 0x4
        } text_stack[16]; // r29+0xB0
        unsigned int text_stack_size; // r20
        unsigned int text_index; // r2
        char * s; // r19
        char * end; // r18
        class jot & a; // r17
        class jot_line & line; // r16
        class jot_line & last_line; // r5
        unsigned int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF1B0 -> 0x001DF324
*/
// Range: 0x1DF1B0 -> 0x1DF324
unsigned char fit_line(class layout * this /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF1B0 -> 0x1DF324
        class jot_line & line; // r16
        signed int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF330 -> 0x001DF454
*/
// Range: 0x1DF330 -> 0x1DF454
void bound_line(class layout * this /* r2 */, class jot_line & line /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF330 -> 0x1DF454
        unsigned int i; // r8
        class jot & a; // r6
        unsigned int i; // r8
        class jot & a; // r6
        float total_height; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF460 -> 0x001DF72C
*/
// Range: 0x1DF460 -> 0x1DF72C
void merge_line(class layout * this /* r2 */, class jot_line & line /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF460 -> 0x1DF72C
        unsigned int d; // r10
        unsigned int i; // r9
        class jot & a1; // r8
        class jot & a2; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF730 -> 0x001DF9B0
*/
// Range: 0x1DF730 -> 0x1DF9B0
void trim_line(class layout * this /* r2 */, class jot_line & line /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF730 -> 0x1DF9B0
        signed int i; // r3
        class jot & a; // r2
        unsigned int i; // r3
        class jot & a; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DF9B0 -> 0x001DFB04
*/
// Range: 0x1DF9B0 -> 0x1DFB04
void clear(class layout * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DF9B0 -> 0x1DFB04
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFCD0 -> 0x001DFDCC
*/
// Range: 0x1DFCD0 -> 0x1DFDCC
void refresh_end(class layout * this /* r2 */, class xtextbox & tb /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFCD0 -> 0x1DFDCC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFDD0 -> 0x001DFEF4
*/
// Range: 0x1DFDD0 -> 0x1DFEF4
void refresh(class layout * this /* r17 */, class xtextbox & tb /* r16 */, unsigned char force /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFDD0 -> 0x1DFEF4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFF00 -> 0x001DFF54
*/
// Range: 0x1DFF00 -> 0x1DFF54
void clear_layout_cache() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFF00 -> 0x1DFF54
        unsigned int index; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DFF60 -> 0x001DFFF4
*/
// Range: 0x1DFF60 -> 0x1DFFF4
unsigned int read_list(class tag_entry & e /* r17 */, signed int * v /* r2 */, unsigned int vsize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1DFF60 -> 0x1DFFF4
        unsigned int total; // r16
        unsigned int i; // r20
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0000 -> 0x001E0094
*/
// Range: 0x1E0000 -> 0x1E0094
unsigned int read_list(class tag_entry & e /* r17 */, float * v /* r2 */, unsigned int vsize /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0000 -> 0x1E0094
        unsigned int total; // r16
        unsigned int i; // r20
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E00A0 -> 0x001E0140
*/
// Range: 0x1E00A0 -> 0x1E0140
class tag_entry * find_entry(class tag_entry_list & el /* r18 */, class substr & name /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E00A0 -> 0x1E0140
        unsigned int i; // r16
        class tag_entry & e; // r20
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0140 -> 0x001E05DC
*/
// Range: 0x1E0140 -> 0x1E05DC
class tag_entry_list read_tag(class substr & s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0140 -> 0x1E05DC
        unsigned int entries_used; // r20
        class substr it; // r29+0x88
        class substr delims; // r29+0x80
        class substr sub_delims; // r29+0x78
        class tag_entry & entry; // r19
        char * d; // r2
        class substr & arg; // r18
        char * d; // r2
        class tag_entry_list ret; // r29+0x70
        class substr arg_buffer[32]; // @ 0x00561180
        class tag_entry entry_buffer[16]; // @ 0x00561280
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E05E0 -> 0x001E05F0
*/
// Range: 0x1E05E0 -> 0x1E05F0
float yextent(float max /* r29 */, signed int & size /* r2 */, class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E05E0 -> 0x1E05F0
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E05F0 -> 0x001E0600
*/
// Range: 0x1E05F0 -> 0x1E0600
void render(class xtextbox * this /* r2 */, class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E05F0 -> 0x1E0600
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0600 -> 0x001E0958
*/
// Range: 0x1E0600 -> 0x1E0958
class layout & temp_layout(class xtextbox * this /* r20 */, unsigned char cache /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0600 -> 0x1E0958
        signed long cur_time; // r18
        unsigned char refresh; // r17
        unsigned int index; // r16
        signed int min_used; // r6
        unsigned int i; // r5
        signed int used; // r4
        class tl_cache_entry & e; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0960 -> 0x001E0A68
*/
// Range: 0x1E0960 -> 0x1E0A68
void set_text(class xtextbox * this /* r20 */, char * * texts /* r2 */, unsigned int * text_sizes /* r2 */, unsigned int size /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0960 -> 0x1E0A68
        unsigned int i; // r17
        unsigned int i; // r18
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0A70 -> 0x001E0A7C
*/
// Range: 0x1E0A70 -> 0x1E0A7C
void set_text(class xtextbox * this /* r2 */, char * * texts /* r2 */, unsigned int size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0A70 -> 0x1E0A7C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0A80 -> 0x001E0AC4
*/
// Range: 0x1E0A80 -> 0x1E0AC4
void set_text(class xtextbox * this /* r2 */, char * text /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0A80 -> 0x1E0AC4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0AD0 -> 0x001E0AE4
*/
// Range: 0x1E0AD0 -> 0x1E0AE4
void text_render(class jot & j /* r2 */, class xtextbox & tb /* r2 */, float x /* r29 */, float y /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0AD0 -> 0x1E0AE4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0AF0 -> 0x001E0C08
*/
// Range: 0x1E0AF0 -> 0x1E0C08
static void start_layout() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0AF0 -> 0x1E0C08
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E0C10 -> 0x001E1174
*/
// Range: 0x1E0C10 -> 0x1E1174
static void load_model_args(class model_args & ma /* r16 */, class substr & s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E0C10 -> 0x1E1174
        class tag_entry_list el; // r29+0xE8
        class tag_entry * e; // r21
        class substr & name; // r2
        unsigned int id; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1180 -> 0x001E1B1C
*/
// Range: 0x1E1180 -> 0x1E1B1C
static void load_tex_args(class tex_args & ta /* r16 */, class substr & s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E1180 -> 0x1E1B1C
        class tag_entry_list el; // r29+0x170
        class tag_entry * e; // r21
        class substr & name; // r17
        unsigned int id; // r2
        class RwTexture * texture; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1B20 -> 0x001E1D38
*/
// Range: 0x1E1B20 -> 0x1E1D38
static char * parse_next_text_jot(class jot & a /* r2 */, class xtextbox & tb /* r2 */, char * text /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E1B20 -> 0x1E1D38
        char c; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1D40 -> 0x001E1F4C
*/
// Range: 0x1E1D40 -> 0x1E1F4C
static char * parse_next_tag_jot(class jot & a /* r21 */, class xtextbox & tb /* r20 */, class xtextbox & ctb /* r19 */, char * text /* r18 */, unsigned int text_size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E1D40 -> 0x1E1F4C
        class split_tag ti; // r29+0x70
        unsigned int size; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E1F50 -> 0x001E233C
*/
// Range: 0x1E1F50 -> 0x1E233C
static unsigned int parse_split_tag(class split_tag & ti /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E1F50 -> 0x1E233C
        class substr s; // r29+0x38
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2340 -> 0x001E2600
*/
// Range: 0x1E2340 -> 0x1E2600
void irender(class xfont * this /* r17 */, char * text /* r23 */, unsigned int text_size /* r30 */, float x /* r21 */, float y /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2340 -> 0x1E2600
        class font_data & fd; // r16
        class basic_rect bounds; // r29+0xC0
        unsigned int i; // r21
        unsigned int charIndex; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2600 -> 0x001E2608
*/
// Range: 0x1E2600 -> 0x1E2608
void irender(class xfont * this /* r2 */, char * text /* r2 */, float x /* r29 */, float y /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2600 -> 0x1E2608
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2610 -> 0x001E26D4
*/
// Range: 0x1E2610 -> 0x1E26D4
void stop_render() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2610 -> 0x1E26D4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E26E0 -> 0x001E2748
*/
// Range: 0x1E26E0 -> 0x1E2748
void start_render(class xfont * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E26E0 -> 0x1E2748
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2750 -> 0x001E28B8
*/
// Range: 0x1E2750 -> 0x1E28B8
class basic_rect bounds(class xfont * this /* r2 */, char * text /* r2 */, unsigned int text_size /* r2 */, float max_width /* r29+0x10 */, unsigned int & size /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2750 -> 0x1E28B8
        class font_data & fd; // r13
        class basic_rect r; // r29
        char * s; // r12
        unsigned int i; // r10
        unsigned int charIndex; // r2
        float dx; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E28C0 -> 0x001E28EC
*/
// Range: 0x1E28C0 -> 0x1E28EC
class basic_rect bounds(class xfont * this /* r2 */, char * text /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E28C0 -> 0x1E28EC
        unsigned int size; // r29+0x1C
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E28F0 -> 0x001E2994
*/
// Range: 0x1E28F0 -> 0x1E2994
void restore_render_state() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E28F0 -> 0x1E2994
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E29A0 -> 0x001E2ABC
*/
// Range: 0x1E29A0 -> 0x1E2ABC
void set_render_state(class RwRaster * raster /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E29A0 -> 0x1E2ABC
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2AC0 -> 0x001E2B84
*/
// Range: 0x1E2AC0 -> 0x1E2B84
void init() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2AC0 -> 0x1E2B84
        unsigned int i; // r17
        class font_data & fd; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2B90 -> 0x001E2CD0
*/
// Range: 0x1E2B90 -> 0x1E2CD0
static class xModelInstance * load_model(unsigned int id /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2B90 -> 0x1E2CD0
        unsigned int oldest; // r17
        unsigned int i; // r6
        class RpAtomic * mf; // r16
        class model_cache_entry & e; // r3
        class xModelInstance & model; // r17
        unsigned int next_order; // @ 0x0050F9B8
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2CD0 -> 0x001E2E84
*/
// Range: 0x1E2CD0 -> 0x1E2E84
static void init_model_cache() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2CD0 -> 0x1E2E84
        void * data; // r2
        class model_pool & pool; // r16
        class xModelInstance & model; // r3
        class model_cache_entry & e; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E2E90 -> 0x001E35A0
*/
// Range: 0x1E2E90 -> 0x1E35A0
static void tex_render(class basic_rect & src /* r2 */, class basic_rect & dst /* r2 */, class basic_rect & clip /* r2 */, class iColor_tag color /* r29+0x6C */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E2E90 -> 0x1E35A0
        class basic_rect r; // r29+0x80
        class basic_rect rt; // r29+0x70
        class RwSky2DVertex * vert; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E35A0 -> 0x001E3CD8
*/
// Range: 0x1E35A0 -> 0x1E3CD8
static unsigned char init_font_data(class font_data & fd /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E35A0 -> 0x1E3CD8
        class font_asset & a; // r16
        signed int height; // r2
        unsigned char i; // r22
        unsigned char c; // r7
        unsigned int tail_index; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E3CE0 -> 0x001E3FB0
*/
// Range: 0x1E3CE0 -> 0x1E3FB0
static unsigned char reset_font_spacing(class font_asset & a /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E3CE0 -> 0x1E3FB0
        class RwTexture * tex; // r16
        class basic_rect char_bounds; // r29+0x1C0
        unsigned char baseline_count[256]; // r29+0xC0
        signed int width; // r20
        class RwImage * image; // r19
        class iColor_tag * bits; // r23
        signed int i; // r18
        class basic_rect r; // r29+0xB0
        signed int baseline; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001E3FB0 -> 0x001E412C
*/
// Range: 0x1E3FB0 -> 0x1E412C
static class basic_rect find_bounds(class iColor_tag * bits /* r2 */, class basic_rect & r /* r2 */, signed int pitch /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1E3FB0 -> 0x1E412C
        signed int diff; // r8
        class iColor_tag * endp; // r3
        class iColor_tag * p; // r2
        signed int pmode; // r25
        signed int minx; // r24
        signed int maxx; // r15
        signed int miny; // r14
        signed int maxy; // r13
        signed int y; // r12
        class iColor_tag * endline; // r11
        signed int x; // r10
        class basic_rect b; // r29
    }
}

