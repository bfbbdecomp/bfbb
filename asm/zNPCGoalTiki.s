.include "macros.inc"
.file "zNPCGoalTiki.cpp"

# 0x800ECBFC - 0x800ED060
.text
.balign 4

# GOALCreate_Tiki(int, RyzMemGrow*, void*)
.fn GOALCreate_Tiki__FiP10RyzMemGrowPv, global
/* 800ECBFC 000E9CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECC00 000E9CE0  7C 08 02 A6 */	mflr r0
/* 800ECC04 000E9CE4  3C C0 4E 47 */	lis r6, 0x4e47
/* 800ECC08 000E9CE8  7C 85 23 78 */	mr r5, r4
/* 800ECC0C 000E9CEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECC10 000E9CF0  38 06 54 33 */	addi r0, r6, 0x5433
/* 800ECC14 000E9CF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECC18 000E9CF8  7C 7F 1B 78 */	mr r31, r3
/* 800ECC1C 000E9CFC  7C 1F 00 00 */	cmpw r31, r0
/* 800ECC20 000E9D00  41 82 00 B4 */	beq .L_800ECCD4
/* 800ECC24 000E9D04  40 80 00 24 */	bge .L_800ECC48
/* 800ECC28 000E9D08  38 06 54 31 */	addi r0, r6, 0x5431
/* 800ECC2C 000E9D0C  7C 1F 00 00 */	cmpw r31, r0
/* 800ECC30 000E9D10  41 82 00 54 */	beq .L_800ECC84
/* 800ECC34 000E9D14  40 80 00 78 */	bge .L_800ECCAC
/* 800ECC38 000E9D18  38 06 54 30 */	addi r0, r6, 0x5430
/* 800ECC3C 000E9D1C  7C 1F 00 00 */	cmpw r31, r0
/* 800ECC40 000E9D20  40 80 00 1C */	bge .L_800ECC5C
/* 800ECC44 000E9D24  48 00 01 08 */	b .L_800ECD4C
.L_800ECC48:
/* 800ECC48 000E9D28  38 06 54 35 */	addi r0, r6, 0x5435
/* 800ECC4C 000E9D2C  7C 1F 00 00 */	cmpw r31, r0
/* 800ECC50 000E9D30  41 82 00 D4 */	beq .L_800ECD24
/* 800ECC54 000E9D34  40 80 00 F8 */	bge .L_800ECD4C
/* 800ECC58 000E9D38  48 00 00 A4 */	b .L_800ECCFC
.L_800ECC5C:
/* 800ECC5C 000E9D3C  7F E4 FB 78 */	mr r4, r31
/* 800ECC60 000E9D40  38 60 00 50 */	li r3, 0x50
/* 800ECC64 000E9D44  48 02 24 ED */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECC68 000E9D48  7C 60 1B 79 */	mr. r0, r3
/* 800ECC6C 000E9D4C  41 82 00 10 */	beq .L_800ECC7C
/* 800ECC70 000E9D50  7F E4 FB 78 */	mr r4, r31
/* 800ECC74 000E9D54  48 00 05 19 */	bl __ct__16zNPCGoalTikiIdleFi
/* 800ECC78 000E9D58  7C 60 1B 78 */	mr r0, r3
.L_800ECC7C:
/* 800ECC7C 000E9D5C  7C 03 03 78 */	mr r3, r0
/* 800ECC80 000E9D60  48 00 00 F0 */	b .L_800ECD70
.L_800ECC84:
/* 800ECC84 000E9D64  7F E4 FB 78 */	mr r4, r31
/* 800ECC88 000E9D68  38 60 00 64 */	li r3, 0x64
/* 800ECC8C 000E9D6C  48 02 24 C5 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECC90 000E9D70  7C 60 1B 79 */	mr. r0, r3
/* 800ECC94 000E9D74  41 82 00 10 */	beq .L_800ECCA4
/* 800ECC98 000E9D78  7F E4 FB 78 */	mr r4, r31
/* 800ECC9C 000E9D7C  48 00 04 B5 */	bl __ct__18zNPCGoalTikiPatrolFi
/* 800ECCA0 000E9D80  7C 60 1B 78 */	mr r0, r3
.L_800ECCA4:
/* 800ECCA4 000E9D84  7C 03 03 78 */	mr r3, r0
/* 800ECCA8 000E9D88  48 00 00 C8 */	b .L_800ECD70
.L_800ECCAC:
/* 800ECCAC 000E9D8C  7F E4 FB 78 */	mr r4, r31
/* 800ECCB0 000E9D90  38 60 00 4C */	li r3, 0x4c
/* 800ECCB4 000E9D94  48 02 24 9D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECCB8 000E9D98  7C 60 1B 79 */	mr. r0, r3
/* 800ECCBC 000E9D9C  41 82 00 10 */	beq .L_800ECCCC
/* 800ECCC0 000E9DA0  7F E4 FB 78 */	mr r4, r31
/* 800ECCC4 000E9DA4  48 00 04 51 */	bl __ct__16zNPCGoalTikiHideFi
/* 800ECCC8 000E9DA8  7C 60 1B 78 */	mr r0, r3
.L_800ECCCC:
/* 800ECCCC 000E9DAC  7C 03 03 78 */	mr r3, r0
/* 800ECCD0 000E9DB0  48 00 00 A0 */	b .L_800ECD70
.L_800ECCD4:
/* 800ECCD4 000E9DB4  7F E4 FB 78 */	mr r4, r31
/* 800ECCD8 000E9DB8  38 60 00 54 */	li r3, 0x54
/* 800ECCDC 000E9DBC  48 02 24 75 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECCE0 000E9DC0  7C 60 1B 79 */	mr. r0, r3
/* 800ECCE4 000E9DC4  41 82 00 10 */	beq .L_800ECCF4
/* 800ECCE8 000E9DC8  7F E4 FB 78 */	mr r4, r31
/* 800ECCEC 000E9DCC  48 00 03 ED */	bl __ct__17zNPCGoalTikiCountFi
/* 800ECCF0 000E9DD0  7C 60 1B 78 */	mr r0, r3
.L_800ECCF4:
/* 800ECCF4 000E9DD4  7C 03 03 78 */	mr r3, r0
/* 800ECCF8 000E9DD8  48 00 00 78 */	b .L_800ECD70
.L_800ECCFC:
/* 800ECCFC 000E9DDC  7F E4 FB 78 */	mr r4, r31
/* 800ECD00 000E9DE0  38 60 00 50 */	li r3, 0x50
/* 800ECD04 000E9DE4  48 02 24 4D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECD08 000E9DE8  7C 60 1B 79 */	mr. r0, r3
/* 800ECD0C 000E9DEC  41 82 00 10 */	beq .L_800ECD1C
/* 800ECD10 000E9DF0  7F E4 FB 78 */	mr r4, r31
/* 800ECD14 000E9DF4  48 00 03 89 */	bl __ct__17zNPCGoalTikiDyingFi
/* 800ECD18 000E9DF8  7C 60 1B 78 */	mr r0, r3
.L_800ECD1C:
/* 800ECD1C 000E9DFC  7C 03 03 78 */	mr r3, r0
/* 800ECD20 000E9E00  48 00 00 50 */	b .L_800ECD70
.L_800ECD24:
/* 800ECD24 000E9E04  7F E4 FB 78 */	mr r4, r31
/* 800ECD28 000E9E08  38 60 00 50 */	li r3, 0x50
/* 800ECD2C 000E9E0C  48 02 24 25 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECD30 000E9E10  7C 60 1B 79 */	mr. r0, r3
/* 800ECD34 000E9E14  41 82 00 10 */	beq .L_800ECD44
/* 800ECD38 000E9E18  7F E4 FB 78 */	mr r4, r31
/* 800ECD3C 000E9E1C  48 00 03 25 */	bl __ct__16zNPCGoalTikiDeadFi
/* 800ECD40 000E9E20  7C 60 1B 78 */	mr r0, r3
.L_800ECD44:
/* 800ECD44 000E9E24  7C 03 03 78 */	mr r3, r0
/* 800ECD48 000E9E28  48 00 00 28 */	b .L_800ECD70
.L_800ECD4C:
/* 800ECD4C 000E9E2C  7F E4 FB 78 */	mr r4, r31
/* 800ECD50 000E9E30  38 60 00 50 */	li r3, 0x50
/* 800ECD54 000E9E34  48 02 23 FD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 800ECD58 000E9E38  7C 60 1B 79 */	mr. r0, r3
/* 800ECD5C 000E9E3C  41 82 00 10 */	beq .L_800ECD6C
/* 800ECD60 000E9E40  7F E4 FB 78 */	mr r4, r31
/* 800ECD64 000E9E44  48 00 04 29 */	bl __ct__16zNPCGoalTikiIdleFi
/* 800ECD68 000E9E48  7C 60 1B 78 */	mr r0, r3
.L_800ECD6C:
/* 800ECD6C 000E9E4C  7C 03 03 78 */	mr r3, r0
.L_800ECD70:
/* 800ECD70 000E9E50  28 03 00 00 */	cmplwi r3, 0x0
/* 800ECD74 000E9E54  41 82 00 08 */	beq .L_800ECD7C
/* 800ECD78 000E9E58  38 63 00 0C */	addi r3, r3, 0xc
.L_800ECD7C:
/* 800ECD7C 000E9E5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECD80 000E9E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ECD84 000E9E64  7C 08 03 A6 */	mtlr r0
/* 800ECD88 000E9E68  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECD8C 000E9E6C  4E 80 00 20 */	blr
.endfn GOALCreate_Tiki__FiP10RyzMemGrowPv

