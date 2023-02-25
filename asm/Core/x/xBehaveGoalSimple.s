.include "macros.inc"
.file "xBehaveGoalSimple.cpp"

# 0x8010EB94 - 0x8010EE3C
.text
.balign 4

# xGoalSimple_RegisterTypes(xFactory*)
.fn xGoalSimple_RegisterTypes__FP8xFactory, global
/* 8010EB94 0010BC74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EB98 0010BC78  7C 08 02 A6 */	mflr r0
/* 8010EB9C 0010BC7C  3C A0 80 11 */	lis r5, GOALCreate_Generic__FiP10RyzMemGrowPv@ha
/* 8010EBA0 0010BC80  3C 80 80 11 */	lis r4, GOALDestroy_Generic__FP12xFactoryInst@ha
/* 8010EBA4 0010BC84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EBA8 0010BC88  3C E0 47 53 */	lis r7, 0x4753
/* 8010EBAC 0010BC8C  38 C4 EC A4 */	addi r6, r4, GOALDestroy_Generic__FP12xFactoryInst@l
/* 8010EBB0 0010BC90  38 A5 EB F8 */	addi r5, r5, GOALCreate_Generic__FiP10RyzMemGrowPv@l
/* 8010EBB4 0010BC94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010EBB8 0010BC98  7C 7F 1B 78 */	mr r31, r3
/* 8010EBBC 0010BC9C  38 87 4D 00 */	addi r4, r7, 0x4d00
/* 8010EBC0 0010BCA0  48 00 08 D9 */	bl RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
/* 8010EBC4 0010BCA4  3C 80 80 11 */	lis r4, GOALCreate_Generic__FiP10RyzMemGrowPv@ha
/* 8010EBC8 0010BCA8  3C 60 80 11 */	lis r3, GOALDestroy_Generic__FP12xFactoryInst@ha
/* 8010EBCC 0010BCAC  38 A4 EB F8 */	addi r5, r4, GOALCreate_Generic__FiP10RyzMemGrowPv@l
/* 8010EBD0 0010BCB0  3C 80 47 53 */	lis r4, 0x4753
/* 8010EBD4 0010BCB4  38 C3 EC A4 */	addi r6, r3, GOALDestroy_Generic__FP12xFactoryInst@l
/* 8010EBD8 0010BCB8  7F E3 FB 78 */	mr r3, r31
/* 8010EBDC 0010BCBC  38 84 4D 01 */	addi r4, r4, 0x4d01
/* 8010EBE0 0010BCC0  48 00 08 B9 */	bl RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
/* 8010EBE4 0010BCC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EBE8 0010BCC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010EBEC 0010BCCC  7C 08 03 A6 */	mtlr r0
/* 8010EBF0 0010BCD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EBF4 0010BCD4  4E 80 00 20 */	blr
.endfn xGoalSimple_RegisterTypes__FP8xFactory

