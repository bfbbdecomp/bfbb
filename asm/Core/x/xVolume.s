.include "macros.inc"
.file "xVolume.cpp"

# 0x80118934 - 0x80118A04
.text
.balign 4

# xVolume::Init(xVolumeAsset*)
.fn Init__7xVolumeFP12xVolumeAsset, global
/* 80118934 00115A14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80118938 00115A18  7C 08 02 A6 */	mflr r0
/* 8011893C 00115A1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80118940 00115A20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80118944 00115A24  7C 9F 23 78 */	mr r31, r4
/* 80118948 00115A28  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011894C 00115A2C  7C 7E 1B 78 */	mr r30, r3
/* 80118950 00115A30  4B EF 0A B1 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80118954 00115A34  93 FE 00 10 */	stw r31, 0x10(r30)
/* 80118958 00115A38  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8011895C 00115A3C  28 00 00 00 */	cmplwi r0, 0x0
/* 80118960 00115A40  41 82 00 14 */	beq .L_80118974
/* 80118964 00115A44  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80118968 00115A48  38 03 00 64 */	addi r0, r3, 0x64
/* 8011896C 00115A4C  90 1E 00 08 */	stw r0, 0x8(r30)
/* 80118970 00115A50  48 00 00 0C */	b .L_8011897C
.L_80118974:
/* 80118974 00115A54  38 00 00 00 */	li r0, 0x0
/* 80118978 00115A58  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8011897C:
/* 8011897C 00115A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80118980 00115A60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80118984 00115A64  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80118988 00115A68  7C 08 03 A6 */	mtlr r0
/* 8011898C 00115A6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80118990 00115A70  4E 80 00 20 */	blr
.endfn Init__7xVolumeFP12xVolumeAsset

# xVolume::Reset()
.fn Reset__7xVolumeFv, global
/* 80118994 00115A74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80118998 00115A78  7C 08 02 A6 */	mflr r0
/* 8011899C 00115A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801189A0 00115A80  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801189A4 00115A84  4B EF 0B 55 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 801189A8 00115A88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801189AC 00115A8C  7C 08 03 A6 */	mtlr r0
/* 801189B0 00115A90  38 21 00 10 */	addi r1, r1, 0x10
/* 801189B4 00115A94  4E 80 00 20 */	blr
.endfn Reset__7xVolumeFv

# xVolume::Save(xSerial*)
.fn Save__7xVolumeFP7xSerial, global
/* 801189B8 00115A98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801189BC 00115A9C  7C 08 02 A6 */	mflr r0
/* 801189C0 00115AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801189C4 00115AA4  4B EF 0A 89 */	bl xBaseSave__FP5xBaseP7xSerial
/* 801189C8 00115AA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801189CC 00115AAC  7C 08 03 A6 */	mtlr r0
/* 801189D0 00115AB0  38 21 00 10 */	addi r1, r1, 0x10
/* 801189D4 00115AB4  4E 80 00 20 */	blr
.endfn Save__7xVolumeFP7xSerial

# xVolume::Load(xSerial*)
.fn Load__7xVolumeFP7xSerial, global
/* 801189D8 00115AB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801189DC 00115ABC  7C 08 02 A6 */	mflr r0
/* 801189E0 00115AC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801189E4 00115AC4  4B EF 0A B9 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 801189E8 00115AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801189EC 00115ACC  7C 08 03 A6 */	mtlr r0
/* 801189F0 00115AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 801189F4 00115AD4  4E 80 00 20 */	blr
.endfn Load__7xVolumeFP7xSerial

# xVolume::GetBound()
.fn GetBound__7xVolumeFv, global
/* 801189F8 00115AD8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801189FC 00115ADC  38 63 00 0C */	addi r3, r3, 0xc
/* 80118A00 00115AE0  4E 80 00 20 */	blr
.endfn GetBound__7xVolumeFv
