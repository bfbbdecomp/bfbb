.include "macros.inc"
.file "iTime.cpp"

# 0x800D4924 - 0x800D4A14
.text
.balign 4

# iTimeInit()
.fn iTimeInit__Fv, global
/* 800D4924 000D1A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D4928 000D1A08  7C 08 02 A6 */	mflr r0
/* 800D492C 000D1A0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D4930 000D1A10  48 10 2C 1D */	bl OSGetTime
/* 800D4934 000D1A14  90 8D 93 44 */	stw r4, sStartupTime+0x4@sda21(r13)
/* 800D4938 000D1A18  90 6D 93 40 */	stw r3, sStartupTime@sda21(r13)
/* 800D493C 000D1A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D4940 000D1A20  7C 08 03 A6 */	mtlr r0
/* 800D4944 000D1A24  38 21 00 10 */	addi r1, r1, 0x10
/* 800D4948 000D1A28  4E 80 00 20 */	blr
.endfn iTimeInit__Fv

# iTimeExit()
.fn iTimeExit__Fv, global
/* 800D494C 000D1A2C  4E 80 00 20 */	blr
.endfn iTimeExit__Fv

# iTimeGet()
.fn iTimeGet__Fv, global
/* 800D4950 000D1A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D4954 000D1A34  7C 08 02 A6 */	mflr r0
/* 800D4958 000D1A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D495C 000D1A3C  48 10 2B F1 */	bl OSGetTime
/* 800D4960 000D1A40  80 AD 93 44 */	lwz r5, sStartupTime+0x4@sda21(r13)
/* 800D4964 000D1A44  80 0D 93 40 */	lwz r0, sStartupTime@sda21(r13)
/* 800D4968 000D1A48  7C 85 20 10 */	subfc r4, r5, r4
/* 800D496C 000D1A4C  7C 60 19 10 */	subfe r3, r0, r3
/* 800D4970 000D1A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D4974 000D1A54  7C 08 03 A6 */	mtlr r0
/* 800D4978 000D1A58  38 21 00 10 */	addi r1, r1, 0x10
/* 800D497C 000D1A5C  4E 80 00 20 */	blr
.endfn iTimeGet__Fv

# iTimeDiffSec(long long)
.fn iTimeDiffSec__Fx, global
/* 800D4980 000D1A60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D4984 000D1A64  7C 08 02 A6 */	mflr r0
/* 800D4988 000D1A68  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D498C 000D1A6C  48 11 90 61 */	bl __cvt_sll_flt
/* 800D4990 000D1A70  3C 60 80 00 */	lis r3, 0x8000
/* 800D4994 000D1A74  3C 00 43 30 */	lis r0, 0x4330
/* 800D4998 000D1A78  80 63 00 F8 */	lwz r3, 0xf8(r3)
/* 800D499C 000D1A7C  90 01 00 08 */	stw r0, 0x8(r1)
/* 800D49A0 000D1A80  54 60 F0 BE */	srwi r0, r3, 2
/* 800D49A4 000D1A84  C8 42 98 58 */	lfd f2, "@424"@sda21(r2)
/* 800D49A8 000D1A88  90 01 00 0C */	stw r0, 0xc(r1)
/* 800D49AC 000D1A8C  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 800D49B0 000D1A90  EC 00 10 28 */	fsubs f0, f0, f2
/* 800D49B4 000D1A94  EC 21 00 24 */	fdivs f1, f1, f0
/* 800D49B8 000D1A98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D49BC 000D1A9C  7C 08 03 A6 */	mtlr r0
/* 800D49C0 000D1AA0  38 21 00 10 */	addi r1, r1, 0x10
/* 800D49C4 000D1AA4  4E 80 00 20 */	blr
.endfn iTimeDiffSec__Fx

# iTimeDiffSec(long long, long long)
.fn iTimeDiffSec__Fxx, global
/* 800D49C8 000D1AA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D49CC 000D1AAC  7C 08 02 A6 */	mflr r0
/* 800D49D0 000D1AB0  7C 84 30 10 */	subfc r4, r4, r6
/* 800D49D4 000D1AB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D49D8 000D1AB8  7C 63 29 10 */	subfe r3, r3, r5
/* 800D49DC 000D1ABC  4B FF FF A5 */	bl iTimeDiffSec__Fx
/* 800D49E0 000D1AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D49E4 000D1AC4  7C 08 03 A6 */	mtlr r0
/* 800D49E8 000D1AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 800D49EC 000D1ACC  4E 80 00 20 */	blr
.endfn iTimeDiffSec__Fxx

# iTimeGameAdvance(float)
.fn iTimeGameAdvance__Ff, global
/* 800D49F0 000D1AD0  C0 0D 93 48 */	lfs f0, sGameTime@sda21(r13)
/* 800D49F4 000D1AD4  EC 00 08 2A */	fadds f0, f0, f1
/* 800D49F8 000D1AD8  D0 0D 93 48 */	stfs f0, sGameTime@sda21(r13)
/* 800D49FC 000D1ADC  4E 80 00 20 */	blr
.endfn iTimeGameAdvance__Ff

# iTimeSetGame(float)
.fn iTimeSetGame__Ff, global
/* 800D4A00 000D1AE0  D0 2D 93 48 */	stfs f1, sGameTime@sda21(r13)
/* 800D4A04 000D1AE4  4E 80 00 20 */	blr
.endfn iTimeSetGame__Ff

# iProfileClear(unsigned int)
.fn iProfileClear__FUi, global
/* 800D4A08 000D1AE8  4E 80 00 20 */	blr
.endfn iProfileClear__FUi

# iFuncProfileDump()
.fn iFuncProfileDump__Fv, global
/* 800D4A0C 000D1AEC  4E 80 00 20 */	blr
.endfn iFuncProfileDump__Fv

# iFuncProfileParse(char*, int)
.fn iFuncProfileParse__FPci, global
/* 800D4A10 000D1AF0  4E 80 00 20 */	blr
.endfn iFuncProfileParse__FPci

# 0x803CBC40 - 0x803CBC50
.section .sbss, "wa", @nobits
.balign 8

.obj sStartupTime, global
	.skip 0x8
.endobj sStartupTime

.obj sGameTime, local
	.skip 0x4
.endobj sGameTime
	.skip 0x4

# 0x803CE1D8 - 0x803CE1E0
.section .sdata2, "a"
.balign 8

.obj "@424", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@424"
