



f32 range_limit(f32 v, f32 minv, f32 maxv);
f32 xabs(f32 v);
u16 range_limit(u16 v, u16 minv, u16 maxv);
f32 xSCurve(f32 t, f32 softness);
f32 xrmod(f32 ang);
u32 range_limit(u32 v, u32 minv, u32 maxv);
s32 range_limit(s32 v, s32 minv, s32 maxv);

// range_limit<f>__Ffff_f
// Start address: 0x1c4ee0
f32 range_limit(f32 v, f32 minv, f32 maxv)
{
}

// xabs__Ff
// Start address: 0x1c57e0
f32 xabs(f32 v)
{
}

// range_limit<Us>__FUsUsUs_Us
// Start address: 0x201080
u16 range_limit(u16 v, u16 minv, u16 maxv)
{
}

// xSCurve__Fff
// Start address: 0x2a81b0
f32 xSCurve(f32 t, f32 softness)
{
	f32 T2;
}

// xrmod__Ff
// Start address: 0x2ab4f0
f32 xrmod(f32 ang)
{
	f32 frac;
}

// range_limit<Ui>__FUiUiUi_Ui
// Start address: 0x33b130
u32 range_limit(u32 v, u32 minv, u32 maxv)
{
}

// range_limit<i>__Fiii_i
// Start address: 0x33b160
s32 range_limit(s32 v, s32 minv, s32 maxv)
{
}

