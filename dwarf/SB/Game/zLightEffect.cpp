typedef struct iLight;
typedef struct xLinkAsset;
typedef struct RwObjectHasFrame;
typedef struct RpLight;
typedef struct _zLight;
typedef struct _xFColor;
typedef struct xVec3;
typedef struct xBase;
typedef struct zLightAsset;
typedef struct xSphere;
typedef struct xBaseAsset;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef float32 type_2[4];
typedef uint8 type_4[2];

struct iLight
{
	uint32 type;
	RpLight* hw;
	xSphere sph;
	float32 radius_sq;
	_xFColor color;
	xVec3 dir;
	float32 coneangle;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct _zLight : xBase
{
	uint32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int32 true_idx;
	float32* reg;
	int32 effect_idx;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct zLightAsset : xBaseAsset
{
	uint8 lightType;
	uint8 lightEffect;
	uint8 lightPad[2];
	uint32 lightFlags;
	float32 lightColor[4];
	xVec3 lightDir;
	float32 lightConeAngle;
	xSphere lightSphere;
	uint32 attachID;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};


void zLightEffectCauldron(_zLight* zlight, float32 seconds);
void zLightEffectInitCauldron(_zLight* zlight);
void zLightEffectRandomColFast();
void zLightEffectRandomCol();
void zLightEffectRandomColSlow();
void zLightEffectHalfDimFast();
void zLightEffectHalfDim();
void zLightEffectHalfDimSlow();
void zLightEffectDimFast();
void zLightEffectDim();
void zLightEffectDimSlow();
void zLightEffectStrobeFast();
void zLightEffectStrobe();
void zLightEffectStrobeSlow();
void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds);
void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds);
void zLightEffectFlicker(_zLight* zlight, float32 seconds);
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd);
void zLightEffectInitFlicker(_zLight* zlight);
void zLightEffectInitRandomCol();
void zLightEffectInitHalfDim();
void zLightEffectInitDim();
void zLightEffectInitStrobe();

// zLightEffectCauldron__FP7_zLightf
// Start address: 0x180e10
void zLightEffectCauldron(_zLight* zlight, float32 seconds)
{
	iLight* l;
	float32* reg;
	float32 amount;
	// Line 415, Address: 0x180e10, Func Offset: 0
	// Line 422, Address: 0x180e18, Func Offset: 0x8
	// Line 415, Address: 0x180e1c, Func Offset: 0xc
	// Line 416, Address: 0x180e24, Func Offset: 0x14
	// Line 415, Address: 0x180e28, Func Offset: 0x18
	// Line 417, Address: 0x180e2c, Func Offset: 0x1c
	// Line 421, Address: 0x180e34, Func Offset: 0x24
	// Line 422, Address: 0x180e3c, Func Offset: 0x2c
	// Line 425, Address: 0x180e48, Func Offset: 0x38
	// Line 427, Address: 0x180e4c, Func Offset: 0x3c
	// Line 428, Address: 0x180ea8, Func Offset: 0x98
	// Line 429, Address: 0x180f14, Func Offset: 0x104
	// Line 434, Address: 0x180f70, Func Offset: 0x160
	// Line 435, Address: 0x180f74, Func Offset: 0x164
	// Line 434, Address: 0x180f7c, Func Offset: 0x16c
	// Line 435, Address: 0x180f84, Func Offset: 0x174
	// Line 436, Address: 0x180fcc, Func Offset: 0x1bc
	// Line 437, Address: 0x18101c, Func Offset: 0x20c
	// Line 440, Address: 0x181068, Func Offset: 0x258
	// Line 437, Address: 0x18106c, Func Offset: 0x25c
	// Line 440, Address: 0x181070, Func Offset: 0x260
	// Line 441, Address: 0x181078, Func Offset: 0x268
	// Func End, Address: 0x181090, Func Offset: 0x280
}

