.include "macros.inc"
.file "abort_exit.c"

# 0x801DCD7C - 0x801DCF08
.text
.balign 4

.fn exit, global
/* 801DCD7C 001D9E5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DCD80 001D9E60  7C 08 02 A6 */	mflr r0
/* 801DCD84 001D9E64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DCD88 001D9E68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DCD8C 001D9E6C  80 0D 9D 80 */	lwz r0, __aborting@sda21(r13)
/* 801DCD90 001D9E70  2C 00 00 00 */	cmpwi r0, 0x0
/* 801DCD94 001D9E74  40 82 00 5C */	bne .L_801DCDF0
/* 801DCD98 001D9E78  38 60 00 00 */	li r3, 0x0
/* 801DCD9C 001D9E7C  48 00 58 65 */	bl __begin_critical_region
/* 801DCDA0 001D9E80  38 60 00 00 */	li r3, 0x0
/* 801DCDA4 001D9E84  48 00 58 59 */	bl __end_critical_region
/* 801DCDA8 001D9E88  48 01 00 7D */	bl __destroy_global_chain
/* 801DCDAC 001D9E8C  3C 60 80 25 */	lis r3, _dtors@ha
/* 801DCDB0 001D9E90  38 03 1D 40 */	addi r0, r3, _dtors@l
/* 801DCDB4 001D9E94  7C 1F 03 78 */	mr r31, r0
/* 801DCDB8 001D9E98  48 00 00 10 */	b .L_801DCDC8
.L_801DCDBC:
/* 801DCDBC 001D9E9C  7D 89 03 A6 */	mtctr r12
/* 801DCDC0 001D9EA0  4E 80 04 21 */	bctrl
/* 801DCDC4 001D9EA4  3B FF 00 04 */	addi r31, r31, 0x4
.L_801DCDC8:
/* 801DCDC8 001D9EA8  81 9F 00 00 */	lwz r12, 0x0(r31)
/* 801DCDCC 001D9EAC  28 0C 00 00 */	cmplwi r12, 0x0
/* 801DCDD0 001D9EB0  40 82 FF EC */	bne .L_801DCDBC
/* 801DCDD4 001D9EB4  81 8D 9D 88 */	lwz r12, __stdio_exit@sda21(r13)
/* 801DCDD8 001D9EB8  28 0C 00 00 */	cmplwi r12, 0x0
/* 801DCDDC 001D9EBC  41 82 00 14 */	beq .L_801DCDF0
/* 801DCDE0 001D9EC0  7D 89 03 A6 */	mtctr r12
/* 801DCDE4 001D9EC4  4E 80 04 21 */	bctrl
/* 801DCDE8 001D9EC8  38 00 00 00 */	li r0, 0x0
/* 801DCDEC 001D9ECC  90 0D 9D 88 */	stw r0, __stdio_exit@sda21(r13)
.L_801DCDF0:
/* 801DCDF0 001D9ED0  38 60 00 00 */	li r3, 0x0
/* 801DCDF4 001D9ED4  48 00 58 0D */	bl __begin_critical_region
/* 801DCDF8 001D9ED8  3C 60 80 38 */	lis r3, __atexit_funcs@ha
/* 801DCDFC 001D9EDC  3B E3 EE 68 */	addi r31, r3, __atexit_funcs@l
/* 801DCE00 001D9EE0  48 00 00 20 */	b .L_801DCE20
.L_801DCE04:
/* 801DCE04 001D9EE4  80 6D 9D 84 */	lwz r3, __atexit_curr_func@sda21(r13)
/* 801DCE08 001D9EE8  38 63 FF FF */	addi r3, r3, -0x1
/* 801DCE0C 001D9EEC  54 60 10 3A */	slwi r0, r3, 2
/* 801DCE10 001D9EF0  90 6D 9D 84 */	stw r3, __atexit_curr_func@sda21(r13)
/* 801DCE14 001D9EF4  7D 9F 00 2E */	lwzx r12, r31, r0
/* 801DCE18 001D9EF8  7D 89 03 A6 */	mtctr r12
/* 801DCE1C 001D9EFC  4E 80 04 21 */	bctrl
.L_801DCE20:
/* 801DCE20 001D9F00  80 0D 9D 84 */	lwz r0, __atexit_curr_func@sda21(r13)
/* 801DCE24 001D9F04  2C 00 00 00 */	cmpwi r0, 0x0
/* 801DCE28 001D9F08  41 81 FF DC */	bgt .L_801DCE04
/* 801DCE2C 001D9F0C  38 60 00 00 */	li r3, 0x0
/* 801DCE30 001D9F10  48 00 57 CD */	bl __end_critical_region
/* 801DCE34 001D9F14  48 00 57 D1 */	bl __kill_critical_regions
/* 801DCE38 001D9F18  81 8D 9D 8C */	lwz r12, __console_exit@sda21(r13)
/* 801DCE3C 001D9F1C  28 0C 00 00 */	cmplwi r12, 0x0
/* 801DCE40 001D9F20  41 82 00 14 */	beq .L_801DCE54
/* 801DCE44 001D9F24  7D 89 03 A6 */	mtctr r12
/* 801DCE48 001D9F28  4E 80 04 21 */	bctrl
/* 801DCE4C 001D9F2C  38 00 00 00 */	li r0, 0x0
/* 801DCE50 001D9F30  90 0D 9D 8C */	stw r0, __console_exit@sda21(r13)
.L_801DCE54:
/* 801DCE54 001D9F34  4B FF AB ED */	bl _ExitProcess
/* 801DCE58 001D9F38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DCE5C 001D9F3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DCE60 001D9F40  7C 08 03 A6 */	mtlr r0
/* 801DCE64 001D9F44  38 21 00 10 */	addi r1, r1, 0x10
/* 801DCE68 001D9F48  4E 80 00 20 */	blr
.endfn exit