# GOALCreate_Generic(int, RyzMemGrow*, void*)
.fn GOALCreate_Generic__FiP10RyzMemGrowPv, local
/* 8010EBF8 0010BCD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EBFC 0010BCDC  7C 08 02 A6 */	mflr r0
/* 8010EC00 0010BCE0  3C C0 47 53 */	lis r6, 0x4753
/* 8010EC04 0010BCE4  7C 85 23 78 */	mr r5, r4
/* 8010EC08 0010BCE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EC0C 0010BCEC  38 06 4D 01 */	addi r0, r6, 0x4d01
/* 8010EC10 0010BCF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010EC14 0010BCF4  7C 7F 1B 78 */	mr r31, r3
/* 8010EC18 0010BCF8  7C 1F 00 00 */	cmpw r31, r0
/* 8010EC1C 0010BCFC  38 60 00 00 */	li r3, 0x0
/* 8010EC20 0010BD00  41 82 00 40 */	beq .L_8010EC60
/* 8010EC24 0010BD04  40 80 00 60 */	bge .L_8010EC84
/* 8010EC28 0010BD08  38 06 4D 00 */	addi r0, r6, 0x4d00
/* 8010EC2C 0010BD0C  7C 1F 00 00 */	cmpw r31, r0
/* 8010EC30 0010BD10  40 80 00 08 */	bge .L_8010EC38
/* 8010EC34 0010BD14  48 00 00 50 */	b .L_8010EC84
.L_8010EC38:
/* 8010EC38 0010BD18  7F E4 FB 78 */	mr r4, r31
/* 8010EC3C 0010BD1C  38 60 00 54 */	li r3, 0x54
/* 8010EC40 0010BD20  48 00 05 11 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8010EC44 0010BD24  7C 60 1B 79 */	mr. r0, r3
/* 8010EC48 0010BD28  41 82 00 10 */	beq .L_8010EC58
/* 8010EC4C 0010BD2C  7F E4 FB 78 */	mr r4, r31
/* 8010EC50 0010BD30  48 00 02 29 */	bl __ct__12xGoalGenericFi
/* 8010EC54 0010BD34  7C 60 1B 78 */	mr r0, r3
.L_8010EC58:
/* 8010EC58 0010BD38  7C 03 03 78 */	mr r3, r0
/* 8010EC5C 0010BD3C  48 00 00 28 */	b .L_8010EC84
.L_8010EC60:
/* 8010EC60 0010BD40  7F E4 FB 78 */	mr r4, r31
/* 8010EC64 0010BD44  38 60 00 3C */	li r3, 0x3c
/* 8010EC68 0010BD48  48 00 04 E9 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8010EC6C 0010BD4C  7C 60 1B 79 */	mr. r0, r3
/* 8010EC70 0010BD50  41 82 00 10 */	beq .L_8010EC80
/* 8010EC74 0010BD54  7F E4 FB 78 */	mr r4, r31
/* 8010EC78 0010BD58  48 00 01 C5 */	bl __ct__10xGoalEmptyFi
/* 8010EC7C 0010BD5C  7C 60 1B 78 */	mr r0, r3
.L_8010EC80:
/* 8010EC80 0010BD60  7C 03 03 78 */	mr r3, r0
.L_8010EC84:
/* 8010EC84 0010BD64  28 03 00 00 */	cmplwi r3, 0x0
/* 8010EC88 0010BD68  41 82 00 08 */	beq .L_8010EC90
/* 8010EC8C 0010BD6C  38 63 00 0C */	addi r3, r3, 0xc
.L_8010EC90:
/* 8010EC90 0010BD70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EC94 0010BD74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010EC98 0010BD78  7C 08 03 A6 */	mtlr r0
/* 8010EC9C 0010BD7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8010ECA0 0010BD80  4E 80 00 20 */	blr
.endfn GOALCreate_Generic__FiP10RyzMemGrowPv

# GOALDestroy_Generic(xFactoryInst*)
.fn GOALDestroy_Generic__FP12xFactoryInst, local
/* 8010ECA4 0010BD84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010ECA8 0010BD88  7C 08 02 A6 */	mflr r0
/* 8010ECAC 0010BD8C  38 80 00 01 */	li r4, 0x1
/* 8010ECB0 0010BD90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010ECB4 0010BD94  4B FC A2 F1 */	bl __dt__12xFactoryInstFv
/* 8010ECB8 0010BD98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010ECBC 0010BD9C  7C 08 03 A6 */	mtlr r0
/* 8010ECC0 0010BDA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010ECC4 0010BDA4  4E 80 00 20 */	blr
.endfn GOALDestroy_Generic__FP12xFactoryInst

