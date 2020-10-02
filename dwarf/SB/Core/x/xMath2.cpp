typedef struct xVec2;
typedef struct basic_rect;
typedef struct _xMat3x2;



struct xVec2
{
	float32 x;
	float32 y;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct _xMat3x2
{
	xVec2 right;
	xVec2 up;
	xVec2 pos;
};

xVec2 g_O2;
xVec2 g_X2;
xVec2 g_Y2;
_xMat3x2 g_I2;
basic_rect m_Null;
basic_rect m_Unit;