.fn abort, global
/* 801DCE6C 001D9F4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DCE70 001D9F50  7C 08 02 A6 */	mflr r0
/* 801DCE74 001D9F54  38 60 00 01 */	li r3, 0x1
/* 801DCE78 001D9F58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DCE7C 001D9F5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DCE80 001D9F60  48 00 A3 C9 */	bl raise
/* 801DCE84 001D9F64  38 00 00 01 */	li r0, 0x1
/* 801DCE88 001D9F68  38 60 00 00 */	li r3, 0x0
/* 801DCE8C 001D9F6C  90 0D 9D 80 */	stw r0, __aborting@sda21(r13)
/* 801DCE90 001D9F70  48 00 57 71 */	bl __begin_critical_region
/* 801DCE94 001D9F74  3C 60 80 38 */	lis r3, __atexit_funcs@ha
/* 801DCE98 001D9F78  3B E3 EE 68 */	addi r31, r3, __atexit_funcs@l
/* 801DCE9C 001D9F7C  48 00 00 20 */	b .L_801DCEBC
.L_801DCEA0:
/* 801DCEA0 001D9F80  80 6D 9D 84 */	lwz r3, __atexit_curr_func@sda21(r13)
/* 801DCEA4 001D9F84  38 63 FF FF */	addi r3, r3, -0x1
/* 801DCEA8 001D9F88  54 60 10 3A */	slwi r0, r3, 2
/* 801DCEAC 001D9F8C  90 6D 9D 84 */	stw r3, __atexit_curr_func@sda21(r13)
/* 801DCEB0 001D9F90  7D 9F 00 2E */	lwzx r12, r31, r0
/* 801DCEB4 001D9F94  7D 89 03 A6 */	mtctr r12
/* 801DCEB8 001D9F98  4E 80 04 21 */	bctrl
.L_801DCEBC:
/* 801DCEBC 001D9F9C  80 0D 9D 84 */	lwz r0, __atexit_curr_func@sda21(r13)
/* 801DCEC0 001D9FA0  2C 00 00 00 */	cmpwi r0, 0x0
/* 801DCEC4 001D9FA4  41 81 FF DC */	bgt .L_801DCEA0
/* 801DCEC8 001D9FA8  38 60 00 00 */	li r3, 0x0
/* 801DCECC 001D9FAC  48 00 57 31 */	bl __end_critical_region
/* 801DCED0 001D9FB0  48 00 57 35 */	bl __kill_critical_regions
/* 801DCED4 001D9FB4  81 8D 9D 8C */	lwz r12, __console_exit@sda21(r13)
/* 801DCED8 001D9FB8  28 0C 00 00 */	cmplwi r12, 0x0
/* 801DCEDC 001D9FBC  41 82 00 14 */	beq .L_801DCEF0
/* 801DCEE0 001D9FC0  7D 89 03 A6 */	mtctr r12
/* 801DCEE4 001D9FC4  4E 80 04 21 */	bctrl
/* 801DCEE8 001D9FC8  38 00 00 00 */	li r0, 0x0
/* 801DCEEC 001D9FCC  90 0D 9D 8C */	stw r0, __console_exit@sda21(r13)
.L_801DCEF0:
/* 801DCEF0 001D9FD0  4B FF AB 51 */	bl _ExitProcess
/* 801DCEF4 001D9FD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DCEF8 001D9FD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DCEFC 001D9FDC  7C 08 03 A6 */	mtlr r0
/* 801DCF00 001D9FE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801DCF04 001D9FE4  4E 80 00 20 */	blr
.endfn abort

# 0x8037EE68 - 0x8037EF68
.section .bss, "wa", @nobits
.balign 8

.obj __atexit_funcs, global
	.skip 0x100
.endobj __atexit_funcs

# 0x803CC680 - 0x803CC690
.section .sbss, "wa", @nobits
.balign 8

.obj __aborting, global
	.skip 0x4
.endobj __aborting

.obj __atexit_curr_func, global
	.skip 0x4
.endobj __atexit_curr_func

.obj __stdio_exit, global
	.skip 0x4
.endobj __stdio_exit

.obj __console_exit, global
	.skip 0x4
.endobj __console_exit