# zNPCGoalTikiIdle::Enter(float, void*)
.fn Enter__16zNPCGoalTikiIdleFfPv, global
/* 800ECD90 000E9E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECD94 000E9E74  7C 08 02 A6 */	mflr r0
/* 800ECD98 000E9E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECD9C 000E9E7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECDA0 000E9E80  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800ECDA4 000E9E84  7C 7E 1B 78 */	mr r30, r3
/* 800ECDA8 000E9E88  48 02 1C ED */	bl GetOwner__5xGoalCFv
/* 800ECDAC 000E9E8C  7C 7F 1B 78 */	mr r31, r3
/* 800ECDB0 000E9E90  4B F6 97 35 */	bl SelfType__9xNPCBasicCFv
/* 800ECDB4 000E9E94  3C 03 B1 AC */	addis r0, r3, 0xb1ac
/* 800ECDB8 000E9E98  28 00 54 33 */	cmplwi r0, 0x5433
/* 800ECDBC 000E9E9C  40 82 00 10 */	bne .L_800ECDCC
/* 800ECDC0 000E9EA0  C0 02 9A 88 */	lfs f0, "@836"@sda21(r2)
/* 800ECDC4 000E9EA4  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 800ECDC8 000E9EA8  48 00 00 24 */	b .L_800ECDEC
.L_800ECDCC:
/* 800ECDCC 000E9EAC  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 800ECDD0 000E9EB0  28 03 00 00 */	cmplwi r3, 0x0
/* 800ECDD4 000E9EB4  40 82 00 10 */	bne .L_800ECDE4
/* 800ECDD8 000E9EB8  C0 02 9A 8C */	lfs f0, "@837"@sda21(r2)
/* 800ECDDC 000E9EBC  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 800ECDE0 000E9EC0  48 00 00 0C */	b .L_800ECDEC
.L_800ECDE4:
/* 800ECDE4 000E9EC4  4B FB A0 91 */	bl zMovePointGetDelay__FPC10zMovePoint
/* 800ECDE8 000E9EC8  D0 3E 00 4C */	stfs f1, 0x4c(r30)
.L_800ECDEC:
/* 800ECDEC 000E9ECC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECDF0 000E9ED0  38 60 00 00 */	li r3, 0x0
/* 800ECDF4 000E9ED4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ECDF8 000E9ED8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800ECDFC 000E9EDC  7C 08 03 A6 */	mtlr r0
/* 800ECE00 000E9EE0  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECE04 000E9EE4  4E 80 00 20 */	blr
.endfn Enter__16zNPCGoalTikiIdleFfPv

