/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class xCmdInfo sCmdInfo[35]; // size: 0x1A4, address: 0x598190
float cosSinPolynomial[]; // size: 0x0, address: 0x416DE0
void xParCmd_DampenSpeed_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F49B0
void xParCmd_SizeInOut_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4850
void xParCmd_AlphaInOut_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4670
void xParCmd_Shaper_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4370
void xParCmdCollideFallSticky_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4A20
void xParCmdCollideFall_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4AC0
void xParCmdScale_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5670
void xParCmdSmokeAlpha_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5680
void xParCmdRotateAround_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4F90
void xParCmdRotPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F51B0
void xParCmdApplyWind_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F53B0
void xParCmdAlpha3rdPolyReg_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5660
void xParCmdAge_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5BB0
void xParCmdRandomVelocityPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5410
void xParCmdTexAnim_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4B40
void xParCmdTex_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F4F80
void xParCmdScale3rdPolyReg_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5690
void xParCmdMoveRandomPar_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F56A0
void xParCmdOrbitLine_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5910
void xParCmdOrbitPoint_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5A20
void xParCmdFollow_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5AF0
void xParCmdKillSlow_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5BF0
void xParCmdVelocityApply_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5150
void xParCmdAccelerate_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F58B0
void xParCmdMoveRandom_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5750
void xParCmdMove_Update(class xParCmd *, class xParGroup *, float); // size: 0x0, address: 0x1F5850
class xParCmd {
    // total size: 0x8
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
};
class xPar {
    // total size: 0x60
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
class xParGroup {
    // total size: 0x24
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
class xCmdInfo {
    // total size: 0xC
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    void (* func)(class xParCmd *, class xParGroup *, float); // offset 0x8, size 0x4
};
class xParCmdMove : public xParCmdAsset {
    // total size: 0x14
public:
    class xVec3 dir; // offset 0x8, size 0xC
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class xParCmdSizeInOutData : public xParCmdAsset {
    // total size: 0x18
public:
    float custSize[4]; // offset 0x8, size 0x10
};
class xParCmdCollideFallSticky : public xParCmdCollideFall {
    // total size: 0x14
public:
    float sticky; // offset 0x10, size 0x4
};
class xParCmdTex : public xParCmdAsset {
    // total size: 0x24
public:
    float x1; // offset 0x8, size 0x4
    float y1; // offset 0xC, size 0x4
    float x2; // offset 0x10, size 0x4
    float y2; // offset 0x14, size 0x4
    unsigned char birthMode; // offset 0x18, size 0x1
    unsigned char rows; // offset 0x19, size 0x1
    unsigned char cols; // offset 0x1A, size 0x1
    unsigned char unit_count; // offset 0x1B, size 0x1
    float unit_width; // offset 0x1C, size 0x4
    float unit_height; // offset 0x20, size 0x4
};
class xParCmdAsset {
    // total size: 0x8
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
class xParCmdFollow : public xParCmdAsset {
    // total size: 0x10
public:
    float gravity; // offset 0x8, size 0x4
    float epsilon; // offset 0xC, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
class xParCmdKillSlow : public xParCmdAsset {
    // total size: 0x10
public:
    float speedLimitSqr; // offset 0x8, size 0x4
    unsigned int kill_less_than; // offset 0xC, size 0x4
};
class xParCmdDampenData : public xParCmdAsset {
    // total size: 0xC
public:
    float dampSpeed; // offset 0x8, size 0x4
};
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xParCmdRandomVelocityPar : public xParCmdAsset {
    // total size: 0x14
public:
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float z; // offset 0x10, size 0x4
};
class xParCmdOrbitLine : public xParCmdAsset {
    // total size: 0x2C
public:
    class xVec3 p; // offset 0x8, size 0xC
    class xVec3 axis; // offset 0x14, size 0xC
    float gravity; // offset 0x20, size 0x4
    float epsilon; // offset 0x24, size 0x4
    float maxRadiusSqr; // offset 0x28, size 0x4
};
class xParEmitterAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
class xPEEntBound {
    // total size: 0xC
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class xParCmdAlphaInOutData : public xParCmdAsset {
    // total size: 0x18
public:
    float custAlpha[4]; // offset 0x8, size 0x10
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
class xParCmdAccelerate : public xParCmdAsset {
    // total size: 0x14
public:
    class xVec3 acc; // offset 0x8, size 0xC
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
class xParCmdRotPar : public xParCmdAsset {
    // total size: 0x20
public:
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
class xParCmdOrbitPoint : public xParCmdAsset {
    // total size: 0x20
public:
    class xVec3 center; // offset 0x8, size 0xC
    float gravity; // offset 0x14, size 0x4
    float epsilon; // offset 0x18, size 0x4
    float maxRadiusSqr; // offset 0x1C, size 0x4
};
class xParCmdCollideFall : public xParCmdAsset {
    // total size: 0x10
public:
    float y; // offset 0x8, size 0x4
    float bounce; // offset 0xC, size 0x4
};
class xParCmdTexAnim : public xParCmdAsset {
    // total size: 0x18
public:
    unsigned char anim_mode; // offset 0x8, size 0x1
    unsigned char anim_wrap_mode; // offset 0x9, size 0x1
    unsigned char pad_anim; // offset 0xA, size 0x1
    unsigned char throttle_spd_less_than; // offset 0xB, size 0x1
    float throttle_spd_sqr; // offset 0xC, size 0x4
    float throttle_time; // offset 0x10, size 0x4
    float throttle_time_elapsed; // offset 0x14, size 0x4
};
class xParCmdShaperData : public xParCmdAsset {
    // total size: 0x30
public:
    float custAlpha[4]; // offset 0x8, size 0x10
    float custSize[4]; // offset 0x18, size 0x10
    float dampSpeed; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
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
class xParCmdMoveRandomPar : public xParCmdAsset {
    // total size: 0x14
public:
    class xVec3 dim; // offset 0x8, size 0xC
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class xParCmdRotateAround : public xParCmdAsset {
    // total size: 0x20
public:
    class xVec3 pos; // offset 0x8, size 0xC
    float unused1; // offset 0x14, size 0x4
    float radius_growth; // offset 0x18, size 0x4
    float yaw; // offset 0x1C, size 0x4
};
class xPEEntBone {
    // total size: 0x18
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
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
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4370 -> 0x001F4670
*/
// Range: 0x1F4370 -> 0x1F4670
void xParCmd_Shaper_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4370 -> 0x1F4670
        class xPar * p; // r5
        class xParCmdShaperData * cmd; // r6
        float damp; // r1
        float grav; // r29+0x20
        signed int doalpha; // r4
        signed int dosize; // r3
        signed int i; // r9
        signed int seg; // r10
        float slope_alfa[3]; // r29+0x10
        float slope_size[3]; // r29
        float frac; // r11
        float alfa; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4670 -> 0x001F4848
*/
// Range: 0x1F4670 -> 0x1F4848
void xParCmd_AlphaInOut_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4670 -> 0x1F4848
        class xPar * p; // r8
        class xParCmdAlphaInOutData * cmd; // r7
        signed int i; // r6
        signed int seg; // r5
        float slope_alfa[3]; // r29
        float frac; // r8
        float alfa; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4850 -> 0x001F49B0
*/
// Range: 0x1F4850 -> 0x1F49B0
void xParCmd_SizeInOut_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4850 -> 0x1F49B0
        class xPar * p; // r7
        class xParCmdSizeInOutData * cmd; // r6
        signed int i; // r5
        signed int seg; // r4
        float slope_size[3]; // r29
        float frac; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F49B0 -> 0x001F4A20
*/
// Range: 0x1F49B0 -> 0x1F4A20
void xParCmd_DampenSpeed_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F49B0 -> 0x1F4A20
        class xPar * p; // r3
        class xParCmdDampenData * cmd; // r4
        float damp; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4A20 -> 0x001F4AC0
*/
// Range: 0x1F4A20 -> 0x1F4AC0
void xParCmdCollideFallSticky_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4A20 -> 0x1F4AC0
        class xParCmdCollideFallSticky & cmd; // r6
        float xzdamp; // r4
        class xPar * p; // r5
        float & loc; // r4
        float & vel; // r3
        float dloc; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4AC0 -> 0x001F4B38
*/
// Range: 0x1F4AC0 -> 0x1F4B38
void xParCmdCollideFall_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4AC0 -> 0x1F4B38
        class xParCmdCollideFall & cmd; // r6
        class xPar * p; // r5
        float & loc; // r4
        float & vel; // r3
        float dloc; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4B40 -> 0x001F4F74
*/
// Range: 0x1F4B40 -> 0x1F4F74
void xParCmdTexAnim_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4B40 -> 0x1F4F74
        class xPar * p; // r17
        class xParCmdTexAnim * cmd; // r6
        class xParCmdTex * tex; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4F80 -> 0x001F4F88
*/
// Range: 0x1F4F80 -> 0x1F4F88
void xParCmdTex_Update() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4F80 -> 0x1F4F88
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4F90 -> 0x001F5144
*/
// Range: 0x1F4F90 -> 0x1F5144
void xParCmdRotateAround_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x130 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F4F90 -> 0x1F5144
        class xPar * p; // r21
        class xParCmdRotateAround * cmd; // r20
        float yaw; // r22
        float radius_growth; // r21
        class xVec3 at; // r29+0x120
        class xMat3x3 lookmat; // r29+0xE0
        float radius; // r20
        class xVec3 angles; // r29+0x110
        class xMat3x3 rotmat; // r29+0xB0
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5150 -> 0x001F51A8
*/
// Range: 0x1F5150 -> 0x1F51A8
void xParCmdVelocityApply_Update(class xParGroup * ps /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5150 -> 0x1F51A8
        class xPar * p; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F51B0 -> 0x001F53A4
*/
// Range: 0x1F51B0 -> 0x1F53A4
void xParCmdRotPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r26 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F51B0 -> 0x1F53A4
        class xPar * p; // r16
        class xParCmdRotPar * cmd; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F53B0 -> 0x001F5410
*/
// Range: 0x1F53B0 -> 0x1F5410
void xParCmdApplyWind_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F53B0 -> 0x1F5410
        class xPar * p; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5410 -> 0x001F5654
*/
// Range: 0x1F5410 -> 0x1F5654
void xParCmdRandomVelocityPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r16 */, float dt /* r29+0x50 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5410 -> 0x1F5654
        class xPar * p; // r7
        class xParCmdRandomVelocityPar * cmd; // r3
        class xVec3 rot; // r29+0x40
        class xVec3 * velvec; // r6
        unsigned int uvelx; // r5
        unsigned int uvely; // r4
        unsigned int uvelz; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5660 -> 0x001F5668
*/
// Range: 0x1F5660 -> 0x1F5668
void xParCmdAlpha3rdPolyReg_Update() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5660 -> 0x1F5668
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5670 -> 0x001F5678
*/
// Range: 0x1F5670 -> 0x1F5678
void xParCmdScale_Update() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5670 -> 0x1F5678
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5680 -> 0x001F5688
*/
// Range: 0x1F5680 -> 0x1F5688
void xParCmdSmokeAlpha_Update() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5680 -> 0x1F5688
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5690 -> 0x001F5698
*/
// Range: 0x1F5690 -> 0x1F5698
void xParCmdScale3rdPolyReg_Update() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5690 -> 0x1F5698
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F56A0 -> 0x001F5748
*/
// Range: 0x1F56A0 -> 0x1F5748
void xParCmdMoveRandomPar_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29+0x30 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F56A0 -> 0x1F5748
        class xPar * p; // r16
        class xParCmdMoveRandomPar * cmd; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5750 -> 0x001F584C
*/
// Range: 0x1F5750 -> 0x1F584C
void xParCmdMoveRandom_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r17 */, float dt /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5750 -> 0x1F584C
        class xPar * p; // r4
        class xParCmdMove * cmd; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5850 -> 0x001F58B0
*/
// Range: 0x1F5850 -> 0x1F58B0
void xParCmdMove_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5850 -> 0x1F58B0
        class xPar * p; // r4
        class xParCmdMove * cmd; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F58B0 -> 0x001F5910
*/
// Range: 0x1F58B0 -> 0x1F5910
void xParCmdAccelerate_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F58B0 -> 0x1F5910
        class xPar * p; // r4
        class xParCmdAccelerate * cmd; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5910 -> 0x001F5A20
*/
// Range: 0x1F5910 -> 0x1F5A20
void xParCmdOrbitLine_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5910 -> 0x1F5A20
        class xPar * p; // r4
        class xParCmdOrbitLine * cmd; // r3
        float mdt; // r29
        float force; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5A20 -> 0x001F5AE8
*/
// Range: 0x1F5A20 -> 0x1F5AE8
void xParCmdOrbitPoint_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5A20 -> 0x1F5AE8
        class xPar * p; // r4
        class xParCmdOrbitPoint * cmd; // r3
        float mdt; // r7
        float force; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5AF0 -> 0x001F5BB0
*/
// Range: 0x1F5AF0 -> 0x1F5BB0
void xParCmdFollow_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5AF0 -> 0x1F5BB0
        class xPar * p; // r5
        class xParCmdFollow * cmd; // r4
        float mdt; // r7
        float force; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5BB0 -> 0x001F5BE8
*/
// Range: 0x1F5BB0 -> 0x1F5BE8
void xParCmdAge_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5BB0 -> 0x1F5BE8
        class xPar * p; // r4
        float age_rate; // r1
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5BF0 -> 0x001F5CA0
*/
// Range: 0x1F5BF0 -> 0x1F5CA0
void xParCmdKillSlow_Update(class xParCmd * c /* r2 */, class xParGroup * ps /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5BF0 -> 0x1F5CA0
        class xPar * p; // r4
        class xParCmdKillSlow * cmd; // r3
        float speedLimit; // r3
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5CA0 -> 0x001F5D00
*/
// Range: 0x1F5CA0 -> 0x1F5D00
void (* xParCmdGetUpdateFunc(unsigned int parType /* r2 */))(class xParCmd *, class xParGroup *, float) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5CA0 -> 0x1F5D00
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5D00 -> 0x001F5D60
*/
// Range: 0x1F5D00 -> 0x1F5D60
unsigned int xParCmdGetSize(unsigned int parType /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5D00 -> 0x1F5D60
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5D60 -> 0x001F5DA0
*/
// Range: 0x1F5D60 -> 0x1F5DA0
void xParCmdRegister(unsigned int parType /* r2 */, unsigned int size /* r2 */, void (* func)(class xParCmd *, class xParGroup *, float) /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5D60 -> 0x1F5DA0
    }
}

/*
    Compile unit: C:\SB\Core\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F5DA0 -> 0x001F6174
*/
// Range: 0x1F5DA0 -> 0x1F6174
void xParCmdInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1F5DA0 -> 0x1F6174
    }
}