// zLightEffectInitCauldron__FP7_zLight
// Start address: 0x181090
void zLightEffectInitCauldron(_zLight* zlight)
{
	// Line 379, Address: 0x181090, Func Offset: 0
	// Line 380, Address: 0x181094, Func Offset: 0x4
	// Func End, Address: 0x1810a0, Func Offset: 0x10
}

// zLightEffectRandomColFast__FP7_zLightf
// Start address: 0x1810a0
void zLightEffectRandomColFast()
{
	// Line 358, Address: 0x1810a0, Func Offset: 0
	// Func End, Address: 0x1810a8, Func Offset: 0x8
}

// zLightEffectRandomCol__FP7_zLightf
// Start address: 0x1810b0
void zLightEffectRandomCol()
{
	// Line 344, Address: 0x1810b0, Func Offset: 0
	// Func End, Address: 0x1810b8, Func Offset: 0x8
}

// zLightEffectRandomColSlow__FP7_zLightf
// Start address: 0x1810c0
void zLightEffectRandomColSlow()
{
	// Line 330, Address: 0x1810c0, Func Offset: 0
	// Func End, Address: 0x1810c8, Func Offset: 0x8
}

// zLightEffectHalfDimFast__FP7_zLightf
// Start address: 0x1810d0
void zLightEffectHalfDimFast()
{
	// Line 316, Address: 0x1810d0, Func Offset: 0
	// Func End, Address: 0x1810d8, Func Offset: 0x8
}

// zLightEffectHalfDim__FP7_zLightf
// Start address: 0x1810e0
void zLightEffectHalfDim()
{
	// Line 302, Address: 0x1810e0, Func Offset: 0
	// Func End, Address: 0x1810e8, Func Offset: 0x8
}

// zLightEffectHalfDimSlow__FP7_zLightf
// Start address: 0x1810f0
void zLightEffectHalfDimSlow()
{
	// Line 288, Address: 0x1810f0, Func Offset: 0
	// Func End, Address: 0x1810f8, Func Offset: 0x8
}

// zLightEffectDimFast__FP7_zLightf
// Start address: 0x181100
void zLightEffectDimFast()
{
	// Line 274, Address: 0x181100, Func Offset: 0
	// Func End, Address: 0x181108, Func Offset: 0x8
}

// zLightEffectDim__FP7_zLightf
// Start address: 0x181110
void zLightEffectDim()
{
	// Line 260, Address: 0x181110, Func Offset: 0
	// Func End, Address: 0x181118, Func Offset: 0x8
}

// zLightEffectDimSlow__FP7_zLightf
// Start address: 0x181120
void zLightEffectDimSlow()
{
	// Line 246, Address: 0x181120, Func Offset: 0
	// Func End, Address: 0x181128, Func Offset: 0x8
}

// zLightEffectStrobeFast__FP7_zLightf
// Start address: 0x181130
void zLightEffectStrobeFast()
{
	// Line 232, Address: 0x181130, Func Offset: 0
	// Func End, Address: 0x181138, Func Offset: 0x8
}

// zLightEffectStrobe__FP7_zLightf
// Start address: 0x181140
void zLightEffectStrobe()
{
	// Line 218, Address: 0x181140, Func Offset: 0
	// Func End, Address: 0x181148, Func Offset: 0x8
}

// zLightEffectStrobeSlow__FP7_zLightf
// Start address: 0x181150
void zLightEffectStrobeSlow()
{
	// Line 204, Address: 0x181150, Func Offset: 0
	// Func End, Address: 0x181158, Func Offset: 0x8
}

// zLightEffectFlickerErratic__FP7_zLightf
// Start address: 0x181160
void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds)
{
	// Line 188, Address: 0x181160, Func Offset: 0
	// Func End, Address: 0x18117c, Func Offset: 0x1c
}

// zLightEffectFlickerSlow__FP7_zLightf
// Start address: 0x181180
void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds)
{
	// Line 183, Address: 0x181180, Func Offset: 0
	// Func End, Address: 0x1811a4, Func Offset: 0x24
}

