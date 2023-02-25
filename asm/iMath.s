.include "macros.inc"
.file "iMath.cpp"

# 0x800C4E4C - 0x800C4F18
.text
.balign 4

# isin(float)
.fn isin__Ff, global
/* 800C4E4C 000C1F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C4E50 000C1F30  7C 08 02 A6 */	mflr r0
/* 800C4E54 000C1F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C4E58 000C1F38  48 00 00 15 */	bl sinf__3stdFf
/* 800C4E5C 000C1F3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C4E60 000C1F40  7C 08 03 A6 */	mtlr r0
/* 800C4E64 000C1F44  38 21 00 10 */	addi r1, r1, 0x10
/* 800C4E68 000C1F48  4E 80 00 20 */	blr
.endfn isin__Ff

# std::sinf(float)
.fn sinf__3stdFf, weak
/* 800C4E6C 000C1F4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C4E70 000C1F50  7C 08 02 A6 */	mflr r0
/* 800C4E74 000C1F54  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C4E78 000C1F58  48 12 7A A9 */	bl sin
/* 800C4E7C 000C1F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C4E80 000C1F60  FC 20 08 18 */	frsp f1, f1
/* 800C4E84 000C1F64  7C 08 03 A6 */	mtlr r0
/* 800C4E88 000C1F68  38 21 00 10 */	addi r1, r1, 0x10
/* 800C4E8C 000C1F6C  4E 80 00 20 */	blr
.endfn sinf__3stdFf

# icos(float)
.fn icos__Ff, global
/* 800C4E90 000C1F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C4E94 000C1F74  7C 08 02 A6 */	mflr r0
/* 800C4E98 000C1F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C4E9C 000C1F7C  48 00 00 15 */	bl cosf__3stdFf
/* 800C4EA0 000C1F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C4EA4 000C1F84  7C 08 03 A6 */	mtlr r0
/* 800C4EA8 000C1F88  38 21 00 10 */	addi r1, r1, 0x10
/* 800C4EAC 000C1F8C  4E 80 00 20 */	blr
.endfn icos__Ff

# std::cosf(float)
.fn cosf__3stdFf, weak
/* 800C4EB0 000C1F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C4EB4 000C1F94  7C 08 02 A6 */	mflr r0
/* 800C4EB8 000C1F98  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C4EBC 000C1F9C  48 12 74 FD */	bl cos
/* 800C4EC0 000C1FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C4EC4 000C1FA4  FC 20 08 18 */	frsp f1, f1
/* 800C4EC8 000C1FA8  7C 08 03 A6 */	mtlr r0
/* 800C4ECC 000C1FAC  38 21 00 10 */	addi r1, r1, 0x10
/* 800C4ED0 000C1FB0  4E 80 00 20 */	blr
.endfn cosf__3stdFf

# itan(float)
.fn itan__Ff, global
/* 800C4ED4 000C1FB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C4ED8 000C1FB8  7C 08 02 A6 */	mflr r0
/* 800C4EDC 000C1FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C4EE0 000C1FC0  48 00 00 15 */	bl tanf__3stdFf
/* 800C4EE4 000C1FC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C4EE8 000C1FC8  7C 08 03 A6 */	mtlr r0
/* 800C4EEC 000C1FCC  38 21 00 10 */	addi r1, r1, 0x10
/* 800C4EF0 000C1FD0  4E 80 00 20 */	blr
.endfn itan__Ff

# std::tanf(float)
.fn tanf__3stdFf, weak
/* 800C4EF4 000C1FD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C4EF8 000C1FD8  7C 08 02 A6 */	mflr r0
/* 800C4EFC 000C1FDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C4F00 000C1FE0  48 12 7A F9 */	bl tan
/* 800C4F04 000C1FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C4F08 000C1FE8  FC 20 08 18 */	frsp f1, f1
/* 800C4F0C 000C1FEC  7C 08 03 A6 */	mtlr r0
/* 800C4F10 000C1FF0  38 21 00 10 */	addi r1, r1, 0x10
/* 800C4F14 000C1FF4  4E 80 00 20 */	blr
.endfn tanf__3stdFf