# zNPCGoalTikiPatrol::Enter(float, void*)
.fn Enter__18zNPCGoalTikiPatrolFfPv, global
/* 800ECE08 000E9EE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECE0C 000E9EEC  7C 08 02 A6 */	mflr r0
/* 800ECE10 000E9EF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECE14 000E9EF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECE18 000E9EF8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800ECE1C 000E9EFC  7C 7E 1B 78 */	mr r30, r3
/* 800ECE20 000E9F00  48 02 1C 75 */	bl GetOwner__5xGoalCFv
/* 800ECE24 000E9F04  7C 7F 1B 78 */	mr r31, r3
/* 800ECE28 000E9F08  80 63 02 10 */	lwz r3, 0x210(r3)
/* 800ECE2C 000E9F0C  4B FB A0 29 */	bl zMovePointGetPos__FPC10zMovePoint
/* 800ECE30 000E9F10  7C 64 1B 78 */	mr r4, r3
/* 800ECE34 000E9F14  38 7E 00 4C */	addi r3, r30, 0x4c
/* 800ECE38 000E9F18  4B F6 16 A5 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800ECE3C 000E9F1C  38 7E 00 58 */	addi r3, r30, 0x58
/* 800ECE40 000E9F20  38 9E 00 4C */	addi r4, r30, 0x4c
/* 800ECE44 000E9F24  38 BF 03 18 */	addi r5, r31, 0x318
/* 800ECE48 000E9F28  4B F2 18 49 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800ECE4C 000E9F2C  38 7E 00 58 */	addi r3, r30, 0x58
/* 800ECE50 000E9F30  7C 64 1B 78 */	mr r4, r3
/* 800ECE54 000E9F34  4B F6 14 9D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800ECE58 000E9F38  80 9F 01 D8 */	lwz r4, 0x1d8(r31)
/* 800ECE5C 000E9F3C  38 7E 00 58 */	addi r3, r30, 0x58
/* 800ECE60 000E9F40  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 800ECE64 000E9F44  4B F2 EA D5 */	bl xVec3SMulBy__FP5xVec3f
/* 800ECE68 000E9F48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECE6C 000E9F4C  38 60 00 00 */	li r3, 0x0
/* 800ECE70 000E9F50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ECE74 000E9F54  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800ECE78 000E9F58  7C 08 03 A6 */	mtlr r0
/* 800ECE7C 000E9F5C  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECE80 000E9F60  4E 80 00 20 */	blr
.endfn Enter__18zNPCGoalTikiPatrolFfPv