// zLightEffectFlicker__FP7_zLightf
// Start address: 0x1811b0
void zLightEffectFlicker(_zLight* zlight, float32 seconds)
{
	// Line 178, Address: 0x1811b0, Func Offset: 0
	// Func End, Address: 0x1811d4, Func Offset: 0x24
}

// EffectFlicker__FP7_zLightfff
// Start address: 0x1811e0
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd)
{
	iLight* l;
	float32* reg;
	// Line 150, Address: 0x1811e0, Func Offset: 0
	// Line 156, Address: 0x1811e8, Func Offset: 0x8
	// Line 150, Address: 0x1811ec, Func Offset: 0xc
	// Line 151, Address: 0x1811fc, Func Offset: 0x1c
	// Line 150, Address: 0x181200, Func Offset: 0x20
	// Line 152, Address: 0x181208, Func Offset: 0x28
	// Line 155, Address: 0x181214, Func Offset: 0x34
	// Line 156, Address: 0x18121c, Func Offset: 0x3c
	// Line 159, Address: 0x181228, Func Offset: 0x48
	// Line 160, Address: 0x181278, Func Offset: 0x98
	// Line 159, Address: 0x18127c, Func Offset: 0x9c
	// Line 163, Address: 0x181280, Func Offset: 0xa0
	// Line 164, Address: 0x1812f8, Func Offset: 0x118
	// Line 165, Address: 0x181370, Func Offset: 0x190
	// Line 166, Address: 0x1813d8, Func Offset: 0x1f8
	// Line 165, Address: 0x1813e4, Func Offset: 0x204
	// Line 166, Address: 0x1813f8, Func Offset: 0x218
	// Line 167, Address: 0x181428, Func Offset: 0x248
	// Line 166, Address: 0x18142c, Func Offset: 0x24c
	// Line 167, Address: 0x181430, Func Offset: 0x250
	// Line 168, Address: 0x181468, Func Offset: 0x288
	// Line 167, Address: 0x18146c, Func Offset: 0x28c
	// Line 168, Address: 0x181470, Func Offset: 0x290
	// Line 171, Address: 0x1814a8, Func Offset: 0x2c8
	// Line 172, Address: 0x1814b4, Func Offset: 0x2d4
	// Line 173, Address: 0x1814b8, Func Offset: 0x2d8
	// Func End, Address: 0x1814d8, Func Offset: 0x2f8
}

// zLightEffectInitFlicker__FP7_zLight
// Start address: 0x1814e0
void zLightEffectInitFlicker(_zLight* zlight)
{
	// Line 127, Address: 0x1814e0, Func Offset: 0
	// Line 128, Address: 0x1814e4, Func Offset: 0x4
	// Func End, Address: 0x1814f0, Func Offset: 0x10
}

// zLightEffectInitRandomCol__FP7_zLight
// Start address: 0x1814f0
void zLightEffectInitRandomCol()
{
	// Line 111, Address: 0x1814f0, Func Offset: 0
	// Func End, Address: 0x1814f8, Func Offset: 0x8
}

// zLightEffectInitHalfDim__FP7_zLight
// Start address: 0x181500
void zLightEffectInitHalfDim()
{
	// Line 98, Address: 0x181500, Func Offset: 0
	// Func End, Address: 0x181508, Func Offset: 0x8
}

// zLightEffectInitDim__FP7_zLight
// Start address: 0x181510
void zLightEffectInitDim()
{
	// Line 85, Address: 0x181510, Func Offset: 0
	// Func End, Address: 0x181518, Func Offset: 0x8
}

// zLightEffectInitStrobe__FP7_zLight
// Start address: 0x181520
void zLightEffectInitStrobe()
{
	// Line 72, Address: 0x181520, Func Offset: 0
	// Func End, Address: 0x181528, Func Offset: 0x8
}

