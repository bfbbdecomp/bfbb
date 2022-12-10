.include "macros.inc"
.file "AXProf.c"

# 0x801BAC28 - 0x801BAC70
.text
.balign 4

.fn __AXGetCurrentProfile, global
/* 801BAC28 001B7D08  80 0D 9A 84 */	lwz r0, __AXProfileInitialized@sda21(r13)
/* 801BAC2C 001B7D0C  28 00 00 00 */	cmplwi r0, 0x0
/* 801BAC30 001B7D10  41 82 00 38 */	beq .L_801BAC68
/* 801BAC34 001B7D14  80 6D 9A 80 */	lwz r3, __AXCurrentProfile@sda21(r13)
/* 801BAC38 001B7D18  80 8D 9A 7C */	lwz r4, __AXMaxProfiles@sda21(r13)
/* 801BAC3C 001B7D1C  38 03 00 01 */	addi r0, r3, 0x1
/* 801BAC40 001B7D20  80 CD 9A 78 */	lwz r6, __AXProfile@sda21(r13)
/* 801BAC44 001B7D24  90 0D 9A 80 */	stw r0, __AXCurrentProfile@sda21(r13)
/* 801BAC48 001B7D28  1C 03 00 38 */	mulli r0, r3, 0x38
/* 801BAC4C 001B7D2C  80 AD 9A 80 */	lwz r5, __AXCurrentProfile@sda21(r13)
/* 801BAC50 001B7D30  7C 66 02 14 */	add r3, r6, r0
/* 801BAC54 001B7D34  7C 05 23 96 */	divwu r0, r5, r4
/* 801BAC58 001B7D38  7C 00 21 D6 */	mullw r0, r0, r4
/* 801BAC5C 001B7D3C  7C 00 28 50 */	subf r0, r0, r5
/* 801BAC60 001B7D40  90 0D 9A 80 */	stw r0, __AXCurrentProfile@sda21(r13)
/* 801BAC64 001B7D44  4E 80 00 20 */	blr
.L_801BAC68:
/* 801BAC68 001B7D48  38 60 00 00 */	li r3, 0x0
/* 801BAC6C 001B7D4C  4E 80 00 20 */	blr
.endfn __AXGetCurrentProfile

# 0x803CC378 - 0x803CC388
.section .sbss, "wa", @nobits
.balign 8

.obj __AXProfile, local
	.skip 0x4
.endobj __AXProfile

.obj __AXMaxProfiles, local
	.skip 0x4
.endobj __AXMaxProfiles

.obj __AXCurrentProfile, local
	.skip 0x4
.endobj __AXCurrentProfile

.obj __AXProfileInitialized, local
	.skip 0x4
.endobj __AXProfileInitialized