# zNPCGoalTikiHide::Enter(float, void*)
.fn Enter__16zNPCGoalTikiHideFfPv, global
/* 800ECE84 000E9F64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECE88 000E9F68  7C 08 02 A6 */	mflr r0
/* 800ECE8C 000E9F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECE90 000E9F70  48 02 1C 05 */	bl GetOwner__5xGoalCFv
/* 800ECE94 000E9F74  38 00 00 00 */	li r0, 0x0
/* 800ECE98 000E9F78  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 800ECE9C 000E9F7C  38 60 00 00 */	li r3, 0x0
/* 800ECEA0 000E9F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECEA4 000E9F84  7C 08 03 A6 */	mtlr r0
/* 800ECEA8 000E9F88  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECEAC 000E9F8C  4E 80 00 20 */	blr
.endfn Enter__16zNPCGoalTikiHideFfPv

# zNPCGoalTikiHide::Exit(float, void*)
.fn Exit__16zNPCGoalTikiHideFfPv, global
/* 800ECEB0 000E9F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECEB4 000E9F94  7C 08 02 A6 */	mflr r0
/* 800ECEB8 000E9F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECEBC 000E9F9C  48 02 1B D9 */	bl GetOwner__5xGoalCFv
/* 800ECEC0 000E9FA0  3C 80 FF FF */	lis r4, 0xffff
/* 800ECEC4 000E9FA4  38 04 00 01 */	addi r0, r4, 0x1
/* 800ECEC8 000E9FA8  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 800ECECC 000E9FAC  38 60 00 00 */	li r3, 0x0
/* 800ECED0 000E9FB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECED4 000E9FB4  7C 08 03 A6 */	mtlr r0
/* 800ECED8 000E9FB8  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECEDC 000E9FBC  4E 80 00 20 */	blr
.endfn Exit__16zNPCGoalTikiHideFfPv

# zNPCGoalTikiCount::Enter(float, void*)
.fn Enter__17zNPCGoalTikiCountFfPv, global
/* 800ECEE0 000E9FC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECEE4 000E9FC4  7C 08 02 A6 */	mflr r0
/* 800ECEE8 000E9FC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECEEC 000E9FCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECEF0 000E9FD0  7C 7F 1B 78 */	mr r31, r3
/* 800ECEF4 000E9FD4  48 02 1B A1 */	bl GetOwner__5xGoalCFv
/* 800ECEF8 000E9FD8  C0 02 9A 90 */	lfs f0, "@862"@sda21(r2)
/* 800ECEFC 000E9FDC  38 00 00 00 */	li r0, 0x0
/* 800ECF00 000E9FE0  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 800ECF04 000E9FE4  90 1F 00 50 */	stw r0, 0x50(r31)
/* 800ECF08 000E9FE8  C0 02 9A 94 */	lfs f0, "@863"@sda21(r2)
/* 800ECF0C 000E9FEC  D0 03 03 0C */	stfs f0, 0x30c(r3)
/* 800ECF10 000E9FF0  38 60 00 00 */	li r3, 0x0
/* 800ECF14 000E9FF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ECF18 000E9FF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECF1C 000E9FFC  7C 08 03 A6 */	mtlr r0
/* 800ECF20 000EA000  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECF24 000EA004  4E 80 00 20 */	blr
.endfn Enter__17zNPCGoalTikiCountFfPv

