typedef struct xVec3;



struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

xVec3 m_Null;
xVec3 m_Ones;
xVec3 m_NegOnes;
xVec3 m_UnitAxisX;
xVec3 m_UnitAxisY;
xVec3 m_UnitAxisZ;
xVec3 m_HalfVec;
xVec3 m_NegHalfVec;
xVec3 m_DoubleVec;
xVec3 m_NegDoubleVec;

float32 xVec3NormalizeFast(xVec3* o, xVec3* v);
float32 xVec3Normalize(xVec3* o, xVec3* v);

// xVec3NormalizeFast__FP5xVec3PC5xVec3
// Start address: 0x2106b0
float32 xVec3NormalizeFast(xVec3* o, xVec3* v)
{
	float32 len;
	float32 len2;
	float32 len_inv;
}

// xVec3Normalize__FP5xVec3PC5xVec3
// Start address: 0x210790
float32 xVec3Normalize(xVec3* o, xVec3* v)
{
	float32 len;
	float32 len2;
	float32 len_inv;
}

