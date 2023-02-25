.include "macros.inc"
.file "basector.c"

# 0x8021C0B4 - 0x8021C190
.text
.balign 4

.fn _rpSectorOpen, global
/* 8021C0B4 00219194  38 AD 9E D8 */	addi r5, r13, sectorModule@sda21
/* 8021C0B8 00219198  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8021C0BC 0021919C  38 04 00 01 */	addi r0, r4, 0x1
/* 8021C0C0 002191A0  90 05 00 04 */	stw r0, 0x4(r5)
/* 8021C0C4 002191A4  4E 80 00 20 */	blr
.endfn _rpSectorOpen

.fn _rpSectorClose, global
/* 8021C0C8 002191A8  38 AD 9E D8 */	addi r5, r13, sectorModule@sda21
/* 8021C0CC 002191AC  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8021C0D0 002191B0  38 04 FF FF */	addi r0, r4, -0x1
/* 8021C0D4 002191B4  90 05 00 04 */	stw r0, 0x4(r5)
/* 8021C0D8 002191B8  4E 80 00 20 */	blr
.endfn _rpSectorClose

.fn RpWorldSectorGetNumVertices, global
/* 8021C0DC 002191BC  A0 63 00 8A */	lhz r3, 0x8a(r3)
/* 8021C0E0 002191C0  4E 80 00 20 */	blr
.endfn RpWorldSectorGetNumVertices

.fn RpWorldSectorRender, global
/* 8021C0E4 002191C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021C0E8 002191C8  7C 08 02 A6 */	mflr r0
/* 8021C0EC 002191CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021C0F0 002191D0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021C0F4 002191D4  80 84 00 04 */	lwz r4, 0x4(r4)
/* 8021C0F8 002191D8  81 84 00 68 */	lwz r12, 0x68(r4)
/* 8021C0FC 002191DC  7D 89 03 A6 */	mtctr r12
/* 8021C100 002191E0  4E 80 04 21 */	bctrl
/* 8021C104 002191E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021C108 002191E8  7C 08 03 A6 */	mtlr r0
/* 8021C10C 002191EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8021C110 002191F0  4E 80 00 20 */	blr
.endfn RpWorldSectorRender

.fn RpWorldSectorRegisterPlugin, global
/* 8021C114 002191F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021C118 002191F8  7C 08 02 A6 */	mflr r0
/* 8021C11C 002191FC  7C E8 3B 78 */	mr r8, r7
/* 8021C120 00219200  7C C7 33 78 */	mr r7, r6
/* 8021C124 00219204  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021C128 00219208  7C 80 23 78 */	mr r0, r4
/* 8021C12C 0021920C  7C A6 2B 78 */	mr r6, r5
/* 8021C130 00219210  3D 20 80 2B */	lis r9, sectorTKList@ha
/* 8021C134 00219214  7C 64 1B 78 */	mr r4, r3
/* 8021C138 00219218  7C 05 03 78 */	mr r5, r0
/* 8021C13C 0021921C  38 69 77 D0 */	addi r3, r9, sectorTKList@l
/* 8021C140 00219220  48 01 75 19 */	bl _rwPluginRegistryAddPlugin
/* 8021C144 00219224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021C148 00219228  7C 08 03 A6 */	mtlr r0
/* 8021C14C 0021922C  38 21 00 10 */	addi r1, r1, 0x10
/* 8021C150 00219230  4E 80 00 20 */	blr
.endfn RpWorldSectorRegisterPlugin

.fn RpWorldSectorRegisterPluginStream, global
/* 8021C154 00219234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021C158 00219238  7C 08 02 A6 */	mflr r0
/* 8021C15C 0021923C  7C C7 33 78 */	mr r7, r6
/* 8021C160 00219240  7C A6 2B 78 */	mr r6, r5
/* 8021C164 00219244  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021C168 00219248  3D 00 80 2B */	lis r8, sectorTKList@ha
/* 8021C16C 0021924C  7C 60 1B 78 */	mr r0, r3
/* 8021C170 00219250  7C 85 23 78 */	mr r5, r4
/* 8021C174 00219254  38 68 77 D0 */	addi r3, r8, sectorTKList@l
/* 8021C178 00219258  7C 04 03 78 */	mr r4, r0
/* 8021C17C 0021925C  48 01 6C FD */	bl _rwPluginRegistryAddPluginStream
/* 8021C180 00219260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021C184 00219264  7C 08 03 A6 */	mtlr r0
/* 8021C188 00219268  38 21 00 10 */	addi r1, r1, 0x10
/* 8021C18C 0021926C  4E 80 00 20 */	blr
.endfn RpWorldSectorRegisterPluginStream

# 0x802B77D0 - 0x802B77E8
.data
.balign 8

.obj sectorTKList, global
	.4byte 0x00000090
	.4byte 0x00000090
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj sectorTKList

# 0x803CC7D8 - 0x803CC7E0
.section .sbss, "wa", @nobits
.balign 8

.obj sectorModule, local
	.skip 0x8
.endobj sectorModule