# zNPCGoalTikiDying::Enter(float, void*)
.fn Enter__17zNPCGoalTikiDyingFfPv, global
/* 800ECF28 000EA008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECF2C 000EA00C  7C 08 02 A6 */	mflr r0
/* 800ECF30 000EA010  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECF34 000EA014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECF38 000EA018  7C 7F 1B 78 */	mr r31, r3
/* 800ECF3C 000EA01C  48 02 1B 59 */	bl GetOwner__5xGoalCFv
/* 800ECF40 000EA020  C0 03 03 08 */	lfs f0, 0x308(r3)
/* 800ECF44 000EA024  38 00 00 00 */	li r0, 0x0
/* 800ECF48 000EA028  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 800ECF4C 000EA02C  90 03 01 C8 */	stw r0, 0x1c8(r3)
/* 800ECF50 000EA030  38 60 00 00 */	li r3, 0x0
/* 800ECF54 000EA034  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ECF58 000EA038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECF5C 000EA03C  7C 08 03 A6 */	mtlr r0
/* 800ECF60 000EA040  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECF64 000EA044  4E 80 00 20 */	blr
.endfn Enter__17zNPCGoalTikiDyingFfPv

# zNPCGoalTikiDying::Exit(float, void*)
.fn Exit__17zNPCGoalTikiDyingFfPv, global
/* 800ECF68 000EA048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECF6C 000EA04C  7C 08 02 A6 */	mflr r0
/* 800ECF70 000EA050  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECF74 000EA054  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECF78 000EA058  48 02 1B 1D */	bl GetOwner__5xGoalCFv
/* 800ECF7C 000EA05C  7C 7F 1B 78 */	mr r31, r3
/* 800ECF80 000EA060  48 01 CA FD */	bl zNPCTiki_ExplodeFX__FP8zNPCTiki
/* 800ECF84 000EA064  7F E4 FB 78 */	mr r4, r31
/* 800ECF88 000EA068  38 60 00 0A */	li r3, 0xa
/* 800ECF8C 000EA06C  4B FC 00 F9 */	bl zRumbleStart__F16_tagSDRumbleTypeP4xEnt
/* 800ECF90 000EA070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ECF94 000EA074  38 60 00 00 */	li r3, 0x0
/* 800ECF98 000EA078  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ECF9C 000EA07C  7C 08 03 A6 */	mtlr r0
/* 800ECFA0 000EA080  38 21 00 10 */	addi r1, r1, 0x10
/* 800ECFA4 000EA084  4E 80 00 20 */	blr
.endfn Exit__17zNPCGoalTikiDyingFfPv

# zNPCGoalTikiDead::Enter(float, void*)
.fn Enter__16zNPCGoalTikiDeadFfPv, global
/* 800ECFA8 000EA088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ECFAC 000EA08C  7C 08 02 A6 */	mflr r0
/* 800ECFB0 000EA090  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ECFB4 000EA094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ECFB8 000EA098  48 02 1A DD */	bl GetOwner__5xGoalCFv
/* 800ECFBC 000EA09C  80 03 02 A0 */	lwz r0, 0x2a0(r3)
/* 800ECFC0 000EA0A0  7C 7F 1B 78 */	mr r31, r3
/* 800ECFC4 000EA0A4  54 00 06 2A */	rlwinm r0, r0, 0, 24, 21
/* 800ECFC8 000EA0A8  90 03 02 A0 */	stw r0, 0x2a0(r3)
/* 800ECFCC 000EA0AC  80 03 02 A0 */	lwz r0, 0x2a0(r3)
/* 800ECFD0 000EA0B0  60 00 01 00 */	ori r0, r0, 0x100
/* 800ECFD4 000EA0B4  90 03 02 A0 */	stw r0, 0x2a0(r3)
/* 800ECFD8 000EA0B8  4B F2 E8 11 */	bl xEntHide__FP4xEnt
/* 800ECFDC 000EA0BC  38 00 00 00 */	li r0, 0x0
/* 800ECFE0 000EA0C0  7F E3 FB 78 */	mr r3, r31
/* 800ECFE4 000EA0C4  98 1F 00 22 */	stb r0, 0x22(r31)
/* 800ECFE8 000EA0C8  98 1F 00 23 */	stb r0, 0x23(r31)
/* 800ECFEC 000EA0CC  48 00 4D 55 */	bl GiveReward__10zNPCCommonFv
/* 800ECFF0 000EA0D0  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800ECFF4 000EA0D4  38 80 00 24 */	li r4, 0x24
/* 800ECFF8 000EA0D8  4B F3 25 6D */	bl zEntEvent__FUiUi
/* 800ECFFC 000EA0DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED000 000EA0E0  38 60 00 00 */	li r3, 0x0
/* 800ED004 000EA0E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED008 000EA0E8  7C 08 03 A6 */	mtlr r0
/* 800ED00C 000EA0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED010 000EA0F0  4E 80 00 20 */	blr
.endfn Enter__16zNPCGoalTikiDeadFfPv