# xGoalGeneric::Enter(float, void*)
.fn Enter__12xGoalGenericFfPv, global
/* 8010ECC8 0010BDA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010ECCC 0010BDAC  7C 08 02 A6 */	mflr r0
/* 8010ECD0 0010BDB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010ECD4 0010BDB4  81 83 00 3C */	lwz r12, 0x3c(r3)
/* 8010ECD8 0010BDB8  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010ECDC 0010BDBC  41 82 00 18 */	beq .L_8010ECF4
/* 8010ECE0 0010BDC0  7C 85 23 78 */	mr r5, r4
/* 8010ECE4 0010BDC4  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8010ECE8 0010BDC8  7D 89 03 A6 */	mtctr r12
/* 8010ECEC 0010BDCC  4E 80 04 21 */	bctrl
/* 8010ECF0 0010BDD0  48 00 00 08 */	b .L_8010ECF8
.L_8010ECF4:
/* 8010ECF4 0010BDD4  4B FC 67 11 */	bl Enter__5xGoalFfPv
.L_8010ECF8:
/* 8010ECF8 0010BDD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010ECFC 0010BDDC  7C 08 03 A6 */	mtlr r0
/* 8010ED00 0010BDE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010ED04 0010BDE4  4E 80 00 20 */	blr
.endfn Enter__12xGoalGenericFfPv

# xGoalGeneric::Exit(float, void*)
.fn Exit__12xGoalGenericFfPv, global
/* 8010ED08 0010BDE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010ED0C 0010BDEC  7C 08 02 A6 */	mflr r0
/* 8010ED10 0010BDF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010ED14 0010BDF4  81 83 00 40 */	lwz r12, 0x40(r3)
/* 8010ED18 0010BDF8  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010ED1C 0010BDFC  41 82 00 18 */	beq .L_8010ED34
/* 8010ED20 0010BE00  7C 85 23 78 */	mr r5, r4
/* 8010ED24 0010BE04  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8010ED28 0010BE08  7D 89 03 A6 */	mtctr r12
/* 8010ED2C 0010BE0C  4E 80 04 21 */	bctrl
/* 8010ED30 0010BE10  48 00 00 08 */	b .L_8010ED38
.L_8010ED34:
/* 8010ED34 0010BE14  4B FC 66 E9 */	bl Exit__5xGoalFfPv
.L_8010ED38:
/* 8010ED38 0010BE18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010ED3C 0010BE1C  7C 08 03 A6 */	mtlr r0
/* 8010ED40 0010BE20  38 21 00 10 */	addi r1, r1, 0x10
/* 8010ED44 0010BE24  4E 80 00 20 */	blr
.endfn Exit__12xGoalGenericFfPv

# xGoalGeneric::Suspend(float, void*)
.fn Suspend__12xGoalGenericFfPv, global
/* 8010ED48 0010BE28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010ED4C 0010BE2C  7C 08 02 A6 */	mflr r0
/* 8010ED50 0010BE30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010ED54 0010BE34  81 83 00 44 */	lwz r12, 0x44(r3)
/* 8010ED58 0010BE38  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010ED5C 0010BE3C  41 82 00 18 */	beq .L_8010ED74
/* 8010ED60 0010BE40  7C 85 23 78 */	mr r5, r4
/* 8010ED64 0010BE44  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8010ED68 0010BE48  7D 89 03 A6 */	mtctr r12
/* 8010ED6C 0010BE4C  4E 80 04 21 */	bctrl
/* 8010ED70 0010BE50  48 00 00 08 */	b .L_8010ED78
.L_8010ED74:
/* 8010ED74 0010BE54  4B FC 66 B1 */	bl Suspend__5xGoalFfPv
.L_8010ED78:
/* 8010ED78 0010BE58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010ED7C 0010BE5C  7C 08 03 A6 */	mtlr r0
/* 8010ED80 0010BE60  38 21 00 10 */	addi r1, r1, 0x10
/* 8010ED84 0010BE64  4E 80 00 20 */	blr
.endfn Suspend__12xGoalGenericFfPv

