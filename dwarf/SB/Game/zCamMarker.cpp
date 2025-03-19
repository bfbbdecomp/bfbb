/*
    Compile unit: C:\SB\Game\zCamMarker.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int zCamMarkerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x310910
class xCamAsset : public xBaseAsset {
    // total size: 0x88
public:
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    class xVec3 up; // offset 0x20, size 0xC
    class xVec3 right; // offset 0x2C, size 0xC
    class xVec3 view_offset; // offset 0x38, size 0xC
    signed short offset_start_frames; // offset 0x44, size 0x2
    signed short offset_end_frames; // offset 0x46, size 0x2
    float fov; // offset 0x48, size 0x4
    float trans_time; // offset 0x4C, size 0x4
    enum _tagTransType trans_type; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    float fade_up; // offset 0x58, size 0x4
    float fade_down; // offset 0x5C, size 0x4
    union { // inferred
        class _tagxCamFollowAsset cam_follow; // offset 0x60, size 0x18
        class _tagxCamShoulderAsset cam_shoulder; // offset 0x60, size 0x10
        class _tagp2CamStaticAsset cam_static; // offset 0x60, size 0x4
        class _tagxCamPathAsset cam_path; // offset 0x60, size 0xC
        class _tagp2CamStaticFollowAsset cam_staticFollow; // offset 0x60, size 0x4
    };
    unsigned int valid_flags; // offset 0x78, size 0x4
    unsigned int markerid[2]; // offset 0x7C, size 0x8
    unsigned char cam_type; // offset 0x84, size 0x1
    unsigned char pad[3]; // offset 0x85, size 0x3
};
class zCamMarker : public xBase {
    // total size: 0x14
public:
    class xCamAsset * asset; // offset 0x10, size 0x4
};
class xSerial {
    // total size: 0x0
};
class _tagxCamFollowAsset {
    // total size: 0x18
public:
    float rotation; // offset 0x0, size 0x4
    float distance; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float rubber_band; // offset 0xC, size 0x4
    float start_speed; // offset 0x10, size 0x4
    float end_speed; // offset 0x14, size 0x4
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
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class _tagxCamShoulderAsset {
    // total size: 0x10
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float realign_speed; // offset 0x8, size 0x4
    float realign_delay; // offset 0xC, size 0x4
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
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class _tagp2CamStaticAsset {
    // total size: 0x4
public:
    unsigned int unused; // offset 0x0, size 0x4
};
class _tagp2CamStaticFollowAsset {
    // total size: 0x4
public:
    float rubber_band; // offset 0x0, size 0x4
};
enum _tagTransType {
    eTransType_None = 0,
    eTransType_Interp1 = 1,
    eTransType_Interp2 = 2,
    eTransType_Interp3 = 3,
    eTransType_Interp4 = 4,
    eTransType_Linear = 5,
    eTransType_Interp1Rev = 6,
    eTransType_Interp2Rev = 7,
    eTransType_Interp3Rev = 8,
    eTransType_Interp4Rev = 9,
    eTransType_Total = 10,
};
class _tagxCamPathAsset {
    // total size: 0xC
public:
    unsigned int assetID; // offset 0x0, size 0x4
    float time_end; // offset 0x4, size 0x4
    float time_delay; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\SB\Game\zCamMarker.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310910 -> 0x00310988
*/
// Range: 0x310910 -> 0x310988
signed int zCamMarkerEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310910 -> 0x310988
    }
}

/*
    Compile unit: C:\SB\Game\zCamMarker.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00310990 -> 0x00310998
*/
// Range: 0x310990 -> 0x310998
void zCamMarkerLoad(class zCamMarker * m /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x310990 -> 0x310998
    }
}

/*
    Compile unit: C:\SB\Game\zCamMarker.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003109A0 -> 0x003109A8
*/
// Range: 0x3109A0 -> 0x3109A8
void zCamMarkerSave(class zCamMarker * m /* r2 */, class xSerial * s /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3109A0 -> 0x3109A8
    }
}

/*
    Compile unit: C:\SB\Game\zCamMarker.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003109B0 -> 0x00310A04
*/
// Range: 0x3109B0 -> 0x310A04
void zCamMarkerInit(class xBase * b /* r17 */, class xCamAsset * asset /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x3109B0 -> 0x310A04
    }
}