# zNPCGoalTikiDead::Exit(float, void*)
.fn Exit__16zNPCGoalTikiDeadFfPv, global
/* 800ED014 000EA0F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED018 000EA0F8  7C 08 02 A6 */	mflr r0
/* 800ED01C 000EA0FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED020 000EA100  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED024 000EA104  48 02 1A 71 */	bl GetOwner__5xGoalCFv
/* 800ED028 000EA108  7C 7F 1B 78 */	mr r31, r3
/* 800ED02C 000EA10C  4B F2 E7 CD */	bl xEntShow__FP4xEnt
/* 800ED030 000EA110  38 80 00 10 */	li r4, 0x10
/* 800ED034 000EA114  3C 60 FF FF */	lis r3, 0xffff
/* 800ED038 000EA118  98 9F 00 22 */	stb r4, 0x22(r31)
/* 800ED03C 000EA11C  38 03 00 01 */	addi r0, r3, 0x1
/* 800ED040 000EA120  38 60 00 00 */	li r3, 0x0
/* 800ED044 000EA124  98 9F 00 23 */	stb r4, 0x23(r31)
/* 800ED048 000EA128  90 1F 01 C8 */	stw r0, 0x1c8(r31)
/* 800ED04C 000EA12C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED050 000EA130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED054 000EA134  7C 08 03 A6 */	mtlr r0
/* 800ED058 000EA138  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED05C 000EA13C  4E 80 00 20 */	blr
.endfn Exit__16zNPCGoalTikiDeadFfPv

# 0x800ED060 - 0x800ED1E0
.section .text, "ax", unique, 1
.balign 4

# zNPCGoalTikiDead::zNPCGoalTikiDead(int)
.fn __ct__16zNPCGoalTikiDeadFi, weak
/* 800ED060 000EA140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED064 000EA144  7C 08 02 A6 */	mflr r0
/* 800ED068 000EA148  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED06C 000EA14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED070 000EA150  7C 7F 1B 78 */	mr r31, r3
/* 800ED074 000EA154  4B FE BF 81 */	bl __ct__14zNPCGoalCommonFi
/* 800ED078 000EA158  3C 80 80 29 */	lis r4, __vt__16zNPCGoalTikiDead@ha
/* 800ED07C 000EA15C  7F E3 FB 78 */	mr r3, r31
/* 800ED080 000EA160  38 04 3F 18 */	addi r0, r4, __vt__16zNPCGoalTikiDead@l
/* 800ED084 000EA164  90 1F 00 38 */	stw r0, 0x38(r31)
/* 800ED088 000EA168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED08C 000EA16C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED090 000EA170  7C 08 03 A6 */	mtlr r0
/* 800ED094 000EA174  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED098 000EA178  4E 80 00 20 */	blr
.endfn __ct__16zNPCGoalTikiDeadFi

# zNPCGoalTikiDying::zNPCGoalTikiDying(int)
.fn __ct__17zNPCGoalTikiDyingFi, weak
/* 800ED09C 000EA17C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED0A0 000EA180  7C 08 02 A6 */	mflr r0
/* 800ED0A4 000EA184  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED0A8 000EA188  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED0AC 000EA18C  7C 7F 1B 78 */	mr r31, r3
/* 800ED0B0 000EA190  4B FE BF 45 */	bl __ct__14zNPCGoalCommonFi
/* 800ED0B4 000EA194  3C 80 80 29 */	lis r4, __vt__17zNPCGoalTikiDying@ha
/* 800ED0B8 000EA198  7F E3 FB 78 */	mr r3, r31
/* 800ED0BC 000EA19C  38 04 3F 4C */	addi r0, r4, __vt__17zNPCGoalTikiDying@l
/* 800ED0C0 000EA1A0  90 1F 00 38 */	stw r0, 0x38(r31)
/* 800ED0C4 000EA1A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED0C8 000EA1A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED0CC 000EA1AC  7C 08 03 A6 */	mtlr r0
/* 800ED0D0 000EA1B0  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED0D4 000EA1B4  4E 80 00 20 */	blr
.endfn __ct__17zNPCGoalTikiDyingFi