# xGoalGeneric::Resume(float, void*)
.fn Resume__12xGoalGenericFfPv, global
/* 8010ED88 0010BE68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010ED8C 0010BE6C  7C 08 02 A6 */	mflr r0
/* 8010ED90 0010BE70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010ED94 0010BE74  81 83 00 48 */	lwz r12, 0x48(r3)
/* 8010ED98 0010BE78  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010ED9C 0010BE7C  41 82 00 18 */	beq .L_8010EDB4
/* 8010EDA0 0010BE80  7C 85 23 78 */	mr r5, r4
/* 8010EDA4 0010BE84  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8010EDA8 0010BE88  7D 89 03 A6 */	mtctr r12
/* 8010EDAC 0010BE8C  4E 80 04 21 */	bctrl
/* 8010EDB0 0010BE90  48 00 00 08 */	b .L_8010EDB8
.L_8010EDB4:
/* 8010EDB4 0010BE94  4B FC 66 61 */	bl Resume__5xGoalFfPv
.L_8010EDB8:
/* 8010EDB8 0010BE98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EDBC 0010BE9C  7C 08 03 A6 */	mtlr r0
/* 8010EDC0 0010BEA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EDC4 0010BEA4  4E 80 00 20 */	blr
.endfn Resume__12xGoalGenericFfPv

# xGoalGeneric::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__12xGoalGenericFP5xBaseP5xBaseUiPCfP5xBasePi, global
/* 8010EDC8 0010BEA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EDCC 0010BEAC  7C 08 02 A6 */	mflr r0
/* 8010EDD0 0010BEB0  7C EB 3B 78 */	mr r11, r7
/* 8010EDD4 0010BEB4  7D 2A 4B 78 */	mr r10, r9
/* 8010EDD8 0010BEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EDDC 0010BEBC  7D 00 43 78 */	mr r0, r8
/* 8010EDE0 0010BEC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010EDE4 0010BEC4  7C DF 33 78 */	mr r31, r6
/* 8010EDE8 0010BEC8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8010EDEC 0010BECC  7C BE 2B 78 */	mr r30, r5
/* 8010EDF0 0010BED0  81 83 00 4C */	lwz r12, 0x4c(r3)
/* 8010EDF4 0010BED4  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010EDF8 0010BED8  41 82 00 28 */	beq .L_8010EE20
/* 8010EDFC 0010BEDC  7C 85 23 78 */	mr r5, r4
/* 8010EE00 0010BEE0  7F C6 F3 78 */	mr r6, r30
/* 8010EE04 0010BEE4  7F E7 FB 78 */	mr r7, r31
/* 8010EE08 0010BEE8  7D 68 5B 78 */	mr r8, r11
/* 8010EE0C 0010BEEC  7C 09 03 78 */	mr r9, r0
/* 8010EE10 0010BEF0  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8010EE14 0010BEF4  7D 89 03 A6 */	mtctr r12
/* 8010EE18 0010BEF8  4E 80 04 21 */	bctrl
/* 8010EE1C 0010BEFC  48 00 00 08 */	b .L_8010EE24
.L_8010EE20:
/* 8010EE20 0010BF00  4B FC 66 0D */	bl SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
.L_8010EE24:
/* 8010EE24 0010BF04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EE28 0010BF08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010EE2C 0010BF0C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8010EE30 0010BF10  7C 08 03 A6 */	mtlr r0
/* 8010EE34 0010BF14  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EE38 0010BF18  4E 80 00 20 */	blr
.endfn SysEvent__12xGoalGenericFP5xBaseP5xBaseUiPCfP5xBasePi

# 0x8010EE3C - 0x8010EED8
.section .text, "ax", unique, 1
.balign 4

# xGoalEmpty::xGoalEmpty(int)
.fn __ct__10xGoalEmptyFi, weak
/* 8010EE3C 0010BF1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EE40 0010BF20  7C 08 02 A6 */	mflr r0
/* 8010EE44 0010BF24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EE48 0010BF28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010EE4C 0010BF2C  7C 7F 1B 78 */	mr r31, r3
/* 8010EE50 0010BF30  4B FC A1 F1 */	bl __ct__5xGoalFi
/* 8010EE54 0010BF34  3C 80 80 29 */	lis r4, __vt__10xGoalEmpty@ha
/* 8010EE58 0010BF38  7F E3 FB 78 */	mr r3, r31
/* 8010EE5C 0010BF3C  38 04 74 30 */	addi r0, r4, __vt__10xGoalEmpty@l
/* 8010EE60 0010BF40  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8010EE64 0010BF44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010EE68 0010BF48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EE6C 0010BF4C  7C 08 03 A6 */	mtlr r0
/* 8010EE70 0010BF50  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EE74 0010BF54  4E 80 00 20 */	blr
.endfn __ct__10xGoalEmptyFi

