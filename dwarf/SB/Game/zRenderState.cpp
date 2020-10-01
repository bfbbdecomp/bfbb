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

type_0 buffer;
type_1 buffer;
_SDRenderState sRS;

void zRenderState(_SDRenderState next);
_SDRenderState zRenderStateCurrent();
void zRenderStateInit();

// zRenderState__F14_SDRenderState
// Start address: 0x191820
void zRenderState(_SDRenderState next)
{
}

// zRenderStateCurrent__Fv
// Start address: 0x191c80
_SDRenderState zRenderStateCurrent()
{
}

// zRenderStateInit__Fv
// Start address: 0x191c90
void zRenderStateInit()
{
}

