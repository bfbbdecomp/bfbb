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
	type_2 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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
	type_3 eventFunc;
};

struct zLightAsset : xBaseAsset
{
	uint8 lightType;
	uint8 lightEffect;
	type_4 lightPad;
	uint32 lightFlags;
	type_0 lightColor;
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
void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds)
{
}

// zLightEffectFlickerSlow__FP7_zLightf
// Start address: 0x181180
void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds)
{
}

// zLightEffectFlicker__FP7_zLightf
// Start address: 0x1811b0
void zLightEffectFlicker(_zLight* zlight, float32 seconds)
{
}

// EffectFlicker__FP7_zLightfff
// Start address: 0x1811e0
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd)
{
	iLight* l;
	float32* reg;
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

