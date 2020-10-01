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
typedef s32(*type_3)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];
typedef f32 type_2[4];
typedef u8 type_4[2];

struct iLight
{
	u32 type;
	RpLight* hw;
	xSphere sph;
	f32 radius_sq;
	_xFColor color;
	xVec3 dir;
	f32 coneangle;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_2 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct RpLight
{
	RwObjectHasFrame object;
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
};

struct _zLight : xBase
{
	u32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	s32 true_idx;
	f32* reg;
	s32 effect_idx;
};

struct _xFColor
{
	f32 r;
	f32 g;
	f32 b;
	f32 a;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_3 eventFunc;
};

struct zLightAsset : xBaseAsset
{
	u8 lightType;
	u8 lightEffect;
	type_4 lightPad;
	u32 lightFlags;
	type_0 lightColor;
	xVec3 lightDir;
	f32 lightConeAngle;
	xSphere lightSphere;
	u32 attachID;
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};


void zLightEffectCauldron(_zLight* zlight, f32 seconds);
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
void zLightEffectFlickerErratic(_zLight* zlight, f32 seconds);
void zLightEffectFlickerSlow(_zLight* zlight, f32 seconds);
void zLightEffectFlicker(_zLight* zlight, f32 seconds);
void EffectFlicker(_zLight* zlight, f32 seconds, f32 min, f32 rnd);
void zLightEffectInitFlicker(_zLight* zlight);
void zLightEffectInitRandomCol();
void zLightEffectInitHalfDim();
void zLightEffectInitDim();
void zLightEffectInitStrobe();

// zLightEffectCauldron__FP7_zLightf
// Start address: 0x180e10
void zLightEffectCauldron(_zLight* zlight, f32 seconds)
{
	iLight* l;
	f32* reg;
	f32 amount;
}

// zLightEffectInitCauldron__FP7_zLight
// Start address: 0x181090
void zLightEffectInitCauldron(_zLight* zlight)
{
}

// zLightEffectRandomColFast__FP7_zLightf
// Start address: 0x1810a0
void zLightEffectRandomColFast()
{
}

// zLightEffectRandomCol__FP7_zLightf
// Start address: 0x1810b0
void zLightEffectRandomCol()
{
}

// zLightEffectRandomColSlow__FP7_zLightf
// Start address: 0x1810c0
void zLightEffectRandomColSlow()
{
}

// zLightEffectHalfDimFast__FP7_zLightf
// Start address: 0x1810d0
void zLightEffectHalfDimFast()
{
}

// zLightEffectHalfDim__FP7_zLightf
// Start address: 0x1810e0
void zLightEffectHalfDim()
{
}

// zLightEffectHalfDimSlow__FP7_zLightf
// Start address: 0x1810f0
void zLightEffectHalfDimSlow()
{
}

// zLightEffectDimFast__FP7_zLightf
// Start address: 0x181100
void zLightEffectDimFast()
{
}

// zLightEffectDim__FP7_zLightf
// Start address: 0x181110
void zLightEffectDim()
{
}

// zLightEffectDimSlow__FP7_zLightf
// Start address: 0x181120
void zLightEffectDimSlow()
{
}

// zLightEffectStrobeFast__FP7_zLightf
// Start address: 0x181130
void zLightEffectStrobeFast()
{
}

// zLightEffectStrobe__FP7_zLightf
// Start address: 0x181140
void zLightEffectStrobe()
{
}

// zLightEffectStrobeSlow__FP7_zLightf
// Start address: 0x181150
void zLightEffectStrobeSlow()
{
}

// zLightEffectFlickerErratic__FP7_zLightf
// Start address: 0x181160
void zLightEffectFlickerErratic(_zLight* zlight, f32 seconds)
{
}

// zLightEffectFlickerSlow__FP7_zLightf
// Start address: 0x181180
void zLightEffectFlickerSlow(_zLight* zlight, f32 seconds)
{
}

// zLightEffectFlicker__FP7_zLightf
// Start address: 0x1811b0
void zLightEffectFlicker(_zLight* zlight, f32 seconds)
{
}

// EffectFlicker__FP7_zLightfff
// Start address: 0x1811e0
void EffectFlicker(_zLight* zlight, f32 seconds, f32 min, f32 rnd)
{
	iLight* l;
	f32* reg;
}

// zLightEffectInitFlicker__FP7_zLight
// Start address: 0x1814e0
void zLightEffectInitFlicker(_zLight* zlight)
{
}

// zLightEffectInitRandomCol__FP7_zLight
// Start address: 0x1814f0
void zLightEffectInitRandomCol()
{
}

// zLightEffectInitHalfDim__FP7_zLight
// Start address: 0x181500
void zLightEffectInitHalfDim()
{
}

// zLightEffectInitDim__FP7_zLight
// Start address: 0x181510
void zLightEffectInitDim()
{
}

// zLightEffectInitStrobe__FP7_zLight
// Start address: 0x181520
void zLightEffectInitStrobe()
{
}

