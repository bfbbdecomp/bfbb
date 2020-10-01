typedef struct xVec3;



struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
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

f32 xVec3NormalizeFast(xVec3* o, xVec3* v);
f32 xVec3Normalize(xVec3* o, xVec3* v);

// xVec3NormalizeFast__FP5xVec3PC5xVec3
// Start address: 0x2106b0
f32 xVec3NormalizeFast(xVec3* o, xVec3* v)
{
	f32 len;
	f32 len2;
	f32 len_inv;
}

// xVec3Normalize__FP5xVec3PC5xVec3
// Start address: 0x210790
f32 xVec3Normalize(xVec3* o, xVec3* v)
{
	f32 len;
	f32 len2;
	f32 len_inv;
}

