typedef enum _SDRenderState;


typedef int8 type_0[16];
typedef int8 type_1[16];

enum _SDRenderState
{
	SDRS_Unknown,
	SDRS_Default,
	SDRS_OpaqueModels,
	SDRS_AlphaModels,
	SDRS_Bubble,
	SDRS_Projectile,
	SDRS_Font,
	SDRS_HUD,
	SDRS_Particles,
	SDRS_Lightning,
	SDRS_Streak,
	SDRS_SkyBack,
	SDRS_Environment,
	SDRS_Fill,
	SDRS_NPCVisual,
	SDRS_OOBFade,
	SDRS_OOBPlayerZ,
	SDRS_OOBPlayerAlpha,
	SDRS_OOBHand,
	SDRS_Glare,
	SDRS_Newsfish,
	SDRS_CruiseHUD,
	SDRS_DiscoFloorGlow,
	SDRS_Total = 0xffffffff
};

int8 buffer[16];
int8 buffer[16];
_SDRenderState sRS;

void zRenderState(_SDRenderState next);
_SDRenderState zRenderStateCurrent();
void zRenderStateInit();

// zRenderState__F14_SDRenderState
// Start address: 0x191820
void zRenderState(_SDRenderState next)
{
	// Line 45, Address: 0x191820, Func Offset: 0
	// Line 46, Address: 0x19182c, Func Offset: 0xc
	// Line 54, Address: 0x19183c, Func Offset: 0x1c
	// Line 57, Address: 0x191848, Func Offset: 0x28
	// Line 60, Address: 0x191850, Func Offset: 0x30
	// Line 63, Address: 0x19185c, Func Offset: 0x3c
	// Line 64, Address: 0x191868, Func Offset: 0x48
	// Line 67, Address: 0x191874, Func Offset: 0x54
	// Line 68, Address: 0x191880, Func Offset: 0x60
	// Line 71, Address: 0x19188c, Func Offset: 0x6c
	// Line 74, Address: 0x191898, Func Offset: 0x78
	// Line 75, Address: 0x1918a4, Func Offset: 0x84
	// Line 80, Address: 0x1918b0, Func Offset: 0x90
	// Line 81, Address: 0x1918b4, Func Offset: 0x94
	// Line 91, Address: 0x1918dc, Func Offset: 0xbc
	// Line 93, Address: 0x1918e0, Func Offset: 0xc0
	// Line 96, Address: 0x1918ec, Func Offset: 0xcc
	// Line 99, Address: 0x1918f8, Func Offset: 0xd8
	// Line 100, Address: 0x191904, Func Offset: 0xe4
	// Line 102, Address: 0x19190c, Func Offset: 0xec
	// Line 105, Address: 0x191910, Func Offset: 0xf0
	// Line 107, Address: 0x19191c, Func Offset: 0xfc
	// Line 109, Address: 0x191924, Func Offset: 0x104
	// Line 112, Address: 0x191928, Func Offset: 0x108
	// Line 120, Address: 0x191934, Func Offset: 0x114
	// Line 122, Address: 0x191940, Func Offset: 0x120
	// Line 126, Address: 0x191948, Func Offset: 0x128
	// Line 129, Address: 0x191954, Func Offset: 0x134
	// Line 130, Address: 0x191960, Func Offset: 0x140
	// Line 134, Address: 0x191968, Func Offset: 0x148
	// Line 136, Address: 0x191974, Func Offset: 0x154
	// Line 138, Address: 0x19197c, Func Offset: 0x15c
	// Line 140, Address: 0x191980, Func Offset: 0x160
	// Line 142, Address: 0x19198c, Func Offset: 0x16c
	// Line 144, Address: 0x191994, Func Offset: 0x174
	// Line 146, Address: 0x191998, Func Offset: 0x178
	// Line 150, Address: 0x1919a4, Func Offset: 0x184
	// Line 154, Address: 0x1919b0, Func Offset: 0x190
	// Line 157, Address: 0x1919bc, Func Offset: 0x19c
	// Line 159, Address: 0x1919c8, Func Offset: 0x1a8
	// Line 163, Address: 0x1919d0, Func Offset: 0x1b0
	// Line 164, Address: 0x1919dc, Func Offset: 0x1bc
	// Line 167, Address: 0x1919e8, Func Offset: 0x1c8
	// Line 170, Address: 0x1919f4, Func Offset: 0x1d4
	// Line 173, Address: 0x191a00, Func Offset: 0x1e0
	// Line 174, Address: 0x191a0c, Func Offset: 0x1ec
	// Line 175, Address: 0x191a18, Func Offset: 0x1f8
	// Line 179, Address: 0x191a20, Func Offset: 0x200
	// Line 181, Address: 0x191a2c, Func Offset: 0x20c
	// Line 183, Address: 0x191a34, Func Offset: 0x214
	// Line 185, Address: 0x191a38, Func Offset: 0x218
	// Line 188, Address: 0x191a44, Func Offset: 0x224
	// Line 192, Address: 0x191a50, Func Offset: 0x230
	// Line 193, Address: 0x191a5c, Func Offset: 0x23c
	// Line 198, Address: 0x191a64, Func Offset: 0x244
	// Line 200, Address: 0x191a68, Func Offset: 0x248
	// Line 201, Address: 0x191a74, Func Offset: 0x254
	// Line 204, Address: 0x191a80, Func Offset: 0x260
	// Line 206, Address: 0x191a8c, Func Offset: 0x26c
	// Line 208, Address: 0x191a94, Func Offset: 0x274
	// Line 209, Address: 0x191a98, Func Offset: 0x278
	// Line 210, Address: 0x191aa4, Func Offset: 0x284
	// Line 211, Address: 0x191ab0, Func Offset: 0x290
	// Line 212, Address: 0x191abc, Func Offset: 0x29c
	// Line 213, Address: 0x191ac8, Func Offset: 0x2a8
	// Line 214, Address: 0x191ad4, Func Offset: 0x2b4
	// Line 215, Address: 0x191ae0, Func Offset: 0x2c0
	// Line 216, Address: 0x191aec, Func Offset: 0x2cc
	// Line 218, Address: 0x191af4, Func Offset: 0x2d4
	// Line 219, Address: 0x191af8, Func Offset: 0x2d8
	// Line 220, Address: 0x191b04, Func Offset: 0x2e4
	// Line 221, Address: 0x191b10, Func Offset: 0x2f0
	// Line 222, Address: 0x191b1c, Func Offset: 0x2fc
	// Line 224, Address: 0x191b24, Func Offset: 0x304
	// Line 225, Address: 0x191b28, Func Offset: 0x308
	// Line 226, Address: 0x191b34, Func Offset: 0x314
	// Line 227, Address: 0x191b40, Func Offset: 0x320
	// Line 228, Address: 0x191b4c, Func Offset: 0x32c
	// Line 229, Address: 0x191b58, Func Offset: 0x338
	// Line 232, Address: 0x191b60, Func Offset: 0x340
	// Line 233, Address: 0x191b6c, Func Offset: 0x34c
	// Line 234, Address: 0x191b78, Func Offset: 0x358
	// Line 237, Address: 0x191b80, Func Offset: 0x360
	// Line 238, Address: 0x191b8c, Func Offset: 0x36c
	// Line 239, Address: 0x191b98, Func Offset: 0x378
	// Line 240, Address: 0x191ba4, Func Offset: 0x384
	// Line 241, Address: 0x191bb0, Func Offset: 0x390
	// Line 242, Address: 0x191bbc, Func Offset: 0x39c
	// Line 243, Address: 0x191bc8, Func Offset: 0x3a8
	// Line 246, Address: 0x191bd0, Func Offset: 0x3b0
	// Line 247, Address: 0x191bdc, Func Offset: 0x3bc
	// Line 248, Address: 0x191be8, Func Offset: 0x3c8
	// Line 249, Address: 0x191bf4, Func Offset: 0x3d4
	// Line 250, Address: 0x191c00, Func Offset: 0x3e0
	// Line 251, Address: 0x191c0c, Func Offset: 0x3ec
	// Line 253, Address: 0x191c14, Func Offset: 0x3f4
	// Line 254, Address: 0x191c18, Func Offset: 0x3f8
	// Line 255, Address: 0x191c24, Func Offset: 0x404
	// Line 256, Address: 0x191c30, Func Offset: 0x410
	// Line 257, Address: 0x191c3c, Func Offset: 0x41c
	// Line 259, Address: 0x191c44, Func Offset: 0x424
	// Line 260, Address: 0x191c48, Func Offset: 0x428
	// Line 261, Address: 0x191c54, Func Offset: 0x434
	// Line 262, Address: 0x191c60, Func Offset: 0x440
	// Line 269, Address: 0x191c6c, Func Offset: 0x44c
	// Line 270, Address: 0x191c70, Func Offset: 0x450
	// Func End, Address: 0x191c80, Func Offset: 0x460
}

// zRenderStateCurrent__Fv
// Start address: 0x191c80
_SDRenderState zRenderStateCurrent()
{
	// Line 38, Address: 0x191c80, Func Offset: 0
	// Func End, Address: 0x191c88, Func Offset: 0x8
}

// zRenderStateInit__Fv
// Start address: 0x191c90
void zRenderStateInit()
{
	// Line 32, Address: 0x191c90, Func Offset: 0
	// Func End, Address: 0x191c98, Func Offset: 0x8
}

