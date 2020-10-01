



float32 range_limit(float32 v, float32 minv, float32 maxv);
float32 xabs(float32 v);
uint16 range_limit(uint16 v, uint16 minv, uint16 maxv);
float32 xSCurve(float32 t, float32 softness);
float32 xrmod(float32 ang);
uint32 range_limit(uint32 v, uint32 minv, uint32 maxv);
int32 range_limit(int32 v, int32 minv, int32 maxv);

// range_limit<f>__Ffff_f
// Start address: 0x1c4ee0
float32 range_limit(float32 v, float32 minv, float32 maxv)
{
}

// xabs__Ff
// Start address: 0x1c57e0
float32 xabs(float32 v)
{
}

// range_limit<Us>__FUsUsUs_Us
// Start address: 0x201080
uint16 range_limit(uint16 v, uint16 minv, uint16 maxv)
{
}

// xSCurve__Fff
// Start address: 0x2a81b0
float32 xSCurve(float32 t, float32 softness)
{
	float32 T2;
}

// xrmod__Ff
// Start address: 0x2ab4f0
float32 xrmod(float32 ang)
{
	float32 frac;
}

// range_limit<Ui>__FUiUiUi_Ui
// Start address: 0x33b130
uint32 range_limit(uint32 v, uint32 minv, uint32 maxv)
{
}

// range_limit<i>__Fiii_i
// Start address: 0x33b160
int32 range_limit(int32 v, int32 minv, int32 maxv)
{
}