# xGoalGeneric::xGoalGeneric(int)
.fn __ct__12xGoalGenericFi, weak
/* 8010EE78 0010BF58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EE7C 0010BF5C  7C 08 02 A6 */	mflr r0
/* 8010EE80 0010BF60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EE84 0010BF64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010EE88 0010BF68  7C 7F 1B 78 */	mr r31, r3
/* 8010EE8C 0010BF6C  4B FC A1 B5 */	bl __ct__5xGoalFi
/* 8010EE90 0010BF70  3C 80 80 29 */	lis r4, __vt__12xGoalGeneric@ha
/* 8010EE94 0010BF74  7F E3 FB 78 */	mr r3, r31
/* 8010EE98 0010BF78  38 04 74 00 */	addi r0, r4, __vt__12xGoalGeneric@l
/* 8010EE9C 0010BF7C  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8010EEA0 0010BF80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010EEA4 0010BF84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EEA8 0010BF88  7C 08 03 A6 */	mtlr r0
/* 8010EEAC 0010BF8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EEB0 0010BF90  4E 80 00 20 */	blr
.endfn __ct__12xGoalGenericFi

# xGoalGeneric::Name()
.fn Name__12xGoalGenericFv, weak
/* 8010EEB4 0010BF94  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8010EEB8 0010BF98  38 63 A3 B0 */	addi r3, r3, "@stringBase0"@l
/* 8010EEBC 0010BF9C  4E 80 00 20 */	blr
.endfn Name__12xGoalGenericFv

# xGoalGeneric::Clear()
.fn Clear__12xGoalGenericFv, weak
/* 8010EEC0 0010BFA0  4E 80 00 20 */	blr
.endfn Clear__12xGoalGenericFv

# xGoalEmpty::Name()
.fn Name__10xGoalEmptyFv, weak
/* 8010EEC4 0010BFA4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8010EEC8 0010BFA8  38 63 A3 B0 */	addi r3, r3, "@stringBase0"@l
/* 8010EECC 0010BFAC  38 63 00 0D */	addi r3, r3, 0xd
/* 8010EED0 0010BFB0  4E 80 00 20 */	blr
.endfn Name__10xGoalEmptyFv

# xGoalEmpty::Clear()
.fn Clear__10xGoalEmptyFv, weak
/* 8010EED4 0010BFB4  4E 80 00 20 */	blr
.endfn Clear__10xGoalEmptyFv

# 0x8026A3B0 - 0x8026A3C8
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x78476F61
	.4byte 0x6C47656E
	.4byte 0x65726963
	.4byte 0x0078476F
	.4byte 0x616C456D
	.4byte 0x70747900
.endobj "@stringBase0"

# 0x80297400 - 0x80297460
.data
.balign 8

# xGoalGeneric::__vtable
.obj __vt__12xGoalGeneric, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__12xGoalGenericFv
	.4byte Enter__12xGoalGenericFfPv
	.4byte Exit__12xGoalGenericFfPv
	.4byte Suspend__12xGoalGenericFfPv
	.4byte Resume__12xGoalGenericFfPv
	.4byte PreCalc__5xGoalFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__12xGoalGenericFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Name__12xGoalGenericFv
.endobj __vt__12xGoalGeneric

# xGoalEmpty::__vtable
.obj __vt__10xGoalEmpty, weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__10xGoalEmptyFv
	.4byte Enter__5xGoalFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__5xGoalFfPv
	.4byte PreCalc__5xGoalFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Name__10xGoalEmptyFv
.endobj __vt__10xGoalEmpty