# zNPCGoalTikiCount::zNPCGoalTikiCount(int)
.fn __ct__17zNPCGoalTikiCountFi, weak
/* 800ED0D8 000EA1B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED0DC 000EA1BC  7C 08 02 A6 */	mflr r0
/* 800ED0E0 000EA1C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED0E4 000EA1C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED0E8 000EA1C8  7C 7F 1B 78 */	mr r31, r3
/* 800ED0EC 000EA1CC  4B FE BF 09 */	bl __ct__14zNPCGoalCommonFi
/* 800ED0F0 000EA1D0  3C 80 80 29 */	lis r4, __vt__17zNPCGoalTikiCount@ha
/* 800ED0F4 000EA1D4  7F E3 FB 78 */	mr r3, r31
/* 800ED0F8 000EA1D8  38 04 3F 80 */	addi r0, r4, __vt__17zNPCGoalTikiCount@l
/* 800ED0FC 000EA1DC  90 1F 00 38 */	stw r0, 0x38(r31)
/* 800ED100 000EA1E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED104 000EA1E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED108 000EA1E8  7C 08 03 A6 */	mtlr r0
/* 800ED10C 000EA1EC  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED110 000EA1F0  4E 80 00 20 */	blr
.endfn __ct__17zNPCGoalTikiCountFi

# zNPCGoalTikiHide::zNPCGoalTikiHide(int)
.fn __ct__16zNPCGoalTikiHideFi, weak
/* 800ED114 000EA1F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED118 000EA1F8  7C 08 02 A6 */	mflr r0
/* 800ED11C 000EA1FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED120 000EA200  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED124 000EA204  7C 7F 1B 78 */	mr r31, r3
/* 800ED128 000EA208  4B FE BE CD */	bl __ct__14zNPCGoalCommonFi
/* 800ED12C 000EA20C  3C 80 80 29 */	lis r4, __vt__16zNPCGoalTikiHide@ha
/* 800ED130 000EA210  7F E3 FB 78 */	mr r3, r31
/* 800ED134 000EA214  38 04 3F B4 */	addi r0, r4, __vt__16zNPCGoalTikiHide@l
/* 800ED138 000EA218  90 1F 00 38 */	stw r0, 0x38(r31)
/* 800ED13C 000EA21C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED140 000EA220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED144 000EA224  7C 08 03 A6 */	mtlr r0
/* 800ED148 000EA228  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED14C 000EA22C  4E 80 00 20 */	blr
.endfn __ct__16zNPCGoalTikiHideFi

# zNPCGoalTikiPatrol::zNPCGoalTikiPatrol(int)
.fn __ct__18zNPCGoalTikiPatrolFi, weak
/* 800ED150 000EA230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED154 000EA234  7C 08 02 A6 */	mflr r0
/* 800ED158 000EA238  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED15C 000EA23C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED160 000EA240  7C 7F 1B 78 */	mr r31, r3
/* 800ED164 000EA244  4B FE BE 91 */	bl __ct__14zNPCGoalCommonFi
/* 800ED168 000EA248  3C 80 80 29 */	lis r4, __vt__18zNPCGoalTikiPatrol@ha
/* 800ED16C 000EA24C  7F E3 FB 78 */	mr r3, r31
/* 800ED170 000EA250  38 04 3F E8 */	addi r0, r4, __vt__18zNPCGoalTikiPatrol@l
/* 800ED174 000EA254  90 1F 00 38 */	stw r0, 0x38(r31)
/* 800ED178 000EA258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED17C 000EA25C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED180 000EA260  7C 08 03 A6 */	mtlr r0
/* 800ED184 000EA264  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED188 000EA268  4E 80 00 20 */	blr
.endfn __ct__18zNPCGoalTikiPatrolFi

# zNPCGoalTikiIdle::zNPCGoalTikiIdle(int)
.fn __ct__16zNPCGoalTikiIdleFi, weak
/* 800ED18C 000EA26C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ED190 000EA270  7C 08 02 A6 */	mflr r0
/* 800ED194 000EA274  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ED198 000EA278  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ED19C 000EA27C  7C 7F 1B 78 */	mr r31, r3
/* 800ED1A0 000EA280  4B FE BE 55 */	bl __ct__14zNPCGoalCommonFi
/* 800ED1A4 000EA284  3C 80 80 29 */	lis r4, __vt__16zNPCGoalTikiIdle@ha
/* 800ED1A8 000EA288  7F E3 FB 78 */	mr r3, r31
/* 800ED1AC 000EA28C  38 04 40 1C */	addi r0, r4, __vt__16zNPCGoalTikiIdle@l
/* 800ED1B0 000EA290  90 1F 00 38 */	stw r0, 0x38(r31)
/* 800ED1B4 000EA294  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800ED1B8 000EA298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ED1BC 000EA29C  7C 08 03 A6 */	mtlr r0
/* 800ED1C0 000EA2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 800ED1C4 000EA2A4  4E 80 00 20 */	blr
.endfn __ct__16zNPCGoalTikiIdleFi

# zNPCGoalTikiDead::Clear()
.fn Clear__16zNPCGoalTikiDeadFv, weak
/* 800ED1C8 000EA2A8  4E 80 00 20 */	blr
.endfn Clear__16zNPCGoalTikiDeadFv

# zNPCGoalTikiDying::Clear()
.fn Clear__17zNPCGoalTikiDyingFv, weak
/* 800ED1CC 000EA2AC  4E 80 00 20 */	blr
.endfn Clear__17zNPCGoalTikiDyingFv

# zNPCGoalTikiCount::Clear()
.fn Clear__17zNPCGoalTikiCountFv, weak
/* 800ED1D0 000EA2B0  4E 80 00 20 */	blr
.endfn Clear__17zNPCGoalTikiCountFv

# zNPCGoalTikiHide::Clear()
.fn Clear__16zNPCGoalTikiHideFv, weak
/* 800ED1D4 000EA2B4  4E 80 00 20 */	blr
.endfn Clear__16zNPCGoalTikiHideFv

# zNPCGoalTikiPatrol::Clear()
.fn Clear__18zNPCGoalTikiPatrolFv, weak
/* 800ED1D8 000EA2B8  4E 80 00 20 */	blr
.endfn Clear__18zNPCGoalTikiPatrolFv

# zNPCGoalTikiIdle::Clear()
.fn Clear__16zNPCGoalTikiIdleFv, weak
/* 800ED1DC 000EA2BC  4E 80 00 20 */	blr
.endfn Clear__16zNPCGoalTikiIdleFv

# 0x80293F18 - 0x80294050
.data
.balign 8

# zNPCGoalTikiDead::__vtable
.obj __vt__16zNPCGoalTikiDead, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__16zNPCGoalTikiDeadFv
	.4byte Enter__16zNPCGoalTikiDeadFfPv
	.4byte Exit__16zNPCGoalTikiDeadFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__16zNPCGoalTikiDead

# zNPCGoalTikiDying::__vtable
.obj __vt__17zNPCGoalTikiDying, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__17zNPCGoalTikiDyingFv
	.4byte Enter__17zNPCGoalTikiDyingFfPv
	.4byte Exit__17zNPCGoalTikiDyingFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__17zNPCGoalTikiDying

# zNPCGoalTikiCount::__vtable
.obj __vt__17zNPCGoalTikiCount, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__17zNPCGoalTikiCountFv
	.4byte Enter__17zNPCGoalTikiCountFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__17zNPCGoalTikiCount

# zNPCGoalTikiHide::__vtable
.obj __vt__16zNPCGoalTikiHide, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__16zNPCGoalTikiHideFv
	.4byte Enter__16zNPCGoalTikiHideFfPv
	.4byte Exit__16zNPCGoalTikiHideFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__16zNPCGoalTikiHide

# zNPCGoalTikiPatrol::__vtable
.obj __vt__18zNPCGoalTikiPatrol, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__18zNPCGoalTikiPatrolFv
	.4byte Enter__18zNPCGoalTikiPatrolFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__18zNPCGoalTikiPatrol

# zNPCGoalTikiIdle::__vtable
.obj __vt__16zNPCGoalTikiIdle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__16zNPCGoalTikiIdleFv
	.4byte Enter__16zNPCGoalTikiIdleFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__16zNPCGoalTikiIdle

# 0x803CE408 - 0x803CE418
.section .sdata2, "a"
.balign 8

.obj "@836", local
	.4byte 0x3DCCCCCD
.endobj "@836"

.obj "@837", local
	.4byte 0x40000000
.endobj "@837"

.obj "@862", local
	.4byte 0x40400000
.endobj "@862"

.obj "@863", local
	.4byte 0x00000000
.endobj "@863"
